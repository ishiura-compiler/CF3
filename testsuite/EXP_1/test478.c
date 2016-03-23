
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

static int8_t x5 = INT8_MAX;
volatile int32_t t0 = 210762;
volatile int32_t x10 = -203;
static uint32_t x11 = UINT32_MAX;
int32_t x23 = INT32_MIN;
int8_t x34 = INT8_MAX;
int64_t x35 = -1LL;
int32_t t5 = -925;
static uint64_t x37 = UINT64_MAX;
static int64_t x38 = -15739981340LL;
int8_t x41 = INT8_MIN;
uint16_t x42 = UINT16_MAX;
int32_t x44 = -1;
volatile int32_t t7 = -21;
uint16_t x56 = 27U;
static int16_t x57 = 386;
static int8_t x59 = INT8_MIN;
int32_t t11 = -60133991;
uint32_t t14 = 2074842134U;
volatile int32_t t16 = 1484612;
uint8_t x106 = 16U;
volatile int8_t x108 = -25;
static int8_t x109 = -1;
static int8_t x111 = -1;
uint64_t x112 = 3705300LLU;
int64_t x125 = 14445269691880LL;
uint64_t x128 = 1666239583LLU;
int32_t x140 = 933765;
volatile int16_t x143 = -115;
static int16_t x154 = -13;
uint16_t x164 = 461U;
volatile int16_t x171 = INT16_MIN;
static volatile uint8_t x181 = 13U;
static int16_t x191 = INT16_MIN;
static int8_t x197 = -1;
int8_t x198 = 1;
int32_t x199 = 0;
uint8_t x217 = 25U;
static volatile int16_t x220 = INT16_MIN;
int32_t x226 = 7782;
int16_t x227 = INT16_MIN;
volatile int32_t t38 = 125342201;
int64_t x231 = -1LL;
volatile int32_t t41 = -27686;
volatile int32_t x252 = 53;
volatile int32_t t42 = -5164;
int64_t x256 = -6LL;
uint64_t x265 = 3LLU;
static int64_t x268 = INT64_MAX;
int32_t x279 = INT32_MIN;
int16_t x297 = INT16_MAX;
int8_t x299 = -1;
volatile int32_t t50 = 230130;
uint8_t x304 = 69U;
volatile int32_t t51 = -628890051;
int16_t x315 = INT16_MAX;
int16_t x338 = INT16_MIN;
int16_t x342 = INT16_MIN;
static int32_t t56 = -311;
static int8_t x354 = INT8_MIN;
int8_t x357 = INT8_MIN;
uint64_t x365 = UINT64_MAX;
static int32_t x366 = -159;
volatile uint64_t t60 = 2LLU;
uint64_t x369 = 22LLU;
int32_t t61 = 1;
uint64_t x384 = UINT64_MAX;
int32_t x385 = -1;
int8_t x387 = -1;
int32_t x396 = -1;
static volatile int32_t t64 = 9571;
volatile uint32_t x399 = 25856856U;
int16_t x405 = INT16_MIN;
static int64_t x409 = INT64_MAX;
volatile int64_t t67 = -5748118790905LL;
static int8_t x421 = 1;
volatile uint64_t x446 = 529336010389042057LLU;
int32_t x451 = INT32_MIN;
uint64_t x452 = 21453896466LLU;
static uint32_t t76 = 301496886U;
int16_t x465 = INT16_MAX;
int16_t x466 = -49;
int16_t x483 = -1;
int32_t t80 = -26237023;
static int64_t x491 = INT64_MAX;
static volatile int8_t x502 = INT8_MIN;
volatile uint16_t x508 = UINT16_MAX;
volatile int32_t t83 = 318;
int64_t x511 = -30980505881LL;
static int8_t x515 = 1;
uint8_t x522 = UINT8_MAX;
uint16_t x527 = UINT16_MAX;
volatile int32_t t88 = 1;
uint64_t x530 = UINT64_MAX;
int8_t x533 = INT8_MIN;
int32_t x534 = 1155134;
int64_t x536 = 10LL;
uint32_t x538 = UINT32_MAX;
volatile uint32_t t91 = 54930U;
int8_t x545 = -1;
uint16_t x553 = 134U;
int8_t x575 = INT8_MAX;
int16_t x577 = 3757;
volatile uint16_t x581 = 208U;
int8_t x583 = -1;
int32_t x593 = -1;
int64_t x595 = INT64_MAX;
int32_t t101 = -359030;
int32_t x603 = -1;
int64_t x609 = -1LL;
static int16_t x610 = INT16_MIN;
int64_t x616 = 1709616LL;
static volatile uint16_t x621 = 10454U;
volatile int64_t x623 = INT64_MAX;
volatile int64_t x626 = -1LL;
uint16_t x631 = 3276U;
static int32_t x634 = -283;
volatile uint32_t x636 = 4513U;
uint32_t x642 = 58186U;
static int64_t x664 = INT64_MAX;
uint8_t x666 = 0U;
uint64_t x668 = 32317214575LLU;
static int8_t x673 = INT8_MAX;
uint64_t x675 = UINT64_MAX;
int16_t x701 = INT16_MIN;
int8_t x719 = -14;
static int8_t x721 = INT8_MIN;
int32_t x723 = -1;
static int32_t t125 = -22796;
int8_t x743 = INT8_MIN;
volatile uint32_t x759 = UINT32_MAX;
int8_t x766 = INT8_MIN;
int16_t x770 = INT16_MIN;
int8_t x777 = -1;
uint64_t x780 = 759LLU;
uint16_t x782 = UINT16_MAX;
uint64_t x791 = UINT64_MAX;
volatile int32_t t136 = -1438;
volatile int64_t x797 = 11807845201LL;
int64_t t138 = 61082LL;
int64_t x820 = 928712LL;
int16_t x828 = INT16_MIN;
int32_t t142 = 216059067;
static int16_t x831 = 4;
int64_t t143 = 408607234123LL;
volatile int64_t x839 = 62LL;
int64_t x840 = INT64_MAX;
uint8_t x859 = UINT8_MAX;
int8_t x861 = INT8_MAX;
static int8_t x871 = INT8_MIN;
int8_t x882 = INT8_MIN;
volatile int32_t t148 = 706102659;
int16_t x885 = INT16_MIN;
volatile int16_t x886 = 13;
volatile int32_t t149 = -53349;
int8_t x889 = -41;
volatile int16_t x897 = 6;
volatile int32_t t152 = 8;
volatile int8_t x910 = 1;
int64_t x912 = -15LL;
int32_t x915 = -1;
volatile int32_t t154 = 467;
static int32_t x923 = INT32_MIN;
static volatile int32_t t155 = -364417;
int8_t x930 = INT8_MIN;
int32_t x933 = 884;
volatile uint32_t t157 = 95064993U;
int32_t t158 = 1451564;
uint32_t x954 = 3014686U;
int32_t x983 = INT32_MIN;
uint16_t x987 = UINT16_MAX;
int16_t x1000 = -55;
int16_t x1018 = INT16_MAX;
static int32_t t171 = 6;
uint32_t x1041 = 7U;
int16_t x1043 = INT16_MIN;
volatile int64_t x1055 = INT64_MIN;
volatile int16_t x1056 = -1;
uint64_t x1061 = 34011LLU;
static uint8_t x1062 = 0U;
int8_t x1076 = 53;
int32_t x1091 = INT32_MIN;
volatile int16_t x1096 = 0;
volatile uint64_t x1097 = UINT64_MAX;
uint64_t t187 = 2109382319LLU;
static int16_t x1124 = -2;
int32_t t188 = -19329717;
static int16_t x1128 = -1;
uint32_t x1137 = 3U;
int64_t x1140 = -1LL;
int64_t t191 = -51260330458811LL;
uint8_t x1150 = 2U;
int16_t x1152 = -1;
static int32_t x1154 = INT32_MIN;
uint32_t t194 = 117815U;
static uint64_t t197 = 175494351LLU;
uint16_t x1181 = 14U;
int16_t x1183 = -1;


