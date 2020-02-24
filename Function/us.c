 #include <stdio.h>
 #include <math.h>
 
  double us (double a,double b) {
	  return pow(a,b);
  }

int main() {
	int a,b;
	
	printf("Tabani giriniz :");
	scanf("%d",&a);
	printf("Ustu giriniz : ");
	scanf("%d",&b);
	printf("\n");
	
	printf("%d^%d = %.2lf",a,b,us(a,b));
	
	return 0;
}

