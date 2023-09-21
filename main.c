#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int a;
	int b;

	printf("enter a numerator : ");
	scanf("%d", &a);
	
	printf("enter a denominator : ");
	scanf("%d", &b);
	
	printf("The result of the division is %f\n", (float)a/b);
	
	system ("PAUSE");
	
	return 0;
}
