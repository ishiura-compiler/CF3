#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x50 = 14U;
int32_t t1 = 28491;
static int16_t x166 = 36;
uint64_t x264 = 97974LLU;
static int32_t t3 = -6887487;
static uint16_t x265 = 2U;
volatile int16_t x422 = 0;
uint32_t x817 = 68U;
int16_t x1192 = INT16_MIN;
static int32_t t13 = -50067;
uint8_t x1365 = 9U;
int8_t x1368 = 1;
uint32_t x1377 = 109482U;
int32_t x1378 = 5;
static volatile int16_t x1421 = 813;
volatile uint32_t x1424 = UINT32_MAX;
uint32_t x1613 = UINT32_MAX;
int8_t x1785 = 1;
int16_t x1799 = 14219;
volatile uint16_t x1844 = UINT16_MAX;
uint32_t x1969 = UINT32_MAX;
int8_t x1970 = 8;
int8_t x2005 = 11;
static int32_t x2171 = INT32_MIN;
static int8_t x2172 = 0;
int32_t x2269 = 7766645;
uint8_t x2270 = 1U;
uint8_t x2350 = 2U;
static int8_t x2376 = INT8_MIN;
uint16_t x2441 = 99U;
static volatile uint8_t x2594 = 1U;
static int8_t x2595 = 1;
int64_t x2712 = -82LL;
uint64_t x2815 = UINT64_MAX;
uint8_t x2901 = 64U;
volatile int32_t t38 = -95;
uint64_t x3167 = 863317343059946LLU;
int8_t x3170 = 1;
uint32_t x3388 = 1531709703U;
uint64_t x3432 = 262027777927LLU;
int64_t x3629 = 531311226523LL;
int32_t x3630 = 1;
volatile int32_t t47 = 1957;
volatile uint64_t x3669 = 5863633LLU;
int32_t x3672 = 466624;
static volatile int64_t x3836 = INT64_MIN;
uint16_t x4093 = 267U;
static volatile int32_t t55 = -3233638;
uint8_t x4250 = 0U;
int32_t x4492 = -1;
volatile int16_t x4596 = 8;
int8_t x4599 = -1;
int8_t x4720 = INT8_MIN;
int32_t x4739 = -1;
int8_t x4766 = 9;
uint32_t x4925 = UINT32_MAX;
volatile uint32_t x4929 = UINT32_MAX;
int8_t x5111 = -1;
int32_t t74 = -106;
uint8_t x5506 = 0U;
int32_t t80 = -2273;
int8_t x5575 = INT8_MIN;
volatile int32_t t82 = -1;
static uint64_t x5597 = 2247856LLU;
uint32_t x5599 = 9U;
int8_t x5600 = INT8_MIN;
volatile int32_t t84 = 29834726;
uint8_t x5757 = 11U;
volatile int8_t x5758 = 2;
int64_t x5895 = -115741628LL;
static int32_t t88 = -66138;
uint32_t x5966 = 0U;
int64_t x5967 = INT64_MIN;
int32_t x6206 = 13;
int8_t x6218 = 3;
int64_t x6220 = -1LL;
uint16_t x6241 = UINT16_MAX;
uint16_t x6266 = 16U;
volatile uint64_t x6409 = UINT64_MAX;
int8_t x6411 = INT8_MIN;
uint64_t x6417 = UINT64_MAX;
uint16_t x6465 = 174U;
volatile uint8_t x6664 = UINT8_MAX;


