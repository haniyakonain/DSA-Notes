// Print Name N Times using Recursion

#include <iostream>
using namespace std;

void Print1toN(int start, int end)
{
    if (start >= end)
        return;
    cout << start << endl;
    Print1toN(start + 1, end);
}

int main()
{
    Print1toN(1, 4);
}