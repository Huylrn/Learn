#include <iostream>
using namespace std;
int sum_argument(int *arr, int n) {
    int sum = arr[0];
    for (int i = 1; i < n; i++) {
        sum +=arr[i];
    }
    return sum;
}
void input_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
} // type value to array
int main() {
    int n;
    cin >> n;
    int *arr = new int [n];
    input_array(arr,n);
    cout << "Sum: " << sum_argument(arr,n) << endl;


    return 0;
}