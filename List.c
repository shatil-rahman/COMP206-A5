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
	struct NODE *new = (struct NODE *)malloc(sizeof(struct NODE));

	if(new == NULL) return FALSE;

	new->data = value;
	if(head == NULL){
		head = new;
		return TRUE;
	}
	else{
		new->next = head;
		head = new;
		return TRUE;

	}



}

void prettyPrint(){
	struct NODE *temp = head;
	while(temp!= NULL){
		printf("%d,", temp->data);
		temp = head->next;
	}
	printf("\n");
}




