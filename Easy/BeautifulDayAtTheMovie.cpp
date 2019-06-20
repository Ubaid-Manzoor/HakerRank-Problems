int reverse(int day){
    int temp = day;
    int reverse_day = 0;
    vector<int> numbers;
    while(temp != 0){
        numbers.insert(numbers.end() , temp%10);
        temp = temp/10;
    }
    int raise_to=numbers.size()-1;
    for(int i = 0 ; i < numbers.size() ; i++){
        if(i == 0 && numbers[i] == 0){
            raise_to--;
            continue;
        }else{
            reverse_day += numbers[i]*pow(10,raise_to);
            raise_to--;
        }
    }
    return reverse_day;
}

bool isBeautiful(int day , int k){
    int reverseDay = reverse(day);
    int diff = day - reverseDay;
    if(diff%k == 0){
        return true;
    }
    return false;
}

// Complete the beautifulDays function below.
int beautifulDays(int i, int j, int k) {
    int total_Bue_days = 0;
    for( ;i <= j ; i++ ){
        int day = i;
        if(isBeautiful(day , k)){
            total_Bue_days++;
        }
    }
    return total_Bue_days;
}
