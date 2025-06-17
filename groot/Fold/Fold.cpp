#include <iostream>

#define STANDART_START 1
#define STANDART_END 10

void print_multiply_table(int start_value, int end_value);
void print_spaces(int highest_spcace_number, int result);
int digit_amount(int result);

int main() {
    print_multiply_table(STANDART_START, STANDART_END);
}

/* 
print the multiplication table from start_value to end_value

@param start_value [IN] the smallest multiplication value in the table
@param end_value [IN] the biggest multiplication value in the table
*/
void print_multiply_table(int start_value, int end_value) {
    int result = 0;
    // the largest number has the largest digit amount so he also have the largest needed space to print
    int highest_space_amount = digit_amount(end_value * end_value) + 1;

    for (int i = start_value; i <= end_value; i++) {
        for (int j = start_value; j <= end_value; j++) {
            result = i * j;
            std::cout << result;
            print_spaces(highest_space_amount, result);
        }
        std::cout << std::endl;
    }
}

/*
print padding spaces to have fixed print size to every num

@param highest_space_number [IN] the fixed space to every number(including spaces)
@param result [IN] the number you want to pad spaces in print
*/
void print_spaces(int highest_space_number, int result) {
    int space_taken = digit_amount(result);
    int space_amount = highest_space_number - space_taken;
    for (int i = 0; i < space_amount; i++) {
        std::cout << " ";
    }
}

/*
calculate the amount of digits -> amount of size used

@param result [IN] the number
@param return [OUT] the amount of spaces taken
*/
int digit_amount(int result) {
    int counter = 0;

    while (result > 0) {
        counter++;
        result /= 10;
    }
    return counter;
}
