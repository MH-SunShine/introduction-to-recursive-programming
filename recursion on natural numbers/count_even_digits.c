#include<stdio.h>
int count_even_digits( int );
int main(){
  int num;
  printf("give an integer number:");
  scanf("%d",&num);
  printf("number of even digits in %d = %d",num,count_even_digits(num));
}
int count_even_digits(int n){
  if(n<10){
    if(n % 2 == 0) return 1;
    else return 0;
  }else{
    if((n % 10) % 2 == 0) return 1 + count_even_digits(n/10);
    else return count_even_digits(n/10);
  }
}