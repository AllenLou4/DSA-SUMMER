#include<stdio.h>
#include "SETS.h"

Set newSet (){
	Set A;
	int i;
	
	for(i= 0 ; i< MAX ; i++){
		A.elems[i] = false;
	}
	A.count = 0;
	
	return A;	
}
bool addElement (Set *s, int item){
	
	if (s->elems[item] == false){
		s->elems[item] = true;
		s->count++;
	}
}
bool removeElement (Set *s, int item){
	if(s->elems[item] == true){
		s->elems[item] = false;
		s->count--;
	}
}
void displaySet (Set s){
	int i;
	
	for (i = 0; i < MAX; i++){
		
	printf(" %2d |", i);
	
	}
	printf("\n");
	for (i = 0; i < MAX; i++){
		
		printf(" %2d |", s.elems[i]);
	}
}
Set unionSet (Set a, Set b){
	Set newSet1;
	newSet1 = newSet();
	int i;
	
	for(i = 0; i <MAX ; i++){
		if(a.elems[i] == true || b.elems[i] == true) {
			newSet1.elems [i] = true;
			newSet1.count++;
		}else{
			newSet1.elems[i]=false;
		} 
	}
	
	return newSet1;
}
Set intersectionSet (Set a, Set b){
	Set newSet1;
	newSet1 = newSet();
	int i;
	
	for(i = 0; i<MAX; i++){
		
		if(a.elems[i] == true && b.elems[i] == true){
			newSet1.elems[i] = true;
			newSet1.count++;
		}else{
			newSet1.elems[i] = false;
		}
	} 
}


Set differenceSet (Set a, Set b){
	Set newSet1;
	newSet1 = newSet();
	int i;
	
	for (i = 0 ; i< MAX; i++){
		
		if (a.elems[i] == true && b.elems[i]==false){
			newSet1.elems[i] = true;
			newSet1.count++;
		}
	}
	return newSet1;
	
}
Set symmetricDiffSet (Set a, Set b){
	
	Set newSet1, newSet2;
	newSet1 = newSet();
	newSet2 = newSet();
	
	newSet1 = differenceSet (a, b);
	newSet2 = differenceSet (b, a);
	return unionSet (newSet1, newSet2);
	
}

int cardinality (Set s){
	return s.count;
}

