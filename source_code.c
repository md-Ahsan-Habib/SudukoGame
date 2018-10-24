#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
 int main()
{
      char p[9];
      int x;
    int m;
      int arra[9][9]={
        0,7,0,0,0,0,5,0,0,
        3,0,2,0,7,0,9,1,0,
        6,0,0,9,0,0,0,0,0,
        0,0,0,0,0,0,0,2,6,
        0,2,0,3,0,0,1,5,9,
        7,9,0,6,0,5,0,8,0,
        1,0,9,7,0,0,0,0,0,
        4,5,0,0,0,0,2,3,0,
        0,3,8,4,5,0,6,0,0};
     int arra2[9][9]=
        {   9,7,4,2,1,3,5,6,8,
            3,8,2,5,7,6,9,1,4,
            6,1,5,9,8,4,3,7,2,
            5,4,3,1,9,8,7,2,6,
            8,2,6,3,4,7,1,5,9,
            7,9,1,6,2,5,4,8,3,
            1,6,9,7,3,2,8,4,5,
            4,5,7,8,6,9,2,3,1,
            2,3,8,4,5,1,6,9,7
        };
    int window1;
     int z,t,s,q,w,i,j,k;
    window1=initwindow(630,630,"",true,true);
    setcurrentwindow(window1);
    k=0,t=0,s=0,q=0;
    setcolor(2);
    settextstyle(9,HORIZ_DIR,2);
     outtextxy(20,50,"A PROJECT USING C PROGRAMMING: ");
    outtextxy(20,100,"SUDOKU GAME");
    outtextxy(20,150,"SUBMITTED BY:");
    outtextxy(20,200,"180211,180212,180219,180231");

    outtextxy(20,300,"PRESS ANY KEY TO START THE GAME");
    getch();
    cleardevice();
     setcolor(BLUE);
   setfillstyle(3,8);
    setbkcolor(14);
   floodfill(100,100,8);
     for(i=0;i!=9;i++)
     {
         rectangle(0+s,0,70+t,70);
         s+=70;
         t+=70;
     }
     s=0;t=0;
     for(i=0;i!=9;i++)
      {

         rectangle(0+s,70,70+t,140);

         s+=70;
         t+=70;
     }
        s=0;t=0;
     for(i=0;i!=9;i++)
      {line(420,0,420,630);

         rectangle(0+s,140,70+t,210);
         s+=70;
         t+=70;
     }
         s=0;t=0;
     for(i=0;i!=9;i++)
      {

         rectangle(0+s,210,70+t,280);
         s+=70;
         t+=70;
     }
         s=0;t=0;
     for(i=0;i!=9;i++)
      {

         rectangle(0+s,280,70+t,350);
         s+=70;
         t+=70;
     }
         s=0;t=0;
     for(i=0;i!=9;i++)
      {

         rectangle(0+s,350,70+t,420);
         s+=70;
         t+=70;
     }
         s=0;t=0;
     for(i=0;i!=9;i++)
      {

         rectangle(0+s,420,70+t,490);
         s+=70;
         t+=70;
     }
         s=0;t=0;
     for(i=0;i!=9;i++)
      {

         rectangle(0+s,490,70+t,560);
         s+=70;
         t+=70;
     }
         s=0;t=0;
     for(i=0;i!=9;i++)
      {

         rectangle(0+s,560,70+t,630);
         s+=70;
         t+=70;
     }
setcolor(RED);
//bar(210,0,215,630);
line(210,0,210,630);
line(420,0,420,630);
line(0,210,630,210);
line(0,420,630,420);
setcolor(BLACK);
   for(i=0;i!=9;i++)
    {
        for(j=0;j!=9;j++)
        {
        if (arra[i][j]==0){
        setcolor(RED);
        settextstyle(1,HORIZ_DIR,3);
        sprintf(p,"%d",arra[j][i]);
        outtextxy(35+(i*70),35+(j*70),p);
        }
       else{
            setcolor(GREEN);
        settextstyle(1,HORIZ_DIR,3);
        sprintf(p,"%d",arra[j][i]);
        outtextxy(35+(i*70),35+(j*70),p);

       }
        }
    }


       for (i=0;i!=9;i++)
    {
        for(j=0;j!=9;j++)
        {

            if (arra[i][j]==0)
            {
               as:
                printf("%d row %d colum POSITONAL NUMBER: ",(i+1),(j+1));
                scanf("%d",&arra[i][j]);
    for(k=0;k!=9;k++)
    {
        for(m=0;m!=9;m++)
        {
        if(arra[m][k]==arra2[m][k])
        {
            setcolor(GREEN);
        }
        if(arra[m][k]!=arra2[m][k])
        {
            setcolor(RED);
        }
        sprintf(p,"%d",arra[m][k]);
        settextstyle(1,HORIZ_DIR,3);
        outtextxy(35+(k*70),35+(m*70),p);

        }
    } printf("do you want to replace your answer? then press 1 or press any other key ::\n");
            scanf("%d",&x);
            if(x==1)
            {
               goto as;

            }

            }

        }printf("\n");
    }
setcolor(GREEN);
line(210,0,210,630);
line(420,0,420,630);
line(0,210,630,210);
line(0,420,630,420);
     int count=0;
     cleardevice();
       for (i=0;i!=9;i++)
    {
        for(j=0;j!=9;j++)
        {
            if(arra2[i][j]!=arra[i][j])
            {
                count++;
            }
        }
    }
      if (count==0)
    {
        setcolor(GREEN);
        outtextxy(50,350,"WELL DONE ");
    }
    else{
        while (!kbhit())
        {
            for (i=0;i<16;i++)
            {
                setcolor(i);
                settextstyle(5,HORIZ_DIR,4);
                outtextxy(10,100,"BETTER LUCK NEXT TIME ");
                delay(200);
            }
        }
    }
    getch();
    getch();
    closegraph();
    return 0;
}
