#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Работу выполнил:
Карпов М.Е. Группа: М022
Програма высчитывает место нахождения на плоскости точки с произвольно заданными координатами.
Входные и выходные данные:
1)X=0.5
  Y=1
  M1
2)X=-1
  Y=-0.5
  M2
3)X=1.5
  Y=0
  M3
4)X=0
  Y=-1.5
  M4
5)X=1.8
  Y=-1.8
  M5
6)X=0
  Y=0
  (0,0)

*/
int main()
{
    float x,y,area;
    int prin, cycle;
    do {
    printf("Enter x:");
    scanf("%f",&x);
    printf ("Enter y:");
    scanf("%f",&y);

    /*(0,0)*/if ((x==0)&&(y==0)){
    prin=0;
    }
    /*M1*/else if ((x<1)&&(x>0)&&(y>0)&&(y<2)&&((x-1)*(x-1)+(y-1)*(y-1))<1){
    prin=1;
    }
    /*M2*/else if ((x>-2)&&(x<0)&&(y<0)&&(y>-1)&&(x*x+y*y>1)&&((x+1)*(x+1)+(y+1)*(y+1)<1)&&(y>(-x-2))){
    prin=2;
    }
    /*M3*/else if ((y<(-x+2))&&(y>(x-2))&&(x>1)&&(x<2)&&(y>-1)&&(y<1)&&((x-1)*(x-1)+(y-1)*(y-1)>1)){
    prin=3;
    }
    /*M4*/else if ((x>-1)&&(x<1)&&(y>-2)&&(y<-1)&&(y>x-2)&&((x+1)*(x+1)+(y+1)*(y+1)>1)&&((x-1)*(x-1)+(y+1)*(y+1)>1)){
    prin=4;
    }
    /*M5*/else if ((x>1)&&(x<2)&&(y>-2)&&(y<-1)&&((x-1)*(x-1)+(y+1)*(y+1)>1)){
    prin=5;
    }
    /*Вне Системы*/ else if ((x>2)||(x<-2)||(y<-2)||(y>2)){
    {prin=6;}
    }
    else {prin=7;}

    switch (prin){
    case 0: printf ("tochka v nachale koordinat\n");
    break;
    case 1: printf ("Tochka v oblasti M1\n");
    area=(M_PI/4)+(1-M_PI/4);
    printf ("Ploshad' M1:%.2f\n",area);
    break;
    case 2: printf ("Tochka v oblasti M2\n");
    area=(M_PI/8)+(1-M_PI/4);
    printf("Ploshad' M2:%.2f\n",area);
    break;
    case 3: printf ("Tochka v oblasti M3\n");
    area=(1+1-M_PI/4)/2;
    printf("Ploshad' M3:%.2f\n",area);
    break;
    case 4: printf ("Tochka v oblasti M4\n");
    area=(1-M_PI/4)/2+1-M_PI/4;
    printf ("Ploshad' M4:%.2f\n",area);
    break;
    case 5: printf ("Tochka v oblasti M5\n");
    area=1-M_PI/4;
    printf("Ploshad' M5:%.2f\n",area);
    break;
    case 6: printf ("Tochka za predelami sistemy\n");
    break;
    case 7: printf ("Tochka ni v odnoy iz oblastey\n");
    break;
    default: printf ("Dannie nekkorektny.\n");
    prin=0;
    break;
    }

    printf ("Hotite li prodolzhyt' ?\n >=1 - da, 0 - net\n Vvedite >=1 ili o: ");
    scanf ("%d",&cycle);
    }
    while (cycle!=0);

    return 0;
}
