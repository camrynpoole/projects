// BASICS
// write javascript here
// use live-server with javascript console to display
// all statements end with semicolon
// separate javascript from html
// javascript : behavior
// html : content
console.log("well when you pick yo own shit out stink");

// VARIABLES
// declaring a variable keyword: let
// cannot be a reserved keyword
// cannot start with a variable
// no spaces or hyphens
// case sensitive
let firstNameVars = "Camryn",
  lastNameVars = "Poole"; // single quote common for variables
// console.log(firstNameVars);

// CONSTANTS
// replace let with const
const interestRateConst = 0.3;
// interestRate = 1; // this will give an error, cannot reassign const
// console.log(interestRateConst);

//PRIMITIVES/VALUES
// string, number, boolean, undefined, null
// dont have multiple types of numbers
let nameValues = "Cam"; // string literal
let ageValues = 23; // number literal
let isApprovedValues = true; // bool literal
let firstNameValues = undefined; // vale is undefined by default
let selectedColorValues = null; // null bitch

// REFERENCE TYPES
// objects, arrays, function

// object: object in real life like a person
// {}: object literal
let personRef = {
  name: "Noah",
  age: 49,
};

// dot notation
personRef.name = "rick";

// bracket notation
let selection = "name";
personRef[selection] = "junior";

// console.log(personRef.name);

// array
// length of array is dynamic
// type is dynamic
let selectedColorsArr = ["red", "blue"]; // array literal
selectedColorsArr[2] = 1;
// index : 0 , 1
console.log(selectedColorsArr);
console.log(selectedColorsArr[0]);

// functions
function greet(name) {
  // parameter: time of declartion
  console.log("Hi " + name);
}
// greet("john"); // argument: value provided
// greet("asshole");

// performs a task
function square(number) {
  return number * number;
}
console.log(square(2));

// DYNAMIC TYPING
// static languages: cannot be changed in future
// dynamic languages: can change
// typeof nameDyn to display the data type in console
// clear console with <Ctrl-l>
