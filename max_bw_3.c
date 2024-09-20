#include <stdio.h>
int max (int x, int y, int z){
	int w = x;
	if (w < y){
		w = y;
	}
	if (w < z){
		w = z;
	}
	return w;
}

int main() {
	int a, b, c;
	printf("Enter the first number: ");
	scanf("%d", &a);
	printf("Enter the second number: ");
	scanf("%d", &b);
	printf("Enter the third number: ");
	scanf("%d", &c);
	printf("The highest number among %d, %d, %d is %d. ", a, b, c, max(a,b,c));
	return 0;
}
