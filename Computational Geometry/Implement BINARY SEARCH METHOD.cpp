

#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>

int main()
{
    double x[100],y[100],z;         /*DECLARATION OF ARRAY */
    int i,n,k,j,t;
    
    printf("\n     Computational Techniques - J. S. CHITODE");
    printf("\n              BINARY SEARCH METHOD\n");
    printf("\n\nEnter the total number of elements "
           "in the array(max 100) = ");
    scanf("%d",&n);      /* ENTER THE NUMBER OF ELEMENTS IN THE ARRAY */
    for(i = 0; i < n; i++)
        {
            /* LOOP TO ENTER ACTUAL VALUES OF ARRAY ELEMENTS  */
            printf("\nx%d = ",i);
            scanf("%lf",&x[i]);
        }
    printf("\nEnter the number to be searched = ");
    scanf("%lf",&z);                     /* NUMBER TO BE SEARCHED FOR */
    k = n/2;            /* MIDDLE OF THE ARRAY  */
    t = 0;
    while(k >= 1)
        {
            if(x[0] == z)   /* CHECK IF x[0] IS THE NUMBER TO BE SEARCHED  */
                {
                    printf("match is found at key = 0");
                    break;             /* break IS USED TO GO OUT OF THE LOOP */
                }
            if(x[n-1] == z) /* CHECK IF x[n-1] IS THE NUMBER TO BE SEARCHED*/
                {
                    printf("match is found at key = %d",n-1);
                    break;             /* break IS USED TO GO OUT OF THE LOOP */
                }
            if(x[k] > z)  /* CHECK IN THE TOP HALF */
                {
                    k = (k+1)/2;
                    if(x[k] == z)
                        {
                            printf("match is found at key = %d",k);
                            break;
                        }
                    for(i = 0; i < k; i++)
                        {
                            y[i] = x[i];
                        }
                }
            if(x[k] <= z)  /* CHECK IN THE BOTTOM HALF */
                {
                    k = (k+1)/2;
                    if(x[k] == z)
                        {
                            printf("match is found at key = %d",n-k-1);
                            break;
                        }
                    for(i = k,j = 0; i < n; i++,j++)
                        {
                            y[j] = x[i];
                        }
                }
            for(i = 0; i <= k; i++)
                {
                    x[i] = y[i];    /*FORM THE NEW ARRAY OF k/2 ELEMENTS */
                }
        }
}
/*------------------------ END OF PROGRAM ------------------------------*/
