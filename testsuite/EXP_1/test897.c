#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x32 = 5272;
int8_t x106 = 2;
int16_t x240 = INT16_MIN;
int8_t x307 = INT8_MIN;
uint64_t t4 = 1022287537256427LLU;
volatile uint64_t x529 = UINT64_MAX;
volatile uint8_t x530 = 2U;
static uint8_t x531 = UINT8_MAX;
uint16_t x808 = UINT16_MAX;
int64_t x848 = INT64_MAX;
uint32_t x978 = 4U;
static volatile int8_t x1081 = 6;
uint16_t x1102 = 29U;
int16_t x1125 = INT16_MAX;
uint8_t x1127 = 89U;
uint16_t x1233 = UINT16_MAX;
int8_t x1339 = 36;
int16_t x1391 = INT16_MIN;
int16_t x1392 = INT16_MAX;
volatile uint16_t x1401 = 7729U;
static int32_t x1425 = 1;
volatile int64_t t22 = 103316LL;
volatile int32_t x1565 = INT32_MAX;
static volatile int64_t t23 = 924172LL;
volatile uint32_t x1840 = UINT32_MAX;
int64_t t26 = 149448LL;
uint8_t x1842 = 6U;
volatile int16_t x1843 = INT16_MIN;
int8_t x1864 = -1;
uint8_t x1962 = 0U;
volatile int64_t t29 = 268LL;
volatile int8_t x1982 = 1;
volatile uint32_t t30 = 175U;
static int16_t x2085 = INT16_MAX;
volatile int8_t x2087 = INT8_MIN;
int32_t x2088 = INT32_MIN;
uint8_t x2226 = 3U;
static int32_t t32 = -5108619;
int64_t t33 = -3LL;
uint8_t x2461 = 48U;
volatile int64_t t38 = INT64_MIN;
uint16_t x2711 = 3U;
int32_t x2712 = -1075945;
static uint16_t x2724 = 6732U;
uint64_t x2757 = 279874796468694170LLU;
static int8_t x2762 = 0;
int32_t x2763 = -43;
volatile uint8_t x2775 = 1U;
static uint32_t x2896 = 3658335U;
int32_t x2956 = INT32_MAX;
uint16_t x3175 = 1U;
volatile uint64_t x3197 = 26LLU;
static uint8_t x3198 = 38U;
uint8_t x3202 = 4U;
uint32_t x3209 = 588496U;
static uint64_t x3210 = 27LLU;
volatile int8_t x3225 = 0;
volatile uint8_t x3226 = 14U;
int8_t x3228 = INT8_MIN;
uint8_t x3377 = 3U;
int64_t x3448 = INT64_MIN;
uint32_t x3489 = 63251898U;
static int8_t x3492 = 8;
static int8_t x3526 = 3;
volatile uint64_t t57 = 3733LLU;
static int8_t x3661 = 5;
int8_t x3690 = 0;
int8_t x3691 = INT8_MIN;
uint16_t x3711 = 33U;
volatile uint64_t t62 = 42174996LLU;
int32_t t64 = 916452;
static int64_t x3747 = 124LL;
uint32_t t66 = 120085090U;
volatile int64_t x3803 = -9419LL;
static uint64_t x3845 = 6167664495370LLU;
static int8_t x3847 = 3;
int8_t x4216 = INT8_MIN;
int16_t x4224 = INT16_MIN;
int16_t x4262 = 0;
int16_t x4263 = -1;
int8_t x4289 = 13;
static uint32_t x4291 = 117084592U;
volatile uint8_t x4298 = 2U;
int64_t x4299 = INT64_MIN;
static volatile uint64_t t76 = 61028922LLU;
static int64_t x4380 = 28971570370LL;
volatile int8_t x4432 = INT8_MAX;
int64_t t80 = -18217554LL;
int16_t x4543 = INT16_MIN;
int64_t x4583 = INT64_MIN;
uint16_t x4584 = 30873U;
uint64_t x4611 = 31LLU;
int32_t x4612 = 10649119;
static uint64_t t83 = 63725545289182668LLU;
uint32_t x4657 = 2096U;
int8_t x4658 = 24;
volatile int32_t t85 = 47;
int16_t x4807 = -1;
int16_t x4808 = 123;
int16_t x4832 = 5692;
int32_t x4923 = INT32_MIN;
int8_t x4981 = 0;
static int32_t x4982 = 1;
volatile uint32_t x5065 = 1U;
int16_t x5066 = 5;
uint32_t x5175 = UINT32_MAX;
uint8_t x5251 = 5U;
int32_t x5279 = -1;
uint32_t t98 = 840319U;
static volatile uint16_t x5314 = 3U;
int32_t t99 = 1;


