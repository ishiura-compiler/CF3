
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

int8_t x1 = -1;
int16_t x3 = -1;
volatile int64_t x11 = INT64_MIN;
static volatile int32_t t2 = -143052;
static uint8_t x18 = 27U;
int8_t x20 = INT8_MIN;
volatile int32_t t4 = -5706;
int64_t x29 = -1LL;
uint32_t x32 = 122U;
static int32_t t7 = -2;
uint64_t x40 = 10281788737320219LLU;
uint8_t x43 = 121U;
int8_t x48 = INT8_MIN;
static int32_t t12 = -3755;
int64_t x68 = -1433897630470LL;
int32_t t15 = 1702;
uint64_t x72 = 6LLU;
uint32_t x74 = 1151U;
volatile int32_t t17 = 33341188;
volatile int8_t x85 = -15;
int32_t t20 = -1666;
int8_t x105 = -16;
int8_t x107 = -1;
int32_t t23 = -16774030;
uint8_t x109 = UINT8_MAX;
int8_t x112 = 0;
int32_t t25 = -68309662;
int8_t x121 = INT8_MIN;
int32_t x128 = -1774;
int8_t x142 = INT8_MIN;
static int8_t x155 = -19;
static int16_t x157 = INT16_MIN;
int16_t x158 = -355;
static int16_t x159 = -1;
static uint8_t x167 = 8U;
uint32_t x174 = UINT32_MAX;
uint8_t x194 = 0U;
static volatile int32_t t40 = 715415443;
uint16_t x200 = UINT16_MAX;
int32_t t43 = -81796;
static int8_t x215 = INT8_MIN;
static int8_t x218 = INT8_MAX;
int16_t x221 = INT16_MIN;
static int64_t x222 = -105112795LL;
uint16_t x224 = 30065U;
int32_t t49 = 63;
int16_t x240 = -167;
uint32_t x250 = UINT32_MAX;
int8_t x251 = INT8_MAX;
volatile int32_t x254 = -12499;
static uint32_t x275 = 84635960U;
volatile int32_t t57 = 306701646;
int8_t x283 = 50;
uint16_t x286 = UINT16_MAX;
int8_t x291 = INT8_MIN;
volatile int32_t t62 = -6;
uint64_t x303 = UINT64_MAX;
int64_t x304 = 402LL;
uint64_t x306 = 117376389304664LLU;
static volatile int32_t x311 = INT32_MIN;
int16_t x314 = INT16_MAX;
uint32_t x319 = 249U;
int32_t x331 = INT32_MIN;
uint32_t x336 = 238637961U;
volatile int16_t x337 = INT16_MAX;
volatile int64_t x338 = INT64_MIN;
uint32_t x342 = 10293U;
int8_t x344 = INT8_MAX;
int16_t x345 = -1;
int64_t x349 = -1LL;
int32_t t76 = -30330;
volatile int16_t x372 = 1568;
uint8_t x377 = 41U;
uint64_t x378 = UINT64_MAX;
int32_t x380 = 31;
static uint16_t x398 = UINT16_MAX;
static int64_t x402 = 172999253977LL;
int64_t x405 = 11790739893LL;
volatile int32_t t89 = 80384;
uint16_t x414 = 2U;
static uint8_t x418 = 30U;
volatile int8_t x421 = -8;
int32_t x430 = INT32_MAX;
uint32_t x437 = 56209699U;
static uint16_t x438 = 41U;
volatile int32_t t97 = -3577312;
static uint8_t x450 = 103U;
volatile int8_t x452 = INT8_MIN;
volatile int32_t t98 = 140743;
int64_t x456 = -672761151356072009LL;
volatile int32_t x458 = -1;
volatile int32_t t102 = 31;
int16_t x474 = INT16_MIN;
uint16_t x476 = 15U;
static int32_t t104 = -46528;
volatile uint8_t x481 = UINT8_MAX;
volatile int32_t t106 = -3;
uint8_t x489 = UINT8_MAX;
int8_t x491 = -1;
volatile int32_t t108 = -631757696;
uint32_t x494 = 335704U;
static volatile int32_t x495 = -1;
int64_t x498 = -1LL;
uint32_t x502 = UINT32_MAX;
uint32_t x503 = 145631261U;
volatile int64_t x510 = 143616855930LL;
volatile int32_t x512 = -1;
int32_t x514 = INT32_MIN;
int8_t x516 = INT8_MIN;
volatile int32_t t117 = -3592;
int32_t t118 = 119500;
volatile int64_t x542 = INT64_MIN;
volatile uint32_t x546 = 195171U;
static int16_t x548 = 3;
uint32_t x549 = 1044341U;
uint32_t x557 = 218362U;
uint16_t x559 = 2U;
int64_t x560 = 5561LL;
uint64_t x562 = UINT64_MAX;
uint32_t x564 = UINT32_MAX;
volatile uint8_t x565 = UINT8_MAX;
volatile uint64_t x569 = 7370362029LLU;
static int16_t x570 = -1;
int8_t x575 = -13;
volatile int32_t t128 = -16838;
volatile int32_t t129 = -1;
static uint64_t x593 = UINT64_MAX;
uint16_t x595 = 41U;
volatile int16_t x599 = INT16_MAX;
int8_t x603 = -1;
int64_t x611 = 1LL;
volatile int32_t x630 = -1;
volatile int32_t x634 = -1;
int8_t x639 = INT8_MAX;
int16_t x645 = INT16_MIN;
volatile uint16_t x652 = 12686U;
int32_t x653 = -31;
int8_t x654 = -1;
static int32_t t144 = -11;
volatile int32_t t145 = 6297504;
uint8_t x668 = 3U;
volatile int32_t t146 = -4549911;
int32_t x675 = 370;
static int32_t x687 = -942;
int32_t x691 = INT32_MIN;
int16_t x693 = -1;
int64_t x696 = -1LL;
uint16_t x697 = 25U;
int16_t x700 = INT16_MIN;
int32_t t155 = 0;
uint32_t x708 = UINT32_MAX;
int32_t x709 = 7260;
int64_t x715 = -1LL;
static int64_t x728 = -1LL;
int16_t x735 = INT16_MIN;
uint32_t x736 = UINT32_MAX;
int16_t x737 = INT16_MAX;
int16_t x738 = INT16_MIN;
int64_t x740 = 763391LL;
volatile int16_t x742 = INT16_MIN;
static int8_t x749 = INT8_MAX;
static int32_t x755 = INT32_MIN;
int64_t x764 = -1LL;
int32_t t169 = -571;
volatile int32_t t171 = 0;
int8_t x777 = INT8_MIN;
int64_t x778 = -2106136LL;
static volatile int64_t x779 = 7LL;
int64_t x794 = INT64_MAX;
volatile int32_t t176 = 2594;
int8_t x802 = INT8_MIN;
int32_t x814 = -1;
volatile int32_t x817 = INT32_MIN;
int8_t x825 = INT8_MIN;
static uint8_t x827 = 9U;
uint32_t x830 = 51895U;
uint32_t x833 = UINT32_MAX;
volatile int32_t t185 = -420478550;
int32_t x841 = INT32_MIN;
static int16_t x845 = INT16_MIN;
volatile int32_t x850 = -1;
int32_t t190 = -9020829;
uint64_t x859 = UINT64_MAX;
int32_t x869 = INT32_MIN;
int8_t x879 = INT8_MIN;
volatile int32_t t194 = 39968711;
int64_t x896 = 5087771243619592LL;
int32_t t197 = -314714;
int32_t t198 = -2947;
uint16_t x902 = 1U;
static uint16_t x903 = 4U;


