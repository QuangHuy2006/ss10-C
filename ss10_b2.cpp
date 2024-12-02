#include <stdio.h>
int main(){
	int arr[]={3,5,1,2,9,6,0};
	int length=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<length;i++){
		for(int j=0;j<length;j++){
			if(arr[j]>arr[j+1]){
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
		}
	}
}
	for(int i=0;i<length;i++){
		printf("%d ", arr[i]);
	}
}