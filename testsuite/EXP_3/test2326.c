
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

uint32_t x8 = 286U;
int64_t x11 = INT64_MAX;
static uint16_t x13 = 25U;
volatile uint8_t x26 = UINT8_MAX;
volatile int8_t x30 = 3;
volatile int16_t x34 = INT16_MIN;
volatile int32_t x36 = -24170325;
int64_t x43 = 175016386LL;
uint8_t x45 = 4U;
uint8_t x49 = UINT8_MAX;
uint64_t x50 = 398670073503933956LLU;
int16_t x52 = -1;
volatile uint32_t t13 = 455U;
int8_t x61 = INT8_MAX;
volatile int8_t x62 = INT8_MIN;
int32_t x69 = 239854108;
int32_t x73 = -1;
volatile int8_t x79 = INT8_MIN;
volatile int32_t x80 = INT32_MAX;
static uint64_t x84 = 1041081349686830432LLU;
volatile uint64_t t19 = 3298669106726158759LLU;
volatile int32_t x94 = -1;
uint64_t x97 = 106375743523232081LLU;
static volatile uint64_t t23 = 1013LLU;
static volatile int16_t x114 = INT16_MAX;
int32_t x115 = INT32_MAX;
int8_t x121 = INT8_MIN;
volatile uint64_t x123 = UINT64_MAX;
int16_t x125 = INT16_MAX;
uint16_t x131 = UINT16_MAX;
static volatile int16_t x132 = INT16_MIN;
static uint8_t x144 = 5U;
uint8_t x148 = UINT8_MAX;
uint8_t x149 = 0U;
static int8_t x153 = INT8_MIN;
volatile int64_t t34 = -2447773938567LL;
int64_t x160 = -2586911LL;
volatile uint8_t x165 = 14U;
static volatile int16_t x168 = 25;
static int16_t x170 = -3479;
volatile int32_t x171 = -258510;
volatile int16_t x172 = -593;
volatile uint64_t t38 = 613442LLU;
volatile uint64_t t39 = 1216241729015LLU;
uint8_t x183 = 29U;
uint8_t x186 = UINT8_MAX;
uint8_t x192 = UINT8_MAX;
static int64_t x197 = 112674076918316091LL;
int8_t x200 = 4;
uint16_t x205 = 1768U;
int64_t x206 = INT64_MIN;
static int32_t x208 = INT32_MIN;
static int16_t x218 = -3971;
static int32_t x220 = -1;
int64_t t49 = 10946769LL;
int32_t x225 = 0;
static int8_t x228 = 0;
volatile uint8_t x231 = UINT8_MAX;
int32_t t51 = 131374340;
int8_t x238 = 33;
uint32_t x239 = 53U;
int8_t x249 = 1;
volatile int8_t x256 = INT8_MAX;
volatile int64_t t58 = 3267260336LL;
uint8_t x282 = UINT8_MAX;
int64_t x286 = INT64_MIN;
uint64_t x287 = 3877LLU;
int32_t x288 = INT32_MIN;
int16_t x289 = -7809;
uint8_t x292 = 0U;
int32_t x293 = 14;
volatile int16_t x296 = INT16_MIN;
volatile int64_t t66 = 81490341958299LL;
uint8_t x299 = 29U;
volatile int32_t x303 = 28;
volatile int64_t t69 = 27008LL;
uint8_t x314 = UINT8_MAX;
static volatile int8_t x315 = INT8_MAX;
static int16_t x316 = INT16_MIN;
uint64_t x317 = UINT64_MAX;
int16_t x322 = INT16_MAX;
volatile int64_t x325 = INT64_MIN;
int32_t x332 = 7471617;
uint64_t x333 = 14953446LLU;
uint64_t t76 = 447658LLU;
int16_t x340 = INT16_MAX;
volatile uint64_t x350 = UINT64_MAX;
int8_t x355 = 3;
int32_t x359 = INT32_MIN;
static int64_t x366 = INT64_MIN;
int8_t x368 = INT8_MIN;
int64_t t85 = 2883943337296142095LL;
int32_t x380 = INT32_MAX;
int64_t t87 = INT64_MAX;
static volatile int32_t x386 = INT32_MIN;
uint64_t t88 = 121LLU;
uint16_t x391 = UINT16_MAX;
int16_t x393 = 97;
uint64_t t91 = 131787114881421003LLU;
int64_t x402 = INT64_MIN;
int16_t x403 = INT16_MAX;
uint64_t t92 = 624006LLU;
uint8_t x431 = UINT8_MAX;
int16_t x435 = INT16_MAX;
volatile uint32_t x436 = 42U;
volatile uint64_t t100 = 232861636457108LLU;
int8_t x439 = INT8_MAX;
int32_t x441 = -2;
static uint8_t x444 = 94U;
volatile uint32_t t103 = 62374079U;
volatile int64_t t104 = 556893741371474LL;
int8_t x453 = -2;
static int64_t x460 = -1LL;
uint8_t x471 = 0U;
int32_t x475 = 0;
volatile int32_t x486 = -68;
int16_t x497 = INT16_MIN;
static uint64_t x504 = 29358885109LLU;
static int64_t x508 = 6LL;
uint8_t x511 = 2U;
static int64_t x513 = INT64_MIN;
int32_t x518 = INT32_MIN;
int64_t x522 = INT64_MIN;
uint64_t t120 = 364959385340LLU;
static int8_t x528 = INT8_MIN;
volatile int8_t x533 = -1;
static uint32_t t123 = 3372U;
static uint16_t x537 = 6U;
uint8_t x540 = UINT8_MAX;
volatile uint64_t t125 = 12039LLU;
int64_t x548 = 1242384531LL;
static int8_t x556 = -1;
int8_t x561 = 3;
int64_t t130 = -891499LL;
int32_t x570 = 285943564;
static int32_t t132 = -39;
uint32_t x578 = 96281230U;
uint8_t x586 = UINT8_MAX;
volatile int32_t t137 = 386793;
uint8_t x595 = 2U;
uint16_t x600 = 18U;
int64_t x608 = INT64_MIN;
int64_t t141 = INT64_MAX;
int16_t x618 = -1;
volatile int64_t x629 = INT64_MIN;
static volatile int16_t x631 = 0;
int16_t x636 = INT16_MIN;
int16_t x638 = -1;
int16_t x645 = 1;
volatile int64_t x660 = INT64_MIN;
static int32_t x671 = INT32_MAX;
int64_t x672 = INT64_MIN;
static volatile int16_t x688 = INT16_MAX;
int16_t x695 = -1;
int64_t t161 = -51704LL;
int64_t x697 = INT64_MIN;
static int32_t x699 = 356;
int64_t t163 = -35988498672475112LL;
uint16_t x720 = 637U;
uint64_t x723 = 20044714100608563LLU;
int8_t x724 = -1;
int16_t x729 = -1;
int64_t t169 = -6030LL;
uint64_t t171 = 85955486742216LLU;
int32_t x741 = -1;
volatile uint32_t x744 = UINT32_MAX;
volatile int16_t x745 = INT16_MIN;
volatile int32_t x750 = INT32_MAX;
volatile uint64_t t179 = 2191853LLU;
static int8_t x776 = INT8_MIN;
volatile uint64_t x779 = 241664LLU;
volatile int8_t x784 = -1;
uint16_t x795 = UINT16_MAX;
volatile int64_t t185 = -302778943331879LL;
uint64_t x801 = 17065549511347LLU;
int16_t x805 = INT16_MIN;
int32_t x808 = -1;
int32_t x810 = INT32_MIN;
volatile uint64_t x811 = 1506LLU;
static int64_t x818 = 2309596828894394LL;
uint32_t x827 = UINT32_MAX;
volatile uint32_t t192 = 188U;
int16_t x829 = -1;
int64_t x832 = INT64_MIN;
int8_t x834 = INT8_MIN;
volatile uint64_t t194 = 9495760715035LLU;
int32_t x845 = -30921135;
static volatile uint16_t x847 = 208U;
uint32_t x850 = 866872U;
volatile int32_t x853 = -150201;


