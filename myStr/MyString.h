#pragma once
class MyString
{
private:
	char* str;
	int length;
public:

	MyString();
	MyString(int size);
	MyString(const char* InitString);
	MyString(const MyString& obj2);
	~MyString();
	void MyStrcpy(MyString& obj);
	bool MyStrStr(const char* subString);
	int MyChar(char symbol);
	int MyStrLen();
	void MyStrCat(MyString& q);
	void MyDelChr(char symbol);
	int MyStrCmp(MyString& q);
	void Print();
	void Input();
	MyString operator=(const MyString& obj);
	MyString operator[](int index);
	void operator()();
	MyString(MyString&& obj);
	MyString& operator=(MyString&& obj);
	MyString& operator+=(const char* addedText);
	MyString(initializer_list<char> a);
};


