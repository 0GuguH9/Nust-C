namespace tests::basic

use std::io //finally a use!

def int Main() {
    Printf("%d\xxC3A1", Add(10, 10));

    return 0;
}

def int Add(int a, int b) {
    return a + b;
}
