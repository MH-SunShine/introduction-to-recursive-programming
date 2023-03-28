#include<stdio.h>
#include<math.h>
#include<stdbool.h>
int read(){
	int nbr;
	printf("Give a positive integer:");
	scanf("%d",&nbr);
	if(nbr>0)
	return nbr;
	else
	return read();
}
int countDigits(int nbr){
	if(nbr<10) return 1;
	else return 1+countDigits(nbr/10);
}
int armstrong(int nbr,int count){
	if(nbr<10)
	return pow(nbr,count);
	else return pow(nbr%10,count)+armstrong(nbr/10,count);
}
bool checkArmstrong(int nbr){
	return nbr == armstrong(nbr,countDigits(nbr));
}
int main(){
	int input = read();
	if(checkArmstrong(input) == 0)
	printf("This number is not armstrong");
	else printf("This number is armstrong");
}