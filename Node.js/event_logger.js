// This is an extension of events.js not a standalone file

const EventEmitter = require('events') // Load event module

/*
Create a class and extend it for raising an event, otherwise we need to create an object for EventEmitter.
which then would have interfered by having duplicate objects of the same name for EventEmitter and our program won't work.
 
Syntax:-
        class Name{
                .....................
                .....................
                }
*/

class Logger extends EventEmitter{ // Wrap event and log message inside a class and extend its functionality by including EventEmitter
 log(message) {
    console.log(message);

// Raise an event
    this.emit('messageLogged', {id: 1, url: 'http://'})
 }
}

module.exports = Logger; //Export message

/*
Exporting modules.
Notes:-
1. If there is only one function in the module, we don't need to specify an object.
    modules.exports = log; // Name of the function

2. In an event where there are multiple functions that needs to be exported we define the object name in order to avoid redundancy.
    modules.exports.objectName = log; // Name of the function
*/