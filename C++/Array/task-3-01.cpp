#include <iostream>
using namespace std;
void input_array(int *arr, int n, int m) {
    int sum = 0;
    for (int i = 0; i < n * m; i++) {

        cin >> arr[i];
    }
    // n is the key
    int index = 0; // save the index
    for (int i = 0; i < n; i++) {

        for (int j = 0; j < m; j++) {   
                     
            sum += arr[index];
            index++;

        }
        cout << sum << endl;
        sum = 0;

    }


} // type value to array
int main() {

    // Multidimensional Array
    int n,m;
    cin >> n >> m;
    int *arr = new int [n * m];

    input_array(arr, n, m);
    return 0;

}