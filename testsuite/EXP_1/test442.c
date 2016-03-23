
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

uint16_t x24 = UINT16_MAX;
int8_t x36 = INT8_MIN;
int32_t x39 = INT32_MAX;
volatile int32_t t4 = -198008;
volatile int32_t t5 = 5;
int16_t x54 = -31;
static int64_t x56 = INT64_MIN;
static int64_t x59 = 42LL;
int16_t x67 = -1;
volatile int64_t x68 = -5581LL;
uint64_t x73 = 57383446137LLU;
int64_t x83 = 19890753LL;
volatile int32_t t13 = -261955;
static int32_t x110 = -1;
volatile int32_t t19 = 62419;
volatile int64_t x121 = -254007029033183LL;
int8_t x124 = INT8_MIN;
int32_t t20 = 9;
int8_t x131 = INT8_MIN;
static volatile int32_t t22 = 5;
int16_t x140 = -1;
int32_t t24 = -52426;
uint32_t x173 = UINT32_MAX;
uint32_t x174 = 77581U;
int8_t x184 = -2;
int16_t x192 = -1;
uint64_t x193 = 7907219349631LLU;
int32_t x195 = 23301404;
uint16_t x196 = 6769U;
volatile int32_t t30 = 30;
int64_t x199 = 757957LL;
static uint16_t x200 = 1U;
static int16_t x215 = INT16_MIN;
volatile int8_t x226 = -2;
int16_t x227 = INT16_MIN;
uint8_t x233 = UINT8_MAX;
int32_t x235 = INT32_MIN;
volatile int64_t x241 = 7961557LL;
uint16_t x242 = UINT16_MAX;
static int16_t x251 = -1;
volatile uint8_t x262 = 9U;
volatile int32_t x266 = -11004140;
int64_t x277 = -886782453898LL;
uint8_t x280 = 2U;
volatile int32_t t47 = -73751;
static int16_t x291 = -1;
static int8_t x292 = -1;
uint16_t x294 = UINT16_MAX;
static volatile int8_t x298 = -1;
static int32_t x299 = INT32_MIN;
uint8_t x308 = 47U;
static uint64_t x309 = UINT64_MAX;
static volatile int32_t x315 = -79;
int8_t x318 = INT8_MIN;
int32_t x320 = INT32_MIN;
volatile int16_t x321 = 1;
int16_t x324 = -1;
static int8_t x333 = -1;
static int32_t x342 = INT32_MAX;
int32_t x344 = INT32_MAX;
static int32_t t61 = 149696;
int32_t t62 = 12;
int64_t x358 = -24LL;
int16_t x366 = INT16_MAX;
static int32_t t66 = 961;
volatile uint32_t x373 = UINT32_MAX;
int8_t x374 = INT8_MIN;
int32_t t68 = -131007;
int64_t x381 = -22881271LL;
static int32_t x384 = INT32_MIN;
int64_t x396 = -1LL;
volatile int8_t x426 = 16;
uint8_t x437 = UINT8_MAX;
int32_t t79 = -10607;
int64_t x451 = -1876919LL;
static volatile int32_t t80 = 1;
volatile int64_t x460 = -1LL;
volatile uint8_t x465 = 1U;
static int32_t t87 = 5863;
static int32_t x493 = -199978814;
int8_t x509 = INT8_MIN;
volatile int32_t t91 = 22208;
int16_t x515 = INT16_MAX;
int16_t x517 = 21;
uint64_t x520 = 504LLU;
uint16_t x522 = UINT16_MAX;
uint16_t x526 = 3697U;
volatile uint16_t x539 = 31882U;
int8_t x546 = INT8_MAX;
int8_t x551 = -3;
uint8_t x575 = UINT8_MAX;
volatile int32_t x585 = INT32_MIN;
int32_t x588 = INT32_MIN;
volatile int32_t t103 = 48771953;
volatile int16_t x594 = -1;
volatile int8_t x595 = INT8_MIN;
uint8_t x609 = UINT8_MAX;
volatile uint8_t x610 = 3U;
volatile int32_t t107 = -13;
static volatile uint16_t x633 = 123U;
int64_t x635 = 702853348393206433LL;
int32_t t110 = -126633252;
static volatile int32_t t111 = -1;
static uint8_t x654 = UINT8_MAX;
static int8_t x670 = INT8_MAX;
uint32_t x673 = 20350U;
int8_t x676 = INT8_MAX;
volatile int32_t t116 = 135165;
volatile int16_t x691 = -1;
int8_t x694 = -10;
uint64_t x695 = UINT64_MAX;
static uint16_t x696 = 21857U;
uint32_t x705 = 11576U;
int8_t x711 = INT8_MIN;
int16_t x713 = -1;
int32_t x716 = 23;
static int32_t t124 = 504219930;
volatile int32_t t125 = -20;
static volatile uint16_t x742 = 12694U;
volatile int8_t x753 = -1;
static uint8_t x756 = 0U;
uint8_t x760 = UINT8_MAX;
int32_t t130 = 711;
volatile int32_t t131 = 15422;
int32_t x784 = -1;
volatile uint64_t x789 = 199732710014577LLU;
int8_t x791 = -26;
static int16_t x792 = -1;
static uint64_t x793 = 184477233966574LLU;
uint8_t x797 = 117U;
int16_t x799 = INT16_MIN;
static volatile uint64_t x802 = 266332211382978LLU;
int32_t t140 = 178879282;
static int8_t x811 = -1;
volatile int32_t t144 = -7;
int64_t x831 = INT64_MAX;
int16_t x834 = -1;
uint32_t x839 = UINT32_MAX;
int8_t x840 = INT8_MAX;
int32_t x855 = -1;
int32_t x861 = -1;
uint64_t x865 = 13281327928201LLU;
uint16_t x869 = UINT16_MAX;
volatile uint64_t x878 = 21838258615892295LLU;
int16_t x881 = 38;
volatile int8_t x891 = INT8_MAX;
int32_t x894 = INT32_MAX;
int8_t x898 = -1;
int8_t x900 = INT8_MIN;
int64_t x903 = INT64_MAX;
static volatile int32_t t157 = -34568;
static volatile int32_t t158 = 4234;
uint64_t x913 = UINT64_MAX;
volatile int32_t x915 = INT32_MIN;
volatile int32_t t159 = 2;
int64_t x919 = 161269LL;
static int8_t x920 = INT8_MIN;
int32_t x923 = -1;
int32_t t161 = 237508853;
uint8_t x930 = 4U;
volatile int32_t t162 = -3;
volatile int64_t x934 = 25629LL;
uint8_t x936 = UINT8_MAX;
static volatile int64_t x937 = -41275356LL;
int64_t x940 = -196445706LL;
int16_t x954 = 0;
volatile int32_t t167 = -14;
uint16_t x971 = UINT16_MAX;
static uint64_t x977 = UINT64_MAX;
static int16_t x986 = -1;
volatile int32_t x987 = 1;
volatile uint16_t x991 = UINT16_MAX;
uint32_t x992 = 7603U;
int16_t x994 = -1;
volatile uint8_t x1010 = 1U;
uint32_t x1015 = 185070633U;
static volatile int32_t t178 = -6476059;
uint64_t x1021 = 49543175723664449LLU;
int8_t x1027 = INT8_MIN;
uint64_t x1036 = 45679434802621LLU;
static int32_t t183 = -1364532;
uint16_t x1058 = UINT16_MAX;
int64_t x1059 = -4872LL;
int64_t x1063 = INT64_MAX;
int64_t x1072 = -79219LL;
int32_t x1084 = INT32_MIN;
uint16_t x1085 = 3U;
volatile uint8_t x1090 = UINT8_MAX;
int32_t t192 = -1215;
int8_t x1096 = -14;
int64_t x1100 = INT64_MIN;
static int32_t x1109 = INT32_MIN;
int32_t t197 = 0;
static int16_t x1113 = 7543;
volatile int8_t x1122 = INT8_MAX;
int32_t t199 = -3427;