void f0(void) {
    	int32_t x1 = INT32_MIN;
	uint32_t x2 = UINT32_MAX;
	uint32_t x3 = UINT32_MAX;
	int32_t x4 = INT32_MIN;
	uint32_t t0 = 1883U;

    t0 = ((x1|x2)-(x3&x4));

    if (t0 != 2147483647U) { NG(); } else { ; }
	
}

void f1(void) {
    	uint32_t x5 = UINT32_MAX;
	int16_t x6 = INT16_MIN;
	uint64_t x7 = 112993588679381LLU;
	volatile uint64_t t1 = 46191345LLU;

    t1 = ((x5|x6)-(x7&x8));

    if (t1 != 4294967275LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	int64_t x9 = INT64_MIN;
	uint16_t x10 = UINT16_MAX;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = 48LL;

    t2 = ((x9|x10)-(x11&x12));

    if (t2 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f3(void) {
    	uint16_t x14 = 33U;
	int8_t x15 = INT8_MIN;
	volatile uint64_t x16 = 61422487540LLU;
	uint64_t t3 = 238252374LLU;

    t3 = ((x13|x14)-(x15&x16));

    if (t3 != 18446744012287064249LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x17 = INT64_MIN;
	int32_t x18 = INT32_MIN;
	uint8_t x19 = UINT8_MAX;
	int64_t x20 = INT64_MIN;
	volatile int64_t t4 = 360265400578763782LL;

    t4 = ((x17|x18)-(x19&x20));

    if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
    	static volatile int8_t x21 = 49;
	uint16_t x22 = 209U;
	int32_t x23 = INT32_MAX;
	int64_t x24 = INT64_MIN;
	int64_t t5 = 715LL;

    t5 = ((x21|x22)-(x23&x24));

    if (t5 != 241LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x25 = INT16_MIN;
	int8_t x27 = 1;
	int32_t x28 = INT32_MIN;
	int32_t t6 = -17;

    t6 = ((x25|x26)-(x27&x28));

    if (t6 != -32513) { NG(); } else { ; }
	
}

void f7(void) {
    	uint64_t x29 = UINT64_MAX;
	volatile uint32_t x31 = UINT32_MAX;
	int16_t x32 = -1;
	volatile uint64_t t7 = 2250628328LLU;

    t7 = ((x29|x30)-(x31&x32));

    if (t7 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	static int64_t x33 = INT64_MIN;
	static int8_t x35 = INT8_MIN;
	int64_t t8 = 0LL;

    t8 = ((x33|x34)-(x35&x36));

    if (t8 != 24137600LL) { NG(); } else { ; }
	
}

void f9(void) {
    	int8_t x37 = -1;
	uint8_t x38 = UINT8_MAX;
	int64_t x39 = INT64_MIN;
	volatile int8_t x40 = INT8_MIN;
	int64_t t9 = INT64_MAX;

    t9 = ((x37|x38)-(x39&x40));

    if (t9 != INT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
    	int32_t x41 = 327;
	int8_t x42 = 4;
	uint64_t x44 = UINT64_MAX;
	static volatile uint64_t t10 = 11714860014314LLU;

    t10 = ((x41|x42)-(x43&x44));

    if (t10 != 18446744073534535557LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile uint16_t x46 = UINT16_MAX;
	int8_t x47 = INT8_MIN;
	int32_t x48 = -966610380;
	int32_t t11 = 20286;

    t11 = ((x45|x46)-(x47&x48));

    if (t11 != 966675967) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint16_t x51 = 97U;
	uint64_t t12 = 67391658069LLU;

    t12 = ((x49|x50)-(x51&x52));

    if (t12 != 398670073503934110LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = -1668657;
	volatile int8_t x58 = INT8_MIN;
	static uint32_t x59 = 24381900U;
	int16_t x60 = INT16_MIN;

    t13 = ((x57|x58)-(x59&x60));

    if (t13 != 4270587855U) { NG(); } else { ; }
	
}

void f14(void) {
    	static int16_t x63 = INT16_MIN;
	uint32_t x64 = 78U;
	volatile uint32_t t14 = UINT32_MAX;

    t14 = ((x61|x62)-(x63&x64));

    if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
    	int64_t x65 = INT64_MIN;
	volatile int32_t x66 = -10972784;
	int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MIN;
	int64_t t15 = 32380720840562650LL;

    t15 = ((x65|x66)-(x67&x68));

    if (t15 != 9223372036843803024LL) { NG(); } else { ; }
	
}

void f16(void) {
    	int32_t x70 = INT32_MAX;
	int8_t x71 = -1;
	volatile int64_t x72 = -1LL;
	volatile int64_t t16 = 5828564912LL;

    t16 = ((x69|x70)-(x71&x72));

    if (t16 != 2147483648LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint64_t x74 = 8700986025626695864LLU;
	int64_t x75 = INT64_MAX;
	static int64_t x76 = INT64_MIN;
	volatile uint64_t t17 = UINT64_MAX;

    t17 = ((x73|x74)-(x75&x76));

    if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
    	int32_t x77 = 2;
	uint32_t x78 = UINT32_MAX;
	uint32_t t18 = 677U;

    t18 = ((x77|x78)-(x79&x80));

    if (t18 != 2147483775U) { NG(); } else { ; }
	
}

void f19(void) {
    	uint64_t x81 = 5801282LLU;
	int16_t x82 = INT16_MIN;
	uint32_t x83 = 4359U;

    t19 = ((x81|x82)-(x83&x84));

    if (t19 != 18446744073709519938LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int32_t x85 = -1;
	uint8_t x86 = 26U;
	int64_t x87 = 32769614716085613LL;
	int8_t x88 = INT8_MIN;
	int64_t t20 = -1259319368728LL;

    t20 = ((x85|x86)-(x87&x88));

    if (t20 != -32769614716085505LL) { NG(); } else { ; }
	
}

void f21(void) {
    	static uint32_t x89 = 1951U;
	int64_t x90 = -1LL;
	volatile int16_t x91 = INT16_MIN;
	int32_t x92 = -1;
	int64_t t21 = -526765482382240LL;

    t21 = ((x89|x90)-(x91&x92));

    if (t21 != 32767LL) { NG(); } else { ; }
	
}

void f22(void) {
    	int8_t x93 = INT8_MAX;
	static int64_t x95 = 13LL;
	static int16_t x96 = INT16_MAX;
	volatile int64_t t22 = -154941501583LL;

    t22 = ((x93|x94)-(x95&x96));

    if (t22 != -14LL) { NG(); } else { ; }
	
}

void f23(void) {
    	volatile int8_t x98 = INT8_MAX;
	static int8_t x99 = -1;
	uint16_t x100 = 292U;

    t23 = ((x97|x98)-(x99&x100));

    if (t23 != 106375743523231835LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	int16_t x105 = -1;
	int16_t x106 = -8;
	uint8_t x107 = 0U;
	static int32_t x108 = -655166012;
	volatile int32_t t24 = -1;

    t24 = ((x105|x106)-(x107&x108));

    if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
    	int64_t x113 = INT64_MIN;
	uint64_t x116 = 2LLU;
	volatile uint64_t t25 = 71678076551258LLU;

    t25 = ((x113|x114)-(x115&x116));

    if (t25 != 9223372036854808573LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	int16_t x117 = INT16_MIN;
	uint32_t x118 = UINT32_MAX;
	uint32_t x119 = 10372353U;
	int32_t x120 = 129955349;
	static volatile uint32_t t26 = 17405U;

    t26 = ((x117|x118)-(x119&x120));

    if (t26 != 4284595198U) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x122 = UINT16_MAX;
	uint32_t x124 = UINT32_MAX;
	static volatile uint64_t t27 = 352086LLU;

    t27 = ((x121|x122)-(x123&x124));

    if (t27 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x126 = -1LL;
	static int64_t x127 = -102483342LL;
	volatile int32_t x128 = INT32_MIN;
	int64_t t28 = -4085193250905LL;

    t28 = ((x125|x126)-(x127&x128));

    if (t28 != 2147483647LL) { NG(); } else { ; }
	
}

void f29(void) {
    	uint8_t x129 = 27U;
	int32_t x130 = -131861;
	int32_t t29 = -661137;

    t29 = ((x129|x130)-(x131&x132));

    if (t29 != -164613) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int16_t x137 = -1;
	static volatile int8_t x138 = INT8_MIN;
	uint64_t x139 = 4210312429097430014LLU;
	volatile int32_t x140 = INT32_MIN;
	uint64_t t30 = 7179LLU;

    t30 = ((x137|x138)-(x139&x140));

    if (t30 != 14236431646118117375LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x141 = 9010U;
	uint8_t x142 = 1U;
	int64_t x143 = INT64_MIN;
	int64_t t31 = 2495779507LL;

    t31 = ((x141|x142)-(x143&x144));

    if (t31 != 9011LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x145 = INT64_MIN;
	int64_t x146 = 26474422676487062LL;
	volatile uint64_t x147 = UINT64_MAX;
	static volatile uint64_t t32 = 634LLU;

    t32 = ((x145|x146)-(x147&x148));

    if (t32 != 9249846459531262615LLU) { NG(); } else { ; }
	
}

void f33(void) {
    	static int8_t x150 = INT8_MIN;
	int8_t x151 = INT8_MIN;
	static volatile int8_t x152 = INT8_MIN;
	volatile int32_t t33 = -40185;

    t33 = ((x149|x150)-(x151&x152));

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x154 = INT64_MIN;
	static int32_t x155 = INT32_MIN;
	int64_t x156 = -1LL;

    t34 = ((x153|x154)-(x155&x156));

    if (t34 != 2147483520LL) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int16_t x157 = INT16_MAX;
	volatile int64_t x158 = -1LL;
	volatile uint32_t x159 = 41736311U;
	int64_t t35 = 3362137LL;

    t35 = ((x157|x158)-(x159&x160));

    if (t35 != -39354466LL) { NG(); } else { ; }
	
}

void f36(void) {
    	int64_t x166 = INT64_MIN;
	int64_t x167 = -1978719LL;
	static int64_t t36 = -499082288923315256LL;

    t36 = ((x165|x166)-(x167&x168));

    if (t36 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f37(void) {
    	uint8_t x169 = UINT8_MAX;
	volatile int32_t t37 = -282276;

    t37 = ((x169|x170)-(x171&x172));

    if (t37 != 255709) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x173 = 0;
	static uint16_t x174 = 7U;
	int8_t x175 = INT8_MIN;
	uint64_t x176 = UINT64_MAX;

    t38 = ((x173|x174)-(x175&x176));

    if (t38 != 135LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	static int16_t x177 = 0;
	int16_t x178 = -48;
	static volatile uint16_t x179 = 4U;
	uint64_t x180 = UINT64_MAX;

    t39 = ((x177|x178)-(x179&x180));

    if (t39 != 18446744073709551564LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int8_t x181 = -1;
	volatile int16_t x182 = -2;
	uint32_t x184 = 56683532U;
	static uint32_t t40 = 40U;

    t40 = ((x181|x182)-(x183&x184));

    if (t40 != 4294967283U) { NG(); } else { ; }
	
}

void f41(void) {
    	uint16_t x185 = UINT16_MAX;
	int8_t x187 = INT8_MIN;
	static uint32_t x188 = 589U;
	uint32_t t41 = 97U;

    t41 = ((x185|x186)-(x187&x188));

    if (t41 != 65023U) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile int8_t x189 = INT8_MIN;
	volatile int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MIN;
	volatile int64_t t42 = 2687837467975462LL;

    t42 = ((x189|x190)-(x191&x192));

    if (t42 != -128LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int64_t x198 = INT64_MIN;
	uint64_t x199 = 32332LLU;
	volatile uint64_t t43 = 46592587LLU;

    t43 = ((x197|x198)-(x199&x200));

    if (t43 != 9336046113773091895LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x201 = -3735;
	uint64_t x202 = 6016620954LLU;
	int64_t x203 = INT64_MAX;
	int64_t x204 = 1893509765LL;
	uint64_t t44 = 17260920997558042LLU;

    t44 = ((x201|x202)-(x203&x204));

    if (t44 != 18446744071816040310LLU) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x207 = 2925U;
	static volatile int64_t t45 = -43411736LL;

    t45 = ((x205|x206)-(x207&x208));

    if (t45 != -9223372036854774040LL) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x209 = 3;
	uint32_t x210 = 440578051U;
	int64_t x211 = INT64_MIN;
	volatile uint16_t x212 = 111U;
	static volatile int64_t t46 = -7331601331091886LL;

    t46 = ((x209|x210)-(x211&x212));

    if (t46 != 440578051LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int16_t x213 = INT16_MIN;
	volatile int32_t x214 = INT32_MIN;
	static int32_t x215 = 51;
	int16_t x216 = -1;
	volatile int32_t t47 = 224;

    t47 = ((x213|x214)-(x215&x216));

    if (t47 != -32819) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int8_t x217 = INT8_MIN;
	static volatile int64_t x219 = -1LL;
	static int64_t t48 = 8211832793720980LL;

    t48 = ((x217|x218)-(x219&x220));

    if (t48 != -2LL) { NG(); } else { ; }
	
}

void f49(void) {
    	static volatile uint32_t x221 = UINT32_MAX;
	volatile int64_t x222 = -14697LL;
	int8_t x223 = 11;
	int8_t x224 = -1;

    t49 = ((x221|x222)-(x223&x224));

    if (t49 != -12LL) { NG(); } else { ; }
	
}

void f50(void) {
    	static uint16_t x226 = 2417U;
	uint32_t x227 = 2035U;
	uint32_t t50 = 3U;

    t50 = ((x225|x226)-(x227&x228));

    if (t50 != 2417U) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x229 = INT8_MIN;
	static int8_t x230 = INT8_MIN;
	static volatile uint16_t x232 = UINT16_MAX;

    t51 = ((x229|x230)-(x231&x232));

    if (t51 != -383) { NG(); } else { ; }
	
}

void f52(void) {
    	int16_t x233 = INT16_MIN;
	static uint64_t x234 = UINT64_MAX;
	static int16_t x235 = INT16_MAX;
	int32_t x236 = 202;
	volatile uint64_t t52 = 305485LLU;

    t52 = ((x233|x234)-(x235&x236));

    if (t52 != 18446744073709551413LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int8_t x237 = INT8_MAX;
	int32_t x240 = 1;
	uint32_t t53 = 15U;

    t53 = ((x237|x238)-(x239&x240));

    if (t53 != 126U) { NG(); } else { ; }
	
}

void f54(void) {
    	static uint32_t x245 = UINT32_MAX;
	int64_t x246 = 4519LL;
	volatile int32_t x247 = INT32_MIN;
	static volatile int8_t x248 = -40;
	volatile int64_t t54 = 21LL;

    t54 = ((x245|x246)-(x247&x248));

    if (t54 != 6442450943LL) { NG(); } else { ; }
	
}

void f55(void) {
    	int64_t x250 = -1LL;
	volatile uint16_t x251 = UINT16_MAX;
	static uint32_t x252 = 4733U;
	volatile int64_t t55 = -248719261387010033LL;

    t55 = ((x249|x250)-(x251&x252));

    if (t55 != -4734LL) { NG(); } else { ; }
	
}

void f56(void) {
    	static int64_t x253 = -1LL;
	volatile uint8_t x254 = 8U;
	int32_t x255 = INT32_MAX;
	static int64_t t56 = -157208743LL;

    t56 = ((x253|x254)-(x255&x256));

    if (t56 != -128LL) { NG(); } else { ; }
	
}

void f57(void) {
    	static int32_t x257 = 1263;
	volatile uint8_t x258 = UINT8_MAX;
	uint16_t x259 = 825U;
	int32_t x260 = -1;
	int32_t t57 = -1;

    t57 = ((x257|x258)-(x259&x260));

    if (t57 != 454) { NG(); } else { ; }
	
}

void f58(void) {
    	static int64_t x261 = INT64_MAX;
	int64_t x262 = INT64_MIN;
	uint8_t x263 = 69U;
	int8_t x264 = INT8_MIN;

    t58 = ((x261|x262)-(x263&x264));

    if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int32_t x265 = -2;
	int16_t x266 = INT16_MAX;
	int32_t x267 = INT32_MIN;
	int8_t x268 = 2;
	volatile int32_t t59 = 124923;

    t59 = ((x265|x266)-(x267&x268));

    if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
    	int64_t x269 = INT64_MIN;
	uint64_t x270 = 1755152348LLU;
	static int32_t x271 = INT32_MAX;
	static int16_t x272 = INT16_MAX;
	static uint64_t t60 = 2411LLU;

    t60 = ((x269|x270)-(x271&x272));

    if (t60 != 9223372038609895389LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x273 = INT64_MAX;
	int64_t x274 = -1LL;
	uint8_t x275 = 1U;
	volatile uint32_t x276 = 126451303U;
	int64_t t61 = 169556411763611LL;

    t61 = ((x273|x274)-(x275&x276));

    if (t61 != -2LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x277 = INT64_MAX;
	static int8_t x278 = -1;
	static int16_t x279 = INT16_MIN;
	uint16_t x280 = UINT16_MAX;
	int64_t t62 = -5LL;

    t62 = ((x277|x278)-(x279&x280));

    if (t62 != -32769LL) { NG(); } else { ; }
	
}

void f63(void) {
    	uint32_t x281 = 8360U;
	int32_t x283 = -187;
	int32_t x284 = INT32_MIN;
	uint32_t t63 = 13677674U;

    t63 = ((x281|x282)-(x283&x284));

    if (t63 != 2147492095U) { NG(); } else { ; }
	
}

void f64(void) {
    	int8_t x285 = INT8_MIN;
	uint64_t t64 = 3279LLU;

    t64 = ((x285|x286)-(x287&x288));

    if (t64 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x290 = 680728502103801LLU;
	uint32_t x291 = UINT32_MAX;
	uint64_t t65 = 31396280574LLU;

    t65 = ((x289|x290)-(x291&x292));

    if (t65 != 18446744073709547519LLU) { NG(); } else { ; }
	
}

void f66(void) {
    	int8_t x294 = INT8_MIN;
	int64_t x295 = -727LL;

    t66 = ((x293|x294)-(x295&x296));

    if (t66 != 32654LL) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x297 = -971253LL;
	static uint8_t x298 = UINT8_MAX;
	int16_t x300 = -1;
	volatile int64_t t67 = -368110316LL;

    t67 = ((x297|x298)-(x299&x300));

    if (t67 != -971038LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x301 = 13;
	volatile uint16_t x302 = 14009U;
	static int8_t x304 = INT8_MIN;
	volatile int32_t t68 = 105684;

    t68 = ((x301|x302)-(x303&x304));

    if (t68 != 14013) { NG(); } else { ; }
	
}

void f69(void) {
    	static int32_t x305 = INT32_MIN;
	static volatile int64_t x306 = -117LL;
	uint8_t x307 = 121U;
	volatile int32_t x308 = INT32_MIN;

    t69 = ((x305|x306)-(x307&x308));

    if (t69 != -117LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int16_t x309 = INT16_MAX;
	volatile int8_t x310 = -5;
	volatile int32_t x311 = INT32_MIN;
	int16_t x312 = -1;
	int32_t t70 = INT32_MAX;

    t70 = ((x309|x310)-(x311&x312));

    if (t70 != INT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
    	int16_t x313 = 31;
	int32_t t71 = 25680324;

    t71 = ((x313|x314)-(x315&x316));

    if (t71 != 255) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x318 = 5099U;
	static int16_t x319 = -19;
	int8_t x320 = 3;
	static volatile uint64_t t72 = 1165LLU;

    t72 = ((x317|x318)-(x319&x320));

    if (t72 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int16_t x321 = INT16_MIN;
	uint16_t x323 = UINT16_MAX;
	int8_t x324 = -3;
	int32_t t73 = 1171444;

    t73 = ((x321|x322)-(x323&x324));

    if (t73 != -65534) { NG(); } else { ; }
	
}

void f74(void) {
    	static volatile int64_t x326 = INT64_MAX;
	volatile uint64_t x327 = 29783647LLU;
	int64_t x328 = 1146922LL;
	volatile uint64_t t74 = 78LLU;

    t74 = ((x325|x326)-(x327&x328));

    if (t74 != 18446744073709551605LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int32_t x329 = -1;
	volatile int32_t x330 = INT32_MIN;
	uint32_t x331 = 401238882U;
	uint32_t t75 = 3U;

    t75 = ((x329|x330)-(x331&x332));

    if (t75 != 4288544255U) { NG(); } else { ; }
	
}

void f76(void) {
    	static int16_t x334 = -6;
	volatile uint16_t x335 = 9575U;
	static int32_t x336 = 13;

    t76 = ((x333|x334)-(x335&x336));

    if (t76 != 18446744073709551609LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int64_t x337 = -1LL;
	int16_t x338 = 1704;
	int32_t x339 = 3406;
	volatile int64_t t77 = 36275506707LL;

    t77 = ((x337|x338)-(x339&x340));

    if (t77 != -3407LL) { NG(); } else { ; }
	
}

void f78(void) {
    	static int16_t x341 = -176;
	int16_t x342 = 2930;
	int16_t x343 = -4430;
	int16_t x344 = INT16_MIN;
	volatile int32_t t78 = -201;

    t78 = ((x341|x342)-(x343&x344));

    if (t78 != 32626) { NG(); } else { ; }
	
}

void f79(void) {
    	uint16_t x345 = UINT16_MAX;
	uint32_t x346 = UINT32_MAX;
	int8_t x347 = INT8_MIN;
	volatile int16_t x348 = INT16_MIN;
	uint32_t t79 = 149U;

    t79 = ((x345|x346)-(x347&x348));

    if (t79 != 32767U) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x349 = -128;
	static uint64_t x351 = UINT64_MAX;
	int64_t x352 = INT64_MIN;
	volatile uint64_t t80 = 0LLU;

    t80 = ((x349|x350)-(x351&x352));

    if (t80 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x353 = INT32_MIN;
	int16_t x354 = INT16_MIN;
	volatile uint32_t x356 = 67754U;
	uint32_t t81 = 3U;

    t81 = ((x353|x354)-(x355&x356));

    if (t81 != 4294934526U) { NG(); } else { ; }
	
}

void f82(void) {
    	static uint32_t x357 = 825668U;
	int8_t x358 = -19;
	static uint64_t x360 = UINT64_MAX;
	volatile uint64_t t82 = 7575905LLU;

    t82 = ((x357|x358)-(x359&x360));

    if (t82 != 6442450925LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x365 = INT8_MIN;
	volatile int16_t x367 = -1;
	int64_t t83 = -623563970LL;

    t83 = ((x365|x366)-(x367&x368));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	static int8_t x369 = INT8_MIN;
	int16_t x370 = INT16_MAX;
	int16_t x371 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	int32_t t84 = -286634;

    t84 = ((x369|x370)-(x371&x372));

    if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
    	int64_t x373 = INT64_MAX;
	int64_t x374 = INT64_MIN;
	static volatile int8_t x375 = 0;
	int32_t x376 = 6991;

    t85 = ((x373|x374)-(x375&x376));

    if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
    	uint16_t x377 = UINT16_MAX;
	uint16_t x378 = UINT16_MAX;
	int32_t x379 = 290965893;
	volatile int32_t t86 = -26;

    t86 = ((x377|x378)-(x379&x380));

    if (t86 != -290900358) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x381 = INT64_MAX;
	uint16_t x382 = 6U;
	int64_t x383 = INT64_MAX;
	int64_t x384 = INT64_MIN;

    t87 = ((x381|x382)-(x383&x384));

    if (t87 != INT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
    	uint32_t x385 = 6882U;
	int32_t x387 = 0;
	static uint64_t x388 = 29798091288203820LLU;

    t88 = ((x385|x386)-(x387&x388));

    if (t88 != 2147490530LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x389 = INT16_MAX;
	int64_t x390 = -1LL;
	int8_t x392 = -4;
	volatile int64_t t89 = -67LL;

    t89 = ((x389|x390)-(x391&x392));

    if (t89 != -65533LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x394 = INT32_MAX;
	int8_t x395 = 6;
	int16_t x396 = INT16_MIN;
	int32_t t90 = INT32_MAX;

    t90 = ((x393|x394)-(x395&x396));

    if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
    	uint64_t x397 = 923LLU;
	volatile int8_t x398 = INT8_MAX;
	int16_t x399 = -1;
	static int16_t x400 = INT16_MIN;

    t91 = ((x397|x398)-(x399&x400));

    if (t91 != 33791LLU) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x401 = 55080208LLU;
	int16_t x404 = 425;

    t92 = ((x401|x402)-(x403&x404));

    if (t92 != 9223372036909855591LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x405 = 10U;
	volatile int64_t x406 = INT64_MAX;
	uint64_t x407 = 173173092876182826LLU;
	int8_t x408 = 25;
	uint64_t t93 = 102LLU;

    t93 = ((x405|x406)-(x407&x408));

    if (t93 != 9223372036854775799LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x409 = 18;
	static int64_t x410 = INT64_MAX;
	volatile uint64_t x411 = 113506LLU;
	static volatile int16_t x412 = INT16_MIN;
	uint64_t t94 = 2676750626LLU;

    t94 = ((x409|x410)-(x411&x412));

    if (t94 != 9223372036854677503LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x413 = INT16_MAX;
	static volatile int32_t x414 = INT32_MIN;
	uint8_t x415 = 1U;
	int64_t x416 = INT64_MAX;
	static volatile int64_t t95 = 39371991903LL;

    t95 = ((x413|x414)-(x415&x416));

    if (t95 != -2147450882LL) { NG(); } else { ; }
	
}

void f96(void) {
    	int16_t x417 = INT16_MAX;
	int32_t x418 = -1532;
	uint64_t x419 = 158102645431444LLU;
	uint64_t x420 = 2462014145308LLU;
	uint64_t t96 = 4693370LLU;

    t96 = ((x417|x418)-(x419&x420));

    if (t96 != 18446741835494686699LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	uint8_t x421 = 34U;
	uint32_t x422 = UINT32_MAX;
	int16_t x423 = -1;
	volatile uint64_t x424 = 4751000690LLU;
	volatile uint64_t t97 = 1644949626367LLU;

    t97 = ((x421|x422)-(x423&x424));

    if (t97 != 18446744073253518221LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	volatile uint64_t x425 = UINT64_MAX;
	static uint32_t x426 = 1670877949U;
	uint32_t x427 = UINT32_MAX;
	int64_t x428 = INT64_MIN;
	uint64_t t98 = UINT64_MAX;

    t98 = ((x425|x426)-(x427&x428));

    if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile uint16_t x429 = 42U;
	int64_t x430 = -1LL;
	int64_t x432 = 4734LL;
	int64_t t99 = -1843386LL;

    t99 = ((x429|x430)-(x431&x432));

    if (t99 != -127LL) { NG(); } else { ; }
	
}

void f100(void) {
    	uint64_t x433 = UINT64_MAX;
	static int32_t x434 = INT32_MIN;

    t100 = ((x433|x434)-(x435&x436));

    if (t100 != 18446744073709551573LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x437 = UINT32_MAX;
	static uint64_t x438 = UINT64_MAX;
	int64_t x440 = -60934194454558892LL;
	volatile uint64_t t101 = 897680LLU;

    t101 = ((x437|x438)-(x439&x440));

    if (t101 != 18446744073709551531LLU) { NG(); } else { ; }
	
}

void f102(void) {
    	uint64_t x442 = 13093626500LLU;
	int16_t x443 = -1;
	uint64_t t102 = 639LLU;

    t102 = ((x441|x442)-(x443&x444));

    if (t102 != 18446744073709551520LLU) { NG(); } else { ; }
	
}

void f103(void) {
    	int32_t x445 = INT32_MIN;
	uint32_t x446 = 31556033U;
	static volatile int32_t x447 = INT32_MAX;
	int32_t x448 = INT32_MIN;

    t103 = ((x445|x446)-(x447&x448));

    if (t103 != 2179039681U) { NG(); } else { ; }
	
}

void f104(void) {
    	static volatile int8_t x449 = -32;
	int64_t x450 = -1LL;
	uint32_t x451 = UINT32_MAX;
	static int16_t x452 = -1;

    t104 = ((x449|x450)-(x451&x452));

    if (t104 != -4294967296LL) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x454 = -10169;
	uint8_t x455 = UINT8_MAX;
	volatile int32_t x456 = -15993853;
	int32_t t105 = 3785403;

    t105 = ((x453|x454)-(x455&x456));

    if (t105 != -4) { NG(); } else { ; }
	
}

void f106(void) {
    	int16_t x457 = 14;
	uint32_t x458 = 1819221008U;
	int32_t x459 = 162649;
	static int64_t t106 = 36LL;

    t106 = ((x457|x458)-(x459&x460));

    if (t106 != 1819058373LL) { NG(); } else { ; }
	
}

void f107(void) {
    	volatile uint8_t x461 = 3U;
	int8_t x462 = INT8_MIN;
	int8_t x463 = INT8_MIN;
	int32_t x464 = 42068;
	volatile int32_t t107 = -1833331;

    t107 = ((x461|x462)-(x463&x464));

    if (t107 != -42109) { NG(); } else { ; }
	
}

void f108(void) {
    	volatile int8_t x465 = -1;
	volatile uint8_t x466 = 3U;
	static int16_t x467 = INT16_MAX;
	int64_t x468 = -1LL;
	volatile int64_t t108 = -7550313825297746LL;

    t108 = ((x465|x466)-(x467&x468));

    if (t108 != -32768LL) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x469 = -3;
	uint32_t x470 = 0U;
	int16_t x472 = INT16_MIN;
	volatile uint32_t t109 = 224225U;

    t109 = ((x469|x470)-(x471&x472));

    if (t109 != 4294967293U) { NG(); } else { ; }
	
}

void f110(void) {
    	static int64_t x473 = INT64_MIN;
	int64_t x474 = INT64_MAX;
	uint8_t x476 = 0U;
	int64_t t110 = -430155926462LL;

    t110 = ((x473|x474)-(x475&x476));

    if (t110 != -1LL) { NG(); } else { ; }
	
}

void f111(void) {
    	int32_t x485 = 2251854;
	int16_t x487 = 31;
	volatile uint64_t x488 = UINT64_MAX;
	uint64_t t111 = 37LLU;

    t111 = ((x485|x486)-(x487&x488));

    if (t111 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int32_t x489 = INT32_MAX;
	static volatile int16_t x490 = 2364;
	int64_t x491 = 1471715348300828LL;
	volatile int64_t x492 = INT64_MAX;
	volatile int64_t t112 = -798303330LL;

    t112 = ((x489|x490)-(x491&x492));

    if (t112 != -1471713200817181LL) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x493 = 25779289LLU;
	uint8_t x494 = 60U;
	static uint8_t x495 = 69U;
	volatile uint16_t x496 = 0U;
	uint64_t t113 = 152492253LLU;

    t113 = ((x493|x494)-(x495&x496));

    if (t113 != 25779325LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x498 = INT8_MAX;
	static int32_t x499 = -7979269;
	static int32_t x500 = 181307;
	volatile int32_t t114 = -4357;

    t114 = ((x497|x498)-(x499&x500));

    if (t114 != -164796) { NG(); } else { ; }
	
}

void f115(void) {
    	static uint64_t x501 = UINT64_MAX;
	uint8_t x502 = UINT8_MAX;
	uint32_t x503 = 0U;
	volatile uint64_t t115 = UINT64_MAX;

    t115 = ((x501|x502)-(x503&x504));

    if (t115 != UINT64_MAX) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x505 = -119945025820474LL;
	int64_t x506 = -149LL;
	uint16_t x507 = UINT16_MAX;
	int64_t t116 = 562584LL;

    t116 = ((x505|x506)-(x507&x508));

    if (t116 != -23LL) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x509 = INT32_MAX;
	static int16_t x510 = INT16_MAX;
	uint32_t x512 = 4U;
	uint32_t t117 = 1615U;

    t117 = ((x509|x510)-(x511&x512));

    if (t117 != 2147483647U) { NG(); } else { ; }
	
}

void f118(void) {
    	int64_t x514 = 65434LL;
	volatile uint8_t x515 = 2U;
	int8_t x516 = -1;
	static volatile int64_t t118 = 203961LL;

    t118 = ((x513|x514)-(x515&x516));

    if (t118 != -9223372036854710376LL) { NG(); } else { ; }
	
}

void f119(void) {
    	volatile uint64_t x517 = 25LLU;
	int8_t x519 = INT8_MIN;
	int64_t x520 = -1LL;
	uint64_t t119 = 51LLU;

    t119 = ((x517|x518)-(x519&x520));

    if (t119 != 18446744071562068121LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int16_t x521 = INT16_MIN;
	volatile uint64_t x523 = UINT64_MAX;
	int64_t x524 = -1LL;

    t120 = ((x521|x522)-(x523&x524));

    if (t120 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	volatile int8_t x525 = INT8_MIN;
	volatile int16_t x526 = INT16_MIN;
	static volatile int16_t x527 = INT16_MIN;
	volatile int32_t t121 = -3002;

    t121 = ((x525|x526)-(x527&x528));

    if (t121 != 32640) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x529 = 35U;
	volatile uint8_t x530 = 2U;
	uint64_t x531 = 1023603476503280579LLU;
	uint16_t x532 = UINT16_MAX;
	volatile uint64_t t122 = 45LLU;

    t122 = ((x529|x530)-(x531&x532));

    if (t122 != 18446744073709536352LLU) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile uint32_t x534 = 9517537U;
	volatile int8_t x535 = INT8_MAX;
	int16_t x536 = -13;

    t123 = ((x533|x534)-(x535&x536));

    if (t123 != 4294967180U) { NG(); } else { ; }
	
}

void f124(void) {
    	uint32_t x538 = UINT32_MAX;
	static int32_t x539 = -352;
	uint32_t t124 = 11768283U;

    t124 = ((x537|x538)-(x539&x540));

    if (t124 != 4294967135U) { NG(); } else { ; }
	
}

void f125(void) {
    	int8_t x541 = INT8_MIN;
	int32_t x542 = INT32_MIN;
	volatile uint64_t x543 = UINT64_MAX;
	uint16_t x544 = 221U;

    t125 = ((x541|x542)-(x543&x544));

    if (t125 != 18446744073709551267LLU) { NG(); } else { ; }
	
}

void f126(void) {
    	static int8_t x545 = -45;
	static uint32_t x546 = 960658U;
	volatile uint32_t x547 = 505023690U;
	volatile int64_t t126 = -65604875403599LL;

    t126 = ((x545|x546)-(x547&x548));

    if (t126 != 4126668625LL) { NG(); } else { ; }
	
}

void f127(void) {
    	int64_t x549 = INT64_MIN;
	volatile int64_t x550 = -10LL;
	volatile uint32_t x551 = 22756175U;
	int8_t x552 = -1;
	int64_t t127 = -14305057LL;

    t127 = ((x549|x550)-(x551&x552));

    if (t127 != -22756185LL) { NG(); } else { ; }
	
}

void f128(void) {
    	static int32_t x553 = 42324615;
	static int16_t x554 = INT16_MAX;
	int8_t x555 = INT8_MIN;
	volatile int32_t t128 = -7866;

    t128 = ((x553|x554)-(x555&x556));

    if (t128 != 42336383) { NG(); } else { ; }
	
}

void f129(void) {
    	volatile int32_t x557 = INT32_MAX;
	int16_t x558 = INT16_MAX;
	volatile int64_t x559 = -1LL;
	int64_t x560 = -1LL;
	int64_t t129 = -19353728613LL;

    t129 = ((x557|x558)-(x559&x560));

    if (t129 != 2147483648LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int64_t x562 = 6368250LL;
	uint32_t x563 = 1U;
	int64_t x564 = -97965684LL;

    t130 = ((x561|x562)-(x563&x564));

    if (t130 != 6368251LL) { NG(); } else { ; }
	
}

void f131(void) {
    	uint16_t x565 = UINT16_MAX;
	uint64_t x566 = 1272229081122875867LLU;
	static int16_t x567 = INT16_MIN;
	uint16_t x568 = 6U;
	static volatile uint64_t t131 = 32506008087764426LLU;

    t131 = ((x565|x566)-(x567&x568));

    if (t131 != 1272229081122930687LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int8_t x569 = 1;
	uint8_t x571 = UINT8_MAX;
	int32_t x572 = 941;

    t132 = ((x569|x570)-(x571&x572));

    if (t132 != 285943392) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int32_t x573 = INT32_MAX;
	volatile int16_t x574 = -2;
	static int16_t x575 = 0;
	uint8_t x576 = UINT8_MAX;
	volatile int32_t t133 = 974542669;

    t133 = ((x573|x574)-(x575&x576));

    if (t133 != -1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x577 = INT32_MIN;
	uint64_t x579 = 482387537LLU;
	uint32_t x580 = 3649U;
	uint64_t t134 = 3093695307080509LLU;

    t134 = ((x577|x578)-(x579&x580));

    if (t134 != 2243763277LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x581 = UINT64_MAX;
	int32_t x582 = INT32_MIN;
	int64_t x583 = INT64_MIN;
	int64_t x584 = 8181155LL;
	uint64_t t135 = UINT64_MAX;

    t135 = ((x581|x582)-(x583&x584));

    if (t135 != UINT64_MAX) { NG(); } else { ; }
	
}

void f136(void) {
    	uint8_t x585 = 19U;
	uint16_t x587 = 7U;
	int32_t x588 = INT32_MAX;
	int32_t t136 = 110794;

    t136 = ((x585|x586)-(x587&x588));

    if (t136 != 248) { NG(); } else { ; }
	
}

void f137(void) {
    	int16_t x589 = -205;
	static int32_t x590 = INT32_MIN;
	int8_t x591 = -1;
	int16_t x592 = -124;

    t137 = ((x589|x590)-(x591&x592));

    if (t137 != -81) { NG(); } else { ; }
	
}

void f138(void) {
    	int64_t x593 = 7LL;
	uint64_t x594 = 269853284521182LLU;
	uint64_t x596 = 7LLU;
	uint64_t t138 = 845185637LLU;

    t138 = ((x593|x594)-(x595&x596));

    if (t138 != 269853284521181LLU) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int8_t x597 = INT8_MAX;
	volatile int16_t x598 = -1;
	static uint16_t x599 = UINT16_MAX;
	volatile int32_t t139 = 14;

    t139 = ((x597|x598)-(x599&x600));

    if (t139 != -19) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int8_t x601 = 0;
	int32_t x602 = 216274427;
	static int16_t x603 = INT16_MAX;
	static int64_t x604 = -1LL;
	int64_t t140 = -74495516741LL;

    t140 = ((x601|x602)-(x603&x604));

    if (t140 != 216241660LL) { NG(); } else { ; }
	
}

void f141(void) {
    	int64_t x605 = INT64_MAX;
	uint32_t x606 = 5U;
	int8_t x607 = INT8_MAX;

    t141 = ((x605|x606)-(x607&x608));

    if (t141 != INT64_MAX) { NG(); } else { ; }
	
}

void f142(void) {
    	int64_t x613 = -1LL;
	int16_t x614 = INT16_MIN;
	int16_t x615 = -1;
	volatile uint8_t x616 = UINT8_MAX;
	static volatile int64_t t142 = 1859928097252LL;

    t142 = ((x613|x614)-(x615&x616));

    if (t142 != -256LL) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x617 = -2;
	static int8_t x619 = INT8_MAX;
	int64_t x620 = INT64_MIN;
	int64_t t143 = -9796056LL;

    t143 = ((x617|x618)-(x619&x620));

    if (t143 != -1LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int32_t x621 = INT32_MAX;
	volatile int8_t x622 = INT8_MAX;
	volatile uint64_t x623 = UINT64_MAX;
	uint16_t x624 = 4U;
	volatile uint64_t t144 = 134LLU;

    t144 = ((x621|x622)-(x623&x624));

    if (t144 != 2147483643LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int8_t x625 = 3;
	uint64_t x626 = 1LLU;
	volatile int64_t x627 = -194686365347LL;
	int32_t x628 = INT32_MIN;
	static uint64_t t145 = 4919118096487833LLU;

    t145 = ((x625|x626)-(x627&x628));

    if (t145 != 195421011971LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x630 = INT16_MIN;
	volatile int16_t x632 = -1;
	static volatile int64_t t146 = -201671405660LL;

    t146 = ((x629|x630)-(x631&x632));

    if (t146 != -32768LL) { NG(); } else { ; }
	
}

void f147(void) {
    	uint16_t x633 = 2U;
	int16_t x634 = INT16_MIN;
	int16_t x635 = INT16_MIN;
	static int32_t t147 = -8063;

    t147 = ((x633|x634)-(x635&x636));

    if (t147 != 2) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x637 = -1;
	volatile int64_t x639 = -354999LL;
	int64_t x640 = 124LL;
	int64_t t148 = 1956053321892097LL;

    t148 = ((x637|x638)-(x639&x640));

    if (t148 != -73LL) { NG(); } else { ; }
	
}

void f149(void) {
    	static int16_t x641 = -1;
	volatile int64_t x642 = -1LL;
	int64_t x643 = -1LL;
	int32_t x644 = -843301587;
	static volatile int64_t t149 = 183776LL;

    t149 = ((x641|x642)-(x643&x644));

    if (t149 != 843301586LL) { NG(); } else { ; }
	
}

void f150(void) {
    	int16_t x646 = INT16_MIN;
	static int64_t x647 = INT64_MIN;
	uint16_t x648 = UINT16_MAX;
	int64_t t150 = 543617300117407874LL;

    t150 = ((x645|x646)-(x647&x648));

    if (t150 != -32767LL) { NG(); } else { ; }
	
}

void f151(void) {
    	int64_t x649 = -1LL;
	static uint64_t x650 = 18420313871905LLU;
	uint64_t x651 = 31991257578013LLU;
	int32_t x652 = INT32_MIN;
	static volatile uint64_t t151 = 740871588847176191LLU;

    t151 = ((x649|x650)-(x651&x652));

    if (t151 != 18446712082645647359LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint16_t x653 = 157U;
	static volatile int8_t x654 = INT8_MIN;
	uint64_t x655 = 103LLU;
	int8_t x656 = 2;
	static volatile uint64_t t152 = 119LLU;

    t152 = ((x653|x654)-(x655&x656));

    if (t152 != 18446744073709551515LLU) { NG(); } else { ; }
	
}

void f153(void) {
    	uint8_t x657 = 8U;
	uint32_t x658 = UINT32_MAX;
	uint64_t x659 = 2104560130761897LLU;
	volatile uint64_t t153 = 4304398330507LLU;

    t153 = ((x657|x658)-(x659&x660));

    if (t153 != 4294967295LLU) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint64_t x665 = 959615386LLU;
	int64_t x666 = -14389372503985LL;
	uint64_t x667 = 24428960LLU;
	int16_t x668 = -1;
	uint64_t t154 = 8570928828LLU;

    t154 = ((x665|x666)-(x667&x668));

    if (t154 != 18446729684465875007LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile int8_t x669 = 2;
	volatile int16_t x670 = -1;
	int64_t t155 = -274383LL;

    t155 = ((x669|x670)-(x671&x672));

    if (t155 != -1LL) { NG(); } else { ; }
	
}

void f156(void) {
    	static int64_t x673 = INT64_MAX;
	int32_t x674 = -1;
	int8_t x675 = INT8_MIN;
	int32_t x676 = INT32_MIN;
	volatile int64_t t156 = -1071102851LL;

    t156 = ((x673|x674)-(x675&x676));

    if (t156 != 2147483647LL) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x677 = 20U;
	volatile uint16_t x678 = UINT16_MAX;
	uint64_t x679 = UINT64_MAX;
	int64_t x680 = 358827694702LL;
	static volatile uint64_t t157 = 3129LLU;

    t157 = ((x677|x678)-(x679&x680));

    if (t157 != 18446743714881922449LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static uint64_t x681 = 1562622789480752LLU;
	static int8_t x682 = -2;
	volatile uint16_t x683 = UINT16_MAX;
	uint32_t x684 = 170U;
	uint64_t t158 = 282846451394237465LLU;

    t158 = ((x681|x682)-(x683&x684));

    if (t158 != 18446744073709551444LLU) { NG(); } else { ; }
	
}

void f159(void) {
    	int64_t x685 = -4LL;
	int64_t x686 = -40148241010659LL;
	static volatile int64_t x687 = INT64_MAX;
	int64_t t159 = 34867767425491LL;

    t159 = ((x685|x686)-(x687&x688));

    if (t159 != -32770LL) { NG(); } else { ; }
	
}

void f160(void) {
    	int16_t x689 = -1975;
	uint32_t x690 = 4U;
	int32_t x691 = 28;
	int32_t x692 = -1;
	uint32_t t160 = 26742U;

    t160 = ((x689|x690)-(x691&x692));

    if (t160 != 4294965297U) { NG(); } else { ; }
	
}

void f161(void) {
    	static volatile int8_t x693 = INT8_MAX;
	int64_t x694 = INT64_MAX;
	int8_t x696 = INT8_MAX;

    t161 = ((x693|x694)-(x695&x696));

    if (t161 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f162(void) {
    	static int16_t x698 = -1;
	int16_t x700 = -1;
	volatile int64_t t162 = 446LL;

    t162 = ((x697|x698)-(x699&x700));

    if (t162 != -357LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int8_t x701 = INT8_MIN;
	int64_t x702 = INT64_MIN;
	uint16_t x703 = UINT16_MAX;
	volatile int64_t x704 = 6LL;

    t163 = ((x701|x702)-(x703&x704));

    if (t163 != -134LL) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x705 = INT16_MIN;
	uint32_t x706 = 11U;
	uint8_t x707 = 34U;
	uint8_t x708 = 7U;
	volatile uint32_t t164 = 15315113U;

    t164 = ((x705|x706)-(x707&x708));

    if (t164 != 4294934537U) { NG(); } else { ; }
	
}

void f165(void) {
    	uint16_t x709 = UINT16_MAX;
	static volatile int64_t x710 = -1LL;
	int64_t x711 = INT64_MIN;
	int32_t x712 = INT32_MIN;
	static int64_t t165 = INT64_MAX;

    t165 = ((x709|x710)-(x711&x712));

    if (t165 != INT64_MAX) { NG(); } else { ; }
	
}

void f166(void) {
    	volatile int16_t x713 = INT16_MAX;
	uint32_t x714 = 36U;
	volatile uint16_t x715 = 2101U;
	int64_t x716 = -1LL;
	int64_t t166 = -1215207567LL;

    t166 = ((x713|x714)-(x715&x716));

    if (t166 != 30666LL) { NG(); } else { ; }
	
}

void f167(void) {
    	uint32_t x717 = 2042436U;
	volatile int32_t x718 = 48152;
	volatile uint64_t x719 = UINT64_MAX;
	uint64_t t167 = 2184841500398077749LLU;

    t167 = ((x717|x718)-(x719&x720));

    if (t167 != 2079711LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x721 = -1;
	uint32_t x722 = UINT32_MAX;
	uint64_t t168 = 8255883168648482890LLU;

    t168 = ((x721|x722)-(x723&x724));

    if (t168 != 18426699363903910348LLU) { NG(); } else { ; }
	
}

void f169(void) {
    	int64_t x730 = INT64_MIN;
	static volatile int64_t x731 = INT64_MAX;
	int32_t x732 = -4733;

    t169 = ((x729|x730)-(x731&x732));

    if (t169 != -9223372036854771076LL) { NG(); } else { ; }
	
}

void f170(void) {
    	int8_t x733 = 1;
	static int64_t x734 = INT64_MAX;
	uint32_t x735 = UINT32_MAX;
	volatile int8_t x736 = -1;
	static int64_t t170 = 168LL;

    t170 = ((x733|x734)-(x735&x736));

    if (t170 != 9223372032559808512LL) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x737 = 118660287130544LL;
	uint64_t x738 = 219928316201183LLU;
	volatile int64_t x739 = 16064862376LL;
	uint8_t x740 = UINT8_MAX;

    t171 = ((x737|x738)-(x739&x740));

    if (t171 != 259415176112983LLU) { NG(); } else { ; }
	
}

void f172(void) {
    	int8_t x742 = INT8_MIN;
	static uint8_t x743 = UINT8_MAX;
	volatile uint32_t t172 = 587681514U;

    t172 = ((x741|x742)-(x743&x744));

    if (t172 != 4294967040U) { NG(); } else { ; }
	
}

void f173(void) {
    	static uint64_t x746 = 38041591LLU;
	uint8_t x747 = UINT8_MAX;
	int16_t x748 = INT16_MIN;
	static volatile uint64_t t173 = 327157950LLU;

    t173 = ((x745|x746)-(x747&x748));

    if (t173 != 18446744073709549559LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x749 = 3;
	volatile uint32_t x751 = UINT32_MAX;
	int16_t x752 = -160;
	static volatile uint32_t t174 = 12115U;

    t174 = ((x749|x750)-(x751&x752));

    if (t174 != 2147483807U) { NG(); } else { ; }
	
}

void f175(void) {
    	static int16_t x753 = -104;
	uint64_t x754 = UINT64_MAX;
	int64_t x755 = -1LL;
	int8_t x756 = INT8_MIN;
	uint64_t t175 = 7793LLU;

    t175 = ((x753|x754)-(x755&x756));

    if (t175 != 127LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x757 = INT8_MIN;
	static int8_t x758 = 7;
	int32_t x759 = -460293;
	static int8_t x760 = INT8_MIN;
	int32_t t176 = 283817294;

    t176 = ((x757|x758)-(x759&x760));

    if (t176 != 460295) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int64_t x761 = -70156237376478368LL;
	int8_t x762 = INT8_MIN;
	static int8_t x763 = 47;
	int32_t x764 = INT32_MIN;
	int64_t t177 = 200LL;

    t177 = ((x761|x762)-(x763&x764));

    if (t177 != -32LL) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x765 = UINT64_MAX;
	int64_t x766 = -150567811LL;
	uint32_t x767 = 50447U;
	static int16_t x768 = -1;
	uint64_t t178 = 35144424610052LLU;

    t178 = ((x765|x766)-(x767&x768));

    if (t178 != 18446744073709501168LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	uint32_t x769 = 0U;
	uint64_t x770 = 14LLU;
	int64_t x771 = INT64_MIN;
	volatile uint64_t x772 = 2874671336640169LLU;

    t179 = ((x769|x770)-(x771&x772));

    if (t179 != 14LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int32_t x773 = -9722;
	int32_t x774 = -4048425;
	int16_t x775 = INT16_MIN;
	int32_t t180 = -66265866;

    t180 = ((x773|x774)-(x775&x776));

    if (t180 != 31703) { NG(); } else { ; }
	
}

void f181(void) {
    	volatile uint64_t x777 = 12567302815117307LLU;
	int16_t x778 = -4058;
	uint8_t x780 = UINT8_MAX;
	volatile uint64_t t181 = UINT64_MAX;

    t181 = ((x777|x778)-(x779&x780));

    if (t181 != UINT64_MAX) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x781 = INT32_MIN;
	int32_t x782 = -1;
	int16_t x783 = INT16_MIN;
	int32_t t182 = 4374;

    t182 = ((x781|x782)-(x783&x784));

    if (t182 != 32767) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x785 = 5108894011426228LL;
	uint32_t x786 = UINT32_MAX;
	uint8_t x787 = UINT8_MAX;
	int8_t x788 = INT8_MIN;
	volatile int64_t t183 = 1011839LL;

    t183 = ((x785|x786)-(x787&x788));

    if (t183 != 5108897958330239LL) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x793 = UINT8_MAX;
	int32_t x794 = 8;
	int64_t x796 = INT64_MIN;
	volatile int64_t t184 = 57991LL;

    t184 = ((x793|x794)-(x795&x796));

    if (t184 != 255LL) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int32_t x797 = -1;
	uint16_t x798 = UINT16_MAX;
	uint32_t x799 = 334365135U;
	int64_t x800 = INT64_MIN;

    t185 = ((x797|x798)-(x799&x800));

    if (t185 != -1LL) { NG(); } else { ; }
	
}

void f186(void) {
    	int64_t x802 = INT64_MAX;
	int32_t x803 = -5;
	int32_t x804 = INT32_MAX;
	uint64_t t186 = 136964784734419LLU;

    t186 = ((x801|x802)-(x803&x804));

    if (t186 != 9223372034707292164LLU) { NG(); } else { ; }
	
}

void f187(void) {
    	int32_t x806 = INT32_MIN;
	int64_t x807 = 5683057089120069LL;
	volatile int64_t t187 = -6781096LL;

    t187 = ((x805|x806)-(x807&x808));

    if (t187 != -5683057089152837LL) { NG(); } else { ; }
	
}

void f188(void) {
    	static int64_t x809 = INT64_MAX;
	int32_t x812 = 45;
	static volatile uint64_t t188 = 259326LLU;

    t188 = ((x809|x810)-(x811&x812));

    if (t188 != 18446744073709551583LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x813 = INT32_MIN;
	uint8_t x814 = 47U;
	uint8_t x815 = 43U;
	int8_t x816 = INT8_MIN;
	int32_t t189 = -4000;

    t189 = ((x813|x814)-(x815&x816));

    if (t189 != -2147483601) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x817 = INT32_MAX;
	static volatile int64_t x819 = INT64_MAX;
	int32_t x820 = 13457582;
	int64_t t190 = -66092212994LL;

    t190 = ((x817|x818)-(x819&x820));

    if (t190 != 2309597175129937LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x821 = -103143813129003LL;
	volatile int64_t x822 = INT64_MAX;
	uint8_t x823 = 107U;
	static volatile int32_t x824 = -1;
	int64_t t191 = 12732759947778LL;

    t191 = ((x821|x822)-(x823&x824));

    if (t191 != -108LL) { NG(); } else { ; }
	
}

void f192(void) {
    	static int16_t x825 = -1;
	int16_t x826 = -1;
	int32_t x828 = INT32_MIN;

    t192 = ((x825|x826)-(x827&x828));

    if (t192 != 2147483647U) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x830 = INT8_MIN;
	int16_t x831 = INT16_MIN;
	volatile int64_t t193 = INT64_MAX;

    t193 = ((x829|x830)-(x831&x832));

    if (t193 != INT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	uint64_t x833 = 2298661028237LLU;
	int64_t x835 = -873514926253805972LL;
	int64_t x836 = INT64_MIN;

    t194 = ((x833|x834)-(x835&x836));

    if (t194 != 9223372036854775693LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	int64_t x837 = -1LL;
	int8_t x838 = 1;
	int16_t x839 = INT16_MAX;
	int8_t x840 = -1;
	int64_t t195 = -9041858583400LL;

    t195 = ((x837|x838)-(x839&x840));

    if (t195 != -32768LL) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x841 = INT8_MIN;
	int16_t x842 = 4;
	int16_t x843 = -1;
	uint32_t x844 = 55989U;
	uint32_t t196 = 1008U;

    t196 = ((x841|x842)-(x843&x844));

    if (t196 != 4294911183U) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x846 = 2130LLU;
	volatile int64_t x848 = -6LL;
	volatile uint64_t t197 = 7146479550LLU;

    t197 = ((x845|x846)-(x847&x848));

    if (t197 != 18446744073678630275LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int32_t x849 = -19341405;
	static uint32_t x851 = 8015U;
	volatile int64_t x852 = -1LL;
	volatile int64_t t198 = -5836LL;

    t198 = ((x849|x850)-(x851&x852));

    if (t198 != 4275953772LL) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x854 = INT8_MIN;
	volatile int64_t x855 = -1LL;
	static int64_t x856 = 32996489473846LL;
	volatile int64_t t199 = -417662LL;

    t199 = ((x853|x854)-(x855&x856));

    if (t199 != -32996489473903LL) { NG(); } else { ; }
	
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

