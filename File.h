// Victor Elizalde
// A00817586
// Clase que guarda los atributos de un archivo.
// Febrero 1 del 2017

using namespace std;

//&p-File
//&b=33
class File {

  public:

    File();
    int getN(); //%m
    double getxk();//%m
    double getr();//%m
    double getr2();//%m
    double getb0();//%m
    double getb1();//%m
    double getyk();//%m
    double getxAvg();
    double getyAvg();
    double getsumX();
    double getsumX2();
    double getsumY();
    double getsumXY();
    double getsumY2();
    void setN(int N);
    void setxk(double xk);
    void setr(double r);
    void setr2(double r2);
    void setb0(double b0);
    void setb1(double b1);
    void setyk(double yk);
    void setxAvg(double xAvg);
    void setyAvg(double yAvg);
    void setsumX(double sumX);
    void setsumX2(double sumX2);
    void setsumY(double sumY);
    void setsumXY(double sumXY);
    void setsumY2(double sumY2);
    double redondea(double d);

  private:

    int N; //&m
    double xk; //&m
    double r; //&m
    double r2;
    double b0;
    double b1;
    double yk;
    double xAvg;
    double yAvg;
    double sumX;
    double sumY;
    double sumX2;
    double sumY2;
    double sumXY;

};

File :: File()
{
  N = 0;//&m
  xk = 0;//&m
  r = 0;//&m
  r2 = 0;
  b0 = 0;
  b1 = 0;
  yk= 0;
  xAvg = 0;
  yAvg = 0;
  sumX = 0;
  sumY = 0;
  sumX2 = 0;
  sumY2 = 0;
  sumXY = 0;
}

int File :: getN() //&m
{
    return N; //&m
}
double File :: getxk() //&m
{
    return xk; //&m
}

double File :: getr() //&m
{
    return r; //&m
}

double File :: getr2()
{
    return r2;
}

double File :: getb0()
{
    return b0;
}

double File :: getb1()
{
    return b1;
}

double File :: getyk()
{
    return yk;
}

double File :: getxAvg()
{
    return xAvg;
}

double File :: getyAvg()
{
    return yAvg;
}

double File :: getsumX()
{
    return sumX;
}

double File :: getsumX2()
{
    return sumX2;
}

double File :: getsumY()
{
    return sumY;
}

double File :: getsumXY()
{
    return sumXY;
}

double File :: getsumY2()
{
    return sumY2;
}

void File :: setN(int N) //&m
{
    this->N = N; //&m
}

void File :: setxk(double xk) //&m
{
    this->xk = xk; //&m

}

void File :: setr(double r) //&m
{
    this->r = r; //&m
}


void File :: setr2(double r2)
{
     this->r2 = r2;
}


void File :: setb0(double b0)
{
    this->b0 = b0;
}


void File :: setb1(double b1)
{
    this->b1 = b1;
}


void File :: setyk(double yk)
{
    this->yk= yk;
}


void File :: setxAvg(double xAvg)
{
    this->xAvg = xAvg;
}


void File :: setyAvg(double yAvg)
{
    this->yAvg = yAvg;
}


void File :: setsumX(double sumX)
{
    this->sumX = sumX;
}


void File :: setsumX2(double sumX2)
{
    this-> sumX2 = sumX2;
}


void File :: setsumY(double sumY)
{
    this->sumY = sumY;
}


void File :: setsumXY(double sumXY)
{
    this->sumXY = sumXY;
}


void File :: setsumY2(double sumY2)
{
    this->sumY2 = sumY2;
}

//&d=2
