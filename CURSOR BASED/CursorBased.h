#ifndef CURSOR_BASED_H
#define CURSOR_BASED_H


#define MAX 10

typedef char String [20];
typedef int List;


typedef struct {
	int studID;
	String studName;
	char sex;
	String program;
} Student;

typedef struct {
	Student Elem;
	int next;
} Stype;

typedef struct {
	
	Stype elems[MAX];
	int avail;
}VirtualHeap;


Student newStudent (int studID,	String studName,char sex, String program);

VirtualHeap newVirtualHeap ();
int allocSpace(VirtualHeap *vh);
void insertFront (VirtualHeap *vh, List *list, Student s);
void displayList (VirtualHeap vh, List list);
void vizualizeSpace (VirtualHeap vh);
void deallocSpace (VirtualHeap *vh, int index);
Student removeStudent (VirtualHeap *vh, List *L, String keyword);

#endif
