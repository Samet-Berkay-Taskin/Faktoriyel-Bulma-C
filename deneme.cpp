#include <stdio.h>
int main()
{
 int s1,i,fak=1;
 printf("faktoriyelini istediginiz sayiyi giriniz:");
 scanf("%i",&s1);
 for(i=1;i<=s1;i++)
 {
 	fak*=i;
 }
 printf("\n yazdiginiz sayinin (%d) faktoriyeli=%d",s1,fak);
	return 0;
}

