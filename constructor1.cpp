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
}



//to count occurence of a character y in a string
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
char s[50],y;
int ctr=0,i;
cout<<"\nenter any string::";
gets(s);
cout<<"\nenter the character to be searched for::";
cin>>y;
for(i=0;s[i]!='\0';i++)
  if(s[i]==y)
    ctr++;
cout<<"\noccurence of the character in the string is::"<<ctr;
getch();
}
