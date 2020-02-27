/*Melih KAHRAMAN
 *
 */

#include <stdio.h> // kütüphane 
int main(){

   float max_iterate=5,r,x,p,px=1,fact=1,toplam;//degiskenler

   printf("Bir sayi giriniz\n");
   scanf("%f",&x); //kullanicidan sayi alma
   p=x;
   r=x;
	for(int n=2;n<=max_iterate;n++){ 

		if (n%2==0) // n 2ye tam bolunurse dongunun içine girer
		{
			for(int i=1;i<=n;i++)
			{
			  px*=x; //px x ifadenin ustunu tutar

			}
				for(int j=n;j<=p;j++)
				{  fact*=x;  //fact faktoriyel ifadesini tutar
				  x-=1;
				}
     
		}
		toplam=r*px/fact;
   }

	toplam++;
	printf("x ust degeri= %f\n",px);
	printf("faktoriyel = %f\n",fact);
	printf("%0.4f",toplam);

return 0;
}
