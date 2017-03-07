// Victor Elizalde
// A00817586
// Programa para saber el numero de lineas con informacion y lineas en blanco de un archivo de texto.
// Febrero 1 del 2017

#include <iostream>
#include <fstream>
#include <algorithm>
#include <string>
#include <math.h>
#include <sstream>
#include <iomanip>
#include "File.h"
#include "Operation.h"

using namespace std;

//&p-main
//&b=42
//&i
//%d=9

//&i
double Round(double d)
{

    d = d * 100000;

    if((d-floor(d)) >= 0.5 )
    {
        d = d + 0.1;
    }

    d = d/100000;

    return d;
}

//&i
double getB1(File fFile)
{
    return (fFile.getsumXY()-(fFile.getN()*fFile.getxAvg()*fFile.getyAvg()))/(fFile.getsumX2()-(fFile.getN()*fFile.getxAvg()*fFile.getxAvg()));
}

//&i
double getB0(File fFile)
{
    return fFile.getyAvg()-getB1(fFile)*fFile.getxAvg();
}

//&i
double getR(File fFile)
{

    return (fFile.getN()*fFile.getsumXY()-(fFile.getsumX()*fFile.getsumY()))/sqrt((fFile.getN()*fFile.getsumX2()-fFile.getsumX()*fFile.getsumX())*(fFile.getN()*fFile.getsumY2()-fFile.getsumY()*fFile.getsumY()));
}

//&i
double getR2(File fFile)
{
    return fFile.getr()*fFile.getr();
}

//&i
double getYk(File fFile)
{
    return getB0(fFile)+getB1(fFile)*fFile.getxk();
}

// Control general del programa para obtener los datos y el resultado
int main () {

  int iN = 0; //&m
  double dXAvg, dYAvg, dSumX = 0, dSumY = 0, dSumX2 = 0, dSumY2 = 0, dSumXY = 0, dX, dY;
	string sFileName, sLine, sX, sY;
  Operation oOperation;
  File fFile; //&m

  //&d=2
	cout << "Dame el nombre del archivo\n";
  //d&=1

  cin >> sFileName;
  ifstream InputFile (sFileName);
  //d&=1

  if (InputFile.is_open())
  {
    while(getline(InputFile, sLine))
    {
      istringstream iss(sLine);
      iss >> dX;
      fFile.setxk(dX);

      if(dX < 0)
      {
        cout << "Datos invalidos, hacer caso omiso a los resultados" << endl;
      }
      break;
    }

    while(getline(InputFile, sLine))
    {
      replace(sLine.begin(), sLine.end(), ',', ' '); //&m
      istringstream iss(sLine); //&m

      iN++;
      iss >> sX >> sY;
      dX = stod(sX);
      dY = stod(sY);

      if(dX < 0 || dY < 0)
      {
        cout << "Datos invalidos, hacer caso omiso a los resultados" << endl;
      }

      dSumX = dSumX + dX;
      dSumY = dSumY + dY;
      dSumX2 = dSumX2 + dX*dX;
      dSumY2 = dSumY2 + dY*dY;
      dSumXY = dSumXY + dX*dY;
    }
    dXAvg = dSumX/iN;
    dYAvg = dSumY/iN;
    //d&=4

    fFile.setN(iN);
    fFile.setsumX(dSumX);
    fFile.setxAvg(dXAvg);
    fFile.setyAvg(dYAvg);
    fFile.setsumX2(dSumX2);
    fFile.setsumY(dSumY);
    fFile.setsumXY(dSumXY);
    fFile.setsumY2(dSumY2);
    InputFile.close();
  }
  else
  {
    cout << endl << sFileName << " no existe\n\n";
  }

  fFile.setb1(getB1(fFile));
  fFile.setb0(getB0(fFile));
  fFile.setr(getR(fFile));
  fFile.setr2(getR2(fFile));
  fFile.setyk(getYk(fFile));

  fFile.setxk(Round(fFile.getxk()));
  fFile.setr(Round(fFile.getr()));
  fFile.setr2(Round(fFile.getr2()));
  fFile.setb0(Round(fFile.getb0()));
  fFile.setb1(Round(fFile.getb1()));
  fFile.setyk(Round(fFile.getyk()));

  //&d=6
  oOperation.printResults(fFile); //&m
  return 0;
}
