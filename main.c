#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int number;
	
	printf("���� �ϳ��� �Է��Ͻÿ�: ");
	scanf("%d", &number);
	
	if(number>0)
	{
		printf("������ %d �Դϴ�.", number);
	}

	else
	{
		printf("������ %d �Դϴ�.", -number);
	}
	
	
	return 0;
}
