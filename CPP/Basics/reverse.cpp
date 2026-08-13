#include <iostream>
#include <vector>
using namespace std;
int main(){
    cout << "Enter the number of elements u want to store : \n";
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i = 0; i < n; i++){
        cout << "Enter the element number " << i+1 << "\n";
        cin >> arr[i];
    }
    for(int i=(int)arr.size() - 1; i>=0; i--)
    cout << arr[i] << " ";
}