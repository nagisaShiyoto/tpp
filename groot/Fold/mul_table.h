#pragma once

/*
print the multiplication table from start_value to end_value

@param startValue [IN] the smallest multiplication value in the table
@param endValue [IN] the biggest multiplication value in the table
*/
void printMultiplyTable(int start_value, int end_value);

/*
print padding spaces to have fixed print size to every num

@param highestSpaceNumber [IN] the fixed space to every number(including spaces)
@param result [IN] the number you want to pad spaces in print
*/
void printSpaces(int highest_spcace_number, int result);

/*
calculate the amount of digits -> amount of size used

@param result [IN] the number
@return [OUT] the amount of spaces taken
*/
int digitAmount(int result);