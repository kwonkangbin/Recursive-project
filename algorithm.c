#include <stdio.h>
/*부전시장에서 당근 n개와 배추 n개를 파는 가게가 있다. 기본가격은 배추 5000원,당근 4500원이고 
각각 한개씩 더 살수록 100원씩 싸지고 최저가격은 당근 3000원, 배추 4000원이다. 영수증 작성 프로그램을 만들어라*/
int carrot(int n);
int cabbage(int n);

int main() {
	int CarrotN,CabbageN;
	printf("당근 몇개?\n");
	scanf("%d",&CarrotN);
	printf("배추 몇개?\n");
	scanf("%d",&CabbageN);
	// 당근과 배추를 몇개씩 살건지 입력받음  
	int car = carrot(CarrotN);
	int cab = cabbage(CabbageN);

	printf("당근 총가격: %d\n",car); //총가격 프린트 
	printf("배추 총가격: %d\n",cab);//총가격 프린트 
	printf("총가격: %d",car+cab);//총가격 프린트
	return 0;
}

int Carrot = 4600; // 당근가격 
int Cabbage = 5100; // 배추가격 
int carrot(int n)
{
	int Price = 0;//총 가격  
	if(n==0)
	{ // 탈출조건  
		return 0;
	}
	if(Carrot!=3000)
	{
		Carrot = Carrot-100; //최저가격이 아닐때까지 100원씩 할인  
	}
	Price += Carrot; //총가격 + 당근가격 
	Price += carrot(n-1);//총가격을 산출하는 곳 
	return Price;  //리턴
}

int cabbage(int n)
{
	int Price = 0;//총 가격  
	if(n==0)
	{// 탈출조건  
		return 0;
	}
	if(Cabbage!=4000)
	{
		Cabbage = Cabbage-100;	//최저가격이 아닐때까지 100원씩 할인  
	}
	Price += Cabbage; //총가격 + 대추가격 
	Price += cabbage(n-1); //총가격을 산출하는 곳  
	return Price; //리턴  
} 
