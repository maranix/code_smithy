part of 'stack.dart';

/*
    Stack implementation using dynamic array and inbuilt functions
*/
final class StackArray<T> implements Stack<T> {
  StackArray();

  final _stack = <T>[];

  @override
  int get length => _stack.length;

  @override
  T peek() {
    try {
      return _stack.first;
    } on StateError catch (_) {
      throw StateError("Stack is empty.");
    }
  }

  @override
  T pop() {
    try {
      return _stack.removeAt(0);
    } on RangeError catch (_) {
      throw StateError("Cannot pop from an empty Stack.");
    }
  }

  @override
  void push(T element) => _stack.insert(0, element);

  @override
  String toString() {
    return _stack.toString();
  }
}
