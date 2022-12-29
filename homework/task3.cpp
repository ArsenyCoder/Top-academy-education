#include <iostream>
using namespace std;

int *argv(int *array,int n) {
    int plus = 0;
    int minus = 0;
    int zero = 0;

    for (int i = 0; i < n; i++) {
        if (array[i] > 0) {
            plus += 1;
        }
        else if (array[i] < 0) {

            minus += 1;
        }
        else {
            zero += 1;
        
        }
    }
    int *array2 = new int[3];
    array2[0] = plus;
    array2[1] = minus;
    array2[2] = zero;

    return array2;
}


void main()
{
    int array[5] = {1,-2,3,4,0};
    //3
    int* argv_t = argv(array, sizeof(array) / sizeof(array[0]));

    cout << argv_t[0] << "   " << argv_t[1] << "    " << argv_t[2];

    delete argv_t;
    
}