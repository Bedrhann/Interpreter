 #include <iostream>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include<locale.h>
#include<math.h>
using namespace std;
int dz[20];
char degkel[10][15];
string a,b;
class dgk
{
	private:
		
	public:
		int x1=33,x2,deg[20],degkont=0;
		char gr[10]="GÝR";
		
};
int yolla(char kel[], int i);



int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	int x=6;
	char tr[10]="789",*k,isa[20]=" ",diz[10]="casdd";
	FILE *alg;
	alg=fopen("interpreter.txt","r");
	string al,re;
	//getline(cin,re);
	//getline(cin,al);
	dgk A;
	//scanf("%s",tr);
	//sscanf(tr,"%s",diz);
	//sstrcpy(al,re);
	//getline(cin,a[0]);
	//getline(cin,a[1]);
	//cout<<diz;
	//x=strlen(diz);
	
	 //tr="asd";
	 char asd[10][10];
	//asd="aasers";
	x=atoi(tr);	
	strcpy(asd[3],tr);
	//cout<<x;
	x=222123123;
	char y[10]="asd";
	//char d='s';
	//int t=(int)d;
	//d=x+'';
	strcpy(y,"123");
	//strcpy(asd[4],"reeee");
//	char d=(char) x;
	itoa(x,y,10);
	for(int i=0;i<9;i++)
	{
		if(i==3)
		{
			i=6;
			continue;
		}
		cout<<i<<endl;
	}
//	cout<<y;
	//dz[1]=4;
	//cout<<dz[1]<<"\n";
	//cout<<"mainde--"<<A.x1<<"\n";
	//yolla(asd[4],10);
	//cout<<dz[1]<<"\n";
	//cout<<"mainde--"<<A.x1<<"\n";
	fclose(alg);
	return 0;
}


int yolla(char kel[], int i)
{
	//B.x1=3;
	//cout<<kel;
	//cout<<dz[1]<<"\n";
	//cout<<"fonksiyonda--"<<B.x1<<"\n";
	//return  B;
	
}

