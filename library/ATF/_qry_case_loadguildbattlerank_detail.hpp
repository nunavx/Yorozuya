// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_loadguildbattlerank_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_qry_case_loadguildbattleranksize2_ptr _qry_case_loadguildbattleranksize2_next(nullptr);
        static info::_qry_case_loadguildbattleranksize2_clbk _qry_case_loadguildbattleranksize2_user(nullptr);
        
        static int _qry_case_loadguildbattleranksize2_wrapper(struct _qry_case_loadguildbattlerank* _this)
        {
           return _qry_case_loadguildbattleranksize2_user(_this, _qry_case_loadguildbattleranksize2_next);
        };
        
        static hook_record _qry_case_loadguildbattlerank_functions[] = {
        {   (LPVOID)0x140207580L,
            (LPVOID *)&_qry_case_loadguildbattleranksize2_user,
            (LPVOID *)&_qry_case_loadguildbattleranksize2_next,
            (LPVOID)cast_pointer_function(_qry_case_loadguildbattleranksize2_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_case_loadguildbattlerank::*)())&_qry_case_loadguildbattlerank::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
