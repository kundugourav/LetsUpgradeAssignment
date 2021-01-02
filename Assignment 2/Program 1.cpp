#include<stdio.h>
void deleteFromBeg(int arr[],int *i){
	for(int j=0;j<*i;j++){
		arr[j]=arr[j+1];
	}
	--*i;
}

void deleteFromAnyPosition(int arr[],int *i,int pos){
	for(int j=pos-1;j<*i;j++){
		arr[j]=arr[j+1];
	}
	--*i;
}

void printArr(int arr[],int *i){
	for(int j=0;j<=*i;j++)
	printf("%d\t",arr[j]);
	printf("\n");
}

int main(){
	int arr[15]={7,65,2,47,3,50,132,5,78,32,12},n,index=10,pos;
	printf("-----MENU-----\nPress 1 to delete element from beginning\nPress 2 to delete element from any position\nPress 3 to print array element\nPress 9 to exit");
	while(1){
		printf("\nenter option : ");
		scanf("%d",&n);
		if(n==1){
			deleteFromBeg(arr,&index);
		}
		else if(n==2){
			printf("array size is : %d\nenter position : ",index);
			scanf("%d",&pos);
			deleteFromAnyPosition(arr,&index,pos);
		}
		else if(n==3){
			printArr(arr,&index);
		}
		else if(n==9){
			break;
		}
		else{
			printf("Wrong Option\n");
		}
	}
}
