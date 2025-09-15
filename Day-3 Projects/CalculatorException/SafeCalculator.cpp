#include <bits/stdc++.h>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }
    T subtract(T a, T b) {
        return a - b;
    }
    T multiply(T a, T b) {
        return a * b;
    }
    T divide(T a, T b) {
        if (b == 0) {
            throw runtime_error("Cannot divide by zero");
        }
        return a / b;
    }
};

int main() {
    Calculator<int> IntNum;
    Calculator<float> FloatNum;

    cout << "=== Integer Calculator ===" << endl;
    cout << "12 + 4 = " << IntNum.add(12, 4) << endl;
    cout << "12 - 4 = " << IntNum.subtract(12, 4) << endl;
    cout << "12 * 4 = " << IntNum.multiply(12, 4) << endl;
    try {
        cout << "12 / 4 = " << IntNum.divide(12, 4) << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    cout << "\n=== Float Calculator ===" << endl;
    cout << "3.755 + 6.43 = " << FloatNum.add(3.755f, 6.43f) << endl;
    cout << "2.17 - 9.52 = " << FloatNum.subtract(2.17f, 9.52f) << endl;
    cout << "16.72 * 19.85 = " << FloatNum.multiply(16.72f, 19.85f) << endl;
    try {
        cout << "12.64 / 0 = " << FloatNum.divide(12.64f, 0.0f) << endl;
    } catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
