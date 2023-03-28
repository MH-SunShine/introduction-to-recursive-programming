#include<stdio.h>
int sum_odd(int);
int main(){
  int num;
  printf("enter an integer number:");
  scanf("%d",&num);
  printf("sum of first %d even numbers starting from 1 = %d",num,sum_odd(num));
}
int sum_odd(int n){
  if(n == 1) return 1;
  else return 2*n + sum_odd(n-1);
}