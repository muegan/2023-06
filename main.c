#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int sumTwo(int a, int b)
{
	int c = a+b;
	return c;
}

int square(int n)
{
	return n*n;
}

int get_max(int x, int y)
{
	if (x>y)
		return x;
	
	return y;
}

int main(int argc, char *argv[]) {
	
	int a,b;
	a=3, b=10;
	
	printf("sum two result : %i\n", sumTwo(a,b));
	
	
	int n;
	n=5;
	
	printf("square result : %d\n", square(n));
	
	
	int x, y;
	x=3, y=7;
	
	printf("get max result : %d\n", get_max(x,y));
	
	
	
	return 0;

}
