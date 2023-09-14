import 'package:code_smithy/code_smithy.dart';
import 'package:test/test.dart';

void main() {
  group('SinglyLinkedList', () {
    late final SinglyLinkedList<int> linkedList;

    setUpAll(() {
      linkedList = SinglyLinkedList<int>();
    });

    test('initializes', () {
      expect(linkedList, isNotNull);
    });

    test('initial head is null', () {
      expect(linkedList.head, isNull);
    });

    test('initial length is 0', () {
      expect(linkedList.length, equals(0));
    });

    test('insert() adds a node', () {
      linkedList.insert(1);

      expect(linkedList.head?.data, equals(1));
    });

    test('insert() can add multiple nodes', () {
      linkedList.insert(2);
      linkedList.insert(3);
      linkedList.insert(4);

      expect(linkedList.length, equals(4));
    });

    test('removeNode() can remove head node', () {
      final node = Node<int>(1);

      linkedList.removeNode(node);

      expect(linkedList.length, equals(3));
    });

    test('removeNode() can remove node from anywhere', () {
      final node = Node<int>(3);

      linkedList.removeNode(node);

      expect(linkedList.length, equals(2));
    });
  });
}
