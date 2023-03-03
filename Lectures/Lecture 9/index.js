// This is a comment

/* block comment
adfasd
*/

const PI = 3.14;
let age = 30;
name = "Joe";

console.log("Age is " + age);
console.log("Name is " + name);


// if-else clause
// if (condition) { statement }
if (age < 30) {
    console.log(`${name} is young\n"`)      // \t = tab
} else if ( age > 30) {
    console.log(name + " is old");
} else {
    console.log(name + " is 30");
}

// document.getElementById('name').innerHTML = `<p>${name}</p>`

// operators
let a = 3;
let b = 2;
console.log(a + b);     //Also -,*,/
console.log(a ** b);    //Exponential
console.log(a % b);     //Remainder
console.log(a++);
console.log(--b);

a = 5, b = 3;
a = a + 2;              // a += 2

// function add(number1, number2, ) {
//     return number1 + number2;
// }

const add = (number1, number2) => {     //Same as above function, encouraged
    return number1 = number2;
}

console.log(add(5,3));

// Arrays
const cars = ["Camry", "Civic", "BMW"];
cars.push("Tesla");
console.log(cars[2]);
console.log(cars.length);

for (let i = 0; i < cars.length; ++i) {
    console.log(cars[i]);
}

for (let car of cars) {
    console.log(car);
}