

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
	int data;
	struct Node *next;
}node;

node* createList() {
	node *head = (node*)malloc(sizeof(node));
	node *temp = head;
	head->next = NULL;
	int data;
	scanf("%d", &data);
	while (data)
	{	
		node *cur= (node*)malloc(sizeof(node));
		cur->next = NULL;
		cur->data = data;
		temp->next = cur;
		temp = cur;
		scanf("%d", &data);

	}

	return head;
}

void main(int argc, char* argv[]) {

	node *head=createList();
	node *p = head->next;
	while (p)
	{
		printf("%d\n", p->data);
		p = p->next;
	}

	system("pause");

}
