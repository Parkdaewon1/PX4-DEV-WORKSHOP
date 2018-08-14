#include <stdio.h>

int main() {

	int a;
	int b;
	int e;
	int d=0;
	int i=0;
	int t=0;
	int q=0;
	int x=0;

	printf("첫번째수를 입력하시오.\n");
	scanf("%d",&a);
	printf("두번째수를 입력하시오.\n");
	scanf("%d",&b);
	printf("원하는 숫자의 길이를 정하시오\n");
	scanf("%d",&e);

	int c[e],f[e];
	c[e]=0;
	f[e]=0;

	while(d<=e){

		d++;
		if (d%a==0){
			c[i]=d;
			i++;

		}
		if (c[i-1]==e){
		break;
		}

	}

	while(i-1<=e){

		i++;
		c[i]=0;
	}

	printf("%d 까지의 수에서 %d의 배수는",e,a);
	
	for(int j =0; j<sizeof(c)/sizeof(int); j++){

		if(c[j]!=0){
			if(c[j-1]==e){
				break;
			}
			printf("%d",c[j]);
			t=t+c[j];
			x++;
			printf(" ");

		}

	}
	printf("이고\n");
	
	d=0;
	i=0;

	while(d<=e){

		d++;
		if (d%b==0){
			f[i]=d;
			i++;
		}
		if (f[i-1]==e){
		break;
		}

	}

	int y=0;
	int k=0;
	printf("%d 까지의 수에서 %d의 배수는",e,b);
	
	for(int j =0; j<sizeof(f)/sizeof(int); j++){

		if(f[j]!=0){
			if(f[j-1]==e){
				break;
			}
			printf("%d",f[j]);
			y++;
			k=k+f[j];
			printf(" ");

		}

	}
	printf("이다.");
	int z=0;
	
	for(int j =0; j<y;j++){

		for (int q=0; q<x;q++){
			if(f[j]==c[q]){
				
				z=z+f[j];
				break;
				
			}
		}
	}
	int o=t+k-z;
	printf("중복을 제외한 이들의 합은 %d이다.\n",o);


 	return 0;
}
