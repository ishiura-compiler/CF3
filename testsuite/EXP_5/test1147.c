#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x91 = 32U;
int32_t x105 = -1;
uint64_t x107 = 14LLU;
uint32_t x134 = 55227U;
static uint64_t x136 = 58061LLU;
uint16_t x143 = 6U;
int8_t x144 = INT8_MIN;
volatile uint32_t t6 = 13682561U;
uint64_t x214 = 3LLU;
int32_t t9 = -11669561;
int16_t x396 = -1497;
uint8_t x471 = 2U;
uint16_t x519 = 13U;
volatile uint64_t t14 = 543852917282LLU;
static uint32_t x571 = 25U;
int8_t x624 = INT8_MIN;
static uint32_t t17 = 139U;
uint16_t x653 = 406U;
volatile uint64_t x662 = 2497572LLU;
volatile uint8_t x663 = 4U;
int16_t x677 = INT16_MIN;
volatile uint32_t x842 = 262U;
int8_t x894 = INT8_MAX;
volatile int16_t x973 = INT16_MIN;
uint64_t x974 = UINT64_MAX;
int32_t x1005 = INT32_MAX;
int64_t x1025 = INT64_MIN;
int64_t t28 = 255671LL;
uint32_t x1102 = 38039U;
uint16_t x1127 = 9U;
int16_t x1170 = 61;
uint16_t x1172 = 80U;
static int32_t t32 = -43912;
volatile int64_t x1191 = 1LL;
int64_t t33 = 38467952807LL;
volatile int8_t x1450 = 3;
static int32_t t37 = 419154834;
static volatile int8_t x1623 = 0;
int64_t t40 = INT64_MAX;
int8_t x1629 = INT8_MIN;
uint16_t x1632 = 58U;
static int16_t x1751 = 0;
static int32_t x2109 = INT32_MAX;
int8_t x2110 = INT8_MAX;
static volatile int16_t x2112 = -1;
volatile uint64_t x2149 = 294359LLU;
volatile int16_t x2166 = 175;
int8_t x2263 = 19;
int8_t x2328 = INT8_MIN;
static int32_t x2497 = -1;
int64_t x2500 = INT64_MIN;
uint32_t x2527 = 44U;
uint8_t x2636 = 0U;
uint8_t x2686 = UINT8_MAX;
static uint16_t x2688 = 517U;
volatile int32_t t60 = 29137;
int16_t x2750 = 1587;
uint8_t x2751 = 7U;
uint64_t t62 = 158361229LLU;
uint32_t x2842 = UINT32_MAX;
int32_t x2844 = INT32_MAX;
volatile int32_t x2914 = 15;
volatile int32_t t64 = 3735;
int8_t x2949 = INT8_MIN;
static int32_t t67 = 0;
uint64_t x3258 = 571640244525637LLU;
static volatile uint64_t t70 = 827325352LLU;
uint16_t x3280 = 5U;
int8_t x3287 = 1;
int64_t x3301 = INT64_MAX;
static volatile int8_t x3303 = 10;
volatile int64_t t73 = INT64_MAX;
volatile uint64_t t74 = 3681LLU;
volatile uint64_t t75 = 8916253453677646LLU;
uint64_t x3457 = 3854507758732471732LLU;
int16_t x3551 = 1;
uint8_t x3689 = 1U;
static int8_t x3690 = INT8_MAX;
int16_t x3691 = 0;
int64_t x3772 = -1LL;
volatile int8_t x3801 = INT8_MIN;
volatile uint64_t x3803 = 2LLU;
static uint16_t x3826 = 812U;
volatile int32_t t86 = 7517;
uint16_t x3865 = 8108U;
int8_t x3867 = 0;
volatile int16_t x3873 = INT16_MAX;
volatile uint64_t x3874 = UINT64_MAX;
volatile int32_t x3876 = INT32_MIN;
uint64_t t88 = 3441976597381139830LLU;
uint32_t x4017 = 8321347U;
int32_t x4134 = 1;
uint64_t x4266 = 956913625693739297LLU;
int16_t x4391 = 1;
uint16_t x4392 = 0U;
int8_t x4400 = INT8_MAX;
static volatile uint32_t t95 = 56143U;
uint32_t x4485 = 2722693U;
int32_t x4529 = -1;
int16_t x4532 = -1;


