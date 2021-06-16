

/*-------------------- BUBBLE SORT METHOD ----------------------------*/

/*	THIS PROGRAM SORTS THE INPUT ARRAY INTO ASCENDING ORDER
	USING BUBBLE SORT METHOD.

	INPUTS :  1) The total number of elements to be sorted.

		  2) Array of numbers.

	OUTPUTS : Sorted array of elements.                            */

/*------------------------------    PROGRAM  ----------------------------*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>

void main()
{
    double x[100],z;         /*DECLARATION OF ARRAY */
    int i,n,k;
    clrscr();
    printf("\n      Computational Techniques - J. S. CHITODE");
    printf("\n                    BUBBLE SORT METHOD\n");
    printf("\n\nEnter the total number of elements "
           "to sorted (max 100) = ");
    scanf("%d",&n);      /* ENTER THE NUMBER OF ELEMENTS TO BE SORTED */
    for(i = 0; i < n; i++)
        {
            /* LOOP TO ENTER ACTUAL VALUES OF ARRAY ELEMENTS  */
            printf("\nx%d = ",i);
            scanf("%lf",&x[i]);
        }
    for(i = 0; i < n-1; i++)
        {
            /* LOOP TO SORT THE ARRAY */
            for(k = 0; k < n-1; k++)
                {
                    if(x[k] > x[k+1])
                        {
                            z = x[k];
                            x[k] = x[k+1];
                            x[k+1] = z;
                        }
                }
        }
    printf("\nThe sorted array in ascending order is ....\n");
    for(i = 0; i < n; i++)
        {
            /* LOOP TO PRINT  THE ARRAY */
            printf("\nx%d = %lf",i,x[i]);
        }
}

/*------------------------ END OF PROGRAM ------------------------------*/
