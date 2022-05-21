#include <iostream>

using namespace std;

void init() {
    freopen("../Input.txt", "r", stdin);
    freopen("../Output.txt", "w", stdout);
}

struct bday {
    int dayOfBirth;
    int monthOfBirth;
    int yearOfBirth;
};

class HeartRates {
public:
    explicit HeartRates(); 	// 1st constructor -- default
    explicit HeartRates(string, string, bday); // 2nd constructor initializes the data members

    void setFirstName(string); 	// sets the first name
    void setLastName(string);	// sets the surname
    void setDateOfBirth(bday);
    string getFirstName(); 	// gets the first name
    string getLastName(); 	// gets the surname
    bday getDateOfBirth();

    // function to calculate and return a persons age
    int getAge();

    // function to calculate max heart rate
    int getMaxiumumHeartRate(int);

    // function to calculate target heart rate
    void getTargetHeartRateRange(int);
    void displayHeartRates(int); // display function

private:
    const int CURRENT_YEAR = 2022;
    string firstName; 	// users first name
    string lastName; 	// users last name
    bday date;          //users birth date
};


// 1st constructor -- default
HeartRates::HeartRates() {
    //person's default name is John Doe
    //person's default birth date is January 1, 1901
    firstName = "John";
    lastName = "Doe";
    date.dayOfBirth = 1;
    date.monthOfBirth = 1;
    date.yearOfBirth = 1901;
}

// 2nd constructor initializes the data members
HeartRates::HeartRates(string firstname, string lastname, bday pdate) {
    setFirstName(firstname);	// sets the first name
    setLastName(lastname);	// sets the last name
    setDateOfBirth(pdate);		// sets the date of birth
}

// function to set the first name
void HeartRates::setFirstName(string firstname) {
    firstName = firstname;
}

// function to set the last name
void HeartRates::setLastName(string lastname) {
    lastName = lastname;
}

// function to set the date of birth
void HeartRates::setDateOfBirth(bday bdate) {
    date = bdate;
}

// function to get the first name
string HeartRates::getFirstName() {
    return firstName;
}

// function to get the last name
string HeartRates::getLastName() {
    return lastName;
}

// function to get the date of birth
bday HeartRates::getDateOfBirth() {
    return date;
}

// function to calculate and return a persons age
int HeartRates::getAge() {
    if (date.monthOfBirth <= 5) {
        return (CURRENT_YEAR - date.yearOfBirth);
    }
    return (CURRENT_YEAR - date.yearOfBirth)-1;
}

// function to calculate max heart rate
int HeartRates::getMaxiumumHeartRate(int age) {
    return 220 - age;
}

// function to calculate target heart rate
void HeartRates::getTargetHeartRateRange(int maxHR) {
    // Using the target heart rate range that is 50–85% 
    // of your target heart rate.
    int min = maxHR * 0.50;
    int max = maxHR * 0.85;
    cout << "Maximum Heart Rate: " << maxHR << " bpm" << endl;
    cout << "Target Heart Rate Range: " << min << "-" << max << " bpm" << endl;
}

// display function which includes person's info
void HeartRates::displayHeartRates(int age) {
    string months[12] = { "January", "February", "March", "April", "May", "June", 
                          "July", "August", "September", "October", "November", "December" 
                        };
    
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Birthdate: " << months[date.monthOfBirth-1] << " " << date.dayOfBirth << ", " << date.yearOfBirth << endl;
    cout << "Age: " << age << endl;
}

int main() {
    init();
    string firstName, lastName;
    bday bdate;

    // create a HeartRates class
    HeartRates heart;

    // read for the user's details
    getline(cin, firstName); // read in the first name. this can be modified to follow problem specs
    getline(cin, lastName); // read in the last name. this can be modified to follow problem specs
    cin >> bdate.monthOfBirth; // read in month
    cin >> bdate.dayOfBirth; // read in day
    cin >> bdate.yearOfBirth; // read in year    

    if (!(firstName.empty() || lastName.empty())) {
        heart.setFirstName(firstName);
        heart.setLastName(lastName);
        heart.setDateOfBirth(bdate);
    }

    int age = heart.getAge();
    int maxHR = heart.getMaxiumumHeartRate(age);

    // Output
    heart.displayHeartRates(age);
    heart.getTargetHeartRateRange(maxHR);
    
    return 0;
}
