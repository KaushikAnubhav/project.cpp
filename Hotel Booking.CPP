#include<stdio.h>
#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<fstream.h>
#include<string.h>
class details
{
private:
char roomtype[20],name[50],add[50], ph[15];
int prize, noofdays, guestno, dateofbooking;
public:
int input();
void output();
void cal_status();
};

int sin=0, dou=0, del=0, sup=0;
void main_menu();

void welcome()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
   while(!kbhit ())
   {
setcolor(RED);
settextstyle(BOLD_FONT,0,3);
outtextxy(95,20,"HOTEL MANAGEMENT SYSTEM");
   setcolor(GREEN);
   settextstyle(TRIPLEX_SCR_FONT,0,3);
outtextxy(95,170,"DEVELOPED BY   :");
outtextxy(380,170,"ANUBHAV KAUSHIK");
  setcolor(RED+BLINK);
   settextstyle(SCRIPT_FONT,0,2);
outtextxy(160,420,"* - PRESS ANY KEY TO CONTINUE - *");
 putpixel(rand()%630,rand()%540,rand()%16);
}
cleardevice();
closegraph();
getch();

}

int menu()
{
   int gd=DETECT,gm,ch;
   initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

   int x = getmaxx()/2;
   setcolor(YELLOW);
   rectangle(x-250, 100, x+320, 400);
   setcolor(RED);
   settextstyle(BOLD_FONT,0,4);
   outtextxy(x-150, 120, "HOTEL MENU");

     setcolor(GREEN);
     settextstyle(COMPLEX_FONT,0,4);
     outtextxy(x-200, 200, "1 - ROOM TYPE");

     settextstyle(COMPLEX_FONT,0,4);
     outtextxy(x-200, 250, "2 - BOOKING");

     settextstyle(COMPLEX_FONT,0,4);
     outtextxy(x-200, 300, "3 - ROOM STATUS");

     settextstyle(COMPLEX_FONT,0,4);
     outtextxy(x-200, 350, "4 - ROOM BOOKED STATUS");

      setcolor(YELLOW);
      settextstyle(SCRIPT_FONT,0,3);
     outtextxy(x-270, 400, " CHOOSE ANY NUMBER  (PRESS 0 FOR EXTIT) ");

     gotoxy(70,25);
     cin>>ch;
   closegraph();
   return ch;
 }






void room()
{
   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

   int x = getmaxx()/2;
   setcolor(YELLOW);
   rectangle(x-300, 28 , x+320, 470);
   setcolor(RED);
   settextstyle(TRIPLEX_FONT,0,6);
   outtextxy(x-150, 40, "ROOM TYPES");

     setcolor(GREEN);
     settextstyle(3,0,1);
     outtextxy(x-280, 130, "SINGLE ROOM - One Bed , Free Wifi , TV , A Private Bathroom");
//     outtextxy(x-280, 150, "SINGLE ROOM - One Bed , Free Wifi , TV , A Private Bathroom");

     outtextxy(x-280, 190, "DOUBLE ROOM - A double room of a queen or king size bed");

     outtextxy(x-280, 250, "DELUXE ROOM - Designed to comfortably accommodate three people");

     outtextxy(x-280, 310, "SUPER DELUXE ROOM - Qween-sized bed, Special attention from staff");


   getch();
   closegraph();
}




class cbooking
{
private:
char roomtype[20],name[50],add[50], ph[15];
int prize, noofdays, guestno;
public:
int input();
void output();
};

void booking()

  {

   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

   int x = getmaxx()/2;
   setcolor(YELLOW);
   rectangle(x-300, 28, x+320, 470);
   setcolor(RED);
   settextstyle(BOLD_FONT,0,4);
   outtextxy(x-270, 40, "ROOM BOOKED STATUS");

     setcolor(GREEN);
     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-289, 120, "NAME :");

//     setcolor(GREEN);

     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-289, 160, "ADDRESS  :");

     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-289, 200, "PH. NO.  :");

     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-289, 240, "NO. OF GUESTS  :");

     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-289, 280, "DATE OF BOOKING  :");

     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-289, 320, "ROOM TYPE  :");

     outtextxy(x-289, 360, "PRIZE  :");

     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-10, 120, "NO. OF DAYS  :");

     setcolor(YELLOW);
      settextstyle(SCRIPT_FONT,0,3);

     outtextxy(x-300, 430, " PRESS 0 FOR MAIN MENU ");
      gotoxy(70,25);
     //cin>>ch;
    // return ch;


}

