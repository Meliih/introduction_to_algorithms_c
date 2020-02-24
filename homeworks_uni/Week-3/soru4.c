/*Melih KAHRAMAN
 *bu program kullanicidan girdigi sayiyi azaltarak ekrana bastirir
 * */#include <stdio.h>
int main () {
	
	int sayi;
	printf("sayi\n");
	scanf("%d",&sayi);
	printf("\n");
	for (int i=sayi;i>0;i--) { //bu satir donguyu alt satira dondurur
		
		for (int j=sayi;j>0;j--) {
			
			printf("%d",sayi); //ekrana sayilari azaltarak bastirir
		}
		
	  printf("\n"); 
	  sayi--;
	}
	
	return 0;
}

