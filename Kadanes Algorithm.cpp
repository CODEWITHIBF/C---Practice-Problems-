#include <iostream>
#include <climits>
using namespace std;

int MaxSubArray(int *arr, int n){
    int currentSum = 0;
    int maxSum = INT_MIN;

    for(int i = 0; i < n; i++){
        currentSum += arr[i];
        maxSum = max(currentSum, maxSum);

        if(currentSum < 0){
            currentSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int array[] = {-2,-5,-6,8,-8};
    int n = sizeof(array)/sizeof(int);

    cout << "Max of SubArray is: " << MaxSubArray(array, n);
}
