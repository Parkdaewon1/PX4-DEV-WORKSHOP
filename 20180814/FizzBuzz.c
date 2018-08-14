#include<stdio.h>

int FizzBuzz(int x, int y, int n) {

	printf("첫번째 수를 입력하시오");
	scanf("%d",&x);
	printf("두번째 수를 입력하시오");
	scanf("%d",&y);
	printf("범위를 입력하시오.");
	scanf("%d",&n);

	for(int i=1; i<=n; i++) {
		if(i%x==0) {
			printf("Fizz");
		
		}
		if(i%y==0) {
			printf("Buzz");
		}
		if(i%x!=0 && i%y!=0) {
			printf("%d",i);
		}
		printf("\n");
	}

}

int main() {


	int x,y,n;
	FizzBuzz(x,y,n);

	return 0;
}
