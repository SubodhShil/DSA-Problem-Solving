/* Hoisting */
// => runnig a function even before the function is defined

/* Function inside function */
//* JS allows us to define a function into another function

function app() {
    const myFunc = () => {
        console.log(`Hello from myFunc`);
    };

    const addTwo = (first = 0, last = 0) => first + last;

    console.log(`Inside function`);
    myFunc();
    console.log(addTwo());
}

app();

/* Currying in JS */
//* https://javascript.info/currying-partials

const currying = (x) => (y) => x + y;
console.log(currying(10)(20));

/* JS rest parameters */

