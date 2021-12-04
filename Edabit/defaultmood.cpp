
// Create a function that takes in a current mood and 
// return a sentence in the following format: 
//      "Today, I am feeling {mood}". 
//      However, if no argument is passed, return "Today, I am feeling neutral".

std::string moodToday(std::string mood = "neutral") {
    return "Today, I am feeling " + mood;
}