void f0(void) {
    	static int16_t x13 = -4;
	static int8_t x14 = INT8_MAX;
	volatile uint8_t x15 = 48U;
	volatile int8_t x16 = -56;
	volatile int32_t t0 = -2711234;

    t0 = (((x13*x14)/x15)==x16);

    if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
    	volatile int8_t x17 = INT8_MIN;
	static int16_t x18 = -8061;
	uint8_t x19 = 1U;
	int16_t x20 = -1;
	volatile int32_t t1 = 116;

    t1 = (((x17*x18)/x19)==x20);

    if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
    	int8_t x21 = INT8_MAX;
	int16_t x22 = -1;
	static volatile int64_t x23 = -1LL;
	int32_t t2 = -4555;

    t2 = (((x21*x22)/x23)==x24);

    if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
    	uint64_t x33 = UINT64_MAX;
	int32_t x34 = INT32_MIN;
	int64_t x35 = -1LL;
	static volatile int32_t t3 = -8;

    t3 = (((x33*x34)/x35)==x36);

    if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
    	static uint32_t x37 = 3U;
	int8_t x38 = 33;
	uint64_t x40 = 214800LLU;

    t4 = (((x37*x38)/x39)==x40);

    if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x45 = INT8_MAX;
	static uint64_t x46 = UINT64_MAX;
	uint64_t x47 = UINT64_MAX;
	static int64_t x48 = INT64_MIN;

    t5 = (((x45*x46)/x47)==x48);

    if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
    	int16_t x49 = -245;
	int8_t x50 = -4;
	volatile uint16_t x51 = 4U;
	int8_t x52 = 17;
	volatile int32_t t6 = 54780;

    t6 = (((x49*x50)/x51)==x52);

    if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x53 = 16162;
	static int64_t x55 = -1LL;
	static volatile int32_t t7 = -1390785;

    t7 = (((x53*x54)/x55)==x56);

    if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
    	uint16_t x57 = 42U;
	uint32_t x58 = UINT32_MAX;
	static uint64_t x60 = 937037593LLU;
	int32_t t8 = -29339;

    t8 = (((x57*x58)/x59)==x60);

    if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
    	uint64_t x61 = UINT64_MAX;
	int32_t x62 = INT32_MAX;
	uint64_t x63 = 28493216795LLU;
	int8_t x64 = 1;
	int32_t t9 = -42;

    t9 = (((x61*x62)/x63)==x64);

    if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
    	int8_t x65 = -1;
	static uint16_t x66 = 6U;
	int32_t t10 = 6769;

    t10 = (((x65*x66)/x67)==x68);

    if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
    	int8_t x74 = INT8_MIN;
	int8_t x75 = INT8_MAX;
	static int64_t x76 = INT64_MAX;
	static volatile int32_t t11 = 183;

    t11 = (((x73*x74)/x75)==x76);

    if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
    	int16_t x77 = -1;
	int16_t x78 = 35;
	volatile int32_t x79 = INT32_MAX;
	int8_t x80 = 15;
	int32_t t12 = 109964905;

    t12 = (((x77*x78)/x79)==x80);

    if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
    	int32_t x81 = INT32_MIN;
	static uint32_t x82 = 5996420U;
	volatile int8_t x84 = -1;

    t13 = (((x81*x82)/x83)==x84);

    if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
    	uint32_t x89 = UINT32_MAX;
	uint8_t x90 = UINT8_MAX;
	int16_t x91 = INT16_MIN;
	uint64_t x92 = 13720043190841029LLU;
	volatile int32_t t14 = 824140;

    t14 = (((x89*x90)/x91)==x92);

    if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
    	static int16_t x93 = INT16_MIN;
	int8_t x94 = INT8_MAX;
	uint16_t x95 = 30630U;
	int32_t x96 = -129537523;
	static int32_t t15 = -330;

    t15 = (((x93*x94)/x95)==x96);

    if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
    	uint8_t x97 = 49U;
	uint16_t x98 = 1U;
	volatile int32_t x99 = INT32_MIN;
	uint16_t x100 = 31742U;
	volatile int32_t t16 = 44320992;

    t16 = (((x97*x98)/x99)==x100);

    if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
    	int32_t x101 = -1;
	static int8_t x102 = INT8_MIN;
	int64_t x103 = INT64_MIN;
	int32_t x104 = -1;
	volatile int32_t t17 = -21;

    t17 = (((x101*x102)/x103)==x104);

    if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int16_t x109 = INT16_MIN;
	int64_t x111 = INT64_MAX;
	static volatile int32_t x112 = -1;
	int32_t t18 = 38587236;

    t18 = (((x109*x110)/x111)==x112);

    if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
    	static uint64_t x113 = 2121443760LLU;
	volatile uint8_t x114 = 1U;
	uint64_t x115 = UINT64_MAX;
	static int32_t x116 = -1;

    t19 = (((x113*x114)/x115)==x116);

    if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
    	volatile uint32_t x122 = 0U;
	static int32_t x123 = -8;

    t20 = (((x121*x122)/x123)==x124);

    if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
    	int16_t x125 = INT16_MIN;
	uint16_t x126 = 94U;
	static int32_t x127 = -266;
	int32_t x128 = -1;
	volatile int32_t t21 = -8765;

    t21 = (((x125*x126)/x127)==x128);

    if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
    	uint16_t x129 = UINT16_MAX;
	volatile uint16_t x130 = 16U;
	int64_t x132 = INT64_MIN;

    t22 = (((x129*x130)/x131)==x132);

    if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
    	int16_t x137 = -1;
	int32_t x138 = 222;
	uint64_t x139 = 2085108279LLU;
	int32_t t23 = 427910774;

    t23 = (((x137*x138)/x139)==x140);

    if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
    	volatile uint8_t x153 = UINT8_MAX;
	static uint32_t x154 = UINT32_MAX;
	uint64_t x155 = 4LLU;
	int16_t x156 = 0;

    t24 = (((x153*x154)/x155)==x156);

    if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x165 = 0;
	int8_t x166 = -1;
	static int8_t x167 = -1;
	volatile int64_t x168 = 990433875756281241LL;
	static volatile int32_t t25 = 106704;

    t25 = (((x165*x166)/x167)==x168);

    if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
    	static uint32_t x175 = 461U;
	volatile uint16_t x176 = 1528U;
	static volatile int32_t t26 = 153;

    t26 = (((x173*x174)/x175)==x176);

    if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
    	int8_t x177 = -13;
	static uint64_t x178 = UINT64_MAX;
	int32_t x179 = 6633151;
	static volatile uint8_t x180 = UINT8_MAX;
	volatile int32_t t27 = -1;

    t27 = (((x177*x178)/x179)==x180);

    if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x181 = INT32_MAX;
	uint64_t x182 = UINT64_MAX;
	uint16_t x183 = 6U;
	int32_t t28 = 1029497;

    t28 = (((x181*x182)/x183)==x184);

    if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
    	int16_t x189 = 14534;
	int64_t x190 = -107409164LL;
	uint64_t x191 = UINT64_MAX;
	static volatile int32_t t29 = 134865170;

    t29 = (((x189*x190)/x191)==x192);

    if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
    	volatile int64_t x194 = -255810990486949LL;

    t30 = (((x193*x194)/x195)==x196);

    if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
    	static int16_t x197 = 483;
	volatile uint64_t x198 = UINT64_MAX;
	static int32_t t31 = 997239144;

    t31 = (((x197*x198)/x199)==x200);

    if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
    	int8_t x201 = INT8_MIN;
	uint16_t x202 = UINT16_MAX;
	uint8_t x203 = 18U;
	int32_t x204 = INT32_MIN;
	volatile int32_t t32 = -1;

    t32 = (((x201*x202)/x203)==x204);

    if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
    	uint16_t x205 = 6950U;
	int8_t x206 = INT8_MIN;
	static int16_t x207 = -1;
	volatile int8_t x208 = 3;
	volatile int32_t t33 = 2554;

    t33 = (((x205*x206)/x207)==x208);

    if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
    	uint8_t x213 = 85U;
	int64_t x214 = -1LL;
	uint8_t x216 = 6U;
	int32_t t34 = -2611974;

    t34 = (((x213*x214)/x215)==x216);

    if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
    	static int8_t x217 = INT8_MAX;
	int16_t x218 = INT16_MAX;
	uint16_t x219 = 240U;
	volatile int16_t x220 = -739;
	static int32_t t35 = 82050;

    t35 = (((x217*x218)/x219)==x220);

    if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
    	int16_t x225 = 123;
	int8_t x228 = -1;
	static int32_t t36 = 180;

    t36 = (((x225*x226)/x227)==x228);

    if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile int16_t x229 = INT16_MIN;
	static int64_t x230 = -1LL;
	volatile int64_t x231 = 33752901473847LL;
	uint8_t x232 = UINT8_MAX;
	static volatile int32_t t37 = 1065925492;

    t37 = (((x229*x230)/x231)==x232);

    if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
    	static int16_t x234 = INT16_MAX;
	int8_t x236 = 1;
	int32_t t38 = 7832163;

    t38 = (((x233*x234)/x235)==x236);

    if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x243 = 1;
	volatile uint32_t x244 = 104U;
	int32_t t39 = -27282;

    t39 = (((x241*x242)/x243)==x244);

    if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
    	uint64_t x245 = UINT64_MAX;
	volatile int16_t x246 = INT16_MIN;
	int8_t x247 = INT8_MIN;
	volatile int32_t x248 = 6892394;
	static int32_t t40 = -167;

    t40 = (((x245*x246)/x247)==x248);

    if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x249 = INT32_MIN;
	uint64_t x250 = 22583342727100899LLU;
	int32_t x252 = INT32_MAX;
	static int32_t t41 = -22446;

    t41 = (((x249*x250)/x251)==x252);

    if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
    	int64_t x257 = -1LL;
	volatile int16_t x258 = INT16_MAX;
	int32_t x259 = 104829;
	volatile int16_t x260 = -278;
	int32_t t42 = -4;

    t42 = (((x257*x258)/x259)==x260);

    if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
    	static volatile uint32_t x261 = 0U;
	uint32_t x263 = 1428266U;
	static uint8_t x264 = 0U;
	volatile int32_t t43 = 4;

    t43 = (((x261*x262)/x263)==x264);

    if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
    	static volatile int64_t x265 = 106108454LL;
	int8_t x267 = INT8_MIN;
	int64_t x268 = -2299717667261929LL;
	static volatile int32_t t44 = 429813;

    t44 = (((x265*x266)/x267)==x268);

    if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
    	int8_t x269 = -1;
	uint64_t x270 = UINT64_MAX;
	uint8_t x271 = 112U;
	volatile uint32_t x272 = 22120785U;
	volatile int32_t t45 = 369014;

    t45 = (((x269*x270)/x271)==x272);

    if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
    	volatile uint32_t x273 = UINT32_MAX;
	int32_t x274 = 65985608;
	volatile uint16_t x275 = 1960U;
	int8_t x276 = 0;
	volatile int32_t t46 = 3292486;

    t46 = (((x273*x274)/x275)==x276);

    if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
    	volatile int16_t x278 = 3097;
	int16_t x279 = -1;

    t47 = (((x277*x278)/x279)==x280);

    if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
    	static volatile int64_t x281 = -1LL;
	int16_t x282 = INT16_MAX;
	int32_t x283 = INT32_MIN;
	int64_t x284 = -476991LL;
	int32_t t48 = -449637;

    t48 = (((x281*x282)/x283)==x284);

    if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x285 = -4;
	int32_t x286 = -13867;
	static int16_t x287 = -1;
	volatile uint32_t x288 = 992706U;
	static int32_t t49 = 3;

    t49 = (((x285*x286)/x287)==x288);

    if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
    	volatile int8_t x289 = INT8_MAX;
	uint32_t x290 = 1U;
	int32_t t50 = -124;

    t50 = (((x289*x290)/x291)==x292);

    if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x293 = INT8_MIN;
	static int64_t x295 = INT64_MIN;
	volatile int16_t x296 = INT16_MIN;
	volatile int32_t t51 = 82539592;

    t51 = (((x293*x294)/x295)==x296);

    if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
    	int32_t x297 = INT32_MAX;
	int32_t x300 = -14210;
	static volatile int32_t t52 = -122338;

    t52 = (((x297*x298)/x299)==x300);

    if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
    	uint16_t x301 = 65U;
	volatile uint16_t x302 = 2U;
	volatile int64_t x303 = INT64_MIN;
	volatile int32_t x304 = 4334;
	int32_t t53 = 2;

    t53 = (((x301*x302)/x303)==x304);

    if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
    	int8_t x305 = INT8_MAX;
	static int16_t x306 = INT16_MAX;
	int16_t x307 = 1;
	int32_t t54 = 96347361;

    t54 = (((x305*x306)/x307)==x308);

    if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x310 = UINT8_MAX;
	int16_t x311 = -221;
	int32_t x312 = -953993;
	static int32_t t55 = 51273540;

    t55 = (((x309*x310)/x311)==x312);

    if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
    	uint64_t x313 = 6321870344570LLU;
	static int16_t x314 = INT16_MIN;
	uint32_t x316 = UINT32_MAX;
	int32_t t56 = -9257;

    t56 = (((x313*x314)/x315)==x316);

    if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
    	uint8_t x317 = UINT8_MAX;
	int64_t x319 = -1LL;
	static int32_t t57 = 22;

    t57 = (((x317*x318)/x319)==x320);

    if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
    	int8_t x322 = -6;
	uint64_t x323 = 326LLU;
	static volatile int32_t t58 = 30134;

    t58 = (((x321*x322)/x323)==x324);

    if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
    	int8_t x325 = INT8_MIN;
	uint16_t x326 = 0U;
	static int64_t x327 = -50257LL;
	int16_t x328 = INT16_MIN;
	static int32_t t59 = 0;

    t59 = (((x325*x326)/x327)==x328);

    if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
    	uint32_t x334 = 32292242U;
	int64_t x335 = -3065LL;
	volatile int16_t x336 = INT16_MAX;
	int32_t t60 = 1218231;

    t60 = (((x333*x334)/x335)==x336);

    if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
    	int8_t x341 = -1;
	int32_t x343 = 2;

    t61 = (((x341*x342)/x343)==x344);

    if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
    	static int32_t x345 = -1;
	static uint32_t x346 = UINT32_MAX;
	int64_t x347 = INT64_MIN;
	int64_t x348 = 0LL;

    t62 = (((x345*x346)/x347)==x348);

    if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
    	int32_t x349 = INT32_MAX;
	volatile uint32_t x350 = UINT32_MAX;
	static volatile int32_t x351 = INT32_MIN;
	int8_t x352 = -1;
	int32_t t63 = 71;

    t63 = (((x349*x350)/x351)==x352);

    if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
    	volatile int8_t x357 = INT8_MIN;
	static volatile uint32_t x359 = 16013U;
	uint16_t x360 = UINT16_MAX;
	int32_t t64 = -27449;

    t64 = (((x357*x358)/x359)==x360);

    if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
    	uint8_t x361 = UINT8_MAX;
	uint8_t x362 = UINT8_MAX;
	volatile int16_t x363 = INT16_MAX;
	volatile uint32_t x364 = 5134298U;
	static volatile int32_t t65 = -914;

    t65 = (((x361*x362)/x363)==x364);

    if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
    	volatile int16_t x365 = INT16_MAX;
	static uint8_t x367 = UINT8_MAX;
	int64_t x368 = INT64_MIN;

    t66 = (((x365*x366)/x367)==x368);

    if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x369 = -1LL;
	static int8_t x370 = INT8_MAX;
	uint16_t x371 = 600U;
	int32_t x372 = -105393;
	volatile int32_t t67 = -496;

    t67 = (((x369*x370)/x371)==x372);

    if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
    	volatile int32_t x375 = -1;
	int32_t x376 = INT32_MIN;

    t68 = (((x373*x374)/x375)==x376);

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x377 = INT32_MIN;
	static uint64_t x378 = 1728137847487035LLU;
	int32_t x379 = -55;
	volatile int8_t x380 = -1;
	volatile int32_t t69 = -207;

    t69 = (((x377*x378)/x379)==x380);

    if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
    	int64_t x382 = -1LL;
	int32_t x383 = 10181;
	int32_t t70 = 90563;

    t70 = (((x381*x382)/x383)==x384);

    if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
    	uint8_t x385 = 120U;
	int16_t x386 = -1;
	int64_t x387 = INT64_MIN;
	int16_t x388 = 212;
	static int32_t t71 = 324406;

    t71 = (((x385*x386)/x387)==x388);

    if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
    	int16_t x389 = INT16_MIN;
	uint32_t x390 = 2243U;
	static int16_t x391 = INT16_MIN;
	int32_t x392 = INT32_MIN;
	int32_t t72 = 389213;

    t72 = (((x389*x390)/x391)==x392);

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	volatile uint32_t x393 = 391196U;
	static int64_t x394 = 16318010152LL;
	int64_t x395 = INT64_MAX;
	int32_t t73 = -172592569;

    t73 = (((x393*x394)/x395)==x396);

    if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x421 = 17LLU;
	int64_t x422 = -1LL;
	uint16_t x423 = UINT16_MAX;
	volatile uint32_t x424 = 7U;
	int32_t t74 = -3372190;

    t74 = (((x421*x422)/x423)==x424);

    if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
    	uint32_t x425 = 673708U;
	static uint32_t x427 = 1139143415U;
	static int64_t x428 = 14799541LL;
	volatile int32_t t75 = -59;

    t75 = (((x425*x426)/x427)==x428);

    if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
    	static volatile uint32_t x429 = 51000U;
	int16_t x430 = INT16_MIN;
	uint64_t x431 = 57854302871LLU;
	static uint32_t x432 = 423618584U;
	volatile int32_t t76 = -67522;

    t76 = (((x429*x430)/x431)==x432);

    if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
    	int16_t x438 = -1;
	static uint8_t x439 = UINT8_MAX;
	uint8_t x440 = UINT8_MAX;
	static volatile int32_t t77 = 33076934;

    t77 = (((x437*x438)/x439)==x440);

    if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
    	uint8_t x441 = UINT8_MAX;
	uint32_t x442 = UINT32_MAX;
	static uint64_t x443 = 126LLU;
	int32_t x444 = INT32_MIN;
	int32_t t78 = 1;

    t78 = (((x441*x442)/x443)==x444);

    if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
    	uint8_t x445 = UINT8_MAX;
	int16_t x446 = INT16_MIN;
	int64_t x447 = INT64_MIN;
	uint64_t x448 = 3513536557454641937LLU;

    t79 = (((x445*x446)/x447)==x448);

    if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
    	static uint64_t x449 = 105663033589044LLU;
	volatile uint32_t x450 = 12921235U;
	int8_t x452 = INT8_MIN;

    t80 = (((x449*x450)/x451)==x452);

    if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
    	volatile uint16_t x453 = UINT16_MAX;
	uint8_t x454 = 3U;
	int64_t x455 = INT64_MIN;
	uint8_t x456 = 1U;
	static int32_t t81 = -109;

    t81 = (((x453*x454)/x455)==x456);

    if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
    	int8_t x457 = 22;
	volatile int8_t x458 = INT8_MIN;
	static uint32_t x459 = UINT32_MAX;
	static int32_t t82 = -39186674;

    t82 = (((x457*x458)/x459)==x460);

    if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
    	int64_t x461 = -1LL;
	uint64_t x462 = 63142124826LLU;
	static volatile uint8_t x463 = 1U;
	int64_t x464 = -9641308LL;
	static int32_t t83 = 94441;

    t83 = (((x461*x462)/x463)==x464);

    if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
    	uint8_t x466 = UINT8_MAX;
	int32_t x467 = 17;
	int64_t x468 = INT64_MIN;
	int32_t t84 = 13499417;

    t84 = (((x465*x466)/x467)==x468);

    if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
    	int32_t x469 = INT32_MIN;
	volatile int64_t x470 = -442LL;
	volatile uint64_t x471 = 34348935115004LLU;
	int8_t x472 = -1;
	int32_t t85 = -2006;

    t85 = (((x469*x470)/x471)==x472);

    if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
    	int16_t x473 = INT16_MIN;
	int32_t x474 = 7150;
	volatile int16_t x475 = INT16_MIN;
	uint64_t x476 = 9709025843593LLU;
	volatile int32_t t86 = -1;

    t86 = (((x473*x474)/x475)==x476);

    if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
    	int16_t x481 = 114;
	static volatile int32_t x482 = -119056;
	uint64_t x483 = 1389914927922LLU;
	static int32_t x484 = INT32_MAX;

    t87 = (((x481*x482)/x483)==x484);

    if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x494 = -1;
	int32_t x495 = INT32_MIN;
	int8_t x496 = 1;
	int32_t t88 = 7;

    t88 = (((x493*x494)/x495)==x496);

    if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
    	int32_t x497 = 25;
	int8_t x498 = INT8_MIN;
	volatile uint8_t x499 = 23U;
	uint16_t x500 = UINT16_MAX;
	volatile int32_t t89 = 50396;

    t89 = (((x497*x498)/x499)==x500);

    if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x501 = INT8_MIN;
	volatile int16_t x502 = INT16_MIN;
	volatile int8_t x503 = 7;
	int32_t x504 = -1;
	int32_t t90 = -1;

    t90 = (((x501*x502)/x503)==x504);

    if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x510 = 846926345971LL;
	uint16_t x511 = 3540U;
	static int64_t x512 = INT64_MIN;

    t91 = (((x509*x510)/x511)==x512);

    if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
    	uint16_t x513 = 6U;
	static uint64_t x514 = 2250LLU;
	int32_t x516 = INT32_MIN;
	int32_t t92 = -1;

    t92 = (((x513*x514)/x515)==x516);

    if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
    	static int8_t x518 = 0;
	int32_t x519 = INT32_MIN;
	volatile int32_t t93 = -47;

    t93 = (((x517*x518)/x519)==x520);

    if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x521 = -1;
	uint64_t x523 = 7203980LLU;
	static uint16_t x524 = 308U;
	volatile int32_t t94 = 0;

    t94 = (((x521*x522)/x523)==x524);

    if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
    	int16_t x525 = INT16_MIN;
	int32_t x527 = INT32_MIN;
	int8_t x528 = INT8_MIN;
	volatile int32_t t95 = 62798384;

    t95 = (((x525*x526)/x527)==x528);

    if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x537 = 115608011174340LLU;
	int8_t x538 = -1;
	volatile int32_t x540 = INT32_MAX;
	static volatile int32_t t96 = -217;

    t96 = (((x537*x538)/x539)==x540);

    if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
    	uint16_t x545 = 3265U;
	uint32_t x547 = UINT32_MAX;
	static volatile uint8_t x548 = 20U;
	static int32_t t97 = -7413242;

    t97 = (((x545*x546)/x547)==x548);

    if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
    	int16_t x549 = -3205;
	int16_t x550 = 1;
	int64_t x552 = -1LL;
	int32_t t98 = -175163;

    t98 = (((x549*x550)/x551)==x552);

    if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
    	uint16_t x557 = 1U;
	uint64_t x558 = 54433LLU;
	int16_t x559 = INT16_MIN;
	static int8_t x560 = -12;
	int32_t t99 = -914898;

    t99 = (((x557*x558)/x559)==x560);

    if (t99 != 0) { NG(); } else { ; }
	
}

