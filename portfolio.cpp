#include <iostream>
#include <string>

using namespace std;

void showAboutMe() {
    cout << "\n===== ABOUT ME =====\n";
    cout << "Name: R.LAKSHMIPRABHA\n";
    cout << "Profession: Software Developer\n";
    cout << "Skills: C++, Python, Web Development\n";
    cout << "Bio: Passionate about coding and creating innovative solutions.\n";
}

void showProjects() {
    cout << "\n===== PROJECTS =====\n";
    cout << "1. Calculator App - A simple arithmetic calculator.\n";
    cout << "2. Portfolio Website - Showcasing skills and projects.\n";
    cout << "3. To-Do List App - A basic task manager using C++.\n";
}

void showContact() {
    cout << "\n===== CONTACT =====\n";
    cout << "Email: ABC.email@example.com\n";
    cout << "GitHub: github.com/ABCdef\n";
    cout << "LinkedIn: linkedin.com/in/abcDEF\n";
}

int main() {
    int choice;

    while (true) {
        cout << "\n====== PORTFOLIO MENU ======\n";
        cout << "1. About Me\n";
        cout << "2. Projects\n";
        cout << "3. Contact\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                showAboutMe();
                break;
            case 2:
                showProjects();
                break;
            case 3:
                showContact();
                break;
            case 4:
                cout << "\nThank you for visiting my portfolio!\n";
                return 0;
            default:
                cout << "\nInvalid choice. Please select a valid option.\n";
        }
    }

    return 0;
}
