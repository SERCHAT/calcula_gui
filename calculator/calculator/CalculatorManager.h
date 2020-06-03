#pragma once
#include "Operation.h"
ref class CalculatorManager
{
	private:
		Operation^ operation;
	public:
		CalculatorManager() {};
		~CalculatorManager() {};
		void setOperation(Operation^ _operation) {
			this->operation = _operation;
		}
		Operation^ getOperation() {
			return this->operation;
		}
		void clearOperation() {
			this->operation = nullptr;
		}
};

