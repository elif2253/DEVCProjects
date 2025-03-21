#include<stdio.h>
#include<stdlib.h>

int main(void){
	int i, j;
	int sum;
	int matris[3][5];
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
		scanf("%d", &matris[i][j]);
       }
	}
	
	for(i=0; i<3; i++){
		for(j=0; j<5; j++){
			printf("%d ", matris[i][j]);
		}
		printf("\n");
	}
	
	for (j=0; j<5; j++){
		for(i=0; i<3; i++){
			sum +=matris[i][j];
		}
		printf("%d ",sum);
		sum = 0;
	}
	
	
	
	
	
	return 0;
}
