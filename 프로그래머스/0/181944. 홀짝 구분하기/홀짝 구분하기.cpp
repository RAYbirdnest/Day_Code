#include <iostream>

using namespace std;

int main(void) {
    int n;
    cin >> n;

    if (n % 10 + 2 == 2)
    {
        cout << n << " is even" << endl;
    }
    else
    {
        cout << n << " is odd" << endl;
    }
    return 0;
}