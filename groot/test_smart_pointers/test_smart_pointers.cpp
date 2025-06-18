#include <iostream>
#include <memory>

int sum(std::unique_ptr<int> arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr.get()[i];
    }
    return sum;
}

class A {
  public:
    static int M;
};

int main() {
    std::shared_ptr<int> P2(new int[10]);
    std::unique_ptr<int> P1(new int[10]);
    std::cout << A::M <<std::endl;
    //std::shared_ptr<int> P3 = move(P1);
    //std::unique_ptr<int> P5 = move(P3);
    //std::shared_ptr<int> P4 = P3;
    for (int i = 0; i < 10; i++) {
        P2.get()[i] = i;
        P1.get()[i] = i;
    }
    
    //std::cout << P4.use_count() << std::endl;
    //std::cout << sum(P1, 10);
}
