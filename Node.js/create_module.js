/*
Modules:- 
    Module in Node.js is a simple or complex functionality organized in single or multiple JavaScript files which can be reused throughout the Node.js application.
    Each module in Node.js has its own context, so it cannot interfere with other modules or pollute global scope. Also, each module can be placed in a separate .js file under a separate folder.

    *These to be implemented inside those apps in which we require a specific module or function.
        We load modules using require() function inside a constant to avoid interfering with another part/value of the app.
    
    *Use jshint filename.js to check for errors in an app.
        It scans and gives a clear explanation of the problem.

    *Use Objects when there is a need to import multiple functions.
        const objectName = require('./moduleName.js or ../moduleName.js');
        objectName.functionName(argument);
____________________________________________________________________________________________________________________________________________________________________________________________________

About this app:-
    This app imports log function from a module named logger.js which prints or displays a message on the console/screen.
*/

const log = require('./module_logger'); // Loading log function fom module_logger.js module using require()

log("Message from logger module.") // log function defined in an another Module called logger.js.