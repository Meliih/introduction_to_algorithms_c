/*01.10.2019
 * Melih KAHRAMAN
 * Bu program degiskenlere sayılar atayarak birtakim işlemler yapar 
 */
 //odev 1.4
 // \alert(uyarı) sesi verir
 // \n alt satıra geçer

  #include <stdio.h>
  int main()  { 
  int a,b,c,d,e,f,g,h,i,j,x=18,y=3,z=-3;
	a=x+y*z;
	b=2*x+4-(y-z);
	c=x/y+z;
	d=x%(y*x);
	e=x/z;
	f=x%z+1;
	g=x+y/z;
	h=x*(y/z);
	i=(x*z)%y-1;
	j=x*(z%y);
	printf("\ta=%d\n\a",a);
	printf("\tb=%d\n",b);
	printf("\tc=%d\n",c);
	printf("\td=%d\n",d);
	printf("\te=%d\n",e);
	printf("\tf=%d\n",f);
	printf("\tg=%d\n",g);
	printf("\th=%d\n",h);
	printf("\ti=%d\n",i);
	printf("\tj=%d\n\n\n\n",j);
	printf("Bilgisayar Muhendisligi 1.Sinif\n");
	printf("Melih Kahraman");
		
  return 0;	
}
