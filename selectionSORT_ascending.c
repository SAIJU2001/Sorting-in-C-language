// write a program to perform selection sort in ascending order taking user input.

#include<stdio.h>

int main()
    {
        int index,i,j,small,temp;
		printf("Enter the no of index for the array : ");
        scanf("%d",&index);
		printf("\n");
		int arr[index];

        // array input
        for( i=0 ; i<index ; i++ )
        {
            printf("Enter the value of %dth index of the array : ",i);
            scanf("%d",&arr[i]);
        }
        printf("\n");

        //selection sort logic
        for( i=0 ; i<index-1 ; i++)
        {
            small=i;
            for( j=i+1 ; j<index ; j++ )
            {
                if( arr[small]>arr[j] )
                small=j;
            }
            temp = arr[i];
            arr[i] = arr[small];
            arr[small] = temp;
        }

        //print the array
        for( i=0 ; i<index ; i++ )
        {
            printf("The value of %dth index of the array : %d",i,arr[i]);
            printf("\n");
        }
    }

