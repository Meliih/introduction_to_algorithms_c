#include <stdio.h>

struct Nokta {
	int x,y;
};
struct Ucgen {
	struct Nokta a,b,c;
};

int main () {
	struct Ucgen t2 = {{1,2},{3,4},{5,6}};
	struct Ucgen *t3 =&t2;
	
	printf("%d,%d,%d\n",(*t3).a.x, (*t3).b.x , (*t3).c.x);
	printf("%d,%d,%d\n",t3->a.y, (*t3).b.y , (*t3).c.y); 
	return 0;
}
