// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CItemBox_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CItemBoxctor_CItemBox2_ptr CItemBoxctor_CItemBox2_next(nullptr);
        static info::CItemBoxctor_CItemBox2_clbk CItemBoxctor_CItemBox2_user(nullptr);
        static info::CItemBoxCreate4_ptr CItemBoxCreate4_next(nullptr);
        static info::CItemBoxCreate4_clbk CItemBoxCreate4_user(nullptr);
        static info::CItemBoxDestroy6_ptr CItemBoxDestroy6_next(nullptr);
        static info::CItemBoxDestroy6_clbk CItemBoxDestroy6_user(nullptr);
        static info::CItemBoxInit8_ptr CItemBoxInit8_next(nullptr);
        static info::CItemBoxInit8_clbk CItemBoxInit8_user(nullptr);
        static info::CItemBoxIsTakeRight10_ptr CItemBoxIsTakeRight10_next(nullptr);
        static info::CItemBoxIsTakeRight10_clbk CItemBoxIsTakeRight10_user(nullptr);
        static info::CItemBoxLoop12_ptr CItemBoxLoop12_next(nullptr);
        static info::CItemBoxLoop12_clbk CItemBoxLoop12_user(nullptr);
        static info::CItemBoxSendMsg_Create14_ptr CItemBoxSendMsg_Create14_next(nullptr);
        static info::CItemBoxSendMsg_Create14_clbk CItemBoxSendMsg_Create14_user(nullptr);
        static info::CItemBoxSendMsg_Destroy16_ptr CItemBoxSendMsg_Destroy16_next(nullptr);
        static info::CItemBoxSendMsg_Destroy16_clbk CItemBoxSendMsg_Destroy16_user(nullptr);
        static info::CItemBoxSendMsg_FixPosition18_ptr CItemBoxSendMsg_FixPosition18_next(nullptr);
        static info::CItemBoxSendMsg_FixPosition18_clbk CItemBoxSendMsg_FixPosition18_user(nullptr);
        static info::CItemBoxSendMsg_StateChange20_ptr CItemBoxSendMsg_StateChange20_next(nullptr);
        static info::CItemBoxSendMsg_StateChange20_clbk CItemBoxSendMsg_StateChange20_user(nullptr);
        static info::CItemBoxdtor_CItemBox26_ptr CItemBoxdtor_CItemBox26_next(nullptr);
        static info::CItemBoxdtor_CItemBox26_clbk CItemBoxdtor_CItemBox26_user(nullptr);
        
        static void CItemBoxctor_CItemBox2_wrapper(struct CItemBox* _this)
        {
           CItemBoxctor_CItemBox2_user(_this, CItemBoxctor_CItemBox2_next);
        };
        static bool CItemBoxCreate4_wrapper(struct CItemBox* _this, struct _itembox_create_setdata* pParam, bool bHide)
        {
           return CItemBoxCreate4_user(_this, pParam, bHide, CItemBoxCreate4_next);
        };
        static bool CItemBoxDestroy6_wrapper(struct CItemBox* _this)
        {
           return CItemBoxDestroy6_user(_this, CItemBoxDestroy6_next);
        };
        static void CItemBoxInit8_wrapper(struct CItemBox* _this, struct _object_id* pID)
        {
           CItemBoxInit8_user(_this, pID, CItemBoxInit8_next);
        };
        static bool CItemBoxIsTakeRight10_wrapper(struct CItemBox* _this, struct CPlayer* pOne)
        {
           return CItemBoxIsTakeRight10_user(_this, pOne, CItemBoxIsTakeRight10_next);
        };
        static void CItemBoxLoop12_wrapper(struct CItemBox* _this)
        {
           CItemBoxLoop12_user(_this, CItemBoxLoop12_next);
        };
        static void CItemBoxSendMsg_Create14_wrapper(struct CItemBox* _this)
        {
           CItemBoxSendMsg_Create14_user(_this, CItemBoxSendMsg_Create14_next);
        };
        static void CItemBoxSendMsg_Destroy16_wrapper(struct CItemBox* _this)
        {
           CItemBoxSendMsg_Destroy16_user(_this, CItemBoxSendMsg_Destroy16_next);
        };
        static void CItemBoxSendMsg_FixPosition18_wrapper(struct CItemBox* _this, int n)
        {
           CItemBoxSendMsg_FixPosition18_user(_this, n, CItemBoxSendMsg_FixPosition18_next);
        };
        static void CItemBoxSendMsg_StateChange20_wrapper(struct CItemBox* _this)
        {
           CItemBoxSendMsg_StateChange20_user(_this, CItemBoxSendMsg_StateChange20_next);
        };
        static void CItemBoxdtor_CItemBox26_wrapper(struct CItemBox* _this)
        {
           CItemBoxdtor_CItemBox26_user(_this, CItemBoxdtor_CItemBox26_next);
        };
        
        static hook_record CItemBox_functions[] = {
        {   (LPVOID)0x1401655f0L,
            (LPVOID *)&CItemBoxctor_CItemBox2_user,
            (LPVOID *)&CItemBoxctor_CItemBox2_next,
            (LPVOID)cast_pointer_function(CItemBoxctor_CItemBox2_wrapper),
            (LPVOID)cast_pointer_function((void(CItemBox::*)())&CItemBox::ctor_CItemBox) },
        {   (LPVOID)0x140165930L,
            (LPVOID *)&CItemBoxCreate4_user,
            (LPVOID *)&CItemBoxCreate4_next,
            (LPVOID)cast_pointer_function(CItemBoxCreate4_wrapper),
            (LPVOID)cast_pointer_function((bool(CItemBox::*)(struct _itembox_create_setdata*, bool))&CItemBox::Create) },
        {   (LPVOID)0x140165ea0L,
            (LPVOID *)&CItemBoxDestroy6_user,
            (LPVOID *)&CItemBoxDestroy6_next,
            (LPVOID)cast_pointer_function(CItemBoxDestroy6_wrapper),
            (LPVOID)cast_pointer_function((bool(CItemBox::*)())&CItemBox::Destroy) },
        {   (LPVOID)0x140165820L,
            (LPVOID *)&CItemBoxInit8_user,
            (LPVOID *)&CItemBoxInit8_next,
            (LPVOID)cast_pointer_function(CItemBoxInit8_wrapper),
            (LPVOID)cast_pointer_function((void(CItemBox::*)(struct _object_id*))&CItemBox::Init) },
        {   (LPVOID)0x140166180L,
            (LPVOID *)&CItemBoxIsTakeRight10_user,
            (LPVOID *)&CItemBoxIsTakeRight10_next,
            (LPVOID)cast_pointer_function(CItemBoxIsTakeRight10_wrapper),
            (LPVOID)cast_pointer_function((bool(CItemBox::*)(struct CPlayer*))&CItemBox::IsTakeRight) },
        {   (LPVOID)0x140166000L,
            (LPVOID *)&CItemBoxLoop12_user,
            (LPVOID *)&CItemBoxLoop12_next,
            (LPVOID)cast_pointer_function(CItemBoxLoop12_wrapper),
            (LPVOID)cast_pointer_function((void(CItemBox::*)())&CItemBox::Loop) },
        {   (LPVOID)0x140166660L,
            (LPVOID *)&CItemBoxSendMsg_Create14_user,
            (LPVOID *)&CItemBoxSendMsg_Create14_next,
            (LPVOID)cast_pointer_function(CItemBoxSendMsg_Create14_wrapper),
            (LPVOID)cast_pointer_function((void(CItemBox::*)())&CItemBox::SendMsg_Create) },
        {   (LPVOID)0x140166830L,
            (LPVOID *)&CItemBoxSendMsg_Destroy16_user,
            (LPVOID *)&CItemBoxSendMsg_Destroy16_next,
            (LPVOID)cast_pointer_function(CItemBoxSendMsg_Destroy16_wrapper),
            (LPVOID)cast_pointer_function((void(CItemBox::*)())&CItemBox::SendMsg_Destroy) },
        {   (LPVOID)0x1401668b0L,
            (LPVOID *)&CItemBoxSendMsg_FixPosition18_user,
            (LPVOID *)&CItemBoxSendMsg_FixPosition18_next,
            (LPVOID)cast_pointer_function(CItemBoxSendMsg_FixPosition18_wrapper),
            (LPVOID)cast_pointer_function((void(CItemBox::*)(int))&CItemBox::SendMsg_FixPosition) },
        {   (LPVOID)0x140166a10L,
            (LPVOID *)&CItemBoxSendMsg_StateChange20_user,
            (LPVOID *)&CItemBoxSendMsg_StateChange20_next,
            (LPVOID)cast_pointer_function(CItemBoxSendMsg_StateChange20_wrapper),
            (LPVOID)cast_pointer_function((void(CItemBox::*)())&CItemBox::SendMsg_StateChange) },
        {   (LPVOID)0x140165790L,
            (LPVOID *)&CItemBoxdtor_CItemBox26_user,
            (LPVOID *)&CItemBoxdtor_CItemBox26_next,
            (LPVOID)cast_pointer_function(CItemBoxdtor_CItemBox26_wrapper),
            (LPVOID)cast_pointer_function((void(CItemBox::*)())&CItemBox::dtor_CItemBox) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
