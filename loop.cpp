#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int count = 0;
    if (n == 0) count = 1;  // ✅ Handles zero case

    while (n > 0) {  
        n = n / 10;
        count++;
    }

    cout << "Number of digits: " << count << endl;

    return 0;
}
