fun main(args: Array<String>) {

    //Custom variables with any values, Kotlin will automatically choose the datatype for these variables depending on their values.
    val fullname = "Raman verma" //Read only variable, cannot be changed.
    var age = 20 //Read and Write variable.

    // Integer datatype variables
    println("\nInteger datatype:-")
    var bigint: Int = Int.MAX_VALUE // Creating a custom integer type variable. MAX_VALUE will output the maximum value an integer data type can hold.
    var smallint: Int = Int.MIN_VALUE // // Creating a custom integer type variable. MIN_VALUE will output the minimum value an integer data type can hold.

    println("Biggest Integer: " + bigint) // Basic Java method to concatenate
    println("Smallest Integer: $smallint") // Using the variable inside the string method

    // Long datatype variables
    println("\nLong datatype:-")
    var biglng: Long = Long.MAX_VALUE // Creating a custom long type variable. MAX_VALUE will output the maximum value an integer data type can hold.
    var smalllng: Long = Long.MIN_VALUE // // Creating a custom long type variable. MIN_VALUE will output the minimum value an integer data type can hold.

    println("Biggest Long: " + biglng) // Basic Java method to concatenate
    println("Smallest Long: $smalllng") // Using the variable inside the string method

    // Double datatype variables
    println("\nDouble datatype:-")
    var bigdbl: Double = Double.MAX_VALUE // Creating a custom double type variable. MAX_VALUE will output the maximum value an integer data type can hold.
    var smalldbl: Double = Double.MIN_VALUE // // Creating a custom double type variable. MIN_VALUE will output the minimum value an integer data type can hold.

    println("Biggest Double: " + bigdbl) // Basic Java method to concatenate
    println("Smallest Double: $smalldbl") // Using the variable inside the string method

    // Float datatype variables
    println("\nFloat datatype:-")
    var bigflt: Float = Float.MAX_VALUE // Creating a custom float type variable. MAX_VALUE will output the maximum value an integer data type can hold.
    var smallflt: Float = Float.MIN_VALUE // // Creating a custom float type variable. MIN_VALUE will output the minimum value an integer data type can hold.

    println("Biggest Float: " + bigflt) // Basic Java method to concatenate
    println("Smallest Float: $smallflt\n") // Using the variable inside the string method

    // Boolean datatype vaiables
    println("\nBoolean datatype:-")
    var a = true // Variable a has a boolean value
    if(a is Boolean){
        print("a is boolean.") // prints this because a has boolean value, if a has a datatype of an another variable then it will return an error as incompatible types.
    }

    // Char datatype, checking and returning a boolean value of true or false if a variable has value of same datatype.
    println("\nChar datatype:-")
    var character: Char = 'A'
    println("character variable has the value of same datatype? ${character is Char}") // Match the datatype of a variable to its value and return true if it's true in a single line.

    // Casting(Converting datatype to an another datatype)
                // Float to Int
    println("\nCasting (Converting datatype to an another datatype):-")
    println("2562.63263 Float to Int: " + (2562.63263.toInt()))
                // Character to Int (Prints ASCII value of the character)
    println("'A' to Int: " + ('A'.toInt()))
                // ASCII to Int (Prints a character from the ASCII value)
    println("65 to Char: " + (65.toChar()))

    // String datatype vaiables
    var string = "Hi, my name is " // String variable
    var fullstring = ("$string" + "$fullname" + "and i am $age years old") // Concatening variables.
    println("\nString datatypes:-")
    println("Full string: $fullstring")
    println("Full string has the last name verma? = ${fullstring.contains("verma")}") // checks for a certain string and returns a boolean value of true if it does else returns false.
    println("2nd member in fullstring variable: ${fullstring[2]}") // Prints the element or member at a certain index of the string.
    println("First name: ${fullstring.subSequence(15,21)}") // Subsequence function of string. Prints a string in the given range.
    println("Length of fullstring variable: ${fullstring.length}") // Prints the whole length of the string
}