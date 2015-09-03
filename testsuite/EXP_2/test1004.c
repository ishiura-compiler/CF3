#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x1 = UINT64_MAX;
uint64_t x2 = 3286963LLU;
uint16_t x185 = UINT16_MAX;
uint64_t x402 = UINT64_MAX;
static volatile uint64_t t2 = 14547275930295796LLU;
int16_t x920 = INT16_MAX;
volatile uint64_t t12 = 590060567549652LLU;
int64_t x1033 = -1LL;
int16_t x1034 = INT16_MAX;
int8_t x1036 = -1;
volatile int64_t t13 = 16095993037212080LL;
int32_t x1163 = 4;
uint8_t x1164 = UINT8_MAX;
volatile int32_t t16 = -132627479;
uint64_t t18 = 4LLU;
int32_t x1748 = -1;
volatile uint64_t t23 = 115130885883LLU;
static int64_t t28 = -1061560091669LL;
uint64_t t29 = 31787LLU;
int64_t x2664 = -1LL;
int64_t t30 = -682836LL;
int16_t x2835 = 0;
int32_t x2889 = -1;
static volatile uint64_t t35 = 11074LLU;
volatile int8_t x3124 = INT8_MIN;
static uint64_t x3162 = UINT64_MAX;
static uint8_t x3164 = UINT8_MAX;
int64_t t40 = 1072943622684LL;
uint8_t x3301 = UINT8_MAX;
uint8_t x3302 = 96U;
uint16_t x3471 = 4U;
static int8_t x3543 = 5;
volatile uint32_t x3590 = 24219637U;
int8_t x3714 = INT8_MAX;
uint16_t x3800 = UINT16_MAX;


