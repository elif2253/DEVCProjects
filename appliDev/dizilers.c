#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	char sehir[15];
	int i;
	for(i=0; i<3; i++);
	{
		printf("Sehir giriniz: \n");
		scanf("%s",sehir);
		printf("Sehir: %s\n");
	}
	printf("Girmis oldugunuz sehirler: %s",sehir);
	return 0;
}
