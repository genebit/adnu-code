#include <iostream>

// Create a function that takes a number (step) 
// as an argument and returns the amount of boxes in that step of the sequence.
// https://edabit.com/challenge/Z9whynrGXuyRjiuK9

int boxSeq(int step) {
    // If step is divisible by 2 then increment else return step
    // Ternary operator: 
    //         x = (condition) ? (value_if_true) : (value_if_false);

    return step = (step % 2) ? step += 2 : step;
}