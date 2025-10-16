#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

static int all_files; //static 선언으로 범위가 파일 내로 제한됨. 링킹 과정에서 에러 발생 

extern void sub();

int main(void)
{
	sub();
	printf("%d\n", all_files);
	
	system("pause");
	return 0;
}
