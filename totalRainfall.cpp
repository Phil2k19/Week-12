#include <vector>
#include <string>
using std::vector;



void totalRainfall(vector<double> &rainfall, double &TotalRF)
{

	for (int i = 0; i < 12; i++)
	{
		TotalRF += rainfall[i];
	}
}
