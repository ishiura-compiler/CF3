#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x126 = 28;
int32_t x128 = -1;
volatile uint64_t t1 = 78LLU;
static uint32_t x237 = 52008410U;
int16_t x239 = INT16_MAX;
uint16_t x240 = 28U;
uint16_t x302 = 14U;
uint32_t t5 = 26046U;
uint8_t x349 = UINT8_MAX;
uint8_t x350 = 0U;
volatile int64_t x352 = INT64_MAX;
int64_t t6 = -249147567099427664LL;
volatile uint32_t t7 = 1U;
static int64_t x604 = -26LL;
volatile int32_t x611 = -1;
int64_t x640 = INT64_MIN;
uint8_t x737 = UINT8_MAX;
int8_t x738 = 0;
static int8_t x739 = -58;
uint16_t x773 = 325U;
uint16_t x776 = UINT16_MAX;
volatile uint64_t t18 = 56787136942616LLU;
int8_t x854 = 27;
static int16_t x917 = 1996;
volatile int64_t x919 = -1LL;
int32_t x1201 = INT32_MAX;
uint8_t x1202 = 0U;
volatile int32_t t25 = -176013;
uint64_t x1389 = 85297LLU;
uint64_t x1392 = 596669663247410780LLU;
static uint32_t t31 = 764U;
volatile int64_t t35 = -26138LL;
volatile int8_t x1942 = 0;
volatile int8_t x1944 = -1;
uint8_t x1965 = UINT8_MAX;
int16_t x1966 = 5;
uint16_t x1969 = 444U;
static int16_t x2231 = -7;
static volatile uint8_t x2318 = 1U;
int32_t x2320 = INT32_MIN;
uint8_t x2350 = 3U;
int64_t x2376 = INT64_MIN;
volatile uint8_t x2449 = 38U;
int8_t x2506 = 2;
int8_t x2519 = -3;
static int64_t x2587 = INT64_MIN;
int16_t x2588 = INT16_MAX;
volatile int64_t t49 = -4753819LL;
uint8_t x2626 = 0U;
int16_t x2657 = INT16_MAX;
volatile int16_t x2660 = INT16_MIN;
volatile int64_t t52 = -3831677061LL;
int16_t x2924 = INT16_MIN;
int64_t x3032 = INT64_MIN;
static uint64_t x3073 = 682LLU;
volatile uint64_t t61 = 53715LLU;
static int16_t x3145 = 1630;
uint16_t x3147 = UINT16_MAX;
volatile int32_t t62 = 69;
uint32_t x3214 = 1U;
volatile int64_t t64 = 1LL;
int8_t x3319 = INT8_MIN;
int8_t x3320 = INT8_MIN;
int32_t t65 = 1;
volatile int64_t t68 = 15643206196258LL;
int8_t x3430 = 1;
int64_t t69 = INT64_MAX;
int64_t x3524 = -1LL;
int8_t x3586 = 0;
uint16_t x3588 = 10U;
static int32_t t72 = -12173;
volatile int16_t x3809 = INT16_MAX;
int16_t x3811 = INT16_MAX;
volatile uint8_t x3859 = 13U;
int64_t t80 = 5402LL;
int16_t x4012 = 1;
int64_t t82 = 1LL;
volatile int8_t x4070 = 2;
volatile int16_t x4072 = -1;
int32_t t84 = -2670;
int32_t x4088 = INT32_MIN;
static uint16_t x4109 = 533U;
int16_t x4111 = INT16_MIN;
int64_t x4257 = 1LL;
static uint64_t t88 = 1641248LLU;
uint8_t x4369 = 30U;
static volatile uint64_t x4455 = 2042578LLU;
int64_t t94 = -244328214LL;
uint16_t x4630 = 3U;
static int32_t x4631 = INT32_MIN;
int64_t x4667 = 27075LL;
int16_t x4668 = -1;
int16_t x4670 = 1;
int64_t x4697 = 99047803186LL;
static int64_t x4700 = -1LL;


