#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<process.h>
class Hotel
{
private:
char order[50];
char name[30];
char room[30];
int cno;
long Bill;
int a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,x,y,z,rm,days;
char ch,choice;
public:
void enter()
{clrscr();
cout<<"Customer No"<<endl;
cin>>cno;
cout<<"\nEnter Customer Name"<<endl;
gets(name);
cout<<"\nDo you want to checkin (Y)"<<endl;
cin>>ch;
if(ch=='Y' || ch=='y')
{
cout<<"\n------------------";
cout<<"\nPremium Sweet(x) |Deluxe Sweet(y) |Super Deluxe Sweet(z)";
cout<<"\nEnter your choice ";
gets(room);
cout<<"Enter no of days: ";
cin>>days;
}
else
{ strcpy(room,"Not checked in");
days=0;
}
cout<<"Do you want to Dine (y)"<<endl;
cin>>choice;
if(choice=='y' || choice=='Y')
{
cout<<"\n------------------";
cout<<"\nStarters           |Soups           |Main Course       |Beverages";
cout<<"\n------------------";
cout<<"\nNoodles(a)         |Chicken Soup(e) |Butter Chapati(i) |Mojito(m)";
cout<<"\n------------------";
cout<<"\nBurger(b)          |Veg Soup(f)     |Butter Chicken(j) |Pepsi(n)";
cout<<"\n------------------";
cout<<"\nGrilledSandwich(c) |Tomato Soup(g)  |Shahi Paneer(k)   |Coffee(o)";
cout<<"\n------------------";
cout<<"\nPaneer Kabab(d)    |Mushroom Soup(h)|Complete Thali(l) |Tea(p)";
cout<<"\n------------------";
cout<<"\nEnter your Order\n";
gets(order);
}
else
{ strcpy(order,"Only checkedin");
}
}
void show()
{ clrscr();
cout<<"Customer No \n"<<cno;
cout<<"\nCustomer's Name \n";
puts(name);
cout<<"\n------------------";
cout<<"\nPremium Sweet(x)  |Deluxe Sweet(y)  |Super Deluxe Sweet(z)";
cout<<"\nCustomer's Room: ";
puts(room);
cout<<"\nNo of days: "<<days;
cout<<"\n------------------";
cout<<"\nStarters            |Soups           |Main Course       |Beverages";
cout<<"\n------------------";
cout<<"\nNoodles(a)          |Chicken Soup(e) |Butter Chapati(i) |Mojito(m)";
cout<<"\n------------------";
cout<<"\nBurger(b)           |Veg Soup(f)     |Butter Chicken(j) |Pepsi(n)";
cout<<"\n------------------";
cout<<"\nGrilled Sandwich(c) |Tomato Soup(g)  |Shahi Paneer(k)   |Coffee(o)";
cout<<"\n------------------";
cout<<"\nPaneer Kabab(d)     |Mushroom Soup(h)|Complete Thali(l) |Tea(p)";
cout<<"\n------------------";
cout<<"\nCustomer's Order is ";
puts(order);
}
void bill()
{ clrscr();
int le,re,v;
le=strlen(order);
re=strlen(room);
cout<<"\nItem              \tRate           \tAmount";
a=0;
b=0;
c=0;
d=0;
e=0;
f=0;
g=0;
h=0;
i=0;
j=0;
k=0;
l=0;
m=0;
n=0;
o=0;
p=0;
x=0;
y=0;
z=0;
for(v=0;v<re;v++)
{ if(room[v]=='x')
x=x+1;
else if(room[v]=='y')
y=y+1;
else if(room[v]=='z')
z=z+1;
}
for(v=0;v<le;v++)
{ if(order[v]=='a')
a=a+1;
else if(order[v]=='b')
b=b+1;
else if(order[v]=='c')
c=c+1;
else if(order[v]=='d')
d=d+1;
else if(order[v]=='e')
e=e+1;
else if(order[v]=='f')
f=f+1;
else if(order[v]=='g')
g=g+1;
else if(order[v]=='h')
h=h+1;
else if(order[v]=='i')
i=i+1;
else if(order[v]=='j')
j=j+1;
else if(order[v]=='k')
k=k+1;
else if(order[v]=='l')
l=l+1;
else if(order[v]=='m')
m=m+1;
else if(order[v]=='n')
n=n+1;
else if(order[v]=='o')
o=o+1;
else if(order[v]=='p')
p=p+1;
}
if(x>=1)
cout<<"\nPremium Sweet     \t1000           \t"<<x;
if(y>=1)
cout<<"\nDeluxe Sweet      \t2000           \t"<<y;
if(z>=1)
cout<<"\nSuper Deluxe Sweet\t3500           \t"<<z;
if(a>=1)
cout<<"\nNoodles           \t80             \t"<<a;
if(b>=1)
cout<<"\nBurger            \t60             \t"<<b;
if(c>=1)
cout<<"\nGrilled Sandwich  \t50             \t"<<c;
if(d>=1)
cout<<"\nPaneer Kabab      \t70             \t"<<d;
if(e>=1)
cout<<"\nChicken Soup      \t60             \t"<<e;
if(f>=1)
cout<<"\nVeg Soup          \t45             \t"<<f;
if(g>=1)
cout<<"\nTomato Soup       \t50             \t"<<g;
if(h>=1)
cout<<"\nMushroom Soup     \t65             \t"<<h;
if(i>=1)
cout<<"\nButter Chapati    \t10             \t"<<i;
if(j>=1)
cout<<"\nButter Chicken    \t120            \t"<<j;
if(k>=1)
cout<<"\nShahi Paneer      \t110            \t"<<k;
if(l>=1)
cout<<"\nComplete Thali    \t150            \t"<<l;
if(m>=1)
cout<<"\nMojito            \t50             \t"<<m;
if(n>=1)
cout<<"\nPepsi             \t30             \t"<<n;
if(o>=1)
cout<<"\nCoffee            \t25             \t"<<o;
if(p>=1)
cout<<"\nTea               \t25             \t"<<p;
Bill=(x*days*1000)+(y*days*2000)+(z*days*3500)+(a*80)+(b*60)+(c*50)+(d*70)+(e*60)+(f*45)+(g*50)+(h*65)+(i*10)+(j*120)+(k*110)+(l*150)+(m*50)+(n*30)+(o*25)+(p*25); cout<<endl;
cout<<"\n Customer Number: "<<cno;
cout<<endl;
cout<<"\n Customer Name:   "<<name;
cout<<endl;
cout<<"\n Your Bill is:    "<<Bill;
}
int Checkname(char na[20])
{ if(strcmpi(name,na)==0)
return 0;
else
return 1;
}
int Checkno(int no)
{
if(cno==no)
return 0;
else
return 1;
}};
main()
{clrscr();
void Entries();
void Search1();
void Search2();
void Delete1();
void Delete2();
void Modify1();
void Modify2();
void Bill1();
void Bill2();
gotoxy(28,4);
cout<<"WELCOME TO LOST SPRINGS";
cout<<"\n                           =======================";
cout<<endl;
cout<<endl;
cout<<"\n                          Enjoy it to the Fullest";
cout<<"\n                          -----------------------";
cout<<"\n                          *Book Your Room";
cout<<"\n                          *Dine with Us";
cout<<"\n                          -----------------------";
cout<<endl;
cout<<endl;
cout<<"                           WE SERVE HAPPINESS (^_^)";
cout<<endl;
cout<<"\n             Phone no: +91-9999109307      \tFax:011-25719024";
cout<<endl;
cout<<"\n                        **Press any key to Continue... ";
getch();
come:
clrscr();
gotoxy(27,5);
cout<<"\n                                    MENU";cout<<endl;
cout<<"\n\n                    *Find out What we have for you*"<<endl; 
cout<<"\n                -----------------------------------";
cout<<"\n                   1. Available Rooms and Eatables";
cout<<"\n                   2. Put your Order here";
cout<<"\n                   3. Change your Order";
cout<<"\n                   4. Search your Order";
cout<<"\n                   5. Delete your Order";
cout<<"\n                   6. What's your Bill?";
cout<<"\n                   7. Exit";
cout<<"\n                -----------------------------------";
cout<<"\n                   **Enter your Choice ";
char ch;
cin>>ch;
switch(ch)
{case'7':
exit(0);
break;
case'1':
Menu:
clrscr();
cout<<endl<<endl<<endl;
cout<<"\nRooms and Eatables\n";
cout<<"\nEnter your  Choice\n";
cout<<"\n(a) Rooms\n";
cout<<"\n(b) Menu\n";
cout<<"\n(c) Starters\n";
cout<<"\n(d) Soups\n";
cout<<"\n(e) Main Course\n";
cout<<"\n(f) Beverages\n";
cout<<"\n(g) Main Menu\n";
char z;
cin>>z;
if(z=='a')
{clrscr();
gotoxy(28,4);
cout<<"\nRooms";cout<<endl;
cout<<"\n\nSno. | Name               | Rate";
cout<<"\n------------------------------------";
cout<<"\n\n1.   | Premium Sweet      | 1000";
cout<<"\n\n2.   | Deluxe Sweet       | 2000";
cout<<"\n\n3.   | Super Deluxe Sweet | 3500";
cout<<"\n\n----------------------------------";
getch();
goto Menu;
}
else if(z=='b')
{clrscr();
gotoxy(27,4);
cout<<"Eatables";cout<<endl;
cout<<"\n--------------------";
cout<<"\n(a) Starters";
cout<<"\n(b) Soups";
cout<<"\n(c) Main Course";
cout<<"\n(d) Beverages";
cout<<"\n--------------------";
getch();
goto Menu;
}
else if(z=='c')
{clrscr();
gotoxy(27,4);
cout<<"Starters";cout<<endl;
cout<<"\nSno.  | Name             | Rate | Amount";
cout<<"\n------------------------------------------------";
cout<<"\n1.    | Noodles          | 80   | 1 Full Plate";
cout<<"\n2.    | Burger           | 60   | 1 Piece";
cout<<"\n3.    | Grilled Sandwich | 50   | 1 Piece";
cout<<"\n4.    |Paneer Kabab      | 70   | 5 Pieces";
cout<<"\n------------------------------------------------";
getch();
goto Menu;
}
else if(z=='d')
{clrscr();
gotoxy(27,4);
cout<<"Soups";cout<<endl;
cout<<"\nSno. | Name         | Rate | Amount";
cout<<"\n------------------------------------";
cout<<"\n1.   | Chicken Soup | 60   | 1 Bowl";
cout<<"\n2.   | Veg Soup     | 45   | 1 Bowl";
cout<<"\n3.   | Tomato Soup  | 50   | 1 Bowl";
cout<<"\n4.   |Mushroom Soup | 65   | 1 Bowl";
cout<<"\n-------------------------------------";
getch();
goto Menu;
}
else if(z=='e')
{clrscr();
gotoxy(27,4);
cout<<"Main Course";cout<<endl;
cout<<"\n------------------------------------------";
cout<<"\nSno. | Name           | Rate | Amount";
cout<<"\n1.   | Butter Chapati | 10   | 1";
cout<<"\n2.   | Butter Chicken | 120  | 1 Bowl";
cout<<"\n3.   | Shahi Paneer   | 110  | 1 Bowl";
cout<<"\n4.   |Complete Thali  | 150  | Full Plate";
cout<<"\n------------------------------------------";
getch();
goto Menu;
}
else if(z=='f')
{clrscr();
gotoxy(27,4);
cout<<"Beverages";cout<<endl;
cout<<"\n-------------------------------";
cout<<"\nSno. | Name   | Rate | Amount";
cout<<"\n1.   | Mojito | 50   | 1 Glass";
cout<<"\n2.   | Pepsi  | 30   | 1 Glass";
cout<<"\n3.   | Coffee | 25   | 1 Cup";
cout<<"\n4.   | Tea    | 25   | 1 Cup";
cout<<"\n-------------------------------";
getch();
goto Menu;
}
else if(z=='g')
{
goto come;
}
else
{clrscr();
gotoxy(12,12);
cout<<"\t     Wrong Choice";
gotoxy(13,15);
cout<<"\n\n\tChoose from the Following Options";
getch();
goto come;
}
break;
case'2':
Entries();
gun:
clrscr();
cout<<endl<<endl<<endl;
cout<<"1. Exit";
cout<<"\n2. Main Menu";
cout<<endl;
cout<<"\nEnter your Choice ";
char a;
cin>>a;
if(a=='1')
exit(0);
else if(a=='2')
goto come;
else
goto gun;
break;
case'3':
resume:
clrscr();
cout<<endl<<endl<<endl;
cout<<"Modification of Customer Details";
cout<<"\n1. By Entering Customer's Name";
cout<<"\n2. By Entering Customer's Number";
cout<<endl;
cout<<"\nEnter your Choice ";
char m;
cin>>m;
if(m=='1')
{Modify1();
like:
clrscr();
cout<<endl<<endl<<endl;
cout<<"1. Exit ";
cout<<"\n2. Main Menu ";
cout<<endl;
cout<<"\nEnter your Choice ";
char a;
cin>>a;
if(a=='1')
exit(0);
else if(a=='2')
goto come;
else
goto like;
}
else if(m=='2')
{Modify2();
Num:
clrscr();
cout<<endl<<endl<<endl;
cout<<"1. Exit ";
cout<<"\n2. Main Menu ";
cout<<endl;
cout<<"\nEnter your Choice ";
char a;
cin>>a;
if(a=='1')
exit(0);
else if(a=='2')
{clrscr();
gotoxy(12,12);
cout<<"Wrong Choice";
gotoxy(13,15);
cout<<"\nChoose from the Following Options ";
goto come;
}
}
break;
case'4':
back:
clrscr();
cout<<endl<<endl<<endl;
cout<<"Searching Customer Details";
cout<<"\n1. By Entering Customer's Name";
cout<<"\n2. By Entering Customer's Number";
cout<<endl;
cout<<"\nEnter your Choice ";
char f;
cin>>f;
if(f=='1')
{Search1();
kick:
clrscr();
cout<<endl<<endl<<endl;
cout<<"1. Exit ";
cout<<"\n2. Main Menu ";
cout<<endl;
cout<<"\nEnter your Choice ";
char a;
cin>>a;
if(a=='1')
exit (0);
else if(a=='2')
goto come;
else
goto kick;
}
else if(f=='2')
{Search2();
sly:
clrscr();
cout<<endl<<endl<<endl;
cout<<"1. Exit ";
cout<<"\n2. Main Menu ";
cout<<endl;
cout<<"\nEnter your Choice ";
char a;
cin>>a;
if(a=='1')
exit(0);
else if(a=='2')
goto come;
else
goto sly;
}
else
{clrscr();
gotoxy(12,12);
cout<<"Wrong Choice";
gotoxy(13,15);
cout<<"\nChoose from the Following Options ";
goto back;
}
break;
case'5':
screen:
clrscr();
cout<<endl<<endl<<endl;
cout<<"Deletion of Customer's Details";
cout<<"\n1. By Entering Customer's Details";
cout<<"\n2. By Entering Customer's Number";
cout<<endl;
cout<<"\nEnter your Choice ";
char c;
cin>>c;
if(c=='1')
{Delete1();
ask:
clrscr();
cout<<endl<<endl<<endl;
cout<<"1. Exit ";
cout<<"\n2. Main Menu ";
cout<<endl;
cout<<"\nEnter your Choice ";
char a;
cin>>a;
if(a=='1')
exit(0);
else if(a=='2')
goto come;
else
goto ask;
}
else if(c=='2')
{Delete2();
duck:
clrscr();
cout<<endl<<endl<<endl;
cout<<"1. Exit ";
cout<<"\n2. Main Menu ";
cout<<endl;
cout<<"\nEnter your Choice ";
char a;
cin>>a;
if(a=='1')
exit(0);
else if(a=='2')
goto come;
else
goto duck;
}
else
{clrscr();
gotoxy(12,12);
cout<<"Wrong Choice";
gotoxy(13,15);
cout<<"\nChoose from the Following Options ";
goto screen;
}
break;
case'6':
clean:
clrscr();
cout<<endl<<endl<<endl;
cout<<"Costumer's Bill";
cout<<"\n1.By Entering Customer Name";
cout<<"\n2.By Entering Customer's Number";
cout<<endl;
cout<<"\nEnter your Choice ";
char h;
cin>>h;
if(h=='1')
{Bill1();
hell:
clrscr();
cout<<endl<<endl<<endl;
cout<<"1. Exit() ";
cout<<"\n2. Main Menu ";
cout<<endl;
cout<<"\nEnter your Choice ";
char a;
cin>>a;
if(a=='1')
exit(0);
else if(a=='2')
goto come;
else
goto hell;
}
else if(h=='2')
{Bill2();
boo:
clrscr();
cout<<endl<<endl<<endl;
cout<<"1. Exit ";
cout<<"\n2. Main Menu ";
cout<<endl;
cout<<"\nEnter your Choice ";
char a;
cin>>a;
if(a=='1')
exit(0);
else if(a=='2')
goto come;
else
goto boo;
}
else
{clrscr();
gotoxy(12,12);
cout<<"Wring Choice ";
gotoxy(13,15);
cout<<"\nChoose from the Following Options ";
goto clean;
}
break;
default:
cout<<"Wrong Choice ";
cout<<"\nChoose from the Following Options ";
goto come;
}
getch();
}
void Entries()
{clrscr();
fstream abc;
abc.open("Hotel.dat",ios::app|ios::binary);
Hotel H1;
char ch;
do
{H1.enter();
abc.write((char*)&H1,sizeof(H1));
cout<<endl;
cout<<"\nDo you wants to enter more enteries(Y/N)\n";
cin>>ch;
}while(ch=='y'||ch=='Y');
abc.close();
getch();
}
void Search1()
{clrscr();
fstream xyz;
xyz.open("Hotel.dat",ios::in|ios::binary);
if(!xyz)
{cout<<"\nFile is not present";
getch();
exit(0);
}
cout<<endl;
cout<<"\nEnter the customer name to be searched\n";
char n[20];
gets(n);
Hotel H2;
int p=0;
while(!xyz.eof())
{xyz.read((char*)&H2,sizeof(H2));
if(H2.Checkname(n)==0)
{H2.show();
p=1;
}
}
if(p==0)
cout<<"\nNo customer with this name is present";
xyz.close();
getch();
}
void Search2()
{clrscr();
fstream pqr;
pqr.open("Hotel.dat",ios::in|ios::binary);
if(!pqr)
{cout<<"\nFile is not present";
getch();
exit(0);
}
cout<<endl;
cout<<"\nEnter the customer no. to be searched\n";
int a=0,p=0;
Hotel H3;
cin>>a;
while(!pqr.eof())
{pqr.read((char*)&H3,sizeof(H3));
if(H3.Checkno(a)==0)
{H3.show();
p=1;
}
}
if(p==0)
{cout<<"\nNo customer with this no. is present";}
pqr.close();
getch();
}
void Delete1()
{clrscr();
fstream abc,pqr;
abc.open("Hotel.dat",ios::in|ios::binary);
pqr.open("HotelMan.dat",ios::app|ios::binary);
if(!abc)
{cout<<"\nFile is not present";
getch();
exit(0);
}
cout<<endl;
cout<<"\nEnter the customer name to be deleted\n";
char cn[20];
gets(cn);
Hotel H4;
int p=0;
while(!abc.eof())
{abc.read((char*)&H4,sizeof(H4));
if(H4.Checkname(cn)==1)
{pqr.write((char*)&H4,sizeof(H4));
}
if(H4.Checkname(cn)==0)
{p=1;
}
}
if(p==0)
cout<<"\nNo customer with such name is present";
else
cout<<"DELETED";
abc.close();
pqr.close();
remove("Hotel.dat");
rename("HotelMan.dat","Hotel.dat");
getch();
}
void Delete2()
{clrscr();
fstream abc,pqr;
abc.open("Hotel.dat",ios::in|ios::binary);
pqr.open("HotelMan.dat",ios::app|ios::binary);
if(!abc)
{cout<<"\nFile is not present";
getch();
exit(0);
}
cout<<endl;
cout<<"\nEnter the customer no. to be deleted\n";
int b;
cin>>b;
Hotel H5;
int p=0;
while(!abc.eof())
{abc.read((char*)&H5,sizeof(H5));
if(H5.Checkno(b)==1)
{pqr.write((char*)&H5,sizeof(H5));
}
if(H5.Checkno(b)==0)
{p=1;
}
}
if(p==0)
{cout<<"\nNo customer wuth this no. is present";
}
else
cout<<"DELETED";
abc.close();
pqr.close();
remove("Hotel.dat");
rename("HotelMan.dat","Hotel.dat");
getch();
}
void Modify1()
{clrscr();
fstream abc;
abc.open("Hotel.dat",ios::app|ios::in|ios::binary);
if(!abc)
{cout<<"\nFile not present";
getch();
exit(0);
}
cout<<endl;
cout<<"\nEnter customer name to be modified\n";
char cusn[20];
gets(cusn);
Hotel H6;
int p=0;
long pos;
while(!abc.eof())
{pos=abc.tellg();
abc.read((char*)&H6,sizeof(H6));
if(H6.Checkname(cusn)==0)
{p=1;
abc.seekg(pos);
H6.enter();
abc.write((char*)&H6,sizeof(H6));
}
}
if(p==0)
{cout<<"\nNo such customer name is present";
}
else
cout<<"MODIFIED";
abc.close();
getch();
}
void Modify2()
{clrscr();
fstream abc;
abc.open("Hotel.dat",ios::app|ios::in|ios::binary);
if(!abc)
{cout<<"\nFile is not present";
getch();
exit(0);
}
cout<<endl;
cout<<"\nEnter customer no. to be modified\n";
int cun;
cin>>cun;
Hotel H7;
int p=0;
long pos;
while(!abc.eof())
{pos=abc.tellg();
abc.read((char*)&H7,sizeof(H7));
if(H7.Checkno(cun)==0)
{H7.enter();
p=1;
abc.seekg(pos);
abc.write((char*)&H7,sizeof(H7));
}
}
if(p==0)
{cout<<"\nNo such customer no. is present";
}
else
cout<<"MODIFIED";
abc.close();
getch();
}
void Bill1()
{clrscr();
fstream xyz;
xyz.open("Hotel.dat",ios::in|ios::binary);
if(!xyz)
{cout<<"\nFile is not present";
getch();
exit(0);
}
cout<<"\nEnter the customer name whose bill is to be calculated\n";
char n[20];
gets(n);
Hotel H8;
int p=0;
while(xyz)
{if(xyz.eof())
break;
xyz.read((char*)&H8,sizeof(H8));
if(H8.Checkname(n)==0)
{H8.bill();
p=1;break;
}
}
xyz.close();
if(p==0)
cout<<"\nNo customer with this name is present";
getch();
}
void Bill2()
{clrscr();
fstream pqr;
pqr.open("Hotel.dat",ios::in|ios::binary);
if(!pqr)
{cout<<"\nFile is not present";
getch();
exit(0);
}
cout<<endl;
cout<<"\nEnter the customer no. whose bill is to be calculated\n";
int a=0,p=0;
Hotel H9;
cin>>a;
while(!pqr.eof())
{
pqr.read((char*)&H9,sizeof(H9));
if(H9.Checkno(a)==0)
{H9.bill();
p=1;break;
}
}
pqr.close();
if(p==0)
cout<<"\nNo customer with this no. is present";
getch();
}
