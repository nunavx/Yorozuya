// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_PARTICLE_ELEMENT_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_PARTICLE_ELEMENTUpDate1_ptr _PARTICLE_ELEMENTUpDate1_next(nullptr);
        static info::_PARTICLE_ELEMENTUpDate1_clbk _PARTICLE_ELEMENTUpDate1_user(nullptr);
        
        static void _PARTICLE_ELEMENTUpDate1_wrapper(struct _PARTICLE_ELEMENT* _this, float arg_0)
        {
           _PARTICLE_ELEMENTUpDate1_user(_this, arg_0, _PARTICLE_ELEMENTUpDate1_next);
        };
        
        static hook_record _PARTICLE_ELEMENT_functions[] = {
        {   (LPVOID)0x1405172a0L,
            (LPVOID *)&_PARTICLE_ELEMENTUpDate1_user,
            (LPVOID *)&_PARTICLE_ELEMENTUpDate1_next,
            (LPVOID)cast_pointer_function(_PARTICLE_ELEMENTUpDate1_wrapper),
            (LPVOID)cast_pointer_function((void(_PARTICLE_ELEMENT::*)(float))&_PARTICLE_ELEMENT::UpDate) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
