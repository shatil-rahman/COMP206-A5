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

	if(temp == NULL) return FALSE;

	if(head == NULL){
		head = temp;
		head->data = value;
		return TRUE;
	}

	else{

		temp->data = head->data;
		temp->next = head->next;
		
		head->data = value;
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




