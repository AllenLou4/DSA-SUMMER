#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "CursorBased.h"
#define MAX 10
Student newStudent (int studID,	String studName,char sex, String program){

	Student s;
	
	s.studID = studID;
	strcpy(s.studName, studName);
	s.sex = sex;
	strcpy(s.program, program);
	
	return s;
}

VirtualHeap newVirtualHeap (){
	
	VirtualHeap vh;
	int i;
	
	for (i=0; i < MAX; ++i){
		vh.elems[i].Elem = newStudent (0, "",'x',"");
		vh.elems[i].next = i-1;
	}
	vh.avail = MAX -1;
	
	
	return vh;
	
}
int allocSpace(VirtualHeap *vh){
	
	int retVal = vh->avail;
	
	if (retVal != -1){
		vh->avail = vh->elems[vh->avail].next;	
	}
	
	return retVal;
}
void insertFront (VirtualHeap *vh, List *list, Student s){
	
	List temp = allocSpace(vh);
	
	if (temp != -1 ){
		vh->elems[temp].Elem = s;	
		vh->elems[temp].next = *list;
		*list = temp;
	}
}
void displayList (VirtualHeap vh, List list){

}
void vizualizeSpace (VirtualHeap vh){
	int i; 
	printf("%5s | %30s | %s\n","INDEX","ELEMENTS","NEXT");
	printf("--------------------------------------------------\n");
	for (i= 0 ; i < MAX ; ++i){
		printf("%5d | ",i);
		if (vh.elems[i].Elem.studID== 0){
			printf("%30s | ", "Empty");
		}else{
			printf("%4d - %19s |", vh.elems[i].Elem.studID, vh.elems[i].Elem.studName);
		}
		printf("%d\n", vh.elems[i].next);
	}
	printf("---------------------------------------------\n");
	printf("AVAILABLE: %d",vh.avail);
}

void deallocSpace (VirtualHeap *vh, int index){
	
	if (index != -1 && index < MAX){
		vh->elems[index].next = vh->avail;
		vh->elems[index].Elem = newStudent (0, "",' ',"");
		vh->avail = index;
	}
}
Student removeStudent (VirtualHeap *vh, List *L, String keyword){
	
	List trav;
	Student temp;
	
	for (trav = *L; trav != -1 && strcmp(keyword, vh->elems[trav].Elem.studName)!= 0; trav = vh->elems[trav].next){}
	if (trav != -1){
		if (trav == *L){
			temp = vh->elems[trav].Elem;
			*L = vh->elems[trav].next;
			deallocSpace(vh, trav);
			
		}else{
			temp = vh -> elems[trav].Elem;
			vh->elems[trav].next = vh->elems[vh->elems[trav].next].next;
		
			deallocSpace (vh, trav);
			
		}
	return temp;
	}else{
		printf("Keyword not found");
	}
	
}

