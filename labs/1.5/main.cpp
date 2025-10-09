/**
 * Done by:
 * Student Name: Severyn Kotyhoroshko
 * Student Group: 123
 * Lab 1.5
 */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    {
        int a = 10;
        int b = 20;
        int c = 30;
        int d = 40;

        // <УЛО1> (<УЛО2> (A<ОВ1>B) <БЛО> (<УЛО3> (C<ОВ2>D)))
        //  empty (  !    (a == b)    ^   (   !   (c != d)))
        bool res = (!(a == b) ^ (!(c != d)));
        cout << "res: " << boolalpha << res << endl;
    }
     // 010101
     // 101011

    {
        int a = 10;
        int b = 20;
        int c = 30;
        int d = 40;

        // <УЛО1> (<УЛО2> (A<ОВ1>B) <БЛО> (<УЛО3> (C<ОВ2>D)))
        //  empty (  !    (a == b)    and   (   !   (c != d)))
        bool res = (!(a == b) and (!(c != d)));
        cout << "res: " << boolalpha << res << endl;
    }

    const unsigned char mask = 0b10111010;
    const bool flag1 = true;
    const bool flag2 = false;
    const bool flag3 = true;
    const bool flag4 = true;
    const bool flag5 = true;
    const bool flag6 = false;
    const bool flag7 = true;
    const bool flag8 = false;


    // 0010101010100111 & 0000000000000001
    return 0;
}