void f0(void) {
	int8_t x125 = 1;
	uint64_t x127 = 109472805913866107LLU;
	volatile uint64_t t0 = 28216887LLU;

	t0 = (((x125>>x126)^x127)^x128);

	if (t0 != 18337271267795685508LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x141 = 7152LLU;
	uint8_t x142 = 0U;
	static int16_t x143 = INT16_MAX;
	int8_t x144 = INT8_MIN;

	t1 = (((x141>>x142)^x143)^x144);

	if (t1 != 18446744073709525903LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint32_t x157 = 1051541585U;
	uint8_t x158 = 8U;
	volatile int8_t x159 = INT8_MAX;
	static volatile int32_t x160 = INT32_MAX;
	volatile uint32_t t2 = 7652U;

	t2 = (((x157>>x158)^x159)^x160);

	if (t2 != 2143376064U) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x197 = 3U;
	volatile uint16_t x198 = 3U;
	static volatile uint64_t x199 = 80LLU;
	int64_t x200 = -62338860LL;
	volatile uint64_t t3 = 77507054945025494LLU;

	t3 = (((x197>>x198)^x199)^x200);

	if (t3 != 18446744073647212676LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x238 = 0;
	static uint32_t t4 = 495U;

	t4 = (((x237>>x238)^x239)^x240);

	if (t4 != 52030009U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x301 = 5118U;
	int16_t x303 = INT16_MIN;
	static int32_t x304 = INT32_MIN;

	t5 = (((x301>>x302)^x303)^x304);

	if (t5 != 2147450880U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x351 = INT8_MIN;

	t6 = (((x349>>x350)^x351)^x352);

	if (t6 != -9223372036854775680LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x389 = 37389853U;
	uint8_t x390 = 2U;
	static int8_t x391 = -7;
	int16_t x392 = INT16_MAX;

	t7 = (((x389>>x390)^x391)^x392);

	if (t7 != 4285604225U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint64_t x429 = 1128187192308236481LLU;
	volatile uint8_t x430 = 1U;
	uint16_t x431 = 4U;
	static uint16_t x432 = 1U;
	static uint64_t t8 = 230957LLU;

	t8 = (((x429>>x430)^x431)^x432);

	if (t8 != 564093596154118245LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x445 = INT8_MAX;
	int8_t x446 = 1;
	uint64_t x447 = 28911379492006LLU;
	volatile uint16_t x448 = 52U;
	volatile uint64_t t9 = 3LLU;

	t9 = (((x445>>x446)^x447)^x448);

	if (t9 != 28911379492013LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x469 = 16;
	uint8_t x470 = 13U;
	volatile int64_t x471 = INT64_MAX;
	int16_t x472 = INT16_MIN;
	int64_t t10 = 1864064000462LL;

	t10 = (((x469>>x470)^x471)^x472);

	if (t10 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x577 = INT32_MAX;
	volatile int8_t x578 = 2;
	volatile uint16_t x579 = 525U;
	static int16_t x580 = 1523;
	int32_t t11 = 0;

	t11 = (((x577>>x578)^x579)^x580);

	if (t11 != 536868865) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x601 = 13;
	uint8_t x602 = 2U;
	volatile uint32_t x603 = UINT32_MAX;
	int64_t t12 = -41333612135LL;

	t12 = (((x601>>x602)^x603)^x604);

	if (t12 != -4294967270LL) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x609 = 1816408398LLU;
	int64_t x610 = 12LL;
	volatile int64_t x612 = INT64_MAX;
	uint64_t t13 = 5396446861LLU;

	t13 = (((x609>>x610)^x611)^x612);

	if (t13 != 9223372036855219267LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x637 = 5U;
	uint16_t x638 = 1U;
	int64_t x639 = INT64_MAX;
	volatile int64_t t14 = -1811785049399506623LL;

	t14 = (((x637>>x638)^x639)^x640);

	if (t14 != -3LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x677 = INT8_MAX;
	volatile uint16_t x678 = 1U;
	volatile int8_t x679 = INT8_MIN;
	static int8_t x680 = -9;
	static volatile int32_t t15 = -174462156;

	t15 = (((x677>>x678)^x679)^x680);

	if (t15 != 72) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x740 = 879U;
	static volatile int32_t t16 = -67;

	t16 = (((x737>>x738)^x739)^x740);

	if (t16 != -938) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x774 = 2U;
	int32_t x775 = 18417;
	int32_t t17 = -594;

	t17 = (((x773>>x774)^x775)^x776);

	if (t17 != 47199) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x805 = 6769802;
	int16_t x806 = 26;
	volatile uint64_t x807 = 655871301642455143LLU;
	int32_t x808 = -13;

	t18 = (((x805>>x806)^x807)^x808);

	if (t18 != 17790872772067096468LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x853 = 53;
	int8_t x855 = INT8_MAX;
	volatile uint64_t x856 = 426LLU;
	volatile uint64_t t19 = 69LLU;

	t19 = (((x853>>x854)^x855)^x856);

	if (t19 != 469LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x885 = 47U;
	volatile uint8_t x886 = 1U;
	int16_t x887 = INT16_MIN;
	static int8_t x888 = INT8_MIN;
	static uint32_t t20 = 35U;

	t20 = (((x885>>x886)^x887)^x888);

	if (t20 != 32663U) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x918 = 1U;
	volatile uint32_t x920 = 414798132U;
	int64_t t21 = 2705308073392504LL;

	t21 = (((x917>>x918)^x919)^x920);

	if (t21 != -414798547LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x997 = 1U;
	uint32_t x998 = 29U;
	volatile int64_t x999 = INT64_MIN;
	int32_t x1000 = INT32_MAX;
	volatile int64_t t22 = -300576LL;

	t22 = (((x997>>x998)^x999)^x1000);

	if (t22 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint32_t x1081 = UINT32_MAX;
	volatile uint32_t x1082 = 0U;
	volatile int64_t x1083 = -73312434LL;
	static int8_t x1084 = -1;
	volatile int64_t t23 = 527046654767053LL;

	t23 = (((x1081>>x1082)^x1083)^x1084);

	if (t23 != 4221654862LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x1197 = 1432U;
	uint8_t x1198 = 1U;
	volatile int64_t x1199 = INT64_MAX;
	volatile int8_t x1200 = -38;
	int64_t t24 = 5797683453LL;

	t24 = (((x1197>>x1198)^x1199)^x1200);

	if (t24 != -9223372036854775063LL) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x1203 = INT32_MIN;
	volatile int8_t x1204 = -1;

	t25 = (((x1201>>x1202)^x1203)^x1204);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x1365 = 57U;
	volatile uint8_t x1366 = 1U;
	static int8_t x1367 = INT8_MIN;
	static int32_t x1368 = INT32_MAX;
	volatile int32_t t26 = 2;

	t26 = (((x1365>>x1366)^x1367)^x1368);

	if (t26 != -2147483549) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x1373 = UINT16_MAX;
	int8_t x1374 = 9;
	volatile uint8_t x1375 = 21U;
	volatile int64_t x1376 = INT64_MIN;
	int64_t t27 = -6455135528473LL;

	t27 = (((x1373>>x1374)^x1375)^x1376);

	if (t27 != -9223372036854775702LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x1377 = 16LL;
	uint8_t x1378 = 9U;
	volatile int8_t x1379 = INT8_MIN;
	static int64_t x1380 = 486345953256051LL;
	int64_t t28 = 118848890777LL;

	t28 = (((x1377>>x1378)^x1379)^x1380);

	if (t28 != -486345953255949LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x1390 = 9;
	uint32_t x1391 = 4U;
	static uint64_t t29 = 28LLU;

	t29 = (((x1389>>x1390)^x1391)^x1392);

	if (t29 != 596669663247410942LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x1401 = INT64_MAX;
	uint32_t x1402 = 7U;
	static uint32_t x1403 = 103105U;
	volatile int32_t x1404 = -1;
	volatile int64_t t30 = -46618LL;

	t30 = (((x1401>>x1402)^x1403)^x1404);

	if (t30 != -72057594037824831LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x1429 = 132021U;
	uint8_t x1430 = 6U;
	int16_t x1431 = INT16_MIN;
	uint16_t x1432 = 1U;

	t31 = (((x1429>>x1430)^x1431)^x1432);

	if (t31 != 4294936591U) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x1453 = 0U;
	uint8_t x1454 = 0U;
	int64_t x1455 = -1854LL;
	volatile uint64_t x1456 = 475LLU;
	uint64_t t32 = 14956215077485198LLU;

	t32 = (((x1453>>x1454)^x1455)^x1456);

	if (t32 != 18446744073709549849LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x1569 = 9;
	int32_t x1570 = 6;
	uint64_t x1571 = 2LLU;
	volatile uint8_t x1572 = UINT8_MAX;
	static uint64_t t33 = 18533149450LLU;

	t33 = (((x1569>>x1570)^x1571)^x1572);

	if (t33 != 253LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1609 = 1005;
	int8_t x1610 = 5;
	volatile int32_t x1611 = -1;
	uint32_t x1612 = UINT32_MAX;
	volatile uint32_t t34 = 7916U;

	t34 = (((x1609>>x1610)^x1611)^x1612);

	if (t34 != 31U) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x1761 = 8207030335LL;
	int16_t x1762 = 2;
	int64_t x1763 = INT64_MIN;
	int16_t x1764 = 0;

	t35 = (((x1761>>x1762)^x1763)^x1764);

	if (t35 != -9223372034803018225LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x1765 = INT64_MAX;
	int32_t x1766 = 4;
	uint16_t x1767 = 3U;
	volatile int64_t x1768 = INT64_MAX;
	int64_t t36 = -2409964150LL;

	t36 = (((x1765>>x1766)^x1767)^x1768);

	if (t36 != 8646911284551352323LL) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1941 = 0;
	int64_t x1943 = -1LL;
	volatile int64_t t37 = -611551493125LL;

	t37 = (((x1941>>x1942)^x1943)^x1944);

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x1967 = 15U;
	uint16_t x1968 = UINT16_MAX;
	static int32_t t38 = -46464;

	t38 = (((x1965>>x1966)^x1967)^x1968);

	if (t38 != 65527) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x1970 = 15U;
	int8_t x1971 = INT8_MIN;
	uint8_t x1972 = 94U;
	static int32_t t39 = 1;

	t39 = (((x1969>>x1970)^x1971)^x1972);

	if (t39 != -34) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x2161 = INT8_MAX;
	int16_t x2162 = 1;
	static uint8_t x2163 = UINT8_MAX;
	int16_t x2164 = 21;
	int32_t t40 = -15828;

	t40 = (((x2161>>x2162)^x2163)^x2164);

	if (t40 != 213) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int64_t x2205 = 2115968863998LL;
	int16_t x2206 = 2;
	volatile int32_t x2207 = 6668835;
	volatile uint16_t x2208 = 12U;
	static int64_t t41 = -22559547292LL;

	t41 = (((x2205>>x2206)^x2207)^x2208);

	if (t41 != 528985710992LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x2229 = 22;
	uint8_t x2230 = 1U;
	int64_t x2232 = -485690LL;
	volatile int64_t t42 = -18888538LL;

	t42 = (((x2229>>x2230)^x2231)^x2232);

	if (t42 != 485684LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x2317 = UINT8_MAX;
	static int32_t x2319 = -228713;
	volatile int32_t t43 = -9;

	t43 = (((x2317>>x2318)^x2319)^x2320);

	if (t43 != 2147255016) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x2349 = UINT64_MAX;
	int64_t x2351 = INT64_MIN;
	uint32_t x2352 = 0U;
	uint64_t t44 = 112150670785068716LLU;

	t44 = (((x2349>>x2350)^x2351)^x2352);

	if (t44 != 11529215046068469759LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x2373 = 709U;
	volatile uint16_t x2374 = 6U;
	int8_t x2375 = -8;
	int64_t t45 = 182012369LL;

	t45 = (((x2373>>x2374)^x2375)^x2376);

	if (t45 != 9223372036854775795LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x2450 = 2U;
	int64_t x2451 = INT64_MIN;
	int64_t x2452 = INT64_MAX;
	volatile int64_t t46 = 1017444641858376115LL;

	t46 = (((x2449>>x2450)^x2451)^x2452);

	if (t46 != -10LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x2505 = 0;
	static uint16_t x2507 = 23U;
	static int16_t x2508 = INT16_MAX;
	volatile int32_t t47 = 143730606;

	t47 = (((x2505>>x2506)^x2507)^x2508);

	if (t47 != 32744) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint16_t x2517 = 29045U;
	static uint8_t x2518 = 7U;
	uint64_t x2520 = UINT64_MAX;
	volatile uint64_t t48 = 3013766671008394497LLU;

	t48 = (((x2517>>x2518)^x2519)^x2520);

	if (t48 != 224LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2585 = UINT8_MAX;
	volatile uint8_t x2586 = 1U;

	t49 = (((x2585>>x2586)^x2587)^x2588);

	if (t49 != -9223372036854743168LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x2625 = 0U;
	volatile int32_t x2627 = -1;
	int16_t x2628 = 56;
	static int32_t t50 = 948683;

	t50 = (((x2625>>x2626)^x2627)^x2628);

	if (t50 != -57) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2658 = 11U;
	int64_t x2659 = -1LL;
	static int64_t t51 = 3LL;

	t51 = (((x2657>>x2658)^x2659)^x2660);

	if (t51 != 32752LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x2697 = UINT8_MAX;
	uint16_t x2698 = 2U;
	static int64_t x2699 = INT64_MIN;
	int8_t x2700 = -1;

	t52 = (((x2697>>x2698)^x2699)^x2700);

	if (t52 != 9223372036854775744LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x2749 = 2U;
	static int32_t x2750 = 6;
	int32_t x2751 = -1;
	volatile uint8_t x2752 = 1U;
	static int32_t t53 = -16424;

	t53 = (((x2749>>x2750)^x2751)^x2752);

	if (t53 != -2) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x2765 = INT32_MAX;
	uint64_t x2766 = 11LLU;
	uint32_t x2767 = UINT32_MAX;
	static volatile int16_t x2768 = -14;
	uint32_t t54 = 19U;

	t54 = (((x2765>>x2766)^x2767)^x2768);

	if (t54 != 1048562U) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x2921 = INT8_MAX;
	uint8_t x2922 = 7U;
	int64_t x2923 = INT64_MIN;
	int64_t t55 = 104425LL;

	t55 = (((x2921>>x2922)^x2923)^x2924);

	if (t55 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x3009 = INT32_MAX;
	static volatile uint8_t x3010 = 0U;
	uint8_t x3011 = UINT8_MAX;
	uint16_t x3012 = 32234U;
	int32_t t56 = 27005;

	t56 = (((x3009>>x3010)^x3011)^x3012);

	if (t56 != 2147451626) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x3029 = 15041133U;
	static uint32_t x3030 = 30U;
	volatile int64_t x3031 = 46LL;
	static volatile int64_t t57 = 247630498733411LL;

	t57 = (((x3029>>x3030)^x3031)^x3032);

	if (t57 != -9223372036854775762LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x3061 = INT16_MAX;
	uint16_t x3062 = 24U;
	static int8_t x3063 = INT8_MIN;
	static int64_t x3064 = INT64_MAX;
	int64_t t58 = 372893853169861LL;

	t58 = (((x3061>>x3062)^x3063)^x3064);

	if (t58 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x3074 = 1;
	static int8_t x3075 = INT8_MAX;
	uint8_t x3076 = 0U;
	static volatile uint64_t t59 = 71123645LLU;

	t59 = (((x3073>>x3074)^x3075)^x3076);

	if (t59 != 298LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x3089 = 18U;
	volatile int8_t x3090 = 1;
	uint32_t x3091 = UINT32_MAX;
	uint16_t x3092 = UINT16_MAX;
	volatile uint32_t t60 = 70602U;

	t60 = (((x3089>>x3090)^x3091)^x3092);

	if (t60 != 4294901769U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile uint32_t x3101 = 20650U;
	int8_t x3102 = 0;
	int32_t x3103 = -1;
	uint64_t x3104 = UINT64_MAX;

	t61 = (((x3101>>x3102)^x3103)^x3104);

	if (t61 != 18446744069414604970LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x3146 = 1U;
	uint8_t x3148 = UINT8_MAX;

	t62 = (((x3145>>x3146)^x3147)^x3148);

	if (t62 != 64559) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x3185 = UINT64_MAX;
	int16_t x3186 = 9;
	volatile int8_t x3187 = INT8_MIN;
	int64_t x3188 = -6712870LL;
	volatile uint64_t t63 = 15727067749LLU;

	t63 = (((x3185>>x3186)^x3187)^x3188);

	if (t63 != 36028797012251045LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x3213 = 58U;
	int64_t x3215 = -19225296LL;
	uint32_t x3216 = 222U;

	t64 = (((x3213>>x3214)^x3215)^x3216);

	if (t64 != -19225101LL) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x3317 = UINT16_MAX;
	static volatile int8_t x3318 = 4;

	t65 = (((x3317>>x3318)^x3319)^x3320);

	if (t65 != 4095) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint64_t x3321 = 118LLU;
	static uint8_t x3322 = 15U;
	int16_t x3323 = -1;
	int16_t x3324 = -9332;
	volatile uint64_t t66 = 2761856075LLU;

	t66 = (((x3321>>x3322)^x3323)^x3324);

	if (t66 != 9331LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x3345 = 2;
	uint8_t x3346 = 19U;
	uint64_t x3347 = UINT64_MAX;
	volatile int64_t x3348 = INT64_MIN;
	uint64_t t67 = 7369690428811LLU;

	t67 = (((x3345>>x3346)^x3347)^x3348);

	if (t67 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x3381 = INT64_MAX;
	int32_t x3382 = 15;
	static int64_t x3383 = -25667080997331454LL;
	static uint16_t x3384 = UINT16_MAX;

	t68 = (((x3381>>x3382)^x3383)^x3384);

	if (t68 != -25842839740703230LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3429 = 0U;
	int64_t x3431 = INT64_MIN;
	int16_t x3432 = -1;

	t69 = (((x3429>>x3430)^x3431)^x3432);

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x3473 = 13822LLU;
	static int16_t x3474 = 1;
	static int32_t x3475 = INT32_MIN;
	int8_t x3476 = -24;
	volatile uint64_t t70 = 46993260LLU;

	t70 = (((x3473>>x3474)^x3475)^x3476);

	if (t70 != 2147476759LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x3521 = INT64_MAX;
	uint8_t x3522 = 2U;
	static volatile int32_t x3523 = 2932338;
	int64_t t71 = -112277086857264LL;

	t71 = (((x3521>>x3522)^x3523)^x3524);

	if (t71 != -2305843009210761614LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x3585 = 2U;
	uint8_t x3587 = UINT8_MAX;

	t72 = (((x3585>>x3586)^x3587)^x3588);

	if (t72 != 247) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x3597 = INT8_MAX;
	uint8_t x3598 = 1U;
	int32_t x3599 = INT32_MAX;
	int32_t x3600 = 567867404;
	volatile int32_t t73 = -60172;

	t73 = (((x3597>>x3598)^x3599)^x3600);

	if (t73 != 1579616204) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x3649 = 80U;
	uint8_t x3650 = 2U;
	uint8_t x3651 = 3U;
	int64_t x3652 = INT64_MIN;
	volatile int64_t t74 = 34673LL;

	t74 = (((x3649>>x3650)^x3651)^x3652);

	if (t74 != -9223372036854775785LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3661 = INT32_MAX;
	volatile int64_t x3662 = 0LL;
	uint8_t x3663 = UINT8_MAX;
	int16_t x3664 = INT16_MAX;
	static int32_t t75 = -3;

	t75 = (((x3661>>x3662)^x3663)^x3664);

	if (t75 != 2147451135) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x3789 = INT16_MAX;
	int8_t x3790 = 1;
	static volatile uint32_t x3791 = 0U;
	static volatile int32_t x3792 = -1;
	volatile uint32_t t76 = 15377U;

	t76 = (((x3789>>x3790)^x3791)^x3792);

	if (t76 != 4294950912U) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x3810 = 12U;
	volatile int16_t x3812 = 197;
	int32_t t77 = -81;

	t77 = (((x3809>>x3810)^x3811)^x3812);

	if (t77 != 32573) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x3813 = 6898670060158LL;
	uint8_t x3814 = 62U;
	uint32_t x3815 = 375869088U;
	uint8_t x3816 = UINT8_MAX;
	int64_t t78 = -1212LL;

	t78 = (((x3813>>x3814)^x3815)^x3816);

	if (t78 != 375869023LL) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x3857 = UINT8_MAX;
	static uint16_t x3858 = 1U;
	int8_t x3860 = INT8_MAX;
	int32_t t79 = 16190;

	t79 = (((x3857>>x3858)^x3859)^x3860);

	if (t79 != 13) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x3889 = 28784U;
	uint8_t x3890 = 7U;
	volatile int64_t x3891 = INT64_MAX;
	uint8_t x3892 = 0U;

	t80 = (((x3889>>x3890)^x3891)^x3892);

	if (t80 != 9223372036854775583LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x4009 = UINT64_MAX;
	static volatile uint8_t x4010 = 30U;
	int16_t x4011 = -13143;
	uint64_t t81 = 3364971073582020LLU;

	t81 = (((x4009>>x4010)^x4011)^x4012);

	if (t81 != 18446744056529695575LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x4057 = 743509U;
	uint16_t x4058 = 18U;
	static int64_t x4059 = 883315173967LL;
	int32_t x4060 = -16708152;

	t82 = (((x4057>>x4058)^x4059)^x4060);

	if (t82 != -883308959867LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x4069 = 347961U;
	volatile int8_t x4071 = -2;
	volatile uint32_t t83 = 13U;

	t83 = (((x4069>>x4070)^x4071)^x4072);

	if (t83 != 86991U) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x4077 = 15470481;
	static volatile int8_t x4078 = 0;
	uint8_t x4079 = 46U;
	int32_t x4080 = 1;

	t84 = (((x4077>>x4078)^x4079)^x4080);

	if (t84 != 15470526) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4085 = 81;
	uint32_t x4086 = 3U;
	static volatile int32_t x4087 = INT32_MIN;
	int32_t t85 = -2;

	t85 = (((x4085>>x4086)^x4087)^x4088);

	if (t85 != 10) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x4110 = 19LL;
	int64_t x4112 = INT64_MIN;
	static volatile int64_t t86 = -3030989310931975LL;

	t86 = (((x4109>>x4110)^x4111)^x4112);

	if (t86 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x4197 = 1U;
	static uint32_t x4198 = 1U;
	int32_t x4199 = -1;
	int8_t x4200 = -1;
	volatile int32_t t87 = -47789;

	t87 = (((x4197>>x4198)^x4199)^x4200);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x4258 = 0;
	static uint32_t x4259 = 7999447U;
	static uint64_t x4260 = UINT64_MAX;

	t88 = (((x4257>>x4258)^x4259)^x4260);

	if (t88 != 18446744073701552169LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint16_t x4370 = 2U;
	int64_t x4371 = INT64_MIN;
	int32_t x4372 = -11;
	int64_t t89 = -89374LL;

	t89 = (((x4369>>x4370)^x4371)^x4372);

	if (t89 != 9223372036854775794LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int8_t x4373 = 1;
	static int8_t x4374 = 0;
	uint32_t x4375 = UINT32_MAX;
	int32_t x4376 = -1;
	uint32_t t90 = 52U;

	t90 = (((x4373>>x4374)^x4375)^x4376);

	if (t90 != 1U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4397 = INT16_MAX;
	static uint8_t x4398 = 0U;
	volatile uint32_t x4399 = UINT32_MAX;
	static volatile int16_t x4400 = INT16_MAX;
	uint32_t t91 = UINT32_MAX;

	t91 = (((x4397>>x4398)^x4399)^x4400);

	if (t91 != UINT32_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4417 = 1U;
	uint8_t x4418 = 14U;
	volatile uint64_t x4419 = UINT64_MAX;
	int64_t x4420 = -1LL;
	uint64_t t92 = 1121089921LLU;

	t92 = (((x4417>>x4418)^x4419)^x4420);

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x4453 = 22;
	uint32_t x4454 = 0U;
	static uint16_t x4456 = 23U;
	uint64_t t93 = 78463482920LLU;

	t93 = (((x4453>>x4454)^x4455)^x4456);

	if (t93 != 2042579LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x4537 = INT64_MAX;
	static int16_t x4538 = 0;
	static int8_t x4539 = INT8_MIN;
	int8_t x4540 = -14;

	t94 = (((x4537>>x4538)^x4539)^x4540);

	if (t94 != 9223372036854775693LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x4629 = INT64_MAX;
	static int64_t x4632 = INT64_MAX;
	volatile int64_t t95 = 158LL;

	t95 = (((x4629>>x4630)^x4631)^x4632);

	if (t95 != -8070450534395412480LL) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4665 = INT8_MAX;
	uint16_t x4666 = 3U;
	int64_t t96 = -12825511LL;

	t96 = (((x4665>>x4666)^x4667)^x4668);

	if (t96 != -27085LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x4669 = 1;
	static int32_t x4671 = -1;
	int64_t x4672 = INT64_MAX;
	int64_t t97 = INT64_MIN;

	t97 = (((x4669>>x4670)^x4671)^x4672);

	if (t97 != INT64_MIN) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x4698 = 52U;
	uint64_t x4699 = 6058884LLU;
	uint64_t t98 = 20528917633401LLU;

	t98 = (((x4697>>x4698)^x4699)^x4700);

	if (t98 != 18446744073703492731LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x4713 = INT32_MAX;
	uint32_t x4714 = 3U;
	uint32_t x4715 = 6258U;
	static uint64_t x4716 = 1129768028656LLU;
	uint64_t t99 = 67624775883474LLU;

	t99 = (((x4713>>x4714)^x4715)^x4716);

	if (t99 != 1129653202557LLU) { NG(); } else { ; }
	
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

