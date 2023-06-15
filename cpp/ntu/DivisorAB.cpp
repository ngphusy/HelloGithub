#include <iostream>
using namespace std;

int main(){
    long long a, b, result;
    cin >> a >> b; 
    
    for(int i = 1; i <= a || i <= b; i++) {
        if( a % i == 0 && b % i == 0 ){
            result = i;
    }
    }
    cout << result;

}
