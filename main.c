#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;

	for (i=0; i<5; i++)
	{
		static int temp = 1; //static으로 temp 생존기간 늘리기 
		printf("temp = %d\n", temp);
		temp++;
	}
		
	return 0;
}
