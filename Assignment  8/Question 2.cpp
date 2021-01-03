#include<stdio.h>
#define MAX 10
int stack[MAX],maximum[MAX],top=-1;

void push(int stack[], int val){
	if(top==MAX-1){
		printf("stack overflow...\n");
	}
	else{
		top++;
		stack[top]=val;
		if(top==0){
			maximum[top]=val;
		}
		else{
			if(maximum[top-1]>val){
				maximum[top]=maximum[top-1];
			}
			else{
				maximum[top]=val;
			}
		}
	}
}
int pop(int stack[]){
	int val;
	if(top==-1){
		printf("stack underflow...\n");
		return -1;
	}
	else{
		val=stack[top];
		top--;
		//maximum
		return val;
	}
}
int peek(int stack[]){
	if(top==-1){
		printf("stack is empty\n");
		return -1;
	}
	else{
		return stack[top];
	}
}
int max(int stack[], int maximum[]){
	if(top==-1){
		return -1;
	}
	return maximum[top];
}

int main(){
	int val,op;
	printf("------MENU-----\n1.PUSH\n2.POP\n3.PEEK\n4.MAXIMUM\n9.EXIT\n");
	while(1){
		printf("\nEnter Option : ");
		scanf("%d",&op);
		if(op==1){
			printf("enter value : ");
			scanf("%d",&val);
			push(stack,val);
		}
		else if(op==2){
			val=pop(stack);
			if(val!=-1)
				printf("\npopped value is %d",val);
		}
		else if(op==3){
			val=peek(stack);
			if(val!=-1)
				printf("\ntop value is %d",val);
		}
		else if(op==4){
			val=max(stack,maximum);
			if(val==-1){
				printf("\nstack is empty");
			}
			else
			printf("\nmax value is %d",val);
		}
		else if(op==9){
			break;
		}
		else{
			printf("wrong option\n");
		}
		
	}
}
