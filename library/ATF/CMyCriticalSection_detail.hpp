// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CMyCriticalSection_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CMyCriticalSectionctor_CMyCriticalSection2_ptr CMyCriticalSectionctor_CMyCriticalSection2_next(nullptr);
        static info::CMyCriticalSectionctor_CMyCriticalSection2_clbk CMyCriticalSectionctor_CMyCriticalSection2_user(nullptr);
        static info::CMyCriticalSectionLock4_ptr CMyCriticalSectionLock4_next(nullptr);
        static info::CMyCriticalSectionLock4_clbk CMyCriticalSectionLock4_user(nullptr);
        static info::CMyCriticalSectionUnlock6_ptr CMyCriticalSectionUnlock6_next(nullptr);
        static info::CMyCriticalSectionUnlock6_clbk CMyCriticalSectionUnlock6_user(nullptr);
        static info::CMyCriticalSectiondtor_CMyCriticalSection11_ptr CMyCriticalSectiondtor_CMyCriticalSection11_next(nullptr);
        static info::CMyCriticalSectiondtor_CMyCriticalSection11_clbk CMyCriticalSectiondtor_CMyCriticalSection11_user(nullptr);
        
        static void CMyCriticalSectionctor_CMyCriticalSection2_wrapper(struct CMyCriticalSection* _this)
        {
           CMyCriticalSectionctor_CMyCriticalSection2_user(_this, CMyCriticalSectionctor_CMyCriticalSection2_next);
        };
        static void CMyCriticalSectionLock4_wrapper(struct CMyCriticalSection* _this)
        {
           CMyCriticalSectionLock4_user(_this, CMyCriticalSectionLock4_next);
        };
        static void CMyCriticalSectionUnlock6_wrapper(struct CMyCriticalSection* _this)
        {
           CMyCriticalSectionUnlock6_user(_this, CMyCriticalSectionUnlock6_next);
        };
        static void CMyCriticalSectiondtor_CMyCriticalSection11_wrapper(struct CMyCriticalSection* _this)
        {
           CMyCriticalSectiondtor_CMyCriticalSection11_user(_this, CMyCriticalSectiondtor_CMyCriticalSection11_next);
        };
        
        static hook_record CMyCriticalSection_functions[] = {
        {   (LPVOID)0x140438c30L,
            (LPVOID *)&CMyCriticalSectionctor_CMyCriticalSection2_user,
            (LPVOID *)&CMyCriticalSectionctor_CMyCriticalSection2_next,
            (LPVOID)cast_pointer_function(CMyCriticalSectionctor_CMyCriticalSection2_wrapper),
            (LPVOID)cast_pointer_function((void(CMyCriticalSection::*)())&CMyCriticalSection::ctor_CMyCriticalSection) },
        {   (LPVOID)0x140438ce0L,
            (LPVOID *)&CMyCriticalSectionLock4_user,
            (LPVOID *)&CMyCriticalSectionLock4_next,
            (LPVOID)cast_pointer_function(CMyCriticalSectionLock4_wrapper),
            (LPVOID)cast_pointer_function((void(CMyCriticalSection::*)())&CMyCriticalSection::Lock) },
        {   (LPVOID)0x140438d30L,
            (LPVOID *)&CMyCriticalSectionUnlock6_user,
            (LPVOID *)&CMyCriticalSectionUnlock6_next,
            (LPVOID)cast_pointer_function(CMyCriticalSectionUnlock6_wrapper),
            (LPVOID)cast_pointer_function((void(CMyCriticalSection::*)())&CMyCriticalSection::Unlock) },
        {   (LPVOID)0x140438c90L,
            (LPVOID *)&CMyCriticalSectiondtor_CMyCriticalSection11_user,
            (LPVOID *)&CMyCriticalSectiondtor_CMyCriticalSection11_next,
            (LPVOID)cast_pointer_function(CMyCriticalSectiondtor_CMyCriticalSection11_wrapper),
            (LPVOID)cast_pointer_function((void(CMyCriticalSection::*)())&CMyCriticalSection::dtor_CMyCriticalSection) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
