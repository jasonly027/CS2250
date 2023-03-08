function isPuppy(age) {
    if (age < 3) {
        return true;
    }
    else {
        return false;
    }

    // Ideally return age < 3
}

let happyAge = 8;
// console.log("Happy is " + happyAge + " years old");
console.log(`Happy is ${happyAge} years old`)
// if (isPuppy(happyAge)) {
//     console.log("Happy is young");
// }
// else {
//     console.log("Happy is old");
// }

// Ternary condition
// Syntax: (condition) ? statement1: statement2
console.log(`Happy is ${isPuppy(happyAge) ? "young" : "old"}`)

function plusFive(number) {
    const FIVE = 5;
    return number + FIVE;
}

console.log(plusFive(20))