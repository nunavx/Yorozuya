// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "_qry_case_amine_battery_discharge_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::_qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_ptr _qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_next(nullptr);
        static info::_qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_clbk _qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_user(nullptr);
        static info::_qry_case_amine_battery_dischargesize4_ptr _qry_case_amine_battery_dischargesize4_next(nullptr);
        static info::_qry_case_amine_battery_dischargesize4_clbk _qry_case_amine_battery_dischargesize4_user(nullptr);
        
        static void _qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_wrapper(struct _qry_case_amine_battery_discharge* _this)
        {
           _qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_user(_this, _qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_next);
        };
        static int _qry_case_amine_battery_dischargesize4_wrapper(struct _qry_case_amine_battery_discharge* _this)
        {
           return _qry_case_amine_battery_dischargesize4_user(_this, _qry_case_amine_battery_dischargesize4_next);
        };
        
        static hook_record _qry_case_amine_battery_discharge_functions[] = {
        {   (LPVOID)0x1402d42f0L,
            (LPVOID *)&_qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_user,
            (LPVOID *)&_qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_next,
            (LPVOID)cast_pointer_function(_qry_case_amine_battery_dischargector__qry_case_amine_battery_discharge2_wrapper),
            (LPVOID)cast_pointer_function((void(_qry_case_amine_battery_discharge::*)())&_qry_case_amine_battery_discharge::ctor__qry_case_amine_battery_discharge) },
        {   (LPVOID)0x1402d4310L,
            (LPVOID *)&_qry_case_amine_battery_dischargesize4_user,
            (LPVOID *)&_qry_case_amine_battery_dischargesize4_next,
            (LPVOID)cast_pointer_function(_qry_case_amine_battery_dischargesize4_wrapper),
            (LPVOID)cast_pointer_function((int(_qry_case_amine_battery_discharge::*)())&_qry_case_amine_battery_discharge::size) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
