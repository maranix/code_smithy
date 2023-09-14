part 'singly_linked_list.dart';

class Node<T> {
  Node(this.data);

  final T data;
  Node<T>? next;
}

interface class LinkedListI<T> {
  Node<T>? get head =>
      throw UnimplementedError("getter head is not yet implemented");

  int get length =>
      throw UnimplementedError("getter length is not yet implemented");

  void insert(T data) {
    throw UnimplementedError("insert() is not yet implemented.");
  }

  void removeNode(Node<T> node) {
    throw UnimplementedError("removeNode() is not yet implemented.");
  }

  void display() {
    throw UnimplementedError("display() is not yet implemented.");
  }
}
