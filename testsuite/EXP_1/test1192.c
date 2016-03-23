
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

static int64_t x5 = 2385509782294508LL;
int64_t x9 = -1LL;
uint32_t x12 = UINT32_MAX;
static uint16_t x19 = 191U;
uint64_t x25 = 242168834LLU;
static uint16_t x39 = UINT16_MAX;
static volatile uint16_t x40 = 756U;
int32_t t6 = 109304;
uint8_t x44 = 21U;
uint64_t x47 = 48103LLU;
uint32_t x51 = 0U;
uint32_t x60 = UINT32_MAX;
int8_t x68 = -45;
uint32_t x84 = 666U;
volatile int64_t t15 = 0LL;
int64_t x90 = -2457352483LL;
uint8_t x106 = 21U;
uint8_t x107 = 1U;
uint32_t x108 = 474247U;
static int32_t t22 = -151112723;
uint32_t x118 = 916831724U;
int8_t x121 = 0;
volatile int32_t x162 = -1;
int16_t x165 = INT16_MIN;
int16_t x169 = 10532;
uint32_t x170 = 174188U;
int8_t x176 = INT8_MIN;
static volatile int8_t x179 = -1;
int32_t t33 = -28226;
int64_t x201 = -1LL;
int16_t x209 = INT16_MIN;
static int8_t x219 = INT8_MIN;
int32_t t39 = 0;
int16_t x221 = INT16_MIN;
uint16_t x223 = 534U;
int32_t x237 = -1;
int8_t x240 = INT8_MIN;
static int8_t x244 = 21;
volatile uint8_t x249 = 78U;
static uint64_t t47 = 13506414509LLU;
int64_t x263 = -1LL;
static int64_t t49 = 109LL;
static int16_t x270 = INT16_MIN;
int64_t x279 = -1LL;
int8_t x289 = 7;
volatile uint64_t x291 = UINT64_MAX;
int8_t x292 = -1;
uint64_t t53 = 5747LLU;
uint8_t x300 = UINT8_MAX;
volatile int64_t x320 = -1LL;
int64_t t57 = -752515401769LL;
volatile int32_t x326 = INT32_MAX;
volatile uint64_t x327 = 32447LLU;
static uint64_t t59 = 231799379831509057LLU;
uint8_t x329 = UINT8_MAX;
int64_t t61 = 1617326800929504LL;
static int16_t x339 = INT16_MAX;
uint64_t t63 = 290825414LLU;
int32_t x347 = -3598893;
volatile int32_t x352 = -6707;
static volatile uint64_t t66 = 116LLU;
volatile uint64_t x361 = UINT64_MAX;
uint8_t x362 = 2U;
int32_t t68 = -13897921;
volatile int32_t x382 = -1;
uint16_t x392 = 406U;
volatile uint64_t t72 = 36807525954854900LLU;
volatile int64_t t73 = -743766016LL;
uint16_t x402 = 1666U;
static uint32_t x406 = 1466307U;
int16_t x407 = INT16_MAX;
volatile uint16_t x410 = 7U;
int16_t x412 = INT16_MAX;
volatile int32_t t77 = 7187752;
int32_t x413 = INT32_MIN;
volatile int64_t x429 = 41387673803144LL;
volatile uint64_t t81 = 706184787789325LLU;
int64_t x438 = -1LL;
volatile int32_t t83 = INT32_MIN;
static volatile int32_t t84 = 3814;
uint32_t x451 = 9U;
uint8_t x452 = 126U;
static uint32_t t85 = 4840281U;
static int8_t x455 = INT8_MIN;
volatile int32_t t86 = -14133;
int16_t x459 = INT16_MIN;
volatile int8_t x460 = -1;
volatile int32_t t87 = 447782544;
static int32_t x462 = 26727790;
uint32_t t88 = 242704193U;
int8_t x466 = -1;
int32_t x469 = INT32_MAX;
volatile uint16_t x470 = 1U;
volatile int32_t t90 = 2210;
static uint64_t x481 = UINT64_MAX;
volatile int64_t x482 = INT64_MIN;
volatile int32_t t94 = -704;
static int32_t x513 = INT32_MIN;
int8_t x543 = -1;
int32_t t102 = 16;
static int16_t x548 = -5;
volatile int32_t x564 = -1;
uint32_t t105 = 302907U;
int8_t x578 = -1;
int64_t x582 = INT64_MIN;
int8_t x586 = INT8_MIN;
int16_t x605 = INT16_MIN;
uint8_t x609 = 0U;
volatile uint16_t x611 = UINT16_MAX;
int32_t t113 = 78704321;
int16_t x621 = 1;
static volatile int8_t x638 = INT8_MIN;
uint64_t t117 = 23983139697722754LLU;
int32_t x645 = INT32_MIN;
uint64_t x655 = UINT64_MAX;
volatile uint16_t x664 = UINT16_MAX;
uint8_t x669 = UINT8_MAX;
volatile uint32_t x670 = 1071783229U;
volatile int64_t x685 = INT64_MIN;
int32_t x687 = 1365438;
int8_t x688 = -8;
volatile uint32_t x694 = UINT32_MAX;
int8_t x697 = 28;
uint64_t x699 = UINT64_MAX;
int8_t x711 = INT8_MIN;
int16_t x719 = INT16_MIN;
int32_t t138 = 197;
volatile int32_t t139 = -1;
volatile uint64_t x743 = 107513792582697LLU;
int64_t x745 = INT64_MAX;
int32_t x748 = INT32_MIN;
static volatile int64_t t142 = 2LL;
int64_t t143 = 4LL;
int32_t x762 = 574331925;
volatile int16_t x763 = INT16_MAX;
volatile int32_t x771 = -17334;
static int32_t x775 = INT32_MAX;
static int64_t t147 = 0LL;
int64_t x792 = INT64_MAX;
volatile uint64_t t149 = 57547LLU;
int64_t x800 = 326054969212LL;
int64_t x805 = INT64_MIN;
uint32_t t152 = 338U;
uint64_t x815 = 22310094467LLU;
static uint16_t x820 = UINT16_MAX;
volatile int32_t t155 = 86403;
int16_t x826 = -1556;
int16_t x828 = -1;
static volatile int32_t t156 = 114;
volatile int16_t x831 = INT16_MAX;
volatile int32_t t158 = -106;
int64_t x838 = INT64_MIN;
uint8_t x845 = 31U;
int32_t t160 = -497706310;
int8_t x849 = INT8_MAX;
int32_t x850 = -1;
int64_t x854 = -1LL;
volatile int64_t t162 = -199LL;
uint64_t t164 = 1928355296121595LLU;
volatile int8_t x879 = -1;
volatile int64_t t166 = 27LL;
uint64_t x888 = 18515LLU;
static int16_t x893 = -1;
volatile int64_t x894 = INT64_MIN;
volatile int16_t x897 = -1;
static int64_t x900 = INT64_MIN;
static int64_t t169 = -97LL;
int64_t x910 = 32LL;
volatile int32_t x922 = -1;
static uint64_t x923 = UINT64_MAX;
int8_t x931 = -1;
static int64_t x942 = INT64_MAX;
volatile int16_t x946 = -3886;
int64_t x948 = INT64_MIN;
uint8_t x949 = UINT8_MAX;
static uint8_t x958 = UINT8_MAX;
static volatile uint32_t x960 = 24026095U;
int8_t x961 = 3;
static uint8_t x964 = UINT8_MAX;
int64_t x969 = 1036569691504994LL;
int64_t x975 = 142573LL;
int32_t x978 = INT32_MAX;
static int8_t x983 = INT8_MAX;
volatile int32_t t187 = -49;
volatile int32_t t188 = -135076883;
int16_t x999 = INT16_MIN;
volatile int16_t x1005 = INT16_MIN;
int64_t t191 = 430123976092947357LL;
static int8_t x1015 = INT8_MIN;
uint32_t x1016 = 1261532U;
uint64_t x1025 = 185145636083426LLU;
static int16_t x1027 = INT16_MAX;
int8_t x1028 = INT8_MAX;
volatile int32_t t196 = 7820886;
static int8_t x1037 = INT8_MIN;
volatile int32_t t197 = -2792;
volatile int32_t x1045 = INT32_MIN;
uint32_t x1048 = UINT32_MAX;


void f0(void) {
    	uint32_t x6 = 2097884968U;
	uint8_t x7 = 11U;
	int64_t x8 = 35905203LL;
	int64_t t0 = 1329424971328LL;

    t0 = (((x5!=x6)-x7)-x8);

    if (t0 != -35905213LL) { NG(); } else { ; }
	
}

