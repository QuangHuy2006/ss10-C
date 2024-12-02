#include <stdio.h>
int main(){
	int a[]={1,36,12,24,5,0,9};
	int length=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<length-1;i++){
		int minpos=i;
		for(int j=i+1;j<length;j++){
			if(a[j]<a[minpos]){
				minpos=j;
			}
		}
		int temp=a[i];
		a[i]=a[minpos];
		a[minpos]=temp;
	}
	for(int i=0;i<length;i++){
		printf("%d ", a[i]);
	}
}