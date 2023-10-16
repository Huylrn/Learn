#include <iostream>
using namespace std;
int main() {

    int arr[] = {1,2,3,4,6};
    short *p = (short*)&arr[0];
    cout << p << endl << *(p+4);

    return 0;
}