#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

static int all_files; //static �������� ������ ���� ���� ���ѵ�. ��ŷ �������� ���� �߻� 

extern void sub();

int main(void)
{
	sub();
	printf("%d\n", all_files);
	
	system("pause");
	return 0;
}
