#include <stdio.h>
#include <algorithm>
	int cntsort[10000001];
int main(){
	int a[1000];
	int n;
	scanf("%d", &n);
	int m;
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
		cntsort[a[i]]++;
		m=std::max(m,a[i]);
	}
	for(int i=0;i<=m;i++){
		if(cntsort[i]!=0){
			for(int j=0;j<cntsort[i];j++){
				printf("%d ", i);
			}
		}
	}
	return 0;
}