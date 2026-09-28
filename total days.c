
int main()
{
int days,months,totaldays;

 printf("Enter the number of days");
  scanf("%d",&days);
    
   months=days/30;
   totaldays=days%30;
    printf("months=%d\n",months);
    printf("days=%d\n",totaldays);


    return 0;
    
}
