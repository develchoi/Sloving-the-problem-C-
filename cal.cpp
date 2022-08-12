class FourCal{
	private:
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

};
