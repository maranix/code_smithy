import 'dart:math' show pow;

class ArmstrongNumbers {
  bool isArmstrongNumber(int number) {
    num sum = 0;
    int remain = 0, org = number;
    int len = number.toString().length;

    while (number != 0) {
      remain = number % 10;
      sum += pow(remain, len);
      number ~/= 10;
    }

    print(len);
    print(sum);
    return (sum == org);
  }
}
