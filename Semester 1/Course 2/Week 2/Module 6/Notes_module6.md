> # **```Module 6```**

## **```this``` keyword**

The **"this"** keyword refers to the pointer of the current object that you're working with. We usually use **this** keyword to remark current object's data members and member function or methods as well as differentiate between object's own data members and local variables or parameters with the same name. By using the "this" keyword, you can explicitly refer to the object's instance of a variable or member function. This helps to clarify the scope and avoid ambiguity when local variables have the same name as the object's data members or methods.

## **Copying objects**

```cpp
// Create two Person objects
Person *P1 = new Person("P1", 23);
Person *P2 = new Person("P2", 20);

// Copy the contents of Antu into Subodh
/// ⚠️⚠️ Not a safer option to copy objects
P1 = P2;

// Delete the Antu object
delete P2;
```

Objects can be copied in the abovementioned way. But this might create errors when object `P2` is deleted. Event after object P2 is deleted the object P1 still pointing to the memory location of object P2, which creates segmentation fault.

To fix this, we can copy objects using dereferencing:

```cpp
// Create two Person objects
Person *P1 = new Person("P1", 23);
Person *P2 = new Person("P2", 20);

// Copy the contents of Antu into Subodh
/// Safer option to copy objects
*P1 = *P2;

// Delete the Antu object
delete P2;
```

## **namespace**

The ``namespace`` is a group where we can host class, function, variables.
