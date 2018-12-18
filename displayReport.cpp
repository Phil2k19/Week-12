#include <iostream>
#include <vector>
#include <string>
using std::cout;
using std::vector;
using std::string;
void displayReport(vector<double>&rainfall, vector<string> &month, int &Driest_Counter, int &Wettest_Counter, double &TotalRF, double &Avg)
{
/*	2010 Rain Report for Neversnows County
		Total Rainfall : 23.19 inches
		Average Monthly Rainfall : 1.93 inches
		The Least rain fell in : Month and Amount
		The Most rain fell in : Month and Amount
		*/
	cout << "2018 Rain Report for Miami-Dade County\n";
	cout << "Total Rainfall: " << TotalRF << " inches\n";
	cout << "Average Monthly Rainfall: " << Avg << " inches\n";
	cout << "The Least Rain fell in: " << month[Driest_Counter] << " : " << rainfall[Driest_Counter] << " inches\n";
	cout << "The Most Rain fell in: " << month[Wettest_Counter] << " : " << rainfall[Wettest_Counter] << " inches\n";
}
