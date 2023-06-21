#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "CursorBased.h"


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	VirtualHeap myHeap = newVirtualHeap();
	List list = -1;
	List newList = -1;

	
	vizualizeSpace (myHeap);
	insertFront (&myHeap, &list, newStudent (17100968, "Allen", 'M', "BSCS"));
	printf("\n\n");
	vizualizeSpace (myHeap);
	insertFront (&myHeap, &list, newStudent (10101010, "Louie", 'M', "BSCS"));
	insertFront (&myHeap, &newList, newStudent (4568798, "Dano", 'M', "BSCS"));
	printf("\n\n");
	removeStudent (&myHeap, &list, "Louie");
	printf("\n\n");
	vizualizeSpace (myHeap);
	printf("\n\n");
	insertFront (&myHeap, &newList, newStudent (10101011, "Goodshit", 'M', "BSCS"));
	vizualizeSpace (myHeap);
	printf("\nValue of head of list:%d", list);
	return 0;
}
