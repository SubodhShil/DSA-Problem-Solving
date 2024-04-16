> # ```Class and Object```

## <ins>**Class**</ins>

1. Class is a blueprint.
2. Class is a user defined data type.

## <ins>**Object**</ins>

1. Object is an instance of class or blueprint.

## <ins>**Constructor**</ins>

1. A constructor is a special type of function that is automatically invoked or called whenever a class object is created or instantiated.

2. Constructor don't return anything, so no need to add any return type explicitly.

## <ins>**Return Value Optimization**</ins>

A function that returns some object this optimization method. It will return the object to the speicific object variable and then the return variable will be wipes out from the memory.

## <ins>**Dynamic Object**</ins>

Dynamic object is indeed for memory management. An object stays or lifetime of an object is until the program ends. So, deleting an ordinary object is not possible hereby. Dynamic object comes into picture to encounter this problem. It help deleting any object even before the program ends.

1. Unlike traditional object we can't access member variables of a class in dynamic object. We have to use **arrow operator (->)** instead of dot (.) operator.

```
cout << customer1->productName;
```

2. Another way to access a dynamic object value:

```
cout << (*customer1).productName;
```
