#include <stdio.h>
#include <math.h>

	double distance (double x1,double y1,double x2,double y2) {
		double d;
		
		d = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
		return d;
	}
		
	double area (double x1,double y1,double x2,double y2,double x3,double y3) {
		double m1,m2,m3;
		double h;
		double a;
		
		m1 = distance(x1,y1,x2,y2);
		m2 = distance(x1,y1,x3,y3);
		m3 = distance(x2,y2,x3,y3);
		h  =(m1+m2+m3) / 2;
		a  =sqrt(h*(h-m1)*(h-m2)*(h-m3));
		return a;
	}

int main() {
	float x1,x2,x3,y1,y2,y3;
	
		printf("1.kosenin x ve y degerlerini giriniz:");
		scanf("%f%f",&x1,&y1);
		printf("2.kosenin x ve y degerlerini giriniz:");
		scanf("%f%f",&x2,&y2);
		printf("3.kosenin x ve y degerlerini giriniz:");
		scanf("%f%f",&x3,&y3);
		printf("Alan = %.2lf",area(x1,y1,x2,y2,x3,y3));
	
	return 0;
}

