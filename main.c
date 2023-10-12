#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int square(int n)
{
	int result;
	result=n*n;
	printf("result is %d", result);
	
}

int main(int argc, char *argv[]) {
	
	int n;
	square(3);
	
	return 0;

}
