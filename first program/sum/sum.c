//Calculating the sum of the elements

#include<stdio.h>
int main(void)
{
    FILE *fpt;
    fpt=fopen("sum_avg.txt","w");
    int i=1,sum=0,count;
    count=0;
    printf("Enter the numbers\nPress 0 to exit\n");
    while(i!=0)
    {
        scanf("%d",&i);
        sum+=i;
        count++;
    }
    fprintf(fpt,"%d %d",sum,count-1);
    fclose(fpt);
    
}