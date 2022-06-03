#include <iostream>

template <class T>

class Node{
	public:
		Node():next(nullptr){	
		};
		Node(T t):data(t),next(nullptr){
		};
		T data;
		Node<T> *next;
};

template <class T>

class List{
	public:
		List():head(nullptr){
			
		};
		List(T *arr, int n){
			head=new Node<T>(arr[0]);
			Node<T>* currItem=head;
			for(int i=1;i<n;i++){
				Node<T>* item= new Node<T>(arr[i]);
				currItem->next=item;
				currItem=currItem->next;
				}		
			}
		~List(){
			if(head!=nullptr){
				Node<T>* currItem=head;
				while(currItem!=head){
					while(currItem->next!=nullptr){
						currItem=currItem->next;
					}
					delete currItem;
				}
				delete currItem;
				
				head=nullptr;
			}
		}
		
		List<T>& operator=(const List<T>& rhs){
			if(head!=nullptr){
				Node<T>* currItem=head;
				while(currItem!=head){
					while(currItem->next!=nullptr){
						currItem=currItem->next;
					}
					delete currItem;
				}
				delete currItem;
				
				head=nullptr;
			}
			Node<T>* currItemR=rhs.head;
			for(int i=0; i<rhs.size();i++){
				push_back(currItemR->data);
				currItemR=currItemR->next;
			}
			return *this;

		}
		int size() const{
			int sizeNum=0;
			if(head==nullptr){
				sizeNum;
			}
			else{
				Node<T>* currItem=head;
				while(currItem->next !=nullptr){
					sizeNum++;
					currItem=currItem->next;
				}
				sizeNum++;
			}
			return sizeNum;
		}
		
		void insert_at(int idx, T& data){
			if(idx+1>size()){}
			else if(idx==0){
				head=new Node<T>(data);
			}
			else{
				Node<T>* currItem =head;
				Node<T>* item =new Node<T>(data);
				for(int i=0;i<idx-1;i++){
					currItem=currItem->next;
				}
				Node<T>* idxNext=currItem->next;
				currItem->next=item;
				item->next=idxNext;
			}
		}
		void remove_at(int idx){
			if(idx+1>size()){}
			else if(idx==0){
				head=head->next;
			}
			else{
				Node<T>* currItem=head;
				for(int i=0;i<idx-1;i++){
					currItem=currItem->next;
				}
				Node<T>* idxNext=(currItem->next)->next;
				delete currItem->next;
				currItem->next=idxNext;
			}
		}
		void push_back(T& data){
			if(head==nullptr){
				head=new Node<T>(data);
			}
				else{
					Node<T>* currItem=head;
					Node<T>* item=new Node<T>(data);
					while(currItem->next!=nullptr){
						currItem=currItem->next;
					}
					currItem->next=item;
				}
			}
		void pop_back(){
			if(size()==0){}
			else if(size()==1){
				delete head;
				head=nullptr;
			}
			else{
				Node<T>* currItem=head;
				while((currItem->next)->next!=nullptr){
					currItem=currItem->next;
				}
				delete currItem->next;
				currItem->next=nullptr;
			}
		}
		void push_front(T& data){
			if(head==nullptr){
				head=new Node<T>(data);
			}
			else{
				Node<T>* headCopy=new Node<T>(head->data);
				Node<T>* headNext=head->next;
				delete head;
				head=new Node<T>(data);
				head->next=headCopy;
				headCopy->next=headNext;
			}
		}
		void pop_front(){
			if(size()==0){}
			else if(size()==1) pop_back();
			else{
				Node<T>* headNext=head->next;
				delete head;
				head= headNext;
			}
		}
		
		friend std::ostream& operator<<(std::ostream& out, const List<T>& rhs){
			Node<T>* currItem=rhs.head;
			for(int i=0;i<rhs.size();i++){
				out<<currItem->data;
				if(currItem->next!=nullptr) out<<", ";
				currItem=currItem->next;
			}
			return out;
		}
		private:
			Node<T> *head;
};
