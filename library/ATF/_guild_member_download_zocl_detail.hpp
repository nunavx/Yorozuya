// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_guild_member_download_zocl_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_guild_member_download_zoclClear2_ptr _guild_member_download_zoclClear2_next(nullptr);
        static info::_guild_member_download_zoclClear2_clbk _guild_member_download_zoclClear2_user(nullptr);
        static info::_guild_member_download_zoclctor__guild_member_download_zocl4_ptr _guild_member_download_zoclctor__guild_member_download_zocl4_next(nullptr);
        static info::_guild_member_download_zoclctor__guild_member_download_zocl4_clbk _guild_member_download_zoclctor__guild_member_download_zocl4_user(nullptr);
        static info::_guild_member_download_zoclsize6_ptr _guild_member_download_zoclsize6_next(nullptr);
        static info::_guild_member_download_zoclsize6_clbk _guild_member_download_zoclsize6_user(nullptr);
        
        static void _guild_member_download_zoclClear2_wrapper(struct _guild_member_download_zocl* _this)
        {
           _guild_member_download_zoclClear2_user(_this, _guild_member_download_zoclClear2_next);
        };
        static void _guild_member_download_zoclctor__guild_member_download_zocl4_wrapper(struct _guild_member_download_zocl* _this)
        {
           _guild_member_download_zoclctor__guild_member_download_zocl4_user(_this, _guild_member_download_zoclctor__guild_member_download_zocl4_next);
        };
        static int _guild_member_download_zoclsize6_wrapper(struct _guild_member_download_zocl* _this)
        {
           return _guild_member_download_zoclsize6_user(_this, _guild_member_download_zoclsize6_next);
        };
        
        static hook_record _guild_member_download_zocl_functions[] = {
        {   (LPVOID)0x14025cce0L,
            (LPVOID *)&_guild_member_download_zoclClear2_user,
            (LPVOID *)&_guild_member_download_zoclClear2_next,
            (LPVOID)cast_pointer_function(_guild_member_download_zoclClear2_wrapper),
            (LPVOID)cast_pointer_function((void(_guild_member_download_zocl::*)())&_guild_member_download_zocl::Clear) },
        {   (LPVOID)0x14025cc90L,
            (LPVOID *)&_guild_member_download_zoclctor__guild_member_download_zocl4_user,
            (LPVOID *)&_guild_member_download_zoclctor__guild_member_download_zocl4_next,
            (LPVOID)cast_pointer_function(_guild_member_download_zoclctor__guild_member_download_zocl4_wrapper),
            (LPVOID)cast_pointer_function((void(_guild_member_download_zocl::*)())&_guild_member_download_zocl::ctor__guild_member_download_zocl) },
        {   (LPVOID)0x14025d380L,
            (LPVOID *)&_guild_member_download_zoclsize6_user,
            (LPVOID *)&_guild_member_download_zoclsize6_next,
            (LPVOID)cast_pointer_function(_guild_member_download_zoclsize6_wrapper),
            (LPVOID)cast_pointer_function((int(_guild_member_download_zocl::*)())&_guild_member_download_zocl::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
