"use strict";

                                                                //* ============================ *//
                                                                 /*  🔥🔥 Array Methods  🔥🔥   */
                                                                //* ============================ *//

//* use const for creating an array
const fruit = ["🍎", "🍌"];
// fruit = ["🍕", "🍔"]; //! can't assign to a const array since assignment to a constant will eventually change the actual address of the array
console.log(fruit);
fruit[0] = "🥩";
fruit.push("🍎");
console.log(fruit);
fruit.splice(0, 1);
console.log(fruit);
                                                                //* ============================ *//
                                                                 /* 🔥🔥 Array Destructuring 🔥🔥 */
                                                                //* ============================ *//

// let myArray = ["value1", "value2"];

//^ swapping two values using array destructuring
let a = 100,
    b = 3030;

console.log(`Before: a = ${a} and b = ${b}`);
[a, b] = [b, a];
console.log(`After: a = ${a} and b = ${b}`);

let c, rest;
// [a, b, c, ...rest] = [1, 2, 3, 4, 5]; //& rest is now became an array
console.log(rest);

[rest, b, c, ...a] = [1, 2, 3, 4, 5, 6];

//* let's iterate through
for (let k of a) {
    console.log(k);
}

//* if variable list in array destructuring is lesser than the array size then reamining variables will fill up with 'undefined'
let x, y, z;
[x, y, z] = [10];
console.log(x, y, z);

//* avoid this particular problem by providing a default value 👇👇
[x, y = 0, z = 0] = [10];
console.log(x, y, z);


//* skipping values
let p, q, r;
let array = [1, 2, 3, 4];
//^ we want to skip 3 here

[p, q, , r] = array;
console.log(p, q, r);