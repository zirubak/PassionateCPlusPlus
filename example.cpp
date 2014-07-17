//Banking System ver 0.5

//Control class를 구현해 보자.
//객체지향에는 "전역"이라는 개념이 존재하지 않는다. 비롯 C++에는 전역함수과 전역 변수의 선언이 허용하고 있지만
//이는 객체지향 프로그래밍을 위한 것은 아니니 가급적 사용하지 않는 것이 좋다.

#include <iostream>
#include <cstring>

using namespace std;
const int NAME_LEN = 20;

enum{
	MAKE = 1,
	DEPOSIT,
	WITHDRAW,
	INQUIRE,
	EXIT
};

//Entity class
class Account{
private:
	int accID;	//계좌번호
	int balance;	//잔액
	//아래의 char point때문에 deep copy constructor 가 필요함.
	char* cusName;	//고객이름

public:
	//가독성을 높이기 위해, 클래스 내에는 멤버함수의 선언만 두고 정의는 클래스
	//외부로 빼 내었다
	Account(int ID, int money, char* name);
	//deep copy constructor
	Account(const Account& obj);
	~Account();

	int GetAccID() const;
	void Deposit(int money);
	int Withdraw(int money);
	void ShowAccInfo() const;
};


Account::Account(int ID, int money, char* name)
	:accID(ID), balance(money)
{
	cusName = new char[strlen(name)+1];
	strcpy(cusName, name);
}

//deep copy constructor
Account::Account(const Account& obj) : accID(obj.accID), balance(obj.balance)
{
	cusName = new char[strlen(obj.cusName)+1];
	strcpy(cusName, obj.cusName);
}

int Account::GetAccID() const
{
	return accID;
}

void Account::Deposit(int money)
{
	balance += money;
}

int Account::Withdraw(int money)
{
	if(balance < money)
		return 0;

	balance -= money;
	return money;
}

void Account::ShowAccInfo() const
{
	cout << "계좌 ID: " << accID << endl;
	cout << "이 름" << cusName << endl;
	cout << "잔 액" << balance << endl << endl;
}

Account::~Account()
{
	delete []cusName;
}



//Control Class

class AccountHandler
{
private:
	Account* accArr[100];	//Account 저장을 위한 배열
	int accNum;	//저장된 Account 수

public:
	AccountHandler();
	~AccountHandler();
	void ShowMenu(void) const;	//메뉴 출력
	void MakeAccount(void);	//계좌개설을 위한 함수
	void DepositMoney(void);	//입금
	void WithdrawMoney(void);	//출금
	void ShowAllAccInfo(void);	//잔액 조회
};

AccountHandler::AccountHandler()
	:accNum(0)
{
}

AccountHandler::~AccountHandler()
{
}

void AccountHandler::ShowMenu(void) const	//메뉴 출력
{
	cout << "-----Menu-----" << endl;
	cout << "1. 계좌 개설" << endl;
	cout << "2. 입금" << endl;
	cout << "3. 출금" << endl;
	cout << "4. 계좌정보 전체 출력" << endl;
	cout << "5. 프로그램 종료" << endl;
}

void AccountHandler::MakeAccount(void)	//계좌개설을 위한 함수
{
	int id;
	char name[NAME_LEN];
	int balance;

	cout << "[계좌개설]" << endl;
	cout << "계좌 ID: ";
	cin >> id;
	cout << "이름: ";
	cin >> name;
	cout << "입금액: ";
	cin >> balance;
	cout << endl;

	accArr[accNum++] = new Account(id, balance, name);
}

void AccountHandler::DepositMoney(void)	//입금
{
	int money;
	int id;
	cout << "[입 금]" << endl;
	cout << "계좌 ID: ";
	cin >> id;
	cout << "입금액: ";
	cin >> money;

	for(int i=0; i < accNum; i++)
	{
		if(accArr[i]->GetAccID() == id)
		{
			accArr[i]->Deposit(money);
			cout << "입금 완료. " << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다. " << endl << endl;
}

void AccountHandler::WithdrawMoney(void)	//출금
{
	int money;
	int id;

	cout << "[출 금]" << endl;
	cout << "계좌 ID: ";
	cin >> id;
	cout << "출금액: ";
	cin >> money;

	for(int i=0; i < accNum; i++)
	{
		if(accArr[i]->GetAccID() == id)
		{
			if(accArr[i]->Withdraw(money) == 0)
			{
				cout << "잔액 부족" << endl << endl;
				return;
			}

			cout << "출금 완료" << endl << endl;
			return;
		}
	}
	cout << "유효하지 않은 ID 입니다." << endl << endl;
}

void AccountHandler::ShowAllAccInfo(void)	//잔액 조회
{
	for(int i=0; i < accNum; i++)
	{
		accArr[i]->ShowAccInfo();
		cout << endl;
	}
}


int main(void)
{
	AccountHandler manager;
	int choice;

	while(1)
	{
		manager.ShowMenu();
		cout << "선택: ";
		cin >> choice;
		cout << endl;

		switch(choice)
		{
		case MAKE:
			manager.MakeAccount();
			break;

		case DEPOSIT:
			manager.DepositMoney();
			break;

		case WITHDRAW:
			manager.WithdrawMoney();
			break;

		case INQUIRE:
			manager.ShowAllAccInfo();
			break;

		case EXIT:
			return 0;
		default:
			cout << "Illegal selection." << endl;
		}
	}

	return 0;
}
