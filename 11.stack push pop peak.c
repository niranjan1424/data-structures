#include<stdio.h>
int main(){
	int choice,arr[50],i,size,neww,j,flag=69;
	printf("Enter the size of array: ");
	scanf("%d",&size);
	for(i=0;i<size;i++){
		printf("Element %d :",i);
		scanf("%d",&arr[i]);
	}
	printf("Array : {");
		for(j=0;j<size;j++){
			printf("%d ",arr[j]);
		}
	printf("}\n");
	while(flag!=0){
		printf("\n1.PUSH Element\n2.POP Element\n3.DISPLAY Array\n4.TERMINATE\nOperation: ");
		scanf("%d",&choice);
		if(choice==1){
			printf("Enter the element to be pushed: ");
			scanf("%d",&neww);
			arr[i]=neww;
			i++;
		}
		if(choice==2){
			i--;
			printf("\nElement %d is popped\n",arr[i]);
		}
		if(choice==3){
			printf("Array : {");
			for(j=0;j<i;j++){
				printf("%d ",arr[j]);
			}
			printf("}\n");
		}
		if(choice==4){
			flag=0;
			printf("---PROGRAM TERMINATED---\nHAVE A NICE DAY :-)");
		}
	}
}
