#pragma once
#include <string>
#include "..\InterfaceAdapter\Controller\Controller.h"
#include "..\InterfaceAdapter\Presenter\Presenter.h"
#include "InputPort\InputPort.h"
#include "OutputPort\OutputPort.h"

using namespace std;
using namespace Domain;
using namespace InterfaceAdapter::Presenter;
using namespace InterfaceAdapter::Controller;

namespace UseCase
{
	using namespace InputPort;
	using namespace OutputPort;
	class CaseOver
	{
	public:

		////ユースケース
		static void inputRect(string& editRect,Rect& rect)
		{
			////ベースの四角入力
			RectInput rectInput(editRect);
		//	Rect rect;
			Input::inp(rectInput,rect);
		}
		static void inputCircle(string& editCircle,Circle& circle)
		{
			////円を入力
			CircleInput circleInput(editCircle);
		//	Circle circle;
			Input::inp(circleInput,circle);
		}
		static string hanteiCircle(Rect& rect,Circle& circle)
		{
			//はみ出し判定
			Result result;
			rect.over(circle,result);

			//判定出力
			ResultDisp resultDisp;
			return Display::disp(result,resultDisp);
		}
		static void inputSquare(string& editSquare,Square& square)
		{
			////正方形を入力
			SquareInput  squareInput(editSquare);			
		//	Square square;
			Input::inp(squareInput,square);
		}
		static string hanteiSquare(Rect& rect,Square& square)
		{
			//はみ出し判定
			Result result;
			rect.over(square,result);
			//判定出力
			ResultDispJp resultDispJp;
			return Display::disp(result,resultDispJp);
			


		}
	};
}