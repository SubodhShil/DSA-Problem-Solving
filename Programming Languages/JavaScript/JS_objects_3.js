/* 🔥🔥 Computed properties 🔥🔥 */
const key1 = 'myKey1',
    key2 = 'myKey2';

const value1 = 'myValue1',
    value2 = 'myValue2';

const object1 = {
    [key1]: value1,
    [key2]: value2
}

console.log(object1);


/* 🔥🔥 spread operator 🔥🔥 */
//* spread array and string
let newArray1 = [...["abc", 'def', 'ghi'], "123"];
console.log(newArray1);

//^ merge and sort arrays in JS
const array1 = [1, 2, 3, 5, 9, 10];
const array2 = [4, 8, 6, 7];
let sortedNewArray = [...array1, ...array2];

sortedNewArray.sort(function (a, b) {
    return a - b;
});

console.log(sortedNewArray);


//* 🔥🔥 spread operator Objects 🔥🔥
const obj1 = {
    key1: 500,
    key2: 1000,
    key1: 1200
};

const obj2 = {
    key1: 200,
    key2: 700,
    key3: 800,
    key4: 900
};

const newObject = {
    ...obj1,
    ...obj2,
    "newKey": "-234", // adding a specific key-value pair
    ...["item1", "item2"] // adding an array
};

console.log(newObject);


