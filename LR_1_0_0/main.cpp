#include "Header.h"

int main()
{
	string filePath = "D:\\Projects\\C++\\ML\\LinearRegression\\DataSet.txt";
		
	LR data(filePath);	
	Kramer(data);

	if(data.b >= 0)
		cout << data.a << "x" << "+" << data.b;
	else
		cout << data.a << "x" << data.b;
}