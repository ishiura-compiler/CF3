
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

uint8_t x4 = 1U;
int32_t x16 = INT32_MIN;
uint16_t x20 = 4765U;
int32_t x26 = 70;
volatile int32_t x30 = -10732;
int32_t x32 = INT32_MAX;
uint32_t t6 = 5263390U;
int64_t x38 = -1LL;
uint16_t x41 = 6U;
static uint16_t x51 = 0U;
int64_t x65 = INT64_MAX;
int8_t x68 = 14;
volatile int64_t t10 = -196581785LL;
int16_t x70 = INT16_MIN;
uint32_t x76 = 292U;
int8_t x82 = -12;
int16_t x86 = -1;
volatile int32_t t14 = 52406880;
static volatile uint64_t t15 = 1151290188531274LLU;
uint64_t x93 = UINT64_MAX;
int8_t x105 = -5;
uint64_t x106 = 3LLU;
int8_t x107 = 35;
int64_t x108 = 552144222LL;
int16_t x122 = INT16_MIN;
int16_t x123 = -1;
int16_t x130 = INT16_MIN;
int16_t x131 = INT16_MIN;
int32_t x141 = INT32_MIN;
uint64_t x143 = 99300373475012LLU;
int16_t x144 = INT16_MAX;
uint64_t t23 = 31582LLU;
int32_t x145 = INT32_MIN;
static int64_t x156 = 2195166016168360967LL;
int16_t x160 = -6;
volatile int64_t t27 = -38275734655826LL;
volatile int8_t x163 = INT8_MAX;
int8_t x164 = 0;
uint16_t x176 = UINT16_MAX;
static int16_t x181 = -1;
int16_t x189 = -1;
int32_t x200 = INT32_MIN;
int64_t x201 = INT64_MIN;
volatile int8_t x222 = -1;
uint32_t t39 = 94493U;
volatile int8_t x225 = INT8_MAX;
int32_t t40 = 233126;
volatile uint64_t x236 = UINT64_MAX;
static volatile uint64_t t42 = 298943215735LLU;
uint8_t x246 = 0U;
volatile int16_t x247 = INT16_MIN;
int8_t x248 = 40;
volatile int8_t x258 = 11;
int64_t x259 = 135860917LL;
int64_t t46 = 7156241343LL;
uint16_t x262 = 116U;
volatile int16_t x266 = 7;
static int16_t x271 = INT16_MAX;
volatile int64_t x277 = -1LL;
volatile int64_t x279 = INT64_MIN;
volatile int64_t t52 = 23228736681806LL;
int8_t x290 = INT8_MIN;
static int8_t x291 = -1;
int16_t x314 = INT16_MIN;
volatile uint32_t x325 = 156527U;
static volatile uint64_t t61 = 687689415053858954LLU;
uint64_t x333 = 335603LLU;
int64_t x334 = -1LL;
volatile uint8_t x339 = 66U;
uint16_t x345 = UINT16_MAX;
volatile int64_t x361 = -11803970044099LL;
static volatile int32_t x374 = 52;
uint64_t t69 = 6LLU;
int16_t x377 = -1;
int64_t t71 = 7721901LL;
int32_t x390 = -1;
int16_t x393 = -1;
uint16_t x409 = 7U;
int64_t x424 = -1592791LL;
static int64_t t77 = -660996LL;
int32_t t78 = 920;
volatile uint64_t t79 = 17897134206507311LLU;
int8_t x441 = INT8_MIN;
int16_t x444 = -3;
int32_t t81 = -6744177;
int8_t x446 = INT8_MIN;
volatile int64_t x448 = -1LL;
int16_t x469 = -3894;
uint8_t x473 = 9U;
uint8_t x476 = 115U;
int64_t x489 = 1LL;
int64_t x494 = -1LL;
int16_t x499 = INT16_MIN;
uint8_t x500 = 0U;
volatile int16_t x506 = INT16_MIN;
int16_t x513 = INT16_MAX;
uint8_t x527 = 2U;
int8_t x534 = -1;
uint8_t x548 = 62U;
uint64_t t100 = 10755594365987LLU;
volatile int16_t x556 = INT16_MAX;
int32_t x561 = -467;
volatile int16_t x562 = INT16_MAX;
int32_t x573 = -1;
int32_t x574 = INT32_MAX;
volatile uint8_t x575 = UINT8_MAX;
int8_t x578 = -1;
static volatile int64_t x582 = -189LL;
static int64_t t106 = -8891LL;
int64_t x601 = 73679030557139LL;
int64_t t109 = -148924693LL;
int64_t x610 = INT64_MAX;
volatile int8_t x611 = INT8_MAX;
static int8_t x612 = INT8_MAX;
int8_t x619 = -5;
int64_t t112 = -72867167547731294LL;
volatile uint16_t x629 = 21986U;
static uint16_t x631 = UINT16_MAX;
uint64_t x632 = 109839855702LLU;
int64_t x634 = -1LL;
volatile int64_t x636 = 240099742107830LL;
int16_t x637 = -118;
volatile int8_t x647 = INT8_MIN;
int8_t x657 = -1;
volatile int32_t x690 = INT32_MAX;
int16_t x701 = 1320;
int16_t x702 = -1;
static uint8_t x704 = UINT8_MAX;
int16_t x705 = -1851;
int8_t x707 = 1;
uint64_t x708 = 90LLU;
static uint64_t t132 = 782749806LLU;
static uint32_t x721 = 1276U;
int8_t x726 = INT8_MAX;
volatile int64_t x727 = INT64_MIN;
static int64_t x728 = INT64_MIN;
int64_t x733 = -1LL;
static int64_t x735 = INT64_MIN;
int8_t x742 = INT8_MIN;
int16_t x754 = INT16_MIN;
uint32_t x763 = UINT32_MAX;
volatile uint64_t t144 = 218202520065LLU;
int64_t x766 = -72230244930LL;
uint32_t x775 = UINT32_MAX;
int64_t x785 = INT64_MIN;
int64_t t147 = -1616817734974344346LL;
static int64_t x791 = -1LL;
uint64_t x792 = 369598183526LLU;
static int32_t x799 = 324677259;
int32_t x812 = 2388;
int64_t t153 = 401503290LL;
int64_t x829 = 1343LL;
static int64_t t155 = 11012451851140981LL;
uint64_t x837 = UINT64_MAX;
uint16_t x845 = UINT16_MAX;
static uint8_t x848 = UINT8_MAX;
uint64_t x860 = UINT64_MAX;
int16_t x863 = INT16_MIN;
static volatile uint64_t t164 = 262653649592304LLU;
int64_t x870 = INT64_MIN;
int8_t x877 = INT8_MIN;
uint16_t x878 = UINT16_MAX;
int32_t x886 = INT32_MAX;
int8_t x888 = -29;
int16_t x924 = -3337;
static volatile int8_t x926 = INT8_MIN;
volatile int64_t x928 = INT64_MIN;
volatile int8_t x932 = INT8_MIN;
int8_t x938 = INT8_MIN;
volatile uint8_t x945 = 1U;
static int64_t t178 = 2013118195063679688LL;
uint64_t x983 = UINT64_MAX;
uint64_t x984 = UINT64_MAX;
int16_t x993 = INT16_MIN;
static uint8_t x994 = 120U;
volatile uint8_t x995 = 22U;
volatile uint64_t t185 = 3057291679436052182LLU;
uint8_t x1004 = 78U;
volatile int64_t x1012 = -134846337525526LL;
int64_t x1013 = -16424654LL;
int32_t x1014 = INT32_MIN;
int64_t x1019 = 226149310196LL;
static int16_t x1020 = INT16_MIN;
int64_t t190 = -21101065067084331LL;
static uint32_t x1021 = UINT32_MAX;
int32_t x1022 = -1;
volatile int8_t x1023 = 2;
volatile uint32_t t191 = 290237073U;
volatile uint16_t x1040 = 3875U;
uint8_t x1041 = 0U;
int32_t t197 = -183224;
static int32_t x1059 = -1;


void f0(void) {
    	static uint64_t x1 = 59716642LLU;
	static uint32_t x2 = 2218U;
	volatile int16_t x3 = INT16_MIN;
	uint64_t t0 = 3663536978LLU;

    t0 = ((x1|x2)*(x3^x4));

    if (t0 != 18446742116902780074LLU) { NG(); } else { ; }
	
}

void f1(void) {
    	uint16_t x9 = UINT16_MAX;
	int8_t x10 = INT8_MAX;
	uint8_t x11 = UINT8_MAX;
	uint32_t x12 = 7901806U;
	uint32_t t1 = 372U;

    t1 = ((x9|x10)*(x11^x12));

    if (t1 != 2451074415U) { NG(); } else { ; }
	
}

void f2(void) {
    	int32_t x13 = -22476397;
	uint64_t x14 = 95991046375678595LLU;
	volatile int64_t x15 = -1LL;
	volatile uint64_t t2 = 56LLU;

    t2 = ((x13|x14)*(x15^x16));

    if (t2 != 18410598494399157357LLU) { NG(); } else { ; }
	
}

