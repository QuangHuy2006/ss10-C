#include <stdio.h>
#include <algorithm>
int main(){
	int a,b,n;
	int ar1d[100];
	printf("nhap so hang va cot:");
	scanf("%d%d", &a, &b);
	int ar2d[a][b];
	n=a*b;
	printf("nhap cac phan tu trong mang(%d phan tu):", n);
	for(int i=0;i<n;i++){
		scanf("%d", &ar1d[i]);
	}
	
	for(int h=1;h<n;h++){
		int x= ar1d[h], pos=h-1;
		while(pos>=0 && x<ar1d[pos]){
			ar1d[pos+1]=ar1d[pos];
			--pos;
		}
		ar1d[pos+1]=x;
	}
	int k=0;
	for(int u=0;u<a;u++){
		for(int j=0;j<b;j++){
			if(k<n){
				ar2d[u][j]=ar1d[k++];
			}else {
				ar2d[u][j]=0;
			}
		}
	}
	for(int u=0;u<a;u++){
		for(int j=0;j<b;j++){
			printf("%d ", ar2d[u][j]);
		}
		printf("\n");
	}
}
	