void f0(void) {
    	int16_t x6 = -1;
	static int32_t x7 = -21;
	int16_t x8 = 1;

    t0 = (((x5*x6)!=x7)-x8);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	uint8_t x9 = UINT8_MAX;
	volatile uint64_t x12 = UINT64_MAX;
	uint64_t t1 = 2485124145LLU;

    t1 = (((x9*x10)!=x11)-x12);

    if (t1 != 2LLU) { NG(); } else { ; }
	
}

void f2(void) {
    	uint16_t x13 = 1472U;
	int64_t x14 = -1LL;
	int32_t x15 = -3325737;
	static int16_t x16 = 1;
	volatile int32_t t2 = -127192653;

    t2 = (((x13*x14)!=x15)-x16);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	int64_t x21 = INT64_MIN;
	uint64_t x22 = 132730LLU;
	volatile uint64_t x24 = 1130169841346LLU;
	uint64_t t3 = 376216491429LLU;

    t3 = (((x21*x22)!=x23)-x24);

    if (t3 != 18446742943539710271LLU) { NG(); } else { ; }
	
}

void f4(void) {
    	uint8_t x25 = 0U;
	uint32_t x26 = UINT32_MAX;
	volatile uint64_t x27 = 1LLU;
	int64_t x28 = -1LL;
	volatile int64_t t4 = 3727878053776787896LL;

    t4 = (((x25*x26)!=x27)-x28);

    if (t4 != 2LL) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile uint16_t x33 = 29270U;
	int16_t x36 = -1;

    t5 = (((x33*x34)!=x35)-x36);

    if (t5 != 2) { NG(); } else { ; }
	
}

void f6(void) {
    	int8_t x39 = -33;
	int32_t x40 = -6;
	static volatile int32_t t6 = -1;

    t6 = (((x37*x38)!=x39)-x40);

    if (t6 != 7) { NG(); } else { ; }
	
}

void f7(void) {
    	int64_t x43 = 83532LL;

    t7 = (((x41*x42)!=x43)-x44);

    if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
    	uint64_t x45 = UINT64_MAX;
	int32_t x46 = INT32_MIN;
	int32_t x47 = 595236418;
	static int8_t x48 = 1;
	int32_t t8 = 23686;

    t8 = (((x45*x46)!=x47)-x48);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	static uint32_t x49 = 302465U;
	uint64_t x50 = 4625LLU;
	volatile int8_t x51 = 1;
	uint64_t x52 = 230312265762433696LLU;
	volatile uint64_t t9 = 201151250093LLU;

    t9 = (((x49*x50)!=x51)-x52);

    if (t9 != 18216431807947117921LLU) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x53 = INT8_MAX;
	uint8_t x54 = 98U;
	static uint32_t x55 = 17785012U;
	int32_t t10 = -310395558;

    t10 = (((x53*x54)!=x55)-x56);

    if (t10 != -26) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x58 = -1;
	uint8_t x60 = 119U;

    t11 = (((x57*x58)!=x59)-x60);

    if (t11 != -118) { NG(); } else { ; }
	
}

void f12(void) {
    	static volatile int64_t x65 = -1LL;
	uint64_t x66 = 26058479784531LLU;
	uint32_t x67 = 475U;
	int32_t x68 = INT32_MAX;
	static int32_t t12 = 31;

    t12 = (((x65*x66)!=x67)-x68);

    if (t12 != -2147483646) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x69 = -3767LL;
	volatile int16_t x70 = INT16_MIN;
	int64_t x71 = INT64_MIN;
	uint16_t x72 = 18U;
	volatile int32_t t13 = 3468;

    t13 = (((x69*x70)!=x71)-x72);

    if (t13 != -17) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x81 = UINT32_MAX;
	static uint16_t x82 = UINT16_MAX;
	uint64_t x83 = UINT64_MAX;
	static uint32_t x84 = 808671611U;

    t14 = (((x81*x82)!=x83)-x84);

    if (t14 != 3486295686U) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x85 = 380;
	volatile uint16_t x86 = UINT16_MAX;
	uint8_t x87 = UINT8_MAX;
	int32_t x88 = INT32_MAX;
	int32_t t15 = -4;

    t15 = (((x85*x86)!=x87)-x88);

    if (t15 != -2147483646) { NG(); } else { ; }
	
}

void f16(void) {
    	static int8_t x89 = 1;
	int8_t x90 = INT8_MIN;
	int8_t x91 = 1;
	int32_t x92 = -1;

    t16 = (((x89*x90)!=x91)-x92);

    if (t16 != 2) { NG(); } else { ; }
	
}