void f0(void) {
    	static int16_t x2 = INT16_MAX;
	static int16_t x4 = INT16_MIN;
	int32_t t0 = 411970015;

    t0 = ((x1==x2)!=(x3+x4));

    if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x5 = 2U;
	uint16_t x6 = UINT16_MAX;
	volatile int8_t x7 = INT8_MAX;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 336017;

    t1 = ((x5==x6)!=(x7+x8));

    if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
    	uint32_t x9 = UINT32_MAX;
	uint16_t x10 = UINT16_MAX;
	uint32_t x12 = UINT32_MAX;

    t2 = ((x9==x10)!=(x11+x12));

    if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x13 = UINT32_MAX;
	int64_t x14 = -1LL;
	static int32_t x15 = INT32_MAX;
	static uint64_t x16 = 10809LLU;
	int32_t t3 = -396;

    t3 = ((x13==x14)!=(x15+x16));

    if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile int32_t x17 = INT32_MIN;
	static int64_t x19 = -28309LL;

    t4 = ((x17==x18)!=(x19+x20));

    if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
    	uint8_t x21 = UINT8_MAX;
	int8_t x22 = INT8_MIN;
	int8_t x23 = -20;
	volatile uint32_t x24 = UINT32_MAX;
	int32_t t5 = 28748422;

    t5 = ((x21==x22)!=(x23+x24));

    if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
    	int64_t x25 = 119477LL;
	static volatile int32_t x26 = 12701094;
	uint8_t x27 = 98U;
	uint32_t x28 = UINT32_MAX;
	volatile int32_t t6 = 14;

    t6 = ((x25==x26)!=(x27+x28));

    if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x30 = -1;
	uint64_t x31 = 484LLU;

    t7 = ((x29==x30)!=(x31+x32));

    if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int8_t x37 = INT8_MIN;
	static int8_t x38 = 2;
	int32_t x39 = INT32_MIN;
	static volatile int32_t t8 = 1281;

    t8 = ((x37==x38)!=(x39+x40));

    if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x41 = 1119929665394599699LLU;
	int64_t x42 = INT64_MAX;
	int16_t x44 = INT16_MIN;
	int32_t t9 = 210;

    t9 = ((x41==x42)!=(x43+x44));

    if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
    	volatile uint8_t x45 = 7U;
	int64_t x46 = INT64_MIN;
	int8_t x47 = INT8_MIN;
	int32_t t10 = 6;

    t10 = ((x45==x46)!=(x47+x48));

    if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
    	volatile int16_t x49 = INT16_MAX;
	int16_t x50 = INT16_MAX;
	int16_t x51 = INT16_MAX;
	uint32_t x52 = UINT32_MAX;
	int32_t t11 = 200;

    t11 = ((x49==x50)!=(x51+x52));

    if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
    	volatile int16_t x53 = INT16_MIN;
	int8_t x54 = -1;
	uint16_t x55 = 2U;
	volatile int64_t x56 = INT64_MIN;

    t12 = ((x53==x54)!=(x55+x56));

    if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x57 = 114;
	uint8_t x58 = 29U;
	int8_t x59 = -1;
	volatile uint64_t x60 = 1LLU;
	int32_t t13 = 133569;

    t13 = ((x57==x58)!=(x59+x60));

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	volatile int16_t x61 = -2;
	int32_t x62 = -1;
	uint16_t x63 = 864U;
	int8_t x64 = -3;
	int32_t t14 = -5;

    t14 = ((x61==x62)!=(x63+x64));

    if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
    	int32_t x65 = INT32_MIN;
	int8_t x66 = 5;
	volatile int16_t x67 = -107;

    t15 = ((x65==x66)!=(x67+x68));

    if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile uint32_t x69 = 28005U;
	uint32_t x70 = UINT32_MAX;
	uint16_t x71 = 99U;
	static volatile int32_t t16 = -7843;

    t16 = ((x69==x70)!=(x71+x72));

    if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
    	int16_t x73 = -4;
	int32_t x75 = INT32_MIN;
	uint64_t x76 = 60LLU;

    t17 = ((x73==x74)!=(x75+x76));

    if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
    	static int8_t x77 = 7;
	int16_t x78 = INT16_MAX;
	int32_t x79 = -1;
	int8_t x80 = INT8_MIN;
	int32_t t18 = 0;

    t18 = ((x77==x78)!=(x79+x80));

    if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x81 = 1LLU;
	int64_t x82 = INT64_MIN;
	uint16_t x83 = UINT16_MAX;
	int8_t x84 = -1;
	volatile int32_t t19 = -479626;

    t19 = ((x81==x82)!=(x83+x84));

    if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
    	uint64_t x86 = 6924551504849700LLU;
	static uint32_t x87 = 1418U;
	uint32_t x88 = 6149U;

    t20 = ((x85==x86)!=(x87+x88));

    if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
    	int32_t x97 = 28244910;
	int32_t x98 = -1;
	int32_t x99 = -828270371;
	int16_t x100 = INT16_MIN;
	volatile int32_t t21 = 133;

    t21 = ((x97==x98)!=(x99+x100));

    if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
    	static uint8_t x101 = 17U;
	int64_t x102 = -34420769641378LL;
	int16_t x103 = INT16_MIN;
	uint16_t x104 = UINT16_MAX;
	static int32_t t22 = -2088905;

    t22 = ((x101==x102)!=(x103+x104));

    if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
    	uint16_t x106 = 865U;
	volatile int32_t x108 = INT32_MAX;

    t23 = ((x105==x106)!=(x107+x108));

    if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
    	uint8_t x110 = 92U;
	int16_t x111 = 3;
	static int32_t t24 = -664;

    t24 = ((x109==x110)!=(x111+x112));

    if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
    	uint64_t x113 = 1016432747167LLU;
	static volatile int64_t x114 = -1LL;
	int32_t x115 = 77138;
	static uint64_t x116 = 6962LLU;

    t25 = ((x113==x114)!=(x115+x116));

    if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
    	int32_t x117 = 84613292;
	static int64_t x118 = -1LL;
	static uint32_t x119 = 8523U;
	static volatile int8_t x120 = INT8_MAX;
	int32_t t26 = -1098;

    t26 = ((x117==x118)!=(x119+x120));

    if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
    	uint16_t x122 = 12752U;
	static volatile int8_t x123 = INT8_MAX;
	int64_t x124 = -65995054530093280LL;
	int32_t t27 = 163;

    t27 = ((x121==x122)!=(x123+x124));

    if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int8_t x125 = -15;
	uint16_t x126 = 8U;
	static int64_t x127 = 1284271970850275LL;
	static volatile int32_t t28 = 1;

    t28 = ((x125==x126)!=(x127+x128));

    if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x141 = 2LLU;
	int8_t x143 = INT8_MIN;
	volatile int16_t x144 = -708;
	int32_t t29 = 729202;

    t29 = ((x141==x142)!=(x143+x144));

    if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
    	int32_t x145 = 151;
	int16_t x146 = INT16_MIN;
	int16_t x147 = INT16_MAX;
	uint8_t x148 = 5U;
	int32_t t30 = 510491;

    t30 = ((x145==x146)!=(x147+x148));

    if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
    	uint32_t x149 = UINT32_MAX;
	int32_t x150 = INT32_MIN;
	int16_t x151 = -1;
	uint64_t x152 = 135751010014568974LLU;
	volatile int32_t t31 = -31;

    t31 = ((x149==x150)!=(x151+x152));

    if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
    	static int16_t x153 = INT16_MIN;
	static uint8_t x154 = 109U;
	uint64_t x156 = 186LLU;
	int32_t t32 = 3683;

    t32 = ((x153==x154)!=(x155+x156));

    if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
    	uint8_t x160 = 0U;
	int32_t t33 = 2534141;

    t33 = ((x157==x158)!=(x159+x160));

    if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
    	int32_t x165 = INT32_MIN;
	volatile int16_t x166 = INT16_MIN;
	int8_t x168 = -1;
	int32_t t34 = -506;

    t34 = ((x165==x166)!=(x167+x168));

    if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
    	int16_t x169 = INT16_MIN;
	int8_t x170 = -17;
	int16_t x171 = INT16_MAX;
	int8_t x172 = -1;
	int32_t t35 = 5491;

    t35 = ((x169==x170)!=(x171+x172));

    if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x173 = 3228;
	uint32_t x175 = 5U;
	uint32_t x176 = 60963U;
	volatile int32_t t36 = -34;

    t36 = ((x173==x174)!=(x175+x176));

    if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x177 = 2U;
	int64_t x178 = INT64_MIN;
	static volatile int64_t x179 = -74LL;
	int64_t x180 = 1571487400107LL;
	int32_t t37 = -3197074;

    t37 = ((x177==x178)!=(x179+x180));

    if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
    	int32_t x185 = -41371;
	uint8_t x186 = UINT8_MAX;
	uint8_t x187 = 8U;
	volatile int32_t x188 = INT32_MIN;
	volatile int32_t t38 = -8;

    t38 = ((x185==x186)!=(x187+x188));

    if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
    	static uint16_t x189 = 18339U;
	volatile uint64_t x190 = 506646104788LLU;
	uint8_t x191 = 46U;
	int32_t x192 = -339550;
	int32_t t39 = 1726;

    t39 = ((x189==x190)!=(x191+x192));

    if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
    	int32_t x193 = INT32_MIN;
	int64_t x195 = 44692285704442016LL;
	int32_t x196 = -1;

    t40 = ((x193==x194)!=(x195+x196));

    if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
    	volatile uint64_t x197 = 34LLU;
	int16_t x198 = INT16_MIN;
	uint64_t x199 = 46441282069LLU;
	static int32_t t41 = -27;

    t41 = ((x197==x198)!=(x199+x200));

    if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
    	uint16_t x205 = 28U;
	static volatile int64_t x206 = 5060343041394934LL;
	int8_t x207 = INT8_MAX;
	static volatile uint8_t x208 = 27U;
	int32_t t42 = 4475525;

    t42 = ((x205==x206)!=(x207+x208));

    if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
    	uint8_t x209 = 26U;
	int8_t x210 = -1;
	static int8_t x211 = INT8_MIN;
	volatile int8_t x212 = INT8_MAX;

    t43 = ((x209==x210)!=(x211+x212));

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x213 = 987;
	int32_t x214 = INT32_MIN;
	int16_t x216 = INT16_MAX;
	volatile int32_t t44 = -7962;

    t44 = ((x213==x214)!=(x215+x216));

    if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
    	volatile int32_t x217 = -1;
	uint64_t x219 = 3578LLU;
	static int16_t x220 = INT16_MIN;
	int32_t t45 = 60445;

    t45 = ((x217==x218)!=(x219+x220));

    if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
    	int32_t x223 = -240733586;
	int32_t t46 = 9050;

    t46 = ((x221==x222)!=(x223+x224));

    if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
    	static uint64_t x225 = UINT64_MAX;
	volatile uint64_t x226 = UINT64_MAX;
	volatile int16_t x227 = -1;
	static volatile uint16_t x228 = 280U;
	int32_t t47 = 0;

    t47 = ((x225==x226)!=(x227+x228));

    if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int16_t x229 = INT16_MIN;
	uint64_t x230 = UINT64_MAX;
	int8_t x231 = -2;
	uint16_t x232 = UINT16_MAX;
	volatile int32_t t48 = -1657837;

    t48 = ((x229==x230)!=(x231+x232));

    if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
    	static int16_t x233 = -1;
	static int32_t x234 = INT32_MIN;
	int8_t x235 = INT8_MAX;
	uint32_t x236 = 52713U;

    t49 = ((x233==x234)!=(x235+x236));

    if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
    	static int32_t x237 = -2889;
	volatile int8_t x238 = -1;
	int8_t x239 = 0;
	static int32_t t50 = -16264;

    t50 = ((x237==x238)!=(x239+x240));

    if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x241 = -1;
	int8_t x242 = 0;
	volatile uint32_t x243 = 51565U;
	uint16_t x244 = UINT16_MAX;
	volatile int32_t t51 = 5;

    t51 = ((x241==x242)!=(x243+x244));

    if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile int32_t x245 = INT32_MIN;
	uint16_t x246 = 1U;
	uint32_t x247 = 1U;
	int32_t x248 = -1;
	int32_t t52 = -505;

    t52 = ((x245==x246)!=(x247+x248));

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint32_t x249 = 3082U;
	uint8_t x252 = 126U;
	int32_t t53 = -16650667;

    t53 = ((x249==x250)!=(x251+x252));

    if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x253 = -1LL;
	int64_t x255 = INT64_MIN;
	volatile uint32_t x256 = 201032U;
	volatile int32_t t54 = -1961;

    t54 = ((x253==x254)!=(x255+x256));

    if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
    	int8_t x257 = INT8_MIN;
	uint64_t x258 = 13500204421758788LLU;
	int16_t x259 = INT16_MIN;
	volatile int16_t x260 = 1928;
	volatile int32_t t55 = -2;

    t55 = ((x257==x258)!=(x259+x260));

    if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
    	static int16_t x269 = INT16_MIN;
	volatile int16_t x270 = INT16_MIN;
	uint32_t x271 = 419U;
	int32_t x272 = -732610;
	int32_t t56 = -210032037;

    t56 = ((x269==x270)!=(x271+x272));

    if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
    	volatile int32_t x273 = -1;
	uint64_t x274 = 57181LLU;
	static uint8_t x276 = 42U;

    t57 = ((x273==x274)!=(x275+x276));

    if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile uint16_t x277 = 8195U;
	volatile int32_t x278 = INT32_MIN;
	volatile uint8_t x279 = 1U;
	volatile uint32_t x280 = 47014910U;
	volatile int32_t t58 = -940888632;

    t58 = ((x277==x278)!=(x279+x280));

    if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
    	int16_t x281 = -30;
	int32_t x282 = INT32_MAX;
	uint16_t x284 = UINT16_MAX;
	int32_t t59 = 961;

    t59 = ((x281==x282)!=(x283+x284));

    if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
    	volatile int16_t x285 = INT16_MAX;
	int16_t x287 = -1;
	int8_t x288 = -28;
	int32_t t60 = 28006;

    t60 = ((x285==x286)!=(x287+x288));

    if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x289 = 0;
	volatile int8_t x290 = -1;
	volatile uint16_t x292 = 3086U;
	int32_t t61 = 199846533;

    t61 = ((x289==x290)!=(x291+x292));

    if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
    	int32_t x293 = INT32_MIN;
	uint32_t x294 = UINT32_MAX;
	uint64_t x295 = 21189LLU;
	int16_t x296 = INT16_MIN;

    t62 = ((x293==x294)!=(x295+x296));

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x297 = 98U;
	int64_t x298 = INT64_MIN;
	uint8_t x299 = 72U;
	volatile uint64_t x300 = 18068034125342593LLU;
	int32_t t63 = -1;

    t63 = ((x297==x298)!=(x299+x300));

    if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
    	static volatile int32_t x301 = -21380187;
	static int32_t x302 = 2856900;
	volatile int32_t t64 = -12;

    t64 = ((x301==x302)!=(x303+x304));

    if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
    	static int16_t x305 = 128;
	uint16_t x307 = UINT16_MAX;
	int16_t x308 = INT16_MIN;
	static int32_t t65 = 36003;

    t65 = ((x305==x306)!=(x307+x308));

    if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x309 = UINT32_MAX;
	uint8_t x310 = 1U;
	static volatile uint32_t x312 = 4125U;
	static int32_t t66 = 2492;

    t66 = ((x309==x310)!=(x311+x312));

    if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
    	static uint8_t x313 = UINT8_MAX;
	int64_t x315 = -252LL;
	uint16_t x316 = 27U;
	volatile int32_t t67 = -283868;

    t67 = ((x313==x314)!=(x315+x316));

    if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
    	static uint32_t x317 = 52435747U;
	int64_t x318 = INT64_MIN;
	static uint8_t x320 = 53U;
	volatile int32_t t68 = 1;

    t68 = ((x317==x318)!=(x319+x320));

    if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
    	static int16_t x321 = -1;
	volatile int32_t x322 = INT32_MAX;
	int16_t x323 = INT16_MIN;
	uint32_t x324 = UINT32_MAX;
	int32_t t69 = 0;

    t69 = ((x321==x322)!=(x323+x324));

    if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
    	volatile int8_t x325 = -29;
	volatile int16_t x326 = INT16_MAX;
	uint64_t x327 = 606846455804465LLU;
	static int8_t x328 = -1;
	int32_t t70 = 440;

    t70 = ((x325==x326)!=(x327+x328));

    if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
    	static int8_t x329 = 24;
	volatile uint32_t x330 = 3565755U;
	volatile uint8_t x332 = 4U;
	volatile int32_t t71 = -1;

    t71 = ((x329==x330)!=(x331+x332));

    if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x333 = UINT16_MAX;
	int64_t x334 = INT64_MIN;
	static volatile uint64_t x335 = UINT64_MAX;
	volatile int32_t t72 = 469;

    t72 = ((x333==x334)!=(x335+x336));

    if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x339 = 1U;
	uint64_t x340 = 85168LLU;
	static int32_t t73 = 880;

    t73 = ((x337==x338)!=(x339+x340));

    if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x341 = INT8_MIN;
	uint32_t x343 = 1024132227U;
	int32_t t74 = 1;

    t74 = ((x341==x342)!=(x343+x344));

    if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x346 = 12U;
	static volatile int8_t x347 = -1;
	int16_t x348 = INT16_MIN;
	int32_t t75 = -115;

    t75 = ((x345==x346)!=(x347+x348));

    if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
    	int32_t x350 = INT32_MAX;
	int32_t x351 = INT32_MAX;
	uint64_t x352 = 1670250254689455LLU;

    t76 = ((x349==x350)!=(x351+x352));

    if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x353 = -905;
	uint8_t x354 = 106U;
	static int32_t x355 = 41668;
	int8_t x356 = INT8_MIN;
	volatile int32_t t77 = -2461710;

    t77 = ((x353==x354)!=(x355+x356));

    if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint32_t x361 = 4U;
	volatile uint8_t x362 = UINT8_MAX;
	uint64_t x363 = 36460352LLU;
	int32_t x364 = -21834;
	volatile int32_t t78 = -10232785;

    t78 = ((x361==x362)!=(x363+x364));

    if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
    	static volatile uint64_t x369 = 2055727139924776LLU;
	int64_t x370 = -1LL;
	static int32_t x371 = 1;
	volatile int32_t t79 = 81;

    t79 = ((x369==x370)!=(x371+x372));

    if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
    	volatile int16_t x373 = -180;
	static uint64_t x374 = 56229600600LLU;
	int16_t x375 = INT16_MIN;
	int16_t x376 = -1;
	int32_t t80 = -1138;

    t80 = ((x373==x374)!=(x375+x376));

    if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint32_t x379 = 256U;
	int32_t t81 = 320750897;

    t81 = ((x377==x378)!=(x379+x380));

    if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
    	int64_t x381 = 193LL;
	uint32_t x382 = 2U;
	static int8_t x383 = INT8_MIN;
	uint32_t x384 = 7U;
	static volatile int32_t t82 = 5477851;

    t82 = ((x381==x382)!=(x383+x384));

    if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
    	static int64_t x385 = INT64_MIN;
	uint16_t x386 = 0U;
	int64_t x387 = -4948048708894138LL;
	uint8_t x388 = UINT8_MAX;
	volatile int32_t t83 = -2137524;

    t83 = ((x385==x386)!=(x387+x388));

    if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
    	static int64_t x389 = -1LL;
	static int64_t x390 = INT64_MIN;
	uint16_t x391 = 1945U;
	static int16_t x392 = INT16_MIN;
	int32_t t84 = 2827;

    t84 = ((x389==x390)!=(x391+x392));

    if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
    	uint8_t x393 = UINT8_MAX;
	int16_t x394 = 1;
	uint16_t x395 = UINT16_MAX;
	uint8_t x396 = 58U;
	volatile int32_t t85 = 31530;

    t85 = ((x393==x394)!=(x395+x396));

    if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint32_t x397 = 57007475U;
	static int32_t x399 = 316929824;
	int8_t x400 = -1;
	volatile int32_t t86 = 255;

    t86 = ((x397==x398)!=(x399+x400));

    if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
    	int8_t x401 = 0;
	uint64_t x403 = UINT64_MAX;
	static volatile int16_t x404 = -1;
	volatile int32_t t87 = 104997;

    t87 = ((x401==x402)!=(x403+x404));

    if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x406 = INT64_MIN;
	int8_t x407 = INT8_MAX;
	int16_t x408 = INT16_MAX;
	int32_t t88 = -1;

    t88 = ((x405==x406)!=(x407+x408));

    if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
    	int8_t x409 = 20;
	uint32_t x410 = 3341196U;
	uint32_t x411 = 71307402U;
	uint16_t x412 = 1914U;

    t89 = ((x409==x410)!=(x411+x412));

    if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
    	volatile int16_t x413 = -102;
	uint64_t x415 = UINT64_MAX;
	static int64_t x416 = 18907LL;
	int32_t t90 = -322;

    t90 = ((x413==x414)!=(x415+x416));

    if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
    	volatile int32_t x417 = INT32_MIN;
	uint64_t x419 = 145191869LLU;
	int16_t x420 = INT16_MIN;
	volatile int32_t t91 = -29528;

    t91 = ((x417==x418)!=(x419+x420));

    if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
    	volatile int32_t x422 = -52187;
	volatile uint8_t x423 = UINT8_MAX;
	int64_t x424 = INT64_MIN;
	static int32_t t92 = -1;

    t92 = ((x421==x422)!=(x423+x424));

    if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
    	int32_t x425 = INT32_MIN;
	int64_t x426 = INT64_MIN;
	int32_t x427 = 242075117;
	volatile int8_t x428 = INT8_MIN;
	volatile int32_t t93 = 24;

    t93 = ((x425==x426)!=(x427+x428));

    if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
    	int8_t x429 = INT8_MIN;
	uint16_t x431 = UINT16_MAX;
	int8_t x432 = -1;
	int32_t t94 = 125;

    t94 = ((x429==x430)!=(x431+x432));

    if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
    	uint32_t x439 = 54649U;
	static uint64_t x440 = UINT64_MAX;
	int32_t t95 = 1;

    t95 = ((x437==x438)!=(x439+x440));

    if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x441 = -1LL;
	int16_t x442 = INT16_MIN;
	int16_t x443 = -1;
	uint8_t x444 = 6U;
	volatile int32_t t96 = -26702;

    t96 = ((x441==x442)!=(x443+x444));

    if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
    	int8_t x445 = 1;
	uint16_t x446 = UINT16_MAX;
	int64_t x447 = INT64_MIN;
	int16_t x448 = 281;

    t97 = ((x445==x446)!=(x447+x448));

    if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
    	int32_t x449 = -1;
	uint8_t x451 = 1U;

    t98 = ((x449==x450)!=(x451+x452));

    if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x453 = INT16_MIN;
	int64_t x454 = INT64_MIN;
	volatile int8_t x455 = 0;
	volatile int32_t t99 = 25;

    t99 = ((x453==x454)!=(x455+x456));

    if (t99 != 1) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x457 = -1LL;
	int16_t x459 = INT16_MAX;
	volatile int64_t x460 = -1LL;
	int32_t t100 = -6915089;

    t100 = ((x457==x458)!=(x459+x460));

    if (t100 != 1) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x461 = INT8_MAX;
	static uint16_t x462 = 26U;
	volatile uint16_t x463 = UINT16_MAX;
	static int32_t x464 = -56308333;
	int32_t t101 = 116;

    t101 = ((x461==x462)!=(x463+x464));

    if (t101 != 1) { NG(); } else { ; }
	
}

