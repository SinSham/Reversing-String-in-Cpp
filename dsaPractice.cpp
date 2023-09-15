#include <iostream>

using namespace std;

int getLength(char word[]){
    int count=0;
    for(int i=0; word[i]!='\0'; i++){
        count++;
    }
    
    return count;
}

void swap(char word[], int i, int j){
    char temp = word[i];
    word[i] = word[j];
    word[j] = temp;
}

void reverseString(char word[]){
    int n=getLength(word);
    int s=0;
    int e=n-1;
    while(s<=e){
        swap(word, s, e);
        s++;
        e--;
    }
}

int main()
{
    char word[20];
    cin>>word;
    reverseString(word);
    cout<<"Reversed Word is : "<<word;

    return 0;
}
