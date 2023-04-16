#include "Header.h"

float Kramer(LR& data)
{
	float det, detA, detB;
	det = data.fSumXX * data.iFileSize - data.fSumX * data.fSumX;
	detA = data.fSumXY * 5 - data.fSumY * data.fSumX;
	detB = data.fSumXX * data.fSumY - data.fSumX * data.fSumXY;

	data.a = detA / det;
	data.b = detB / det;
		
	return 0;
}