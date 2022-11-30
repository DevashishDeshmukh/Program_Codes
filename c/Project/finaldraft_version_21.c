#include <stdio.h>
#include <stdlib.h>

int get_1st_weekday(int year, int month, int date)
{

  int day;
  int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
  if (month < 3)
    year -= 1;

  day = ((year) + (year / 4) - (year / 100) + (year / 400) + t[month - 1] + date) % 7; // Tomohiko Sakamoto’s Algorithm
  return day;
}

void month_wise(int year, int gmonth)
{
  int month, day, daysInMonth, weekDay = 0, startingDay;

  char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
  int monthDay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  char *Thoughts[] = {"We must accept the end of something in\norder to begin to build something new.", "No one is you and that is your power.", "It takes grace to be kind to remain\nkind in cruel situations.", "The secret of your future is hidden\nin your daily routine.", "Forget the past, but remember the\nlesson.", "Every next level of life will\ndemand a different you.", "The only real luxury is time.\nYou cant get time back.", "What comes easy won't last long and\nwhat lasts long won't come easy.", "What you allow is what will continue.", "A mistake repeated more then once is\na decision.", "Difficult roads lead to beautiful\ndestinations.", "The scariest movement is always just\nbefore you start."};
  char *Holidays[] = {"1st January : New year\n26th January: Republic Day", " ", " ", " ", " ", " ", " ", "15th August: Independence Day", " ", "2nd October:Gandhi Jayanti", " ", "31st December"};
  char *Holidays2021[] = {"1st January  : New year\n13th January : Lohri\n14th January : Pongal / Makar Sankranti\n20th January : Guru Govind Singh Jayanti\n26th January : Republic Day", "16th February : Vasant Panchami", "11th March : Maha Shivaratri/Shivaratri\n29th March : Holi", "2nd April  : Good Friday\n4th April  : Easter Day\n14th April : Vaisakhi\n21st April : Rama Navami\n25th April : Mahavir Jayanti", "14th May : Ramzan Id/Eid-ul-Fitar\n26th May : Buddha Purnima/Vesak", "", "21st July : Bakr Id/Eid ul-Adha (Tentative Date)", "15th August : Independence Day\n19th August : Muharram/Ashura (Tentative Date)\n30th August : Janmashtami", "10th September : Ganesh Chaturthi/Vinayaka Chaturthi", "2nd October  : Gandhi Jayanti\n15th October : Dussehra\n19th October : Milad un-Nabi/Id-e-Milad (Tentative Date)", "4th November  : Diwali/Deepavali\n19th November : Guru Nanak Jayanti", "25th December : Christmas\n31st December : New Year's Eve"};

  month = gmonth - 1;

  if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    monthDay[1] = 29;

  startingDay = get_1st_weekday(year, gmonth, 1);

  daysInMonth = monthDay[month];
  printf("\n\n---------------%s-------------------\n", months[month]);
  printf("\n%10s\n", Thoughts[month]);
  printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

  for (weekDay = 0; weekDay < startingDay; weekDay++)
    printf("     ");

  for (day = 1; day <= daysInMonth; day++)
  {
    printf("%5d", day);

    if (++weekDay > 6)
    {
      printf("\n");
      weekDay = 0;
    }
  
  }
  if (year == 2021)
    printf("\nHolidays:\n%s", Holidays2021[gmonth - 1]);
  else
    printf("\nHolidays:\n%s", Holidays[gmonth - 1]);
}
int main()
{

  int input, gmonth, b, c, error, invalid;
  printf("\n****************************************************************************************\n");
  printf("*\t\t\t\t* K A L E N D A R I U M *\t\t\t        *");
  printf("\n*\t\t\t\t                         \t\t\t        *");
  printf("\n****************************************************************************************");
start:
  printf("\n\n--------------------------------------- MAIN MENU ---------------------------------------\n\n 1) Press 1 to get the current date and time.\n 2) Press 2 to get a calender of your desired year.\n 3) Press 3 to get the calendar of a particular month of your desired year.\n 4) Press 4 to get to know the day corresponding the your desired date(DD/MM/YYYY).\n 5) Press 0 to quit the program. \n ");
  printf("\n\nEnter your desired option :\t");
  scanf("%d", &input);

  switch (input)
  {
  case 0:
  close:
    printf("\n\nThank you!!\nHope to see you soon!\n.....Quitting program.\n");
    goto end;

  case 1:
   system("COLOR 0B");
    printf("Todays date is : %s\n", __DATE__);
    printf("Todays time is : %s\n", __TIME__);
    printf("\n\n-----------------------------------");
    printf("\n1) Press 1 to RETURN to MAIN MENU.\n2) Press 2 to EXIT program.\n");
    printf("\nEnter your desired option :\t");
    scanf("%d", &b);
    if (b == 1)
    {
      goto start;
    }

    if (b == 2)
    {
      goto close;
    }

    if (b != 2 && b != 1)
      goto invalid;

  case 2:
    system("Color 3F");

    int year, month, day, daysInMonth, weekDay = 0, startingDay;
    printf("\nEnter your desired year (YYYY format) : ");
    scanf("%d", &year);

    char *months[] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int monthDay[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    char *thoughts[] = {"We must accept the end of something in\norder to begin to build something new.", "No one is you and that is your power.", "It takes grace to be kind to remain\nkind in cruel situations.", "The secret of your future is hidden\nin your daily routine.", "Forget the past, but remember the\nlesson.", "Every next level of life will\ndemand a different you.", "The only real luxury is time.\nYou cant get time back.", "What comes easy won't last long and\nwhat lasts long won't come easy.", "What you allow is what will continue.", "A mistake repeated more then once is\na decision.", "Difficult roads lead to beautiful\ndestinations.", "The scariest movement is always just\nbefore you start."};

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
      monthDay[1] = 29;

    startingDay = get_1st_weekday(year, 1, 1);

    for (month = 0; month < 12; month++)
    {

      daysInMonth = monthDay[month];
      printf("\n\n---------------%s---------------\n", months[month]);

      printf("\n%s\n", thoughts[month]);
      printf("\n  Sun  Mon  Tue  Wed  Thurs  Fri  Sat\n");

      for (weekDay = 0; weekDay < startingDay; weekDay++)
        printf("     ");

      for (day = 1; day <= daysInMonth; day++)
      {
        printf("%5d", day);

        if (++weekDay > 6)
        {
          printf("\n");
          weekDay = 0;
        }
        startingDay = weekDay;
      }
    }
    printf("\n\n-----------------------------------");
    printf("\n1) Press 1 to RETURN to MAIN MENU.\n2) Press 2 to EXIT program.\n");
    printf("\nEnter your desired option :\t");
    scanf("%d", &b);
    if (b == 1)
    {
      goto start;
    }

    if (b == 2)
    {
      goto close;
    }

    if (b != 2 && b != 1)
      goto invalid;

  case 3:
    system("COLOR 3F");
    printf("Enter your desired year (YYYY format) : ");
    scanf("%d", &year);
    printf("Enter your desired month (MM format)  : ");
    scanf("%d", &gmonth);
    month_wise(year, gmonth);
    printf("\n\n-----------------------------------");
    printf("\n1) Press 1 to RETURN to MAIN MENU.\n2) Press 2 to EXIT program.\n");
    printf("\nEnter your desired option :\t");
    scanf("%d", &b);
    if (b == 1)
    {
      goto start;
    }

    if (b == 2)
    {
      goto close;
    }

    if (b != 2 && b != 1)
      goto invalid;

  case 4:
    system("Color 3F");
    int dayreq, date;
    char *D[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("Enter your desired year (YYYY format) : ");
    scanf("%d", &year);
    printf("Enter your desired month (MM format)  : ");
    scanf("%d", &gmonth);
    printf("Enter your desired date  (DD format)  : ");
    scanf("%d", &date);
    dayreq = get_1st_weekday(year, gmonth, date);
    printf("The day of date %d/%d/%d is %s\n", date, gmonth, year, D[dayreq]);
    printf("\n\n-----------------------------------");
    printf("\n1) Press 1 to RETURN to MAIN MENU.\n2) Press 2 to EXIT program.\n");
    printf("\nEnter your desired option :\t");
    scanf("%d", &b);
    if (b == 1)
    {
      goto start;
    }

    if (b == 2)
    {
      goto close;
    }

    if (b != 2 && b != 1)
      goto invalid;

  default:
  invalid:
    printf("You have entered an invalid character.\nPlease try again.\nPress  9 to contine........");
    scanf("%d", &invalid);
    if (invalid != 9)
      goto invalid;
    printf("\n\n-----------------------------------");
    printf("\n1) Press 1 to RETURN to MAIN MENU.\n2) Press 2 to EXIT program.\n");
    printf("\nEnter your desired option :\t");
    scanf("%d", &b);
    if (b == 1)
    {
      goto start;
    }

    if (b == 2)
    {
      goto close;
    }

    if (b != 2 && b != 1)
    {
      goto invalid;
    }
  }

end:
  return 0;

}