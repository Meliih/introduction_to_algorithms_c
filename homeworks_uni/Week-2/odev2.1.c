/*Melih KAHRAMAN
 *bu program kullacidan x ve y degerlerini alarak hangi koordinat 
 *diliminde oldugunu gosterir
 */
 //odev2.1
 
 #include <stdio.h> // kutuphaneyi tanimladim

	int main () {
	float x,y; // degiskenleri tanimladim

		printf("Noktanin X degerini giriniz = ");
		scanf("%f",&x);
		printf("Noktanin Y degerini giriniz = ");
		scanf("%f",&y); // kullanicidan x ve y degerlerini alir
		
    if ( x>0 && y>0) {
		printf("Kordinatlariniz %0.2f , %0.2f 1.Ceyrektedir\n\n\n",x,y);  // if ile koordinatlaarin x>0 buyukmu x<0 kucukmu yoksa eşitmi omları tanımladım
}
	else if (x<0 && y>0) {
		printf("Kordinatlariniz %.2f , %.2f 2.Ceyrektedir\n\n\n",x,y);
}
	else if (x<0 && y<0) {
		printf("Kordinatlariniz %.2f , %.2f 3.Ceyrektedir\n\n\n",x,y);
}
	else if (x>0 && y<0) {
		printf("Kordinatlariniz %.2f , %.2f 3.Ceyrektedir\n\n\n",x,y);
}
	else if  (x>=0 && y<0) {
		printf("Kordinatiniz %.2f , %0.2f X ekseni uzerindedir\n\n\n",x,y);
}
	else if  (x>=0 && y>0) {
		printf("Kordinatiniz %.2f , %0.2f X ekseni uzerindedir\n\n\n",x,y);
}
	else if  (x>0 && y>=0) {
		printf("Kordinatiniz %.2f , %0.2f Y ekseni uzerindedir\n\n\n",x,y);
}
	else if  (x<0 && y>=0) {
		printf("Kordinatiniz %.2f , %0.2f Y ekseni uzerindedir\n\n\n",x,y);
}
	else if (x>=0 && y>=0) {
		printf("Kordinatiniz %.2f , %.2f Orjin uzerindedir\n\n\n",x,y);
}
	else {
		printf("Matematik'i katlettiniz"); // ekranda boyle bisey yazdırılmıyacagını umuyorum
}
	printf("Bilgisayar Muhendisligi 1.Sinif\n");
	printf("Melih Kahraman");

return 0;		
}
	



