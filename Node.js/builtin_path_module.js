/*
An example for using the built-in modules of Node.js
    *Path Module:-
        This will display the complete information regarding the file.js including its name,extension,path and etc.

Referrence:- https://nodejs.org/dist/latest-v12.x/docs/api/path.html
*/

const path = require('path'); //Load the path module.

var obj = path.parse(__filename); //Load and store the info about file.js related to its path and file properties inside a variable to display it later.

console.log(obj); //Display the information.