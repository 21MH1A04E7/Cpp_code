#include<iostream>
using namespace std;
class Hero{
  public:
  double d;
  int v;
  char ch;
};
int main()
{
    Hero h;
    cout<<"size of class "<<sizeof(h)<<endl;
    //the size of double is 8 byte  so each operation will take 4 byte memory
    //double 8 byte
    //integer 4 byte and char 2 byte total 6 operatio will take 8 byte memory
} 