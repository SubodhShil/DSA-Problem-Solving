//* array destructuring
let array1 = [1, 2, 3, 4, 5, -1, -3, -5];
[a, b, , ...c] = array1;
console.log(a, b, c);

//* string destructuring
[d, e, f] = "Subodh";
console.log(d, e, f);

//* default values
[userName = "Guest", surName = "Anonymous"] = [];
console.log(userName, surName);

//* object destructuring
let person = {
    bitle: "menu",
    width: 100,
    height: 200
};

let { title: t = "Something", width: w } = person;
console.log(t, w);

