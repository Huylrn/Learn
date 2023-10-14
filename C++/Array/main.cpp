#include <iostream>
using namespace std;
int main() {

    int arr[] = {1,2,3,4};
    int *p = &arr[0];
    cout << p[3] << endl << *(p + 3);

    return 0;
}