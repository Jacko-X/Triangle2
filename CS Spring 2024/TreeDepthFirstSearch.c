/* This is a C program by Jacqueline Plata for CS1311 2/22/2024 
 *
 * C program for recursive depth first search with an adjacency matrix; Feb 

                  1

                /   \

              2      3

            /   \    /

           4     5  6      */
           
           

#include<stdio.h>

 

                         /*   1  2  3  4  5  6  */

int  a[7][7] =   {0,   0, 0, 0, 0, 0, 0,

                         0,   0, 1, 1, 0, 0, 0,    /* 1 if connected */ 

                         0,   1, 0, 0, 1, 1, 0, 

                         0,   1, 0, 0, 0, 0, 1,

                         0,   0, 1, 0, 0, 0, 0,

                         0,   0, 1, 0, 0, 0, 0,

                         0,   0, 0, 1, 0, 0, 0  };

int reach[7]={0,0,0,0,0,0,0};  /* 1 if visited node already */

int n = 6;   


void dfs(int v)  /* Depth first search of matrix a */
{
	int i; /* index to arrays a and reach */
	
	//printf("\n***Got here in dfs with v = %i. \n", v);
	
	reach[v] = 1; /* Visiting node v */
	for(i = 1;  i<=n; i++) /* check each node for next child */
	{
		if(a[v][i]==1  &&  reach[i]==0) /* Not visited yet */
		{
			printf("\n (from %i) go to %d", v, i); /* Go from v to i */
			dfs(i);
			
		}
		
	}
	
	
	
}


void main(void)
{
	printf("Depth first search of a sixth node binary tree.\n\n"
			"Start the visit at 1.\n");
			
	dfs(1); /* start at route node */
	
	printf("\n\n**** End of depth first search \n");
	
}
