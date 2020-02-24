/*Melih KAHRAMAN
 *Bu program kullanicidan iki tane sayi alır ve bu sayilarin en büyük
 *ortak bolenini bulur.Obeb bulur
 */
 #include <stdio.h>

int main () {
int a,b,temp;
	printf("OBEB hesaplama programi \n");
	printf("Buyuk sayiyi giriniz\n");
	scanf("%d",&a);
	printf("Kucuk sayiyi giriniz\n");
	scanf("%d",&b);
 int ea=a;
 int eb=b;//eski degerleri tuttuk ekrana bastirirken eski degerler lazim
 
	do {
		temp=a%b;
		a=b;
		b=temp;
    }while(a!=0 && b!=0);
    
	printf("OBEB(%d,%d)=%d",ea,eb,a);
		
return 0;
}