void f102(void) {
    	volatile int64_t x465 = INT64_MIN;
	int32_t x466 = INT32_MIN;
	static int16_t x467 = -18;
	int64_t x468 = 3177507770056LL;

    t102 = ((x465==x466)!=(x467+x468));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x469 = INT8_MIN;
	int16_t x470 = INT16_MIN;
	int32_t x471 = -1;
	int8_t x472 = INT8_MIN;
	int32_t t103 = 931689200;

    t103 = ((x469==x470)!=(x471+x472));

    if (t103 != 1) { NG(); } else { ; }
	
}

void f104(void) {
    	static int16_t x473 = INT16_MIN;
	int16_t x475 = 926;

    t104 = ((x473==x474)!=(x475+x476));

    if (t104 != 1) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x477 = 24U;
	static uint16_t x478 = 1U;
	static int8_t x479 = INT8_MIN;
	int64_t x480 = INT64_MAX;
	int32_t t105 = 685540621;

    t105 = ((x477==x478)!=(x479+x480));

    if (t105 != 1) { NG(); } else { ; }
	
}

void f106(void) {
    	uint64_t x482 = 456330542LLU;
	uint32_t x483 = 0U;
	uint64_t x484 = 111LLU;

    t106 = ((x481==x482)!=(x483+x484));

    if (t106 != 1) { NG(); } else { ; }
	
}