void f100(void) {
    	static int32_t x561 = -1;
	uint32_t x562 = 1U;
	static uint32_t x563 = 231U;
	volatile int32_t x564 = INT32_MIN;
	volatile int32_t t100 = -7821;

    t100 = (((x561*x562)/x563)==x564);

    if (t100 != 0) { NG(); } else { ; }
	
}

void f101(void) {
    	int16_t x573 = INT16_MIN;
	static int8_t x574 = -1;
	static int8_t x576 = INT8_MIN;
	int32_t t101 = 5;

    t101 = (((x573*x574)/x575)==x576);

    if (t101 != 0) { NG(); } else { ; }
	
}

void f102(void) {
    	int16_t x577 = -1;
	uint32_t x578 = 666U;
	int32_t x579 = -464331;
	int16_t x580 = -1;
	volatile int32_t t102 = 292;

    t102 = (((x577*x578)/x579)==x580);

    if (t102 != 0) { NG(); } else { ; }
	
}

void f103(void) {
    	int64_t x586 = -1LL;
	static int64_t x587 = INT64_MAX;

    t103 = (((x585*x586)/x587)==x588);

    if (t103 != 0) { NG(); } else { ; }
	
}

void f104(void) {
    	uint8_t x593 = UINT8_MAX;
	uint64_t x596 = UINT64_MAX;
	static volatile int32_t t104 = -14240;

    t104 = (((x593*x594)/x595)==x596);

    if (t104 != 0) { NG(); } else { ; }
	
}

