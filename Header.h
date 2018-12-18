#include <vector>
#include <string>
using std::vector;
using std::string;

#ifndef HEADER_H
#define HEADER_H
void getData(vector<double> &rainfall, vector<string> &months);
void averageRainfall(vector<double> &rainfall, double&Avg);
void totalRainfall(vector<double> &rainfall, double&);
void wettestMonth(vector<double> &rainfall, int &Wettest_Counter);
void driestMonth(vector<double> &rainfall, int &Driest_Counter);
void displayReport(vector<double>&rainfall, vector<string> &month, int &Driest_Counter, int &Wettest_Counter, double &TotalRF, double &Avg);
#endif // !HEADER_H
