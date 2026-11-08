#include <iostream>
#include <clocale>
#include <string>
using namespace std;
int main(){
    setlocale(LC_ALL,"ru_RU.UTF-8");
    cout << "Примечание: используйте для пробела символ '_' "<< endl;
    cout << "Введите предложение на английском языке:" << endl;
    string alfabet[27] = {"_","A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"};
    string sounds[27] = {" ","э","б","с","д","э","ф","г","","и","ж","к","л","м","н","о","п","к","р","с","т","у","в","у","кс","й","з"};
    string word;
    string transcription = "";
    cin >> word;
    cin.ignore();
    string final_string = "";
    string current_word = "";
    for (int i = 0; i <= word.length(); i++){
        if (i == word.length() || word[i] == '_'){
            if (current_word != ""){
                for (int m=0; m < current_word.length(); m++){
                    char letter = current_word[m];
                    bool found = false;        
                    for (int j = 0; j < 27 && !found; j++){
                        if (letter == alfabet[j][0]){
                            transcription += sounds[j];
                            found = true;
                        }
                    }
                }
               cout << current_word << " - " << transcription << " -> ";
                string user_choice;
                getline(cin, user_choice);
                if (user_choice.empty()){
                    final_string += transcription + " ";
                }
                else {
                    final_string += user_choice + " ";
                }
                current_word = "";
                transcription = "";
            } 
        }
        else {
            current_word += word[i];
        }
    }
    cout << "\n" << word << " -> " << final_string << endl;
    return 0;
}
