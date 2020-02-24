/*Melih KAHRAMAN
 *100 ile 400 arasındaki sayılardan tüm rakamları tek olanları sayilarin kac tane oldugunu ve hangileri oldugunu ekrana bastirir.
 */
 //soru2.c
 #include <stdio.h>
 int main () {
 int i,y,o;
 int count;

	for(i=100;i<400;i++) { //if ( a==b && c=g)
		
		if (i%2==1) { // Bu sarti saglarsa say tektir
			y=i/100; //y = yüzler basamagi olarak tanimladim
			o=i/10;  //o = onlar basamagi olarak tanimladim
			o=o%10;
			if (y==1) { //switch ile de yapılabilinir.
				
				if (o==1) {
				 printf(" %d %d\n",count,i); // 
		         count++;
			    }
			    if (o==3) {
				 printf(" %d %d\n",count,i); 
		         count++;
			    }
			    if (o==5) {
				 printf(" %d %d\n",count,i); 
		         count++;
			    }
			    if (o==7) {
				 printf(" %d %d\n",count,i); 
		         count++;
			    }		    
				if (o==9) {
				 printf(" %d %d\n",count,i); 
		         count++;
			    }
			}
			if (y==3) {
				if (o==1) {
				 printf(" %d %d\n",count,i); 
		         count++;
			    }
			    if (o==3) {
				 printf(" %d %d\n",count,i); 
		         count++;
			    }
			    if (o==5) {
				 printf(" %d %d\n",count,i); 
		         count++;
			    }
			    if (o==7) {
				 printf(" %d %d\n",count,i); 
		         count++;
			    }		    
				if (o==9) {
				 printf(" %d %d\n",count,i); 
		         count++;
			    }
			}
			
		}
		 
	}
return 0;
}

