#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x1 = 31U;
int64_t x5 = 120105LL;
volatile uint8_t x7 = UINT8_MAX;
int64_t x10 = -1LL;
uint8_t x34 = 26U;
int16_t x40 = -1;
int32_t x43 = 0;
static volatile uint32_t t10 = 278U;
static volatile int64_t t11 = 1LL;
static int16_t x50 = INT16_MIN;
volatile uint64_t x56 = 3388248685314LLU;
static volatile int32_t t17 = -1040976;
int32_t x79 = -1;
int16_t x82 = -9167;
int8_t x85 = INT8_MIN;
static int64_t t22 = -91715LL;
static int8_t x97 = INT8_MAX;
volatile uint64_t t24 = 7570874211204462LLU;
volatile int64_t x102 = INT64_MAX;
int64_t x106 = INT64_MIN;
int64_t x108 = -1LL;
int32_t x110 = 32720615;
static int16_t x115 = -55;
int64_t x122 = -1LL;
uint64_t x123 = UINT64_MAX;
static int8_t x131 = INT8_MIN;
volatile int16_t x133 = 744;
static int32_t x146 = INT32_MIN;
int8_t x147 = -1;
uint8_t x148 = 50U;
volatile int32_t t35 = -2733;
volatile int8_t x149 = 0;
uint32_t t36 = 57995U;
static uint16_t x153 = UINT16_MAX;
static uint8_t x160 = 81U;
int32_t x161 = INT32_MIN;
uint64_t x162 = 765631117749LLU;
int32_t x164 = -24914;
static int8_t x165 = -1;
volatile int32_t t40 = 22813374;
static int32_t x171 = INT32_MIN;
int8_t x172 = INT8_MIN;
int16_t x173 = INT16_MAX;
static volatile uint8_t x176 = 126U;
static volatile int32_t t42 = 501908;
static int8_t x177 = 9;
int32_t x179 = -982;
uint16_t x181 = 1U;
int64_t x191 = INT64_MIN;
int32_t t47 = 2;
uint32_t x198 = 6528U;
uint8_t x200 = UINT8_MAX;
uint32_t x202 = UINT32_MAX;
int64_t x205 = INT64_MAX;
volatile int64_t t50 = 420LL;
uint8_t x219 = UINT8_MAX;
int32_t t53 = -323959730;
int64_t x223 = 84LL;
static uint64_t x224 = UINT64_MAX;
volatile int8_t x226 = -1;
int64_t x244 = 7509201500LL;
static volatile uint32_t t59 = 165201920U;
volatile int64_t x252 = -1LL;
int64_t t60 = -1683794LL;
uint8_t x256 = UINT8_MAX;
int16_t x258 = 1350;
static volatile int32_t t64 = 0;
uint64_t x270 = UINT64_MAX;
volatile uint32_t t67 = 1U;
volatile int32_t x286 = INT32_MIN;
int32_t x291 = -1;
int32_t t69 = 13;
int8_t x297 = INT8_MIN;
int64_t x299 = INT64_MIN;
uint16_t x302 = 274U;
volatile int32_t t71 = 1;
int64_t x306 = -253280259295LL;
int8_t x308 = -1;
uint32_t x310 = 590U;
static volatile int64_t x314 = 15595658LL;
volatile int64_t t74 = -33332425698310LL;
int32_t x317 = -1;
volatile uint32_t x323 = 22149235U;
volatile int16_t x327 = INT16_MIN;
volatile int32_t t77 = -8;
static int16_t x329 = -89;
volatile int8_t x330 = INT8_MAX;
volatile uint16_t x331 = 12470U;
volatile int32_t t81 = -468938;
volatile int32_t t82 = -26;
int32_t x351 = INT32_MAX;
static int64_t x358 = -27823LL;
volatile uint8_t x361 = UINT8_MAX;
volatile int32_t t86 = -851795085;
int32_t x370 = INT32_MIN;
static uint64_t x372 = UINT64_MAX;
uint8_t x378 = 91U;
int64_t x379 = INT64_MAX;
uint32_t x380 = 7934162U;
int64_t x381 = INT64_MAX;
static uint8_t x383 = UINT8_MAX;
volatile int32_t t90 = -12021672;
int64_t x389 = INT64_MIN;
volatile uint64_t t92 = 59290845127LLU;
volatile int32_t t94 = -8081;
volatile int32_t t97 = -179;
int64_t x413 = INT64_MIN;
volatile int64_t x417 = INT64_MIN;


