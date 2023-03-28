#include<stdio.h>
int count_digits(int);
int main(){
  int nbr;
  printf("give an integer number:");
  scanf("%d",&nbr);
  printf("number of digits in %d = %d",nbr,count_digits(nbr));

}
int count_digits(int n){
  if(n<10) return 1;
  else return 1 + count_digits(n/10);
}