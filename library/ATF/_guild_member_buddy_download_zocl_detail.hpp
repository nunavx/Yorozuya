// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_guild_member_buddy_download_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_ptr _guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_next(nullptr);
        static info::_guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_clbk _guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_user(nullptr);
        static info::_guild_member_buddy_download_zoclsize4_ptr _guild_member_buddy_download_zoclsize4_next(nullptr);
        static info::_guild_member_buddy_download_zoclsize4_clbk _guild_member_buddy_download_zoclsize4_user(nullptr);
        
        static void _guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_wrapper(struct _guild_member_buddy_download_zocl* _this)
        {
           _guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_user(_this, _guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_next);
        };
        static int _guild_member_buddy_download_zoclsize4_wrapper(struct _guild_member_buddy_download_zocl* _this)
        {
           return _guild_member_buddy_download_zoclsize4_user(_this, _guild_member_buddy_download_zoclsize4_next);
        };
        
        static hook_record _guild_member_buddy_download_zocl_functions[] = {
        {   (LPVOID)0x14025ce10L,
            (LPVOID *)&_guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_user,
            (LPVOID *)&_guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_next,
            (LPVOID)cast_pointer_function(_guild_member_buddy_download_zoclctor__guild_member_buddy_download_zocl2_wrapper),
            (LPVOID)cast_pointer_function((void(_guild_member_buddy_download_zocl::*)())&_guild_member_buddy_download_zocl::ctor__guild_member_buddy_download_zocl) },
        {   (LPVOID)0x14025d480L,
            (LPVOID *)&_guild_member_buddy_download_zoclsize4_user,
            (LPVOID *)&_guild_member_buddy_download_zoclsize4_next,
            (LPVOID)cast_pointer_function(_guild_member_buddy_download_zoclsize4_wrapper),
            (LPVOID)cast_pointer_function((int(_guild_member_buddy_download_zocl::*)())&_guild_member_buddy_download_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
