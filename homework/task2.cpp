#include <iostream>
using namespace std;

int argv(int *array,int n) {
    int sum = 0;

    for (int i = 0; i < n; i++) {
        sum += array[i];
    }

    return sum / n;
}


void main()
{
    int array[5] = {1,2,3,4,5};
    //3

    cout << argv(array, sizeof(array) / sizeof(array[0]));

    
}