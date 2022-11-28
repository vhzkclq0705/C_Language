#include <stdio.h>

struct point {
    int x;
	int y;
};

struct point callByValue(struct point p)
{
    return (struct point) {p.y, p.x};
}

int main(void)
{
	struct point p;
	p.x = 10;
	p.y = 20;

	printf("before call function: p.x: %d p.y: %d\n", p.x, p.y);

	p = callByValue(p);

	printf("after call function: p.x: %d p.y: %d\n", p.x, p.y);

	return 0;
}
