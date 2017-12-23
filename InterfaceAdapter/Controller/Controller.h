#pragma once
//#include <iostream>
#include <string>
#include <boost/algorithm/string.hpp>
#include "..\..\Domain\Domain.h"

#include <vector>
using namespace std;
using namespace Domain;
namespace InterfaceAdapter
{
	/////////
	namespace Controller{
		////正方形入力
		class SquareInput
		{
			string& m_editRect;
		public :
			SquareInput(string& editRect):m_editRect(editRect){}
			Square inp()
			{
				
				int x,y,r;
				vector<string> vect_string; 
				boost::split(vect_string, m_editRect, boost::is_space());
				x=atoi(vect_string[0].c_str());
				y=atoi(vect_string[1].c_str());
				r=atoi(vect_string[2].c_str());
				Square sqrr(x,y,r);
				return sqrr;

			}
		};

		////円入力
		class CircleInput
		{
			string& m_editRect;
		public :
			CircleInput(string& editRect):m_editRect(editRect){}

			Circle inp()
			{
				int x,y,r;
				vector<string> vect_string; 
				boost::split(vect_string, m_editRect, boost::is_space());
				x=atoi(vect_string[0].c_str());
				y=atoi(vect_string[1].c_str());
				r=atoi(vect_string[2].c_str());
				Circle cicl(x,y,r);
				return cicl;
			}
		};

		////ベース四角入力
		class RectInput
		{
			string stringRect;
			
		public :
			RectInput(string& rect):stringRect(rect){}
			Rect inp()
			{
				int w,h;
				vector<string> vect_string; 
				boost::split(vect_string, stringRect, boost::is_space());
				w=atoi(vect_string[0].c_str());
				h=atoi(vect_string[1].c_str());

				Rect rect(w,h);
				return rect;
			}
		};
	}

}
