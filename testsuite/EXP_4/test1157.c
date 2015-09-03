#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x9 = INT64_MIN;
uint32_t x11 = UINT32_MAX;
uint8_t x12 = 3U;
int8_t x100 = 0;
int16_t x121 = -8;
uint16_t x123 = 1671U;
int64_t t3 = 53957338481LL;
int64_t x141 = INT64_MIN;
int8_t x144 = 2;
uint16_t x173 = 2446U;
int32_t t6 = 59332;
uint64_t x187 = 3069224810LLU;
int32_t t9 = -242690942;
uint8_t x228 = 1U;
static uint32_t x309 = 350588U;
int64_t x310 = INT64_MIN;
int64_t t12 = -15978790LL;
int32_t x328 = 20;
static uint16_t x379 = 29038U;
int64_t t15 = 4LL;
volatile int64_t x449 = INT64_MAX;
static volatile int64_t x450 = -453366913722292410LL;
static int64_t t17 = 660784301340LL;
static int16_t x546 = INT16_MIN;
volatile int8_t x561 = INT8_MIN;
uint8_t x572 = 1U;
int8_t x742 = -7;
int16_t x785 = INT16_MIN;
uint8_t x1328 = 25U;
uint16_t x1404 = 1U;
volatile uint32_t t35 = 92U;
volatile int8_t x1536 = 0;
static uint8_t x1646 = 25U;
uint16_t x1653 = 2048U;
int64_t t38 = 30930844LL;
static int8_t x1896 = 3;
uint8_t x1955 = UINT8_MAX;
uint8_t x1956 = 0U;
uint8_t x2028 = 1U;
volatile int64_t t45 = 14449LL;
uint8_t x2178 = 21U;
uint32_t t48 = 18531U;
uint32_t x2268 = 12U;
volatile int32_t t49 = 95;
volatile uint32_t t51 = 0U;
uint16_t x2398 = 116U;
int16_t x2458 = INT16_MIN;
int16_t x2508 = 5;
int16_t x2613 = -6;
int8_t x2614 = INT8_MIN;
static uint8_t x2615 = 5U;
int8_t x2654 = 0;
volatile int32_t t57 = -16;
int32_t t58 = 3;
volatile int64_t t59 = -61128586375410LL;
uint16_t x2907 = 112U;
uint8_t x3132 = 0U;
int64_t x3199 = INT64_MAX;
int64_t t64 = 32714487755905429LL;
uint32_t x3341 = UINT32_MAX;
int8_t x3342 = -1;
volatile uint32_t t66 = 56924U;
int16_t x3474 = INT16_MIN;
int64_t t67 = 242LL;
volatile uint8_t x3501 = UINT8_MAX;
int32_t x3502 = -1;
int8_t x3504 = 16;
int32_t x3597 = INT32_MAX;
static uint8_t x3646 = 39U;
uint16_t x3648 = 27U;
uint8_t x3772 = 16U;
int64_t x3774 = INT64_MAX;
uint8_t x3852 = 20U;
volatile uint8_t x3883 = 2U;
int8_t x4180 = 1;
int8_t x4302 = INT8_MIN;
int8_t x4333 = INT8_MIN;
int64_t x4401 = INT64_MIN;
uint32_t x4402 = UINT32_MAX;
volatile int16_t x4474 = INT16_MIN;
int16_t x4482 = INT16_MIN;
uint16_t x4484 = 0U;
uint64_t t91 = 1676090934068LLU;
uint64_t t93 = 12634383588845026LLU;
static uint32_t x4763 = 399U;
int16_t x4764 = 0;
uint8_t x4806 = 1U;
volatile int64_t t96 = 684LL;
int16_t x4814 = INT16_MAX;
uint32_t x4914 = UINT32_MAX;
int64_t x4915 = 16096572599LL;
volatile uint16_t x4916 = 35U;
uint64_t x4927 = 7303574LLU;
uint64_t x4928 = 9LLU;


