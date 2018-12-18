#include <vector>
#include <string>
using std::vector;
using std::string;


void driestMonth(vector<double> &rainfall, int &Driest_Counter)
{
	Driest_Counter = 0;
	for (int index = 0;index < 12; index++)
	{
		if (rainfall[index] < rainfall[Driest_Counter])
		{
			Driest_Counter = index;
		}
	}
	
}
