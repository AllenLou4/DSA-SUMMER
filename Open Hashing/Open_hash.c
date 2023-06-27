#include "Open_hash.h"


void initDict(Dictionary *d, int size){
	
	int i;
	d->arr = malloc (sizeof(Stype)*size);
	
	if (d->arr != NULL){
		
		for (i = 0; i < size; i++){
			d->arr[i] = NULL;
		}
		d->max = size;
		d->count = 0;
	}

}

int hash (Student stud, Dictionary d){
	
	int numHash;
	
	return 	numHash = stud.studName.lastName[0] % d.max;
}

void insertData (int key , Dictionary *Dict, Student stud){
	
	Stype *newNode;	
	newNode = malloc (sizeof(Stype));
	*newNode = stud;
	
	
	
	if (Dict->arr[key] == NULL){
		
		Dict->arr[key] = newNode;
		
	}else{
		
	}
	
}
Student dataRet (int key, Dictionary Dict );
bool deleteData (int key, Dictionary Dict);


