#include <stdio.h>

int main(void)
{
	int label=333, box=13, change, need; 
	
	change=label%box;
	need=label/box;
	printf("%d개의 딱지상자\n", need); 
	printf("남는 딱지 %d개\n", change);
	
	return 0;
}

