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

int main()
{
    int a[1000],i,n,sum;
   
    printf("Enter size of the array : ");
    scanf("%d", &n);
 
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
 
     

     printf("minimum of array is : %d",a[(find_min(a,n,1))]);

     printf("\nmaximum of array is : %d",a[(find_max(a,n,1))]);


    
}

