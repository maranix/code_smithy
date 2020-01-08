/*
An example for using the built-in modules of Node.js
    *File system Module:-
        The fs module provides an API for interacting with the file system.

Referrence:- https://nodejs.org/dist/latest-v12.x/docs/api/fs.html
             https://adrianmejia.com/asynchronous-vs-synchronous-handling-concurrency-in-javascript/

             Also consider this for when to use synchronous and asynchronous code:-

             https://medium.com/@adamhooper/node-synchronous-code-runs-faster-than-asynchronous-code-b0553d5cf54e
*/

const filesystem = require('fs') //Load fs module
console.time('Synchronous: ')
console.time('Asynchronous: ')

// Synchronous method (Avoid using it, check referrence guide for details.)
const Sync = filesystem.readdirSync('./')
console.log("Synchronous: ", Sync)

// Asynchronous method (Recommended, better in large scale apps and database. check referrence guide for details.)
filesystem.readdir('./', function(err, files){ 

    /*  (local function)(err: NodeJS.ErrnoException, files: string[])
        './' can be replaced with a filename or a directory name, it will then return the name of the specified file/directory.
        In a case where that particular file/directory doesn't exist it'll simply throw an exception descibed below.
    */ 
    
    if (err) console.log("An error occured, file name or directory not found.", files);
    else console.log("Asynchronous: ", files);
});
console.timeEnd('Synchronous: ')
console.timeEnd('Asynchronous: ')