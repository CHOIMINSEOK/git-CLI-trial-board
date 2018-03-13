#include <stdio.h>
#include <stdlib.h>

void main() {
	int * ptr = (int *)malloc(10 * sizeof(int));
	int i = 1;
	int temp;
	printf("숫자를 저장해봅시다\n");
	printf("숫자 입력\n");
	while (1) {
		scanf("%d", ptr+i-1);
		for (temp = 0; temp < i; temp++)
			printf("%d ", *(ptr + temp));
		printf("현재 %d byte의 크기\n",i*4);
		if (i % 10 == 0)
			ptr = (int*)realloc(ptr, sizeof(int) *(i + 10));
		i++;
		
	}
}