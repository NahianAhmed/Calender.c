#include <stdlib.h>
#include <stdio.h>
#include <time.h>



#define TRUE    1
#define FALSE   0

int days_in_month[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
char *months[]=
{
	" ",
	"\n\n\nJanuary",
	"\n\n\nFebruary",
	"\n\n\nMarch",
	"\n\n\nApril",
	"\n\n\nMay",
	"\n\n\nJune",
	"\n\n\nJuly",
	"\n\n\nAugust",
	"\n\n\nSeptember",
	"\n\n\nOctober",
	"\n\n\nNovember",
	"\n\n\nDecember"
};


int inputyear(void)
{
	int year;

	printf("Please Enter a year (exp = 1996) : \n");
	scanf("%d", &year);
	return year;
}

int determinedaycode(int year)
{
	int daycode;
	int d1, d2, d3;

	d1 = (year - 1.)/ 4.0;
	d2 = (year - 1.)/ 100.;
	d3 = (year - 1.)/ 400.;
	daycode = (year + d1 - d2 + d3) %7;
	//printf("%d\n",daycode);
	return daycode;
}


int determineleapyear(int year)
{
	if(year% 4 == FALSE && year%100 != FALSE || year%400 == FALSE)
	{
		days_in_month[2] = 29;
		return TRUE;
	}
	else
	{
		days_in_month[2] = 28;
		return FALSE;
	}
}

void calendar1(int year, int daycode)
{
    int b;
   time_t now = time(NULL);
   struct tm *t = localtime(&now);
    b= t->tm_mday;
	int month, day,n,m,a;
	//printf("Enter The valu of month:\n");
	//scanf("%d",&n);
	//printf("Enter the date\n");
	//scanf("%d",&m);
	for ( month = 1; month <= 12; month++ )
	{
		//if(month==n)
		{

		printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );

		// Correct the position for the first date
		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}

		// Print all the dates for one month
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			if(day==m){
			printf("*%d", day );
			}
			else if(n==11&&day==b)
            {
             printf("*%d", day );
            }

			else
			printf("%2d", day );


			// Is day before Sat? Else start next line Sun.
			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
		}	// Set position for next month
			daycode = ( daycode + days_in_month[month] ) % 7;

	}
	//printf ("\nYour Enter Date is ::%d/%d/%d\n",m,n,year);
	today();
	if(n==3){
        bday(1);
	}
	else if(n==4){
        bday(2);
	}
	//printf("\nDO YOU WANNA CREATE A EVENT\n1.YES\n2.EXIT\n");
	//scanf("%d",&a);
	if(a==1){
	 note(m,n,year);
	}
	else{
		return;
	}
}
void calendar2(int year, int daycode)
{
    int b;
   time_t now = time(NULL);
   struct tm *t = localtime(&now);
    b= t->tm_mday;
	int month, day,n,m,a;
	printf("Enter The valu of month:\n");
	scanf("%d",&n);
	//printf("Enter the date\n");
	//scanf("%d",&m);
	for ( month = 1; month <= 12; month++ )
	{
		if(month==n)
		{

		printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );

		// Correct the position for the first date
		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}

		// Print all the dates for one month
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			if(day==m){
			printf("*%d", day );
			}
			else if(n==11&&day==b)
            {
             printf("*%d", day );
            }

			else
			printf("%2d", day );


			// Is day before Sat? Else start next line Sun.
			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
		}	// Set position for next month
			daycode = ( daycode + days_in_month[month] ) % 7;

	}
	//printf ("\nYour Enter Date is ::%d/%d/%d\n",m,n,year);
	today();
	if(n==3){
        bday(1);
	}
	else if(n==4){
        bday(2);
	}
	//printf("\nDO YOU WANNA CREATE A EVENT\n1.YES\n2.EXIT\n");
	//scanf("%d",&a);
	if(a==1){
	 note(m,n,year);
	}
	else{
		return;
	}
}
void calendar3(int year, int daycode)
{
    int b;
   time_t now = time(NULL);
   struct tm *t = localtime(&now);
    b= t->tm_mday;
	int month, day,n,m,a;
	printf("Enter The valu of month:\n");
	scanf("%d",&n);
	printf("Enter the date\n");
	scanf("%d",&m);
	for ( month = 1; month <= 12; month++ )
	{
		if(month==n)
		{

		printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );

		// Correct the position for the first date
		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}

		// Print all the dates for one month
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			if(day==m){
			printf("*%d", day );
			}
			else if(n==11&&day==b)
            {
             printf("*%d", day );
            }

			else
			printf("%2d", day );


			// Is day before Sat? Else start next line Sun.
			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
		}	// Set position for next month
			daycode = ( daycode + days_in_month[month] ) % 7;

	}
	printf ("\n\t\tYour Enter Date is ::%d/%d/%d\n",m,n,year);
	today();
	if(n==3){
        bday(1);
	}
	else if(n==4){
        bday(2);
	}
	//printf("\nDO YOU WANNA CREATE A EVENT\n1.YES\n2.EXIT\n");
	//scanf("%d",&a);
	if(a==1){
	 note(m,n,year);
	}
	else{
		return;
	}
}
void calendar4(int year, int daycode)
{
    int b;
   time_t now = time(NULL);
   struct tm *t = localtime(&now);
    b= t->tm_mday;
	int month, day,n,m,a;
	printf("Enter The valu of month:\n");
	scanf("%d",&n);
	printf("Enter the date\n");
	scanf("%d",&m);
	for ( month = 1; month <= 12; month++ )
	{
		if(month==n)
		{

		printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );

		// Correct the position for the first date
		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}

		// Print all the dates for one month
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			if(day==m){
			printf("*%d", day );
			}
			else if(n==11&&day==b)
            {
             printf("*%d", day );
            }

			else
			printf("%2d", day );


			// Is day before Sat? Else start next line Sun.
			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
		}	// Set position for next month
			daycode = ( daycode + days_in_month[month] ) % 7;

	}
	printf ("\n\t\tYour Enter Date is ::%d/%d/%d\n",m,n,year);
	today();
	if(n==3){
        bday(1);
	}
	else if(n==4){
        bday(2);
	}
	printf("\nDO YOU WANNA CREATE A EVENT\n1.YES\n2.EXIT\n");
	scanf("%d",&a);
	if(a==1){
	 note(m,n,year);
	}
	else{
		return;
	}
}
void calendar5(int year, int daycode)
{
    int b;
   time_t now = time(NULL);
   struct tm *t = localtime(&now);
    b= t->tm_mday;
	int month, day,n,m,a;
	printf("Enter The valu of month:\n");
	scanf("%d",&n);
	//printf("Enter the date\n");
	//scanf("%d",&m);
	for ( month = 1; month <= 12; month++ )
	{
		if(month==n)
		{

		printf("%s", months[month]);
		printf("\n\nSun  Mon  Tue  Wed  Thu  Fri  Sat\n" );

		// Correct the position for the first date
		for ( day = 1; day <= 1 + daycode * 5; day++ )
		{
			printf(" ");
		}

		// Print all the dates for one month
		for ( day = 1; day <= days_in_month[month]; day++ )
		{
			if(day==m){
			printf("*%d", day );
			}
			else if(n==11&&day==b)
            {
             printf("*%d", day );
            }

			else
			printf("%2d", day );


			// Is day before Sat? Else start next line Sun.
			if ( ( day + daycode ) % 7 > 0 )
				printf("   " );
			else
				printf("\n " );
		}
		}	// Set position for next month
			daycode = ( daycode + days_in_month[month] ) % 7;

	}
	printf ("\n\t\tYour Enter Date is ::%d/%d/%d\n",m,n,year);
	today();
	if(n==3){
        bday(1);
	}
	else if(n==4){
        bday(2);
	}
	printf("\nDO YOU WANNA CREATE A EVENT\n1.YES\n2.EXIT\n");
	scanf("%d",&a);
	if(a==1){
	 note(m,n,year);
	}
	else{
		return;
	}
}
void note(int a,int n,int year)
{
    int x;
	FILE *fp;
	printf("Then Enter your Massage\n");

 char str[2500];
 fp=fopen("text.txt","a");
  fprintf(fp,"%d ",a);
   fprintf(fp,"%d ",n);
   fprintf(fp,"%d ",year);
  scanf("%s",str);
  fprintf(fp,"%s\n",str);
  //fprintf(fp,"%d\n",0);
  fclose(fp);
 printf("*** You creat an Event***");
 //scanf("%d",&x);
 if(x==1)
 {
     node1();
 }
 else{
    return;}



 /*fp=fopen("text.txt","");
 fscanf(fp,"%s",str);
 printf("%s\n",str);*/

}
void node1()
{
    FILE *fp;
	//printf(" then Enter your Massage\n");
int i;
 char str[25];
 printf("Event Notification:::\n");
 //fp=fopen("text.txt","a");
 //scanf("%s",str);
 //fprintf(fp,"%s\n",str);
 //fclose(fp);
 fp=fopen("text.txt","r");
 //fscanf(fp,"%[a-z A-Z 0-9 ]",str);
 //printf("%s\n",str);
 //while(strcmp(str,"0")!=0)
 printf("\nDate\tmonth\tYear\tNote\n");
 for(i=0;i<4;i++)
{


    fscanf(fp,"%s",str);

    printf("%s\t",str);

    //printf("\n\n");

    }



}


