void insertionSort(List<int> items) {
  final n = items.length;

  for (int i = 0; i < n; i++) {
    for (int j = n - 1; j > i; j--) {
      if (items.elementAt(i).compareTo(items.elementAt(j)) > 0) {
        final tmp = items.elementAt(j);
        items[j] = items.elementAt(i);
        items[i] = tmp;
      }
    }
  }
}
