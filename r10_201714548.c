#include <stdio.h>
#include <stdbool.h>
bool is_even(int n);
int main(void)
{
	int x;
	printf("������ �Է��ϼ��� : ");
	scanf("%d",&x);
	if (is_even(x))
		printf("%d : ¦���Դϴ�.",x);
	else
		printf("%d : Ȧ���Դϴ�.",x); 
}

bool is_even(int n)
{
	if(n%2==0)
		return true;
	else
		return false;	
} 
