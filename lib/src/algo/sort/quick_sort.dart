void quickSort(List<int> items, int start, int end) {
  if (start < end) {
    final pivotIdx = _partition(items, start, end);
    quickSort(items, start, pivotIdx);
    quickSort(items, pivotIdx + 1, end);
  }
}

int _partition(List<int> items, int start, int end) {
  var pivot = items[start];

  var left = start;
  var right = end;

  while (left <= right) {
    while (items.elementAt(left) < pivot) {
      left++;
    }

    while (items.elementAt(right) > pivot) {
      right--;
    }

    if (left <= right) {
      int temp = items[left];
      items[left] = items[right];
      items[right] = temp;
      left++;
      right--;
    }
  }

  return left - 1;
}
