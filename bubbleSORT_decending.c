// write a program to bubble sort in Decending order.

#include<stdio.h>
int main()
    {
        int index,i,j,temp;
        printf("Enter the no of index of the array : ");
        scanf("%d",&index);
        printf("\n");
        int arr[index];

        //array input 
        for ( i=0 ; i<index ; i++ )
        {
            printf("Enter the value of %dth index of the array : ",i);
            scanf("%d",&arr[i]);
        }
        printf("\n");

        //bubble sort logic
        for ( i=0 ; i<index-1 ; i++ )//for bubble sort loop runs n-1 times that's why index-1
        {
            for ( j=0 ; j<index-i-1 ; j++ )
            {
                if( arr[j]<arr[j+1] )
                {
                    temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
        
        //print array
        for ( i=0 ; i<index ; i++ )
        {
            printf("The value of %dth index of the array is : %d",i,arr[i]);
            printf("\n");
        }
    }

