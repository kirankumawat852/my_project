# my_project
#include<stdio.h>
#include<graphics.h>
int main()
{
    int gd=DETECT,gm;
    int j,x,y,i,k,l;
    initgraph(&gd,&gm,(char*)"");
    x=getmaxx()/2;
    y=getmaxy()/2;
    for(i=10;i<200;i++)
    {
        delay(5);
        setcolor(i/10);
        arc(x,y,0,90,i-20);
    }
    for(j=10;j<200;j++)
    {
        delay(5);
        setcolor(j/10);
        arc(x,y,180,270,j-20);

    }
        for(k=10;k<200;k++)
        {
           delay(5);
        setcolor(k/10);
        arc(x,y,90,180,k-20);
        }
         for(l=10;l<200;l++)
        {
           delay(5);
        setcolor(l/10);
        arc(x,y,270,360,l-20);
        }
        getch();
        }
