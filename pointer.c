#include <stdio.h>
#include <stdlib.h>

void main() {
	int * ptr = (int *)malloc(10 * sizeof(int));
	int i = 1;
	int temp;
	printf("���ڸ� �����غ��ô�\n");
	printf("���� �Է�\n");
	while (1) {
		scanf("%d", ptr+i-1);
		for (temp = 0; temp < i; temp++)
			printf("%d ", *(ptr + temp));
		printf("���� %d byte�� ũ��\n",i*4);
		if (i % 10 == 0)
			ptr = (int*)realloc(ptr, sizeof(int) *(i + 10));
		i++;
		
	}
}