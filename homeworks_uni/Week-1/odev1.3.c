/*01.10.2019
 * Melih KAHRAMAN
 * bu program kullanıcıdan yarıçap ve yükseklik değerlerini alıp bir koninin hacmini hesaplayan bir program 
 */
 //odev 1.3
 // \alert(uyarı) sesi verir
 // \n alt satıra geçer
 
   #include <stdio.h>
   int main()  {
   float yaricap,yukseklik,hacim;
   float pi=3.14;
	 printf("Koninin yuksekliginizi giriniz\n\a");
	 scanf("%f",&yukseklik);
	 printf("Konini yaricapini giriniz\n");
	 scanf("%f",&yaricap); 
	 hacim=pi*yaricap*yaricap*yukseklik/3;
	 printf("Hacim=%f\n\n\n",hacim);
	 printf("Bilgisayar Muhendisligi 1.Sinif\n");
	 printf("Melih Kahraman");
	 
	

   return 0;
}
