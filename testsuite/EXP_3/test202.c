#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x82 = 326999U;
uint64_t x83 = UINT64_MAX;
static volatile int16_t x84 = -1;
int8_t x451 = 13;
int32_t t3 = -1;
static int16_t x839 = INT16_MAX;
static volatile int16_t x973 = INT16_MIN;
uint32_t x1546 = UINT32_MAX;
uint8_t x1927 = 2U;
uint8_t x2013 = 2U;
uint64_t x2015 = UINT64_MAX;
int8_t x2080 = -21;
uint32_t t14 = 559790U;
uint32_t x2246 = 1014066130U;
uint64_t x2248 = UINT64_MAX;
int8_t x2318 = INT8_MIN;
volatile int32_t t17 = 238071937;
int8_t x2456 = -1;
int16_t x2532 = -1;
uint64_t x2578 = UINT64_MAX;
volatile uint64_t t22 = 10054626371433LLU;
int8_t x2784 = -1;
uint32_t t24 = 183U;
int16_t x3374 = 4;
int64_t t26 = 40655194346017197LL;
volatile int32_t x3570 = -28;
static int32_t x3572 = -1;
volatile int32_t t27 = -389967;
uint64_t x3582 = 631164363929LLU;
uint8_t x3623 = 3U;
uint32_t x3624 = UINT32_MAX;
volatile int8_t x3666 = INT8_MAX;
static uint8_t x3667 = 1U;
uint64_t t30 = 67345812499192LLU;
uint8_t x3673 = 103U;
volatile int32_t t31 = 2013;
static int32_t t32 = -1877;
uint32_t x3789 = 49793129U;
static volatile int32_t t36 = -3463;
int16_t x3953 = INT16_MIN;
int64_t x4108 = -1LL;
int16_t x4130 = -1;
int64_t t40 = -46LL;
uint8_t x4247 = 1U;
int16_t x4515 = INT16_MIN;
static uint32_t x4713 = 45323U;
uint32_t t46 = 198744U;
int8_t x4998 = -1;
static int32_t x4999 = -1;
volatile uint64_t x5000 = UINT64_MAX;
static uint16_t x5009 = 0U;
int64_t x5011 = -1LL;
uint64_t t49 = 337LLU;
int64_t x5120 = -1LL;
int16_t x5173 = -1;
static int64_t x5175 = INT64_MIN;
static int16_t x5239 = -1;
uint64_t t54 = 23992353968099816LLU;
volatile int32_t x5281 = INT32_MIN;
uint32_t x5354 = 2706U;
uint8_t x5357 = UINT8_MAX;
int64_t x5980 = -8LL;
int8_t x6130 = 32;
uint64_t x6226 = UINT64_MAX;
uint64_t x6228 = UINT64_MAX;
int32_t t71 = 117508127;
int8_t x6575 = 4;
uint16_t x6711 = 8U;
int32_t t76 = 119728;
int16_t x6868 = -7;
volatile uint64_t t78 = 264581783820168LLU;
static int64_t t80 = -6892001770LL;
int64_t x7216 = -1LL;
uint64_t t82 = 4LLU;
int8_t x7297 = 0;
volatile int32_t t84 = -279053;
volatile uint16_t x7539 = UINT16_MAX;
uint32_t x7597 = 2793U;
volatile uint64_t x7598 = 290660980428622211LLU;
static int8_t x7637 = -57;
static int32_t x7639 = -109;
volatile int8_t x7640 = INT8_MIN;
int32_t t87 = -14356025;
static int64_t x7876 = -1LL;
static volatile uint64_t t92 = 5413LLU;
static int32_t x8305 = 14026186;
static uint64_t x8514 = 10149600LLU;


