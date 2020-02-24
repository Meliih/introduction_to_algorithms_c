#include <stdio.h>
struct Nokta {	//ik tane nokta belirlendi
	int x,y;
};

struct Ucgen {
	struct Nokta a,b,c;	// noktalar farklı bir structta tutuldu a nın x'e y'si var
};//b nın x'e y'si var c nın x'e y'si var

int main () {
	struct Ucgen t2; //t2 degişkeniyle onları kontrol edersin
	t2.a.x=5; // t2'nin a ıncı elemanın x degerine 5 ata 
	t2.a.x=10;// t2'nin a ıncı elemanın x degerine 10 ata 
	
	struct Nokta p1 ={3,20}, p2 = {20,20};//p1 noktası tanimlandi 3,20 atnai p2 noktasi tanimlandi 20 20 atandi
	t2.b = p1;
	t2.c = p2;
	
	printf("%d,%d,%d\n",t2.a.x,t2.b.x,t2.c.x);
	printf("%d,%d,%d\n",t2.a.y,t2.b.y,t2.c.y);
	return 0;
	}
