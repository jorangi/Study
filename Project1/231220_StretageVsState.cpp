//#include <iostream>
//#include <string>
//
//using namespace std;
//
//#pragma region State
////class Character;
////class MeleeState;
////class RangeState;
////class State
////{
////public:
////	virtual void ChangeState(Character* cha) {};
////	virtual void Attack() {}
////};
////class MeleeState : public State
////{
////public:
////	virtual void ChangeState(Character* cha) override;
////	virtual void Attack() override
////	{
////		cout << "�ٰŸ� ����!" << endl;
////	}
////};
////class RangeState : public State
////{
////public:
////	virtual void ChangeState(Character* cha) override;
////	virtual void Attack() override
////	{
////		cout << "���Ÿ� ����!" << endl;
////	}
////};
////
////class Character
////{
////private:
////	State* state;
////
////public:
////	Character()
////	{
////		state = new MeleeState();
////	}
////	void ChangeState(State* state)
////	{
////		this->state = state;
////	}
////	void SwapWeapon()
////	{
////		state->ChangeState(this);
////	}
////	void Attack()
////	{
////		state->Attack();
////	}
////};
////
////void MeleeState::ChangeState(Character* cha)
////{
////	cout << "���Ÿ� ����� ����" << endl;
////	cha->ChangeState(new RangeState());
////}
////void RangeState::ChangeState(Character* cha)
////{
////	cout << "�ٰŸ� ����� ����" << endl;
////	cha->ChangeState(new MeleeState());
////}
////
////int main()
////{
////	Character* character = new Character();
////	character->Attack();
////	character->SwapWeapon();
////	character->Attack();
////}
//#pragma endregion
//
//#pragma region Stretagy
//class Stretagy
//{
//public:
//	virtual void Attack() {}
//};
//class MeleeStretagy : public Stretagy
//{
//public:
//	MeleeStretagy()
//	{
//		cout << "�ٰŸ� ���� ����" << endl;
//	}
//	virtual void Attack() override
//	{
//		cout << "�ٰŸ� ����!" << endl;
//	}
//};
//class RangeStretagy : public Stretagy
//{
//public:
//	RangeStretagy()
//	{
//		cout << "���Ÿ� ���� ����" << endl;
//	}
//	virtual void Attack() override
//	{
//		cout << "���Ÿ� ����!" << endl;
//	}
//};
//class Character
//{
//private:
//	Stretagy* stretagy;
//	
//public:
//	Character()
//	{
//		stretagy = new MeleeStretagy();
//	}
//	void ChangeStretagy(Stretagy* st)
//	{
//		stretagy = st;
//	}
//	void Attack()
//	{
//		stretagy->Attack();
//	}
//};
//
//int main()
//{
//	Character* character = new Character();
//	character->Attack();
//	character->ChangeStretagy(new RangeStretagy());
//	character->Attack();
//}
//#pragma endregion