void f105(void) {
    	uint8_t x597 = 25U;
	static volatile uint16_t x598 = 70U;
	int64_t x599 = -1LL;
	int64_t x600 = INT64_MAX;
	static int32_t t105 = -226215;

    t105 = (((x597*x598)/x599)==x600);

    if (t105 != 0) { NG(); } else { ; }
	
}

void f106(void) {
    	int32_t x601 = -1;
	uint64_t x602 = 13327333298LLU;
	int16_t x603 = 4716;
	int16_t x604 = INT16_MIN;
	static int32_t t106 = 10;

    t106 = (((x601*x602)/x603)==x604);

    if (t106 != 0) { NG(); } else { ; }
	
}

void f107(void) {
    	int16_t x611 = INT16_MIN;
	volatile uint8_t x612 = UINT8_MAX;

    t107 = (((x609*x610)/x611)==x612);

    if (t107 != 0) { NG(); } else { ; }
	
}

void f108(void) {
    	int64_t x617 = -217565522LL;
	volatile int32_t x618 = -1;
	int32_t x619 = INT32_MIN;
	uint64_t x620 = 273LLU;
	int32_t t108 = -28038208;

    t108 = (((x617*x618)/x619)==x620);

    if (t108 != 0) { NG(); } else { ; }
	
}

