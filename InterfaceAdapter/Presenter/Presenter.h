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
		////‰pŒê•\Ž¦
		class ResultDisp
		{
		public:
			string disp(Result result) {	return  result.disp()?"No":"Yes";}
		};

		////“ú–{Œê•\Ž¦
		class ResultDispJp
		{
		public:
			string disp(Result result) {	return  result.disp()?"‚¢‚¢‚¦":"‚Í‚¢" ;}
		};

	}


}