void f0(void) {
	static volatile uint32_t x49 = 28612925U;
	uint8_t x51 = 59U;
	int8_t x52 = 1;
	int32_t t0 = -17443;

	t0 = (((x49<<x50)^x51)<x52);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x133 = 133156592664773903LLU;
	int64_t x134 = 0LL;
	int16_t x135 = -3;
	int32_t x136 = 962;

	t1 = (((x133<<x134)^x135)<x136);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x165 = UINT64_MAX;
	int32_t x167 = 16;
	volatile int16_t x168 = 22;
	int32_t t2 = -7;

	t2 = (((x165<<x166)^x167)<x168);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 9U;
	uint64_t x263 = 208645LLU;

	t3 = (((x261<<x262)^x263)<x264);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x266 = 5;
	volatile int64_t x267 = INT64_MIN;
	int64_t x268 = 180188672226LL;
	volatile int32_t t4 = -20532047;

	t4 = (((x265<<x266)^x267)<x268);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x309 = 14U;
	static int8_t x310 = 1;
	volatile int32_t x311 = -1;
	int16_t x312 = INT16_MIN;
	static volatile int32_t t5 = 1;

	t5 = (((x309<<x310)^x311)<x312);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x421 = 106276864374463LLU;
	volatile int32_t x423 = -538746;
	static volatile int16_t x424 = -374;
	int32_t t6 = 0;

	t6 = (((x421<<x422)^x423)<x424);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x529 = 2;
	uint32_t x530 = 25U;
	int8_t x531 = 2;
	int16_t x532 = -85;
	static volatile int32_t t7 = 169015263;

	t7 = (((x529<<x530)^x531)<x532);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x553 = UINT32_MAX;
	int16_t x554 = 14;
	int8_t x555 = 0;
	volatile int8_t x556 = 1;
	volatile int32_t t8 = -975;

	t8 = (((x553<<x554)^x555)<x556);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint64_t x818 = 14LLU;
	static int8_t x819 = INT8_MAX;
	volatile int8_t x820 = INT8_MAX;
	int32_t t9 = -71350;

	t9 = (((x817<<x818)^x819)<x820);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x1093 = 7168829U;
	static volatile int16_t x1094 = 22;
	int8_t x1095 = INT8_MIN;
	int16_t x1096 = INT16_MIN;
	int32_t t10 = 0;

	t10 = (((x1093<<x1094)^x1095)<x1096);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x1149 = 2LLU;
	int32_t x1150 = 0;
	uint32_t x1151 = 397U;
	uint8_t x1152 = UINT8_MAX;
	int32_t t11 = 38393;

	t11 = (((x1149<<x1150)^x1151)<x1152);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x1189 = INT16_MAX;
	volatile int8_t x1190 = 16;
	uint16_t x1191 = 3881U;
	int32_t t12 = 39367;

	t12 = (((x1189<<x1190)^x1191)<x1192);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x1281 = 256025LL;
	volatile int16_t x1282 = 1;
	int32_t x1283 = -9;
	uint64_t x1284 = UINT64_MAX;

	t13 = (((x1281<<x1282)^x1283)<x1284);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x1366 = 9;
	volatile int16_t x1367 = 9;
	int32_t t14 = -999282;

	t14 = (((x1365<<x1366)^x1367)<x1368);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x1379 = -439295LL;
	int64_t x1380 = INT64_MIN;
	static int32_t t15 = -44353255;

	t15 = (((x1377<<x1378)^x1379)<x1380);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x1422 = 9;
	int16_t x1423 = INT16_MAX;
	int32_t t16 = -37;

	t16 = (((x1421<<x1422)^x1423)<x1424);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x1485 = UINT32_MAX;
	uint32_t x1486 = 0U;
	int32_t x1487 = -51996017;
	volatile int32_t x1488 = INT32_MAX;
	int32_t t17 = 2;

	t17 = (((x1485<<x1486)^x1487)<x1488);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1517 = 82041LLU;
	static uint8_t x1518 = 24U;
	int8_t x1519 = INT8_MIN;
	int64_t x1520 = -718465LL;
	int32_t t18 = 179134435;

	t18 = (((x1517<<x1518)^x1519)<x1520);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x1593 = 1U;
	uint64_t x1594 = 8LLU;
	static uint8_t x1595 = UINT8_MAX;
	int32_t x1596 = INT32_MAX;
	int32_t t19 = -12908563;

	t19 = (((x1593<<x1594)^x1595)<x1596);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x1614 = 7;
	uint64_t x1615 = 71976235570990LLU;
	static int8_t x1616 = INT8_MAX;
	static volatile int32_t t20 = -16425514;

	t20 = (((x1613<<x1614)^x1615)<x1616);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x1786 = 1;
	static uint8_t x1787 = 3U;
	int16_t x1788 = -1;
	volatile int32_t t21 = -35068;

	t21 = (((x1785<<x1786)^x1787)<x1788);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x1797 = INT16_MAX;
	volatile uint8_t x1798 = 3U;
	volatile int8_t x1800 = -1;
	volatile int32_t t22 = 1611;

	t22 = (((x1797<<x1798)^x1799)<x1800);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x1841 = 101045U;
	uint8_t x1842 = 1U;
	volatile int8_t x1843 = -1;
	static volatile int32_t t23 = 87794629;

	t23 = (((x1841<<x1842)^x1843)<x1844);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x1905 = 0;
	int16_t x1906 = 1;
	int16_t x1907 = INT16_MAX;
	uint16_t x1908 = UINT16_MAX;
	volatile int32_t t24 = 511471;

	t24 = (((x1905<<x1906)^x1907)<x1908);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x1971 = INT64_MAX;
	int64_t x1972 = -4LL;
	static int32_t t25 = -58636329;

	t25 = (((x1969<<x1970)^x1971)<x1972);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x2006 = 6U;
	static uint8_t x2007 = 37U;
	int32_t x2008 = -24826;
	int32_t t26 = 8;

	t26 = (((x2005<<x2006)^x2007)<x2008);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2169 = INT16_MAX;
	static volatile uint16_t x2170 = 0U;
	static int32_t t27 = 6;

	t27 = (((x2169<<x2170)^x2171)<x2172);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x2271 = 5LL;
	uint8_t x2272 = 26U;
	static volatile int32_t t28 = -25629;

	t28 = (((x2269<<x2270)^x2271)<x2272);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x2349 = 1LL;
	volatile int64_t x2351 = -1092658937793859281LL;
	volatile uint32_t x2352 = UINT32_MAX;
	volatile int32_t t29 = -1810844;

	t29 = (((x2349<<x2350)^x2351)<x2352);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x2373 = 8135LLU;
	volatile uint32_t x2374 = 4U;
	volatile int8_t x2375 = -1;
	volatile int32_t t30 = 669254;

	t30 = (((x2373<<x2374)^x2375)<x2376);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x2385 = 24716U;
	uint8_t x2386 = 2U;
	static int16_t x2387 = 0;
	static uint16_t x2388 = UINT16_MAX;
	int32_t t31 = -1;

	t31 = (((x2385<<x2386)^x2387)<x2388);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x2442 = 0;
	int16_t x2443 = INT16_MIN;
	int8_t x2444 = INT8_MIN;
	int32_t t32 = -33559205;

	t32 = (((x2441<<x2442)^x2443)<x2444);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x2593 = 9U;
	static volatile uint16_t x2596 = UINT16_MAX;
	static volatile int32_t t33 = -62639420;

	t33 = (((x2593<<x2594)^x2595)<x2596);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x2709 = 7LL;
	uint8_t x2710 = 0U;
	static uint64_t x2711 = UINT64_MAX;
	volatile int32_t t34 = 14192073;

	t34 = (((x2709<<x2710)^x2711)<x2712);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x2805 = 39751U;
	int64_t x2806 = 6LL;
	int64_t x2807 = INT64_MIN;
	volatile uint8_t x2808 = 27U;
	volatile int32_t t35 = -194;

	t35 = (((x2805<<x2806)^x2807)<x2808);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x2813 = 0;
	int8_t x2814 = 6;
	int64_t x2816 = INT64_MAX;
	volatile int32_t t36 = 174552;

	t36 = (((x2813<<x2814)^x2815)<x2816);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x2829 = 2466U;
	static uint16_t x2830 = 18U;
	uint8_t x2831 = 2U;
	int16_t x2832 = INT16_MAX;
	int32_t t37 = 67764358;

	t37 = (((x2829<<x2830)^x2831)<x2832);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x2902 = 24LLU;
	int32_t x2903 = -6195;
	uint8_t x2904 = 4U;

	t38 = (((x2901<<x2902)^x2903)<x2904);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint32_t x3001 = UINT32_MAX;
	static uint8_t x3002 = 6U;
	int32_t x3003 = INT32_MIN;
	volatile uint64_t x3004 = 247835LLU;
	int32_t t39 = 3363977;

	t39 = (((x3001<<x3002)^x3003)<x3004);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x3065 = UINT64_MAX;
	static uint8_t x3066 = 27U;
	uint16_t x3067 = 500U;
	static int32_t x3068 = -142;
	int32_t t40 = -9;

	t40 = (((x3065<<x3066)^x3067)<x3068);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x3165 = UINT32_MAX;
	uint8_t x3166 = 5U;
	static int64_t x3168 = INT64_MIN;
	int32_t t41 = 617968;

	t41 = (((x3165<<x3166)^x3167)<x3168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x3169 = 69U;
	int16_t x3171 = INT16_MAX;
	int16_t x3172 = -1;
	int32_t t42 = 16814358;

	t42 = (((x3169<<x3170)^x3171)<x3172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x3237 = 44U;
	uint8_t x3238 = 0U;
	int32_t x3239 = INT32_MAX;
	int64_t x3240 = -31718678LL;
	volatile int32_t t43 = -5246;

	t43 = (((x3237<<x3238)^x3239)<x3240);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x3385 = UINT8_MAX;
	static int16_t x3386 = 1;
	int8_t x3387 = INT8_MAX;
	volatile int32_t t44 = -7126;

	t44 = (((x3385<<x3386)^x3387)<x3388);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x3429 = INT16_MAX;
	uint16_t x3430 = 4U;
	int16_t x3431 = INT16_MAX;
	int32_t t45 = 54243768;

	t45 = (((x3429<<x3430)^x3431)<x3432);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x3631 = -1;
	int32_t x3632 = -1;
	int32_t t46 = -73;

	t46 = (((x3629<<x3630)^x3631)<x3632);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x3633 = UINT32_MAX;
	uint8_t x3634 = 1U;
	int64_t x3635 = -1LL;
	uint64_t x3636 = UINT64_MAX;

	t47 = (((x3633<<x3634)^x3635)<x3636);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x3670 = 2U;
	int32_t x3671 = INT32_MAX;
	int32_t t48 = 2;

	t48 = (((x3669<<x3670)^x3671)<x3672);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x3781 = UINT32_MAX;
	uint8_t x3782 = 4U;
	static uint16_t x3783 = UINT16_MAX;
	uint32_t x3784 = 31405112U;
	int32_t t49 = 8002028;

	t49 = (((x3781<<x3782)^x3783)<x3784);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x3821 = 2944703775885925960LLU;
	int32_t x3822 = 0;
	volatile int64_t x3823 = INT64_MIN;
	uint64_t x3824 = 23LLU;
	static int32_t t50 = -154870181;

	t50 = (((x3821<<x3822)^x3823)<x3824);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x3833 = UINT8_MAX;
	static uint8_t x3834 = 0U;
	static int64_t x3835 = INT64_MIN;
	volatile int32_t t51 = 17095;

	t51 = (((x3833<<x3834)^x3835)<x3836);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x3945 = UINT64_MAX;
	uint8_t x3946 = 2U;
	int8_t x3947 = -3;
	int64_t x3948 = INT64_MAX;
	int32_t t52 = 3;

	t52 = (((x3945<<x3946)^x3947)<x3948);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x3961 = UINT64_MAX;
	static uint64_t x3962 = 8LLU;
	int8_t x3963 = INT8_MIN;
	int32_t x3964 = INT32_MIN;
	int32_t t53 = -1;

	t53 = (((x3961<<x3962)^x3963)<x3964);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x4094 = 7;
	volatile uint16_t x4095 = 17U;
	int64_t x4096 = -1LL;
	int32_t t54 = -1;

	t54 = (((x4093<<x4094)^x4095)<x4096);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int8_t x4117 = INT8_MAX;
	static int8_t x4118 = 1;
	static int32_t x4119 = -1;
	uint16_t x4120 = 6U;

	t55 = (((x4117<<x4118)^x4119)<x4120);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x4249 = INT32_MAX;
	static int8_t x4251 = INT8_MIN;
	static uint32_t x4252 = 146532894U;
	volatile int32_t t56 = 293671;

	t56 = (((x4249<<x4250)^x4251)<x4252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x4253 = 0;
	int8_t x4254 = 1;
	volatile uint16_t x4255 = 1U;
	int8_t x4256 = INT8_MAX;
	int32_t t57 = 50790864;

	t57 = (((x4253<<x4254)^x4255)<x4256);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x4389 = 124U;
	uint32_t x4390 = 10U;
	uint8_t x4391 = UINT8_MAX;
	uint32_t x4392 = 46533113U;
	static int32_t t58 = -21209529;

	t58 = (((x4389<<x4390)^x4391)<x4392);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x4489 = 9480704367141LL;
	int8_t x4490 = 0;
	int32_t x4491 = 13816;
	volatile int32_t t59 = -620264;

	t59 = (((x4489<<x4490)^x4491)<x4492);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x4593 = 6931870784400640LLU;
	int32_t x4594 = 7;
	int32_t x4595 = -1;
	volatile int32_t t60 = -15423030;

	t60 = (((x4593<<x4594)^x4595)<x4596);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x4597 = 221927707U;
	uint16_t x4598 = 20U;
	volatile int32_t x4600 = INT32_MIN;
	static int32_t t61 = -1146292;

	t61 = (((x4597<<x4598)^x4599)<x4600);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x4609 = 52U;
	static volatile uint16_t x4610 = 7U;
	int8_t x4611 = INT8_MAX;
	static uint32_t x4612 = 303351230U;
	int32_t t62 = -2458957;

	t62 = (((x4609<<x4610)^x4611)<x4612);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x4717 = UINT64_MAX;
	int8_t x4718 = 0;
	static int64_t x4719 = -800843668763084LL;
	volatile int32_t t63 = 345774;

	t63 = (((x4717<<x4718)^x4719)<x4720);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x4737 = INT8_MAX;
	uint32_t x4738 = 1U;
	uint32_t x4740 = 406245517U;
	int32_t t64 = -6326475;

	t64 = (((x4737<<x4738)^x4739)<x4740);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint8_t x4765 = UINT8_MAX;
	static uint64_t x4767 = UINT64_MAX;
	uint32_t x4768 = 483067U;
	int32_t t65 = -730106;

	t65 = (((x4765<<x4766)^x4767)<x4768);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x4797 = 7400LLU;
	uint8_t x4798 = 0U;
	uint8_t x4799 = 8U;
	volatile int16_t x4800 = INT16_MIN;
	volatile int32_t t66 = 2283376;

	t66 = (((x4797<<x4798)^x4799)<x4800);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x4801 = INT16_MAX;
	uint8_t x4802 = 13U;
	int32_t x4803 = INT32_MIN;
	volatile uint8_t x4804 = 1U;
	volatile int32_t t67 = -11;

	t67 = (((x4801<<x4802)^x4803)<x4804);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x4926 = 1LLU;
	uint16_t x4927 = UINT16_MAX;
	int32_t x4928 = INT32_MIN;
	static int32_t t68 = 185354202;

	t68 = (((x4925<<x4926)^x4927)<x4928);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x4930 = 13;
	volatile int64_t x4931 = 1230LL;
	int8_t x4932 = INT8_MIN;
	int32_t t69 = -260434;

	t69 = (((x4929<<x4930)^x4931)<x4932);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x5021 = 7;
	static uint32_t x5022 = 0U;
	int64_t x5023 = INT64_MIN;
	int32_t x5024 = 5429684;
	volatile int32_t t70 = 7119;

	t70 = (((x5021<<x5022)^x5023)<x5024);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x5109 = INT8_MAX;
	uint16_t x5110 = 0U;
	int16_t x5112 = INT16_MAX;
	static int32_t t71 = -219;

	t71 = (((x5109<<x5110)^x5111)<x5112);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x5169 = 34895841547263745LLU;
	static uint8_t x5170 = 11U;
	int16_t x5171 = INT16_MIN;
	static int32_t x5172 = -119766;
	int32_t t72 = 1;

	t72 = (((x5169<<x5170)^x5171)<x5172);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x5197 = 149U;
	uint32_t x5198 = 3U;
	uint32_t x5199 = 42636186U;
	volatile uint16_t x5200 = 8546U;
	volatile int32_t t73 = -7;

	t73 = (((x5197<<x5198)^x5199)<x5200);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x5221 = 0;
	uint8_t x5222 = 6U;
	int8_t x5223 = INT8_MAX;
	static int32_t x5224 = -1;

	t74 = (((x5221<<x5222)^x5223)<x5224);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x5237 = 429095183805024LL;
	volatile int8_t x5238 = 0;
	int8_t x5239 = INT8_MAX;
	int16_t x5240 = -1;
	static int32_t t75 = -34769909;

	t75 = (((x5237<<x5238)^x5239)<x5240);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x5241 = 0LLU;
	uint32_t x5242 = 0U;
	static uint32_t x5243 = UINT32_MAX;
	uint32_t x5244 = UINT32_MAX;
	static int32_t t76 = 213;

	t76 = (((x5241<<x5242)^x5243)<x5244);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x5305 = 1U;
	uint32_t x5306 = 5U;
	int32_t x5307 = INT32_MIN;
	int8_t x5308 = INT8_MIN;
	static int32_t t77 = 1336767;

	t77 = (((x5305<<x5306)^x5307)<x5308);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x5329 = 214LL;
	static int8_t x5330 = 0;
	int8_t x5331 = 37;
	int8_t x5332 = 0;
	static int32_t t78 = 1904528;

	t78 = (((x5329<<x5330)^x5331)<x5332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x5505 = 3150U;
	uint8_t x5507 = 3U;
	uint32_t x5508 = 1U;
	static volatile int32_t t79 = 0;

	t79 = (((x5505<<x5506)^x5507)<x5508);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x5517 = 585369504LLU;
	uint8_t x5518 = 6U;
	int8_t x5519 = 0;
	int32_t x5520 = -1;

	t80 = (((x5517<<x5518)^x5519)<x5520);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint64_t x5525 = 2195424778LLU;
	volatile uint8_t x5526 = 2U;
	static int16_t x5527 = -199;
	int8_t x5528 = 0;
	static int32_t t81 = 15;

	t81 = (((x5525<<x5526)^x5527)<x5528);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x5573 = 37U;
	uint8_t x5574 = 0U;
	int8_t x5576 = -62;

	t82 = (((x5573<<x5574)^x5575)<x5576);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x5598 = 1U;
	volatile int32_t t83 = -104448131;

	t83 = (((x5597<<x5598)^x5599)<x5600);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x5657 = 2;
	static uint16_t x5658 = 13U;
	int64_t x5659 = INT64_MIN;
	uint32_t x5660 = 30U;

	t84 = (((x5657<<x5658)^x5659)<x5660);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint64_t x5689 = 5148811761542958LLU;
	volatile int16_t x5690 = 0;
	int8_t x5691 = INT8_MIN;
	volatile int8_t x5692 = INT8_MIN;
	volatile int32_t t85 = 21;

	t85 = (((x5689<<x5690)^x5691)<x5692);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x5759 = -1;
	uint64_t x5760 = 34956772185LLU;
	int32_t t86 = 1;

	t86 = (((x5757<<x5758)^x5759)<x5760);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x5893 = 76186378327195435LLU;
	static volatile int8_t x5894 = 3;
	int8_t x5896 = -1;
	static int32_t t87 = -88;

	t87 = (((x5893<<x5894)^x5895)<x5896);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x5953 = 8;
	static uint8_t x5954 = 6U;
	uint8_t x5955 = 38U;
	static volatile int8_t x5956 = -1;

	t88 = (((x5953<<x5954)^x5955)<x5956);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x5965 = 1743680295U;
	uint64_t x5968 = 411789614337051LLU;
	volatile int32_t t89 = 9952985;

	t89 = (((x5965<<x5966)^x5967)<x5968);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x6029 = UINT32_MAX;
	static int8_t x6030 = 1;
	int32_t x6031 = -1;
	int8_t x6032 = INT8_MIN;
	int32_t t90 = -2;

	t90 = (((x6029<<x6030)^x6031)<x6032);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x6205 = 526;
	uint16_t x6207 = 0U;
	uint16_t x6208 = UINT16_MAX;
	static int32_t t91 = -21588;

	t91 = (((x6205<<x6206)^x6207)<x6208);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x6217 = 4123520139686041144LLU;
	int64_t x6219 = INT64_MAX;
	volatile int32_t t92 = 6807638;

	t92 = (((x6217<<x6218)^x6219)<x6220);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x6242 = 11U;
	uint64_t x6243 = 12984668911134LLU;
	int64_t x6244 = -1LL;
	static volatile int32_t t93 = -164;

	t93 = (((x6241<<x6242)^x6243)<x6244);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x6265 = 950U;
	int16_t x6267 = INT16_MIN;
	static volatile int16_t x6268 = INT16_MAX;
	volatile int32_t t94 = 861;

	t94 = (((x6265<<x6266)^x6267)<x6268);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x6410 = 0;
	int32_t x6412 = -7037093;
	volatile int32_t t95 = -32556508;

	t95 = (((x6409<<x6410)^x6411)<x6412);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x6418 = 14;
	uint64_t x6419 = 1007969607940329993LLU;
	volatile uint32_t x6420 = 253U;
	int32_t t96 = 7945;

	t96 = (((x6417<<x6418)^x6419)<x6420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x6466 = 0U;
	int16_t x6467 = INT16_MIN;
	uint32_t x6468 = 182945807U;
	volatile int32_t t97 = 222453;

	t97 = (((x6465<<x6466)^x6467)<x6468);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x6601 = 65U;
	uint8_t x6602 = 1U;
	volatile int32_t x6603 = INT32_MIN;
	uint64_t x6604 = UINT64_MAX;
	volatile int32_t t98 = -5581;

	t98 = (((x6601<<x6602)^x6603)<x6604);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x6661 = 3659438U;
	volatile int16_t x6662 = 0;
	volatile int64_t x6663 = -1LL;
	int32_t t99 = 44551;

	t99 = (((x6661<<x6662)^x6663)<x6664);

	if (t99 != 1) { NG(); } else { ; }
	
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

