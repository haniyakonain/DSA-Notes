// Print Name N Times using Recursion

#include <iostream>
using namespace std;

void PrintNumReverse(int i)
{
    if (i < 1)
        return;

    cout << i << endl;
    PrintNumReverse(i - 1);
}

int main()
{
    PrintNumReverse(4);
}