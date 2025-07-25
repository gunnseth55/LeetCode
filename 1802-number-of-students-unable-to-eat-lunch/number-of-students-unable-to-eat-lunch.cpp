class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {


        deque<int> student;
        for(int i:students){
            student.push_back(i);
        }
        stack<int> sw;
        for(int i=sandwiches.size()-1;i>=0;i--){
            sw.push(sandwiches[i]);
        }
        
           
            int y=0;
        while(!sw.empty() && y<students.size()){
            int x=sw.top();
            int st=student.front();
           
            if(x==st){
                student.pop_front();
               sw.pop();
               y=0;
          
            }
            else{
                student.pop_front();
                student.push_back(st);
               y++;
            }

        }
        return student.size();
    }
};