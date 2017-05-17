#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int arr[1000];
    int N,i;
    cin >> N;

    for(i=0; i< N;i++)
        {
        cin >> arr[i];
    }


    for(i=N-1; i>= 0;i--)
        {
        cout << arr[i] << " ";
    }
    return 0;
}
