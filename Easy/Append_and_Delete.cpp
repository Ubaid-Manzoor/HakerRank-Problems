string appendAndDelete(string s, string t, int k) {
    // s - > t in k Steps
    string s_temp = s , t_temp = t;
    int steps;
     while(true){
         if(s_temp.size() > t_temp.size()){
             s_temp.pop_back();
         }else if (s_temp.size() == t_temp.size()){
             if(s_temp == t_temp){
                 steps = (s.size() - s_temp.size()) + (t.size() - s_temp.size()); 
                 if(s_temp.size() == 0){
                     steps += 1;
                 }
                 cout<<"Steps Needed"<<steps<<endl;
                 break;
             }else{
                 s_temp.pop_back();
                 t_temp.pop_back();
             }
         }else{
             if(t_temp.find(s_temp) != -1){
                 steps = t_temp.size() - s_temp.size();
                 cout << "Steps Needed" << steps << endl;
             }else{
                 steps = (s_temp.size() + 1) + t_temp.size();
                 cout << "Steps Needed" << steps << endl;
             }
             break;
         }
     }
     
    if(steps > k){
        if(steps - k == 1 && s.find(t) ==-1){
            return "Yes";
        }
        return "No";
    }else if(steps == k){
        return "Yes";
    }else{
        if((k - steps) % 2 == 0 && (k-steps)!=2*(t.size())){
            return "Yes";
        }else if((k-steps) == 2*(t.size())+1){
            return  "Yes";
        }else{
            while(steps > 0){
              steps -= 2 * (t.size()) + 1;
              if (steps >=0 && steps % 2 == 0) {
                return "Yes";
                }
            }
            return "No";
        }
    }
    return "Ye";
}
