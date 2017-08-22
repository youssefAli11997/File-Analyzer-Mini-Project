#include <bits/stdc++.h>
using namespace std;

int main(){
	// welcoming
	cout << "Welcome to File Analyzer" << endl;
	cout << "Just enter the full path of your file" << endl;

	// getting the path of the file
	string file_name;
	getline(cin, file_name);
	ifstream fin (file_name);
	
	// counting how many words, characters and lines are there
	string line, word;
	int line_counter = 0, word_counter = 0, char_counter = 0, line_length;
	while(getline(fin, line)){
		line_counter++;
		line_length = line.size();
		word = "";
		for(int i = 0; i < line_length; i++){
			if(line[i] != ' ' && line[i] != '\t'){
				word += line[i];
				char_counter++;
			}
			else{
				if(word != "")word_counter++;
				word = "";
				// comment the following line in order not to count spaces or tabs as characters
				char_counter++;
			}
		}
		// processing the last word
		if(word != ""){
			word_counter++;
		}
		// uncomment the following line to print the file contents to the terminal
		//cout << line << endl;
	}
	
	// outputting the final results
	cout << "lines : " << line_counter<<endl;
	cout << "words : " << word_counter<<endl;
	cout << "chars : " << char_counter<<endl;
	return 0;
}
