#include<stdio.h>

int main()
{
	int cift=0, tek=0, i, sayi;
	float oran;
	
	printf("Oranlanacak sayilari giriniz: \n");
	
	for(i=1; i<=20; i++){
	scanf("%d", &sayi);
	
	 if(sayi%2==0)
	  cift = cift+sayi;
	else 
	  tek = tek+sayi;
	}
	oran = cift/tek;
	printf("Ciftlerin teklere orani: %.2f", oran);
	
	
	
	return 0;
}
