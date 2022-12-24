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

int find_mean(int a[],int n)
 { 	   	
		int toplam = 0;
		int mean=0;
		
	 
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

int find_median(int a[],int n)
{
    int median=0;
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

	printf("\nMean of array is : %d ",(find_mean(a,n)));

	median = find_median(a,n);

	printf("\nThe median of the array is : %f\n",median);

}

/* Size of the Data Set */
#define SIZE (40)



int main()
{

    int choosing ;
    int a[1000],i,n,sum;
    float median=0;


    int test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                                114, 88,   45,  76, 123,  87,  25,  23,
                                200, 122, 150, 90,   92,  87, 177, 244,
                                201,   6,  12,  60,   8,   2,   5,  67,
                                  7,  87, 250, 230,  99,   3, 100,  90};
    
    		

    printf("\n\nWHAT DO YOU WANT TO SEE , PLEASE CHOOSE BELOW\n\n\n1:To see Minimum Value of the array\n2:To see Maximum Value of the array\n3:To see Mean Value of the array\n4:Sorting the array from largest to smallest\n5:To see Meadian Value of the array\n6:Print to array to the screen\n7:Print the array statistic values(Minimum,Maximum,Mean,Median)\n\n\n") ;

    printf("Please choose:") ;
    scanf("%d",&choosing);

    switch(choosing){

	case 1 :

	     

     printf("minimum of array is : %d \n",test[(find_min(test,40,1))]);

     
	return main();

	case 2 :

			
   
      

        printf("\nmaximum of array is : %d\n",test[(find_max(test,40,1))]);
	return main();

	case 3 :
    

	printf("\nMean of array is :%d \n",(find_mean(test,40)));
	/*find_mean(a,n);*/

	return main();

	case 4 :
	
	Sort_array(test,40);





	return main();


	case 5 :

	
	median = find_median(test,40);

	printf("\nThe median of the array is : %f",median);

	printf("\n");

	return main();


	case 6 :

	
	print_array(test,40);


	return main();



	case 7 :

	

	print_statisticks(test,40);



	return main();

	default:
		printf("Please enter valid value \n" );
		
	return main();
     }     
}