void f17(void) {
    	static uint8_t x93 = UINT8_MAX;
	volatile int8_t x94 = INT8_MAX;
	uint8_t x95 = UINT8_MAX;
	int8_t x96 = INT8_MAX;
	int32_t t17 = -4;

    t17 = (((x93*x94)!=x95)-x96);

    if (t17 != -126) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int64_t x101 = -1LL;
	int8_t x102 = INT8_MIN;
	int64_t x103 = -340592484183214415LL;
	int64_t x104 = INT64_MAX;
	volatile int64_t t18 = 133LL;

    t18 = (((x101*x102)!=x103)-x104);

    if (t18 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f19(void) {
    	uint16_t x105 = 414U;
	static int64_t x107 = 29872477LL;
	int32_t t19 = -69;

    t19 = (((x105*x106)!=x107)-x108);

    if (t19 != 26) { NG(); } else { ; }
	
}

void f20(void) {
    	uint16_t x110 = UINT16_MAX;
	volatile uint64_t t20 = 96607677360LLU;

    t20 = (((x109*x110)!=x111)-x112);

    if (t20 != 18446744073705846317LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	uint32_t x117 = UINT32_MAX;
	static uint64_t x118 = 22294937719LLU;
	static int8_t x119 = -1;
	uint32_t x120 = 48331U;
	volatile uint32_t t21 = 0U;

    t21 = (((x117*x118)!=x119)-x120);

    if (t21 != 4294918966U) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x126 = 0;
	static int8_t x127 = 21;
	uint64_t t22 = 3451LLU;

    t22 = (((x125*x126)!=x127)-x128);

    if (t22 != 18446744072043312034LLU) { NG(); } else { ; }
	
}

void f23(void) {
    	uint64_t x137 = UINT64_MAX;
	int8_t x138 = 1;
	static uint32_t x139 = 5022U;
	int32_t t23 = -98;

    t23 = (((x137*x138)!=x139)-x140);

    if (t23 != -933764) { NG(); } else { ; }
	
}

void f24(void) {
    	uint32_t x141 = 104114072U;
	int16_t x142 = -1;
	volatile int16_t x144 = INT16_MIN;
	volatile int32_t t24 = -1247263;

    t24 = (((x141*x142)!=x143)-x144);

    if (t24 != 32769) { NG(); } else { ; }
	
}

void f25(void) {
    	int16_t x153 = INT16_MAX;
	static volatile int64_t x155 = -1LL;
	volatile int16_t x156 = -139;
	int32_t t25 = -1037690507;

    t25 = (((x153*x154)!=x155)-x156);

    if (t25 != 140) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x161 = UINT16_MAX;
	volatile int32_t x162 = -3;
	uint8_t x163 = 81U;
	int32_t t26 = 98556;

    t26 = (((x161*x162)!=x163)-x164);

    if (t26 != -460) { NG(); } else { ; }
	
}

void f27(void) {
    	uint32_t x169 = 254673230U;
	int32_t x170 = 19;
	int8_t x172 = -1;
	volatile int32_t t27 = -108;

    t27 = (((x169*x170)!=x171)-x172);

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	uint8_t x173 = 88U;
	static int64_t x174 = 27252043LL;
	volatile int16_t x175 = -1;
	static uint16_t x176 = 37U;
	int32_t t28 = 513795;

    t28 = (((x173*x174)!=x175)-x176);

    if (t28 != -36) { NG(); } else { ; }
	
}

void f29(void) {
    	volatile int8_t x177 = -47;
	static int8_t x178 = INT8_MIN;
	static volatile int64_t x179 = 34157281280670728LL;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t29 = 109;

    t29 = (((x177*x178)!=x179)-x180);

    if (t29 != -65534) { NG(); } else { ; }
	
}

void f30(void) {
    	static int16_t x182 = INT16_MIN;
	uint8_t x183 = 3U;
	static uint32_t x184 = 19U;
	static volatile uint32_t t30 = 127950461U;

    t30 = (((x181*x182)!=x183)-x184);

    if (t30 != 4294967278U) { NG(); } else { ; }
	
}

void f31(void) {
    	int8_t x189 = INT8_MAX;
	int64_t x190 = -1LL;
	int8_t x192 = INT8_MAX;
	int32_t t31 = 1;

    t31 = (((x189*x190)!=x191)-x192);

    if (t31 != -126) { NG(); } else { ; }
	
}

void f32(void) {
    	static int32_t x200 = -1;
	static volatile int32_t t32 = -50671451;

    t32 = (((x197*x198)!=x199)-x200);

    if (t32 != 2) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x205 = 241U;
	volatile int16_t x206 = INT16_MIN;
	int64_t x207 = -96830LL;
	static uint32_t x208 = 107U;
	volatile uint32_t t33 = 20094599U;

    t33 = (((x205*x206)!=x207)-x208);

    if (t33 != 4294967190U) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x209 = 13U;
	static volatile uint32_t x210 = UINT32_MAX;
	int8_t x211 = INT8_MAX;
	int32_t x212 = 6571;
	int32_t t34 = 6639155;

    t34 = (((x209*x210)!=x211)-x212);

    if (t34 != -6570) { NG(); } else { ; }
	
}

void f35(void) {
    	int8_t x213 = -1;
	volatile int32_t x214 = -1;
	int64_t x215 = -1LL;
	int64_t x216 = -1LL;
	volatile int64_t t35 = 1985934461939LL;

    t35 = (((x213*x214)!=x215)-x216);

    if (t35 != 2LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static uint64_t x218 = UINT64_MAX;
	volatile uint16_t x219 = 4U;
	volatile int32_t t36 = -41;

    t36 = (((x217*x218)!=x219)-x220);

    if (t36 != 32769) { NG(); } else { ; }
	
}

void f37(void) {
    	int16_t x221 = 3658;
	uint32_t x222 = 319519U;
	int16_t x223 = INT16_MAX;
	static volatile uint32_t x224 = 37254616U;
	uint32_t t37 = 23U;

    t37 = (((x221*x222)!=x223)-x224);

    if (t37 != 4257712681U) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile int8_t x225 = -55;
	int32_t x228 = 126143;

    t38 = (((x225*x226)!=x227)-x228);

    if (t38 != -126142) { NG(); } else { ; }
	
}

void f39(void) {
    	int64_t x229 = -1LL;
	static uint64_t x230 = UINT64_MAX;
	volatile uint64_t x232 = UINT64_MAX;
	uint64_t t39 = 3383656042465193606LLU;

    t39 = (((x229*x230)!=x231)-x232);

    if (t39 != 2LLU) { NG(); } else { ; }
	
}

void f40(void) {
    	int16_t x233 = INT16_MIN;
	volatile int8_t x234 = 1;
	uint8_t x235 = 48U;
	int8_t x236 = INT8_MIN;
	volatile int32_t t40 = 85;

    t40 = (((x233*x234)!=x235)-x236);

    if (t40 != 129) { NG(); } else { ; }
	
}

void f41(void) {
    	static int64_t x241 = -1LL;
	uint16_t x242 = 200U;
	int8_t x243 = INT8_MIN;
	int16_t x244 = -110;

    t41 = (((x241*x242)!=x243)-x244);

    if (t41 != 111) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x249 = -6944;
	int64_t x250 = 381732915827091LL;
	int64_t x251 = INT64_MIN;

    t42 = (((x249*x250)!=x251)-x252);

    if (t42 != -52) { NG(); } else { ; }
	
}

void f43(void) {
    	int8_t x253 = INT8_MAX;
	static uint8_t x254 = UINT8_MAX;
	volatile uint32_t x255 = 6430U;
	volatile int64_t t43 = -823759844LL;

    t43 = (((x253*x254)!=x255)-x256);

    if (t43 != 7LL) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x257 = 63;
	uint16_t x258 = UINT16_MAX;
	int8_t x259 = -1;
	static uint8_t x260 = 1U;
	int32_t t44 = -15648;

    t44 = (((x257*x258)!=x259)-x260);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	static uint8_t x261 = UINT8_MAX;
	uint64_t x262 = UINT64_MAX;
	static int64_t x263 = INT64_MAX;
	volatile uint16_t x264 = UINT16_MAX;
	int32_t t45 = 41;

    t45 = (((x261*x262)!=x263)-x264);

    if (t45 != -65534) { NG(); } else { ; }
	
}

void f46(void) {
    	uint32_t x266 = 388930392U;
	volatile uint64_t x267 = 1452064892128784LLU;
	volatile int64_t t46 = -62LL;

    t46 = (((x265*x266)!=x267)-x268);

    if (t46 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int32_t x277 = 3105;
	uint16_t x278 = 1926U;
	int8_t x280 = INT8_MAX;
	int32_t t47 = -13342255;

    t47 = (((x277*x278)!=x279)-x280);

    if (t47 != -126) { NG(); } else { ; }
	
}

void f48(void) {
    	static int64_t x281 = INT64_MIN;
	int8_t x282 = 1;
	volatile int16_t x283 = INT16_MIN;
	volatile int16_t x284 = INT16_MAX;
	int32_t t48 = -479;

    t48 = (((x281*x282)!=x283)-x284);

    if (t48 != -32766) { NG(); } else { ; }
	
}

void f49(void) {
    	uint64_t x293 = 8034521871LLU;
	int64_t x294 = -1LL;
	volatile uint64_t x295 = UINT64_MAX;
	uint32_t x296 = UINT32_MAX;
	static volatile uint32_t t49 = 482981172U;

    t49 = (((x293*x294)!=x295)-x296);

    if (t49 != 2U) { NG(); } else { ; }
	
}

void f50(void) {
    	uint8_t x298 = 14U;
	volatile int32_t x300 = -8;

    t50 = (((x297*x298)!=x299)-x300);

    if (t50 != 9) { NG(); } else { ; }
	
}

void f51(void) {
    	int32_t x301 = -1;
	int8_t x302 = 34;
	int8_t x303 = INT8_MIN;

    t51 = (((x301*x302)!=x303)-x304);

    if (t51 != -68) { NG(); } else { ; }
	
}

void f52(void) {
    	uint32_t x313 = 14U;
	volatile int16_t x314 = -358;
	static uint64_t x316 = 213778344298LLU;
	static volatile uint64_t t52 = 4814198LLU;

    t52 = (((x313*x314)!=x315)-x316);

    if (t52 != 18446743859931207319LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	static int8_t x321 = INT8_MAX;
	int64_t x322 = -1LL;
	volatile int16_t x323 = INT16_MIN;
	int32_t x324 = INT32_MAX;
	volatile int32_t t53 = -6;

    t53 = (((x321*x322)!=x323)-x324);

    if (t53 != -2147483646) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x329 = 5808432112715LL;
	uint8_t x330 = UINT8_MAX;
	static int64_t x331 = INT64_MAX;
	int16_t x332 = INT16_MAX;
	int32_t t54 = -43;

    t54 = (((x329*x330)!=x331)-x332);

    if (t54 != -32766) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint16_t x337 = UINT16_MAX;
	uint32_t x339 = 25U;
	int32_t x340 = -1118;
	static volatile int32_t t55 = -81862;

    t55 = (((x337*x338)!=x339)-x340);

    if (t55 != 1119) { NG(); } else { ; }
	
}

void f56(void) {
    	int16_t x341 = -97;
	uint64_t x343 = 3146747LLU;
	volatile int32_t x344 = -759;

    t56 = (((x341*x342)!=x343)-x344);

    if (t56 != 760) { NG(); } else { ; }
	
}

void f57(void) {
    	int16_t x353 = INT16_MIN;
	volatile int64_t x355 = -17500612LL;
	volatile int8_t x356 = -1;
	volatile int32_t t57 = -14269;

    t57 = (((x353*x354)!=x355)-x356);

    if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
    	uint64_t x358 = UINT64_MAX;
	uint64_t x359 = 46167LLU;
	int64_t x360 = INT64_MAX;
	int64_t t58 = -1LL;

    t58 = (((x357*x358)!=x359)-x360);

    if (t58 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f59(void) {
    	volatile uint32_t x361 = 2636U;
	int32_t x362 = 0;
	uint64_t x363 = 53857723871LLU;
	int32_t x364 = INT32_MAX;
	volatile int32_t t59 = -6716010;

    t59 = (((x361*x362)!=x363)-x364);

    if (t59 != -2147483646) { NG(); } else { ; }
	
}

void f60(void) {
    	uint16_t x367 = UINT16_MAX;
	uint64_t x368 = 19107407LLU;

    t60 = (((x365*x366)!=x367)-x368);

    if (t60 != 18446744073690444210LLU) { NG(); } else { ; }
	
}

void f61(void) {
    	int32_t x370 = INT32_MAX;
	volatile int8_t x371 = INT8_MAX;
	int8_t x372 = -26;

    t61 = (((x369*x370)!=x371)-x372);

    if (t61 != 27) { NG(); } else { ; }
	
}

void f62(void) {
    	int16_t x381 = INT16_MAX;
	uint32_t x382 = 37923U;
	int64_t x383 = INT64_MAX;
	uint64_t t62 = 79419819779LLU;

    t62 = (((x381*x382)!=x383)-x384);

    if (t62 != 2LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	uint16_t x386 = 21624U;
	volatile uint8_t x388 = 30U;
	volatile int32_t t63 = -66402;

    t63 = (((x385*x386)!=x387)-x388);

    if (t63 != -29) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x393 = 5306178;
	int16_t x394 = -1;
	int64_t x395 = INT64_MIN;

    t64 = (((x393*x394)!=x395)-x396);

    if (t64 != 2) { NG(); } else { ; }
	
}

void f65(void) {
    	volatile uint16_t x397 = UINT16_MAX;
	int16_t x398 = -1;
	volatile uint16_t x400 = 1U;
	int32_t t65 = 199549;

    t65 = (((x397*x398)!=x399)-x400);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	uint64_t x406 = 1901LLU;
	static volatile uint64_t x407 = 4311403271862LLU;
	int16_t x408 = INT16_MIN;
	int32_t t66 = -258818;

    t66 = (((x405*x406)!=x407)-x408);

    if (t66 != 32769) { NG(); } else { ; }
	
}

void f67(void) {
    	uint64_t x410 = UINT64_MAX;
	int64_t x411 = -1LL;
	int64_t x412 = INT64_MAX;

    t67 = (((x409*x410)!=x411)-x412);

    if (t67 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x413 = 59012LL;
	volatile int16_t x414 = 1;
	static volatile int32_t x415 = -1;
	int32_t x416 = -1;
	volatile int32_t t68 = 0;

    t68 = (((x413*x414)!=x415)-x416);

    if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
    	int8_t x422 = INT8_MIN;
	int8_t x423 = INT8_MIN;
	int8_t x424 = INT8_MAX;
	static volatile int32_t t69 = 991;

    t69 = (((x421*x422)!=x423)-x424);

    if (t69 != -127) { NG(); } else { ; }
	
}

void f70(void) {
    	uint32_t x429 = 2043221419U;
	uint8_t x430 = 17U;
	int64_t x431 = INT64_MIN;
	uint16_t x432 = 1U;
	volatile int32_t t70 = -549393;

    t70 = (((x429*x430)!=x431)-x432);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	static uint8_t x433 = 11U;
	int16_t x434 = INT16_MIN;
	volatile int64_t x435 = -1LL;
	uint32_t x436 = 1446118703U;
	uint32_t t71 = 66379237U;

    t71 = (((x433*x434)!=x435)-x436);

    if (t71 != 2848848594U) { NG(); } else { ; }
	
}

void f72(void) {
    	uint8_t x437 = 0U;
	static int32_t x438 = 7698916;
	int32_t x439 = INT32_MAX;
	int32_t x440 = 6;
	int32_t t72 = 26118;

    t72 = (((x437*x438)!=x439)-x440);

    if (t72 != -5) { NG(); } else { ; }
	
}

void f73(void) {
    	uint8_t x445 = 0U;
	uint16_t x447 = 5U;
	static int32_t x448 = INT32_MAX;
	static int32_t t73 = -180;

    t73 = (((x445*x446)!=x447)-x448);

    if (t73 != -2147483646) { NG(); } else { ; }
	
}

void f74(void) {
    	int32_t x449 = INT32_MIN;
	volatile uint64_t x450 = 1928318LLU;
	volatile uint64_t t74 = 14154LLU;

    t74 = (((x449*x450)!=x451)-x452);

    if (t74 != 18446744052255655151LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	int8_t x453 = -17;
	uint16_t x454 = UINT16_MAX;
	int32_t x455 = INT32_MAX;
	int16_t x456 = -1;
	static int32_t t75 = -518131;

    t75 = (((x453*x454)!=x455)-x456);

    if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
    	uint32_t x461 = 1012U;
	uint8_t x462 = 5U;
	int8_t x463 = INT8_MIN;
	uint32_t x464 = 61U;

    t76 = (((x461*x462)!=x463)-x464);

    if (t76 != 4294967236U) { NG(); } else { ; }
	
}

void f77(void) {
    	static int32_t x467 = -1;
	int32_t x468 = -31548871;
	volatile int32_t t77 = 29317157;

    t77 = (((x465*x466)!=x467)-x468);

    if (t77 != 31548872) { NG(); } else { ; }
	
}

void f78(void) {
    	int8_t x469 = 22;
	volatile int16_t x470 = INT16_MAX;
	uint8_t x471 = UINT8_MAX;
	int64_t x472 = 604066344510LL;
	volatile int64_t t78 = -125424882LL;

    t78 = (((x469*x470)!=x471)-x472);

    if (t78 != -604066344509LL) { NG(); } else { ; }
	
}

void f79(void) {
    	int16_t x477 = INT16_MAX;
	int32_t x478 = 21571;
	int32_t x479 = INT32_MIN;
	static uint32_t x480 = UINT32_MAX;
	volatile uint32_t t79 = 0U;

    t79 = (((x477*x478)!=x479)-x480);

    if (t79 != 2U) { NG(); } else { ; }
	
}

void f80(void) {
    	static int8_t x481 = -1;
	static int16_t x482 = 86;
	volatile int16_t x484 = -1944;

    t80 = (((x481*x482)!=x483)-x484);

    if (t80 != 1945) { NG(); } else { ; }
	
}

void f81(void) {
    	uint8_t x489 = 0U;
	static int64_t x490 = -1LL;
	int32_t x492 = 98378;
	int32_t t81 = -19378;

    t81 = (((x489*x490)!=x491)-x492);

    if (t81 != -98377) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x501 = -2;
	static uint8_t x503 = 1U;
	volatile int8_t x504 = -1;
	int32_t t82 = 134067091;

    t82 = (((x501*x502)!=x503)-x504);

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	int32_t x505 = INT32_MIN;
	uint64_t x506 = UINT64_MAX;
	static volatile int64_t x507 = -310936602LL;

    t83 = (((x505*x506)!=x507)-x508);

    if (t83 != -65534) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x509 = -13;
	int8_t x510 = -2;
	static uint8_t x512 = UINT8_MAX;
	static volatile int32_t t84 = -194090105;

    t84 = (((x509*x510)!=x511)-x512);

    if (t84 != -254) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile uint64_t x513 = UINT64_MAX;
	int32_t x514 = INT32_MAX;
	static int32_t x516 = 1;
	int32_t t85 = -9212;

    t85 = (((x513*x514)!=x515)-x516);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int8_t x517 = INT8_MIN;
	int32_t x518 = 23;
	int8_t x519 = -1;
	int8_t x520 = 26;
	int32_t t86 = -256999;

    t86 = (((x517*x518)!=x519)-x520);

    if (t86 != -25) { NG(); } else { ; }
	
}

void f87(void) {
    	int32_t x521 = 42042;
	volatile int32_t x523 = 13805871;
	static int16_t x524 = -1;
	int32_t t87 = 96006497;

    t87 = (((x521*x522)!=x523)-x524);

    if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
    	uint64_t x525 = 14699173LLU;
	uint64_t x526 = 266850964729234LLU;
	int16_t x528 = INT16_MAX;

    t88 = (((x525*x526)!=x527)-x528);

    if (t88 != -32766) { NG(); } else { ; }
	
}

void f89(void) {
    	int64_t x529 = -1LL;
	int16_t x531 = 67;
	int32_t x532 = 4303886;
	volatile int32_t t89 = -166642;

    t89 = (((x529*x530)!=x531)-x532);

    if (t89 != -4303885) { NG(); } else { ; }
	
}

void f90(void) {
    	int32_t x535 = INT32_MAX;
	volatile int64_t t90 = -374658572054587029LL;

    t90 = (((x533*x534)!=x535)-x536);

    if (t90 != -9LL) { NG(); } else { ; }
	
}

void f91(void) {
    	static int32_t x537 = 1508;
	volatile int8_t x539 = -2;
	uint32_t x540 = UINT32_MAX;

    t91 = (((x537*x538)!=x539)-x540);

    if (t91 != 2U) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x546 = UINT16_MAX;
	volatile uint16_t x547 = 6U;
	uint16_t x548 = UINT16_MAX;
	int32_t t92 = 5;

    t92 = (((x545*x546)!=x547)-x548);

    if (t92 != -65534) { NG(); } else { ; }
	
}

void f93(void) {
    	int8_t x554 = INT8_MIN;
	volatile uint64_t x555 = 533473219501144LLU;
	static int64_t x556 = INT64_MAX;
	int64_t t93 = 351974LL;

    t93 = (((x553*x554)!=x555)-x556);

    if (t93 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f94(void) {
    	static int8_t x557 = -1;
	int64_t x558 = -1LL;
	uint64_t x559 = 17777007794930LLU;
	int16_t x560 = INT16_MAX;
	int32_t t94 = -862681628;

    t94 = (((x557*x558)!=x559)-x560);

    if (t94 != -32766) { NG(); } else { ; }
	
}

void f95(void) {
    	int32_t x565 = INT32_MIN;
	uint64_t x566 = UINT64_MAX;
	int8_t x567 = -1;
	int16_t x568 = -18;
	volatile int32_t t95 = -292113;

    t95 = (((x565*x566)!=x567)-x568);

    if (t95 != 19) { NG(); } else { ; }
	
}

void f96(void) {
    	int64_t x573 = INT64_MIN;
	uint64_t x574 = 33119191640932LLU;
	static int8_t x576 = INT8_MIN;
	volatile int32_t t96 = -58677;

    t96 = (((x573*x574)!=x575)-x576);

    if (t96 != 129) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile int8_t x578 = 14;
	static uint8_t x579 = 3U;
	volatile int16_t x580 = INT16_MIN;
	volatile int32_t t97 = 102746;

    t97 = (((x577*x578)!=x579)-x580);

    if (t97 != 32769) { NG(); } else { ; }
	
}

void f98(void) {
    	uint8_t x582 = 34U;
	int64_t x584 = INT64_MAX;
	static volatile int64_t t98 = -3589132828LL;

    t98 = (((x581*x582)!=x583)-x584);

    if (t98 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x585 = INT16_MIN;
	uint32_t x586 = UINT32_MAX;
	int16_t x587 = INT16_MAX;
	uint16_t x588 = 1U;
	static volatile int32_t t99 = 57;

    t99 = (((x585*x586)!=x587)-x588);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	int8_t x589 = INT8_MAX;
	volatile int32_t x590 = 6;
	uint16_t x591 = 251U;
	int8_t x592 = INT8_MIN;
	static volatile int32_t t100 = -88909492;

    t100 = (((x589*x590)!=x591)-x592);

    if (t100 != 129) { NG(); } else { ; }
	
}

void f101(void) {
    	uint32_t x594 = 51681344U;
	int8_t x596 = INT8_MAX;

    t101 = (((x593*x594)!=x595)-x596);

    if (t101 != -126) { NG(); } else { ; }
	
}

void f102(void) {
    	int8_t x601 = 0;
	uint16_t x602 = 23163U;
	int32_t x604 = 0;
	int32_t t102 = 6389;

    t102 = (((x601*x602)!=x603)-x604);

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	int8_t x605 = -19;
	uint8_t x606 = 86U;
	int32_t x607 = INT32_MAX;
	volatile int32_t x608 = 11;
	int32_t t103 = 2;

    t103 = (((x605*x606)!=x607)-x608);

    if (t103 != -10) { NG(); } else { ; }
	
}

void f104(void) {
    	int32_t x611 = -1;
	int8_t x612 = 1;
	volatile int32_t t104 = 14500;

    t104 = (((x609*x610)!=x611)-x612);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x613 = UINT8_MAX;
	int32_t x614 = -6;
	int8_t x615 = INT8_MAX;
	int64_t t105 = -662222317320807LL;

    t105 = (((x613*x614)!=x615)-x616);

    if (t105 != -1709615LL) { NG(); } else { ; }
	
}

void f106(void) {
    	uint16_t x622 = 3U;
	int32_t x624 = -1;
	volatile int32_t t106 = 41367;

    t106 = (((x621*x622)!=x623)-x624);

    if (t106 != 2) { NG(); } else { ; }
	
}

void f107(void) {
    	uint16_t x625 = UINT16_MAX;
	int16_t x627 = INT16_MAX;
	uint32_t x628 = 13470U;
	volatile uint32_t t107 = 2068097432U;

    t107 = (((x625*x626)!=x627)-x628);

    if (t107 != 4294953827U) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x629 = 308U;
	int16_t x630 = INT16_MIN;
	uint16_t x632 = 2308U;
	int32_t t108 = -7;

    t108 = (((x629*x630)!=x631)-x632);

    if (t108 != -2307) { NG(); } else { ; }
	
}

void f109(void) {
    	static int8_t x633 = INT8_MAX;
	volatile int16_t x635 = 202;
	volatile uint32_t t109 = 1233604U;

    t109 = (((x633*x634)!=x635)-x636);

    if (t109 != 4294962784U) { NG(); } else { ; }
	
}

void f110(void) {
    	int8_t x641 = INT8_MIN;
	volatile int8_t x643 = INT8_MIN;
	int16_t x644 = INT16_MIN;
	volatile int32_t t110 = 4264;

    t110 = (((x641*x642)!=x643)-x644);

    if (t110 != 32769) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile int32_t x645 = -1;
	int64_t x646 = -5166040LL;
	uint16_t x647 = 30U;
	int8_t x648 = INT8_MIN;
	int32_t t111 = 20285;

    t111 = (((x645*x646)!=x647)-x648);

    if (t111 != 129) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x649 = 13;
	static uint16_t x650 = 10U;
	static volatile int32_t x651 = INT32_MIN;
	uint64_t x652 = 3514390299126530LLU;
	volatile uint64_t t112 = 19285LLU;

    t112 = (((x649*x650)!=x651)-x652);

    if (t112 != 18443229683410425087LLU) { NG(); } else { ; }
	
}

void f113(void) {
    	uint8_t x661 = 44U;
	static int32_t x662 = -1;
	int16_t x663 = 1;
	int64_t t113 = 0LL;

    t113 = (((x661*x662)!=x663)-x664);

    if (t113 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int16_t x665 = -147;
	static volatile int8_t x667 = INT8_MIN;
	volatile uint64_t t114 = 1256258708LLU;

    t114 = (((x665*x666)!=x667)-x668);

    if (t114 != 18446744041392337042LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	int16_t x674 = 1967;
	int16_t x676 = INT16_MIN;
	volatile int32_t t115 = -32734;

    t115 = (((x673*x674)!=x675)-x676);

    if (t115 != 32769) { NG(); } else { ; }
	
}

void f116(void) {
    	volatile int64_t x681 = -1LL;
	int8_t x682 = INT8_MAX;
	uint8_t x683 = 0U;
	int16_t x684 = 33;
	int32_t t116 = 277329449;

    t116 = (((x681*x682)!=x683)-x684);

    if (t116 != -32) { NG(); } else { ; }
	
}

void f117(void) {
    	volatile int8_t x685 = INT8_MIN;
	int16_t x686 = INT16_MIN;
	volatile uint8_t x687 = UINT8_MAX;
	static int64_t x688 = -1738LL;
	volatile int64_t t117 = -135091816797LL;

    t117 = (((x685*x686)!=x687)-x688);

    if (t117 != 1739LL) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x702 = 15601U;
	uint64_t x703 = UINT64_MAX;
	int64_t x704 = INT64_MAX;
	volatile int64_t t118 = 255790986099727865LL;

    t118 = (((x701*x702)!=x703)-x704);

    if (t118 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f119(void) {
    	int32_t x705 = INT32_MAX;
	uint64_t x706 = UINT64_MAX;
	static volatile int64_t x707 = 44155LL;
	volatile int64_t x708 = -1LL;
	static volatile int64_t t119 = -31324884LL;

    t119 = (((x705*x706)!=x707)-x708);

    if (t119 != 2LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int64_t x713 = -33554087LL;
	volatile int8_t x714 = 48;
	int16_t x715 = INT16_MIN;
	int16_t x716 = -226;
	int32_t t120 = 1994026;

    t120 = (((x713*x714)!=x715)-x716);

    if (t120 != 227) { NG(); } else { ; }
	
}

void f121(void) {
    	int32_t x717 = INT32_MAX;
	uint32_t x718 = 1972320U;
	uint16_t x720 = 2326U;
	int32_t t121 = 29970369;

    t121 = (((x717*x718)!=x719)-x720);

    if (t121 != -2325) { NG(); } else { ; }
	
}

void f122(void) {
    	uint64_t x722 = 138426941116695LLU;
	int8_t x724 = INT8_MIN;
	int32_t t122 = 1895018;

    t122 = (((x721*x722)!=x723)-x724);

    if (t122 != 129) { NG(); } else { ; }
	
}

void f123(void) {
    	uint64_t x725 = 4113248681LLU;
	int16_t x726 = INT16_MIN;
	uint8_t x727 = 7U;
	int16_t x728 = INT16_MIN;
	int32_t t123 = 0;

    t123 = (((x725*x726)!=x727)-x728);

    if (t123 != 32769) { NG(); } else { ; }
	
}

void f124(void) {
    	static int8_t x733 = INT8_MIN;
	uint16_t x734 = 21859U;
	uint64_t x735 = 6056605920879320LLU;
	int32_t x736 = -1;
	volatile int32_t t124 = 140406;

    t124 = (((x733*x734)!=x735)-x736);

    if (t124 != 2) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x737 = UINT32_MAX;
	int64_t x738 = -1LL;
	static uint64_t x739 = 71566LLU;
	int16_t x740 = INT16_MIN;

    t125 = (((x737*x738)!=x739)-x740);

    if (t125 != 32769) { NG(); } else { ; }
	
}

void f126(void) {
    	volatile uint32_t x741 = UINT32_MAX;
	int32_t x742 = INT32_MIN;
	int32_t x744 = -3;
	int32_t t126 = -297119;

    t126 = (((x741*x742)!=x743)-x744);

    if (t126 != 4) { NG(); } else { ; }
	
}

void f127(void) {
    	int16_t x745 = INT16_MAX;
	uint32_t x746 = 19U;
	static int8_t x747 = 0;
	uint8_t x748 = 13U;
	int32_t t127 = 65;

    t127 = (((x745*x746)!=x747)-x748);

    if (t127 != -12) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint16_t x749 = 85U;
	int16_t x750 = -2015;
	static volatile int64_t x751 = -1LL;
	uint8_t x752 = 14U;
	int32_t t128 = -169545;

    t128 = (((x749*x750)!=x751)-x752);

    if (t128 != -13) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x753 = -1546329396774602LL;
	uint64_t x754 = UINT64_MAX;
	volatile uint64_t x755 = 77931LLU;
	volatile int16_t x756 = 1;
	volatile int32_t t129 = 3211765;

    t129 = (((x753*x754)!=x755)-x756);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint16_t x757 = UINT16_MAX;
	static uint16_t x758 = 175U;
	volatile uint8_t x760 = 5U;
	static int32_t t130 = 114708888;

    t130 = (((x757*x758)!=x759)-x760);

    if (t130 != -4) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x765 = -3;
	int16_t x767 = 1604;
	static uint16_t x768 = UINT16_MAX;
	int32_t t131 = -159795;

    t131 = (((x765*x766)!=x767)-x768);

    if (t131 != -65534) { NG(); } else { ; }
	
}

void f132(void) {
    	uint64_t x769 = 749820828231LLU;
	int32_t x771 = -1;
	static int8_t x772 = INT8_MAX;
	volatile int32_t t132 = -38580;

    t132 = (((x769*x770)!=x771)-x772);

    if (t132 != -126) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x773 = -264726567;
	uint32_t x774 = UINT32_MAX;
	volatile uint64_t x775 = 85227127576LLU;
	int16_t x776 = INT16_MAX;
	static volatile int32_t t133 = -94713;

    t133 = (((x773*x774)!=x775)-x776);

    if (t133 != -32766) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int16_t x778 = INT16_MIN;
	int16_t x779 = INT16_MAX;
	uint64_t t134 = 4938935118440464LLU;

    t134 = (((x777*x778)!=x779)-x780);

    if (t134 != 18446744073709550858LLU) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x781 = -1;
	uint8_t x783 = 2U;
	volatile uint64_t x784 = 1884354588012LLU;
	uint64_t t135 = 1LLU;

    t135 = (((x781*x782)!=x783)-x784);

    if (t135 != 18446742189354963605LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x789 = -601715LL;
	static int8_t x790 = INT8_MIN;
	static int32_t x792 = 440772681;

    t136 = (((x789*x790)!=x791)-x792);

    if (t136 != -440772680) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x798 = -1;
	int8_t x799 = -1;
	int8_t x800 = INT8_MIN;
	volatile int32_t t137 = 390128259;

    t137 = (((x797*x798)!=x799)-x800);

    if (t137 != 129) { NG(); } else { ; }
	
}

void f138(void) {
    	int8_t x809 = INT8_MIN;
	static volatile uint8_t x810 = 4U;
	static int16_t x811 = INT16_MIN;
	int64_t x812 = 5LL;

    t138 = (((x809*x810)!=x811)-x812);

    if (t138 != -4LL) { NG(); } else { ; }
	
}

void f139(void) {
    	volatile int32_t x813 = -1;
	int16_t x814 = -1;
	int16_t x815 = -941;
	uint16_t x816 = 7739U;
	static volatile int32_t t139 = -21449;

    t139 = (((x813*x814)!=x815)-x816);

    if (t139 != -7738) { NG(); } else { ; }
	
}

void f140(void) {
    	uint16_t x817 = 36U;
	uint16_t x818 = 1562U;
	int8_t x819 = INT8_MIN;
	static volatile int64_t t140 = 1484275277138529358LL;

    t140 = (((x817*x818)!=x819)-x820);

    if (t140 != -928711LL) { NG(); } else { ; }
	
}

void f141(void) {
    	uint32_t x821 = UINT32_MAX;
	int8_t x822 = INT8_MAX;
	int32_t x823 = INT32_MIN;
	int8_t x824 = -38;
	int32_t t141 = -4818;

    t141 = (((x821*x822)!=x823)-x824);

    if (t141 != 39) { NG(); } else { ; }
	
}

void f142(void) {
    	uint32_t x825 = UINT32_MAX;
	int16_t x826 = 5775;
	static int64_t x827 = -1LL;

    t142 = (((x825*x826)!=x827)-x828);

    if (t142 != 32769) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x829 = 284;
	int64_t x830 = -1995LL;
	int64_t x832 = INT64_MAX;

    t143 = (((x829*x830)!=x831)-x832);

    if (t143 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f144(void) {
    	int8_t x837 = INT8_MIN;
	uint8_t x838 = 1U;
	static volatile int64_t t144 = 3758453733164558152LL;

    t144 = (((x837*x838)!=x839)-x840);

    if (t144 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f145(void) {
    	uint8_t x857 = 41U;
	volatile uint8_t x858 = 110U;
	uint64_t x860 = 3098941LLU;
	uint64_t t145 = 2LLU;

    t145 = (((x857*x858)!=x859)-x860);

    if (t145 != 18446744073706452676LLU) { NG(); } else { ; }
	
}

void f146(void) {
    	static int64_t x862 = -1LL;
	uint16_t x863 = 267U;
	int8_t x864 = -1;
	int32_t t146 = 236562370;

    t146 = (((x861*x862)!=x863)-x864);

    if (t146 != 2) { NG(); } else { ; }
	
}

void f147(void) {
    	int32_t x869 = INT32_MIN;
	int64_t x870 = -1LL;
	int16_t x872 = 41;
	int32_t t147 = 62;

    t147 = (((x869*x870)!=x871)-x872);

    if (t147 != -40) { NG(); } else { ; }
	
}

void f148(void) {
    	int8_t x881 = 2;
	volatile int8_t x883 = 12;
	int16_t x884 = INT16_MIN;

    t148 = (((x881*x882)!=x883)-x884);

    if (t148 != 32769) { NG(); } else { ; }
	
}

void f149(void) {
    	int32_t x887 = INT32_MAX;
	int32_t x888 = 1351;

    t149 = (((x885*x886)!=x887)-x888);

    if (t149 != -1350) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x890 = 1U;
	uint32_t x891 = 5036U;
	int16_t x892 = -1;
	int32_t t150 = 2;

    t150 = (((x889*x890)!=x891)-x892);

    if (t150 != 2) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int8_t x898 = -1;
	int32_t x899 = INT32_MIN;
	volatile uint64_t x900 = 302LLU;
	uint64_t t151 = 1808604882LLU;

    t151 = (((x897*x898)!=x899)-x900);

    if (t151 != 18446744073709551315LLU) { NG(); } else { ; }
	
}

void f152(void) {
    	static uint8_t x901 = 7U;
	volatile int16_t x902 = -45;
	int64_t x903 = INT64_MIN;
	volatile int32_t x904 = -1;

    t152 = (((x901*x902)!=x903)-x904);

    if (t152 != 2) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int64_t x909 = -1LL;
	int64_t x911 = 125575809511LL;
	int64_t t153 = 30069942530703LL;

    t153 = (((x909*x910)!=x911)-x912);

    if (t153 != 16LL) { NG(); } else { ; }
	
}

void f154(void) {
    	static uint16_t x913 = 1648U;
	uint32_t x914 = UINT32_MAX;
	volatile int32_t x916 = -1;

    t154 = (((x913*x914)!=x915)-x916);

    if (t154 != 2) { NG(); } else { ; }
	
}

void f155(void) {
    	uint64_t x921 = UINT64_MAX;
	static int32_t x922 = -9316;
	uint16_t x924 = 6629U;

    t155 = (((x921*x922)!=x923)-x924);

    if (t155 != -6628) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x929 = 3U;
	int8_t x931 = -1;
	static uint64_t x932 = 164LLU;
	static uint64_t t156 = 1758667081311066LLU;

    t156 = (((x929*x930)!=x931)-x932);

    if (t156 != 18446744073709551453LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	uint8_t x934 = 39U;
	volatile int64_t x935 = -1LL;
	uint32_t x936 = 30473U;

    t157 = (((x933*x934)!=x935)-x936);

    if (t157 != 4294936824U) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x941 = INT16_MIN;
	uint8_t x942 = 1U;
	int32_t x943 = -182579;
	static uint16_t x944 = 29649U;

    t158 = (((x941*x942)!=x943)-x944);

    if (t158 != -29648) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x945 = 80LLU;
	static int32_t x946 = INT32_MAX;
	int32_t x947 = INT32_MIN;
	uint16_t x948 = UINT16_MAX;
	volatile int32_t t159 = 160833247;

    t159 = (((x945*x946)!=x947)-x948);

    if (t159 != -65534) { NG(); } else { ; }
	
}

void f160(void) {
    	volatile int8_t x949 = INT8_MIN;
	int32_t x950 = -1;
	int8_t x951 = -1;
	volatile int16_t x952 = INT16_MAX;
	volatile int32_t t160 = -2704;

    t160 = (((x949*x950)!=x951)-x952);

    if (t160 != -32766) { NG(); } else { ; }
	
}

void f161(void) {
    	int16_t x953 = INT16_MIN;
	uint8_t x955 = 59U;
	uint64_t x956 = UINT64_MAX;
	uint64_t t161 = 54318682068LLU;

    t161 = (((x953*x954)!=x955)-x956);

    if (t161 != 2LLU) { NG(); } else { ; }
	
}

void f162(void) {
    	int64_t x957 = 6364006254LL;
	int8_t x958 = -1;
	volatile int8_t x959 = -19;
	int8_t x960 = -29;
	static int32_t t162 = 0;

    t162 = (((x957*x958)!=x959)-x960);

    if (t162 != 30) { NG(); } else { ; }
	
}

void f163(void) {
    	uint64_t x965 = 224LLU;
	int8_t x966 = INT8_MAX;
	uint64_t x967 = 5930LLU;
	int16_t x968 = -498;
	volatile int32_t t163 = 32016;

    t163 = (((x965*x966)!=x967)-x968);

    if (t163 != 499) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x969 = 8U;
	int8_t x970 = -2;
	volatile int64_t x971 = INT64_MAX;
	static volatile int16_t x972 = -1;
	volatile int32_t t164 = 22009731;

    t164 = (((x969*x970)!=x971)-x972);

    if (t164 != 2) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x977 = 56229;
	static int16_t x978 = INT16_MIN;
	volatile uint16_t x979 = 11788U;
	int8_t x980 = 0;
	volatile int32_t t165 = -937628767;

    t165 = (((x977*x978)!=x979)-x980);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static uint8_t x981 = UINT8_MAX;
	int16_t x982 = INT16_MIN;
	volatile int32_t x984 = INT32_MAX;
	volatile int32_t t166 = -41080674;

    t166 = (((x981*x982)!=x983)-x984);

    if (t166 != -2147483646) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x985 = 20;
	int8_t x986 = INT8_MIN;
	static int16_t x988 = 833;
	static int32_t t167 = -9;

    t167 = (((x985*x986)!=x987)-x988);

    if (t167 != -832) { NG(); } else { ; }
	
}

void f168(void) {
    	int8_t x989 = INT8_MIN;
	uint8_t x990 = 62U;
	volatile int32_t x991 = -1;
	static int8_t x992 = INT8_MIN;
	volatile int32_t t168 = 35;

    t168 = (((x989*x990)!=x991)-x992);

    if (t168 != 129) { NG(); } else { ; }
	
}

void f169(void) {
    	int8_t x997 = INT8_MIN;
	int32_t x998 = -6341598;
	volatile int16_t x999 = INT16_MIN;
	static int32_t t169 = 0;

    t169 = (((x997*x998)!=x999)-x1000);

    if (t169 != 56) { NG(); } else { ; }
	
}

void f170(void) {
    	uint64_t x1009 = 208923944735425980LLU;
	uint32_t x1010 = 4075303U;
	int16_t x1011 = -1;
	volatile int16_t x1012 = INT16_MIN;
	int32_t t170 = 1;

    t170 = (((x1009*x1010)!=x1011)-x1012);

    if (t170 != 32769) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x1017 = -1;
	int16_t x1019 = -1;
	uint8_t x1020 = 15U;

    t171 = (((x1017*x1018)!=x1019)-x1020);

    if (t171 != -14) { NG(); } else { ; }
	
}

void f172(void) {
    	int16_t x1025 = INT16_MIN;
	int8_t x1026 = INT8_MAX;
	int16_t x1027 = 13;
	volatile uint8_t x1028 = 9U;
	volatile int32_t t172 = 82900910;

    t172 = (((x1025*x1026)!=x1027)-x1028);

    if (t172 != -8) { NG(); } else { ; }
	
}

void f173(void) {
    	int8_t x1042 = INT8_MAX;
	int16_t x1044 = INT16_MIN;
	int32_t t173 = 40749471;

    t173 = (((x1041*x1042)!=x1043)-x1044);

    if (t173 != 32769) { NG(); } else { ; }
	
}

void f174(void) {
    	volatile int32_t x1053 = INT32_MIN;
	static volatile int64_t x1054 = 2LL;
	volatile int32_t t174 = 11064;

    t174 = (((x1053*x1054)!=x1055)-x1056);

    if (t174 != 2) { NG(); } else { ; }
	
}

void f175(void) {
    	int16_t x1057 = 126;
	uint16_t x1058 = 844U;
	static uint64_t x1059 = 5884729LLU;
	uint64_t x1060 = 84921044LLU;
	volatile uint64_t t175 = 45411832LLU;

    t175 = (((x1057*x1058)!=x1059)-x1060);

    if (t175 != 18446744073624630573LLU) { NG(); } else { ; }
	
}

void f176(void) {
    	volatile uint16_t x1063 = 440U;
	static int8_t x1064 = -1;
	volatile int32_t t176 = -1010;

    t176 = (((x1061*x1062)!=x1063)-x1064);

    if (t176 != 2) { NG(); } else { ; }
	
}

void f177(void) {
    	volatile int16_t x1069 = -1;
	volatile uint16_t x1070 = 3990U;
	static int16_t x1071 = INT16_MIN;
	int16_t x1072 = 26;
	int32_t t177 = -3884;

    t177 = (((x1069*x1070)!=x1071)-x1072);

    if (t177 != -25) { NG(); } else { ; }
	
}

void f178(void) {
    	volatile uint16_t x1073 = UINT16_MAX;
	int16_t x1074 = -14;
	int8_t x1075 = INT8_MIN;
	int32_t t178 = 50;

    t178 = (((x1073*x1074)!=x1075)-x1076);

    if (t178 != -52) { NG(); } else { ; }
	
}

void f179(void) {
    	uint16_t x1081 = UINT16_MAX;
	uint8_t x1082 = 9U;
	int32_t x1083 = INT32_MAX;
	volatile uint64_t x1084 = UINT64_MAX;
	static volatile uint64_t t179 = 25450LLU;

    t179 = (((x1081*x1082)!=x1083)-x1084);

    if (t179 != 2LLU) { NG(); } else { ; }
	
}

void f180(void) {
    	static volatile uint64_t x1089 = 11LLU;
	uint32_t x1090 = 170U;
	volatile int16_t x1092 = INT16_MAX;
	static volatile int32_t t180 = -15;

    t180 = (((x1089*x1090)!=x1091)-x1092);

    if (t180 != -32766) { NG(); } else { ; }
	
}

void f181(void) {
    	int32_t x1093 = -4;
	uint32_t x1094 = 19963765U;
	int16_t x1095 = INT16_MAX;
	volatile int32_t t181 = 183471623;

    t181 = (((x1093*x1094)!=x1095)-x1096);

    if (t181 != 1) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1098 = -1;
	int32_t x1099 = -1;
	static uint16_t x1100 = 6755U;
	int32_t t182 = 0;

    t182 = (((x1097*x1098)!=x1099)-x1100);

    if (t182 != -6754) { NG(); } else { ; }
	
}

void f183(void) {
    	static int16_t x1101 = 0;
	volatile uint8_t x1102 = 1U;
	static int16_t x1103 = 674;
	volatile int16_t x1104 = INT16_MAX;
	int32_t t183 = 763430;

    t183 = (((x1101*x1102)!=x1103)-x1104);

    if (t183 != -32766) { NG(); } else { ; }
	
}

void f184(void) {
    	volatile int64_t x1105 = -1LL;
	int8_t x1106 = INT8_MIN;
	int16_t x1107 = -1;
	int64_t x1108 = -1LL;
	volatile int64_t t184 = 520983410756352128LL;

    t184 = (((x1105*x1106)!=x1107)-x1108);

    if (t184 != 2LL) { NG(); } else { ; }
	
}

void f185(void) {
    	int64_t x1109 = -875133796LL;
	static int8_t x1110 = 12;
	uint16_t x1111 = 106U;
	int32_t x1112 = -809879;
	volatile int32_t t185 = -14397;

    t185 = (((x1109*x1110)!=x1111)-x1112);

    if (t185 != 809880) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x1113 = UINT8_MAX;
	static int16_t x1114 = 57;
	static int16_t x1115 = -7;
	uint32_t x1116 = UINT32_MAX;
	uint32_t t186 = 62U;

    t186 = (((x1113*x1114)!=x1115)-x1116);

    if (t186 != 2U) { NG(); } else { ; }
	
}

void f187(void) {
    	volatile int64_t x1117 = 3LL;
	static int64_t x1118 = 29615522398345LL;
	static volatile int8_t x1119 = INT8_MIN;
	volatile uint64_t x1120 = UINT64_MAX;

    t187 = (((x1117*x1118)!=x1119)-x1120);

    if (t187 != 2LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1121 = UINT64_MAX;
	int32_t x1122 = INT32_MIN;
	int64_t x1123 = INT64_MIN;

    t188 = (((x1121*x1122)!=x1123)-x1124);

    if (t188 != 3) { NG(); } else { ; }
	
}

void f189(void) {
    	uint8_t x1125 = 1U;
	int64_t x1126 = -1LL;
	int32_t x1127 = 46962242;
	int32_t t189 = -21093791;

    t189 = (((x1125*x1126)!=x1127)-x1128);

    if (t189 != 2) { NG(); } else { ; }
	
}

void f190(void) {
    	static int8_t x1133 = INT8_MAX;
	int32_t x1134 = -1;
	static int16_t x1135 = INT16_MAX;
	static int8_t x1136 = INT8_MAX;
	volatile int32_t t190 = -1;

    t190 = (((x1133*x1134)!=x1135)-x1136);

    if (t190 != -126) { NG(); } else { ; }
	
}

void f191(void) {
    	volatile int32_t x1138 = INT32_MIN;
	static uint8_t x1139 = 19U;

    t191 = (((x1137*x1138)!=x1139)-x1140);

    if (t191 != 2LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1141 = -3;
	static uint64_t x1142 = 1012038245LLU;
	static int8_t x1143 = 3;
	volatile int32_t x1144 = -3566;
	static int32_t t192 = 76752;

    t192 = (((x1141*x1142)!=x1143)-x1144);

    if (t192 != 3567) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1149 = 11210315266307LL;
	int16_t x1151 = INT16_MAX;
	static int32_t t193 = 10842;

    t193 = (((x1149*x1150)!=x1151)-x1152);

    if (t193 != 2) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int64_t x1153 = -59LL;
	int32_t x1155 = INT32_MIN;
	uint32_t x1156 = 11U;

    t194 = (((x1153*x1154)!=x1155)-x1156);

    if (t194 != 4294967286U) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1165 = INT8_MIN;
	int64_t x1166 = -37632292089147LL;
	static int8_t x1167 = INT8_MIN;
	static uint64_t x1168 = UINT64_MAX;
	volatile uint64_t t195 = 487LLU;

    t195 = (((x1165*x1166)!=x1167)-x1168);

    if (t195 != 2LLU) { NG(); } else { ; }
	
}

void f196(void) {
    	static int16_t x1169 = -409;
	uint64_t x1170 = UINT64_MAX;
	uint16_t x1171 = 17209U;
	int8_t x1172 = INT8_MIN;
	static int32_t t196 = -4120596;

    t196 = (((x1169*x1170)!=x1171)-x1172);

    if (t196 != 129) { NG(); } else { ; }
	
}

void f197(void) {
    	int64_t x1173 = 208815208LL;
	volatile int16_t x1174 = INT16_MIN;
	volatile int8_t x1175 = -1;
	static uint64_t x1176 = 25044141249768LLU;

    t197 = (((x1173*x1174)!=x1175)-x1176);

    if (t197 != 18446719029568301849LLU) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1177 = INT8_MIN;
	uint64_t x1178 = 11361LLU;
	uint8_t x1179 = 5U;
	int8_t x1180 = INT8_MIN;
	int32_t t198 = 58671;

    t198 = (((x1177*x1178)!=x1179)-x1180);

    if (t198 != 129) { NG(); } else { ; }
	
}

void f199(void) {
    	int8_t x1182 = -6;
	volatile uint64_t x1184 = 402189LLU;
	static volatile uint64_t t199 = 564780LLU;

    t199 = (((x1181*x1182)!=x1183)-x1184);

    if (t199 != 18446744073709149428LLU) { NG(); } else { ; }
	
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

