//
//  dates.c
//  FIRST C PORGRAMMING PROJECT 
//  2018/09/11
//
#include <stdio.h>
#define MONTHS_IN_YEAR 12
#define DAYS_IN_MONTH 30   
#define DAYS_IN_YEAR 365

int main(int argc, char **argv){
    
    //define variables
 
   int day_1 = 6;
    int mth_1 = 9;
    int yr_1 = 2018;
    // Date values for date 1
    
    int day_2 = 20;
    int mth_2 = 12;
    int yr_2 = 2018;
    // Date values for date 2
    
    int days = day_2 - day_1; //Expression to determine the number of days between the dates
    int months = mth_2 - mth_1; //Expression to determine the number of months between the dates
    int years = yr_2 - yr_1; //Expression to determine the number of years between the dates
    
    int date_1 = 20180906; //value of date 1
    int date_2 = 20181220; //value of date 2 
    
    day_1 = date_1 % 100;
    mth_1 = date_1 /100 % 100;
    yr_1 = date_1 / 10000;
    //value of day, month, year using date 1 value 
    
    day_2 = date_2 % 100;
    mth_2 = date_2 / 100 % 100;
    yr_2 = date_2 / 10000;
	//value of day, month, year using date 2 value 
    
    float time_In_Years;  // Define difference of time in years as a float
    
    printf("Date 1: %d/%d/%d \n", yr_1, mth_1, day_1);
    printf("Date 2: %d/%d/%d \n", yr_2, mth_2, day_2);
    // Print date 1 and date 2 as as year, month, day
    
    
   if(day_1 > day_2){
	   
        months--; //Add a statement to decrement the number of months by one
        days += DAYS_IN_MONTH; //Assuming 30 days in month
    }
    if(mth_1 > mth_2){
		
        years--; //Add a statement to decrement the number of years by one
        months += MONTHS_IN_YEAR;
    }
    
    printf("%d days, %d months, and %d years \n", days, months, years); // Prints day, moth and year 
    
    time_In_Years = (float)years+((float)months/MONTHS_IN_YEAR)+((float)days/DAYS_IN_YEAR);
    
    printf("Total years: %.2f \n", time_In_Years); // Print difference in time between date 1 and date 2 in years to two decimal places 

}
    
