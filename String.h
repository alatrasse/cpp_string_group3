#ifndef STRING_H
#define STRING_H

#include <cstddef> //for size_t

class String {
  private: 
  char* data_; 
  size_t size_; 
  size_t capacity_;
  int id; 

  void reserve(size_t new_capacity); //It is useful when we have to increase the capacity of dynamic array

  public:

  // Default constructor: 
  String(); 
  // Copy constructor:
  String (String& str_to_copy);
  // Constructor from c_string: 
  String (char* my_c_string);
  // Destructor: 
  ~String();
  // Get Id: 
  int getId(); 
  
  c_str();
  size();
  clear();
  
  
  size_t length() const;
  size_t max_size() const;
  void resize(size_t n, char c = '\0');

  capacity();
  empty();
  
  
  operator=(const char*);
  String& operator=(const String& other);
  operator=(char);
  
  operator+(const string&, const string&);
  friend String operator+(const string& lhs, char rhs); //It is a free function, I add friend to access the data members 
  operator+(const string&, const char*);

}; 

#endif 
