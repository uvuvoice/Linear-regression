#include "Header.h"

// constructor
LR::LR(string filePatch)
{
  ifstream fileRead(filePatch);

  if (!fileRead.is_open()) return;
  while (getline(fileRead, sTempText)) {
    for (int i = 0; i < sTempText.length(); i++) {
      if (sTempText[i] == ',') iCheck = 0;
      switch (iCheck) {
      case 0:
        if (sTempText[i] != ',') tempY += sTempText[i];
        break;
      case 1:
        tempX += sTempText[i];
        break;
      }
    }
    vectfXPoint.push_back(tempX); vectfYPoint.push_back(tempY);
    fSumX += stof(tempX);
    fSumY += stof(tempY);
    fSumXX += stof(tempX) * stof(tempX);
    fSumXY += stof(tempX) * stof(tempY);
    tempX.clear(); tempY.clear();
    iFileSize++;
    iCheck = 1;
  }// while
  fileRead.close();
}

void LR::Print()
{
  for (int i = 0; i < vectfXPoint.size(); i++)
    cout << vectfXPoint[i] << " " << vectfYPoint[i] << endl;

  cout << fSumX << " " << fSumY << " " << fSumXX << " " << " " << fSumXY;
}