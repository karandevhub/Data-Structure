#include <iostream>
#include <bitset>
using namespace std;

int main()
{
        int a, b;
        cout << "enter a: ";
        cin >> a;
        cout << "enter b: ";
        cin >> b;

        // LOGICAL OPERATOR

        cout << "LOGICAL OPERATION:" << endl;
        // Logical NOT operator
        cout << "Logical NOT operation of a :" << !a << endl; // non-zero value return 0;
        // Logical AND operator
        cout << "Logical AND operation of a and b :" << (a && b) << endl;
        // Logical OR operator
        cout << "Logical OR operation of a or b :" << (a || b) << endl;
        cout << endl;

        // BITWISE OPERATOR

        cout << "BITWISE OPERATION:" << endl;
        // Bitwise NOT operator
        cout << "Bitwise NOT operation of a :" << ~a << endl; // it invert the bits then reads its 2's complement
        // Logical AND operator
        cout << "Bitwise AND operation of a and b :" << (a & b) << endl;
        // Logical OR operator
        cout << "Bitwise OR operation of a or b :" << (a | b) << endl;
        cout << endl;


        // LEFT AND RIGHT SHIFT OPERATORS

        cout << "SHIFT OPERATION :" << endl;
        cout << "Binary of a:" << bitset<8>(a) << endl;
        cout << "LEFT SHIFT operation of a :" << bitset<8>(a << 1) << " " << (a << 1) << endl;  // left shift multiply the number by 2 power n
        // right shift divides the number by 2 power n(only in +ve no. and use 0 to shift bits) but in negative number it shift by copying msb i.e 1
        cout << "RIGHT SHIFT operation of a :" << bitset<8>(a >> 3) << " " << (a >> 3) << endl; 
        
        //POST INCREMENT AND DECREMENNT
        cout<<"POST INCREMENT AND DECREMENT"<<endl;
        /*  ++a   first increase 'a' then use
            --a   first decrease 'a' then use
            a++   first use 'a' then increase 
            a--   first use 'a' then decrease
            
         */
        cout<<"(++a)*(++a) "<<(++a)*(++a)<<endl; //must check the output for surprise🤯
        cout<<"a++ + ++a "<<(a++ + ++a)<<endl;    //must check the output for surprise🤯
        return 0;
}