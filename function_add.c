#include <stdio.h>
int sum (int x, int y){
	int add=x+y;
	return add;
}

int main(){
	int a,b;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("The sum of %d and %d is %d", a,b, sum(a,b));
	return 0;
}
