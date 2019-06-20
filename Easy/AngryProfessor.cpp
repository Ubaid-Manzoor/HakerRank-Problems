string angryProfessor(int k, vector<int> a) {
    int students_on_time = 0;
    for(int i = 0 ;i < a.size() ; i++){
        if(a[i] <= 0 ){
            students_on_time++;
        }
    }

    if(students_on_time >= k){
        return "NO";
    }else{
        return "YES";
    }

}
