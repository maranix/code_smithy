fun main(args: Array<String>) {
    val bowser = Animal("Bowser",20.0, 13.5)
    bowser.getInfo()
}

open class Animal(val name: String,
                  var height: Double,
                  var weight: Double) {
        init{
            val regex = Regex(".*\\d+.*")
            require(!name.matches(regex)){"Animal name cannot contain numbers."}
            
            require(height>0){"Height must be greater than zero"}
            require(weight>0){"Weight must be greater than zero"}
        }

        open fun getInfo(): Unit
        {
            println("$name is $height tall and weighs $weight")
        }
} 