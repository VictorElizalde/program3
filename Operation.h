// Victor Elizalde
// A00817586
// Clase que hacer todas las operaciones logicas para llegar al resultado.
// Febrero 1 del 2017

#include <algorithm>
#include <string>
#include <math.h>
#include <sstream>
#include <iomanip>

using namespace std;

//&p-Operation
//&b=21
class Operation {

  public:
		void printResults(File &fFile); //&m
};

//&d=10

//&i
void Operation :: printResults(File &fFile) //&m
{
    if (fFile.getN() != 0) //&m
    {
    cout << "N =  " << setprecision(5) << fixed << fFile.getN() << endl; //&m
    cout << "xk =  " << setprecision(0) << fixed << fFile.getxk() << endl; //&m
    cout << "r =  " << setprecision(5) << fixed << fFile.getr() << endl; //&m
    cout << "r2 =  " << setprecision(5) << fixed << fFile.getr2() << endl;
    cout << "b0 =  " << setprecision(5) << fixed << fFile.getb0() << endl;
    cout << "b1 =  " << setprecision(5) << fixed << fFile.getb1() << endl;
    cout << "yk =  " << setprecision(5) << fixed << fFile.getyk() << endl;
    }
    else
    {
      cout << "No hay datos" << endl;
    }
}
