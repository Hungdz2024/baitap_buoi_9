#include <iostream>
using namespace std;

int main(){
    int batDau, ketThuc, buoc;
    cin >> batDau >> ketThuc >> buoc;
    for(int i = batDau; i <= ketThuc; i += buoc){
        double F = i * 9.0 / 5.0 + 32; 
        cout << i << " do C = " << F << " do F" << endl; 
    }
    return 0;
}