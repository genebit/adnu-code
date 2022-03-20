# Create a matrix with 2 rows and 2 columns
A = matrix(c(0, 1, 2, 3), nrow=2, ncol=2, byrow=TRUE)
B = matrix(c(4, 5, 6, 7), nrow=2, ncol=2, byrow=TRUE)

# print(A) # print the whole array
# print(A[1, 2])
# print(A + B)

# Combine A and B
cbind(A, B)
