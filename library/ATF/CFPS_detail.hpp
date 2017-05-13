// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CFPS_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CFPSctor_CFPS2_ptr CFPSctor_CFPS2_next(nullptr);
        static info::CFPSctor_CFPS2_clbk CFPSctor_CFPS2_user(nullptr);
        static info::CFPSCalcFPS4_ptr CFPSCalcFPS4_next(nullptr);
        static info::CFPSCalcFPS4_clbk CFPSCalcFPS4_user(nullptr);
        static info::CFPSGetFPS6_ptr CFPSGetFPS6_next(nullptr);
        static info::CFPSGetFPS6_clbk CFPSGetFPS6_user(nullptr);
        static info::CFPSdtor_CFPS11_ptr CFPSdtor_CFPS11_next(nullptr);
        static info::CFPSdtor_CFPS11_clbk CFPSdtor_CFPS11_user(nullptr);
        
        static void CFPSctor_CFPS2_wrapper(struct CFPS* _this)
        {
           CFPSctor_CFPS2_user(_this, CFPSctor_CFPS2_next);
        };
        static void CFPSCalcFPS4_wrapper(struct CFPS* _this)
        {
           CFPSCalcFPS4_user(_this, CFPSCalcFPS4_next);
        };
        static unsigned int CFPSGetFPS6_wrapper(struct CFPS* _this)
        {
           return CFPSGetFPS6_user(_this, CFPSGetFPS6_next);
        };
        static void CFPSdtor_CFPS11_wrapper(struct CFPS* _this)
        {
           CFPSdtor_CFPS11_user(_this, CFPSdtor_CFPS11_next);
        };
        
        static hook_record CFPS_functions[] = {
        {   (LPVOID)0x140438f50L,
            (LPVOID *)&CFPSctor_CFPS2_user,
            (LPVOID *)&CFPSctor_CFPS2_next,
            (LPVOID)cast_pointer_function(CFPSctor_CFPS2_wrapper),
            (LPVOID)cast_pointer_function((void(CFPS::*)())&CFPS::ctor_CFPS) },
        {   (LPVOID)0x140438fc0L,
            (LPVOID *)&CFPSCalcFPS4_user,
            (LPVOID *)&CFPSCalcFPS4_next,
            (LPVOID)cast_pointer_function(CFPSCalcFPS4_wrapper),
            (LPVOID)cast_pointer_function((void(CFPS::*)())&CFPS::CalcFPS) },
        {   (LPVOID)0x140439080L,
            (LPVOID *)&CFPSGetFPS6_user,
            (LPVOID *)&CFPSGetFPS6_next,
            (LPVOID)cast_pointer_function(CFPSGetFPS6_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(CFPS::*)())&CFPS::GetFPS) },
        {   (LPVOID)0x14043a880L,
            (LPVOID *)&CFPSdtor_CFPS11_user,
            (LPVOID *)&CFPSdtor_CFPS11_next,
            (LPVOID)cast_pointer_function(CFPSdtor_CFPS11_wrapper),
            (LPVOID)cast_pointer_function((void(CFPS::*)())&CFPS::dtor_CFPS) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
