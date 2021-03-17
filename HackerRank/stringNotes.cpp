// 1. getline() :- This function is used to store a stream of characters as entered by the user in the object memory.

// 2. push_back() :- This function is used to input a character at the end of the string.

// 3. pop_back() :- Introduced from C++11(for strings), this function is used to delete the last character from the string.

// 4. capacity() :- This function returns the capacity allocated to the string, which can be equal to or more than the size of the string. Additional space is allocated so that when the new characters are added to the string, the operations can be done efficiently.

// 5. resize() :- This function changes the size of string, the size can be increased or decreased.

// 6.length():-This function finds the length of the string

// 7.shrink_to_fit() :- This function decreases the capacity of the string and makes it equal to the minimum capacity of the string. This operation is useful to save additional memory if we are sure that no further addition of characters have to be made.

// 8. begin() :- This function returns an iterator to beginning of the string.

// 9. end() :- This function returns an iterator to end of the string.

// 10. rbegin() :- This function returns a reverse iterator pointing at the end of string.

// 11. rend() :- This function returns a reverse iterator pointing at beginning of string.

// 12. copy(“char array”, len, pos) :- This function copies the substring in target character array mentioned in its arguments. It takes 3 arguments, target char array, length to be copied and starting position in string to start copying.

// 13. swap() :- This function swaps one string with other.

// 14. stringstream() : This is an easy way to convert strings of digits into ints, floats or doubles.
// #include <iostream> 
// #include <sstream> 
// using namespace std; 
  
// int main() 
// { 
//     string s = "12345"; 
  
//     // object from the class stringstream 
//     stringstream geek(s); 
  
//     // The object has the value 12345 and stream 
//     // it to the integer x 
//     int x = 0; 
//     geek >> x; 
  
//     // Now the variable x holds the value 12345 
//     cout << "Value of x : " << x; 
  
//     return 0; 
// }

// 15. string& string ::erase (iterator beg, iterator end) :- Erases all characters of the range [beg, end)