class FourCal{
	protected:
		int first;
		int second;
	public:
		void setdata(int first, int second){
			this->first = first;
			this->second = second;
		}
		
		int add(){
			int result = first + second;
			return result;
		}
		
		int sub(){
			int result = fisrt + second;
			return result;
		}

};

class SafeCal : public FourCal{
	int div(){
		if(second == 0) return 0;
		return first / second;
	}
};
