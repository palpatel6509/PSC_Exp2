#include<stdio.h>
int main()
{
    int td,y,m,d;
    
    /* td = TOTAL DAYS
        y = YEARS
        m = MONTHS
        d = DAYS */

    printf("Enter the number of Total days:\n");
    scanf("%d",&td);

    /* FOR EXACT NUMBER OF YEAR */
    y = td / 365;

    /* REMAINING NUMBER OF DAYS */
    td = td % 365;

    /* FOR EXACT NUMBER OF MONTHS */
    m = td / 30;

    /* REMAINING NUMBER OF DAYS */
    td = td % 30;

    /* FOR EXACT NUMBER OF DAYS */
    d = td;

    printf("The exact number of Year , Months and Days are respectively %d Years %d Months and %d Days\n",y,m,d);

    return 0;
}