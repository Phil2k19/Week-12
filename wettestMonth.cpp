#include <vector>
using std::vector;


void wettestMonth(vector<double> &rainfall, int &Wettest_Counter)
{
	Wettest_Counter = 0;
	for (int i = 0; i < 12; i++)
	{
		if (rainfall[i] > rainfall[Wettest_Counter])
		{
			Wettest_Counter = i;
		}
	}
}
