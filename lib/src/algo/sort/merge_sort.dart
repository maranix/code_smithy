List<int> mergeSort(List<int> items) {
  final n = items.length;

  if (n <= 1) {
    return items;
  }

  final mid = n ~/ 2;

  final left = mergeSort(items.getRange(0, mid).toList());
  final right = mergeSort(items.getRange(mid, n).toList());

  return _merge(left, right);
}

List<int> _merge(List<int> left, List<int> right) {
  final sorted = <int>[];

  int i = 0, j = 0;

  while (i < left.length && j < right.length) {
    if (left.elementAt(i).compareTo(right.elementAt(j)) < 0) {
      sorted.add(left.elementAt(i));
      i++;
    } else {
      sorted.add(right.elementAt(j));
      j++;
    }
  }

  while (i < left.length) {
    sorted.add(left.elementAt(i));
    i++;
  }

  while (j < right.length) {
    sorted.add(right.elementAt(j));
    j++;
  }

  return sorted;
}