void f0(void) {
	uint8_t x3 = 1U;
	volatile int16_t x4 = 0;
	uint64_t t0 = 8608LLU;

	t0 = ((x1^(x2<<x3))*x4);

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x186 = 1882394U;
	int8_t x187 = 0;
	static int16_t x188 = -3;
	volatile uint32_t t1 = 1021U;

	t1 = ((x185^(x186<<x187))*x188);

	if (t1 != 4289407825U) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x401 = -1;
	int8_t x403 = 0;
	static volatile int64_t x404 = INT64_MIN;

	t2 = ((x401^(x402<<x403))*x404);

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x525 = INT32_MAX;
	uint64_t x526 = UINT64_MAX;
	uint8_t x527 = 31U;
	int8_t x528 = -20;
	static volatile uint64_t t3 = 787LLU;

	t3 = ((x525^(x526<<x527))*x528);

	if (t3 != 20LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint16_t x669 = UINT16_MAX;
	int64_t x670 = 1LL;
	int8_t x671 = 1;
	uint16_t x672 = 225U;
	int64_t t4 = 623594609LL;

	t4 = ((x669^(x670<<x671))*x672);

	if (t4 != 14744925LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x693 = -30362612528873435LL;
	int64_t x694 = 181799655936LL;
	static int8_t x695 = 1;
	static uint8_t x696 = 1U;
	int64_t t5 = 326466LL;

	t5 = ((x693^(x694<<x695))*x696);

	if (t5 != -30362971557940187LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x697 = INT32_MAX;
	uint64_t x698 = UINT64_MAX;
	int8_t x699 = 0;
	uint8_t x700 = 3U;
	volatile uint64_t t6 = 3LLU;

	t6 = ((x697^(x698<<x699))*x700);

	if (t6 != 18446744067267100672LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x769 = 15187U;
	int8_t x770 = 1;
	volatile uint64_t x771 = 1LLU;
	static int16_t x772 = INT16_MIN;
	static int32_t t7 = 431954018;

	t7 = ((x769^(x770<<x771))*x772);

	if (t7 != -497582080) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x773 = INT64_MIN;
	volatile uint64_t x774 = 138230646376367LLU;
	int8_t x775 = 13;
	uint8_t x776 = UINT8_MAX;
	uint64_t t8 = 3013580263408LLU;

	t8 = ((x773^(x774<<x775))*x776);

	if (t8 != 2833757911877558272LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x813 = 1295;
	int32_t x814 = 602;
	int32_t x815 = 1;
	uint8_t x816 = 21U;
	volatile int32_t t9 = -28;

	t9 = ((x813^(x814<<x815))*x816);

	if (t9 != 9303) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x845 = INT32_MAX;
	static int16_t x846 = INT16_MAX;
	volatile uint8_t x847 = 7U;
	int64_t x848 = -1LL;
	volatile int64_t t10 = -3886LL;

	t10 = ((x845^(x846<<x847))*x848);

	if (t10 != -2143289471LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x873 = INT8_MIN;
	int16_t x874 = 19;
	uint8_t x875 = 0U;
	int8_t x876 = 2;
	int32_t t11 = -5313466;

	t11 = ((x873^(x874<<x875))*x876);

	if (t11 != -218) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x917 = -889071278;
	uint64_t x918 = UINT64_MAX;
	volatile int32_t x919 = 34;

	t12 = ((x917^(x918<<x919))*x920);

	if (t12 != 533800574985902LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x1035 = 7;

	t13 = ((x1033^(x1034<<x1035))*x1036);

	if (t13 != 4194177LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1153 = -1;
	int64_t x1154 = 4654957802187LL;
	int16_t x1155 = 1;
	int32_t x1156 = -4145;
	int64_t t14 = 0LL;

	t14 = ((x1153^(x1154<<x1155))*x1156);

	if (t14 != 38589600180134375LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x1161 = 1;
	static uint8_t x1162 = 15U;
	volatile int32_t t15 = 206401689;

	t15 = ((x1161^(x1162<<x1163))*x1164);

	if (t15 != 61455) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x1249 = 7U;
	static int8_t x1250 = 0;
	static uint8_t x1251 = 9U;
	volatile uint16_t x1252 = 6543U;

	t16 = ((x1249^(x1250<<x1251))*x1252);

	if (t16 != 45801) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1449 = UINT32_MAX;
	static volatile int8_t x1450 = INT8_MAX;
	uint16_t x1451 = 2U;
	int16_t x1452 = -1;
	volatile uint32_t t17 = 925743361U;

	t17 = ((x1449^(x1450<<x1451))*x1452);

	if (t17 != 509U) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1453 = UINT16_MAX;
	static volatile uint16_t x1454 = 1368U;
	uint8_t x1455 = 19U;
	volatile uint64_t x1456 = 2308LLU;

	t18 = ((x1453^(x1454<<x1455))*x1456);

	if (t18 != 1655508825852LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1521 = 46278536162911143LLU;
	volatile int16_t x1522 = 0;
	volatile uint16_t x1523 = 1U;
	int8_t x1524 = INT8_MIN;
	static uint64_t t19 = 763LLU;

	t19 = ((x1521^(x1522<<x1523))*x1524);

	if (t19 != 12523091444856925312LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x1649 = 354;
	uint32_t x1650 = UINT32_MAX;
	static uint8_t x1651 = 6U;
	uint64_t x1652 = UINT64_MAX;
	volatile uint64_t t20 = 10917791511935376LLU;

	t20 = ((x1649^(x1650<<x1651))*x1652);

	if (t20 != 18446744069414584670LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x1745 = UINT16_MAX;
	volatile uint64_t x1746 = 119458465469LLU;
	volatile uint8_t x1747 = 9U;
	volatile uint64_t t21 = 4064534003734LLU;

	t21 = ((x1745^(x1746<<x1747))*x1748);

	if (t21 != 18446682910975228417LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x1913 = 38U;
	static volatile uint32_t x1914 = 0U;
	uint8_t x1915 = 2U;
	uint64_t x1916 = 1059126LLU;
	static volatile uint64_t t22 = 549593006239645LLU;

	t22 = ((x1913^(x1914<<x1915))*x1916);

	if (t22 != 40246788LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x2001 = 49793191266058LLU;
	static uint8_t x2002 = 0U;
	uint8_t x2003 = 30U;
	int16_t x2004 = -34;

	t23 = ((x2001^(x2002<<x2003))*x2004);

	if (t23 != 18445051105206505644LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x2037 = -1;
	volatile uint16_t x2038 = 124U;
	int8_t x2039 = 0;
	uint16_t x2040 = 7U;
	volatile int32_t t24 = 78;

	t24 = ((x2037^(x2038<<x2039))*x2040);

	if (t24 != -875) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x2085 = 2U;
	static uint64_t x2086 = 57LLU;
	volatile uint16_t x2087 = 1U;
	int8_t x2088 = -1;
	volatile uint64_t t25 = 6706377LLU;

	t25 = ((x2085^(x2086<<x2087))*x2088);

	if (t25 != 18446744073709551504LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x2201 = INT32_MAX;
	uint32_t x2202 = 0U;
	uint8_t x2203 = 27U;
	int32_t x2204 = -19;
	uint32_t t26 = 0U;

	t26 = ((x2201^(x2202<<x2203))*x2204);

	if (t26 != 2147483667U) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x2497 = 6342U;
	uint32_t x2498 = 61U;
	volatile uint8_t x2499 = 28U;
	int8_t x2500 = INT8_MAX;
	uint32_t t27 = 191636U;

	t27 = ((x2497^(x2498<<x2499))*x2500);

	if (t27 != 806111802U) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x2549 = INT16_MIN;
	int64_t x2550 = 3LL;
	int8_t x2551 = 0;
	static int16_t x2552 = 1;

	t28 = ((x2549^(x2550<<x2551))*x2552);

	if (t28 != -32765LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x2657 = INT8_MAX;
	uint64_t x2658 = UINT64_MAX;
	volatile uint16_t x2659 = 11U;
	static uint32_t x2660 = UINT32_MAX;

	t29 = ((x2657^(x2658<<x2659))*x2660);

	if (t29 != 18446735823077377921LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x2661 = INT8_MAX;
	volatile int64_t x2662 = 2302060784940386903LL;
	int16_t x2663 = 2;

	t30 = ((x2661^(x2662<<x2663))*x2664);

	if (t30 != -9208243139761547555LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x2693 = INT8_MIN;
	int8_t x2694 = 0;
	static uint32_t x2695 = 21U;
	uint8_t x2696 = 1U;
	volatile int32_t t31 = -305824;

	t31 = ((x2693^(x2694<<x2695))*x2696);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x2725 = UINT8_MAX;
	int16_t x2726 = INT16_MAX;
	int8_t x2727 = 0;
	volatile int8_t x2728 = -1;
	int32_t t32 = -14;

	t32 = ((x2725^(x2726<<x2727))*x2728);

	if (t32 != -32512) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2753 = INT16_MIN;
	static uint16_t x2754 = 41U;
	int8_t x2755 = 2;
	static int64_t x2756 = 341LL;
	volatile int64_t t33 = 15078361LL;

	t33 = ((x2753^(x2754<<x2755))*x2756);

	if (t33 != -11117964LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x2833 = 5LLU;
	uint8_t x2834 = UINT8_MAX;
	int16_t x2836 = INT16_MAX;
	volatile uint64_t t34 = 1856637131335179358LLU;

	t34 = ((x2833^(x2834<<x2835))*x2836);

	if (t34 != 8191750LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x2890 = 37844186876LLU;
	int16_t x2891 = 30;
	static int64_t x2892 = 12426171LL;

	t35 = ((x2889^(x2890<<x2891))*x2892);

	if (t35 != 2774393820589220933LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x3061 = 2170660600619010479LLU;
	int32_t x3062 = 10;
	volatile int8_t x3063 = 3;
	volatile uint64_t x3064 = 0LLU;
	static uint64_t t36 = 71786872872895135LLU;

	t36 = ((x3061^(x3062<<x3063))*x3064);

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x3121 = 2U;
	int32_t x3122 = 14;
	int8_t x3123 = 0;
	int32_t t37 = 5369326;

	t37 = ((x3121^(x3122<<x3123))*x3124);

	if (t37 != -1536) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x3141 = 34780302057492037LLU;
	static uint64_t x3142 = 29487685748LLU;
	int64_t x3143 = 0LL;
	int16_t x3144 = -3;
	volatile uint64_t t38 = 65350LLU;

	t38 = ((x3141^(x3142<<x3143))*x3144);

	if (t38 != 18342403081999644013LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x3161 = INT8_MIN;
	static uint8_t x3163 = 52U;
	uint64_t t39 = 13LLU;

	t39 = ((x3161^(x3162<<x3163))*x3164);

	if (t39 != 1148417904979443840LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x3273 = INT8_MIN;
	uint32_t x3274 = 16U;
	int8_t x3275 = 0;
	int64_t x3276 = 1889LL;

	t40 = ((x3273^(x3274<<x3275))*x3276);

	if (t40 != 8113193010576LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x3303 = 2U;
	int32_t x3304 = -1;
	int32_t t41 = 866041;

	t41 = ((x3301^(x3302<<x3303))*x3304);

	if (t41 != -383) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x3469 = 0;
	uint8_t x3470 = 16U;
	int16_t x3472 = -1;
	int32_t t42 = -18643285;

	t42 = ((x3469^(x3470<<x3471))*x3472);

	if (t42 != -256) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x3541 = 399442131238LL;
	static int64_t x3542 = 6LL;
	volatile int16_t x3544 = -1;
	volatile int64_t t43 = 3255899081LL;

	t43 = ((x3541^(x3542<<x3543))*x3544);

	if (t43 != -399442131430LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x3589 = INT8_MIN;
	int8_t x3591 = 24;
	int8_t x3592 = 4;
	volatile uint32_t t44 = 23U;

	t44 = ((x3589^(x3590<<x3591))*x3592);

	if (t44 != 738196992U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3669 = -4;
	static volatile int32_t x3670 = 1;
	uint8_t x3671 = 11U;
	static int32_t x3672 = -1;
	int32_t t45 = 669;

	t45 = ((x3669^(x3670<<x3671))*x3672);

	if (t45 != 2052) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3713 = INT16_MIN;
	uint8_t x3715 = 1U;
	volatile uint32_t x3716 = 16230861U;
	volatile uint32_t t46 = 43019U;

	t46 = ((x3713^(x3714<<x3715))*x3716);

	if (t46 != 550762854U) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x3797 = 5686694534LLU;
	static int8_t x3798 = 0;
	volatile int8_t x3799 = 11;
	static uint64_t t47 = 33167482946095LLU;

	t47 = ((x3797^(x3798<<x3799))*x3800);

	if (t47 != 372677526285690LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x3869 = -1LL;
	uint64_t x3870 = 4181959893303400LLU;
	uint8_t x3871 = 0U;
	int16_t x3872 = INT16_MAX;
	static uint64_t t48 = 2671849568734LLU;

	t48 = ((x3869^(x3870<<x3871))*x3872);

	if (t48 != 10543672765803872361LLU) { NG(); } else { ; }
	
}

int main(void) {
    f0();
    f1();
    f2();
    f3();
    f4();
    f5();
    f6();
    f7();
    f8();
    f9();
    f10();
    f11();
    f12();
    f13();
    f14();
    f15();
    f16();
    f17();
    f18();
    f19();
    f20();
    f21();
    f22();
    f23();
    f24();
    f25();
    f26();
    f27();
    f28();
    f29();
    f30();
    f31();
    f32();
    f33();
    f34();
    f35();
    f36();
    f37();
    f38();
    f39();
    f40();
    f41();
    f42();
    f43();
    f44();
    f45();
    f46();
    f47();
    f48();


    return 0;
}

