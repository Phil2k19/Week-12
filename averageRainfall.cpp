#include <vector>
#include <iostream>
using std::cout;
using std::vector;

void averageRainfall(vector<double> &rainfall, double& Avg)
{

	for (int index = 0; index < 12; index++)
	{
		Avg += rainfall[index];
	}
	
	Avg = Avg / 12;
}
