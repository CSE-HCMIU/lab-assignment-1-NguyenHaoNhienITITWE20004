/*
4.	Write a program to display a hollow triangle by asterisks (*) on the screen.
The input will be the height of the triangle and the thickness of the borders.
Ex:
 ____________________________________
| Input: 7 2                         |
| Output:                            |
|             *                      |
|           * * *                    |
|         * *   * *                  |
|       * *       * *                |
|     * *           * *              |
|   * * * * * * * * * * *            |
| * * * * * * * * * * * * *          |
|____________________________________|
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	//testing variable, applying it to your algorithm for auto-evaluating
	int height = atoi(argv[1]);
	int border = atoi(argv[2]);
	//Your codes here
int i, j;
	 for(i=1; i<=height; i++)
	  {
        for(j=1; j<=i; j++)
        { 
			if(j==1 || j==i || i==height)
			{
			 printf("*");}
			  else
            {
                printf(" ");
            }
        }

        printf("\n");
    }
	return 0;
}