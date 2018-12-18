Assignment:Chapter 8 #8
Due Date: November 11, 2018
Description: Write a modular program that analyzes a years worth of rainfall data. The program should have a getData()
function that acccepts the total rainfall for each month. It should also have 4 value returning functions that return
to the main, the functions are totalrainFall(), averageRainFall(), DriestMonth(), and WettestMonth(). The LAST TWO
FUNCTIONS RETURN THE MONTH NOT THE VALUE! Month number and Rainfall will be related and should be displayed by
a displayReport() function called by the main to print a summary rainfall report similar to

2010 Rain Report for Neversnows County
Total Rainfall:				23.19 inches
Average Monthly Rainfall:	1.93 inches
The Least rain fell in:		Month and Amount
The Most rain fell in:		Month and Amount

getData();				-Marlon
totalRainFall();		Javon/Phillip
averageRainfall();		Javon/Phillip
DriestMonth();			Javon/Phillip
WettestMonth();			Javon/Phillip
DisplayReport();		-Marlon
*/
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include "Header.h"
using namespace std;
int main()
{
	int Driest_Counter=0, Wettest_Counter=0;
	double Avg = 0, TotalRF = 0;
	const int SIZE = 12;
	vector<string> months{ "January", "February", "March", "April", "May", "June", "July",
							"August", "September", "October", "November", "December" };
	vector<double> rainfall(SIZE);

	cout << fixed << setprecision(2);

	getData(rainfall, months);
	driestMonth(rainfall, Driest_Counter);
	wettestMonth(rainfall, Wettest_Counter);
	averageRainfall(rainfall, Avg);
	totalRainfall(rainfall, TotalRF);
	displayReport(rainfall, months, Driest_Counter, Wettest_Counter, TotalRF, Avg);

}
