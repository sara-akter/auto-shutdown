#include <dos.h>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

 int mt;
 char osno;

void shutdownme()
{
    if ( osno == '1' )
    {
     system("C:\\WINDOWS\\System32\\shutdown -s");
    }

  else if ( osno == '2' )
      {
       system("C:\\WINDOWS\\System32\\shutdown /s /t 0");
      }

   else if ( osno =='3' )
      {
   system("shutdown -P now");
      }
}


int timerunner()
    {
char confirm;
gotoxy(23,16);
printf("Seconds-> ");
scanf("%d",&mt);
gotoxy(23,19);
printf("Do You Want To Turn off Your PC within %d seconds (Y/N)?",mt);
confirm=getch();
clrscr();
gotoxy(23,16);
printf("Your PC will turn off within %d seconds",mt);
delay(3000);
clrscr();
if (confirm == 'y' ||confirm == 'Y')
   {
  for(int i = mt ; i >=0 ; i--)
   { 
     gotoxy(15,15);
     printf("%d",i);
     delay(1000);
     clrscr();
      if ( i == 0 )
      {
      shutdownme();
      }
    }
   }
   else
    {gotoxy(15,15);
    printf("Operation Denied !!!");}
  return 0;
}

int osfunction()
{
 gotoxy(23,2);
 printf("Enter Your Operating System");

 gotoxy(23,4);
 printf("1-> Windows XP");

 gotoxy(23,5);
 printf("2-> Windows 7/8");

 gotoxy(23,6);
 printf("3-> Linux");

 gotoxy(23,7);
 printf("4-> Exit the Program ");

 gotoxy(23,9);
 printf("Hit Option 1 or 2 or 3 or 4");


osno= getch();


switch(osno)
{

case '1':  {  gotoxy(23,12);
	      printf("You Choosed  Windows XP");
	      gotoxy(23,13);
	      printf("Enter Seconds to shutdown Your PC");
	      timerunner();
	      break;
	   }

case '2':  {  gotoxy(23,12);
	      printf("You Choosed  Windows 7 or 8");
	      gotoxy(23,13);
	      printf("Enter Seconds to shutdown Your PC");
	      timerunner();
	      break;
	   }

case '3':  {  gotoxy(23,12);
	      printf("You Choosed Linux");
	      gotoxy(23,13);
	      printf("Enter Seconds to shutdown Your PC");
	      timerunner();
	      break;
	    }

default :   {
	     gotoxy(15,15);
	     printf("Wrong Entry , Unable to Shutdown Computer !!!");
	     break;
	    }

}

 return  0;
}

main()
{
   clrscr();
   osfunction();
   getch();
   return 0;
}