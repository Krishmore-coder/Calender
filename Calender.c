#include<stdio.h>
#include<conio.h>
void month();
void days(char k);
void d_31(int g);
void d_30(int g);
void feb(int g);
void main()
{
    int n;
    do
    {
        month();
        printf("\nDo you want to exit(Yes-1/No-0): ");
        scanf("%d",&n);
    } while (n==0);
    printf("\nThank You!");
    getch();
}
void month()
{
    char k;
    printf("--------------------------------------------------------------------------------------------");
    printf("\na)January\nb)Februrary\nc)March\nd)April\ne)May\nf)June\ng)July\nh)August\ni)September\nj)October\nk)November\nl)December\n");
    printf("Enter what you want to see: ");
    k = getche();
    days(k);
}
void days(char k)
{
    int g;
    if(k=='a' || k=='c' || k=='e' || k=='g' || k=='h' || k=='j' || k=='l')
    {
        printf("\n1.Monday\t2.Tuesday\t3.Wednesday\t4.Thurday\t5.Friday\t6.Saturday\t7.Sunday: ");
        printf("\nWhere this month start from: ");
        scanf("%d",&g);
        printf("\n");
        d_31(g);
    }
    else
    if(k=='d' || k=='f' || k=='i' || k=='k')
    {
        printf("\n1.Monday\t2.Tuesday\t3.Wednesday\t4.Thurday\t5.Friday\t6.Saturday\t7.Sunday: ");
        printf("\nWhere this month start from: ");
        scanf("%d",&g);
        printf("\n");
        d_30(g);
    }
    else
    if(k=='b')
    {
        printf("\n1.Monday\t2.Tuesday\t3.Wednesday\t4.Thurday\t5.Friday\t6.Saturday\t7.Sunday: ");
        printf("\nWhere this month start from: ");
        scanf("%d",&g);
        printf("\n");
        feb(g);
    }

}
void d_31(int g)
{
    int days,i;
    if(g == 1)
            {
                printf("Mon\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;
                    if(days==32)
                    break;    
                }
                printf("\n\nTue\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days==32)
                    break;   
                }
                printf("\n\nWed\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days==32)
                    break;   
                }
                printf("\n\nThu\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;   
                    if(days==32)
                    break; 
                }
                printf("\n\nFri\t");
                days = 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;    
                    if(days>=32)
                    break;
                }
                printf("\n\nSat\t");
                days = 6;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;   
                    if(days>=32) 
                    break;
                }
                printf("\n\nSun\t");
                days = 7;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;  
                    if(days>=32)
                    break;  
                }
            }
            if(g==2)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 6;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nWed\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nThu\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 6;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
            }
            if(g==3)
            {
                    printf("\n");
                    printf("Mon\t");
                    printf("\t");
                days = 1 + 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 5;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nWed\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nThu\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                
            }
            if(g==4)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 4;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nThu\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
            }
            if(g==5)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 3;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nThu\t");
                printf("\t");
                days = 4 + 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
            }
            if(g==6)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 2;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nThu\t");
                printf("\t");
                days = 4 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nFri\t");
                printf("\t");
                days = 5 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
            }
            if(g==7)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 1;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nThu\t");
                printf("\t");
                days = 4 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nFri\t");
                printf("\t");
                days = 5 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nSat\t");
                printf("\t");
                days = 6 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=32) 
                        break;   
                }
            }
}
void d_30(int g)
{
    int days,i;
    if(g == 1)
            {
                printf("Mon\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;
                    if(days==31)
                    break;    
                }
                printf("\n\nTue\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days==31)
                    break;   
                }
                printf("\n\nWed\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days==31)
                    break;   
                }
                printf("\n\nThu\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;   
                    if(days==31)
                    break; 
                }
                printf("\n\nFri\t");
                days = 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;    
                    if(days>=31)
                    break;
                }
                printf("\n\nSat\t");
                days = 6;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;   
                    if(days>=31) 
                    break;
                }
                printf("\n\nSun\t");
                days = 7;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;  
                    if(days>=31)
                    break;  
                }
            }
            if(g==2)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 6;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nWed\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nThu\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 6;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
            }
            if(g==3)
            {
                    printf("\n");
                    printf("Mon\t");
                    printf("\t");
                days = 1 + 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 5;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nWed\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nThu\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                
            }
            if(g==4)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 4;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nThu\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
            }
            if(g==5)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 3;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nThu\t");
                printf("\t");
                days = 4 + 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
            }
            if(g==6)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 2;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                    break;   
                }
                printf("\n\nThu\t");
                printf("\t");
                days = 4 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                    break;   
                }
                printf("\n\nFri\t");
                printf("\t");
                days = 5 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
            }
            if(g==7)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 1;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nThu\t");
                printf("\t");
                days = 4 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nFri\t");
                printf("\t");
                days = 5 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nSat\t");
                printf("\t");
                days = 6 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days>=31) 
                    break;   
                }
            }
}
void feb(int g)
{
    int days,i;
    char ans;
    printf("Is it leap Year (Yes-y/No-n): ");
    ans = getche();
    printf("\n");
    if(ans == 'n')
    {
        if(g == 1)
            {
                printf("Mon\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;
                    if(days == 29)
                    break;    
                }
                printf("\n\nTue\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29)
                    break;   
                }
                printf("\n\nWed\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29)
                    break;   
                }
                printf("\n\nThu\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;   
                    if(days == 29)
                    break; 
                }
                printf("\n\nFri\t");
                days = 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;    
                    if(days == 29)
                    break;
                }
                printf("\n\nSat\t");
                days = 6;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;   
                    if(days == 29) 
                    break;
                }
                printf("\n\nSun\t");
                days = 7;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;  
                    if(days == 29)
                    break;  
                }
            }
            if(g==2)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 6;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nWed\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nThu\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 6;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
            }
            if(g==3)
            {
                    printf("\n");
                    printf("Mon\t");
                    printf("\t");
                days = 1 + 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 5;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nWed\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nThu\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                
            }
            if(g==4)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 4;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nThu\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
            }
            if(g==5)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 3;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nThu\t");
                printf("\t");
                days = 4 + 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
            }
            if(g==6)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 2;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                    break;   
                }
                printf("\n\nThu\t");
                printf("\t");
                days = 4 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                    break;   
                }
                printf("\n\nFri\t");
                printf("\t");
                days = 5 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
            }
            if(g==7)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 1;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nThu\t");
                printf("\t");
                days = 4 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nFri\t");
                printf("\t");
                days = 5 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nSat\t");
                printf("\t");
                days = 6 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 29) 
                    break;   
                }
            }
    }
    else
    if(ans == 'y')
    {
        if(g == 1)
            {
                printf("Mon\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;
                    if(days == 30)
                    break;    
                }
                printf("\n\nTue\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30)
                    break;   
                }
                printf("\n\nWed\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30)
                    break;   
                }
                printf("\n\nThu\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;   
                    if(days == 30)
                    break; 
                }
                printf("\n\nFri\t");
                days = 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;    
                    if(days == 30)
                    break;
                }
                printf("\n\nSat\t");
                days = 6;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;   
                    if(days == 30) 
                    break;
                }
                printf("\n\nSun\t");
                days = 7;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;  
                    if(days == 30)
                    break;  
                }
            }
            if(g==2)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 6;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nWed\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nThu\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 6;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
            }
            if(g==3)
            {
                    printf("\n");
                    printf("Mon\t");
                    printf("\t");
                days = 1 + 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 5;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nWed\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nThu\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 5;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                
            }
            if(g==4)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 4;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nThu\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 4;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
            }
            if(g==5)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 3;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nThu\t");
                printf("\t");
                days = 4 + 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nFri\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 3;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
            }
            if(g==6)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 2;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                    break;   
                }
                printf("\n\nThu\t");
                printf("\t");
                days = 4 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                    break;   
                }
                printf("\n\nFri\t");
                printf("\t");
                days = 5 + 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nSat\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 2;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
            }
            if(g==7)
            {
                printf("\n");
                printf("Mon\t");
                printf("\t");
                days = 1 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nTue\t");
                days = 2 + 1;
                printf("\t");
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nWed\t");
                printf("\t");
                days = 3 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nThu\t");
                printf("\t");
                days = 4 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nFri\t");
                printf("\t");
                days = 5 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nSat\t");
                printf("\t");
                days = 6 + 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7; 
                    if(days == 30) 
                        break;   
                }
                printf("\n\nSun\t");
                days = 1;
                for(i=1;i<=5;i++)
                {
                    printf("%d\t",days);
                    days = days + 7;
                    if(days == 30)
                    break;
                }
            }
    }
}