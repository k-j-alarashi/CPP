#include<iostream>
using namespace std;

// Global Arrays
int id[100];
string name[100];
int age[100];
string major[100];
int studentCount = 0; // Global variable to keep track of the number of students

void addStudent(int studentsNum) {
    for (int i = 0; i < studentsNum; i++) {
        cout << "\n===================\n";
        cout << "Enter ID    : ";
        cin >> id[studentCount];
        cout << "Enter Name  : ";
        cin >> name[studentCount];
        cout << "Enter Age   : ";
        cin >> age[studentCount];
        cout << "Enter Major : ";
        cin >> major[studentCount];
        studentCount++; // Increment the count of students
        cout << "\n\nStudent is Added ...\n\n";
        cout << "\n===================\n";
    }
    system("pause");
}

void display() {
    if (studentCount > 0) {
        for (int i = 0; i < studentCount; i++) {
            cout << "\n===================\n";
            cout << "Student " << i + 1 << endl;
            cout << "-----------\n";
            cout << "ID       : " << id[i] << endl;
            cout << "NAME     : " << name[i] << endl;
            cout << "AGE      : " << age[i] << endl;
            cout << "Major    : " << major[i] << endl;
            cout << "\n===================\n";
        }
    } else {
        cout << "No students to display.\n";
    }
    system("pause");
}

void update(int idSearch) {
    for (int i = 0; i < studentCount; i++) {
        if (id[i] == idSearch) {
            cout << "\n===================\n";
            cout << "Enter ID    : ";
            cin >> id[i];
            cout << "Enter Name  : ";
            cin >> name[i];
            cout << "Enter Age   : ";
            cin >> age[i];
            cout << "Enter Major : ";
            cin >> major[i];
            cout << "Data is Updated ...";
            cout << "\n===================\n";
            return; // Exit after updating
        }
    }
    cout << "The Student not Found ...!\n\n";
    system("pause");
}

void search(int idSearch) {
    for (int i = 0; i < studentCount; i++) {
        if (id[i] == idSearch) {
            cout << "\n===================\n";
            cout << "The Student Was Found ...\n";
            cout << "-----------\n";
            cout << "ID       : " << id[i] << endl;
            cout << "NAME     : " << name[i] << endl;
            cout << "AGE      : " << age[i] << endl;
            cout << "Major    : " << major[i] << endl;
            cout << "\n===================\n";
            return; // Exit after finding
        }
    }
    cout << "The Student not Found ...!\n\n";
    system("pause");
}

void remove(int idSearch) {
    for (int i = 0; i < studentCount; i++) {
        if (id[i] == idSearch) {
            id[i] = 0;
            name[i] = "";
            age[i] = 0;
            major[i] = "";
            cout << "The Student Was removed ...";
            break;
        }
    }
    cout << "The Student not Found ...!\n\n";
    system("pause");
}


main(){
	int choice ;
	while(true){
		system("cls");
		cout<<"\t\t\t\t\t\tStudent Managment System.\n\n";
		cout<<"1 ) add student.\n2 ) display all students.\n3 ) update.\n4 ) search.\n5 ) remove.\n6 ) Exit.";
		cout<<"\n\t\t\t\t\t\t  Enter Your Choice : ";
		cin>>choice;
		if(choice==1){
			int sn ; // for students number
			cout<<"Enter The Number of Students You Want to Add : ";
			cin>>sn;
			addStudent(sn);
		}
		if(choice==2){
			display();
		}
		if(choice==3){
			int searchID ;
			cout<<"Enter Id for student to update : ";
			cin>>searchID;
			update(searchID);
		}
		if(choice==4){
			int searchID ;
			cout<<"Enter Id for student to search : ";
			cin>>searchID;
			search(searchID);
		}
		if(choice==5){
			int searchID ;
			cout<<"Enter Id for student to Remove : ";
			cin>>searchID;
			remove(searchID);
		}
		if(choice==6){
			break;
		}
	}
}