#ifndef __HEADER_H__
#define __HEADER_H__

#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

// linear regression class
class LR
{
private:
	vector <string> vectfXPoint, vectfYPoint;
	string sTempText, tempX, tempY;
	int iCheck = 1;	

public:
	float fSumX = 0, fSumY = 0, fSumXX = 0, fSumXY = 0, a, b;
	int iFileSize = 0;

  LR(string);
  void Print(); 	
};

float Kramer(LR&);

#endif // !__HEADER_H__