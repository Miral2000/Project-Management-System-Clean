#include <iostream>
using namespace std;


class Project {
public:
    char name[100];     // ��� �������
    char endDate[20];   // ����� ��������

    // ���� ������ ��� ������� ������ ��������
    void readProject() {
        cout << "Enter project name: ";
        cin.getline(name, 100);

        cout << "Enter project end date : ";
        cin.getline(endDate, 20);
    }

    // ���� ��� �������
    void displayProject() {
        cout << "Project: " << name << endl;
        cout << "End Date: " << endDate << endl;
    }
};

// ���� Task (����) ��� �� ���� Project
class Task : public Project {
public:
    char taskTitle[100];  // ����� ������
    char task_enddate[20];  // ����� ������ ������

    // ���� ������ ������ ������
    void readTask() {
        cout << "Enter task title: ";
        cin.getline(taskTitle, 100);

        cout << "Enter task end date: ";
        cin.getline(task_enddate, 20);
    }

    // ���� ��� ������ ������
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

    // ����� ������ �� ��������
    Project pro[numProjects];

    // ����� ������ ��������
    for (int i = 0; i < numProjects; i++) {
        cout << "\nProject " << i + 1 << "\n";
        pro[i].readProject();
    }

    // ����� ������ ��� �����
    for (int i = 0; i < numProjects; i++) {
        int numTasks;
        cout << "\nEnter number of tasks for project " << pro[i].name << ": ";
        cin >> numTasks;
        cin.ignore();

        // ����� ������ �� ������ ���� �������
        Task tasks[numTasks];

        // ����� ������ ������
        for (int j = 0; j < numTasks; j++) {
            cout << "\nTask " << j + 1 << " for project " << pro[i].name << ":\n";
            tasks[j].readTask();
        }

        // ��� ������ �������
        cout << "\nProject " << pro[i].name << ":\n";
        pro[i].displayProject();

        // ��� ������ ������ ������ ��������
        for (int j = 0; j < numTasks; j++) {
            tasks[j].displayTask();
        }
    }

    return 0;
}

