void main() {
  // 'var' declares a variable.  dartanalyzer infers the type.
  var string = "huehuehue";

  // declaring type of variable
  num a = 5;

  // Variables created with "final" keyword cannot be changed
  final num b = 100;

  // "const" variables are compile-time constants
  const num c = 25.0;

  print(string);
  print(a);
  print(b);
  print(c);
}
