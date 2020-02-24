#include <stdio.h>

struct Ogrenci {
	char *no;
	int notu;
	char *isim;
};

int main () {
	struct Ogrenci ayse,ali = {"19120205049",95,"Ali Kasim"};
	ayse.no="19120205063";
	ayse.notu=85;
	ayse.isim="Ayse Betul";
	
	printf("%.15s - %d - %.15s\n",ali.no , ali.notu , ali.isim);
	printf("%.15s - %d - %.15s\n",ayse.no , ayse.notu , ayse.isim);
	return 0;
}