void f109(void) {
    	int8_t x634 = 1;
	int16_t x636 = -1;
	volatile int32_t t109 = -1023394;

    t109 = (((x633*x634)/x635)==x636);

    if (t109 != 0) { NG(); } else { ; }
	
}

void f110(void) {
    	volatile int8_t x645 = 0;
	int16_t x646 = INT16_MAX;
	int16_t x647 = -134;
	int8_t x648 = INT8_MIN;

    t110 = (((x645*x646)/x647)==x648);

    if (t110 != 0) { NG(); } else { ; }
	
}

void f111(void) {
    	static volatile int8_t x649 = INT8_MAX;
	int32_t x650 = -1;
	volatile int16_t x651 = INT16_MAX;
	int64_t x652 = INT64_MIN;

    t111 = (((x649*x650)/x651)==x652);

    if (t111 != 0) { NG(); } else { ; }
	
}

void f112(void) {
    	int8_t x653 = 52;
	uint32_t x655 = 18549U;
	int64_t x656 = -1LL;
	volatile int32_t t112 = 77;

    t112 = (((x653*x654)/x655)==x656);

    if (t112 != 0) { NG(); } else { ; }
	
}

void f113(void) {
    	volatile uint64_t x657 = 90LLU;
	int64_t x658 = -71790113662368995LL;
	volatile uint8_t x659 = 5U;
	int8_t x660 = -14;
	volatile int32_t t113 = 3;

    t113 = (((x657*x658)/x659)==x660);

    if (t113 != 0) { NG(); } else { ; }
	
}

void f114(void) {
    	volatile int8_t x661 = INT8_MIN;
	volatile int16_t x662 = -1;
	volatile int16_t x663 = -16;
	int8_t x664 = -12;
	int32_t t114 = -2755302;

    t114 = (((x661*x662)/x663)==x664);

    if (t114 != 0) { NG(); } else { ; }
	
}

void f115(void) {
    	static int64_t x669 = 53787190229711LL;
	static int32_t x671 = INT32_MIN;
	int32_t x672 = 381219;
	volatile int32_t t115 = 137;

    t115 = (((x669*x670)/x671)==x672);

    if (t115 != 0) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x674 = 56U;
	volatile uint64_t x675 = 1693609742919468LLU;

    t116 = (((x673*x674)/x675)==x676);

    if (t116 != 0) { NG(); } else { ; }
	
}

void f117(void) {
    	int8_t x677 = -1;
	int8_t x678 = -38;
	int32_t x679 = INT32_MIN;
	int64_t x680 = -1LL;
	volatile int32_t t117 = -8341261;

    t117 = (((x677*x678)/x679)==x680);

    if (t117 != 0) { NG(); } else { ; }
	
}

void f118(void) {
    	uint32_t x689 = 6U;
	uint16_t x690 = 47U;
	uint8_t x692 = 86U;
	volatile int32_t t118 = 271280025;

    t118 = (((x689*x690)/x691)==x692);

    if (t118 != 0) { NG(); } else { ; }
	
}

void f119(void) {
    	uint16_t x693 = 1552U;
	int32_t t119 = 31599;

    t119 = (((x693*x694)/x695)==x696);

    if (t119 != 0) { NG(); } else { ; }
	
}

void f120(void) {
    	volatile int32_t x706 = -4351799;
	int32_t x707 = INT32_MAX;
	uint16_t x708 = 575U;
	int32_t t120 = 746194318;

    t120 = (((x705*x706)/x707)==x708);

    if (t120 != 0) { NG(); } else { ; }
	
}

void f121(void) {
    	uint32_t x709 = 16341U;
	int64_t x710 = -9762605420159LL;
	int8_t x712 = 3;
	volatile int32_t t121 = 137250;

    t121 = (((x709*x710)/x711)==x712);

    if (t121 != 0) { NG(); } else { ; }
	
}

void f122(void) {
    	uint32_t x714 = 0U;
	static int64_t x715 = INT64_MAX;
	volatile int32_t t122 = 22;

    t122 = (((x713*x714)/x715)==x716);

    if (t122 != 0) { NG(); } else { ; }
	
}

