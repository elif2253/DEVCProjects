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
	printf("\n");
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
	
	if(r == NULL){
		r =  (node *)malloc(sizeof(node));
		r -> next = NULL;
		r -> x = x;
		return r;
	}
	
	if(r ->x > x){
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
node * sil(node*r, int x){
	node* temp;
	node * iter = r;
	if(r -> x == x){
	    	temp = r;
	    	r = r ->next;
	    	free(temp);
	    	return r;
		}
	while(iter ->next !=NULL && iter ->next ->x != x){
	    iter = iter ->next;
	    }
	    
	if(iter -> next == NULL){
		printf("sayi bulunamadi:\t");
		return r;
	}
	    temp = iter ->next;
	    iter -> next = iter ->next ->next;
	    free(temp);
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
	
	root = sil(root,65);
	bastir(root);
	root = sil(root, 24);
	bastir(root);
	root = sil(root, 7);
	bastir(root);
	
	
}
