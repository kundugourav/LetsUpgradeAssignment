#include<stdio.h>
void rotation(int arr[],int size){
	int temp=arr[0];
	for(int i=0;i<size;i++){
		arr[i]=arr[i+1];
	}
	arr[size-1]=temp;
	for(int i=0;i<size;i++)
	printf("%d\t",arr[i]);
	printf("\n");
}
int main(){
	int k,arr[5]={5,12,7,46,32};
	printf("enter number of left rotation : ");
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		rotation(arr,5);
	}
}
