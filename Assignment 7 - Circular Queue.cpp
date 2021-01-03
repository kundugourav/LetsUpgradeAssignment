#include<stdio.h>
#define MAX 10
int arr[MAX],rear=-1,front=-1,n;

void insert(int value){
	if(((rear+1)%MAX)==front){
		printf("Overflow....");
	}
	else if(front!=0 && rear==MAX-1){
		rear=0;
		arr[rear]=value;
	}
	else if(front==-1 && rear== -1){
		front=0;
		rear=0;
		arr[rear]=value;
	}
	else{
		arr[++rear]=value;
		printf("%d",rear);
	}
	
}

int deletion(){
	if(front==-1 && rear==-1){
		printf("Underflow...");
		return -1;
	}
	int val=arr[front];
	if(front==rear){
		front=-1;
		rear=-1;
	}
	else{
		if(front==MAX-1){
			front=0;
		}
		else{
			front++;
		}
	}
	printf("%d",front);
	return val;
}

void display(){
	if(front==-1 && rear==-1){
		printf("empty queue\n");
	}
	else if(front<=rear){
		for(int i=front;i<=rear;i++){
			printf("%d\t",arr[i]);
		}
	}
	else{
		for(int i=front;i<MAX;i++){
			printf("%d\t",arr[i]);
		}
		for(int i=0;i<=rear;i++){
			printf("%d\t",arr[i]);
		}
	}
	
}

int main(){
	printf("-----MENU-----\nenter 1 for insertion\nenter 2 for deletion\nenter 3 for display\nenter 9 to exit");
	int value;
	while(1){
		printf("\nenter option : ");
		scanf("%d",&n);
		if(n==1){
			printf("enter number : ");
			scanf("%d",&value);
			insert(value);
		}
		else if(n==2){
			int val=deletion();
			if(val!=-1)
			printf("%d is deleted",val);			
		}
		else if(n==3){
			display();
		}
		else if(n==9){
			break;
		}
		else{
			printf("wrong option");
		}
	}
}
