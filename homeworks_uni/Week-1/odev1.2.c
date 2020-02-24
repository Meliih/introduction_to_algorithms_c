/*01.10.2019
 * Melih KAHRAMAN
 * Bu program sirasiyla aşagıda belirtecegim işlemleri yapmaktadır.
 * 1.islem <> (6/3)+4-5*6
 * 2.islem <> (2*(5+6)-5)*6/6
 * 3.islem <> (16%10/3
 * 4.islem <> (16+(5-6+-9))
 */
 //odev 1.2
 // \t bir tab boslugu birakir 
 // \alert(uyarı) sesi verir
 // \n alt satıra geçer

  #include <stdio.h>
  int main()  {
  int sonuc1,sonuc2,sonuc3,sonuc4;
	sonuc1=(6/3)+4-5*6;
	sonuc2=(2*(5+6)-5)*6/6;
	sonuc3=(16%10/3);
	sonuc4= 16+(5-6+-9);
 	
	printf("\t1.islemin sonucu =%d\n\t\a",sonuc1);
	printf("2.islemin sonucu =%d\n\t",sonuc2);
	printf("3.islemin sonucu =%d\n\t",sonuc3);
	printf("4.islemin sonucu =%d\n\n\n\n",sonuc4);
	printf("Bilgisayar Muhendisligi 1.Sinif\n");
	printf("Melih Kahraman");
	
	
	return 0;
}