int main(void)
{
	while(1){
    int b,c;
    printf("\n \t1.Year View\n");
    printf(" \t2.Month View\n");
    printf(" \t3.Date View\n");
    printf(" \t4.Creat An  Event\n");
    printf(" \t5.View Event\n");
    printf(" \t6.Exit\n");
    scanf("%d",&c);
    if(c==1)
    {
        int year, daycode, leapyear;

	year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);

	calendar1(year, daycode);
	printf("\n");

    }
    else if (c==2)
    {

        int year, daycode, leapyear;

	year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);

	calendar2(year, daycode);
	printf("\n");

    }
    else if (c==3)
    {

        int year, daycode, leapyear;

	year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);

	calendar3(year, daycode);
	printf("\n");

    }
    else if (c==5)
    {
        printf("\n1.View month Basic Event\nOR\n2.View that you Already Created\n");
        scanf("%d",&b);
        int year, daycode, leapyear;
    if(b==1){
	year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);

	calendar5(year, daycode);
	printf("\n");
	}
	else if(b==2){
       read();
	}


    }
    else if (c==4)
    {


    int year, daycode, leapyear;
    year = inputyear();
	daycode = determinedaycode(year);
	determineleapyear(year);

	calendar4(year, daycode);
	printf("\n");

    }
    else if (c==6){
    	return;
	}


}
}
void today()
{

  time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  //printf ( "\nCurrent local time and date: %s\n", asctime (timeinfo) );

	int a,b,c;
   time_t now = time(NULL);
   struct tm *t = localtime(&now);
   a = t->tm_mday;
   b = t->tm_mon + 1;
   c = t->tm_year + 1900;
   printf( "\nToday is %d/%d/%d ", a ,b,c);

   return 0;

  return 0;
}
void bday(int a)
{
    if(a==1){
        printf("\n\t 5th March Nahian's Birthday\n");
    }
    else  if(a==2){
        printf("\n\t 3th April Nahian's Birthday\n");
    }
    else  if(a==3){
        printf("\n\t 3th April Nahian's Birthday\n");
    }
    else  if(a==4){
        printf("\n\t 3th April Nahian's Birthday\n");
    }
    else  if(a==5){
        printf("\n\t 3th April Nahian's Birthday\n");
    }
    else  if(a==6){
        printf("\n\t 3th April Nahian's Birthday\n");
    }
}
void read()
{
    int i,k=0;
    char str[2000];
    FILE *fp;
    fp=fopen("text.txt","r");

    fprintf(fp,"%s",str);
    printf("Date\tMonth\tYear\tMassage\n");

    while(strcmp(str,"0")!=0)
{
    ++k;


    fscanf(fp,"%s",str);

    printf("%s\t",str);
    if(k%4==0){
        printf("\n");

}
}
}



