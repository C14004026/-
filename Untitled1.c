#define NSIZE 200
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void sorting(int, int*, int*);
int main()
{
    int number[NSIZE],a[NSIZE],i;
    srand(time(NULL));
    for (i=0;i<NSIZE;i++)
    {
        number[i] = rand()%256;
    }
    sorting(NSIZE, number, a);
    printf("original    sorting\n");
    for (i=0;i<NSIZE;i++)
    {
        printf("   %3d       %3d\n",number[i],a[i]);
    }

    return 0;
}


void sorting(int n, int *s, int *a)
{
    int i,j,c,eq=-1;
    int b = calloc(a,sizeof(n));
    for (i=0;i<n;i++)
    {
        c = 0;
        eq = -1;
        for (j=0;j<n;j++)
        {
            if (s[i]==s[j])
            {
                eq++;
            }
            if (s[i]>s[j])
            {
                c++;
            }
        }
        a[c] = s[i];
        while(eq>0)
        {
            a[c+eq] = s[i];
            eq--;
        }
    }
    return;
}


