fun main(args: Array<String>) {
    /* Defining an array
    var arr: Array<Int> = arrayOf() // Type specific arrays
    var arr = arrayOf() // can contain multiple datatypes at once
    */
    
    var array = arrayOf(1, 3.14,'A',"This is an array") // defining an array and its elements

    println("Array:-")
    println("Integer: " + array[0]) // Using the index print a specific element
    println("Float: " + array[1])
    println("Char: " + array[2])
    println("String: " + array[3])
    println("String is stored in : index ${array.indexOf("This is an array")}")
    println("Array contains character 'A': ${array.contains('A')}")
    println("Size of array: ${array.size} elements in the array")
}