void f107(void) {
    	static int16_t x485 = INT16_MIN;
	volatile int32_t x486 = 29661190;
	int16_t x487 = -11295;
	static int32_t x488 = INT32_MAX;
	int32_t t107 = -26921;

    t107 = ((x485==x486)!=(x487+x488));

    if (t107 != 1) { NG(); } else { ; }
	
}

void f108(void) {
    	uint8_t x490 = UINT8_MAX;
	uint64_t x492 = 2291368489375LLU;

    t108 = ((x489==x490)!=(x491+x492));

    if (t108 != 1) { NG(); } else { ; }
	
}

void f109(void) {
    	uint32_t x493 = UINT32_MAX;
	static uint32_t x496 = UINT32_MAX;
	volatile int32_t t109 = 915003;

    t109 = ((x493==x494)!=(x495+x496));

    if (t109 != 1) { NG(); } else { ; }
	
}

void f110(void) {
    	int16_t x497 = INT16_MAX;
	static uint16_t x499 = 1813U;
	static int8_t x500 = -1;
	int32_t t110 = 5760;

    t110 = ((x497==x498)!=(x499+x500));

    if (t110 != 1) { NG(); } else { ; }
	
}

void f111(void) {
    	uint8_t x501 = 9U;
	static int16_t x504 = -1;
	static volatile int32_t t111 = 6005276;

    t111 = ((x501==x502)!=(x503+x504));

    if (t111 != 1) { NG(); } else { ; }
	
}

