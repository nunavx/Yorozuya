// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_DELAY_PROCESS_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_DELAY_PROCESSCheckOnLoop2_ptr _DELAY_PROCESSCheckOnLoop2_next(nullptr);
        static info::_DELAY_PROCESSCheckOnLoop2_clbk _DELAY_PROCESSCheckOnLoop2_user(nullptr);
        static info::_DELAY_PROCESSDelete4_ptr _DELAY_PROCESSDelete4_next(nullptr);
        static info::_DELAY_PROCESSDelete4_clbk _DELAY_PROCESSDelete4_user(nullptr);
        static info::_DELAY_PROCESSInit6_ptr _DELAY_PROCESSInit6_next(nullptr);
        static info::_DELAY_PROCESSInit6_clbk _DELAY_PROCESSInit6_user(nullptr);
        static info::_DELAY_PROCESSProcess8_ptr _DELAY_PROCESSProcess8_next(nullptr);
        static info::_DELAY_PROCESSProcess8_clbk _DELAY_PROCESSProcess8_user(nullptr);
        static info::_DELAY_PROCESSPush10_ptr _DELAY_PROCESSPush10_next(nullptr);
        static info::_DELAY_PROCESSPush10_clbk _DELAY_PROCESSPush10_user(nullptr);
        static info::_DELAY_PROCESSctor__DELAY_PROCESS12_ptr _DELAY_PROCESSctor__DELAY_PROCESS12_next(nullptr);
        static info::_DELAY_PROCESSctor__DELAY_PROCESS12_clbk _DELAY_PROCESSctor__DELAY_PROCESS12_user(nullptr);
        static info::_DELAY_PROCESSctor__DELAY_PROCESS14_ptr _DELAY_PROCESSctor__DELAY_PROCESS14_next(nullptr);
        static info::_DELAY_PROCESSctor__DELAY_PROCESS14_clbk _DELAY_PROCESSctor__DELAY_PROCESS14_user(nullptr);
        static info::_DELAY_PROCESSdtor__DELAY_PROCESS16_ptr _DELAY_PROCESSdtor__DELAY_PROCESS16_next(nullptr);
        static info::_DELAY_PROCESSdtor__DELAY_PROCESS16_clbk _DELAY_PROCESSdtor__DELAY_PROCESS16_user(nullptr);
        
        static void _DELAY_PROCESSCheckOnLoop2_wrapper(struct _DELAY_PROCESS* _this)
        {
           _DELAY_PROCESSCheckOnLoop2_user(_this, _DELAY_PROCESSCheckOnLoop2_next);
        };
        static void _DELAY_PROCESSDelete4_wrapper(struct _DELAY_PROCESS* _this, unsigned int dwIndex, unsigned int dwSerial)
        {
           _DELAY_PROCESSDelete4_user(_this, dwIndex, dwSerial, _DELAY_PROCESSDelete4_next);
        };
        static bool _DELAY_PROCESSInit6_wrapper(struct _DELAY_PROCESS* _this, unsigned int dwObjectNum, unsigned int dwTerm)
        {
           return _DELAY_PROCESSInit6_user(_this, dwObjectNum, dwTerm, _DELAY_PROCESSInit6_next);
        };
        static void _DELAY_PROCESSProcess8_wrapper(struct _DELAY_PROCESS* _this, unsigned int dwIndex, unsigned int dwSerial)
        {
           _DELAY_PROCESSProcess8_user(_this, dwIndex, dwSerial, _DELAY_PROCESSProcess8_next);
        };
        static bool _DELAY_PROCESSPush10_wrapper(struct _DELAY_PROCESS* _this, unsigned int dwIndex, unsigned int dwSerial)
        {
           return _DELAY_PROCESSPush10_user(_this, dwIndex, dwSerial, _DELAY_PROCESSPush10_next);
        };
        static void _DELAY_PROCESSctor__DELAY_PROCESS12_wrapper(struct _DELAY_PROCESS* _this, unsigned int dwObjectNum, unsigned int dwTerm)
        {
           _DELAY_PROCESSctor__DELAY_PROCESS12_user(_this, dwObjectNum, dwTerm, _DELAY_PROCESSctor__DELAY_PROCESS12_next);
        };
        static void _DELAY_PROCESSctor__DELAY_PROCESS14_wrapper(struct _DELAY_PROCESS* _this)
        {
           _DELAY_PROCESSctor__DELAY_PROCESS14_user(_this, _DELAY_PROCESSctor__DELAY_PROCESS14_next);
        };
        static void _DELAY_PROCESSdtor__DELAY_PROCESS16_wrapper(struct _DELAY_PROCESS* _this)
        {
           _DELAY_PROCESSdtor__DELAY_PROCESS16_user(_this, _DELAY_PROCESSdtor__DELAY_PROCESS16_next);
        };
        
        static hook_record _DELAY_PROCESS_functions[] = {
        {   (LPVOID)0x14007de40L,
            (LPVOID *)&_DELAY_PROCESSCheckOnLoop2_user,
            (LPVOID *)&_DELAY_PROCESSCheckOnLoop2_next,
            (LPVOID)cast_pointer_function(_DELAY_PROCESSCheckOnLoop2_wrapper),
            (LPVOID)cast_pointer_function((void(_DELAY_PROCESS::*)())&_DELAY_PROCESS::CheckOnLoop) },
        {   (LPVOID)0x1400d1730L,
            (LPVOID *)&_DELAY_PROCESSDelete4_user,
            (LPVOID *)&_DELAY_PROCESSDelete4_next,
            (LPVOID)cast_pointer_function(_DELAY_PROCESSDelete4_wrapper),
            (LPVOID)cast_pointer_function((void(_DELAY_PROCESS::*)(unsigned int, unsigned int))&_DELAY_PROCESS::Delete) },
        {   (LPVOID)0x14007dcd0L,
            (LPVOID *)&_DELAY_PROCESSInit6_user,
            (LPVOID *)&_DELAY_PROCESSInit6_next,
            (LPVOID)cast_pointer_function(_DELAY_PROCESSInit6_wrapper),
            (LPVOID)cast_pointer_function((bool(_DELAY_PROCESS::*)(unsigned int, unsigned int))&_DELAY_PROCESS::Init) },
        {   (LPVOID)0x14007f370L,
            (LPVOID *)&_DELAY_PROCESSProcess8_user,
            (LPVOID *)&_DELAY_PROCESSProcess8_next,
            (LPVOID)cast_pointer_function(_DELAY_PROCESSProcess8_wrapper),
            (LPVOID)cast_pointer_function((void(_DELAY_PROCESS::*)(unsigned int, unsigned int))&_DELAY_PROCESS::Process) },
        {   (LPVOID)0x14007a640L,
            (LPVOID *)&_DELAY_PROCESSPush10_user,
            (LPVOID *)&_DELAY_PROCESSPush10_next,
            (LPVOID)cast_pointer_function(_DELAY_PROCESSPush10_wrapper),
            (LPVOID)cast_pointer_function((bool(_DELAY_PROCESS::*)(unsigned int, unsigned int))&_DELAY_PROCESS::Push) },
        {   (LPVOID)0x14007f270L,
            (LPVOID *)&_DELAY_PROCESSctor__DELAY_PROCESS12_user,
            (LPVOID *)&_DELAY_PROCESSctor__DELAY_PROCESS12_next,
            (LPVOID)cast_pointer_function(_DELAY_PROCESSctor__DELAY_PROCESS12_wrapper),
            (LPVOID)cast_pointer_function((void(_DELAY_PROCESS::*)(unsigned int, unsigned int))&_DELAY_PROCESS::ctor__DELAY_PROCESS) },
        {   (LPVOID)0x14007f3f0L,
            (LPVOID *)&_DELAY_PROCESSctor__DELAY_PROCESS14_user,
            (LPVOID *)&_DELAY_PROCESSctor__DELAY_PROCESS14_next,
            (LPVOID)cast_pointer_function(_DELAY_PROCESSctor__DELAY_PROCESS14_wrapper),
            (LPVOID)cast_pointer_function((void(_DELAY_PROCESS::*)())&_DELAY_PROCESS::ctor__DELAY_PROCESS) },
        {   (LPVOID)0x1400803b0L,
            (LPVOID *)&_DELAY_PROCESSdtor__DELAY_PROCESS16_user,
            (LPVOID *)&_DELAY_PROCESSdtor__DELAY_PROCESS16_next,
            (LPVOID)cast_pointer_function(_DELAY_PROCESSdtor__DELAY_PROCESS16_wrapper),
            (LPVOID)cast_pointer_function((void(_DELAY_PROCESS::*)())&_DELAY_PROCESS::dtor__DELAY_PROCESS) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
