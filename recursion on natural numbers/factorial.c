#include <stdio.h>
int fact(int n){
	if(n==0) return 1;
	else return n*fact(n-1);
	}
int main(){
	int n;
	printf("Give a nonnegative number:");
	scanf("%d",&n);
	printf("%d",fact(n));
}