int cbooking::input()
{
textbackground(BLUE);
cprintf("      ");
gotoxy(35,9);
textcolor(WHITE);
cin>>roomtype;
if(strcmp(roomtype,"0")==0)
{
  main_menu();
  return 0;
}

gotoxy(17,14);
cin>>prize;
if(prize==0)
{
  main_menu();
  return 0;
}

gotoxy(28,19);
cin>>name;
if(strcmp(name,"0")==0)
{
  main_menu();
  return 0;
}

gotoxy(22,22);
cin>>add;
if(strcmp(add,"0")==0)
{
  main_menu();
  return 0;
}

gotoxy(24,24);
cin>>ph;
if(strcmp(ph,"0")==0)
{
  main_menu();
  return 0;
}

gotoxy(24,25);
cin>>guestno ;
if(guestno==0)
{
  main_menu();
  return 0;
}

gotoxy(50,25);
cin>>noofdays ;
if(noofdays==0)
{
  main_menu();
  return 0;
}

return 0;
}

void cbooking::output()
{
textcolor(RED);
cout<<" THE PRIZE IS : " <<prize;
cout<<" THE NAME IS : " <<name;
cout<<" THE ADDRESS IS : " <<add;
cout<<" THE PHONRE NO. IS : " <<ph;
cout<<" THE GUEST NO. IS : " <<guestno;
}




 void status()
{
   fstream fobj1, fobj2;
   details dobj2;
   fobj2.open("record.dat",ios::in);
   while(fobj2.read((char *) &dobj2, sizeof(dobj2)))
   {
     dobj2.cal_status();
   }
   fobj2.close();



   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

   int x = getmaxx()/2;
   setcolor(YELLOW);
   rectangle(x-300, 28 , x+320, 470);
   setcolor(RED);
   settextstyle(TRIPLEX_FONT,0,6);
   outtextxy(x-150, 40, "ROOM STATUS");

     setcolor(GREEN);
     settextstyle(3,0,1);
     outtextxy(x-280, 130, "SINGLE ROOM - 1-20   ALREADY BOOKED : ");
     setcolor(RED);
     gotoxy(57,9);
     cout<<sin;

     setcolor(GREEN);
     outtextxy(x-280, 190, "DOUBLE ROOM - 21-36  ALREADY BOOKED : ");
     setcolor(RED);
     gotoxy(58,13);
     cout<<dou;

     setcolor(GREEN);
     outtextxy(x-280, 250, "DELUXE ROOM - 37-47  ALREADY BOOKED : ");
     setcolor(RED);
     gotoxy(58,17);
     cout<<del;

     setcolor(GREEN);
     outtextxy(x-280, 310, "SUPER DELUXE ROOM - 48-52  ALREADY BOOKED : ");
     setcolor(RED);
     gotoxy(65,21);
     cout<<sup;

     setcolor(YELLOW);
      settextstyle(SCRIPT_FONT,0,3);
     outtextxy(x-270, 400, " PRESS ANY FOR EXTIT ");

   getch();
   closegraph();


}

void details::cal_status()
{
   if(strcmp(roomtype,"SINGLE")==0)
	sin++;
   if(strcmp(roomtype,"DOUBLE")==0)
	dou++;
   if(strcmp(roomtype,"DELUXE")==0)
	del++;
   if(strcmp(roomtype,"SUPER DELUXE")==0)
	sup++;
}





void ddetails()
{

   int gd=DETECT,gm;
   initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");

   int x = getmaxx()/2;
   setcolor(YELLOW);
   rectangle(x-300, 28, x+320, 470);
   setcolor(RED);
   settextstyle(BOLD_FONT,0,4);
   outtextxy(x-270, 40, "ROOM BOOKED STATUS");

     setcolor(GREEN);
     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-289, 120, "NAME :");

//     setcolor(GREEN);

     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-289, 160, "ADDRESS  :");

     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-289, 200, "PH. NO.  :");

     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-289, 240, "NO. OF GUESTS  :");

     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-289, 280, "DATE OF BOOKING  :");

     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-289, 320, "ROOM TYPE  :");

     outtextxy(x-289, 360, "PRIZE  :");

     settextstyle(SANS_SERIF_FONT,0,3);
     outtextxy(x-10, 120, "NO. OF DAYS  :");

     setcolor(YELLOW);
      settextstyle(SCRIPT_FONT,0,3);

     outtextxy(x-300, 430, " PRESS 0 FOR MAIN MENU ");
      gotoxy(70,25);
     //cin>>ch;
    // return ch;


}

