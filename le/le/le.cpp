#include <iostream>
#define NAME_LENGTH 6
#define BIG_NUMBER 12
#define SMALL_NUMBER 1

bool both_true(bool array1[], bool array2[], int array_size) {
    for (int i = 0; i < array_size; i++) {
        if (array1[i] && array2[i]) {
            return true;
        }
    }
    return false;
}
void check() {
    char no = -1;
    if (no) {
        std::cout << "It worked !";
    } else {
        std::cout << "It didn’t work..";
    }
}

// line 2 does not compile becuse int c is in another block
// line 1 compile every time
void does_compile() {
    int a = 5;
    int b = 5;
    if (a > b) {
        a += 1; // (1)
        // int c = a;
    } else {
        b += 1;
    }
    // int d = c; // (2)
}

/// what will be printed?:
// 2-2 continue until break get to 3
// 3-3 in 3 print number
// 4-default wont feet to any of them and get to the default
// 1- 2 get in 1 add one to the number -> 2 then he will go to 2 and three(no break) and print

/// what will be printed?:
// 2-2 default, continue until break get to 3 and default
// 3-3 default, in 3 print number and continue until default
// 4-default, wont feet to any of them and get to the default
// 1- 2 default, get in 1 add one to the number -> 2 then he will go to 2 three and default(no break) and print

int get_wanted_number() {
    const int WANTED_NUMBER = 10;
    int num = 0;
    while (num != WANTED_NUMBER) {
        std::cout << "guess the number: ";
        std::cin >> num;
    }
    return num;
}
int main() {
    int i = 0;
    char name[NAME_LENGTH] = "eylon";
    std::cout << name << std::endl;
    for (i = 0; i < NAME_LENGTH; i++) {
        std::cout << name[i];
    }
    std::cout << std::endl;
    //////////////////////////////////////////////////////////////////////////////////////

    (SMALL_NUMBER > BIG_NUMBER) ? std::cout << "ERROR!\n" : std::cout << "Great!\n";

    // printed "it didnt work.." 0=false
    // need to make it any other value than 0 !0=true
    check();

    get_wanted_number();

    return 0;
}
