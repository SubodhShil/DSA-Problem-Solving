const demoObject = {
    "name": "Binod",
    'age': 26,
    'education': 'msc',
    'job': 'daru dokandar'
};

/* 🔥🔥 Object destructuring */
//^ syntax: let { property1: variable1, property2: variable2 } = object;
// let {
//     name: name,
//     age: age
// } = demoObject;

// let {
//     name,
//     age
// } = demoObject;

let {
    age,
    name,
    ...restProps
} = demoObject;


console.log(name, age, restProps);

const user = [
    { userId: 1, userName: "Subodh", age: 22 },
    { userId: 2, userName: "Antu", age: 20 },
    { userId: 3, userName: "Gopal", age: 24 }
];

user.forEach(prop => console.log(prop.userName));

//* array of object nested destructuring
const [user1, user2, user3] = user;
console.log(user1, user2, user3);

