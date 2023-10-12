#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int get_max(int x, int y)
{
	if(x>y)
		printf("result is %d", x);
	else
		printf("result is %d", y);
	
}

int main(int argc, char *argv[]) {
	
	int x, y;
	get_max(3,7);
	
	return 0;

}