void f112(void) {
    	int16_t x505 = 3226;
	volatile int16_t x506 = -1;
	volatile uint32_t x507 = UINT32_MAX;
	int64_t x508 = 1618054775236790LL;
	int32_t t112 = 37966791;

    t112 = ((x505==x506)!=(x507+x508));

    if (t112 != 1) { NG(); } else { ; }
	
}

void f113(void) {
    	int32_t x509 = INT32_MIN;
	static uint32_t x511 = 508759U;
	volatile int32_t t113 = -1349136;

    t113 = ((x509==x510)!=(x511+x512));

    if (t113 != 1) { NG(); } else { ; }
	
}

void f114(void) {
    	int32_t x513 = INT32_MIN;
	volatile uint32_t x515 = 1253462U;
	int32_t t114 = 1;

    t114 = ((x513==x514)!=(x515+x516));

    if (t114 != 1) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x517 = -1;
	static int32_t x518 = INT32_MIN;
	static int32_t x519 = -1;
	volatile int8_t x520 = INT8_MIN;
	static int32_t t115 = -5921569;

    t115 = ((x517==x518)!=(x519+x520));

    if (t115 != 1) { NG(); } else { ; }
	
}

void f116(void) {
    	int8_t x521 = -1;
	int32_t x522 = INT32_MIN;
	uint32_t x523 = 2197443U;
	int32_t x524 = -5299885;
	static volatile int32_t t116 = -11521128;

    t116 = ((x521==x522)!=(x523+x524));

    if (t116 != 1) { NG(); } else { ; }
	
}

void f117(void) {
    	uint64_t x533 = 14LLU;
	static uint64_t x534 = 125LLU;
	static volatile int64_t x535 = -97194280355986LL;
	static volatile int64_t x536 = -1222LL;

    t117 = ((x533==x534)!=(x535+x536));

    if (t117 != 1) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x537 = 42U;
	static uint64_t x538 = 3549291294605LLU;
	static int8_t x539 = 50;
	uint64_t x540 = UINT64_MAX;

    t118 = ((x537==x538)!=(x539+x540));

    if (t118 != 1) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x541 = 5U;
	static uint16_t x543 = UINT16_MAX;
	int8_t x544 = INT8_MAX;
	static int32_t t119 = -3269786;

    t119 = ((x541==x542)!=(x543+x544));

    if (t119 != 1) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x545 = INT64_MAX;
	int16_t x547 = INT16_MIN;
	int32_t t120 = -2580;

    t120 = ((x545==x546)!=(x547+x548));

    if (t120 != 1) { NG(); } else { ; }
	
}

