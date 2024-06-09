#include <iostream>
#include <cmath>

using namespace std;

template <typename T>
T nsd(T a, T b) {
    const T epsilon = 1e-9;
    while (abs(b) > epsilon) {
        T temp = b;
        b = fmod(a, b);
        a = temp;
    }
    return a;
}

int main() {
    int a = 60;
    int b = 288;
    cout << "NSD (" << a << ", " << b << ") = " << nsd(a, b) << endl;

    double x = 60.0;
    double y = 288.0;
    cout<< "NSD (" << x << ", " << y << ") = " << nsd(x, y) << endl;

    return 0;
}



