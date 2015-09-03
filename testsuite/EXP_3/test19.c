#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x278 = -78LL;
uint8_t x305 = 5U;
static volatile int8_t x308 = -1;
volatile int32_t t4 = -32127051;
volatile int32_t t5 = -1;
uint16_t x733 = 4099U;
int64_t x734 = -1LL;
int16_t x737 = INT16_MIN;
int64_t x739 = 0LL;
volatile int32_t t8 = 8;
static volatile int16_t x769 = INT16_MIN;
uint8_t x796 = 5U;
int32_t x1065 = INT32_MIN;
static int32_t x1294 = 114;
volatile uint16_t x1295 = 3U;
uint64_t t15 = 533808014878LLU;
uint32_t t22 = 140U;
int16_t x2282 = -1;
volatile uint32_t x2283 = UINT32_MAX;
int8_t x2284 = 6;
volatile uint64_t x2380 = UINT64_MAX;
static int32_t t27 = -673;
uint32_t x2510 = 107619830U;
uint64_t t29 = 7643450LLU;
volatile uint32_t t30 = 20448U;
static uint8_t x2930 = 28U;
uint32_t x3138 = 60772254U;
uint8_t x3140 = 4U;
volatile int64_t t33 = -18414LL;
volatile uint32_t x3245 = 410U;
volatile int32_t x3246 = INT32_MIN;
uint16_t x3248 = 4U;
int32_t t35 = -63879;
int8_t x3441 = 20;
volatile uint64_t t36 = 1724879497757209LLU;
uint32_t x3489 = 483U;
int32_t x3491 = 1;
uint8_t x3511 = 0U;
static int32_t t38 = -7246346;
uint8_t x3521 = 51U;
static volatile uint8_t x3524 = 13U;
static volatile int8_t x3592 = 3;
int8_t x3727 = 18;
uint8_t x3893 = 0U;
volatile int32_t t44 = -343;
volatile uint8_t x3986 = 52U;
uint64_t x3987 = UINT64_MAX;
static uint32_t x4059 = UINT32_MAX;
static volatile int64_t t46 = 638893LL;
static uint64_t x4238 = 840LLU;
static uint8_t x4253 = 6U;
volatile int64_t t48 = -7LL;
uint16_t x4301 = 196U;
int64_t x4341 = -1LL;
int64_t t53 = -57551048063092LL;
static int16_t x4741 = INT16_MIN;
static int16_t x4743 = -1;
uint64_t t54 = 1813973370911784505LLU;
static uint32_t x5197 = UINT32_MAX;
int16_t x5309 = -1;
int64_t x5661 = -1LL;
uint8_t x5664 = 1U;
static volatile uint64_t t61 = 3048962LLU;
volatile uint64_t t62 = 1104425387LLU;
int16_t x6007 = -1;


