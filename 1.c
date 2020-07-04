#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
	int data;
	struct Node *next;
}node;

node* createList() {
	node *head = (node*)malloc(sizeof(node));
	head->next = NULL;
	int data;
	scanf("%d", &data);
	while (data)
	{	
		node *cur= (node*)malloc(sizeof(node));
		cur->next = head->next;
		cur->data = data;
		head->next = cur;
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
