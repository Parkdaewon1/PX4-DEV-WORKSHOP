#include <stdio.h>

int main()
{
	int num;
	int i=1;
	int a=1;

	printf("숫자를 입력하시오.\n");
	scanf("%d",&num);

	if(num<10)
	{
		i=1; 
	}
	else {

		while(a>=1) {
			i=i*10;
			a=num/i;
		}
		i=i/10;
	}
	
	printf("숫자는 %d의 자리수입니다.",i);

	return 0;
}
