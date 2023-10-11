import 'package:code_smithy/code_smithy.dart';
import 'package:test/test.dart';

void main() {
  group('Selection Sort', () {
    const emptyList = <int>[];
    final sortedList = [1, 2, 3, 4, 5];
    final positiveIntegers = [5, 2, 9, 1, 5, 6];
    final negativeIntegers = [-5, -2, -9, -1, -5, -6];
    final mixedIntegers = [5, -2, 0, 1, -5, 6];

    test('Empty List', () {
      selectionSort(emptyList);
      expect(emptyList, []);
    });

    test('Already Sorted List', () {
      selectionSort(sortedList);
      expect(sortedList, [1, 2, 3, 4, 5]);
    });

    test('Positive Integers', () {
      selectionSort(positiveIntegers);
      expect(positiveIntegers, [1, 2, 5, 5, 6, 9]);
    });

    test('Negative Integers', () {
      selectionSort(negativeIntegers);
      expect(negativeIntegers, [-9, -6, -5, -5, -2, -1]);
    });

    test('Mixed Integers', () {
      selectionSort(mixedIntegers);
      expect(mixedIntegers, [-5, -2, 0, 1, 5, 6]);
    });
  });
}
