void method1() {

}

void method2() {
  int local = 1;
}

void method3() {
  int x;
  int y;
  int z;

  x = y + z;
}

void method4() {
  int x;
  {
    int y;
  }
}

void method5(int x) {
  while (x < 1) {
    x += 1;
  }
}