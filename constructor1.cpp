// Constructor and Destructor

#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class Outfit
{
 char ocode[10];
 char otype[20];
 int osize;
 char ofabric[20];
 int oprice;
 void initprice()
{ int flag=0;
 if(strcmp(ofabric,"Denim")==0)
 { flag=1;
  if(strcmp(otype,"Trouser")==0)
  oprice=1500;
  else
  if
  (strcmp(otype,"Jacket")==0)
  oprice=2500;
 }
 if(flag==0)
 {
 if(strcmp(otype,"Trouser")==0)
 oprice=1500-(1500/4);
 else
 if
 (strcmp(otype,"Jacket")==0)
 oprice=2500-(2500/4);
 }
}
public:
Outfit()
{cout<<"\n Constructor is called automatically";
 strcpy(ocode,"not initialised");
 strcpy(otype,"not initialised");
 strcpy(ofabric,"not initialised");
 osize=0;
 oprice=0;
}
void Input()
{
 cout<<"\nEnter Code::";
 gets(ocode);
 cout<<"\nEnter Size::";
 cin>>osize;
 cout<<"\nEnter Fabric::";
 gets(ofabric);
 cout<<"\nEnter Type::";
 gets(otype);
 initprice();
}
void display()
{cout<<"\n\nRESULT";
 cout<<"\n\nCode="<<ocode;
 cout<<"\n\nSize="<<osize;
 cout<<"\n\nFabric="<<ofabric;
 cout<<"\n\nType="<<otype;
 cout<<"\n\nPrice="<<oprice;
}
};
void main()
{
 clrscr();
 Outfit x;
 x.Input();
 x.display();
 getch();
