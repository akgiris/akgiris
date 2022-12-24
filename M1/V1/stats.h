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

/**
 * <Stats.h> 
 * <Basic Embedded C Header file >
 *
 * <For Coursera Cours written by Abdulkadir Giris the header file includes 7 fuction header and describtions>
 *
 * @author <Abdulkadir Giris>
 * @date <24.12.2022 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* The find_max function is when Given an array of data and a length, returns the maximum. */

int find_max(int a[],int n,int i);

/* The find_min function is when Given an array of data and a length, returns the minimum. */

int find_min(int a[],int n,int i);

/* The find_mean function is when Given an array of data and a length, returns the mean. */

void find_mean(int a[],int n);

/* The find_median function is when Given an array of data and a length, returns the median value. */

int find_median(int a[],int n,int i);

/* The print_array function is when Given an array of data and a length, prints the array to the screen */ 

int print_array(int a[],int n);


/* The print_statisticks function prints the statistics of an array including minimum, maximum, mean, and median. */ 

int print_statisticks(int a[],int n,int min,int max,int mean,int median);

/* The find_median function is when Given an array of data and a length,  sorts the array from largest to smallest. */

void Sort_array( int a[],int n);


#endif /* __STATS_H__ */


