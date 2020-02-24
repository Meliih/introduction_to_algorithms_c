#include <stdio.h>

struct Nokta {
	int x,y;
};

struct Ucgen {
	struct Nokta a,b,c;
};

int main () {
	struct Ucgen t1={{1,2},{3,4},{5,9}};
	printf("%d,%d,%d\n",t1.a.x,t1.b.x,t1.c.x);
	printf("%d,%d,%d\n",t1.a.y,t1.b.y,t1.c.y);
	return 0;
}
