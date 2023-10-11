import 'package:code_smithy/code_smithy.dart';
import 'package:test/test.dart';

void main() {
  group('Quick Sort', () {
    const emptyList = <int>[];
    final sortedList = [1, 2, 3, 4, 5];
    final positiveIntegers = [5, 2, 9, 1, 5, 6];
    final negativeIntegers = [-5, -2, -9, -1, -5, -6];
    final mixedIntegers = [5, -2, 0, 1, -5, 6];

    test('Empty List', () {
      quickSort(emptyList, 0, emptyList.length - 1);

      expect(emptyList, []);
    });

    test('Already Sorted List', () {
      quickSort(sortedList, 0, sortedList.length - 1);
      expect(sortedList, [1, 2, 3, 4, 5]);
    });

    test('Positive Integers', () {
      quickSort(positiveIntegers, 0, positiveIntegers.length - 1);
      expect(positiveIntegers, [1, 2, 5, 5, 6, 9]);
    });

    test('Negative Integers', () {
      quickSort(negativeIntegers, 0, negativeIntegers.length - 1);
      expect(negativeIntegers, [-9, -6, -5, -5, -2, -1]);
    });

    test('Mixed Integers', () {
      quickSort(mixedIntegers, 0, mixedIntegers.length - 1);
      expect(mixedIntegers, [-5, -2, 0, 1, 5, 6]);
    });
  });
}
