#include<iostream>
using namespace std;
void checkEvenOrNot(int num)
{
    if (num % 2 == 0)
        goto even; // jump to even
    else
        goto odd; // jump to odd

even:
    cout << num << " is evenn";
    return; // return if even
odd:
    cout << num << " is oddn";
}

// Driver program to test above function
int main()
{
    int num = 26;
    checkEvenOrNot(num);
    return 0;
}
Output:
