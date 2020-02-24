/*Melih KAHRAMAN
 *bu programda 5 tane maddenin (su,altin,civa,bakir,gümüs)
 *gozlemlenen kaynama noktasi degerini alarak normal kaynama
 *noktasinin %5 fazlasini veya %5 eksigini hesaplar eger gözlemlenen
 *kaynama noktasi bu degerler arasinda ise maddenin ne oldugunu
 *tahmin eder.
 * su kaynama noktasi 100
 * civa kaynama noktasi 357
 * bakir kaynama noktasi 1187
 * gumus kaynama noktasi 2163
 * altin kaynama noktasi 2660
 */
 //odev2.2
 
  #include <stdio.h>
  
	int main (){ 
	float k; // k degiskenini kaynama noktasi olarak tanimladim
	
	printf("Gozlemlenen kaynama noktasi giriniz =");
	scanf("%f",&k); //kullanicdan degeri aldim
	
	if (105>=k && 95<=k ) { //hangi deger araligina girerse ona göre ekrana yansitacak
		
		printf("Su");	
}
    else if (357*105/100>=k && 357*95/100<=k) {
		
		printf("Civa");
}
    else if (1187*105/100>=k && 1187*95/100<=k) {
		
		printf("Bakir");
}
    else if (2163*105/100>=k && 2163*95/100<=k) {
		
		printf("Gumus");
}
    else if (2260*105/100>=k && 2260*95/100<=k) {
		
		printf("Altin");
}
    else {
		
		printf("Madde taninmadi"); // verilen kaynama noktasi arasindaki degerler girilmez ise madde taninmadi ifade yazdirilacak
}
	printf("\n\n\n");
	printf("Bilgisayar Muhendisligi 1.Sinif\n");
	printf("Melih Kahraman");
return 0;	  
}
