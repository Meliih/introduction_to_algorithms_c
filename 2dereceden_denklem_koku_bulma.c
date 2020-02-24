/*Melih KAHRAMAN
 *Bu program ax^2bx+c  denkleminin köklerini bulur
 */
 
 #include <stdio.h>
 #include <math.h>
    int main()
{
	float a,b,c,x1,x2,delta;
	printf("ax^2bx+c denkleminin\n");
	printf("a'sini giriniz=");
	scanf("%f",&a);
	printf("b'sini giriniz=");
	scanf("%f",&b);
	printf("c'sini giriniz=");
	scanf("%f",&c);
	
	
	delta =b*b-4*a*c;
	if(delta>=0)
	{
	x1 = (-b +(sqrt(delta)) )/2*a;
	x2 = (-b -(sqrt(delta)) )/2*a; 
	printf("Denkleminizin kokleri x1=%.2f,x2=%.2f",x1,x2);
	}
	
	else
	{
	printf("reel kok yok");
	
	}	
	
	
	
	return 0;
}

