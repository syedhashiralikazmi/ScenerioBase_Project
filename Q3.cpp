// @SAP id : 81024
// Syed Hashir Ali Kazmi

#include<iostream>
using namespace std;

int main() {
	float exfiltratedFileSize;	// taking size in MB
	float durationInSeconds;				
	float targetDatabaseSize;

	cout << "Enter exfiltrated file size in Megabytes(MB): ";
	cin >> exfiltratedFileSize;
	cout << "Enter total duration (in seconds): ";
	cin >> durationInSeconds;

	// Converting MB into Mb by multiplying fileSize by 8 then divide by seconds to find transfer rate
	//I use google for this transfer rate formula (search: file transfer rate formula for mbps) :)
	float transferRate = (exfiltratedFileSize * 8)/ durationInSeconds;
	cout <<"File transfer rate: "<<transferRate<<" Mbps\n\n";

	cout << "Enter the size of database in GigaBytes(GB): ";
	cin >> targetDatabaseSize;

	//Converting GB into Megabit
	float conversionGB_To_Mb = targetDatabaseSize * 1024 * 8;
	float estimatedTimeInSeconds = conversionGB_To_Mb / transferRate;
	float estimatedTimeInMinute = estimatedTimeInSeconds / transferRate;

	cout <<"===============================================\n";
	cout <<"Estimated Time (in seconds): "<<estimatedTimeInSeconds<<" sec"<<endl;
	cout <<"Estimated Time (in minutes): "<<estimatedTimeInMinute<<" min"<<endl;



	return 0;
}