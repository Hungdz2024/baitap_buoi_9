#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Nhap N: ";
    cin >> N;
    int tong = 0;
    for (int i = 1; i <= N; i++) {
        if (i % 2 == 0) { 
            tong += i;    
        }
    }
    cout << tong << endl;
    return 0;
}