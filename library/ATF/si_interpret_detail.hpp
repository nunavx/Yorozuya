// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "si_interpret_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::si_interpretGetCountOfEffect2_ptr si_interpretGetCountOfEffect2_next(nullptr);
        static info::si_interpretGetCountOfEffect2_clbk si_interpretGetCountOfEffect2_user(nullptr);
        static info::si_interpretGetCountOfItem4_ptr si_interpretGetCountOfItem4_next(nullptr);
        static info::si_interpretGetCountOfItem4_clbk si_interpretGetCountOfItem4_user(nullptr);
        static info::si_interpretGetEffectCode6_ptr si_interpretGetEffectCode6_next(nullptr);
        static info::si_interpretGetEffectCode6_clbk si_interpretGetEffectCode6_user(nullptr);
        static info::si_interpretGetEffectTypeCount8_ptr si_interpretGetEffectTypeCount8_next(nullptr);
        static info::si_interpretGetEffectTypeCount8_clbk si_interpretGetEffectTypeCount8_user(nullptr);
        static info::si_interpretGetEffectValue10_ptr si_interpretGetEffectValue10_next(nullptr);
        static info::si_interpretGetEffectValue10_clbk si_interpretGetEffectValue10_user(nullptr);
        static info::si_interpretinit12_ptr si_interpretinit12_next(nullptr);
        static info::si_interpretinit12_clbk si_interpretinit12_user(nullptr);
        static info::si_interpretset_effect_interpret14_ptr si_interpretset_effect_interpret14_next(nullptr);
        static info::si_interpretset_effect_interpret14_clbk si_interpretset_effect_interpret14_user(nullptr);
        static info::si_interpretctor_si_interpret16_ptr si_interpretctor_si_interpret16_next(nullptr);
        static info::si_interpretctor_si_interpret16_clbk si_interpretctor_si_interpret16_user(nullptr);
        
        static char si_interpretGetCountOfEffect2_wrapper(struct si_interpret* _this, int idx)
        {
           return si_interpretGetCountOfEffect2_user(_this, idx, si_interpretGetCountOfEffect2_next);
        };
        static char si_interpretGetCountOfItem4_wrapper(struct si_interpret* _this, int idx)
        {
           return si_interpretGetCountOfItem4_user(_this, idx, si_interpretGetCountOfItem4_next);
        };
        static int si_interpretGetEffectCode6_wrapper(struct si_interpret* _this, int idx)
        {
           return si_interpretGetEffectCode6_user(_this, idx, si_interpretGetEffectCode6_next);
        };
        static char si_interpretGetEffectTypeCount8_wrapper(struct si_interpret* _this)
        {
           return si_interpretGetEffectTypeCount8_user(_this, si_interpretGetEffectTypeCount8_next);
        };
        static float si_interpretGetEffectValue10_wrapper(struct si_interpret* _this, int idx)
        {
           return si_interpretGetEffectValue10_user(_this, idx, si_interpretGetEffectValue10_next);
        };
        static void si_interpretinit12_wrapper(struct si_interpret* _this)
        {
           si_interpretinit12_user(_this, si_interpretinit12_next);
        };
        static bool si_interpretset_effect_interpret14_wrapper(struct si_interpret* _this, struct _SetItemEff_fld* pFld)
        {
           return si_interpretset_effect_interpret14_user(_this, pFld, si_interpretset_effect_interpret14_next);
        };
        static void si_interpretctor_si_interpret16_wrapper(struct si_interpret* _this)
        {
           si_interpretctor_si_interpret16_user(_this, si_interpretctor_si_interpret16_next);
        };
        
        static hook_record si_interpret_functions[] = {
        {   (LPVOID)0x1402e3c20L,
            (LPVOID *)&si_interpretGetCountOfEffect2_user,
            (LPVOID *)&si_interpretGetCountOfEffect2_next,
            (LPVOID)cast_pointer_function(si_interpretGetCountOfEffect2_wrapper),
            (LPVOID)cast_pointer_function((char(si_interpret::*)(int))&si_interpret::GetCountOfEffect) },
        {   (LPVOID)0x1402e3b90L,
            (LPVOID *)&si_interpretGetCountOfItem4_user,
            (LPVOID *)&si_interpretGetCountOfItem4_next,
            (LPVOID)cast_pointer_function(si_interpretGetCountOfItem4_wrapper),
            (LPVOID)cast_pointer_function((char(si_interpret::*)(int))&si_interpret::GetCountOfItem) },
        {   (LPVOID)0x14007da60L,
            (LPVOID *)&si_interpretGetEffectCode6_user,
            (LPVOID *)&si_interpretGetEffectCode6_next,
            (LPVOID)cast_pointer_function(si_interpretGetEffectCode6_wrapper),
            (LPVOID)cast_pointer_function((int(si_interpret::*)(int))&si_interpret::GetEffectCode) },
        {   (LPVOID)0x1402e3b70L,
            (LPVOID *)&si_interpretGetEffectTypeCount8_user,
            (LPVOID *)&si_interpretGetEffectTypeCount8_next,
            (LPVOID)cast_pointer_function(si_interpretGetEffectTypeCount8_wrapper),
            (LPVOID)cast_pointer_function((char(si_interpret::*)())&si_interpret::GetEffectTypeCount) },
        {   (LPVOID)0x14007daa0L,
            (LPVOID *)&si_interpretGetEffectValue10_user,
            (LPVOID *)&si_interpretGetEffectValue10_next,
            (LPVOID)cast_pointer_function(si_interpretGetEffectValue10_wrapper),
            (LPVOID)cast_pointer_function((float(si_interpret::*)(int))&si_interpret::GetEffectValue) },
        {   (LPVOID)0x1402e36b0L,
            (LPVOID *)&si_interpretinit12_user,
            (LPVOID *)&si_interpretinit12_next,
            (LPVOID)cast_pointer_function(si_interpretinit12_wrapper),
            (LPVOID)cast_pointer_function((void(si_interpret::*)())&si_interpret::init) },
        {   (LPVOID)0x1402e3730L,
            (LPVOID *)&si_interpretset_effect_interpret14_user,
            (LPVOID *)&si_interpretset_effect_interpret14_next,
            (LPVOID)cast_pointer_function(si_interpretset_effect_interpret14_wrapper),
            (LPVOID)cast_pointer_function((bool(si_interpret::*)(struct _SetItemEff_fld*))&si_interpret::set_effect_interpret) },
        {   (LPVOID)0x1402e35c0L,
            (LPVOID *)&si_interpretctor_si_interpret16_user,
            (LPVOID *)&si_interpretctor_si_interpret16_next,
            (LPVOID)cast_pointer_function(si_interpretctor_si_interpret16_wrapper),
            (LPVOID)cast_pointer_function((void(si_interpret::*)())&si_interpret::ctor_si_interpret) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
