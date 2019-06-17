int pageCount(int n, int p) {
    int current_page = 1;
    int required_turns = 0;
    int required_once = 0;
    int page_turned = 0;
    int left_page , right_page;
    while(true){
        if(current_page < n){
          left_page = current_page + 1;
          current_page++;
        }
        if(current_page < n){
          right_page = current_page + 1;
          current_page++;
        }
        
        page_turned++;

        if (required_once ==0 && (left_page == p || right_page == p) ) {
          required_turns = page_turned;
          required_once = 1;
        }

        if(current_page == n){
            break;
        }
    }
    
    if(required_turns > (page_turned - required_turns)){
      required_turns = (page_turned - required_turns);
    }

    return required_turns;
}
