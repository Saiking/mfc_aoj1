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

		////���[�X�P�[�X
		static void inputRect(string& editRect,Rect& rect)
		{
			////�x�[�X�̎l�p����
			RectInput rectInput(editRect);
		//	Rect rect;
			Input::inp(rectInput,rect);
		}
		static void inputCircle(string& editCircle,Circle& circle)
		{
			////�~�����
			CircleInput circleInput(editCircle);
		//	Circle circle;
			Input::inp(circleInput,circle);
		}
		static string hanteiCircle(Rect& rect,Circle& circle)
		{
			//�͂ݏo������
			Result result;
			rect.over(circle,result);

			//����o��
			ResultDisp resultDisp;
			return Display::disp(result,resultDisp);
		}
		static void inputSquare(string& editSquare,Square& square)
		{
			////�����`�����
			SquareInput  squareInput(editSquare);			
		//	Square square;
			Input::inp(squareInput,square);
		}
		static string hanteiSquare(Rect& rect,Square& square)
		{
			//�͂ݏo������
			Result result;
			rect.over(square,result);
			//����o��
			ResultDispJp resultDispJp;
			return Display::disp(result,resultDispJp);
			


		}
	};
}