#include <iostream>
using namespace std;

int main () {
    int arr3[2][2][2] = {
        {
            {10,20},
            {30,40}
        },
        {
            {50,60},
            {70,80}
        }
    };

    cout << "Array 3D: " << endl;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                cout << arr3[i][j][k] << endl;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}