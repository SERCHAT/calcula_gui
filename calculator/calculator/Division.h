#pragma once
#include "Operation.h"
ref class Division :public Operation
{
	public:
		virtual float getOperationResult() override
		{
			    float opResult = this->getNum1() / getNum2();
				this->setResult(opResult);
				return opResult;
		}
		bool checkIfIsDivisible() 
		{
			if (this->getNum2() != 0)
				return true;
			else
				return false;
		}
		
};

