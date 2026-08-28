#include <stdio.h>
void main() {

    int m,h;

    printf("Enter hour and minute : ");
    scanf("%d %d",&h,&m);

    int m_h,h_h,angle;

    m_h=(6*m);
    h_h=(30*h)+(0.5*m);
    angle=h_h-m_h;

    if(angle>180)
        printf("Angle : %d",(360-angle));
    else
        printf("Angle : %d",angle);
}