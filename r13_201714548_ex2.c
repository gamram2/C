#include <stdio.h>
struct Score {
	int kor;
	int mat;
};
void main()
{
	struct Score s1;
	printf("��������: ");
	scanf("%d",&s1.kor);
	printf("��������: ");
	scanf("%d",&s1.mat);
	printf("��������: %d\n",s1.kor);
	printf("��������: %d\n",s1.mat);
	return 0;
}
