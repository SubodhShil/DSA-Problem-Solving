# ```Module 01```

**Header file**: Contains a lot of reuseable chunk of code. We usually import or use these code by declaring those header in C or C++ file. Header files often also said to be built in library of C or C++ programming language.

**main() function**: The main() function of C or C++ is a mandatory function, where compiler start reading or executing.

**function block**: Function wraps various statements and other declarations inside it's body. It usually wraps those code inside the function curly braces.

```
int main()
{
    /// your codes here

    return 0;
}
```

**What "return 0" means?**: return 0 indicates end of main function and successful execution.

Since C or C++ uses bracket based approach to combine it's codes, thus it usually said to be 'curly bracket language'.

**Use of semicolon (;)**: Semicolon indicate ending of a line.

**built in function**: Functions that are packed up with the programming language. Programmer can use those built in by importing it's header. It means, built in functions are reside in header files as various functions. For example:

```
/// stdio.h is header file required to use printf() function
#include <stdio.h>

int main()
{
    /// printf() function shows output in the console or terminal
    printf("Hello World");
}
```

**.h** is the extension for header file.

&nbsp;

## ```Video 1-3```

**Function declaration syntax**

```
return_type function_name(data_type param1, data_type param2)
{

    /// works will be done here

    return (return_type);
}
```

**How to comment?**  
Place two forward slash (/) before any line will make it comment. Comment are ignored by compiler because it doesn't participate in compiling process.

**Why to use comment?**  
Using comment is a good sign of a better programmer and it increases readability. One must use comments to explain what some codes or statements intend to do. For big codebase, there are various industry standard commenting guidline. Such as, **[Google C++ style guide](https://google.github.io/styleguide/cppguide.html).**

**How to use single backslash (\\) and a single percent (%) sign to output?**  
Using single backslash is restricted, it is reserved for other uses in C or C++.

```
int main()
{
    printf("\"); // this line will give you an error

    return 0;
}
```

To print two backslash we have to provide one more backslash precede by it.

```
int main()
{
    printf("\\");

    return 0;
}
```

&nbsp;
To print two percent we have to provide one more precent sign precede by it.

```
int main()
{
    printf("%%");

    return 0;
}
```

This will only provide one backslash. So, the observation is **to print one backslash we're require to use one backslash precede by it**. As per the observation how can you print three backslash at a time?

<details>
<summary>See the result</summary>

```
int main()
{
    printf("\\\\\\");

    return 0;
}
```

</details>
&nbsp;

**Escape sequence**  
Escapte sequences are set of special signs that we use to formate our text. Here is some of them:  
| Action | Sign |
| ---------------|:--------------:|
| Line break | "\n |
| Tab space | "t" |

&nbsp;

## ```Video 1-4 || Video 1-5```

**Data Types**

| Type name | Data value | Example | Size | Format Specifier
| ---------------|:--------------:| ---------------:|---------------:|---------------:|
| int | **Integer**, Stores only non fractional number | 100, -52, 0 | 4 bytes| %d|
| float | **Floating**, number, stores fractional values | 5.245, -9.86, 0.555| 4 bytes| %f|
| bool | **Boolean**, express only two types of values: truthy or falsy value|  true, false| 2 byte | No specific formate specifier, use any existing of other types such as %d
char| Stores single ASCII char | 'a', 'A' '1', '$' | 1 byte | %c

&nbsp;

> **Note**: 0 and 'false' keyword represented as falsy or false value in C or C++, otherwise any other value (including negative) such as -500, .52, 1000 or anything else will represent 'true' or truthy value

> ⚠️⚠️ **<ins>Caution</ins>**: Size of a specific data type differs as per compiler type and version. Usually 64 bit supporting compiler allocate 4 bytes of memory space for '**int**' and '**float**' values data type. In many oldish PC, or old system with 32 bit operating system you may encounter the usual data is allocate memory of 4 bytes (for **int** and **float**). But this is not often most online judge or system we will be assuming our data type as the abovemetion table standard.

**Some Calculation**  
1 byte = 8 bit so, 4 byte = 4 x 8 = 32 bit

&nbsp;

### **Value range of data types**

> **<center>Formula for signed value type: Assuming, 'n' is bit</center>**

---
<p align="center"><img src="https://latex.codecogs.com/svg.latex?-(2^{n-1}+1)%20%5Ctext%7B%20to%20%7D%202^{n-1}-1" alt="-2^{n-1}-1 to 2^{n-1}-1" /></p>

---

1. **Range of 'int' (4 bytes)** $$-10^9 \leq n \leq 10^9$$

2. **Range of 'long long int' (8 bytes)** $$-10^{18} \le n \le 10^{18}$$

&nbsp;

### **Variable naming convention**

1. Variable names are also known as 'Identifier'.
2. Identifier should start with any character between a-z or A-Z. You can also use underscore(_).
    - Valid: _something, Some_thing14
    - Invalid: @something, 235something,
3. Can't use blank space or comma between an identifier
4. Using reserved keywords such as 'int', 'float', 'while', 'for' is restricted
5. Variable names are case sensitive.
    - yourName and yourname is not same identifier name
