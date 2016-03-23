
/*
CF3

Copyright (c) 2015 ishiura-lab.

Released under the MIT license.  
https://github.com/ishiura-compiler/CF3/MIT-LICENSE.md
*/

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x1 = 1U;
volatile int32_t x2 = INT32_MIN;
int8_t x4 = INT8_MIN;
static int64_t x38 = INT64_MIN;
static uint16_t x40 = 1917U;
volatile int32_t t3 = 16508;
uint64_t x106 = UINT64_MAX;
volatile uint32_t x138 = 1U;
int8_t x166 = INT8_MAX;
static uint64_t t9 = 369678923565475LLU;
static int8_t x207 = INT8_MAX;
int32_t x208 = -3;
volatile uint32_t t11 = 1836728228U;
uint8_t x257 = 1U;
uint8_t x373 = 0U;
static uint16_t x394 = 255U;
uint8_t x419 = 3U;
volatile int32_t x446 = 3;
int64_t x522 = -16354882664LL;
int64_t x629 = 1155247590409LL;
int8_t x633 = INT8_MAX;
uint16_t x636 = 112U;
int32_t t26 = -1;
uint8_t x649 = UINT8_MAX;
volatile int32_t t28 = -750310;
volatile int8_t x658 = INT8_MIN;
static volatile int32_t t29 = 302;
uint8_t x689 = 1U;
int16_t x691 = -1;
static int32_t x699 = -1;
int32_t t31 = 3703;
uint8_t x710 = UINT8_MAX;
static uint32_t x723 = 5U;
uint8_t x726 = 14U;
uint64_t t34 = 1701127132LLU;
int8_t x749 = 7;
int8_t x750 = 0;
volatile int32_t x803 = -1;
int32_t x834 = -1;
static int32_t x847 = INT32_MIN;
static int16_t x848 = INT16_MIN;
int16_t x910 = -8;
uint16_t x930 = 0U;
int8_t x933 = 1;
static int16_t x934 = INT16_MIN;
volatile int16_t x936 = INT16_MAX;
int32_t x957 = 501;
int64_t x958 = INT64_MIN;
volatile int16_t x989 = 111;
uint64_t t46 = 64LLU;
int8_t x1036 = INT8_MAX;
uint8_t x1065 = UINT8_MAX;
int64_t x1067 = 899468055905084LL;
uint32_t x1090 = UINT32_MAX;
int8_t x1092 = INT8_MIN;
uint64_t t50 = 11419LLU;
volatile int64_t x1098 = -36940476236LL;
volatile uint64_t t53 = 5256405334132LLU;
volatile int16_t x1199 = -1;
int16_t x1213 = INT16_MAX;
static uint8_t x1323 = 4U;
volatile int32_t t60 = -19;
static volatile int32_t t62 = -275621331;
uint8_t x1443 = 2U;
uint8_t x1472 = 2U;
static uint16_t x1477 = UINT16_MAX;
uint32_t t66 = 11453007U;
int16_t x1584 = INT16_MIN;
int16_t x1702 = INT16_MIN;
volatile int32_t t71 = -1028716114;
int32_t x1711 = -1;
uint64_t t72 = 235LLU;
static uint8_t x1721 = 3U;
uint64_t x1724 = UINT64_MAX;
int32_t x1750 = 1;
static uint8_t x1751 = 2U;
uint8_t x1766 = 3U;
int32_t x1768 = INT32_MIN;
int16_t x1893 = INT16_MAX;
uint32_t t81 = 10020108U;
int32_t x2035 = 520;
uint64_t t82 = 28020848056919360LLU;
static int8_t x2063 = 1;
int64_t x2090 = 1LL;
uint32_t x2102 = UINT32_MAX;
static int16_t x2139 = INT16_MIN;
uint64_t x2165 = 1204LLU;
int8_t x2166 = 0;
uint8_t x2185 = 16U;
int64_t x2222 = 8LL;
uint16_t x2223 = 31U;
uint64_t t91 = 43286909358099LLU;
static int32_t t93 = 129650;
static volatile uint8_t x2260 = UINT8_MAX;
uint64_t x2268 = UINT64_MAX;
uint32_t x2329 = UINT32_MAX;
int64_t x2330 = INT64_MIN;
int32_t x2384 = -748;
static int32_t t99 = -16;
static uint64_t x2397 = 1217158425LLU;
uint64_t t100 = 127LLU;
uint64_t x2414 = 25LLU;
int32_t x2553 = INT32_MAX;
volatile uint32_t x2556 = UINT32_MAX;
uint32_t t105 = 2009U;
uint64_t x2608 = UINT64_MAX;
uint64_t t107 = 1224576LLU;
int32_t t108 = -198815;
static volatile int32_t t109 = -341730118;
int8_t x2708 = -1;
volatile int8_t x2715 = -1;
int8_t x2793 = INT8_MAX;
volatile int64_t x2794 = 2LL;
volatile uint64_t x2795 = 1797998195084LLU;
uint8_t x2796 = 54U;
uint32_t x2813 = UINT32_MAX;
static uint8_t x2814 = UINT8_MAX;
volatile int8_t x2827 = -1;
uint32_t x2948 = 251068U;
uint16_t x2983 = 4U;
uint8_t x3158 = 26U;
int64_t x3159 = 626030087LL;
int8_t x3160 = 3;
volatile uint8_t x3238 = UINT8_MAX;
int64_t x3250 = INT64_MAX;
int8_t x3251 = 7;
volatile uint64_t t128 = 1433444127LLU;
int32_t x3301 = INT32_MAX;
static int16_t x3304 = -1;
uint32_t x3353 = UINT32_MAX;
uint32_t t132 = 2278369U;
int8_t x3373 = INT8_MAX;
uint64_t x3421 = 1316731474500348LLU;
static volatile uint64_t t136 = 7647812339558LLU;
int8_t x3491 = 1;
volatile int32_t t138 = 51;
int16_t x3515 = 3600;
static volatile uint32_t t139 = 1686039893U;
int32_t x3611 = 1;
uint64_t x3617 = 27619029085367LLU;
int64_t x3618 = 1LL;
int16_t x3621 = 0;
int64_t x3646 = 0LL;
int16_t x3647 = -1;
uint64_t x3669 = UINT64_MAX;
static uint8_t x3830 = UINT8_MAX;
static int32_t x3831 = -1;
static int16_t x3907 = INT16_MIN;
static int16_t x3924 = -48;
uint64_t x3933 = 151LLU;
int16_t x3936 = INT16_MAX;
volatile int16_t x3982 = -1;
volatile int32_t x4046 = 63791251;
int32_t t155 = -2;
static int8_t x4063 = -1;
int32_t x4097 = 2993948;
int16_t x4189 = INT16_MAX;
int8_t x4276 = INT8_MIN;
uint8_t x4333 = UINT8_MAX;
volatile int64_t x4335 = -1LL;
uint64_t t165 = 1578917977150354738LLU;
uint16_t x4349 = 13U;
uint8_t x4350 = 15U;
uint8_t x4353 = UINT8_MAX;
int16_t x4354 = INT16_MIN;
uint64_t x4374 = 1410417LLU;
uint16_t x4390 = 2U;
static int8_t x4391 = INT8_MIN;
volatile uint8_t x4431 = 3U;
uint8_t x4485 = 12U;
uint16_t x4488 = 377U;
int16_t x4540 = 5;
volatile int32_t t175 = 22916;
uint32_t x4641 = UINT32_MAX;
static int64_t x4751 = INT64_MAX;
int64_t x4754 = INT64_MIN;
static int16_t x4762 = INT16_MIN;
int16_t x4767 = -1;
int32_t t182 = INT32_MIN;
uint64_t t183 = 4701775LLU;
static uint32_t x4802 = UINT32_MAX;
uint32_t x4830 = UINT32_MAX;
uint64_t t187 = 66846367LLU;
static volatile int64_t t188 = 252881286334935LL;
static volatile uint16_t x4933 = UINT16_MAX;
static volatile int32_t x4934 = INT32_MAX;
static uint64_t x4942 = 47LLU;
uint16_t x5034 = 255U;
static int8_t x5085 = 3;
uint64_t x5091 = 36LLU;
int8_t x5105 = 30;
int32_t t199 = 546781371;


