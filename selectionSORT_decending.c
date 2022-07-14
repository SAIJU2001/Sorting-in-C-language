// write a program to perform selection sort in decending order taking user input.

#include<stdio.h>

int main()
    {
        int index,i,j,large,temp;
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
            large=i;
            for( j=i+1 ; j<index ; j++ )
            {
                if( arr[large]<arr[j] )
                large=j;
            }
            temp = arr[i];
            arr[i] = arr[large];
            arr[large] = temp;
        }

        //print the array
        for( i=0 ; i<index ; i++ )
        {
            printf("The value of %dth index of the array : %d",i,arr[i]);
            printf("\n");
        }
    }

