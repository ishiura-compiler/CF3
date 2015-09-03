#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x7 = 26360LL;
int64_t x18 = -440225592LL;
volatile uint64_t x19 = UINT64_MAX;
static int16_t x20 = -1;
uint8_t x26 = UINT8_MAX;
int16_t x27 = INT16_MIN;
volatile int64_t t5 = -45LL;
int16_t x32 = 9;
volatile int32_t t7 = -1447;
int8_t x41 = INT8_MIN;
static int32_t x42 = -1;
uint64_t x56 = UINT64_MAX;
volatile uint64_t x57 = 9325169631LLU;
volatile int32_t t13 = -122523772;
volatile int32_t t15 = -155229;
volatile uint16_t x78 = 3530U;
int8_t x82 = INT8_MAX;
volatile int16_t x83 = INT16_MIN;
int32_t t17 = -3846026;
volatile uint64_t x94 = 2699099583LLU;
int32_t x102 = 340;
volatile int32_t x117 = INT32_MIN;
int32_t x120 = INT32_MIN;
int8_t x121 = INT8_MAX;
int64_t x124 = -9LL;
volatile int32_t t24 = -501694;
int8_t x129 = INT8_MIN;
int16_t x138 = INT16_MAX;
static int8_t x139 = INT8_MAX;
volatile uint32_t x146 = 292U;
volatile uint32_t x148 = UINT32_MAX;
int32_t t29 = 60;
volatile int16_t x153 = INT16_MIN;
int64_t x157 = -1LL;
int64_t t33 = INT64_MAX;
volatile int32_t t35 = 3;
static volatile int32_t t36 = 198;
int32_t x196 = 75908718;
int8_t x202 = -1;
int8_t x204 = -1;
static volatile int16_t x214 = -1;
static volatile int32_t t44 = 297;
int8_t x236 = INT8_MIN;
uint8_t x243 = UINT8_MAX;
static volatile uint32_t t51 = 993347180U;
uint32_t x258 = UINT32_MAX;
int32_t x261 = -1;
int32_t x265 = -27;
int32_t x273 = INT32_MIN;
static int8_t x275 = INT8_MAX;
int32_t x276 = -958697;
int16_t x294 = INT16_MAX;
int16_t x296 = -5791;
volatile int32_t x297 = -1;
uint64_t x314 = UINT64_MAX;
int8_t x315 = -1;
static int64_t x320 = -1644550647701160347LL;
volatile int32_t t65 = INT32_MIN;
uint32_t x321 = 5643914U;
static int16_t x322 = 358;
volatile int32_t t67 = 18;
volatile uint64_t x331 = 37252489520519LLU;
static volatile int32_t t68 = INT32_MIN;
int32_t x352 = INT32_MAX;
uint64_t x354 = UINT64_MAX;
int64_t t72 = 1199605LL;
uint32_t x361 = 2905U;
static uint32_t t73 = 3U;
int32_t x369 = -1;
int8_t x376 = -1;
static volatile uint8_t x383 = 35U;
static int8_t x391 = INT8_MIN;
volatile int64_t t79 = -1LL;
int32_t x395 = -1;
static int64_t x405 = -345264855443604LL;
int64_t x407 = INT64_MAX;
static volatile uint64_t t83 = 34870453815655878LLU;
static int32_t x413 = 70590;
static uint32_t x417 = 8944U;
int8_t x420 = -1;
uint32_t x429 = 0U;
static int32_t x434 = -1;
int8_t x441 = INT8_MIN;
static int64_t x443 = INT64_MIN;
int64_t x451 = -1LL;
int32_t x454 = -1;
int16_t x457 = INT16_MAX;
int32_t x463 = INT32_MIN;
static uint8_t x473 = UINT8_MAX;
volatile int16_t x474 = 4754;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x2 = INT8_MIN;
	int16_t x3 = INT16_MAX;
	static int16_t x4 = INT16_MIN;
	int64_t t0 = -493065074457626LL;

	t0 = (x1^((x2*x3)<=x4));

	if (t0 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int64_t x6 = -1LL;
	uint32_t x8 = UINT32_MAX;
	uint32_t t1 = 109U;

	t1 = (x5^((x6*x7)<=x8));

	if (t1 != 4294967294U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = INT32_MIN;
	volatile uint32_t x14 = 0U;
	int16_t x15 = INT16_MAX;
	int64_t x16 = INT64_MIN;
	static volatile int32_t t2 = INT32_MIN;

	t2 = (x13^((x14*x15)<=x16));

	if (t2 != INT32_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x17 = 11;
	int32_t t3 = 622587639;

	t3 = (x17^((x18*x19)<=x20));

	if (t3 != 10) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = INT8_MIN;
	static int16_t x22 = -1;
	int8_t x23 = INT8_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t4 = 13;

	t4 = (x21^((x22*x23)<=x24));

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x25 = INT64_MAX;
	int64_t x28 = 1379LL;

	t5 = (x25^((x26*x27)<=x28));

	if (t5 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	uint32_t x30 = 1787122U;
	int32_t x31 = INT32_MIN;
	volatile int32_t t6 = -25734695;

	t6 = (x29^((x30*x31)<=x32));

	if (t6 != -2147483647) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = INT16_MIN;
	uint16_t x34 = 2087U;
	uint16_t x35 = 39U;
	static int64_t x36 = INT64_MIN;

	t7 = (x33^((x34*x35)<=x36));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x43 = 63U;
	uint16_t x44 = 100U;
	int32_t t8 = -551752092;

	t8 = (x41^((x42*x43)<=x44));

	if (t8 != -127) { NG(); } else { ; }
	
}

void f9(void) {
	static uint16_t x45 = UINT16_MAX;
	int16_t x46 = -67;
	volatile int32_t x47 = -52825;
	int8_t x48 = -1;
	int32_t t9 = 43728297;

	t9 = (x45^((x46*x47)<=x48));

	if (t9 != 65535) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x49 = INT64_MIN;
	uint8_t x50 = 5U;
	uint32_t x51 = 4U;
	int32_t x52 = 277;
	int64_t t10 = 11026333LL;

	t10 = (x49^((x50*x51)<=x52));

	if (t10 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 10U;
	uint64_t x54 = 2782178822856LLU;
	volatile int64_t x55 = INT64_MAX;
	static uint32_t t11 = 22158512U;

	t11 = (x53^((x54*x55)<=x56));

	if (t11 != 11U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x58 = 12U;
	volatile int8_t x59 = 1;
	int8_t x60 = -7;
	volatile uint64_t t12 = 125851107LLU;

	t12 = (x57^((x58*x59)<=x60));

	if (t12 != 9325169630LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x65 = 1;
	int16_t x66 = 17;
	static volatile uint8_t x67 = 0U;
	static uint64_t x68 = UINT64_MAX;

	t13 = (x65^((x66*x67)<=x68));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x69 = 23;
	uint8_t x70 = UINT8_MAX;
	int8_t x71 = INT8_MIN;
	volatile uint8_t x72 = 26U;
	int32_t t14 = 90237;

	t14 = (x69^((x70*x71)<=x72));

	if (t14 != 22) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MIN;
	uint8_t x74 = 2U;
	volatile int32_t x75 = -1;
	uint64_t x76 = 669292257953LLU;

	t15 = (x73^((x74*x75)<=x76));

	if (t15 != -128) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MAX;
	volatile int16_t x79 = INT16_MIN;
	uint16_t x80 = 1U;
	volatile int64_t t16 = -48522959218LL;

	t16 = (x77^((x78*x79)<=x80));

	if (t16 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x81 = INT8_MIN;
	volatile int32_t x84 = INT32_MAX;

	t17 = (x81^((x82*x83)<=x84));

	if (t17 != -127) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x93 = 1U;
	uint8_t x95 = UINT8_MAX;
	int8_t x96 = 17;
	static volatile int32_t t18 = 7;

	t18 = (x93^((x94*x95)<=x96));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x101 = INT32_MIN;
	int64_t x103 = -1LL;
	volatile int64_t x104 = INT64_MIN;
	static volatile int32_t t19 = INT32_MIN;

	t19 = (x101^((x102*x103)<=x104));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = 9249848LLU;
	volatile uint8_t x106 = 76U;
	int8_t x107 = INT8_MIN;
	uint16_t x108 = 7257U;
	uint64_t t20 = 20LLU;

	t20 = (x105^((x106*x107)<=x108));

	if (t20 != 9249849LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x109 = INT64_MIN;
	uint32_t x110 = 1194779043U;
	static int16_t x111 = -11;
	volatile int16_t x112 = 282;
	static int64_t t21 = INT64_MIN;

	t21 = (x109^((x110*x111)<=x112));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MIN;
	volatile uint64_t x114 = 1438814418LLU;
	static int64_t x115 = -24LL;
	uint64_t x116 = 14292LLU;
	static int32_t t22 = 397475863;

	t22 = (x113^((x114*x115)<=x116));

	if (t22 != -32768) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x118 = UINT16_MAX;
	static volatile int16_t x119 = INT16_MAX;
	volatile int32_t t23 = INT32_MIN;

	t23 = (x117^((x118*x119)<=x120));

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x122 = 12;
	uint64_t x123 = 91894679495LLU;

	t24 = (x121^((x122*x123)<=x124));

	if (t24 != 126) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x125 = 6550328371650LL;
	static uint8_t x126 = 4U;
	uint8_t x127 = 87U;
	int8_t x128 = INT8_MIN;
	volatile int64_t t25 = 2475LL;

	t25 = (x125^((x126*x127)<=x128));

	if (t25 != 6550328371650LL) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x130 = 133U;
	int16_t x131 = INT16_MIN;
	volatile int8_t x132 = INT8_MIN;
	int32_t t26 = 27851091;

	t26 = (x129^((x130*x131)<=x132));

	if (t26 != -127) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint16_t x137 = 1614U;
	uint16_t x140 = UINT16_MAX;
	volatile int32_t t27 = -432416325;

	t27 = (x137^((x138*x139)<=x140));

	if (t27 != 1614) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = -1;
	int8_t x142 = 18;
	static volatile uint16_t x143 = UINT16_MAX;
	uint64_t x144 = UINT64_MAX;
	int32_t t28 = -20421241;

	t28 = (x141^((x142*x143)<=x144));

	if (t28 != -2) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x145 = -1;
	int16_t x147 = -1;

	t29 = (x145^((x146*x147)<=x148));

	if (t29 != -2) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x149 = 1;
	uint8_t x150 = UINT8_MAX;
	static volatile uint32_t x151 = UINT32_MAX;
	volatile int8_t x152 = 0;
	int32_t t30 = -23011591;

	t30 = (x149^((x150*x151)<=x152));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x154 = -574825559;
	int16_t x155 = -1;
	volatile int16_t x156 = -5653;
	static int32_t t31 = -31;

	t31 = (x153^((x154*x155)<=x156));

	if (t31 != -32768) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x158 = 1;
	static uint64_t x159 = 686875531742LLU;
	int64_t x160 = INT64_MIN;
	static volatile int64_t t32 = 189LL;

	t32 = (x157^((x158*x159)<=x160));

	if (t32 != -2LL) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int64_t x161 = INT64_MAX;
	int8_t x162 = INT8_MAX;
	static int8_t x163 = -1;
	int64_t x164 = INT64_MIN;

	t33 = (x161^((x162*x163)<=x164));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x165 = 4149U;
	volatile int8_t x166 = INT8_MIN;
	int16_t x167 = -1;
	int32_t x168 = INT32_MAX;
	volatile int32_t t34 = -348487881;

	t34 = (x165^((x166*x167)<=x168));

	if (t34 != 4148) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x169 = 8U;
	static uint16_t x170 = 58U;
	int16_t x171 = INT16_MIN;
	uint64_t x172 = 68276LLU;

	t35 = (x169^((x170*x171)<=x172));

	if (t35 != 8) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x173 = INT8_MIN;
	static int8_t x174 = -1;
	static int32_t x175 = 63;
	uint8_t x176 = UINT8_MAX;

	t36 = (x173^((x174*x175)<=x176));

	if (t36 != -127) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x177 = -1;
	int16_t x178 = -81;
	int16_t x179 = -106;
	uint32_t x180 = UINT32_MAX;
	int32_t t37 = -183129661;

	t37 = (x177^((x178*x179)<=x180));

	if (t37 != -2) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x185 = INT64_MIN;
	uint64_t x186 = 152037LLU;
	int8_t x187 = -1;
	int8_t x188 = 5;
	int64_t t38 = INT64_MIN;

	t38 = (x185^((x186*x187)<=x188));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int32_t x189 = INT32_MAX;
	uint16_t x190 = UINT16_MAX;
	static int64_t x191 = 76191275747612LL;
	int8_t x192 = -1;
	static volatile int32_t t39 = INT32_MAX;

	t39 = (x189^((x190*x191)<=x192));

	if (t39 != INT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x193 = INT64_MIN;
	volatile uint8_t x194 = 6U;
	uint32_t x195 = 438664261U;
	volatile int64_t t40 = INT64_MIN;

	t40 = (x193^((x194*x195)<=x196));

	if (t40 != INT64_MIN) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x197 = -1;
	uint16_t x198 = 175U;
	static int8_t x199 = -27;
	uint8_t x200 = UINT8_MAX;
	volatile int32_t t41 = -295;

	t41 = (x197^((x198*x199)<=x200));

	if (t41 != -2) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x201 = -1LL;
	int32_t x203 = INT32_MAX;
	volatile int64_t t42 = -33577923LL;

	t42 = (x201^((x202*x203)<=x204));

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x209 = 402498546;
	static int16_t x210 = 14496;
	uint8_t x211 = 63U;
	volatile int32_t x212 = INT32_MIN;
	static int32_t t43 = -12486882;

	t43 = (x209^((x210*x211)<=x212));

	if (t43 != 402498546) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = 1;
	static uint16_t x215 = UINT16_MAX;
	static int16_t x216 = -169;

	t44 = (x213^((x214*x215)<=x216));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x217 = INT8_MIN;
	int32_t x218 = 213713;
	uint32_t x219 = 3979U;
	int64_t x220 = INT64_MIN;
	int32_t t45 = -174600707;

	t45 = (x217^((x218*x219)<=x220));

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x221 = UINT16_MAX;
	int8_t x222 = INT8_MIN;
	static int8_t x223 = INT8_MIN;
	static volatile int16_t x224 = -1;
	volatile int32_t t46 = -1;

	t46 = (x221^((x222*x223)<=x224));

	if (t46 != 65535) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x225 = -1;
	int8_t x226 = INT8_MIN;
	static int16_t x227 = -4761;
	int16_t x228 = -15032;
	int32_t t47 = -22;

	t47 = (x225^((x226*x227)<=x228));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x229 = 1181318852168096LL;
	static int8_t x230 = -15;
	static int64_t x231 = 2309763339LL;
	static volatile int8_t x232 = INT8_MIN;
	int64_t t48 = 250348LL;

	t48 = (x229^((x230*x231)<=x232));

	if (t48 != 1181318852168097LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x233 = INT32_MAX;
	static int16_t x234 = INT16_MAX;
	int64_t x235 = -19700918LL;
	static int32_t t49 = -43;

	t49 = (x233^((x234*x235)<=x236));

	if (t49 != 2147483646) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x241 = INT32_MIN;
	uint64_t x242 = 68267190084LLU;
	int16_t x244 = 1;
	volatile int32_t t50 = INT32_MIN;

	t50 = (x241^((x242*x243)<=x244));

	if (t50 != INT32_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x249 = 685090844U;
	int64_t x250 = -119888587821LL;
	volatile int16_t x251 = -1939;
	uint64_t x252 = 5LLU;

	t51 = (x249^((x250*x251)<=x252));

	if (t51 != 685090844U) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x253 = 5257036U;
	volatile uint16_t x254 = 25U;
	uint16_t x255 = UINT16_MAX;
	uint32_t x256 = 950U;
	volatile uint32_t t52 = 119924U;

	t52 = (x253^((x254*x255)<=x256));

	if (t52 != 5257036U) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x257 = INT32_MAX;
	int32_t x259 = INT32_MIN;
	int32_t x260 = 1;
	int32_t t53 = INT32_MAX;

	t53 = (x257^((x258*x259)<=x260));

	if (t53 != INT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x262 = 2U;
	int16_t x263 = INT16_MIN;
	volatile int16_t x264 = INT16_MIN;
	int32_t t54 = -12978736;

	t54 = (x261^((x262*x263)<=x264));

	if (t54 != -2) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x266 = 3572983306581378LLU;
	uint32_t x267 = 43726219U;
	uint16_t x268 = 34U;
	volatile int32_t t55 = 75;

	t55 = (x265^((x266*x267)<=x268));

	if (t55 != -27) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x269 = -3128585;
	static uint32_t x270 = UINT32_MAX;
	static int32_t x271 = INT32_MIN;
	volatile int64_t x272 = INT64_MIN;
	volatile int32_t t56 = -501;

	t56 = (x269^((x270*x271)<=x272));

	if (t56 != -3128585) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x274 = UINT32_MAX;
	volatile int32_t t57 = INT32_MIN;

	t57 = (x273^((x274*x275)<=x276));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x277 = INT8_MAX;
	uint8_t x278 = 1U;
	static int64_t x279 = INT64_MIN;
	volatile int64_t x280 = 395951503879739197LL;
	int32_t t58 = 111463562;

	t58 = (x277^((x278*x279)<=x280));

	if (t58 != 126) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x281 = 0;
	int64_t x282 = 7972023065936211LL;
	volatile uint16_t x283 = 0U;
	uint64_t x284 = 53364LLU;
	static int32_t t59 = 2026;

	t59 = (x281^((x282*x283)<=x284));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x289 = 363U;
	int16_t x290 = INT16_MAX;
	volatile uint16_t x291 = UINT16_MAX;
	int16_t x292 = -1;
	volatile int32_t t60 = -49;

	t60 = (x289^((x290*x291)<=x292));

	if (t60 != 363) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x293 = 28493;
	int32_t x295 = 3202;
	static int32_t t61 = -29492556;

	t61 = (x293^((x294*x295)<=x296));

	if (t61 != 28493) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x298 = INT8_MIN;
	int32_t x299 = -20471;
	int32_t x300 = INT32_MAX;
	static int32_t t62 = -3;

	t62 = (x297^((x298*x299)<=x300));

	if (t62 != -2) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x305 = 15U;
	uint64_t x306 = UINT64_MAX;
	volatile int64_t x307 = 24615LL;
	int64_t x308 = -18LL;
	volatile int32_t t63 = -28831315;

	t63 = (x305^((x306*x307)<=x308));

	if (t63 != 14) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x313 = 87652LLU;
	int64_t x316 = INT64_MIN;
	static uint64_t t64 = 64379248LLU;

	t64 = (x313^((x314*x315)<=x316));

	if (t64 != 87653LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x317 = INT32_MIN;
	static uint16_t x318 = 26U;
	int16_t x319 = 3;

	t65 = (x317^((x318*x319)<=x320));

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x323 = INT8_MIN;
	uint16_t x324 = 13U;
	volatile uint32_t t66 = 9268U;

	t66 = (x321^((x322*x323)<=x324));

	if (t66 != 5643915U) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x325 = INT32_MIN;
	int64_t x326 = INT64_MIN;
	volatile uint8_t x327 = 1U;
	int8_t x328 = INT8_MIN;

	t67 = (x325^((x326*x327)<=x328));

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x329 = INT32_MIN;
	uint64_t x330 = 72973570953667454LLU;
	int64_t x332 = INT64_MIN;

	t68 = (x329^((x330*x331)<=x332));

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x333 = INT16_MAX;
	volatile int32_t x334 = INT32_MIN;
	int64_t x335 = -68618169LL;
	static int8_t x336 = 13;
	static int32_t t69 = 1;

	t69 = (x333^((x334*x335)<=x336));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MAX;
	volatile int8_t x343 = INT8_MIN;
	int64_t x344 = -1LL;
	int64_t t70 = 116857971546493LL;

	t70 = (x341^((x342*x343)<=x344));

	if (t70 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x349 = 4U;
	int32_t x350 = 7318;
	int16_t x351 = INT16_MAX;
	volatile int32_t t71 = -24;

	t71 = (x349^((x350*x351)<=x352));

	if (t71 != 5) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x353 = 301LL;
	int8_t x355 = -1;
	volatile uint32_t x356 = UINT32_MAX;

	t72 = (x353^((x354*x355)<=x356));

	if (t72 != 300LL) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x362 = -13002;
	uint64_t x363 = 2LLU;
	uint64_t x364 = 2LLU;

	t73 = (x361^((x362*x363)<=x364));

	if (t73 != 2905U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x365 = 0;
	int16_t x366 = INT16_MIN;
	volatile uint16_t x367 = 1991U;
	int16_t x368 = INT16_MAX;
	static volatile int32_t t74 = 5935;

	t74 = (x365^((x366*x367)<=x368));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x370 = -1LL;
	int8_t x371 = -1;
	volatile int8_t x372 = -1;
	volatile int32_t t75 = -199209008;

	t75 = (x369^((x370*x371)<=x372));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x373 = -55;
	int8_t x374 = 3;
	volatile int16_t x375 = INT16_MIN;
	volatile int32_t t76 = 10;

	t76 = (x373^((x374*x375)<=x376));

	if (t76 != -56) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x377 = 14LL;
	uint64_t x378 = 4222962808793807LLU;
	int64_t x379 = -3986LL;
	volatile int8_t x380 = 54;
	volatile int64_t t77 = -53LL;

	t77 = (x377^((x378*x379)<=x380));

	if (t77 != 14LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x381 = -105218;
	volatile int16_t x382 = INT16_MIN;
	volatile int16_t x384 = INT16_MAX;
	volatile int32_t t78 = -291370270;

	t78 = (x381^((x382*x383)<=x384));

	if (t78 != -105217) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x389 = 4679LL;
	volatile uint32_t x390 = 440716081U;
	volatile uint32_t x392 = 222377U;

	t79 = (x389^((x390*x391)<=x392));

	if (t79 != 4679LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x393 = -1;
	static volatile uint32_t x394 = UINT32_MAX;
	int16_t x396 = -1;
	volatile int32_t t80 = -36;

	t80 = (x393^((x394*x395)<=x396));

	if (t80 != -2) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x397 = INT64_MIN;
	int64_t x398 = 272LL;
	uint16_t x399 = 16169U;
	static int16_t x400 = INT16_MIN;
	int64_t t81 = INT64_MIN;

	t81 = (x397^((x398*x399)<=x400));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x406 = 114121LLU;
	uint32_t x408 = 8869U;
	static volatile int64_t t82 = -13276LL;

	t82 = (x405^((x406*x407)<=x408));

	if (t82 != -345264855443604LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x409 = 643876LLU;
	int8_t x410 = 11;
	uint8_t x411 = 14U;
	int16_t x412 = INT16_MAX;

	t83 = (x409^((x410*x411)<=x412));

	if (t83 != 643877LLU) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x414 = INT32_MAX;
	int64_t x415 = -1LL;
	static int64_t x416 = INT64_MIN;
	int32_t t84 = -32302;

	t84 = (x413^((x414*x415)<=x416));

	if (t84 != 70590) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x418 = 872U;
	int16_t x419 = -1;
	volatile uint32_t t85 = 627U;

	t85 = (x417^((x418*x419)<=x420));

	if (t85 != 8945U) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x421 = -1;
	volatile uint16_t x422 = 447U;
	uint32_t x423 = UINT32_MAX;
	static int16_t x424 = INT16_MAX;
	volatile int32_t t86 = 5144;

	t86 = (x421^((x422*x423)<=x424));

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x425 = -1;
	volatile uint32_t x426 = UINT32_MAX;
	int32_t x427 = INT32_MIN;
	static volatile int32_t x428 = INT32_MIN;
	volatile int32_t t87 = 1554368;

	t87 = (x425^((x426*x427)<=x428));

	if (t87 != -2) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x430 = INT8_MIN;
	int16_t x431 = INT16_MIN;
	static volatile int64_t x432 = INT64_MAX;
	uint32_t t88 = 690405U;

	t88 = (x429^((x430*x431)<=x432));

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x433 = INT32_MIN;
	uint64_t x435 = 94LLU;
	int16_t x436 = INT16_MIN;
	volatile int32_t t89 = INT32_MIN;

	t89 = (x433^((x434*x435)<=x436));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x437 = 1;
	uint8_t x438 = 4U;
	uint16_t x439 = UINT16_MAX;
	uint64_t x440 = UINT64_MAX;
	volatile int32_t t90 = -380128;

	t90 = (x437^((x438*x439)<=x440));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x442 = 1LL;
	uint16_t x444 = UINT16_MAX;
	volatile int32_t t91 = 0;

	t91 = (x441^((x442*x443)<=x444));

	if (t91 != -127) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x445 = 8U;
	volatile int8_t x446 = INT8_MAX;
	volatile int16_t x447 = INT16_MAX;
	volatile int16_t x448 = INT16_MAX;
	volatile int32_t t92 = -5369;

	t92 = (x445^((x446*x447)<=x448));

	if (t92 != 8) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x449 = INT32_MIN;
	int32_t x450 = INT32_MAX;
	static int8_t x452 = INT8_MIN;
	int32_t t93 = 0;

	t93 = (x449^((x450*x451)<=x452));

	if (t93 != -2147483647) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x453 = UINT64_MAX;
	volatile uint32_t x455 = UINT32_MAX;
	int64_t x456 = 822507346707LL;
	uint64_t t94 = 4254928471LLU;

	t94 = (x453^((x454*x455)<=x456));

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x458 = 125LLU;
	int16_t x459 = 1925;
	static int32_t x460 = -1;
	int32_t t95 = -570426801;

	t95 = (x457^((x458*x459)<=x460));

	if (t95 != 32766) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x461 = -1LL;
	static volatile uint32_t x462 = UINT32_MAX;
	static int16_t x464 = -1769;
	int64_t t96 = -252226884302383LL;

	t96 = (x461^((x462*x463)<=x464));

	if (t96 != -2LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x465 = -2361340499LL;
	int32_t x466 = -1;
	int16_t x467 = 28;
	int16_t x468 = -1;
	volatile int64_t t97 = 944095LL;

	t97 = (x465^((x466*x467)<=x468));

	if (t97 != -2361340500LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x469 = UINT64_MAX;
	int8_t x470 = INT8_MAX;
	uint32_t x471 = 868116053U;
	volatile int32_t x472 = INT32_MIN;
	static uint64_t t98 = UINT64_MAX;

	t98 = (x469^((x470*x471)<=x472));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x475 = UINT8_MAX;
	int8_t x476 = INT8_MIN;
	int32_t t99 = -74043231;

	t99 = (x473^((x474*x475)<=x476));

	if (t99 != 255) { NG(); } else { ; }
	
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

