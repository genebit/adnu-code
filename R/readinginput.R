# READING INPUT

cat("Please Enter a Number: ")
# The number of inputs to read
NUM_INPUT <- 1
# example: enter a num: hello world -> only the word hello is read because counts as 1 input
x <- readLines(file("stdin"), NUM_INPUT)
cat(as.numeric(x))