part of 'linked_list.dart';

/*
    Singly Linked List implementation
*/
final class SinglyLinkedList<T> implements LinkedListI<T> {
  SinglyLinkedList() {
    _head = null;
    _length = 0;
  }

  late Node<T>? _head;
  late int _length;

  @override
  Node<T>? get head => _head;

  @override
  int get length => _length;

  @override
  void insert(T data) {
    final newNode = Node<T>(data);

    if (_head == null) {
      _head = newNode;
      _length++;
    } else {
      Node<T>? current = _head;

      while (current?.next != null) {
        current = current?.next;
      }

      current?.next = newNode;
      _length++;
    }
  }

  @override
  void removeNode(Node<T> node) {
    Node<T>? current = _head;

    if (current?.data == node.data) {
      _head = current?.next;
      _length--;
    } else {
      while (current?.next?.data != node.data) {
        current = current?.next;
      }

      current?.next = current.next?.next;
      _length--;
    }
  }

  @override
  void display() {
    String out = "";

    Node<T>? current = _head;
    while (current != null) {
      out += "${current.data}->";
      current = current.next;
    }

    print("$out${current?.data}");
  }
}
