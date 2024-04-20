/* This C program by Jacqueline Plata for CS1311 2/13/2024
* 
* BINARY SEARCH of an integer array */



#include<stdio.h>
#define findvalue 20 /* try out  - 40, 5, 3, 2, 80, 90, 100 */
#define items 10 



void main(void)
{
	/*array to search - chnage it later */
	int scores[items] = {3, 5, 7, 10, 20, 40, 50, 70, 80, 90};
	
	int current = 0, min = 0, max = items-1; /* indexes to scores */
	
	int findme = findvalue;
	
	int i, found = -1, count = 0; /* index to items if found */
	
	printf("This program does a binary search through \n");
	for(i = 0; i < items; i++) /* print each value */
	{
		printf("  %i  ", scores[i]);	
	}
	
	printf("\n\n\n");
	
	while(found == -1 && min != max && count < items) /* item not found */
	{
		count = count + 1;
		if(current == max - 1) /* need to check end of the list */
		{
			current = max;
		}
		else
		{
			current = (min + max)/2; /* go to middle of sublist */
		}
		printf("****count = %i		min = %i	current = %i	max = %i\n",
				 count, min, current, max);
		
		if(scores[current] == findme) /* found item */
		{
			found = current;	
		}
		else
		{
			if(findme < scores[current]) /* search left/top half */
			{	
				max = current;
			}
			else /* seach right/bottom half */
			{
				min = current;
			}
		}
		
	}
	if(found == -1) /* Not found print results */
	{
		printf("\n\n\nItem %i was not found in scores. \n", findme);
	}
	else
	{
		printf("\n\nItem %i was found in spot  %i in scores.\n\n", 
				findme, found+1);
	}
	
	
}

