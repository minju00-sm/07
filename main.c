#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

	
void sub(void);

int main(int argc, char *argv[])
{
	int i;
	for (i=0; i<3; i++)
		sub();
		
	system("pause");
	return 0;
	}

void sub(void)
{
	int auto_count=0; //자동할당이라 한번 돌면 소멸돼서 0으로 초기화됨. 
	static int static_count=0; //메모리가 소멸되지 않고 누적되어 출력됨. 
	
	auto_count++;
	static_count++;
	
	printf("auto_count=%d\n", auto_count);
	printf("static_count=%d\n", static_count);
}

