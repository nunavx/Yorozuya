// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNetProcess_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CNetProcessAcceptThread2_ptr CNetProcessAcceptThread2_next(nullptr);
        static info::CNetProcessAcceptThread2_clbk CNetProcessAcceptThread2_user(nullptr);
        static info::CNetProcessctor_CNetProcess4_ptr CNetProcessctor_CNetProcess4_next(nullptr);
        static info::CNetProcessctor_CNetProcess4_clbk CNetProcessctor_CNetProcess4_user(nullptr);
        static info::CNetProcessCloseAll6_ptr CNetProcessCloseAll6_next(nullptr);
        static info::CNetProcessCloseAll6_clbk CNetProcessCloseAll6_user(nullptr);
        static info::CNetProcessCloseSocket8_ptr CNetProcessCloseSocket8_next(nullptr);
        static info::CNetProcessCloseSocket8_clbk CNetProcessCloseSocket8_user(nullptr);
        static info::CNetProcessCompleteAnsyncConnect10_ptr CNetProcessCompleteAnsyncConnect10_next(nullptr);
        static info::CNetProcessCompleteAnsyncConnect10_clbk CNetProcessCompleteAnsyncConnect10_user(nullptr);
        static info::CNetProcessConnectThread12_ptr CNetProcessConnectThread12_next(nullptr);
        static info::CNetProcessConnectThread12_clbk CNetProcessConnectThread12_user(nullptr);
        static info::CNetProcessFindKeyFromWaitList14_ptr CNetProcessFindKeyFromWaitList14_next(nullptr);
        static info::CNetProcessFindKeyFromWaitList14_clbk CNetProcessFindKeyFromWaitList14_user(nullptr);
        static info::CNetProcessGetContextHandle16_ptr CNetProcessGetContextHandle16_next(nullptr);
        static info::CNetProcessGetContextHandle16_clbk CNetProcessGetContextHandle16_user(nullptr);
        static info::CNetProcessGetSendThreadFrame18_ptr CNetProcessGetSendThreadFrame18_next(nullptr);
        static info::CNetProcessGetSendThreadFrame18_clbk CNetProcessGetSendThreadFrame18_user(nullptr);
        static info::CNetProcessIOLogFileOperSetting20_ptr CNetProcessIOLogFileOperSetting20_next(nullptr);
        static info::CNetProcessIOLogFileOperSetting20_clbk CNetProcessIOLogFileOperSetting20_user(nullptr);
        static info::CNetProcessLoadSendMsg22_ptr CNetProcessLoadSendMsg22_next(nullptr);
        static info::CNetProcessLoadSendMsg22_clbk CNetProcessLoadSendMsg22_user(nullptr);
        static info::CNetProcessLoadSendMsg24_ptr CNetProcessLoadSendMsg24_next(nullptr);
        static info::CNetProcessLoadSendMsg24_clbk CNetProcessLoadSendMsg24_user(nullptr);
        static info::CNetProcessLogFileOperSetting26_ptr CNetProcessLogFileOperSetting26_next(nullptr);
        static info::CNetProcessLogFileOperSetting26_clbk CNetProcessLogFileOperSetting26_user(nullptr);
        static info::CNetProcessNetEventThread28_ptr CNetProcessNetEventThread28_next(nullptr);
        static info::CNetProcessNetEventThread28_clbk CNetProcessNetEventThread28_user(nullptr);
        static info::CNetProcessOnLoop30_ptr CNetProcessOnLoop30_next(nullptr);
        static info::CNetProcessOnLoop30_clbk CNetProcessOnLoop30_user(nullptr);
        static info::CNetProcessOnLoop_Receipt32_ptr CNetProcessOnLoop_Receipt32_next(nullptr);
        static info::CNetProcessOnLoop_Receipt32_clbk CNetProcessOnLoop_Receipt32_user(nullptr);
        static info::CNetProcessPushAnsyncConnect34_ptr CNetProcessPushAnsyncConnect34_next(nullptr);
        static info::CNetProcessPushAnsyncConnect34_clbk CNetProcessPushAnsyncConnect34_user(nullptr);
        static info::CNetProcessPushCloseNode36_ptr CNetProcessPushCloseNode36_next(nullptr);
        static info::CNetProcessPushCloseNode36_clbk CNetProcessPushCloseNode36_user(nullptr);
        static info::CNetProcessPushKeyCheckList38_ptr CNetProcessPushKeyCheckList38_next(nullptr);
        static info::CNetProcessPushKeyCheckList38_clbk CNetProcessPushKeyCheckList38_user(nullptr);
        static info::CNetProcessRecvThread40_ptr CNetProcessRecvThread40_next(nullptr);
        static info::CNetProcessRecvThread40_clbk CNetProcessRecvThread40_user(nullptr);
        static info::CNetProcessRelease42_ptr CNetProcessRelease42_next(nullptr);
        static info::CNetProcessRelease42_clbk CNetProcessRelease42_user(nullptr);
        static info::CNetProcessSendThread44_ptr CNetProcessSendThread44_next(nullptr);
        static info::CNetProcessSendThread44_clbk CNetProcessSendThread44_user(nullptr);
        static info::CNetProcessSetContextHandle46_ptr CNetProcessSetContextHandle46_next(nullptr);
        static info::CNetProcessSetContextHandle46_clbk CNetProcessSetContextHandle46_user(nullptr);
        static info::CNetProcessSetProcess48_ptr CNetProcessSetProcess48_next(nullptr);
        static info::CNetProcessSetProcess48_clbk CNetProcessSetProcess48_user(nullptr);
        static info::CNetProcessStartSpeedHackCheck50_ptr CNetProcessStartSpeedHackCheck50_next(nullptr);
        static info::CNetProcessStartSpeedHackCheck50_clbk CNetProcessStartSpeedHackCheck50_user(nullptr);
        static info::CNetProcess_CheckSend52_ptr CNetProcess_CheckSend52_next(nullptr);
        static info::CNetProcess_CheckSend52_clbk CNetProcess_CheckSend52_user(nullptr);
        static info::CNetProcess_CheckWaitKey54_ptr CNetProcess_CheckWaitKey54_next(nullptr);
        static info::CNetProcess_CheckWaitKey54_clbk CNetProcess_CheckWaitKey54_user(nullptr);
        static info::CNetProcess_CkeckKeyCertifyDeley56_ptr CNetProcess_CkeckKeyCertifyDeley56_next(nullptr);
        static info::CNetProcess_CkeckKeyCertifyDeley56_clbk CNetProcess_CkeckKeyCertifyDeley56_user(nullptr);
        static info::CNetProcess_CkeckRecvBreak58_ptr CNetProcess_CkeckRecvBreak58_next(nullptr);
        static info::CNetProcess_CkeckRecvBreak58_clbk CNetProcess_CkeckRecvBreak58_user(nullptr);
        static info::CNetProcess_CkeckSpeedHackDeley60_ptr CNetProcess_CkeckSpeedHackDeley60_next(nullptr);
        static info::CNetProcess_CkeckSpeedHackDeley60_clbk CNetProcess_CkeckSpeedHackDeley60_user(nullptr);
        static info::CNetProcess_ForceCloseLoop62_ptr CNetProcess_ForceCloseLoop62_next(nullptr);
        static info::CNetProcess_ForceCloseLoop62_clbk CNetProcess_ForceCloseLoop62_user(nullptr);
        static info::CNetProcess_InternalPacketProcess64_ptr CNetProcess_InternalPacketProcess64_next(nullptr);
        static info::CNetProcess_InternalPacketProcess64_clbk CNetProcess_InternalPacketProcess64_user(nullptr);
        static info::CNetProcess_PopRecvMsg66_ptr CNetProcess_PopRecvMsg66_next(nullptr);
        static info::CNetProcess_PopRecvMsg66_clbk CNetProcess_PopRecvMsg66_user(nullptr);
        static info::CNetProcess_Receipt68_ptr CNetProcess_Receipt68_next(nullptr);
        static info::CNetProcess_Receipt68_clbk CNetProcess_Receipt68_user(nullptr);
        static info::CNetProcess_ResponSpeedHack70_ptr CNetProcess_ResponSpeedHack70_next(nullptr);
        static info::CNetProcess_ResponSpeedHack70_clbk CNetProcess_ResponSpeedHack70_user(nullptr);
        static info::CNetProcess_SendLoop72_ptr CNetProcess_SendLoop72_next(nullptr);
        static info::CNetProcess_SendLoop72_clbk CNetProcess_SendLoop72_user(nullptr);
        static info::CNetProcess_SendSpeedHackCheckMsg74_ptr CNetProcess_SendSpeedHackCheckMsg74_next(nullptr);
        static info::CNetProcess_SendSpeedHackCheckMsg74_clbk CNetProcess_SendSpeedHackCheckMsg74_user(nullptr);
        static info::CNetProcesswt_AcceptClient79_ptr CNetProcesswt_AcceptClient79_next(nullptr);
        static info::CNetProcesswt_AcceptClient79_clbk CNetProcesswt_AcceptClient79_user(nullptr);
        static info::CNetProcesswt_CloseClient81_ptr CNetProcesswt_CloseClient81_next(nullptr);
        static info::CNetProcesswt_CloseClient81_clbk CNetProcesswt_CloseClient81_user(nullptr);
        static info::CNetProcessdtor_CNetProcess83_ptr CNetProcessdtor_CNetProcess83_next(nullptr);
        static info::CNetProcessdtor_CNetProcess83_clbk CNetProcessdtor_CNetProcess83_user(nullptr);
        
        static void CNetProcessAcceptThread2_wrapper(void* pv)
        {
           CNetProcessAcceptThread2_user(pv, CNetProcessAcceptThread2_next);
        };
        static void CNetProcessctor_CNetProcess4_wrapper(struct CNetProcess* _this)
        {
           CNetProcessctor_CNetProcess4_user(_this, CNetProcessctor_CNetProcess4_next);
        };
        static void CNetProcessCloseAll6_wrapper(struct CNetProcess* _this)
        {
           CNetProcessCloseAll6_user(_this, CNetProcessCloseAll6_next);
        };
        static void CNetProcessCloseSocket8_wrapper(struct CNetProcess* _this, unsigned int dwSocketIndex, bool bSlowClose)
        {
           CNetProcessCloseSocket8_user(_this, dwSocketIndex, bSlowClose, CNetProcessCloseSocket8_next);
        };
        static void CNetProcessCompleteAnsyncConnect10_wrapper(struct CNetProcess* _this)
        {
           CNetProcessCompleteAnsyncConnect10_user(_this, CNetProcessCompleteAnsyncConnect10_next);
        };
        static void CNetProcessConnectThread12_wrapper(void* pv)
        {
           CNetProcessConnectThread12_user(pv, CNetProcessConnectThread12_next);
        };
        static bool CNetProcessFindKeyFromWaitList14_wrapper(struct CNetProcess* _this, unsigned int dwSocketIndex, unsigned int dwSerial, unsigned int* pdwKey, int nUseKeyNum)
        {
           return CNetProcessFindKeyFromWaitList14_user(_this, dwSocketIndex, dwSerial, pdwKey, nUseKeyNum, CNetProcessFindKeyFromWaitList14_next);
        };
        static void* CNetProcessGetContextHandle16_wrapper(struct CNetProcess* _this, uint16_t wIndex)
        {
           return CNetProcessGetContextHandle16_user(_this, wIndex, CNetProcessGetContextHandle16_next);
        };
        static unsigned int CNetProcessGetSendThreadFrame18_wrapper(struct CNetProcess* _this)
        {
           return CNetProcessGetSendThreadFrame18_user(_this, CNetProcessGetSendThreadFrame18_next);
        };
        static void CNetProcessIOLogFileOperSetting20_wrapper(struct CNetProcess* _this, bool bOper)
        {
           CNetProcessIOLogFileOperSetting20_user(_this, bOper, CNetProcessIOLogFileOperSetting20_next);
        };
        static int CNetProcessLoadSendMsg22_wrapper(struct CNetProcess* _this, unsigned int dwClientIndex, char* pbyType, char* szMsg, uint16_t nLen)
        {
           return CNetProcessLoadSendMsg22_user(_this, dwClientIndex, pbyType, szMsg, nLen, CNetProcessLoadSendMsg22_next);
        };
        static int CNetProcessLoadSendMsg24_wrapper(struct CNetProcess* _this, unsigned int dwClientIndex, uint16_t wType, char* szMsg, uint16_t nLen)
        {
           return CNetProcessLoadSendMsg24_user(_this, dwClientIndex, wType, szMsg, nLen, CNetProcessLoadSendMsg24_next);
        };
        static void CNetProcessLogFileOperSetting26_wrapper(struct CNetProcess* _this, bool bRecv, bool bSend, bool bSystem)
        {
           CNetProcessLogFileOperSetting26_user(_this, bRecv, bSend, bSystem, CNetProcessLogFileOperSetting26_next);
        };
        static void CNetProcessNetEventThread28_wrapper(void* pv)
        {
           CNetProcessNetEventThread28_user(pv, CNetProcessNetEventThread28_next);
        };
        static void CNetProcessOnLoop30_wrapper(struct CNetProcess* _this)
        {
           CNetProcessOnLoop30_user(_this, CNetProcessOnLoop30_next);
        };
        static void CNetProcessOnLoop_Receipt32_wrapper(struct CNetProcess* _this)
        {
           CNetProcessOnLoop_Receipt32_user(_this, CNetProcessOnLoop_Receipt32_next);
        };
        static bool CNetProcessPushAnsyncConnect34_wrapper(struct CNetProcess* _this, unsigned int dwSocketIndex, struct sockaddr_in* pAddr)
        {
           return CNetProcessPushAnsyncConnect34_user(_this, dwSocketIndex, pAddr, CNetProcessPushAnsyncConnect34_next);
        };
        static void CNetProcessPushCloseNode36_wrapper(struct CNetProcess* _this, int nIndex)
        {
           CNetProcessPushCloseNode36_user(_this, nIndex, CNetProcessPushCloseNode36_next);
        };
        static bool CNetProcessPushKeyCheckList38_wrapper(struct CNetProcess* _this, unsigned int dwSerial, unsigned int dwIP, unsigned int* pdwKey, int nUseKeyNum)
        {
           return CNetProcessPushKeyCheckList38_user(_this, dwSerial, dwIP, pdwKey, nUseKeyNum, CNetProcessPushKeyCheckList38_next);
        };
        static void CNetProcessRecvThread40_wrapper(void* pv)
        {
           CNetProcessRecvThread40_user(pv, CNetProcessRecvThread40_next);
        };
        static void CNetProcessRelease42_wrapper(struct CNetProcess* _this)
        {
           CNetProcessRelease42_user(_this, CNetProcessRelease42_next);
        };
        static void CNetProcessSendThread44_wrapper(void* pv)
        {
           CNetProcessSendThread44_user(pv, CNetProcessSendThread44_next);
        };
        static void CNetProcessSetContextHandle46_wrapper(struct CNetProcess* _this, void* hContextHandle, uint16_t wIndex)
        {
           CNetProcessSetContextHandle46_user(_this, hContextHandle, wIndex, CNetProcessSetContextHandle46_next);
        };
        static bool CNetProcessSetProcess48_wrapper(struct CNetProcess* _this, int nIndex, struct _NET_TYPE_PARAM* pType, struct CNetWorking* pNetwork, bool bUseFG)
        {
           return CNetProcessSetProcess48_user(_this, nIndex, pType, pNetwork, bUseFG, CNetProcessSetProcess48_next);
        };
        static bool CNetProcessStartSpeedHackCheck50_wrapper(struct CNetProcess* _this, unsigned int dwClientIndex, char* pszID)
        {
           return CNetProcessStartSpeedHackCheck50_user(_this, dwClientIndex, pszID, CNetProcessStartSpeedHackCheck50_next);
        };
        static void CNetProcess_CheckSend52_wrapper(struct CNetProcess* _this, uint16_t wSocketIndex)
        {
           CNetProcess_CheckSend52_user(_this, wSocketIndex, CNetProcess_CheckSend52_next);
        };
        static void CNetProcess_CheckWaitKey54_wrapper(struct CNetProcess* _this)
        {
           CNetProcess_CheckWaitKey54_user(_this, CNetProcess_CheckWaitKey54_next);
        };
        static void CNetProcess_CkeckKeyCertifyDeley56_wrapper(struct CNetProcess* _this)
        {
           CNetProcess_CkeckKeyCertifyDeley56_user(_this, CNetProcess_CkeckKeyCertifyDeley56_next);
        };
        static void CNetProcess_CkeckRecvBreak58_wrapper(struct CNetProcess* _this)
        {
           CNetProcess_CkeckRecvBreak58_user(_this, CNetProcess_CkeckRecvBreak58_next);
        };
        static void CNetProcess_CkeckSpeedHackDeley60_wrapper(struct CNetProcess* _this)
        {
           CNetProcess_CkeckSpeedHackDeley60_user(_this, CNetProcess_CkeckSpeedHackDeley60_next);
        };
        static void CNetProcess_ForceCloseLoop62_wrapper(struct CNetProcess* _this)
        {
           CNetProcess_ForceCloseLoop62_user(_this, CNetProcess_ForceCloseLoop62_next);
        };
        static bool CNetProcess_InternalPacketProcess64_wrapper(struct CNetProcess* _this, unsigned int dwSocketIndex, struct _MSG_HEADER* pMsgHeader, char* pMsg)
        {
           return CNetProcess_InternalPacketProcess64_user(_this, dwSocketIndex, pMsgHeader, pMsg, CNetProcess_InternalPacketProcess64_next);
        };
        static void CNetProcess_PopRecvMsg66_wrapper(struct CNetProcess* _this, uint16_t wSocketIndex)
        {
           CNetProcess_PopRecvMsg66_user(_this, wSocketIndex, CNetProcess_PopRecvMsg66_next);
        };
        static void CNetProcess_Receipt68_wrapper(struct CNetProcess* _this)
        {
           CNetProcess_Receipt68_user(_this, CNetProcess_Receipt68_next);
        };
        static void CNetProcess_ResponSpeedHack70_wrapper(struct CNetProcess* _this)
        {
           CNetProcess_ResponSpeedHack70_user(_this, CNetProcess_ResponSpeedHack70_next);
        };
        static void CNetProcess_SendLoop72_wrapper(struct CNetProcess* _this, unsigned int n)
        {
           CNetProcess_SendLoop72_user(_this, n, CNetProcess_SendLoop72_next);
        };
        static void CNetProcess_SendSpeedHackCheckMsg74_wrapper(struct CNetProcess* _this, int n)
        {
           CNetProcess_SendSpeedHackCheckMsg74_user(_this, n, CNetProcess_SendSpeedHackCheckMsg74_next);
        };
        static bool CNetProcesswt_AcceptClient79_wrapper(struct CNetProcess* _this, unsigned int* pdwClientIndex)
        {
           return CNetProcesswt_AcceptClient79_user(_this, pdwClientIndex, CNetProcesswt_AcceptClient79_next);
        };
        static bool CNetProcesswt_CloseClient81_wrapper(struct CNetProcess* _this, unsigned int dwClientIndex)
        {
           return CNetProcesswt_CloseClient81_user(_this, dwClientIndex, CNetProcesswt_CloseClient81_next);
        };
        static void CNetProcessdtor_CNetProcess83_wrapper(struct CNetProcess* _this)
        {
           CNetProcessdtor_CNetProcess83_user(_this, CNetProcessdtor_CNetProcess83_next);
        };
        
        static hook_record CNetProcess_functions[] = {
        {   (LPVOID)0x140477fb0L,
            (LPVOID *)&CNetProcessAcceptThread2_user,
            (LPVOID *)&CNetProcessAcceptThread2_next,
            (LPVOID)cast_pointer_function(CNetProcessAcceptThread2_wrapper),
            (LPVOID)cast_pointer_function((void(*)(void*))&CNetProcess::AcceptThread) },
        {   (LPVOID)0x140475e00L,
            (LPVOID *)&CNetProcessctor_CNetProcess4_user,
            (LPVOID *)&CNetProcessctor_CNetProcess4_next,
            (LPVOID)cast_pointer_function(CNetProcessctor_CNetProcess4_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::ctor_CNetProcess) },
        {   (LPVOID)0x140477c40L,
            (LPVOID *)&CNetProcessCloseAll6_user,
            (LPVOID *)&CNetProcessCloseAll6_next,
            (LPVOID)cast_pointer_function(CNetProcessCloseAll6_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::CloseAll) },
        {   (LPVOID)0x14047a140L,
            (LPVOID *)&CNetProcessCloseSocket8_user,
            (LPVOID *)&CNetProcessCloseSocket8_next,
            (LPVOID)cast_pointer_function(CNetProcessCloseSocket8_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)(unsigned int, bool))&CNetProcess::CloseSocket) },
        {   (LPVOID)0x140479970L,
            (LPVOID *)&CNetProcessCompleteAnsyncConnect10_user,
            (LPVOID *)&CNetProcessCompleteAnsyncConnect10_next,
            (LPVOID)cast_pointer_function(CNetProcessCompleteAnsyncConnect10_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::CompleteAnsyncConnect) },
        {   (LPVOID)0x14047b230L,
            (LPVOID *)&CNetProcessConnectThread12_user,
            (LPVOID *)&CNetProcessConnectThread12_next,
            (LPVOID)cast_pointer_function(CNetProcessConnectThread12_wrapper),
            (LPVOID)cast_pointer_function((void(*)(void*))&CNetProcess::ConnectThread) },
        {   (LPVOID)0x140479d50L,
            (LPVOID *)&CNetProcessFindKeyFromWaitList14_user,
            (LPVOID *)&CNetProcessFindKeyFromWaitList14_next,
            (LPVOID)cast_pointer_function(CNetProcessFindKeyFromWaitList14_wrapper),
            (LPVOID)cast_pointer_function((bool(CNetProcess::*)(unsigned int, unsigned int, unsigned int*, int))&CNetProcess::FindKeyFromWaitList) },
        {   (LPVOID)0x14047a1f0L,
            (LPVOID *)&CNetProcessGetContextHandle16_user,
            (LPVOID *)&CNetProcessGetContextHandle16_next,
            (LPVOID)cast_pointer_function(CNetProcessGetContextHandle16_wrapper),
            (LPVOID)cast_pointer_function((void*(CNetProcess::*)(uint16_t))&CNetProcess::GetContextHandle) },
        {   (LPVOID)0x140479f80L,
            (LPVOID *)&CNetProcessGetSendThreadFrame18_user,
            (LPVOID *)&CNetProcessGetSendThreadFrame18_next,
            (LPVOID)cast_pointer_function(CNetProcessGetSendThreadFrame18_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CNetProcess::*)())&CNetProcess::GetSendThreadFrame) },
        {   (LPVOID)0x14047a0d0L,
            (LPVOID *)&CNetProcessIOLogFileOperSetting20_user,
            (LPVOID *)&CNetProcessIOLogFileOperSetting20_next,
            (LPVOID)cast_pointer_function(CNetProcessIOLogFileOperSetting20_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)(bool))&CNetProcess::IOLogFileOperSetting) },
        {   (LPVOID)0x140478f90L,
            (LPVOID *)&CNetProcessLoadSendMsg22_user,
            (LPVOID *)&CNetProcessLoadSendMsg22_next,
            (LPVOID)cast_pointer_function(CNetProcessLoadSendMsg22_wrapper),
            (LPVOID)cast_pointer_function((int(CNetProcess::*)(unsigned int, char*, char*, uint16_t))&CNetProcess::LoadSendMsg) },
        {   (LPVOID)0x140479680L,
            (LPVOID *)&CNetProcessLoadSendMsg24_user,
            (LPVOID *)&CNetProcessLoadSendMsg24_next,
            (LPVOID)cast_pointer_function(CNetProcessLoadSendMsg24_wrapper),
            (LPVOID)cast_pointer_function((int(CNetProcess::*)(unsigned int, uint16_t, char*, uint16_t))&CNetProcess::LoadSendMsg) },
        {   (LPVOID)0x14047a040L,
            (LPVOID *)&CNetProcessLogFileOperSetting26_user,
            (LPVOID *)&CNetProcessLogFileOperSetting26_next,
            (LPVOID)cast_pointer_function(CNetProcessLogFileOperSetting26_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)(bool, bool, bool))&CNetProcess::LogFileOperSetting) },
        {   (LPVOID)0x140478100L,
            (LPVOID *)&CNetProcessNetEventThread28_user,
            (LPVOID *)&CNetProcessNetEventThread28_next,
            (LPVOID)cast_pointer_function(CNetProcessNetEventThread28_wrapper),
            (LPVOID)cast_pointer_function((void(*)(void*))&CNetProcess::NetEventThread) },
        {   (LPVOID)0x140477cb0L,
            (LPVOID *)&CNetProcessOnLoop30_user,
            (LPVOID *)&CNetProcessOnLoop30_next,
            (LPVOID)cast_pointer_function(CNetProcessOnLoop30_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::OnLoop) },
        {   (LPVOID)0x140477dd0L,
            (LPVOID *)&CNetProcessOnLoop_Receipt32_user,
            (LPVOID *)&CNetProcessOnLoop_Receipt32_next,
            (LPVOID)cast_pointer_function(CNetProcessOnLoop_Receipt32_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::OnLoop_Receipt) },
        {   (LPVOID)0x140479890L,
            (LPVOID *)&CNetProcessPushAnsyncConnect34_user,
            (LPVOID *)&CNetProcessPushAnsyncConnect34_next,
            (LPVOID)cast_pointer_function(CNetProcessPushAnsyncConnect34_wrapper),
            (LPVOID)cast_pointer_function((bool(CNetProcess::*)(unsigned int, struct sockaddr_in*))&CNetProcess::PushAnsyncConnect) },
        {   (LPVOID)0x140479fa0L,
            (LPVOID *)&CNetProcessPushCloseNode36_user,
            (LPVOID *)&CNetProcessPushCloseNode36_next,
            (LPVOID)cast_pointer_function(CNetProcessPushCloseNode36_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)(int))&CNetProcess::PushCloseNode) },
        {   (LPVOID)0x140479b30L,
            (LPVOID *)&CNetProcessPushKeyCheckList38_user,
            (LPVOID *)&CNetProcessPushKeyCheckList38_next,
            (LPVOID)cast_pointer_function(CNetProcessPushKeyCheckList38_wrapper),
            (LPVOID)cast_pointer_function((bool(CNetProcess::*)(unsigned int, unsigned int, unsigned int*, int))&CNetProcess::PushKeyCheckList) },
        {   (LPVOID)0x140478340L,
            (LPVOID *)&CNetProcessRecvThread40_user,
            (LPVOID *)&CNetProcessRecvThread40_next,
            (LPVOID)cast_pointer_function(CNetProcessRecvThread40_wrapper),
            (LPVOID)cast_pointer_function((void(*)(void*))&CNetProcess::RecvThread) },
        {   (LPVOID)0x1404777b0L,
            (LPVOID *)&CNetProcessRelease42_user,
            (LPVOID *)&CNetProcessRelease42_next,
            (LPVOID)cast_pointer_function(CNetProcessRelease42_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::Release) },
        {   (LPVOID)0x140478bd0L,
            (LPVOID *)&CNetProcessSendThread44_user,
            (LPVOID *)&CNetProcessSendThread44_next,
            (LPVOID)cast_pointer_function(CNetProcessSendThread44_wrapper),
            (LPVOID)cast_pointer_function((void(*)(void*))&CNetProcess::SendThread) },
        {   (LPVOID)0x14047a1a0L,
            (LPVOID *)&CNetProcessSetContextHandle46_user,
            (LPVOID *)&CNetProcessSetContextHandle46_next,
            (LPVOID)cast_pointer_function(CNetProcessSetContextHandle46_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)(void*, uint16_t))&CNetProcess::SetContextHandle) },
        {   (LPVOID)0x140476340L,
            (LPVOID *)&CNetProcessSetProcess48_user,
            (LPVOID *)&CNetProcessSetProcess48_next,
            (LPVOID)cast_pointer_function(CNetProcessSetProcess48_wrapper),
            (LPVOID)cast_pointer_function((bool(CNetProcess::*)(int, struct _NET_TYPE_PARAM*, struct CNetWorking*, bool))&CNetProcess::SetProcess) },
        {   (LPVOID)0x1404796e0L,
            (LPVOID *)&CNetProcessStartSpeedHackCheck50_user,
            (LPVOID *)&CNetProcessStartSpeedHackCheck50_next,
            (LPVOID)cast_pointer_function(CNetProcessStartSpeedHackCheck50_wrapper),
            (LPVOID)cast_pointer_function((bool(CNetProcess::*)(unsigned int, char*))&CNetProcess::StartSpeedHackCheck) },
        {   (LPVOID)0x140479a30L,
            (LPVOID *)&CNetProcess_CheckSend52_user,
            (LPVOID *)&CNetProcess_CheckSend52_next,
            (LPVOID)cast_pointer_function(CNetProcess_CheckSend52_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)(uint16_t))&CNetProcess::_CheckSend) },
        {   (LPVOID)0x14047a920L,
            (LPVOID *)&CNetProcess_CheckWaitKey54_user,
            (LPVOID *)&CNetProcess_CheckWaitKey54_next,
            (LPVOID)cast_pointer_function(CNetProcess_CheckWaitKey54_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::_CheckWaitKey) },
        {   (LPVOID)0x14047aed0L,
            (LPVOID *)&CNetProcess_CkeckKeyCertifyDeley56_user,
            (LPVOID *)&CNetProcess_CkeckKeyCertifyDeley56_next,
            (LPVOID)cast_pointer_function(CNetProcess_CkeckKeyCertifyDeley56_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::_CkeckKeyCertifyDeley) },
        {   (LPVOID)0x14047b010L,
            (LPVOID *)&CNetProcess_CkeckRecvBreak58_user,
            (LPVOID *)&CNetProcess_CkeckRecvBreak58_next,
            (LPVOID)cast_pointer_function(CNetProcess_CkeckRecvBreak58_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::_CkeckRecvBreak) },
        {   (LPVOID)0x14047ad20L,
            (LPVOID *)&CNetProcess_CkeckSpeedHackDeley60_user,
            (LPVOID *)&CNetProcess_CkeckSpeedHackDeley60_next,
            (LPVOID)cast_pointer_function(CNetProcess_CkeckSpeedHackDeley60_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::_CkeckSpeedHackDeley) },
        {   (LPVOID)0x14047aa40L,
            (LPVOID *)&CNetProcess_ForceCloseLoop62_user,
            (LPVOID *)&CNetProcess_ForceCloseLoop62_next,
            (LPVOID)cast_pointer_function(CNetProcess_ForceCloseLoop62_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::_ForceCloseLoop) },
        {   (LPVOID)0x14047a4f0L,
            (LPVOID *)&CNetProcess_InternalPacketProcess64_user,
            (LPVOID *)&CNetProcess_InternalPacketProcess64_next,
            (LPVOID)cast_pointer_function(CNetProcess_InternalPacketProcess64_wrapper),
            (LPVOID)cast_pointer_function((bool(CNetProcess::*)(unsigned int, struct _MSG_HEADER*, char*))&CNetProcess::_InternalPacketProcess) },
        {   (LPVOID)0x140478680L,
            (LPVOID *)&CNetProcess_PopRecvMsg66_user,
            (LPVOID *)&CNetProcess_PopRecvMsg66_next,
            (LPVOID)cast_pointer_function(CNetProcess_PopRecvMsg66_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)(uint16_t))&CNetProcess::_PopRecvMsg) },
        {   (LPVOID)0x14047a220L,
            (LPVOID *)&CNetProcess_Receipt68_user,
            (LPVOID *)&CNetProcess_Receipt68_next,
            (LPVOID)cast_pointer_function(CNetProcess_Receipt68_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::_Receipt) },
        {   (LPVOID)0x14047ab90L,
            (LPVOID *)&CNetProcess_ResponSpeedHack70_user,
            (LPVOID *)&CNetProcess_ResponSpeedHack70_next,
            (LPVOID)cast_pointer_function(CNetProcess_ResponSpeedHack70_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::_ResponSpeedHack) },
        {   (LPVOID)0x140478d60L,
            (LPVOID *)&CNetProcess_SendLoop72_user,
            (LPVOID *)&CNetProcess_SendLoop72_next,
            (LPVOID)cast_pointer_function(CNetProcess_SendLoop72_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)(unsigned int))&CNetProcess::_SendLoop) },
        {   (LPVOID)0x14047b0e0L,
            (LPVOID *)&CNetProcess_SendSpeedHackCheckMsg74_user,
            (LPVOID *)&CNetProcess_SendSpeedHackCheckMsg74_next,
            (LPVOID)cast_pointer_function(CNetProcess_SendSpeedHackCheckMsg74_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)(int))&CNetProcess::_SendSpeedHackCheckMsg) },
        {   (LPVOID)0x140477e10L,
            (LPVOID *)&CNetProcesswt_AcceptClient79_user,
            (LPVOID *)&CNetProcesswt_AcceptClient79_next,
            (LPVOID)cast_pointer_function(CNetProcesswt_AcceptClient79_wrapper),
            (LPVOID)cast_pointer_function((bool(CNetProcess::*)(unsigned int*))&CNetProcess::wt_AcceptClient) },
        {   (LPVOID)0x140477f00L,
            (LPVOID *)&CNetProcesswt_CloseClient81_user,
            (LPVOID *)&CNetProcesswt_CloseClient81_next,
            (LPVOID)cast_pointer_function(CNetProcesswt_CloseClient81_wrapper),
            (LPVOID)cast_pointer_function((bool(CNetProcess::*)(unsigned int))&CNetProcess::wt_CloseClient) },
        {   (LPVOID)0x140477400L,
            (LPVOID *)&CNetProcessdtor_CNetProcess83_user,
            (LPVOID *)&CNetProcessdtor_CNetProcess83_next,
            (LPVOID)cast_pointer_function(CNetProcessdtor_CNetProcess83_wrapper),
            (LPVOID)cast_pointer_function((void(CNetProcess::*)())&CNetProcess::dtor_CNetProcess) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
