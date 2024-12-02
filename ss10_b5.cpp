#include <stdio.h>
int main(){
	int a[]={1,3,5,7,9,11,13,15,17};
	int length=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<length;i++){
		printf("%d ", a[i]);
	}
	int L=0,R=length-1;
	int m=(L+R)/2;
	int x;
	int pos;
	int correct=0;
	printf("\n");
	printf("nhap phan tu ban muon tim:");
	scanf("%d", &x);
	for(int i=0;i<length;i++){
	if(x==a[i]){
		pos=i;
	}
	if(a[m]==x){
		printf("\nFound\n");
		correct++;
	}else if(a[m]<x){
		L=m+1;
		correct++;
	}else {
		R=m-1;
		correct++;
	}
	
}
if(correct){
		printf("tim thay phan tu %d o vi tri %d", x, pos);
	}else {
		printf("khong tim thay phan tu %d", x);
	}	
}