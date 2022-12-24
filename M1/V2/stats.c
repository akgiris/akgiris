/******************************************************************************
 * Copyright (C) 2022 by Abdulkadir Giris
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Abdulkadir Giris are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/

#include <stdio.h>
#include "stats.h"



int find_min(int a[],int n,int i)
 {
 	static int min=0;;
 	for (i=1;i<n;i++)
        {
       		if(a[min]>a[i])
       		{
			min=i;
			      
        	}
	}
        return min;
 	
 }
int find_max(int a[],int n,int i)
 {
 	static int max=0;;
 	for (i=1;i<n;i++)
        {
       		if(a[max]<a[i])
       		{
			max=i;
			      
        	}
	}
        return max;
 	
 }

float find_mean(int a[],int n)
 { 	   	
		float toplam = 0;
		float mean=0;
		
	 
		for (int i=0;i<n;i++){
			toplam+=a[i];
		}
		
		
		mean = toplam/n;
		/*printf("Mean of array is : %.2lf \n",mean);*/
	   	
   	return mean;
 	
 }

void Sort_array(int a[],int n)
{
	int i,j,temp;
	for (i=0 ; i < n; i++){
		for (j=0 ;j<n;j++){
			if (a[i] > a [j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;	
			}
		}
	}
	
	printf("The array from largest to smallest: ");

	for(i=0;i<n;i++){
		printf("%d, ",a[i]);
	}
	printf("\n");

}

float find_median(int a[],int n)
{
    float median=0;
    
    // if number of elements are even
    if(n%2 == 0)
        median = (a[(n-1)/2] + a[n/2])/2.0;
    // if number of elements are odd
    else
        median = a[n/2];
    
    return median;
}


void print_array(int a[],int n)
{
	int i;
	for (i=0;i<n;i++){	
		printf("   The array value %d is :%d \n",i+1,a[i]);
	}
}


void print_statisticks(int a[],int n)
{
	
	float median=0;

	printf("minimum of array is : %d \n",a[(find_min(a,n,1))]);

	printf("maximum of array is : %d",a[(find_max(a,n,1))]);	

	printf("\nMean of array is : %2f ",(find_mean(a,n)));

	median = find_median(a,n);

	printf("\nThe median of the array is : %f\n",median);

}





int main()
{

    int choosing ;
    int a[1000],i,n,sum;
    float median=0;
    		

    printf("\n\nWHAT DO YOU WANT , PLEASE CHOOSE BELOW\n\n\n1:Finding the minimum in an array\n2:Finding the maximum in an array\n3:Finding the mean an array\n4:Sorting the array from largest to smallest\n5:Finding of the array Meadian Value\n6:Printing to array to the screen\n7:Print an array statistic values(Minimum,Maximum,Mean,Median)\n\n\n") ;

    printf("Please choose:") ;
    scanf("%d",&choosing);

    switch(choosing){

	case 1 :

		
   
    printf("Enter size of the array : ");
    scanf("%d", &n); 
    
    for(i=0; i<n; i++)
    {
	printf("Enter elements %d in array : ",i+1);
        scanf("%d", &a[i]);
    }
 
     

     printf("minimum of array is : %d \n",a[(find_min(a,n,1))]);

     
	break;

	case 2 :

			
   
    printf("Enter size of the array : ");
    scanf("%d", &n); 
    
    for(i=0; i<n; i++)
    {
	printf("Enter elements %d in array : ",i+1);
        scanf("%d", &a[i]);
    }
 
     

     

     printf("\nmaximum of array is : %d\n",a[(find_max(a,n,1))]);
	break;

	case 3 :
    printf("Enter size of the array : ");
    scanf("%d", &n); 
    
    for(i=0; i<n; i++)
    {
	printf("Enter elements %d in array : ",i+1);
        scanf("%d", &a[i]);
    }


	printf("\nMean of array is :%.2f \n",(find_mean(a,n)));
	/*find_mean(a,n);*/

	break;

	case 4 :
	printf("Enter size of the array : ");
  	scanf("%d", &n); 
    
    for(i=0; i<n; i++)
    {
	printf("Enter elements %d in array : ",i+1);
        scanf("%d", &a[i]);
    }

	Sort_array(a,n);





	break;


	case 5 :

	printf("Enter size of the array : ");
  	scanf("%d", &n); 
    
    for(i=0; i<n; i++)
    {
	printf("Enter elements %d in array : ",i+1);
        scanf("%d", &a[i]);
    }

	median = find_median(a,n);

	printf("\nThe median of the array is : %f",median);

	printf("\n");

	break;


	case 6 :

	printf("Enter size of the array : ");
  	scanf("%d", &n); 
    
    for(i=0; i<n; i++)
    {
	printf("Enter elements %d in array : ",i+1);
        scanf("%d", &a[i]);
    }
	print_array(a,n);


	break;



	case 7 :

	printf("Enter size of the array : ");
  	scanf("%d", &n); 
    
    for(i=0; i<n; i++)
    {
	printf("Enter elements %d in array : ",i+1);
        scanf("%d", &a[i]);
    }

	print_statisticks(a,n);



	break;

	default:
		printf("Please enter valid value \n" );
		
	break;
     }     
}

