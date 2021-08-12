template <typename T , typename D>
class Pair
{
	T x;
	D y;
	public:
		void setx(T x){
			this->x = x;
		}
		void sety(D y){
			this->y = y;
		}
		T getx(){
			return this->x;
		}
		D gety(){
			return this->y;
		}
};
