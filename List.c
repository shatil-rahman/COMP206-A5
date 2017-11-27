// Name: Shatil Rahman
// ID: 260606042


#include <stdio.h>
#include <stdlib.h>
#include "list.h"

#define TRUE 1
#define FALSE 0

static struct NODE *head;

void newList(){
	head = NULL;
}

int addNode(int value){
	struct NODE *temp;
	temp = (struct NODE *)malloc(sizeof(struct NODE));

	if(temp == NULL) return FALSE; // checking for failed allocation

	if(head == NULL){ //if this is the first node in the list to be added
		head = temp;
		head->data = value;
		return TRUE;
	}

	else{

		temp->data = head->data;    // stores the current head's info in the temp node structure
		temp->next = head->next;
		
		head->data = value;			// sets the head to have the new value, and points to the previous head
		head->next = temp;

		return TRUE;
	}

}

void prettyPrint(){
	struct NODE *temp = head;
	while(temp!= NULL){
		printf("%d,", temp->data);
		temp = temp->next;
	}
	printf("\n");
}




