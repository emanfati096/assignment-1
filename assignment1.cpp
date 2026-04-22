#include<iostream>
#include<fstream>
using namespace std; 
void inputarray(int arr[],int size){
	cout<<"enter"<<size<<"number"<<endl;
	for(int i=0;i<size;i++){
		cout<<"element"<<i<<":";
		cin>>arr[i];
	}
}
void displayarray(int arr[],int size){
	cout<<"\n array elements are:"<<endl;
	for(int i=0;i<size;i++){
		cout<<"element"<<i<<":"<<arr[i]<<endl;
			}
}
int calculatesum(int arr[],int size){
	 int sum=0;
	for(int i=0;i<size;i++){
		sum=sum+arr[i];
	}
	return sum;
}
void writeToFile(int arr[],int size,string filename ){
	ofstream outfile("data.txt");
	if(!outfile){
		for(int i=0;i<size;i++){
			outfile<<arr[i]<<endl;
		}
		outfile.close();
		cout<<"\narray saved to data.txt successfully"<<endl;
		return;
	}
	else{
		cout<<"invalide data"<<endl;
	}
}
void readfromread(int arr[],int size,string filename){
	ifstream infile("data.txt");
	if(!infile){
		int i=0;
		while(i<size&&infile>>arr[i]){
			i++;
		}
		cout<<"error could not found"<<endl;
		return;
	}
	else{
		cout<<"invalide data"<<endl;
	}
}
 int main()
{
	int arr[10];
	string filename="array_data.text";
	int size=10;
	inputarray(arr,size);
	displayarray(arr,size);
	int total=calculatesum(arr,size);
	cout<<"\nsum of all elements="<<total<<endl;
	writeToFile(arr,size,filename);
	readfromread(arr,size,filename);
 return 0;
}

