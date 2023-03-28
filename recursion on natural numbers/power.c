#include<stdio.h>
int power(int , int); // x^y
int main(){
  int a,b;
  printf("give 2 numbers:");
  scanf("%d %d",&a,&b);
  printf("%d ^ %d = %d",a,b,power(a,b));
  }
int power(int x , int y){
  if( y==0) return 1;
  else return power(x,y-1)*x;
}