#include<bits\stdc++.h>
using namespace std;

int main(){
    int marks;
    cout << " enter your marks : ";
    cin >> marks;
    if(marks >= 80){
        cout << "A\n";
    }
    else if(marks >= 60){
        cout << "B\n";
    }
    else if(marks >= 40){
        cout << "C\n";
    }
    else 
    cout << "Failed!!\n";
    return 0;
}