fun main(args: Array<String>) {
    val mult3 = MathFunc(3)
    println("5 * 3 = ${mult3(5)}")

    val mult2 = {num1: Int -> num1 * 2}

    val numList2 = arrayOf(1,2,3,4,5)

    MathonList(numList2, mult2)
}

fun MathFunc(num1: Int): (Int) -> Int = {num2 -> num1 * num2}

fun MathonList(numList: Array<Int>, myFunc:(num: Int) -> Int){
    for(num in numList){
        println("MathonList ${myFunc(num)}")
    }
}