/*Melih KAHRAMAN
 *soru 2 nin farklı yapilisidır
*/

#include <stdio.h>
int main () {
	int count=1;
	for(int a=1;a<=3;a+=2) {
	
	    for(int b=1;b<=9;b+=2) {
			
			for(int c=1;c<=9;c+=2) {
			   printf("%d %d%d%d\n",count,a,b,c);
			   count++;
			}
		}
	}
return 0;
}

