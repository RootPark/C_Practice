template <class T>
class MyContainer{
	public:
		MyContainer(){
			this->obj_arr=nullptr;
			this->n_elements=0;
		}
		MyContainer(int n){
			this->obj_arr= new T[n];
			this->n_elements=0;
		}
		~MyContainer(){
			delete[] this->obj_arr;
		}
		
		void clear(){
			this->n_elements=0;
		}
		int size() const{
			return n_elements;
		}
	protected:
		T* obj_arr;
		int n_elements;
};

template <class T>
class MyVector :public MyContainer<T>{
	public:
		MyVector():MyContainer<T>(){
			capacity=0;
		}
		MyVector(int n):MyContainer<T>(n){
			capacity=n;
		}
		
		MyVector<T>& operator= (const MyVector<T>& rhs){
			MyVector<T> return_vec = MyVector<T>(rhs.capacity);
			
			for(int i=0;i<return_vec.size();i++){
				return_vec.obj_arr[i]=rhs.obj_arr[i];
			}
			return return_vec;
		}
		
		bool empty() const{
			if(this->n_elements==0){
				return true;
			}
		}
		int max_size() const{
			return capacity;
		}
		
		void reserve(int new_cap){
			T* return_arr =new T[this->capacity];
			for(int i=0; i<this->capacity;i++){
				return_arr[i]=this->obj_arr[i];
			}
			delete[] this->obj_arr;
			this->obj_arr=new T[new_cap];
			
			for(int i=0;i<this->capacity; i++){
				this->obj_arr[i]=return_arr[i];
			}
			capacity=new_cap;
			delete[] return_arr;
		}
		void push_back(T obj){
			int max=1;
			if(max<2*capacity){
				max=2*capacity;
			}
			if(capacity==this->n_elements){
				reserve(max);
			}
			this->obj_arr[this->n_elements]=obj;
			this->n_elements++;
		}
		void pop_back(){
			this->n_elements--;
		}
		T& front(){
			return this->obj_arr[0];
		}
		T& back(){
			return this->obj_arr[this->n_elements-1];
		}
		T& at(const int idx){
			return this->obj_arr[idx];
		}
		const T& at(const int idx)const{
			return this->obj_arr[idx];
		}
		T& operator[] (const int idx){
			return this->obj_arr[idx];
		}
		const T& operator[] (const int idx)const{
			return this->obj_arr[idx];
		}
		
		MyVector<T> operator+(const MyVector<T>& rhs){
			MyVector<T> return_vec=MyVector<T>(this->capacity+rhs.capacity);
			return_vec.n_elements=this->n_elements+rhs.n_elements;
			for(int i=0; i<this->n_elements;i++){
				return_vec.obj_arr[i]=this->obj_arr[i];
			}
			for(int i=0; i<rhs.n_elements;i++){
				return_vec.obj_arr[i+this->n_elements]=rhs.obj_arr[i];
			}
			return return_vec;
		}
	private:
		int capacity;
};