#include <iostream>
using namespace std;

// counting the bits equal to 1
unsigned int countBits(unsigned long long n)
{
    unsigned int count = 0;
    while (n)
    {
        count += n & 1;
        n >>= 1;
    }
    return count;
}

int main()
{
    cout << countBits(77231418);
    return 0;
}