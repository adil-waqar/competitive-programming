#include<iostream>
#include<vector>
#include<math.h>
using namespace std;

vector<int> sumZero(int);
int main(){
    vector<int> arr = sumZero(11);
    for (auto num : arr) {
        cout << num << '\t';
    }
    cout << endl;
}

vector<int> sumZero(int n){
    vector<int> arr;
    float i = 1;
    while (i <= floor((float) n / 2.0)){
        arr.push_back((int) i);
        i++;
    }
    i = -1 * --i;
    while (i < 0){
        arr.push_back(i);
        i++;
    }
    if (n % 2 != 0) arr.push_back(0);
    return arr;
}
