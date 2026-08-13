#include<bits/stdc++.h>
using namespace std;

void sum(int a, int b){
    int c = a + b;
    cout << "The sum of " << a << " and " << b << " is " << c << endl;
}
int main(){
    int a, b;
    cout << "Enter the two numbers: " << endl;
    cin >> a >> b;
    sum(a, b);
    return 0;
}