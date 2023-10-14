###### [Repository all file](../C++/)
[^1]: Lập trình hướng đối tượng trong C++.
## [**_Object Oriented Programming in C++_**](../C++/OOP/)[^1]

### Class

---

## **Basic**
[^ab]: Tham số và đối số.
1. ### Argument and parameter [^ab]
```cpp
    void person(int age, string name){
        
    } // age and name are parameters

    //Call in main()    
    person(18,"HUY"); // 18 and "HUY" are arguments
```
[^pr]: Con trỏ và tham chiếu.
2. ### Pointers and References [^pr] 
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
