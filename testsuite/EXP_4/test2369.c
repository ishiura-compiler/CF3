
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

uint32_t x6 = UINT32_MAX;
volatile uint8_t x9 = 0U;
int8_t x10 = -5;
int16_t x11 = -311;
int8_t x20 = 0;
int8_t x34 = INT8_MAX;
int32_t t5 = 1;
volatile int16_t x39 = 7;
int16_t x41 = -1;
static volatile uint64_t t8 = 27LLU;
volatile int64_t x52 = -166428LL;
volatile int16_t x58 = -1;
volatile uint8_t x62 = 15U;
int8_t x69 = -2;
uint8_t x70 = 69U;
int16_t x71 = -432;
uint16_t x78 = 45U;
static volatile int16_t x83 = -1;
static int64_t x84 = INT64_MIN;
volatile int32_t t17 = 748;
volatile int32_t t18 = -11;
volatile uint8_t x109 = 19U;
uint64_t x110 = UINT64_MAX;
static uint64_t t19 = 15792LLU;
uint32_t x113 = UINT32_MAX;
static int16_t x121 = INT16_MAX;
int32_t x123 = -1;
uint64_t t21 = 109927LLU;
int64_t t22 = -28208LL;
static int8_t x145 = 4;
int32_t x147 = 135;
volatile uint64_t t24 = 2064493995690444311LLU;
volatile int16_t x161 = -1;
int32_t t27 = 88;
int64_t x165 = 30254652215232480LL;
volatile int64_t x166 = INT64_MAX;
volatile uint64_t t29 = 9736325LLU;
int64_t x176 = INT64_MIN;
volatile int64_t x177 = -1LL;
volatile int8_t x179 = INT8_MIN;
volatile int64_t t31 = -2523838LL;
volatile int8_t x188 = -3;
volatile int64_t t32 = 8LL;
uint64_t x197 = 1LLU;
uint16_t x211 = UINT16_MAX;
int8_t x212 = -1;
int16_t x229 = -3018;
int32_t t39 = -86687;
static uint32_t x238 = 28U;
int32_t x243 = INT32_MIN;
int32_t x248 = -1;
int64_t t42 = -98027185LL;
static uint32_t x251 = UINT32_MAX;
uint16_t x255 = UINT16_MAX;
uint8_t x266 = 0U;
static volatile int16_t x268 = -1;
volatile uint8_t x273 = 15U;
uint8_t x274 = 0U;
int8_t x286 = INT8_MIN;
int64_t x300 = -1LL;
uint8_t x301 = UINT8_MAX;
static int16_t x303 = -1;
int8_t x304 = INT8_MIN;
volatile uint64_t t52 = 7725884675702549014LLU;
int16_t x310 = INT16_MIN;
volatile uint64_t x313 = 26LLU;
int16_t x315 = INT16_MIN;
volatile uint32_t x319 = 1U;
static int64_t x331 = INT64_MIN;
uint64_t x337 = 117783260522LLU;
uint64_t x339 = UINT64_MAX;
uint64_t t60 = 31789171209289060LLU;
static uint64_t x363 = 633452127535443LLU;
volatile int32_t x364 = -3;
uint16_t x371 = UINT16_MAX;
int16_t x374 = 178;
volatile uint32_t t65 = 391129U;
static int16_t x381 = -41;
int64_t x383 = -51545368882825820LL;
volatile uint8_t x385 = UINT8_MAX;
uint8_t x388 = UINT8_MAX;
static int64_t x396 = INT64_MIN;
int64_t x400 = -1LL;
static int64_t x404 = -498451056132LL;
int16_t x407 = INT16_MAX;
int16_t x428 = INT16_MIN;
volatile int32_t t76 = -88;
uint64_t t77 = 109924441901LLU;
int32_t x461 = -22725;
volatile uint8_t x465 = UINT8_MAX;
int8_t x467 = -1;
int32_t x468 = INT32_MAX;
uint32_t x469 = 549143869U;
int8_t x470 = 6;
uint64_t x478 = UINT64_MAX;
int8_t x479 = -6;
volatile uint64_t x484 = 285LLU;
volatile int32_t x489 = -1;
volatile int8_t x506 = -1;
volatile int32_t t84 = -128293;
static uint8_t x522 = 1U;
int16_t x523 = INT16_MIN;
int16_t x529 = -1;
int16_t x532 = INT16_MAX;
static int32_t x534 = 5;
int64_t t91 = -66297629LL;
volatile int64_t x547 = INT64_MAX;
uint64_t t92 = 2497009746657530159LLU;
int64_t x550 = -1LL;
int64_t x552 = -1402823LL;
uint8_t x553 = UINT8_MAX;
static int8_t x556 = 2;
static volatile uint64_t t94 = 973643307388050LLU;
int16_t x568 = INT16_MAX;
uint8_t x570 = UINT8_MAX;
int16_t x578 = 0;
volatile int64_t t100 = 115LL;
int64_t x592 = -1LL;
int32_t x597 = -1;
volatile uint8_t x601 = 2U;
volatile int8_t x614 = 2;
int32_t x619 = -937158;
int16_t x621 = INT16_MIN;
volatile uint32_t x622 = 533342008U;
static uint64_t x635 = 378705188LLU;
int8_t x639 = -1;
int8_t x640 = -1;
int8_t x643 = INT8_MIN;
int8_t x645 = INT8_MAX;
volatile uint16_t x646 = 3U;
int16_t x651 = -1;
uint64_t t118 = 62539339168632724LLU;
volatile uint32_t t121 = 739755U;
int16_t x682 = INT16_MIN;
int8_t x683 = -33;
volatile int32_t x688 = -1;
int8_t x689 = -1;
uint32_t t124 = 7214392U;
int16_t x694 = INT16_MIN;
int16_t x696 = INT16_MIN;
volatile uint32_t x697 = 693601511U;
int64_t x701 = 9LL;
uint8_t x702 = 6U;
uint32_t x704 = 46U;
int16_t x709 = -1;
uint16_t x710 = UINT16_MAX;
int32_t x717 = INT32_MIN;
static int32_t x718 = -1;
uint64_t t131 = 1107001324769LLU;
int8_t x732 = INT8_MIN;
static volatile int8_t x734 = -1;
int32_t x745 = 238342;
uint32_t x754 = UINT32_MAX;
volatile int32_t t138 = 1;
uint32_t x765 = 3618217U;
static int8_t x772 = INT8_MIN;
uint64_t t140 = 1002054334912016LLU;
static int64_t x774 = -2546LL;
volatile int64_t t142 = -163826433300080LL;
int64_t x786 = INT64_MAX;
int8_t x793 = INT8_MAX;
uint32_t x797 = 3003315U;
uint32_t x798 = 248857U;
static uint16_t x800 = UINT16_MAX;
volatile uint16_t x802 = 4U;
int32_t x815 = INT32_MIN;
uint32_t t149 = 97268984U;
int32_t x824 = -1;
volatile uint32_t t151 = 12247228U;
static uint8_t x827 = UINT8_MAX;
int32_t x831 = INT32_MIN;
int16_t x832 = -1;
int32_t t153 = 17395338;
uint32_t x844 = 2130900182U;
int16_t x845 = INT16_MAX;
static int8_t x846 = -1;
static uint8_t x848 = 90U;
int32_t x850 = -1;
int8_t x851 = -3;
static volatile uint32_t t157 = 550719U;
volatile int64_t t159 = 405530313085654519LL;
int8_t x888 = INT8_MIN;
static int16_t x889 = -2;
uint16_t x890 = 5074U;
uint16_t x891 = 36U;
int8_t x896 = INT8_MAX;
static int16_t x897 = INT16_MIN;
static int8_t x907 = INT8_MIN;
static int16_t x913 = -1;
uint8_t x921 = UINT8_MAX;
volatile int64_t x924 = INT64_MIN;
uint64_t x927 = 4428227492121370454LLU;
uint64_t t169 = 541LLU;
volatile int64_t x930 = -1LL;
volatile int64_t t170 = -2350021762614008LL;
volatile int8_t x935 = -57;
int32_t t171 = 970;
volatile uint64_t t172 = 13622591091192654LLU;
volatile uint64_t x959 = 34119953935904LLU;
static int16_t x967 = 153;
int32_t t176 = -1;
static uint64_t x976 = UINT64_MAX;
int8_t x984 = INT8_MIN;
volatile int8_t x986 = -20;
volatile int32_t x992 = -1032;
static uint64_t t180 = 125678305366LLU;
volatile int8_t x994 = -1;
int64_t x1002 = -1LL;
uint16_t x1003 = 11416U;
static int32_t x1009 = INT32_MAX;
static volatile uint8_t x1018 = UINT8_MAX;
static int32_t x1021 = -463;
int8_t x1023 = -1;
uint16_t x1025 = 86U;
volatile uint32_t x1028 = UINT32_MAX;
volatile int8_t x1033 = INT8_MIN;
int64_t x1034 = -1682450542LL;
int16_t x1037 = -1;
uint32_t x1039 = UINT32_MAX;
uint64_t x1041 = UINT64_MAX;
volatile int32_t x1048 = 0;
int64_t x1059 = INT64_MIN;
int8_t x1076 = INT8_MIN;


