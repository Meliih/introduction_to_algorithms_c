#include <stdio.h>
int main () {
int a,b,c;
	printf("Ucgenin bir kenarini giriniz\n");
	scanf("%d",&a);
	printf("Ucgenin bir kenarini giriniz\n");//kullanicidan degerleri aldım
	scanf("%d",&b);
	printf("Ucgenin bir kenarini giriniz\n");
	scanf("%d",&c);
	
	if (a+b>c && a+c>b &&c+b>a && a-b<c && a-c<b && b-c<a &&a>0 && b> 0 && c>0) { // ucgen olma kosulunu olursa ifin icine girer

	
		
		if (a==b && b==c ) {//eskenar olma kosulı
			printf("Eskenar ucgendir");
		}
		
		else if((a==b && c!=a) || (a==c && b!=a) || (b==c && b!=a )) { //ikizkenar olma kosulu
				printf("ikizkenar ucgen");
		}
			
		else	printf("Bu bir ucgendir.\n");
	}	
	
	
		else {
			printf("Bu bir ucgen olamaz kurallara aykiri");
		}
	
return 0;
}
