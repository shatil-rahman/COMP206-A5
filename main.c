//Name: Shatil Rahman
//ID: 260606042

#include <stdio.h>


int main(){
	newList();

	while(1){
		int n;
		int success;

		printf("Please enter a positive integer to add to the front of your list:\n");

		scanf("%d", &n);
		if(n<=0){
			prettyPrint();
			printf("Done, exiting...\n");
			break;
		}

		success = addNode(n);
		if(!success){ 										//if memory allocation failed
			printf("Node creation failed, exiting...\n");
			return 0;
		}



	}

	return 0;
}