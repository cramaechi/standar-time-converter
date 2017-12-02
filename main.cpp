//Program to convert from 24 hr notation to 12 hr notation.

#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

void input(char time[]);
//Precondition: time is in 24 hour notation.
//Takes in input time from the user.

void convert(char time[], char dayPeriod[]);
//Precondition: dayPeriod is either 'P.M.' or 'A.M.'.
//Converts time from 24 hr notation to 12 hr notation.

void output(char time[], char dayPeriod[], char& a);
//Precondition: a is either 'y' or 'n'.
//Outputs the user inputted time in 12 hr notation.

//void clearScreen();//Clears the console screen.

bool timeOK(char time[]); 
//Returns true if times' 24 hour notation is correct, otherwise returns false.

int main()
{
     char dayPeriod[5], ans;
	 char time[6];

	 do
	 {
		 input(time);
		 convert(time, dayPeriod);
		 output(time, dayPeriod, ans);

		 if(ans == 'y' || ans == 'Y')
			 cout<<"\n\n";
	 }while(ans == 'y' || ans == 'Y');

	return 0;
}

void input(char time[])
{
	cout<<"Enter time in 24 hr notation: ";
	cin.getline(time, 6);

    char temp[6];
    strcat(temp, time);

	if (timeOK(temp))
		return;
	else
	{
		cout<<"aFatal Error: Aborting program.";
		exit(1);
	}
}

void convert(char time[], char dayPeriod[])
{
    int hour = atoi(strtok(time, ":"));
    char *minutes = strtok(NULL, ":");

	if ((hour >= 1 && hour < 12) || hour == 24)
		strcpy(dayPeriod, "A.M.");
	else
		strcpy(dayPeriod, "P.M.");

    char hour_str[4], colon[2] = ":";
    
	switch(hour)
	{
	    case 1:
            strcpy(hour_str,"1");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 2:
            strcpy(hour_str,"2");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 3:
            strcpy(hour_str,"3");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 4: 
            strcpy(hour_str,"4");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 5:
            strcpy(hour_str,"5");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 6: 
            strcpy(hour_str,"6");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 7:
            strcpy(hour_str,"7");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 8: 
            strcpy(hour_str,"8");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 9:
            strcpy(hour_str,"9");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 10:
            strcpy(hour_str,"10");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 11:
            strcpy(hour_str,"11");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 12:
            strcpy(hour_str,"12");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 13:
            strcpy(hour_str,"1");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 14:
            strcpy(hour_str,"2");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 15:
            strcpy(hour_str,"3");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 16:
            strcpy(hour_str,"4");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 17:
            strcpy(hour_str,"5");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 18:
            strcpy(hour_str,"6");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 19:
            strcpy(hour_str,"7");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 20:
            strcpy(hour_str,"8");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 21:
            strcpy(hour_str,"9");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 22:
            strcpy(hour_str,"10");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 23:
            strcpy(hour_str,"11");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        case 24:
            strcpy(hour_str,"12");
            strcpy(time, strcat(strcat(hour_str,colon), minutes));
            break;
        default:
            {
                cout<<"Fatal Error: Aborting program.";
                exit(1);
                break;
            }
    }
}

void output(char time[], char dayPeriod[], char& a)
{
    int hour = atoi(strtok(time, ":"));
    int minutes = atoi(strtok(NULL, ":"));

    cout<<"The time in 12 hr notation is: "<<hour<<":"<<minutes<<" "<<dayPeriod<<"\n\n";
    cout<<"Start over? (y/n): ";
    cin>>a;
    cin.ignore(1, '\n');
}

/*
   void clearScreen()
   {
   cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
   }
*/

bool timeOK(char time[])
{
    int hour = atoi(strtok(time, ":"));
    int minutes = atoi(strtok(NULL, ":"));

    return((hour >=1 && hour <=24) && (minutes >=0 && minutes <=59));
}
