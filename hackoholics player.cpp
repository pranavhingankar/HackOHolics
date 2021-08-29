#include<iostream>
#include<istream>
#include<fstream>
#include<string>
#include<stdio.h>
#include<windows.h>
#include<MMsystem.h>
#include<stdlib.h>
#include<conio.h>
int fav[15][13]={0};
int e,o,id=1,succ;
char user[20];
int ch,chb;
char pq;
int mainmenu();
void allsongs();
void intro();
void hollywood();
void bollywood();
void favourite();
void semimain();
void allsonglist();
void finish();
void gotoxy(int a, int b);
void credits();
using namespace std;
void first();
void login()
{
    int i;
        int count;
        string pass,u,p,password;
        system("cls");
        system("COLOR E4");
         gotoxy(28,2);
        for(i=0;i<9;i++)
        {
       printf("*");
        }

       gotoxy(28,3);
       printf("*");

       gotoxy(30,3);
       printf("Login");
       gotoxy(36,3);
       printf("*");

        gotoxy(28,4);
        for(i=0;i<9;i++)
        {
       printf("*");
        }
        Sleep(500);

        gotoxy(24,6);
        cout<<"USERNAME :";
        gotoxy(24,8);
        cout<<"PASSWORD :";
         gotoxy(24,10);
        cout<< "User ID :";
         gotoxy(37,6);
        cin>>user;
         gotoxy(37,8);
        chb = _getch();
   while(chb != 13){//character 13 is enter
      pass.push_back(chb);
      cout << '*';
      chb = _getch();
   }
       gotoxy(37,10);
       cin>>o;
        gotoxy(22,10);
        for(i=0;i<60;i++)
        {
            printf("*");
        }
        ifstream input("D:\\HackO'Holics\\database.txt");
        while(input>>u>>p)
        {
                if(u==user && p==pass)

                {
                        count=1;
                        system("cls");
                }
        }
        input.close();
        if(count==1)
        {
                gotoxy(15,3);
                cout<<"Hello "<<user;
                gotoxy(15,4);
                cout<<"LOGIN SUCESS";
                gotoxy(15,6);
                for(i=0;i<60;i++)
                {
                    cout<<"*";
                }
                Sleep(1000);
                system("cls");
                semimain();
        }
        else
        {
            system("cls");
            gotoxy(10,3);
                cout<<"\nLOGIN ERROR\n\n";
                Sleep(500);
                first();
        }
}
void registr()
{
        int i;
        string reguser,regpass,ru,rp;
        system("cls");
        system("COLOR E4");
         gotoxy(28,2);
        for(i=0;i<12;i++)
        {
       printf("*");
        }

       gotoxy(28,3);
       printf("*");

       gotoxy(30,3);
       printf("Register");
       gotoxy(39,3);
       printf("*");

        gotoxy(28,4);
        for(i=0;i<12;i++)
        {
       printf("*");
        }

        Sleep(500);
        //gotoxy(30,3);
        //cout<<"Please enter the following details"<<endl;
        gotoxy(24,6);
        cout<<"USERNAME :";
        gotoxy(24,8);
        cout<<"PASSWORD :";
        gotoxy(37,6);
        cin>>reguser;
        gotoxy(37,8);
        chb = _getch();
   while(chb != 13){//character 13 is enter
      regpass.push_back(chb);
      cout << '*';
      chb = _getch();
   }

        ofstream reg("D:\\HackO'Holics\\database.txt",ios::app);
        reg<<reguser<<' '<<regpass<<endl;
        system("cls");
        gotoxy(10,3);
        cout<<"\nRegistration Sucessful\n";
        gotoxy(10,4);
        printf("Your User ID is %d ",id);
        gotoxy(10,6);
        for(i=0;i<60;i++)
        {
            printf("*");
        }
        id++;
        Sleep(1000);
        system("cls");
        login();


}


void first()
{
    int i;
        int choice;
        system("COLOR E4");
        gotoxy(22,2);
for(i=0;i<37;i++)
   {
       printf("*");
   }

   gotoxy(22,3);
   printf("*");
        gotoxy(24,3);
        cout<<" Welcome to HackO'Holics PlayList\n";
        gotoxy(58,3);
   printf("*");
    gotoxy(22,4);
for(i=0;i<37;i++)
   {
       printf("*");
   }
   Sleep(500);
        gotoxy(28,6);
        cout<<"1.LOGIN\n";
        Sleep(100);
        gotoxy(28,8);
        cout<<"2.REGISTER\n";
        Sleep(100);
        gotoxy(28,10);
        cout<<"3.Exit\n";

        gotoxy(3,12);
    for(i=0;i<70;i++)
    {
        printf("*");
    }
    Sleep(100);
    gotoxy(24,14);
    printf("Enter the choice : ");

        cin>>choice;
        system("cls");
        cout<<endl;
        switch(choice)
        {
                case 1:
                        login();
                        break;
                case 2:
                        registr();
                        break;
                case 3:
                        finish();
                        exit(0);
                        break;

        }
}

int main()
{
  intro();
  first();
      	switch(mainmenu())
	{
      case 1:{
            allsongs();
            break;
      }
      case 2:{
          allsonglist();
          break;
      }
      case 3:{
          hollywood();
          break;
      }
      case 4:{
          bollywood();
          break;
      }
      case 5:{
          favourite();
          break;
      }
      case 6:{
         credits();
         break;
      }

      case 7:{
          first();
          break;
      }
      case 8:{
          finish();
          exit(0);
          break;
      }

  }
return 0;
}
void semimain()
{

	switch(mainmenu())
	{
      case 1:{
            allsongs();
            break;
      }
      case 2:{
         allsonglist();
          break;
      }
      case 3:{
          hollywood();
          break;
      }
      case 4:{
          bollywood();
          break;
      }
      case 5:{
          favourite();
          break;
      }
      case 6:{
          first();
          break;

      }

       case 7:{
         credits();
          break;
      }
      case 8:{
          finish();
          exit(0);
          break;}


	}
}



void gotoxy(int n,int m)
{
    COORD q;
    q.X=n;
    q.Y=m;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),q);
}

