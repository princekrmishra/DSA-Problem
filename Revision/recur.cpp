#include <iostream>
#include <vector>
#include <string>
using namespace std;
class ToDoList {
    private:    
    vector<string> tasks;
    public:    
    void addTask(string task) {        
        tasks.push_back(task);    
        }    
        void removeTask(string task) {        
            for (int i = 0; i < tasks.size(); i++) {            
                if (tasks[i] == task) {                
                    tasks.erase(tasks.begin() + i);                
                    break;            
                    }        
                    }    
                    }    
                    void printTasks() {        
                        cout << "To-Do List:" << endl;
