fun main(args: Array<String>) {
    val oneToten = 1..10

    val alphabets = "A".."Z"

    println("R in alphabets: ${"R" in alphabets}")

    val tenToone = 10.downTo(1)

    val twoTotwenty = 2.rangeTo(20)

    val range3= oneToten.step(3)
    println("\n")
    for (x in range3) println("range3: $x")
    println("\n")
    for (x in tenToone.reversed()) println("Reversed tenToone: $x")    
}