void f121(void) {
    	uint64_t x550 = 248LLU;
	static int64_t x551 = 12624827LL;
	static int16_t x552 = -2014;
	volatile int32_t t121 = -7891750;

    t121 = ((x549==x550)!=(x551+x552));

    if (t121 != 1) { NG(); } else { ; }
	
}

void f122(void) {
    	int8_t x553 = -3;
	uint8_t x554 = 123U;
	uint16_t x555 = 0U;
	uint32_t x556 = 0U;
	volatile int32_t t122 = 5228;

    t122 = ((x553==x554)!=(x555+x556));

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	volatile int16_t x558 = INT16_MIN;
	static volatile int32_t t123 = -2003;

    t123 = ((x557==x558)!=(x559+x560));

    if (t123 != 1) { NG(); } else { ; }
	
}

void f124(void) {
    	uint8_t x561 = 15U;
	volatile uint16_t x563 = 0U;
	volatile int32_t t124 = 103891527;

    t124 = ((x561==x562)!=(x563+x564));

    if (t124 != 1) { NG(); } else { ; }
	
}

void f125(void) {
    	int64_t x566 = INT64_MIN;
	uint16_t x567 = 1U;
	volatile uint32_t x568 = UINT32_MAX;
	volatile int32_t t125 = -1556;

    t125 = ((x565==x566)!=(x567+x568));

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	uint16_t x571 = 5U;
	uint32_t x572 = 104465U;
	volatile int32_t t126 = -85116535;

    t126 = ((x569==x570)!=(x571+x572));

    if (t126 != 1) { NG(); } else { ; }
	
}

void f127(void) {
    	int32_t x573 = 5427210;
	int16_t x574 = 239;
	uint8_t x576 = 46U;
	int32_t t127 = -880;

    t127 = ((x573==x574)!=(x575+x576));

    if (t127 != 1) { NG(); } else { ; }
	
}

void f128(void) {
    	int8_t x577 = INT8_MIN;
	volatile int16_t x578 = INT16_MAX;
	uint64_t x579 = UINT64_MAX;
	int64_t x580 = 61190608035128LL;

    t128 = ((x577==x578)!=(x579+x580));

    if (t128 != 1) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x581 = -1LL;
	static uint8_t x582 = 126U;
	int16_t x583 = 13829;
	volatile uint64_t x584 = 1012819532620273764LLU;

    t129 = ((x581==x582)!=(x583+x584));

    if (t129 != 1) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint64_t x589 = UINT64_MAX;
	uint8_t x590 = 8U;
	uint16_t x591 = 236U;
	volatile uint16_t x592 = 19492U;
	int32_t t130 = 1;

    t130 = ((x589==x590)!=(x591+x592));

    if (t130 != 1) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile uint64_t x594 = 6733189225493LLU;
	volatile uint16_t x596 = 61U;
	volatile int32_t t131 = 10821077;

    t131 = ((x593==x594)!=(x595+x596));

    if (t131 != 1) { NG(); } else { ; }
	
}

void f132(void) {
    	int32_t x597 = -3;
	int16_t x598 = 13237;
	static uint64_t x600 = 7502096662687662LLU;
	volatile int32_t t132 = -604;

    t132 = ((x597==x598)!=(x599+x600));

    if (t132 != 1) { NG(); } else { ; }
	
}

void f133(void) {
    	int64_t x601 = -7317046051LL;
	uint32_t x602 = UINT32_MAX;
	int32_t x604 = -1185848;
	static int32_t t133 = 1;

    t133 = ((x601==x602)!=(x603+x604));

    if (t133 != 1) { NG(); } else { ; }
	
}

void f134(void) {
    	int32_t x609 = INT32_MIN;
	static volatile int64_t x610 = INT64_MAX;
	volatile int8_t x612 = 4;
	int32_t t134 = -34887;

    t134 = ((x609==x610)!=(x611+x612));

    if (t134 != 1) { NG(); } else { ; }
	
}

void f135(void) {
    	int8_t x617 = INT8_MIN;
	static uint32_t x618 = 819246U;
	uint16_t x619 = 731U;
	int32_t x620 = -1;
	volatile int32_t t135 = 1782;

    t135 = ((x617==x618)!=(x619+x620));

    if (t135 != 1) { NG(); } else { ; }
	
}

void f136(void) {
    	static int8_t x621 = INT8_MIN;
	uint16_t x622 = 1579U;
	uint32_t x623 = 151629U;
	static uint64_t x624 = 4163251969003630205LLU;
	int32_t t136 = -174;

    t136 = ((x621==x622)!=(x623+x624));

    if (t136 != 1) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x625 = 1805704294LL;
	uint32_t x626 = UINT32_MAX;
	int8_t x627 = -1;
	int8_t x628 = -1;
	volatile int32_t t137 = 64270;

    t137 = ((x625==x626)!=(x627+x628));

    if (t137 != 1) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x629 = 12;
	int16_t x631 = -1;
	uint64_t x632 = 245803508LLU;
	int32_t t138 = 184904;

    t138 = ((x629==x630)!=(x631+x632));

    if (t138 != 1) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int64_t x633 = INT64_MAX;
	uint16_t x635 = 13U;
	uint8_t x636 = 0U;
	int32_t t139 = -1;

    t139 = ((x633==x634)!=(x635+x636));

    if (t139 != 1) { NG(); } else { ; }
	
}

void f140(void) {
    	int64_t x637 = -1LL;
	int16_t x638 = INT16_MIN;
	uint32_t x640 = UINT32_MAX;
	volatile int32_t t140 = 207106;

    t140 = ((x637==x638)!=(x639+x640));

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int16_t x641 = -1;
	int64_t x642 = INT64_MIN;
	static uint16_t x643 = 200U;
	static int32_t x644 = -1;
	int32_t t141 = -34741383;

    t141 = ((x641==x642)!=(x643+x644));

    if (t141 != 1) { NG(); } else { ; }
	
}

void f142(void) {
    	uint8_t x646 = 110U;
	int64_t x647 = -1LL;
	int16_t x648 = -10792;
	int32_t t142 = 0;

    t142 = ((x645==x646)!=(x647+x648));

    if (t142 != 1) { NG(); } else { ; }
	
}

void f143(void) {
    	int64_t x649 = INT64_MIN;
	int32_t x650 = -1;
	int32_t x651 = INT32_MIN;
	volatile int32_t t143 = 6;

    t143 = ((x649==x650)!=(x651+x652));

    if (t143 != 1) { NG(); } else { ; }
	
}

void f144(void) {
    	uint32_t x655 = UINT32_MAX;
	static int8_t x656 = -1;

    t144 = ((x653==x654)!=(x655+x656));

    if (t144 != 1) { NG(); } else { ; }
	
}

void f145(void) {
    	static uint64_t x661 = 299395396332406LLU;
	int64_t x662 = INT64_MIN;
	int64_t x663 = 199356583LL;
	volatile uint16_t x664 = 449U;

    t145 = ((x661==x662)!=(x663+x664));

    if (t145 != 1) { NG(); } else { ; }
	
}

void f146(void) {
    	static int8_t x665 = -1;
	int16_t x666 = INT16_MIN;
	volatile uint8_t x667 = UINT8_MAX;

    t146 = ((x665==x666)!=(x667+x668));

    if (t146 != 1) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x669 = 15;
	int64_t x670 = -1LL;
	uint64_t x671 = 3111069306LLU;
	int32_t x672 = -49123450;
	int32_t t147 = 345;

    t147 = ((x669==x670)!=(x671+x672));

    if (t147 != 1) { NG(); } else { ; }
	
}

