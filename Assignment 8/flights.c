#include<stdio.h>
#include<string.h>
typedef struct air
{
    char src[4];
    char des[4];
    int start;
    int arrive;
    int seats;
    int count;
}airline_t;
void input(airline_t c[5])
{
    for(int i=0;i<5;i++)
    {
        printf("Enter the source: ");
        scanf("%s",c[i].src);
        printf("\nEnter the destination: ");
        scanf("%s",c[i].des);
        printf("\nEnter the starting time: ");
        scanf("%d",&c[i].start);
        printf("\nEnter the arriving time: ");
        scanf("%d",&c[i].arrive);
        printf("\nEnter the number of seats: ");
        scanf("%d",&c[i].seats);
        c[i].count=0;
    }
}
int main()
{
    int d=1,temp=0,n;
    airline_t c[5];
    input(c);
    char source[4], dest[4];
    printf("Enter your source: ");
    scanf("%s",source);
    printf("Enter your destination: ");
    scanf("%s",dest);
    printf("Start\tEnd\tSeats\n");
    for(int i=0;i<5;i++)
    {
        if(strcmp(c[i].src,source)==0 && strcmp(c[i].des,dest)==0 && c[i].seats>0)
        {
            printf("%d\t%d\t%d\n",c[i].start,c[i].arrive,c[i].seats);
            c[i].count=d;
            d++;
            temp++;
        }
    }
    if(temp==0)
        {
            printf("\nSorry we dont have any flights available");
        }
        else
        {
            printf("Enter the number of flight you want to take: ");
            scanf("%d",&n);
            for(int i=0;i<5;i++)
            {
                if(c[i].count==d)
                    printf("Your flight has been booked for %s to %s timings are as follows: %d to %d. Number of seats remaining: %d",c[i].src,c[i].des,c[i].start,c[i].arrive,--c[i].seats);
            }
        }
    return 0;
}
