#include <stdio.h>
#include <stdlib.h>
#include "BST.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	BSTPtr L;
	
	initBST (&L);
	Product item1;
	Product item2;
	Product item3;
	Product item4;
	
	item1 = createProduct (5, "kent", 1, 23.0);
	item2 = createProduct (7, "mastah", 1, 23.0);
	item3 = createProduct (3, "hello", 1, 23.0);
	L = addElement(L, item1);
	L = addElement(L, item2);
	L = addElement(L, item3);
	printf("%d", L->data.prodID);
	
		
	return 0;
}
