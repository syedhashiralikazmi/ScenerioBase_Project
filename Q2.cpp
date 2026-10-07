#include<iostream>

using namespace std;

int mains() {
	int packetID;
	int salt = 1337;
	int scale = 3;
	int blockSize = 256;

	cout << "Enter packet ID: ";
	cin >> packetID;

	packetID = packetID + salt;
	packetID = packetID * scale;
	int targetIndex = packetID % blockSize;

	cout << "========================================================\n";
	cout << "Here is your result after applying Salt & scalling\n";
	cout << "========================================================\n";
	cout << "\tTarget Index:" << targetIndex << endl;

	return 0;
}