// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_post_list_regi_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_qry_case_post_list_regictor__qry_case_post_list_regi2_ptr _qry_case_post_list_regictor__qry_case_post_list_regi2_next(nullptr);
        static info::_qry_case_post_list_regictor__qry_case_post_list_regi2_clbk _qry_case_post_list_regictor__qry_case_post_list_regi2_user(nullptr);
        static info::_qry_case_post_list_regisize4_ptr _qry_case_post_list_regisize4_next(nullptr);
        static info::_qry_case_post_list_regisize4_clbk _qry_case_post_list_regisize4_user(nullptr);
        
        static info::_qry_case_post_list_regi____listctor___list2_ptr _qry_case_post_list_regi____listctor___list2_next(nullptr);
        static info::_qry_case_post_list_regi____listctor___list2_clbk _qry_case_post_list_regi____listctor___list2_user(nullptr);
        
        static void _qry_case_post_list_regictor__qry_case_post_list_regi2_wrapper(struct _qry_case_post_list_regi* _this)
        {
           _qry_case_post_list_regictor__qry_case_post_list_regi2_user(_this, _qry_case_post_list_regictor__qry_case_post_list_regi2_next);
        };
        static int _qry_case_post_list_regisize4_wrapper(struct _qry_case_post_list_regi* _this)
        {
           return _qry_case_post_list_regisize4_user(_this, _qry_case_post_list_regisize4_next);
        };
        
        static void _qry_case_post_list_regi____listctor___list2_wrapper(struct _qry_case_post_list_regi::__list* _this)
        {
           _qry_case_post_list_regi____listctor___list2_user(_this, _qry_case_post_list_regi____listctor___list2_next);
        };
        
        static hook_record _qry_case_post_list_regi_functions[] = {
        {   (LPVOID)0x140328150L,
            (LPVOID *)&_qry_case_post_list_regictor__qry_case_post_list_regi2_user,
            (LPVOID *)&_qry_case_post_list_regictor__qry_case_post_list_regi2_next,
            (LPVOID)cast_pointer_function(_qry_case_post_list_regictor__qry_case_post_list_regi2_wrapper),
            (LPVOID)cast_pointer_function((void(_qry_case_post_list_regi::*)())&_qry_case_post_list_regi::ctor__qry_case_post_list_regi) },
        {   (LPVOID)0x1403281d0L,
            (LPVOID *)&_qry_case_post_list_regisize4_user,
            (LPVOID *)&_qry_case_post_list_regisize4_next,
            (LPVOID)cast_pointer_function(_qry_case_post_list_regisize4_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_case_post_list_regi::*)())&_qry_case_post_list_regi::size) },
        
        {   (LPVOID)0x1403281e0L,
            (LPVOID *)&_qry_case_post_list_regi____listctor___list2_user,
            (LPVOID *)&_qry_case_post_list_regi____listctor___list2_next,
            (LPVOID)cast_pointer_function(_qry_case_post_list_regi____listctor___list2_wrapper),
            (LPVOID)cast_pointer_function((void(_qry_case_post_list_regi::__list::*)())&_qry_case_post_list_regi::__list::ctor___list) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
