/*
An example for using the built-in modules of Node.js
    *HTTP Module:-
        The HTTP interfaces in Node.js are designed to support many features of the protocol which have been traditionally difficult to use. In particular, large, possibly chunk-encoded, messages.
        The interface is careful to never buffer entire requests or responses — the user is able to stream data.

Referrence:- https://nodejs.org/dist/latest-v12.x/docs/api/http.html
*/

const http = require('http') // Load HTTP module

/*
Creating server:-
    HTTP module in Node.js has the functionality to create servers using EventEmitter, it can do everything that an EventEmitter can.

    Syntax:-
        1. Upon using this method we also need to create a listener later on for events.
            const objectName = http.createServer() //Creating server

            objectName.on('connection', (socket) => { //Listen for event
                console.log('New Connection.....')
            })
        
        2. This method doesn't require an listener but it works on similiar method as an event.
            It takes two arguments req(request) and res(response) indicating upon a certain request which response is fit to return.

            const objectName = http.createServer((req, res) => {
                if (req.url === '/') {
                    res.write('Hello there.')
                    res.end()
                }
            });
*/

const server = http.createServer((req, res) => { // Create a server and on a request to access it reply with a response then end response.
    if (req.url === '/') {
        res.write('Hello there.')
        res.end()
    }
});

server.listen(1000) // Listen to the server on port 1000.

console.log('Listening on port 1000......')