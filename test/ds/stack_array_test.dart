import 'package:code_smithy/src/ds/stack/stack.dart';
import 'package:test/test.dart';

void main() {
  group('Stack', () {
    group('Dynamic Array Implementation', () {
      late final Stack<int> stack;

      setUpAll(() {
        stack = Stack<int>.array();
      });

      test('initializes', () {
        expect(stack, isNotNull);
      });

      test('is of type StackArray<int>', () {
        expect(stack, isA<StackArray<int>>());
      });

      test('is not of type StackArray<String>', () {
        expect(stack, isNot(isA<StackArray<String>>()));
      });

      test('initial length is 0', () {
        expect(stack.length, equals(0));
      });

      test('push() method adds an element', () {
        stack.push(1);

        expect(stack.length, equals(1));
      });
      test('peek() method shows the top element', () {
        expect(stack.peek(), equals(1));
      });

      test('pop() method removes element from the top', () {
        expect(stack.pop(), equals(1));
        expect(stack.length, equals(0));
      });

      test('pop() method throws StateError, if the stack is empty', () {
        expect(() => stack.pop(), throwsStateError);
      });

      test('peek() method throws StateError, if the stack is empty', () {
        expect(() => stack.peek(), throwsStateError);
      });
    });
  });
}
