// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_update_player_vote_info_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_qry_case_update_player_vote_infosize2_ptr _qry_case_update_player_vote_infosize2_next(nullptr);
        static info::_qry_case_update_player_vote_infosize2_clbk _qry_case_update_player_vote_infosize2_user(nullptr);
        
        static int _qry_case_update_player_vote_infosize2_wrapper(struct _qry_case_update_player_vote_info* _this)
        {
           return _qry_case_update_player_vote_infosize2_user(_this, _qry_case_update_player_vote_infosize2_next);
        };
        
        static hook_record _qry_case_update_player_vote_info_functions[] = {
        {   (LPVOID)0x14007e140L,
            (LPVOID *)&_qry_case_update_player_vote_infosize2_user,
            (LPVOID *)&_qry_case_update_player_vote_infosize2_next,
            (LPVOID)cast_pointer_function(_qry_case_update_player_vote_infosize2_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_case_update_player_vote_info::*)())&_qry_case_update_player_vote_info::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
