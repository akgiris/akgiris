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
 	   if(i<n)
       {
       	if(a[min]>a[i])
       	 {
			      min=i;
			      find_min(a,n,++i);
			      
        }
	   }
	   
        return min;
 	
 }
int find_max(int a[],int n,int i)
 {
 	   	static int max=0;;
 	   if(i<n)
       {
       	if(a[max]<a[i])
       	 {
			      max=i;
			      find_max(a,n,++i);
			      
        }
	   }
	   
        return max;
 	
 }

void find_mean(int a[],int n)
 { 	   	
		int toplam = 0;
		double mean;
		
	 
		for (int i=0;i<n;i++){
			toplam+=a[i];
		}
		
		
		mean = toplam/n;
		printf("Mean of array is : %.2lf \n",mean);
	   	
   	
 	
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




int main()
{

    int choosing ;
    int a[1000],i,n,sum;
    		

    printf("What do you want , please choose below \n1:Finding the minimum in an array\n2:Finding the maximum in an array\n3:Finding the mean an array\n4:Sorting the array from largest to smallest\n\n\n") ;

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
 
     

     

     printf("\nmaximum of array is : %d",a[(find_max(a,n,1))]);
	break;

	case 3 :
    printf("Enter size of the array : ");
    scanf("%d", &n); 
    
    for(i=0; i<n; i++)
    {
	printf("Enter elements %d in array : ",i+1);
        scanf("%d", &a[i]);
    }

	find_mean(a,n);

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

	default:
		printf("Please enter valid value \n" );
		
	break;
     }     
}

