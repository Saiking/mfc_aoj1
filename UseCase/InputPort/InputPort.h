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
	namespace InputPort
	{
		////入力インターフェース
		class Input
		{
		public :
			template <typename X,typename Y>
			static void inp(X shapeIn,Y& shape)
			{
				shape= shapeIn.inp();
			}
		};
	}

}