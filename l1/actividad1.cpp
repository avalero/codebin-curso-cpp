#include <iostream>
 
using namespace std;
 
int main()
{
  string nombre;
  int edad;
 
  cout << "Como te llamas?" << endl;
  cin >> nombre;
  cout << "Cuantos años tienes?" << endl;
  cin >> edad;
  
  cout << "Hola " << nombre << ", tienes " <<  edad << " anios." << endl;
  
  return 0;
}
