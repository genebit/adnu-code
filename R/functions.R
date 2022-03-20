# Functions
add <- function(a, b) { return(a + b) }
min <- function(a, b) { return(a - b) }
mul <- function(a, b) { return(a * b) }
div <- function(a, b) { return(a / b) }

seq <- function(a, b) { return(a:b) }
sum.range <- function(a) {
  sum = 0
  for (i in a) {
    sum = sum + i
  }
  return(sum)
}

a <- 10
b <- 20
results <- c(add(a, b), min(a, b), mul(a, b), div(a, b))
for (res in results) {
    print(res)
}