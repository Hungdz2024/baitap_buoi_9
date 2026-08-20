#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int N;
    cin >> N;
    double tong = 0.0;
    double dau = 1.0;
    for (int i = 1; i <= N; i++) {
        tong += dau * (1.0 / i);
        dau = -dau;
    }
    cout << fixed << setprecision(4) << tong << endl;
    return 0;
}