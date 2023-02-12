#include<stdio.h>
int main(){
	int s,i,n,arr[50],ne,choice,de,number,choic,flag=69;
	printf("Enter the size of array: ");
	scanf("%d",&s);
	for(i=0;i<s;i++){
		printf("Element %d: ",i+1);
		scanf("%d",&n);
		arr[i]=n;
	}
	printf("Array :");
	for(i=0;i<s;i++){
		printf("%d ",arr[i]);
	}
	while(flag!=0){
		printf("\n1 to Insert new Element\n2 to Delete an Element\n3 to Terminate\nChoice = ");
	    scanf("%d",&choice);
		if(choice==1){
			s++;
			printf("\nInsert an element: ");
			scanf("%d",&ne);
			arr[i]=ne;
			printf("\nUpdated Array: ");
			for(i=0;i<s;i++){
			printf("%d ",arr[i]);
	        }
		}
		if(choice==2){
			printf("1 to delete from beginning\n2 to delete from the end \n");
			scanf("%d",&choic);
			printf("Enter the number of elements to be deleted: ");
			scanf("%d",&number);
			printf("\nUpdated Array: ");
			if(choic==1){
				for(i=number;i<s;i++){
					printf("%d ",arr[i]);
				}
			}
			if(choic==2){
				for(i=0;i<s-number;i++){
					printf("%d ",arr[i]);
				}
			}	
		}
		if(choice==3){
			printf("Program Terminated, Have a nice day!");
			flag=0;
		}
    }
	
}