void f0(void) {
	static int8_t x29 = INT8_MIN;
	volatile uint8_t x30 = 61U;
	uint16_t x31 = 0U;
	int32_t x32 = -1;
	volatile int32_t t0 = -1;

	t0 = (x29*((x30>>x31)&x32));

	if (t0 != -7808) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x57 = 5U;
	int16_t x58 = 3376;
	int32_t x59 = 3;
	int16_t x60 = INT16_MIN;
	int32_t t1 = 7332;

	t1 = (x57*((x58>>x59)&x60));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x89 = -1LL;
	uint64_t x90 = 21499905980521LLU;
	volatile uint64_t x92 = 5113590407LLU;
	uint64_t t2 = 4397173829128LLU;

	t2 = (x89*((x90>>x91)&x92));

	if (t2 != 18446744073709546875LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x106 = 51992703350448LLU;
	uint16_t x108 = 28714U;
	static volatile uint64_t t3 = 137434365184647483LLU;

	t3 = (x105*((x106>>x107)&x108));

	if (t3 != 18446744073709522912LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x133 = -324;
	uint8_t x135 = 26U;
	volatile uint64_t t4 = 27109842864622LLU;

	t4 = (x133*((x134>>x135)&x136));

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x141 = -1;
	uint16_t x142 = 20695U;
	int32_t t5 = -968809;

	t5 = (x141*((x142>>x143)&x144));

	if (t5 != -256) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x157 = -1;
	int32_t x158 = 173434201;
	volatile int8_t x159 = 28;
	uint32_t x160 = 4U;

	t6 = (x157*((x158>>x159)&x160));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile int32_t x205 = -3306;
	int16_t x206 = INT16_MAX;
	uint8_t x207 = 7U;
	uint64_t x208 = 1300418832729131797LLU;
	volatile uint64_t t7 = 795036602443070LLU;

	t7 = (x205*((x206>>x207)&x208));

	if (t7 != 18446744073709482190LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x213 = -1LL;
	volatile uint8_t x215 = 57U;
	volatile uint32_t x216 = UINT32_MAX;
	static uint64_t t8 = 7594376LLU;

	t8 = (x213*((x214>>x215)&x216));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x349 = 9602;
	uint16_t x350 = UINT16_MAX;
	static int8_t x351 = 7;
	static int16_t x352 = INT16_MIN;

	t9 = (x349*((x350>>x351)&x352));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x393 = UINT32_MAX;
	volatile int32_t x394 = 264671;
	uint16_t x395 = 1U;
	uint32_t t10 = 352403U;

	t10 = (x393*((x394>>x395)&x396));

	if (t10 != 4294836185U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x437 = 2;
	uint32_t x438 = 94U;
	static int16_t x439 = 3;
	int8_t x440 = -1;
	static uint32_t t11 = 6563U;

	t11 = (x437*((x438>>x439)&x440));

	if (t11 != 22U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x469 = -396680;
	uint16_t x470 = 722U;
	uint32_t x472 = UINT32_MAX;
	uint32_t t12 = 28406852U;

	t12 = (x469*((x470>>x471)&x472));

	if (t12 != 4223564896U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x509 = -1;
	uint32_t x510 = 14120U;
	uint8_t x511 = 3U;
	uint16_t x512 = 385U;
	volatile uint32_t t13 = 6585140U;

	t13 = (x509*((x510>>x511)&x512));

	if (t13 != 4294967167U) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x517 = UINT64_MAX;
	uint8_t x518 = 2U;
	int32_t x520 = INT32_MIN;

	t14 = (x517*((x518>>x519)&x520));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x569 = INT64_MAX;
	int8_t x570 = INT8_MAX;
	static int32_t x572 = 393651;
	static volatile int64_t t15 = -29103568LL;

	t15 = (x569*((x570>>x571)&x572));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x585 = -1;
	uint32_t x586 = UINT32_MAX;
	int8_t x587 = 6;
	uint64_t x588 = UINT64_MAX;
	uint64_t t16 = 50917281422465903LLU;

	t16 = (x585*((x586>>x587)&x588));

	if (t16 != 18446744073642442753LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x621 = INT32_MAX;
	volatile uint32_t x622 = 3U;
	int16_t x623 = 1;

	t17 = (x621*((x622>>x623)&x624));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x654 = INT16_MAX;
	uint16_t x655 = 0U;
	static volatile int64_t x656 = INT64_MIN;
	volatile int64_t t18 = 77334908597LL;

	t18 = (x653*((x654>>x655)&x656));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x661 = INT16_MIN;
	int16_t x664 = INT16_MAX;
	static volatile uint64_t t19 = 465268501124722899LLU;

	t19 = (x661*((x662>>x663)&x664));

	if (t19 != 18446744072889499648LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x678 = UINT16_MAX;
	int8_t x679 = 0;
	static int32_t x680 = 200;
	volatile int32_t t20 = 271;

	t20 = (x677*((x678>>x679)&x680));

	if (t20 != -6553600) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x821 = 4017611375389LLU;
	uint64_t x822 = 23687390334LLU;
	int8_t x823 = 12;
	volatile int64_t x824 = -1LL;
	volatile uint64_t t21 = 35470461881LLU;

	t21 = (x821*((x822>>x823)&x824));

	if (t21 != 4787319461179306390LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x841 = -1;
	uint8_t x843 = 0U;
	int64_t x844 = -1LL;
	volatile int64_t t22 = -56816LL;

	t22 = (x841*((x842>>x843)&x844));

	if (t22 != -262LL) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x853 = UINT64_MAX;
	static uint64_t x854 = UINT64_MAX;
	volatile int8_t x855 = 25;
	volatile uint16_t x856 = UINT16_MAX;
	uint64_t t23 = 261055198185LLU;

	t23 = (x853*((x854>>x855)&x856));

	if (t23 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x865 = INT8_MIN;
	static uint8_t x866 = UINT8_MAX;
	static volatile uint32_t x867 = 0U;
	static volatile uint16_t x868 = 334U;
	int32_t t24 = 37;

	t24 = (x865*((x866>>x867)&x868));

	if (t24 != -9984) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x893 = INT8_MIN;
	static uint8_t x895 = 16U;
	int16_t x896 = INT16_MAX;
	volatile int32_t t25 = 884287211;

	t25 = (x893*((x894>>x895)&x896));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x975 = 57;
	volatile int64_t x976 = 566136285515783889LL;
	volatile uint64_t t26 = 34885228682588LLU;

	t26 = (x973*((x974>>x975)&x976));

	if (t26 != 18446744073706897408LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x1006 = 1U;
	uint8_t x1007 = 12U;
	static int8_t x1008 = INT8_MIN;
	volatile int32_t t27 = 71817109;

	t27 = (x1005*((x1006>>x1007)&x1008));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x1026 = 98U;
	uint16_t x1027 = 19U;
	int64_t x1028 = INT64_MIN;

	t28 = (x1025*((x1026>>x1027)&x1028));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x1053 = 83U;
	int32_t x1054 = INT32_MAX;
	int8_t x1055 = 17;
	volatile uint16_t x1056 = 3U;
	volatile int32_t t29 = -32606;

	t29 = (x1053*((x1054>>x1055)&x1056));

	if (t29 != 249) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x1101 = INT8_MIN;
	uint8_t x1103 = 18U;
	uint16_t x1104 = 3U;
	volatile uint32_t t30 = 1U;

	t30 = (x1101*((x1102>>x1103)&x1104));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x1125 = 217;
	uint64_t x1126 = 16733665918940599LLU;
	int16_t x1128 = -1;
	uint64_t t31 = 27LLU;

	t31 = (x1125*((x1126>>x1127)&x1128));

	if (t31 != 7092198250800810LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x1169 = INT8_MAX;
	volatile int8_t x1171 = 0;

	t32 = (x1169*((x1170>>x1171)&x1172));

	if (t32 != 2032) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x1189 = 10U;
	volatile uint16_t x1190 = 1465U;
	static int64_t x1192 = -1LL;

	t33 = (x1189*((x1190>>x1191)&x1192));

	if (t33 != 7320LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x1449 = -2274115;
	uint8_t x1451 = 3U;
	volatile int8_t x1452 = INT8_MIN;
	static volatile int32_t t34 = 27612;

	t34 = (x1449*((x1450>>x1451)&x1452));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x1469 = 1;
	uint64_t x1470 = 1202LLU;
	volatile uint16_t x1471 = 4U;
	static int64_t x1472 = INT64_MAX;
	uint64_t t35 = 30812168LLU;

	t35 = (x1469*((x1470>>x1471)&x1472));

	if (t35 != 75LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x1517 = -266;
	uint32_t x1518 = 43538198U;
	static volatile uint8_t x1519 = 6U;
	int16_t x1520 = INT16_MAX;
	uint32_t t36 = 4632896U;

	t36 = (x1517*((x1518>>x1519)&x1520));

	if (t36 != 4288337512U) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x1521 = INT8_MAX;
	int8_t x1522 = 2;
	uint8_t x1523 = 0U;
	int8_t x1524 = INT8_MIN;

	t37 = (x1521*((x1522>>x1523)&x1524));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x1529 = UINT64_MAX;
	volatile int64_t x1530 = INT64_MAX;
	static uint64_t x1531 = 39LLU;
	int16_t x1532 = INT16_MAX;
	volatile uint64_t t38 = 897440817LLU;

	t38 = (x1529*((x1530>>x1531)&x1532));

	if (t38 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x1557 = UINT16_MAX;
	uint64_t x1558 = 282028324424971LLU;
	uint32_t x1559 = 1U;
	uint64_t x1560 = 198675688935867LLU;
	uint64_t t39 = 83158063LLU;

	t39 = (x1557*((x1558>>x1559)&x1560));

	if (t39 != 9223311614037786495LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x1621 = INT64_MAX;
	volatile int8_t x1622 = 1;
	int32_t x1624 = -1;

	t40 = (x1621*((x1622>>x1623)&x1624));

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x1630 = 13U;
	uint8_t x1631 = 1U;
	int32_t t41 = -11513674;

	t41 = (x1629*((x1630>>x1631)&x1632));

	if (t41 != -256) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x1713 = INT32_MIN;
	uint64_t x1714 = UINT64_MAX;
	static uint8_t x1715 = 0U;
	int64_t x1716 = -1LL;
	volatile uint64_t t42 = 85305962051726845LLU;

	t42 = (x1713*((x1714>>x1715)&x1716));

	if (t42 != 2147483648LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x1749 = 21U;
	uint16_t x1750 = 6U;
	uint32_t x1752 = 14U;
	uint32_t t43 = 819U;

	t43 = (x1749*((x1750>>x1751)&x1752));

	if (t43 != 126U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x1817 = 2U;
	uint16_t x1818 = 23U;
	uint8_t x1819 = 10U;
	int16_t x1820 = INT16_MAX;
	volatile int32_t t44 = -7;

	t44 = (x1817*((x1818>>x1819)&x1820));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x1861 = -4;
	static uint64_t x1862 = UINT64_MAX;
	uint8_t x1863 = 0U;
	static uint16_t x1864 = UINT16_MAX;
	static volatile uint64_t t45 = 141LLU;

	t45 = (x1861*((x1862>>x1863)&x1864));

	if (t45 != 18446744073709289476LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x1889 = INT64_MAX;
	int8_t x1890 = 1;
	int32_t x1891 = 19;
	int8_t x1892 = INT8_MIN;
	volatile int64_t t46 = -62LL;

	t46 = (x1889*((x1890>>x1891)&x1892));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x1909 = 10LLU;
	uint64_t x1910 = 1530268731311072896LLU;
	int8_t x1911 = 0;
	int8_t x1912 = 20;
	uint64_t t47 = 312LLU;

	t47 = (x1909*((x1910>>x1911)&x1912));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x1977 = 259U;
	int8_t x1978 = INT8_MAX;
	static uint16_t x1979 = 17U;
	int8_t x1980 = 22;
	int32_t t48 = -116937;

	t48 = (x1977*((x1978>>x1979)&x1980));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x2111 = 27U;
	int32_t t49 = -23582;

	t49 = (x2109*((x2110>>x2111)&x2112));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x2150 = 307860762LL;
	uint8_t x2151 = 7U;
	int16_t x2152 = -1351;
	static uint64_t t50 = 2308054LLU;

	t50 = (x2149*((x2150>>x2151)&x2152));

	if (t50 != 707905136536LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x2165 = 85U;
	uint8_t x2167 = 7U;
	int64_t x2168 = INT64_MIN;
	static volatile int64_t t51 = -62978083571044859LL;

	t51 = (x2165*((x2166>>x2167)&x2168));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x2261 = 4320;
	int64_t x2262 = INT64_MAX;
	volatile int64_t x2264 = INT64_MIN;
	int64_t t52 = -210089924990180768LL;

	t52 = (x2261*((x2262>>x2263)&x2264));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x2293 = 58U;
	static uint16_t x2294 = UINT16_MAX;
	uint32_t x2295 = 15U;
	int16_t x2296 = INT16_MIN;
	int32_t t53 = 54586735;

	t53 = (x2293*((x2294>>x2295)&x2296));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x2325 = INT8_MIN;
	uint64_t x2326 = 2051464LLU;
	static int8_t x2327 = 0;
	static volatile uint64_t t54 = 16392817LLU;

	t54 = (x2325*((x2326>>x2327)&x2328));

	if (t54 != 18446744073446965248LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x2345 = 975U;
	volatile uint16_t x2346 = 1U;
	uint8_t x2347 = 2U;
	static uint64_t x2348 = 5026973103744088LLU;
	uint64_t t55 = 10749690563944624LLU;

	t55 = (x2345*((x2346>>x2347)&x2348));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint64_t x2498 = 6LLU;
	volatile int8_t x2499 = 0;
	uint64_t t56 = 833524125585LLU;

	t56 = (x2497*((x2498>>x2499)&x2500));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x2525 = 0U;
	uint64_t x2526 = 67327501503937LLU;
	int64_t x2528 = INT64_MIN;
	uint64_t t57 = 416147307551283LLU;

	t57 = (x2525*((x2526>>x2527)&x2528));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x2549 = INT8_MAX;
	uint16_t x2550 = 4U;
	uint16_t x2551 = 11U;
	static int8_t x2552 = INT8_MIN;
	int32_t t58 = 3188834;

	t58 = (x2549*((x2550>>x2551)&x2552));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x2633 = 0;
	uint8_t x2634 = 2U;
	volatile int32_t x2635 = 0;
	volatile int32_t t59 = 40065;

	t59 = (x2633*((x2634>>x2635)&x2636));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x2685 = -1;
	static uint8_t x2687 = 9U;

	t60 = (x2685*((x2686>>x2687)&x2688));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x2749 = INT8_MAX;
	volatile uint16_t x2752 = 748U;
	static int32_t t61 = -986;

	t61 = (x2749*((x2750>>x2751)&x2752));

	if (t61 != 1524) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x2773 = 30004U;
	uint64_t x2774 = 76676LLU;
	int16_t x2775 = 0;
	int32_t x2776 = INT32_MIN;

	t62 = (x2773*((x2774>>x2775)&x2776));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x2841 = INT32_MAX;
	uint8_t x2843 = 3U;
	uint32_t t63 = 830764U;

	t63 = (x2841*((x2842>>x2843)&x2844));

	if (t63 != 1610612737U) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x2913 = 2168U;
	uint8_t x2915 = 8U;
	int16_t x2916 = INT16_MAX;

	t64 = (x2913*((x2914>>x2915)&x2916));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint16_t x2950 = UINT16_MAX;
	volatile uint32_t x2951 = 2U;
	uint16_t x2952 = UINT16_MAX;
	static volatile int32_t t65 = -90524072;

	t65 = (x2949*((x2950>>x2951)&x2952));

	if (t65 != -2097024) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x3005 = 1;
	uint8_t x3006 = 8U;
	uint8_t x3007 = 26U;
	int32_t x3008 = -43;
	static volatile int32_t t66 = -1;

	t66 = (x3005*((x3006>>x3007)&x3008));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x3037 = INT32_MAX;
	int32_t x3038 = 65;
	uint8_t x3039 = 18U;
	volatile int32_t x3040 = 1691796;

	t67 = (x3037*((x3038>>x3039)&x3040));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x3081 = INT64_MAX;
	uint64_t x3082 = 1059635191676445030LLU;
	uint8_t x3083 = 3U;
	uint64_t x3084 = 470519573LLU;
	uint64_t t68 = 492152894857789085LLU;

	t68 = (x3081*((x3082>>x3083)&x3084));

	if (t68 != 18446744073373481980LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x3241 = INT8_MIN;
	uint16_t x3242 = 11989U;
	static uint16_t x3243 = 22U;
	volatile int64_t x3244 = INT64_MIN;
	volatile int64_t t69 = 5LL;

	t69 = (x3241*((x3242>>x3243)&x3244));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x3257 = 3;
	volatile uint8_t x3259 = 6U;
	int64_t x3260 = INT64_MAX;

	t70 = (x3257*((x3258>>x3259)&x3260));

	if (t70 != 26795636462139LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x3277 = 2377337LLU;
	static volatile uint8_t x3278 = UINT8_MAX;
	volatile uint8_t x3279 = 11U;
	volatile uint64_t t71 = 3261477692335LLU;

	t71 = (x3277*((x3278>>x3279)&x3280));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x3285 = INT16_MAX;
	uint16_t x3286 = 10341U;
	uint8_t x3288 = 1U;
	volatile int32_t t72 = 205;

	t72 = (x3285*((x3286>>x3287)&x3288));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x3302 = 504266321LL;
	int8_t x3304 = 1;

	t73 = (x3301*((x3302>>x3303)&x3304));

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x3349 = -21;
	static volatile uint64_t x3350 = 2501533LLU;
	int16_t x3351 = 46;
	int32_t x3352 = -3228544;

	t74 = (x3349*((x3350>>x3351)&x3352));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x3413 = 1449;
	uint64_t x3414 = 167763236926LLU;
	uint16_t x3415 = 1U;
	int64_t x3416 = INT64_MIN;

	t75 = (x3413*((x3414>>x3415)&x3416));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int64_t x3433 = -973LL;
	static uint32_t x3434 = 1026U;
	volatile int16_t x3435 = 4;
	volatile int8_t x3436 = -23;
	static volatile int64_t t76 = 34529932014451LL;

	t76 = (x3433*((x3434>>x3435)&x3436));

	if (t76 != -62272LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x3458 = 32905U;
	static uint8_t x3459 = 10U;
	uint64_t x3460 = 890618184LLU;
	uint64_t t77 = 142LLU;

	t77 = (x3457*((x3458>>x3459)&x3460));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x3465 = -1;
	uint32_t x3466 = 3542U;
	int8_t x3467 = 2;
	int64_t x3468 = INT64_MAX;
	int64_t t78 = 4119511412366247LL;

	t78 = (x3465*((x3466>>x3467)&x3468));

	if (t78 != -885LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x3549 = -95586;
	uint8_t x3550 = 3U;
	volatile uint16_t x3552 = 15585U;
	int32_t t79 = 763959;

	t79 = (x3549*((x3550>>x3551)&x3552));

	if (t79 != -95586) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x3692 = UINT16_MAX;
	volatile int32_t t80 = -1;

	t80 = (x3689*((x3690>>x3691)&x3692));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x3697 = 3661U;
	static volatile int64_t x3698 = 8147837027739563LL;
	uint32_t x3699 = 42U;
	int32_t x3700 = INT32_MIN;
	volatile int64_t t81 = 95LL;

	t81 = (x3697*((x3698>>x3699)&x3700));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x3769 = 264308U;
	uint32_t x3770 = 3955U;
	static uint16_t x3771 = 12U;
	volatile int64_t t82 = 3818859549224LL;

	t82 = (x3769*((x3770>>x3771)&x3772));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x3789 = UINT32_MAX;
	volatile int8_t x3790 = 5;
	static uint8_t x3791 = 1U;
	int64_t x3792 = -1LL;
	volatile int64_t t83 = 54660760247724LL;

	t83 = (x3789*((x3790>>x3791)&x3792));

	if (t83 != 8589934590LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x3802 = INT64_MAX;
	volatile uint8_t x3804 = 6U;
	int64_t t84 = 55587242081046LL;

	t84 = (x3801*((x3802>>x3803)&x3804));

	if (t84 != -768LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x3825 = 422949LLU;
	static uint8_t x3827 = 15U;
	int64_t x3828 = -185362LL;
	uint64_t t85 = 6916728751LLU;

	t85 = (x3825*((x3826>>x3827)&x3828));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x3829 = INT16_MAX;
	uint8_t x3830 = 6U;
	uint8_t x3831 = 17U;
	int8_t x3832 = 29;

	t86 = (x3829*((x3830>>x3831)&x3832));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x3866 = 1;
	static volatile int8_t x3868 = INT8_MIN;
	volatile int32_t t87 = -10493631;

	t87 = (x3865*((x3866>>x3867)&x3868));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x3875 = 38U;

	t88 = (x3873*((x3874>>x3875)&x3876));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x3917 = INT8_MAX;
	static volatile int64_t x3918 = 9675964904809339LL;
	int64_t x3919 = 1LL;
	static int32_t x3920 = -1;
	volatile int64_t t89 = -46601897LL;

	t89 = (x3917*((x3918>>x3919)&x3920));

	if (t89 != 614423771455392963LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x4018 = 4U;
	uint8_t x4019 = 0U;
	int64_t x4020 = INT64_MAX;
	volatile int64_t t90 = -21196647224390LL;

	t90 = (x4017*((x4018>>x4019)&x4020));

	if (t90 != 33285388LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x4109 = -1;
	uint32_t x4110 = 5U;
	int16_t x4111 = 9;
	uint64_t x4112 = UINT64_MAX;
	static uint64_t t91 = 969LLU;

	t91 = (x4109*((x4110>>x4111)&x4112));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x4133 = 26598143LLU;
	int8_t x4135 = 1;
	int64_t x4136 = -72173LL;
	volatile uint64_t t92 = 222744LLU;

	t92 = (x4133*((x4134>>x4135)&x4136));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x4265 = 82;
	uint8_t x4267 = 17U;
	uint64_t x4268 = 4958LLU;
	static volatile uint64_t t93 = 33740487LLU;

	t93 = (x4265*((x4266>>x4267)&x4268));

	if (t93 != 379988LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x4389 = INT32_MAX;
	static int16_t x4390 = 2;
	int32_t t94 = 121431;

	t94 = (x4389*((x4390>>x4391)&x4392));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x4397 = 237926771U;
	uint16_t x4398 = 15U;
	static volatile int8_t x4399 = 19;

	t95 = (x4397*((x4398>>x4399)&x4400));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x4449 = 386227LLU;
	volatile int8_t x4450 = INT8_MAX;
	static volatile uint8_t x4451 = 2U;
	volatile int8_t x4452 = -1;
	uint64_t t96 = 2LLU;

	t96 = (x4449*((x4450>>x4451)&x4452));

	if (t96 != 11973037LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x4486 = 20539LL;
	uint8_t x4487 = 7U;
	uint8_t x4488 = 40U;
	static int64_t t97 = 32161569363939901LL;

	t97 = (x4485*((x4486>>x4487)&x4488));

	if (t97 != 87126176LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint64_t x4530 = UINT64_MAX;
	static volatile uint16_t x4531 = 2U;
	static uint64_t t98 = 3545682663230006LLU;

	t98 = (x4529*((x4530>>x4531)&x4532));

	if (t98 != 13835058055282163713LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x4545 = -192157;
	volatile int32_t x4546 = INT32_MAX;
	int8_t x4547 = 0;
	int32_t x4548 = INT32_MIN;
	int32_t t99 = 4624;

	t99 = (x4545*((x4546>>x4547)&x4548));

	if (t99 != 0) { NG(); } else { ; }
	
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

