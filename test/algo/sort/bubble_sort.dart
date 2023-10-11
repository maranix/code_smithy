import 'package:code_smithy/code_smithy.dart';
import 'package:test/test.dart';

void main() {
  group('Bubble Sort', () {
    const emptyList = <int>[];
    final sortedList = [1, 2, 3, 4, 5];
    final positiveIntegers = [5, 2, 9, 1, 5, 6];
    final negativeIntegers = [-5, -2, -9, -1, -5, -6];
    final mixedIntegers = [5, -2, 0, 1, -5, 6];

    test('Empty List', () {
      expect(bubbleSort(emptyList), []);
    });

    test('Already Sorted List', () {
      expect(bubbleSort(sortedList), [1, 2, 3, 4, 5]);
    });

    test('Positive Integers', () {
      expect(bubbleSort(positiveIntegers), [1, 2, 5, 5, 6, 9]);
    });

    test('Negative Integers', () {
      expect(bubbleSort(negativeIntegers), [-9, -6, -5, -5, -2, -1]);
    });

    test('Mixed Integers', () {
      expect(bubbleSort(mixedIntegers), [-5, -2, 0, 1, 5, 6]);
    });
  });
}
