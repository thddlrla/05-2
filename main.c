#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int abs = 10;
	while(abs!=0) {
		printf("���밪�� �Է��ϼ��� : ");
		scanf("%d", &abs);
		if(abs < 0) {
			abs= -abs; 
		}
		printf("%d\n",abs);
	}
	

	return 0;
	
}
	

