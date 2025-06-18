#include "MyString.h"
#include <string.h>
#pragma warning(disable : 4996)
MyString::MyString() {
    this->m_string = new char[1];
    this->m_string[0] = NULL;
    this->m_size = 1;
}

MyString::MyString(const char* newString) {
    this->m_size = strlen(newString) + 1;
    this->m_string = new char[this->m_size];
    strcpy(m_string, newString);
}

MyString::MyString(const MyString& newString) : MyString(newString.getString()) {
    // clear block code
}

MyString::~MyString() {
    delete[] this->m_string;
}

char* MyString::getString() const {
    return this->m_string;
}

size_t MyString::getSize() const {
    return this->m_size;
}

MyString MyString::operator+(const MyString& rightString) const {
    MyString myNewString = *this;
    myNewString += rightString;

    return myNewString;
}

MyString& MyString::operator+=(const MyString& rightString) {
    this->m_size += rightString.getSize();
    char* newString = new char[this->m_size];
    strcpy(newString, this->getString());
    strcat(newString, rightString.getString());

    delete[] this->m_string;
    this->m_string = newString;
    return *this;
}
