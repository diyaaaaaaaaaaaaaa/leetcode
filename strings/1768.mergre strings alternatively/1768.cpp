#include<string>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int a=word1.size(), b=word2.size();
        string bigWord="";

        if (a==b) {
            for(int i=0;i<a;i++){
                bigWord.push_back(word1[i]);
                bigWord.push_back(word2[i]);
            }
        }

        else if (a>b){
            for(int i=0;i<b;i++){
                bigWord.push_back(word1[i]);
                bigWord.push_back(word2[i]);
            }
            string smolWord= word1.substr(b, a-b);
            bigWord= bigWord+ smolWord;
        }

        else{
            for(int i=0;i<a;i++){
                bigWord.push_back(word1[i]);
                bigWord.push_back(word2[i]);
            }
            string smolWord= word2.substr(a, b-a);
            bigWord= bigWord+ smolWord;
        }

        return bigWord;
    }
};