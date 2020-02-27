/*Melih KAHRAMAN
 *Bu program kullanicidan aldigi degerlere göre cıkarma islemi kesirli bicimde
 *bolme islemi kesirli bicimde yapar
 */
 //lab6.c
 
#include <stdio.h>
	
	double cikar(double x1,double x2,double y1,double y2) {
	double sonuc;
							//fonksyonlari onceden tanimladim
	sonuc= x1/y1 - x2/y2;
	return sonuc;
}

	double bol(double x1,double x2,double y1,double y2) {
	double sonuc;
	
	sonuc=(x1/y1)/(x2/y2);
	return sonuc;
}
	double ondalik_goster (double x1,double y1) {
	double sonuc;

	sonuc=x1/y1;
	return sonuc;
}
	void ekrana_bas (double x1,double y1) {
		
	printf("Sonuc=%lf",x1/y1);
}


int main() {
	double x1,x2,y1,y2;
	double z1,z2,t1,t2;
	double m1,n1;
	printf("Bolme islemi yapar\n\n");
	printf("1.kesrin payi ve paydasini giriniz\n");
	scanf("%lf %lf",&x1,&y1);
	printf("2.kesrin payi ve paydasini giriniz\n");
	scanf("%lf %lf",&x2,&y2);
	printf("%.2lf/%.2lf=%.2lf\n\n",ondalik_goster(x1,y1),ondalik_goster(x2,y2),bol(x1,x2,y1,y2));
									//ondalik_goster && bol fonksiyonunu cagirdim
	
	printf("Cikarma islemi yapar\n\n");
	printf("1.kesrin payi ve paydasini giriniz\n");
	scanf("%lf %lf",&z1,&t1);
	printf("2.kesrin payi ve paydasini giriniz\n");
	scanf("%lf %lf",&z2,&t2);
	printf("%.2lf/%.2lf-%.2lf/%.2lf=%.2lf\n\n",z1,t1,z2,t2,cikar(z1,z2,t1,t2));
														//cikar fonksiyonunu cagirdim
	
	printf("Kesiri gosterir\n\n");
	printf("1.kesrin payi ve paydasini giriniz\n");
	scanf("%lf %lf\n\n",&m1,&n1);
	ekrana_bas(m1,n1);
	//ekrana_bas fonksiyonunu cagırdım
	
	double aa1,aa2,bb1,bb2;
	double zz1,zz2,tt1,tt2;
	double mm1,nn1;
	printf("Bolme islemi yapar\n\n");
	printf("1.kesrin payi ve paydasini giriniz\n");
	scanf("%lf %lf",&aa1,&bb1);
	printf("2.kesrin payi ve paydasini giriniz\n");
	scanf("%lf %lf",&aa2,&bb2);
	printf("%.2lf/%.2lf=%.2lf\n\n",ondalik_goster(aa1,bb1),ondalik_goster(aa2,bb2),bol(aa1,aa2,bb1,bb2));
	
	
	printf("Cikarma islemi yapar\n\n");
	printf("1.kesrin payi ve paydasini giriniz\n");
	scanf("%lf %lf",&zz1,&tt1);
	printf("2.kesrin payi ve paydasini giriniz\n");
	scanf("%lf %lf",&zz2,&tt2);
	printf("%.2lf/%.2lf-%.2lf/%.2lf=%.2lf\n\n",zz1,tt1,zz2,tt2,cikar(zz1,zz2,tt1,tt2));
	
	
	printf("Kesiri gosterir\n\n");
	printf("1.kesrin payi ve paydasini giriniz\n");
	scanf("%lf %lf",&mm1,&nn1);
	ekrana_bas(mm1,nn1);
	
	return 0;
}

