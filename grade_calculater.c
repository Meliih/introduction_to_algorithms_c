/*30.09.2019
 * Dönemsel Ağırlıklı Not Ortalaması hesaplayan bir program
 */
 //odev1.1
 // \n alt satıra geçer
 // \alert(uyarı) sesi verir
 
  #include <stdio.h>
  int main(){
  float ders1,ders2,ders3,ders4,ders5;
  float akts1,akts2,akts3,akts4,akts5;
  float notortalamasi;
	
	printf("Donemsel Agirlikli Not Ortalamasi Hesaplayici\n\n\a");
	printf("1. Dersinizin Notunu Ve AKTS Giriniz\n");
	scanf("%f%f",&ders1,&akts1);
	printf("2. Dersinizin Notunu Ve AKTS Giriniz\n");
	scanf("%f%f",&ders2,&akts2);
	printf("3. Dersinizin Notunu Ve AKTS Giriniz\n");
	scanf("%f%f",&ders3,&akts3);
	printf("4. Dersinizin Notunu Ve AKTS Giriniz\n");
	scanf("%f%f",&ders4,&akts4);
	printf("5. Dersinizin Notunu Ve AKTS Giriniz\n");
	scanf("%f%f",&ders5,&akts5);
	
	notortalamasi=((akts1*ders1)+(akts2*ders2)+(akts3*ders3)+(akts4*ders4)+(akts5*ders5))/(akts1+akts2+akts3+akts4+akts5);
	
	printf("Ortalamaniz Hesaplaniyor\n\n\n");
	printf("Not Ortalamaniz: %f\n",notortalamasi);
	printf("'.' '.' '.' '.' '.' '.' \n\n");
	printf("Bilgisayar Muhendisligi 1.Sinif\n");
	printf("Melih Kahraman");
	
	return 0;
}
