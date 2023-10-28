#include<stdio.h>
int main(){
	int n,m,a,k,l;
	do{
	printf("enter the length of the garden:");
	scanf("%d",&n);
    }
    while(n<=1);
    do{
	printf("enter the width of the garden: ");
	scanf("%d",&m);
    }
    while(m<=1);
	printf("enter the size of square: ");
	scanf("%d",&a);
	k=m/a;
	l=n/a;
	if(m%a!=0){
		k++;
	}
	if(n%a!=0){
		l++;
	}
	printf("minimum number of flowers needed:%d ",k*l);
	
}
