#include <stdio.h>
#include <math.h>
int main(){
	int n;
		printf("nhap so phan tu trong mang ");
		scanf("%d",&n);
	int f[n];
	for(int i=0;i<n;i++){
		printf("nhap so thu %d: ",i);
		scanf("%d", &f[i]);		
	}
	int a;//so le cuoi cung trong mang
	for(int i=n-1;i>=0;i--){
		if(f[i]%2==1){
			a=f[i];
			printf("so le cuoi cung trong mang la: %d",a);break;
		}
		
	}
}

