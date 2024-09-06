// Print Name N Times using Recursion

#include <iostream>
using namespace std;

void Print1toN(int i, int n)
{
    if (i >= n)
        return;
    cout << "Mansoor" << endl;
    Print1toN(i + 1, n);
}

int main()
{
    Print1toN(1, 4);
}