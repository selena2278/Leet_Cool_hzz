#include<iostream>

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

// Test address output: base-16(hex, hexadecimal) use 0-9 to represent 0-9 and use A-F to represent 10-15
// 0x16fdfee60 0x16fdfee64 0x16fdfee68
// 0x16fdfee6c 0x16fdfee70 0x16fdfee74
// each address has a difference of 4 bytes, c=12,  hence they are continous addresses.