/**
 * 
 * Linked List Header File for use
 * 
 */
//  Node class
 class Node{
     public:
     int val;
     Node* next;
     Node(){};
     Node(int data){
         val = data;
         next = NULL;
     }
 };
//  Node Insert Function
void insert(Node* &head, int data){
    if(head == NULL){
        std::cout<<"ATTENTION: Please Create Head Node First:\n";
    }else{
        Node* ptr = head;
        Node* newNode = new Node(data);
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = newNode;
        // std::cout<<"Inserted Succesfully!\n";
    }
}
// Display Function
void display(Node* head){
    Node* ptr = head;
    while(ptr->next){
        std::cout<<ptr->val<<" ---> ";
        ptr = ptr->next;
    }
    std::cout<<ptr->val<<std::endl;
}

int pop(Node* &head){
    if(head == NULL){
        // If there is no linked list found then it will -1 with Error LLI404 --> LinkedListInt 404(Not Found)
        std::cout<<"No Linked List Found!\n Pop Function Terminated with error LLI404\n";
        return -1;
    }else if(head->next == NULL){
        std::cout<<"Oops this linked list would be deleted!";
        return -1;
    }
    
    
    Node* ptr = head;
    while(ptr->next->next){
        ptr = ptr->next;
    }
    int getNum = ptr->next->val;
    Node* tmp = ptr->next;
    ptr->next = NULL;
    delete tmp;
    return getNum;
}


