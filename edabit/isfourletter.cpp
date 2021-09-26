// Create a function that takes a vector (array) of strings. 
// Return all words in the vector (array) that are exactly four letters.
// SAMPLE OUTPUT:
//      isFourLetters(["Tomato", "Potato", "Pair"]) ➞ ["Pair"]
//      isFourLetters(["Kangaroo", "Bear", "Fox"]) ➞ ["Bear"]
//      isFourLetters(["Ryan", "Kieran", "Jason", "Matt"]) ➞ ["Ryan", "Matt"]

std::vector<std::string> isFourLetters(std::vector<std::string> arr) {
    std::vector<std::string> res;
    for (int i = 0; i < arr.size(); i++)
        if (arr[i].size()==4)
            res.push_back(arr[i]);
    return res;
}