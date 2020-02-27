/*27.09.2019
 * Melih KAHRAMAN
 * Bu program fahrenheit termometresini celsiusa termometresine cevirir
 */


 #include <stdio.h>
 int main () {
	 float celcius,fahrenheit;
	 printf("Fahrenheit degerini giriniz\n");
	 scanf("%f",&fahrenheit);
	 celcius=(fahrenheit-32)*5/9;
	 printf("%f fahrenheit %f celsiusa esittir",fahrenheit,celcius);
	 
	 
	 
	 
	 
	 return 0;
	 }
