// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CChiNetworkEX_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CChiNetworkEXAcceptClientCheck2_ptr CChiNetworkEXAcceptClientCheck2_next(nullptr);
        static info::CChiNetworkEXAcceptClientCheck2_clbk CChiNetworkEXAcceptClientCheck2_user(nullptr);
        static info::CChiNetworkEXctor_CChiNetworkEX4_ptr CChiNetworkEXctor_CChiNetworkEX4_next(nullptr);
        static info::CChiNetworkEXctor_CChiNetworkEX4_clbk CChiNetworkEXctor_CChiNetworkEX4_user(nullptr);
        static info::CChiNetworkEXCheckApexLine6_ptr CChiNetworkEXCheckApexLine6_next(nullptr);
        static info::CChiNetworkEXCheckApexLine6_clbk CChiNetworkEXCheckApexLine6_user(nullptr);
        static info::CChiNetworkEXCloseClientCheck8_ptr CChiNetworkEXCloseClientCheck8_next(nullptr);
        static info::CChiNetworkEXCloseClientCheck8_clbk CChiNetworkEXCloseClientCheck8_user(nullptr);
        static info::CChiNetworkEXDestory10_ptr CChiNetworkEXDestory10_next(nullptr);
        static info::CChiNetworkEXDestory10_clbk CChiNetworkEXDestory10_user(nullptr);
        static info::CChiNetworkEXInform_For_Exit_By_ApexBlock12_ptr CChiNetworkEXInform_For_Exit_By_ApexBlock12_next(nullptr);
        static info::CChiNetworkEXInform_For_Exit_By_ApexBlock12_clbk CChiNetworkEXInform_For_Exit_By_ApexBlock12_user(nullptr);
        static info::CChiNetworkEXInitialize14_ptr CChiNetworkEXInitialize14_next(nullptr);
        static info::CChiNetworkEXInitialize14_clbk CChiNetworkEXInitialize14_user(nullptr);
        static info::CChiNetworkEXInstance16_ptr CChiNetworkEXInstance16_next(nullptr);
        static info::CChiNetworkEXInstance16_clbk CChiNetworkEXInstance16_user(nullptr);
        static info::CChiNetworkEXLoadINIFile18_ptr CChiNetworkEXLoadINIFile18_next(nullptr);
        static info::CChiNetworkEXLoadINIFile18_clbk CChiNetworkEXLoadINIFile18_user(nullptr);
        static info::CChiNetworkEXRecv_ApexInform20_ptr CChiNetworkEXRecv_ApexInform20_next(nullptr);
        static info::CChiNetworkEXRecv_ApexInform20_clbk CChiNetworkEXRecv_ApexInform20_user(nullptr);
        static info::CChiNetworkEXRecv_ApexKill22_ptr CChiNetworkEXRecv_ApexKill22_next(nullptr);
        static info::CChiNetworkEXRecv_ApexKill22_clbk CChiNetworkEXRecv_ApexKill22_user(nullptr);
        static info::CChiNetworkEXSend24_ptr CChiNetworkEXSend24_next(nullptr);
        static info::CChiNetworkEXSend24_clbk CChiNetworkEXSend24_user(nullptr);
        static info::CChiNetworkEXSend_ClienInform26_ptr CChiNetworkEXSend_ClienInform26_next(nullptr);
        static info::CChiNetworkEXSend_ClienInform26_clbk CChiNetworkEXSend_ClienInform26_user(nullptr);
        static info::CChiNetworkEXSend_IP28_ptr CChiNetworkEXSend_IP28_next(nullptr);
        static info::CChiNetworkEXSend_IP28_clbk CChiNetworkEXSend_IP28_user(nullptr);
        static info::CChiNetworkEXSend_Login30_ptr CChiNetworkEXSend_Login30_next(nullptr);
        static info::CChiNetworkEXSend_Login30_clbk CChiNetworkEXSend_Login30_user(nullptr);
        static info::CChiNetworkEXSend_Logout32_ptr CChiNetworkEXSend_Logout32_next(nullptr);
        static info::CChiNetworkEXSend_Logout32_clbk CChiNetworkEXSend_Logout32_user(nullptr);
        static info::CChiNetworkEXSend_Trans34_ptr CChiNetworkEXSend_Trans34_next(nullptr);
        static info::CChiNetworkEXSend_Trans34_clbk CChiNetworkEXSend_Trans34_user(nullptr);
        static info::CChiNetworkEXs_DataAnalysis39_ptr CChiNetworkEXs_DataAnalysis39_next(nullptr);
        static info::CChiNetworkEXs_DataAnalysis39_clbk CChiNetworkEXs_DataAnalysis39_user(nullptr);
        static info::CChiNetworkEXdtor_CChiNetworkEX41_ptr CChiNetworkEXdtor_CChiNetworkEX41_next(nullptr);
        static info::CChiNetworkEXdtor_CChiNetworkEX41_clbk CChiNetworkEXdtor_CChiNetworkEX41_user(nullptr);
        
        static void CChiNetworkEXAcceptClientCheck2_wrapper(struct CChiNetworkEX* _this, unsigned int dwProID, unsigned int dwIndex, unsigned int dwSerial)
        {
           CChiNetworkEXAcceptClientCheck2_user(_this, dwProID, dwIndex, dwSerial, CChiNetworkEXAcceptClientCheck2_next);
        };
        static void CChiNetworkEXctor_CChiNetworkEX4_wrapper(struct CChiNetworkEX* _this)
        {
           CChiNetworkEXctor_CChiNetworkEX4_user(_this, CChiNetworkEXctor_CChiNetworkEX4_next);
        };
        static void CChiNetworkEXCheckApexLine6_wrapper(struct CChiNetworkEX* _this)
        {
           CChiNetworkEXCheckApexLine6_user(_this, CChiNetworkEXCheckApexLine6_next);
        };
        static void CChiNetworkEXCloseClientCheck8_wrapper(struct CChiNetworkEX* _this, unsigned int dwProID, unsigned int dwIndex, unsigned int dwSerial)
        {
           CChiNetworkEXCloseClientCheck8_user(_this, dwProID, dwIndex, dwSerial, CChiNetworkEXCloseClientCheck8_next);
        };
        static void CChiNetworkEXDestory10_wrapper()
        {
           CChiNetworkEXDestory10_user(CChiNetworkEXDestory10_next);
        };
        static void CChiNetworkEXInform_For_Exit_By_ApexBlock12_wrapper(struct CChiNetworkEX* _this, unsigned int dwAccountSerial)
        {
           CChiNetworkEXInform_For_Exit_By_ApexBlock12_user(_this, dwAccountSerial, CChiNetworkEXInform_For_Exit_By_ApexBlock12_next);
        };
        static int CChiNetworkEXInitialize14_wrapper(struct CChiNetworkEX* _this)
        {
           return CChiNetworkEXInitialize14_user(_this, CChiNetworkEXInitialize14_next);
        };
        static struct CChiNetworkEX* CChiNetworkEXInstance16_wrapper()
        {
           return CChiNetworkEXInstance16_user(CChiNetworkEXInstance16_next);
        };
        static int CChiNetworkEXLoadINIFile18_wrapper(struct CChiNetworkEX* _this)
        {
           return CChiNetworkEXLoadINIFile18_user(_this, CChiNetworkEXLoadINIFile18_next);
        };
        static void CChiNetworkEXRecv_ApexInform20_wrapper(struct CChiNetworkEX* _this, unsigned int dwSID, unsigned int dwRecvSize, char* pMsg)
        {
           CChiNetworkEXRecv_ApexInform20_user(_this, dwSID, dwRecvSize, pMsg, CChiNetworkEXRecv_ApexInform20_next);
        };
        static void CChiNetworkEXRecv_ApexKill22_wrapper(struct CChiNetworkEX* _this, unsigned int dwSID, unsigned int dwRecvSize, char* pMsg)
        {
           CChiNetworkEXRecv_ApexKill22_user(_this, dwSID, dwRecvSize, pMsg, CChiNetworkEXRecv_ApexKill22_next);
        };
        static int CChiNetworkEXSend24_wrapper(struct CChiNetworkEX* _this, char* pbyType, unsigned int dwSID, char* szMsg, uint16_t nLen)
        {
           return CChiNetworkEXSend24_user(_this, pbyType, dwSID, szMsg, nLen, CChiNetworkEXSend24_next);
        };
        static void CChiNetworkEXSend_ClienInform26_wrapper(struct CChiNetworkEX* _this, struct CPlayer* pOne, uint16_t wSize, char* pBuf)
        {
           CChiNetworkEXSend_ClienInform26_user(_this, pOne, wSize, pBuf, CChiNetworkEXSend_ClienInform26_next);
        };
        static void CChiNetworkEXSend_IP28_wrapper(struct CChiNetworkEX* _this, struct CPlayer* pOne)
        {
           CChiNetworkEXSend_IP28_user(_this, pOne, CChiNetworkEXSend_IP28_next);
        };
        static void CChiNetworkEXSend_Login30_wrapper(struct CChiNetworkEX* _this, struct CPlayer* pOne)
        {
           CChiNetworkEXSend_Login30_user(_this, pOne, CChiNetworkEXSend_Login30_next);
        };
        static void CChiNetworkEXSend_Logout32_wrapper(struct CChiNetworkEX* _this, struct CPlayer* pOne)
        {
           CChiNetworkEXSend_Logout32_user(_this, pOne, CChiNetworkEXSend_Logout32_next);
        };
        static void CChiNetworkEXSend_Trans34_wrapper(struct CChiNetworkEX* _this, struct CPlayer* pOne, unsigned int dwRet)
        {
           CChiNetworkEXSend_Trans34_user(_this, pOne, dwRet, CChiNetworkEXSend_Trans34_next);
        };
        static bool CChiNetworkEXs_DataAnalysis39_wrapper(unsigned int dwProID, unsigned int dwClientIndex, struct _MSG_HEADER* pMsgHeader, char* pMsg)
        {
           return CChiNetworkEXs_DataAnalysis39_user(dwProID, dwClientIndex, pMsgHeader, pMsg, CChiNetworkEXs_DataAnalysis39_next);
        };
        static void CChiNetworkEXdtor_CChiNetworkEX41_wrapper(struct CChiNetworkEX* _this)
        {
           CChiNetworkEXdtor_CChiNetworkEX41_user(_this, CChiNetworkEXdtor_CChiNetworkEX41_next);
        };
        
        static hook_record CChiNetworkEX_functions[] = {
        {   (LPVOID)0x1404106b0L,
            (LPVOID *)&CChiNetworkEXAcceptClientCheck2_user,
            (LPVOID *)&CChiNetworkEXAcceptClientCheck2_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXAcceptClientCheck2_wrapper),
            (LPVOID)cast_pointer_function((void(CChiNetworkEX::*)(unsigned int, unsigned int, unsigned int))&CChiNetworkEX::AcceptClientCheck) },
        {   (LPVOID)0x14040f950L,
            (LPVOID *)&CChiNetworkEXctor_CChiNetworkEX4_user,
            (LPVOID *)&CChiNetworkEXctor_CChiNetworkEX4_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXctor_CChiNetworkEX4_wrapper),
            (LPVOID)cast_pointer_function((void(CChiNetworkEX::*)())&CChiNetworkEX::ctor_CChiNetworkEX) },
        {   (LPVOID)0x14040fc30L,
            (LPVOID *)&CChiNetworkEXCheckApexLine6_user,
            (LPVOID *)&CChiNetworkEXCheckApexLine6_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXCheckApexLine6_wrapper),
            (LPVOID)cast_pointer_function((void(CChiNetworkEX::*)())&CChiNetworkEX::CheckApexLine) },
        {   (LPVOID)0x14040fcd0L,
            (LPVOID *)&CChiNetworkEXCloseClientCheck8_user,
            (LPVOID *)&CChiNetworkEXCloseClientCheck8_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXCloseClientCheck8_wrapper),
            (LPVOID)cast_pointer_function((void(CChiNetworkEX::*)(unsigned int, unsigned int, unsigned int))&CChiNetworkEX::CloseClientCheck) },
        {   (LPVOID)0x14040f8d0L,
            (LPVOID *)&CChiNetworkEXDestory10_user,
            (LPVOID *)&CChiNetworkEXDestory10_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXDestory10_wrapper),
            (LPVOID)cast_pointer_function((void(*)())&CChiNetworkEX::Destory) },
        {   (LPVOID)0x1404105e0L,
            (LPVOID *)&CChiNetworkEXInform_For_Exit_By_ApexBlock12_user,
            (LPVOID *)&CChiNetworkEXInform_For_Exit_By_ApexBlock12_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXInform_For_Exit_By_ApexBlock12_wrapper),
            (LPVOID)cast_pointer_function((void(CChiNetworkEX::*)(unsigned int))&CChiNetworkEX::Inform_For_Exit_By_ApexBlock) },
        {   (LPVOID)0x14040fa80L,
            (LPVOID *)&CChiNetworkEXInitialize14_user,
            (LPVOID *)&CChiNetworkEXInitialize14_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXInitialize14_wrapper),
            (LPVOID)cast_pointer_function((int(CChiNetworkEX::*)())&CChiNetworkEX::Initialize) },
        {   (LPVOID)0x14040f810L,
            (LPVOID *)&CChiNetworkEXInstance16_user,
            (LPVOID *)&CChiNetworkEXInstance16_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXInstance16_wrapper),
            (LPVOID)cast_pointer_function((struct CChiNetworkEX*(*)())&CChiNetworkEX::Instance) },
        {   (LPVOID)0x14040fb20L,
            (LPVOID *)&CChiNetworkEXLoadINIFile18_user,
            (LPVOID *)&CChiNetworkEXLoadINIFile18_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXLoadINIFile18_wrapper),
            (LPVOID)cast_pointer_function((int(CChiNetworkEX::*)())&CChiNetworkEX::LoadINIFile) },
        {   (LPVOID)0x1404103a0L,
            (LPVOID *)&CChiNetworkEXRecv_ApexInform20_user,
            (LPVOID *)&CChiNetworkEXRecv_ApexInform20_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXRecv_ApexInform20_wrapper),
            (LPVOID)cast_pointer_function((void(CChiNetworkEX::*)(unsigned int, unsigned int, char*))&CChiNetworkEX::Recv_ApexInform) },
        {   (LPVOID)0x140410460L,
            (LPVOID *)&CChiNetworkEXRecv_ApexKill22_user,
            (LPVOID *)&CChiNetworkEXRecv_ApexKill22_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXRecv_ApexKill22_wrapper),
            (LPVOID)cast_pointer_function((void(CChiNetworkEX::*)(unsigned int, unsigned int, char*))&CChiNetworkEX::Recv_ApexKill) },
        {   (LPVOID)0x14040fd20L,
            (LPVOID *)&CChiNetworkEXSend24_user,
            (LPVOID *)&CChiNetworkEXSend24_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXSend24_wrapper),
            (LPVOID)cast_pointer_function((int(CChiNetworkEX::*)(char*, unsigned int, char*, uint16_t))&CChiNetworkEX::Send) },
        {   (LPVOID)0x1404102d0L,
            (LPVOID *)&CChiNetworkEXSend_ClienInform26_user,
            (LPVOID *)&CChiNetworkEXSend_ClienInform26_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXSend_ClienInform26_wrapper),
            (LPVOID)cast_pointer_function((void(CChiNetworkEX::*)(struct CPlayer*, uint16_t, char*))&CChiNetworkEX::Send_ClienInform) },
        {   (LPVOID)0x14040ffc0L,
            (LPVOID *)&CChiNetworkEXSend_IP28_user,
            (LPVOID *)&CChiNetworkEXSend_IP28_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXSend_IP28_wrapper),
            (LPVOID)cast_pointer_function((void(CChiNetworkEX::*)(struct CPlayer*))&CChiNetworkEX::Send_IP) },
        {   (LPVOID)0x14040fe90L,
            (LPVOID *)&CChiNetworkEXSend_Login30_user,
            (LPVOID *)&CChiNetworkEXSend_Login30_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXSend_Login30_wrapper),
            (LPVOID)cast_pointer_function((void(CChiNetworkEX::*)(struct CPlayer*))&CChiNetworkEX::Send_Login) },
        {   (LPVOID)0x140410190L,
            (LPVOID *)&CChiNetworkEXSend_Logout32_user,
            (LPVOID *)&CChiNetworkEXSend_Logout32_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXSend_Logout32_wrapper),
            (LPVOID)cast_pointer_function((void(CChiNetworkEX::*)(struct CPlayer*))&CChiNetworkEX::Send_Logout) },
        {   (LPVOID)0x1404100b0L,
            (LPVOID *)&CChiNetworkEXSend_Trans34_user,
            (LPVOID *)&CChiNetworkEXSend_Trans34_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXSend_Trans34_wrapper),
            (LPVOID)cast_pointer_function((void(CChiNetworkEX::*)(struct CPlayer*, unsigned int))&CChiNetworkEX::Send_Trans) },
        {   (LPVOID)0x14040fd90L,
            (LPVOID *)&CChiNetworkEXs_DataAnalysis39_user,
            (LPVOID *)&CChiNetworkEXs_DataAnalysis39_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXs_DataAnalysis39_wrapper),
            (LPVOID)cast_pointer_function((bool(*)(unsigned int, unsigned int, struct _MSG_HEADER*, char*))&CChiNetworkEX::s_DataAnalysis) },
        {   (LPVOID)0x14040f9f0L,
            (LPVOID *)&CChiNetworkEXdtor_CChiNetworkEX41_user,
            (LPVOID *)&CChiNetworkEXdtor_CChiNetworkEX41_next,
            (LPVOID)cast_pointer_function(CChiNetworkEXdtor_CChiNetworkEX41_wrapper),
            (LPVOID)cast_pointer_function((void(CChiNetworkEX::*)())&CChiNetworkEX::dtor_CChiNetworkEX) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
