#include <iostream>
using namespace std;

// -------------- cout -----------------
// int main() {
//     int i =3;
// 	cout << "Hello world " << i << " daniel" << endl;
// 	return 0;
// }

//-------------- cin -----------------
// int main() {
//     int i;
//     double d;
//     char c[100];
//     cin >> i; // reading input as integer
//     cin >> d; // reading input as double
//     cin >> c; // reading input as c string (dangerous, should be avoided!)
// 	cout << "this is i: " << i <<  endl;
//     cout << "this is d: " << d <<  endl;
//     cout << "this is c: " << c <<  endl;
// 	return 0;
// }


//-------------- string -----------------
#include <string>
// using std::string;

// int main(){
//     string s = "So long";
//     string s2 = "and thanks for all the fish.";
//     string s3 = s + " " + s2;
//     s3[s3.size() - 1] = '!';

//     // string s_word_in , s_line_in;
//     // cin >> s_word_in; // read a single word
//     // getline(cin, s_line_in); // read until the end of the line

//     cout << endl << s3 << endl;
//     // cout << "s_word_in : " << s_word_in << endl;
//     // cout << "s_line_in : " << s_line_in << endl;
//     string s4 = "";
//     cout << "size of s4: " << s4.size() << endl;
//     return 0;
// }


//-------------- string exersize cat-----------------
// using std::string;

// int main() {
//     string s;
//     while (!cin.eof()) {
//         getline(cin, s);
//         cout << s << endl;
//     }
//     return 0;
// }

//-------------- argc argv exersize echo-----------------

// int main(int argc, char** argv) {
//     // for(char** ptr = argv; *ptr != NULL; ptr++) {
//     for (int i = 1; i < argc; i++) {
//         if (i != 1) {
//             cout << " ";
//         }
//         cout << argv[i];
//         // cout << *ptr << endl;
//     }
//     // cout << endl;
//     return 0;
// }


//-------------- struct-----------------
// #include <cmath>

// struct point {
// 	double x;
// 	double y;
// };

// struct date {
// 	int day;
// 	string month;
// 	int year;
// };

// struct person {
// 	char* name;
// 	struct date birth;
// };

// int main() {
//     point p;
//     p.x = 3.0;
//     p.y = 4;
//     double distance = sqrt(p.x * p.x + p.y * p.y);
//     cout << "first distance " << distance << endl;

//     point *p2 = new point();
//     (*p2).x = 5; // Must use parentheses, annoying
//     p2->y = 12;   // Same thing, only clearer
//     double distance2 = sqrt(p2->x * p2->x + p2->y * p2->y);
//     cout << "deconed distance " << distance2 << endl;
//     delete p2;
    
//     return 0;
// }
//------------------------------------------------------------------
    // date d = { 29, "NOV", 1947 };
    // cout << "d is: " << d.month << " " << d.day<< "th, "<< d.year << endl;
    // date d2 = d;
    // cout << "d2 is: " << d2.month << " " << d2.day<< "th, " << d2.year << endl;
    // d2.day = 30;
    // cout << "d is: " << d.month << " " << d.day<< "th, " << d.year << endl;
    // cout << "d2 is: " << d2.month << " " << d2.day<< "th," << d2.year << endl;
    // return 0;
// }


//-------------- linked list-----------------

#include <iostream>
using namespace std;

struct Node {
	int data;
	Node* next;
};

Node* createNode(int d) {
	Node* ptr = new Node();
    ptr->data = d;
	ptr->next = nullptr;
	return ptr;
}

void destroyList(Node* head) {
	while(head) {
		Node* toDelete = head;
		head = head->next;
		delete toDelete;
	}
}

// void destroyList(Node* head) {
//     if(!head){
//         return;
//     }
//     destroyList(head->next);
//     delete head;
// }

Node* insert(Node* head, int d) {
	Node* new_head = createNode(d);
	new_head->next = head;
	return new_head;
}

int main() {
	Node* head = nullptr;
	int input;
	while (cin >> input) {
		head = insert(head, input);
	}

	for(Node* ptr = head; ptr != nullptr; ptr = ptr->next){
		cout << ptr->data << endl;
	}

	destroyList(head);
	return 0;
}