void f0(void) {
    	uint8_t x3 = 2U;
	volatile int32_t t0 = -1;

    t0 = ((x1<<(x2%x3))*x4);

    if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x29 = 82U;
	int16_t x30 = -1;
	int8_t x31 = -1;
	int16_t x32 = INT16_MIN;
	int32_t t1 = -232444210;

    t1 = ((x29<<(x30%x31))*x32);

    if (t1 != -2686976) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x37 = 36662U;
	int32_t x39 = INT32_MIN;
	uint32_t t2 = 5U;

    t2 = ((x37<<(x38%x39))*x40);

    if (t2 != 70281054U) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile uint16_t x73 = UINT16_MAX;
	uint8_t x74 = 13U;
	int32_t x75 = -1;
	volatile int16_t x76 = INT16_MIN;

    t3 = ((x73<<(x74%x75))*x76);

    if (t3 != -2147450880) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x93 = 111U;
	int16_t x94 = INT16_MIN;
	int16_t x95 = INT16_MIN;
	int64_t x96 = -1LL;
	volatile int64_t t4 = -3951782762730323177LL;

    t4 = ((x93<<(x94%x95))*x96);

    if (t4 != -111LL) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x105 = INT8_MAX;
	uint8_t x107 = 24U;
	int32_t x108 = -124;
	int32_t t5 = 216;

    t5 = ((x105<<(x106%x107))*x108);

    if (t5 != -516030464) { NG(); } else { ; }
	
}

