#include<stdio.h>
int product(int , int);
int main(){
  int n1,n2;
  printf("give 2 integer numbers:");
  scanf("%d %d",&n1,&n2);
  printf("%d * %d = %d",n1,n2,product(n1,n2));
}
int product(int a , int b){
  if(b == 1) return a;
  else return a + product(a,b-1);
}