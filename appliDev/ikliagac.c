#include <stdio.h>
#include <stdlib.h>

struct n{
	int data;
	struct n * sol;
	struct n * sag;
};

typedef struct n node;

node *ekle(node *agac, int x){
	if(agac == NULL){
		node *root = (node*)malloc(sizeof(node));
		root -> sol = NULL;
		root -> sag = NULL;
		root -> data = x;
		return root;
	}
	node *iter = agac;
	if(agac ->data < x){
		agac ->sag = ekle(agac -> sag, x);
		return agac;
		}
	agac -> sol = ekle(agac -> sol, x);	
	return agac;
	}	

void dolas(node *agac){
	if(agac == NULL)
	   return agac;
	dolas(agac ->sol);
	printf("%d\t", agac ->data);
	dolas(agac ->sag);   
}

int bul(node *agac, int aranan){
	if(agac == NULL)
	   return -1;
	if(agac ->data == aranan)
	   return 1;
	if(bul(agac ->sag, aranan) == 1)
	   return 1;
	if(bul(agac ->sol, aranan) == 1)
	   return 1;
	return -1;            
}

int max(node *agac){
	while(agac ->sag != NULL)
	    agac = agac -> sag;
	return agac ->data;    
}

int min(node *agac){
	while(agac ->sol != NULL)
	    agac = agac -> sol;
	return agac ->data;    
}

node *sil(node *agac, int x){
	if(agac == NULL)
	   return NULL;
	if(agac ->data == x){
		if(agac ->sol == NULL && agac ->sag == NULL)
		    return NULL;
		if(agac ->sag != NULL){
			agac ->data = min(agac ->sag);
			agac ->sag = sil(agac ->sag, max(agac ->sol));
			return agac;
		} 
		agac -> data = max(agac ->sol);
		agac -> sol = sil(agac ->sol, max(agac ->sol));
		return agac;   
	}
	if(agac ->data < x){
		agac ->sag= sil(agac ->sag, x);
		return agac;
	}   
	agac ->sol = sil(agac ->sol, x);
	return agac;
}
int main(){
	node *agac = NULL;
	agac = ekle(agac, 12);
	agac = ekle(agac, 213);
	agac = ekle(agac, 28);
	agac = ekle(agac, 27);
	agac = ekle(agac, 56);
	agac = ekle(agac, 24);
	agac = ekle(agac, 18);
	agac = ekle(agac, 200);
	agac = ekle(agac, 190);
	dolas(agac);
	printf("\nArama sonucu: %d \n", bul(agac,200 ));
	printf("Max value: %d \nMin value: %d\n", max(agac), min(agac));
	agac = sil(agac, 190);
	dolas(agac);
}