void f6(void) {
    	uint64_t x113 = 197LLU;
	volatile uint32_t x114 = 2U;
	int16_t x115 = INT16_MAX;
	static int64_t x116 = INT64_MIN;
	static volatile uint64_t t6 = 109203LLU;

    t6 = ((x113<<(x114%x115))*x116);

    if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
    	volatile uint32_t x117 = UINT32_MAX;
	static volatile int16_t x118 = 0;
	uint32_t x119 = UINT32_MAX;
	int16_t x120 = INT16_MIN;
	static uint32_t t7 = 96291177U;

    t7 = ((x117<<(x118%x119))*x120);

    if (t7 != 32768U) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile uint16_t x137 = 0U;
	uint8_t x139 = UINT8_MAX;
	int32_t x140 = -3435;
	static int32_t t8 = 15;

    t8 = ((x137<<(x138%x139))*x140);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint64_t x165 = UINT64_MAX;
	int8_t x167 = -1;
	int16_t x168 = INT16_MIN;

    t9 = ((x165<<(x166%x167))*x168);

    if (t9 != 32768LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	static uint64_t x201 = 13586625834LLU;
	volatile int32_t x202 = INT32_MAX;
	int32_t x203 = INT32_MAX;
	int8_t x204 = INT8_MIN;
	uint64_t t10 = 1191730247436459386LLU;

    t10 = ((x201<<(x202%x203))*x204);

    if (t10 != 18446742334621444864LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	uint32_t x205 = UINT32_MAX;
	uint64_t x206 = UINT64_MAX;

    t11 = ((x205<<(x206%x207))*x208);

    if (t11 != 6U) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x241 = UINT32_MAX;
	int16_t x242 = INT16_MIN;
	int32_t x243 = -1;
	int32_t x244 = -12436;
	volatile uint32_t t12 = 1263U;

    t12 = ((x241<<(x242%x243))*x244);

    if (t12 != 12436U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x258 = 0LL;
	int64_t x259 = 665530002807022253LL;
	int64_t x260 = -156966587561118LL;
	int64_t t13 = 164LL;

    t13 = ((x257<<(x258%x259))*x260);

    if (t13 != -156966587561118LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int32_t x293 = 3831;
	volatile int32_t x294 = -238;
	volatile int8_t x295 = 2;
	uint32_t x296 = 114667410U;
	uint32_t t14 = 1037749187U;

    t14 = ((x293<<(x294%x295))*x296);

    if (t14 != 1204183518U) { NG(); } else { ; }
	
}

void f15(void) {
    	static int32_t x297 = 2109;
	uint32_t x298 = 1U;
	uint16_t x299 = 30284U;
	int8_t x300 = INT8_MAX;
	int32_t t15 = 116;

    t15 = ((x297<<(x298%x299))*x300);

    if (t15 != 535686) { NG(); } else { ; }
	
}

void f16(void) {
    	static uint32_t x313 = 271841U;
	volatile int8_t x314 = INT8_MAX;
	int16_t x315 = -1;
	static volatile int32_t x316 = INT32_MIN;
	volatile uint32_t t16 = 3185005U;

    t16 = ((x313<<(x314%x315))*x316);

    if (t16 != 2147483648U) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile int8_t x321 = INT8_MAX;
	int32_t x322 = INT32_MAX;
	int8_t x323 = -1;
	uint16_t x324 = 3012U;
	static volatile int32_t t17 = -51290404;

    t17 = ((x321<<(x322%x323))*x324);

    if (t17 != 382524) { NG(); } else { ; }
	
}

void f18(void) {
    	static int16_t x325 = 341;
	volatile int64_t x326 = 131727484775931029LL;
	int16_t x327 = -1;
	volatile int64_t x328 = -1LL;
	volatile int64_t t18 = -84577649768711LL;

    t18 = ((x325<<(x326%x327))*x328);

    if (t18 != -341LL) { NG(); } else { ; }
	
}

void f19(void) {
    	int32_t x374 = -1;
	uint64_t x375 = UINT64_MAX;
	volatile int16_t x376 = -4682;
	volatile int32_t t19 = -4;

    t19 = ((x373<<(x374%x375))*x376);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint64_t x393 = UINT64_MAX;
	volatile int8_t x395 = -1;
	uint16_t x396 = UINT16_MAX;
	volatile uint64_t t20 = 816931577226466LLU;

    t20 = ((x393<<(x394%x395))*x396);

    if (t20 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x417 = UINT32_MAX;
	uint32_t x418 = 82U;
	uint8_t x420 = 6U;
	static volatile uint32_t t21 = 79400U;

    t21 = ((x417<<(x418%x419))*x420);

    if (t21 != 4294967284U) { NG(); } else { ; }
	
}

void f22(void) {
    	static volatile uint16_t x445 = UINT16_MAX;
	uint32_t x447 = 7925455U;
	static uint32_t x448 = UINT32_MAX;
	uint32_t t22 = 2U;

    t22 = ((x445<<(x446%x447))*x448);

    if (t22 != 4294443016U) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x457 = UINT16_MAX;
	volatile int16_t x458 = 2732;
	int64_t x459 = -1LL;
	uint32_t x460 = UINT32_MAX;
	volatile uint32_t t23 = 22U;

    t23 = ((x457<<(x458%x459))*x460);

    if (t23 != 4294901761U) { NG(); } else { ; }
	
}

void f24(void) {
    	int64_t x521 = 345870LL;
	int32_t x523 = -1;
	volatile int16_t x524 = -1;
	volatile int64_t t24 = 163546065197695LL;

    t24 = ((x521<<(x522%x523))*x524);

    if (t24 != -345870LL) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile int32_t x630 = INT32_MAX;
	int16_t x631 = INT16_MAX;
	int16_t x632 = -1;
	volatile int64_t t25 = 350553766155895580LL;

    t25 = ((x629<<(x630%x631))*x632);

    if (t25 != -2310495180818LL) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x634 = UINT16_MAX;
	int8_t x635 = -1;

    t26 = ((x633<<(x634%x635))*x636);

    if (t26 != 14224) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x650 = UINT32_MAX;
	uint32_t x651 = 8U;
	int8_t x652 = INT8_MAX;
	static int32_t t27 = 9;

    t27 = ((x649<<(x650%x651))*x652);

    if (t27 != 4145280) { NG(); } else { ; }
	
}

void f28(void) {
    	int16_t x653 = INT16_MAX;
	int32_t x654 = INT32_MAX;
	int8_t x655 = -1;
	int32_t x656 = -2219;

    t28 = ((x653<<(x654%x655))*x656);

    if (t28 != -72709973) { NG(); } else { ; }
	
}

void f29(void) {
    	int8_t x657 = INT8_MAX;
	volatile int8_t x659 = INT8_MIN;
	volatile int8_t x660 = INT8_MIN;

    t29 = ((x657<<(x658%x659))*x660);

    if (t29 != -16256) { NG(); } else { ; }
	
}

void f30(void) {
    	static uint8_t x690 = UINT8_MAX;
	uint8_t x692 = 29U;
	int32_t t30 = -703594;

    t30 = ((x689<<(x690%x691))*x692);

    if (t30 != 29) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile uint16_t x697 = 11825U;
	uint8_t x698 = UINT8_MAX;
	int8_t x700 = -1;

    t31 = ((x697<<(x698%x699))*x700);

    if (t31 != -11825) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x709 = INT8_MAX;
	int8_t x711 = 26;
	static uint32_t x712 = 1267U;
	uint32_t t32 = 118U;

    t32 = ((x709<<(x710%x711))*x712);

    if (t32 != 2443182080U) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x721 = 90U;
	volatile uint16_t x722 = 6U;
	int16_t x724 = INT16_MIN;
	int32_t t33 = -15462;

    t33 = ((x721<<(x722%x723))*x724);

    if (t33 != -5898240) { NG(); } else { ; }
	
}

void f34(void) {
    	uint64_t x725 = UINT64_MAX;
	static int8_t x727 = INT8_MIN;
	int8_t x728 = -1;

    t34 = ((x725<<(x726%x727))*x728);

    if (t34 != 16384LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x751 = INT16_MIN;
	int16_t x752 = 4580;
	static volatile int32_t t35 = -365600;

    t35 = ((x749<<(x750%x751))*x752);

    if (t35 != 32060) { NG(); } else { ; }
	
}

void f36(void) {
    	uint16_t x801 = UINT16_MAX;
	uint16_t x802 = 1U;
	static int16_t x804 = INT16_MIN;
	volatile int32_t t36 = 0;

    t36 = ((x801<<(x802%x803))*x804);

    if (t36 != -2147450880) { NG(); } else { ; }
	
}

void f37(void) {
    	uint32_t x805 = 14670562U;
	uint16_t x806 = 6U;
	int16_t x807 = -7;
	volatile int32_t x808 = INT32_MIN;
	uint32_t t37 = 13051U;

    t37 = ((x805<<(x806%x807))*x808);

    if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
    	uint32_t x833 = 3751345U;
	static uint64_t x835 = UINT64_MAX;
	uint16_t x836 = UINT16_MAX;
	volatile uint32_t t38 = 11173U;

    t38 = ((x833<<(x834%x835))*x836);

    if (t38 != 1031258703U) { NG(); } else { ; }
	
}

void f39(void) {
    	volatile uint8_t x845 = UINT8_MAX;
	int32_t x846 = INT32_MIN;
	static volatile int32_t t39 = -684870;

    t39 = ((x845<<(x846%x847))*x848);

    if (t39 != -8355840) { NG(); } else { ; }
	
}

void f40(void) {
    	int64_t x909 = INT64_MAX;
	int64_t x911 = -1LL;
	uint64_t x912 = UINT64_MAX;
	volatile uint64_t t40 = 65807136603LLU;

    t40 = ((x909<<(x910%x911))*x912);

    if (t40 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f41(void) {
    	uint64_t x929 = 16946438940LLU;
	uint8_t x931 = 59U;
	int32_t x932 = -1;
	static volatile uint64_t t41 = 1041902410LLU;

    t41 = ((x929<<(x930%x931))*x932);

    if (t41 != 18446744056763112676LLU) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x935 = -1;
	volatile int32_t t42 = 26812850;

    t42 = ((x933<<(x934%x935))*x936);

    if (t42 != 32767) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x941 = INT32_MAX;
	uint8_t x942 = UINT8_MAX;
	volatile uint8_t x943 = 3U;
	volatile uint64_t x944 = 71723LLU;
	uint64_t t43 = 1157924384LLU;

    t43 = ((x941<<(x942%x943))*x944);

    if (t43 != 154023969613781LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x959 = INT16_MIN;
	static uint8_t x960 = 87U;
	volatile int32_t t44 = -359223;

    t44 = ((x957<<(x958%x959))*x960);

    if (t44 != 43587) { NG(); } else { ; }
	
}

void f45(void) {
    	uint64_t x990 = UINT64_MAX;
	int8_t x991 = INT8_MAX;
	int64_t x992 = -46290606649982LL;
	volatile int64_t t45 = 3149442LL;

    t45 = ((x989<<(x990%x991))*x992);

    if (t45 != -10276514676296004LL) { NG(); } else { ; }
	
}

void f46(void) {
    	uint64_t x1009 = UINT64_MAX;
	int64_t x1010 = 3LL;
	uint64_t x1011 = 7655149829LLU;
	uint64_t x1012 = UINT64_MAX;

    t46 = ((x1009<<(x1010%x1011))*x1012);

    if (t46 != 8LLU) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x1033 = INT8_MAX;
	static uint32_t x1034 = 30630944U;
	static int8_t x1035 = 56;
	int32_t t47 = 1368;

    t47 = ((x1033<<(x1034%x1035))*x1036);

    if (t47 != 4129024) { NG(); } else { ; }
	
}

void f48(void) {
    	uint8_t x1066 = 0U;
	volatile uint8_t x1068 = 16U;
	static volatile int32_t t48 = -2;

    t48 = ((x1065<<(x1066%x1067))*x1068);

    if (t48 != 4080) { NG(); } else { ; }
	
}

void f49(void) {
    	uint8_t x1089 = 1U;
	volatile int32_t x1091 = INT32_MAX;
	volatile int32_t t49 = 6529;

    t49 = ((x1089<<(x1090%x1091))*x1092);

    if (t49 != -256) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile uint64_t x1093 = 1865461161785LLU;
	int16_t x1094 = 1334;
	int8_t x1095 = 1;
	static int16_t x1096 = INT16_MAX;

    t50 = ((x1093<<(x1094%x1095))*x1096);

    if (t50 != 61125565888209095LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int64_t x1097 = 26LL;
	int8_t x1099 = -1;
	static volatile uint16_t x1100 = 22U;
	static int64_t t51 = -21177036473LL;

    t51 = ((x1097<<(x1098%x1099))*x1100);

    if (t51 != 572LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x1117 = UINT32_MAX;
	uint16_t x1118 = 17683U;
	static int16_t x1119 = -1;
	int16_t x1120 = INT16_MIN;
	static uint32_t t52 = 49978889U;

    t52 = ((x1117<<(x1118%x1119))*x1120);

    if (t52 != 32768U) { NG(); } else { ; }
	
}

void f53(void) {
    	uint64_t x1121 = 81615165253742393LLU;
	volatile int8_t x1122 = 0;
	int64_t x1123 = 37083795708LL;
	int32_t x1124 = INT32_MIN;

    t53 = ((x1121<<(x1122%x1123))*x1124);

    if (t53 != 4999567759776940032LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile int8_t x1125 = 2;
	uint16_t x1126 = UINT16_MAX;
	volatile int8_t x1127 = 1;
	uint8_t x1128 = UINT8_MAX;
	volatile int32_t t54 = -71;

    t54 = ((x1125<<(x1126%x1127))*x1128);

    if (t54 != 510) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x1149 = UINT8_MAX;
	static int32_t x1150 = INT32_MIN;
	int8_t x1151 = INT8_MIN;
	uint32_t x1152 = 414636772U;
	volatile uint32_t t55 = 419148U;

    t55 = ((x1149<<(x1150%x1151))*x1152);

    if (t55 != 2653161756U) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x1197 = INT8_MAX;
	static int8_t x1198 = 55;
	int64_t x1200 = 36338583300LL;
	volatile int64_t t56 = 70132233998628476LL;

    t56 = ((x1197<<(x1198%x1199))*x1200);

    if (t56 != 4615000079100LL) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x1214 = -1;
	static uint32_t x1215 = UINT32_MAX;
	uint16_t x1216 = 9U;
	int32_t t57 = -53;

    t57 = ((x1213<<(x1214%x1215))*x1216);

    if (t57 != 294903) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x1305 = 5U;
	int64_t x1306 = INT64_MIN;
	int32_t x1307 = -1;
	uint32_t x1308 = 102U;
	uint32_t t58 = 20627U;

    t58 = ((x1305<<(x1306%x1307))*x1308);

    if (t58 != 510U) { NG(); } else { ; }
	
}

void f59(void) {
    	uint8_t x1321 = 85U;
	uint32_t x1322 = 16386112U;
	int16_t x1324 = 15;
	int32_t t59 = 415935723;

    t59 = ((x1321<<(x1322%x1323))*x1324);

    if (t59 != 1275) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x1325 = 156U;
	int32_t x1326 = 0;
	int32_t x1327 = INT32_MIN;
	uint8_t x1328 = 0U;

    t60 = ((x1325<<(x1326%x1327))*x1328);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	static int32_t x1365 = 0;
	volatile int32_t x1366 = INT32_MIN;
	int16_t x1367 = INT16_MIN;
	static uint16_t x1368 = 0U;
	int32_t t61 = 7478248;

    t61 = ((x1365<<(x1366%x1367))*x1368);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	uint16_t x1389 = 10433U;
	static uint16_t x1390 = UINT16_MAX;
	int16_t x1391 = -1;
	volatile int16_t x1392 = -1;

    t62 = ((x1389<<(x1390%x1391))*x1392);

    if (t62 != -10433) { NG(); } else { ; }
	
}

void f63(void) {
    	uint8_t x1441 = 3U;
	volatile int32_t x1442 = INT32_MAX;
	int32_t x1444 = -246303111;
	volatile int32_t t63 = -58372;

    t63 = ((x1441<<(x1442%x1443))*x1444);

    if (t63 != -1477818666) { NG(); } else { ; }
	
}

void f64(void) {
    	uint64_t x1469 = 13510LLU;
	static int32_t x1470 = INT32_MIN;
	int32_t x1471 = -1;
	uint64_t t64 = 1215LLU;

    t64 = ((x1469<<(x1470%x1471))*x1472);

    if (t64 != 27020LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x1478 = 94297320LLU;
	static uint8_t x1479 = 3U;
	volatile int16_t x1480 = 3;
	volatile int32_t t65 = -67;

    t65 = ((x1477<<(x1478%x1479))*x1480);

    if (t65 != 196605) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x1505 = 1513U;
	volatile int64_t x1506 = INT64_MIN;
	int32_t x1507 = INT32_MIN;
	volatile uint8_t x1508 = 1U;

    t66 = ((x1505<<(x1506%x1507))*x1508);

    if (t66 != 1513U) { NG(); } else { ; }
	
}

void f67(void) {
    	uint32_t x1549 = UINT32_MAX;
	uint8_t x1550 = 6U;
	int8_t x1551 = INT8_MIN;
	int64_t x1552 = -1LL;
	int64_t t67 = 1049LL;

    t67 = ((x1549<<(x1550%x1551))*x1552);

    if (t67 != -4294967232LL) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x1581 = UINT64_MAX;
	static int16_t x1582 = -1;
	static volatile uint64_t x1583 = UINT64_MAX;
	volatile uint64_t t68 = 976573411070868933LLU;

    t68 = ((x1581<<(x1582%x1583))*x1584);

    if (t68 != 32768LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x1585 = 1669LL;
	int8_t x1586 = INT8_MIN;
	int64_t x1587 = -4LL;
	static uint8_t x1588 = 64U;
	volatile int64_t t69 = 3587391254334LL;

    t69 = ((x1585<<(x1586%x1587))*x1588);

    if (t69 != 106816LL) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x1641 = 1847939216138295LL;
	int8_t x1642 = INT8_MAX;
	int8_t x1643 = -1;
	int32_t x1644 = -1;
	static volatile int64_t t70 = 108835807163208LL;

    t70 = ((x1641<<(x1642%x1643))*x1644);

    if (t70 != -1847939216138295LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x1701 = 87;
	int16_t x1703 = -1;
	uint16_t x1704 = UINT16_MAX;

    t71 = ((x1701<<(x1702%x1703))*x1704);

    if (t71 != 5701545) { NG(); } else { ; }
	
}

void f72(void) {
    	uint64_t x1709 = 883786507692799LLU;
	static uint16_t x1710 = UINT16_MAX;
	volatile int8_t x1712 = 23;

    t72 = ((x1709<<(x1710%x1711))*x1712);

    if (t72 != 20327089676934377LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	int16_t x1722 = INT16_MAX;
	volatile int8_t x1723 = -1;
	volatile uint64_t t73 = 12LLU;

    t73 = ((x1721<<(x1722%x1723))*x1724);

    if (t73 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x1737 = 2406;
	uint16_t x1738 = 7946U;
	static int16_t x1739 = -1;
	volatile uint64_t x1740 = 7271147684259LLU;
	volatile uint64_t t74 = 63LLU;

    t74 = ((x1737<<(x1738%x1739))*x1740);

    if (t74 != 17494381328327154LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	volatile uint64_t x1749 = UINT64_MAX;
	static volatile int32_t x1752 = 615478423;
	static volatile uint64_t t75 = 721LLU;

    t75 = ((x1749<<(x1750%x1751))*x1752);

    if (t75 != 18446744072478594770LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	uint64_t x1765 = 7265813149050984410LLU;
	int32_t x1767 = INT32_MIN;
	static uint64_t t76 = 328888LLU;

    t76 = ((x1765<<(x1766%x1767))*x1768);

    if (t76 != 6471849239226875904LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int8_t x1777 = INT8_MAX;
	volatile int8_t x1778 = -1;
	uint32_t x1779 = UINT32_MAX;
	static int16_t x1780 = -20;
	int32_t t77 = -1016802;

    t77 = ((x1777<<(x1778%x1779))*x1780);

    if (t77 != -2540) { NG(); } else { ; }
	
}

void f78(void) {
    	static uint32_t x1877 = UINT32_MAX;
	int64_t x1878 = 179947468669850923LL;
	int16_t x1879 = -1;
	static int16_t x1880 = INT16_MIN;
	volatile uint32_t t78 = 308U;

    t78 = ((x1877<<(x1878%x1879))*x1880);

    if (t78 != 32768U) { NG(); } else { ; }
	
}

void f79(void) {
    	int32_t x1894 = -1;
	static int64_t x1895 = -1LL;
	volatile int32_t x1896 = -18;
	static int32_t t79 = 28286;

    t79 = ((x1893<<(x1894%x1895))*x1896);

    if (t79 != -589806) { NG(); } else { ; }
	
}

void f80(void) {
    	static volatile uint64_t x1917 = 363098394LLU;
	uint32_t x1918 = 10U;
	static int16_t x1919 = -5424;
	int16_t x1920 = -28;
	volatile uint64_t t80 = 4125160696LLU;

    t80 = ((x1917<<(x1918%x1919))*x1920);

    if (t80 != 18446733662952398848LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x1921 = UINT32_MAX;
	uint32_t x1922 = 6U;
	uint16_t x1923 = 23U;
	volatile uint16_t x1924 = UINT16_MAX;

    t81 = ((x1921<<(x1922%x1923))*x1924);

    if (t81 != 4290773056U) { NG(); } else { ; }
	
}

void f82(void) {
    	uint64_t x2033 = UINT64_MAX;
	uint64_t x2034 = UINT64_MAX;
	int16_t x2036 = INT16_MIN;

    t82 = ((x2033<<(x2034%x2035))*x2036);

    if (t82 != 1073741824LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int16_t x2061 = 3659;
	int64_t x2062 = INT64_MIN;
	uint32_t x2064 = 11988723U;
	volatile uint32_t t83 = 17U;

    t83 = ((x2061<<(x2062%x2063))*x2064);

    if (t83 != 917064497U) { NG(); } else { ; }
	
}

void f84(void) {
    	int16_t x2089 = INT16_MAX;
	int16_t x2091 = INT16_MIN;
	uint64_t x2092 = 387014LLU;
	uint64_t t84 = 80375072778LLU;

    t84 = ((x2089<<(x2090%x2091))*x2092);

    if (t84 != 25362575476LLU) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint32_t x2101 = 6796461U;
	int8_t x2103 = INT8_MAX;
	uint8_t x2104 = 21U;
	volatile uint32_t t85 = 0U;

    t85 = ((x2101<<(x2102%x2103))*x2104);

    if (t85 != 3910696960U) { NG(); } else { ; }
	
}

void f86(void) {
    	volatile uint64_t x2109 = 1079958LLU;
	uint8_t x2110 = 0U;
	volatile uint64_t x2111 = 530641559LLU;
	uint16_t x2112 = UINT16_MAX;
	volatile uint64_t t86 = 190257860371534LLU;

    t86 = ((x2109<<(x2110%x2111))*x2112);

    if (t86 != 70775047530LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile uint16_t x2137 = 2136U;
	int16_t x2138 = INT16_MIN;
	int8_t x2140 = -34;
	int32_t t87 = -3067863;

    t87 = ((x2137<<(x2138%x2139))*x2140);

    if (t87 != -72624) { NG(); } else { ; }
	
}

void f88(void) {
    	uint16_t x2167 = 727U;
	volatile int32_t x2168 = INT32_MIN;
	static uint64_t t88 = 9026041004593LLU;

    t88 = ((x2165<<(x2166%x2167))*x2168);

    if (t88 != 18446741488139239424LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x2186 = INT32_MIN;
	static int8_t x2187 = INT8_MIN;
	static int16_t x2188 = -1;
	int32_t t89 = -2175819;

    t89 = ((x2185<<(x2186%x2187))*x2188);

    if (t89 != -16) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x2189 = 8U;
	int8_t x2190 = 1;
	uint64_t x2191 = UINT64_MAX;
	int64_t x2192 = 23994LL;
	volatile int64_t t90 = 0LL;

    t90 = ((x2189<<(x2190%x2191))*x2192);

    if (t90 != 383904LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x2221 = 1932141LL;
	uint64_t x2224 = 7LLU;

    t91 = ((x2221<<(x2222%x2223))*x2224);

    if (t91 != 3462396672LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint32_t x2233 = 171896U;
	int64_t x2234 = -1LL;
	int16_t x2235 = -1;
	uint32_t x2236 = 108U;
	uint32_t t92 = 58838656U;

    t92 = ((x2233<<(x2234%x2235))*x2236);

    if (t92 != 18564768U) { NG(); } else { ; }
	
}

void f93(void) {
    	uint16_t x2237 = 3U;
	int16_t x2238 = -1;
	int16_t x2239 = -1;
	uint8_t x2240 = UINT8_MAX;

    t93 = ((x2237<<(x2238%x2239))*x2240);

    if (t93 != 765) { NG(); } else { ; }
	
}

void f94(void) {
    	uint64_t x2249 = 59LLU;
	uint32_t x2250 = 2U;
	uint16_t x2251 = 13138U;
	int32_t x2252 = INT32_MIN;
	volatile uint64_t t94 = 952760250222318476LLU;

    t94 = ((x2249<<(x2250%x2251))*x2252);

    if (t94 != 18446743566903410688LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x2257 = UINT16_MAX;
	volatile uint16_t x2258 = 2U;
	static volatile int32_t x2259 = -1;
	int32_t t95 = 51;

    t95 = ((x2257<<(x2258%x2259))*x2260);

    if (t95 != 16711425) { NG(); } else { ; }
	
}

void f96(void) {
    	uint32_t x2265 = 18683073U;
	int8_t x2266 = -1;
	volatile uint32_t x2267 = 38U;
	volatile uint64_t t96 = 3382100722LLU;

    t96 = ((x2265<<(x2266%x2267))*x2268);

    if (t96 != 18446744073111693280LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	static uint64_t x2289 = 614353249LLU;
	static int8_t x2290 = 1;
	int64_t x2291 = INT64_MAX;
	int16_t x2292 = INT16_MIN;
	static uint64_t t97 = 1138156022981483LLU;

    t97 = ((x2289<<(x2290%x2291))*x2292);

    if (t97 != 18446703811455025152LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile int8_t x2331 = -1;
	static volatile uint64_t x2332 = 348612229331967103LLU;
	uint64_t t98 = 1030508646533LLU;

    t98 = ((x2329<<(x2330%x2331))*x2332);

    if (t98 != 13319914340268090241LLU) { NG(); } else { ; }
	
}

void f99(void) {
    	static int16_t x2381 = 136;
	static volatile int16_t x2382 = 63;
	volatile int8_t x2383 = 3;

    t99 = ((x2381<<(x2382%x2383))*x2384);

    if (t99 != -101728) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x2398 = -1;
	static int16_t x2399 = -1;
	uint32_t x2400 = 16U;

    t100 = ((x2397<<(x2398%x2399))*x2400);

    if (t100 != 19474534800LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile uint8_t x2413 = 0U;
	int32_t x2415 = -12762599;
	int32_t x2416 = 2374216;
	volatile int32_t t101 = -27866262;

    t101 = ((x2413<<(x2414%x2415))*x2416);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	uint8_t x2429 = 3U;
	static uint64_t x2430 = 151LLU;
	static int32_t x2431 = 3;
	static volatile int8_t x2432 = INT8_MIN;
	static volatile int32_t t102 = 3;

    t102 = ((x2429<<(x2430%x2431))*x2432);

    if (t102 != -768) { NG(); } else { ; }
	
}

void f103(void) {
    	uint32_t x2437 = 13848066U;
	volatile uint64_t x2438 = 14LLU;
	int64_t x2439 = INT64_MAX;
	uint32_t x2440 = UINT32_MAX;
	static volatile uint32_t t103 = 977U;

    t103 = ((x2437<<(x2438%x2439))*x2440);

    if (t103 != 746553344U) { NG(); } else { ; }
	
}

void f104(void) {
    	int8_t x2554 = INT8_MAX;
	int8_t x2555 = -1;
	uint32_t t104 = 295572U;

    t104 = ((x2553<<(x2554%x2555))*x2556);

    if (t104 != 2147483649U) { NG(); } else { ; }
	
}

void f105(void) {
    	static uint32_t x2577 = 67827U;
	static int8_t x2578 = 1;
	volatile int8_t x2579 = INT8_MAX;
	uint16_t x2580 = UINT16_MAX;

    t105 = ((x2577<<(x2578%x2579))*x2580);

    if (t105 != 300150298U) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x2597 = 775LLU;
	static int64_t x2598 = INT64_MIN;
	int64_t x2599 = INT64_MIN;
	uint16_t x2600 = 31170U;
	static volatile uint64_t t106 = 51941807868LLU;

    t106 = ((x2597<<(x2598%x2599))*x2600);

    if (t106 != 24156750LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	uint32_t x2605 = 3U;
	int64_t x2606 = INT64_MIN;
	int8_t x2607 = INT8_MIN;

    t107 = ((x2605<<(x2606%x2607))*x2608);

    if (t107 != 18446744073709551613LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static volatile int8_t x2633 = INT8_MAX;
	uint16_t x2634 = 92U;
	static int32_t x2635 = -1;
	uint8_t x2636 = 1U;

    t108 = ((x2633<<(x2634%x2635))*x2636);

    if (t108 != 127) { NG(); } else { ; }
	
}

void f109(void) {
    	uint8_t x2653 = UINT8_MAX;
	int16_t x2654 = INT16_MIN;
	int16_t x2655 = INT16_MIN;
	int8_t x2656 = -1;

    t109 = ((x2653<<(x2654%x2655))*x2656);

    if (t109 != -255) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x2665 = INT16_MAX;
	uint64_t x2666 = UINT64_MAX;
	uint8_t x2667 = 7U;
	volatile int8_t x2668 = INT8_MAX;
	volatile int32_t t110 = 0;

    t110 = ((x2665<<(x2666%x2667))*x2668);

    if (t110 != 8322818) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x2705 = UINT8_MAX;
	static volatile int16_t x2706 = INT16_MAX;
	uint8_t x2707 = 5U;
	int32_t t111 = -119;

    t111 = ((x2705<<(x2706%x2707))*x2708);

    if (t111 != -1020) { NG(); } else { ; }
	
}

void f112(void) {
    	uint64_t x2713 = 5755764267307LLU;
	volatile int64_t x2714 = -67044401384475LL;
	volatile uint32_t x2716 = UINT32_MAX;
	uint64_t t112 = 1825796199848462LLU;

    t112 = ((x2713<<(x2714%x2715))*x2716);

    if (t112 != 2182227042403559125LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t t113 = 9886569;

    t113 = ((x2793<<(x2794%x2795))*x2796);

    if (t113 != 27432) { NG(); } else { ; }
	
}

void f114(void) {
    	int64_t x2801 = 7545313251LL;
	int64_t x2802 = INT64_MIN;
	int32_t x2803 = INT32_MIN;
	volatile int8_t x2804 = INT8_MIN;
	static int64_t t114 = -11384275149325LL;

    t114 = ((x2801<<(x2802%x2803))*x2804);

    if (t114 != -965800096128LL) { NG(); } else { ; }
	
}

void f115(void) {
    	int32_t x2815 = -1;
	int8_t x2816 = -1;
	uint32_t t115 = 6851891U;

    t115 = ((x2813<<(x2814%x2815))*x2816);

    if (t115 != 1U) { NG(); } else { ; }
	
}

void f116(void) {
    	static volatile uint8_t x2825 = UINT8_MAX;
	int8_t x2826 = INT8_MAX;
	uint64_t x2828 = 0LLU;
	static uint64_t t116 = 50LLU;

    t116 = ((x2825<<(x2826%x2827))*x2828);

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x2841 = INT8_MAX;
	static uint64_t x2842 = UINT64_MAX;
	static int16_t x2843 = INT16_MAX;
	uint32_t x2844 = 407158U;
	volatile uint32_t t117 = 17U;

    t117 = ((x2841<<(x2842%x2843))*x2844);

    if (t117 != 2185560064U) { NG(); } else { ; }
	
}

void f118(void) {
    	volatile uint16_t x2865 = UINT16_MAX;
	volatile uint32_t x2866 = UINT32_MAX;
	static uint8_t x2867 = UINT8_MAX;
	int16_t x2868 = -1533;
	volatile int32_t t118 = -1029153694;

    t118 = ((x2865<<(x2866%x2867))*x2868);

    if (t118 != -100465155) { NG(); } else { ; }
	
}

void f119(void) {
    	int8_t x2945 = 20;
	int64_t x2946 = INT64_MAX;
	static int16_t x2947 = -1;
	uint32_t t119 = 159243U;

    t119 = ((x2945<<(x2946%x2947))*x2948);

    if (t119 != 5021360U) { NG(); } else { ; }
	
}

void f120(void) {
    	uint8_t x2977 = 59U;
	volatile uint8_t x2978 = 0U;
	int8_t x2979 = INT8_MIN;
	static int8_t x2980 = INT8_MAX;
	int32_t t120 = -55167;

    t120 = ((x2977<<(x2978%x2979))*x2980);

    if (t120 != 7493) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x2981 = 104407LLU;
	int64_t x2982 = INT64_MIN;
	static int32_t x2984 = -1;
	uint64_t t121 = 7856038LLU;

    t121 = ((x2981<<(x2982%x2983))*x2984);

    if (t121 != 18446744073709447209LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x2993 = INT8_MAX;
	int16_t x2994 = INT16_MIN;
	int16_t x2995 = INT16_MIN;
	int64_t x2996 = -1126513LL;
	volatile int64_t t122 = -6315579251935837LL;

    t122 = ((x2993<<(x2994%x2995))*x2996);

    if (t122 != -143067151LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static uint8_t x3021 = 0U;
	uint32_t x3022 = 606341U;
	volatile uint8_t x3023 = 5U;
	uint16_t x3024 = 500U;
	static int32_t t123 = 13932;

    t123 = ((x3021<<(x3022%x3023))*x3024);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	static int16_t x3061 = 1;
	int16_t x3062 = INT16_MIN;
	static int8_t x3063 = INT8_MIN;
	uint8_t x3064 = 56U;
	int32_t t124 = -614513;

    t124 = ((x3061<<(x3062%x3063))*x3064);

    if (t124 != 56) { NG(); } else { ; }
	
}

void f125(void) {
    	uint16_t x3157 = 0U;
	volatile int32_t t125 = 449;

    t125 = ((x3157<<(x3158%x3159))*x3160);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x3161 = 1;
	static volatile int8_t x3162 = -1;
	uint8_t x3163 = 1U;
	static int64_t x3164 = INT64_MIN;
	int64_t t126 = INT64_MIN;

    t126 = ((x3161<<(x3162%x3163))*x3164);

    if (t126 != INT64_MIN) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x3237 = INT16_MAX;
	static uint8_t x3239 = UINT8_MAX;
	uint16_t x3240 = 0U;
	volatile int32_t t127 = 68287;

    t127 = ((x3237<<(x3238%x3239))*x3240);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	static uint16_t x3249 = 70U;
	uint64_t x3252 = 1420237LLU;

    t128 = ((x3249<<(x3250%x3251))*x3252);

    if (t128 != 99416590LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile uint16_t x3253 = 178U;
	uint16_t x3254 = 150U;
	static int8_t x3255 = -1;
	int8_t x3256 = -21;
	volatile int32_t t129 = 444606444;

    t129 = ((x3253<<(x3254%x3255))*x3256);

    if (t129 != -3738) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile int8_t x3302 = INT8_MIN;
	int8_t x3303 = -1;
	int32_t t130 = -21112;

    t130 = ((x3301<<(x3302%x3303))*x3304);

    if (t130 != -2147483647) { NG(); } else { ; }
	
}

void f131(void) {
    	uint32_t x3349 = UINT32_MAX;
	uint32_t x3350 = 129579U;
	volatile int16_t x3351 = 1;
	volatile uint64_t x3352 = 4480689LLU;
	volatile uint64_t t131 = 4LLU;

    t131 = ((x3349<<(x3350%x3351))*x3352);

    if (t131 != 19244412714066255LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	volatile int64_t x3354 = INT64_MIN;
	int8_t x3355 = -1;
	uint8_t x3356 = UINT8_MAX;

    t132 = ((x3353<<(x3354%x3355))*x3356);

    if (t132 != 4294967041U) { NG(); } else { ; }
	
}

void f133(void) {
    	int8_t x3374 = INT8_MAX;
	static volatile int8_t x3375 = -1;
	uint16_t x3376 = UINT16_MAX;
	int32_t t133 = -38464573;

    t133 = ((x3373<<(x3374%x3375))*x3376);

    if (t133 != 8322945) { NG(); } else { ; }
	
}

void f134(void) {
    	int8_t x3401 = INT8_MAX;
	int64_t x3402 = INT64_MIN;
	volatile uint64_t x3403 = 1LLU;
	int32_t x3404 = -1;
	static volatile int32_t t134 = -6185270;

    t134 = ((x3401<<(x3402%x3403))*x3404);

    if (t134 != -127) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x3417 = 601059086U;
	volatile int64_t x3418 = 324LL;
	int64_t x3419 = -1LL;
	int32_t x3420 = INT32_MIN;
	static volatile uint32_t t135 = 196339U;

    t135 = ((x3417<<(x3418%x3419))*x3420);

    if (t135 != 0U) { NG(); } else { ; }
	
}

void f136(void) {
    	static uint64_t x3422 = UINT64_MAX;
	volatile uint8_t x3423 = UINT8_MAX;
	static volatile uint32_t x3424 = UINT32_MAX;

    t136 = ((x3421<<(x3422%x3423))*x3424);

    if (t136 != 8054878615339443460LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	volatile int8_t x3441 = 3;
	int16_t x3442 = INT16_MIN;
	int16_t x3443 = -1;
	static int64_t x3444 = -1LL;
	int64_t t137 = 97969450254LL;

    t137 = ((x3441<<(x3442%x3443))*x3444);

    if (t137 != -3LL) { NG(); } else { ; }
	
}

void f138(void) {
    	uint8_t x3489 = 8U;
	static volatile int32_t x3490 = -1;
	int8_t x3492 = INT8_MAX;

    t138 = ((x3489<<(x3490%x3491))*x3492);

    if (t138 != 1016) { NG(); } else { ; }
	
}

void f139(void) {
    	uint32_t x3513 = UINT32_MAX;
	uint64_t x3514 = UINT64_MAX;
	int16_t x3516 = INT16_MIN;

    t139 = ((x3513<<(x3514%x3515))*x3516);

    if (t139 != 1073741824U) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x3573 = INT16_MAX;
	uint64_t x3574 = 5482895055LLU;
	int8_t x3575 = 1;
	volatile uint32_t x3576 = 3617U;
	uint32_t t140 = 24U;

    t140 = ((x3573<<(x3574%x3575))*x3576);

    if (t140 != 118518239U) { NG(); } else { ; }
	
}

void f141(void) {
    	uint64_t x3609 = UINT64_MAX;
	int64_t x3610 = -81253855816LL;
	static volatile int64_t x3612 = INT64_MIN;
	volatile uint64_t t141 = 557632LLU;

    t141 = ((x3609<<(x3610%x3611))*x3612);

    if (t141 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	int8_t x3619 = 3;
	volatile int32_t x3620 = -1;
	static volatile uint64_t t142 = 41681323698LLU;

    t142 = ((x3617<<(x3618%x3619))*x3620);

    if (t142 != 18446688835651380882LLU) { NG(); } else { ; }
	
}

void f143(void) {
    	uint32_t x3622 = 0U;
	volatile int8_t x3623 = INT8_MIN;
	uint32_t x3624 = 65424U;
	volatile uint32_t t143 = 6844U;

    t143 = ((x3621<<(x3622%x3623))*x3624);

    if (t143 != 0U) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x3645 = INT16_MAX;
	int16_t x3648 = -9;
	int32_t t144 = 578825;

    t144 = ((x3645<<(x3646%x3647))*x3648);

    if (t144 != -294903) { NG(); } else { ; }
	
}

void f145(void) {
    	int64_t x3670 = INT64_MIN;
	int64_t x3671 = -1LL;
	int8_t x3672 = -1;
	uint64_t t145 = 765499LLU;

    t145 = ((x3669<<(x3670%x3671))*x3672);

    if (t145 != 1LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x3685 = 1240U;
	uint16_t x3686 = 49U;
	int8_t x3687 = -1;
	static uint32_t x3688 = UINT32_MAX;
	static uint32_t t146 = 1087U;

    t146 = ((x3685<<(x3686%x3687))*x3688);

    if (t146 != 4294966056U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int8_t x3753 = 3;
	static volatile uint16_t x3754 = 758U;
	int8_t x3755 = 17;
	static int8_t x3756 = INT8_MAX;
	int32_t t147 = 10;

    t147 = ((x3753<<(x3754%x3755))*x3756);

    if (t147 != 390144) { NG(); } else { ; }
	
}

void f148(void) {
    	uint64_t x3781 = UINT64_MAX;
	int64_t x3782 = -1LL;
	volatile int8_t x3783 = -1;
	int8_t x3784 = INT8_MAX;
	uint64_t t148 = 21148581652260000LLU;

    t148 = ((x3781<<(x3782%x3783))*x3784);

    if (t148 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	uint64_t x3809 = 13286511029956326LLU;
	int64_t x3810 = INT64_MIN;
	volatile int32_t x3811 = INT32_MIN;
	uint16_t x3812 = 21U;
	volatile uint64_t t149 = 14019359LLU;

    t149 = ((x3809<<(x3810%x3811))*x3812);

    if (t149 != 279016731629082846LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	static uint32_t x3829 = 14508516U;
	int32_t x3832 = INT32_MIN;
	uint32_t t150 = 244595041U;

    t150 = ((x3829<<(x3830%x3831))*x3832);

    if (t150 != 0U) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x3905 = INT8_MAX;
	uint8_t x3906 = 0U;
	int16_t x3908 = INT16_MIN;
	int32_t t151 = -53527957;

    t151 = ((x3905<<(x3906%x3907))*x3908);

    if (t151 != -4161536) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x3921 = 42613;
	static volatile int32_t x3922 = INT32_MIN;
	int8_t x3923 = INT8_MIN;
	int32_t t152 = 63;

    t152 = ((x3921<<(x3922%x3923))*x3924);

    if (t152 != -2045424) { NG(); } else { ; }
	
}

void f153(void) {
    	static uint16_t x3934 = 15U;
	int8_t x3935 = -10;
	uint64_t t153 = 108014LLU;

    t153 = ((x3933<<(x3934%x3935))*x3936);

    if (t153 != 158330144LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x3981 = 4U;
	static uint32_t x3983 = 17U;
	int16_t x3984 = INT16_MIN;
	volatile int32_t t154 = -106301207;

    t154 = ((x3981<<(x3982%x3983))*x3984);

    if (t154 != -131072) { NG(); } else { ; }
	
}

void f155(void) {
    	static volatile uint8_t x4045 = 122U;
	volatile int8_t x4047 = -1;
	int8_t x4048 = INT8_MAX;

    t155 = ((x4045<<(x4046%x4047))*x4048);

    if (t155 != 15494) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x4061 = 26U;
	uint8_t x4062 = 0U;
	uint32_t x4064 = UINT32_MAX;
	volatile uint32_t t156 = 109673775U;

    t156 = ((x4061<<(x4062%x4063))*x4064);

    if (t156 != 4294967270U) { NG(); } else { ; }
	
}

void f157(void) {
    	uint16_t x4098 = UINT16_MAX;
	int32_t x4099 = 3;
	uint64_t x4100 = UINT64_MAX;
	static uint64_t t157 = 138LLU;

    t157 = ((x4097<<(x4098%x4099))*x4100);

    if (t157 != 18446744073706557668LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x4117 = UINT64_MAX;
	int16_t x4118 = -1;
	int16_t x4119 = -1;
	int8_t x4120 = 0;
	uint64_t t158 = 66LLU;

    t158 = ((x4117<<(x4118%x4119))*x4120);

    if (t158 != 0LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	uint32_t x4133 = 481066771U;
	int64_t x4134 = 368685303782236943LL;
	int8_t x4135 = 60;
	int32_t x4136 = INT32_MAX;
	uint32_t t159 = 115944156U;

    t159 = ((x4133<<(x4134%x4135))*x4136);

    if (t159 != 1988100096U) { NG(); } else { ; }
	
}

void f160(void) {
    	uint8_t x4153 = UINT8_MAX;
	int64_t x4154 = 2014498952LL;
	static int8_t x4155 = -2;
	int16_t x4156 = -1;
	int32_t t160 = 564;

    t160 = ((x4153<<(x4154%x4155))*x4156);

    if (t160 != -255) { NG(); } else { ; }
	
}

void f161(void) {
    	uint64_t x4190 = UINT64_MAX;
	int16_t x4191 = -1;
	static uint16_t x4192 = 1548U;
	int32_t t161 = -1188224;

    t161 = ((x4189<<(x4190%x4191))*x4192);

    if (t161 != 50723316) { NG(); } else { ; }
	
}

void f162(void) {
    	static uint8_t x4241 = 1U;
	volatile int16_t x4242 = 1;
	uint16_t x4243 = 55U;
	int8_t x4244 = -1;
	volatile int32_t t162 = 134656975;

    t162 = ((x4241<<(x4242%x4243))*x4244);

    if (t162 != -2) { NG(); } else { ; }
	
}

void f163(void) {
    	uint8_t x4273 = UINT8_MAX;
	uint8_t x4274 = 1U;
	int32_t x4275 = 6760;
	int32_t t163 = -27;

    t163 = ((x4273<<(x4274%x4275))*x4276);

    if (t163 != -65280) { NG(); } else { ; }
	
}

void f164(void) {
    	int8_t x4297 = 1;
	int64_t x4298 = INT64_MIN;
	int16_t x4299 = INT16_MIN;
	uint32_t x4300 = 268U;
	volatile uint32_t t164 = 73454U;

    t164 = ((x4297<<(x4298%x4299))*x4300);

    if (t164 != 268U) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile uint16_t x4334 = 177U;
	uint64_t x4336 = UINT64_MAX;

    t165 = ((x4333<<(x4334%x4335))*x4336);

    if (t165 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f166(void) {
    	static volatile uint64_t x4337 = 60133881975003LLU;
	int32_t x4338 = INT32_MIN;
	volatile uint16_t x4339 = 4U;
	int16_t x4340 = -189;
	volatile uint64_t t166 = 673808740311543LLU;

    t166 = ((x4337<<(x4338%x4339))*x4340);

    if (t166 != 18435378770016276049LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	int32_t x4351 = 6;
	static int16_t x4352 = -1;
	int32_t t167 = -3960;

    t167 = ((x4349<<(x4350%x4351))*x4352);

    if (t167 != -104) { NG(); } else { ; }
	
}

void f168(void) {
    	int64_t x4355 = -1LL;
	int8_t x4356 = 1;
	volatile int32_t t168 = -32376;

    t168 = ((x4353<<(x4354%x4355))*x4356);

    if (t168 != 255) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint64_t x4373 = 1022730712055993LLU;
	uint8_t x4375 = 3U;
	int32_t x4376 = 1045410;
	volatile uint64_t t169 = 71020313LLU;

    t169 = ((x4373<<(x4374%x4375))*x4376);

    if (t169 != 17708501489011200018LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	uint8_t x4389 = 6U;
	int16_t x4392 = INT16_MIN;
	int32_t t170 = -377935;

    t170 = ((x4389<<(x4390%x4391))*x4392);

    if (t170 != -786432) { NG(); } else { ; }
	
}

void f171(void) {
    	int8_t x4429 = INT8_MAX;
	uint64_t x4430 = 5857362432859925LLU;
	uint8_t x4432 = 34U;
	volatile int32_t t171 = -999;

    t171 = ((x4429<<(x4430%x4431))*x4432);

    if (t171 != 17272) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x4486 = INT16_MAX;
	int32_t x4487 = -1;
	volatile int32_t t172 = 806536032;

    t172 = ((x4485<<(x4486%x4487))*x4488);

    if (t172 != 4524) { NG(); } else { ; }
	
}

void f173(void) {
    	volatile uint8_t x4537 = UINT8_MAX;
	uint32_t x4538 = 0U;
	int8_t x4539 = INT8_MIN;
	static int32_t t173 = 11;

    t173 = ((x4537<<(x4538%x4539))*x4540);

    if (t173 != 1275) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x4565 = 0;
	int8_t x4566 = INT8_MIN;
	int8_t x4567 = 1;
	uint32_t x4568 = 990U;
	volatile uint32_t t174 = 2388U;

    t174 = ((x4565<<(x4566%x4567))*x4568);

    if (t174 != 0U) { NG(); } else { ; }
	
}

void f175(void) {
    	uint8_t x4633 = 55U;
	static uint64_t x4634 = 2LLU;
	int16_t x4635 = -1;
	int16_t x4636 = INT16_MIN;

    t175 = ((x4633<<(x4634%x4635))*x4636);

    if (t175 != -7208960) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint8_t x4642 = 9U;
	uint16_t x4643 = 2170U;
	volatile int8_t x4644 = 29;
	volatile uint32_t t176 = 14004U;

    t176 = ((x4641<<(x4642%x4643))*x4644);

    if (t176 != 4294952448U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint64_t x4713 = 1379LLU;
	volatile int8_t x4714 = 0;
	uint16_t x4715 = 23853U;
	static int8_t x4716 = 1;
	volatile uint64_t t177 = 66LLU;

    t177 = ((x4713<<(x4714%x4715))*x4716);

    if (t177 != 1379LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	uint8_t x4741 = 7U;
	volatile int32_t x4742 = INT32_MAX;
	int8_t x4743 = -1;
	volatile int16_t x4744 = -10;
	static volatile int32_t t178 = 50;

    t178 = ((x4741<<(x4742%x4743))*x4744);

    if (t178 != -70) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint32_t x4749 = UINT32_MAX;
	int8_t x4750 = 6;
	volatile uint64_t x4752 = UINT64_MAX;
	static volatile uint64_t t179 = 12118LLU;

    t179 = ((x4749<<(x4750%x4751))*x4752);

    if (t179 != 18446744069414584384LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x4753 = UINT32_MAX;
	volatile int16_t x4755 = INT16_MIN;
	uint32_t x4756 = UINT32_MAX;
	uint32_t t180 = 70337868U;

    t180 = ((x4753<<(x4754%x4755))*x4756);

    if (t180 != 1U) { NG(); } else { ; }
	
}

void f181(void) {
    	static uint8_t x4761 = UINT8_MAX;
	int16_t x4763 = INT16_MIN;
	int8_t x4764 = -1;
	static int32_t t181 = -2987;

    t181 = ((x4761<<(x4762%x4763))*x4764);

    if (t181 != -255) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x4765 = 1;
	int16_t x4766 = INT16_MIN;
	int32_t x4768 = INT32_MIN;

    t182 = ((x4765<<(x4766%x4767))*x4768);

    if (t182 != INT32_MIN) { NG(); } else { ; }
	
}

void f183(void) {
    	uint8_t x4781 = 0U;
	uint8_t x4782 = 31U;
	volatile int16_t x4783 = 516;
	uint64_t x4784 = 696628118447958052LLU;

    t183 = ((x4781<<(x4782%x4783))*x4784);

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	static int8_t x4801 = 14;
	int8_t x4803 = 3;
	uint64_t x4804 = UINT64_MAX;
	volatile uint64_t t184 = 218215269756042LLU;

    t184 = ((x4801<<(x4802%x4803))*x4804);

    if (t184 != 18446744073709551602LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	uint32_t x4809 = 4584753U;
	uint64_t x4810 = UINT64_MAX;
	int8_t x4811 = -1;
	int32_t x4812 = 12170;
	static uint32_t t185 = 12U;

    t185 = ((x4809<<(x4810%x4811))*x4812);

    if (t185 != 4256836458U) { NG(); } else { ; }
	
}

void f186(void) {
    	volatile uint32_t x4813 = 106691U;
	static int16_t x4814 = -110;
	uint16_t x4815 = 1U;
	static int32_t x4816 = INT32_MIN;
	uint32_t t186 = 879U;

    t186 = ((x4813<<(x4814%x4815))*x4816);

    if (t186 != 2147483648U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint8_t x4829 = 21U;
	volatile int8_t x4831 = INT8_MAX;
	uint64_t x4832 = 1005439604767522LLU;

    t187 = ((x4829<<(x4830%x4831))*x4832);

    if (t187 != 9341613622211969024LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint32_t x4881 = UINT32_MAX;
	uint8_t x4882 = 2U;
	volatile uint64_t x4883 = 5LLU;
	int64_t x4884 = 30222LL;

    t188 = ((x4881<<(x4882%x4883))*x4884);

    if (t188 != 129802501498824LL) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x4935 = INT32_MAX;
	int8_t x4936 = -1;
	int32_t t189 = -2;

    t189 = ((x4933<<(x4934%x4935))*x4936);

    if (t189 != -65535) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x4941 = UINT64_MAX;
	int64_t x4943 = 7LL;
	int64_t x4944 = INT64_MIN;
	volatile uint64_t t190 = 613681609LLU;

    t190 = ((x4941<<(x4942%x4943))*x4944);

    if (t190 != 0LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int16_t x4973 = 466;
	static int32_t x4974 = INT32_MIN;
	volatile int16_t x4975 = INT16_MIN;
	static int16_t x4976 = INT16_MIN;
	volatile int32_t t191 = -2090610;

    t191 = ((x4973<<(x4974%x4975))*x4976);

    if (t191 != -15269888) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int64_t x4997 = 0LL;
	volatile uint64_t x4998 = 953239656936353LLU;
	uint64_t x4999 = 67LLU;
	volatile uint16_t x5000 = 3U;
	static int64_t t192 = 3930139LL;

    t192 = ((x4997<<(x4998%x4999))*x5000);

    if (t192 != 0LL) { NG(); } else { ; }
	
}

void f193(void) {
    	volatile uint32_t x5005 = 61365182U;
	uint32_t x5006 = UINT32_MAX;
	static uint16_t x5007 = 2U;
	uint64_t x5008 = 6026877LLU;
	volatile uint64_t t193 = 8624525889128LLU;

    t193 = ((x5005<<(x5006%x5007))*x5008);

    if (t193 != 739680807993228LLU) { NG(); } else { ; }
	
}

void f194(void) {
    	uint8_t x5025 = UINT8_MAX;
	static uint8_t x5026 = 0U;
	int8_t x5027 = -1;
	int8_t x5028 = -8;
	volatile int32_t t194 = -4717;

    t194 = ((x5025<<(x5026%x5027))*x5028);

    if (t194 != -2040) { NG(); } else { ; }
	
}

void f195(void) {
    	uint8_t x5033 = 99U;
	static int8_t x5035 = -15;
	int64_t x5036 = -1LL;
	static volatile int64_t t195 = -196LL;

    t195 = ((x5033<<(x5034%x5035))*x5036);

    if (t195 != -99LL) { NG(); } else { ; }
	
}

void f196(void) {
    	uint32_t x5077 = UINT32_MAX;
	int16_t x5078 = 3;
	volatile int16_t x5079 = 1954;
	static uint64_t x5080 = UINT64_MAX;
	static uint64_t t196 = 16LLU;

    t196 = ((x5077<<(x5078%x5079))*x5080);

    if (t196 != 18446744069414584328LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x5086 = INT8_MIN;
	volatile int64_t x5087 = -1LL;
	volatile int16_t x5088 = INT16_MIN;
	volatile int32_t t197 = -899807694;

    t197 = ((x5085<<(x5086%x5087))*x5088);

    if (t197 != -98304) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint8_t x5089 = UINT8_MAX;
	static uint16_t x5090 = 6U;
	uint32_t x5092 = 2182U;
	uint32_t t198 = 209466U;

    t198 = ((x5089<<(x5090%x5091))*x5092);

    if (t198 != 35610240U) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x5106 = 1;
	int32_t x5107 = INT32_MIN;
	static volatile int16_t x5108 = INT16_MIN;

    t199 = ((x5105<<(x5106%x5107))*x5108);

    if (t199 != -1966080) { NG(); } else { ; }
	
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
    f100();
    f101();
    f102();
    f103();
    f104();
    f105();
    f106();
    f107();
    f108();
    f109();
    f110();
    f111();
    f112();
    f113();
    f114();
    f115();
    f116();
    f117();
    f118();
    f119();
    f120();
    f121();
    f122();
    f123();
    f124();
    f125();
    f126();
    f127();
    f128();
    f129();
    f130();
    f131();
    f132();
    f133();
    f134();
    f135();
    f136();
    f137();
    f138();
    f139();
    f140();
    f141();
    f142();
    f143();
    f144();
    f145();
    f146();
    f147();
    f148();
    f149();
    f150();
    f151();
    f152();
    f153();
    f154();
    f155();
    f156();
    f157();
    f158();
    f159();
    f160();
    f161();
    f162();
    f163();
    f164();
    f165();
    f166();
    f167();
    f168();
    f169();
    f170();
    f171();
    f172();
    f173();
    f174();
    f175();
    f176();
    f177();
    f178();
    f179();
    f180();
    f181();
    f182();
    f183();
    f184();
    f185();
    f186();
    f187();
    f188();
    f189();
    f190();
    f191();
    f192();
    f193();
    f194();
    f195();
    f196();
    f197();
    f198();
    f199();


    return 0;
}