void intro()
{
     system("COLOR E4");
     gotoxy(7,3);
    printf(" HH  HH      AAAA      CCCCCCC  K   KK   OOOOO    ...  HH  HH   OOOOO   LL        IIIIII   CCCCCCC  SSSSSSS");
    Sleep(100);
    gotoxy(7,5);
    printf(" HH  HH     AA  AA     CC       K  K    O     O    ..  HH  HH  O     O  LL          II     CC       S      ");
    Sleep(100);
    gotoxy(7,7);
    printf(" HHHHHH    AA AA AA    CC       KKK     O     O     .  HHHHHH  O     O  LL          II     CC       SSSSSSS");
    Sleep(100);
    gotoxy(7,9);
    printf(" HH  HH   AA      AA   CC       K  K    O     O        HH  HH  O     O  LL          II     CC             S");
    Sleep(100);
    gotoxy(7,11);
    printf(" HH  HH  AA        AA  CCCCCCC  K    K   OOOOO         HH  HH   OOOOO   LLLLLLLL  IIIIIII  CCCCCCC  SSSSSSS");
    Sleep(1000);

    gotoxy(7,4);
    printf(" HH  HH      A  A      CC           K   O     O        HH  HH  O     O  LL          II     CC       S           ");
    Sleep(100);
    gotoxy(7,6);
    printf(" HH  HH     A    A     CC         K     O     O        HH  HH  O     O  LL          II     CC       S      ");
    Sleep(100);
    gotoxy(7,8);
    printf(" HH  HH    A      A    CC         K     O     O        HH  HH  O     O  LL          II     CC             S");
    Sleep(100);
    gotoxy(7,10);
    printf(" HH  HH   A        A   CC           K   O     O        HH  HH  O     O  LL          II     CC             S");
    Sleep(100);

    Sleep(3000);
    system("cls");


}
int mainmenu()
{
    int a,i;
system("COLOR E4");
/*gotoxy(18,1);
cout<<"Hello "<<user<<"!!";*/
gotoxy(18,2);
for(i=0;i<29;i++)
   {
       printf("*");
   }

   gotoxy(18,3);
   printf("*");
 gotoxy(28,3);
   printf("Main menu\n");
gotoxy(46,3);
   printf("*");
gotoxy(18,4);
   for(i=0;i<29;i++)
   {
       printf("*");
   }
   Sleep(500);
   gotoxy(10,6);
cout<<"Hello "<<user<<"!!";

    gotoxy(26,7);
    printf("1.All songs\n");
    Sleep(100);
    gotoxy(26,9);
    printf("2.All songs List\n");
    Sleep(100);
    gotoxy(26,11);
    printf("3.Hollywood\n");
    Sleep(100);
    gotoxy(26,13);
    printf("4.Bollywood\n");
    Sleep(100);
    gotoxy(26,15);
    printf("5.Favourite songs\n");
    Sleep(100);
    gotoxy(26,17);
    printf("6.Login page");
    Sleep(100);
    gotoxy(26,19);
    printf("7.Credits");
    Sleep(100);
    gotoxy(26,21);
    printf("8.Exit");
    Sleep(100);
    gotoxy(3,23);
    for(i=0;i<70;i++)
    {
        printf("*");
    }
    Sleep(100);
    gotoxy(22,25);
    printf("Enter the choice : ");
    scanf("%d",&a);
    system("cls");
    return a;
}

