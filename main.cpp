#include <iostream>
using namespace std;

int main()
{
  cout << "Bienvenue." << endl;
  Rectangle rect(6, 3);
  cout << "Soit un rectangle de longueur " << rect.getLongueur() << " et de largeur " << rect.getLargeur() << "." << endl;
  cout << "Aire du rectangle: " << rect.aire() << endl;
  
  return 0;
}
