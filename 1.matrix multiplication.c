#include<stdio.h>    
#include<stdlib.h>  
int main()
{  
    int a[10][10],b[10][10],mul[10][10],r,c,i,j,k;    
    system("cls");  
    printf("Enter the Number of Rows: ");    
    scanf("%d",&r);    
    printf("Enter the Number of Column: ");    
    scanf("%d",&c);    
    printf("Enter the 1st Matrix Element: \n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            scanf("%d",&a[i][j]);    

        }    

    }    
    printf("Enter the 2nd Matrix Elements : \n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            scanf("%d",&b[i][j]);    

        }    

    }    
    printf("Matrix multiplication : \n");    
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            mul[i][j]=0;    
            for(k=0;k<c;k++)    
            {    
                mul[i][j]+=a[i][k]*b[k][j];    

            }    

        }    

    }       
    for(i=0;i<r;i++)    
    {    
        for(j=0;j<c;j++)    
        {    
            printf("%d\t",mul[i][j]);    

        }    
        printf("\n");    

    }    
    return 0;  

}
