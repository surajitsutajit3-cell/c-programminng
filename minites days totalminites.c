
int main()
{
int minites,hours,totalminites;
    printf("Enter the number of minites:");
    scanf("%d",&minites);

    hours=minites/60;
   totalminites=minites%60;

    printf("hours=%d\n",hours);
    printf("minites=%d\n",totalminites);
        

    return 0;
    
}
