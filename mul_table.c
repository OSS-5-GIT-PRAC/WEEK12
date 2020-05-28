#include <stdio.h>

int main()
{
	printf("구구단을 출력합니다.\n\n");
	int i, j;
	for (i=2; i<10; i++){
		printf("%d 단\n\n", i);
		for (j=1; j<10; j++) 
		{
			printf("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
