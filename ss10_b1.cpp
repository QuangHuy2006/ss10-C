#include <stdio.h>
int main(){
	int find,arr[]={1,2,3,4,5,6,7};
	int num=0;
	int pos;
	int length=sizeof(arr)/sizeof(arr[0]);
	printf("nhap mot so bat ky:");
	scanf("%d", &num);
	for(int i=0;i<length;i++){
		if(arr[i]==num){
			find++;
			pos=i;
		}
	}
	if(find){
		printf("vi tri cua phan tu %d la thu %d",num,pos+1 );
	}else{
		printf("mang khong chua phan tu %d", num);
	}
}