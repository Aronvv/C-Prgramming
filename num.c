#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int countDigits(int a){
	int nDigits;
	if(a!=0){
		nDigits = floor(log10(abs(a))) + 1;
	return nDigits;
	}
	else 
	exit(0);
}
int* explodeInt(int a){
	int rem,i,*arr;
	i=countDigits(a)-1;
	arr =(int *) malloc (sizeof(int)*i);
	while(a>0){
		rem=a%10;
		a=a/10;
		arr[i]=rem;
		i--;
	}
	return arr;
}
void printarr(int *arr,int a){
	int i,nDigits;
	nDigits=countDigits(a);
	for(i=0;i<nDigits;i++)
	printf("%d ",arr[i]);
}
int implodeInt(int *arr,int a){
	int i,num=0,nDigits;
	nDigits=countDigits(a);
	for(i=0;i<nDigits;i++)
		num=10*num+arr[i];
		return num;
	
}

void main(){
	int a,*arr;
	printf("Enter a no.");
	scanf("%d",&a);
	arr=explodeInt(a);
	printarr(arr,a);
	printf("%d",implodeInt(arr,a));
	}
