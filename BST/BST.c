#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include"BST.h"

//Add element to the BST base on the product ID
BST *addElement(BST *list, Product item)// using recursive method
{	
	if(list == NULL){
		BSTPtr temp;
		
		temp = malloc (sizeof(BST));
		temp->data =item;
		temp->left = NULL;
		temp->right = NULL;
		
		list = temp;
		
	}else{
		if(list->data.prodID > item.prodID){
		
			return addElement(list->left, item);
		
				}else if (list->data.prodID < item.prodID){
		
						return addElement(list->right, item);
		
				}
	
	}
	

	
}
void insertBST(BSTPtr *list, Product item); // using iterative method
BST *deleteElement (BST *list, int prodID); // using recursive method 
//Delete element in the BST base on the product ID

void removeElement(BST **list, int prodID); // using iterative method 

//Display BST all in recursive method
void inorderBST (BST *list)
{
	if (list != NULL){
		inorderBST (list->left);
		displayProduct(list->data);
		inorderBST (list->right);
	}
}
void preorderBST (BST *list){
	if (list != NULL){
		displayProduct(list->data);
		inorderBST (list->left);
		inorderBST (list->right);
	}
}
void postorderBST (BST *list){
	if (list != NULL){
		inorderBST (list->left);
		inorderBST (list->right);
		displayProduct(list->data);
	}
}

//Other functions

BST *newBST ()
{
	BST *newBST;
	return newBST;
}

void initBST (BST **list){
	*list = NULL;
}

bool isEmpty (BST *list){
	
	return (list == NULL) ? true : false;
	
}
Product createProduct (int id, char *name, int qty, float price)
{
	Product p;
	
	p.prodID = id;
	strcpy(p.prodName, name);
	p.prodQty = qty;
	p.prodPrice = price;
	
}
// use the following format {<id> | <prodName>} replacing the angular brackets with data
void displayProduct(Product p)
{
	printf("<id: %d> | <prodName: %s>", p.prodID,p.prodName);	
}
BST *max(BST *list);
BST *min (BST *list);
bool isMember (BST *list, int prodID); 
