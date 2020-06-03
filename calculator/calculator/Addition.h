#pragma once
#include "Operation.h"
ref class Addition : public Operation
{
	public:
		virtual float getOperationResult() override
		{
			float opResult = this->getNum1() + getNum2();
			this->setResult(opResult);
			return opResult;
		}
};

