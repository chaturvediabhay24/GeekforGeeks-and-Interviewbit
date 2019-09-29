
    ListNode* one,* two;
    bool loop=0;
    one=A,two=A;
    while(one and two and two->next){
        one=one->next;
        two=two->next->next;
        if(one==two){
            loop=true;
            break;
        }
    }
    if(loop){
        one=A;
        while(one!=two){
            one=one->next;
            two=two->next;
        }
        return one;
    }
    return NULL;
