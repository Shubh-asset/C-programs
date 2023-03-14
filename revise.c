#include <stdio.h>

int main()
{
//1
    // int p, n, m, k;
    // float si, r;
    // p=1000;
    // n=3;
    // r=8.5;

    // si=p*n*r/100;
    // printf("%0.2f",si);
    // printf("\nthe values of p, n, r, si are: ");
    // printf("%d, %d, %0.2f, %0.2f ",p,n,r,si);
    // printf("\n%d", p*n);
    // printf("\n\nnow enter some other values: \n");
    // scanf(&m, &k);

//2
    // float bs, da, ra, grosssal;

    // printf("your salary: ");
    // scanf("%f", &bs);
    // da=0.4*bs;
    // printf("\ndearest allowance is: %0.2f", da);
    // ra=0.2*bs;
    // printf("\nrent allowance: %0.2f", ra);
    // grosssal=da+ra+bs;
    // printf("\ntotal salary: %0.2f", grosssal);

//3
    int m1, m2, m3, m4, m5;
    printf("write your marks in all 5 subjects out of 100: ");
    scanf("%d %d %d %d %d", &m1, &m2, &m3, &m4, &m5);

    float aggr;
    aggr=m1+m2+m3+m4+m5;
    printf("\naggregate marks are: %0.2f", aggr);

    float perc;
    perc=(aggr/500)*100;
    printf("\npercentage is: %0.2f", perc);

//4
        

    return 0;
}