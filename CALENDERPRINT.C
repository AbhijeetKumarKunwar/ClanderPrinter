#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
//THIS IS THE PROJECT REGARDING THE PRINTING THE MONTH  CALENDER OF THE
//PARTICULAR YEAR ,ACTUALLY IT WILL DISPLAY THE CALENDER OF THE  MONTH
{
    while(1)
    {

	int dd,mm,yy,a,b,c,d,e,f,g,add=0,day,i,k,j;
	int odd[]={0,3,0,3,2,3,2,3,3,2,3,2,3};
	system("cls");

//	printf("enter the day of month of your bday:");
//	scanf("%d",&dd);
	printf("Enter the month :");
	scanf("%d",&mm);
	if (mm >=1 && mm<=12)
	{
	printf("Enter the year :");
	scanf("%d",&yy);
	if(yy>=1000)
	{

	}
	else
	{
		printf("invalid year");
		break;

	}
}
else
{
	printf("invalid month");
	break;
}
	a=yy-1;
	k=a%100;
	b=yy-k-1;
	c=k;
	d=b%400;
	if(d==100)
		e=5;
	if(d==200)
		e=3;
	if(d==300)
		e=1;
	if(d==0)
		e=0;
	f=c/4;
	g=c-f;
	e=e+2*f+g;
	//the below 6 lines are for calender they are not there for date of birth
	if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
		day=31;
	else if(mm==2)
		day=28;
	else
		day=30;
if(yy%4==0 && yy%100==0 &&yy%400==0)
{    if(mm==2)
	  day=29;
odd[2]=1;
}
if(yy%4==0 && yy%100!=0)
{     if(mm==2)
	   day=29;

	  odd[2]=1;

}
for(i=1;i<=mm-1;i++)
{
	add=add+odd[i];
}
add=add+e; //+dd
//day=add%7;


add=add%7;
//printf("%d\n",add );
printf("\nMON  TUE  WED  THU  FRI  SAT  SUN\n");

for(i=1,j=1;i<=day;j++)
{
	if(add>=j)
	{
		printf("     ");

}
	else
	{
		if(i<10)
		{
			printf(" %d ",i);
			printf("  ");
			i++;
		}

		else
		{
		printf("%d ",i);
		printf("  ");
		i++;
	}

	}
if(j%7==0)
printf("\n");
}

getch();
break;
    }
return 0;

}
