// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CCashDbWorkerKR_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CCashDbWorkerKRctor_CCashDbWorkerKR2_ptr CCashDbWorkerKRctor_CCashDbWorkerKR2_next(nullptr);
        static info::CCashDbWorkerKRctor_CCashDbWorkerKR2_clbk CCashDbWorkerKRctor_CCashDbWorkerKR2_user(nullptr);
        static info::CCashDbWorkerKRdtor_CCashDbWorkerKR7_ptr CCashDbWorkerKRdtor_CCashDbWorkerKR7_next(nullptr);
        static info::CCashDbWorkerKRdtor_CCashDbWorkerKR7_clbk CCashDbWorkerKRdtor_CCashDbWorkerKR7_user(nullptr);
        
        static void CCashDbWorkerKRctor_CCashDbWorkerKR2_wrapper(struct CCashDbWorkerKR* _this)
        {
           CCashDbWorkerKRctor_CCashDbWorkerKR2_user(_this, CCashDbWorkerKRctor_CCashDbWorkerKR2_next);
        };
        static void CCashDbWorkerKRdtor_CCashDbWorkerKR7_wrapper(struct CCashDbWorkerKR* _this)
        {
           CCashDbWorkerKRdtor_CCashDbWorkerKR7_user(_this, CCashDbWorkerKRdtor_CCashDbWorkerKR7_next);
        };
        
        static hook_record CCashDbWorkerKR_functions[] = {
        {   (LPVOID)0x14022b6f0L,
            (LPVOID *)&CCashDbWorkerKRctor_CCashDbWorkerKR2_user,
            (LPVOID *)&CCashDbWorkerKRctor_CCashDbWorkerKR2_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerKRctor_CCashDbWorkerKR2_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerKR::*)())&CCashDbWorkerKR::ctor_CCashDbWorkerKR) },
        {   (LPVOID)0x14022ba10L,
            (LPVOID *)&CCashDbWorkerKRdtor_CCashDbWorkerKR7_user,
            (LPVOID *)&CCashDbWorkerKRdtor_CCashDbWorkerKR7_next,
            (LPVOID)cast_pointer_function(CCashDbWorkerKRdtor_CCashDbWorkerKR7_wrapper),
            (LPVOID)cast_pointer_function((void(CCashDbWorkerKR::*)())&CCashDbWorkerKR::dtor_CCashDbWorkerKR) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
