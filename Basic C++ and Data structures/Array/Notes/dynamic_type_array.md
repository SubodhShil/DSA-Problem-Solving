
To create a dynamic type array that can take input of every data type in C++, you can use the std::variant class. The std::variant class is a generic container that can store any type of data. To create a std::variant array, you can use the std::vector class. The std::vector class is a container that can store a dynamically sized array of objects.

The following code shows how to create a dynamic type array that can take input of every data type in C++:

C++

```cpp
# include <iostream>
# include <vector>
# include <variant>

int main() {
  // Create a vector of variants.
  std::vector<std::variant<int, double, std::string>> v;

  // Add some elements to the vector.
  v.push_back(10);
  v.push_back(3.14);
  v.push_back("Hello, world!");

  // Iterate over the vector and print the elements.
  for (auto& e : v) {
    std::cout << e << std::endl;
  }

  return 0;
}
```

In C++, you can create a dynamic array that can hold elements of different data types using the `std::vector` container from the Standard Library. `std::vector` is a versatile container that provides dynamic resizing and can hold elements of any type.

Here's an example of creating a dynamic array using `std::vector` that can store elements of different data types:

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<std::any> dynamicArray;

    // Add elements of different types to the dynamic array
    dynamicArray.push_back(10);
    dynamicArray.push_back(3.14);
    dynamicArray.push_back('A');
    dynamicArray.push_back("Hello");

    // Access and print the elements of the dynamic array
    for (const auto& element : dynamicArray) {
        if (element.type() == typeid(int))
            std::cout << "Element (int): " << std::any_cast<int>(element) << std::endl;
        else if (element.type() == typeid(double))
            std::cout << "Element (double): " << std::any_cast<double>(element) << std::endl;
        else if (element.type() == typeid(char))
            std::cout << "Element (char): " << std::any_cast<char>(element) << std::endl;
        else if (element.type() == typeid(const char*))
            std::cout << "Element (const char*): " << std::any_cast<const char*>(element) << std::endl;
    }

    return 0;
}
```

In the above example, `std::vector<std::any>` is used to create a dynamic array that can hold elements of any type. Elements of different types are added to the `dynamicArray` using the `push_back` function. To access and retrieve the elements, `std::any_cast` is used along with type checking using `typeid`. This allows you to perform type-specific operations or handle the elements appropriately based on their types.
