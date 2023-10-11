import 'package:code_smithy/code_smithy.dart';
import 'package:test/test.dart';

void main() {
  group('insertion Sort', () {
    const emptyList = <int>[];
    final sortedList = [1, 2, 3, 4, 5];
    final positiveIntegers = [5, 2, 9, 1, 5, 6];
    final negativeIntegers = [-5, -2, -9, -1, -5, -6];
    final mixedIntegers = [5, -2, 0, 1, -5, 6];

    test('Empty List', () {
      insertionSort(emptyList);
      expect(emptyList, []);
    });

    test('Already Sorted List', () {
      insertionSort(sortedList);
      expect(sortedList, [1, 2, 3, 4, 5]);
    });

    test('Positive Integers', () {
      insertionSort(positiveIntegers);
      expect(positiveIntegers, [1, 2, 5, 5, 6, 9]);
    });

    test('Negative Integers', () {
      insertionSort(negativeIntegers);
      expect(negativeIntegers, [-9, -6, -5, -5, -2, -1]);
    });

    test('Mixed Integers', () {
      insertionSort(mixedIntegers);
      expect(mixedIntegers, [-5, -2, 0, 1, 5, 6]);
    });
  });
}
