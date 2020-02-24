 #include <stdio.h>
 #include <math.h>

	double kok (int a){ 
		return sqrt(a);
	}

int main(){
double x;
	printf("Karekokunu almak istediginiz sayiyi giriniz :");
	scanf("%lf",&x);
	printf("%.2lf sayisiniz karekoku %.2lf dir",x,kok(x));
	
	return 0;
}