void f0(void) {
	int8_t x29 = INT8_MAX;
	int64_t x30 = 7LL;
	static int8_t x31 = INT8_MAX;
	volatile int32_t t0 = -220510361;

	t0 = (((x29<<x30)/x31)^x32);

	if (t0 != 5144) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x105 = 0;
	uint16_t x107 = UINT16_MAX;
	int8_t x108 = INT8_MAX;
	int32_t t1 = -252995;

	t1 = (((x105<<x106)/x107)^x108);

	if (t1 != 127) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x233 = 2U;
	uint8_t x234 = 1U;
	volatile int16_t x235 = INT16_MIN;
	uint8_t x236 = 96U;
	volatile int32_t t2 = 0;

	t2 = (((x233<<x234)/x235)^x236);

	if (t2 != 96) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x237 = 1073581;
	int16_t x238 = 6;
	volatile uint64_t x239 = UINT64_MAX;
	uint64_t t3 = 78843533879601LLU;

	t3 = (((x237<<x238)/x239)^x240);

	if (t3 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x305 = UINT8_MAX;
	volatile uint8_t x306 = 2U;
	volatile uint64_t x308 = 11101148377591912LLU;

	t4 = (((x305<<x306)/x307)^x308);

	if (t4 != 18435642925331959697LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x393 = 5U;
	static int16_t x394 = 6;
	volatile int64_t x395 = -229652LL;
	uint64_t x396 = 0LLU;
	volatile uint64_t t5 = 3LLU;

	t5 = (((x393<<x394)/x395)^x396);

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x532 = -440;
	uint64_t t6 = 1269675168366LLU;

	t6 = (((x529<<x530)/x531)^x532);

	if (t6 != 18374403900871475016LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x801 = 222U;
	uint32_t x802 = 3U;
	uint64_t x803 = 3776623520LLU;
	uint8_t x804 = UINT8_MAX;
	uint64_t t7 = 57617LLU;

	t7 = (((x801<<x802)/x803)^x804);

	if (t7 != 255LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x805 = UINT16_MAX;
	int8_t x806 = 0;
	static int32_t x807 = -1;
	int32_t t8 = -7371581;

	t8 = (((x805<<x806)/x807)^x808);

	if (t8 != -2) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x845 = 1;
	uint32_t x846 = 3U;
	static int16_t x847 = -5;
	int64_t t9 = INT64_MIN;

	t9 = (((x845<<x846)/x847)^x848);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x977 = 0U;
	static int8_t x979 = INT8_MIN;
	int8_t x980 = -1;
	volatile int32_t t10 = 3864718;

	t10 = (((x977<<x978)/x979)^x980);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x989 = UINT8_MAX;
	uint8_t x990 = 2U;
	uint8_t x991 = UINT8_MAX;
	int64_t x992 = -3489LL;
	volatile int64_t t11 = -3LL;

	t11 = (((x989<<x990)/x991)^x992);

	if (t11 != -3493LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x993 = 67U;
	volatile uint8_t x994 = 0U;
	volatile uint64_t x995 = UINT64_MAX;
	int32_t x996 = INT32_MIN;
	uint64_t t12 = 3225153479LLU;

	t12 = (((x993<<x994)/x995)^x996);

	if (t12 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x1082 = 12U;
	int32_t x1083 = INT32_MIN;
	static volatile int32_t x1084 = -131509;
	volatile int32_t t13 = -21;

	t13 = (((x1081<<x1082)/x1083)^x1084);

	if (t13 != -131509) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x1097 = 330U;
	volatile uint8_t x1098 = 11U;
	int64_t x1099 = 109275LL;
	int16_t x1100 = INT16_MIN;
	int64_t t14 = 24LL;

	t14 = (((x1097<<x1098)/x1099)^x1100);

	if (t14 != -32762LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x1101 = 72530342LLU;
	int16_t x1103 = -1;
	static int32_t x1104 = INT32_MAX;
	static volatile uint64_t t15 = 30321330LLU;

	t15 = (((x1101<<x1102)/x1103)^x1104);

	if (t15 != 2147483647LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1126 = 0;
	int64_t x1128 = INT64_MAX;
	int64_t t16 = 4641LL;

	t16 = (((x1125<<x1126)/x1127)^x1128);

	if (t16 != 9223372036854775439LL) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x1234 = 0;
	static int8_t x1235 = 23;
	uint16_t x1236 = UINT16_MAX;
	volatile int32_t t17 = 810122659;

	t17 = (((x1233<<x1234)/x1235)^x1236);

	if (t17 != 62686) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x1305 = UINT16_MAX;
	int8_t x1306 = 7;
	int32_t x1307 = 36;
	uint64_t x1308 = 604136706692209LLU;
	volatile uint64_t t18 = 235LLU;

	t18 = (((x1305<<x1306)/x1307)^x1308);

	if (t18 != 604136706923076LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x1337 = UINT64_MAX;
	static uint8_t x1338 = 1U;
	volatile uint16_t x1340 = UINT16_MAX;
	volatile uint64_t t19 = 57985LLU;

	t19 = (((x1337<<x1338)/x1339)^x1340);

	if (t19 != 512409557603006691LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x1389 = UINT32_MAX;
	uint8_t x1390 = 5U;
	volatile uint32_t t20 = 130077U;

	t20 = (((x1389<<x1390)/x1391)^x1392);

	if (t20 != 32766U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x1402 = 0LL;
	int64_t x1403 = INT64_MAX;
	int16_t x1404 = INT16_MIN;
	int64_t t21 = -12584529583590LL;

	t21 = (((x1401<<x1402)/x1403)^x1404);

	if (t21 != -32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x1426 = 4U;
	static int64_t x1427 = INT64_MIN;
	int8_t x1428 = INT8_MIN;

	t22 = (((x1425<<x1426)/x1427)^x1428);

	if (t22 != -128LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x1566 = 0U;
	int64_t x1567 = INT64_MAX;
	int64_t x1568 = 210619956755380020LL;

	t23 = (((x1565<<x1566)/x1567)^x1568);

	if (t23 != 210619956755380020LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x1593 = 12733267;
	int8_t x1594 = 1;
	static int16_t x1595 = INT16_MAX;
	volatile int16_t x1596 = 166;
	volatile int32_t t24 = 238;

	t24 = (((x1593<<x1594)/x1595)^x1596);

	if (t24 != 943) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x1817 = 32U;
	uint8_t x1818 = 21U;
	uint64_t x1819 = 19969LLU;
	static volatile uint16_t x1820 = UINT16_MAX;
	volatile uint64_t t25 = 100815LLU;

	t25 = (((x1817<<x1818)/x1819)^x1820);

	if (t25 != 62175LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x1837 = 1;
	static int16_t x1838 = 2;
	static int64_t x1839 = 4050304897741LL;

	t26 = (((x1837<<x1838)/x1839)^x1840);

	if (t26 != 4294967295LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x1841 = 382;
	int16_t x1844 = -1;
	volatile int32_t t27 = 126;

	t27 = (((x1841<<x1842)/x1843)^x1844);

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x1861 = 2166178U;
	uint8_t x1862 = 4U;
	uint64_t x1863 = 4174252160801141LLU;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (((x1861<<x1862)/x1863)^x1864);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1961 = 22U;
	int32_t x1963 = 23354;
	int64_t x1964 = -4894835256581LL;

	t29 = (((x1961<<x1962)/x1963)^x1964);

	if (t29 != -4894835256581LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x1981 = 17U;
	static volatile uint32_t x1983 = 9U;
	static int8_t x1984 = -1;

	t30 = (((x1981<<x1982)/x1983)^x1984);

	if (t30 != 4294967292U) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x2086 = 6LLU;
	static volatile int32_t t31 = -15269891;

	t31 = (((x2085<<x2086)/x2087)^x2088);

	if (t31 != 2147467265) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x2225 = 228U;
	static uint16_t x2227 = UINT16_MAX;
	uint16_t x2228 = 199U;

	t32 = (((x2225<<x2226)/x2227)^x2228);

	if (t32 != 199) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x2229 = 79;
	uint64_t x2230 = 3LLU;
	static int64_t x2231 = INT64_MIN;
	uint8_t x2232 = 7U;

	t33 = (((x2229<<x2230)/x2231)^x2232);

	if (t33 != 7LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x2321 = INT8_MAX;
	uint8_t x2322 = 0U;
	uint16_t x2323 = UINT16_MAX;
	int16_t x2324 = 6;
	volatile int32_t t34 = 107577;

	t34 = (((x2321<<x2322)/x2323)^x2324);

	if (t34 != 6) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x2462 = 11U;
	volatile int8_t x2463 = 5;
	static uint64_t x2464 = 132810751LLU;
	uint64_t t35 = 48269LLU;

	t35 = (((x2461<<x2462)/x2463)^x2464);

	if (t35 != 132827955LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x2557 = 0U;
	volatile uint8_t x2558 = 0U;
	int64_t x2559 = INT64_MIN;
	volatile uint64_t x2560 = UINT64_MAX;
	volatile uint64_t t36 = UINT64_MAX;

	t36 = (((x2557<<x2558)/x2559)^x2560);

	if (t36 != UINT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x2589 = 820468693U;
	uint8_t x2590 = 0U;
	static volatile int64_t x2591 = -1LL;
	static int16_t x2592 = 7;
	static volatile int64_t t37 = -31733478322LL;

	t37 = (((x2589<<x2590)/x2591)^x2592);

	if (t37 != -820468692LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x2633 = UINT8_MAX;
	int8_t x2634 = 2;
	int32_t x2635 = INT32_MIN;
	int64_t x2636 = INT64_MIN;

	t38 = (((x2633<<x2634)/x2635)^x2636);

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x2709 = UINT8_MAX;
	uint64_t x2710 = 11LLU;
	volatile int32_t t39 = 0;

	t39 = (((x2709<<x2710)/x2711)^x2712);

	if (t39 != -1229545) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x2721 = 1;
	static int32_t x2722 = 0;
	static volatile uint8_t x2723 = 2U;
	volatile int32_t t40 = -14;

	t40 = (((x2721<<x2722)/x2723)^x2724);

	if (t40 != 6732) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x2758 = 59U;
	uint64_t x2759 = UINT64_MAX;
	volatile uint8_t x2760 = UINT8_MAX;
	volatile uint64_t t41 = 22565978LLU;

	t41 = (((x2757<<x2758)/x2759)^x2760);

	if (t41 != 255LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x2761 = 0U;
	volatile uint64_t x2764 = 5699558972805LLU;
	static volatile uint64_t t42 = 22LLU;

	t42 = (((x2761<<x2762)/x2763)^x2764);

	if (t42 != 5699558972805LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x2773 = INT8_MAX;
	int16_t x2774 = 1;
	static volatile int16_t x2776 = INT16_MAX;
	volatile int32_t t43 = -1;

	t43 = (((x2773<<x2774)/x2775)^x2776);

	if (t43 != 32513) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x2893 = UINT8_MAX;
	uint64_t x2894 = 7LLU;
	uint64_t x2895 = UINT64_MAX;
	static volatile uint64_t t44 = 14868151233672826LLU;

	t44 = (((x2893<<x2894)/x2895)^x2896);

	if (t44 != 3658335LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x2953 = 7U;
	int8_t x2954 = 10;
	static int8_t x2955 = INT8_MIN;
	int32_t t45 = -15178382;

	t45 = (((x2953<<x2954)/x2955)^x2956);

	if (t45 != -2147483593) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x2965 = 3507684927095LLU;
	int8_t x2966 = 21;
	volatile int8_t x2967 = 14;
	volatile uint8_t x2968 = 5U;
	static uint64_t t46 = 4188841LLU;

	t46 = (((x2965<<x2966)/x2967)^x2968);

	if (t46 != 525439175730509534LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x3129 = 49;
	volatile uint16_t x3130 = 0U;
	volatile int16_t x3131 = INT16_MIN;
	int16_t x3132 = -1;
	volatile int32_t t47 = -567649281;

	t47 = (((x3129<<x3130)/x3131)^x3132);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3173 = UINT16_MAX;
	static uint64_t x3174 = 3LLU;
	volatile int8_t x3176 = INT8_MAX;
	int32_t t48 = -3201;

	t48 = (((x3173<<x3174)/x3175)^x3176);

	if (t48 != 524167) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x3199 = 973U;
	uint64_t x3200 = UINT64_MAX;
	uint64_t t49 = 10LLU;

	t49 = (((x3197<<x3198)/x3199)^x3200);

	if (t49 != 18446744066364407134LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x3201 = 62;
	int16_t x3203 = INT16_MIN;
	int8_t x3204 = -1;
	volatile int32_t t50 = -104459;

	t50 = (((x3201<<x3202)/x3203)^x3204);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint16_t x3211 = 5256U;
	static int16_t x3212 = INT16_MIN;
	static volatile uint32_t t51 = 32920920U;

	t51 = (((x3209<<x3210)/x3211)^x3212);

	if (t51 != 4294556673U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x3227 = 518403927319LLU;
	static uint64_t t52 = 57442870377563829LLU;

	t52 = (((x3225<<x3226)/x3227)^x3228);

	if (t52 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x3341 = 3440U;
	volatile int8_t x3342 = 0;
	uint64_t x3343 = UINT64_MAX;
	int64_t x3344 = INT64_MIN;
	static uint64_t t53 = 3603406868963LLU;

	t53 = (((x3341<<x3342)/x3343)^x3344);

	if (t53 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x3378 = 0;
	int64_t x3379 = INT64_MIN;
	int32_t x3380 = INT32_MIN;
	volatile int64_t t54 = 2286730268945193479LL;

	t54 = (((x3377<<x3378)/x3379)^x3380);

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x3445 = 0U;
	static volatile uint16_t x3446 = 6U;
	int64_t x3447 = INT64_MIN;
	volatile int64_t t55 = INT64_MIN;

	t55 = (((x3445<<x3446)/x3447)^x3448);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x3490 = 15;
	uint64_t x3491 = UINT64_MAX;
	volatile uint64_t t56 = 9186827371768075266LLU;

	t56 = (((x3489<<x3490)/x3491)^x3492);

	if (t56 != 8LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x3525 = 428LLU;
	uint8_t x3527 = 5U;
	static uint16_t x3528 = 0U;

	t57 = (((x3525<<x3526)/x3527)^x3528);

	if (t57 != 684LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x3593 = 3403U;
	int8_t x3594 = 12;
	int32_t x3595 = INT32_MIN;
	static uint16_t x3596 = 38U;
	int32_t t58 = 7402125;

	t58 = (((x3593<<x3594)/x3595)^x3596);

	if (t58 != 38) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x3662 = 2U;
	int32_t x3663 = -152605841;
	int32_t x3664 = 146974005;
	int32_t t59 = 0;

	t59 = (((x3661<<x3662)/x3663)^x3664);

	if (t59 != 146974005) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x3689 = 0;
	uint32_t x3692 = 800U;
	static uint32_t t60 = 11U;

	t60 = (((x3689<<x3690)/x3691)^x3692);

	if (t60 != 800U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x3693 = UINT16_MAX;
	uint8_t x3694 = 0U;
	int8_t x3695 = INT8_MAX;
	static int16_t x3696 = INT16_MIN;
	int32_t t61 = 201;

	t61 = (((x3693<<x3694)/x3695)^x3696);

	if (t61 != -32252) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x3709 = UINT64_MAX;
	int16_t x3710 = 1;
	static uint16_t x3712 = 0U;

	t62 = (((x3709<<x3710)/x3711)^x3712);

	if (t62 != 558992244657865200LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x3717 = UINT16_MAX;
	uint16_t x3718 = 2U;
	uint32_t x3719 = 46242U;
	int8_t x3720 = INT8_MIN;
	static uint32_t t63 = 1060165U;

	t63 = (((x3717<<x3718)/x3719)^x3720);

	if (t63 != 4294967173U) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3725 = 14U;
	uint8_t x3726 = 16U;
	static volatile int16_t x3727 = INT16_MIN;
	int32_t x3728 = INT32_MIN;

	t64 = (((x3725<<x3726)/x3727)^x3728);

	if (t64 != 2147483620) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x3745 = UINT64_MAX;
	static int8_t x3746 = 8;
	uint16_t x3748 = UINT16_MAX;
	volatile uint64_t t65 = 1394524LLU;

	t65 = (((x3745<<x3746)/x3747)^x3748);

	if (t65 != 148764065110617981LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x3769 = 3U;
	uint8_t x3770 = 1U;
	int32_t x3771 = 11;
	int16_t x3772 = INT16_MAX;

	t66 = (((x3769<<x3770)/x3771)^x3772);

	if (t66 != 32767U) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x3801 = 2927643164622LLU;
	volatile int8_t x3802 = 31;
	int16_t x3804 = INT16_MAX;
	static uint64_t t67 = 364685912140LLU;

	t67 = (((x3801<<x3802)/x3803)^x3804);

	if (t67 != 32767LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x3846 = 6U;
	volatile int32_t x3848 = -99011083;
	uint64_t t68 = 118312330689430339LLU;

	t68 = (((x3845<<x3846)/x3847)^x3848);

	if (t68 != 18446612496932369696LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x3877 = UINT64_MAX;
	uint32_t x3878 = 14U;
	int8_t x3879 = -54;
	uint16_t x3880 = 14U;
	static uint64_t t69 = 150LLU;

	t69 = (((x3877<<x3878)/x3879)^x3880);

	if (t69 != 14LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x3949 = 1U;
	volatile uint64_t x3950 = 5LLU;
	int8_t x3951 = INT8_MIN;
	int32_t x3952 = 4;
	volatile uint32_t t70 = 0U;

	t70 = (((x3949<<x3950)/x3951)^x3952);

	if (t70 != 4U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x3997 = INT8_MAX;
	uint32_t x3998 = 1U;
	int16_t x3999 = INT16_MAX;
	uint64_t x4000 = 6271843LLU;
	uint64_t t71 = 0LLU;

	t71 = (((x3997<<x3998)/x3999)^x4000);

	if (t71 != 6271843LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x4213 = INT8_MAX;
	volatile int16_t x4214 = 2;
	static volatile int32_t x4215 = INT32_MIN;
	volatile int32_t t72 = -193637461;

	t72 = (((x4213<<x4214)/x4215)^x4216);

	if (t72 != -128) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x4221 = 14;
	int8_t x4222 = 1;
	int16_t x4223 = INT16_MIN;
	static volatile int32_t t73 = -64234;

	t73 = (((x4221<<x4222)/x4223)^x4224);

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x4261 = 10;
	static volatile int8_t x4264 = INT8_MAX;
	int32_t t74 = -3394507;

	t74 = (((x4261<<x4262)/x4263)^x4264);

	if (t74 != -119) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x4290 = 6U;
	static int8_t x4292 = 0;
	uint32_t t75 = 241425U;

	t75 = (((x4289<<x4290)/x4291)^x4292);

	if (t75 != 0U) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x4297 = UINT64_MAX;
	volatile int32_t x4300 = INT32_MIN;

	t76 = (((x4297<<x4298)/x4299)^x4300);

	if (t76 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x4333 = UINT64_MAX;
	int8_t x4334 = 0;
	uint8_t x4335 = 61U;
	int32_t x4336 = 1936191;
	static uint64_t t77 = 818810731LLU;

	t77 = (((x4333<<x4334)/x4335)^x4336);

	if (t77 != 302405640551859599LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x4377 = INT16_MAX;
	uint8_t x4378 = 1U;
	int64_t x4379 = -1LL;
	static int64_t t78 = 326399085463009677LL;

	t78 = (((x4377<<x4378)/x4379)^x4380);

	if (t78 != -28971625280LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x4421 = 2345866LL;
	static volatile uint8_t x4422 = 2U;
	int8_t x4423 = INT8_MIN;
	uint8_t x4424 = 3U;
	volatile int64_t t79 = 509761058482LL;

	t79 = (((x4421<<x4422)/x4423)^x4424);

	if (t79 != -73305LL) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x4429 = INT16_MAX;
	volatile int16_t x4430 = 0;
	int64_t x4431 = 147293702LL;

	t80 = (((x4429<<x4430)/x4431)^x4432);

	if (t80 != 127LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x4541 = 21U;
	uint64_t x4542 = 22LLU;
	static int16_t x4544 = INT16_MAX;
	int32_t t81 = 7;

	t81 = (((x4541<<x4542)/x4543)^x4544);

	if (t81 != -30081) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4581 = 358556325U;
	int32_t x4582 = 29;
	int64_t t82 = -540005010017781LL;

	t82 = (((x4581<<x4582)/x4583)^x4584);

	if (t82 != 30873LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x4609 = 3682220032986135LLU;
	int16_t x4610 = 4;

	t83 = (((x4609<<x4610)/x4611)^x4612);

	if (t83 != 1900500656000903LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x4659 = -1LL;
	int8_t x4660 = INT8_MIN;
	volatile int64_t t84 = 2685LL;

	t84 = (((x4657<<x4658)/x4659)^x4660);

	if (t84 != 805306240LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x4789 = INT8_MAX;
	uint8_t x4790 = 4U;
	int16_t x4791 = INT16_MIN;
	int16_t x4792 = INT16_MAX;

	t85 = (((x4789<<x4790)/x4791)^x4792);

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x4805 = 912585846090LLU;
	static uint16_t x4806 = 31U;
	volatile uint64_t t86 = 120087LLU;

	t86 = (((x4805<<x4806)/x4807)^x4808);

	if (t86 != 123LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x4829 = INT16_MAX;
	int8_t x4830 = 4;
	int64_t x4831 = -1LL;
	volatile int64_t t87 = -3266LL;

	t87 = (((x4829<<x4830)/x4831)^x4832);

	if (t87 != -518612LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x4921 = 439U;
	int8_t x4922 = 0;
	int8_t x4924 = INT8_MIN;
	static uint32_t t88 = 758U;

	t88 = (((x4921<<x4922)/x4923)^x4924);

	if (t88 != 4294967168U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x4973 = UINT32_MAX;
	uint16_t x4974 = 28U;
	int32_t x4975 = INT32_MIN;
	volatile uint64_t x4976 = 658826LLU;
	static volatile uint64_t t89 = 0LLU;

	t89 = (((x4973<<x4974)/x4975)^x4976);

	if (t89 != 658827LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x4983 = INT32_MAX;
	int32_t x4984 = 23796156;
	volatile int32_t t90 = 41;

	t90 = (((x4981<<x4982)/x4983)^x4984);

	if (t90 != 23796156) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x5045 = 14035069754LL;
	static volatile int8_t x5046 = 13;
	volatile uint8_t x5047 = UINT8_MAX;
	static int8_t x5048 = -1;
	int64_t t91 = -44963620418LL;

	t91 = (((x5045<<x5046)/x5047)^x5048);

	if (t91 != -450883495784LL) { NG(); } else { ; }
	
}

void f92(void) {
	static int16_t x5067 = -1;
	volatile int8_t x5068 = -1;
	volatile uint32_t t92 = UINT32_MAX;

	t92 = (((x5065<<x5066)/x5067)^x5068);

	if (t92 != UINT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x5117 = 1438LL;
	uint16_t x5118 = 1U;
	uint32_t x5119 = 233237U;
	static volatile uint64_t x5120 = 1446952429586913892LLU;
	static uint64_t t93 = 35553LLU;

	t93 = (((x5117<<x5118)/x5119)^x5120);

	if (t93 != 1446952429586913892LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x5141 = 1;
	int32_t x5142 = 9;
	volatile int8_t x5143 = -1;
	int16_t x5144 = -7;
	volatile int32_t t94 = -103705377;

	t94 = (((x5141<<x5142)/x5143)^x5144);

	if (t94 != 505) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x5173 = UINT16_MAX;
	static int16_t x5174 = 0;
	int64_t x5176 = INT64_MIN;
	volatile int64_t t95 = INT64_MIN;

	t95 = (((x5173<<x5174)/x5175)^x5176);

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x5249 = 45U;
	uint8_t x5250 = 5U;
	uint64_t x5252 = 1511632371LLU;
	volatile uint64_t t96 = 133386714065921960LLU;

	t96 = (((x5249<<x5250)/x5251)^x5252);

	if (t96 != 1511632083LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x5277 = INT8_MAX;
	int8_t x5278 = 24;
	int64_t x5280 = INT64_MIN;
	int64_t t97 = -253520024953LL;

	t97 = (((x5277<<x5278)/x5279)^x5280);

	if (t97 != 9223372034724069376LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x5305 = 8740;
	static uint16_t x5306 = 4U;
	uint32_t x5307 = 1919136118U;
	volatile uint8_t x5308 = 0U;

	t98 = (((x5305<<x5306)/x5307)^x5308);

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x5313 = 1U;
	volatile int16_t x5315 = INT16_MAX;
	int8_t x5316 = -1;

	t99 = (((x5313<<x5314)/x5315)^x5316);

	if (t99 != -1) { NG(); } else { ; }
	
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
    f49();
    f50();
    f51();
    f52();
    f53();
    f54();
    f55();
    f56();
    f57();
    f58();
    f59();
    f60();
    f61();
    f62();
    f63();
    f64();
    f65();
    f66();
    f67();
    f68();
    f69();
    f70();
    f71();
    f72();
    f73();
    f74();
    f75();
    f76();
    f77();
    f78();
    f79();
    f80();
    f81();
    f82();
    f83();
    f84();
    f85();
    f86();
    f87();
    f88();
    f89();
    f90();
    f91();
    f92();
    f93();
    f94();
    f95();
    f96();
    f97();
    f98();
    f99();


    return 0;
}

