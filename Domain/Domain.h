#pragma once
using namespace std;
namespace Domain
{
	////判定結果
	class Result
	{
		bool ok;
	public:
		Result(bool ok=false):ok(ok){}
		bool disp() {	return  ok ;}
	};

	////円形
	class Circle
	{
		int x, y,r;
		bool over(int b, int r, int m){	return (b+r > m) ? true : false;}
		bool under(int b, int r){	return (b-r < 0) ? true : false;}
	public:
		Circle(int x=0, int y=0 ,int r=0) :x(x), y(y),r(r) {}
		bool error(int W, int H)
		{
			if (!under(x, r) && !under(y, r) && !over(x, r, W) && !over(y, r, H)) return false;
			return true;
		}
	};
	////正方形
	class Square
	{
		int x, y,r;
		bool over(int b, int r, int m){	
			return (b+r/2 > m) ? true : false;
		}
		bool under(int b, int r){	
			return (b-r/2 < 0) ? true : false;
		}
	public:
		Square(int x=0, int y=0 ,int r=0) :x(x), y(y),r(r) {}
		bool error(int W, int H)
		{
			if (!under(x, r) && !under(y, r) && !over(x, r, W) && !over(y, r, H)) return false;
			return true;
		}

	};
	////ベース四角
	class Rect
	{
		int W, H;
	public :
		Rect(int w=0, int h=0) :W(w), H(h) {}
		template <typename T,typename U>
		void  over(T& shape,U& result) {
			result=shape.error(W, H);
		}
	};

}
