// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_event_set_looting_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_event_set_lootingctor__event_set_looting2_ptr _event_set_lootingctor__event_set_looting2_next(nullptr);
        static info::_event_set_lootingctor__event_set_looting2_clbk _event_set_lootingctor__event_set_looting2_user(nullptr);
        static info::_event_set_lootinginit4_ptr _event_set_lootinginit4_next(nullptr);
        static info::_event_set_lootinginit4_clbk _event_set_lootinginit4_user(nullptr);
        
        static void _event_set_lootingctor__event_set_looting2_wrapper(struct _event_set_looting* _this)
        {
           _event_set_lootingctor__event_set_looting2_user(_this, _event_set_lootingctor__event_set_looting2_next);
        };
        static void _event_set_lootinginit4_wrapper(struct _event_set_looting* _this)
        {
           _event_set_lootinginit4_user(_this, _event_set_lootinginit4_next);
        };
        
        static hook_record _event_set_looting_functions[] = {
        {   (LPVOID)0x1402a9f70L,
            (LPVOID *)&_event_set_lootingctor__event_set_looting2_user,
            (LPVOID *)&_event_set_lootingctor__event_set_looting2_next,
            (LPVOID)cast_pointer_function(_event_set_lootingctor__event_set_looting2_wrapper),
            (LPVOID)cast_pointer_function((void(_event_set_looting::*)())&_event_set_looting::ctor__event_set_looting) },
        {   (LPVOID)0x1402a9fc0L,
            (LPVOID *)&_event_set_lootinginit4_user,
            (LPVOID *)&_event_set_lootinginit4_next,
            (LPVOID)cast_pointer_function(_event_set_lootinginit4_wrapper),
            (LPVOID)cast_pointer_function((void(_event_set_looting::*)())&_event_set_looting::init) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