void f148(void) {
    	int32_t x673 = -1;
	volatile int64_t x674 = -18257458LL;
	int64_t x676 = INT64_MIN;
	volatile int32_t t148 = 575981279;

    t148 = ((x673==x674)!=(x675+x676));

    if (t148 != 1) { NG(); } else { ; }
	
}

void f149(void) {
    	int8_t x677 = INT8_MIN;
	int64_t x678 = INT64_MAX;
	uint16_t x679 = 0U;
	uint64_t x680 = UINT64_MAX;
	int32_t t149 = -16;

    t149 = ((x677==x678)!=(x679+x680));

    if (t149 != 1) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x681 = 11033U;
	uint64_t x682 = UINT64_MAX;
	int64_t x683 = INT64_MIN;
	uint8_t x684 = 4U;
	volatile int32_t t150 = 18534392;

    t150 = ((x681==x682)!=(x683+x684));

    if (t150 != 1) { NG(); } else { ; }
	
}

void f151(void) {
    	static int16_t x685 = -1;
	int16_t x686 = INT16_MAX;
	int64_t x688 = -1LL;
	volatile int32_t t151 = 405977;

    t151 = ((x685==x686)!=(x687+x688));

    if (t151 != 1) { NG(); } else { ; }
	
}

void f152(void) {
    	volatile int64_t x689 = INT64_MAX;
	static int8_t x690 = -1;
	uint16_t x692 = 2859U;
	int32_t t152 = -187;

    t152 = ((x689==x690)!=(x691+x692));

    if (t152 != 1) { NG(); } else { ; }
	
}

void f153(void) {
    	int64_t x694 = -10373075425978LL;
	int16_t x695 = -1;
	int32_t t153 = -76484;

    t153 = ((x693==x694)!=(x695+x696));

    if (t153 != 1) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile uint16_t x698 = UINT16_MAX;
	static uint16_t x699 = 1U;
	int32_t t154 = -1488;

    t154 = ((x697==x698)!=(x699+x700));

    if (t154 != 1) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x701 = INT32_MIN;
	volatile int16_t x702 = INT16_MIN;
	static int32_t x703 = 810690384;
	int64_t x704 = 23880LL;

    t155 = ((x701==x702)!=(x703+x704));

    if (t155 != 1) { NG(); } else { ; }
	
}

void f156(void) {
    	uint16_t x705 = UINT16_MAX;
	uint64_t x706 = UINT64_MAX;
	int16_t x707 = INT16_MIN;
	int32_t t156 = -230010;

    t156 = ((x705==x706)!=(x707+x708));

    if (t156 != 1) { NG(); } else { ; }
	
}

void f157(void) {
    	int16_t x710 = 1197;
	uint8_t x711 = UINT8_MAX;
	int32_t x712 = -1;
	volatile int32_t t157 = 111796;

    t157 = ((x709==x710)!=(x711+x712));

    if (t157 != 1) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile uint64_t x713 = 12222LLU;
	volatile int64_t x714 = INT64_MIN;
	static volatile int8_t x716 = INT8_MIN;
	volatile int32_t t158 = 1;

    t158 = ((x713==x714)!=(x715+x716));

    if (t158 != 1) { NG(); } else { ; }
	
}

void f159(void) {
    	static volatile uint16_t x721 = UINT16_MAX;
	int32_t x722 = INT32_MIN;
	static int8_t x723 = -1;
	uint64_t x724 = 154LLU;
	int32_t t159 = -3349222;

    t159 = ((x721==x722)!=(x723+x724));

    if (t159 != 1) { NG(); } else { ; }
	
}

void f160(void) {
    	static int8_t x725 = INT8_MIN;
	int64_t x726 = INT64_MAX;
	uint32_t x727 = 894071503U;
	int32_t t160 = -58;

    t160 = ((x725==x726)!=(x727+x728));

    if (t160 != 1) { NG(); } else { ; }
	
}

void f161(void) {
    	volatile int8_t x729 = INT8_MIN;
	int32_t x730 = INT32_MIN;
	int64_t x731 = -3116746986389126440LL;
	int32_t x732 = INT32_MIN;
	int32_t t161 = -121308165;

    t161 = ((x729==x730)!=(x731+x732));

    if (t161 != 1) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile int8_t x733 = -1;
	volatile int16_t x734 = 1;
	static int32_t t162 = 42893880;

    t162 = ((x733==x734)!=(x735+x736));

    if (t162 != 1) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x739 = -1LL;
	volatile int32_t t163 = 77337468;

    t163 = ((x737==x738)!=(x739+x740));

    if (t163 != 1) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x741 = 9046U;
	uint64_t x743 = 30665LLU;
	uint16_t x744 = UINT16_MAX;
	int32_t t164 = 24;

    t164 = ((x741==x742)!=(x743+x744));

    if (t164 != 1) { NG(); } else { ; }
	
}

void f165(void) {
    	int16_t x750 = INT16_MIN;
	static uint16_t x751 = 1335U;
	uint16_t x752 = 1338U;
	volatile int32_t t165 = 3;

    t165 = ((x749==x750)!=(x751+x752));

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x753 = -1;
	int32_t x754 = INT32_MAX;
	volatile int64_t x756 = 2754768333394LL;
	int32_t t166 = -28141795;

    t166 = ((x753==x754)!=(x755+x756));

    if (t166 != 1) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x757 = -3;
	uint16_t x758 = 15134U;
	static uint16_t x759 = 346U;
	uint64_t x760 = 173806517038250LLU;
	static volatile int32_t t167 = -3;

    t167 = ((x757==x758)!=(x759+x760));

    if (t167 != 1) { NG(); } else { ; }
	
}

void f168(void) {
    	int16_t x761 = 376;
	int32_t x762 = -1;
	volatile uint64_t x763 = 2317LLU;
	int32_t t168 = 1;

    t168 = ((x761==x762)!=(x763+x764));

    if (t168 != 1) { NG(); } else { ; }
	
}

void f169(void) {
    	static uint32_t x765 = 103995558U;
	int32_t x766 = INT32_MIN;
	volatile int16_t x767 = -73;
	int8_t x768 = INT8_MAX;

    t169 = ((x765==x766)!=(x767+x768));

    if (t169 != 1) { NG(); } else { ; }
	
}

void f170(void) {
    	int64_t x769 = INT64_MAX;
	int32_t x770 = 643773108;
	uint8_t x771 = UINT8_MAX;
	static uint32_t x772 = UINT32_MAX;
	volatile int32_t t170 = 1080403;

    t170 = ((x769==x770)!=(x771+x772));

    if (t170 != 1) { NG(); } else { ; }
	
}

void f171(void) {
    	uint8_t x773 = 7U;
	int8_t x774 = -1;
	int16_t x775 = 6883;
	static uint64_t x776 = UINT64_MAX;

    t171 = ((x773==x774)!=(x775+x776));

    if (t171 != 1) { NG(); } else { ; }
	
}

void f172(void) {
    	uint8_t x780 = UINT8_MAX;
	volatile int32_t t172 = 41463599;

    t172 = ((x777==x778)!=(x779+x780));

    if (t172 != 1) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x781 = 233LL;
	uint8_t x782 = UINT8_MAX;
	volatile int16_t x783 = INT16_MIN;
	volatile uint32_t x784 = 6988538U;
	int32_t t173 = 4;

    t173 = ((x781==x782)!=(x783+x784));

    if (t173 != 1) { NG(); } else { ; }
	
}

