#include "include/ThostFtdcMdApi.h"
//#include "MdSpi.h"
#include <iostream>

// UserApi����
CThostFtdcMdApi* pUserApi;

// ���ò���
char FRONT_ADDR[] = "tcp://180.168.146.187:10111";		// ǰ�õ�ַ
TThostFtdcBrokerIDType	BROKER_ID = "9999";				// ���͹�˾����
TThostFtdcInvestorIDType INVESTOR_ID = "143407";			// Ͷ���ߴ���
TThostFtdcPasswordType  PASSWORD = "19870621";			// �û�����
const char *ppInstrumentID[] = {"rb1910"};			// ���鶩���б�
int iInstrumentID = 2;									// ���鶩������

// ������
int iRequestID = 0;

int main(void)
{
	// ��ʼ��UserApi
	pUserApi = CThostFtdcMdApi::CreateFtdcMdApi();
	//CThostFtdcMdSpi* pUserSpi = new CMdSpi();
        /*
	pUserApi->RegisterSpi(pUserSpi);						// ע���¼���
	pUserApi->RegisterFront(FRONT_ADDR);					// connect
	pUserApi->Init();

	pUserApi->Join();
//	pUserApi->Release();
        */
    std::cout<<"hello quant!"<<std::endl;
    return 0;
}
