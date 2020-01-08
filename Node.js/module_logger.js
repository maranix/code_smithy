// This is an extension of module.js not a standalone file

function log(message) {
    console.log(message);
}
/*
Exporting modules.
Notes:-
1. If there is only one function in the module, we don't need to specify an object.
    modules.exports = log; // Name of the function

2. In an event where there are multiple functions that needs to be exported we define the object name in order to avoid redundancy.
    modules.exports.objectName = log; // Name of the function
*/
module.exports = log; // In this case this modules has only one function so no object name is specified.