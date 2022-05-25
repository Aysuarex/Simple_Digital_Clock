/**
 * @file Clock.c
 * @author Suara Ayomide (aysuarex@gmail.com)
 * 
 * main - A program that reads time in seconds just like normal clock/watch would
 */

#include<stdio.h>
#include<windows.h>

void main()
{
    int h,m,s;
    int p=1000;
    printf("Enter the present time in HH:MM:SS format: \n");
    scanf("%d%d%d", &h,&m,&s);
    
    Start:
    
    if(s>59)
        (s=0,m++);
    if(m>59)
        (m=0,h++);
    if(h>12)
        (h=1,m=0,s=0);
        s++;
        
    system("cls");
    printf("%02d:%02d:%02d",h,m,s);
    Sleep(p); //This makes the clock slow down
        
    goto Start; //Infinite loop
}