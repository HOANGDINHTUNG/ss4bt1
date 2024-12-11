#include<stdio.h>
int main(){
	int n;
	printf("moi nhap vao so nguyen n: ");
	scanf("%d",&n);
	if(n<0){
		printf("n la so am!!!");
	}
	else if(n>0){
		printf("n la so duong!!!");
	
	}
	else
	{
		printf("so 0 la( dac biet ) so ko am cx ko duong");
	}
	return 0;
}