void f0(void) {
	uint32_t x2 = 0U;
	static volatile uint32_t x3 = 19653413U;
	uint32_t x4 = 15719317U;
	volatile uint32_t t0 = 1671318U;

	t0 = ((x1<x2)|(x3/x4));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = 1;
	uint32_t x8 = 19074988U;
	volatile uint32_t t1 = 35584U;

	t1 = ((x5<x6)|(x7/x8));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x9 = -1;
	volatile int16_t x11 = INT16_MIN;
	int64_t x12 = -1LL;
	int64_t t2 = -465LL;

	t2 = ((x9<x10)|(x11/x12));

	if (t2 != 32768LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 984LLU;
	uint16_t x14 = 622U;
	int32_t x15 = -45090;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 15;

	t3 = ((x13<x14)|(x15/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 321LLU;
	int8_t x18 = INT8_MIN;
	int64_t x19 = -1LL;
	int64_t x20 = 21403470163090LL;
	int64_t t4 = -16460455488278359LL;

	t4 = ((x17<x18)|(x19/x20));

	if (t4 != 1LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = -18249401LL;
	volatile int64_t x22 = INT64_MIN;
	int8_t x23 = -1;
	int32_t x24 = INT32_MAX;
	int32_t t5 = -10;

	t5 = ((x21<x22)|(x23/x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = INT32_MIN;
	int8_t x27 = INT8_MIN;
	static uint16_t x28 = 12870U;
	static int32_t t6 = -126445;

	t6 = ((x25<x26)|(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 0U;
	volatile int32_t x30 = -1;
	int16_t x31 = INT16_MAX;
	uint32_t x32 = UINT32_MAX;
	volatile uint32_t t7 = 1260918U;

	t7 = ((x29<x30)|(x31/x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 205U;
	static int64_t x35 = INT64_MIN;
	volatile int16_t x36 = INT16_MIN;
	volatile int64_t t8 = -93598LL;

	t8 = ((x33<x34)|(x35/x36));

	if (t8 != 281474976710656LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 1;
	volatile int16_t x38 = -39;
	uint64_t x39 = UINT64_MAX;
	static volatile uint64_t t9 = 772LLU;

	t9 = ((x37<x38)|(x39/x40));

	if (t9 != 1LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile uint16_t x41 = 3753U;
	int8_t x42 = INT8_MIN;
	uint32_t x44 = 3699U;

	t10 = ((x41<x42)|(x43/x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 2U;
	int8_t x46 = INT8_MIN;
	int64_t x47 = -1LL;
	int8_t x48 = INT8_MIN;

	t11 = ((x45<x46)|(x47/x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -1LL;
	volatile int32_t x51 = -1;
	int16_t x52 = -288;
	int32_t t12 = -16394;

	t12 = ((x49<x50)|(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x53 = 2U;
	int64_t x54 = -1LL;
	volatile int8_t x55 = -1;
	volatile uint64_t t13 = 1087370653137219585LLU;

	t13 = ((x53<x54)|(x55/x56));

	if (t13 != 5444330LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int32_t x58 = INT32_MIN;
	static int64_t x59 = -1LL;
	int64_t x60 = 37LL;
	volatile int64_t t14 = 31LL;

	t14 = ((x57<x58)|(x59/x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x61 = INT16_MIN;
	uint32_t x62 = 354428698U;
	static int32_t x63 = -1;
	uint32_t x64 = UINT32_MAX;
	static uint32_t t15 = 78122U;

	t15 = ((x61<x62)|(x63/x64));

	if (t15 != 1U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	int8_t x66 = 1;
	int32_t x67 = INT32_MAX;
	int8_t x68 = 46;
	int32_t t16 = 3579;

	t16 = ((x65<x66)|(x67/x68));

	if (t16 != 46684427) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x69 = INT32_MAX;
	static int16_t x70 = 5;
	static int32_t x71 = 3;
	int32_t x72 = -1;

	t17 = ((x69<x70)|(x71/x72));

	if (t17 != -3) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = -1LL;
	static int64_t x74 = 6366233248LL;
	static uint64_t x75 = UINT64_MAX;
	uint8_t x76 = 87U;
	static volatile uint64_t t18 = 24134273428LLU;

	t18 = ((x73<x74)|(x75/x76));

	if (t18 != 212031541077121283LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MAX;
	volatile int16_t x78 = -1;
	int16_t x80 = -2101;
	volatile int32_t t19 = 0;

	t19 = ((x77<x78)|(x79/x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	int8_t x83 = INT8_MIN;
	static uint32_t x84 = UINT32_MAX;
	uint32_t t20 = 718773U;

	t20 = ((x81<x82)|(x83/x84));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x86 = 6U;
	volatile int64_t x87 = INT64_MIN;
	static uint16_t x88 = UINT16_MAX;
	volatile int64_t t21 = -95266LL;

	t21 = ((x85<x86)|(x87/x88));

	if (t21 != -140739635871743LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 117U;
	int32_t x90 = INT32_MIN;
	int32_t x91 = -1;
	int64_t x92 = INT64_MIN;

	t22 = ((x89<x90)|(x91/x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -3;
	int32_t x94 = 547191175;
	volatile uint8_t x95 = UINT8_MAX;
	int8_t x96 = INT8_MIN;
	int32_t t23 = 50;

	t23 = ((x93<x94)|(x95/x96));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = -1;
	int16_t x99 = INT16_MIN;
	static uint64_t x100 = 63975280LLU;

	t24 = ((x97<x98)|(x99/x100));

	if (t24 != 288341748151LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 3;
	int16_t x103 = 12058;
	volatile int64_t x104 = -1LL;
	int64_t t25 = 489LL;

	t25 = ((x101<x102)|(x103/x104));

	if (t25 != -12057LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = -1;
	uint16_t x107 = 51U;
	static volatile int64_t t26 = -2140636149515529LL;

	t26 = ((x105<x106)|(x107/x108));

	if (t26 != -51LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = 0;
	int8_t x111 = -2;
	static uint64_t x112 = UINT64_MAX;
	volatile uint64_t t27 = 63614LLU;

	t27 = ((x109<x110)|(x111/x112));

	if (t27 != 1LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MIN;
	int16_t x114 = INT16_MIN;
	static uint16_t x116 = UINT16_MAX;
	static volatile int32_t t28 = 214791103;

	t28 = ((x113<x114)|(x115/x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = 1;
	uint64_t x118 = 54947210LLU;
	volatile uint32_t x119 = UINT32_MAX;
	static uint32_t x120 = UINT32_MAX;
	volatile uint32_t t29 = 116U;

	t29 = ((x117<x118)|(x119/x120));

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = 177LL;
	uint16_t x124 = UINT16_MAX;
	uint64_t t30 = 15178LLU;

	t30 = ((x121<x122)|(x123/x124));

	if (t30 != 281479271743489LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	static int16_t x126 = -1;
	int16_t x127 = -1;
	int32_t x128 = 99798439;
	int32_t t31 = 0;

	t31 = ((x125<x126)|(x127/x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MAX;
	uint32_t x132 = 1U;
	uint32_t t32 = 1380317U;

	t32 = ((x129<x130)|(x131/x132));

	if (t32 != 4294967169U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x134 = 179LLU;
	int8_t x135 = 5;
	uint32_t x136 = UINT32_MAX;
	volatile uint32_t t33 = 66960U;

	t33 = ((x133<x134)|(x135/x136));

	if (t33 != 0U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 17422U;
	int32_t x142 = -1;
	static int8_t x143 = INT8_MIN;
	uint8_t x144 = 1U;
	volatile int32_t t34 = 171;

	t34 = ((x141<x142)|(x143/x144));

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x145 = 23761001308787242LL;

	t35 = ((x145<x146)|(x147/x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x150 = -56521352039061LL;
	int32_t x151 = -1352307;
	uint32_t x152 = 237717U;

	t36 = ((x149<x150)|(x151/x152));

	if (t36 != 18061U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint64_t x154 = 13964325839LLU;
	volatile int8_t x155 = INT8_MAX;
	int64_t x156 = -905741375475179LL;
	int64_t t37 = -25450LL;

	t37 = ((x153<x154)|(x155/x156));

	if (t37 != 1LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x157 = 119U;
	int32_t x158 = 1;
	int64_t x159 = INT64_MAX;
	int64_t t38 = -2584698312039LL;

	t38 = ((x157<x158)|(x159/x160));

	if (t38 != 113868790578454022LL) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x163 = 676;
	static int32_t t39 = 201;

	t39 = ((x161<x162)|(x163/x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x166 = INT16_MIN;
	static volatile uint16_t x167 = 1U;
	int32_t x168 = -1;

	t40 = ((x165<x166)|(x167/x168));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x169 = UINT8_MAX;
	volatile int8_t x170 = INT8_MAX;
	int32_t t41 = -3132;

	t41 = ((x169<x170)|(x171/x172));

	if (t41 != 16777216) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x174 = 12975418;
	static int8_t x175 = INT8_MIN;

	t42 = ((x173<x174)|(x175/x176));

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int8_t x178 = 50;
	volatile uint8_t x180 = 63U;
	int32_t t43 = -7;

	t43 = ((x177<x178)|(x179/x180));

	if (t43 != -15) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x182 = 51U;
	int32_t x183 = INT32_MAX;
	static uint16_t x184 = UINT16_MAX;
	int32_t t44 = 1961;

	t44 = ((x181<x182)|(x183/x184));

	if (t44 != 32769) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x185 = -1;
	static volatile int32_t x186 = 0;
	int64_t x187 = INT64_MAX;
	int64_t x188 = -507818796781910LL;
	static int64_t t45 = 1919765085839885LL;

	t45 = ((x185<x186)|(x187/x188));

	if (t45 != -18161LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x189 = 0U;
	int8_t x190 = -11;
	int32_t x192 = -148868506;
	static int64_t t46 = -15LL;

	t46 = ((x189<x190)|(x191/x192));

	if (t46 != 61956502988LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x193 = 82775LLU;
	int64_t x194 = INT64_MIN;
	int32_t x195 = -1;
	int16_t x196 = 2230;

	t47 = ((x193<x194)|(x195/x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x197 = INT64_MAX;
	int16_t x199 = INT16_MIN;
	int32_t t48 = -1;

	t48 = ((x197<x198)|(x199/x200));

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x201 = INT32_MIN;
	int64_t x203 = INT64_MAX;
	uint64_t x204 = 2306LLU;
	uint64_t t49 = 94508033LLU;

	t49 = ((x201<x202)|(x203/x204));

	if (t49 != 3999727682937891LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x206 = 306U;
	int64_t x207 = -3152753761LL;
	int16_t x208 = -242;

	t50 = ((x205<x206)|(x207/x208));

	if (t50 != 13027908LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x209 = 386LLU;
	int32_t x210 = INT32_MAX;
	int16_t x211 = -1;
	int64_t x212 = 9LL;
	volatile int64_t t51 = 114076606520379LL;

	t51 = ((x209<x210)|(x211/x212));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x213 = INT64_MIN;
	static int32_t x214 = 1033151;
	uint16_t x215 = 32U;
	uint8_t x216 = UINT8_MAX;
	int32_t t52 = -1;

	t52 = ((x213<x214)|(x215/x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x217 = 6U;
	uint16_t x218 = 1394U;
	static int8_t x220 = 26;

	t53 = ((x217<x218)|(x219/x220));

	if (t53 != 9) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x221 = 3000U;
	static uint8_t x222 = 41U;
	uint64_t t54 = 192LLU;

	t54 = ((x221<x222)|(x223/x224));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x225 = UINT32_MAX;
	static int8_t x227 = INT8_MIN;
	uint64_t x228 = 1909051LLU;
	static uint64_t t55 = 24667LLU;

	t55 = ((x225<x226)|(x227/x228));

	if (t55 != 9662782227247LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = INT32_MAX;
	volatile uint64_t x230 = 485776512106LLU;
	uint32_t x231 = 115844U;
	int8_t x232 = INT8_MIN;
	uint32_t t56 = 20428189U;

	t56 = ((x229<x230)|(x231/x232));

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x233 = 2641;
	int8_t x234 = INT8_MAX;
	uint8_t x235 = 6U;
	int8_t x236 = INT8_MIN;
	volatile int32_t t57 = -8158;

	t57 = ((x233<x234)|(x235/x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x241 = INT16_MIN;
	uint16_t x242 = UINT16_MAX;
	uint16_t x243 = 454U;
	volatile int64_t t58 = -115209273LL;

	t58 = ((x241<x242)|(x243/x244));

	if (t58 != 1LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = INT16_MIN;
	int16_t x246 = INT16_MIN;
	uint32_t x247 = 6U;
	int32_t x248 = INT32_MIN;

	t59 = ((x245<x246)|(x247/x248));

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x249 = 1382U;
	volatile int8_t x250 = INT8_MIN;
	int16_t x251 = 1;

	t60 = ((x249<x250)|(x251/x252));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x253 = INT8_MIN;
	int64_t x254 = 446324564426LL;
	int64_t x255 = -1LL;
	int64_t t61 = 59817834LL;

	t61 = ((x253<x254)|(x255/x256));

	if (t61 != 1LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x257 = 23792461;
	static uint16_t x259 = UINT16_MAX;
	uint16_t x260 = 1610U;
	volatile int32_t t62 = -83376765;

	t62 = ((x257<x258)|(x259/x260));

	if (t62 != 40) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x261 = INT64_MIN;
	static int32_t x262 = -1;
	volatile int16_t x263 = -1;
	uint16_t x264 = UINT16_MAX;
	volatile int32_t t63 = 984424803;

	t63 = ((x261<x262)|(x263/x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint16_t x265 = 23U;
	int64_t x266 = INT64_MIN;
	static int32_t x267 = INT32_MAX;
	int32_t x268 = INT32_MAX;

	t64 = ((x265<x266)|(x267/x268));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x269 = 7U;
	volatile int64_t x271 = INT64_MAX;
	volatile uint64_t x272 = 39LLU;
	volatile uint64_t t65 = 507873765365538LLU;

	t65 = ((x269<x270)|(x271/x272));

	if (t65 != 236496718893712201LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = -91;
	int64_t x278 = INT64_MIN;
	int64_t x279 = INT64_MAX;
	int32_t x280 = INT32_MIN;
	volatile int64_t t66 = -358LL;

	t66 = ((x277<x278)|(x279/x280));

	if (t66 != -4294967295LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = UINT8_MAX;
	int64_t x282 = INT64_MIN;
	int16_t x283 = INT16_MIN;
	uint32_t x284 = 208544U;

	t67 = ((x281<x282)|(x283/x284));

	if (t67 != 20594U) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x285 = 29982629;
	static int16_t x287 = INT16_MIN;
	static uint16_t x288 = UINT16_MAX;
	int32_t t68 = 1084;

	t68 = ((x285<x286)|(x287/x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x289 = UINT8_MAX;
	uint16_t x290 = UINT16_MAX;
	uint16_t x292 = 2U;

	t69 = ((x289<x290)|(x291/x292));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x298 = INT32_MIN;
	int32_t x300 = INT32_MAX;
	int64_t t70 = -29664030LL;

	t70 = ((x297<x298)|(x299/x300));

	if (t70 != -4294967298LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x301 = -13;
	static int32_t x303 = INT32_MAX;
	static int32_t x304 = INT32_MIN;

	t71 = ((x301<x302)|(x303/x304));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x305 = 2121184885U;
	volatile uint64_t x307 = 132062410797127589LLU;
	uint64_t t72 = 399878518335833LLU;

	t72 = ((x305<x306)|(x307/x308));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = INT32_MIN;
	static int32_t x311 = INT32_MAX;
	static uint32_t x312 = UINT32_MAX;
	volatile uint32_t t73 = 116640U;

	t73 = ((x309<x310)|(x311/x312));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x313 = 3594;
	static int64_t x315 = -1LL;
	volatile int32_t x316 = INT32_MIN;

	t74 = ((x313<x314)|(x315/x316));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x318 = 102248LLU;
	volatile int8_t x319 = -1;
	static uint16_t x320 = 46U;
	static volatile int32_t t75 = -1261;

	t75 = ((x317<x318)|(x319/x320));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x321 = -22;
	volatile int16_t x322 = INT16_MAX;
	static int32_t x324 = -1;
	static volatile uint32_t t76 = 255773405U;

	t76 = ((x321<x322)|(x323/x324));

	if (t76 != 1U) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x325 = INT8_MIN;
	uint64_t x326 = UINT64_MAX;
	uint8_t x328 = 1U;

	t77 = ((x325<x326)|(x327/x328));

	if (t77 != -32767) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x332 = INT8_MAX;
	static int32_t t78 = 220226;

	t78 = ((x329<x330)|(x331/x332));

	if (t78 != 99) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x333 = 16U;
	int8_t x334 = INT8_MIN;
	volatile int64_t x335 = INT64_MIN;
	volatile uint16_t x336 = 13410U;
	volatile int64_t t79 = -2131483161940021185LL;

	t79 = ((x333<x334)|(x335/x336));

	if (t79 != -687798063896702LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x337 = 586U;
	static volatile int16_t x338 = INT16_MIN;
	int64_t x339 = INT64_MIN;
	volatile int8_t x340 = 8;
	int64_t t80 = -1118911466398225544LL;

	t80 = ((x337<x338)|(x339/x340));

	if (t80 != -1152921504606846975LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x341 = INT8_MIN;
	uint16_t x342 = 12U;
	int32_t x343 = -1;
	int16_t x344 = INT16_MIN;

	t81 = ((x341<x342)|(x343/x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x345 = -1;
	static int8_t x346 = -1;
	volatile uint8_t x347 = 7U;
	uint8_t x348 = UINT8_MAX;

	t82 = ((x345<x346)|(x347/x348));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x349 = INT64_MAX;
	uint16_t x350 = 100U;
	volatile int32_t x352 = 121;
	volatile int32_t t83 = 32622;

	t83 = ((x349<x350)|(x351/x352));

	if (t83 != 17747798) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x353 = 0;
	int64_t x354 = INT64_MIN;
	int64_t x355 = -9LL;
	uint16_t x356 = UINT16_MAX;
	int64_t t84 = 230522945390623645LL;

	t84 = ((x353<x354)|(x355/x356));

	if (t84 != 0LL) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x357 = -1;
	uint32_t x359 = 650525275U;
	volatile int64_t x360 = -1LL;
	int64_t t85 = 296098338368LL;

	t85 = ((x357<x358)|(x359/x360));

	if (t85 != -650525275LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x362 = -1;
	int8_t x363 = -1;
	int16_t x364 = INT16_MIN;

	t86 = ((x361<x362)|(x363/x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x369 = INT32_MAX;
	uint32_t x371 = 1720600223U;
	volatile uint64_t t87 = 26092249122326719LLU;

	t87 = ((x369<x370)|(x371/x372));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x373 = 86LL;
	int8_t x374 = INT8_MAX;
	static int32_t x375 = 206;
	static int16_t x376 = -1;
	int32_t t88 = 1;

	t88 = ((x373<x374)|(x375/x376));

	if (t88 != -205) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = INT64_MIN;
	volatile int64_t t89 = 63LL;

	t89 = ((x377<x378)|(x379/x380));

	if (t89 != 1162488494293LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x382 = INT32_MAX;
	int32_t x384 = -1;

	t90 = ((x381<x382)|(x383/x384));

	if (t90 != -255) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x385 = INT64_MIN;
	int8_t x386 = INT8_MAX;
	static int16_t x387 = -6;
	int32_t x388 = -1;
	static volatile int32_t t91 = 31613;

	t91 = ((x385<x386)|(x387/x388));

	if (t91 != 7) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x390 = INT32_MIN;
	int8_t x391 = INT8_MIN;
	uint64_t x392 = 6545235719389338LLU;

	t92 = ((x389<x390)|(x391/x392));

	if (t92 != 2819LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x393 = 103140017;
	static int8_t x394 = 0;
	volatile uint64_t x395 = 2688342LLU;
	int16_t x396 = INT16_MIN;
	uint64_t t93 = 1114013794048195LLU;

	t93 = ((x393<x394)|(x395/x396));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x397 = INT16_MAX;
	int32_t x398 = 2415355;
	volatile int16_t x399 = -1;
	volatile int8_t x400 = INT8_MIN;

	t94 = ((x397<x398)|(x399/x400));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x401 = INT16_MAX;
	int64_t x402 = 14722009352LL;
	int32_t x403 = INT32_MIN;
	uint8_t x404 = 16U;
	volatile int32_t t95 = 8;

	t95 = ((x401<x402)|(x403/x404));

	if (t95 != -134217727) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = 1988;
	uint64_t x406 = 33033710542LLU;
	uint32_t x407 = 262U;
	static int8_t x408 = INT8_MIN;
	uint32_t t96 = 871U;

	t96 = ((x405<x406)|(x407/x408));

	if (t96 != 1U) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x409 = INT32_MIN;
	int16_t x410 = 675;
	int16_t x411 = 4;
	volatile int16_t x412 = 1;

	t97 = ((x409<x410)|(x411/x412));

	if (t97 != 5) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x414 = INT64_MIN;
	static uint32_t x415 = 700U;
	uint64_t x416 = UINT64_MAX;
	uint64_t t98 = 200LLU;

	t98 = ((x413<x414)|(x415/x416));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x418 = -1;
	uint8_t x419 = 9U;
	volatile uint8_t x420 = 26U;
	volatile int32_t t99 = 17219474;

	t99 = ((x417<x418)|(x419/x420));

	if (t99 != 1) { NG(); } else { ; }
	
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

