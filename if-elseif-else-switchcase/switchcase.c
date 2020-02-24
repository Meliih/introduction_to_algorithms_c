#include <stdio.h>

 int main () {
	 
	 int islem,tutar,bakiye=1000;
	 
	 printf("Islemler\n 1.Para Cekme\n 2.Para Yatirma\n 3.Havale//EFT\n 4.Bakiye Sorgulama\n 5.Kart Iade\n\n\n\n");
	 printf("Isleminizi seciniz = ");
	 scanf("%d",&islem);
	 
	 switch (islem) {
		 
		case 1: 
		printf("Bakiyeniz:%d\n",bakiye);
		printf("Cekilecek tutari giriniz:");
		scanf("%d",&tutar);
		
		if (tutar > bakiye ) {
		printf("Bakiyeniz Yetersiz\n");
}
		bakiye-=tutar;
		printf("Bakiyeniz:%d",bakiye);
		break;
		
		
		case 2:
		printf("Bakiyeniz:%d\n",bakiye);
		printf("Yatirilacak tutari giriniz:");
		scanf("%d",&tutar);
		
		bakiye+=tutar;
		printf("Bakiyeniz:%d",bakiye);
		break;
		
		case 3:
		printf("Bakiyeniz:%d\n",bakiye);
		printf("Havale//EFT tutari giriniz:");
		scanf("%d",&tutar);
		
		if (tutar >bakiye ) {
		printf("Bakiyeniz Yetersiz\n");
}	
		bakiye-=tutar;
		printf("Bakiyeniz:%d",bakiye);
		break;
		
		case 4:
		printf("Bakiyemiz: %d",bakiye);
		break;
		
		case 5:
		printf("Kartiniz iade edilmistir.\n");
		break;
		
		default:
		printf("Bilinmeyen islem");
		break;
		
	}
		 
 return 0;		 
}
