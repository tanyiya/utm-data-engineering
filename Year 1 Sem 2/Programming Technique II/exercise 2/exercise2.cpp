// ? EXERCISE 2: CLASS AND OBJECT MANIPULATIONS

// Programming Technique II
// Semester 2, 2023/2024

// Section: 02
// Member 1's Name: TAN YI YA    Location: ____________ (i.e. where are you currently located)
// Member 2's Name: TEH RU QIAN  Location: ____________
//
// Date and time of pair programming sessions:
//   10/5/2024  (Date, time and estimate duration)
//   _________  (Date, time and estimate duration)
//
// Video link:
//   _________

// ? Notes: Choose the debug mode "Console Program" to run the program.

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#define MAX_SUBJECT_COUNT 10

class Subject
{
private:
	string name;
	string code;
	int score;

public:
	Subject();
	int credit() const;
	string grade() const;
	double point() const;
	void print() const;
	bool operator<(Subject&);
	
	friend void readUserInput(Subject subjects[], int &n);
    
};


//d. Define a regular function that determines the lower subject.
Subject lower(const Subject a, const Subject b)
{
    if (a < b) {
        return a;
    } else {
        return b;
    }
}

int main()
{
	Subject subjects[MAX_SUBJECT_COUNT];
	int n;
	double totalPoint=0, totalCredit=0;
	
	readUserInput(subjects, n);
	
	cout << endl
		 << endl
		 << "THE RESULT"
		 << endl
		 << endl;

	// Print the output table header
	cout << left << setw(15) << "Subject Code";
	cout << left << setw(30) << "Subject Name";
	cout << left << setw(10) << "Credit";
	cout << left << setw(10) << "Score";
	cout << left << setw(10) << "Grade";
	cout << left << setw(10) << "Point";
	cout << left << setw(10) << "Sub Total";
	cout << endl
		 << endl;

	//Print the subject data
	for (int i = 0; i < n; i++){
		subjects[i].print();
		cout << endl;
        totalPoint += subjects[i].credit() * subjects[i].point();
        totalCredit += subjects[i].credit();
	};
	
	cout << endl;
	cout << "TOTAL POINT  : " << totalPoint << endl;
	cout << "TOTAL CREDIT : " << totalCredit << endl;
	cout << "GPA          : " << totalPoint/totalCredit << setprecision(3) << endl;

	Subject lowestSubject = subjects[0];
    for (int i = 1; i < n; ++i) {
            lowestSubject = lower(lowestSubject, subjects[i]);
	 }

    cout << endl;
    cout << "LOWEST SUBJECT : " << endl;
    lowestSubject.print();
	cout << endl;

	system("pause");

	return 0;
}

// The definition of the default constructor is fully given
Subject::Subject() : name(""), code(""), score(0) {}

// The definition of the getter for the 'credit()' is fully given
int Subject::credit() const { return code[7] - '0'; }

// The definition of the getter for the 'grade()' is fully given
string Subject::grade() const
{
	if (score >= 90)
		return "A+";
	if (score >= 80)
		return "A";
	if (score >= 75)
		return "A-";
	if (score >= 70)
		return "B+";
	if (score >= 65)
		return "B";
	if (score >= 60)
		return "B-";
	if (score >= 55)
		return "C+";
	if (score >= 50)
		return "C";
	if (score >= 45)
		return "C-";
	if (score >= 40)
		return "D+";
	if (score >= 35)
		return "D";
	if (score >= 30)
		return "D-";
	return "E";
}

//a. Task 1 - method point() 
double Subject :: point() const {
	
	if (score >= 80)
		return 4.00;
	if (score >= 75)
		return 3.67;
	if (score >= 70)
		return 3.33;
	if (score >= 65)
		return 3.00;
	if (score >= 60)
		return 2.67;
	if (score >= 55)
		return 2.33;
	if (score >= 50)
		return 2.00;
	if (score >= 45)
		return 1.67;
	if (score >= 40)
		return 1.33;
	if (score >= 35)
		return 1.00;
	if (score >= 30)
		return 0.67;
	return 0.00;
	
}

//b. Task 2 - method print()
void Subject :: print() const {
	
	cout << left << setw(15) << code ;
	cout << left << setw(30) << name ;
	cout << left << setw(10) << credit() ;
	cout << left << setw(10) << score ;
	cout << left << setw(10) << grade() ;
	cout << left << setw(10) << fixed << setprecision(2) << point() ;
	cout << left << setw(10) << fixed << setprecision(2) << credit()*point() ;
	
} 

//c. Task 3 - operator <
bool Subject::operator<(Subject& subject1) {
	cout << "Comparing";
    return this->score < subject1.score;
}

// e. Task 5 - Define a friend function that read a list of subjects from user input
void readUserInput(Subject subjects[], int &n)
{	
	string code, name;
	int score;
	
	cout << "How many subjects do you want to enter? => ";
	cin >> n ;
	cout << endl;
	
	if (n <= MAX_SUBJECT_COUNT){
		
			for (int i = 0; i < n; i++){
			cout << "Enter info for subject #" << i + 1 << endl;
			cout << "Subject Code => ";
			cin >> subjects[i].code;
			cout << "Subject Name => ";
			cin.ignore();
			getline(cin, subjects[i].name);
			cout << "Score earned => ";
			cin >> subjects[i].score;
			cout << endl;
			}
	}
}
