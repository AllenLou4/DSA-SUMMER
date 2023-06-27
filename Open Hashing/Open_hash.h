#ifndef OPEN_HASH_H
#define OPEN_HASH

#include<stdlib.h>
#include<stdbool.h>
#include<string.h>


typedef struct{
	
	char firstName[15];
	char lastName[15];
	char middleName[15];
	
}Name;

typedef struct {
	
	int date;
	int month;
	int year;	
	
}MyDate;

typedef struct{
	
	char studID [8];
	Name studName;
	char sex;
	MyDate birthdate;
	char program[5];
	int year;
	
}Student;

typedef struct node {
	
	Student students;
	struct node link;
	
}Stype;


typedef struct {
	Stype *arr;
	int count;
	int max;
}Dictionary;

int hash (Student stud);
Student dataRet (int key, Dictionary Dict );
bool deleteData (int key, Dictionary Dict);
void insertData (int key , Dictionary *Dict, Student stud);
void initDict(Dictionary *d, int size);


#endif











