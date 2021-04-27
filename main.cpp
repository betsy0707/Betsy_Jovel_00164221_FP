//*Cree un programa en c++ que le permita identificar dentro del abecedario espaC1ol castellano cuales son vocales y cuales no.
***************************
#include "iostream"
 
using namespace std;

int main ()
{
  char letra;

  cout << "Ingrese una letra cualquiera :" << endl;
  cin >> letra;

  if (letra == "a" || letra == "A")

    {

      cout << "La letra es una vocal." << endl;

    }

  else if (letra == "e" || letra == "E")

    {

      cout << "La letra es una vocal." << endl;

    }

  else if (letra == "i" || letra == "I")

    {

      cout << "La letra es una vocal." << endl;

    }
  else if (letra == "o" || letra == "O")

    {

      cout << "La letra es una vocal." << endl;

    }

  else if (letra == "u" || letra == "U")

    {

      cout << "La letra es una vocal." << endl;

    }

  else

    cout << "La letra no es una vocal.";

  return 0;
}
