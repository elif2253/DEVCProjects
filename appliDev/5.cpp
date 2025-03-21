#include <stdio.h>

int main(void)
{
int i, a, faktoriyel;

printf("faktoriyeli girilecek sayiyi giriniz: ");
scanf("%d", &a);

for(i=1; i<=a; i++)
faktoriyel = faktoriyel*i;

printf("Girmis oldugunuz ");
printf("sayinin faktoriyeli: %d", faktoriyel);

return 0;

}
