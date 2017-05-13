// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CCashDbWorkerGB_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CCashDbWorkerGBctor_CCashDbWorkerGB2_ptr CCashDbWorkerGBctor_CCashDbWorkerGB2_next(nullptr);
        static info::CCashDbWorkerGBctor_CCashDbWorkerGB2_clbk CCashDbWorkerGBctor_CCashDbWorkerGB2_user(nullptr);
        static info::CCashDbWorkerGBCompleteWork4_ptr CCashDbWorkerGBCompleteWork4_next(nullptr);
        static info::CCashDbWorkerGBCompleteWork4_clbk CCashDbWorkerGBCompleteWork4_user(nullptr);
        static info::CCashDbWorkerGBDoWork6_ptr CCashDbWorkerGBDoWork6_next(nullptr);
        static info::CCashDbWorkerGBDoWork6_clbk CCashDbWorkerGBDoWork6_user(nullptr);
        static info::CCashDbWorkerGBGetUseCashQueryStr8_ptr CCashDbWorkerGBGetUseCashQueryStr8_next(nullptr);
        static info::CCashDbWorkerGBGetUseCashQueryStr8_clbk CCashDbWorkerGBGetUseCashQueryStr8_user(nullptr);
        static info::CCashDbWorkerGBInitialize10_ptr CCashDbWorkerGBInitialize10_next(nullptr);
        static info::CCashDbWorkerGBInitialize10_clbk CCashDbWorkerGBInitialize10_user(nullptr);
        static info::CCashDbWorkerGBRelease12_ptr CCashDbWorkerGBRelease12_next(nullptr);
        static info::CCashDbWorkerGBRelease12_clbk CCashDbWorkerGBRelease12_user(nullptr);
        static info::CCashDbWorkerGB_init_database14_ptr CCashDbWorkerGB_init_database14_next(nullptr);
        static info::CCashDbWorkerGB_init_database14_clbk CCashDbWorkerGB_init_database14_user(nullptr);
        static info::CCashDbWorkerGB_wait_tsk_cash_select16_ptr CCashDbWorkerGB_wait_tsk_cash_select16_next(nullptr);
        static info::CCashDbWorkerGB_wait_tsk_cash_select16_clbk CCashDbWorkerGB_wait_tsk_cash_select16_user(nullptr);
        static info::CCashDbWorkerGB_wait_tsk_cash_update18_ptr CCashDbWorkerGB_wait_tsk_cash_update18_next(nullptr);
        static info::CCashDbWorkerGB_wait_tsk_cash_update18_clbk CCashDbWorkerGB_wait_tsk_cash_update18_user(nullptr);
        static info::CCashDbWorkerGBdtor_CCashDbWorkerGB23_ptr CCashDbWorkerGBdtor_CCashDbWorkerGB23_next(nullptr);
        static info::CCashDbWorkerGBdtor_CCashDbWorkerGB23_clbk CCashDbWorkerGBdtor_CCashDbWorkerGB23_user(nullptr);
        
        static void CCashDbWorkerGBctor_CCashDbWorkerGB2_wrapper(struct CCashDbWorkerGB* _this)
        {
           CCashDbWorkerGBctor_CCashDbWorkerGB2_user(_this, CCashDbWorkerGBctor_CCashDbWorkerGB2_next);
        };
        static void CCashDbWorkerGBCompleteWork4_wrapper(struct CCashDbWorkerGB* _this)
        {
           CCashDbWorkerGBCompleteWork4_user(_this, CCashDbWorkerGBCompleteWork4_next);
        };
        static void CCashDbWorkerGBDoWork6_wrapper(struct CCashDbWorkerGB* _this)
        {
           CCashDbWorkerGBDoWork6_user(_this, CCashDbWorkerGBDoWork6_next);
        };
        static void CCashDbWorkerGBGetUseCashQueryStr8_wrapper(struct CCashDbWorkerGB* _this, struct _param_cash_update* rParam, int nIdx, char* wszQuery, uint64_t tBufferSize)
        {
           CCashDbWorkerGBGetUseCashQueryStr8_user(_this, rParam, nIdx, wszQuery, tBufferSize, CCashDbWorkerGBGetUseCashQueryStr8_next);
        };
        static bool CCashDbWorkerGBInitialize10_wrapper(struct CCashDbWorkerGB* _this)
        {
           return CCashDbWorkerGBInitialize10_user(_this, CCashDbWorkerGBInitialize10_next);
        };
        static void CCashDbWorkerGBRelease12_wrapper(struct CCashDbWorkerGB* _this)
        {
           CCashDbWorkerGBRelease12_user(_this, CCashDbWorkerGBRelease12_next);
        };
        static bool CCashDbWorkerGB_init_database14_wrapper(struct CCashDbWorkerGB* _this)
        {
           return CCashDbWorkerGB_init_database14_user(_this, CCashDbWorkerGB_init_database14_next);
        };
        static int CCashDbWorkerGB_wait_tsk_cash_select16_wrapper(struct CCashDbWorkerGB* _this, struct Task* pkTsk, int nIdx)
        {
           return CCashDbWorkerGB_wait_tsk_cash_select16_user(_this, pkTsk, nIdx, CCashDbWorkerGB_wait_tsk_cash_select16_next);
        };
        static int CCashDbWorkerGB_wait_tsk_cash_update18_wrapper(struct CCashDbWorkerGB* _this, struct Task* pkTsk, int nIdx)
        {
           return CCashDbWorkerGB_wait_tsk_cash_update18_user(_this, pkTsk, nIdx, CCashDbWorkerGB_wait_tsk_cash_update18_next);
        };
        static void CCashDbWorkerGBdtor_CCashDbWorkerGB23_wrapper(struct CCashDbWorkerGB* _this)
        {
           CCashDbWorkerGBdtor_CCashDbWorkerGB23_user(_this, CCashDbWorkerGBdtor_CCashDbWorkerGB23_next);
        };
        
        static hook_record CCashDbWorkerGB_functions[] = {
        {   (LPVOID)0x14022c340L,
            (LPVOID *)&CCashDbWorkerGBctor_CCashDbWorkerGB2_user,
            (LPVOID *)&CCashDbWorkerGBctor_CCashDbWorkerGB2_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerGBctor_CCashDbWorkerGB2_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerGB::*)())&CCashDbWorkerGB::ctor_CCashDbWorkerGB) },
        {   (LPVOID)0x140318ec0L,
            (LPVOID *)&CCashDbWorkerGBCompleteWork4_user,
            (LPVOID *)&CCashDbWorkerGBCompleteWork4_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerGBCompleteWork4_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerGB::*)())&CCashDbWorkerGB::CompleteWork) },
        {   (LPVOID)0x1403193d0L,
            (LPVOID *)&CCashDbWorkerGBDoWork6_user,
            (LPVOID *)&CCashDbWorkerGBDoWork6_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerGBDoWork6_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerGB::*)())&CCashDbWorkerGB::DoWork) },
        {   (LPVOID)0x1403190b0L,
            (LPVOID *)&CCashDbWorkerGBGetUseCashQueryStr8_user,
            (LPVOID *)&CCashDbWorkerGBGetUseCashQueryStr8_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerGBGetUseCashQueryStr8_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerGB::*)(struct _param_cash_update*, int, char*, uint64_t))&CCashDbWorkerGB::GetUseCashQueryStr) },
        {   (LPVOID)0x140318e40L,
            (LPVOID *)&CCashDbWorkerGBInitialize10_user,
            (LPVOID *)&CCashDbWorkerGBInitialize10_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerGBInitialize10_wrapper),
            (LPVOID)cast_pointer_function((bool(CCashDbWorkerGB::*)())&CCashDbWorkerGB::Initialize) },
        {   (LPVOID)0x140318de0L,
            (LPVOID *)&CCashDbWorkerGBRelease12_user,
            (LPVOID *)&CCashDbWorkerGBRelease12_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerGBRelease12_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerGB::*)())&CCashDbWorkerGB::Release) },
        {   (LPVOID)0x1403192e0L,
            (LPVOID *)&CCashDbWorkerGB_init_database14_user,
            (LPVOID *)&CCashDbWorkerGB_init_database14_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerGB_init_database14_wrapper),
            (LPVOID)cast_pointer_function((bool(CCashDbWorkerGB::*)())&CCashDbWorkerGB::_init_database) },
        {   (LPVOID)0x140319040L,
            (LPVOID *)&CCashDbWorkerGB_wait_tsk_cash_select16_user,
            (LPVOID *)&CCashDbWorkerGB_wait_tsk_cash_select16_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerGB_wait_tsk_cash_select16_wrapper),
            (LPVOID)cast_pointer_function((int(CCashDbWorkerGB::*)(struct Task*, int))&CCashDbWorkerGB::_wait_tsk_cash_select) },
        {   (LPVOID)0x140319200L,
            (LPVOID *)&CCashDbWorkerGB_wait_tsk_cash_update18_user,
            (LPVOID *)&CCashDbWorkerGB_wait_tsk_cash_update18_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerGB_wait_tsk_cash_update18_wrapper),
            (LPVOID)cast_pointer_function((int(CCashDbWorkerGB::*)(struct Task*, int))&CCashDbWorkerGB::_wait_tsk_cash_update) },
        {   (LPVOID)0x14022c410L,
            (LPVOID *)&CCashDbWorkerGBdtor_CCashDbWorkerGB23_user,
            (LPVOID *)&CCashDbWorkerGBdtor_CCashDbWorkerGB23_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerGBdtor_CCashDbWorkerGB23_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerGB::*)())&CCashDbWorkerGB::dtor_CCashDbWorkerGB) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
