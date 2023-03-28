#include<stdio.h>
int count_digit_occurance(int , int);
int main(){
  int num,dig;
  printf("enter an integer number:");
  scanf("%d",&num);
  printf("enter the digit you want to know how many times it appeared in the entered number:");
  scanf("%d",&dig);
  printf("%d  appeared in %d : %d times",dig,num,count_digit_occurance(num,dig));
  
}
int count_digit_occurance(int n , int d){
  if(n<10){
    if(n == d) return 1;
    else return 0;
  }
  else{
    if(n % 10 == d) return 1 + count_digit_occurance(n/10, d);
    else return count_digit_occurance(n/10,d);
  }
}