void f174(void) {
    	static uint8_t x785 = 32U;
	uint16_t x786 = UINT16_MAX;
	int32_t x787 = -826883362;
	int8_t x788 = 2;
	volatile int32_t t174 = -719685560;

    t174 = ((x785==x786)!=(x787+x788));

    if (t174 != 1) { NG(); } else { ; }
	
}

void f175(void) {
    	int32_t x789 = INT32_MAX;
	volatile int32_t x790 = INT32_MAX;
	int32_t x791 = 246;
	int64_t x792 = 135800391LL;
	int32_t t175 = 170555579;

    t175 = ((x789==x790)!=(x791+x792));

    if (t175 != 1) { NG(); } else { ; }
	
}

void f176(void) {
    	int32_t x793 = INT32_MIN;
	static int16_t x795 = 15582;
	int32_t x796 = INT32_MIN;

    t176 = ((x793==x794)!=(x795+x796));

    if (t176 != 1) { NG(); } else { ; }
	
}

void f177(void) {
    	int64_t x797 = INT64_MIN;
	int32_t x798 = INT32_MAX;
	int16_t x799 = -188;
	static uint8_t x800 = 4U;
	volatile int32_t t177 = -20;

    t177 = ((x797==x798)!=(x799+x800));

    if (t177 != 1) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x801 = INT32_MIN;
	static int64_t x803 = INT64_MAX;
	static volatile int32_t x804 = -87;
	int32_t t178 = 2;

    t178 = ((x801==x802)!=(x803+x804));

    if (t178 != 1) { NG(); } else { ; }
	
}

void f179(void) {
    	int64_t x809 = -3211700497092705822LL;
	static uint8_t x810 = 14U;
	int64_t x811 = -1LL;
	static int8_t x812 = -1;
	static volatile int32_t t179 = 425;

    t179 = ((x809==x810)!=(x811+x812));

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	int8_t x813 = -1;
	static int8_t x815 = -1;
	uint8_t x816 = UINT8_MAX;
	volatile int32_t t180 = -872090;

    t180 = ((x813==x814)!=(x815+x816));

    if (t180 != 1) { NG(); } else { ; }
	
}

void f181(void) {
    	uint64_t x818 = 686306141220LLU;
	int64_t x819 = -1LL;
	int8_t x820 = -3;
	volatile int32_t t181 = 4358557;

    t181 = ((x817==x818)!=(x819+x820));

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x821 = -1;
	int32_t x822 = -95;
	volatile uint8_t x823 = 54U;
	uint8_t x824 = 25U;
	volatile int32_t t182 = 1986;

    t182 = ((x821==x822)!=(x823+x824));

    if (t182 != 1) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x826 = INT16_MAX;
	volatile uint8_t x828 = 1U;
	int32_t t183 = -90795151;

    t183 = ((x825==x826)!=(x827+x828));

    if (t183 != 1) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile uint32_t x829 = 53U;
	uint64_t x831 = UINT64_MAX;
	int64_t x832 = INT64_MIN;
	volatile int32_t t184 = 172892600;

    t184 = ((x829==x830)!=(x831+x832));

    if (t184 != 1) { NG(); } else { ; }
	
}

void f185(void) {
    	volatile int64_t x834 = INT64_MIN;
	static uint64_t x835 = 7893258LLU;
	uint32_t x836 = 0U;

    t185 = ((x833==x834)!=(x835+x836));

    if (t185 != 1) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x837 = UINT16_MAX;
	int8_t x838 = 1;
	int8_t x839 = 6;
	int16_t x840 = -1;
	int32_t t186 = 255004018;

    t186 = ((x837==x838)!=(x839+x840));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile uint32_t x842 = UINT32_MAX;
	static uint32_t x843 = 3065U;
	static uint8_t x844 = 13U;
	volatile int32_t t187 = -1;

    t187 = ((x841==x842)!=(x843+x844));

    if (t187 != 1) { NG(); } else { ; }
	
}

void f188(void) {
    	int64_t x846 = INT64_MIN;
	int32_t x847 = -3010778;
	int16_t x848 = -39;
	volatile int32_t t188 = -1618;

    t188 = ((x845==x846)!=(x847+x848));

    if (t188 != 1) { NG(); } else { ; }
	
}

void f189(void) {
    	int32_t x849 = -1;
	uint32_t x851 = 0U;
	uint8_t x852 = 0U;
	volatile int32_t t189 = -2;

    t189 = ((x849==x850)!=(x851+x852));

    if (t189 != 1) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x853 = -1394468669LL;
	int32_t x854 = -1;
	volatile int8_t x855 = -5;
	int32_t x856 = -1;

    t190 = ((x853==x854)!=(x855+x856));

    if (t190 != 1) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x857 = 0;
	uint64_t x858 = 13024138LLU;
	static uint16_t x860 = 45U;
	volatile int32_t t191 = 794006;

    t191 = ((x857==x858)!=(x859+x860));

    if (t191 != 1) { NG(); } else { ; }
	
}

void f192(void) {
    	static uint8_t x865 = UINT8_MAX;
	static uint64_t x866 = UINT64_MAX;
	volatile uint8_t x867 = 3U;
	int8_t x868 = -1;
	volatile int32_t t192 = -3;

    t192 = ((x865==x866)!=(x867+x868));

    if (t192 != 1) { NG(); } else { ; }
	
}

void f193(void) {
    	int32_t x870 = INT32_MIN;
	int32_t x871 = INT32_MIN;
	volatile int16_t x872 = 7640;
	volatile int32_t t193 = 1;

    t193 = ((x869==x870)!=(x871+x872));

    if (t193 != 1) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile uint32_t x877 = 339441682U;
	int16_t x878 = 6;
	uint32_t x880 = 21324680U;

    t194 = ((x877==x878)!=(x879+x880));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	static int16_t x885 = INT16_MAX;
	uint64_t x886 = 8567818LLU;
	uint64_t x887 = 620LLU;
	int8_t x888 = INT8_MIN;
	int32_t t195 = -62543412;

    t195 = ((x885==x886)!=(x887+x888));

    if (t195 != 1) { NG(); } else { ; }
	
}

void f196(void) {
    	int8_t x889 = INT8_MIN;
	int16_t x890 = 1;
	int32_t x891 = 552054198;
	int32_t x892 = -1;
	static volatile int32_t t196 = -3057620;

    t196 = ((x889==x890)!=(x891+x892));

    if (t196 != 1) { NG(); } else { ; }
	
}

void f197(void) {
    	uint64_t x893 = 9285115111528698LLU;
	volatile int64_t x894 = INT64_MIN;
	int8_t x895 = -1;

    t197 = ((x893==x894)!=(x895+x896));

    if (t197 != 1) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile uint32_t x897 = UINT32_MAX;
	static int64_t x898 = 12530961746000LL;
	uint64_t x899 = 1667287274999893LLU;
	uint64_t x900 = 3657034467LLU;

    t198 = ((x897==x898)!=(x899+x900));

    if (t198 != 1) { NG(); } else { ; }
	
}

void f199(void) {
    	int64_t x901 = -1LL;
	int64_t x904 = 937459910LL;
	static int32_t t199 = -100;

    t199 = ((x901==x902)!=(x903+x904));

    if (t199 != 1) { NG(); } else { ; }
	
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

