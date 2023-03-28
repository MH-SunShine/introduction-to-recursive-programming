#include<stdio.h>
int binary_to_decimal(int);
int main(){
  int num;
  printf("enter a binary number:");
  scanf("%d",&num);
  printf("%d = %d in decimal",num,binary_to_decimal(num));
}
int binary_to_decimal(int n){
  if(n == 0) return 0;
  else return n%10 + 2 * binary_to_decimal(n/10);
}