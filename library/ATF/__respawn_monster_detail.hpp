// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "__respawn_monster_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::__respawn_monsterctor___respawn_monster2_ptr __respawn_monsterctor___respawn_monster2_next(nullptr);
        static info::__respawn_monsterctor___respawn_monster2_clbk __respawn_monsterctor___respawn_monster2_user(nullptr);
        
        static void __respawn_monsterctor___respawn_monster2_wrapper(struct __respawn_monster* _this)
        {
           __respawn_monsterctor___respawn_monster2_user(_this, __respawn_monsterctor___respawn_monster2_next);
        };
        
        static hook_record __respawn_monster_functions[] = {
        {   (LPVOID)0x14027a450L,
            (LPVOID *)&__respawn_monsterctor___respawn_monster2_user,
            (LPVOID *)&__respawn_monsterctor___respawn_monster2_next,
            (LPVOID)cast_pointer_function(__respawn_monsterctor___respawn_monster2_wrapper),
            (LPVOID)cast_pointer_function((void(__respawn_monster::*)())&__respawn_monster::ctor___respawn_monster) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
