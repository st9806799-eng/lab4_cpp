#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a, b;
    const float epsilon = 0.000001f;

    cin >> a >> b;

    if (a == 0 || b == 0) {
        cout << "Division by zero is not allowed." << endl;
        return 1;
    }

    float res1 = 1.0f / static_cast<float>(a);
    float res2 = 1.0f / static_cast<float>(b);

    if (fabs(res1 - res2) < epsilon) {
        cout << "Results are equal (by 0.000001 epsilon)" << endl;
    } else {
        cout << "Results are not equal (by 0.000001 epsilon)" << endl;
    }

    return 0;
}
