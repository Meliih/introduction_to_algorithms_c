#include <stdio.h>
#include <string.h>

struct Ogrenci {
	char no[12];
	char isim[40];
};

int main () {
	struct Ogrenci ogrenciler[100];
	strncpy(ogrenciler[0].no, "19120205014",20);
	strncpy(ogrenciler[0].isim, "Melih",40);
	strncpy(ogrenciler[1].no, "19120205042",20);
	strncpy(ogrenciler[1].isim,"Mehmetcan",20);
	
	printf("%.15s - %.20s\n",ogrenciler[0].no , ogrenciler[0].isim);
	printf("%.15s - %.20s",ogrenciler[1].no , ogrenciler[1].isim);
return 0;	
}
