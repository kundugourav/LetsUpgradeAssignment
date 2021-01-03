#include<stdio.h>
int main(){
	long long int arr[10];
	int n,zeros,total=1;
	printf("enter number of input : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%lld",&arr[i]);
		while(arr[i]%10==0){
			zeros+=1;
			arr[i]/=10;
		}
	}
	for(int i=0;i<n;i++){
		total*=arr[i];
	}
	printf("%d",total);
	for(int i=1;i<=zeros;i++){
		printf("0");
	}
}
