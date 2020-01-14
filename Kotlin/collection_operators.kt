fun main(args: Array<String>) {
    val numList2 = 1..20

    val listSum = numList2.reduce {x, y -> x + y}
    println("Reduce Sum: $listSum")
    println("\n")
    val listSum2 = numList2.fold(5) {x, y -> x + y}
    println("Fold Sum: $listSum2")
    println("\n")
    println("Evens: ${numList2.any { it % 2 == 0}}")
    println("\n")
    println("All even: ${numList2.all { it % 2 == 0}}")

    val big3 = numList2.filter { it > 3}
    println("\n")
    big3.forEach {n-> println("Greater than 3: $n")}
}