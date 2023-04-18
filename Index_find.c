/*
 * Index_find.c
 *
 *  Created on: 16-Apr-2023
 *      Author: AssetManagement
 */
//print values of index 7,6,1,0,9
void array11_one()
{
	int i,v[10]={10,22,38,49,50,64,72,82,91,100,12};
	for(i=0;i<11;i++)
	{
		if(i==0 || i==1 || i==6 || i==7 || i==9)
		{
			printf("v[%d]=%d\n",i,v[i]);
		}
	}
}
void array2()
{
	int i,j,u[3][4]={11,28,3,4,4,6,7,83,2,39,4,5};
	printf("print index 0,1,6,7,9 values\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if((i==0&&j==0) || (i==0&&j==1) || (i==1&&j==2) || (i==1&&j==3) || (i==2&&j==1))
			{
				printf("a[%d][%d]=%d\n",i,j,u[i][j]);
			}
		}
	}
}
void three_dime_arr()
{
	int index,row,col,a[2][2][2]={{{1,2},{33,44}},{{55,66},{7,8}}};
	for(index=0;index<2;index++)
	{
		for(row=0;row<2;row++)
		{
			for(col=0;col<2;col++)
			{
				if(((index==0)&&(row==0)&&(col==1))||((index==1)&&(row==0)&&(col==0)))
				{
					printf("%d\n",a[index][row][col]);
				}
			}
		}
	}
}
