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
	namespace Presenter
	{
		////英語表示
		class ResultDisp
		{
		public:
			string disp(Result result) {	return  result.disp()?"No":"Yes";}
		};

		////日本語表示
		class ResultDispJp
		{
		public:
			string disp(Result result) {	return  result.disp()?"いいえ":"はい" ;}
		};

	}


}
