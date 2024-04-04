#include <iostream>
using namespace std;

int main()
{
   int mat[3][3];

   cout << "Insert the values of the matrix: ";
   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cin >> mat[i][j];
      }
   }

   
   cout << endl;
   cout<<"The Array is: "<<endl;

   for (int i = 0; i < 3; i++)
   {
      for (int j = 0; j < 3; j++)
      {
         cout << mat[i][j] << "  ";
      }
      cout << endl;
   }

   return 0;
}
