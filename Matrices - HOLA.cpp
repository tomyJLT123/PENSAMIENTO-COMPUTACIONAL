#include<iostream>
using namespace std;
int main()
{
	char H[5][4], O[5][4], L[5][4],A[5][4],i,j;
	//H
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			H[i][j]=' ';
		}
	}
	for(i=0;i<5;i++)
	{
		H[i][0]='*'; H[i][3]='*';
	}
	for(i=1; i<3;i++)
	{
		H[2][i]='*'; 
	}
	//O
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			O[i][j]=' ';
		}
	}
	for(i=0;i<5;i++)
	{
		O[i][0]='*'; O[i][3]='*';
	}
	for(i=1;i<3;i++)
	{
		O[0][i]='*'; O[4][i]='*';
	}
	//L
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			L[i][j]=' ';
		}
	}
	for(i=0;i<5;i++)
	{
		L[i][0]='*';
	}
	for(i=1;i<4;i++)
	{
		L[4][i]='*';
	}
	//A
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			A[i][j]=' ';
		}
	}
	for(i=0;i<5;i++)
	{
		A[i][0]='*'; A[i][3]='*';
	}
	for(i=1;i<3;i++)
	{
		A[0][i]='*'; A[2][i]='*';
	}
	//Mostrar
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<H[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<O[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<L[i][j];
		}
		cout<<endl;
	}
	cout<<endl;
	for(i=0;i<5;i++)
	{
		for(j=0;j<4;j++)
		{
			cout<<A[i][j];
		}
		cout<<endl;
	}
	return 0;
}