#include<stdio.h>

int main(void)
{
	int i, j, sayi;
	
	printf("Olusturmak istediginiz ucgenin kenar yuksekligini giriniz: ");
	scanf("%d",&sayi);
	
	for(i=1;i<=sayi;i++)
	{
		for(j=1;j<=5;j++)
		{
		    printf("*");
		}
		printf("\n");		
	}
	
}
