#include <stdio.h>
#include <math.h>
int main(){
	int n,min;
		printf("nhap so phan tu trong mang ");
		scanf("%d",&n);
	int f[n];
	int i;
	for(i=0;i<n;i++){
		printf("nhap so thu %d: ",i);
		scanf("%d", &f[i]);		
	}
    min=f[0];// tim so duong nho nhat
	for(int i=1;i<n;i++){
		if(f[i]<min && f[i]>0){
			min=f[i];	
				}	
		}
		printf("So duong nho nhat la %d", min);	
		
		
}	

