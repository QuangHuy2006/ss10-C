#include <stdio.h>
int main(){
	int a[]={1,36,12,24,5,0,9};
	int length=sizeof(a)/sizeof(a[0]);
	for(int i=1;i<length;i++){
		int x=a[i], pos=i-1;
		while(pos>=0 && x<a[pos]){
			a[pos+1]=a[pos];
			--pos;
		}
		a[pos+1]=x;
	}
	for(int i=0;i<length;i++){
		printf("%d ", a[i]);
	}
}