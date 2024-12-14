#include<iostream>
// #include"interfaces.h" // unknown.h, objbase.h, initguid.h

using std::cout;
using std::endl;





//  Test: two-dimensional arrays are contiguous in memory
void test_arr() {
    int array[2][3] = {
		{0, 1, 2},
		{3, 4, 5}
    };
    cout << &array[0][0] << " " << &array[0][1] << " " << &array[0][2] << endl;
    cout << &array[1][0] << " " << &array[1][1] << " " << &array[1][2] << endl;
}

int main() {
    test_arr();
}