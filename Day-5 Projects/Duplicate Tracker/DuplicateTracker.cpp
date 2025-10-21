#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> Numbers;
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for(int i = 0; i < n; ++i) {
        int ele;
        cin >> ele;
        Numbers.insert(ele);
    }

    cout << "The duplicate numbers are: " << endl;

    int prev = -1;       // previous number seen
    int count = 0;       // count of current number

    for (int num : Numbers) {
        if (num == prev) {
            ++count;     // same number as previous → increment count
        } else {
            count = 1;   // new number → reset count
        }

        // print only once if duplicate (count == 2)
        if (count == 2) {
            cout << num << " ";
        }

        prev = num;
    }

    cout << endl;
    return 0;
}
