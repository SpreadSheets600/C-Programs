#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float r1, r2;
	printf("Enter The Value Of A B C : ");
	scanf("%d%d%d", &a,&b,&c);
	
	r1 = (-b + sqrt(b * b - 4 * a * c)) / (2 * a);
	r2 = (-b - sqrt(b * b - 4 * a * c)) / (2 * a);

	printf("Value Of Real Root 1 : %f \n", r1);
	printf("Value Of Real Root 2 : %f", r2);
	return 0;
}
