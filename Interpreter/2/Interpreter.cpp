#include <iostream>
#include <string.h>
#include <time.h>
#include <conio.h>
#include <stdlib.h>
#include <stdio.h>
#include<locale.h>
#include<math.h>
using namespace std;
int degnum[20];//deðiþken numaralarý ve deðerleri
//string degism[20],kelal;//deðiþken isimleri
char degism[20][20];
class dgk
{
	private:
		
	public:
		int x1=33,x2,deg[20],degkont=0;
		char gr[10]="GÝR",yz[10]="YAZ",vrgl[10]=",",btr[10]="Bitir",bsla[10]="Baþla";
		
};
char yolla(char kel[], int i,dgk B);
char grs(char diz[], int i,dgk A);
float degeral(char olsayi[],int l);

int main(int argc, char** argv) {
	setlocale(LC_ALL, "Turkish");
	int x;
	dgk X;
		char grsdizi[50]="a";
	degnum[0]=1;
	grs(grsdizi,50,X);
	return 0;
} 	

char grs(char diz[], int i,dgk A)
{
	FILE *alg;
	alg=fopen("interpreter.txt","r");
	while(!feof(alg))
	{
		char dizi[50]="ftu";
		fscanf(alg,"%[^\n]%*c",dizi);
		cout<<"\n"<<dizi<<"\n";
		//printf("%s\n",diz);
		yolla(dizi,50,A);	
	}
	fclose(alg);
}



		
char yolla(char kel[], int i,dgk B)
{
	int ik=0,sk=0,k2=0,inds=0;
	char kelata[30][20] ,kelimeler[20][10];
	//for(int l=0;l<20;)
	//strcpy(kelata[0],arakelime);
	//cout<<"\n"<<arakelime<<"\n";
	//*****************************************************SATIR SATIR ALDIÐIM KODU KELÝMELERE BÖLÜYOR
		while(kel[sk]!='\0')
		{
			ik=sk,k2=0;
			char arakelime[10]="a";
			while(kel[sk]!=' ' && kel[sk]!='\0')sk++;
			//cout<<sk<<endl;
			for(int w=ik;w<sk;w++)
			{
				arakelime[k2]=kel[w];
				k2++;
			}
			//cout<<arakelime<<endl;
			strcpy(kelata[inds],arakelime);
			sk++,inds++;
		}
		//cout<<arakelime;
		//cout<<"\n-"<<kel[i2-2]<<"-";
		//cout<<kelata"         -------------kelime sayýsý---"<<kelindis<<endl;
		//cout<<"\nkelime sayýsý\n"<<inds<<endl;
		for(int y=0;y<inds;y++)
		{
		//			cout<<kelata[y]<<endl;
		}
	float kontrol11=0,islem[10];
	int islemsayi=0;
	cout<<"\n";
	for(int ks=0;ks<inds;ks++)
	{
		
		//cout<<"kelime--"<<kelata[ks]<<"\n";
		int kontrol=1;
		if(!strcmp(kelata[ks],"GÝR"))	
		{
			while(kontrol==1)
			{
				ks++;
				scanf("%d",&degnum[degnum[0]]);
				strcpy(degism[degnum[0]],kelata[ks]);
				//cout<<"degiþken"<<degnum[0]<<"---"<<degism[degnum[0]]<<" = "<<degnum[degnum[0]]<<"\n";
				degnum[0]++;
				if(!strcmp(kelata[ks+1],B.vrgl))
				{
					ks++;
				}else{
					kontrol=2;
				}
			}
		}else if(!strcmp(kelata[ks],"EÐER"))
		{
			for(int r=3;r<inds;r++)
			{
				//cout<<"r---"<<r<<"\n";
				if(!strcmp(kelata[r],"<"))
				{
					//cout<<"a--"<<degeral(kelata[r-1],10)<<"\nb--"<<degeral(kelata[r+1],10)<<endl;
					if(degeral(kelata[r-1],10)<degeral(kelata[r+1],10))	
					{
						
						if(!strcmp(kelata[r+3],"YAZ"))
						{
							//cout<<"2.dogru  r--"<<r<<"   14.kelime---"<<kelata[14]<<"   degnum--"<<degnum[0];
							for(int s=1;s<degnum[0];s++)
							{
								if(!strcmp(degism[s],kelata[r+4]))cout<<"\nekran çýktýsý--"<<degnum[s]<<endl;
								//cout<<"degiþkenler--"<<degism[s]<<"     kelimem--"<<kelata[r+4]<<"\ndegiþken degeri--"<<degnum[s]<<endl;
							}
						}
						break;			
					}else{
						if(!strcmp(kelata[r+6],"EÐER"))
						{
							r=10;
							continue;
						}
						if(r>10)
							{
								if(!strcmp(kelata[18],"'"))
								{
									cout<<kelata[19]<<endl;
									break;
								}	
							}
						if(!strcmp(kelata[r+6],"YAZ"))
						{
							for(int s=1;s<=degnum[0];s++)
							{
								if(!strcmp(degism[s],kelata[r+7]))cout<<degnum[s]<<endl; 
							}
						}
						break;
					}
				}
				if(!strcmp(kelata[r],"<="))
					{
						if(degeral(kelata[r-1],10)<=degeral(kelata[r+1],10))	
						{
							if(!strcmp(kelata[r+3],"YAZ"))
							{
								for(int s=1;s<=degnum[0];s++)
								{
									if(!strcmp(degism[s],kelata[r+4]))cout<<degnum[s]<<endl;
								}
							}
							break;			
						}else{
							if(!strcmp(kelata[r+6],"EÐER"))
							{
								r=10;
								continue;
							}
							if(r>10)
							{
								if(!strcmp(kelata[18],"'"))
								{
									cout<<kelata[19]<<endl;
									break;
								}
							}
							if(!strcmp(kelata[r+6],"YAZ"))
							{
								for(int s=1;s<=degnum[0];s++)
								{
									if(!strcmp(degism[s],kelata[r+7]))cout<<degnum[s]<<endl;
								}
							}
							break;						
						}
					}
				if(!strcmp(kelata[r],">"))
				{
				
					if(degeral(kelata[r-1],10)>degeral(kelata[r+1],10))	
					{
						if(!strcmp(kelata[r+3],"YAZ"))
						{
							for(int s=1;s<degnum[0];s++)
							{
								if(!strcmp(degism[s],kelata[r+4]))cout<<degnum[s]<<endl;
							}
						}
						break;			
					}else{
						if(!strcmp(kelata[r+6],"EÐER"))
						{
							r=10;
							continue;
						}
						if(r>10)
							{
								if(!strcmp(kelata[18],"'"))
								{
									cout<<kelata[19]<<endl;
									break;
								}
							}
						if(!strcmp(kelata[r+6],"YAZ"))
						{
							for(int s=1;s<=degnum[0];s++)
							{
								if(!strcmp(degism[s],kelata[r+7]))cout<<degnum[s]<<endl;
							}
						}
						break;
						
					}
				}
				if(!strcmp(kelata[r],">="))
					{
						if(degeral(kelata[r-1],10)>=degeral(kelata[r+1],10))
						{
							if(!strcmp(kelata[r+3],"YAZ"))
							{
								for(int s=1;s<=degnum[0];s++)
								{
									if(!strcmp(degism[s],kelata[r+4]))cout<<degnum[s]<<endl;
								}
							}
							break;			
						}else{
							if(!strcmp(kelata[r+6],"EÐER"))
							{
								r=10;
								continue;
							}
							if(r>10)
							{
								if(!strcmp(kelata[18],"'"))
								{
									cout<<kelata[19]<<endl;
									break;
								}
							}
							if(!strcmp(kelata[r+6],"YAZ"))
							{
								for(int s=1;s<=degnum[0];s++)
								{
									if(!strcmp(degism[s],kelata[r+7]))cout<<degnum[s]<<endl;
								}
							}
							break;
						
						}
					}
					if(!strcmp(kelata[r],"="))
					{
						if(degeral(kelata[r-1],10)==degeral(kelata[r+4],10))
						{
							cout<<"EÞÝTTÝR"<<endl;
							break;			
						}else{
							if(!strcmp(kelata[r+6],"EÐER"))
							{
								r=10;
								continue;
							}
							if(r>10)
							{
								if(!strcmp(kelata[18],"'"))
								{
									cout<<kelata[19]<<endl;
									break;
								}  
							}
							if(!strcmp(kelata[r+6],"YAZ"))
							{
								for(int s=1;s<=degnum[0];s++)
								{
									if(!strcmp(degism[s],kelata[r+4]))cout<<degnum[s]<<endl;
								}
							}
							break;
						
						}
					}
			
			}
			
			
		}else if(!strcmp(kelata[ks],"YAZ"))
			{
				ks++;
				for(int p=1;p<10;p++)
				{
					if(!strcmp(kelata[ks],degism[p]))
					{
						cout<<"\nekran çýktýsý---->"<<degnum[p]<<"\n";	
					}
				}
			}else if(!strcmp(kelata[ks],"Baþla")  || !strcmp(kelata[ks],"Bitir"))
				{
			 		;	
				}else 
				{
					//***************************************************ÝÞLEM KISMI-1-(degiþken varmý yokmu kontrolü-yoksa tanýmlýyor)
					kontrol11=0;
					for(int yu=1;yu<degnum[0];yu++)
					{
						if(!strcmp(kelata[ks],degism[yu]))
						{
							kontrol11=1;
						}		
					}
					if(kelata[ks][1]=='.')
					{
						kontrol11=1;
						continue;
					}
					if(kontrol11==0)
					{
						degnum[degnum[0]]=0;
						strcpy(degism[degnum[0]],kelata[ks]);
						degnum[0]++;
					}
					//********************************************************ÝÞLEM KISMI-2-(matematiksel iþlemleri ve deðiþknemi sayýmý kontrolü)
					for(int h=4;h<inds;h+=2)
					{
						if(!strcmp(kelata[h],"*"))
						{
							islem[islemsayi]=degeral(kelata[h-1],10)*degeral(kelata[h+1],10);
							itoa(islem[islemsayi],kelata[h+1],10),itoa(islem[islemsayi],kelata[h-1],10);
							islemsayi++;
						}
						if(!strcmp(kelata[h],"/"))
						{
							islem[islemsayi]=degeral(kelata[h-1],10)/degeral(kelata[h+1],10);
							cout<<islem[islemsayi]<<endl;
							itoa(islem[islemsayi],kelata[h+1],10),itoa(islem[islemsayi],kelata[h-1],10);
							islemsayi++;
						}
						
					}
					for(int h=4;h<inds;h+=2)
					{
						if(!strcmp(kelata[h],"+"))
						{
							islem[islemsayi]=degeral(kelata[h-1],10)+degeral(kelata[h+1],10);
							//cout<<islemsayi<<endl;
							//cout<<"islem"<<islem[islemsayi]<<endl;
							if(!strcmp(kelata[h+2],"*") || !strcmp(kelata[h+2],"/"))
							{
								if(!strcmp(kelata[h+4],"*") || !strcmp(kelata[h+4],"/"))
								{								
									if(!strcmp(kelata[h+6],"*") || !strcmp(kelata[h+6],"/"))
									{								
										itoa(islem[islemsayi],kelata[h+7],10);
										if(h-7!=1)itoa(islem[islemsayi],kelata[h-7],10);
										
									}
									itoa(islem[islemsayi],kelata[h+5],10);
									if(h-5!=1)itoa(islem[islemsayi],kelata[h-5],10);
								}
								itoa(islem[islemsayi],kelata[h+3],10);
								if(h-3!=1)itoa(islem[islemsayi],kelata[h-3],10);
								//cout<<"iff\n";
							}
							itoa(islem[islemsayi],kelata[h+1],10);
							itoa(islem[islemsayi],kelata[h-1],10);
							islemsayi++;
						}
						if(!strcmp(kelata[h],"-"))
						{
							islem[islemsayi]=degeral(kelata[h-1],10)-degeral(kelata[h+1],10);
							if(!strcmp(kelata[h+2],"*") || !strcmp(kelata[h+2],"/"))
							{
								if(!strcmp(kelata[h+4],"*") || !strcmp(kelata[h+4],"/"))
								{								
									if(!strcmp(kelata[h+6],"*") || !strcmp(kelata[h+6],"/"))
									{								
										itoa(islem[islemsayi],kelata[h+7],10);
										if(h-7!=1)itoa(islem[islemsayi],kelata[h-7],10);
									}
									itoa(islem[islemsayi],kelata[h+5],10);
									if(h-5!=1)itoa(islem[islemsayi],kelata[h-5],10);
								}
								itoa(islem[islemsayi],kelata[h+3],10);
								if(h-3!=1)itoa(islem[islemsayi],kelata[h-3],10);
							}
							itoa(islem[islemsayi],kelata[h+1],10);
							itoa(islem[islemsayi],kelata[h-1],10);
							islemsayi++;
						}
					}
					if(inds==4)
					{
							islem[islemsayi]=degeral(kelata[3],10);
							islemsayi++;
							//itoa(islem[islemsayi],kelata[h+1],10),itoa(islem[islemsayi],kelata[h-1],10);
					}
					//********************SONUCA ATAMA YAPILIYOR
					//cout<<"islem sonucu-"<<islem[islemsayi-1]<<"\n";
					for(int k=1;k<=degnum[0];k++)
					{
						//cout<<"\n"<<kelata[1]<<"--"<<degism[k]<<"--"<<degnum[0]<<"\n";
						if(!strcmp(degism[k],kelata[1]))
						{
							degnum[k]=islem[islemsayi-1];
						}
					}
					//cout<<"aloo\n";
					
					break;
				}
					//*********************************************************
		}
			//cout<<kelata;
			//grs(kel,10,B);
}
	
float degeral(char olsayi[],int l)
{
	int kontrol=0;
	for(int k=1;k<degnum[0];k++)
	{
		if(!strcmp(degism[k],olsayi))
		{
			return degnum[k];
			kontrol=1;
		}
	}
	if(kontrol==0)
	{
		return atoi(olsayi);
	}
}


