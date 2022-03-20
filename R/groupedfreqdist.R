library("dplyr") 

# Create a grouped frequency distrubution table
data = c(80, 80, 86, 90, 91, 60, 65, 76, 76, 98, 96, 91, 91, 86, 80, 91, 90, 87, 90, 76)
numOfClass = 7

# For Class boundary
deductLow = 0.5
deductHigh = 0.5

highestData = max(data)
lowestData = min(data)
range = (highestData - lowestData)

width = floor(round((range/numOfClass), 1))

# Class limit
classLimitLow = c()
classLimitHigh = c()

# Class Boundary
classBoundLow = c()
classBoundHigh = c()

# Create a temp to avoid changing the lowestData value
tmpLowData = lowestData
for (i in 1:numOfClass) {
    classLimitLow = append(classLimitLow, (tmpLowData + width))
    tmpLowData = tmpLowData + width

    highData = (tmpLowData + width) - 1
    classLimitHigh = append(classLimitHigh, highData)

    # Setting the class boundaries
    classBoundHigh = append(classBoundHigh, (classLimitHigh[i]) + deductLow)
    classBoundLow = append(classBoundLow, (classLimitLow[i]) - deductHigh)
}

classLimits = list(l_low=classLimitLow, l_high=classLimitHigh)
classBoundaries = list(b_low=classBoundLow, b_high=classBoundHigh)

# Tally and get the frequency
# initialize a vector based on number of class with a start val of 0 (to be incremented later)
frequency = c(1:numOfClass) 
frequency[1:numOfClass] = 0

for (i in 1:length(data))
    for (j in 1:numOfClass) # Check if the Data is in between the range
        if (between(data[i], classLimits[['l_low']][j], classLimits[['l_high']][j]))
            frequency[j] = frequency[j] + 1

# Output
data.frame(classLimits, classBoundaries, frequency)
cat("Total frequency: ")
cat(sum(frequency))