void f0(void) {
    	volatile int32_t x1 = INT32_MIN;
	uint64_t x2 = 218426609674LLU;
	int16_t x3 = 1;
	volatile uint64_t x4 = UINT64_MAX;
	volatile uint64_t t0 = 3466866419616061LLU;

    t0 = (x1*(x2-(x3|x4)));

    if (t0 != 10547773351307247616LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	int16_t x5 = 106;
	uint32_t x7 = 128378943U;
	volatile uint32_t x8 = 0U;
	uint32_t t1 = 2476625U;

    t1 = (x5*(x6-(x7|x8)));

    if (t1 != 3571701120U) { NG(); } else { ; }
	
}

void f2(void) {
    	int16_t x12 = 66;
	static volatile int32_t t2 = -79027142;

    t2 = (x9*(x10-(x11|x12)));

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	static volatile int64_t x17 = INT64_MAX;
	uint64_t x18 = 3596782140792LLU;
	volatile int8_t x19 = INT8_MIN;
	uint64_t t3 = 2093766372548LLU;

    t3 = (x17*(x18-(x19|x20)));

    if (t3 != 18446740476927410696LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	int8_t x29 = INT8_MAX;
	volatile int8_t x30 = -1;
	int8_t x31 = INT8_MIN;
	static int8_t x32 = 0;
	int32_t t4 = 6;

    t4 = (x29*(x30-(x31|x32)));

    if (t4 != 16129) { NG(); } else { ; }
	
}

void f5(void) {
    	int16_t x33 = INT16_MIN;
	uint16_t x35 = 3U;
	int8_t x36 = -1;

    t5 = (x33*(x34-(x35|x36)));

    if (t5 != -4194304) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x37 = INT8_MIN;
	int16_t x38 = -39;
	volatile int8_t x40 = INT8_MIN;
	volatile int32_t t6 = -740;

    t6 = (x37*(x38-(x39|x40)));

    if (t6 != -10496) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x42 = INT64_MIN;
	static int8_t x43 = INT8_MIN;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t7 = 4091LLU;

    t7 = (x41*(x42-(x43|x44)));

    if (t7 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f8(void) {
    	int32_t x45 = 37;
	volatile uint16_t x46 = UINT16_MAX;
	uint64_t x47 = UINT64_MAX;
	uint64_t x48 = UINT64_MAX;

    t8 = (x45*(x46-(x47|x48)));

    if (t8 != 2424832LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	uint8_t x49 = 3U;
	volatile int8_t x50 = 14;
	uint32_t x51 = 247404U;
	volatile int64_t t9 = -573525783LL;

    t9 = (x49*(x50-(x51|x52)));

    if (t9 != 6246LL) { NG(); } else { ; }
	
}

void f10(void) {
    	uint16_t x53 = UINT16_MAX;
	volatile uint16_t x54 = 14260U;
	volatile int8_t x55 = 9;
	uint32_t x56 = 5704U;
	volatile uint32_t t10 = 235181U;

    t10 = (x53*(x54-(x55|x56)));

    if (t10 != 560651925U) { NG(); } else { ; }
	
}

void f11(void) {
    	static volatile uint32_t x57 = 201616123U;
	int8_t x59 = INT8_MAX;
	int32_t x60 = INT32_MIN;
	static uint32_t t11 = 50017U;

    t11 = (x57*(x58-(x59|x60)));

    if (t11 != 2110423680U) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x61 = -1;
	volatile int64_t x63 = -698924686LL;
	int16_t x64 = INT16_MIN;
	int64_t t12 = 3165868211LL;

    t12 = (x61*(x62-(x63|x64)));

    if (t12 != -16029LL) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x65 = -1;
	static int16_t x66 = -1;
	int64_t x67 = -749273LL;
	volatile int64_t x68 = INT64_MAX;
	volatile int64_t t13 = -473415266804868LL;

    t13 = (x65*(x66-(x67|x68)));

    if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
    	int64_t x72 = -1LL;
	static volatile int64_t t14 = 2LL;

    t14 = (x69*(x70-(x71|x72)));

    if (t14 != -140LL) { NG(); } else { ; }
	
}

void f15(void) {
    	static int8_t x77 = INT8_MIN;
	int64_t x79 = INT64_MIN;
	uint64_t x80 = UINT64_MAX;
	static volatile uint64_t t15 = 1241827950771LLU;

    t15 = (x77*(x78-(x79|x80)));

    if (t15 != 18446744073709545728LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	static int32_t x81 = -1;
	int16_t x82 = -1;
	volatile int64_t t16 = 192207LL;

    t16 = (x81*(x82-(x83|x84)));

    if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
    	uint16_t x93 = 1U;
	int16_t x94 = INT16_MIN;
	static volatile int16_t x95 = INT16_MIN;
	volatile uint8_t x96 = 0U;

    t17 = (x93*(x94-(x95|x96)));

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	uint16_t x101 = 39U;
	static int8_t x102 = -1;
	int16_t x103 = -1;
	volatile int32_t x104 = -1;

    t18 = (x101*(x102-(x103|x104)));

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x111 = 45U;
	int8_t x112 = -1;

    t19 = (x109*(x110-(x111|x112)));

    if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint8_t x114 = 0U;
	static uint64_t x115 = UINT64_MAX;
	static uint32_t x116 = 675618007U;
	uint64_t t20 = 12695479018LLU;

    t20 = (x113*(x114-(x115|x116)));

    if (t20 != 4294967295LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint64_t x122 = 3739955359LLU;
	int8_t x124 = INT8_MIN;

    t21 = (x121*(x122-(x123|x124)));

    if (t21 != 122547117281120LLU) { NG(); } else { ; }
	
}

void f22(void) {
    	int64_t x137 = -52566LL;
	volatile int8_t x138 = -1;
	volatile int16_t x139 = -1;
	int64_t x140 = 15317459927LL;

    t22 = (x137*(x138-(x139|x140)));

    if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x141 = -1;
	volatile uint16_t x142 = 24U;
	uint16_t x143 = UINT16_MAX;
	static volatile uint16_t x144 = UINT16_MAX;
	int32_t t23 = -32494188;

    t23 = (x141*(x142-(x143|x144)));

    if (t23 != 65511) { NG(); } else { ; }
	
}

void f24(void) {
    	static uint64_t x146 = UINT64_MAX;
	volatile uint64_t x148 = UINT64_MAX;

    t24 = (x145*(x146-(x147|x148)));

    if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
    	static volatile int16_t x149 = INT16_MAX;
	uint16_t x150 = UINT16_MAX;
	volatile uint8_t x151 = 9U;
	int16_t x152 = 12;
	int32_t t25 = 3812938;

    t25 = (x149*(x150-(x151|x152)));

    if (t25 != 2146959374) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x157 = 6628U;
	uint8_t x158 = 12U;
	int8_t x159 = INT8_MAX;
	uint64_t x160 = 17658867403865LLU;
	volatile uint64_t t26 = 16071164279099478LLU;

    t26 = (x157*(x158-(x159|x160)));

    if (t26 != 18329701100556562068LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	static int8_t x162 = -1;
	uint8_t x163 = UINT8_MAX;
	int32_t x164 = INT32_MIN;

    t27 = (x161*(x162-(x163|x164)));

    if (t27 != -2147483392) { NG(); } else { ; }
	
}

void f28(void) {
    	static volatile int32_t x167 = -1;
	static uint64_t x168 = 42280400631821LLU;
	uint64_t t28 = 32630818135190LLU;

    t28 = (x165*(x166-(x167|x168)));

    if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
    	uint64_t x169 = 4964743LLU;
	int8_t x170 = INT8_MIN;
	static uint16_t x171 = UINT16_MAX;
	volatile int64_t x172 = -603815826009409173LL;

    t29 = (x169*(x170-(x171|x172)));

    if (t29 != 10016050639869509127LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int8_t x173 = INT8_MIN;
	uint16_t x174 = 50U;
	int32_t x175 = INT32_MIN;
	int64_t t30 = -742305027988175LL;

    t30 = (x173*(x174-(x175|x176)));

    if (t30 != -274877913344LL) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x178 = -1;
	int8_t x180 = 14;

    t31 = (x177*(x178-(x179|x180)));

    if (t31 != -113LL) { NG(); } else { ; }
	
}

void f32(void) {
    	int64_t x185 = -1LL;
	volatile uint8_t x186 = 1U;
	int64_t x187 = -1LL;

    t32 = (x185*(x186-(x187|x188)));

    if (t32 != -2LL) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x198 = UINT16_MAX;
	static volatile int8_t x199 = INT8_MIN;
	int8_t x200 = -1;
	volatile uint64_t t33 = 406261614873166102LLU;

    t33 = (x197*(x198-(x199|x200)));

    if (t33 != 65536LLU) { NG(); } else { ; }
	
}

void f34(void) {
    	static int16_t x201 = INT16_MIN;
	int32_t x202 = INT32_MAX;
	static int32_t x203 = INT32_MAX;
	volatile uint32_t x204 = 5281479U;
	volatile uint32_t t34 = 357121U;

    t34 = (x201*(x202-(x203|x204)));

    if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x205 = -4;
	int32_t x206 = -2;
	uint16_t x207 = 1110U;
	static int8_t x208 = INT8_MIN;
	volatile int32_t t35 = -19;

    t35 = (x205*(x206-(x207|x208)));

    if (t35 != -160) { NG(); } else { ; }
	
}

void f36(void) {
    	int8_t x209 = -16;
	static uint32_t x210 = 6838U;
	volatile uint32_t t36 = 6875127U;

    t36 = (x209*(x210-(x211|x212)));

    if (t36 != 4294857872U) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint8_t x213 = 0U;
	int16_t x214 = INT16_MIN;
	int16_t x215 = INT16_MIN;
	uint8_t x216 = 2U;
	int32_t t37 = -313348;

    t37 = (x213*(x214-(x215|x216)));

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int64_t x221 = INT64_MIN;
	static int16_t x222 = INT16_MIN;
	volatile uint64_t x223 = 1601393985711768LLU;
	int64_t x224 = INT64_MAX;
	static uint64_t t38 = 11171173023LLU;

    t38 = (x221*(x222-(x223|x224)));

    if (t38 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f39(void) {
    	int32_t x230 = -13522;
	int16_t x231 = 6051;
	static uint8_t x232 = 107U;

    t39 = (x229*(x230-(x231|x232)));

    if (t39 != 59288610) { NG(); } else { ; }
	
}

void f40(void) {
    	static uint8_t x237 = UINT8_MAX;
	int16_t x239 = INT16_MIN;
	uint16_t x240 = UINT16_MAX;
	volatile uint32_t t40 = 187044893U;

    t40 = (x237*(x238-(x239|x240)));

    if (t40 != 7395U) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x241 = -1;
	int64_t x242 = INT64_MIN;
	int32_t x244 = -673548;
	volatile int64_t t41 = 11LL;

    t41 = (x241*(x242-(x243|x244)));

    if (t41 != 9223372036854102260LL) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x245 = INT16_MIN;
	uint16_t x246 = 7U;
	int64_t x247 = -1LL;

    t42 = (x245*(x246-(x247|x248)));

    if (t42 != -262144LL) { NG(); } else { ; }
	
}

void f43(void) {
    	int32_t x249 = INT32_MIN;
	int32_t x250 = INT32_MIN;
	uint8_t x252 = UINT8_MAX;
	static uint32_t t43 = 64U;

    t43 = (x249*(x250-(x251|x252)));

    if (t43 != 2147483648U) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x253 = 13457;
	uint16_t x254 = 1U;
	int8_t x256 = INT8_MIN;
	volatile int32_t t44 = 391819659;

    t44 = (x253*(x254-(x255|x256)));

    if (t44 != 26914) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x257 = INT16_MAX;
	int32_t x258 = 5841;
	static int32_t x259 = -1;
	volatile uint64_t x260 = 946282410249351LLU;
	volatile uint64_t t45 = 11212LLU;

    t45 = (x257*(x258-(x259|x260)));

    if (t45 != 191424814LLU) { NG(); } else { ; }
	
}

void f46(void) {
    	int8_t x265 = -1;
	static int16_t x267 = INT16_MIN;
	volatile int32_t t46 = 3743463;

    t46 = (x265*(x266-(x267|x268)));

    if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
    	int8_t x275 = -3;
	static volatile int32_t x276 = INT32_MIN;
	static int32_t t47 = -13700111;

    t47 = (x273*(x274-(x275|x276)));

    if (t47 != 45) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile int32_t x285 = -25468625;
	uint32_t x287 = 233U;
	int32_t x288 = INT32_MIN;
	uint32_t t48 = 4U;

    t48 = (x285*(x286-(x287|x288)));

    if (t48 != 2751722681U) { NG(); } else { ; }
	
}

void f49(void) {
    	volatile int8_t x289 = INT8_MAX;
	int32_t x290 = INT32_MAX;
	int32_t x291 = INT32_MAX;
	static volatile uint16_t x292 = 3U;
	volatile int32_t t49 = 12951078;

    t49 = (x289*(x290-(x291|x292)));

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	int64_t x293 = INT64_MIN;
	uint64_t x294 = 9LLU;
	uint32_t x295 = 2362145U;
	uint16_t x296 = 10U;
	static volatile uint64_t t50 = 140825785188825LLU;

    t50 = (x293*(x294-(x295|x296)));

    if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
    	volatile int8_t x297 = -5;
	int16_t x298 = -15580;
	static int8_t x299 = -1;
	static int64_t t51 = 253915384601669LL;

    t51 = (x297*(x298-(x299|x300)));

    if (t51 != 77895LL) { NG(); } else { ; }
	
}

void f52(void) {
    	static volatile uint64_t x302 = 297582574LLU;

    t52 = (x301*(x302-(x303|x304)));

    if (t52 != 75883556625LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static uint64_t x309 = 392212279296312LLU;
	volatile uint16_t x311 = 101U;
	int64_t x312 = -1LL;
	volatile uint64_t t53 = 19LLU;

    t53 = (x309*(x310-(x311|x312)));

    if (t53 != 5595124318007296312LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	volatile uint8_t x314 = 60U;
	int16_t x316 = INT16_MIN;
	static volatile uint64_t t54 = 204099129263013637LLU;

    t54 = (x313*(x314-(x315|x316)));

    if (t54 != 853528LLU) { NG(); } else { ; }
	
}

void f55(void) {
    	int16_t x317 = -1;
	volatile int32_t x318 = -1;
	int32_t x320 = 168706;
	uint32_t t55 = 240U;

    t55 = (x317*(x318-(x319|x320)));

    if (t55 != 168708U) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x321 = 2789268621230780369LLU;
	int32_t x322 = -1;
	int64_t x323 = INT64_MIN;
	static int16_t x324 = 3501;
	volatile uint64_t t56 = 6514604979LLU;

    t56 = (x321*(x322-(x323|x324)));

    if (t56 != 17979019552724280050LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int64_t x325 = -1LL;
	uint64_t x326 = 260051845333026LLU;
	uint16_t x327 = 1U;
	uint8_t x328 = UINT8_MAX;
	uint64_t t57 = 8111536819698LLU;

    t57 = (x325*(x326-(x327|x328)));

    if (t57 != 18446484021864218845LLU) { NG(); } else { ; }
	
}

void f58(void) {
    	uint32_t x329 = 931055108U;
	volatile int64_t x330 = INT64_MIN;
	uint16_t x332 = 789U;
	volatile int64_t t58 = -24011834803LL;

    t58 = (x329*(x330-(x331|x332)));

    if (t58 != -734602480212LL) { NG(); } else { ; }
	
}

void f59(void) {
    	int64_t x338 = INT64_MIN;
	uint32_t x340 = UINT32_MAX;
	uint64_t t59 = 386561944373LLU;

    t59 = (x337*(x338-(x339|x340)));

    if (t59 != 117783260522LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	static int64_t x345 = -1LL;
	uint32_t x346 = 115159207U;
	volatile uint64_t x347 = 634483758932433238LLU;
	int8_t x348 = 1;

    t60 = (x345*(x346-(x347|x348)));

    if (t60 != 634483758817274032LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int64_t x349 = -1LL;
	static uint32_t x350 = UINT32_MAX;
	int16_t x351 = -6400;
	int16_t x352 = 1;
	volatile int64_t t61 = 243226LL;

    t61 = (x349*(x350-(x351|x352)));

    if (t61 != -6398LL) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x353 = -1LL;
	uint16_t x354 = 7034U;
	int32_t x355 = INT32_MIN;
	int64_t x356 = 366LL;
	int64_t t62 = -31LL;

    t62 = (x353*(x354-(x355|x356)));

    if (t62 != -2147490316LL) { NG(); } else { ; }
	
}

void f63(void) {
    	static volatile int8_t x361 = -1;
	uint8_t x362 = UINT8_MAX;
	static uint64_t t63 = 2312660282892LLU;

    t63 = (x361*(x362-(x363|x364)));

    if (t63 != 18446744073709551360LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	uint32_t x369 = 23U;
	int32_t x370 = -167980;
	uint32_t x372 = 70070194U;
	volatile uint32_t t64 = 762U;

    t64 = (x369*(x370-(x371|x372)));

    if (t64 != 2678262819U) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint32_t x373 = 812U;
	uint16_t x375 = 24U;
	volatile int16_t x376 = INT16_MAX;

    t65 = (x373*(x374-(x375|x376)));

    if (t65 != 4268505028U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x377 = UINT32_MAX;
	volatile int8_t x378 = 1;
	uint64_t x379 = 981900705506121LLU;
	volatile int64_t x380 = 11483713LL;
	volatile uint64_t t66 = 8123958394938400LLU;

    t66 = (x377*(x378-(x379|x380)));

    if (t66 != 7859838807534713672LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x382 = UINT64_MAX;
	volatile int8_t x384 = -19;
	volatile uint64_t t67 = 29218781895408399LLU;

    t67 = (x381*(x382-(x383|x384)));

    if (t67 != 18446744073709550878LLU) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile uint64_t x386 = 194482868056630LLU;
	int32_t x387 = INT32_MIN;
	volatile uint64_t t68 = 19207483818LLU;

    t68 = (x385*(x386-(x387|x388)));

    if (t68 != 49593678962705865LLU) { NG(); } else { ; }
	
}

void f69(void) {
    	uint8_t x393 = 11U;
	int8_t x394 = INT8_MAX;
	volatile int8_t x395 = -3;
	volatile int64_t t69 = 2307734590897291LL;

    t69 = (x393*(x394-(x395|x396)));

    if (t69 != 1430LL) { NG(); } else { ; }
	
}

void f70(void) {
    	int32_t x397 = 7791493;
	int16_t x398 = -27;
	static uint32_t x399 = 142441U;
	int64_t t70 = 674340LL;

    t70 = (x397*(x398-(x399|x400)));

    if (t70 != -202578818LL) { NG(); } else { ; }
	
}

void f71(void) {
    	int32_t x401 = -8126;
	volatile int16_t x402 = -1;
	static int8_t x403 = -4;
	static volatile int64_t t71 = 6336628253LL;

    t71 = (x401*(x402-(x403|x404)));

    if (t71 != -24378LL) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int16_t x405 = 53;
	int32_t x406 = -1;
	uint64_t x408 = 5588686360740LLU;
	volatile uint64_t t72 = 6890969350525111833LLU;

    t72 = (x405*(x406-(x407|x408)));

    if (t72 != 18446447873331789824LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile int64_t x425 = -1LL;
	volatile int32_t x426 = 2076323;
	static uint16_t x427 = 1172U;
	static int64_t t73 = 32047261848247LL;

    t73 = (x425*(x426-(x427|x428)));

    if (t73 != -2107919LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int16_t x429 = -1;
	uint8_t x430 = 1U;
	uint16_t x431 = 468U;
	int64_t x432 = -1LL;
	static int64_t t74 = -19598022473679LL;

    t74 = (x429*(x430-(x431|x432)));

    if (t74 != -2LL) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x433 = -10;
	uint8_t x434 = 2U;
	uint16_t x435 = UINT16_MAX;
	int32_t x436 = -1;
	volatile int32_t t75 = -158;

    t75 = (x433*(x434-(x435|x436)));

    if (t75 != -30) { NG(); } else { ; }
	
}

void f76(void) {
    	uint16_t x449 = 243U;
	int8_t x450 = -7;
	static uint8_t x451 = UINT8_MAX;
	int8_t x452 = -1;

    t76 = (x449*(x450-(x451|x452)));

    if (t76 != -1458) { NG(); } else { ; }
	
}

void f77(void) {
    	uint64_t x457 = 7494529934955505530LLU;
	uint16_t x458 = 7576U;
	int16_t x459 = INT16_MAX;
	volatile uint16_t x460 = 6U;

    t77 = (x457*(x458-(x459|x460)));

    if (t77 != 7722002953120983530LLU) { NG(); } else { ; }
	
}

void f78(void) {
    	volatile uint64_t x462 = 6467237470LLU;
	int16_t x463 = INT16_MIN;
	static uint32_t x464 = UINT32_MAX;
	uint64_t t78 = 1709831201423956455LLU;

    t78 = (x461*(x462-(x463|x464)));

    if (t78 != 18446694708869824741LLU) { NG(); } else { ; }
	
}

void f79(void) {
    	static uint32_t x466 = UINT32_MAX;
	volatile uint32_t t79 = 3U;

    t79 = (x465*(x466-(x467|x468)));

    if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x471 = 28U;
	static volatile int8_t x472 = INT8_MIN;
	static uint32_t t80 = 522180084U;

    t80 = (x469*(x470-(x471|x472)));

    if (t80 != 2374675266U) { NG(); } else { ; }
	
}

void f81(void) {
    	static int64_t x477 = INT64_MIN;
	volatile int64_t x480 = INT64_MIN;
	uint64_t t81 = 37100066108LLU;

    t81 = (x477*(x478-(x479|x480)));

    if (t81 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x481 = -1;
	uint16_t x482 = 93U;
	volatile uint64_t x483 = 1LLU;
	uint64_t t82 = 3682LLU;

    t82 = (x481*(x482-(x483|x484)));

    if (t82 != 192LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	int8_t x490 = -1;
	static int64_t x491 = 408529627LL;
	volatile int32_t x492 = -1;
	int64_t t83 = 69438570860LL;

    t83 = (x489*(x490-(x491|x492)));

    if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
    	uint16_t x505 = UINT16_MAX;
	int32_t x507 = INT32_MIN;
	int32_t x508 = -1;

    t84 = (x505*(x506-(x507|x508)));

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int8_t x509 = INT8_MIN;
	uint16_t x510 = UINT16_MAX;
	static int16_t x511 = INT16_MIN;
	volatile int16_t x512 = -1;
	volatile int32_t t85 = 499008;

    t85 = (x509*(x510-(x511|x512)));

    if (t85 != -8388608) { NG(); } else { ; }
	
}

void f86(void) {
    	static uint8_t x513 = UINT8_MAX;
	static volatile int64_t x514 = -1LL;
	int64_t x515 = -1LL;
	int16_t x516 = -1;
	volatile int64_t t86 = 349725600925LL;

    t86 = (x513*(x514-(x515|x516)));

    if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x517 = INT16_MAX;
	static volatile int32_t x518 = INT32_MIN;
	int64_t x519 = INT64_MIN;
	static int8_t x520 = -1;
	volatile int64_t t87 = 38081734143LL;

    t87 = (x517*(x518-(x519|x520)));

    if (t87 != -70366596661249LL) { NG(); } else { ; }
	
}

void f88(void) {
    	static int16_t x521 = INT16_MIN;
	int32_t x524 = 24;
	int32_t t88 = -3208;

    t88 = (x521*(x522-(x523|x524)));

    if (t88 != -1072988160) { NG(); } else { ; }
	
}

void f89(void) {
    	uint64_t x530 = 1272052752995753LLU;
	uint64_t x531 = 4LLU;
	volatile uint64_t t89 = 4130585751LLU;

    t89 = (x529*(x530-(x531|x532)));

    if (t89 != 18445472020956588630LLU) { NG(); } else { ; }
	
}

void f90(void) {
    	int16_t x533 = INT16_MAX;
	volatile int8_t x535 = 0;
	volatile uint32_t x536 = UINT32_MAX;
	volatile uint32_t t90 = 1736731021U;

    t90 = (x533*(x534-(x535|x536)));

    if (t90 != 196602U) { NG(); } else { ; }
	
}

void f91(void) {
    	int16_t x541 = 1;
	int32_t x542 = -1634;
	static volatile int64_t x543 = -1LL;
	int64_t x544 = INT64_MAX;

    t91 = (x541*(x542-(x543|x544)));

    if (t91 != -1633LL) { NG(); } else { ; }
	
}

void f92(void) {
    	static uint64_t x545 = 1522307057670531682LLU;
	int8_t x546 = -1;
	volatile uint8_t x548 = 2U;

    t92 = (x545*(x546-(x547|x548)));

    if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	int64_t x549 = -2632LL;
	int64_t x551 = 63588258824681LL;
	int64_t t93 = -343459264LL;

    t93 = (x549*(x550-(x551|x552)));

    if (t93 != -198110640LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static uint64_t x554 = 10319LLU;
	int32_t x555 = -1;

    t94 = (x553*(x554-(x555|x556)));

    if (t94 != 2631600LLU) { NG(); } else { ; }
	
}

void f95(void) {
    	static int32_t x561 = 1546124;
	uint8_t x562 = 0U;
	int16_t x563 = -77;
	volatile int16_t x564 = INT16_MAX;
	volatile int32_t t95 = 33594;

    t95 = (x561*(x562-(x563|x564)));

    if (t95 != 1546124) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile int32_t x565 = INT32_MIN;
	static volatile int16_t x566 = INT16_MIN;
	static uint64_t x567 = 59993198816103639LLU;
	volatile uint64_t t96 = 2715LLU;

    t96 = (x565*(x566-(x567|x568)));

    if (t96 != 10101644330788716544LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint16_t x569 = 12U;
	volatile int8_t x571 = INT8_MIN;
	static int32_t x572 = 5712335;
	int32_t t97 = 19104;

    t97 = (x569*(x570-(x571|x572)));

    if (t97 != 3648) { NG(); } else { ; }
	
}

void f98(void) {
    	static int64_t x573 = -1LL;
	int8_t x574 = INT8_MIN;
	volatile int16_t x575 = INT16_MAX;
	static int8_t x576 = -12;
	static int64_t t98 = -7LL;

    t98 = (x573*(x574-(x575|x576)));

    if (t98 != 127LL) { NG(); } else { ; }
	
}

void f99(void) {
    	static volatile int64_t x577 = -1LL;
	static int8_t x579 = -51;
	static int32_t x580 = INT32_MIN;
	int64_t t99 = 5277307799LL;

    t99 = (x577*(x578-(x579|x580)));

    if (t99 != -51LL) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x581 = -74;
	uint32_t x582 = UINT32_MAX;
	int64_t x583 = -1LL;
	volatile int8_t x584 = INT8_MIN;

    t100 = (x581*(x582-(x583|x584)));

    if (t100 != -317827579904LL) { NG(); } else { ; }
	
}

void f101(void) {
    	int8_t x585 = INT8_MIN;
	static uint8_t x586 = 11U;
	volatile uint8_t x587 = 5U;
	volatile uint16_t x588 = 5U;
	int32_t t101 = -11429;

    t101 = (x585*(x586-(x587|x588)));

    if (t101 != -768) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x589 = INT8_MIN;
	volatile int8_t x590 = INT8_MAX;
	static int16_t x591 = INT16_MAX;
	volatile int64_t t102 = -701106382LL;

    t102 = (x589*(x590-(x591|x592)));

    if (t102 != -16384LL) { NG(); } else { ; }
	
}

void f103(void) {
    	volatile int8_t x598 = 0;
	int8_t x599 = INT8_MIN;
	static int32_t x600 = INT32_MIN;
	int32_t t103 = -197483774;

    t103 = (x597*(x598-(x599|x600)));

    if (t103 != -128) { NG(); } else { ; }
	
}

void f104(void) {
    	uint64_t x602 = 54612LLU;
	int64_t x603 = -179412LL;
	int64_t x604 = -302058166909120542LL;
	uint64_t t104 = 6229474244LLU;

    t104 = (x601*(x602-(x603|x604)));

    if (t104 != 461516LLU) { NG(); } else { ; }
	
}

void f105(void) {
    	int32_t x605 = -9363;
	int64_t x606 = 2309004548349LL;
	uint64_t x607 = 205LLU;
	static uint8_t x608 = 4U;
	uint64_t t105 = 28LLU;

    t105 = (x605*(x606-(x607|x608)));

    if (t105 != 18425124864125279344LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	static int8_t x609 = -7;
	volatile int8_t x610 = -46;
	int64_t x611 = INT64_MIN;
	int16_t x612 = INT16_MIN;
	volatile int64_t t106 = 6LL;

    t106 = (x609*(x610-(x611|x612)));

    if (t106 != -229054LL) { NG(); } else { ; }
	
}

void f107(void) {
    	static volatile uint32_t x613 = 124911316U;
	static uint32_t x615 = UINT32_MAX;
	uint64_t x616 = 780184178704LLU;
	volatile uint64_t t107 = 124522875LLU;

    t107 = (x613*(x614-(x615|x616)));

    if (t107 != 13039281326733524092LLU) { NG(); } else { ; }
	
}

void f108(void) {
    	static int16_t x617 = -6;
	uint8_t x618 = 5U;
	int32_t x620 = INT32_MIN;
	volatile int32_t t108 = -100357;

    t108 = (x617*(x618-(x619|x620)));

    if (t108 != -5622978) { NG(); } else { ; }
	
}

void f109(void) {
    	volatile int32_t x623 = INT32_MIN;
	volatile uint16_t x624 = UINT16_MAX;
	static uint32_t t109 = 2465302U;

    t109 = (x621*(x622-(x623|x624)));

    if (t109 != 1818460160U) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x625 = 18322U;
	uint64_t x626 = UINT64_MAX;
	int16_t x627 = 54;
	int16_t x628 = INT16_MIN;
	static volatile uint64_t t110 = 24649575LLU;

    t110 = (x625*(x626-(x627|x628)));

    if (t110 != 599367586LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	uint64_t x633 = UINT64_MAX;
	int64_t x634 = -1LL;
	int16_t x636 = -601;
	volatile uint64_t t111 = 340786LLU;

    t111 = (x633*(x634-(x635|x636)));

    if (t111 != 18446744073709551016LLU) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile uint64_t x637 = 69102LLU;
	volatile int32_t x638 = -18330;
	static uint64_t t112 = 1179588908807624LLU;

    t112 = (x637*(x638-(x639|x640)));

    if (t112 != 18446744072442981058LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	int64_t x641 = -1LL;
	int8_t x642 = INT8_MAX;
	uint64_t x644 = 201LLU;
	static volatile uint64_t t113 = 487071877779068353LLU;

    t113 = (x641*(x642-(x643|x644)));

    if (t113 != 18446744073709551434LLU) { NG(); } else { ; }
	
}

void f114(void) {
    	static int16_t x647 = INT16_MIN;
	int8_t x648 = 0;
	int32_t t114 = -531413792;

    t114 = (x645*(x646-(x647|x648)));

    if (t114 != 4161917) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint64_t x649 = UINT64_MAX;
	int16_t x650 = -49;
	static uint32_t x652 = 785872350U;
	uint64_t t115 = 49935922516274592LLU;

    t115 = (x649*(x650-(x651|x652)));

    if (t115 != 18446744069414584368LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	uint64_t x653 = 0LLU;
	uint16_t x654 = 24071U;
	static volatile uint8_t x655 = 0U;
	static int16_t x656 = INT16_MAX;
	volatile uint64_t t116 = 10LLU;

    t116 = (x653*(x654-(x655|x656)));

    if (t116 != 0LLU) { NG(); } else { ; }
	
}

void f117(void) {
    	int16_t x657 = 299;
	static volatile int32_t x658 = -431;
	uint64_t x659 = 11531963493845LLU;
	uint64_t x660 = 179531042002LLU;
	volatile uint64_t t117 = 6654302659531LLU;

    t117 = (x657*(x658-(x659|x660)));

    if (t117 != 18443294730548395646LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	int16_t x665 = -241;
	int32_t x666 = -1;
	int16_t x667 = 9543;
	uint64_t x668 = 108330347543LLU;

    t118 = (x665*(x666-(x667|x668)));

    if (t118 != 26107613835224LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x669 = INT64_MIN;
	uint64_t x670 = UINT64_MAX;
	int8_t x671 = INT8_MIN;
	uint64_t x672 = 2527LLU;
	uint64_t t119 = 3586033155LLU;

    t119 = (x669*(x670-(x671|x672)));

    if (t119 != 0LLU) { NG(); } else { ; }
	
}

void f120(void) {
    	int32_t x673 = INT32_MIN;
	uint64_t x674 = UINT64_MAX;
	int32_t x675 = 374335794;
	static int16_t x676 = -1;
	volatile uint64_t t120 = 4952LLU;

    t120 = (x673*(x674-(x675|x676)));

    if (t120 != 0LLU) { NG(); } else { ; }
	
}

void f121(void) {
    	int8_t x677 = INT8_MIN;
	int8_t x678 = -1;
	uint32_t x679 = 3725U;
	int32_t x680 = INT32_MIN;

    t121 = (x677*(x678-(x679|x680)));

    if (t121 != 476928U) { NG(); } else { ; }
	
}

void f122(void) {
    	volatile uint8_t x681 = UINT8_MAX;
	uint32_t x684 = UINT32_MAX;
	volatile uint32_t t122 = 10758423U;

    t122 = (x681*(x682-(x683|x684)));

    if (t122 != 4286611711U) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x685 = UINT8_MAX;
	uint64_t x686 = 599585128900584171LLU;
	static uint16_t x687 = 9U;
	volatile uint64_t t123 = 116LLU;

    t123 = (x685*(x686-(x687|x688)));

    if (t123 != 5320255279972550932LLU) { NG(); } else { ; }
	
}

void f124(void) {
    	uint16_t x690 = 3U;
	int16_t x691 = 1;
	uint32_t x692 = 5083169U;

    t124 = (x689*(x690-(x691|x692)));

    if (t124 != 5083166U) { NG(); } else { ; }
	
}

void f125(void) {
    	static volatile int8_t x693 = INT8_MAX;
	static volatile int8_t x695 = INT8_MIN;
	volatile int32_t t125 = -127269;

    t125 = (x693*(x694-(x695|x696)));

    if (t125 != -4145280) { NG(); } else { ; }
	
}

void f126(void) {
    	int8_t x698 = INT8_MIN;
	static int32_t x699 = INT32_MIN;
	volatile int16_t x700 = 1;
	volatile uint32_t t126 = 479396431U;

    t126 = (x697*(x698-(x699|x700)));

    if (t126 != 2867201945U) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int16_t x703 = INT16_MIN;
	int64_t t127 = 1239483LL;

    t127 = (x701*(x702-(x703|x704)));

    if (t127 != 294552LL) { NG(); } else { ; }
	
}

void f128(void) {
    	int64_t x711 = INT64_MAX;
	static uint32_t x712 = 4542U;
	int64_t t128 = 439108070867058762LL;

    t128 = (x709*(x710-(x711|x712)));

    if (t128 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x719 = 5486LL;
	uint16_t x720 = 8U;
	static int64_t t129 = -236879103264328LL;

    t129 = (x717*(x718-(x719|x720)));

    if (t129 != 11783242776576LL) { NG(); } else { ; }
	
}

void f130(void) {
    	uint64_t x721 = 1046687LLU;
	uint32_t x722 = 15418U;
	uint16_t x723 = 17U;
	uint16_t x724 = 65U;
	volatile uint64_t t130 = 252576LLU;

    t130 = (x721*(x722-(x723|x724)));

    if (t130 != 16053038519LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	volatile int64_t x725 = -496198084954489432LL;
	int32_t x726 = INT32_MIN;
	int64_t x727 = -1LL;
	uint64_t x728 = 9LLU;

    t131 = (x725*(x726-(x727|x728)));

    if (t131 != 13336750196492533160LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile uint64_t x729 = UINT64_MAX;
	int64_t x730 = -895LL;
	int64_t x731 = INT64_MIN;
	uint64_t t132 = 12524387LLU;

    t132 = (x729*(x730-(x731|x732)));

    if (t132 != 767LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	volatile int8_t x733 = INT8_MIN;
	int16_t x735 = INT16_MIN;
	int16_t x736 = INT16_MIN;
	volatile int32_t t133 = -454681164;

    t133 = (x733*(x734-(x735|x736)));

    if (t133 != -4194176) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x737 = -1;
	volatile int32_t x738 = 1593;
	uint16_t x739 = UINT16_MAX;
	volatile int16_t x740 = 11;
	volatile int32_t t134 = 86;

    t134 = (x737*(x738-(x739|x740)));

    if (t134 != 63942) { NG(); } else { ; }
	
}

void f135(void) {
    	uint32_t x746 = UINT32_MAX;
	int32_t x747 = INT32_MIN;
	int8_t x748 = INT8_MIN;
	uint32_t t135 = 235284796U;

    t135 = (x745*(x746-(x747|x748)));

    if (t135 != 30269434U) { NG(); } else { ; }
	
}

void f136(void) {
    	volatile int32_t x749 = INT32_MAX;
	uint64_t x750 = 1605285394578144LLU;
	volatile uint64_t x751 = UINT64_MAX;
	int32_t x752 = INT32_MAX;
	volatile uint64_t t136 = 0LLU;

    t136 = (x749*(x750-(x751|x752)));

    if (t136 != 15047873741554648351LLU) { NG(); } else { ; }
	
}

void f137(void) {
    	uint32_t x753 = 20691U;
	int8_t x755 = -1;
	int16_t x756 = INT16_MIN;
	uint32_t t137 = 2524109U;

    t137 = (x753*(x754-(x755|x756)));

    if (t137 != 0U) { NG(); } else { ; }
	
}

void f138(void) {
    	volatile int8_t x761 = -9;
	uint8_t x762 = 79U;
	static int8_t x763 = -7;
	int16_t x764 = 242;

    t138 = (x761*(x762-(x763|x764)));

    if (t138 != -756) { NG(); } else { ; }
	
}

void f139(void) {
    	int16_t x766 = INT16_MAX;
	volatile int8_t x767 = INT8_MIN;
	int64_t x768 = 12238913443181LL;
	volatile int64_t t139 = -16LL;

    t139 = (x765*(x766-(x767|x768)));

    if (t139 != 118626862562LL) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x769 = UINT16_MAX;
	uint32_t x770 = 71632U;
	volatile uint64_t x771 = UINT64_MAX;

    t140 = (x769*(x770-(x771|x772)));

    if (t140 != 4694468655LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static uint64_t x773 = UINT64_MAX;
	static uint64_t x775 = 3LLU;
	int64_t x776 = INT64_MIN;
	uint64_t t141 = 787117751993465589LLU;

    t141 = (x773*(x774-(x775|x776)));

    if (t141 != 9223372036854778357LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int16_t x777 = 3;
	static int16_t x778 = -1;
	int64_t x779 = -1LL;
	int16_t x780 = 6;

    t142 = (x777*(x778-(x779|x780)));

    if (t142 != 0LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile int8_t x785 = -7;
	uint64_t x787 = 174048872252385LLU;
	uint32_t x788 = 2U;
	volatile uint64_t t143 = 715593211414637167LLU;

    t143 = (x785*(x786-(x787|x788)));

    if (t143 != 9224590378960542524LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	int16_t x794 = 92;
	int8_t x795 = -1;
	int16_t x796 = 12;
	static volatile int32_t t144 = 68361309;

    t144 = (x793*(x794-(x795|x796)));

    if (t144 != 11811) { NG(); } else { ; }
	
}

void f145(void) {
    	static int8_t x799 = INT8_MIN;
	volatile uint32_t t145 = 913U;

    t145 = (x797*(x798-(x799|x800)));

    if (t145 != 74654766U) { NG(); } else { ; }
	
}

void f146(void) {
    	uint16_t x801 = UINT16_MAX;
	int16_t x803 = INT16_MIN;
	int64_t x804 = INT64_MIN;
	volatile int64_t t146 = 7913486LL;

    t146 = (x801*(x802-(x803|x804)));

    if (t146 != 2147713020LL) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x805 = INT16_MIN;
	int8_t x806 = INT8_MIN;
	uint64_t x807 = 3LLU;
	uint8_t x808 = UINT8_MAX;
	uint64_t t147 = 236LLU;

    t147 = (x805*(x806-(x807|x808)));

    if (t147 != 12550144LLU) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x809 = -50;
	int8_t x810 = -9;
	uint64_t x811 = 11445916LLU;
	static uint64_t x812 = UINT64_MAX;
	uint64_t t148 = 17665708991203LLU;

    t148 = (x809*(x810-(x811|x812)));

    if (t148 != 400LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	int16_t x813 = 1547;
	int16_t x814 = INT16_MIN;
	uint32_t x816 = 17625070U;

    t149 = (x813*(x814-(x815|x816)));

    if (t149 != 600612038U) { NG(); } else { ; }
	
}

void f150(void) {
    	uint64_t x817 = 1108187972627966LLU;
	int8_t x818 = -2;
	volatile uint64_t x819 = 35461094966LLU;
	volatile int32_t x820 = INT32_MIN;
	uint64_t t150 = 281331856442967LLU;

    t150 = (x817*(x818-(x819|x820)));

    if (t150 != 1334378048392965232LLU) { NG(); } else { ; }
	
}

void f151(void) {
    	int8_t x821 = INT8_MIN;
	uint32_t x822 = 496U;
	int8_t x823 = 5;

    t151 = (x821*(x822-(x823|x824)));

    if (t151 != 4294903680U) { NG(); } else { ; }
	
}

void f152(void) {
    	int32_t x825 = -1;
	int16_t x826 = -1;
	int8_t x828 = -1;
	volatile int32_t t152 = -178813;

    t152 = (x825*(x826-(x827|x828)));

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	int16_t x829 = INT16_MAX;
	static volatile int8_t x830 = -1;

    t153 = (x829*(x830-(x831|x832)));

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x837 = INT64_MIN;
	static volatile uint16_t x838 = UINT16_MAX;
	static volatile uint64_t x839 = UINT64_MAX;
	int16_t x840 = INT16_MIN;
	static volatile uint64_t t154 = 33261906LLU;

    t154 = (x837*(x838-(x839|x840)));

    if (t154 != 0LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	int32_t x841 = INT32_MIN;
	volatile int16_t x842 = INT16_MAX;
	volatile uint64_t x843 = UINT64_MAX;
	volatile uint64_t t155 = 7237LLU;

    t155 = (x841*(x842-(x843|x844)));

    if (t155 != 18446673704965373952LLU) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint16_t x847 = 26822U;
	static int32_t t156 = 139305427;

    t156 = (x845*(x846-(x847|x848)));

    if (t156 != -879695649) { NG(); } else { ; }
	
}

void f157(void) {
    	uint32_t x849 = UINT32_MAX;
	int8_t x852 = -35;

    t157 = (x849*(x850-(x851|x852)));

    if (t157 != 4294967294U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x857 = -1;
	int8_t x858 = INT8_MAX;
	volatile int16_t x859 = 0;
	int8_t x860 = 1;
	int32_t t158 = -6391;

    t158 = (x857*(x858-(x859|x860)));

    if (t158 != -126) { NG(); } else { ; }
	
}

void f159(void) {
    	uint16_t x861 = 26097U;
	int16_t x862 = INT16_MAX;
	static int64_t x863 = 27457815867094LL;
	int32_t x864 = INT32_MAX;

    t159 = (x861*(x862-(x863|x864)));

    if (t159 != -716620315446706176LL) { NG(); } else { ; }
	
}

void f160(void) {
    	uint16_t x885 = UINT16_MAX;
	uint8_t x886 = 96U;
	static int16_t x887 = INT16_MAX;
	volatile int32_t t160 = -90815;

    t160 = (x885*(x886-(x887|x888)));

    if (t160 != 6356895) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x892 = -1;
	volatile int32_t t161 = 1729641;

    t161 = (x889*(x890-(x891|x892)));

    if (t161 != -10150) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x893 = INT8_MAX;
	uint8_t x894 = UINT8_MAX;
	static int8_t x895 = INT8_MIN;
	int32_t t162 = -55061;

    t162 = (x893*(x894-(x895|x896)));

    if (t162 != 32512) { NG(); } else { ; }
	
}

void f163(void) {
    	int64_t x898 = INT64_MIN;
	uint64_t x899 = 313706387LLU;
	static int8_t x900 = -1;
	static volatile uint64_t t163 = 10180867071LLU;

    t163 = (x897*(x898-(x899|x900)));

    if (t163 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int32_t x901 = -1;
	int16_t x902 = -6;
	volatile uint16_t x903 = 0U;
	int64_t x904 = INT64_MIN;
	static int64_t t164 = -9030412LL;

    t164 = (x901*(x902-(x903|x904)));

    if (t164 != -9223372036854775802LL) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int16_t x905 = -1;
	int8_t x906 = INT8_MAX;
	int8_t x908 = 56;
	static volatile int32_t t165 = 11848;

    t165 = (x905*(x906-(x907|x908)));

    if (t165 != -199) { NG(); } else { ; }
	
}

void f166(void) {
    	uint8_t x914 = UINT8_MAX;
	static uint8_t x915 = 7U;
	uint64_t x916 = 6795651995755LLU;
	uint64_t t166 = 32619LLU;

    t166 = (x913*(x914-(x915|x916)));

    if (t166 != 6795651995504LLU) { NG(); } else { ; }
	
}

void f167(void) {
    	static int16_t x917 = 3;
	volatile uint16_t x918 = 0U;
	int32_t x919 = -1;
	int32_t x920 = 9;
	volatile int32_t t167 = -153263;

    t167 = (x917*(x918-(x919|x920)));

    if (t167 != 3) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x922 = INT32_MIN;
	int8_t x923 = INT8_MIN;
	volatile int64_t t168 = -7326617651219LL;

    t168 = (x921*(x922-(x923|x924)));

    if (t168 != -547608297600LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x925 = -1;
	int64_t x926 = 3230594169267233757LL;
	uint16_t x928 = UINT16_MAX;

    t169 = (x925*(x926-(x927|x928)));

    if (t169 != 1197633322854177826LLU) { NG(); } else { ; }
	
}

void f170(void) {
    	int32_t x929 = -1;
	static volatile uint8_t x931 = UINT8_MAX;
	int16_t x932 = INT16_MAX;

    t170 = (x929*(x930-(x931|x932)));

    if (t170 != 32768LL) { NG(); } else { ; }
	
}

void f171(void) {
    	uint16_t x933 = 116U;
	static int8_t x934 = INT8_MIN;
	int16_t x936 = INT16_MIN;

    t171 = (x933*(x934-(x935|x936)));

    if (t171 != -8236) { NG(); } else { ; }
	
}

void f172(void) {
    	uint64_t x941 = UINT64_MAX;
	volatile uint16_t x942 = 3U;
	volatile int32_t x943 = 262317235;
	int16_t x944 = INT16_MIN;

    t172 = (x941*(x942-(x943|x944)));

    if (t172 != 18446744073709528240LLU) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x945 = -49LL;
	uint32_t x946 = UINT32_MAX;
	static uint32_t x947 = UINT32_MAX;
	uint32_t x948 = 217U;
	int64_t t173 = -141846LL;

    t173 = (x945*(x946-(x947|x948)));

    if (t173 != 0LL) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x957 = UINT32_MAX;
	static int32_t x958 = INT32_MAX;
	static int8_t x960 = INT8_MAX;
	static volatile uint64_t t174 = 1639876LLU;

    t174 = (x957*(x958-(x959|x960)));

    if (t174 != 6072031556862209664LLU) { NG(); } else { ; }
	
}

void f175(void) {
    	uint32_t x961 = UINT32_MAX;
	int32_t x962 = -1;
	volatile int8_t x963 = -61;
	int16_t x964 = INT16_MAX;
	uint32_t t175 = 369414332U;

    t175 = (x961*(x962-(x963|x964)));

    if (t175 != 0U) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile int8_t x965 = INT8_MAX;
	uint16_t x966 = UINT16_MAX;
	int8_t x968 = -1;

    t176 = (x965*(x966-(x967|x968)));

    if (t176 != 8323072) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile uint64_t x973 = 1LLU;
	int16_t x974 = INT16_MIN;
	uint32_t x975 = 1U;
	uint64_t t177 = 11LLU;

    t177 = (x973*(x974-(x975|x976)));

    if (t177 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint64_t x981 = UINT64_MAX;
	int64_t x982 = 2134533293957156232LL;
	int64_t x983 = INT64_MAX;
	volatile uint64_t t178 = 17394042262706LLU;

    t178 = (x981*(x982-(x983|x984)));

    if (t178 != 16312210779752395383LLU) { NG(); } else { ; }
	
}

void f179(void) {
    	int8_t x985 = INT8_MIN;
	uint8_t x987 = 4U;
	uint64_t x988 = 8144082LLU;
	static uint64_t t179 = 22868437LLU;

    t179 = (x985*(x986-(x987|x988)));

    if (t179 != 1042445568LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	uint64_t x989 = 29133100867269LLU;
	uint8_t x990 = 1U;
	volatile uint8_t x991 = 6U;

    t180 = (x989*(x990-(x991|x992)));

    if (t180 != 29919694590685263LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint16_t x993 = 5952U;
	uint32_t x995 = 2101473U;
	uint64_t x996 = 37437LLU;
	uint64_t t181 = 880659209886LLU;

    t181 = (x993*(x994-(x995|x996)));

    if (t181 != 18446744061003329152LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	static int16_t x1001 = 0;
	int16_t x1004 = -1;
	volatile int64_t t182 = 664256341119806970LL;

    t182 = (x1001*(x1002-(x1003|x1004)));

    if (t182 != 0LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int16_t x1005 = INT16_MIN;
	int16_t x1006 = 15072;
	static uint64_t x1007 = UINT64_MAX;
	int16_t x1008 = -15;
	uint64_t t183 = 5538666669725876LLU;

    t183 = (x1005*(x1006-(x1007|x1008)));

    if (t183 != 18446744073215639552LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	uint8_t x1010 = 18U;
	static int64_t x1011 = INT64_MAX;
	uint64_t x1012 = 98802229460LLU;
	volatile uint64_t t184 = 2011LLU;

    t184 = (x1009*(x1010-(x1011|x1012)));

    if (t184 != 9223372077656965101LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int16_t x1017 = INT16_MIN;
	int32_t x1019 = INT32_MIN;
	uint32_t x1020 = 32630U;
	static uint32_t t185 = 4731811U;

    t185 = (x1017*(x1018-(x1019|x1020)));

    if (t185 != 1060864000U) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1022 = 4296U;
	uint8_t x1024 = 2U;
	static int32_t t186 = -176389;

    t186 = (x1021*(x1022-(x1023|x1024)));

    if (t186 != -1989511) { NG(); } else { ; }
	
}

void f187(void) {
    	static uint8_t x1026 = 0U;
	uint32_t x1027 = 2595U;
	uint32_t t187 = 673U;

    t187 = (x1025*(x1026-(x1027|x1028)));

    if (t187 != 86U) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1029 = UINT64_MAX;
	uint16_t x1030 = 0U;
	static int32_t x1031 = -1;
	static int8_t x1032 = INT8_MIN;
	uint64_t t188 = UINT64_MAX;

    t188 = (x1029*(x1030-(x1031|x1032)));

    if (t188 != UINT64_MAX) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x1035 = -1;
	uint16_t x1036 = 2786U;
	static int64_t t189 = -2582LL;

    t189 = (x1033*(x1034-(x1035|x1036)));

    if (t189 != 215353669248LL) { NG(); } else { ; }
	
}

void f190(void) {
    	uint64_t x1038 = 1453LLU;
	uint64_t x1040 = 2222586LLU;
	uint64_t t190 = 52753284899740LLU;

    t190 = (x1037*(x1038-(x1039|x1040)));

    if (t190 != 4294965842LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1042 = 4752030;
	volatile int64_t x1043 = -1LL;
	int16_t x1044 = 13878;
	uint64_t t191 = 514323728120LLU;

    t191 = (x1041*(x1042-(x1043|x1044)));

    if (t191 != 18446744073704799585LLU) { NG(); } else { ; }
	
}

void f192(void) {
    	static int8_t x1045 = INT8_MIN;
	int64_t x1046 = -30LL;
	uint16_t x1047 = 0U;
	volatile int64_t t192 = 609729912616LL;

    t192 = (x1045*(x1046-(x1047|x1048)));

    if (t192 != 3840LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int8_t x1053 = -1;
	int64_t x1054 = INT64_MIN;
	int16_t x1055 = -1;
	static int32_t x1056 = INT32_MIN;
	int64_t t193 = INT64_MAX;

    t193 = (x1053*(x1054-(x1055|x1056)));

    if (t193 != INT64_MAX) { NG(); } else { ; }
	
}

void f194(void) {
    	int16_t x1057 = INT16_MIN;
	int32_t x1058 = INT32_MIN;
	static int32_t x1060 = -213433;
	int64_t t194 = -133985210390026269LL;

    t194 = (x1057*(x1058-(x1059|x1060)));

    if (t194 != 70361750405120LL) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int8_t x1061 = INT8_MIN;
	int16_t x1062 = -1;
	static uint64_t x1063 = 10906914841LLU;
	static volatile int64_t x1064 = INT64_MAX;
	uint64_t t195 = 2702056436LLU;

    t195 = (x1061*(x1062-(x1063|x1064)));

    if (t195 != 0LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int8_t x1065 = -32;
	static uint64_t x1066 = UINT64_MAX;
	uint64_t x1067 = UINT64_MAX;
	int16_t x1068 = -1;
	uint64_t t196 = 808764692339LLU;

    t196 = (x1065*(x1066-(x1067|x1068)));

    if (t196 != 0LLU) { NG(); } else { ; }
	
}

void f197(void) {
    	static uint64_t x1069 = UINT64_MAX;
	int16_t x1070 = -1;
	uint16_t x1071 = 1U;
	volatile uint32_t x1072 = 1032U;
	volatile uint64_t t197 = 94967715098600LLU;

    t197 = (x1069*(x1070-(x1071|x1072)));

    if (t197 != 18446744069414585354LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1073 = -1;
	int64_t x1074 = -1LL;
	int64_t x1075 = -1LL;
	volatile int64_t t198 = -905562851LL;

    t198 = (x1073*(x1074-(x1075|x1076)));

    if (t198 != 0LL) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile int16_t x1077 = -1;
	int64_t x1078 = -1461303253694588489LL;
	volatile int8_t x1079 = INT8_MAX;
	static uint16_t x1080 = UINT16_MAX;
	volatile int64_t t199 = 314107947337886LL;

    t199 = (x1077*(x1078-(x1079|x1080)));

    if (t199 != 1461303253694654024LL) { NG(); } else { ; }
	
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