void f0(void) {
	int16_t x10 = 0;
	int64_t t0 = INT64_MIN;

	t0 = (x9^(x10&(x11>>x12)));

	if (t0 != INT64_MIN) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x97 = UINT8_MAX;
	int64_t x98 = -33LL;
	volatile int8_t x99 = 0;
	static int64_t t1 = -115342075682LL;

	t1 = (x97^(x98&(x99>>x100)));

	if (t1 != 255LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x122 = 1442;
	int16_t x124 = 11;
	volatile int32_t t2 = 5318714;

	t2 = (x121^(x122&(x123>>x124)));

	if (t2 != -8) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x137 = INT32_MAX;
	volatile int8_t x138 = INT8_MIN;
	static int64_t x139 = 1273LL;
	int16_t x140 = 2;

	t3 = (x137^(x138&(x139>>x140)));

	if (t3 != 2147483391LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x142 = INT64_MAX;
	uint64_t x143 = UINT64_MAX;
	volatile uint64_t t4 = 105008536146LLU;

	t4 = (x141^(x142&(x143>>x144)));

	if (t4 != 13835058055282163711LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x145 = INT32_MIN;
	uint64_t x146 = 28LLU;
	volatile int16_t x147 = 208;
	uint16_t x148 = 20U;
	uint64_t t5 = 220123925LLU;

	t5 = (x145^(x146&(x147>>x148)));

	if (t5 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x174 = -938244579;
	uint8_t x175 = 58U;
	static int8_t x176 = 0;

	t6 = (x173^(x174&(x175>>x176)));

	if (t6 != 2454) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x185 = -1LL;
	uint8_t x186 = 1U;
	uint8_t x188 = 1U;
	uint64_t t7 = 835632334LLU;

	t7 = (x185^(x186&(x187>>x188)));

	if (t7 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x189 = -516395496;
	int16_t x190 = INT16_MIN;
	uint64_t x191 = 17591085548222417LLU;
	int8_t x192 = 0;
	static volatile uint64_t t8 = 22097LLU;

	t8 = (x189^(x190&(x191>>x192)));

	if (t8 != 18429152987787619864LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x201 = -1;
	int16_t x202 = INT16_MAX;
	static uint8_t x203 = 8U;
	static int16_t x204 = 30;

	t9 = (x201^(x202&(x203>>x204)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x221 = 119U;
	static uint32_t x222 = 293768U;
	volatile uint8_t x223 = 1U;
	uint8_t x224 = 0U;
	volatile uint32_t t10 = 105U;

	t10 = (x221^(x222&(x223>>x224)));

	if (t10 != 119U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x225 = INT32_MIN;
	int16_t x226 = INT16_MAX;
	int8_t x227 = INT8_MAX;
	volatile int32_t t11 = 3792;

	t11 = (x225^(x226&(x227>>x228)));

	if (t11 != -2147483585) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x311 = INT16_MAX;
	static uint64_t x312 = 11LLU;

	t12 = (x309^(x310&(x311>>x312)));

	if (t12 != 350588LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x325 = -1LL;
	static int64_t x326 = -70089807LL;
	uint8_t x327 = 3U;
	static volatile int64_t t13 = 513552LL;

	t13 = (x325^(x326&(x327>>x328)));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x357 = INT64_MIN;
	volatile uint8_t x358 = 3U;
	uint16_t x359 = 8781U;
	static int8_t x360 = 3;
	volatile int64_t t14 = 32485910893616666LL;

	t14 = (x357^(x358&(x359>>x360)));

	if (t14 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x377 = INT16_MIN;
	int64_t x378 = 15670751325LL;
	int64_t x380 = 24LL;

	t15 = (x377^(x378&(x379>>x380)));

	if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x381 = INT16_MAX;
	int16_t x382 = INT16_MIN;
	uint8_t x383 = 40U;
	static int8_t x384 = 6;
	volatile int32_t t16 = 120;

	t16 = (x381^(x382&(x383>>x384)));

	if (t16 != 32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x451 = 316U;
	uint8_t x452 = 7U;

	t17 = (x449^(x450&(x451>>x452)));

	if (t17 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x465 = INT64_MIN;
	static int32_t x466 = -21;
	int16_t x467 = INT16_MAX;
	volatile int8_t x468 = 0;
	volatile int64_t t18 = 94403896837142LL;

	t18 = (x465^(x466&(x467>>x468)));

	if (t18 != -9223372036854743061LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x545 = -1;
	uint8_t x547 = UINT8_MAX;
	uint16_t x548 = 22U;
	volatile int32_t t19 = 0;

	t19 = (x545^(x546&(x547>>x548)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint32_t x562 = UINT32_MAX;
	int64_t x563 = INT64_MAX;
	int16_t x564 = 0;
	int64_t t20 = 1959364878LL;

	t20 = (x561^(x562&(x563>>x564)));

	if (t20 != -4294967169LL) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x569 = INT16_MIN;
	static int64_t x570 = INT64_MIN;
	int16_t x571 = INT16_MAX;
	static int64_t t21 = -2LL;

	t21 = (x569^(x570&(x571>>x572)));

	if (t21 != -32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x573 = INT16_MAX;
	volatile int16_t x574 = -1;
	uint16_t x575 = 245U;
	static volatile uint8_t x576 = 15U;
	int32_t t22 = -288754;

	t22 = (x573^(x574&(x575>>x576)));

	if (t22 != 32767) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x589 = -1LL;
	int8_t x590 = INT8_MIN;
	uint16_t x591 = UINT16_MAX;
	volatile uint16_t x592 = 6U;
	int64_t t23 = 1316LL;

	t23 = (x589^(x590&(x591>>x592)));

	if (t23 != -897LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x617 = 56758463925LLU;
	int16_t x618 = -1;
	int8_t x619 = INT8_MAX;
	int8_t x620 = 21;
	static volatile uint64_t t24 = 4288971898538539LLU;

	t24 = (x617^(x618&(x619>>x620)));

	if (t24 != 56758463925LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x741 = -3317;
	volatile uint32_t x743 = 105174U;
	volatile uint8_t x744 = 28U;
	volatile uint32_t t25 = 340230U;

	t25 = (x741^(x742&(x743>>x744)));

	if (t25 != 4294963979U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x769 = INT32_MIN;
	int16_t x770 = 78;
	int64_t x771 = 809LL;
	uint8_t x772 = 7U;
	int64_t t26 = -7891610800LL;

	t26 = (x769^(x770&(x771>>x772)));

	if (t26 != -2147483642LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x786 = 11880;
	uint32_t x787 = 1641685U;
	static uint32_t x788 = 1U;
	uint32_t t27 = 3729U;

	t27 = (x785^(x786&(x787>>x788)));

	if (t27 != 4294936168U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x797 = INT8_MIN;
	volatile int64_t x798 = -746155712402561660LL;
	uint32_t x799 = UINT32_MAX;
	static uint8_t x800 = 13U;
	volatile int64_t t28 = -1095062008203609LL;

	t28 = (x797^(x798&(x799>>x800)));

	if (t28 != -386556LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile uint64_t x801 = 13610289472032123LLU;
	int8_t x802 = -1;
	static uint16_t x803 = 1171U;
	uint16_t x804 = 13U;
	volatile uint64_t t29 = 1661254LLU;

	t29 = (x801^(x802&(x803>>x804)));

	if (t29 != 13610289472032123LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x865 = UINT32_MAX;
	static int8_t x866 = -62;
	volatile int8_t x867 = 0;
	volatile uint8_t x868 = 0U;
	uint32_t t30 = UINT32_MAX;

	t30 = (x865^(x866&(x867>>x868)));

	if (t30 != UINT32_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x1117 = 3U;
	static uint16_t x1118 = 23191U;
	uint32_t x1119 = 166705U;
	volatile uint8_t x1120 = 6U;
	volatile uint32_t t31 = 1288832352U;

	t31 = (x1117^(x1118&(x1119>>x1120)));

	if (t31 != 2567U) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x1209 = UINT64_MAX;
	static uint8_t x1210 = UINT8_MAX;
	int16_t x1211 = 171;
	uint32_t x1212 = 0U;
	volatile uint64_t t32 = 533165726LLU;

	t32 = (x1209^(x1210&(x1211>>x1212)));

	if (t32 != 18446744073709551444LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x1325 = INT32_MIN;
	int32_t x1326 = INT32_MAX;
	volatile uint32_t x1327 = 10666U;
	uint32_t t33 = 2U;

	t33 = (x1325^(x1326&(x1327>>x1328)));

	if (t33 != 2147483648U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x1377 = INT16_MIN;
	volatile int16_t x1378 = 1941;
	int32_t x1379 = 180130209;
	int8_t x1380 = 8;
	int32_t t34 = -19;

	t34 = (x1377^(x1378&(x1379>>x1380)));

	if (t34 != -31599) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x1401 = INT16_MIN;
	uint16_t x1402 = UINT16_MAX;
	static uint32_t x1403 = UINT32_MAX;

	t35 = (x1401^(x1402&(x1403>>x1404)));

	if (t35 != 4294934527U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x1533 = INT64_MIN;
	int32_t x1534 = INT32_MIN;
	volatile uint64_t x1535 = 98LLU;
	static volatile uint64_t t36 = 74324564LLU;

	t36 = (x1533^(x1534&(x1535>>x1536)));

	if (t36 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x1645 = UINT16_MAX;
	uint32_t x1647 = 109771276U;
	uint8_t x1648 = 0U;
	uint32_t t37 = 12964U;

	t37 = (x1645^(x1646&(x1647>>x1648)));

	if (t37 != 65527U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x1654 = -82006334025226LL;
	volatile int32_t x1655 = 0;
	volatile uint16_t x1656 = 2U;

	t38 = (x1653^(x1654&(x1655>>x1656)));

	if (t38 != 2048LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x1741 = 6731U;
	int32_t x1742 = -1;
	uint64_t x1743 = UINT64_MAX;
	static uint8_t x1744 = 4U;
	uint64_t t39 = 1LLU;

	t39 = (x1741^(x1742&(x1743>>x1744)));

	if (t39 != 1152921504606840244LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x1849 = UINT16_MAX;
	uint8_t x1850 = 1U;
	int8_t x1851 = 3;
	uint8_t x1852 = 2U;
	volatile int32_t t40 = -2145195;

	t40 = (x1849^(x1850&(x1851>>x1852)));

	if (t40 != 65535) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x1893 = 4737116268139654719LLU;
	static uint64_t x1894 = 0LLU;
	uint8_t x1895 = UINT8_MAX;
	volatile uint64_t t41 = 247LLU;

	t41 = (x1893^(x1894&(x1895>>x1896)));

	if (t41 != 4737116268139654719LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x1953 = -1;
	uint32_t x1954 = 272674425U;
	static uint32_t t42 = 78912141U;

	t42 = (x1953^(x1954&(x1955>>x1956)));

	if (t42 != 4294967174U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x2025 = UINT32_MAX;
	uint64_t x2026 = UINT64_MAX;
	volatile uint32_t x2027 = UINT32_MAX;
	volatile uint64_t t43 = 124LLU;

	t43 = (x2025^(x2026&(x2027>>x2028)));

	if (t43 != 2147483648LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x2045 = INT64_MIN;
	int64_t x2046 = INT64_MIN;
	uint8_t x2047 = 0U;
	uint8_t x2048 = 23U;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x2045^(x2046&(x2047>>x2048)));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x2113 = INT8_MAX;
	volatile int64_t x2114 = 4934LL;
	volatile int64_t x2115 = 5444758990167LL;
	uint8_t x2116 = 22U;

	t45 = (x2113^(x2114&(x2115>>x2116)));

	if (t45 != 573LL) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x2169 = INT64_MIN;
	static uint8_t x2170 = 2U;
	int16_t x2171 = 21;
	uint8_t x2172 = 1U;
	int64_t t46 = 408821289LL;

	t46 = (x2169^(x2170&(x2171>>x2172)));

	if (t46 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x2177 = 752963191354952LLU;
	uint64_t x2179 = 1245134555LLU;
	int32_t x2180 = 50;
	volatile uint64_t t47 = 14212594904LLU;

	t47 = (x2177^(x2178&(x2179>>x2180)));

	if (t47 != 752963191354952LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x2193 = INT16_MAX;
	int16_t x2194 = INT16_MIN;
	static uint32_t x2195 = 5258197U;
	static int32_t x2196 = 20;

	t48 = (x2193^(x2194&(x2195>>x2196)));

	if (t48 != 32767U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x2265 = INT16_MIN;
	uint16_t x2266 = UINT16_MAX;
	int16_t x2267 = 0;

	t49 = (x2265^(x2266&(x2267>>x2268)));

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x2317 = 170U;
	int64_t x2318 = INT64_MAX;
	int8_t x2319 = INT8_MAX;
	static int32_t x2320 = 3;
	volatile int64_t t50 = -7629759806443997LL;

	t50 = (x2317^(x2318&(x2319>>x2320)));

	if (t50 != 165LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x2353 = UINT32_MAX;
	static volatile int8_t x2354 = -6;
	int16_t x2355 = 6972;
	uint8_t x2356 = 2U;

	t51 = (x2353^(x2354&(x2355>>x2356)));

	if (t51 != 4294965557U) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int32_t x2373 = INT32_MIN;
	uint64_t x2374 = 1030846LLU;
	uint16_t x2375 = 32U;
	int8_t x2376 = 0;
	volatile uint64_t t52 = 6LLU;

	t52 = (x2373^(x2374&(x2375>>x2376)));

	if (t52 != 18446744071562068000LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x2397 = -1LL;
	uint8_t x2399 = 4U;
	volatile uint16_t x2400 = 5U;
	int64_t t53 = 134103633134508191LL;

	t53 = (x2397^(x2398&(x2399>>x2400)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x2457 = UINT32_MAX;
	volatile uint32_t x2459 = 46U;
	volatile int8_t x2460 = 7;
	uint32_t t54 = UINT32_MAX;

	t54 = (x2457^(x2458&(x2459>>x2460)));

	if (t54 != UINT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x2505 = -1;
	uint8_t x2506 = 19U;
	volatile uint16_t x2507 = 0U;
	int32_t t55 = 1529;

	t55 = (x2505^(x2506&(x2507>>x2508)));

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x2616 = 18U;
	static volatile int32_t t56 = 23;

	t56 = (x2613^(x2614&(x2615>>x2616)));

	if (t56 != -6) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x2653 = -1;
	uint16_t x2655 = 262U;
	uint8_t x2656 = 0U;

	t57 = (x2653^(x2654&(x2655>>x2656)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2753 = INT8_MIN;
	volatile uint16_t x2754 = 7U;
	uint16_t x2755 = 84U;
	uint16_t x2756 = 1U;

	t58 = (x2753^(x2754&(x2755>>x2756)));

	if (t58 != -126) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x2849 = 1LL;
	int16_t x2850 = INT16_MIN;
	uint8_t x2851 = 9U;
	uint8_t x2852 = 10U;

	t59 = (x2849^(x2850&(x2851>>x2852)));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x2905 = -1;
	static int8_t x2906 = -47;
	int16_t x2908 = 1;
	int32_t t60 = -1;

	t60 = (x2905^(x2906&(x2907>>x2908)));

	if (t60 != -17) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x3129 = -1;
	int16_t x3130 = INT16_MAX;
	uint32_t x3131 = 219983496U;
	static volatile uint32_t t61 = 1634U;

	t61 = (x3129^(x3130&(x3131>>x3132)));

	if (t61 != 4294955383U) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x3169 = 11737U;
	static volatile int8_t x3170 = -63;
	int64_t x3171 = 77464LL;
	volatile int8_t x3172 = 13;
	volatile int64_t t62 = 4LL;

	t62 = (x3169^(x3170&(x3171>>x3172)));

	if (t62 != 11736LL) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile uint8_t x3173 = 114U;
	volatile uint32_t x3174 = UINT32_MAX;
	uint32_t x3175 = UINT32_MAX;
	static uint16_t x3176 = 31U;
	uint32_t t63 = 23390U;

	t63 = (x3173^(x3174&(x3175>>x3176)));

	if (t63 != 115U) { NG(); } else { ; }
	
}

void f64(void) {
	static uint32_t x3197 = 22U;
	int32_t x3198 = INT32_MIN;
	uint8_t x3200 = 7U;

	t64 = (x3197^(x3198&(x3199>>x3200)));

	if (t64 != 72057591890444310LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x3257 = INT32_MAX;
	int8_t x3258 = -1;
	volatile uint64_t x3259 = 43620693LLU;
	uint8_t x3260 = 7U;
	volatile uint64_t t65 = 1462844067LLU;

	t65 = (x3257^(x3258&(x3259>>x3260)));

	if (t65 != 2147142861LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x3343 = 314U;
	volatile uint8_t x3344 = 1U;

	t66 = (x3341^(x3342&(x3343>>x3344)));

	if (t66 != 4294967138U) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x3473 = -1LL;
	static uint16_t x3475 = UINT16_MAX;
	uint8_t x3476 = 3U;

	t67 = (x3473^(x3474&(x3475>>x3476)));

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int32_t x3489 = INT32_MAX;
	static int16_t x3490 = 2;
	uint8_t x3491 = 3U;
	uint8_t x3492 = 0U;
	volatile int32_t t68 = -125103;

	t68 = (x3489^(x3490&(x3491>>x3492)));

	if (t68 != 2147483645) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x3503 = UINT8_MAX;
	volatile int32_t t69 = 169164937;

	t69 = (x3501^(x3502&(x3503>>x3504)));

	if (t69 != 255) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x3598 = INT16_MIN;
	int64_t x3599 = 46695007LL;
	volatile int8_t x3600 = 1;
	static int64_t t70 = -34603636282219LL;

	t70 = (x3597^(x3598&(x3599>>x3600)));

	if (t70 != 2124152831LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x3645 = -3898;
	static int32_t x3647 = INT32_MAX;
	int32_t t71 = -32691111;

	t71 = (x3645^(x3646&(x3647>>x3648)));

	if (t71 != -3903) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x3665 = 39U;
	static int16_t x3666 = -1;
	int16_t x3667 = INT16_MAX;
	static uint32_t x3668 = 2U;
	int32_t t72 = 54730360;

	t72 = (x3665^(x3666&(x3667>>x3668)));

	if (t72 != 8152) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x3717 = INT8_MAX;
	int32_t x3718 = 4;
	volatile int16_t x3719 = 5407;
	static volatile uint16_t x3720 = 1U;
	static int32_t t73 = 82503278;

	t73 = (x3717^(x3718&(x3719>>x3720)));

	if (t73 != 123) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x3769 = -127722;
	int8_t x3770 = INT8_MIN;
	static uint64_t x3771 = 7141161980225302LLU;
	uint64_t t74 = 208681616408LLU;

	t74 = (x3769^(x3770&(x3771>>x3772)));

	if (t74 != 18446743964744112662LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x3773 = 50U;
	int16_t x3775 = 0;
	int8_t x3776 = 10;
	int64_t t75 = 15455120497210193LL;

	t75 = (x3773^(x3774&(x3775>>x3776)));

	if (t75 != 50LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x3785 = 3842222003450919692LLU;
	uint16_t x3786 = 1851U;
	static uint16_t x3787 = 76U;
	uint16_t x3788 = 1U;
	static uint64_t t76 = 1LLU;

	t76 = (x3785^(x3786&(x3787>>x3788)));

	if (t76 != 3842222003450919726LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x3849 = 256454984U;
	volatile uint32_t x3850 = 14U;
	static volatile uint16_t x3851 = 4083U;
	uint32_t t77 = 0U;

	t77 = (x3849^(x3850&(x3851>>x3852)));

	if (t77 != 256454984U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x3881 = 8;
	int64_t x3882 = INT64_MIN;
	uint8_t x3884 = 8U;
	volatile int64_t t78 = -19LL;

	t78 = (x3881^(x3882&(x3883>>x3884)));

	if (t78 != 8LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x3961 = INT8_MIN;
	volatile int16_t x3962 = 174;
	volatile uint16_t x3963 = UINT16_MAX;
	uint32_t x3964 = 24U;
	volatile int32_t t79 = -275910368;

	t79 = (x3961^(x3962&(x3963>>x3964)));

	if (t79 != -128) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x3965 = -31;
	uint16_t x3966 = 38U;
	volatile int8_t x3967 = INT8_MAX;
	volatile int8_t x3968 = 17;
	static int32_t t80 = 2555;

	t80 = (x3965^(x3966&(x3967>>x3968)));

	if (t80 != -31) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x4137 = 1U;
	uint8_t x4138 = UINT8_MAX;
	volatile uint64_t x4139 = 949574156291028LLU;
	static uint16_t x4140 = 0U;
	volatile uint64_t t81 = 337689LLU;

	t81 = (x4137^(x4138&(x4139>>x4140)));

	if (t81 != 213LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x4165 = -26;
	static int8_t x4166 = 2;
	static int8_t x4167 = INT8_MAX;
	static volatile uint32_t x4168 = 10U;
	int32_t t82 = 2079349;

	t82 = (x4165^(x4166&(x4167>>x4168)));

	if (t82 != -26) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x4177 = INT8_MAX;
	static int32_t x4178 = INT32_MIN;
	volatile uint16_t x4179 = 3U;
	volatile int32_t t83 = 934889;

	t83 = (x4177^(x4178&(x4179>>x4180)));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x4193 = -1LL;
	int32_t x4194 = -79912114;
	uint16_t x4195 = UINT16_MAX;
	uint64_t x4196 = 4LLU;
	volatile int64_t t84 = -1LL;

	t84 = (x4193^(x4194&(x4195>>x4196)));

	if (t84 != -847LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x4249 = INT32_MIN;
	uint16_t x4250 = 9U;
	volatile uint64_t x4251 = 7193701826687719536LLU;
	uint16_t x4252 = 0U;
	uint64_t t85 = 2094260979282977LLU;

	t85 = (x4249^(x4250&(x4251>>x4252)));

	if (t85 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x4301 = INT16_MIN;
	static int8_t x4303 = 29;
	static int8_t x4304 = 11;
	int32_t t86 = -17;

	t86 = (x4301^(x4302&(x4303>>x4304)));

	if (t86 != -32768) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x4334 = -1;
	uint32_t x4335 = 2U;
	int8_t x4336 = 1;
	volatile uint32_t t87 = 32680U;

	t87 = (x4333^(x4334&(x4335>>x4336)));

	if (t87 != 4294967169U) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x4403 = 1U;
	volatile int16_t x4404 = 0;
	int64_t t88 = 897115545415LL;

	t88 = (x4401^(x4402&(x4403>>x4404)));

	if (t88 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x4473 = INT8_MAX;
	volatile uint64_t x4475 = UINT64_MAX;
	uint8_t x4476 = 0U;
	volatile uint64_t t89 = 50LLU;

	t89 = (x4473^(x4474&(x4475>>x4476)));

	if (t89 != 18446744073709518975LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x4481 = 1;
	uint16_t x4483 = 1U;
	int32_t t90 = -3008;

	t90 = (x4481^(x4482&(x4483>>x4484)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x4661 = 125477866055157LLU;
	uint16_t x4662 = 1184U;
	int32_t x4663 = INT32_MAX;
	uint8_t x4664 = 2U;

	t91 = (x4661^(x4662&(x4663>>x4664)));

	if (t91 != 125477866053973LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x4689 = 14U;
	int64_t x4690 = INT64_MIN;
	uint64_t x4691 = 873979192LLU;
	uint8_t x4692 = 10U;
	volatile uint64_t t92 = 38063213LLU;

	t92 = (x4689^(x4690&(x4691>>x4692)));

	if (t92 != 14LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x4709 = 119U;
	uint16_t x4710 = 50U;
	uint64_t x4711 = UINT64_MAX;
	int64_t x4712 = 4LL;

	t93 = (x4709^(x4710&(x4711>>x4712)));

	if (t93 != 69LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x4761 = INT8_MAX;
	int32_t x4762 = INT32_MAX;
	static volatile uint32_t t94 = 11722539U;

	t94 = (x4761^(x4762&(x4763>>x4764)));

	if (t94 != 496U) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x4805 = UINT32_MAX;
	int32_t x4807 = INT32_MAX;
	uint64_t x4808 = 4LLU;
	static volatile uint32_t t95 = 473U;

	t95 = (x4805^(x4806&(x4807>>x4808)));

	if (t95 != 4294967294U) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x4809 = 0;
	int16_t x4810 = 0;
	volatile int64_t x4811 = INT64_MAX;
	int8_t x4812 = 25;

	t96 = (x4809^(x4810&(x4811>>x4812)));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x4813 = 11;
	static int8_t x4815 = 0;
	static int16_t x4816 = 1;
	volatile int32_t t97 = 93220581;

	t97 = (x4813^(x4814&(x4815>>x4816)));

	if (t97 != 11) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x4913 = 472LLU;
	static uint64_t t98 = 3988086310209071503LLU;

	t98 = (x4913^(x4914&(x4915>>x4916)));

	if (t98 != 472LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x4925 = 2973968U;
	int8_t x4926 = INT8_MIN;
	volatile uint64_t t99 = 54LLU;

	t99 = (x4925^(x4926&(x4927>>x4928)));

	if (t99 != 2971280LLU) { NG(); } else { ; }
	
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

