#include <vector>
#include <string>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;


void getData(vector<double> &rainfall, vector<string> &months)
{
	

	string error = "\nERROR: Please enter a numeric value between 0 and 8.\n";

	for (int index = 0; index < 12; index++)
	{

		cout << "\nPlease enter the length of the inches of rainfall that dropped during the month of " << months[index] << ".\n";
		
		cin >> rainfall[index];

		while (cin.fail() || rainfall[index] < 0 || rainfall[index] > 8)
		{
			if (cin.fail())
			{
				cin.clear();
				cin.ignore(cin.rdbuf()->in_avail());
			}
			cout << error;
			cin >> rainfall[index];
		}
	}	
}