void f123(void) {
    	uint8_t x717 = UINT8_MAX;
	int8_t x718 = INT8_MIN;
	int16_t x719 = 1;
	uint16_t x720 = UINT16_MAX;
	volatile int32_t t123 = -15;

    t123 = (((x717*x718)/x719)==x720);

    if (t123 != 0) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x725 = 104;
	volatile uint32_t x726 = UINT32_MAX;
	int8_t x727 = 2;
	int16_t x728 = -4;

    t124 = (((x725*x726)/x727)==x728);

    if (t124 != 0) { NG(); } else { ; }
	
}

void f125(void) {
    	int32_t x729 = -1;
	volatile int64_t x730 = 199324109LL;
	static int64_t x731 = -7810130LL;
	static volatile int32_t x732 = INT32_MAX;

    t125 = (((x729*x730)/x731)==x732);

    if (t125 != 0) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x733 = -1;
	int32_t x734 = -123;
	volatile int8_t x735 = 28;
	volatile int16_t x736 = -1;
	static int32_t t126 = -11117710;

    t126 = (((x733*x734)/x735)==x736);

    if (t126 != 0) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile int8_t x741 = -8;
	int8_t x743 = -1;
	uint16_t x744 = 0U;
	int32_t t127 = 34;

    t127 = (((x741*x742)/x743)==x744);

    if (t127 != 0) { NG(); } else { ; }
	
}

void f128(void) {
    	uint8_t x749 = 1U;
	static int16_t x750 = INT16_MIN;
	uint64_t x751 = UINT64_MAX;
	uint16_t x752 = UINT16_MAX;
	int32_t t128 = -1;

    t128 = (((x749*x750)/x751)==x752);

    if (t128 != 0) { NG(); } else { ; }
	
}

void f129(void) {
    	static uint16_t x754 = UINT16_MAX;
	int16_t x755 = INT16_MIN;
	int32_t t129 = -15507;

    t129 = (((x753*x754)/x755)==x756);

    if (t129 != 0) { NG(); } else { ; }
	
}

void f130(void) {
    	int32_t x757 = -1;
	uint64_t x758 = 39145295804LLU;
	int16_t x759 = 7094;

    t130 = (((x757*x758)/x759)==x760);

    if (t130 != 0) { NG(); } else { ; }
	
}

void f131(void) {
    	int16_t x765 = -1;
	uint16_t x766 = UINT16_MAX;
	int8_t x767 = -1;
	static int64_t x768 = 0LL;

    t131 = (((x765*x766)/x767)==x768);

    if (t131 != 0) { NG(); } else { ; }
	
}

void f132(void) {
    	uint16_t x769 = 548U;
	uint16_t x770 = 1894U;
	int8_t x771 = -57;
	uint16_t x772 = 13338U;
	static volatile int32_t t132 = 1440;

    t132 = (((x769*x770)/x771)==x772);

    if (t132 != 0) { NG(); } else { ; }
	
}

void f133(void) {
    	int32_t x773 = INT32_MIN;
	volatile uint16_t x774 = 1U;
	int64_t x775 = INT64_MIN;
	volatile uint8_t x776 = 61U;
	volatile int32_t t133 = 251659655;

    t133 = (((x773*x774)/x775)==x776);

    if (t133 != 0) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int8_t x777 = INT8_MIN;
	volatile int16_t x778 = -1;
	int32_t x779 = INT32_MAX;
	uint16_t x780 = 1U;
	int32_t t134 = 209606242;

    t134 = (((x777*x778)/x779)==x780);

    if (t134 != 0) { NG(); } else { ; }
	
}

void f135(void) {
    	static uint32_t x781 = 2678U;
	uint32_t x782 = 1318U;
	static uint32_t x783 = UINT32_MAX;
	volatile int32_t t135 = -58038590;

    t135 = (((x781*x782)/x783)==x784);

    if (t135 != 0) { NG(); } else { ; }
	
}

void f136(void) {
    	int16_t x785 = -1;
	static int64_t x786 = -1LL;
	volatile int32_t x787 = -7;
	int32_t x788 = -42;
	int32_t t136 = 1;

    t136 = (((x785*x786)/x787)==x788);

    if (t136 != 0) { NG(); } else { ; }
	
}

void f137(void) {
    	int32_t x790 = INT32_MAX;
	int32_t t137 = 130842;

    t137 = (((x789*x790)/x791)==x792);

    if (t137 != 0) { NG(); } else { ; }
	
}

void f138(void) {
    	int32_t x794 = -285;
	int64_t x795 = -1LL;
	static volatile int64_t x796 = INT64_MIN;
	volatile int32_t t138 = 30;

    t138 = (((x793*x794)/x795)==x796);

    if (t138 != 0) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x798 = -339045;
	int64_t x800 = -1LL;
	volatile int32_t t139 = 30242;

    t139 = (((x797*x798)/x799)==x800);

    if (t139 != 0) { NG(); } else { ; }
	
}

void f140(void) {
    	static volatile int64_t x801 = INT64_MIN;
	int32_t x803 = -9;
	int16_t x804 = 0;

    t140 = (((x801*x802)/x803)==x804);

    if (t140 != 1) { NG(); } else { ; }
	
}

void f141(void) {
    	int8_t x805 = INT8_MIN;
	uint16_t x806 = 20U;
	volatile int16_t x807 = INT16_MIN;
	int16_t x808 = -56;
	static int32_t t141 = 11666608;

    t141 = (((x805*x806)/x807)==x808);

    if (t141 != 0) { NG(); } else { ; }
	
}

void f142(void) {
    	int16_t x809 = INT16_MIN;
	int32_t x810 = -52;
	int64_t x812 = INT64_MIN;
	static int32_t t142 = 223;

    t142 = (((x809*x810)/x811)==x812);

    if (t142 != 0) { NG(); } else { ; }
	
}

void f143(void) {
    	int16_t x813 = INT16_MAX;
	volatile uint8_t x814 = UINT8_MAX;
	int64_t x815 = -101219034031352570LL;
	uint32_t x816 = UINT32_MAX;
	int32_t t143 = 93;

    t143 = (((x813*x814)/x815)==x816);

    if (t143 != 0) { NG(); } else { ; }
	
}

void f144(void) {
    	static int64_t x817 = INT64_MIN;
	static volatile int16_t x818 = 0;
	int8_t x819 = -1;
	volatile int8_t x820 = 32;

    t144 = (((x817*x818)/x819)==x820);

    if (t144 != 0) { NG(); } else { ; }
	
}

void f145(void) {
    	uint16_t x829 = 125U;
	uint64_t x830 = UINT64_MAX;
	static volatile int16_t x832 = -1;
	int32_t t145 = 2295652;

    t145 = (((x829*x830)/x831)==x832);

    if (t145 != 0) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int16_t x833 = -1;
	int32_t x835 = INT32_MIN;
	uint32_t x836 = UINT32_MAX;
	int32_t t146 = 514116873;

    t146 = (((x833*x834)/x835)==x836);

    if (t146 != 0) { NG(); } else { ; }
	
}

void f147(void) {
    	int16_t x837 = INT16_MAX;
	uint8_t x838 = 0U;
	int32_t t147 = 1047241805;

    t147 = (((x837*x838)/x839)==x840);

    if (t147 != 0) { NG(); } else { ; }
	
}

