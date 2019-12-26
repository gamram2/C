#include <stdio.h>
#include <stdbool.h>
bool is_even(int n);
int main(void)
{
	int x;
	printf("정수를 입력하세요 : ");
	scanf("%d",&x);
	if (is_even(x))
		printf("%d : 짝수입니다.",x);
	else
		printf("%d : 홀수입니다.",x); 
}

bool is_even(int n)
{
	if(n%2==0)
		return true;
	else
		return false;	
} 
