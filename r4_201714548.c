#include <stdio.h>

int main(void)
{
	int label=333, box=13, change, need; 
	
	change=label%box;
	need=label/box;
	printf("%d���� ��������\n", need); 
	printf("���� ���� %d��\n", change);
	
	return 0;
}

