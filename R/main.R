main <- function() {
  # NOTE: in R, the index starts with 1
  # NOTE: print() -> is for printing with \n
  #       cat()   -> similar to print() but does not contain a \n at end
  
  #---------------- STRING CONCATINATING  ----------------#
  a <- "Hello"
  b <- "World"
  string <- paste(a, b)
  string <- paste(a, b, sep = '_')
  print(string)
    
  #---------------- LOWER AND UPPER STRINGS ----------------#
  print(toupper("Hello World"))
  print(tolower("Hello World"))
  
  # Arrays
  arr <- c("Google", "Facebook", "Instagram", "Twitter")

  # For loop index
  for (index in 1:length(arr))
    print(arr[index])
  
  # For each loop
  for (element in arr)
    print(element)
  
  # Arithmetic Operations
  arithmetic <- (50 + 300 - 2) * 2
  division <- 10 / 2 # quotient(float form)
  quotient <- 10 %/% 2 # quotient(integer form)
  remainder <- 10 %% 3
  raised <- 2 ^ 2
}
main()