void f0(void) {
	volatile uint32_t x9 = 22137U;
	uint64_t x10 = UINT64_MAX;
	int32_t x11 = INT32_MIN;
	int32_t x12 = INT32_MIN;
	static uint64_t t0 = 322156471LLU;

	t0 = ((x9*x10)>>(x11-x12));

	if (t0 != 18446744073709529479LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x81 = -1;
	uint32_t t1 = 182675405U;

	t1 = ((x81*x82)>>(x83-x84));

	if (t1 != 4294640297U) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x197 = 4209085657516LLU;
	uint16_t x198 = 2163U;
	volatile int16_t x199 = -1;
	static int16_t x200 = -1;
	volatile uint64_t t2 = 751221250310LLU;

	t2 = ((x197*x198)>>(x199-x200));

	if (t2 != 9104252277207108LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int32_t x449 = -1;
	int8_t x450 = INT8_MIN;
	int16_t x452 = -1;

	t3 = ((x449*x450)>>(x451-x452));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x729 = UINT8_MAX;
	int8_t x730 = INT8_MAX;
	static int8_t x731 = -1;
	int8_t x732 = -1;
	volatile int32_t t4 = 3;

	t4 = ((x729*x730)>>(x731-x732));

	if (t4 != 32385) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x837 = -1;
	uint64_t x838 = UINT64_MAX;
	int16_t x840 = INT16_MAX;
	volatile uint64_t t5 = 5334654812428792LLU;

	t5 = ((x837*x838)>>(x839-x840));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x949 = 1U;
	volatile int64_t x950 = 46841516LL;
	static int8_t x951 = INT8_MIN;
	static volatile int8_t x952 = INT8_MIN;
	int64_t t6 = 826LL;

	t6 = ((x949*x950)>>(x951-x952));

	if (t6 != 46841516LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x974 = INT16_MIN;
	volatile uint64_t x975 = UINT64_MAX;
	int16_t x976 = -1;
	int32_t t7 = -377273932;

	t7 = ((x973*x974)>>(x975-x976));

	if (t7 != 1073741824) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x1265 = -1;
	int8_t x1266 = -1;
	uint8_t x1267 = 13U;
	int8_t x1268 = 4;
	int32_t t8 = -1686259;

	t8 = ((x1265*x1266)>>(x1267-x1268));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x1413 = 241629LLU;
	int8_t x1414 = INT8_MAX;
	volatile uint8_t x1415 = 56U;
	volatile int8_t x1416 = 0;
	volatile uint64_t t9 = 90770383LLU;

	t9 = ((x1413*x1414)>>(x1415-x1416));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x1545 = INT16_MIN;
	int16_t x1547 = 4;
	uint8_t x1548 = 0U;
	static uint32_t t10 = 81U;

	t10 = ((x1545*x1546)>>(x1547-x1548));

	if (t10 != 2048U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x1901 = 1504421LL;
	int8_t x1902 = INT8_MAX;
	int32_t x1903 = -1;
	int8_t x1904 = -1;
	volatile int64_t t11 = 1865417LL;

	t11 = ((x1901*x1902)>>(x1903-x1904));

	if (t11 != 191061467LL) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x1925 = -1;
	volatile int8_t x1926 = -25;
	volatile int64_t x1928 = -1LL;
	int32_t t12 = -51220;

	t12 = ((x1925*x1926)>>(x1927-x1928));

	if (t12 != 3) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x2014 = UINT32_MAX;
	int64_t x2016 = -1LL;
	uint32_t t13 = 1437496940U;

	t13 = ((x2013*x2014)>>(x2015-x2016));

	if (t13 != 4294967294U) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x2077 = 52041705U;
	volatile int16_t x2078 = 5;
	int16_t x2079 = -1;

	t14 = ((x2077*x2078)>>(x2079-x2080));

	if (t14 != 248U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x2157 = 0;
	uint64_t x2158 = UINT64_MAX;
	uint64_t x2159 = 0LLU;
	volatile int32_t x2160 = -1;
	volatile uint64_t t15 = 1920058644665LLU;

	t15 = ((x2157*x2158)>>(x2159-x2160));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x2245 = -1;
	uint8_t x2247 = 9U;
	volatile uint32_t t16 = 11124136U;

	t16 = ((x2245*x2246)>>(x2247-x2248));

	if (t16 != 3204005U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x2317 = -1;
	int32_t x2319 = 0;
	int8_t x2320 = -1;

	t17 = ((x2317*x2318)>>(x2319-x2320));

	if (t17 != 64) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x2425 = -1;
	int8_t x2426 = INT8_MIN;
	int32_t x2427 = -1;
	int32_t x2428 = -1;
	volatile int32_t t18 = 457354;

	t18 = ((x2425*x2426)>>(x2427-x2428));

	if (t18 != 128) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x2453 = 2347460U;
	int8_t x2454 = INT8_MIN;
	uint8_t x2455 = 0U;
	volatile uint32_t t19 = 56153404U;

	t19 = ((x2453*x2454)>>(x2455-x2456));

	if (t19 != 1997246208U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x2529 = INT8_MAX;
	uint32_t x2530 = UINT32_MAX;
	int8_t x2531 = -1;
	volatile uint32_t t20 = 204455U;

	t20 = ((x2529*x2530)>>(x2531-x2532));

	if (t20 != 4294967169U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x2577 = INT8_MIN;
	static int16_t x2579 = -1;
	static int32_t x2580 = -1;
	uint64_t t21 = 121563989623386LLU;

	t21 = ((x2577*x2578)>>(x2579-x2580));

	if (t21 != 128LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x2693 = 75U;
	volatile uint64_t x2694 = 563875168LLU;
	uint64_t x2695 = 20LLU;
	volatile uint64_t x2696 = UINT64_MAX;

	t22 = ((x2693*x2694)>>(x2695-x2696));

	if (t22 != 20165LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x2781 = 6153407;
	volatile uint8_t x2782 = 3U;
	volatile uint32_t x2783 = 0U;
	static volatile int32_t t23 = -100183;

	t23 = ((x2781*x2782)>>(x2783-x2784));

	if (t23 != 9230110) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x3125 = -1706;
	uint32_t x3126 = 57619U;
	int16_t x3127 = 11;
	int8_t x3128 = 1;

	t24 = ((x3125*x3126)>>(x3127-x3128));

	if (t24 != 4098309U) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x3145 = 15620LLU;
	static volatile int8_t x3146 = INT8_MIN;
	uint32_t x3147 = 52U;
	int64_t x3148 = -1LL;
	static uint64_t t25 = 1929914LLU;

	t25 = ((x3145*x3146)>>(x3147-x3148));

	if (t25 != 2047LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x3373 = 62212857120627753LL;
	volatile int8_t x3375 = 3;
	uint64_t x3376 = UINT64_MAX;

	t26 = ((x3373*x3374)>>(x3375-x3376));

	if (t26 != 15553214280156938LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x3569 = 0;
	static uint32_t x3571 = UINT32_MAX;

	t27 = ((x3569*x3570)>>(x3571-x3572));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x3581 = -1;
	volatile uint8_t x3583 = 0U;
	uint32_t x3584 = UINT32_MAX;
	uint64_t t28 = 3LLU;

	t28 = ((x3581*x3582)>>(x3583-x3584));

	if (t28 != 9223371721272593843LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x3621 = 0;
	int32_t x3622 = INT32_MAX;
	volatile int32_t t29 = 27066;

	t29 = ((x3621*x3622)>>(x3623-x3624));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x3665 = 20765200774LLU;
	uint32_t x3668 = 0U;

	t30 = ((x3665*x3666)>>(x3667-x3668));

	if (t30 != 1318590249149LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x3674 = 10;
	static uint8_t x3675 = 2U;
	volatile int64_t x3676 = -1LL;

	t31 = ((x3673*x3674)>>(x3675-x3676));

	if (t31 != 128) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x3753 = -1;
	int8_t x3754 = -2;
	uint16_t x3755 = 25U;
	volatile uint8_t x3756 = 20U;

	t32 = ((x3753*x3754)>>(x3755-x3756));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x3790 = 2U;
	uint64_t x3791 = UINT64_MAX;
	int64_t x3792 = -1LL;
	uint32_t t33 = 1826353U;

	t33 = ((x3789*x3790)>>(x3791-x3792));

	if (t33 != 99586258U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x3873 = INT8_MAX;
	uint8_t x3874 = 40U;
	uint8_t x3875 = 1U;
	volatile int64_t x3876 = -1LL;
	volatile int32_t t34 = 8406;

	t34 = ((x3873*x3874)>>(x3875-x3876));

	if (t34 != 1270) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x3893 = -1;
	int16_t x3894 = -1;
	volatile int8_t x3895 = 13;
	int16_t x3896 = -1;
	volatile int32_t t35 = 4;

	t35 = ((x3893*x3894)>>(x3895-x3896));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x3917 = 1;
	volatile uint16_t x3918 = 0U;
	int16_t x3919 = INT16_MIN;
	volatile int16_t x3920 = INT16_MIN;

	t36 = ((x3917*x3918)>>(x3919-x3920));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x3954 = 0U;
	volatile uint16_t x3955 = UINT16_MAX;
	uint16_t x3956 = UINT16_MAX;
	volatile int32_t t37 = 1045362;

	t37 = ((x3953*x3954)>>(x3955-x3956));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x3989 = INT16_MIN;
	int8_t x3990 = INT8_MIN;
	uint16_t x3991 = 27U;
	static int8_t x3992 = 23;
	static volatile int32_t t38 = 245;

	t38 = ((x3989*x3990)>>(x3991-x3992));

	if (t38 != 262144) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x4105 = UINT16_MAX;
	uint64_t x4106 = UINT64_MAX;
	uint16_t x4107 = 26U;
	uint64_t t39 = 603241LLU;

	t39 = ((x4105*x4106)>>(x4107-x4108));

	if (t39 != 137438953471LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x4129 = -444650395114134943LL;
	static int8_t x4131 = -1;
	int8_t x4132 = -1;

	t40 = ((x4129*x4130)>>(x4131-x4132));

	if (t40 != 444650395114134943LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x4221 = INT16_MIN;
	int32_t x4222 = -33;
	uint64_t x4223 = UINT64_MAX;
	int16_t x4224 = -32;
	volatile int32_t t41 = 3208;

	t41 = ((x4221*x4222)>>(x4223-x4224));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x4245 = 354560368205677760LLU;
	uint32_t x4246 = 990555709U;
	int16_t x4248 = -1;
	static volatile uint64_t t42 = 639864869807706368LLU;

	t42 = ((x4245*x4246)>>(x4247-x4248));

	if (t42 != 3046881789669496944LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x4513 = 0U;
	static volatile int16_t x4514 = INT16_MIN;
	static int16_t x4516 = INT16_MIN;
	volatile uint32_t t43 = 4515792U;

	t43 = ((x4513*x4514)>>(x4515-x4516));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x4593 = 1808U;
	volatile int8_t x4594 = INT8_MAX;
	uint16_t x4595 = 69U;
	uint8_t x4596 = 49U;
	volatile int32_t t44 = 8;

	t44 = ((x4593*x4594)>>(x4595-x4596));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x4714 = 1;
	int8_t x4715 = -1;
	static volatile uint64_t x4716 = UINT64_MAX;
	volatile uint32_t t45 = 255587486U;

	t45 = ((x4713*x4714)>>(x4715-x4716));

	if (t45 != 45323U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int32_t x4789 = INT32_MAX;
	uint32_t x4790 = UINT32_MAX;
	int64_t x4791 = INT64_MAX;
	int64_t x4792 = INT64_MAX;

	t46 = ((x4789*x4790)>>(x4791-x4792));

	if (t46 != 2147483649U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x4941 = -1;
	uint32_t x4942 = 17577U;
	int32_t x4943 = INT32_MAX;
	volatile int32_t x4944 = INT32_MAX;
	static uint32_t t47 = 15726648U;

	t47 = ((x4941*x4942)>>(x4943-x4944));

	if (t47 != 4294949719U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x4997 = 46421U;
	static volatile uint32_t t48 = 118U;

	t48 = ((x4997*x4998)>>(x4999-x5000));

	if (t48 != 4294920875U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x5010 = UINT64_MAX;
	volatile int64_t x5012 = -1LL;

	t49 = ((x5009*x5010)>>(x5011-x5012));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile uint8_t x5097 = 2U;
	uint64_t x5098 = 1LLU;
	uint32_t x5099 = 8U;
	uint8_t x5100 = 0U;
	volatile uint64_t t50 = 70749LLU;

	t50 = ((x5097*x5098)>>(x5099-x5100));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x5117 = 3400U;
	uint8_t x5118 = 87U;
	int32_t x5119 = -1;
	static int32_t t51 = 2027;

	t51 = ((x5117*x5118)>>(x5119-x5120));

	if (t51 != 295800) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x5174 = INT16_MIN;
	volatile int64_t x5176 = INT64_MIN;
	int32_t t52 = -55;

	t52 = ((x5173*x5174)>>(x5175-x5176));

	if (t52 != 32768) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x5205 = UINT64_MAX;
	static volatile uint64_t x5206 = 11016835973852LLU;
	static volatile int16_t x5207 = INT16_MIN;
	static int16_t x5208 = INT16_MIN;
	volatile uint64_t t53 = 22858488179LLU;

	t53 = ((x5205*x5206)>>(x5207-x5208));

	if (t53 != 18446733056873577764LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x5237 = 5568LLU;
	int16_t x5238 = -1;
	uint64_t x5240 = UINT64_MAX;

	t54 = ((x5237*x5238)>>(x5239-x5240));

	if (t54 != 18446744073709546048LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x5265 = -150305LL;
	int16_t x5266 = INT16_MIN;
	volatile uint16_t x5267 = 5U;
	int8_t x5268 = -1;
	volatile int64_t t55 = -45330666032LL;

	t55 = ((x5265*x5266)>>(x5267-x5268));

	if (t55 != 76956160LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x5277 = 2201026U;
	volatile int16_t x5278 = INT16_MAX;
	uint8_t x5279 = 0U;
	static uint64_t x5280 = UINT64_MAX;
	static uint32_t t56 = 1956634U;

	t56 = ((x5277*x5278)>>(x5279-x5280));

	if (t56 != 1700771103U) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x5282 = 16643990116LLU;
	volatile int16_t x5283 = 8;
	int16_t x5284 = -1;
	uint64_t t57 = 9159521348149595LLU;

	t57 = ((x5281*x5282)>>(x5283-x5284));

	if (t57 != 2247639718428672LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x5341 = INT16_MAX;
	int64_t x5342 = 63LL;
	uint32_t x5343 = 22U;
	static int32_t x5344 = -1;
	int64_t t58 = 28772640LL;

	t58 = ((x5341*x5342)>>(x5343-x5344));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x5353 = 54U;
	static int16_t x5355 = 3;
	int64_t x5356 = -1LL;
	volatile uint32_t t59 = 292361U;

	t59 = ((x5353*x5354)>>(x5355-x5356));

	if (t59 != 9132U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x5358 = 14U;
	uint32_t x5359 = UINT32_MAX;
	uint32_t x5360 = UINT32_MAX;
	static volatile int32_t t60 = 13;

	t60 = ((x5357*x5358)>>(x5359-x5360));

	if (t60 != 3570) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x5461 = 12435773253470808LLU;
	volatile int64_t x5462 = INT64_MAX;
	uint64_t x5463 = 27LLU;
	int64_t x5464 = -1LL;
	uint64_t t61 = 7188977201571016LLU;

	t61 = ((x5461*x5462)>>(x5463-x5464));

	if (t61 != 68673149870LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x5741 = -835;
	static int8_t x5742 = INT8_MIN;
	int64_t x5743 = INT64_MIN;
	int64_t x5744 = INT64_MIN;
	volatile int32_t t62 = -2;

	t62 = ((x5741*x5742)>>(x5743-x5744));

	if (t62 != 106880) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x5869 = 865134LLU;
	int32_t x5870 = INT32_MAX;
	int16_t x5871 = 18;
	int16_t x5872 = -28;
	volatile uint64_t t63 = 360369LLU;

	t63 = ((x5869*x5870)>>(x5871-x5872));

	if (t63 != 26LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x5977 = INT64_MIN;
	static volatile uint64_t x5978 = 28693010755423094LLU;
	int32_t x5979 = -1;
	uint64_t t64 = 130558342019105LLU;

	t64 = ((x5977*x5978)>>(x5979-x5980));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x6129 = 16124U;
	int8_t x6131 = 1;
	volatile int16_t x6132 = -1;
	static volatile int32_t t65 = 115;

	t65 = ((x6129*x6130)>>(x6131-x6132));

	if (t65 != 128992) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x6141 = 12450U;
	int32_t x6142 = INT32_MAX;
	volatile int8_t x6143 = -1;
	int16_t x6144 = -1;
	volatile uint32_t t66 = 32159U;

	t66 = ((x6141*x6142)>>(x6143-x6144));

	if (t66 != 4294954846U) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x6169 = 382681538;
	uint16_t x6170 = 5U;
	uint32_t x6171 = 0U;
	int8_t x6172 = -1;
	int32_t t67 = -32;

	t67 = ((x6169*x6170)>>(x6171-x6172));

	if (t67 != 956703845) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x6197 = -1LL;
	static int16_t x6198 = INT16_MIN;
	volatile uint8_t x6199 = 19U;
	static uint64_t x6200 = UINT64_MAX;
	volatile int64_t t68 = -969154589686LL;

	t68 = ((x6197*x6198)>>(x6199-x6200));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x6225 = 0LL;
	volatile int64_t x6227 = -1LL;
	uint64_t t69 = 343279301079LLU;

	t69 = ((x6225*x6226)>>(x6227-x6228));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x6249 = 51744906109244LLU;
	uint64_t x6250 = 200488621596533519LLU;
	int8_t x6251 = 0;
	static int64_t x6252 = -1LL;
	static volatile uint64_t t70 = 38191327590384134LLU;

	t70 = ((x6249*x6250)>>(x6251-x6252));

	if (t70 != 2433010755968136002LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x6253 = INT16_MAX;
	uint8_t x6254 = UINT8_MAX;
	uint8_t x6255 = 1U;
	uint32_t x6256 = UINT32_MAX;

	t71 = ((x6253*x6254)>>(x6255-x6256));

	if (t71 != 2088896) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x6289 = INT16_MIN;
	int32_t x6290 = -7;
	int8_t x6291 = -1;
	int8_t x6292 = -10;
	volatile int32_t t72 = 6;

	t72 = ((x6289*x6290)>>(x6291-x6292));

	if (t72 != 448) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x6497 = INT16_MAX;
	static volatile int16_t x6498 = 1849;
	uint16_t x6499 = 85U;
	int32_t x6500 = 60;
	volatile int32_t t73 = -5349;

	t73 = ((x6497*x6498)>>(x6499-x6500));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x6561 = -1;
	uint64_t x6562 = 160352674LLU;
	uint32_t x6563 = 12U;
	volatile uint32_t x6564 = 0U;
	volatile uint64_t t74 = 3150037971939081468LLU;

	t74 = ((x6561*x6562)>>(x6563-x6564));

	if (t74 != 4503599627331347LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x6573 = 83261;
	uint8_t x6574 = UINT8_MAX;
	int8_t x6576 = -1;
	int32_t t75 = -114;

	t75 = ((x6573*x6574)>>(x6575-x6576));

	if (t75 != 663486) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x6709 = UINT8_MAX;
	int8_t x6710 = 0;
	int32_t x6712 = -1;

	t76 = ((x6709*x6710)>>(x6711-x6712));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x6853 = 129U;
	int16_t x6854 = INT16_MIN;
	static int16_t x6855 = INT16_MAX;
	int16_t x6856 = INT16_MAX;
	uint32_t t77 = 389009U;

	t77 = ((x6853*x6854)>>(x6855-x6856));

	if (t77 != 4290740224U) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x6865 = -229LL;
	volatile uint64_t x6866 = UINT64_MAX;
	uint32_t x6867 = UINT32_MAX;

	t78 = ((x6865*x6866)>>(x6867-x6868));

	if (t78 != 3LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x6953 = UINT8_MAX;
	uint32_t x6954 = UINT32_MAX;
	uint8_t x6955 = 3U;
	uint32_t x6956 = UINT32_MAX;
	static uint32_t t79 = 1091695U;

	t79 = ((x6953*x6954)>>(x6955-x6956));

	if (t79 != 268435440U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x6981 = INT16_MIN;
	int64_t x6982 = -524088461601LL;
	int16_t x6983 = INT16_MIN;
	int16_t x6984 = INT16_MIN;

	t80 = ((x6981*x6982)>>(x6983-x6984));

	if (t80 != 17173330709741568LL) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x7137 = INT8_MIN;
	volatile int8_t x7138 = INT8_MIN;
	volatile uint64_t x7139 = UINT64_MAX;
	int32_t x7140 = -1;
	volatile int32_t t81 = -1;

	t81 = ((x7137*x7138)>>(x7139-x7140));

	if (t81 != 16384) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x7213 = 519622236827178337LLU;
	int8_t x7214 = INT8_MIN;
	int64_t x7215 = 1LL;

	t82 = ((x7213*x7214)>>(x7215-x7216));

	if (t82 != 1818832495239844832LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x7265 = -3365LL;
	static int64_t x7266 = -1LL;
	static uint32_t x7267 = 0U;
	static int16_t x7268 = -1;
	volatile int64_t t83 = -100026740257795716LL;

	t83 = ((x7265*x7266)>>(x7267-x7268));

	if (t83 != 1682LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x7298 = -4;
	uint32_t x7299 = UINT32_MAX;
	int8_t x7300 = -2;

	t84 = ((x7297*x7298)>>(x7299-x7300));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x7537 = 688LL;
	static uint32_t x7538 = UINT32_MAX;
	uint16_t x7540 = UINT16_MAX;
	volatile int64_t t85 = -561839442LL;

	t85 = ((x7537*x7538)>>(x7539-x7540));

	if (t85 != 2954937498960LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x7599 = INT32_MIN;
	static int32_t x7600 = INT32_MIN;
	volatile uint64_t t86 = 0LLU;

	t86 = ((x7597*x7598)>>(x7599-x7600));

	if (t86 != 159379093921564219LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x7638 = INT8_MIN;

	t87 = ((x7637*x7638)>>(x7639-x7640));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint16_t x7641 = 820U;
	int64_t x7642 = 320482342409LL;
	int64_t x7643 = INT64_MAX;
	int64_t x7644 = INT64_MAX;
	volatile int64_t t88 = -2218903327394487LL;

	t88 = ((x7641*x7642)>>(x7643-x7644));

	if (t88 != 262795520775380LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x7685 = 1U;
	static volatile uint16_t x7686 = UINT16_MAX;
	uint8_t x7687 = 23U;
	uint64_t x7688 = UINT64_MAX;
	static int32_t t89 = 352;

	t89 = ((x7685*x7686)>>(x7687-x7688));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x7749 = 14U;
	static uint8_t x7750 = 7U;
	int16_t x7751 = 1;
	static int32_t x7752 = -1;
	static int32_t t90 = -1898109;

	t90 = ((x7749*x7750)>>(x7751-x7752));

	if (t90 != 24) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x7873 = UINT8_MAX;
	uint16_t x7874 = UINT16_MAX;
	static int8_t x7875 = 0;
	int32_t t91 = -116908311;

	t91 = ((x7873*x7874)>>(x7875-x7876));

	if (t91 != 8355712) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x7909 = 1597466277396118LLU;
	int32_t x7910 = 3;
	uint8_t x7911 = UINT8_MAX;
	uint8_t x7912 = UINT8_MAX;

	t92 = ((x7909*x7910)>>(x7911-x7912));

	if (t92 != 4792398832188354LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x7973 = 2U;
	uint32_t x7974 = 12255474U;
	static volatile uint32_t x7975 = UINT32_MAX;
	int8_t x7976 = -1;
	static uint32_t t93 = 16U;

	t93 = ((x7973*x7974)>>(x7975-x7976));

	if (t93 != 24510948U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x7997 = 3491677570129LL;
	uint32_t x7998 = 62U;
	uint16_t x7999 = 3U;
	uint64_t x8000 = UINT64_MAX;
	static volatile int64_t t94 = 1208408040793LL;

	t94 = ((x7997*x7998)>>(x7999-x8000));

	if (t94 != 13530250584249LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x8306 = 836543754617LLU;
	uint16_t x8307 = 1U;
	static int16_t x8308 = -1;
	static volatile uint64_t t95 = 2582256352559LLU;

	t95 = ((x8305*x8306)>>(x8307-x8308));

	if (t95 != 2933379574849100190LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x8329 = -3;
	volatile int64_t x8330 = -1LL;
	uint8_t x8331 = 13U;
	int64_t x8332 = -1LL;
	volatile int64_t t96 = 118646LL;

	t96 = ((x8329*x8330)>>(x8331-x8332));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x8453 = 129073740798075618LLU;
	int32_t x8454 = INT32_MIN;
	volatile int64_t x8455 = 1LL;
	int8_t x8456 = -2;
	uint64_t t97 = 4LLU;

	t97 = ((x8453*x8454)>>(x8455-x8456));

	if (t97 != 2134255225500860416LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x8457 = INT8_MIN;
	int8_t x8458 = -1;
	uint64_t x8459 = UINT64_MAX;
	int32_t x8460 = -1;
	volatile int32_t t98 = -252;

	t98 = ((x8457*x8458)>>(x8459-x8460));

	if (t98 != 128) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x8513 = INT16_MIN;
	static volatile int32_t x8515 = INT32_MIN;
	int32_t x8516 = INT32_MIN;
	static volatile uint64_t t99 = 289196033511911LLU;

	t99 = ((x8513*x8514)>>(x8515-x8516));

	if (t99 != 18446743741127458816LLU) { NG(); } else { ; }
	
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

