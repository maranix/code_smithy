/*
This is program prints square of an element at a specific index inside an array.

For ex-
        1.Below defined array has 5 elements(0,1,2,3 and 4).
        2.Inside the array definition we define the square function as lambda to maintain the clean code(however this step is not necessary we can also define a seperate function as usual then call that to calculate the square root). x refers to the element.
        3.Print an index inside the range to see the result of the square root.
*/

fun main(args: Array<String>) {
    var squareArray = Array(5, {x -> x * x})
    println(squareArray[4])
}