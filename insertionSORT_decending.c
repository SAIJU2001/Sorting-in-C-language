// write a program to perform insertion sort in decending order taking user input.

#include<stdio.h>

int main()
    {
        int unsort,i,j,index;
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

        //insertion sort logic
        for( i=1 ; i<index ; i++)
        {
            j=i-1;
            unsort=arr[i];
            while( j>=0 && arr[j]<unsort )
            {
                arr[j+1]=arr[j];
                j--;
            }
            arr[j+1]=unsort;
        }

        //print the array
        for( i=0 ; i<index ; i++ )
        {
            printf("The value of %dth index of the array : %d\n",i,arr[i]);
        }
    }

