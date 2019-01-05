#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;



int main()
{
    int matrik[5][5]={{0,1,2,3,4},{5,10,6,0,4}};

	for (int i=0;i<=4;i++)
	{
		for (int j=0;j<=4;j++)
        {
            cout<<matrik[i][j];


        }
         cout<<endl;
	}
	getch();
	return 0;


}
