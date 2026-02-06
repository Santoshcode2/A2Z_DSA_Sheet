Node*   sortLL(Node* head){
     int cnt0=0,cnt1=0,cnt2=0;
     Node* temp=head;
     while(temp!=NULL){
        if(temp->data==0) cnt0++;
        if(temp->data==1) cnt1++;
        if(temp->data==2) cnt2++;
        temp=temp->next;
     }
     temp=head;
     
         //replace the LL values
    while(temp!=NULL){
          if(cnt0){
            temp->data=0;
            cnt0--;
          }
         else if(cnt1){
            temp->data=1;
            cnt1--;
          }else{
            temp->data=2;
            cnt2--;
          }
          temp=temp->next;
    }return head;
        
}

