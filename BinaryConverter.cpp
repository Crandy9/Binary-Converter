// Reads in a whole number int and outputs its binary conversion

#include <iostream>
#include <bitset>
using namespace std;

//function to convert int to binary
void recursionConversion(unsigned int num);
void bitSetConversion(unsigned int num);

int main()
{
    //cannot hold negative numbers
    unsigned int num;

    cout << "Enter a whole number: \n";
    cin >> num;
    cout << "Binary conversion using recursion: ";
    recursionConversion(num);
    cout << endl;
    cout << "Binary conversion using bitset template from C++ library: ";
    bitSetConversion(num);
    return 0;

}

//using recursion
void recursionConversion(unsigned int num)
{
    if (num / 2 != 0)
    {
        recursionConversion(num / 2);
    }
    printf("%d", num % 2);
}

//using bitset template class; user needs to tailor this code depending on the size of the conversion
void bitSetConversion(unsigned int num)
{
    string binary = bitset<32>(num).to_string(); //to binary
    //this handy method removes all of the leading excess 0's from the binary number
    binary.erase(0, binary.find_first_not_of('0'));
    cout << binary << "\n";
}
