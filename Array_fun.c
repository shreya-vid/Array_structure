
/*
 * Array_fun.c
 *
 *  Created on: 15-Apr-2023
 *      Author: AssetManagement
 */

void swap()
{
	int s[4]={10,20,30,40},v[4];
	int a=10,b=20;
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d\t b=%d\n",a,b);
	copy_array(s,v);
}
void copy_array(int s[],int v[])
{
	int i;
	printf("Copied array\n");
	for(i=0;i<4;i++)
	{
		v[i]=s[i];
		printf("v[%d]=%d\n",i,v[i]);
	}
}
void string()
{
		char a[3][6]={"ram","raheem","johny"};
		int i,j;
		printf("Two dimensional string array\n");
		for(i=0;i<3;i++)
		{
		    for(j=0;j<6;j++)
	        {
	           printf("%c",a[i][j]);
	        }
	    printf("\n");
		}
		string_char();
		char_str(a);
}
void string_char()
{
		char b[]="Shreyaswini Vidhyadhare",c[]="Vidhyadhare";
		int i;
		printf("sizeof b=%d\n",sizeof(b));
		printf("String array\n");
		for(i=0;b[i]!='\0';i++)
		{
			printf("%c",b[i]);
		}
		printf("\n");
		str_array(c);

}
void str_array(char c[])
{
	printf("%s\n",c);
	ch_str();
}
void char_str(char m[][6])
{
	int i,j,k;
	printf("Two dimensional int array\n");
	for(j=0;j<3;j++)
	{
		for(k=0;k<6;k++)
		{
			printf("%c",m[j][k]);
		}
		printf("\n");
	}
}
void ch_str()
{
		char r[]={'a','b','c'},m[2][3]={1,23,4,67,8,9};
		int i,j,k;
		for(i=0;i<sizeof(r);i++)
		{
			printf("%c\t",r[i]);
		}
		printf("\n");
		printf("Two dimensional int array\n");
		for(j=0;j<2;j++)
			{
				for(k=0;k<3;k++)
				{
					printf("%d\t",m[j][k]);
				}
				printf("\n");
			}

}
