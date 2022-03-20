# Declaring and Initializing a vector array
a <- c(1, 2, 3)
b <- c(4, 5, 6)
c <- c(7, 8, 9)
# Editing an element in an array
a[3] = 4

# Note vector index starts at 1
print(a[-1]) # Remove the 1st element in the list
print(a[-2]) # Remove the 2nd element in the list
print(a[-3]) # Remove the 3rd element in the list

array <- 1:10 # Store a range of integer from 1 to 10

# Vector slicing
array[2:6] # get only the elements from 2 to 6

# Naming Vectors
a <- c(1, 2, 3)
names(a) <- c("element 1", "element 2", "element 3")
print(a) # Display the vector "a"
print(a["element 2"]) # Access element through name

# Adding an element in an array
arr <- c(0, 1, 2, 3)
# SYNTAX: append(array, element_to_add, position/index) 
# by default it is positioned as the last element
arr <- append(arr, 4) # 0, 1, 2, 3, 4
arr <- append(arr, -1, 0) # -1, 0, 1, 2, 3