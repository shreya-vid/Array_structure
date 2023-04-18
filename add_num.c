/*
 * add_num.c
 *
 *  Created on: 15-Apr-2023
 *      Author: AssetManagement
 */


void add_without_airth(int a, int b)
{
		int i;
		for(i=0;i<b;i++)
		{
			a++;
		}
		printf("a=%d\n",a);
}
void ternary(int a, int b)
{
	int s;
	enum {num_1, num_2};
	s=(a>b)?printf("ternary a=%d\n",a):printf("ternary b=%d\n",b);//ternary operator
	if(a>b)
	{
		printf("if condition, a=%d\n",a);
	}
	else
	{
		printf("if condition b=%d\n",b);
	}
	switch(a>b)
	{
	case 1:
		printf("switch a=%d\n",a);
		break;
	case 0:
		printf("switch b=%d\n",b);
		break;
	}
	switch(a>b)
		{
		case num_1:
			printf("enum_switch a=%d\n",a);
			break;
		case num_2:
			printf("enum_switch b=%d\n",b);
			break;
		}
	ternary_2();
}
void ternary_2()
{
	int a=40,b=30,c=12;
	((a>b)&&(a>c))?printf("a is greater\n"):((b>c)?printf("b is greater\n"):printf("c is greater\n"));
	ternary_3();
}
void ternary_3()
{
	int a=40,b=30,c=12,d=50;
	((a>b)&&(a>c)&&(a>d))?printf("a is greater\n"):((b>c)&&(b>d))?printf("b is greater\n"):((c>d)?printf("c is greater\n"):printf("d is greater\n"));
}
