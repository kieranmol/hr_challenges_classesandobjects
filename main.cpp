#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;


class Student {
  public:
        string first_name;
        int testScores;
    };

void input(int arr[5]) 
    {
        for(int i=0;i<5;i++)
            {   
                cout << "Input score #" << i+1 << ": ";
                cin >> arr[i];
                cout << "Score #" << i+1 << ":" << arr[i] << "\n\n";
            }
    }

int calculateTotalScore(int arr[5])
    {
        int totalScore = 0;
        
        for(int i=0;i<5;i++)
            {
                totalScore += arr[i];
            }
        cout << "The total score is: " << totalScore << "\n\n";
        return 0;
    }

int main()
{
    Student student_A;
    cin >> student_A.first_name;
    cout << "Student: " << student_A.first_name;
    cout << "\n";

    int scores[5];
    input(scores);
    
    calculateTotalScore(scores);
   
    cout << student_A.first_name << "'s scores are: ";
    for(int i=0;i<5;i++)
        {
            cout << scores[i] << " ";
        }
    cout << "\n\n";
    
	return 0;
}
