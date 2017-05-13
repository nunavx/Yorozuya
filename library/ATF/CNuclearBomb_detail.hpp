// This file auto generated by plugin for ida pro. Generated code only for x64. Please, dont change manually
#pragma once

#include "./common/common.h"
#include "CNuclearBomb_info.hpp"


START_ATF_NAMESPACE
    namespace detail
    {
        static info::CNuclearBombAttack2_ptr CNuclearBombAttack2_next(nullptr);
        static info::CNuclearBombAttack2_clbk CNuclearBombAttack2_user(nullptr);
        static info::CNuclearBombctor_CNuclearBomb4_ptr CNuclearBombctor_CNuclearBomb4_next(nullptr);
        static info::CNuclearBombctor_CNuclearBomb4_clbk CNuclearBombctor_CNuclearBomb4_user(nullptr);
        static info::CNuclearBombCreate6_ptr CNuclearBombCreate6_next(nullptr);
        static info::CNuclearBombCreate6_clbk CNuclearBombCreate6_user(nullptr);
        static info::CNuclearBombDestroy8_ptr CNuclearBombDestroy8_next(nullptr);
        static info::CNuclearBombDestroy8_clbk CNuclearBombDestroy8_user(nullptr);
        static info::CNuclearBombGetBombStatus10_ptr CNuclearBombGetBombStatus10_next(nullptr);
        static info::CNuclearBombGetBombStatus10_clbk CNuclearBombGetBombStatus10_user(nullptr);
        static info::CNuclearBombGetControlSerial12_ptr CNuclearBombGetControlSerial12_next(nullptr);
        static info::CNuclearBombGetControlSerial12_clbk CNuclearBombGetControlSerial12_user(nullptr);
        static info::CNuclearBombGetDamagedObjNum14_ptr CNuclearBombGetDamagedObjNum14_next(nullptr);
        static info::CNuclearBombGetDamagedObjNum14_clbk CNuclearBombGetDamagedObjNum14_user(nullptr);
        static info::CNuclearBombGetGenAttackProb16_ptr CNuclearBombGetGenAttackProb16_next(nullptr);
        static info::CNuclearBombGetGenAttackProb16_clbk CNuclearBombGetGenAttackProb16_user(nullptr);
        static info::CNuclearBombGetItemIndex18_ptr CNuclearBombGetItemIndex18_next(nullptr);
        static info::CNuclearBombGetItemIndex18_clbk CNuclearBombGetItemIndex18_user(nullptr);
        static info::CNuclearBombGetMasterClass20_ptr CNuclearBombGetMasterClass20_next(nullptr);
        static info::CNuclearBombGetMasterClass20_clbk CNuclearBombGetMasterClass20_user(nullptr);
        static info::CNuclearBombGetMasterRace22_ptr CNuclearBombGetMasterRace22_next(nullptr);
        static info::CNuclearBombGetMasterRace22_clbk CNuclearBombGetMasterRace22_user(nullptr);
        static info::CNuclearBombGetMissilePos24_ptr CNuclearBombGetMissilePos24_next(nullptr);
        static info::CNuclearBombGetMissilePos24_clbk CNuclearBombGetMissilePos24_user(nullptr);
        static info::CNuclearBombGetNewSerial26_ptr CNuclearBombGetNewSerial26_next(nullptr);
        static info::CNuclearBombGetNewSerial26_clbk CNuclearBombGetNewSerial26_user(nullptr);
        static info::CNuclearBombGetShowEffectList28_ptr CNuclearBombGetShowEffectList28_next(nullptr);
        static info::CNuclearBombGetShowEffectList28_clbk CNuclearBombGetShowEffectList28_user(nullptr);
        static info::CNuclearBombGetUse30_ptr CNuclearBombGetUse30_next(nullptr);
        static info::CNuclearBombGetUse30_clbk CNuclearBombGetUse30_user(nullptr);
        static info::CNuclearBombInit32_ptr CNuclearBombInit32_next(nullptr);
        static info::CNuclearBombInit32_clbk CNuclearBombInit32_user(nullptr);
        static info::CNuclearBombLoop34_ptr CNuclearBombLoop34_next(nullptr);
        static info::CNuclearBombLoop34_clbk CNuclearBombLoop34_user(nullptr);
        static info::CNuclearBombNuclearDamege36_ptr CNuclearBombNuclearDamege36_next(nullptr);
        static info::CNuclearBombNuclearDamege36_clbk CNuclearBombNuclearDamege36_user(nullptr);
        static info::CNuclearBombRecvKillMessage38_ptr CNuclearBombRecvKillMessage38_next(nullptr);
        static info::CNuclearBombRecvKillMessage38_clbk CNuclearBombRecvKillMessage38_user(nullptr);
        static info::CNuclearBombSendMsg_AddEffect40_ptr CNuclearBombSendMsg_AddEffect40_next(nullptr);
        static info::CNuclearBombSendMsg_AddEffect40_clbk CNuclearBombSendMsg_AddEffect40_user(nullptr);
        static info::CNuclearBombSendMsg_Attack42_ptr CNuclearBombSendMsg_Attack42_next(nullptr);
        static info::CNuclearBombSendMsg_Attack42_clbk CNuclearBombSendMsg_Attack42_user(nullptr);
        static info::CNuclearBombSendMsg_DropMissile44_ptr CNuclearBombSendMsg_DropMissile44_next(nullptr);
        static info::CNuclearBombSendMsg_DropMissile44_clbk CNuclearBombSendMsg_DropMissile44_user(nullptr);
        static info::CNuclearBombSendMsg_InformAttack46_ptr CNuclearBombSendMsg_InformAttack46_next(nullptr);
        static info::CNuclearBombSendMsg_InformAttack46_clbk CNuclearBombSendMsg_InformAttack46_user(nullptr);
        static info::CNuclearBombSendMsg_InformDropPos48_ptr CNuclearBombSendMsg_InformDropPos48_next(nullptr);
        static info::CNuclearBombSendMsg_InformDropPos48_clbk CNuclearBombSendMsg_InformDropPos48_user(nullptr);
        static info::CNuclearBombSendMsg_MasterDie50_ptr CNuclearBombSendMsg_MasterDie50_next(nullptr);
        static info::CNuclearBombSendMsg_MasterDie50_clbk CNuclearBombSendMsg_MasterDie50_user(nullptr);
        static info::CNuclearBombSendMsg_NuclearFind52_ptr CNuclearBombSendMsg_NuclearFind52_next(nullptr);
        static info::CNuclearBombSendMsg_NuclearFind52_clbk CNuclearBombSendMsg_NuclearFind52_user(nullptr);
        static info::CNuclearBombSendMsg_Result54_ptr CNuclearBombSendMsg_Result54_next(nullptr);
        static info::CNuclearBombSendMsg_Result54_clbk CNuclearBombSendMsg_Result54_user(nullptr);
        static info::CNuclearBombSetBombStatus56_ptr CNuclearBombSetBombStatus56_next(nullptr);
        static info::CNuclearBombSetBombStatus56_clbk CNuclearBombSetBombStatus56_user(nullptr);
        static info::CNuclearBombSetControlSerial58_ptr CNuclearBombSetControlSerial58_next(nullptr);
        static info::CNuclearBombSetControlSerial58_clbk CNuclearBombSetControlSerial58_user(nullptr);
        static info::CNuclearBombSetNuclearIndex60_ptr CNuclearBombSetNuclearIndex60_next(nullptr);
        static info::CNuclearBombSetNuclearIndex60_clbk CNuclearBombSetNuclearIndex60_user(nullptr);
        static info::CNuclearBombWarningToAll62_ptr CNuclearBombWarningToAll62_next(nullptr);
        static info::CNuclearBombWarningToAll62_clbk CNuclearBombWarningToAll62_user(nullptr);
        static info::CNuclearBombdtor_CNuclearBomb67_ptr CNuclearBombdtor_CNuclearBomb67_next(nullptr);
        static info::CNuclearBombdtor_CNuclearBomb67_clbk CNuclearBombdtor_CNuclearBomb67_user(nullptr);
        
        static void CNuclearBombAttack2_wrapper(struct CNuclearBomb* _this, int StartNum, int Obj_num)
        {
           CNuclearBombAttack2_user(_this, StartNum, Obj_num, CNuclearBombAttack2_next);
        };
        static void CNuclearBombctor_CNuclearBomb4_wrapper(struct CNuclearBomb* _this)
        {
           CNuclearBombctor_CNuclearBomb4_user(_this, CNuclearBombctor_CNuclearBomb4_next);
        };
        static bool CNuclearBombCreate6_wrapper(struct CNuclearBomb* _this, struct _nuclear_create_setdata* pData)
        {
           return CNuclearBombCreate6_user(_this, pData, CNuclearBombCreate6_next);
        };
        static bool CNuclearBombDestroy8_wrapper(struct CNuclearBomb* _this)
        {
           return CNuclearBombDestroy8_user(_this, CNuclearBombDestroy8_next);
        };
        static char CNuclearBombGetBombStatus10_wrapper(struct CNuclearBomb* _this)
        {
           return CNuclearBombGetBombStatus10_user(_this, CNuclearBombGetBombStatus10_next);
        };
        static uint16_t CNuclearBombGetControlSerial12_wrapper(struct CNuclearBomb* _this)
        {
           return CNuclearBombGetControlSerial12_user(_this, CNuclearBombGetControlSerial12_next);
        };
        static int CNuclearBombGetDamagedObjNum14_wrapper(struct CNuclearBomb* _this)
        {
           return CNuclearBombGetDamagedObjNum14_user(_this, CNuclearBombGetDamagedObjNum14_next);
        };
        static int CNuclearBombGetGenAttackProb16_wrapper(struct CNuclearBomb* _this, struct CCharacter* pDst, int nPart)
        {
           return CNuclearBombGetGenAttackProb16_user(_this, pDst, nPart, CNuclearBombGetGenAttackProb16_next);
        };
        static uint16_t CNuclearBombGetItemIndex18_wrapper(struct CNuclearBomb* _this)
        {
           return CNuclearBombGetItemIndex18_user(_this, CNuclearBombGetItemIndex18_next);
        };
        static char CNuclearBombGetMasterClass20_wrapper(struct CNuclearBomb* _this)
        {
           return CNuclearBombGetMasterClass20_user(_this, CNuclearBombGetMasterClass20_next);
        };
        static char CNuclearBombGetMasterRace22_wrapper(struct CNuclearBomb* _this)
        {
           return CNuclearBombGetMasterRace22_user(_this, CNuclearBombGetMasterRace22_next);
        };
        static float* CNuclearBombGetMissilePos24_wrapper(struct CNuclearBomb* _this)
        {
           return CNuclearBombGetMissilePos24_user(_this, CNuclearBombGetMissilePos24_next);
        };
        static unsigned int CNuclearBombGetNewSerial26_wrapper()
        {
           return CNuclearBombGetNewSerial26_user(CNuclearBombGetNewSerial26_next);
        };
        static void CNuclearBombGetShowEffectList28_wrapper(struct CNuclearBomb* _this)
        {
           CNuclearBombGetShowEffectList28_user(_this, CNuclearBombGetShowEffectList28_next);
        };
        static bool CNuclearBombGetUse30_wrapper(struct CNuclearBomb* _this)
        {
           return CNuclearBombGetUse30_user(_this, CNuclearBombGetUse30_next);
        };
        static bool CNuclearBombInit32_wrapper(struct CNuclearBomb* _this, struct _object_id* pID)
        {
           return CNuclearBombInit32_user(_this, pID, CNuclearBombInit32_next);
        };
        static void CNuclearBombLoop34_wrapper(struct CNuclearBomb* _this)
        {
           CNuclearBombLoop34_user(_this, CNuclearBombLoop34_next);
        };
        static void CNuclearBombNuclearDamege36_wrapper(struct CNuclearBomb* _this)
        {
           CNuclearBombNuclearDamege36_user(_this, CNuclearBombNuclearDamege36_next);
        };
        static void CNuclearBombRecvKillMessage38_wrapper(struct CNuclearBomb* _this, struct CCharacter* pDier)
        {
           CNuclearBombRecvKillMessage38_user(_this, pDier, CNuclearBombRecvKillMessage38_next);
        };
        static void CNuclearBombSendMsg_AddEffect40_wrapper(struct CNuclearBomb* _this)
        {
           CNuclearBombSendMsg_AddEffect40_user(_this, CNuclearBombSendMsg_AddEffect40_next);
        };
        static void CNuclearBombSendMsg_Attack42_wrapper(struct CNuclearBomb* _this, int StartNum, int Obj_Num)
        {
           CNuclearBombSendMsg_Attack42_user(_this, StartNum, Obj_Num, CNuclearBombSendMsg_Attack42_next);
        };
        static void CNuclearBombSendMsg_DropMissile44_wrapper(struct CNuclearBomb* _this)
        {
           CNuclearBombSendMsg_DropMissile44_user(_this, CNuclearBombSendMsg_DropMissile44_next);
        };
        static void CNuclearBombSendMsg_InformAttack46_wrapper(struct CNuclearBomb* _this)
        {
           CNuclearBombSendMsg_InformAttack46_user(_this, CNuclearBombSendMsg_InformAttack46_next);
        };
        static void CNuclearBombSendMsg_InformDropPos48_wrapper(struct CNuclearBomb* _this)
        {
           CNuclearBombSendMsg_InformDropPos48_user(_this, CNuclearBombSendMsg_InformDropPos48_next);
        };
        static void CNuclearBombSendMsg_MasterDie50_wrapper(struct CNuclearBomb* _this)
        {
           CNuclearBombSendMsg_MasterDie50_user(_this, CNuclearBombSendMsg_MasterDie50_next);
        };
        static void CNuclearBombSendMsg_NuclearFind52_wrapper(struct CNuclearBomb* _this, int n, char race)
        {
           CNuclearBombSendMsg_NuclearFind52_user(_this, n, race, CNuclearBombSendMsg_NuclearFind52_next);
        };
        static void CNuclearBombSendMsg_Result54_wrapper(struct CNuclearBomb* _this, int n, char byCode)
        {
           CNuclearBombSendMsg_Result54_user(_this, n, byCode, CNuclearBombSendMsg_Result54_next);
        };
        static void CNuclearBombSetBombStatus56_wrapper(struct CNuclearBomb* _this)
        {
           CNuclearBombSetBombStatus56_user(_this, CNuclearBombSetBombStatus56_next);
        };
        static void CNuclearBombSetControlSerial58_wrapper(struct CNuclearBomb* _this, uint16_t wControlSerial)
        {
           CNuclearBombSetControlSerial58_user(_this, wControlSerial, CNuclearBombSetControlSerial58_next);
        };
        static void CNuclearBombSetNuclearIndex60_wrapper(struct CNuclearBomb* _this, uint16_t wItemIndex)
        {
           CNuclearBombSetNuclearIndex60_user(_this, wItemIndex, CNuclearBombSetNuclearIndex60_next);
        };
        static void CNuclearBombWarningToAll62_wrapper(struct CNuclearBomb* _this, char byRaceCode)
        {
           CNuclearBombWarningToAll62_user(_this, byRaceCode, CNuclearBombWarningToAll62_next);
        };
        static void CNuclearBombdtor_CNuclearBomb67_wrapper(struct CNuclearBomb* _this)
        {
           CNuclearBombdtor_CNuclearBomb67_user(_this, CNuclearBombdtor_CNuclearBomb67_next);
        };
        
        static hook_record CNuclearBomb_functions[] = {
        {   (LPVOID)0x14013c4f0L,
            (LPVOID *)&CNuclearBombAttack2_user,
            (LPVOID *)&CNuclearBombAttack2_next,
            (LPVOID)cast_pointer_function(CNuclearBombAttack2_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)(int, int))&CNuclearBomb::Attack) },
        {   (LPVOID)0x14013bd50L,
            (LPVOID *)&CNuclearBombctor_CNuclearBomb4_user,
            (LPVOID *)&CNuclearBombctor_CNuclearBomb4_next,
            (LPVOID)cast_pointer_function(CNuclearBombctor_CNuclearBomb4_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)())&CNuclearBomb::ctor_CNuclearBomb) },
        {   (LPVOID)0x14013bf50L,
            (LPVOID *)&CNuclearBombCreate6_user,
            (LPVOID *)&CNuclearBombCreate6_next,
            (LPVOID)cast_pointer_function(CNuclearBombCreate6_wrapper),
            (LPVOID)cast_pointer_function((bool(CNuclearBomb::*)(struct _nuclear_create_setdata*))&CNuclearBomb::Create) },
        {   (LPVOID)0x14013c0d0L,
            (LPVOID *)&CNuclearBombDestroy8_user,
            (LPVOID *)&CNuclearBombDestroy8_next,
            (LPVOID)cast_pointer_function(CNuclearBombDestroy8_wrapper),
            (LPVOID)cast_pointer_function((bool(CNuclearBomb::*)())&CNuclearBomb::Destroy) },
        {   (LPVOID)0x14013e1b0L,
            (LPVOID *)&CNuclearBombGetBombStatus10_user,
            (LPVOID *)&CNuclearBombGetBombStatus10_next,
            (LPVOID)cast_pointer_function(CNuclearBombGetBombStatus10_wrapper),
            (LPVOID)cast_pointer_function((char(CNuclearBomb::*)())&CNuclearBomb::GetBombStatus) },
        {   (LPVOID)0x14013e2a0L,
            (LPVOID *)&CNuclearBombGetControlSerial12_user,
            (LPVOID *)&CNuclearBombGetControlSerial12_next,
            (LPVOID)cast_pointer_function(CNuclearBombGetControlSerial12_wrapper),
            (LPVOID)cast_pointer_function((uint16_t(CNuclearBomb::*)())&CNuclearBomb::GetControlSerial) },
        {   (LPVOID)0x14013e3a0L,
            (LPVOID *)&CNuclearBombGetDamagedObjNum14_user,
            (LPVOID *)&CNuclearBombGetDamagedObjNum14_next,
            (LPVOID)cast_pointer_function(CNuclearBombGetDamagedObjNum14_wrapper),
            (LPVOID)cast_pointer_function((int(CNuclearBomb::*)())&CNuclearBomb::GetDamagedObjNum) },
        {   (LPVOID)0x14013e4a0L,
            (LPVOID *)&CNuclearBombGetGenAttackProb16_user,
            (LPVOID *)&CNuclearBombGetGenAttackProb16_next,
            (LPVOID)cast_pointer_function(CNuclearBombGetGenAttackProb16_wrapper),
            (LPVOID)cast_pointer_function((int(CNuclearBomb::*)(struct CCharacter*, int))&CNuclearBomb::GetGenAttackProb) },
        {   (LPVOID)0x14013e320L,
            (LPVOID *)&CNuclearBombGetItemIndex18_user,
            (LPVOID *)&CNuclearBombGetItemIndex18_next,
            (LPVOID)cast_pointer_function(CNuclearBombGetItemIndex18_wrapper),
            (LPVOID)cast_pointer_function((uint16_t(CNuclearBomb::*)())&CNuclearBomb::GetItemIndex) },
        {   (LPVOID)0x14013d3b0L,
            (LPVOID *)&CNuclearBombGetMasterClass20_user,
            (LPVOID *)&CNuclearBombGetMasterClass20_next,
            (LPVOID)cast_pointer_function(CNuclearBombGetMasterClass20_wrapper),
            (LPVOID)cast_pointer_function((char(CNuclearBomb::*)())&CNuclearBomb::GetMasterClass) },
        {   (LPVOID)0x14013e530L,
            (LPVOID *)&CNuclearBombGetMasterRace22_user,
            (LPVOID *)&CNuclearBombGetMasterRace22_next,
            (LPVOID)cast_pointer_function(CNuclearBombGetMasterRace22_wrapper),
            (LPVOID)cast_pointer_function((char(CNuclearBomb::*)())&CNuclearBomb::GetMasterRace) },
        {   (LPVOID)0x14013e1d0L,
            (LPVOID *)&CNuclearBombGetMissilePos24_user,
            (LPVOID *)&CNuclearBombGetMissilePos24_next,
            (LPVOID)cast_pointer_function(CNuclearBombGetMissilePos24_wrapper),
            (LPVOID)cast_pointer_function((float*(CNuclearBomb::*)())&CNuclearBomb::GetMissilePos) },
        {   (LPVOID)0x14013bf30L,
            (LPVOID *)&CNuclearBombGetNewSerial26_user,
            (LPVOID *)&CNuclearBombGetNewSerial26_next,
            (LPVOID)cast_pointer_function(CNuclearBombGetNewSerial26_wrapper),
            (LPVOID)cast_pointer_function((unsigned int(*)())&CNuclearBomb::GetNewSerial) },
        {   (LPVOID)0x14013c210L,
            (LPVOID *)&CNuclearBombGetShowEffectList28_user,
            (LPVOID *)&CNuclearBombGetShowEffectList28_next,
            (LPVOID)cast_pointer_function(CNuclearBombGetShowEffectList28_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)())&CNuclearBomb::GetShowEffectList) },
        {   (LPVOID)0x14013e190L,
            (LPVOID *)&CNuclearBombGetUse30_user,
            (LPVOID *)&CNuclearBombGetUse30_next,
            (LPVOID)cast_pointer_function(CNuclearBombGetUse30_wrapper),
            (LPVOID)cast_pointer_function((bool(CNuclearBomb::*)())&CNuclearBomb::GetUse) },
        {   (LPVOID)0x14013be90L,
            (LPVOID *)&CNuclearBombInit32_user,
            (LPVOID *)&CNuclearBombInit32_next,
            (LPVOID)cast_pointer_function(CNuclearBombInit32_wrapper),
            (LPVOID)cast_pointer_function((bool(CNuclearBomb::*)(struct _object_id*))&CNuclearBomb::Init) },
        {   (LPVOID)0x14013ba70L,
            (LPVOID *)&CNuclearBombLoop34_user,
            (LPVOID *)&CNuclearBombLoop34_next,
            (LPVOID)cast_pointer_function(CNuclearBombLoop34_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)())&CNuclearBomb::Loop) },
        {   (LPVOID)0x14013c660L,
            (LPVOID *)&CNuclearBombNuclearDamege36_user,
            (LPVOID *)&CNuclearBombNuclearDamege36_next,
            (LPVOID)cast_pointer_function(CNuclearBombNuclearDamege36_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)())&CNuclearBomb::NuclearDamege) },
        {   (LPVOID)0x14013d300L,
            (LPVOID *)&CNuclearBombRecvKillMessage38_user,
            (LPVOID *)&CNuclearBombRecvKillMessage38_next,
            (LPVOID)cast_pointer_function(CNuclearBombRecvKillMessage38_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)(struct CCharacter*))&CNuclearBomb::RecvKillMessage) },
        {   (LPVOID)0x14013ce00L,
            (LPVOID *)&CNuclearBombSendMsg_AddEffect40_user,
            (LPVOID *)&CNuclearBombSendMsg_AddEffect40_next,
            (LPVOID)cast_pointer_function(CNuclearBombSendMsg_AddEffect40_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)())&CNuclearBomb::SendMsg_AddEffect) },
        {   (LPVOID)0x14013cde0L,
            (LPVOID *)&CNuclearBombSendMsg_Attack42_user,
            (LPVOID *)&CNuclearBombSendMsg_Attack42_next,
            (LPVOID)cast_pointer_function(CNuclearBombSendMsg_Attack42_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)(int, int))&CNuclearBomb::SendMsg_Attack) },
        {   (LPVOID)0x14013cd10L,
            (LPVOID *)&CNuclearBombSendMsg_DropMissile44_user,
            (LPVOID *)&CNuclearBombSendMsg_DropMissile44_next,
            (LPVOID)cast_pointer_function(CNuclearBombSendMsg_DropMissile44_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)())&CNuclearBomb::SendMsg_DropMissile) },
        {   (LPVOID)0x14013cf70L,
            (LPVOID *)&CNuclearBombSendMsg_InformAttack46_user,
            (LPVOID *)&CNuclearBombSendMsg_InformAttack46_next,
            (LPVOID)cast_pointer_function(CNuclearBombSendMsg_InformAttack46_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)())&CNuclearBomb::SendMsg_InformAttack) },
        {   (LPVOID)0x14013cb90L,
            (LPVOID *)&CNuclearBombSendMsg_InformDropPos48_user,
            (LPVOID *)&CNuclearBombSendMsg_InformDropPos48_next,
            (LPVOID)cast_pointer_function(CNuclearBombSendMsg_InformDropPos48_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)())&CNuclearBomb::SendMsg_InformDropPos) },
        {   (LPVOID)0x14013d0d0L,
            (LPVOID *)&CNuclearBombSendMsg_MasterDie50_user,
            (LPVOID *)&CNuclearBombSendMsg_MasterDie50_next,
            (LPVOID)cast_pointer_function(CNuclearBombSendMsg_MasterDie50_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)())&CNuclearBomb::SendMsg_MasterDie) },
        {   (LPVOID)0x14013caf0L,
            (LPVOID *)&CNuclearBombSendMsg_NuclearFind52_user,
            (LPVOID *)&CNuclearBombSendMsg_NuclearFind52_next,
            (LPVOID)cast_pointer_function(CNuclearBombSendMsg_NuclearFind52_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)(int, char))&CNuclearBomb::SendMsg_NuclearFind) },
        {   (LPVOID)0x14013d260L,
            (LPVOID *)&CNuclearBombSendMsg_Result54_user,
            (LPVOID *)&CNuclearBombSendMsg_Result54_next,
            (LPVOID)cast_pointer_function(CNuclearBombSendMsg_Result54_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)(int, char))&CNuclearBomb::SendMsg_Result) },
        {   (LPVOID)0x14013e3c0L,
            (LPVOID *)&CNuclearBombSetBombStatus56_user,
            (LPVOID *)&CNuclearBombSetBombStatus56_next,
            (LPVOID)cast_pointer_function(CNuclearBombSetBombStatus56_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)())&CNuclearBomb::SetBombStatus) },
        {   (LPVOID)0x14013e220L,
            (LPVOID *)&CNuclearBombSetControlSerial58_user,
            (LPVOID *)&CNuclearBombSetControlSerial58_next,
            (LPVOID)cast_pointer_function(CNuclearBombSetControlSerial58_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)(uint16_t))&CNuclearBomb::SetControlSerial) },
        {   (LPVOID)0x14013e1f0L,
            (LPVOID *)&CNuclearBombSetNuclearIndex60_user,
            (LPVOID *)&CNuclearBombSetNuclearIndex60_next,
            (LPVOID)cast_pointer_function(CNuclearBombSetNuclearIndex60_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)(uint16_t))&CNuclearBomb::SetNuclearIndex) },
        {   (LPVOID)0x14013ca00L,
            (LPVOID *)&CNuclearBombWarningToAll62_user,
            (LPVOID *)&CNuclearBombWarningToAll62_next,
            (LPVOID)cast_pointer_function(CNuclearBombWarningToAll62_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)(char))&CNuclearBomb::WarningToAll) },
        {   (LPVOID)0x14013be40L,
            (LPVOID *)&CNuclearBombdtor_CNuclearBomb67_user,
            (LPVOID *)&CNuclearBombdtor_CNuclearBomb67_next,
            (LPVOID)cast_pointer_function(CNuclearBombdtor_CNuclearBomb67_wrapper),
            (LPVOID)cast_pointer_function((void(CNuclearBomb::*)())&CNuclearBomb::dtor_CNuclearBomb) },
        
        };
        
    }; // static end namespace detail
END_ATF_NAMESPACE