void f3(void) {
    	volatile uint32_t x17 = 179246U;
	int16_t x18 = -1;
	static int32_t x19 = INT32_MAX;
	volatile uint32_t t3 = 2794442U;

    t3 = ((x17|x18)*(x19^x20));

    if (t3 != 2147488414U) { NG(); } else { ; }
	
}

void f4(void) {
    	volatile uint16_t x25 = 662U;
	int16_t x27 = INT16_MIN;
	uint16_t x28 = 1770U;
	volatile int32_t t4 = -429;

    t4 = ((x25|x26)*(x27^x28));

    if (t4 != -22504548) { NG(); } else { ; }
	
}

void f5(void) {
    	volatile int64_t x29 = INT64_MAX;
	volatile int64_t x31 = INT64_MIN;
	int64_t t5 = 6828590005LL;

    t5 = ((x29|x30)*(x31^x32));

    if (t5 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f6(void) {
    	int32_t x33 = 1;
	uint32_t x34 = 104155U;
	int16_t x35 = 0;
	volatile int8_t x36 = -1;

    t6 = ((x33|x34)*(x35^x36));

    if (t6 != 4294863141U) { NG(); } else { ; }
	
}

void f7(void) {
    	int32_t x37 = -1;
	int32_t x39 = INT32_MIN;
	uint16_t x40 = 1006U;
	int64_t t7 = 4649274723591322LL;

    t7 = ((x37|x38)*(x39^x40));

    if (t7 != 2147482642LL) { NG(); } else { ; }
	
}

void f8(void) {
    	volatile int64_t x42 = INT64_MIN;
	uint8_t x43 = 6U;
	uint64_t x44 = 491459101735770516LLU;
	uint64_t t8 = 1409LLU;

    t8 = ((x41|x42)*(x43^x44));

    if (t8 != 2948754610414623084LLU) { NG(); } else { ; }
	
}

void f9(void) {
    	int64_t x49 = 1185657838317293LL;
	int64_t x50 = -874766215LL;
	volatile int8_t x52 = INT8_MIN;
	int64_t t9 = -32295LL;

    t9 = ((x49|x50)*(x51^x52));

    if (t9 != 8865218944LL) { NG(); } else { ; }
	
}

void f10(void) {
    	int64_t x66 = -1LL;
	uint8_t x67 = 55U;

    t10 = ((x65|x66)*(x67^x68));

    if (t10 != -57LL) { NG(); } else { ; }
	
}

void f11(void) {
    	int32_t x69 = 469147266;
	int8_t x71 = INT8_MIN;
	static int32_t x72 = -30982;
	volatile int32_t t11 = 8697;

    t11 = ((x69|x70)*(x71^x72));

    if (t11 != -776143884) { NG(); } else { ; }
	
}

void f12(void) {
    	static uint32_t x73 = UINT32_MAX;
	int8_t x74 = -2;
	volatile int16_t x75 = INT16_MIN;
	volatile uint32_t t12 = 442458468U;

    t12 = ((x73|x74)*(x75^x76));

    if (t12 != 32476U) { NG(); } else { ; }
	
}

void f13(void) {
    	int64_t x81 = -118003359LL;
	volatile uint8_t x83 = UINT8_MAX;
	int8_t x84 = INT8_MIN;
	int64_t t13 = -3684610481452516749LL;

    t13 = ((x81|x82)*(x83^x84));

    if (t13 != 1419LL) { NG(); } else { ; }
	
}

void f14(void) {
    	uint16_t x85 = UINT16_MAX;
	int32_t x87 = 851479;
	int8_t x88 = INT8_MIN;

    t14 = ((x85|x86)*(x87^x88));

    if (t14 != 851561) { NG(); } else { ; }
	
}

void f15(void) {
    	static uint8_t x89 = 8U;
	int8_t x90 = INT8_MAX;
	static uint64_t x91 = 10190297865LLU;
	int8_t x92 = INT8_MIN;

    t15 = ((x89|x90)*(x91^x92));

    if (t15 != 18446742779541708791LLU) { NG(); } else { ; }
	
}

void f16(void) {
    	int64_t x94 = -461146919215LL;
	static uint32_t x95 = 60613395U;
	uint8_t x96 = 7U;
	volatile uint64_t t16 = 140673533321006LLU;

    t16 = ((x93|x94)*(x95^x96));

    if (t16 != 18446744073648938220LLU) { NG(); } else { ; }
	
}

void f17(void) {
    	uint8_t x101 = UINT8_MAX;
	static int8_t x102 = INT8_MAX;
	int64_t x103 = INT64_MIN;
	volatile uint64_t x104 = 992LLU;
	uint64_t t17 = 576111480LLU;

    t17 = ((x101|x102)*(x103^x104));

    if (t17 != 9223372036855028768LLU) { NG(); } else { ; }
	
}

void f18(void) {
    	volatile uint64_t t18 = 8166357LLU;

    t18 = ((x105|x106)*(x107^x108));

    if (t18 != 18446744070948830351LLU) { NG(); } else { ; }
	
}

void f19(void) {
    	volatile uint16_t x113 = 726U;
	static volatile int64_t x114 = INT64_MIN;
	int64_t x115 = 129336596298LL;
	uint64_t x116 = 337941773612779473LLU;
	volatile uint64_t t19 = 178326074783467LLU;

    t19 = ((x113|x114)*(x115^x116));

    if (t19 != 14761520424562366354LLU) { NG(); } else { ; }
	
}

void f20(void) {
    	uint32_t x117 = 1U;
	uint64_t x118 = 1765163438923985LLU;
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = -1;
	uint64_t t20 = 8047702906578LLU;

    t20 = ((x117|x118)*(x119^x120));

    if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
    	static int8_t x121 = -1;
	int16_t x124 = INT16_MAX;
	volatile int32_t t21 = -653891875;

    t21 = ((x121|x122)*(x123^x124));

    if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
    	int16_t x129 = INT16_MIN;
	volatile uint8_t x132 = 4U;
	static volatile int32_t t22 = 136;

    t22 = ((x129|x130)*(x131^x132));

    if (t22 != 1073610752) { NG(); } else { ; }
	
}

void f23(void) {
    	uint32_t x142 = UINT32_MAX;

    t23 = ((x141|x142)*(x143^x144));

    if (t23 != 3133510191702814405LLU) { NG(); } else { ; }
	
}

void f24(void) {
    	static int16_t x146 = -2;
	static uint8_t x147 = 82U;
	int32_t x148 = 1;
	int32_t t24 = -1;

    t24 = ((x145|x146)*(x147^x148));

    if (t24 != -166) { NG(); } else { ; }
	
}

void f25(void) {
    	volatile uint64_t x149 = 259118395499963LLU;
	volatile int32_t x150 = -1;
	static uint32_t x151 = 157U;
	uint32_t x152 = 448891U;
	volatile uint64_t t25 = 3704690867814LLU;

    t25 = ((x149|x150)*(x151^x152));

    if (t25 != 18446744073709102618LLU) { NG(); } else { ; }
	
}

void f26(void) {
    	volatile int16_t x153 = INT16_MIN;
	volatile uint8_t x154 = UINT8_MAX;
	uint64_t x155 = UINT64_MAX;
	uint64_t t26 = 124334023481154696LLU;

    t26 = ((x153|x154)*(x155^x156));

    if (t26 != 979862499664950280LLU) { NG(); } else { ; }
	
}

void f27(void) {
    	volatile int8_t x157 = INT8_MIN;
	uint8_t x158 = 17U;
	int64_t x159 = -1LL;

    t27 = ((x157|x158)*(x159^x160));

    if (t27 != -555LL) { NG(); } else { ; }
	
}

void f28(void) {
    	int32_t x161 = 3;
	volatile int16_t x162 = INT16_MIN;
	volatile int32_t t28 = 1004;

    t28 = ((x161|x162)*(x163^x164));

    if (t28 != -4161155) { NG(); } else { ; }
	
}

void f29(void) {
    	int32_t x169 = INT32_MIN;
	int32_t x170 = -1;
	volatile uint64_t x171 = UINT64_MAX;
	int8_t x172 = -3;
	volatile uint64_t t29 = 1520999944864LLU;

    t29 = ((x169|x170)*(x171^x172));

    if (t29 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f30(void) {
    	uint32_t x173 = UINT32_MAX;
	int16_t x174 = -799;
	uint64_t x175 = UINT64_MAX;
	static volatile uint64_t t30 = 4864790040LLU;

    t30 = ((x173|x174)*(x175^x176));

    if (t30 != 18446462598732906496LLU) { NG(); } else { ; }
	
}

void f31(void) {
    	volatile int8_t x182 = INT8_MAX;
	uint64_t x183 = 3653LLU;
	uint16_t x184 = 14663U;
	volatile uint64_t t31 = 1326352LLU;

    t31 = ((x181|x182)*(x183^x184));

    if (t31 != 18446744073709537534LLU) { NG(); } else { ; }
	
}

void f32(void) {
    	uint32_t x190 = 7585U;
	int16_t x191 = -15092;
	int16_t x192 = INT16_MAX;
	volatile uint32_t t32 = 74660546U;

    t32 = ((x189|x190)*(x191^x192));

    if (t32 != 17677U) { NG(); } else { ; }
	
}

void f33(void) {
    	static uint32_t x193 = 15354610U;
	int8_t x194 = -1;
	int16_t x195 = INT16_MIN;
	volatile int16_t x196 = INT16_MIN;
	volatile uint32_t t33 = 2112734905U;

    t33 = ((x193|x194)*(x195^x196));

    if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
    	int16_t x197 = INT16_MIN;
	volatile uint64_t x198 = UINT64_MAX;
	int64_t x199 = -1LL;
	volatile uint64_t t34 = 77928LLU;

    t34 = ((x197|x198)*(x199^x200));

    if (t34 != 18446744071562067969LLU) { NG(); } else { ; }
	
}

void f35(void) {
    	volatile int32_t x202 = -1;
	static uint16_t x203 = UINT16_MAX;
	int8_t x204 = 2;
	int64_t t35 = -344169LL;

    t35 = ((x201|x202)*(x203^x204));

    if (t35 != -65533LL) { NG(); } else { ; }
	
}

void f36(void) {
    	static volatile int8_t x205 = INT8_MAX;
	int8_t x206 = -1;
	int32_t x207 = -1;
	volatile uint8_t x208 = UINT8_MAX;
	volatile int32_t t36 = -1419;

    t36 = ((x205|x206)*(x207^x208));

    if (t36 != 256) { NG(); } else { ; }
	
}

void f37(void) {
    	uint16_t x213 = 2045U;
	volatile uint8_t x214 = UINT8_MAX;
	int16_t x215 = -2061;
	int8_t x216 = -1;
	int32_t t37 = 498272;

    t37 = ((x213|x214)*(x215^x216));

    if (t37 != 4216820) { NG(); } else { ; }
	
}

void f38(void) {
    	uint8_t x217 = 3U;
	static int32_t x218 = INT32_MIN;
	uint32_t x219 = 64097323U;
	uint32_t x220 = UINT32_MAX;
	volatile uint32_t t38 = 5865U;

    t38 = ((x217|x218)*(x219^x220));

    if (t38 != 4102675324U) { NG(); } else { ; }
	
}

void f39(void) {
    	uint8_t x221 = 15U;
	int32_t x223 = -179;
	static volatile uint32_t x224 = 33662U;

    t39 = ((x221|x222)*(x223^x224));

    if (t39 != 33741U) { NG(); } else { ; }
	
}

void f40(void) {
    	uint16_t x226 = UINT16_MAX;
	int32_t x227 = -1;
	volatile int16_t x228 = INT16_MIN;

    t40 = ((x225|x226)*(x227^x228));

    if (t40 != 2147385345) { NG(); } else { ; }
	
}

void f41(void) {
    	static uint32_t x229 = UINT32_MAX;
	int64_t x230 = 2843589133064LL;
	uint16_t x231 = 1U;
	volatile uint16_t x232 = 33U;
	volatile int64_t t41 = -3751959LL;

    t41 = ((x229|x230)*(x231^x232));

    if (t41 != 91122026151904LL) { NG(); } else { ; }
	
}

void f42(void) {
    	volatile uint64_t x233 = UINT64_MAX;
	volatile int16_t x234 = INT16_MIN;
	uint16_t x235 = 0U;

    t42 = ((x233|x234)*(x235^x236));

    if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
    	uint64_t x241 = UINT64_MAX;
	volatile int64_t x242 = -12863760620116LL;
	int16_t x243 = -1;
	uint64_t x244 = 102584399736017LLU;
	uint64_t t43 = 37763798216932619LLU;

    t43 = ((x241|x242)*(x243^x244));

    if (t43 != 102584399736018LLU) { NG(); } else { ; }
	
}

void f44(void) {
    	int16_t x245 = INT16_MAX;
	int32_t t44 = -305524374;

    t44 = ((x245|x246)*(x247^x248));

    if (t44 != -1072398376) { NG(); } else { ; }
	
}

void f45(void) {
    	static int16_t x249 = INT16_MIN;
	int16_t x250 = 0;
	static volatile int32_t x251 = -391;
	int8_t x252 = -1;
	int32_t t45 = 893;

    t45 = ((x249|x250)*(x251^x252));

    if (t45 != -12779520) { NG(); } else { ; }
	
}

void f46(void) {
    	uint8_t x257 = 58U;
	int16_t x260 = -1;

    t46 = ((x257|x258)*(x259^x260));

    if (t46 != -8015794162LL) { NG(); } else { ; }
	
}

void f47(void) {
    	int32_t x261 = -1;
	int64_t x263 = INT64_MAX;
	static volatile uint16_t x264 = 3U;
	volatile int64_t t47 = 1300557194093652LL;

    t47 = ((x261|x262)*(x263^x264));

    if (t47 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f48(void) {
    	uint16_t x265 = 35U;
	int16_t x267 = 0;
	static uint64_t x268 = 13272456353LLU;
	volatile uint64_t t48 = 5907672463078LLU;

    t48 = ((x265|x266)*(x267^x268));

    if (t48 != 517625797767LLU) { NG(); } else { ; }
	
}

void f49(void) {
    	static int8_t x269 = INT8_MIN;
	volatile int64_t x270 = -3156256205896LL;
	int16_t x272 = -1;
	volatile int64_t t49 = -49564LL;

    t49 = ((x269|x270)*(x271^x272));

    if (t49 != 2359296LL) { NG(); } else { ; }
	
}

void f50(void) {
    	int16_t x273 = INT16_MIN;
	uint32_t x274 = 9U;
	uint8_t x275 = 12U;
	static int32_t x276 = -1;
	uint32_t t50 = 122979U;

    t50 = ((x273|x274)*(x275^x276));

    if (t50 != 425867U) { NG(); } else { ; }
	
}

void f51(void) {
    	int64_t x278 = -1LL;
	int16_t x280 = -1;
	volatile int64_t t51 = 158978635330LL;

    t51 = ((x277|x278)*(x279^x280));

    if (t51 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f52(void) {
    	volatile int16_t x281 = -1;
	int64_t x282 = -30LL;
	int16_t x283 = -1;
	uint16_t x284 = 32U;

    t52 = ((x281|x282)*(x283^x284));

    if (t52 != 33LL) { NG(); } else { ; }
	
}

void f53(void) {
    	int64_t x285 = -32900LL;
	static uint32_t x286 = 11U;
	volatile int16_t x287 = INT16_MAX;
	volatile int8_t x288 = 11;
	static int64_t t53 = 17413508739410LL;

    t53 = ((x285|x286)*(x287^x288));

    if (t53 != -1077574132LL) { NG(); } else { ; }
	
}

void f54(void) {
    	int64_t x289 = -1LL;
	int64_t x292 = 582LL;
	static int64_t t54 = -1726135LL;

    t54 = ((x289|x290)*(x291^x292));

    if (t54 != 583LL) { NG(); } else { ; }
	
}

void f55(void) {
    	static uint8_t x293 = 55U;
	int64_t x294 = -1LL;
	uint32_t x295 = 12669860U;
	int8_t x296 = -14;
	int64_t t55 = -1108890590388387511LL;

    t55 = ((x293|x294)*(x295^x296));

    if (t55 != -4282297430LL) { NG(); } else { ; }
	
}

void f56(void) {
    	int8_t x301 = -61;
	uint64_t x302 = 2853957012580417380LLU;
	uint64_t x303 = 33LLU;
	static int64_t x304 = -1LL;
	uint64_t t56 = 2369LLU;

    t56 = ((x301|x302)*(x303^x304));

    if (t56 != 850LLU) { NG(); } else { ; }
	
}

void f57(void) {
    	static int64_t x313 = 0LL;
	int32_t x315 = INT32_MAX;
	static int16_t x316 = INT16_MAX;
	volatile int64_t t57 = 17929468283942LL;

    t57 = ((x313|x314)*(x315^x316));

    if (t57 != -70367670435840LL) { NG(); } else { ; }
	
}

void f58(void) {
    	volatile int16_t x317 = INT16_MIN;
	uint8_t x318 = 2U;
	int8_t x319 = -1;
	int64_t x320 = 1445LL;
	volatile int64_t t58 = 4LL;

    t58 = ((x317|x318)*(x319^x320));

    if (t58 != 47379636LL) { NG(); } else { ; }
	
}

void f59(void) {
    	uint64_t x321 = UINT64_MAX;
	int8_t x322 = -1;
	static int8_t x323 = -1;
	static int32_t x324 = -1;
	static volatile uint64_t t59 = 20036428259LLU;

    t59 = ((x321|x322)*(x323^x324));

    if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
    	uint8_t x326 = UINT8_MAX;
	int32_t x327 = 624553;
	int32_t x328 = INT32_MIN;
	volatile uint32_t t60 = 3U;

    t60 = ((x325|x326)*(x327^x328));

    if (t60 != 1212578903U) { NG(); } else { ; }
	
}

void f61(void) {
    	uint16_t x329 = 0U;
	uint32_t x330 = 221364U;
	int32_t x331 = INT32_MIN;
	uint64_t x332 = 27532922371LLU;

    t61 = ((x329|x330)*(x331^x332));

    if (t61 != 18440954482280888860LLU) { NG(); } else { ; }
	
}

void f62(void) {
    	int64_t x335 = 4230232LL;
	int64_t x336 = INT64_MAX;
	uint64_t t62 = 51392619730LLU;

    t62 = ((x333|x334)*(x335^x336));

    if (t62 != 9223372036859006041LLU) { NG(); } else { ; }
	
}

void f63(void) {
    	static int8_t x337 = INT8_MIN;
	int32_t x338 = 97858;
	static int8_t x340 = INT8_MIN;
	int32_t t63 = -2380;

    t63 = ((x337|x338)*(x339^x340));

    if (t63 != 3844) { NG(); } else { ; }
	
}

void f64(void) {
    	int64_t x341 = INT64_MIN;
	uint64_t x342 = 24591776LLU;
	uint32_t x343 = 1953U;
	uint16_t x344 = 1112U;
	static volatile uint64_t t64 = 4LLU;

    t64 = ((x341|x342)*(x343^x344));

    if (t64 != 9223372061864612000LLU) { NG(); } else { ; }
	
}

void f65(void) {
    	static int32_t x346 = INT32_MIN;
	uint32_t x347 = 403779008U;
	int32_t x348 = 186616;
	uint32_t t65 = 30609U;

    t65 = ((x345|x346)*(x347^x348));

    if (t65 != 3710126792U) { NG(); } else { ; }
	
}

void f66(void) {
    	uint8_t x349 = 0U;
	int32_t x350 = 3232721;
	static int16_t x351 = 0;
	int16_t x352 = -1;
	volatile int32_t t66 = -195622;

    t66 = ((x349|x350)*(x351^x352));

    if (t66 != -3232721) { NG(); } else { ; }
	
}

void f67(void) {
    	static int32_t x362 = INT32_MIN;
	uint8_t x363 = 13U;
	static int32_t x364 = 448587055;
	int64_t t67 = -26217635958880LL;

    t67 = ((x361|x362)*(x363^x364));

    if (t67 != -627983590288034022LL) { NG(); } else { ; }
	
}

void f68(void) {
    	int8_t x369 = 0;
	static volatile int16_t x370 = -1;
	volatile int8_t x371 = -1;
	int16_t x372 = -1;
	int32_t t68 = -2;

    t68 = ((x369|x370)*(x371^x372));

    if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
    	int64_t x373 = -1LL;
	volatile uint64_t x375 = 877418928443801LLU;
	int16_t x376 = INT16_MIN;

    t69 = ((x373|x374)*(x375^x376));

    if (t69 != 877418928467559LLU) { NG(); } else { ; }
	
}

void f70(void) {
    	static volatile int64_t x378 = INT64_MIN;
	int32_t x379 = INT32_MAX;
	volatile int8_t x380 = INT8_MIN;
	static int64_t t70 = 30165653625LL;

    t70 = ((x377|x378)*(x379^x380));

    if (t70 != 2147483521LL) { NG(); } else { ; }
	
}

void f71(void) {
    	volatile int64_t x381 = INT64_MIN;
	volatile int8_t x382 = -1;
	int32_t x383 = INT32_MIN;
	int64_t x384 = 1035607155441LL;

    t71 = ((x381|x382)*(x383^x384));

    if (t71 != 1036714564879LL) { NG(); } else { ; }
	
}

void f72(void) {
    	uint16_t x389 = 1U;
	volatile int16_t x391 = INT16_MAX;
	int16_t x392 = INT16_MAX;
	volatile int32_t t72 = 1151672;

    t72 = ((x389|x390)*(x391^x392));

    if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
    	int64_t x394 = -872994LL;
	int32_t x395 = INT32_MIN;
	volatile uint8_t x396 = 3U;
	int64_t t73 = -317625762114842LL;

    t73 = ((x393|x394)*(x395^x396));

    if (t73 != 2147483645LL) { NG(); } else { ; }
	
}

void f74(void) {
    	uint64_t x401 = 15829219287424LLU;
	uint16_t x402 = 99U;
	int32_t x403 = INT32_MAX;
	uint64_t x404 = 57397930293104LLU;
	volatile uint64_t t74 = 44742434290LLU;

    t74 = ((x401|x402)*(x403^x404));

    if (t74 != 2452185465947096525LLU) { NG(); } else { ; }
	
}

void f75(void) {
    	static uint64_t x410 = 15627859LLU;
	volatile uint32_t x411 = UINT32_MAX;
	int32_t x412 = INT32_MAX;
	volatile uint64_t t75 = 0LLU;

    t75 = ((x409|x410)*(x411^x412));

    if (t75 != 33560580245684224LLU) { NG(); } else { ; }
	
}

void f76(void) {
    	static int64_t x417 = INT64_MIN;
	int32_t x418 = INT32_MIN;
	int8_t x419 = INT8_MAX;
	uint64_t x420 = UINT64_MAX;
	static volatile uint64_t t76 = 303918789732200471LLU;

    t76 = ((x417|x418)*(x419^x420));

    if (t76 != 274877906944LLU) { NG(); } else { ; }
	
}

void f77(void) {
    	int32_t x421 = -3;
	int8_t x422 = -1;
	int16_t x423 = INT16_MIN;

    t77 = ((x421|x422)*(x423^x424));

    if (t77 != -1585705LL) { NG(); } else { ; }
	
}

void f78(void) {
    	int16_t x429 = -1;
	volatile int16_t x430 = INT16_MIN;
	static uint8_t x431 = UINT8_MAX;
	int32_t x432 = INT32_MIN;

    t78 = ((x429|x430)*(x431^x432));

    if (t78 != 2147483393) { NG(); } else { ; }
	
}

void f79(void) {
    	volatile uint64_t x433 = 66266392855014635LLU;
	uint32_t x434 = UINT32_MAX;
	volatile uint16_t x435 = 2U;
	int16_t x436 = 0;

    t79 = ((x433|x434)*(x435^x436));

    if (t79 != 132532786559975422LLU) { NG(); } else { ; }
	
}

void f80(void) {
    	uint8_t x437 = 17U;
	volatile uint16_t x438 = 3U;
	int64_t x439 = -3759391065LL;
	uint64_t x440 = 364847838876810LLU;
	volatile uint64_t t80 = 366LLU;

    t80 = ((x437|x438)*(x439^x440));

    if (t80 != 18439812015791989079LLU) { NG(); } else { ; }
	
}

void f81(void) {
    	int32_t x442 = -63;
	int32_t x443 = -1;

    t81 = ((x441|x442)*(x443^x444));

    if (t81 != -126) { NG(); } else { ; }
	
}

void f82(void) {
    	int32_t x445 = -441;
	uint64_t x447 = 123144LLU;
	volatile uint64_t t82 = 1265508LLU;

    t82 = ((x445|x446)*(x447^x448));

    if (t82 != 7019265LLU) { NG(); } else { ; }
	
}

void f83(void) {
    	volatile int32_t x457 = -1;
	int32_t x458 = INT32_MAX;
	uint8_t x459 = 3U;
	static int32_t x460 = -1;
	int32_t t83 = 27089;

    t83 = ((x457|x458)*(x459^x460));

    if (t83 != 4) { NG(); } else { ; }
	
}

void f84(void) {
    	uint32_t x465 = UINT32_MAX;
	static int32_t x466 = INT32_MAX;
	int16_t x467 = INT16_MIN;
	int64_t x468 = 32LL;
	static int64_t t84 = 14008929692350LL;

    t84 = ((x465|x466)*(x467^x468));

    if (t84 != -140600049369120LL) { NG(); } else { ; }
	
}

void f85(void) {
    	static int32_t x470 = -1;
	int16_t x471 = INT16_MIN;
	uint8_t x472 = 4U;
	static int32_t t85 = 31;

    t85 = ((x469|x470)*(x471^x472));

    if (t85 != 32764) { NG(); } else { ; }
	
}

void f86(void) {
    	uint64_t x474 = 3319646LLU;
	int32_t x475 = INT32_MIN;
	uint64_t t86 = 3537048893848470610LLU;

    t86 = ((x473|x474)*(x475^x476));

    if (t86 != 18439615186441678765LLU) { NG(); } else { ; }
	
}

void f87(void) {
    	volatile int32_t x477 = INT32_MAX;
	uint16_t x478 = 6U;
	uint32_t x479 = UINT32_MAX;
	int64_t x480 = -1LL;
	volatile int64_t t87 = -195181762084937383LL;

    t87 = ((x477|x478)*(x479^x480));

    if (t87 != -9223372032559808512LL) { NG(); } else { ; }
	
}

void f88(void) {
    	int64_t x481 = -16658108290823LL;
	uint64_t x482 = 1521463688LLU;
	int16_t x483 = -1;
	uint64_t x484 = 262LLU;
	volatile uint64_t t88 = 240581LLU;

    t88 = ((x481|x482)*(x483^x484));

    if (t88 != 4381079712969009LLU) { NG(); } else { ; }
	
}

void f89(void) {
    	volatile int8_t x490 = INT8_MAX;
	int64_t x491 = -68610512LL;
	volatile int16_t x492 = -152;
	volatile int64_t t89 = -28217609LL;

    t89 = ((x489|x490)*(x491^x492));

    if (t89 != 8713519784LL) { NG(); } else { ; }
	
}

void f90(void) {
    	int8_t x493 = 1;
	int16_t x495 = INT16_MIN;
	uint8_t x496 = 5U;
	int64_t t90 = 185LL;

    t90 = ((x493|x494)*(x495^x496));

    if (t90 != 32763LL) { NG(); } else { ; }
	
}

void f91(void) {
    	int64_t x497 = -1724402LL;
	uint8_t x498 = UINT8_MAX;
	static volatile int64_t t91 = -10313113161201463LL;

    t91 = ((x497|x498)*(x499^x500));

    if (t91 != 56497307648LL) { NG(); } else { ; }
	
}

void f92(void) {
    	uint64_t x505 = 146712230514842058LLU;
	volatile uint8_t x507 = UINT8_MAX;
	int64_t x508 = -1437928775LL;
	static volatile uint64_t t92 = 8929051816160780LLU;

    t92 = ((x505|x506)*(x507^x508));

    if (t92 != 14065820401980LLU) { NG(); } else { ; }
	
}

void f93(void) {
    	uint64_t x509 = 944803873889LLU;
	static int16_t x510 = INT16_MAX;
	int64_t x511 = INT64_MAX;
	volatile int32_t x512 = INT32_MAX;
	volatile uint64_t t93 = 4679847732706670263LLU;

    t93 = ((x509|x510)*(x511^x512));

    if (t93 != 9414282441956261888LLU) { NG(); } else { ; }
	
}

void f94(void) {
    	int16_t x514 = 2695;
	int64_t x515 = INT64_MIN;
	static int64_t x516 = INT64_MIN;
	int64_t t94 = -2014489753LL;

    t94 = ((x513|x514)*(x515^x516));

    if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
    	uint16_t x517 = UINT16_MAX;
	int16_t x518 = -1944;
	int64_t x519 = INT64_MAX;
	int64_t x520 = INT64_MIN;
	volatile int64_t t95 = -24790732863015LL;

    t95 = ((x517|x518)*(x519^x520));

    if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
    	volatile uint32_t x525 = UINT32_MAX;
	uint64_t x526 = 31LLU;
	volatile int64_t x528 = -1LL;
	uint64_t t96 = 12948461825832114LLU;

    t96 = ((x525|x526)*(x527^x528));

    if (t96 != 18446744060824649731LLU) { NG(); } else { ; }
	
}

void f97(void) {
    	volatile uint64_t x533 = 435348222156896LLU;
	volatile uint64_t x535 = 2LLU;
	uint8_t x536 = 0U;
	static volatile uint64_t t97 = 1LLU;

    t97 = ((x533|x534)*(x535^x536));

    if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
    	static volatile int16_t x541 = INT16_MIN;
	uint16_t x542 = 57U;
	static uint32_t x543 = UINT32_MAX;
	int32_t x544 = INT32_MIN;
	volatile uint32_t t98 = 178U;

    t98 = ((x541|x542)*(x543^x544));

    if (t98 != 2147516359U) { NG(); } else { ; }
	
}

void f99(void) {
    	int16_t x545 = INT16_MIN;
	static uint8_t x546 = UINT8_MAX;
	static int16_t x547 = 21;
	static volatile int32_t t99 = 467484;

    t99 = ((x545|x546)*(x547^x548));

    if (t99 != -1398059) { NG(); } else { ; }
	
}

void f100(void) {
    	int32_t x549 = INT32_MAX;
	static int16_t x550 = INT16_MIN;
	int32_t x551 = -1;
	uint64_t x552 = 48422361978997209LLU;

    t100 = ((x549|x550)*(x551^x552));

    if (t100 != 48422361978997210LLU) { NG(); } else { ; }
	
}

void f101(void) {
    	volatile int64_t x553 = -1LL;
	volatile int64_t x554 = INT64_MIN;
	int32_t x555 = INT32_MIN;
	volatile int64_t t101 = 19900LL;

    t101 = ((x553|x554)*(x555^x556));

    if (t101 != 2147450881LL) { NG(); } else { ; }
	
}

void f102(void) {
    	static int16_t x563 = -1;
	uint8_t x564 = 0U;
	static int32_t t102 = -246468;

    t102 = ((x561|x562)*(x563^x564));

    if (t102 != 1) { NG(); } else { ; }
	
}

void f103(void) {
    	static uint16_t x569 = UINT16_MAX;
	volatile int16_t x570 = -1;
	int16_t x571 = -1;
	int8_t x572 = INT8_MIN;
	volatile int32_t t103 = -12;

    t103 = ((x569|x570)*(x571^x572));

    if (t103 != -127) { NG(); } else { ; }
	
}

void f104(void) {
    	static int64_t x576 = -1LL;
	volatile int64_t t104 = 6LL;

    t104 = ((x573|x574)*(x575^x576));

    if (t104 != 256LL) { NG(); } else { ; }
	
}

void f105(void) {
    	static int8_t x577 = -1;
	uint32_t x579 = 16200U;
	uint64_t x580 = 104812804713LLU;
	volatile uint64_t t105 = 4533440032281LLU;

    t105 = ((x577|x578)*(x579^x580));

    if (t105 != 18446743968896760543LLU) { NG(); } else { ; }
	
}

void f106(void) {
    	volatile int8_t x581 = 27;
	int16_t x583 = INT16_MIN;
	uint16_t x584 = 113U;

    t106 = ((x581|x582)*(x583^x584));

    if (t106 != 5388075LL) { NG(); } else { ; }
	
}

void f107(void) {
    	int64_t x585 = INT64_MAX;
	static int32_t x586 = -1;
	uint16_t x587 = 10U;
	int64_t x588 = -1LL;
	volatile int64_t t107 = -97914476800349314LL;

    t107 = ((x585|x586)*(x587^x588));

    if (t107 != 11LL) { NG(); } else { ; }
	
}

void f108(void) {
    	uint32_t x589 = 6576639U;
	static int16_t x590 = INT16_MAX;
	int32_t x591 = INT32_MAX;
	int16_t x592 = -12319;
	uint32_t t108 = 2U;

    t108 = ((x589|x590)*(x591^x592));

    if (t108 != 1673973730U) { NG(); } else { ; }
	
}

void f109(void) {
    	int16_t x602 = INT16_MIN;
	static int16_t x603 = -1;
	int64_t x604 = -1LL;

    t109 = ((x601|x602)*(x603^x604));

    if (t109 != 0LL) { NG(); } else { ; }
	
}

void f110(void) {
    	int32_t x609 = 451409792;
	int64_t t110 = 252933LL;

    t110 = ((x609|x610)*(x611^x612));

    if (t110 != 0LL) { NG(); } else { ; }
	
}

void f111(void) {
    	volatile uint8_t x613 = UINT8_MAX;
	volatile uint32_t x614 = UINT32_MAX;
	uint32_t x615 = 4696333U;
	int32_t x616 = -9270;
	static volatile uint32_t t111 = 3U;

    t111 = ((x613|x614)*(x615^x616));

    if (t111 != 4689209U) { NG(); } else { ; }
	
}

void f112(void) {
    	int64_t x617 = 880153296736291939LL;
	static int16_t x618 = -1;
	int8_t x620 = INT8_MAX;

    t112 = ((x617|x618)*(x619^x620));

    if (t112 != 124LL) { NG(); } else { ; }
	
}

void f113(void) {
    	int16_t x621 = 1;
	int16_t x622 = 6506;
	int64_t x623 = -225954768LL;
	volatile int8_t x624 = INT8_MAX;
	volatile int64_t t113 = 16323837426078LL;

    t113 = ((x621|x622)*(x623^x624));

    if (t113 != -1470287473659LL) { NG(); } else { ; }
	
}

void f114(void) {
    	int8_t x625 = 42;
	int8_t x626 = 3;
	int8_t x627 = INT8_MIN;
	volatile int8_t x628 = 22;
	volatile int32_t t114 = -13688;

    t114 = ((x625|x626)*(x627^x628));

    if (t114 != -4558) { NG(); } else { ; }
	
}

void f115(void) {
    	int8_t x630 = -1;
	uint64_t t115 = 31056672099872LLU;

    t115 = ((x629|x630)*(x631^x632));

    if (t115 != 18446743963869655127LLU) { NG(); } else { ; }
	
}

void f116(void) {
    	int64_t x633 = INT64_MAX;
	int16_t x635 = -716;
	int64_t t116 = 603078420759LL;

    t116 = ((x633|x634)*(x635^x636));

    if (t116 != 240099742108286LL) { NG(); } else { ; }
	
}

void f117(void) {
    	uint8_t x638 = UINT8_MAX;
	static int32_t x639 = -1;
	int8_t x640 = -53;
	volatile int32_t t117 = -6900606;

    t117 = ((x637|x638)*(x639^x640));

    if (t117 != -52) { NG(); } else { ; }
	
}

void f118(void) {
    	uint16_t x641 = 94U;
	uint64_t x642 = 8730320LLU;
	int8_t x643 = 14;
	static int8_t x644 = -1;
	volatile uint64_t t118 = 9680796992658175LLU;

    t118 = ((x641|x642)*(x643^x644));

    if (t118 != 18446744073578596606LLU) { NG(); } else { ; }
	
}

void f119(void) {
    	int64_t x645 = -134667LL;
	int64_t x646 = INT64_MIN;
	static int8_t x648 = 0;
	static int64_t t119 = -1933437314029LL;

    t119 = ((x645|x646)*(x647^x648));

    if (t119 != 17237376LL) { NG(); } else { ; }
	
}

void f120(void) {
    	int16_t x649 = INT16_MIN;
	static int64_t x650 = INT64_MAX;
	int32_t x651 = -8966;
	int16_t x652 = INT16_MIN;
	int64_t t120 = 4050061956LL;

    t120 = ((x649|x650)*(x651^x652));

    if (t120 != -23802LL) { NG(); } else { ; }
	
}

void f121(void) {
    	int16_t x653 = -1;
	int16_t x654 = 0;
	static volatile int64_t x655 = INT64_MAX;
	static int8_t x656 = 48;
	volatile int64_t t121 = 268329496613LL;

    t121 = ((x653|x654)*(x655^x656));

    if (t121 != -9223372036854775759LL) { NG(); } else { ; }
	
}

void f122(void) {
    	static uint16_t x658 = 43U;
	int16_t x659 = INT16_MIN;
	static int64_t x660 = 7LL;
	int64_t t122 = 87366979354064LL;

    t122 = ((x657|x658)*(x659^x660));

    if (t122 != 32761LL) { NG(); } else { ; }
	
}

void f123(void) {
    	static int32_t x665 = INT32_MIN;
	static int8_t x666 = INT8_MIN;
	int64_t x667 = 1981936537612045LL;
	static uint8_t x668 = 14U;
	int64_t t123 = -18077544574LL;

    t123 = ((x665|x666)*(x667^x668));

    if (t123 != -253687876814340480LL) { NG(); } else { ; }
	
}

void f124(void) {
    	int16_t x669 = -1;
	static int8_t x670 = -1;
	static uint8_t x671 = 13U;
	int8_t x672 = -61;
	int32_t t124 = -4583;

    t124 = ((x669|x670)*(x671^x672));

    if (t124 != 50) { NG(); } else { ; }
	
}

void f125(void) {
    	uint32_t x673 = 911639119U;
	int32_t x674 = 145719010;
	int16_t x675 = INT16_MIN;
	volatile int16_t x676 = INT16_MAX;
	volatile uint32_t t125 = 17379415U;

    t125 = ((x673|x674)*(x675^x676));

    if (t125 != 3238002961U) { NG(); } else { ; }
	
}

void f126(void) {
    	static int32_t x677 = INT32_MAX;
	int16_t x678 = -1;
	volatile int16_t x679 = -477;
	int16_t x680 = INT16_MIN;
	static int32_t t126 = 0;

    t126 = ((x677|x678)*(x679^x680));

    if (t126 != -32291) { NG(); } else { ; }
	
}

void f127(void) {
    	static volatile uint8_t x681 = 3U;
	static int64_t x682 = 46938254LL;
	int16_t x683 = -1;
	uint32_t x684 = 70195484U;
	volatile int64_t t127 = 13187913004209352LL;

    t127 = ((x681|x682)*(x683^x684));

    if (t127 != 198303416581529805LL) { NG(); } else { ; }
	
}

void f128(void) {
    	volatile uint64_t x689 = 52893190067532554LLU;
	int16_t x691 = INT16_MIN;
	static int16_t x692 = 1366;
	volatile uint64_t t128 = 3LLU;

    t128 = ((x689|x690)*(x691^x692));

    if (t128 != 17701754632981740202LLU) { NG(); } else { ; }
	
}

void f129(void) {
    	uint32_t x693 = UINT32_MAX;
	int8_t x694 = INT8_MIN;
	static uint16_t x695 = UINT16_MAX;
	int64_t x696 = -1LL;
	volatile int64_t t129 = -867248704401LL;

    t129 = ((x693|x694)*(x695^x696));

    if (t129 != -281474976645120LL) { NG(); } else { ; }
	
}

void f130(void) {
    	volatile uint8_t x697 = UINT8_MAX;
	uint64_t x698 = 452364695219LLU;
	uint64_t x699 = 7LLU;
	volatile uint8_t x700 = 16U;
	volatile uint64_t t130 = 83553653LLU;

    t130 = ((x697|x698)*(x699^x700));

    if (t130 != 10404387991785LLU) { NG(); } else { ; }
	
}

void f131(void) {
    	uint64_t x703 = 26760LLU;
	volatile uint64_t t131 = 1522623086LLU;

    t131 = ((x701|x702)*(x703^x704));

    if (t131 != 18446744073709524873LLU) { NG(); } else { ; }
	
}

void f132(void) {
    	int16_t x706 = -7067;

    t132 = ((x705|x706)*(x707^x708));

    if (t132 != 18446744073709479271LLU) { NG(); } else { ; }
	
}

void f133(void) {
    	uint64_t x709 = UINT64_MAX;
	uint64_t x710 = UINT64_MAX;
	int32_t x711 = -99510563;
	int32_t x712 = -11907;
	volatile uint64_t t133 = 32LLU;

    t133 = ((x709|x710)*(x711^x712));

    if (t133 != 18446744073610049632LLU) { NG(); } else { ; }
	
}

void f134(void) {
    	volatile int64_t x713 = -1LL;
	volatile int8_t x714 = INT8_MAX;
	uint32_t x715 = 990308U;
	int32_t x716 = INT32_MAX;
	volatile int64_t t134 = -13521LL;

    t134 = ((x713|x714)*(x715^x716));

    if (t134 != -2146493339LL) { NG(); } else { ; }
	
}

void f135(void) {
    	uint64_t x717 = 1510202878476582296LLU;
	volatile int16_t x718 = INT16_MIN;
	int64_t x719 = INT64_MIN;
	volatile uint16_t x720 = 19U;
	volatile uint64_t t135 = 1040LLU;

    t135 = ((x717|x718)*(x719^x720));

    if (t135 != 18446744073709539912LLU) { NG(); } else { ; }
	
}

void f136(void) {
    	static int64_t x722 = -10267050LL;
	int32_t x723 = INT32_MIN;
	int32_t x724 = -1;
	int64_t t136 = -15713151719556546LL;

    t136 = ((x721|x722)*(x723^x724));

    if (t136 != -22047961200678654LL) { NG(); } else { ; }
	
}

void f137(void) {
    	uint8_t x725 = 0U;
	static volatile int64_t t137 = 1283023456119571654LL;

    t137 = ((x725|x726)*(x727^x728));

    if (t137 != 0LL) { NG(); } else { ; }
	
}

void f138(void) {
    	int16_t x729 = -1;
	int8_t x730 = -17;
	int16_t x731 = -204;
	int32_t x732 = INT32_MIN;
	int32_t t138 = 77823;

    t138 = ((x729|x730)*(x731^x732));

    if (t138 != -2147483444) { NG(); } else { ; }
	
}

void f139(void) {
    	int8_t x734 = -1;
	static uint64_t x736 = UINT64_MAX;
	uint64_t t139 = 107905038LLU;

    t139 = ((x733|x734)*(x735^x736));

    if (t139 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f140(void) {
    	int16_t x741 = INT16_MIN;
	uint64_t x743 = UINT64_MAX;
	static int32_t x744 = -1;
	uint64_t t140 = 1937LLU;

    t140 = ((x741|x742)*(x743^x744));

    if (t140 != 0LLU) { NG(); } else { ; }
	
}

void f141(void) {
    	static volatile uint64_t x749 = UINT64_MAX;
	volatile int16_t x750 = INT16_MIN;
	int64_t x751 = INT64_MIN;
	uint8_t x752 = 67U;
	static volatile uint64_t t141 = 806799916253LLU;

    t141 = ((x749|x750)*(x751^x752));

    if (t141 != 9223372036854775741LLU) { NG(); } else { ; }
	
}

void f142(void) {
    	static int32_t x753 = -84;
	volatile int32_t x755 = INT32_MIN;
	int64_t x756 = -1LL;
	static int64_t t142 = -1414846475364929388LL;

    t142 = ((x753|x754)*(x755^x756));

    if (t142 != -180388626348LL) { NG(); } else { ; }
	
}

void f143(void) {
    	volatile uint16_t x757 = 44U;
	uint64_t x758 = 2LLU;
	int16_t x759 = -12177;
	int8_t x760 = 5;
	uint64_t t143 = 36LLU;

    t143 = ((x757|x758)*(x759^x760));

    if (t143 != 18446744073708991244LLU) { NG(); } else { ; }
	
}

void f144(void) {
    	static int16_t x761 = 77;
	uint64_t x762 = 510290888870482055LLU;
	int64_t x764 = -50LL;

    t144 = ((x761|x762)*(x763^x764));

    if (t144 != 4594414143375505311LLU) { NG(); } else { ; }
	
}

void f145(void) {
    	int32_t x765 = 8551;
	int64_t x767 = -1LL;
	uint8_t x768 = UINT8_MAX;
	int64_t t145 = -90568007511LL;

    t145 = ((x765|x766)*(x767^x768));

    if (t145 != 18490942685440LL) { NG(); } else { ; }
	
}

void f146(void) {
    	int16_t x773 = INT16_MIN;
	static int16_t x774 = -1644;
	int16_t x776 = 16212;
	uint32_t t146 = 1246093275U;

    t146 = ((x773|x774)*(x775^x776));

    if (t146 != 26654172U) { NG(); } else { ; }
	
}

void f147(void) {
    	volatile int16_t x786 = INT16_MIN;
	int32_t x787 = INT32_MIN;
	int32_t x788 = -1;

    t147 = ((x785|x786)*(x787^x788));

    if (t147 != -70368744144896LL) { NG(); } else { ; }
	
}

void f148(void) {
    	uint8_t x789 = 108U;
	uint8_t x790 = 1U;
	volatile uint64_t t148 = 221122207961311LLU;

    t148 = ((x789|x790)*(x791^x792));

    if (t148 != 18446703787507547173LLU) { NG(); } else { ; }
	
}

void f149(void) {
    	volatile int8_t x793 = INT8_MIN;
	uint16_t x794 = 7199U;
	volatile int32_t x795 = -1;
	static volatile int8_t x796 = INT8_MAX;
	int32_t t149 = 2974;

    t149 = ((x793|x794)*(x795^x796));

    if (t149 != 12416) { NG(); } else { ; }
	
}

void f150(void) {
    	uint32_t x797 = 7U;
	static int16_t x798 = INT16_MAX;
	int64_t x800 = -1LL;
	int64_t t150 = -14433LL;

    t150 = ((x797|x798)*(x799^x800));

    if (t150 != -10638699778420LL) { NG(); } else { ; }
	
}

void f151(void) {
    	volatile int64_t x805 = -1LL;
	static uint16_t x806 = UINT16_MAX;
	uint8_t x807 = 3U;
	int32_t x808 = INT32_MAX;
	static int64_t t151 = 62LL;

    t151 = ((x805|x806)*(x807^x808));

    if (t151 != -2147483644LL) { NG(); } else { ; }
	
}

void f152(void) {
    	static int8_t x809 = INT8_MIN;
	int32_t x810 = -3701327;
	volatile int32_t x811 = 9;
	static int32_t t152 = 192;

    t152 = ((x809|x810)*(x811^x812));

    if (t152 != -189363) { NG(); } else { ; }
	
}

void f153(void) {
    	static volatile int32_t x813 = INT32_MIN;
	int8_t x814 = INT8_MIN;
	int16_t x815 = 1469;
	int64_t x816 = 6LL;

    t153 = ((x813|x814)*(x815^x816));

    if (t153 != -187776LL) { NG(); } else { ; }
	
}

void f154(void) {
    	volatile int8_t x821 = -17;
	volatile int16_t x822 = 2080;
	uint32_t x823 = 98U;
	int32_t x824 = INT32_MIN;
	static uint32_t t154 = 1070841112U;

    t154 = ((x821|x822)*(x823^x824));

    if (t154 != 2147481982U) { NG(); } else { ; }
	
}

void f155(void) {
    	uint8_t x830 = 25U;
	uint8_t x831 = 2U;
	static int8_t x832 = -1;

    t155 = ((x829|x830)*(x831^x832));

    if (t155 != -4029LL) { NG(); } else { ; }
	
}

void f156(void) {
    	uint64_t x833 = 1823133LLU;
	volatile int64_t x834 = INT64_MIN;
	int16_t x835 = 857;
	volatile int16_t x836 = -1;
	static volatile uint64_t t156 = 5LLU;

    t156 = ((x833|x834)*(x835^x836));

    if (t156 != 18446744072145303502LLU) { NG(); } else { ; }
	
}

void f157(void) {
    	int32_t x838 = -1;
	volatile int64_t x839 = -46913LL;
	volatile uint32_t x840 = UINT32_MAX;
	uint64_t t157 = 22135039340532374LLU;

    t157 = ((x837|x838)*(x839^x840));

    if (t157 != 4294920384LLU) { NG(); } else { ; }
	
}

void f158(void) {
    	static int16_t x841 = -1;
	int32_t x842 = 871877;
	static int64_t x843 = INT64_MAX;
	volatile int8_t x844 = 3;
	int64_t t158 = -22LL;

    t158 = ((x841|x842)*(x843^x844));

    if (t158 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f159(void) {
    	uint64_t x846 = 118717909821LLU;
	uint32_t x847 = 1190520496U;
	volatile uint64_t t159 = 4257701469254LLU;

    t159 = ((x845|x846)*(x847^x848));

    if (t159 != 12208920437230803377LLU) { NG(); } else { ; }
	
}

void f160(void) {
    	uint32_t x849 = UINT32_MAX;
	int16_t x850 = INT16_MAX;
	int8_t x851 = 3;
	static uint8_t x852 = 0U;
	volatile uint32_t t160 = 5072U;

    t160 = ((x849|x850)*(x851^x852));

    if (t160 != 4294967293U) { NG(); } else { ; }
	
}

void f161(void) {
    	uint32_t x853 = 8018U;
	static int8_t x854 = INT8_MAX;
	volatile uint32_t x855 = 24624U;
	uint16_t x856 = UINT16_MAX;
	static volatile uint32_t t161 = 5848296U;

    t161 = ((x853|x854)*(x855^x856));

    if (t161 != 329865393U) { NG(); } else { ; }
	
}

void f162(void) {
    	int8_t x857 = -1;
	static uint64_t x858 = 90908030993LLU;
	static int64_t x859 = -1LL;
	volatile uint64_t t162 = 82LLU;

    t162 = ((x857|x858)*(x859^x860));

    if (t162 != 0LLU) { NG(); } else { ; }
	
}

void f163(void) {
    	int16_t x861 = INT16_MIN;
	int32_t x862 = 10727;
	uint8_t x864 = UINT8_MAX;
	int32_t t163 = -2325833;

    t163 = ((x861|x862)*(x863^x864));

    if (t163 != 716619033) { NG(); } else { ; }
	
}

void f164(void) {
    	static volatile int64_t x865 = INT64_MAX;
	uint64_t x866 = 6225115589LLU;
	int32_t x867 = -1;
	int64_t x868 = 19258LL;

    t164 = ((x865|x866)*(x867^x868));

    if (t164 != 9223372036854795067LLU) { NG(); } else { ; }
	
}

void f165(void) {
    	static int8_t x869 = -1;
	static uint8_t x871 = UINT8_MAX;
	static volatile int8_t x872 = INT8_MIN;
	volatile int64_t t165 = -3692480493977LL;

    t165 = ((x869|x870)*(x871^x872));

    if (t165 != 129LL) { NG(); } else { ; }
	
}

void f166(void) {
    	int16_t x879 = 2;
	int32_t x880 = 39822;
	int32_t t166 = 830535;

    t166 = ((x877|x878)*(x879^x880));

    if (t166 != -39820) { NG(); } else { ; }
	
}

void f167(void) {
    	int16_t x881 = -1;
	volatile int64_t x882 = -37030052922LL;
	int64_t x883 = INT64_MIN;
	static int16_t x884 = -10649;
	volatile int64_t t167 = -128135593965013709LL;

    t167 = ((x881|x882)*(x883^x884));

    if (t167 != -9223372036854765159LL) { NG(); } else { ; }
	
}

void f168(void) {
    	static int16_t x885 = INT16_MIN;
	static uint16_t x887 = UINT16_MAX;
	volatile int32_t t168 = -1550;

    t168 = ((x885|x886)*(x887^x888));

    if (t168 != 65508) { NG(); } else { ; }
	
}

void f169(void) {
    	int16_t x909 = INT16_MIN;
	int8_t x910 = INT8_MAX;
	int8_t x911 = INT8_MIN;
	static uint32_t x912 = 0U;
	static volatile uint32_t t169 = 35U;

    t169 = ((x909|x910)*(x911^x912));

    if (t169 != 4178048U) { NG(); } else { ; }
	
}

void f170(void) {
    	volatile uint32_t x917 = 436605063U;
	uint16_t x918 = 7U;
	volatile int16_t x919 = INT16_MIN;
	uint64_t x920 = UINT64_MAX;
	static uint64_t t170 = 260146675815790451LLU;

    t170 = ((x917|x918)*(x919^x920));

    if (t170 != 14306238099321LLU) { NG(); } else { ; }
	
}

void f171(void) {
    	int64_t x921 = INT64_MIN;
	int32_t x922 = -180549;
	uint16_t x923 = 12574U;
	int64_t t171 = 1LL;

    t171 = ((x921|x922)*(x923^x924));

    if (t171 != 2777385267LL) { NG(); } else { ; }
	
}

void f172(void) {
    	volatile int8_t x925 = 1;
	int64_t x927 = INT64_MAX;
	static volatile int64_t t172 = -196241818615367LL;

    t172 = ((x925|x926)*(x927^x928));

    if (t172 != 127LL) { NG(); } else { ; }
	
}

void f173(void) {
    	int16_t x929 = INT16_MIN;
	volatile uint16_t x930 = UINT16_MAX;
	int32_t x931 = 4486049;
	int32_t t173 = -2155912;

    t173 = ((x929|x930)*(x931^x932));

    if (t173 != 4486111) { NG(); } else { ; }
	
}

void f174(void) {
    	int8_t x933 = -1;
	volatile uint16_t x934 = 1U;
	volatile int64_t x935 = INT64_MIN;
	volatile int16_t x936 = INT16_MIN;
	int64_t t174 = -620053401LL;

    t174 = ((x933|x934)*(x935^x936));

    if (t174 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f175(void) {
    	static volatile int32_t x937 = -1;
	int32_t x939 = -1;
	uint8_t x940 = 76U;
	int32_t t175 = -69832269;

    t175 = ((x937|x938)*(x939^x940));

    if (t175 != 77) { NG(); } else { ; }
	
}

void f176(void) {
    	static int16_t x946 = 43;
	uint32_t x947 = 5774U;
	int32_t x948 = INT32_MIN;
	uint32_t t176 = 113152994U;

    t176 = ((x945|x946)*(x947^x948));

    if (t176 != 2147731930U) { NG(); } else { ; }
	
}

void f177(void) {
    	uint32_t x949 = 2U;
	volatile int16_t x950 = 70;
	int64_t x951 = 2818508933110249LL;
	int8_t x952 = 1;
	volatile int64_t t177 = -218394LL;

    t177 = ((x949|x950)*(x951^x952));

    if (t177 != 197295625317717360LL) { NG(); } else { ; }
	
}

void f178(void) {
    	int32_t x953 = -1;
	int16_t x954 = -1;
	int64_t x955 = INT64_MAX;
	int16_t x956 = 115;

    t178 = ((x953|x954)*(x955^x956));

    if (t178 != -9223372036854775692LL) { NG(); } else { ; }
	
}

void f179(void) {
    	int32_t x961 = -1;
	volatile int64_t x962 = -1LL;
	volatile int8_t x963 = INT8_MAX;
	static int32_t x964 = INT32_MAX;
	static volatile int64_t t179 = -6LL;

    t179 = ((x961|x962)*(x963^x964));

    if (t179 != -2147483520LL) { NG(); } else { ; }
	
}

void f180(void) {
    	static uint16_t x969 = 0U;
	static volatile uint32_t x970 = 60314U;
	uint64_t x971 = 16646172341818LLU;
	int64_t x972 = INT64_MIN;
	uint64_t t180 = 275502129782312LLU;

    t180 = ((x969|x970)*(x971^x972));

    if (t180 != 1003997238624410852LLU) { NG(); } else { ; }
	
}

void f181(void) {
    	uint8_t x973 = 1U;
	uint64_t x974 = 630525LLU;
	volatile uint64_t x975 = 9761398LLU;
	int8_t x976 = -1;
	uint64_t t181 = 8338703778468LLU;

    t181 = ((x973|x974)*(x975^x976));

    if (t181 != 18446737918903447141LLU) { NG(); } else { ; }
	
}

void f182(void) {
    	int64_t x977 = INT64_MIN;
	int16_t x978 = INT16_MIN;
	static int32_t x979 = 15;
	int16_t x980 = 4526;
	volatile int64_t t182 = 118293297681465042LL;

    t182 = ((x977|x978)*(x979^x980));

    if (t182 != -147881984LL) { NG(); } else { ; }
	
}

void f183(void) {
    	uint16_t x981 = 131U;
	uint64_t x982 = 13818570994462LLU;
	uint64_t t183 = 10187295426LLU;

    t183 = ((x981|x982)*(x983^x984));

    if (t183 != 0LLU) { NG(); } else { ; }
	
}

void f184(void) {
    	int64_t x989 = INT64_MIN;
	static uint64_t x990 = 1334612005LLU;
	int32_t x991 = INT32_MIN;
	int64_t x992 = -25642907789514LL;
	uint64_t t184 = 276888081LLU;

    t184 = ((x989|x990)*(x991^x992));

    if (t184 != 2275298760968682190LLU) { NG(); } else { ; }
	
}

void f185(void) {
    	static uint64_t x996 = UINT64_MAX;

    t185 = ((x993|x994)*(x995^x996));

    if (t185 != 750904LLU) { NG(); } else { ; }
	
}

void f186(void) {
    	uint8_t x997 = 3U;
	int16_t x998 = -4;
	static int32_t x999 = INT32_MAX;
	int32_t x1000 = INT32_MIN;
	volatile int32_t t186 = 3471;

    t186 = ((x997|x998)*(x999^x1000));

    if (t186 != 1) { NG(); } else { ; }
	
}

void f187(void) {
    	uint64_t x1001 = 1088373775951920884LLU;
	int64_t x1002 = INT64_MAX;
	int16_t x1003 = -1;
	uint64_t t187 = 87399LLU;

    t187 = ((x1001|x1002)*(x1003^x1004));

    if (t187 != 9223372036854775887LLU) { NG(); } else { ; }
	
}

void f188(void) {
    	int8_t x1009 = 6;
	volatile uint64_t x1010 = 5633097648LLU;
	static uint64_t x1011 = 108LLU;
	uint64_t t188 = 2894972LLU;

    t188 = ((x1009|x1010)*(x1011^x1012));

    if (t188 != 15886645189640513860LLU) { NG(); } else { ; }
	
}

void f189(void) {
    	uint64_t x1015 = UINT64_MAX;
	int16_t x1016 = INT16_MIN;
	uint64_t t189 = 8454475147249908659LLU;

    t189 = ((x1013|x1014)*(x1015^x1016));

    if (t189 != 18446743535522913998LLU) { NG(); } else { ; }
	
}

void f190(void) {
    	uint16_t x1017 = 4U;
	int16_t x1018 = INT16_MAX;

    t190 = ((x1017|x1018)*(x1019^x1020));

    if (t190 != -7410235001609972LL) { NG(); } else { ; }
	
}

void f191(void) {
    	int32_t x1024 = INT32_MAX;

    t191 = ((x1021|x1022)*(x1023^x1024));

    if (t191 != 2147483651U) { NG(); } else { ; }
	
}

void f192(void) {
    	volatile int8_t x1025 = INT8_MAX;
	static int64_t x1026 = -1LL;
	volatile uint16_t x1027 = UINT16_MAX;
	uint32_t x1028 = UINT32_MAX;
	volatile int64_t t192 = -5885251092186LL;

    t192 = ((x1025|x1026)*(x1027^x1028));

    if (t192 != -4294901760LL) { NG(); } else { ; }
	
}

void f193(void) {
    	int16_t x1029 = -1;
	uint32_t x1030 = 63444U;
	int8_t x1031 = INT8_MAX;
	int32_t x1032 = 0;
	static volatile uint32_t t193 = 381992U;

    t193 = ((x1029|x1030)*(x1031^x1032));

    if (t193 != 4294967169U) { NG(); } else { ; }
	
}

void f194(void) {
    	volatile int16_t x1033 = INT16_MIN;
	static int32_t x1034 = INT32_MAX;
	int8_t x1035 = INT8_MAX;
	int8_t x1036 = INT8_MIN;
	volatile int32_t t194 = 0;

    t194 = ((x1033|x1034)*(x1035^x1036));

    if (t194 != 1) { NG(); } else { ; }
	
}

void f195(void) {
    	int8_t x1037 = INT8_MIN;
	static int8_t x1038 = 0;
	int8_t x1039 = 2;
	int32_t t195 = 379931;

    t195 = ((x1037|x1038)*(x1039^x1040));

    if (t195 != -495744) { NG(); } else { ; }
	
}

void f196(void) {
    	volatile int16_t x1042 = -206;
	uint32_t x1043 = 15675226U;
	static int32_t x1044 = -32206811;
	uint32_t t196 = 5075572U;

    t196 = ((x1041|x1042)*(x1043^x1044));

    if (t196 != 3513509838U) { NG(); } else { ; }
	
}

void f197(void) {
    	int8_t x1053 = -8;
	int32_t x1054 = -7567;
	int16_t x1055 = INT16_MAX;
	uint8_t x1056 = 17U;

    t197 = ((x1053|x1054)*(x1055^x1056));

    if (t197 != -229250) { NG(); } else { ; }
	
}

void f198(void) {
    	int16_t x1057 = INT16_MIN;
	static int32_t x1058 = INT32_MAX;
	uint64_t x1060 = UINT64_MAX;
	volatile uint64_t t198 = 349118LLU;

    t198 = ((x1057|x1058)*(x1059^x1060));

    if (t198 != 0LLU) { NG(); } else { ; }
	
}

void f199(void) {
    	volatile uint64_t x1065 = UINT64_MAX;
	int32_t x1066 = INT32_MIN;
	int64_t x1067 = INT64_MAX;
	int16_t x1068 = 0;
	uint64_t t199 = 1540472353516011986LLU;

    t199 = ((x1065|x1066)*(x1067^x1068));

    if (t199 != 9223372036854775809LLU) { NG(); } else { ; }
	
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