void f1(void) {
    	static int64_t x10 = 8155036144205LL;
	int16_t x11 = INT16_MIN;
	uint32_t t1 = 14U;

    t1 = (((x9!=x10)-x11)-x12);

    if (t1 != 32770U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x17 = INT32_MAX;
	uint32_t x18 = 117572105U;
	int8_t x20 = 0;
	int32_t t2 = -852972376;

    t2 = (((x17!=x18)-x19)-x20);

    if (t2 != -190) { NG(); } else { ; }
	
}

void f3(void) {
    	uint32_t x21 = UINT32_MAX;
	static uint32_t x22 = 22U;
	int8_t x23 = 0;
	static int8_t x24 = INT8_MAX;
	volatile int32_t t3 = 2978;

    t3 = (((x21!=x22)-x23)-x24);

    if (t3 != -126) { NG(); } else { ; }
	
}

void f4(void) {
    	int64_t x26 = INT64_MIN;
	int16_t x27 = INT16_MAX;
	int16_t x28 = -1;
	int32_t t4 = -7;

    t4 = (((x25!=x26)-x27)-x28);

    if (t4 != -32765) { NG(); } else { ; }
	
}

void f5(void) {
    	int8_t x33 = -1;
	volatile uint16_t x34 = 2U;
	uint32_t x35 = 457305035U;
	uint16_t x36 = 7032U;
	volatile uint32_t t5 = 916U;

    t5 = (((x33!=x34)-x35)-x36);

    if (t5 != 3837655230U) { NG(); } else { ; }
	
}

void f6(void) {
    	uint32_t x37 = 117500U;
	int16_t x38 = INT16_MIN;

    t6 = (((x37!=x38)-x39)-x40);

    if (t6 != -66290) { NG(); } else { ; }
	
}

void f7(void) {
    	int16_t x41 = INT16_MAX;
	volatile int64_t x42 = INT64_MIN;
	int8_t x43 = 4;
	static int32_t t7 = 119875;

    t7 = (((x41!=x42)-x43)-x44);

    if (t7 != -24) { NG(); } else { ; }
	
}

void f8(void) {
    	int64_t x45 = INT64_MAX;
	uint32_t x46 = 45879995U;
	static volatile uint8_t x48 = 2U;
	volatile uint64_t t8 = 7221847133458LLU;

    t8 = (((x45!=x46)-x47)-x48);

    if (t8 != 18446744073709503512LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	static volatile int8_t x49 = INT8_MIN;
	static int16_t x50 = INT16_MAX;
	int8_t x52 = -1;
	volatile uint32_t t9 = 69188992U;

    t9 = (((x49!=x50)-x51)-x52);

    if (t9 != 2U) { NG(); } else { ; }
	
}

void f10(void) {
    	static volatile int32_t x53 = INT32_MIN;
	int8_t x54 = INT8_MIN;
	volatile uint64_t x55 = 194277091949005LLU;
	int32_t x56 = INT32_MIN;
	uint64_t t10 = 6631027LLU;

    t10 = (((x53!=x54)-x55)-x56);

    if (t10 != 18446549798765086260LLU) { NG(); } else { ; }
	
}

void f11(void) {
    	static int16_t x57 = INT16_MAX;
	int16_t x58 = INT16_MAX;
	uint8_t x59 = UINT8_MAX;
	static volatile uint32_t t11 = 11939397U;

    t11 = (((x57!=x58)-x59)-x60);

    if (t11 != 4294967042U) { NG(); } else { ; }
	
}

void f12(void) {
    	int32_t x65 = INT32_MIN;
	int32_t x66 = -1;
	uint64_t x67 = 12376205LLU;
	uint64_t t12 = 1236927394995292461LLU;

    t12 = (((x65!=x66)-x67)-x68);

    if (t12 != 18446744073697175457LLU) { NG(); } else { ; }
	
}

void f13(void) {
    	int8_t x73 = INT8_MIN;
	volatile int16_t x74 = INT16_MIN;
	uint8_t x75 = UINT8_MAX;
	static int8_t x76 = INT8_MIN;
	volatile int32_t t13 = -72;

    t13 = (((x73!=x74)-x75)-x76);

    if (t13 != -126) { NG(); } else { ; }
	
}

void f14(void) {
    	uint8_t x81 = 10U;
	int32_t x82 = 812203;
	uint64_t x83 = 0LLU;
	volatile uint64_t t14 = 7805498323775918LLU;

    t14 = (((x81!=x82)-x83)-x84);

    if (t14 != 18446744073709550951LLU) { NG(); } else { ; }
	
}

void f15(void) {
    	volatile int32_t x85 = INT32_MAX;
	volatile uint64_t x86 = 58868192LLU;
	int64_t x87 = -330649LL;
	uint32_t x88 = UINT32_MAX;

    t15 = (((x85!=x86)-x87)-x88);

    if (t15 != -4294636645LL) { NG(); } else { ; }
	
}

void f16(void) {
    	static volatile int16_t x89 = INT16_MIN;
	int8_t x91 = INT8_MAX;
	static uint16_t x92 = 1U;
	static volatile int32_t t16 = -31;

    t16 = (((x89!=x90)-x91)-x92);

    if (t16 != -127) { NG(); } else { ; }
	
}

void f17(void) {
    	volatile uint8_t x93 = UINT8_MAX;
	volatile int16_t x94 = INT16_MAX;
	static int32_t x95 = -1;
	int32_t x96 = 11227;
	int32_t t17 = -659656;

    t17 = (((x93!=x94)-x95)-x96);

    if (t17 != -11225) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile int32_t x97 = 440689;
	int64_t x98 = -1LL;
	int16_t x99 = 102;
	int32_t x100 = INT32_MIN;
	int32_t t18 = 1;

    t18 = (((x97!=x98)-x99)-x100);

    if (t18 != 2147483547) { NG(); } else { ; }
	
}

void f19(void) {
    	uint8_t x101 = 34U;
	uint8_t x102 = 0U;
	uint64_t x103 = UINT64_MAX;
	uint8_t x104 = UINT8_MAX;
	volatile uint64_t t19 = 3430373LLU;

    t19 = (((x101!=x102)-x103)-x104);

    if (t19 != 18446744073709551363LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	int8_t x105 = 0;
	static uint32_t t20 = 877U;

    t20 = (((x105!=x106)-x107)-x108);

    if (t20 != 4294493049U) { NG(); } else { ; }
	
}

void f21(void) {
    	volatile int16_t x109 = 213;
	static volatile int8_t x110 = INT8_MIN;
	static int32_t x111 = 5;
	static uint16_t x112 = 29U;
	volatile int32_t t21 = -441845102;

    t21 = (((x109!=x110)-x111)-x112);

    if (t21 != -33) { NG(); } else { ; }
	
}

void f22(void) {
    	volatile int16_t x113 = -1;
	uint32_t x114 = UINT32_MAX;
	static int8_t x115 = -1;
	int16_t x116 = INT16_MAX;

    t22 = (((x113!=x114)-x115)-x116);

    if (t22 != -32766) { NG(); } else { ; }
	
}

void f23(void) {
    	int64_t x117 = -1LL;
	static volatile int32_t x119 = 1948;
	uint16_t x120 = 270U;
	static volatile int32_t t23 = -1;

    t23 = (((x117!=x118)-x119)-x120);

    if (t23 != -2217) { NG(); } else { ; }
	
}

void f24(void) {
    	int32_t x122 = -12889;
	int16_t x123 = INT16_MAX;
	static volatile int64_t x124 = INT64_MIN;
	int64_t t24 = 12LL;

    t24 = (((x121!=x122)-x123)-x124);

    if (t24 != 9223372036854743042LL) { NG(); } else { ; }
	
}

void f25(void) {
    	int32_t x133 = INT32_MIN;
	volatile uint16_t x134 = UINT16_MAX;
	static uint8_t x135 = UINT8_MAX;
	int16_t x136 = 0;
	int32_t t25 = 0;

    t25 = (((x133!=x134)-x135)-x136);

    if (t25 != -254) { NG(); } else { ; }
	
}

void f26(void) {
    	uint16_t x137 = UINT16_MAX;
	int32_t x138 = INT32_MIN;
	uint32_t x139 = 64309293U;
	int32_t x140 = INT32_MIN;
	volatile uint32_t t26 = 935U;

    t26 = (((x137!=x138)-x139)-x140);

    if (t26 != 2083174356U) { NG(); } else { ; }
	
}

void f27(void) {
    	int64_t x141 = INT64_MIN;
	int16_t x142 = INT16_MIN;
	int16_t x143 = -1;
	uint8_t x144 = 0U;
	static volatile int32_t t27 = -39;

    t27 = (((x141!=x142)-x143)-x144);

    if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
    	int64_t x149 = INT64_MIN;
	int16_t x150 = -3372;
	int8_t x151 = 1;
	int32_t x152 = INT32_MAX;
	int32_t t28 = 53436;

    t28 = (((x149!=x150)-x151)-x152);

    if (t28 != -2147483647) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x161 = 47;
	static volatile uint32_t x163 = 30211U;
	static int16_t x164 = INT16_MIN;
	volatile uint32_t t29 = 2085082836U;

    t29 = (((x161!=x162)-x163)-x164);

    if (t29 != 2558U) { NG(); } else { ; }
	
}

void f30(void) {
    	int8_t x166 = INT8_MIN;
	static int16_t x167 = INT16_MIN;
	volatile int8_t x168 = INT8_MIN;
	volatile int32_t t30 = -1;

    t30 = (((x165!=x166)-x167)-x168);

    if (t30 != 32897) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int32_t x171 = 716075961;
	int32_t x172 = INT32_MIN;
	int32_t t31 = 2;

    t31 = (((x169!=x170)-x171)-x172);

    if (t31 != 1431407688) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x173 = 132916970U;
	int32_t x174 = INT32_MIN;
	static int16_t x175 = 0;
	volatile int32_t t32 = 910743;

    t32 = (((x173!=x174)-x175)-x176);

    if (t32 != 129) { NG(); } else { ; }
	
}

void f33(void) {
    	uint32_t x177 = 114U;
	int32_t x178 = -1;
	int16_t x180 = 0;

    t33 = (((x177!=x178)-x179)-x180);

    if (t33 != 2) { NG(); } else { ; }
	
}

void f34(void) {
    	int64_t x193 = -1LL;
	volatile int16_t x194 = INT16_MIN;
	uint16_t x195 = 1611U;
	int16_t x196 = INT16_MIN;
	int32_t t34 = 86940513;

    t34 = (((x193!=x194)-x195)-x196);

    if (t34 != 31158) { NG(); } else { ; }
	
}

void f35(void) {
    	uint8_t x202 = 126U;
	uint32_t x203 = 10664U;
	int8_t x204 = INT8_MIN;
	static uint32_t t35 = 862026661U;

    t35 = (((x201!=x202)-x203)-x204);

    if (t35 != 4294956761U) { NG(); } else { ; }
	
}

void f36(void) {
    	static int16_t x205 = INT16_MIN;
	uint8_t x206 = UINT8_MAX;
	int8_t x207 = INT8_MIN;
	static int8_t x208 = INT8_MIN;
	volatile int32_t t36 = -7024;

    t36 = (((x205!=x206)-x207)-x208);

    if (t36 != 257) { NG(); } else { ; }
	
}

void f37(void) {
    	volatile uint64_t x210 = UINT64_MAX;
	volatile int16_t x211 = 53;
	static uint64_t x212 = 695629896LLU;
	uint64_t t37 = 4187007LLU;

    t37 = (((x209!=x210)-x211)-x212);

    if (t37 != 18446744073013921668LLU) { NG(); } else { ; }
	
}

void f38(void) {
    	volatile uint16_t x213 = 45U;
	static volatile int32_t x214 = INT32_MIN;
	int32_t x215 = -45524183;
	static volatile uint8_t x216 = 3U;
	int32_t t38 = 1690;

    t38 = (((x213!=x214)-x215)-x216);

    if (t38 != 45524181) { NG(); } else { ; }
	
}

void f39(void) {
    	int16_t x217 = 3;
	int16_t x218 = INT16_MAX;
	int32_t x220 = -1;

    t39 = (((x217!=x218)-x219)-x220);

    if (t39 != 130) { NG(); } else { ; }
	
}

void f40(void) {
    	static int16_t x222 = -1;
	volatile int64_t x224 = 2886971665LL;
	volatile int64_t t40 = 106880591568428356LL;

    t40 = (((x221!=x222)-x223)-x224);

    if (t40 != -2886972198LL) { NG(); } else { ; }
	
}

void f41(void) {
    	int32_t x225 = INT32_MIN;
	int16_t x226 = -641;
	int8_t x227 = INT8_MIN;
	int16_t x228 = -2248;
	int32_t t41 = 450144253;

    t41 = (((x225!=x226)-x227)-x228);

    if (t41 != 2377) { NG(); } else { ; }
	
}

void f42(void) {
    	int16_t x229 = -1;
	static int16_t x230 = -1;
	static int64_t x231 = INT64_MAX;
	int64_t x232 = -1LL;
	volatile int64_t t42 = -2050404365785622538LL;

    t42 = (((x229!=x230)-x231)-x232);

    if (t42 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f43(void) {
    	uint16_t x233 = UINT16_MAX;
	static volatile int32_t x234 = INT32_MIN;
	uint8_t x235 = UINT8_MAX;
	int16_t x236 = INT16_MIN;
	int32_t t43 = 1811925;

    t43 = (((x233!=x234)-x235)-x236);

    if (t43 != 32514) { NG(); } else { ; }
	
}

void f44(void) {
    	volatile int8_t x238 = 16;
	static int8_t x239 = 3;
	static int32_t t44 = 0;

    t44 = (((x237!=x238)-x239)-x240);

    if (t44 != 126) { NG(); } else { ; }
	
}

void f45(void) {
    	uint32_t x241 = 221486653U;
	static uint32_t x242 = 8U;
	uint32_t x243 = 2U;
	static volatile uint32_t t45 = 2034369594U;

    t45 = (((x241!=x242)-x243)-x244);

    if (t45 != 4294967274U) { NG(); } else { ; }
	
}

void f46(void) {
    	int16_t x250 = INT16_MIN;
	volatile int8_t x251 = -1;
	uint8_t x252 = 10U;
	static int32_t t46 = 14347;

    t46 = (((x249!=x250)-x251)-x252);

    if (t46 != -8) { NG(); } else { ; }
	
}

void f47(void) {
    	static volatile int8_t x253 = -1;
	int8_t x254 = INT8_MIN;
	int8_t x255 = 1;
	uint64_t x256 = UINT64_MAX;

    t47 = (((x253!=x254)-x255)-x256);

    if (t47 != 1LLU) { NG(); } else { ; }
	
}

void f48(void) {
    	volatile uint32_t x257 = UINT32_MAX;
	volatile int64_t x258 = -1LL;
	uint32_t x259 = UINT32_MAX;
	uint8_t x260 = 6U;
	uint32_t t48 = 1U;

    t48 = (((x257!=x258)-x259)-x260);

    if (t48 != 4294967292U) { NG(); } else { ; }
	
}

void f49(void) {
    	int8_t x261 = -12;
	int16_t x262 = -10321;
	volatile int16_t x264 = INT16_MIN;

    t49 = (((x261!=x262)-x263)-x264);

    if (t49 != 32770LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x269 = INT16_MIN;
	int8_t x271 = 13;
	uint16_t x272 = UINT16_MAX;
	int32_t t50 = -1017;

    t50 = (((x269!=x270)-x271)-x272);

    if (t50 != -65548) { NG(); } else { ; }
	
}

void f51(void) {
    	int8_t x277 = INT8_MIN;
	uint16_t x278 = 1U;
	int8_t x280 = INT8_MIN;
	int64_t t51 = -13409617932LL;

    t51 = (((x277!=x278)-x279)-x280);

    if (t51 != 130LL) { NG(); } else { ; }
	
}

void f52(void) {
    	uint8_t x281 = UINT8_MAX;
	static int16_t x282 = INT16_MIN;
	uint64_t x283 = 15019911490826LLU;
	static int32_t x284 = INT32_MIN;
	uint64_t t52 = 229LLU;

    t52 = (((x281!=x282)-x283)-x284);

    if (t52 != 18446729055945544439LLU) { NG(); } else { ; }
	
}

void f53(void) {
    	volatile int32_t x290 = 3941;

    t53 = (((x289!=x290)-x291)-x292);

    if (t53 != 3LLU) { NG(); } else { ; }
	
}

void f54(void) {
    	int32_t x293 = -109341742;
	volatile int8_t x294 = INT8_MIN;
	volatile int32_t x295 = INT32_MAX;
	int8_t x296 = INT8_MIN;
	int32_t t54 = 5871632;

    t54 = (((x293!=x294)-x295)-x296);

    if (t54 != -2147483518) { NG(); } else { ; }
	
}

void f55(void) {
    	uint8_t x297 = 1U;
	int16_t x298 = INT16_MAX;
	int8_t x299 = INT8_MIN;
	volatile int32_t t55 = -4366;

    t55 = (((x297!=x298)-x299)-x300);

    if (t55 != -126) { NG(); } else { ; }
	
}

void f56(void) {
    	uint32_t x305 = UINT32_MAX;
	volatile uint16_t x306 = 20U;
	uint64_t x307 = 7545LLU;
	int32_t x308 = 0;
	volatile uint64_t t56 = 872395098111LLU;

    t56 = (((x305!=x306)-x307)-x308);

    if (t56 != 18446744073709544072LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	int32_t x317 = INT32_MAX;
	int8_t x318 = 48;
	static int16_t x319 = INT16_MAX;

    t57 = (((x317!=x318)-x319)-x320);

    if (t57 != -32765LL) { NG(); } else { ; }
	
}

void f58(void) {
    	static uint64_t x321 = 172312586204LLU;
	int64_t x322 = INT64_MIN;
	static int16_t x323 = -1;
	int8_t x324 = INT8_MIN;
	volatile int32_t t58 = -32086;

    t58 = (((x321!=x322)-x323)-x324);

    if (t58 != 130) { NG(); } else { ; }
	
}

void f59(void) {
    	uint16_t x325 = 95U;
	static int16_t x328 = -7;

    t59 = (((x325!=x326)-x327)-x328);

    if (t59 != 18446744073709519177LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	int8_t x330 = INT8_MIN;
	static volatile int32_t x331 = -1;
	int8_t x332 = -1;
	int32_t t60 = 783;

    t60 = (((x329!=x330)-x331)-x332);

    if (t60 != 3) { NG(); } else { ; }
	
}

void f61(void) {
    	volatile int8_t x333 = INT8_MAX;
	volatile int16_t x334 = -1;
	static int64_t x335 = -443234LL;
	int16_t x336 = INT16_MIN;

    t61 = (((x333!=x334)-x335)-x336);

    if (t61 != 476003LL) { NG(); } else { ; }
	
}

void f62(void) {
    	static volatile int8_t x337 = -1;
	int64_t x338 = INT64_MIN;
	static int32_t x340 = -1;
	volatile int32_t t62 = 1704;

    t62 = (((x337!=x338)-x339)-x340);

    if (t62 != -32765) { NG(); } else { ; }
	
}

void f63(void) {
    	int64_t x341 = INT64_MIN;
	static int16_t x342 = INT16_MIN;
	static uint64_t x343 = UINT64_MAX;
	uint16_t x344 = UINT16_MAX;

    t63 = (((x341!=x342)-x343)-x344);

    if (t63 != 18446744073709486083LLU) { NG(); } else { ; }
	
}

void f64(void) {
    	int32_t x345 = INT32_MIN;
	static int32_t x346 = 0;
	static int64_t x348 = INT64_MAX;
	volatile int64_t t64 = -23015163701075LL;

    t64 = (((x345!=x346)-x347)-x348);

    if (t64 != -9223372036851176913LL) { NG(); } else { ; }
	
}

void f65(void) {
    	uint64_t x349 = 1542910487LLU;
	uint8_t x350 = 2U;
	static int8_t x351 = 0;
	volatile int32_t t65 = -37;

    t65 = (((x349!=x350)-x351)-x352);

    if (t65 != 6708) { NG(); } else { ; }
	
}

void f66(void) {
    	uint32_t x357 = UINT32_MAX;
	static int8_t x358 = INT8_MAX;
	uint64_t x359 = 1953954211LLU;
	int16_t x360 = INT16_MAX;

    t66 = (((x357!=x358)-x359)-x360);

    if (t66 != 18446744071755564639LLU) { NG(); } else { ; }
	
}

void f67(void) {
    	int64_t x363 = -1LL;
	volatile uint32_t x364 = 4170U;
	volatile int64_t t67 = -323464567397854649LL;

    t67 = (((x361!=x362)-x363)-x364);

    if (t67 != -4168LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int64_t x365 = -24061974LL;
	int8_t x366 = INT8_MIN;
	uint8_t x367 = 2U;
	static volatile int16_t x368 = INT16_MIN;

    t68 = (((x365!=x366)-x367)-x368);

    if (t68 != 32767) { NG(); } else { ; }
	
}

void f69(void) {
    	int32_t x369 = INT32_MIN;
	static int32_t x370 = -65376;
	int16_t x371 = INT16_MAX;
	uint8_t x372 = UINT8_MAX;
	volatile int32_t t69 = -3;

    t69 = (((x369!=x370)-x371)-x372);

    if (t69 != -33021) { NG(); } else { ; }
	
}

void f70(void) {
    	int8_t x373 = INT8_MIN;
	volatile uint8_t x374 = 3U;
	uint16_t x375 = UINT16_MAX;
	static int8_t x376 = 2;
	volatile int32_t t70 = -3;

    t70 = (((x373!=x374)-x375)-x376);

    if (t70 != -65536) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile uint64_t x381 = 31914LLU;
	uint64_t x383 = 412921174280551223LLU;
	int64_t x384 = 3LL;
	uint64_t t71 = 39664889659910LLU;

    t71 = (((x381!=x382)-x383)-x384);

    if (t71 != 18033822899429000391LLU) { NG(); } else { ; }
	
}

void f72(void) {
    	volatile int8_t x389 = INT8_MIN;
	static volatile uint32_t x390 = 149U;
	uint64_t x391 = 276756038880672LLU;

    t72 = (((x389!=x390)-x391)-x392);

    if (t72 != 18446467317670670539LLU) { NG(); } else { ; }
	
}

void f73(void) {
    	static volatile int32_t x393 = -47933;
	uint64_t x394 = UINT64_MAX;
	int16_t x395 = INT16_MAX;
	int64_t x396 = 104880140296750LL;

    t73 = (((x393!=x394)-x395)-x396);

    if (t73 != -104880140329516LL) { NG(); } else { ; }
	
}

void f74(void) {
    	int8_t x397 = 51;
	int16_t x398 = INT16_MIN;
	uint32_t x399 = 10087421U;
	int32_t x400 = INT32_MIN;
	uint32_t t74 = 53674510U;

    t74 = (((x397!=x398)-x399)-x400);

    if (t74 != 2137396228U) { NG(); } else { ; }
	
}

void f75(void) {
    	static volatile int16_t x401 = 975;
	int32_t x403 = -1;
	int8_t x404 = -1;
	int32_t t75 = 220;

    t75 = (((x401!=x402)-x403)-x404);

    if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
    	uint8_t x405 = 11U;
	int8_t x408 = INT8_MIN;
	volatile int32_t t76 = 283712158;

    t76 = (((x405!=x406)-x407)-x408);

    if (t76 != -32638) { NG(); } else { ; }
	
}

void f77(void) {
    	uint16_t x409 = 1U;
	uint16_t x411 = 12U;

    t77 = (((x409!=x410)-x411)-x412);

    if (t77 != -32778) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x414 = INT16_MIN;
	uint16_t x415 = 59U;
	int16_t x416 = INT16_MIN;
	volatile int32_t t78 = -485;

    t78 = (((x413!=x414)-x415)-x416);

    if (t78 != 32710) { NG(); } else { ; }
	
}

void f79(void) {
    	static int16_t x417 = -1;
	uint16_t x418 = 31929U;
	int64_t x419 = 5LL;
	uint64_t x420 = 80688636LLU;
	uint64_t t79 = 3503280058088515246LLU;

    t79 = (((x417!=x418)-x419)-x420);

    if (t79 != 18446744073628862976LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	int16_t x425 = -1;
	uint64_t x426 = 781LLU;
	volatile int32_t x427 = -153954;
	uint32_t x428 = UINT32_MAX;
	static uint32_t t80 = 371834U;

    t80 = (((x425!=x426)-x427)-x428);

    if (t80 != 153956U) { NG(); } else { ; }
	
}

void f81(void) {
    	uint32_t x430 = UINT32_MAX;
	int16_t x431 = INT16_MAX;
	uint64_t x432 = UINT64_MAX;

    t81 = (((x429!=x430)-x431)-x432);

    if (t81 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f82(void) {
    	volatile uint16_t x437 = 25U;
	int8_t x439 = INT8_MAX;
	int8_t x440 = INT8_MIN;
	int32_t t82 = -53413633;

    t82 = (((x437!=x438)-x439)-x440);

    if (t82 != 2) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x441 = -165253024;
	int32_t x442 = -4;
	int16_t x443 = 2;
	static volatile int32_t x444 = INT32_MAX;

    t83 = (((x441!=x442)-x443)-x444);

    if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
    	int8_t x445 = -1;
	int32_t x446 = -1;
	int16_t x447 = INT16_MIN;
	uint8_t x448 = UINT8_MAX;

    t84 = (((x445!=x446)-x447)-x448);

    if (t84 != 32513) { NG(); } else { ; }
	
}

void f85(void) {
    	volatile int32_t x449 = -3380242;
	static int32_t x450 = INT32_MAX;

    t85 = (((x449!=x450)-x451)-x452);

    if (t85 != 4294967162U) { NG(); } else { ; }
	
}

void f86(void) {
    	int64_t x453 = INT64_MIN;
	static int16_t x454 = 1;
	int16_t x456 = INT16_MIN;

    t86 = (((x453!=x454)-x455)-x456);

    if (t86 != 32897) { NG(); } else { ; }
	
}

void f87(void) {
    	int64_t x457 = INT64_MAX;
	int8_t x458 = -1;

    t87 = (((x457!=x458)-x459)-x460);

    if (t87 != 32770) { NG(); } else { ; }
	
}

void f88(void) {
    	int16_t x461 = INT16_MAX;
	uint32_t x463 = 1600U;
	int8_t x464 = -1;

    t88 = (((x461!=x462)-x463)-x464);

    if (t88 != 4294965698U) { NG(); } else { ; }
	
}

void f89(void) {
    	int16_t x465 = -1;
	uint8_t x467 = 66U;
	int8_t x468 = INT8_MAX;
	int32_t t89 = 11548;

    t89 = (((x465!=x466)-x467)-x468);

    if (t89 != -193) { NG(); } else { ; }
	
}

void f90(void) {
    	uint8_t x471 = 3U;
	int16_t x472 = INT16_MAX;

    t90 = (((x469!=x470)-x471)-x472);

    if (t90 != -32769) { NG(); } else { ; }
	
}

void f91(void) {
    	static uint32_t x477 = UINT32_MAX;
	uint32_t x478 = UINT32_MAX;
	volatile uint8_t x479 = 3U;
	int32_t x480 = 115351;
	int32_t t91 = 8616;

    t91 = (((x477!=x478)-x479)-x480);

    if (t91 != -115354) { NG(); } else { ; }
	
}

void f92(void) {
    	int32_t x483 = -45901;
	uint8_t x484 = 5U;
	volatile int32_t t92 = -429313435;

    t92 = (((x481!=x482)-x483)-x484);

    if (t92 != 45897) { NG(); } else { ; }
	
}

void f93(void) {
    	uint8_t x489 = UINT8_MAX;
	static volatile int32_t x490 = INT32_MIN;
	static uint32_t x491 = 1183460639U;
	uint64_t x492 = 80LLU;
	uint64_t t93 = 2416663364901154720LLU;

    t93 = (((x489!=x490)-x491)-x492);

    if (t93 != 3111506578LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	uint16_t x501 = 9U;
	int16_t x502 = 1;
	int32_t x503 = INT32_MAX;
	int8_t x504 = -1;

    t94 = (((x501!=x502)-x503)-x504);

    if (t94 != -2147483645) { NG(); } else { ; }
	
}

void f95(void) {
    	static uint32_t x505 = UINT32_MAX;
	static uint16_t x506 = 1167U;
	volatile int8_t x507 = -3;
	static int64_t x508 = 451516080589057039LL;
	volatile int64_t t95 = 2272906LL;

    t95 = (((x505!=x506)-x507)-x508);

    if (t95 != -451516080589057035LL) { NG(); } else { ; }
	
}

void f96(void) {
    	uint64_t x509 = 4236030651LLU;
	volatile int64_t x510 = INT64_MAX;
	volatile int8_t x511 = -19;
	int32_t x512 = -25023612;
	int32_t t96 = -294937629;

    t96 = (((x509!=x510)-x511)-x512);

    if (t96 != 25023632) { NG(); } else { ; }
	
}

void f97(void) {
    	int32_t x514 = INT32_MIN;
	int8_t x515 = -15;
	uint32_t x516 = UINT32_MAX;
	uint32_t t97 = 220394330U;

    t97 = (((x513!=x514)-x515)-x516);

    if (t97 != 16U) { NG(); } else { ; }
	
}

void f98(void) {
    	static int8_t x517 = INT8_MAX;
	int32_t x518 = INT32_MIN;
	int64_t x519 = 4584280059177LL;
	uint16_t x520 = 10U;
	volatile int64_t t98 = -8198857134438229LL;

    t98 = (((x517!=x518)-x519)-x520);

    if (t98 != -4584280059186LL) { NG(); } else { ; }
	
}

void f99(void) {
    	int32_t x521 = 1279117;
	static uint16_t x522 = 16366U;
	int16_t x523 = -34;
	volatile uint32_t x524 = 263740880U;
	uint32_t t99 = 124U;

    t99 = (((x521!=x522)-x523)-x524);

    if (t99 != 4031226451U) { NG(); } else { ; }
	
}

void f100(void) {
    	int64_t x533 = -1501LL;
	int64_t x534 = 22389190074LL;
	int8_t x535 = -1;
	int16_t x536 = INT16_MAX;
	volatile int32_t t100 = 5812;

    t100 = (((x533!=x534)-x535)-x536);

    if (t100 != -32765) { NG(); } else { ; }
	
}

void f101(void) {
    	int32_t x537 = -1;
	static int64_t x538 = -9455539617139LL;
	static uint16_t x539 = 1U;
	int32_t x540 = -42;
	static volatile int32_t t101 = -84261441;

    t101 = (((x537!=x538)-x539)-x540);

    if (t101 != 42) { NG(); } else { ; }
	
}

void f102(void) {
    	uint16_t x541 = UINT16_MAX;
	int16_t x542 = INT16_MIN;
	int16_t x544 = INT16_MAX;

    t102 = (((x541!=x542)-x543)-x544);

    if (t102 != -32765) { NG(); } else { ; }
	
}

void f103(void) {
    	uint16_t x545 = 431U;
	uint8_t x546 = UINT8_MAX;
	int64_t x547 = -32297840961611099LL;
	int64_t t103 = -720371687716278LL;

    t103 = (((x545!=x546)-x547)-x548);

    if (t103 != 32297840961611105LL) { NG(); } else { ; }
	
}

void f104(void) {
    	uint32_t x561 = 65U;
	static int64_t x562 = INT64_MAX;
	uint8_t x563 = UINT8_MAX;
	static volatile int32_t t104 = -2842683;

    t104 = (((x561!=x562)-x563)-x564);

    if (t104 != -253) { NG(); } else { ; }
	
}

void f105(void) {
    	int16_t x569 = INT16_MAX;
	int8_t x570 = INT8_MIN;
	static volatile uint32_t x571 = UINT32_MAX;
	static volatile uint8_t x572 = UINT8_MAX;

    t105 = (((x569!=x570)-x571)-x572);

    if (t105 != 4294967043U) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int32_t x577 = -11159;
	uint64_t x579 = UINT64_MAX;
	uint16_t x580 = 0U;
	volatile uint64_t t106 = 326LLU;

    t106 = (((x577!=x578)-x579)-x580);

    if (t106 != 2LLU) { NG(); } else { ; }
	
}

void f107(void) {
    	static int8_t x581 = 1;
	int64_t x583 = 2398969400921746LL;
	volatile int8_t x584 = -14;
	static volatile int64_t t107 = -416625LL;

    t107 = (((x581!=x582)-x583)-x584);

    if (t107 != -2398969400921731LL) { NG(); } else { ; }
	
}

void f108(void) {
    	int8_t x585 = 55;
	int32_t x587 = INT32_MAX;
	static uint64_t x588 = 107LLU;
	volatile uint64_t t108 = 129LLU;

    t108 = (((x585!=x586)-x587)-x588);

    if (t108 != 18446744071562067863LLU) { NG(); } else { ; }
	
}

void f109(void) {
    	static uint16_t x589 = UINT16_MAX;
	volatile int16_t x590 = INT16_MIN;
	volatile int64_t x591 = -101548LL;
	static int16_t x592 = -8679;
	int64_t t109 = 10LL;

    t109 = (((x589!=x590)-x591)-x592);

    if (t109 != 110228LL) { NG(); } else { ; }
	
}

void f110(void) {
    	uint16_t x593 = UINT16_MAX;
	int16_t x594 = INT16_MIN;
	volatile int16_t x595 = INT16_MIN;
	uint64_t x596 = 764477461119447LLU;
	uint64_t t110 = 143027932010LLU;

    t110 = (((x593!=x594)-x595)-x596);

    if (t110 != 18445979596248464938LLU) { NG(); } else { ; }
	
}

void f111(void) {
    	int8_t x597 = INT8_MAX;
	uint32_t x598 = 310759984U;
	int16_t x599 = INT16_MIN;
	int8_t x600 = INT8_MAX;
	volatile int32_t t111 = -1;

    t111 = (((x597!=x598)-x599)-x600);

    if (t111 != 32642) { NG(); } else { ; }
	
}

void f112(void) {
    	volatile int16_t x606 = -1;
	int16_t x607 = INT16_MIN;
	static uint16_t x608 = UINT16_MAX;
	int32_t t112 = -21808783;

    t112 = (((x605!=x606)-x607)-x608);

    if (t112 != -32766) { NG(); } else { ; }
	
}

void f113(void) {
    	uint16_t x610 = UINT16_MAX;
	static uint16_t x612 = UINT16_MAX;

    t113 = (((x609!=x610)-x611)-x612);

    if (t113 != -131069) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x613 = INT8_MIN;
	int16_t x614 = INT16_MIN;
	static uint32_t x615 = UINT32_MAX;
	uint64_t x616 = UINT64_MAX;
	uint64_t t114 = 6019440439LLU;

    t114 = (((x613!=x614)-x615)-x616);

    if (t114 != 3LLU) { NG(); } else { ; }
	
}

void f115(void) {
    	volatile uint8_t x617 = 17U;
	int16_t x618 = INT16_MIN;
	int8_t x619 = INT8_MAX;
	volatile int32_t x620 = INT32_MIN;
	static volatile int32_t t115 = 0;

    t115 = (((x617!=x618)-x619)-x620);

    if (t115 != 2147483522) { NG(); } else { ; }
	
}

void f116(void) {
    	uint8_t x622 = UINT8_MAX;
	static uint32_t x623 = 2U;
	static uint32_t x624 = 23146U;
	uint32_t t116 = 874U;

    t116 = (((x621!=x622)-x623)-x624);

    if (t116 != 4294944149U) { NG(); } else { ; }
	
}

void f117(void) {
    	int32_t x637 = INT32_MIN;
	uint64_t x639 = 292750630135745LLU;
	uint16_t x640 = 40U;

    t117 = (((x637!=x638)-x639)-x640);

    if (t117 != 18446451323079415832LLU) { NG(); } else { ; }
	
}

void f118(void) {
    	static int16_t x641 = INT16_MIN;
	int64_t x642 = INT64_MIN;
	static int8_t x643 = INT8_MIN;
	uint16_t x644 = 336U;
	int32_t t118 = -5;

    t118 = (((x641!=x642)-x643)-x644);

    if (t118 != -207) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x646 = INT64_MAX;
	uint16_t x647 = 20U;
	uint16_t x648 = 6280U;
	volatile int32_t t119 = 28212768;

    t119 = (((x645!=x646)-x647)-x648);

    if (t119 != -6299) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x649 = -1;
	int16_t x650 = INT16_MAX;
	int8_t x651 = INT8_MIN;
	static int64_t x652 = -1062570491262476LL;
	int64_t t120 = -68613436LL;

    t120 = (((x649!=x650)-x651)-x652);

    if (t120 != 1062570491262605LL) { NG(); } else { ; }
	
}

void f121(void) {
    	uint16_t x653 = UINT16_MAX;
	uint64_t x654 = UINT64_MAX;
	static int64_t x656 = INT64_MAX;
	volatile uint64_t t121 = 78072289966984167LLU;

    t121 = (((x653!=x654)-x655)-x656);

    if (t121 != 9223372036854775811LLU) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint64_t x657 = 29762420678632LLU;
	int32_t x658 = INT32_MAX;
	static int8_t x659 = INT8_MIN;
	static volatile uint16_t x660 = 348U;
	int32_t t122 = 52161;

    t122 = (((x657!=x658)-x659)-x660);

    if (t122 != -219) { NG(); } else { ; }
	
}

void f123(void) {
    	int8_t x661 = -2;
	uint32_t x662 = 58290U;
	int8_t x663 = INT8_MIN;
	static volatile int32_t t123 = 117295863;

    t123 = (((x661!=x662)-x663)-x664);

    if (t123 != -65406) { NG(); } else { ; }
	
}

void f124(void) {
    	int32_t x665 = -148;
	int32_t x666 = -1;
	static uint16_t x667 = 1U;
	int8_t x668 = INT8_MAX;
	int32_t t124 = -695888;

    t124 = (((x665!=x666)-x667)-x668);

    if (t124 != -127) { NG(); } else { ; }
	
}

void f125(void) {
    	volatile uint32_t x671 = UINT32_MAX;
	static uint16_t x672 = 28U;
	uint32_t t125 = 677U;

    t125 = (((x669!=x670)-x671)-x672);

    if (t125 != 4294967270U) { NG(); } else { ; }
	
}

void f126(void) {
    	int64_t x677 = -14320359841LL;
	volatile uint32_t x678 = 60085791U;
	static int8_t x679 = INT8_MAX;
	volatile int32_t x680 = 104;
	volatile int32_t t126 = -1537;

    t126 = (((x677!=x678)-x679)-x680);

    if (t126 != -230) { NG(); } else { ; }
	
}

void f127(void) {
    	volatile uint64_t x681 = 15956933LLU;
	int16_t x682 = -4969;
	int8_t x683 = INT8_MAX;
	int32_t x684 = -61387;
	int32_t t127 = -133097;

    t127 = (((x681!=x682)-x683)-x684);

    if (t127 != 61261) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile int64_t x686 = INT64_MIN;
	volatile int32_t t128 = -646672;

    t128 = (((x685!=x686)-x687)-x688);

    if (t128 != -1365430) { NG(); } else { ; }
	
}

void f129(void) {
    	int64_t x689 = INT64_MIN;
	int16_t x690 = -1;
	volatile uint16_t x691 = UINT16_MAX;
	int64_t x692 = 6774LL;
	static int64_t t129 = 1306097105114357952LL;

    t129 = (((x689!=x690)-x691)-x692);

    if (t129 != -72308LL) { NG(); } else { ; }
	
}

void f130(void) {
    	int8_t x693 = INT8_MAX;
	int32_t x695 = 411560122;
	int16_t x696 = INT16_MIN;
	int32_t t130 = -1638939;

    t130 = (((x693!=x694)-x695)-x696);

    if (t130 != -411527353) { NG(); } else { ; }
	
}

void f131(void) {
    	int64_t x698 = -9026LL;
	int8_t x700 = INT8_MAX;
	volatile uint64_t t131 = 378LLU;

    t131 = (((x697!=x698)-x699)-x700);

    if (t131 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	static volatile int64_t x705 = INT64_MIN;
	uint8_t x706 = UINT8_MAX;
	int8_t x707 = INT8_MAX;
	int16_t x708 = -1;
	int32_t t132 = 185023;

    t132 = (((x705!=x706)-x707)-x708);

    if (t132 != -125) { NG(); } else { ; }
	
}

void f133(void) {
    	uint32_t x709 = 44U;
	volatile uint64_t x710 = 298811151LLU;
	static volatile int8_t x712 = INT8_MIN;
	int32_t t133 = -491;

    t133 = (((x709!=x710)-x711)-x712);

    if (t133 != 257) { NG(); } else { ; }
	
}

void f134(void) {
    	int64_t x713 = -1LL;
	int16_t x714 = INT16_MAX;
	uint8_t x715 = 10U;
	volatile int8_t x716 = 0;
	int32_t t134 = -117;

    t134 = (((x713!=x714)-x715)-x716);

    if (t134 != -9) { NG(); } else { ; }
	
}

void f135(void) {
    	int32_t x717 = 388569;
	volatile int16_t x718 = -720;
	uint64_t x720 = 490971323309423LLU;
	uint64_t t135 = 350154397287368LLU;

    t135 = (((x717!=x718)-x719)-x720);

    if (t135 != 18446253102386274962LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	int8_t x721 = -7;
	int32_t x722 = -6855;
	int16_t x723 = INT16_MIN;
	volatile int16_t x724 = INT16_MAX;
	int32_t t136 = 510;

    t136 = (((x721!=x722)-x723)-x724);

    if (t136 != 2) { NG(); } else { ; }
	
}

void f137(void) {
    	int64_t x729 = INT64_MIN;
	uint8_t x730 = UINT8_MAX;
	int64_t x731 = 483535589LL;
	uint32_t x732 = 48554U;
	int64_t t137 = -1067862LL;

    t137 = (((x729!=x730)-x731)-x732);

    if (t137 != -483584142LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x733 = 4;
	uint64_t x734 = 33374968053845LLU;
	int32_t x735 = -1;
	static volatile int32_t x736 = -1;

    t138 = (((x733!=x734)-x735)-x736);

    if (t138 != 3) { NG(); } else { ; }
	
}

void f139(void) {
    	int32_t x737 = 115;
	int16_t x738 = -1;
	int16_t x739 = -27;
	volatile uint8_t x740 = 73U;

    t139 = (((x737!=x738)-x739)-x740);

    if (t139 != -45) { NG(); } else { ; }
	
}

void f140(void) {
    	volatile int32_t x741 = -5065;
	int16_t x742 = INT16_MIN;
	uint64_t x744 = 4251609877958074153LLU;
	volatile uint64_t t140 = 316269432098813LLU;

    t140 = (((x741!=x742)-x743)-x744);

    if (t140 != 14195026681958894767LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	volatile int32_t x746 = INT32_MIN;
	static int32_t x747 = 5910528;
	int32_t t141 = 53654564;

    t141 = (((x745!=x746)-x747)-x748);

    if (t141 != 2141573121) { NG(); } else { ; }
	
}

void f142(void) {
    	static uint64_t x753 = 4057299LLU;
	uint32_t x754 = 3479741U;
	int64_t x755 = INT64_MAX;
	int64_t x756 = INT64_MIN;

    t142 = (((x753!=x754)-x755)-x756);

    if (t142 != 2LL) { NG(); } else { ; }
	
}

void f143(void) {
    	uint16_t x757 = 6U;
	int32_t x758 = INT32_MIN;
	static int64_t x759 = -1LL;
	int16_t x760 = INT16_MIN;

    t143 = (((x757!=x758)-x759)-x760);

    if (t143 != 32770LL) { NG(); } else { ; }
	
}

void f144(void) {
    	static int8_t x761 = INT8_MIN;
	int16_t x764 = -1;
	volatile int32_t t144 = -12643;

    t144 = (((x761!=x762)-x763)-x764);

    if (t144 != -32765) { NG(); } else { ; }
	
}

void f145(void) {
    	static int16_t x765 = INT16_MIN;
	static volatile uint8_t x766 = UINT8_MAX;
	volatile int16_t x767 = INT16_MIN;
	volatile uint8_t x768 = 31U;
	int32_t t145 = -1879;

    t145 = (((x765!=x766)-x767)-x768);

    if (t145 != 32738) { NG(); } else { ; }
	
}

void f146(void) {
    	volatile int32_t x769 = INT32_MIN;
	static uint16_t x770 = 5U;
	int8_t x772 = INT8_MAX;
	int32_t t146 = -43;

    t146 = (((x769!=x770)-x771)-x772);

    if (t146 != 17208) { NG(); } else { ; }
	
}

void f147(void) {
    	uint64_t x773 = 679LLU;
	static uint32_t x774 = UINT32_MAX;
	static int64_t x776 = INT64_MIN;

    t147 = (((x773!=x774)-x775)-x776);

    if (t147 != 9223372034707292162LL) { NG(); } else { ; }
	
}

void f148(void) {
    	static int8_t x789 = INT8_MAX;
	volatile int8_t x790 = INT8_MIN;
	int16_t x791 = INT16_MIN;
	int64_t t148 = 5711254989LL;

    t148 = (((x789!=x790)-x791)-x792);

    if (t148 != -9223372036854743038LL) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile uint64_t x793 = 531606968096628912LLU;
	uint8_t x794 = 127U;
	uint64_t x795 = UINT64_MAX;
	volatile int32_t x796 = -1;

    t149 = (((x793!=x794)-x795)-x796);

    if (t149 != 3LLU) { NG(); } else { ; }
	
}

void f150(void) {
    	uint16_t x797 = UINT16_MAX;
	int64_t x798 = INT64_MIN;
	static int8_t x799 = -1;
	volatile int64_t t150 = -251734395135LL;

    t150 = (((x797!=x798)-x799)-x800);

    if (t150 != -326054969210LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int32_t x801 = -102;
	int64_t x802 = -46610722213150LL;
	volatile uint32_t x803 = 67U;
	int32_t x804 = INT32_MIN;
	uint32_t t151 = 32U;

    t151 = (((x801!=x802)-x803)-x804);

    if (t151 != 2147483582U) { NG(); } else { ; }
	
}

void f152(void) {
    	int16_t x806 = INT16_MAX;
	static uint32_t x807 = 381157860U;
	volatile int32_t x808 = 9967;

    t152 = (((x805!=x806)-x807)-x808);

    if (t152 != 3913799470U) { NG(); } else { ; }
	
}

void f153(void) {
    	uint16_t x809 = UINT16_MAX;
	uint64_t x810 = 22LLU;
	int64_t x811 = -1LL;
	uint8_t x812 = 1U;
	int64_t t153 = -1LL;

    t153 = (((x809!=x810)-x811)-x812);

    if (t153 != 1LL) { NG(); } else { ; }
	
}

void f154(void) {
    	int64_t x813 = 5098332LL;
	int8_t x814 = INT8_MIN;
	volatile int16_t x816 = INT16_MAX;
	uint64_t t154 = 7827729944LLU;

    t154 = (((x813!=x814)-x815)-x816);

    if (t154 != 18446744051399424383LLU) { NG(); } else { ; }
	
}

void f155(void) {
    	volatile uint8_t x817 = UINT8_MAX;
	int64_t x818 = INT64_MIN;
	int8_t x819 = -1;

    t155 = (((x817!=x818)-x819)-x820);

    if (t155 != -65533) { NG(); } else { ; }
	
}

void f156(void) {
    	volatile uint8_t x825 = 1U;
	uint16_t x827 = 22U;

    t156 = (((x825!=x826)-x827)-x828);

    if (t156 != -20) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x829 = INT32_MAX;
	volatile uint8_t x830 = UINT8_MAX;
	static int8_t x832 = -12;
	volatile int32_t t157 = 1238563;

    t157 = (((x829!=x830)-x831)-x832);

    if (t157 != -32754) { NG(); } else { ; }
	
}

void f158(void) {
    	int16_t x833 = 7;
	int8_t x834 = -1;
	uint16_t x835 = UINT16_MAX;
	int32_t x836 = INT32_MIN;

    t158 = (((x833!=x834)-x835)-x836);

    if (t158 != 2147418114) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x837 = UINT64_MAX;
	int64_t x839 = 575138491087365222LL;
	int8_t x840 = 0;
	volatile int64_t t159 = 3880LL;

    t159 = (((x837!=x838)-x839)-x840);

    if (t159 != -575138491087365221LL) { NG(); } else { ; }
	
}

void f160(void) {
    	static uint32_t x846 = 569U;
	uint16_t x847 = 884U;
	int8_t x848 = -1;

    t160 = (((x845!=x846)-x847)-x848);

    if (t160 != -882) { NG(); } else { ; }
	
}

void f161(void) {
    	int8_t x851 = INT8_MIN;
	uint8_t x852 = 1U;
	volatile int32_t t161 = 1495;

    t161 = (((x849!=x850)-x851)-x852);

    if (t161 != 128) { NG(); } else { ; }
	
}

void f162(void) {
    	int16_t x853 = 10948;
	int64_t x855 = -1LL;
	int8_t x856 = INT8_MAX;

    t162 = (((x853!=x854)-x855)-x856);

    if (t162 != -125LL) { NG(); } else { ; }
	
}

void f163(void) {
    	int32_t x861 = INT32_MIN;
	int32_t x862 = -1;
	uint8_t x863 = UINT8_MAX;
	volatile uint32_t x864 = 0U;
	static uint32_t t163 = 7U;

    t163 = (((x861!=x862)-x863)-x864);

    if (t163 != 4294967042U) { NG(); } else { ; }
	
}

void f164(void) {
    	uint16_t x869 = UINT16_MAX;
	static int32_t x870 = INT32_MIN;
	static uint64_t x871 = UINT64_MAX;
	int16_t x872 = INT16_MAX;

    t164 = (((x869!=x870)-x871)-x872);

    if (t164 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	volatile int32_t x877 = -1;
	uint16_t x878 = UINT16_MAX;
	int16_t x880 = 1;
	volatile int32_t t165 = 12654;

    t165 = (((x877!=x878)-x879)-x880);

    if (t165 != 1) { NG(); } else { ; }
	
}

void f166(void) {
    	static int16_t x881 = INT16_MIN;
	volatile uint64_t x882 = 16812485497182486LLU;
	volatile uint8_t x883 = 107U;
	volatile int64_t x884 = -90025985907LL;

    t166 = (((x881!=x882)-x883)-x884);

    if (t166 != 90025985801LL) { NG(); } else { ; }
	
}

void f167(void) {
    	static int8_t x885 = INT8_MIN;
	uint64_t x886 = UINT64_MAX;
	volatile int32_t x887 = -61633;
	volatile uint64_t t167 = 3792095581619479LLU;

    t167 = (((x885!=x886)-x887)-x888);

    if (t167 != 43119LLU) { NG(); } else { ; }
	
}

void f168(void) {
    	int32_t x895 = 559575;
	int64_t x896 = -1LL;
	int64_t t168 = -73562208612546LL;

    t168 = (((x893!=x894)-x895)-x896);

    if (t168 != -559573LL) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x898 = INT16_MAX;
	volatile uint16_t x899 = UINT16_MAX;

    t169 = (((x897!=x898)-x899)-x900);

    if (t169 != 9223372036854710274LL) { NG(); } else { ; }
	
}

void f170(void) {
    	static volatile int64_t x905 = -1LL;
	int16_t x906 = INT16_MIN;
	volatile uint8_t x907 = 113U;
	volatile uint64_t x908 = 55126905436LLU;
	volatile uint64_t t170 = 1290000941722738185LLU;

    t170 = (((x905!=x906)-x907)-x908);

    if (t170 != 18446744018582646068LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int32_t x909 = INT32_MAX;
	static uint8_t x911 = 0U;
	static uint8_t x912 = UINT8_MAX;
	volatile int32_t t171 = -5;

    t171 = (((x909!=x910)-x911)-x912);

    if (t171 != -254) { NG(); } else { ; }
	
}

void f172(void) {
    	int32_t x913 = -486967;
	static int32_t x914 = INT32_MIN;
	static int32_t x915 = -1;
	uint8_t x916 = 6U;
	int32_t t172 = 0;

    t172 = (((x913!=x914)-x915)-x916);

    if (t172 != -4) { NG(); } else { ; }
	
}

void f173(void) {
    	uint8_t x921 = 4U;
	volatile int64_t x924 = INT64_MIN;
	uint64_t t173 = 60063958591840LLU;

    t173 = (((x921!=x922)-x923)-x924);

    if (t173 != 9223372036854775810LLU) { NG(); } else { ; }
	
}

void f174(void) {
    	uint32_t x929 = UINT32_MAX;
	int8_t x930 = 38;
	uint8_t x932 = 0U;
	int32_t t174 = -194472722;

    t174 = (((x929!=x930)-x931)-x932);

    if (t174 != 2) { NG(); } else { ; }
	
}

void f175(void) {
    	volatile int8_t x933 = -5;
	int64_t x934 = 5LL;
	volatile int8_t x935 = 1;
	static int64_t x936 = -75921190321409LL;
	volatile int64_t t175 = 10916477117LL;

    t175 = (((x933!=x934)-x935)-x936);

    if (t175 != 75921190321409LL) { NG(); } else { ; }
	
}

void f176(void) {
    	int16_t x937 = INT16_MAX;
	int32_t x938 = -1;
	volatile int16_t x939 = 831;
	int32_t x940 = INT32_MIN;
	int32_t t176 = 68;

    t176 = (((x937!=x938)-x939)-x940);

    if (t176 != 2147482818) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x941 = 1U;
	volatile uint16_t x943 = UINT16_MAX;
	int8_t x944 = -2;
	volatile int32_t t177 = 1214;

    t177 = (((x941!=x942)-x943)-x944);

    if (t177 != -65532) { NG(); } else { ; }
	
}

void f178(void) {
    	uint64_t x945 = 0LLU;
	int8_t x947 = 5;
	volatile int64_t t178 = -127180786213LL;

    t178 = (((x945!=x946)-x947)-x948);

    if (t178 != 9223372036854775804LL) { NG(); } else { ; }
	
}

void f179(void) {
    	static int16_t x950 = INT16_MAX;
	int8_t x951 = -20;
	volatile int8_t x952 = 10;
	volatile int32_t t179 = 30025258;

    t179 = (((x949!=x950)-x951)-x952);

    if (t179 != 11) { NG(); } else { ; }
	
}

void f180(void) {
    	volatile int64_t x953 = INT64_MIN;
	volatile uint8_t x954 = 1U;
	int32_t x955 = 12413792;
	volatile int64_t x956 = -1664370880515836LL;
	static int64_t t180 = -148113292488LL;

    t180 = (((x953!=x954)-x955)-x956);

    if (t180 != 1664370868102045LL) { NG(); } else { ; }
	
}

void f181(void) {
    	int16_t x957 = INT16_MIN;
	uint16_t x959 = 53U;
	volatile uint32_t t181 = 343560U;

    t181 = (((x957!=x958)-x959)-x960);

    if (t181 != 4270941149U) { NG(); } else { ; }
	
}

void f182(void) {
    	int8_t x962 = INT8_MIN;
	int64_t x963 = -1LL;
	int64_t t182 = 2LL;

    t182 = (((x961!=x962)-x963)-x964);

    if (t182 != -253LL) { NG(); } else { ; }
	
}

void f183(void) {
    	int8_t x970 = INT8_MIN;
	int8_t x971 = INT8_MAX;
	uint64_t x972 = 18664407615LLU;
	uint64_t t183 = 248060630584244LLU;

    t183 = (((x969!=x970)-x971)-x972);

    if (t183 != 18446744055045143875LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int16_t x973 = -2;
	uint32_t x974 = 0U;
	static uint64_t x976 = UINT64_MAX;
	volatile uint64_t t184 = 1411109LLU;

    t184 = (((x973!=x974)-x975)-x976);

    if (t184 != 18446744073709409045LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	int8_t x977 = INT8_MIN;
	uint32_t x979 = 4042198U;
	static uint32_t x980 = 538U;
	static uint32_t t185 = 225977U;

    t185 = (((x977!=x978)-x979)-x980);

    if (t185 != 4290924561U) { NG(); } else { ; }
	
}

void f186(void) {
    	int16_t x981 = -15;
	int32_t x982 = -1;
	static int8_t x984 = 1;
	volatile int32_t t186 = -51648314;

    t186 = (((x981!=x982)-x983)-x984);

    if (t186 != -127) { NG(); } else { ; }
	
}

void f187(void) {
    	int8_t x985 = INT8_MIN;
	int16_t x986 = INT16_MIN;
	static volatile int16_t x987 = INT16_MIN;
	volatile int16_t x988 = 13674;

    t187 = (((x985!=x986)-x987)-x988);

    if (t187 != 19095) { NG(); } else { ; }
	
}

void f188(void) {
    	int16_t x993 = 1;
	int64_t x994 = INT64_MAX;
	int8_t x995 = INT8_MIN;
	static int16_t x996 = INT16_MAX;

    t188 = (((x993!=x994)-x995)-x996);

    if (t188 != -32638) { NG(); } else { ; }
	
}

void f189(void) {
    	int16_t x997 = INT16_MAX;
	static int16_t x998 = -1;
	int64_t x1000 = 2528748622LL;
	volatile int64_t t189 = 1439335373152LL;

    t189 = (((x997!=x998)-x999)-x1000);

    if (t189 != -2528715853LL) { NG(); } else { ; }
	
}

void f190(void) {
    	int32_t x1001 = INT32_MAX;
	volatile int32_t x1002 = -7;
	int8_t x1003 = 46;
	static uint64_t x1004 = UINT64_MAX;
	volatile uint64_t t190 = 57LLU;

    t190 = (((x1001!=x1002)-x1003)-x1004);

    if (t190 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f191(void) {
    	int8_t x1006 = 1;
	static int64_t x1007 = 3LL;
	static uint8_t x1008 = 24U;

    t191 = (((x1005!=x1006)-x1007)-x1008);

    if (t191 != -26LL) { NG(); } else { ; }
	
}

void f192(void) {
    	int8_t x1009 = INT8_MAX;
	uint32_t x1010 = 950403688U;
	uint64_t x1011 = 1391707LLU;
	uint64_t x1012 = 11502933125000453LLU;
	volatile uint64_t t192 = 7117341875771038045LLU;

    t192 = (((x1009!=x1010)-x1011)-x1012);

    if (t192 != 18435241140583159457LLU) { NG(); } else { ; }
	
}

void f193(void) {
    	int64_t x1013 = INT64_MIN;
	uint8_t x1014 = UINT8_MAX;
	uint32_t t193 = 290U;

    t193 = (((x1013!=x1014)-x1015)-x1016);

    if (t193 != 4293705893U) { NG(); } else { ; }
	
}

void f194(void) {
    	int32_t x1017 = INT32_MIN;
	static uint16_t x1018 = 712U;
	uint64_t x1019 = UINT64_MAX;
	int8_t x1020 = INT8_MIN;
	volatile uint64_t t194 = 4927507889955152LLU;

    t194 = (((x1017!=x1018)-x1019)-x1020);

    if (t194 != 130LLU) { NG(); } else { ; }
	
}

void f195(void) {
    	volatile int16_t x1021 = INT16_MIN;
	int16_t x1022 = 74;
	int16_t x1023 = INT16_MAX;
	static volatile uint8_t x1024 = 14U;
	volatile int32_t t195 = 4854675;

    t195 = (((x1021!=x1022)-x1023)-x1024);

    if (t195 != -32780) { NG(); } else { ; }
	
}

void f196(void) {
    	uint64_t x1026 = 220343LLU;

    t196 = (((x1025!=x1026)-x1027)-x1028);

    if (t196 != -32893) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1038 = INT8_MIN;
	uint16_t x1039 = UINT16_MAX;
	static volatile int32_t x1040 = INT32_MIN;

    t197 = (((x1037!=x1038)-x1039)-x1040);

    if (t197 != 2147418113) { NG(); } else { ; }
	
}

void f198(void) {
    	int8_t x1041 = INT8_MAX;
	static int8_t x1042 = 3;
	volatile int8_t x1043 = INT8_MIN;
	static volatile int8_t x1044 = INT8_MAX;
	static volatile int32_t t198 = 103632309;

    t198 = (((x1041!=x1042)-x1043)-x1044);

    if (t198 != 2) { NG(); } else { ; }
	
}

void f199(void) {
    	int16_t x1046 = -1;
	volatile int16_t x1047 = INT16_MAX;
	uint32_t t199 = 29807U;

    t199 = (((x1045!=x1046)-x1047)-x1048);

    if (t199 != 4294934531U) { NG(); } else { ; }
	
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

