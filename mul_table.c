#include <stdio.h>

int main()
{
	printf("구구단을 출력합니다.\n\n");
	for (int i=1; i<10; i++){
		printf("%d 단\n\n", i);
		for (int j=1; j<10; j++) 
		{
			printf("%d * %d = %d\n", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