void f0(void) {
	int32_t x221 = -4190;
	int16_t x222 = INT16_MIN;
	uint16_t x223 = 4U;
	int8_t x224 = -1;
	int32_t t0 = -70869939;

	t0 = ((x221-x222)<<(x223+x224));

	if (t0 != 228624) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x245 = UINT8_MAX;
	uint64_t x246 = UINT64_MAX;
	static int8_t x247 = 13;
	volatile int64_t x248 = -1LL;
	volatile uint64_t t1 = 4358LLU;

	t1 = ((x245-x246)<<(x247+x248));

	if (t1 != 1048576LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x277 = 134U;
	uint16_t x279 = 2U;
	uint16_t x280 = 1U;
	volatile int64_t t2 = 39089819794392LL;

	t2 = ((x277-x278)<<(x279+x280));

	if (t2 != 1696LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x289 = UINT32_MAX;
	static uint16_t x290 = UINT16_MAX;
	int8_t x291 = 2;
	int64_t x292 = -1LL;
	volatile uint32_t t3 = 24U;

	t3 = ((x289-x290)<<(x291+x292));

	if (t3 != 4294836224U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x306 = -1;
	static uint16_t x307 = 6U;

	t4 = ((x305-x306)<<(x307+x308));

	if (t4 != 192) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x545 = 29U;
	uint8_t x546 = 4U;
	uint64_t x547 = 3LLU;
	volatile int16_t x548 = -1;

	t5 = ((x545-x546)<<(x547+x548));

	if (t5 != 100) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x633 = INT8_MIN;
	uint64_t x634 = 147460253LLU;
	volatile uint8_t x635 = 0U;
	uint8_t x636 = 60U;
	uint64_t t6 = 4249201883LLU;

	t6 = ((x633-x634)<<(x635+x636));

	if (t6 != 3458764513820540928LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static int16_t x735 = 1;
	volatile uint64_t x736 = 2LLU;
	volatile int64_t t7 = -878210210339401398LL;

	t7 = ((x733-x734)<<(x735+x736));

	if (t7 != 32800LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x738 = INT16_MIN;
	int32_t x740 = 15;

	t8 = ((x737-x738)<<(x739+x740));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x770 = 364462311U;
	uint8_t x771 = 4U;
	volatile int8_t x772 = -1;
	volatile uint32_t t9 = 4134056U;

	t9 = ((x769-x770)<<(x771+x772));

	if (t9 != 1379006664U) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint8_t x793 = 1U;
	uint32_t x794 = 22U;
	int8_t x795 = -1;
	static volatile uint32_t t10 = 109338U;

	t10 = ((x793-x794)<<(x795+x796));

	if (t10 != 4294966960U) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x813 = INT16_MIN;
	int64_t x814 = -1376252LL;
	volatile int16_t x815 = 2;
	uint8_t x816 = 4U;
	volatile int64_t t11 = 0LL;

	t11 = ((x813-x814)<<(x815+x816));

	if (t11 != 85982976LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x829 = INT8_MIN;
	volatile uint64_t x830 = 5011142163LLU;
	uint16_t x831 = 31U;
	int8_t x832 = 1;
	uint64_t t12 = 1148667318804LLU;

	t12 = ((x829-x830)<<(x831+x832));

	if (t12 != 15370795891971588096LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x1066 = INT32_MIN;
	uint64_t x1067 = UINT64_MAX;
	static uint8_t x1068 = 9U;
	static int32_t t13 = 8998;

	t13 = ((x1065-x1066)<<(x1067+x1068));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int32_t x1093 = -1;
	uint32_t x1094 = UINT32_MAX;
	uint32_t x1095 = 23U;
	uint8_t x1096 = 0U;
	uint32_t t14 = 15597123U;

	t14 = ((x1093-x1094)<<(x1095+x1096));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x1293 = UINT64_MAX;
	volatile int64_t x1296 = -1LL;

	t15 = ((x1293-x1294)<<(x1295+x1296));

	if (t15 != 18446744073709551156LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x1645 = -1;
	int32_t x1646 = INT32_MIN;
	int64_t x1647 = -1LL;
	int16_t x1648 = 1;
	static int32_t t16 = INT32_MAX;

	t16 = ((x1645-x1646)<<(x1647+x1648));

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x1869 = -15;
	int32_t x1870 = -1446;
	uint64_t x1871 = UINT64_MAX;
	volatile int32_t x1872 = 1;
	static volatile int32_t t17 = -1;

	t17 = ((x1869-x1870)<<(x1871+x1872));

	if (t17 != 1431) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x1897 = 11236980483654LLU;
	int64_t x1898 = INT64_MAX;
	volatile uint8_t x1899 = 19U;
	volatile uint8_t x1900 = 16U;
	uint64_t t18 = 2LLU;

	t18 = ((x1897-x1898)<<(x1899+x1900));

	if (t18 != 9356001966985052160LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x2137 = 6U;
	int16_t x2138 = INT16_MIN;
	int8_t x2139 = 1;
	int8_t x2140 = -1;
	int32_t t19 = -537302921;

	t19 = ((x2137-x2138)<<(x2139+x2140));

	if (t19 != 32774) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x2145 = -8733792;
	uint32_t x2146 = 11U;
	int8_t x2147 = 0;
	uint16_t x2148 = 6U;
	volatile uint32_t t20 = 1260U;

	t20 = ((x2145-x2146)<<(x2147+x2148));

	if (t20 != 3736003904U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x2217 = INT8_MIN;
	int32_t x2218 = INT32_MIN;
	int64_t x2219 = -1LL;
	uint16_t x2220 = 1U;
	volatile int32_t t21 = -309117;

	t21 = ((x2217-x2218)<<(x2219+x2220));

	if (t21 != 2147483520) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x2233 = 4U;
	uint32_t x2234 = UINT32_MAX;
	uint8_t x2235 = 14U;
	volatile int16_t x2236 = -1;

	t22 = ((x2233-x2234)<<(x2235+x2236));

	if (t22 != 40960U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x2237 = -1LL;
	uint64_t x2238 = 22565LLU;
	uint16_t x2239 = 1U;
	static volatile int16_t x2240 = -1;
	volatile uint64_t t23 = 5898324078LLU;

	t23 = ((x2237-x2238)<<(x2239+x2240));

	if (t23 != 18446744073709529050LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x2281 = UINT32_MAX;
	volatile uint32_t t24 = 3829U;

	t24 = ((x2281-x2282)<<(x2283+x2284));

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x2309 = UINT32_MAX;
	int32_t x2310 = -1;
	uint8_t x2311 = 7U;
	volatile int32_t x2312 = 0;
	volatile uint32_t t25 = 37910862U;

	t25 = ((x2309-x2310)<<(x2311+x2312));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x2377 = 3870U;
	int8_t x2378 = 0;
	int8_t x2379 = 1;
	int32_t t26 = -161469;

	t26 = ((x2377-x2378)<<(x2379+x2380));

	if (t26 != 3870) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x2477 = INT16_MIN;
	int16_t x2478 = INT16_MIN;
	static uint8_t x2479 = 1U;
	uint32_t x2480 = UINT32_MAX;

	t27 = ((x2477-x2478)<<(x2479+x2480));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x2509 = -1;
	uint8_t x2511 = 26U;
	int64_t x2512 = -1LL;
	static uint32_t t28 = 1857U;

	t28 = ((x2509-x2510)<<(x2511+x2512));

	if (t28 != 301989888U) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x2737 = -1;
	static uint64_t x2738 = 24021918LLU;
	volatile int32_t x2739 = -1;
	volatile uint32_t x2740 = 52U;

	t29 = ((x2737-x2738)<<(x2739+x2740));

	if (t29 != 11747639627995938816LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x2777 = 1U;
	int8_t x2778 = -1;
	static int8_t x2779 = 8;
	volatile int16_t x2780 = -1;

	t30 = ((x2777-x2778)<<(x2779+x2780));

	if (t30 != 256U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x2929 = UINT32_MAX;
	uint8_t x2931 = 8U;
	static int16_t x2932 = 7;
	uint32_t t31 = 537461U;

	t31 = ((x2929-x2930)<<(x2931+x2932));

	if (t31 != 4294017024U) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x3029 = 0;
	static uint64_t x3030 = 1151027788813LLU;
	int16_t x3031 = -1;
	int8_t x3032 = 9;
	volatile uint64_t t32 = 6403946804073LLU;

	t32 = ((x3029-x3030)<<(x3031+x3032));

	if (t32 != 18446449410595615488LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x3137 = 148118837975979863LL;
	volatile uint8_t x3139 = 1U;

	t33 = ((x3137-x3138)<<(x3139+x3140));

	if (t33 != 4739802813286643488LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x3247 = 5;
	volatile uint32_t t34 = 0U;

	t34 = ((x3245-x3246)<<(x3247+x3248));

	if (t34 != 209920U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x3265 = 4;
	static int8_t x3266 = INT8_MIN;
	uint32_t x3267 = 14U;
	int16_t x3268 = -2;

	t35 = ((x3265-x3266)<<(x3267+x3268));

	if (t35 != 540672) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x3442 = 135492107944756LLU;
	volatile uint8_t x3443 = 14U;
	static int32_t x3444 = -8;

	t36 = ((x3441-x3442)<<(x3443+x3444));

	if (t36 != 18438072578801088512LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x3490 = -1LL;
	volatile int64_t x3492 = -1LL;
	int64_t t37 = 21254652686LL;

	t37 = ((x3489-x3490)<<(x3491+x3492));

	if (t37 != 484LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x3509 = -1;
	int8_t x3510 = INT8_MIN;
	int8_t x3512 = 0;

	t38 = ((x3509-x3510)<<(x3511+x3512));

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x3522 = INT16_MIN;
	uint32_t x3523 = UINT32_MAX;
	int32_t t39 = 0;

	t39 = ((x3521-x3522)<<(x3523+x3524));

	if (t39 != 134426624) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x3553 = -1;
	int16_t x3554 = INT16_MIN;
	uint8_t x3555 = 9U;
	uint64_t x3556 = UINT64_MAX;
	int32_t t40 = 227;

	t40 = ((x3553-x3554)<<(x3555+x3556));

	if (t40 != 8388352) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x3589 = UINT32_MAX;
	static int8_t x3590 = INT8_MIN;
	static uint64_t x3591 = UINT64_MAX;
	uint32_t t41 = 504239U;

	t41 = ((x3589-x3590)<<(x3591+x3592));

	if (t41 != 508U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x3725 = 3U;
	static uint32_t x3726 = 43U;
	int16_t x3728 = 1;
	uint32_t t42 = 291U;

	t42 = ((x3725-x3726)<<(x3727+x3728));

	if (t42 != 4273995776U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x3773 = UINT32_MAX;
	static uint64_t x3774 = 333699330LLU;
	int32_t x3775 = 7;
	int64_t x3776 = -1LL;
	volatile uint64_t t43 = 552758353539015LLU;

	t43 = ((x3773-x3774)<<(x3775+x3776));

	if (t43 != 253521149760LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x3894 = 0U;
	int64_t x3895 = 1LL;
	int32_t x3896 = -1;

	t44 = ((x3893-x3894)<<(x3895+x3896));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x3985 = UINT32_MAX;
	int16_t x3988 = 1;
	volatile uint32_t t45 = 7U;

	t45 = ((x3985-x3986)<<(x3987+x3988));

	if (t45 != 4294967243U) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x4057 = 140610;
	int64_t x4058 = -64332539LL;
	volatile int8_t x4060 = 1;

	t46 = ((x4057-x4058)<<(x4059+x4060));

	if (t46 != 64473149LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x4237 = INT8_MIN;
	uint8_t x4239 = 3U;
	static int64_t x4240 = -1LL;
	uint64_t t47 = 1722115681068LLU;

	t47 = ((x4237-x4238)<<(x4239+x4240));

	if (t47 != 18446744073709547744LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x4254 = -484441717719014LL;
	int8_t x4255 = 0;
	uint8_t x4256 = 5U;

	t48 = ((x4253-x4254)<<(x4255+x4256));

	if (t48 != 15502134967008640LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x4289 = 328761878007LLU;
	int16_t x4290 = -2276;
	volatile int8_t x4291 = 43;
	static volatile int32_t x4292 = -23;
	uint64_t t49 = 684489LLU;

	t49 = ((x4289-x4290)<<(x4291+x4292));

	if (t49 != 344731817379627008LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x4293 = INT32_MAX;
	volatile uint64_t x4294 = 114280LLU;
	int32_t x4295 = 1;
	uint8_t x4296 = 3U;
	uint64_t t50 = 1725LLU;

	t50 = ((x4293-x4294)<<(x4295+x4296));

	if (t50 != 34357909872LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x4302 = 3U;
	uint8_t x4303 = 18U;
	uint64_t x4304 = UINT64_MAX;
	static int32_t t51 = 7;

	t51 = ((x4301-x4302)<<(x4303+x4304));

	if (t51 != 25296896) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x4342 = INT8_MIN;
	uint8_t x4343 = 6U;
	int64_t x4344 = -1LL;
	int64_t t52 = -11260091LL;

	t52 = ((x4341-x4342)<<(x4343+x4344));

	if (t52 != 4064LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x4561 = -26126LL;
	static volatile int32_t x4562 = INT32_MIN;
	uint8_t x4563 = 1U;
	int8_t x4564 = 1;

	t53 = ((x4561-x4562)<<(x4563+x4564));

	if (t53 != 8589830088LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x4742 = 1908482LLU;
	static uint8_t x4744 = 3U;

	t54 = ((x4741-x4742)<<(x4743+x4744));

	if (t54 != 18446744073701786616LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x4921 = UINT64_MAX;
	volatile int16_t x4922 = -1;
	uint8_t x4923 = 0U;
	uint16_t x4924 = 7U;
	uint64_t t55 = 24952897465207LLU;

	t55 = ((x4921-x4922)<<(x4923+x4924));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x5161 = INT8_MAX;
	static int8_t x5162 = 62;
	uint32_t x5163 = 2U;
	volatile int8_t x5164 = -1;
	volatile int32_t t56 = 162;

	t56 = ((x5161-x5162)<<(x5163+x5164));

	if (t56 != 130) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x5198 = 292973LL;
	int16_t x5199 = -1;
	uint8_t x5200 = 4U;
	volatile int64_t t57 = 39466443976LL;

	t57 = ((x5197-x5198)<<(x5199+x5200));

	if (t57 != 34357394576LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x5310 = -1LL;
	uint8_t x5311 = 3U;
	static volatile int8_t x5312 = 3;
	int64_t t58 = 54LL;

	t58 = ((x5309-x5310)<<(x5311+x5312));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x5477 = UINT64_MAX;
	static int32_t x5478 = INT32_MIN;
	static uint64_t x5479 = UINT64_MAX;
	static int8_t x5480 = 8;
	volatile uint64_t t59 = 23775307115276909LLU;

	t59 = ((x5477-x5478)<<(x5479+x5480));

	if (t59 != 274877906816LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x5617 = UINT32_MAX;
	int16_t x5618 = INT16_MIN;
	int32_t x5619 = -1;
	int8_t x5620 = 1;
	uint32_t t60 = 3397U;

	t60 = ((x5617-x5618)<<(x5619+x5620));

	if (t60 != 32767U) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x5662 = 141095118659LLU;
	volatile int64_t x5663 = -1LL;

	t61 = ((x5661-x5662)<<(x5663+x5664));

	if (t61 != 18446743932614432956LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x5701 = INT8_MAX;
	uint64_t x5702 = UINT64_MAX;
	uint64_t x5703 = 3LLU;
	volatile uint16_t x5704 = 7U;

	t62 = ((x5701-x5702)<<(x5703+x5704));

	if (t62 != 131072LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x5757 = 182299520LLU;
	uint8_t x5758 = 72U;
	volatile int64_t x5759 = -1LL;
	static int16_t x5760 = 30;
	volatile uint64_t t63 = 725088971306956163LLU;

	t63 = ((x5757-x5758)<<(x5759+x5760));

	if (t63 != 97871270904856576LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint32_t x6005 = 115539U;
	static uint8_t x6006 = 0U;
	int8_t x6008 = 1;
	static uint32_t t64 = 124U;

	t64 = ((x6005-x6006)<<(x6007+x6008));

	if (t64 != 115539U) { NG(); } else { ; }
	
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


    return 0;
}

