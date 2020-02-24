/*Melih KAHRAMAN
 *bu program kullanicidan boy ve kilosununu alarak vücüt kitle
 *endeksini bulur
 */
 //odev2.3
  #include <stdio.h>
  
	int main () {
	float boy,kilo,vke; //vucut kitle endeksi(vke)
	
	printf("Boyunuzu giriniz (metre cinsinden) = ");
	scanf("%f",&boy); // kullanicidan boyunu aldım metre cinsinden
	printf("Kilonuzu giriniz (kilogram cinsinden) = ");
	scanf("%f",&kilo); // kullanicinin kilosunu aldım kilogram cinsinden
	
	vke = kilo/(boy*boy);  //vuvut kitle endeksinin hesaplanma formatini belirledim
	
	if (vke<=18.5) {
	    printf("Zayif");
}	
	else if (18.5 < vke && 24.9 >= vke) {
		printf("Normal Kilolu");
}	                          
    else if (25 <= vke && 29.9 >= vke) {
	    printf("Fazla Kilolu");
}
    else if (30 <= vke && 39.9 >= vke) {
	    printf("Obez\n\a");
	    printf("Doktor kontrolunde diyet yapmaniz onerilir"); //tavsiyede bulundum
}
	else if (40 <= vke ) {
	    printf("Ileri Derecede Obez\n\a");
	    printf("Doktor kontrolunde diyet yapmaniz onerilir"); //tavsiyede bulundum
}
	else {
		printf("Tanimlanamadi");
}
     printf("\n\n\n");
	 printf("Bilgisayar Muhendisligi 1.Sinif\n");
	 printf("Melih Kahraman");
return 0;
}


