#include"iostream"
#include"iomanip"
#include"fstream"
#include"regex"
using namespace std;
class A
{
public:
struct base
{
char larg[1000];
char largloc[1000];
char filesf[1000];
}b[100];
int i,j,k,m;
char ch;
};
class C:public A
{
public:
void totalff()
{
system("ls -a ./MAIN > ff.txt");
ifstream in("ff.txt", ios::in | ios::binary);
in.seekg(0, ios::beg);
while(in.get(ch))
cout<<ch;
}
void totalimg()
{
system("ls ./MAIN | grep .jpg$ > tot.txt");
ifstream in("tot.txt", ios::in | ios::binary);
in.seekg(0, ios::beg);
while(in.get(ch))
cout<<ch;
}
void word()
{
system("ls ./MAIN | grep .docx$ > word.txt");
ifstream in("word.txt", ios::in | ios::binary);
in.seekg(0, ios::beg);
while(in.get(ch))
cout<<ch;
}
void txt()
{
system("ls ./MAIN | grep .txt$ > text.txt");
ifstream in("text.txt", ios::in | ios::binary);
in.seekg(0, ios::beg);
while(in.get(ch))
cout<<ch;
}
void appli()
{
system("ls ./MAIN | grep .exe$ > appli.txt");
ifstream in("appli.txt", ios::in | ios::binary);
in.seekg(0, ios::beg);
while(in.get(ch))
cout<<ch;
}
void sizefi()
{
system("du -ak /home/kathan/MAIN/  > size.txt");
ifstream in("size.txt", ios::in | ios::binary);
in.seekg(0, ios::beg);
while(in.get(ch))
cout<<ch;
}
void cpp()
{
system("ls ./MAIN | grep .cpp$ > cadv.txt");
ifstream in("cadv.txt", ios::in | ios::binary);
in.seekg(0, ios::beg);
while(in.get(ch))
cout<<ch;
}
void fivechar()
{
system("ls *?????.cpp > five.txt");
ifstream in("five.txt", ios::in | ios::binary);
in.seekg(0, ios::beg);
while(in.get(ch))
{
cout<<ch;
}
in.close();
}
void large()
{
system("du -a /home/kathan/MAIN/ | sort -n -r | head -n 2 |tail -n 1 > large.txt");
ifstream in("large.txt", ios::in | ios::binary);
in.seekg(0, ios::beg);
while(in.get(ch))
{
cout<<ch;
}
}
void copy()
{
system("mv /home/kathan/MAIN/*.jpg /home/kathan/MAIN/pictures");
cout<<"All photos have been transfered";
}

};
class B:public C
{
public:
void menu()
{
cout.fill('-');
		cout.width(136);
		cout<<""<<endl;

		cout.fill('*');
		cout.width(80);
		cout<<"[   PROJECT:1   ]";
		cout.fill('*');
		cout.width(56);
		cout<<""<<endl;
		
		cout.fill('-');
		cout.width(136);
		cout<<""<<endl;
		
		cout.fill('*');
		cout.width(86);
		cout<<"[   DESKTOP MANAGEMENT SYSTEM   ]";
		cout.fill('*');
		cout.width(50);
		cout<<""<<endl;
		
		cout.fill('-');
		cout.width(136);
		cout<<""<<endl;

	cout<<"->A DESKTOP MANAGEMENT SYSTEM IS A SYSTEM WHERE ALL THE PROCESS THAT ARE BEING EXECUTED AT DESKTOP CAN BE MANAGED"<<endl;
//cout<<"Welcome to desktop management system"<<endl;
cout<<"Choose a field to manage the desktop"<<endl;
cout<<"1.Total number of files in current drive"<<endl;
cout<<"2.Total number of image files"<<endl;
cout<<"3.Total number of word files"<<endl;
cout<<"4.Total number of text files(.txt)"<<endl;
cout<<"5.Total number of executable files"<<endl;
cout<<"6.Size of all files"<<endl;
cout<<"7.Organize your images"<<endl;
cout<<"8.Display all your c++ files"<<endl;
cout<<"9.Display files having 5 or more characters"<<endl;
cout<<"10.Largest file and its location"<<endl;
cout<<"0.Exit"<<endl;
cin>>m;
redirect();
}
void redirect()
{
if(m==1)
{
totalff();
cout<<("You will be redirected to menu in 10 seconds")<<endl;
system("sleep 10");
system("clear");
menu();
}
else if(m==2)
{
totalimg();
cout<<("You will be redirected to menu in 10 seconds")<<endl;
system("sleep 10");system("clear");
menu();
}
else if(m==3)
{
word();
cout<<("You will be redirected to menu in 10 seconds")<<endl;
system("sleep 10");system("clear");
menu();
}
else if(m==4)
{
txt();
cout<<("You will be redirected to menu in 10 seconds")<<endl;
system("sleep 10");system("clear");
menu();
}
else if(m==5)
{
appli();
cout<<("You will be redirected to menu in 10 seconds")<<endl;
system("sleep 10");system("clear");
menu();
}
else if(m==6)
{
sizefi();
cout<<("You will be redirected to menu in 10 seconds")<<endl;
system("sleep 10");system("clear");
menu();
}
else if(m==7)
{
copy();
cout<<("You will be redirected to menu in 10 seconds")<<endl;
system("sleep 10");system("clear");
menu();
}
else if(m==8)
{
cpp();
cout<<("You will be redirected to menu in 10 seconds")<<endl;
system("sleep 10");system("clear");
menu();
}
else if(m==9)
{
fivechar();
cout<<("You will be redirected to menu in 10 seconds")<<endl;
system("sleep 10");system("clear");
menu();
}
else if(m==10)
{
large();
cout<<("You will be redirected to menu in 10 seconds")<<endl;
system("sleep 10");system("clear");
menu();
}
else if(m==0)
{
cout<<"Exiting program"<<endl;
system("sleep 3");
system("clear");
}
else
{
system("clear");
cout<<"Choice error please re-enter your choice"<<endl;
menu();
}
}
};
int main()
{
system("clear");
B ob;
ob.menu();
return 0;
}