void f148(void) {
    	int64_t x853 = -1LL;
	uint16_t x854 = 14434U;
	int32_t x856 = -27;
	static int32_t t148 = 3310;

    t148 = (((x853*x854)/x855)==x856);

    if (t148 != 0) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint32_t x862 = 4815U;
	int32_t x863 = -1;
	int8_t x864 = INT8_MIN;
	static int32_t t149 = -119;

    t149 = (((x861*x862)/x863)==x864);

    if (t149 != 0) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x866 = UINT32_MAX;
	uint16_t x867 = UINT16_MAX;
	uint32_t x868 = 352539U;
	volatile int32_t t150 = -5;

    t150 = (((x865*x866)/x867)==x868);

    if (t150 != 0) { NG(); } else { ; }
	
}

void f151(void) {
    	uint16_t x870 = 5108U;
	static int16_t x871 = INT16_MIN;
	int64_t x872 = 5LL;
	int32_t t151 = 3306;

    t151 = (((x869*x870)/x871)==x872);

    if (t151 != 0) { NG(); } else { ; }
	
}

void f152(void) {
    	uint16_t x877 = 0U;
	int8_t x879 = 46;
	uint64_t x880 = 313LLU;
	int32_t t152 = 312811681;

    t152 = (((x877*x878)/x879)==x880);

    if (t152 != 0) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile uint64_t x882 = 6800534919151498LLU;
	int8_t x883 = INT8_MIN;
	int16_t x884 = -9;
	volatile int32_t t153 = 10625;

    t153 = (((x881*x882)/x883)==x884);

    if (t153 != 0) { NG(); } else { ; }
	
}

void f154(void) {
    	uint8_t x889 = 9U;
	uint8_t x890 = 0U;
	uint8_t x892 = UINT8_MAX;
	static volatile int32_t t154 = 12126;

    t154 = (((x889*x890)/x891)==x892);

    if (t154 != 0) { NG(); } else { ; }
	
}

void f155(void) {
    	int8_t x893 = 1;
	uint8_t x895 = 13U;
	volatile int32_t x896 = INT32_MAX;
	int32_t t155 = 125519107;

    t155 = (((x893*x894)/x895)==x896);

    if (t155 != 0) { NG(); } else { ; }
	
}

void f156(void) {
    	int64_t x897 = -17903700604320590LL;
	int8_t x899 = INT8_MAX;
	static int32_t t156 = -59522;

    t156 = (((x897*x898)/x899)==x900);

    if (t156 != 0) { NG(); } else { ; }
	
}

void f157(void) {
    	int64_t x901 = -48LL;
	int8_t x902 = INT8_MIN;
	uint8_t x904 = UINT8_MAX;

    t157 = (((x901*x902)/x903)==x904);

    if (t157 != 0) { NG(); } else { ; }
	
}

void f158(void) {
    	volatile int64_t x905 = -1LL;
	uint64_t x906 = 0LLU;
	volatile int32_t x907 = -1644;
	int64_t x908 = INT64_MAX;

    t158 = (((x905*x906)/x907)==x908);

    if (t158 != 0) { NG(); } else { ; }
	
}

void f159(void) {
    	volatile int64_t x914 = INT64_MIN;
	static int8_t x916 = INT8_MIN;

    t159 = (((x913*x914)/x915)==x916);

    if (t159 != 0) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x917 = 12527626U;
	uint32_t x918 = 2718U;
	volatile int32_t t160 = 995609;

    t160 = (((x917*x918)/x919)==x920);

    if (t160 != 0) { NG(); } else { ; }
	
}

void f161(void) {
    	static int8_t x921 = -1;
	uint8_t x922 = 3U;
	int64_t x924 = INT64_MIN;

    t161 = (((x921*x922)/x923)==x924);

    if (t161 != 0) { NG(); } else { ; }
	
}

void f162(void) {
    	volatile uint64_t x929 = 8579890268600204507LLU;
	uint8_t x931 = 5U;
	static uint16_t x932 = 18719U;

    t162 = (((x929*x930)/x931)==x932);

    if (t162 != 0) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x933 = INT16_MAX;
	uint64_t x935 = 507LLU;
	volatile int32_t t163 = 748819732;

    t163 = (((x933*x934)/x935)==x936);

    if (t163 != 0) { NG(); } else { ; }
	
}

void f164(void) {
    	int16_t x938 = INT16_MIN;
	int32_t x939 = INT32_MIN;
	volatile int32_t t164 = 10627;

    t164 = (((x937*x938)/x939)==x940);

    if (t164 != 0) { NG(); } else { ; }
	
}

void f165(void) {
    	int8_t x945 = 1;
	int64_t x946 = INT64_MIN;
	static uint32_t x947 = UINT32_MAX;
	int64_t x948 = 1227LL;
	volatile int32_t t165 = -13;

    t165 = (((x945*x946)/x947)==x948);

    if (t165 != 0) { NG(); } else { ; }
	
}

void f166(void) {
    	int32_t x949 = INT32_MIN;
	uint32_t x950 = 13818713U;
	int8_t x951 = -1;
	static int32_t x952 = INT32_MAX;
	volatile int32_t t166 = 518;

    t166 = (((x949*x950)/x951)==x952);

    if (t166 != 0) { NG(); } else { ; }
	
}

void f167(void) {
    	static volatile int8_t x953 = 0;
	uint64_t x955 = 23LLU;
	static int32_t x956 = INT32_MAX;

    t167 = (((x953*x954)/x955)==x956);

    if (t167 != 0) { NG(); } else { ; }
	
}

void f168(void) {
    	static int32_t x957 = -37;
	uint64_t x958 = 103275097751LLU;
	volatile int32_t x959 = INT32_MIN;
	volatile uint64_t x960 = UINT64_MAX;
	int32_t t168 = -2333896;

    t168 = (((x957*x958)/x959)==x960);

    if (t168 != 0) { NG(); } else { ; }
	
}

void f169(void) {
    	uint8_t x969 = UINT8_MAX;
	int8_t x970 = INT8_MIN;
	int16_t x972 = INT16_MIN;
	int32_t t169 = 64399310;

    t169 = (((x969*x970)/x971)==x972);

    if (t169 != 0) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile int64_t x978 = INT64_MIN;
	int16_t x979 = INT16_MIN;
	volatile int32_t x980 = INT32_MIN;
	int32_t t170 = 103481101;

    t170 = (((x977*x978)/x979)==x980);

    if (t170 != 0) { NG(); } else { ; }
	
}

void f171(void) {
    	uint32_t x981 = UINT32_MAX;
	int16_t x982 = -1;
	static int64_t x983 = INT64_MIN;
	int8_t x984 = INT8_MIN;
	volatile int32_t t171 = 1;

    t171 = (((x981*x982)/x983)==x984);

    if (t171 != 0) { NG(); } else { ; }
	
}

void f172(void) {
    	int64_t x985 = -95LL;
	volatile uint32_t x988 = 65U;
	int32_t t172 = 478477;

    t172 = (((x985*x986)/x987)==x988);

    if (t172 != 0) { NG(); } else { ; }
	
}

void f173(void) {
    	int64_t x989 = -1LL;
	uint16_t x990 = 6U;
	volatile int32_t t173 = -127087;

    t173 = (((x989*x990)/x991)==x992);

    if (t173 != 0) { NG(); } else { ; }
	
}

void f174(void) {
    	int16_t x993 = -1;
	int16_t x995 = INT16_MIN;
	uint32_t x996 = 12U;
	int32_t t174 = -12080678;

    t174 = (((x993*x994)/x995)==x996);

    if (t174 != 0) { NG(); } else { ; }
	
}

void f175(void) {
    	static int8_t x1001 = -1;
	uint64_t x1002 = UINT64_MAX;
	static uint8_t x1003 = 87U;
	volatile int64_t x1004 = 28638LL;
	int32_t t175 = -1;

    t175 = (((x1001*x1002)/x1003)==x1004);

    if (t175 != 0) { NG(); } else { ; }
	
}

