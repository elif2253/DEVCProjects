#include <stdio.h>
#include <stdlib.h>

int sayininkubu(int s1)
{
int s2;
s2= s1*s1*s1;
return s2;
	
}

int main(){
	int s1;
	printf("Kubu hesapalanacak sayiyi giriniz: ");
	scanf("%d",&s1);

	printf("Sonucunuz: %d\n",sayininkubu(s1) );
	 return 0;
}

