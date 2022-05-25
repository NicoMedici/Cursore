//funziona con wasd

#include<iostream>
#include<windows.h>
#define r 10
#define c 10
void stampa(char m[][c],int x, int y, char cursore);
using namespace std;
int main()
{
	char m[r][c],appoggio,cursore='o';
		int x=0,y=0;
		for(int i=0; i<r; i++)
		for(int j=0; j<c; j++)
		m[i][j]=' ';
		for(;;)
		{
		system("cls");
		stampa(m,x,y,cursore);
		cout<<endl<<endl;
		cout<<"Inserisci il comando : ";
		cout<<endl;
		cout<<"Premi x per scrivere o per muoverti e c per cancellare ";
		cin>>appoggio;	
		switch(appoggio)
		{
			case 'w':
				if(x>0)
				{
				x=x-1;	
				if(cursore=='x')
					m[x][y]='x';
				if(cursore=='c')
					m[x][y]=' '; 	
				}
			
			break;
			case 's':
				if(x<r-1)
					{
					x=x+1;
					if(cursore=='x')
					m[x][y]='x';
					if(cursore=='c')
					m[x][y]=' '; 	
					}
					break;
			case 'a':
				if(y>0)
				{
					y=y-1;
					if(cursore=='x')
					m[x][y]='x';
					if(cursore=='c')
					m[x][y]=' '; 	
				}
				break;
			case 'd':
				if(y<c-1)
				{
						y=y+1;
					if(cursore=='x')
					m[x][y]='x';
					if(cursore=='c')
					m[x][y]=' ';               	
				}
			
				break;
			case 'x':
				cursore='x';
				break;
			case 'o':
				cursore='o';
				break;
			case 'c':
				cursore='c';
				break;
				
		}
		}

		
}
void stampa(char m[][c], int x, int y, char cursore)
{
		for(int i=0; i<r; i++)
			{
				cout<<endl;		
				for(int j=0; j<c; j++)
				{
				if(x==i && y==j)
				cout<<cursore;
				else
				cout<<m[i][j];						
				}		
			}
}
