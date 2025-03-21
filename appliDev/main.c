#include <stdio.h>
#include <stdlib.h>

int main() {

char harf='m';
char *pt=&harf;

printf("Deger: %c\n", harf);
printf("Yeri: %x\n",pt);

pt--;
printf("Simdiki yer: %x", pt);

	
	
	
	return 0;
}
