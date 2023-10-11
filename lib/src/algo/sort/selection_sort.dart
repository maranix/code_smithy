void selectionSort(List<int> items) {
  final n = items.length;

  for (int i = 0; i < n; i++) {
    var minIndex = i;

    for (int j = i; j < n; j++) {
      if (items.elementAt(j).compareTo(items[minIndex]) < 0) {
        minIndex = j;
      }
    }

    // Only swap if we've found a location with smaller value
    if (minIndex != i) {
      _swapIndexes(list: items, at: i, from: minIndex);
    }
  }
}

void _swapIndexes({
  required List<int> list,
  required int from,
  required int at,
}) {
  int tmp = list[from];
  list[from] = list.elementAt(at);
  list[at] = tmp;
}
