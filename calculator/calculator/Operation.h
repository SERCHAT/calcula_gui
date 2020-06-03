#pragma once
ref class Operation
{
	private:
		float num1=0;
		float num2=0;
		float result=0;
	public:
		void setNum1(float num1) {
			this->num1 = num1;
		}
		void setNum2(float num2) {
			this->num2 = num2;
		}
		void setResult(float result) {
			this->result = result;
		}
		float getNum1() {
			return this->num1;
		}
		float getNum2() {
			return this->num2;
		}
		float getResult() {
			return this->result;
		}
		virtual float getOperationResult() { return 0; }

};

