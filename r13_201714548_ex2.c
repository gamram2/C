#include <stdio.h>
struct Score {
	int kor;
	int mat;
};
void main()
{
	struct Score s1;
	printf("국어점수: ");
	scanf("%d",&s1.kor);
	printf("수학점수: ");
	scanf("%d",&s1.mat);
	printf("국어점수: %d\n",s1.kor);
	printf("수학점수: %d\n",s1.mat);
	return 0;
}
