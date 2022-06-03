template<class T>

class My_shared_ptr{
	public:
		My_shared_ptr(): m_obj(nullptr), count(nullptr){}
		My_shared_ptr(T *obj): m_obj(obj){
			count = new int(1);
		}
		My_shared_ptr(const My_shared_ptr& rhs){
			
			if(m_obj != nullptr) delete m_obj;
			if(count != nullptr) delete count;
			m_obj = rhs.m_obj;
			count = rhs.count;
			increase();
		}
		~My_shared_ptr(){
			decrease();
			if(this->getCount() == 0) std::cout << "everything destroyed" << std::endl;
		}
		My_shared_ptr<T>& operator=(const My_shared_ptr<T>& rhs){
			
			if(m_obj != nullptr) delete m_obj;
			if(count != nullptr) delete count;
			m_obj = rhs.m_obj;
			count = rhs.count;
			increase();
		}	
			

		const T* get_m_obj(){
			return this->m_obj;
			}
		int getCount(){
			return (this->count == nullptr) ? 0 : *(this->count); 
			}
	
	private:
		void decrease(){
			
			if(*count == 0) {
				delete count;
				count = nullptr;
			}
			else (*count)--;
		}
		void increase(){
			
			if(count == nullptr)count = new int(1);
			else (*count)++;
		}
		T* m_obj;
		int *count;

};