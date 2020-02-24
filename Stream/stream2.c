#include <stdio.h>
#include <string.h>

int main () {
	
	char veri[25]="Melih Kahraman";
	int uzunluk=strlen(veri);
	
	FILE *f=fopen("a.txt","w");
	
	if (f==NULL) 
		printf("Dosya olusturulamdi");
		
	else  {
		for(int i=0;i<uzunluk;i++) {	
		fputc(veri[i],f);
		printf("\nYazilan karakter %c",veri[i]);
		}
	}
	
	
	fclose(f);
	
	return 0;
}
