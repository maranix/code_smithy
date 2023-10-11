List<int> bubbleSort(List<int> items) {
  if (items.length <= 1) {
    return items;
  }

  final n = items.length;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (items[j].compareTo(items[j + 1]) > 0) {
        var tmp = items[j];
        items[j] = items[j + 1];
        items[j + 1] = tmp;
      }
    }
  }

  return items;
}
