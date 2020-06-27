#include <iostream>
#include <string>

using namespace std;

string s = "Truong Duong Phong";
size_t stringLength = s.size();

char c[30];

int findIndex(char ch, int max){
    
    for (int i = 0; i< max; i++) {
    
        if(toupper(s[i]) == ch){
           
            return i;
            
        }
    }
    
    return -1;
    
}

int findCountOfChar(char ch){
    
    int total = 0;
    
    for(int i=0; i< stringLength; i++){
        
        
        
        if(toupper(s[i]) == ch){
            total ++;
            
        }
    }
    return total;
}

void sortArr(char *c, int max){
    
    // ta lan luot tu trai qua phai, roi lay gia tri do so sanh voi cac gia tri con lai, neu cai nao be hon thi doi cho

    
    for (int i=0; i< max; i++ ) {
       
        for(int j =0; j < max; j++){
            
            
            if(c[j] > c[i]){
                // doi cho
                const char tmp = c[i];
                c[i] = c[j];
                c[j] = tmp;
                
        
                
                
            }
            
            
        }
        
        
        
    }
}

int main(){
 
    
    int increment = 0;
    
    for (int i = 0; i <  stringLength; i++) {
        
        if(s[i] == 32){
            continue;
        }
        char ch = toupper(s[i]);
        
        int index = findIndex(ch, i);
        
        
        if(index == -1){
            // chua tung xuat hien
           
        
            c[increment] = ch;
            
            increment ++;
            
        }
    
      
        // sort array theo alphabet
        
        sortArr(c, increment);
        
        
        
        
    }
    
    
    for (int i =0; i<increment; i++) {
        
        int count = findCountOfChar(c[i]);
        cout << c[i] << ":"<< count <<"\n" ;
    }
    
    
    return 0;
}