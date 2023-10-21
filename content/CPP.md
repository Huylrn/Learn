###### [Repository all file](../C++/)
## [**_Object Oriented Programming in C++_**](../C++/OOP/) [^1]
[^1]: Lập trình hướng đối tượng trong C++.

### Class

---

## **Basic**
### 1. Argument and parameter [^2]
[^2]: Tham số và đối số.
```cpp
    void person(int age, string name){
        
    } // age and name are parameters

    //Call in main()    
    person(18,"HUY"); // 18 and "HUY" are arguments
```
### 2. Pointers and References [^3] 
[^3]: Con trỏ và tham chiếu.
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
### 3. Array
<details>
<summary>List task</summary>

<!-- BeginTask1 -->

  * ### **Task 1**

|**_[question](https://codelearn.io/learning/cpp-nang-cao?activityType=12&activityId=972)_**|**_[source code](../C++/Array/task-1-01.cpp)_**|[_**run**_][run]|
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

<!-- endTask1 -->

<!-- BeginTask2 -->

  * ### **Task 2**
|[question](https://codelearn.io/learning/cpp-nang-cao?activityType=12&activityId=977)|[source code](../C++/Array/task-2-01.cpp)|[**run**][run]|
|-|-|-|
<details>
<summary>Code</summary>

```cpp
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
```
</details>

<!-- endTask2 -->

<!-- BeginTask3 -->

 
  * ### **Task 3**
|[**question**](https://codelearn.io/learning/cpp-nang-cao?activityType=12&activityId=980)|[**source code**](../C++/Array/task-3-01.cpp)|[**run**][run]|
|-|-|-|
<details>
<summary>Code</summary>
 
```cpp
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
```
</details>
 
<!-- endTask3 -->

<!-- beginTask4 -->
 
  * ### **Task**
|[**question**]()|[**source code**](../C++/Array/)|[**run**][run]|
|-|-|-|
<details>
<summary>Code</summary>
 
```cpp
 
```
</details>
 
***
<!-- endTask4 -->

[run]: https://onecompiler.com/cpp
</details>

***

* **Dynamic Array**
    ```cpp
    int* array = new int [10]; //Dynamic array declaration.
    delete[] array; // Free up memory when use dynamic array.
    ```
[^multiarr] : Mảng đa chiều.
* **Multidimensional array**[^multiarr]
    >[***source code***](#task-3)
    
### 4. Memory allocation [*(more).*](https://codelearn.io/learning/cpp-nang-cao?activityType=8&activityId=979)

[^sma]: Cấp phát bộ nhớ tĩnh.
* **Static memory allocation**[^sma]
    ```cpp
    int a[10];
    // array a is declared outside the main
    int main() {
        return 0;
    }
    ```
[^dma]: Cấp phát bộ nhớ động.
* **Dynamic memory allocation**[^dma]
    ```cpp
    int main() {
        int a[10]; // array a is declared inside the main
        return 0;
    }
    ```