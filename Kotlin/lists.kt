fun main(args: Array<String>) {
    var list1: MutableList<Int> = mutableListOf(1,2,3,4,5)

    list1.add(10)

    println("1st element of list1: ${list1.first()}")
    println("Last element of list1: ${list1.last()}")
    println("2nd element of list1: ${list1[2]}")

    var list3 = list1.subList(0,3)

    println("Size of list1: ${list1.size}")

    list3.clear()

    list1.remove(1)

    list1.removeAt(1)

    list1.forEach{n-> println("Mutable list: $n")}
}