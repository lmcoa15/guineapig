#include "guineapig.h"

class guineapigPrint : public guineapig // dama클래스를 상속받음 
{
public:
	void eat(); // 식사
	void status(); // 상태확인
	void actoilet(); // 화장실
	void acsleep(); // 취침
	void hospital(); // 병원 
	void enjoy(); // 놀아주기 
	void death(); // 사망 
	void levelup(); //바로레벨업
	void rate_init();
	guineapigPrint();
	~guineapigPrint();
};

