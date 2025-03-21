#include<stdio.h>

int main(void)
{
	int sayi=10;
	int sayi2=7;
	char kelime='b';
	double sayi3=10.35;
	
	printf("%d\n", sayi);
	printf("%d\n", sayi2);
	printf("%c\n", kelime);
	printf("%.3f", sayi3);
	
	printf("\n\n\n  Bellekteki Yerleri: \n\n\n");
	
	printf("%x\n", &sayi);
	printf("%x\n", &sayi2);
	printf("%x\n", &kelime);
	printf("%x\n", &sayi3);
}
