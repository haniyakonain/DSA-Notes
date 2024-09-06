#include <iostream>
using namespace std;

void PrintNto1(int start, int end)
{
    if (start < end)
        return;

    cout << start << endl;
    PrintNto1(start - 1, end );
};

int main()
{
    PrintNto1(5,2);
}