
// Create a function that takes in an array (slot machine outcome) and 
// returns true if all elements in the array are identical, and false otherwise. 
// The array will contain 4 elements.
// SAMPLE OUTPUT:
//      testJackpot(["@", "@", "@", "@"]) ➞ true
//      testJackpot(["abc", "abc", "abc", "abc"]) ➞ true
//      testJackpot(["SS", "SS", "SS", "SS"]) ➞ true
//      testJackpot(["&&", "&", "&&&", "&&&&"]) ➞ false
//      testJackpot(["SS", "SS", "SS", "Ss"]) ➞ false

bool testJackpot(std::vector<std::string> result) {
    std::string toCheck = result[0];
    for (std::string i : result) {
        if (toCheck != i) {
            return false;
            break;
        }
    }
    return true;
}