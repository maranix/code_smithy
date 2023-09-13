part 'stack_array.dart';

interface class Stack<T> {
  const Stack();

  factory Stack.array() => StackArray<T>();

  int get length => throw UnimplementedError("length is not yet implemented");

  void push(T element) {
    throw UnimplementedError("push() is not yet implemented");
  }

  T pop() {
    throw UnimplementedError("push() is not yet implemented");
  }

  T peek() {
    throw UnimplementedError("push() is not yet implemented");
  }
}
