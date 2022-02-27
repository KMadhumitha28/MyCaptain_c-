#include <iostream>
using namespace std;

int main()
{
   int element[1000];
   cout << "Enter elements: ";

   for(int i = 0; i < 5; i++)
      cin >> element[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; i++)
      cout << endl << *(element + i);

   return 0;
}
