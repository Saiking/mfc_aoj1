#pragma once
#include <string>
#include "..\InterfaceAdapter\Controller\Controller.h"
#include "..\InterfaceAdapter\Presenter\Presenter.h"

using namespace std;
using namespace Domain;
using namespace InterfaceAdapter::Presenter;
using namespace InterfaceAdapter::Controller;

namespace UseCase
{

	/////////
	namespace OutputPort
	{
		////表示インターフェース
		class Display
		{
			public:
			template <typename U,typename V>
			static string disp(U& result,V& dispType) { 
				return  dispType.disp(result);
			}
		};
	}
}