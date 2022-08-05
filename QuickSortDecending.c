// write an algorithm for quick sort(decending order)

	#include<stdio.h>

	void quickSort( int arr[], int low, int high )
    {
        if( low<high )
        {
            int pivotIndex=partition( arr, low, high );

            //for sorting before the pivot element
            quickSort( arr, low, pivotIndex-1 );

            //for sorting after the pivot element
            quickSort( arr, pivotIndex+1, high );
        }
    }
    
	int partition( int arr[] ,int low ,int high )
    {
        //i choose my pivot is highest index element
        int pivot=arr[high];
        //it is the tracker which tracks the smaller element form pivot
        int i=low-1;
        int j,temp;

        for( j=low ; j<high ; j++ )
        {
            if( arr[j]>pivot )
            {
                i++;
                //this swaping is for the bigger element present before the pivot
                temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        } 
        i++;
        temp=arr[i];
        arr[i]=pivot;
        arr[high]=temp;
        return i;
    }
    
	void main()
    {
    	int len,i;
    	
        //input the size of the array
        printf("Enter the length of the array : ");
        scanf("%d",&len);
		printf("\n");

        //creat an array
        int arr[len];

        //input the array elements
        for( i=0 ; i<len ; i++ )
        {
            printf("Enter the value of the index no %d : ",i); 
            scanf("%d",&arr[i]);
        }
        printf("\n");

        //call the method 
        quickSort( arr, 0, len-1 );
        printf("\n");

        //print the sorted array
        printf("After sorting : ");
        for( i=0 ; i<len ; i++ )
        { 
            printf("%d\t",arr[i]);
        }
        printf("\n");
    
    }


