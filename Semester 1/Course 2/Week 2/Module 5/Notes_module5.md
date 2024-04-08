> # **```String```**

There are two types of string seen in C++:

1. C style strings: Implement by general array
2. String class: String is a dynamic array of character, thus no need to specify the size. In C++, string is implemented as a class object.

**What is the size of a newly declared empty string?**  
👉 0 byte.

```cpp
    string firstString;
    cout << firstString.size() << endl;     // 0
    cout << sizeof(firstString) << endl;    // 32
```

**Why the string size shows 0, but the sizeof operator shows 32 bytes?**  
👉 The implementation of C++ string is a class, so it does contain various data members and member functions.

std::string object contains the following members:

- A pointer to the first character in the string.
- A pointer to the last character in the string.
- A pointer to the end of the allocated memory.
- The size of the string.
- Other member functions or methods

When you get the byte size of your string using the sizeof operator like this ```sizeof(string_name)``` you're actually getting the size of the object itself. Although the result of sizeof is not always 32 bytes. The specific size may vary depending on the implementation and platform.

- String class variable size is dynamic, it increases it's capacity dynamically or implicitly. Use **s.capacity()** to estimate the capacity of current string.

- **String resize**: Resizing a string can lead to the appearance of garbage characters. If a string is resized to a smaller size and then increased again, or if it is directly resized to a larger size, the additional space may contain garbage characters.
  - When a string is resized, it is not always possible to restore the original data. If the string is resized to a smaller size and then resized back to a larger size, the extra space may be filled with garbage characters. This is because the string is not actually resized, but rather a new string is created and the old string is discarded. The new string will contain the original data, but the extra space will be filled with garbage characters. To avoid the string resizing garbage value problem, you can pass empty character to the resize method.

The same thing can happen if a string is increased by resizing. When a string is resized, the new string is created with the same contents as the old string. However, the new string may not be the same length as the old string. If the new string is shorter than the old string, the extra space at the end of the string will be filled with garbage characters.

&nbsp;

## <p align="center">**Important string class methods**</p>

| Function | Description |
|---|---|
|**Capacity**|
| `s.size()` | Returns the size of the string. |
| `s.max_size()` | Returns the maximum size that string can hold. |
| `s.capacity()` | Returns current available capacity of the string. |
| `s.clear()` | Clear the string. |
| `s.empty()` | Return true/false if the string is empty. |
| `s.resize()` | Change the size of the string. |
|**Element access**|
| `S[i]` | Access the ith index of the string. |
| `s.at(i)` | Access the ith index of the string. |
| `s.back()` | Access the last element of the string. |
| `s.front()` | Access the first element of the string. |
|**Modifiers**|
| `s+=` | Append another string. |
| `s.append()` | Append another string. |
| `s.push_back()` | Add character to the last of the string. |
| `s.pop_back()` | Remove the last character of the string. |
| `s=` | Assign string. |
| `s.assign()` | Assign string. |
| `s.erase()` | Erase characters from the string. |
| `s.replace()` | Replace a portion of the string. |
| `s.insert()` | Insert a portion to a specific position. |
|**Iterators**|
| `s.begin()` | Pointer to the first element. |
| `s.end()` | Pointer to the next element after the last element of the string. |

&nbsp;

### <ins>**String concatenation**</ins>

The `+=` operator can be used to concatenate two strings. However, this is not the default behavior. Instead, the `String` class internally implements operator overloading to achieve string concatenation whenever we use `+=` to concatenate strings.

If we try to acheive the same result with traditional C-style strings, it will show error. Since there is no predefined implementation to concat string using **+=** operator.

```cpp
    char str1[] = "Subodh";
    char str2[] = "Shil";
    char str3[] = str1 + str2; /// 👈👈 Shows error here
    cout << str3 << endl;
```

Here is a more detailed explanation of what is happening when we use the `+=` operator to concatenate strings:

1. The `String` class defines an overloaded version of the `+` operator. This overloaded operator takes two `String` objects as its operands and returns a new `String` object that is the concatenation of the two operands.
2. When we use the `+=` operator to concatenate strings, the compiler will automatically convert the expression to the equivalent of `a = a + b`. In other words, the compiler will first call the overloaded `+` operator to concatenate the two strings, and then assign the result back to the original string variable.

This is why the `+=` operator can be used to concatenate strings even though it is not the default behavior. The `String` class internally implements operator overloading to make it possible to use the `+=` operator to concatenate strings.
    - An alternative way of using **+=** is .append() method. But one should **+=** operator for faster execution.

&nbsp;

> ## **```String iterators```**

Iterators are indicators that points to a single element of a data structure to iterate over.
There are two types of iterators available:

1. **Index number iterator**: Index number are used for iterate over contiguous data structures. Index number iterators are 0 based.

2. **Pointer iterator**: Pointer iterators are pointers that can be used to iterate over a class container, such as a vector or map. Unlike data structures that have specific index numbers, not all data structures are contiguous and can be accessed directly using indices. Therefore, it is beneficial to have an alternative way to iterate over a class container or data structure that does not have an index value. Since pointers can point to any type, using pointer iterators allows for efficient traversal and manipulation of elements within the container, regardless of whether they have index values or not.

**.begin() iterator**  
.begin() is an iterator or pointer points to the first element of a data structure. But we can't directly print and see the pointer address value, since .begin() is a method implement in private scope.

```cpp
string s = "Hello";
cout << *s.begin();
```

**.end() iterator**  
.end() doesn't points to the last element rather it points to the place after the last element. To, see the last element follow this:

```cpp
string s = "Hello";
cout << *(s.end() - 1);
```

&nbsp;

> ## **```String input with spaces```**

&nbsp;
To get string input with spaces use the following syntax:

```cpp
string s;
getline(cin, s);
```

The getline() function will read a line of input from the input stream and store it in the s variable. The getline() function terminates when it encounters an enter press or new line character (\n).

However, if there is any user input that has been taken before the getline() function is called, you must ignore the previous enter or newline character that might be present in the input buffer. Both `cin.ignore()` and `getchar()` can be used to ignore a particular character. So, we will use any of the two mentioned.

```cpp
int number;
char ch;
cin >> number >> ch;
cin.ignore();

string s;
getline(cin, s);
```

`cin.ignore()` is a member function of the `std::cin` object. It takes two arguments: the number of characters to ignore and the character to ignore. For example, the following code will ignore the next two characters in the input stream:

```cpp
cin.ignore(2);
```

`getchar()` is a standard library function that reads a single character from the input stream. It returns the character that was read. For example, the following code will read a character from the input stream and ignore it:

```cpp
char ch = getchar();
```

The main difference between `cin.ignore()` and `getchar()` is that `cin.ignore()` can ignore multiple characters, while `getchar()` can only ignore one character.

In general, `cin.ignore()` is the preferred way to ignore characters. It is more efficient and easier to use. However, `getchar()` can be used in some cases where `cin.ignore()` cannot, such as when you need to read a character from the input stream and ignore it at the same time.

&nbsp;

> ## **```Stringstream```**
