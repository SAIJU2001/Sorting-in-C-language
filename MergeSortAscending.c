// write a program to perform merge sort in ascendeing order.

#include<stdio.h>

void conquer( int arr[], int si, int mid, int ei)
    {
        int i,j;
		int merged[ei-si+1];
        int idx1=si;
        int idx2=mid+1;
        int x=0;

        while( idx1<=mid && idx2<=ei )
        {
            if( arr[idx1]<=arr[idx2])
                merged[x++]=arr[idx1++];
            else
                merged[x++]=arr[idx2++];
        }
        while( idx2<=ei )
        {
                merged[x++]=arr[idx2++];
        }
        while( idx1<=mid )
        {
                merged[x++]=arr[idx1++];
        }

        for( i=0,j=si ; i<ei-si+1 ; i++,j++)
        {
            arr[j]=merged[i];
        }

    }
    
void divided( int arr[], int si, int ei)
    {
        if( si>=ei )
        return;

        int mid = si+(ei-si)/2;
        divided( arr, si, mid);
        divided( arr, mid+1, ei);
        conquer( arr ,si, mid, ei);
    }
	
int main()
    {
       int i,size;
	   printf("Enter the no of index you want : ");
    	scanf("%d",&size);
        int arr[size];
		printf("\n");
        for( i=0 ; i<size ; i++)
            {
                printf("Enter the value of index no %d is : ",i);
                scanf("%d",&arr[i]);
            }
            printf("\n");
        int si=0;
        int ei=size-1;      
        divided( arr, si, ei);

        //print output
        printf("The result of merge sort : ");
        for(i=0 ; i<size ; i++)
        {
            printf("%d ",arr[i]);    
        }
    }

