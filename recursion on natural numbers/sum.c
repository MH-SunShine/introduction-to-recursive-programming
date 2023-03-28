#include<stdio.h>
int sum(int , int);
int main(){
  int n1,n2;
  printf("give 2 integer numbers:");
  scanf("%d %d",&n1,&n2);
  printf("%d + %d = %d",n1,n2,sum(n1,n2));
}
int sum(int a , int b){
  if(b == 0) return a;
  else return 1 + sum(a,b-1);
}