#include<stdio.h>
int main()
{
    int ts,h,m,s;

    /* ts = TOTAL SECONDS 
        h = HOURS 
        m = MINUTES
        s = SECONDS */

    printf("Enter the number of Total Seconds:\n");
    scanf("%d",&ts);

    /* FOR EXACT NUMBER OF HOURS */
    h = ts / 3600;

    /* REMAINING NUMBER OF SECONDS */
    ts = ts % 3600;

    /* FOR EXACT NUMBER OF MINUTES */
    m = ts / 60;

    /* REMAINING NUMBER OF SECONDS */
    ts = ts % 60;

    /* FOR EXACT NUMBER OF SECONDS */
    s = ts;

    printf("The exact number of Hours , Minutes and Seconds are respectively %d Hours %d Minutes and %d Seconds\n",h,m,s);

    return 0;
}