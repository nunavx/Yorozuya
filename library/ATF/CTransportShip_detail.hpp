// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CTransportShip_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CTransportShipAlterState2_ptr CTransportShipAlterState2_next(nullptr);
        static info::CTransportShipAlterState2_clbk CTransportShipAlterState2_user(nullptr);
        static info::CTransportShipApplyTicketReserver4_ptr CTransportShipApplyTicketReserver4_next(nullptr);
        static info::CTransportShipApplyTicketReserver4_clbk CTransportShipApplyTicketReserver4_user(nullptr);
        static info::CTransportShipctor_CTransportShip6_ptr CTransportShipctor_CTransportShip6_next(nullptr);
        static info::CTransportShipctor_CTransportShip6_clbk CTransportShipctor_CTransportShip6_user(nullptr);
        static info::CTransportShipCheckHurry8_ptr CTransportShipCheckHurry8_next(nullptr);
        static info::CTransportShipCheckHurry8_clbk CTransportShipCheckHurry8_user(nullptr);
        static info::CTransportShipCheckTicket10_ptr CTransportShipCheckTicket10_next(nullptr);
        static info::CTransportShipCheckTicket10_clbk CTransportShipCheckTicket10_user(nullptr);
        static info::CTransportShipCheckTicket_Kick12_ptr CTransportShipCheckTicket_Kick12_next(nullptr);
        static info::CTransportShipCheckTicket_Kick12_clbk CTransportShipCheckTicket_Kick12_user(nullptr);
        static info::CTransportShipCheckTicket_Pass14_ptr CTransportShipCheckTicket_Pass14_next(nullptr);
        static info::CTransportShipCheckTicket_Pass14_clbk CTransportShipCheckTicket_Pass14_user(nullptr);
        static info::CTransportShipEnterMember16_ptr CTransportShipEnterMember16_next(nullptr);
        static info::CTransportShipEnterMember16_clbk CTransportShipEnterMember16_user(nullptr);
        static info::CTransportShipExitMember18_ptr CTransportShipExitMember18_next(nullptr);
        static info::CTransportShipExitMember18_clbk CTransportShipExitMember18_user(nullptr);
        static info::CTransportShipGetCurRideShipThisTicket20_ptr CTransportShipGetCurRideShipThisTicket20_next(nullptr);
        static info::CTransportShipGetCurRideShipThisTicket20_clbk CTransportShipGetCurRideShipThisTicket20_user(nullptr);
        static info::CTransportShipGetEmptyNewMember22_ptr CTransportShipGetEmptyNewMember22_next(nullptr);
        static info::CTransportShipGetEmptyNewMember22_clbk CTransportShipGetEmptyNewMember22_user(nullptr);
        static info::CTransportShipGetLeftTicketIncludeReserNum24_ptr CTransportShipGetLeftTicketIncludeReserNum24_next(nullptr);
        static info::CTransportShipGetLeftTicketIncludeReserNum24_clbk CTransportShipGetLeftTicketIncludeReserNum24_user(nullptr);
        static info::CTransportShipGetMapCurDirect26_ptr CTransportShipGetMapCurDirect26_next(nullptr);
        static info::CTransportShipGetMapCurDirect26_clbk CTransportShipGetMapCurDirect26_user(nullptr);
        static info::CTransportShipGetOutPortalIndex28_ptr CTransportShipGetOutPortalIndex28_next(nullptr);
        static info::CTransportShipGetOutPortalIndex28_clbk CTransportShipGetOutPortalIndex28_user(nullptr);
        static info::CTransportShipGetRideLimLevel30_ptr CTransportShipGetRideLimLevel30_next(nullptr);
        static info::CTransportShipGetRideLimLevel30_clbk CTransportShipGetRideLimLevel30_user(nullptr);
        static info::CTransportShipGetRideUpLimLevel32_ptr CTransportShipGetRideUpLimLevel32_next(nullptr);
        static info::CTransportShipGetRideUpLimLevel32_clbk CTransportShipGetRideUpLimLevel32_user(nullptr);
        static info::CTransportShipGetStartPosInShip34_ptr CTransportShipGetStartPosInShip34_next(nullptr);
        static info::CTransportShipGetStartPosInShip34_clbk CTransportShipGetStartPosInShip34_user(nullptr);
        static info::CTransportShipInitShip36_ptr CTransportShipInitShip36_next(nullptr);
        static info::CTransportShipInitShip36_clbk CTransportShipInitShip36_user(nullptr);
        static info::CTransportShipInitTicketReserver38_ptr CTransportShipInitTicketReserver38_next(nullptr);
        static info::CTransportShipInitTicketReserver38_clbk CTransportShipInitTicketReserver38_user(nullptr);
        static info::CTransportShipIsMemberBeforeLogoff40_ptr CTransportShipIsMemberBeforeLogoff40_next(nullptr);
        static info::CTransportShipIsMemberBeforeLogoff40_clbk CTransportShipIsMemberBeforeLogoff40_user(nullptr);
        static info::CTransportShipIsOldMember42_ptr CTransportShipIsOldMember42_next(nullptr);
        static info::CTransportShipIsOldMember42_clbk CTransportShipIsOldMember42_user(nullptr);
        static info::CTransportShipKickFreeMember44_ptr CTransportShipKickFreeMember44_next(nullptr);
        static info::CTransportShipKickFreeMember44_clbk CTransportShipKickFreeMember44_user(nullptr);
        static info::CTransportShipKickOldMember46_ptr CTransportShipKickOldMember46_next(nullptr);
        static info::CTransportShipKickOldMember46_clbk CTransportShipKickOldMember46_user(nullptr);
        static info::CTransportShipLoop48_ptr CTransportShipLoop48_next(nullptr);
        static info::CTransportShipLoop48_clbk CTransportShipLoop48_user(nullptr);
        static info::CTransportShipReEnterMember50_ptr CTransportShipReEnterMember50_next(nullptr);
        static info::CTransportShipReEnterMember50_clbk CTransportShipReEnterMember50_user(nullptr);
        static info::CTransportShipRenewOldMember52_ptr CTransportShipRenewOldMember52_next(nullptr);
        static info::CTransportShipRenewOldMember52_clbk CTransportShipRenewOldMember52_user(nullptr);
        static info::CTransportShipSendMsg_KickForSail54_ptr CTransportShipSendMsg_KickForSail54_next(nullptr);
        static info::CTransportShipSendMsg_KickForSail54_clbk CTransportShipSendMsg_KickForSail54_user(nullptr);
        static info::CTransportShipSendMsg_TicketCheck56_ptr CTransportShipSendMsg_TicketCheck56_next(nullptr);
        static info::CTransportShipSendMsg_TicketCheck56_clbk CTransportShipSendMsg_TicketCheck56_user(nullptr);
        static info::CTransportShipSendMsg_TransportShipState58_ptr CTransportShipSendMsg_TransportShipState58_next(nullptr);
        static info::CTransportShipSendMsg_TransportShipState58_clbk CTransportShipSendMsg_TransportShipState58_user(nullptr);
        static info::CTransportShipTicketting60_ptr CTransportShipTicketting60_next(nullptr);
        static info::CTransportShipTicketting60_clbk CTransportShipTicketting60_user(nullptr);
        static info::CTransportShipdtor_CTransportShip62_ptr CTransportShipdtor_CTransportShip62_next(nullptr);
        static info::CTransportShipdtor_CTransportShip62_clbk CTransportShipdtor_CTransportShip62_user(nullptr);
        
        static info::CTransportShip____mgr_memberctor___mgr_member2_ptr CTransportShip____mgr_memberctor___mgr_member2_next(nullptr);
        static info::CTransportShip____mgr_memberctor___mgr_member2_clbk CTransportShip____mgr_memberctor___mgr_member2_user(nullptr);
        static info::CTransportShip____mgr_memberinit4_ptr CTransportShip____mgr_memberinit4_next(nullptr);
        static info::CTransportShip____mgr_memberinit4_clbk CTransportShip____mgr_memberinit4_user(nullptr);
        static info::CTransportShip____mgr_memberis_fill6_ptr CTransportShip____mgr_memberis_fill6_next(nullptr);
        static info::CTransportShip____mgr_memberis_fill6_clbk CTransportShip____mgr_memberis_fill6_user(nullptr);
        
        static info::CTransportShip____mgr_ticketctor___mgr_ticket2_ptr CTransportShip____mgr_ticketctor___mgr_ticket2_next(nullptr);
        static info::CTransportShip____mgr_ticketctor___mgr_ticket2_clbk CTransportShip____mgr_ticketctor___mgr_ticket2_user(nullptr);
        static info::CTransportShip____mgr_ticketinit4_ptr CTransportShip____mgr_ticketinit4_next(nullptr);
        static info::CTransportShip____mgr_ticketinit4_clbk CTransportShip____mgr_ticketinit4_user(nullptr);
        
        static void CTransportShipAlterState2_wrapper(struct CTransportShip* _this, bool bAnchor, char byDirect, int nPassMin, int nNextSubEventTerm)
        {
           CTransportShipAlterState2_user(_this, bAnchor, byDirect, nPassMin, nNextSubEventTerm, CTransportShipAlterState2_next);
        };
        static void CTransportShipApplyTicketReserver4_wrapper(struct CTransportShip* _this)
        {
           CTransportShipApplyTicketReserver4_user(_this, CTransportShipApplyTicketReserver4_next);
        };
        static void CTransportShipctor_CTransportShip6_wrapper(struct CTransportShip* _this)
        {
           CTransportShipctor_CTransportShip6_user(_this, CTransportShipctor_CTransportShip6_next);
        };
        static void CTransportShipCheckHurry8_wrapper(struct CTransportShip* _this)
        {
           CTransportShipCheckHurry8_user(_this, CTransportShipCheckHurry8_next);
        };
        static void CTransportShipCheckTicket10_wrapper(struct CTransportShip* _this)
        {
           CTransportShipCheckTicket10_user(_this, CTransportShipCheckTicket10_next);
        };
        static void CTransportShipCheckTicket_Kick12_wrapper(struct CTransportShip* _this, struct CPlayer* pPtr, int nPortalIndex)
        {
           CTransportShipCheckTicket_Kick12_user(_this, pPtr, nPortalIndex, CTransportShipCheckTicket_Kick12_next);
        };
        static void CTransportShipCheckTicket_Pass14_wrapper(struct CTransportShip* _this, struct CPlayer* pPtr, int nPortalIndex)
        {
           CTransportShipCheckTicket_Pass14_user(_this, pPtr, nPortalIndex, CTransportShipCheckTicket_Pass14_next);
        };
        static void CTransportShipEnterMember16_wrapper(struct CTransportShip* _this, struct CPlayer* pEnter)
        {
           CTransportShipEnterMember16_user(_this, pEnter, CTransportShipEnterMember16_next);
        };
        static void CTransportShipExitMember18_wrapper(struct CTransportShip* _this, struct CPlayer* pExiter, bool bLogoff)
        {
           CTransportShipExitMember18_user(_this, pExiter, bLogoff, CTransportShipExitMember18_next);
        };
        static bool CTransportShipGetCurRideShipThisTicket20_wrapper(struct CTransportShip* _this, struct _TicketItem_fld* pTicketFld)
        {
           return CTransportShipGetCurRideShipThisTicket20_user(_this, pTicketFld, CTransportShipGetCurRideShipThisTicket20_next);
        };
        static struct CTransportShip::__mgr_member* CTransportShipGetEmptyNewMember22_wrapper(struct CTransportShip* _this)
        {
           return CTransportShipGetEmptyNewMember22_user(_this, CTransportShipGetEmptyNewMember22_next);
        };
        static int CTransportShipGetLeftTicketIncludeReserNum24_wrapper(struct CTransportShip* _this, char* pszTarMapCode, int nAdd)
        {
           return CTransportShipGetLeftTicketIncludeReserNum24_user(_this, pszTarMapCode, nAdd, CTransportShipGetLeftTicketIncludeReserNum24_next);
        };
        static struct CMapData* CTransportShipGetMapCurDirect26_wrapper(struct CTransportShip* _this)
        {
           return CTransportShipGetMapCurDirect26_user(_this, CTransportShipGetMapCurDirect26_next);
        };
        static int CTransportShipGetOutPortalIndex28_wrapper(struct CTransportShip* _this, int nRaceCode, char byExitDirect)
        {
           return CTransportShipGetOutPortalIndex28_user(_this, nRaceCode, byExitDirect, CTransportShipGetOutPortalIndex28_next);
        };
        static int CTransportShipGetRideLimLevel30_wrapper(struct CTransportShip* _this)
        {
           return CTransportShipGetRideLimLevel30_user(_this, CTransportShipGetRideLimLevel30_next);
        };
        static int CTransportShipGetRideUpLimLevel32_wrapper(struct CTransportShip* _this)
        {
           return CTransportShipGetRideUpLimLevel32_user(_this, CTransportShipGetRideUpLimLevel32_next);
        };
        static void CTransportShipGetStartPosInShip34_wrapper(struct CTransportShip* _this, float* pfPos)
        {
           CTransportShipGetStartPosInShip34_user(_this, pfPos, CTransportShipGetStartPosInShip34_next);
        };
        static bool CTransportShipInitShip36_wrapper(struct CTransportShip* _this, struct CMapData* pLinkShipMap, struct CMapData* pLinkMainbaseMap, struct CMapData* pLinkPlatformMap, char byRaceCode_Layer)
        {
           return CTransportShipInitShip36_user(_this, pLinkShipMap, pLinkMainbaseMap, pLinkPlatformMap, byRaceCode_Layer, CTransportShipInitShip36_next);
        };
        static void CTransportShipInitTicketReserver38_wrapper(struct CTransportShip* _this)
        {
           CTransportShipInitTicketReserver38_user(_this, CTransportShipInitTicketReserver38_next);
        };
        static bool CTransportShipIsMemberBeforeLogoff40_wrapper(struct CTransportShip* _this, unsigned int dwPlayerSerial)
        {
           return CTransportShipIsMemberBeforeLogoff40_user(_this, dwPlayerSerial, CTransportShipIsMemberBeforeLogoff40_next);
        };
        static bool CTransportShipIsOldMember42_wrapper(struct CTransportShip* _this, struct CPlayer* pMember)
        {
           return CTransportShipIsOldMember42_user(_this, pMember, CTransportShipIsOldMember42_next);
        };
        static void CTransportShipKickFreeMember44_wrapper(struct CTransportShip* _this)
        {
           CTransportShipKickFreeMember44_user(_this, CTransportShipKickFreeMember44_next);
        };
        static void CTransportShipKickOldMember46_wrapper(struct CTransportShip* _this, char byKickDirectCode)
        {
           CTransportShipKickOldMember46_user(_this, byKickDirectCode, CTransportShipKickOldMember46_next);
        };
        static void CTransportShipLoop48_wrapper(struct CTransportShip* _this)
        {
           CTransportShipLoop48_user(_this, CTransportShipLoop48_next);
        };
        static void CTransportShipReEnterMember50_wrapper(struct CTransportShip* _this, struct CPlayer* pExiter)
        {
           CTransportShipReEnterMember50_user(_this, pExiter, CTransportShipReEnterMember50_next);
        };
        static bool CTransportShipRenewOldMember52_wrapper(struct CTransportShip* _this, struct CPlayer* pMember)
        {
           return CTransportShipRenewOldMember52_user(_this, pMember, CTransportShipRenewOldMember52_next);
        };
        static void CTransportShipSendMsg_KickForSail54_wrapper(struct CTransportShip* _this, int n)
        {
           CTransportShipSendMsg_KickForSail54_user(_this, n, CTransportShipSendMsg_KickForSail54_next);
        };
        static void CTransportShipSendMsg_TicketCheck56_wrapper(struct CTransportShip* _this, int n, bool bPass, uint16_t wTicketSerial)
        {
           CTransportShipSendMsg_TicketCheck56_user(_this, n, bPass, wTicketSerial, CTransportShipSendMsg_TicketCheck56_next);
        };
        static void CTransportShipSendMsg_TransportShipState58_wrapper(struct CTransportShip* _this, int n)
        {
           CTransportShipSendMsg_TransportShipState58_user(_this, n, CTransportShipSendMsg_TransportShipState58_next);
        };
        static bool CTransportShipTicketting60_wrapper(struct CTransportShip* _this, struct CPlayer* pExiter)
        {
           return CTransportShipTicketting60_user(_this, pExiter, CTransportShipTicketting60_next);
        };
        static void CTransportShipdtor_CTransportShip62_wrapper(struct CTransportShip* _this)
        {
           CTransportShipdtor_CTransportShip62_user(_this, CTransportShipdtor_CTransportShip62_next);
        };
        
        static void CTransportShip____mgr_memberctor___mgr_member2_wrapper(struct CTransportShip::__mgr_member* _this)
        {
           CTransportShip____mgr_memberctor___mgr_member2_user(_this, CTransportShip____mgr_memberctor___mgr_member2_next);
        };
        static void CTransportShip____mgr_memberinit4_wrapper(struct CTransportShip::__mgr_member* _this)
        {
           CTransportShip____mgr_memberinit4_user(_this, CTransportShip____mgr_memberinit4_next);
        };
        static bool CTransportShip____mgr_memberis_fill6_wrapper(struct CTransportShip::__mgr_member* _this)
        {
           return CTransportShip____mgr_memberis_fill6_user(_this, CTransportShip____mgr_memberis_fill6_next);
        };
        
        static void CTransportShip____mgr_ticketctor___mgr_ticket2_wrapper(struct CTransportShip::__mgr_ticket* _this)
        {
           CTransportShip____mgr_ticketctor___mgr_ticket2_user(_this, CTransportShip____mgr_ticketctor___mgr_ticket2_next);
        };
        static void CTransportShip____mgr_ticketinit4_wrapper(struct CTransportShip::__mgr_ticket* _this)
        {
           CTransportShip____mgr_ticketinit4_user(_this, CTransportShip____mgr_ticketinit4_next);
        };
        
        static hook_record CTransportShip_functions[] = {
        {   (LPVOID)0x140263c00L,
            (LPVOID *)&CTransportShipAlterState2_user,
            (LPVOID *)&CTransportShipAlterState2_next,
            (LPVOID)cast_pointer_function(CTransportShipAlterState2_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)(bool, char, int, int))&CTransportShip::AlterState) },
        {   (LPVOID)0x140264f80L,
            (LPVOID *)&CTransportShipApplyTicketReserver4_user,
            (LPVOID *)&CTransportShipApplyTicketReserver4_next,
            (LPVOID)cast_pointer_function(CTransportShipApplyTicketReserver4_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::ApplyTicketReserver) },
        {   (LPVOID)0x140263820L,
            (LPVOID *)&CTransportShipctor_CTransportShip6_user,
            (LPVOID *)&CTransportShipctor_CTransportShip6_next,
            (LPVOID)cast_pointer_function(CTransportShipctor_CTransportShip6_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::ctor_CTransportShip) },
        {   (LPVOID)0x140263e80L,
            (LPVOID *)&CTransportShipCheckHurry8_user,
            (LPVOID *)&CTransportShipCheckHurry8_next,
            (LPVOID)cast_pointer_function(CTransportShipCheckHurry8_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::CheckHurry) },
        {   (LPVOID)0x140263dd0L,
            (LPVOID *)&CTransportShipCheckTicket10_user,
            (LPVOID *)&CTransportShipCheckTicket10_next,
            (LPVOID)cast_pointer_function(CTransportShipCheckTicket10_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::CheckTicket) },
        {   (LPVOID)0x1402642d0L,
            (LPVOID *)&CTransportShipCheckTicket_Kick12_user,
            (LPVOID *)&CTransportShipCheckTicket_Kick12_next,
            (LPVOID)cast_pointer_function(CTransportShipCheckTicket_Kick12_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)(struct CPlayer*, int))&CTransportShip::CheckTicket_Kick) },
        {   (LPVOID)0x140264170L,
            (LPVOID *)&CTransportShipCheckTicket_Pass14_user,
            (LPVOID *)&CTransportShipCheckTicket_Pass14_next,
            (LPVOID)cast_pointer_function(CTransportShipCheckTicket_Pass14_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)(struct CPlayer*, int))&CTransportShip::CheckTicket_Pass) },
        {   (LPVOID)0x140264830L,
            (LPVOID *)&CTransportShipEnterMember16_user,
            (LPVOID *)&CTransportShipEnterMember16_next,
            (LPVOID)cast_pointer_function(CTransportShipEnterMember16_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)(struct CPlayer*))&CTransportShip::EnterMember) },
        {   (LPVOID)0x1402649c0L,
            (LPVOID *)&CTransportShipExitMember18_user,
            (LPVOID *)&CTransportShipExitMember18_next,
            (LPVOID)cast_pointer_function(CTransportShipExitMember18_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)(struct CPlayer*, bool))&CTransportShip::ExitMember) },
        {   (LPVOID)0x140265040L,
            (LPVOID *)&CTransportShipGetCurRideShipThisTicket20_user,
            (LPVOID *)&CTransportShipGetCurRideShipThisTicket20_next,
            (LPVOID)cast_pointer_function(CTransportShipGetCurRideShipThisTicket20_wrapper),
            (LPVOID)cast_pointer_function((bool(CTransportShip::*)(struct _TicketItem_fld*))&CTransportShip::GetCurRideShipThisTicket) },
        {   (LPVOID)0x1402652a0L,
            (LPVOID *)&CTransportShipGetEmptyNewMember22_user,
            (LPVOID *)&CTransportShipGetEmptyNewMember22_next,
            (LPVOID)cast_pointer_function(CTransportShipGetEmptyNewMember22_wrapper),
            (LPVOID)cast_pointer_function((struct CTransportShip::__mgr_member*(CTransportShip::*)())&CTransportShip::GetEmptyNewMember) },
        {   (LPVOID)0x140264e00L,
            (LPVOID *)&CTransportShipGetLeftTicketIncludeReserNum24_user,
            (LPVOID *)&CTransportShipGetLeftTicketIncludeReserNum24_next,
            (LPVOID)cast_pointer_function(CTransportShipGetLeftTicketIncludeReserNum24_wrapper),
            (LPVOID)cast_pointer_function((int(CTransportShip::*)(char*, int))&CTransportShip::GetLeftTicketIncludeReserNum) },
        {   (LPVOID)0x140264dd0L,
            (LPVOID *)&CTransportShipGetMapCurDirect26_user,
            (LPVOID *)&CTransportShipGetMapCurDirect26_next,
            (LPVOID)cast_pointer_function(CTransportShipGetMapCurDirect26_wrapper),
            (LPVOID)cast_pointer_function((struct CMapData*(CTransportShip::*)())&CTransportShip::GetMapCurDirect) },
        {   (LPVOID)0x140265110L,
            (LPVOID *)&CTransportShipGetOutPortalIndex28_user,
            (LPVOID *)&CTransportShipGetOutPortalIndex28_next,
            (LPVOID)cast_pointer_function(CTransportShipGetOutPortalIndex28_wrapper),
            (LPVOID)cast_pointer_function((int(CTransportShip::*)(int, char))&CTransportShip::GetOutPortalIndex) },
        {   (LPVOID)0x140265140L,
            (LPVOID *)&CTransportShipGetRideLimLevel30_user,
            (LPVOID *)&CTransportShipGetRideLimLevel30_next,
            (LPVOID)cast_pointer_function(CTransportShipGetRideLimLevel30_wrapper),
            (LPVOID)cast_pointer_function((int(CTransportShip::*)())&CTransportShip::GetRideLimLevel) },
        {   (LPVOID)0x1402651f0L,
            (LPVOID *)&CTransportShipGetRideUpLimLevel32_user,
            (LPVOID *)&CTransportShipGetRideUpLimLevel32_next,
            (LPVOID)cast_pointer_function(CTransportShipGetRideUpLimLevel32_wrapper),
            (LPVOID)cast_pointer_function((int(CTransportShip::*)())&CTransportShip::GetRideUpLimLevel) },
        {   (LPVOID)0x140264d70L,
            (LPVOID *)&CTransportShipGetStartPosInShip34_user,
            (LPVOID *)&CTransportShipGetStartPosInShip34_next,
            (LPVOID)cast_pointer_function(CTransportShipGetStartPosInShip34_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)(float*))&CTransportShip::GetStartPosInShip) },
        {   (LPVOID)0x1402639c0L,
            (LPVOID *)&CTransportShipInitShip36_user,
            (LPVOID *)&CTransportShipInitShip36_next,
            (LPVOID)cast_pointer_function(CTransportShipInitShip36_wrapper),
            (LPVOID)cast_pointer_function((bool(CTransportShip::*)(struct CMapData*, struct CMapData*, struct CMapData*, char))&CTransportShip::InitShip) },
        {   (LPVOID)0x140264f10L,
            (LPVOID *)&CTransportShipInitTicketReserver38_user,
            (LPVOID *)&CTransportShipInitTicketReserver38_next,
            (LPVOID)cast_pointer_function(CTransportShipInitTicketReserver38_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::InitTicketReserver) },
        {   (LPVOID)0x140078ae0L,
            (LPVOID *)&CTransportShipIsMemberBeforeLogoff40_user,
            (LPVOID *)&CTransportShipIsMemberBeforeLogoff40_next,
            (LPVOID)cast_pointer_function(CTransportShipIsMemberBeforeLogoff40_wrapper),
            (LPVOID)cast_pointer_function((bool(CTransportShip::*)(unsigned int))&CTransportShip::IsMemberBeforeLogoff) },
        {   (LPVOID)0x140264cc0L,
            (LPVOID *)&CTransportShipIsOldMember42_user,
            (LPVOID *)&CTransportShipIsOldMember42_next,
            (LPVOID)cast_pointer_function(CTransportShipIsOldMember42_wrapper),
            (LPVOID)cast_pointer_function((bool(CTransportShip::*)(struct CPlayer*))&CTransportShip::IsOldMember) },
        {   (LPVOID)0x140263f10L,
            (LPVOID *)&CTransportShipKickFreeMember44_user,
            (LPVOID *)&CTransportShipKickFreeMember44_next,
            (LPVOID)cast_pointer_function(CTransportShipKickFreeMember44_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::KickFreeMember) },
        {   (LPVOID)0x140264030L,
            (LPVOID *)&CTransportShipKickOldMember46_user,
            (LPVOID *)&CTransportShipKickOldMember46_next,
            (LPVOID)cast_pointer_function(CTransportShipKickOldMember46_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)(char))&CTransportShip::KickOldMember) },
        {   (LPVOID)0x140263d70L,
            (LPVOID *)&CTransportShipLoop48_user,
            (LPVOID *)&CTransportShipLoop48_next,
            (LPVOID)cast_pointer_function(CTransportShipLoop48_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::Loop) },
        {   (LPVOID)0x140264b30L,
            (LPVOID *)&CTransportShipReEnterMember50_user,
            (LPVOID *)&CTransportShipReEnterMember50_next,
            (LPVOID)cast_pointer_function(CTransportShipReEnterMember50_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)(struct CPlayer*))&CTransportShip::ReEnterMember) },
        {   (LPVOID)0x140264bc0L,
            (LPVOID *)&CTransportShipRenewOldMember52_user,
            (LPVOID *)&CTransportShipRenewOldMember52_next,
            (LPVOID)cast_pointer_function(CTransportShipRenewOldMember52_wrapper),
            (LPVOID)cast_pointer_function((bool(CTransportShip::*)(struct CPlayer*))&CTransportShip::RenewOldMember) },
        {   (LPVOID)0x1402653d0L,
            (LPVOID *)&CTransportShipSendMsg_KickForSail54_user,
            (LPVOID *)&CTransportShipSendMsg_KickForSail54_next,
            (LPVOID)cast_pointer_function(CTransportShipSendMsg_KickForSail54_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)(int))&CTransportShip::SendMsg_KickForSail) },
        {   (LPVOID)0x140265330L,
            (LPVOID *)&CTransportShipSendMsg_TicketCheck56_user,
            (LPVOID *)&CTransportShipSendMsg_TicketCheck56_next,
            (LPVOID)cast_pointer_function(CTransportShipSendMsg_TicketCheck56_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)(int, bool, uint16_t))&CTransportShip::SendMsg_TicketCheck) },
        {   (LPVOID)0x140265450L,
            (LPVOID *)&CTransportShipSendMsg_TransportShipState58_user,
            (LPVOID *)&CTransportShipSendMsg_TransportShipState58_next,
            (LPVOID)cast_pointer_function(CTransportShipSendMsg_TransportShipState58_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)(int))&CTransportShip::SendMsg_TransportShipState) },
        {   (LPVOID)0x140264450L,
            (LPVOID *)&CTransportShipTicketting60_user,
            (LPVOID *)&CTransportShipTicketting60_next,
            (LPVOID)cast_pointer_function(CTransportShipTicketting60_wrapper),
            (LPVOID)cast_pointer_function((bool(CTransportShip::*)(struct CPlayer*))&CTransportShip::Ticketting) },
        {   (LPVOID)0x140265e00L,
            (LPVOID *)&CTransportShipdtor_CTransportShip62_user,
            (LPVOID *)&CTransportShipdtor_CTransportShip62_next,
            (LPVOID)cast_pointer_function(CTransportShipdtor_CTransportShip62_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::*)())&CTransportShip::dtor_CTransportShip) },
        
        {   (LPVOID)0x140265d20L,
            (LPVOID *)&CTransportShip____mgr_memberctor___mgr_member2_user,
            (LPVOID *)&CTransportShip____mgr_memberctor___mgr_member2_next,
            (LPVOID)cast_pointer_function(CTransportShip____mgr_memberctor___mgr_member2_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::__mgr_member::*)())&CTransportShip::__mgr_member::ctor___mgr_member) },
        {   (LPVOID)0x140265dc0L,
            (LPVOID *)&CTransportShip____mgr_memberinit4_user,
            (LPVOID *)&CTransportShip____mgr_memberinit4_next,
            (LPVOID)cast_pointer_function(CTransportShip____mgr_memberinit4_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::__mgr_member::*)())&CTransportShip::__mgr_member::init) },
        {   (LPVOID)0x140265de0L,
            (LPVOID *)&CTransportShip____mgr_memberis_fill6_user,
            (LPVOID *)&CTransportShip____mgr_memberis_fill6_next,
            (LPVOID)cast_pointer_function(CTransportShip____mgr_memberis_fill6_wrapper),
            (LPVOID)cast_pointer_function((bool(CTransportShip::__mgr_member::*)())&CTransportShip::__mgr_member::is_fill) },
        
        {   (LPVOID)0x140265d40L,
            (LPVOID *)&CTransportShip____mgr_ticketctor___mgr_ticket2_user,
            (LPVOID *)&CTransportShip____mgr_ticketctor___mgr_ticket2_next,
            (LPVOID)cast_pointer_function(CTransportShip____mgr_ticketctor___mgr_ticket2_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::__mgr_ticket::*)())&CTransportShip::__mgr_ticket::ctor___mgr_ticket) },
        {   (LPVOID)0x140265d90L,
            (LPVOID *)&CTransportShip____mgr_ticketinit4_user,
            (LPVOID *)&CTransportShip____mgr_ticketinit4_next,
            (LPVOID)cast_pointer_function(CTransportShip____mgr_ticketinit4_wrapper),
            (LPVOID)cast_pointer_function((void(CTransportShip::__mgr_ticket::*)())&CTransportShip::__mgr_ticket::init) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
