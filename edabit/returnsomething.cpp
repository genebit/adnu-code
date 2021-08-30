#include <iostream>

// Write a function that returns the string "something" 
// joined with a space " " and the given argument a.

// EXAMPLE:
//      giveMeSomething("is better than nothing") ➞ "something is better than nothing"
//      giveMeSomething("Bob Jane") ➞ "something Bob Jane"
//      giveMeSomething("something") ➞ "something something"

std::string giveMeSomething(std::string message)
{
    return "something " + message;
}

int main()
{
    std::string a = "Bob Jane";

    giveMeSomething(a);
    return 0;
}