#include <stdio.h>
int sum(int n){
	if(n==0) return 0;
	else return n+sum(n-1);
	}
int main(){
	int n;
	printf("Give a number:");
	scanf("%d",&n);
	printf("sum from 1 to %d = %d",n,sum(n));
  return 0;
	}