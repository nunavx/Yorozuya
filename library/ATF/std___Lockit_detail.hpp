// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "std___Lockit_info.hpp"


START_ATF_NAMESPACE
    namespace std
    {
        namespace detail
        {
            static info::std___Lockitctor__Lockit1_ptr std___Lockitctor__Lockit1_next(nullptr);
            static info::std___Lockitctor__Lockit1_clbk std___Lockitctor__Lockit1_user(nullptr);
            static info::std___Lockitdtor__Lockit2_ptr std___Lockitdtor__Lockit2_next(nullptr);
            static info::std___Lockitdtor__Lockit2_clbk std___Lockitdtor__Lockit2_user(nullptr);
            
            static int64_t std___Lockitctor__Lockit1_wrapper(struct std::_Lockit* _this, int arg_0)
            {
               return std___Lockitctor__Lockit1_user(_this, arg_0, std___Lockitctor__Lockit1_next);
            };
            static int64_t std___Lockitdtor__Lockit2_wrapper(struct std::_Lockit* _this)
            {
               return std___Lockitdtor__Lockit2_user(_this, std___Lockitdtor__Lockit2_next);
            };
            
            static hook_record _Lockit_functions[] = {
            {   (LPVOID)0x1404dbafcL,
                (LPVOID *)&std___Lockitctor__Lockit1_user,
                (LPVOID *)&std___Lockitctor__Lockit1_next,
                (LPVOID)cast_pointer_function(std___Lockitctor__Lockit1_wrapper),
                (LPVOID)cast_pointer_function((int64_t(std::_Lockit::*)(int))&std::_Lockit::ctor__Lockit) },
            {   (LPVOID)0x1404dbaf6L,
                (LPVOID *)&std___Lockitdtor__Lockit2_user,
                (LPVOID *)&std___Lockitdtor__Lockit2_next,
                (LPVOID)cast_pointer_function(std___Lockitdtor__Lockit2_wrapper),
                (LPVOID)cast_pointer_function((int64_t(std::_Lockit::*)())&std::_Lockit::dtor__Lockit) },
            
            };
            
        }; // static end namespace detail
    }; // end namespace std
END_ATF_NAMESPACE
