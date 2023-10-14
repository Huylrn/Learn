# **Array and pointer**
## 1. Task 1

|**_[task](https://codelearn.io/learning/cpp-nang-cao?activityType=12&activityId=972)_**|**_[source code](../C++/Array/task-1-01.cpp)_**|
|-|-|
<details>
<summary>Code</summary>

```cpp
#include <iostream>
using namespace std;

int getMaxValue(int *p, int n) {
    int max = p[0];
    for (int i = 1; i < n; i++) {
        if (max < p[i]) {
            max = p[i];
        }
    }
    return max;
}

int main() {
    int n;
    cin >> n;
    int *arr = new int [n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Max Value = " << getMaxValue(arr, n) << endl;
    return 0;
}
```
</details>