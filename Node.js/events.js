/*
An example for using the built-in modules of Node.js
    *Events Module:-
        Node.js allows us to create and handle custom events easily by using events module.
        Event module includes EventEmitter class which can be used to raise and handle custom events.

Referrence:- https://nodejs.org/dist/latest-v12.x/docs/api/events.html
             https://www.tutorialsteacher.com/nodejs/nodejs-eventemitter
             https://www.w3schools.com/js/js_arrow_function.asp
*/

const EventEmitter = require('events') // Load event module
const Logger = require('./event_logger') // Load Logger class from event_logger module
const logger = new Logger() // Create an object named logger of Logger class

/*
Creating a listener for raised events.
    There are two ways to create a listener:-
        1. Using Function.
                objectName.on('eventName', function(arg/e/eventArg){
                    console.log('messageString', arg/e/eventArg)
                })

        2. Using ES6 or Arrow function(refer to the 3rd guide given above to know more).
                objectName.on('eventName', (arg/e/eventArg) => {
                    console.log('messageString', arg/e/eventArg)
                })

*/
logger.on('messageLogged', (eventArg) => { //Listen to the event
    console.log("Listener called", eventArg)
})

logger.log('message') // Display message

