void main() {
  for (var i = 0; i < 5; i++) {
    print(i);
  }

  //"for-in" can be used on any iterable classes
  var sequence = [6, 7, 8];
  for (var x in sequence) {
    print(x);
  }
}
