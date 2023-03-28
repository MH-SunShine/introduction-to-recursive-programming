#include<stdio.h>
int decimal_to_binary(int);
int main(){
  int num;
  printf("enter a decimal number:");
  scanf("%d",&num);
  printf("%d = %d in binary",num,decimal_to_binary(num));
}
int decimal_to_binary(int n){
  if(n == 0) return 0;
  else return n%2 + 10 * decimal_to_binary(n/2);
}