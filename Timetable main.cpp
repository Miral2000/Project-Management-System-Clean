#include <iostream>
using namespace std;


class Project {
public:
    char name[100];     // ÇÓã ÇáãÔÑæÚ
    char endDate[20];   // ÊÇÑíÎ ÇáÇäÊåÇÁ

    // ÏÇáÉ áŞÑÇÁÉ ÇÓã ÇáãÔÑæÚ æÊÇÑíÎ ÇáÇäÊåÇÁ
    void readProject() {
        cout << "Enter project name: ";
        cin.getline(name, 100);

        cout << "Enter project end date : ";
        cin.getline(endDate, 20);
    }

    // ÏÇáÉ ÚÑÖ ÇáãÔÑæÚ
    void displayProject() {
        cout << "Project: " << name << endl;
        cout << "End Date: " << endDate << endl;
    }
};

// ßáÇÓ Task (ãåãÉ) íÑË ãä ßáÇÓ Project
class Task : public Project {
public:
    char taskTitle[100];  // ÚäæÇä ÇáãåãÉ
    char task_enddate[20];  // ÊÇÑíÎ ÇäÊåÇÁ ÇáãåãÉ

    // ÏÇáÉ áŞÑÇÁÉ ÊİÇÕíá ÇáãåãÉ
    void readTask() {
        cout << "Enter task title: ";
        cin.getline(taskTitle, 100);

        cout << "Enter task end date: ";
        cin.getline(task_enddate, 20);
    }

    // ÏÇáÉ ÚÑÖ ÊİÇÕíá ÇáãåãÉ
    void displayTask() {
        cout << "Task: " << taskTitle << endl;
        cout << "Task end date: " << task_enddate << endl;
    }
};

int main() {
    int numProjects;

    cout << "Enter number of projects: ";
    cin >> numProjects;
    cin.ignore();

    // ÅäÔÇÁ ãÕİæİÉ ãä ÇáãÔÇÑíÚ
    Project pro[numProjects];

    // ŞÑÇÁÉ ÈíÇäÇÊ ÇáãÔÇÑíÚ
    for (int i = 0; i < numProjects; i++) {
        cout << "\nProject " << i + 1 << "\n";
        pro[i].readProject();
    }

    // ŞÑÇÁÉ ÇáãåÇã áßá ãÔÑæÚ
    for (int i = 0; i < numProjects; i++) {
        int numTasks;
        cout << "\nEnter number of tasks for project " << pro[i].name << ": ";
        cin >> numTasks;
        cin.ignore();

        // ÅäÔÇÁ ãÕİæİÉ ãä ÇáãåÇã áåĞÇ ÇáãÔÑæÚ
        Task tasks[numTasks];

        // ŞÑÇÁÉ ÈíÇäÇÊ ÇáãåÇã
        for (int j = 0; j < numTasks; j++) {
            cout << "\nTask " << j + 1 << " for project " << pro[i].name << ":\n";
            tasks[j].readTask();
        }

        // ÚÑÖ ÊİÇÕíá ÇáãÔÑæÚ
        cout << "\nProject " << pro[i].name << ":\n";
        pro[i].displayProject();

        // ÚÑÖ ÊİÇÕíá ÇáãåÇã ÇáÎÇÕÉ ÈÇáãÔÑæÚ
        for (int j = 0; j < numTasks; j++) {
            tasks[j].displayTask();
        }
    }

    return 0;
}