void f176(void) {
    	int8_t x1005 = INT8_MIN;
	static uint16_t x1006 = UINT16_MAX;
	static int64_t x1007 = INT64_MIN;
	uint8_t x1008 = 1U;
	volatile int32_t t176 = -986;

    t176 = (((x1005*x1006)/x1007)==x1008);

    if (t176 != 0) { NG(); } else { ; }
	
}

void f177(void) {
    	static int64_t x1009 = INT64_MAX;
	uint32_t x1011 = 1U;
	uint16_t x1012 = UINT16_MAX;
	static int32_t t177 = 1;

    t177 = (((x1009*x1010)/x1011)==x1012);

    if (t177 != 0) { NG(); } else { ; }
	
}

void f178(void) {
    	int16_t x1013 = INT16_MAX;
	uint64_t x1014 = 1287456699667LLU;
	uint32_t x1016 = UINT32_MAX;

    t178 = (((x1013*x1014)/x1015)==x1016);

    if (t178 != 0) { NG(); } else { ; }
	
}

void f179(void) {
    	static uint16_t x1017 = UINT16_MAX;
	uint32_t x1018 = 28U;
	static int8_t x1019 = INT8_MIN;
	uint16_t x1020 = 0U;
	volatile int32_t t179 = 3323;

    t179 = (((x1017*x1018)/x1019)==x1020);

    if (t179 != 1) { NG(); } else { ; }
	
}

void f180(void) {
    	uint32_t x1022 = 792U;
	int16_t x1023 = -1;
	int32_t x1024 = -1;
	volatile int32_t t180 = -731;

    t180 = (((x1021*x1022)/x1023)==x1024);

    if (t180 != 0) { NG(); } else { ; }
	
}

void f181(void) {
    	int64_t x1025 = 32662148758803886LL;
	volatile uint16_t x1026 = 11U;
	static volatile int16_t x1028 = INT16_MIN;
	volatile int32_t t181 = 646869;

    t181 = (((x1025*x1026)/x1027)==x1028);

    if (t181 != 0) { NG(); } else { ; }
	
}

void f182(void) {
    	int32_t x1029 = INT32_MAX;
	uint64_t x1030 = 650832839298194068LLU;
	int8_t x1031 = -1;
	uint16_t x1032 = UINT16_MAX;
	static volatile int32_t t182 = -1322;

    t182 = (((x1029*x1030)/x1031)==x1032);

    if (t182 != 0) { NG(); } else { ; }
	
}

void f183(void) {
    	int64_t x1033 = -1LL;
	static uint8_t x1034 = 121U;
	static uint16_t x1035 = 328U;

    t183 = (((x1033*x1034)/x1035)==x1036);

    if (t183 != 0) { NG(); } else { ; }
	
}

void f184(void) {
    	static uint16_t x1037 = 303U;
	int8_t x1038 = 40;
	int8_t x1039 = INT8_MAX;
	uint64_t x1040 = UINT64_MAX;
	volatile int32_t t184 = -59;

    t184 = (((x1037*x1038)/x1039)==x1040);

    if (t184 != 0) { NG(); } else { ; }
	
}

void f185(void) {
    	uint16_t x1057 = 16U;
	int64_t x1060 = INT64_MIN;
	volatile int32_t t185 = 0;

    t185 = (((x1057*x1058)/x1059)==x1060);

    if (t185 != 0) { NG(); } else { ; }
	
}

void f186(void) {
    	uint16_t x1061 = UINT16_MAX;
	int64_t x1062 = -442396LL;
	int32_t x1064 = -86;
	volatile int32_t t186 = 897511507;

    t186 = (((x1061*x1062)/x1063)==x1064);

    if (t186 != 0) { NG(); } else { ; }
	
}

void f187(void) {
    	int16_t x1065 = -1;
	static uint64_t x1066 = 60309610LLU;
	int16_t x1067 = -57;
	uint32_t x1068 = 2U;
	int32_t t187 = 44672;

    t187 = (((x1065*x1066)/x1067)==x1068);

    if (t187 != 0) { NG(); } else { ; }
	
}

void f188(void) {
    	uint64_t x1069 = 3234660642LLU;
	static uint32_t x1070 = 136199301U;
	int8_t x1071 = INT8_MIN;
	static int32_t t188 = 5072;

    t188 = (((x1069*x1070)/x1071)==x1072);

    if (t188 != 0) { NG(); } else { ; }
	
}

void f189(void) {
    	static int16_t x1077 = -6084;
	volatile uint16_t x1078 = 3U;
	int64_t x1079 = -900574668258LL;
	uint64_t x1080 = UINT64_MAX;
	volatile int32_t t189 = 24;

    t189 = (((x1077*x1078)/x1079)==x1080);

    if (t189 != 0) { NG(); } else { ; }
	
}

void f190(void) {
    	int64_t x1081 = -6365884LL;
	static int32_t x1082 = INT32_MAX;
	int32_t x1083 = INT32_MAX;
	static int32_t t190 = -32;

    t190 = (((x1081*x1082)/x1083)==x1084);

    if (t190 != 0) { NG(); } else { ; }
	
}

void f191(void) {
    	int64_t x1086 = -29478128LL;
	int64_t x1087 = INT64_MAX;
	int16_t x1088 = -153;
	volatile int32_t t191 = 142;

    t191 = (((x1085*x1086)/x1087)==x1088);

    if (t191 != 0) { NG(); } else { ; }
	
}

void f192(void) {
    	int16_t x1089 = INT16_MIN;
	int32_t x1091 = INT32_MIN;
	uint8_t x1092 = 1U;

    t192 = (((x1089*x1090)/x1091)==x1092);

    if (t192 != 0) { NG(); } else { ; }
	
}

void f193(void) {
    	static uint8_t x1093 = UINT8_MAX;
	volatile uint8_t x1094 = 1U;
	int8_t x1095 = INT8_MIN;
	int32_t t193 = 108957;

    t193 = (((x1093*x1094)/x1095)==x1096);

    if (t193 != 0) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1097 = -1;
	int8_t x1098 = -1;
	int64_t x1099 = -3LL;
	volatile int32_t t194 = 2;

    t194 = (((x1097*x1098)/x1099)==x1100);

    if (t194 != 0) { NG(); } else { ; }
	
}

void f195(void) {
    	int16_t x1101 = INT16_MAX;
	static volatile int16_t x1102 = INT16_MIN;
	volatile int8_t x1103 = INT8_MAX;
	static int8_t x1104 = INT8_MIN;
	volatile int32_t t195 = -1;

    t195 = (((x1101*x1102)/x1103)==x1104);

    if (t195 != 0) { NG(); } else { ; }
	
}

void f196(void) {
    	int16_t x1105 = -1;
	static volatile uint8_t x1106 = UINT8_MAX;
	int16_t x1107 = 285;
	int16_t x1108 = INT16_MIN;
	volatile int32_t t196 = 21;

    t196 = (((x1105*x1106)/x1107)==x1108);

    if (t196 != 0) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1110 = 1;
	int8_t x1111 = INT8_MIN;
	int64_t x1112 = INT64_MIN;

    t197 = (((x1109*x1110)/x1111)==x1112);

    if (t197 != 0) { NG(); } else { ; }
	
}

void f198(void) {
    	volatile int8_t x1114 = INT8_MIN;
	uint8_t x1115 = 4U;
	volatile int16_t x1116 = -1;
	volatile int32_t t198 = -348;

    t198 = (((x1113*x1114)/x1115)==x1116);

    if (t198 != 0) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1121 = INT16_MIN;
	static int16_t x1123 = INT16_MIN;
	int64_t x1124 = -4023529LL;

    t199 = (((x1121*x1122)/x1123)==x1124);

    if (t199 != 0) { NG(); } else { ; }
	
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

