//#include <iostream>
//#include <string>
//using namespace std;
//
//class LaptopContext;
//class OffState;
//class OnState;
//class SavingState;
//
//class PowerState
//{
//public:
//	virtual void PowerButtonPress(LaptopContext* cxt) {}
//};
//class OffState : public PowerState
//{
//private:
//	OffState() {};
//public:
//	static OffState& Inst()
//	{
//		static OffState inst;
//		return inst;
//	}
//public:
//	virtual void PowerButtonPress(LaptopContext* cxt) override;
//};
//class OnState : public PowerState
//{
//private:
//	OnState() {};
//public:
//	static OnState& Inst()
//	{
//		static OnState inst;
//		return inst;
//	}
//	virtual void PowerButtonPress(LaptopContext* cxt) override;
//};
//class LaptopContext
//{
//private:
//	PowerState* powerState;
//public:
//	LaptopContext()
//	{
//		this->powerState = &OffState::Inst();
//	}
//	void ChangeState(PowerState* state)
//	{
//		this->powerState = state;
//	}
//	void PowerButtonPress()
//	{
//		powerState->PowerButtonPress(this);
//	}
//};
//
//void OffState::PowerButtonPress(LaptopContext* cxt)
//{
//	cout << "Àü¿øÀ» Ä×´Ù." << endl;
//	cxt->ChangeState(&OnState::Inst());
//}
//void OnState::PowerButtonPress(LaptopContext* cxt)
//{
//	cout << "Àü¿øÀ» ²°´Ù." << endl;
//	cxt->ChangeState(&OffState::Inst());
//}
//int main()
//{
//	LaptopContext* laptop = new LaptopContext();
//	laptop->PowerButtonPress();
//	laptop->PowerButtonPress();
//}