#include<stdio.h>
int sum_digits(int);
int main(){
  int num;
  printf("Enter an integer number:");
  scanf("%d",&num);
  printf("sum of %d digits = %d",num,sum_digits(num));
}
int sum_digits(int n){
  if(n<10) return n;
  else return n%10 + sum_digits(n/10);
}