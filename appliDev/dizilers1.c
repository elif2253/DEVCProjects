#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main() {
 
 char sehir[3][15];
 int i,sayi;
 sayi=3;
 for(i=0;i<sayi;i++)
 {
  printf("%d.Sehirin ismini giriniz: ",i+1);
  scanf("%s",sehir[i]);
 }
 printf("Girmis oldugunuz sehir isimleri: \n");
 for(i=0;i<sayi;i++)
 {
  printf("%s\n",sehir[i]);
 }
	return 0;
}
