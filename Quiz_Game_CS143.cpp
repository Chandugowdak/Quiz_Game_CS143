#include <bits/stdc++.h>
using namespace std;

// Function to display instructions
void instruction() {
    cout << "\n\n";
    cout << "          THE INSTRUCTION FOR THE QUIZ\n";
    cout << "          -------------!!--------------\n";
    cout << " 1 -> There Will Be 5 Questions.\n";
    cout << " 2 -> The Score Depends on Your Correct Answers.\n";
    cout << " 3 -> You Have Only One Chance per Question.\n";
    cout << " 4 -> Answers are Case-Insensitive, but spelling must be correct.\n";
    cout << " 5 -> If You Score 90% or More, You Will Be Rewarded with a Cash Prize.\n";
    cout << " 6 -> You Have Limited Time to Answer Each Question.\n";
    cout << " 7 -> Good Luck!\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

// Function to convert string to lowercase (for case-insensitive comparison)
string toLowerCase(string s) {
    transform(s.begin(), s.end(), s.begin(), ::tolower);
    return s;
}

// Function to ask questions and update the counter based on correct answers
void quotation(int &counter) {
    unordered_map<string, string> questions = {
        {"Who Is The No 1 Hacker in India?", "ankit"},
        {"Who Is The Youngest Hacker In India?", "onkar"},
        {"Who Is The Female Hacker In India?", "vandana"},
        {"Who Hacked NASA At Age 13?", "obrien"},
        {"Who Is The Father Of Cyber Security?", "bob"}
    };

    cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    cout << "        THE QUESTIONS ARE AS FOLLOWS\n";
    cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\n";

    for (auto &q : questions) {
        string answer;
        cout << " Q: " << q.first << "\n";
        cout << " * "; 
        cin >> answer;

        // Convert to lowercase for comparison
        if (toLowerCase(answer) == toLowerCase(q.second)) {
            counter++;
        }
    }

    cout << "\n\n";
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n";
    cout << "        RESULT IS ...........      \n";
    cout << "^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^\n\n";

    switch (counter) {
        case 0: cout << " THE RESULT IS 0\nSORRY, TRY AGAIN.\n"; break;
        case 1: cout << " THE RESULT IS 1\nBETTER LUCK NEXT TIME.\n"; break;
        case 2: cout << " THE RESULT IS 2\nGOOD, BUT YOU CAN DO BETTER.\n"; break;
        case 3: cout << " THE RESULT IS 3\nWELL DONE, BUT ALMOST THERE.\n"; break;
        case 4: cout << " THE RESULT IS 4\nGREAT JOB, ALMOST PERFECT!\n"; break;
        case 5: 
            cout << " THE RESULT IS 5\nCONGRATULATIONS, YOU WON THE QUIZ!\n";
            cout << " YOU WILL BE AWARDED A CASH PRIZE OF 50000\n";
            break;
        default: cout << " UNEXPECTED RESULT.\n"; break;
    }
}

// Main function
int main() {
    cout << "                                                   *#*#*#*#*#*#*#*#*#*#*#*#*#*#\n";
    cout << "                                                     Welcome to the Hacking Quiz\n";
    cout << "                                                   *#*#*#*#*#*#*#*#*#*#*#*#*#*#\n\n\n";

    // Call instruction function
    instruction();
    cout << "\n\n";

    // Initialize counter
    int counter = 0;

    // Call quotation function
    quotation(counter);

    return 0;
}