int details::input()
{
textbackground(BLUE);
cprintf("      ");
gotoxy(16,9);
textcolor(WHITE);
cin>>name;
if(strcmp(name,"0")==0)
{
  main_menu();
  return 0;
}

gotoxy(22,11);
cin>>add;
if(strcmp(add,"0")==0)
{
  main_menu();
  return 0;
}

gotoxy(21,14);
cin>>ph;
if(strcmp(ph,"0")==0)
{
  main_menu();
  return 0;
}

gotoxy(31,16);
cin>>guestno;
if(guestno==0)
{
  main_menu();
  return 0;
}

gotoxy(34,19);
cin>>dateofbooking;
if(dateofbooking==0)
{
  main_menu();
  return 0;
}

gotoxy(25,22);
cin>>roomtype ;
if(strcmp(roomtype,"0")==0)
{
  main_menu();
  return 0;
}

gotoxy(18,24);
cin>>prize ;
if(prize==0)
{
  main_menu();
  return 0;
}

gotoxy(63,9);
cin>>noofdays;
if(noofdays==0)
{
  main_menu();
  return 0;
}

closegraph();
return 0;

}

void details::output()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\TURBOC3\\BGI");
int x = getmaxx()/2;
   setcolor(YELLOW);
   rectangle(x-300, 28, x+320, 470);
   setcolor(RED);
   settextstyle(BOLD_FONT,0,4);
   outtextxy(x-270, 40, "ROOM BOOKED STATUS");

setcolor(GREEN);
settextstyle(SANS_SERIF_FONT,0,3);
outtextxy(x-300, 120," THE NAME : ");
outtextxy(x-50, 120, name);

outtextxy(x-300, 160," THE ADDRESS : ");
outtextxy(x-50, 160, add);

outtextxy(x-300, 200," THE PHONE NO. : ");
outtextxy(x-50, 200, ph);

outtextxy(x-300, 240," NO. OF GUEST : ");
char gn[10];
itoa(guestno, gn, 10);
outtextxy(x-50, 240, gn);

outtextxy(x-300, 280," DATE OF BOOKING : ");
char db[20];
itoa(dateofbooking, db, 10);
outtextxy(x-50, 280, db);

outtextxy(x-300, 320," THE ROOM TYPE : ");
outtextxy(x-50, 320, roomtype);

outtextxy(x-300, 360," THE PRIZE : ");
char p[10];
itoa(prize, p, 10);
outtextxy(x-50, 360, p);

outtextxy(x-300, 400," THE NO. OF DAYS : ");
char nd[10];
itoa(noofdays, nd, 10);
outtextxy(x-50, 400, nd);

getch();
closegraph();
}






void main_menu()
{
int menuch;
fstream fobj1, fobj2;
 while(1)
 {

      menuch = menu();
      cout<<menuch;
      switch(menuch)
      {
	 case 1:
	   room();
	 break;
	 case 2:
	  booking();
	  details cobj1,cobj2;
	  cobj1.input();
	  fobj1.open("record.dat",ios::out|ios::app);
	  fobj1.write((char*) &cobj1, sizeof(cobj1));
	  fobj1.close();
	   /*
	  fobj2.open("record.dat",ios::in);
	  fobj2.read((char *) &cobj2 , sizeof(cobj2));
	  fobj2.close();
	  cobj2.output();*/


	 break;
	 case 3:
	  status();

	 break;
	 case 4:
	  //ddetails();
	 details dobj1,dobj2;
	 /* dobj1.input();
	  fobj1.open("record.dat",ios::out);
	  fobj1.write((char*) &dobj1, sizeof(dobj1));
	  fobj1.close();*/
	  int i;
	   clrscr();
	   gotoxy(33,9);
	   textcolor(CYAN);
	   cprintf("Enter Password ");
	   //cout<<"enter password  " ;
	   cin>>i;
	   if(i==0)
	   {
		fobj2.open("record.dat",ios::in);

	  while(fobj2.read((char *) &dobj2, sizeof(dobj2)))
	  {
		dobj2.output();
	  }
	  fobj2.close();

	   }
	   else
	   {
	   cout<<"invalid password";
	   }


	  break;
	 default:
	   exit(1);
	 break;
      }
}
}



void main()
{
 welcome();
 main_menu();
getch();
}