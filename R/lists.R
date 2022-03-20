# Initialize vectors
num <- c(0, 1, 2)
food <- c("Carbonara", "Spaghetti", "Pizza", "Hotdog")
languages <- c("C", "C++", "C#", "Java", "Javascript", "Python")

# Declare and initialize the arrays (compile to a list)
c_list <- list(num, food, languages)
c_list[1:2] # slice c_list elements from 1 (num) to 2 (food)

# List slice
print(c_list[c(1, 3)]) # print only 1 (num) and 3 (languages) 

# Appending to a list
c_list[[1]] <- append(c_list[[1]], 3) # c_list[[1]] = num add 3 to the last element

# Editing a list element
c_list[[1]][2] = 100 # get the 1st element in the list (num) and update the value of the 2nd element in the row

# Naming a list
c_list <- list(numbers=num, foods=food, languages=languages)
print(c_list["numbers"])
print(c_list["foods"])
print(c_list["languages"])

# Attach to R search path
attach(c_list)

print(numbers) # Just call the names of the elements in the list
print(foods)
print(languages)

detach(c_list) # Make sure to detach after for cleanup