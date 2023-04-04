//* Objects in JS
const person = {
    "name": 'Subodh',
    lastName: 'Shil',
    age: 23,
    education: 'BSc',
    hobbies: ["listening", "programming", "teaching"],
    doSomething: function () {
        if (this.age >= 22) {
            console.log("Eligible");
        }
    },
    doSomething2: function () {
        return (this.age >= 18) ? `Can drive` : `Can't drive`;
    }
};

//^ How to invoke object properties in different ways

//& bracket notation
console.log(person['name']);

//& dot notation
console.log(person);
console.log(person.name, person.age);
person.doSomething();
console.log(person.doSomething2());

//^ delete an object property pair (key-value)
console.log(person.lastName);
// delete person.lastName;
console.log(person.lastName);

//* delete multiple object keys at a time
['name', 'lastName'].forEach(i => delete person[i]);
console.log(person.name, person.lastName);

//* add new key-value pair to an existing object
//^ using obj.assign() method
// Object.assign(obj_name, {key1: value1, key2: value2, ..moreKey: moreValue});
Object.assign(person, {
    newKey1: "Something1",
    newKey2: "Something2"
});

//^ using dot or bracket notation
person['newKey3'] = "Something3";
person.newKey4 = "Something4";

//^ adding multiple new key-value pairs in an object
const addNewKeyValue = (key, value) => person[key] = value;
addNewKeyValue('newKey5', "upset");
addNewKeyValue('newKey6', "quite");

console.log(person);

/* 🔥🔥 Iterate an object 🔥🔥 */

//& for..in loop
console.log(`Iteration using for in loop`);
for (let key in person) {
    console.log(`${key}: ${person[key]}`);
}

//& for..of
console.log('using for of loop');
for (let [key, value] of Object.entries(person)) {
    console.log(`${key} ${value}`);
}

//& forEach()
Object.entries(person).forEach(([key, value]) => {
    console.log(key, value);
})

//* getting object keys
console.log("\n");
console.log(`Iteration using Object.keys()`);
for (let key of Object.keys(person)) {
    console.log(`${key} ${person[key]}`);
}