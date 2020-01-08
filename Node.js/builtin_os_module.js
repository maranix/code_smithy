/*
An example for using the built-in modules of Node.js
    *OS Module:-
        The os module provides operating system-related utility methods and properties.

Referrence:- https://nodejs.org/dist/latest-v12.x/docs/api/os.html
*/

const os = require('os'); //Load os module

var totalmem = os.totalmem(); //Import totalmem() function from os module and store the value inside a variable.
var freemem = os.freemem(); //Import freemem() function from os module and store the value inside a variable.

/*
There are two ways to display strings in newer Node.js or Javascript.
    1. Concatenation
        console.log('Total Memory: ' + totalmem);
    
    2. Template String ( Available in only newer versions after ES6 or 2015)
       This method doesn't require any kind of concatenation.

            console.log.format(`Total Memory: ${totalmem}`); 
                                or
            console.log(`Total Memory: ${totalmem}`);
        
        Note:- Template strings needs to be wrapped inside Single Back Quotes(`string`) otherwise they won't be considered as Template string.
               ${} works as a placeholder for a string. We can also perform mathematical calculations of variables inside it and also call a function.

                    console.log(`Sum = ${a+b}.`); // Sum of two variables
                    console.log(`${fn()}`); // Calling a function
                    console.log(`${objectName.toUpperCase()}.`); // Member function

    Referrence:- https://developers.google.com/web/updates/2015/01/ES6-Template-Strings
*/

console.log.format(`Total Memory: ${totalmem}`); //Using Template String
console.log(`Free Memory: ${freemem}`);