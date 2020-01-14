fun main(args: Array<String>) {
    val divisor = 2

    try {
        if (divisor == 0){
            throw IllegalArgumentException("Cannot divide by Zerp.")
        } else {
                println("5 / $divisor = ${5/divisor}")
        }
    }
    catch(e: IllegalArgumentException) {
        println("${e.message}")
    }
}