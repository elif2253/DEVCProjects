#include<stdio.h>

int main(void)
{
	int sayi,i;
	int dizi[100];
	
	printf("Eleman sayisini giriniz: ");
	scanf("%d",&sayi);
	
	for(i=0;i<sayi;i++){
		printf("Dizinin %d.degerini giriniz: ",i+1);
		scanf("%d",&dizi[i]);
	}
printf("\n");
    for(i=0;i<sayi;i++){
    	printf("%d ", dizi[i]);
	}






	
}
