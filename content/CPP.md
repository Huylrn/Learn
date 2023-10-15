###### [Repository all file](../C++/)
## [**_Object Oriented Programming in C++_**](../C++/OOP/) [^1]
[^1]: Lập trình hướng đối tượng trong C++.

### Class

---

## **Basic**
[^ab]: Tham số và đối số.
### 1. Argument and parameter [^ab]
```cpp
    void person(int age, string name){
        
    } // age and name are parameters

    //Call in main()    
    person(18,"HUY"); // 18 and "HUY" are arguments
```
[^pr]: Con trỏ và tham chiếu.
### 2. Pointers and References [^pr] 
* **How to declare a pointer**
    ```cpp
        int* a;
    ```
* **How to use pointer**
    ```cpp
        int a = 0;
        int *ptr; 
        ptr = &a; // A pointer can only receive an address
        cout << *ptr; // -> 0
    ```
* **Pointers and references**
    ```cpp
        void parapa_references(int &a){
            a = 100;
        } // use references 
        void parapa_pointer(int *a){
            *a = 1;
        }// use pointer and references

        // Call in main()
        int x = 0; // -> x = 0
        parapa_references(x); // -> x = 100
        parapa_pointer(&x); // -> x = 1

    ```
### 3. Array and pointer
<details>
<summary>List task</summary>

  * ### **Task 1**

|**_[question](https://codelearn.io/learning/cpp-nang-cao?activityType=12&activityId=972)_**|**_[source code](../C++/Array/task-1-01.cpp)_**|[_**run**_](https://onecompiler.com/cpp)|
|-|-|-|
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

***

<!-- BeginTask -->

  * ### **Task**
|[question]()|[source code](../C++/Array/)|
|-|-|
<details>
<summary>Code</summary>

```cpp

```
</details>

***

<!-- endTask -->

</details>
