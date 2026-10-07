//Mushfiqur Rahman

#include <iostream>
using namespace std;

int main() {
	int numExams= 0;

		cout << "How many exam scores?";
		cin >> numExams;

        while (numExams < 1 || numExams > 10) {
		cout << "Invalid number of exams" << endl;
        cout << "How many exam scores?";
        cin >> numExams;
		}
		
	double totalScore=0;
	int count=1;

	while (count <= numExams) {
		double score;
		cout << "Enter score " << count << ": ";
		cin >> score;

		while (score < 0 || score > 100) {
		    cout << "Invalid score. Enter score " << count << " again: ";
		    cin >> score;
		}

		totalScore += score;
		count++;
	}

	double average = totalScore / numExams;
	cout << "Average: " << average << endl;

	if (average >= 90) {
		cout << "Excellent" << endl;
	} else if (average >= 70) {
		cout << "Passing" << endl;
	}else {
		cout << "Needs improvement" << endl;
	}

	return 0;

}
