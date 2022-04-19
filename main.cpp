#include <iostream>

using namespace std;

int main()
{
    int det,b,k,A[3][3];
    cout << "=====================================" << endl;
    cout << "Program Determinan Matriks 3x3 Sarrus" << endl;
    cout << "=====================================" << endl;

    cout << "Masukkan Elemen Matriks : \n\n";
    for(b = 0; b < 3; b++){
      for(k = 0; k < 3; k++){
        cin >> A[b][k];
      }
    }
    cout << endl;

    det = A[0][0] * A[1][1] * A[2][2] + A[0][1] * A[1][2] * A[2][0] + A[0][2] * A[1][0] * A[2][1] -
    A[0][2] * A[1][1] * A[2][0] - A[0][0] * A[1][2] * A[2][1] - A[0][1] * A[1][0] * A[2][2];

    cout << "Nilai determinan dari Matriks 3x3 Sarrus  = " << det << endl;

    return 0;
}
