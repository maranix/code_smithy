fun main(args: Array<String>) {

    val map = mutableMapOf<Int, Any?>() 

    val map2 = mutableMapOf(1 to "Raman", 2 to 20)

    map[1] = "Golu"
    map[2] = 18

    println("Map size: ${map.size}")

    map.put(3, "Lucknow")

    map.remove(2)

    for ((x,y) in map){
        println("Key: $x Value: $y")        
    } 

    for ((x,y) in map2){
        println("Key: $x Value: $y")        
    } 
}