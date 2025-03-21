#include <stdio.h>
#include <stdlib.h>

struct n{
	int x;
	struct n * next;
};
typedef struct n node;

void bastir(node * r){
	while(r != NULL){
		printf("%d\t", r -> x);
		r = r -> next;
	}
}

void ekle(node*r, int x){
	while(r -> next != NULL){
		r = r -> next;
	}
		r -> next = (node*)malloc(sizeof(node));
		r -> next -> x = x;
		r -> next -> next = NULL; 
}

node*siraliekleme(node*r, int x){
	
	//linked list boþsa
	if(r == NULL){
		r =  (node *)malloc(sizeof(node));
		r -> next = NULL;
		r -> x = x;
		return r;
	}
	
	//linked list boþ deðilse ve tek eleman varsa
	if(r ->x > x){//ilk elemandan küçük durumu
		//root deðiþiyor
			node * temp = (node*)malloc(sizeof(node));
			temp -> x = x;
			temp -> next = r;
			return temp;
	}
	
	node*iter = r;
	while(iter ->next != NULL && iter ->next->x <x){
		iter = iter -> next;
		}
	
	node*temp = (node *)malloc(sizeof(node));
	temp -> next = iter -> next;
	iter -> next = temp;
	temp ->x = x;
	return r;
}

int main() {
	
	node * root;
	root = NULL;
	root = siraliekleme(root, 400);
	root = siraliekleme(root, 65);
	root = siraliekleme(root, 7);
	root = siraliekleme(root, 480);
	root = siraliekleme(root, 80);
	
	bastir(root);
	
	
}
