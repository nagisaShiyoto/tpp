#pragma once
class MyString {
  public:
    MyString();
    MyString(const char* newString);
    MyString(const MyString& newString);

    // clear string memory
    ~MyString();

    char* getString() const;
    size_t getSize() const;

    // concate two strings
    MyString operator+(const MyString& rightString) const;
    //adds string to my own
    MyString& operator+=(const MyString& rightString);

  private:
	char* m_string;
    size_t m_size;
};
