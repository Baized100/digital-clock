#include<stdio.h>
#include<conio.h>
void main()
{
    int h,m,s,i;
    printf("Enter the current time hh mm ss : \n");

    printf("Enter hours : ");
    scanf("%d",&h);

    printf("Enter minutes : ");
    scanf("%d",&m);

    printf("enter secound : ");
    scanf("%d",&s);

    while(h<24)
    {
        while(m<60)
        {
            while(s<60)
            {
                sleep(1);
                system("CLS");

                printf("\thh : mm : ss\n");
                s++;

                    printf("\t%d :%d :%d\n",h,m,s);


            }
            m++;
            s=0;
        }
        h++;
        m=0;
    }
    return 0;
}