void allsongs()
{
    int i;
char men;
system("COLOR E4");
   gotoxy(18,2);
for(i=0;i<29;i++)
   {
       printf("*");
   }
   gotoxy(18,3);
   printf("*");
 gotoxy(28,3);
   printf("All Songs\n");
gotoxy(46,3);
   printf("*");
gotoxy(18,4);
   for(i=0;i<29;i++)
   {
       printf("*");
   }
   Sleep(500);
	gotoxy(26,6);
	printf("1.SHAPE OF YOU\n");
	Sleep(100);
	gotoxy(26,8);
    printf("2.Believer\n");
    Sleep(100);
	gotoxy(26,10);
	printf("3.Busstop\n");
	Sleep(100);
	gotoxy(26,12);
	printf("4.Zenzenh Apple ringtone\n");
	Sleep(100);
	gotoxy(26,14);
	printf("5.Designer Panda\n");
	Sleep(100);
	gotoxy(26,16);
	printf("6.Intro Your Arms\n");
	Sleep(100);
	gotoxy(26,18);
	printf("7.Look in the eyes\n");
	Sleep(100);
	gotoxy(26,20);
	printf("8.I don' t need your help\n");
	Sleep(100);
	gotoxy(26,22);
	printf("9.Subhaanallah\n");
	Sleep(100);
	gotoxy(26,24);
	printf("10.Tu hi re\n");
	Sleep(100);
	gotoxy(26,26);
	printf("11.Maa tujhe salaam\n");
	Sleep(100);
	gotoxy(26,28);
	printf("12.Breathless\n");
	Sleep(100);
	gotoxy(26,30);
	printf("13.Kolaveri D \n");
	Sleep(100);
    gotoxy(26,32);
	printf("14.Back\n");
	Sleep(100);
	gotoxy(3,34);
	for(i=0;i<70;i++)
    {
        printf("*");
    }
    Sleep(100);
    gotoxy(22,36);
    printf("Enter the choice : ");
	scanf("%d", &e);

    system("cls");

switch(e){

case 1:
    if(fav[o-1][e-1]==1)
    {  gotoxy(15,5);
       printf("Shape of you: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
       scanf("%d",&ch);
       system("cls");
       if(ch==1)
        {
            do {
        	 gotoxy(10,3);
          printf("Playing Shape of you........ \n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
	PlaySound(TEXT("D:\\HackO'Holics\\SHAPE OF YOU.wav"),NULL,SND_SYNC);
	system("cls");
	gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
      // scanf("%c",pq);
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
            gotoxy(10,5);
            printf("Shape of you removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
            gotoxy(10,5);
            printf("Shape of you removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else if(ch==3)
          {
            allsongs();
            break;
          }

    }
    else
     {
        gotoxy(15,5);
       printf("Shape of you: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
          gotoxy(10,3);
          printf("Playing Shape of you......\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
	PlaySound(TEXT("D:\\HackO'Holics\\SHAPE OF YOU.wav"),NULL,SND_SYNC);
	system("cls");
		gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");

	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=1;
            gotoxy(10,5);
            printf("Shape of you added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=1;
              gotoxy(10,5);
            printf("Shape of you added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
        {
            allsongs();
            break;
        }
    }


case 2:
     if(fav[o-1][e-1]==1)
    {gotoxy(15,5);
       printf("Believer: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
            gotoxy(10,3);
         printf("Playing Believer......... \n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Believer.wav"),NULL,SND_SYNC);
        system("cls");
        	gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
              gotoxy(10,5);
            printf("Beleiver removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
                          gotoxy(10,5);
            printf("Beleiver removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
          {
            allsongs();
            break;
          }
    }
    else
     {

	   gotoxy(15,5);
       printf("Believer: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
       scanf("%d",&ch);
       system("cls");
       if(ch==1)
        { do {
        gotoxy(10,3);
        printf("Playing Believer......\n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Believer.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=1;
                         gotoxy(10,5);
            printf("Beleiver added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(3000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=1;
            gotoxy(10,5);
            printf("Beleiver added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(3000);
            system("cls");
            favourite();
            break;
        }
        else
           {
            allsongs();
            break;
          }

    }

case 3:
      if(fav[o-1][e-1]==1)
    {
        gotoxy(15,5);
       printf("Busstop: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove From favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
            gotoxy(10,3);
        printf("Playing Busstop........\n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\busstop.wav"),NULL,SND_SYNC);
        system("cls");
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
            gotoxy(10,5);
            printf("Busstop removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
gotoxy(10,5);
            printf("Busstop removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
          {
            allsongs();
            break;
          }
    }
    else
     {  gotoxy(15,5);
       printf("Busstop: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do {
           gotoxy(10,3);
           printf("Playing Busstop......\n");
           gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\busstop.wav"),NULL,SND_SYNC);
        system("cls");
         gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=1;
           gotoxy(10,5);
            printf("Busstop added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=1;
              gotoxy(10,5);
            printf("Busstop added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
         {
            allsongs();
            break;
          }
    }

case 4:
         if(fav[o-1][e-1]==1)
    {
        gotoxy(15,5);
       printf("ZhenZhen Ringtone: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {
       do{
            gotoxy(10,3);
         printf("Playing zhenzhen apple ringtone........\n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\zhenzhen_ringtone.wav"),NULL,SND_SYNC);
        system("cls");
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
  gotoxy(10,5);
            printf("ZhenZhen Ringtone Removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            gotoxy(10,5);
           printf("ZhenZhen Ringtone Removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            allsongs();
            break;
          }
    }
    else
     {  gotoxy(15,5);
       printf("ZhenZhen Ringtone: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        gotoxy(10,3);
        printf("Playing zhenzhen apple ringtone....... \n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\zhenzhen_ringtone.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(4000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=1;
    gotoxy(10,5);
printf("ZhenZhen Ringtone added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=1;
            gotoxy(10,5);
            printf("ZhenZhen Ringtone added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
           {
            allsongs();
            break;
          }
    }

case 5:
          if(fav[o-1][e-1]==1)
       {

       gotoxy(15,5);
       printf("Designer-Panda: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {
       do{
            gotoxy(10,3);
        printf("Playing Desinger-Panda.......\n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Desingner - Panda.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
            gotoxy(10,5);
            printf("Designer-panda removed from  favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
                        gotoxy(10,5);
            printf("Designer-panda removed from  favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            allsongs();
            break;
          }
    }
    else
     {  gotoxy(15,5);
       printf("Designer-Panda: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
         gotoxy(10,3);
         printf("Playing Desinger-Panda........\n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Desingner - Panda.wav"),NULL,SND_SYNC);
        system("cls");
         gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=1;
            gotoxy(10,5);
            printf("Designer-panda added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=1;
            gotoxy(10,5);
            printf("Designer-panda added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
           {
            allsongs();
            break;
          }
    }

case 6:
          if(fav[o-1][e-1]==1)
    {

	    gotoxy(15,5);
       printf("Intro Your Arms: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
            gotoxy(10,3);
        printf("Playing Intro your arms......... \n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Intro your arms.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
            gotoxy(10,5);
            printf("Intro your Arms removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
            gotoxy(10,5);
            printf("Intro your Arms removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
           {
            allsongs();
            break;
          }
    }
    else
     {  gotoxy(15,5);
       printf("Intro Your Arms: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        gotoxy(10,3);
        printf("Playing Intro your arms........\n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Intro your arms.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=1;
           gotoxy(10,5);
            printf("Intro your Arms added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=1;
                       gotoxy(10,5);
            printf("Intro your Arms added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
           {
            allsongs();
            break;
          }
    }

case 7:
          if(fav[o-1][e-1]==1)
    {

        gotoxy(15,5);
       printf("Look Me The Eyes: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
            gotoxy(10,3);
          printf("Playing look me in the eyes........\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\look me in the eyes.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
           gotoxy(10,5);
            printf("Look me the eyes removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
 gotoxy(10,5);
            printf("Look me the eyes removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            allsongs();
            break;
          }
    }
    else
     {  gotoxy(15,5);
       printf("Look Me The Eyes: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        gotoxy(10,3);
        printf("Playing look me in the eyes.......\n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\look me in the eyes.wav"),NULL,SND_SYNC);
        system("cls");
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=1;
             gotoxy(10,5);
            printf("Look me the eyes added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=1;
gotoxy(10,5);
            printf("Look me the eyes added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
          {
            allsongs();
            break;
          }
    }

case 8:
          if(fav[o-1][e-1]==1)
    {gotoxy(15,5);
       printf("I Don't Need Your Help: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove From favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
            gotoxy(10,3);
        printf("Playing I don' t need your help.......... \n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\i don' t need your help.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
            gotoxy(10,5);
            printf("I Don't Need Your Help removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
            gotoxy(10,5);
            printf("I Don't Need Your Help removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            allsongs();
            break;
          }
    }
    else
     {
        gotoxy(15,5);
       printf("I Don't Need Your Help: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        gotoxy(10,3);
        printf("Playing I don' t need your help..........\n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\i don' t need your help.wav"),NULL,SND_SYNC);
        system("cls");
      gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=1;
                       gotoxy(10,5);
            printf("I Don't Need Your Help added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=1;
            gotoxy(10,5);
            printf("I Don't Need Your Help added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            allsongs();
            break;
          }
    }

case 9:
          if(fav[o-1][e-1]==1)
    {
        gotoxy(15,5);
       printf("Subbhanallah: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        gotoxy(10,3);
        printf("Playing Subbahanallah.......... \n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\subbahallah.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
            gotoxy(10,5);
            printf("Subbhanallah removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
           gotoxy(10,5);
            printf("Subbhanallah removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
             {
            allsongs();
            break;
          }
    }
    else
     {
	    gotoxy(15,5);
       printf("Subbhanallah: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
	    system("cls");
        if(ch==1)
        { do{
        gotoxy(10,3);
        printf("Playing Subbahanallah.........\n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\subbahallah.wav"),NULL,SND_SYNC);
        system("cls");
         gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=1;
            gotoxy(10,5);
            printf("Subbhanallah added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=1;
           gotoxy(10,5);
            printf("Subbhanallah added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            allsongs();
            break;
          }
    }

case 10:
          if(fav[o-1][e-1]==1)
    {
gotoxy(15,5);
       printf("Tu Hi Re: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove From favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        gotoxy(10,3);
        printf("Playing Tu hi re......... \n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Tu hi re.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
            gotoxy(10,5);
            printf("Tu Hi Re removed from  favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
             fav[o-1][e-1]=0;
            gotoxy(10,5);
            printf("Tu Hi Re removed from  favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            allsongs();
            break;
          }
    }
    else
     {

	     gotoxy(15,5);
       printf("Tu Hi Re: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
         gotoxy(10,3);
                printf("Playing Tu hi re........\n");
                gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Tu hi re.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=1;
            gotoxy(10,5);
            printf("Tu Hi Re added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=1;
             gotoxy(10,5);
            printf("Tu Hi Re added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
        {
            allsongs();
            break;
          }
    }

case 11:
          if(fav[o-1][e-1]==1)
    {
        gotoxy(15,5);
       printf("Maa Tujhe Salaam: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        	 gotoxy(10,3);
          printf("Playing Maa tujhe salaam.........\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Maa tujhe salam.wav"),NULL,SND_SYNC);
        system("cls");
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
             gotoxy(10,5);
            printf("Maa Tujhe Salam removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
            printf("Maa tujhe salaam removed from favourite......\n");
            favourite();
            break;
        }
        else
            {
            allsongs();
            break;
          }
    }
    else
     {  gotoxy(15,5);
       printf("Maa Tujhe Salaam: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
             gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        	 gotoxy(10,3);
          printf("Playing Maa tujhe salaam..........\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Maa tujhe salam.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=1;
             gotoxy(10,5);
            printf("Maa Tujhe Salam added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=1;
 gotoxy(10,5);
            printf("Maa Tujhe Salam added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
             {
            allsongs();
            break;
          }
    }

case 12:
    if(fav[o-1][e-1]==1)
    {  gotoxy(15,5);
       printf("Breathless: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
         gotoxy(10,3);
          printf("Playing Breathless..........\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Breathless.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
           gotoxy(10,5);
            printf("Breathless removed from  favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
            gotoxy(10,5);
            printf("Breathless removed from  favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            allsongs();
            break;
          }
    }
    else
     {  gotoxy(15,5);
       printf("Breathless: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        	 gotoxy(10,3);
         printf("Playing Breathless...........\n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Breathless.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=1;
 gotoxy(10,5);
            printf("Breathless added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=1;
             gotoxy(10,5);
            printf("Breathless added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            allsongs();
            break;
          }
    }

case 13:
          if(fav[o-1][e-1]==1)
    {    gotoxy(15,5);
       printf("Kolaveri D: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {
        		 gotoxy(10,3);
         printf("Playing Why this Kolaveri D........ \n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		 PlaySound(TEXT("D:\\HackO'Holics\\kolaveri D.wav"),NULL,SND_SYNC);
         system("cls");
         allsongs();
         break;
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
 gotoxy(10,5);
            printf("Kolaveri D removed from  favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
             {
            allsongs();
            break;
          }
    }
    else
     {gotoxy(15,5);
       printf("Kolaveri D: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {
        	 gotoxy(10,3);
            printf("Playing Why this Kolaveri D........ \n");
            gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\kolaveri D.wav"),NULL,SND_SYNC);
         system("cls");
         allsongs();
         break;
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=1;
            gotoxy(10,5);
            printf("Kolaveri D added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            allsongs();
            break;
          }
    }
break;
case 14:
    semimain();
    break;
}
}
void hollywood(){
    int a,i;
    gotoxy(18,2);
for(i=0;i<29;i++)
   {
       printf("*");
   }
   gotoxy(18,3);
   printf("*");
 gotoxy(26,3);
   printf("HollyWood Songs\n");
gotoxy(46,3);
   printf("*");
gotoxy(18,4);
   for(i=0;i<29;i++)
   {
       printf("*");
   }
   Sleep(500);
	gotoxy(25,6);
	printf("1.SHAPE OF YOU\n");
	Sleep(100);
	gotoxy(25,8);
    printf("2.Believer\n");
	Sleep(100);
	gotoxy(25,10);
	printf("3.Busstop\n");
	Sleep(100);
	gotoxy(25,12);
	printf("4.Zenzenh Apple ringtone\n");
	Sleep(100);
	gotoxy(25,14);
	printf("5.Designer Panda\n");
	Sleep(100);
	gotoxy(25,16);
	printf("6.Intro Your Arms\n");
	Sleep(100);
	gotoxy(25,18);
	printf("7.Look in the eyes\n");
	Sleep(100);
	gotoxy(25,20);
	printf("8.I don' t need your help\n");
	Sleep(100);
	gotoxy(25,22);
	printf("9.Back\n");
	Sleep(100);
	gotoxy(3,24);
	for(i=0;i<70;i++)
    {
        printf("*");
    }
    Sleep(100);
    gotoxy(22,26);
    printf("Enter the choice : ");
	scanf("%d",&a);
      system("cls");
switch(a){
case 1:
    if(fav[o-1][a-1]==1)
    {  gotoxy(15,5);
       printf("Shape Of You: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{gotoxy(10,3);
          printf("Playing Shape of you.........\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
	PlaySound(TEXT("D:\\HackO'Holics\\SHAPE OF YOU.wav"),NULL,SND_SYNC);
	system("cls");
	gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {       fav[o-1][a-1]=0;
           gotoxy(10,5);
            printf("Shape Of You removed from  favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            hollywood();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=0;
            gotoxy(10,5);
            printf("Shape Of You removed from  favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
             {
          hollywood();
          break;
        }
    }
    else
     {  gotoxy(15,5);
       printf("Shape Of You: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        	 gotoxy(10,3);
          printf("Playing Shape of you...........\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
	PlaySound(TEXT("D:\\HackO'Holics\\SHAPE OF YOU.wav"),NULL,SND_SYNC);
	system("cls");
	gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a-1]=1;
gotoxy(10,5);
            printf("Shape Of You added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=1;
           gotoxy(10,5);
            printf("Shape Of You added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
        {
          hollywood();
          break;
        }
    }

case 2:
     if(fav[o-1][a-1]==1)
    { gotoxy(15,5);
       printf("Believer: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {do{
            gotoxy(10,3);
         printf("Playing Believer..........\n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Believer.wav"),NULL,SND_SYNC);
        system("cls");
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
       	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {       fav[o-1][a-1]=0;
gotoxy(10,5);
            printf("Beleiver removed from  favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            hollywood();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=0;
            gotoxy(10,5);
            printf("Beleiver removed from  favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
          hollywood();
          break;
        }
    }
    else
     {   gotoxy(15,5);
       printf("Believer: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {do{
        	 gotoxy(10,3);
        printf("Playing Believer........\n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Believer.wav"),NULL,SND_SYNC);
        system("cls");
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a-1]=1;
            gotoxy(10,5);
            printf("Beleiver added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=1;
            gotoxy(10,5);
            printf("Beleiver added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
             {
          hollywood();
          break;
        }
    }

case 3:
      if(fav[o-1][a-1]==1)
    { gotoxy(15,5);
       printf("Busstop: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {do
        {
                gotoxy(10,3);
               printf("Playing Busstop.........\n");
               gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\busstop.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {       fav[o-1][a-1]=0;
           gotoxy(10,5);
            printf("Busstop removed from  favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            hollywood();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=0;
gotoxy(10,5);
            printf("Busstop removed from  favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
          hollywood();
          break;
        }

}
    else
     {   gotoxy(15,5);
       printf("Busstop: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {do{
        	 gotoxy(10,3);
                printf("Playing Busstop..........\n");
                gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\busstop.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a-1]=1;
            gotoxy(10,5);
            printf("Busstop added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=1;
           gotoxy(10,5);
            printf("Busstop added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
          {
          hollywood();
          break;
        }
    }

case 4:
         if(fav[o-1][a-1]==1)
    {
        gotoxy(15,5);
       printf("ZhenZhen Ringtone: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {do{
            gotoxy(10,3);
         printf("Playing zhenzhen apple ringtone.........\n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\zhenzhen_ringtone.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {       fav[o-1][a-1]=0;
            gotoxy(10,5);
            printf("ZhenZhen ringtone removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            hollywood();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=0;
                        gotoxy(10,5);
            printf("ZhenZhen ringtone removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
         else
            {
          hollywood();
          break;
        }
    }
    else
     { gotoxy(15,5);
       printf("ZhenZhen Ringtone: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {do{
        	 gotoxy(10,3);
         printf("Playing ZhenZhen Apple Ringtone........\n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\zhenzhen_ringtone.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a-1]=1;
                       gotoxy(10,5);
            printf("ZhenZhen ringtone added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=1;
                        gotoxy(10,5);
            printf("ZhenZhen ringtone added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
         else
            {
          hollywood();
          break;
        }
    }

case 5:
          if(fav[o-1][a-1]==1)
    { gotoxy(15,5);
       printf("Designer-Panda: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{gotoxy(10,3);

           printf("Playing Desinger-Panda.........\n");
           gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Desingner - Panda.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {       fav[o-1][a-1]=0;
             gotoxy(10,5);
            printf("Designer-Panda removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            hollywood();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=0;
            gotoxy(10,5);
            printf("Designer-Panda removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
        }
         else
            {
          hollywood();
          break;
        }
    }
    else
     {
       gotoxy(15,5);
       printf("Designer-Panda: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {do{
        	gotoxy(10,3);
           printf("Playing Desinger-Panda..........\n");
           gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Desingner - Panda.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a-1]=1;
            gotoxy(10,5);
            printf("Designer-Panda added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=1;
            gotoxy(10,5);
            printf("Designer-Panda added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
         else
             {
          hollywood();
          break;
        }
    }

case 6:
          if(fav[o-1][a-1]==1)
    { gotoxy(15,5);
       printf("Intro Your Arms: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do
        {

        gotoxy(10,3);
           printf("Playing Intro your arms.........\n");
           gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Intro your arms.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {       fav[o-1][a-1]=0;
           gotoxy(10,5);
            printf("Intro Your Arms removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            hollywood();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=0;
           gotoxy(10,5);
            printf("Intro Your Arms removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
         else
           {
          hollywood();
          break;
        }
    }
    else
     {   gotoxy(15,5);
       printf("Intro Your Arms: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        	gotoxy(10,3);
           printf("Playing Intro your arms..........\n");
           gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Intro your arms.wav"),NULL,SND_SYNC);
        system("cls");
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a-1]=1;
 gotoxy(10,5);
            printf("Intro Your Arms added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=1;
 gotoxy(10,5);
            printf("Intro Your Arms added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
         else
            {
          hollywood();
          break;
        }
    }

case 7:
          if(fav[o-1][a-1]==1)
    { gotoxy(15,5);
       printf("Look me In The Eyes: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
            gotoxy(10,3);
          printf("Playing Look me in the eyes: \n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\look me in the eyes.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {       fav[o-1][a-1]=0;
            gotoxy(10,5);
            printf("Look Me In The Eyes removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            hollywood();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=0;
            gotoxy(10,5);
            printf("Look Me In The Eyes removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
         else
            {
          hollywood();
          break;
        }
    }
    else
     {  gotoxy(15,5);
       printf("Look me In the Eyes: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        	gotoxy(10,3);
         printf("Playing Look me in the eyes: \n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\look me in the eyes.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a-1]=1;
          gotoxy(10,5);
            printf("Look Me In The Eyes added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=1;
            gotoxy(10,5);
            printf("Look Me In The Eyes added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
         else
            {
          hollywood();
          break;
        }
    }

case 8:
          if(fav[o-1][a-1]==1)
    {gotoxy(15,5);
       printf("I Don't Need Your Help: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {
            gotoxy(10,3);
           printf("Playing I don' t need your help: \n");
           gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\i don' t need your help.wav"),NULL,SND_SYNC);
        system("cls");
        hollywood();
        break;
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=0;
           gotoxy(10,5);
            printf("I Don't Need Your Help removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
         else
            {
          hollywood();
          break;
        }
    }
    else
     {  gotoxy(15,5);
       printf("I don't Need Your Help: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {
        	gotoxy(10,3);
           printf("Playing I don' t need your help: \n");
           gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\i don' t need your help.wav"),NULL,SND_SYNC);
        system("cls");
        hollywood();
        break;
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=1;
           gotoxy(10,5);
            printf("I Don't Need Your Help added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
         else
            {
          hollywood();
          break;
        }
    }
    break;
case 9:
    semimain();
    break;
}
}



void bollywood(){
     int a,i;
             system("COLOR E4");
     	    gotoxy(18,2);
for(i=0;i<29;i++)
   {
       printf("*");
   }
   gotoxy(18,3);
   printf("*");
 gotoxy(26,3);
   printf("BollyWood Songs\n");
gotoxy(46,3);
   printf("*");
gotoxy(18,4);
   for(i=0;i<29;i++)
   {
       printf("*");
   }
   Sleep(500);
 	gotoxy(25,6);
	printf("1.Subhaanallah\n");
	Sleep(100);
	gotoxy(25,8);
	printf("2.Tu hi re\n");
	Sleep(100);
	gotoxy(25,10);
	printf("3.Maa tujhe salaam\n");
	Sleep(100);
	gotoxy(25,12);
	printf("4.Breathless\n");
	Sleep(100);
	gotoxy(25,14);
	printf("5.Kolaveri D \n");
    Sleep(100);
    gotoxy(25,16);
	printf("6.Back\n");
	Sleep(100);
	gotoxy(3,18);
	for(i=0;i<70;i++)
    {
        printf("*");
    }
    Sleep(100);
    gotoxy(23,20);
    printf("Enter the choice : ");
	scanf("%d",&a);
   system("cls");
 switch(a){
     case 1:
          if(fav[o-1][a+7]==1)
    {
        gotoxy(15,5);
       printf("Subbhanallah: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {do{
            gotoxy(10,3);
          printf("Playing Subbahanallah.........\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\subbahallah.wav"),NULL,SND_SYNC);
        system("cls");
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a+7]=0;
            gotoxy(10,5);
            printf("Subbhanallah removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a+7]=0;
             gotoxy(10,5);
            printf("Subbhanallah removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
             {
            bollywood();
            break;
          }
    }
    else
     {
         gotoxy(15,5);
       printf("subbhanallah: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        	gotoxy(10,3);
          printf("Playing Subbahanallah........\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\subbahallah.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a+7]=1;
            gotoxy(10,5);
            printf("Subbhanallah added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
           bollywood();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a+7]=1;
gotoxy(10,5);
            printf("Subbhanallah added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            bollywood();
            break;
          }
    }

case 2:
          if(fav[o-1][a+7]==1)
    { gotoxy(15,5);
       printf("Tu Hi Re: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove From favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {do{
        gotoxy(10,3);
                printf("Playing Tu hi re.........\n");
                gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Tu hi re.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a+7]=0;
            gotoxy(10,5);
            printf("Tu Hi Re removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a+7]=0;
             gotoxy(10,5);
            printf("Tu Hi Re removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            bollywood();
            break;
          }
    }
    else
     {   gotoxy(15,5);
       printf("Tu Hi Re: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        	 gotoxy(10,3);
                printf("Playing Tu hi re.........\n");
                gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Tu hi re.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a+7]=1;
            gotoxy(10,5);
            printf("Tu Hi Re added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
           bollywood();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a+7]==1;
gotoxy(10,5);
            printf("Tu Hi Re added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
        {
            bollywood();
            break;
          }
    }

case 3:
          if(fav[o-1][a+7]==1)
    {  gotoxy(15,5);
       printf("Maa Tujhe Salam: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {do
        {

        gotoxy(10,3);
          printf("Playing Maa tujhe salaam.......\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Maa tujhe salam.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a+7]=0;
           gotoxy(10,5);
            printf("Maa Tujhe Salam removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a+7]=0;
            gotoxy(10,5);
            printf("Maa Tujhe Salam removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
           bollywood();
            break;
          }
    }
    else
     {
         gotoxy(15,5);
       printf("Maa Tujhe Salam: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        	gotoxy(10,3);
          printf("Playing Maa tujhe salaam..........\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Maa tujhe salam.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a+7]=1;
            gotoxy(10,5);
            printf("Maa Tujhe Salam added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
           bollywood();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a+7]=1;
            gotoxy(10,5);
            printf("Maa Tujhe Salam added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
             {
           bollywood();
            break;
          }
    }

case 4:
    if(fav[o-1][a+7]==1)
    {
        gotoxy(15,5);
       printf("Breathless: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
            gotoxy(10,3);
          printf("Playing Breathless.........\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Breathless.wav"),NULL,SND_SYNC);
        system("cls");
        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a+7]=0;
          gotoxy(10,5);
            printf("Breathless Removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            allsongs();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a-1]=0;
             gotoxy(10,5);
            printf("Breathless Removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            bollywood();
            break;
          }
    }
    else
     {
        gotoxy(15,5);
       printf("Breathless: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add to favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        	 gotoxy(10,3);
         printf("Playing Breathless..........\n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Breathless.wav"),NULL,SND_SYNC);
        system("cls");
gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        a++;
    else if (pq=='2')
    {fav[o-1][a+7]=1;
             gotoxy(10,5);
            printf("Breathless added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
           bollywood();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][a+7]=1;
            gotoxy(10,5);
            printf("Breathless added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
           bollywood();
            break;
          }
    }

case 5:
          if(fav[o-1][a+7]==1)
    { gotoxy(15,5);
       printf("Kolaveri D: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {

        gotoxy(10,3);
         printf("Playing Why this Kolaveri D...........\n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		 PlaySound(TEXT("D:\\HackO'Holics\\kolaveri D.wav"),NULL,SND_SYNC);
         system("cls");
         a++;
        }
        else if(ch==2)
        {
            fav[o-1][a+7]=0;
       gotoxy(10,5);
            printf("Kolaveri D removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
             {
           bollywood();
            break;
          }
    }
    else
     {   gotoxy(15,5);
       printf("Why This Kolaveri D: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Add To favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {
        	gotoxy(10,3);
            printf("Playing Why this Kolaveri D............\n");
            gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\kolaveri D.wav"),NULL,SND_SYNC);
         system("cls");
         bollywood();
         break;
        }
        else if(ch==2)
        {
            fav[o-1][a+7]=1;
            gotoxy(10,5);
            printf("Kolaveri D added to favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            bollywood();
            break;
          }
    }
break;
case 6:
	{
    semimain();
    break;
}
}
}

void favourite(){
	int i=0,j;
	    system(" COLOR E4");
		 gotoxy(18,2);
for(j=0;j<29;j++)
   {
       printf("*");
   }
   gotoxy(18,3);
   printf("*");
 gotoxy(25,3);
   printf("Favourite Songs\n");
gotoxy(46,3);
   printf("*");
gotoxy(18,4);
   for(j=0;j<29;j++)
   {
       printf("*");
   }
   Sleep(500);

   gotoxy(3,6);
   cout<<user<<"'s Favourite list :";
   Sleep(500);
    char dataToBeRead[50];
    FILE *fp;
    fp = fopen("D:\\HackO'Holics\\Favourite.txt", "w") ;
    if(fav[o-1][0]==1)
    {
        fprintf(fp,"\n1.Shape of you");
    }
    if(fav[o-1][1]==1)
    {
        fprintf(fp,"\n2.Believer");
    }
    if(fav[o-1][2]==1)
    {
        fprintf(fp,"\n3.Busstop");
    }
    if(fav[o-1][3]==1)
    {
        fprintf(fp,"\n4.zhenzhen apple ringtone");
    }
    if(fav[o-1][4]==1)
    {
        fprintf(fp,"\n5.Desinger-Panda");
    }
    if(fav[o-1][5]==1)
    {
        fprintf(fp,"\n6.Intro your arms");
    }
    if(fav[o-1][6]==1)
    {
        fprintf(fp,"\n7.look me in the eyes");
    }
    if(fav[o-1][7]==1)
    {
        fprintf(fp,"\n8.I don' t need your help");
    }
    if(fav[o-1][8]==1)
    {
        fprintf(fp,"\n9.Subbahanallah");
    }
    if(fav[o-1][9]==1)
    {
        fprintf(fp,"\n10.Tu hi re");
    }
    if(fav[o-1][10]==1)
    {
        fprintf(fp,"\n11.Maa tujhe salaam");
    }
    if(fav[o-1][11]==1)
    {
        fprintf(fp,"\n12.Breathless");
    }
    if(fav[o-1][12]==1)
    {
        fprintf(fp,"\n13.Why this Kolaveri D");
    }
    fclose(fp);
    fp = fopen("D:\\HackO'Holics\\Favourite.txt", "r") ;
    if ( fp == NULL )
	{
		printf( "favourite.c file failed to open." ) ;
	}
	else
	{


		while( fgets ( dataToBeRead, 50, fp ) != NULL )
		{
			gotoxy(24,6+i);

			printf( "%s" , dataToBeRead ) ;
			Sleep(100);
			i=i+2;

		}
    fclose(fp) ;
    gotoxy(24,6+i);
    printf("14.Back : ");
    Sleep(100);
    gotoxy(3,9+i);
for(j=0;j<70;j++)
    {
        printf("*");
    }
    Sleep(100);
    gotoxy(22,11+i);
    printf("Enter the choice : ");
	scanf("%d",&e);
system("cls");
switch(e){
case 1:
    if(fav[o-1][e-1]==1)
    {  gotoxy(15,5);
       printf("Shape Of You: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
       scanf("%d",&ch);
       system("cls");
       if(ch==1)
        {
            do {
        	 gotoxy(10,3);
          printf("Playing Shape of you........ \n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
	PlaySound(TEXT("D:\\HackO'Holics\\SHAPE OF YOU.wav"),NULL,SND_SYNC);
	system("cls");
	        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
           gotoxy(10,5);
            printf("Shape Of You removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            favourite();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
 gotoxy(10,5);
            printf("Shape Of You removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else if(ch==3)
          {
            favourite();
            break;
          }

    }
    else
     {
        favourite();
        break;
    }


case 2:
     if(fav[o-1][e-1]==1)
    {   gotoxy(15,5);
       printf("Believer: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
          gotoxy(10,3);
          printf("Playing Believer......... \n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Believer.wav"),NULL,SND_SYNC);
        system("cls");
        	        gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
             gotoxy(10,5);
            printf("Believer removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            favourite();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
             gotoxy(10,5);
            printf("Believer removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
          {
            favourite();
            break;
          }
    }
    else
     {
      favourite();
        break;
    }


case 3:
    if(fav[o-1][e-1]==1)
    {
        gotoxy(15,5);
       printf("Busstop: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");

        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {
do{
        gotoxy(10,3);
         printf("Playing Busstop: \n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\busstop.wav"),NULL,SND_SYNC);
        system("cls");
                gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
            gotoxy(10,5);
            printf("Busstop removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            favourite();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
             printf("Busstop removed from favourite......\n");
            favourite();
            break;
        }
        else
            {
            favourite();
            break;
          }
    }
    else
     { favourite();
        break;
    }

case 4:
         if(fav[o-1][e-1]==1)
         {
        gotoxy(15,5);
       printf("ZhenZhen Ringtone: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");

        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {
do{
        gotoxy(10,3);
         printf("Playing zhenzhen apple ringtone: \n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\zhenzhen_ringtone.wav"),NULL,SND_SYNC);
        system("cls");
                gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
           gotoxy(10,5);
            printf("ZhenZhen Ringtone removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            favourite();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
            gotoxy(10,5);
              printf("ZhenZhen Ringtone removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            favourite();
            break;
          }
    }
    else
     { favourite();
        break;
    }

case 5:
          if(fav[o-1][e-1]==1)
       {
        gotoxy(15,5);
       printf("Designer-Panda: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {
       do{
            gotoxy(10,3);
        printf("Playing Desinger-Panda: \n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Desingner - Panda.wav"),NULL,SND_SYNC);
        system("cls");
                gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
              gotoxy(10,5);
            printf("Designer-Panda removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            favourite();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
            gotoxy(10,5);
             printf("Designer-Panda removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            favourite();
            break;
          }
    }
    else
     { favourite();
        break;
    }

case 6:
          if(fav[o-1][e-1]==1)
    {

	    gotoxy(15,5);
       printf("Intro Your Arms: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
            gotoxy(10,3);
        printf("Playing Intro your arms......... \n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Intro your arms.wav"),NULL,SND_SYNC);
        system("cls");
                gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
             gotoxy(10,5);
           printf("Intro your Arms removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            favourite();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
            gotoxy(10,5);
           printf("Intro your Arms removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
           {
            favourite();
            break;
          }
    }
    else
     {  favourite();
        break;
    }

case 7:
          if(fav[o-1][e-1]==1)
    {
        gotoxy(15,5);
       printf("Look Me In The Eyes: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        gotoxy(10,3);
          printf("Playing look me in the eyes:\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\look me in the eyes.wav"),NULL,SND_SYNC);
        system("cls");
                gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
            gotoxy(10,5);
           printf("Look Me In The Eyes removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            favourite();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
            gotoxy(10,5);
           printf("Look Me In The Eyes removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            favourite();
            break;
          }
    }
    else
     {  favourite();
        break;
    }

case 8:
          if(fav[o-1][e-1]==1)
    {   gotoxy(15,5);
       printf("I Don't Need Your Help: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        gotoxy(10,3);
        printf("Playing I don' t need your help.......... \n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\i don' t need your help.wav"),NULL,SND_SYNC);
        system("cls");
                gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
            gotoxy(10,5);
           printf("I Don't Need Your Help removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            favourite();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
             gotoxy(10,5);
           printf("I Don't Need Your Help removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            favourite();
            break;
          }
    }
    else
     {
  favourite();
        break;
    }

case 9:
          if(fav[o-1][e-1]==1)
    {
        gotoxy(15,5);
       printf("Subbhanallah: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        gotoxy(10,3);
        printf("Playing Subbahanallah.......... \n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\subbahallah.wav"),NULL,SND_SYNC);
        system("cls");
                gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
            gotoxy(10,5);
           printf("Subbhanallah removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            favourite();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
            gotoxy(10,5);
           printf("Subbhanallah removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
             {
            favourite();
            break;
          }
    }
    else
     {
	favourite();
        break;
    }

case 10:
          if(fav[o-1][e-1]==1)
    {
        gotoxy(15,5);
       printf("Tu Hi Re: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        gotoxy(10,3);
        printf("Playing Tu hi re......... \n");
        gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Tu hi re.wav"),NULL,SND_SYNC);
        system("cls");
                gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
            gotoxy(10,5);
           printf("Tu Hi Re removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            favourite();
            break;
          }
        }
        else if(ch==2)
        {
             fav[o-1][e-1]=0;
             gotoxy(10,5);
           printf("Tu Hi Re removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            favourite();
            break;
          }
    }
    else
     {
       favourite();
        break;
    }

case 11:
          if(fav[o-1][e-1]==1)
    {
        gotoxy(15,5);
       printf("Maa Tujhe Salam: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
        	 gotoxy(10,3);
          printf("Playing Maa tujhe salaam........\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Maa tujhe salam.wav"),NULL,SND_SYNC);
        system("cls");
               gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
           gotoxy(10,5);
           printf("Maa Tujhe Salam removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            favourite();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
                       gotoxy(10,5);
           printf("Maa Tujhe Salam removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            favourite();
            break;
          }
    }
    else
     { favourite();
        break;
    }

case 12:
    if(fav[o-1][e-1]==1)
    { gotoxy(15,5);
       printf("Breathless: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
		 scanf("%d",&ch);
        system("cls");
        if(ch==1)
        { do{
         gotoxy(10,3);
          printf("Playing Breathless........\n");
          gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		PlaySound(TEXT("D:\\HackO'Holics\\Breathless.wav"),NULL,SND_SYNC);
        system("cls");
                gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play Next Song\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       gotoxy(28,16);
       printf("Enter the choice: ");
	Sleep(5000);
	system("cls");  }while (!kbhit());
	pq=getch();
	system("cls");
	if(pq=='1')
        e++;
    else if (pq=='2')
    {fav[o-1][e-1]=0;
                       gotoxy(10,5);
           printf("Breathless removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;}
    else if (pq=='3')
         {
            favourite();
            break;
          }
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
            gotoxy(10,5);
           printf("Breathless removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
            {
            favourite();
            break;
          }
    }
    else
     { favourite();
        break;
    }

case 13:
          if(fav[o-1][e-1]==1)
    {    gotoxy(15,5);
       printf("Kolaveri D: \n");
       Sleep(100);
       gotoxy(15,6);
	    for(i=0;i<60;i++)
	    {
	        printf("*");
	    }
	    Sleep(100);
	   gotoxy(30,8);
       printf("1.Play\n");
       Sleep(100);
       gotoxy(30,10);
       printf("2.Remove from favourite list \n");
       Sleep(100);
       gotoxy(30,12);
       printf("3.Back\n");
       Sleep(100);
       gotoxy(15,14);
       for(i=0;i<60;i++)
       {
       printf("*");
       }
       Sleep(100);
       gotoxy(28,16);
       printf("Enter the choice: ");
        scanf("%d",&ch);
        system("cls");
        if(ch==1)
        {
        		 gotoxy(10,3);
         printf("Playing Why this Kolaveri D........ \n");
         gotoxy(10,4);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
		 PlaySound(TEXT("D:\\HackO'Holics\\kolaveri D.wav"),NULL,SND_SYNC);
         system("cls");
         favourite();
         break;
        }
        else if(ch==2)
        {
            fav[o-1][e-1]=0;
             gotoxy(10,5);
           printf("Kolaveri D removed from favourite......\n");
             gotoxy(10,6);
          for(i=0;i<50;i++)
          {
              printf("*");
          }
            Sleep(2000);
            system("cls");
            favourite();
            break;
        }
        else
             {
            favourite();
            break;
          }
    }
    else
     {  favourite();
        break;
    }
break;
case 14:

    semimain();
break;
}}
}


void finish(){

    gotoxy(28,11);
    printf("Thank You For Listening Hack'OHolics Playlist\n");
gotoxy(30,13);
    system("COLOR 0");
  printf("Regards,Team Hack'OHolics\n");
    Sleep(2000);
  //getch();
    system("cls");

}


void allsonglist()
{
    int j,i;
            system(" COLOR E4");
  	 		 gotoxy(18,2);
for(j=0;j<29;j++)
   {
       printf("*");
   }
   gotoxy(18,3);
   printf("*");
 gotoxy(25,3);
   printf("All Songs List\n");
gotoxy(46,3);
   printf("*");
gotoxy(18,4);
   for(j=0;j<29;j++)
   {
       printf("*");
   }
   Sleep(500);
	gotoxy(24,6);
	printf("SHAPE OF YOU\n");
	Sleep(100);
	gotoxy(24,8);
    printf("Believer\n");
    Sleep(100);
	gotoxy(24,10);
	printf("Busstop\n");
	Sleep(100);
	gotoxy(24,12);
	printf("Zenzenh Apple ringtone\n");
	Sleep(100);
	gotoxy(24,14);
	printf("Designer Panda\n");
	Sleep(100);
	gotoxy(24,16);
	printf("Intro Your Arms\n");
	Sleep(100);
	gotoxy(24,18);
	printf("Look in the eyes\n");
	Sleep(100);
	gotoxy(24,20);
	printf("I don' t need your help\n");
	Sleep(100);
	gotoxy(24,22);
	printf("Subhaanallah\n");
	Sleep(100);
	gotoxy(24,24);
	printf("Tu hi re\n");
	Sleep(100);
	gotoxy(24,26);
	printf("Maa tujhe salaam\n");
	Sleep(100);
	gotoxy(24,28);
	printf("Breathless\n");
	Sleep(100);
	gotoxy(24,30);
	printf("Kolaveri D \n");
	Sleep(100);

		gotoxy(3,32);
	for(i=0;i<70;i++)
    {
        printf("*");
    }
    Sleep(100);
    gotoxy(3,34);
	printf("To Go Back Press any Key");
	getch();
	system("cls");
		semimain();
}


void credits()
{
    int i;
    system("COLOR E4");
    gotoxy(4,3);
    for(i=0;i<37;i++)
    {
        printf("*");
    }
    Sleep(100);
    gotoxy(4,4);
    printf("Greetings For The Day!!......");
    gotoxy(4,5);
    printf("Thank you for listening To HackO'Holics Playlist.....");

    gotoxy(4,7);
    printf("This Project is Created Under The GENESIS event Of ACSES CLUB of WCE,Sangli.");

    gotoxy(4,9);
    printf("Created By :");
    gotoxy(13,10);
    printf("Bhanupriya Singh Naik");
    gotoxy(13,11);
    printf("Pragati Soley");
    gotoxy(13,12);
    printf("Pranav Hingankar");

    gotoxy(4,14);
    printf("Under Mentorship of :");
    gotoxy(13,15);
    printf("Amaan Shaikh");
    gotoxy(13,16);
    printf("Shreyas Malu");
    gotoxy(13,17);
    printf("Vaishnavi Belgamwar");
    gotoxy(13,18);
    printf("Yash Nale");
    gotoxy(4,20);
    for(i=0;i<70;i++)
    {
        printf("*");
    }
    Sleep(100);
    gotoxy(4,22);
	printf("To Go Back Press any Key");
	getch();
	system("cls");
	semimain();

}



