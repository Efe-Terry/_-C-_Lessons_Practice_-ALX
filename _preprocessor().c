/*
* Macros: Is a symbol that gets replaced during compilation with a value
* # is a preprocessor directive
* #define is used to define macros -- tells the computer to replace what ever we define
* i.e -- #define PI 3.1444514626 -- during compilation PI is replaced by that value
* #ifndef -- if not defined --- a conditional
* #ifdef ----- if defined
*
*/

/*
* C also has some inbuilt predefined macros
* i.e
* _FILE_    : name of file being compiled
* _LINE_    : the current line being compiled
* _DATE_    : last date file was modified
* _TIME_    : last time file was modified
* _WIN32_   : defined on windows
*/

/*
* Header File Guard: removes duplicated source copies
* header guard helps ensure the included files aren't duplicated to avoid errors in the code
*
* using conditional macros to check if a file has been defined already
* #ifndef MYHEADER_H            : checks if the header is already defined
* #define MYHEADER_H            : this says if it isn't defined then define it in our code
* #endif
*/

/*
* function like macros: takes arguments and retains values
* #define MAX (a, b) ((a > (b) ? (a) : (b))
*/
