// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "__change_monster_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::__change_monsterctor___change_monster2_ptr __change_monsterctor___change_monster2_next(nullptr);
        static info::__change_monsterctor___change_monster2_clbk __change_monsterctor___change_monster2_user(nullptr);
        static info::__change_monsterdtor___change_monster6_ptr __change_monsterdtor___change_monster6_next(nullptr);
        static info::__change_monsterdtor___change_monster6_clbk __change_monsterdtor___change_monster6_user(nullptr);
        
        static void __change_monsterctor___change_monster2_wrapper(struct __change_monster* _this)
        {
           __change_monsterctor___change_monster2_user(_this, __change_monsterctor___change_monster2_next);
        };
        static void __change_monsterdtor___change_monster6_wrapper(struct __change_monster* _this)
        {
           __change_monsterdtor___change_monster6_user(_this, __change_monsterdtor___change_monster6_next);
        };
        
        static hook_record __change_monster_functions[] = {
        {   (LPVOID)0x14027a4d0L,
            (LPVOID *)&__change_monsterctor___change_monster2_user,
            (LPVOID *)&__change_monsterctor___change_monster2_next,
            (LPVOID)cast_pointer_function(__change_monsterctor___change_monster2_wrapper),
            (LPVOID)cast_pointer_function((void(__change_monster::*)())&__change_monster::ctor___change_monster) },
        {   (LPVOID)0x140272e60L,
            (LPVOID *)&__change_monsterdtor___change_monster6_user,
            (LPVOID *)&__change_monsterdtor___change_monster6_next,
            (LPVOID)cast_pointer_function(__change_monsterdtor___change_monster6_wrapper),
            (LPVOID)cast_pointer_function((void(__change_monster::*)())&__change_monster::dtor___change_monster) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
