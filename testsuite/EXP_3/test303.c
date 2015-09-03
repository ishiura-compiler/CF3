#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x5 = 1422;
int8_t x6 = INT8_MIN;
int8_t x7 = INT8_MIN;
int32_t t1 = -140117243;
volatile int8_t x16 = -1;
static uint64_t x26 = 2385166LLU;
volatile uint64_t t3 = 4521LLU;
int16_t x34 = 12;
volatile int8_t x38 = INT8_MIN;
volatile int32_t x39 = -1;
uint8_t x47 = 5U;
uint16_t x58 = 3728U;
volatile int32_t x59 = INT32_MIN;
volatile uint32_t x66 = 0U;
uint16_t x70 = 739U;
int32_t x71 = -1;
static uint32_t x72 = 364125U;
uint16_t x73 = 29U;
static int8_t x76 = INT8_MIN;
volatile int32_t t12 = -1702646;
volatile uint64_t t14 = 3985LLU;
int32_t x88 = INT32_MIN;
uint8_t x96 = 6U;
static volatile int32_t x108 = -1;
volatile int64_t x110 = INT64_MIN;
uint8_t x111 = UINT8_MAX;
uint32_t x126 = UINT32_MAX;
int8_t x130 = INT8_MAX;
volatile uint16_t x134 = 120U;
static volatile int16_t x146 = -1;
int64_t x149 = 858874133LL;
int8_t x150 = -1;
uint16_t x158 = 6U;
uint8_t x160 = 3U;
static int8_t x162 = INT8_MAX;
int8_t x166 = 1;
static int16_t x167 = -10424;
volatile int8_t x174 = INT8_MIN;
int16_t x180 = -14892;
volatile int8_t x184 = INT8_MIN;
static uint8_t x195 = 50U;
static int16_t x196 = INT16_MAX;
static volatile int64_t t40 = 1LL;
int64_t x209 = -1530LL;
volatile uint32_t x210 = 237354003U;
int64_t x219 = INT64_MIN;
int32_t t46 = 441;
volatile uint8_t x233 = UINT8_MAX;
uint64_t x235 = UINT64_MAX;
volatile uint64_t t47 = 2LLU;
uint64_t x241 = UINT64_MAX;
volatile uint64_t t48 = 120581335LLU;
volatile uint8_t x246 = 1U;
static volatile uint32_t t49 = 59094U;
int8_t x253 = -1;
static volatile int16_t x255 = INT16_MIN;
uint32_t x257 = UINT32_MAX;
int64_t x260 = 72832LL;
int8_t x261 = INT8_MIN;
volatile int32_t t52 = -7;
int32_t x269 = INT32_MAX;
uint32_t x273 = UINT32_MAX;
int16_t x281 = 3;
int64_t t56 = -22597676932LL;
int64_t x285 = INT64_MIN;
int32_t x288 = -1;
static uint64_t x299 = UINT64_MAX;
int64_t x300 = 271LL;
static uint16_t x311 = 101U;
volatile int32_t x316 = -1;
int16_t x317 = 706;
volatile int16_t x321 = 194;
int32_t x324 = INT32_MIN;
int32_t x325 = -1;
uint32_t x334 = 91U;
int64_t x335 = -1LL;
int64_t x336 = INT64_MAX;
uint32_t x337 = 100570748U;
int8_t x339 = -1;
uint16_t x350 = UINT16_MAX;
uint8_t x359 = 13U;
int32_t x363 = -1;
volatile int32_t x371 = INT32_MIN;
int64_t t76 = -806LL;
static uint16_t x379 = 449U;
static volatile int16_t x383 = -1;
uint16_t x387 = 13U;
int64_t t79 = 945817665LL;
volatile uint8_t x391 = 2U;
uint64_t t80 = 195034440LLU;
static uint8_t x394 = 92U;
static volatile int8_t x395 = -6;
static volatile int8_t x396 = INT8_MIN;
int16_t x399 = -1;
volatile int64_t x405 = -139768670047LL;
volatile int64_t t86 = -9554355824LL;
volatile uint64_t t87 = 1412078633324571LLU;
static int64_t x425 = -593643LL;
uint64_t x431 = UINT64_MAX;
int8_t x433 = INT8_MIN;
int8_t x440 = -1;
volatile uint8_t x443 = UINT8_MAX;
uint32_t x451 = 1517801U;
static uint8_t x462 = UINT8_MAX;
uint64_t x463 = UINT64_MAX;
uint64_t t97 = 10889LLU;
static uint16_t x472 = 1U;
int8_t x473 = 0;
int64_t x476 = 68628891296LL;


void f0(void) {
	int32_t x1 = 39039;
	uint64_t x2 = 76631338046124158LLU;
	static int8_t x3 = -1;
	volatile uint8_t x4 = UINT8_MAX;
	static volatile uint64_t t0 = 0LLU;

	t0 = ((x1&x2)/(x3-x4));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x8 = -155;

	t1 = ((x5&x6)/(x7-x8));

	if (t1 != 52) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x13 = 289068;
	volatile int8_t x14 = INT8_MAX;
	int32_t x15 = 25769;
	static volatile int32_t t2 = 3937;

	t2 = ((x13&x14)/(x15-x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x25 = INT32_MIN;
	uint16_t x27 = 0U;
	int8_t x28 = 1;

	t3 = ((x25&x26)/(x27-x28));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x33 = UINT8_MAX;
	uint32_t x35 = 690962282U;
	uint16_t x36 = 1804U;
	volatile uint32_t t4 = 598938607U;

	t4 = ((x33&x34)/(x35-x36));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x37 = -23862810985LL;
	int64_t x40 = INT64_MIN;
	volatile int64_t t5 = 1841649LL;

	t5 = ((x37&x38)/(x39-x40));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x45 = UINT32_MAX;
	uint16_t x46 = 2908U;
	static int8_t x48 = 6;
	uint32_t t6 = 1650037U;

	t6 = ((x45&x46)/(x47-x48));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x53 = 23071U;
	volatile int64_t x54 = INT64_MAX;
	static int32_t x55 = -5490;
	int32_t x56 = -1;
	volatile int64_t t7 = 13LL;

	t7 = ((x53&x54)/(x55-x56));

	if (t7 != -4LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x57 = INT32_MIN;
	volatile uint64_t x60 = 404885512223LLU;
	volatile uint64_t t8 = 1093937622027250LLU;

	t8 = ((x57&x58)/(x59-x60));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x61 = 5U;
	uint32_t x62 = UINT32_MAX;
	uint32_t x63 = 9250U;
	uint32_t x64 = UINT32_MAX;
	volatile uint32_t t9 = 69788U;

	t9 = ((x61&x62)/(x63-x64));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x65 = -1;
	int32_t x67 = INT32_MAX;
	uint32_t x68 = 1928U;
	uint32_t t10 = 221U;

	t10 = ((x65&x66)/(x67-x68));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x69 = 9;
	volatile uint32_t t11 = 2914855U;

	t11 = ((x69&x70)/(x71-x72));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x74 = -1;
	int32_t x75 = 1;

	t12 = ((x73&x74)/(x75-x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x77 = 263388652563LLU;
	int8_t x78 = INT8_MAX;
	int64_t x79 = INT64_MAX;
	uint8_t x80 = UINT8_MAX;
	volatile uint64_t t13 = 2026586991575546LLU;

	t13 = ((x77&x78)/(x79-x80));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x81 = 15U;
	volatile int16_t x82 = INT16_MAX;
	volatile int32_t x83 = -528162896;
	static volatile uint64_t x84 = UINT64_MAX;

	t14 = ((x81&x82)/(x83-x84));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x85 = 0;
	int8_t x86 = 0;
	volatile uint64_t x87 = 186018968039LLU;
	uint64_t t15 = 0LLU;

	t15 = ((x85&x86)/(x87-x88));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x89 = INT32_MAX;
	int16_t x90 = 314;
	int8_t x91 = INT8_MAX;
	int8_t x92 = INT8_MIN;
	static int32_t t16 = -1;

	t16 = ((x89&x90)/(x91-x92));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x93 = -1;
	int8_t x94 = -21;
	int8_t x95 = INT8_MIN;
	int32_t t17 = 4145913;

	t17 = ((x93&x94)/(x95-x96));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x97 = -22929LL;
	uint16_t x98 = UINT16_MAX;
	uint64_t x99 = 843LLU;
	uint64_t x100 = 392075280LLU;
	volatile uint64_t t18 = 46244748317LLU;

	t18 = ((x97&x98)/(x99-x100));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x101 = INT8_MIN;
	uint8_t x102 = UINT8_MAX;
	static volatile uint64_t x103 = 871803634920224867LLU;
	int32_t x104 = -1066;
	uint64_t t19 = 2LLU;

	t19 = ((x101&x102)/(x103-x104));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x105 = INT64_MIN;
	static volatile uint64_t x106 = UINT64_MAX;
	int8_t x107 = 7;
	volatile uint64_t t20 = 3733816796555415LLU;

	t20 = ((x105&x106)/(x107-x108));

	if (t20 != 1152921504606846976LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x109 = 12;
	int8_t x112 = INT8_MIN;
	int64_t t21 = 3046796851507038LL;

	t21 = ((x109&x110)/(x111-x112));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x117 = -2663LL;
	uint64_t x118 = 2756422LLU;
	int32_t x119 = 0;
	static int16_t x120 = -506;
	uint64_t t22 = 323750LLU;

	t22 = ((x117&x118)/(x119-x120));

	if (t22 != 5442LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x121 = 1982U;
	volatile int64_t x122 = 11541205333382076LL;
	uint64_t x123 = UINT64_MAX;
	int64_t x124 = INT64_MIN;
	uint64_t t23 = 2014LLU;

	t23 = ((x121&x122)/(x123-x124));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x125 = INT16_MIN;
	volatile uint32_t x127 = 478260U;
	volatile int8_t x128 = INT8_MAX;
	static uint32_t t24 = 70338026U;

	t24 = ((x125&x126)/(x127-x128));

	if (t24 != 8982U) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x129 = INT64_MIN;
	uint64_t x131 = 25129201LLU;
	int32_t x132 = INT32_MAX;
	volatile uint64_t t25 = 3491031274215586789LLU;

	t25 = ((x129&x130)/(x131-x132));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = INT64_MAX;
	volatile uint64_t x135 = 47542188986552562LLU;
	int8_t x136 = 21;
	uint64_t t26 = 1989210561381546335LLU;

	t26 = ((x133&x134)/(x135-x136));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x137 = -1LL;
	int64_t x138 = -189LL;
	static volatile int8_t x139 = 7;
	int16_t x140 = INT16_MAX;
	volatile int64_t t27 = -3LL;

	t27 = ((x137&x138)/(x139-x140));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x145 = UINT64_MAX;
	uint32_t x147 = 69U;
	static volatile int64_t x148 = 31071797084534046LL;
	volatile uint64_t t28 = 8207231412863582LLU;

	t28 = ((x145&x146)/(x147-x148));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x151 = -1;
	uint8_t x152 = 1U;
	int64_t t29 = -18792214LL;

	t29 = ((x149&x150)/(x151-x152));

	if (t29 != -429437066LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x153 = INT16_MIN;
	volatile uint32_t x154 = UINT32_MAX;
	volatile uint8_t x155 = 1U;
	uint32_t x156 = UINT32_MAX;
	uint32_t t30 = 302U;

	t30 = ((x153&x154)/(x155-x156));

	if (t30 != 2147467264U) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x157 = 1U;
	int8_t x159 = -3;
	int32_t t31 = -43;

	t31 = ((x157&x158)/(x159-x160));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x161 = 130U;
	int8_t x163 = INT8_MAX;
	static uint8_t x164 = 2U;
	volatile int32_t t32 = -147262;

	t32 = ((x161&x162)/(x163-x164));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = -3;
	int16_t x168 = INT16_MIN;
	int32_t t33 = -55488263;

	t33 = ((x165&x166)/(x167-x168));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x169 = INT64_MAX;
	static int16_t x170 = -1;
	int64_t x171 = INT64_MIN;
	static int64_t x172 = -2500177810544779592LL;
	int64_t t34 = -3891896886952635162LL;

	t34 = ((x169&x170)/(x171-x172));

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x173 = UINT8_MAX;
	int64_t x175 = -3991LL;
	volatile int32_t x176 = INT32_MAX;
	volatile int64_t t35 = 15513108LL;

	t35 = ((x173&x174)/(x175-x176));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x177 = INT32_MAX;
	uint8_t x178 = UINT8_MAX;
	int16_t x179 = -1;
	int32_t t36 = 0;

	t36 = ((x177&x178)/(x179-x180));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x181 = INT16_MAX;
	uint8_t x182 = 0U;
	uint8_t x183 = 12U;
	volatile int32_t t37 = -252566;

	t37 = ((x181&x182)/(x183-x184));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = -1;
	volatile int64_t x194 = -1LL;
	volatile int64_t t38 = 13619401343590950LL;

	t38 = ((x193&x194)/(x195-x196));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x197 = UINT64_MAX;
	int16_t x198 = INT16_MIN;
	uint8_t x199 = UINT8_MAX;
	static uint32_t x200 = UINT32_MAX;
	uint64_t t39 = 8776857928705LLU;

	t39 = ((x197&x198)/(x199-x200));

	if (t39 != 72057594037927808LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x201 = -3072865951581LL;
	int64_t x202 = INT64_MIN;
	int16_t x203 = INT16_MIN;
	volatile int16_t x204 = 593;

	t40 = ((x201&x202)/(x203-x204));

	if (t40 != 276471689603272LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x205 = INT32_MAX;
	int8_t x206 = INT8_MIN;
	int8_t x207 = -1;
	int32_t x208 = INT32_MAX;
	static volatile int32_t t41 = -10;

	t41 = ((x205&x206)/(x207-x208));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x211 = 2771;
	int64_t x212 = -176949451666201LL;
	static volatile int64_t t42 = -3633788330956251390LL;

	t42 = ((x209&x210)/(x211-x212));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x217 = -1;
	volatile int8_t x218 = 3;
	volatile int8_t x220 = INT8_MIN;
	volatile int64_t t43 = -2017754LL;

	t43 = ((x217&x218)/(x219-x220));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x221 = 108U;
	uint16_t x222 = UINT16_MAX;
	int64_t x223 = 4143639669579LL;
	int32_t x224 = INT32_MIN;
	int64_t t44 = -28619414LL;

	t44 = ((x221&x222)/(x223-x224));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x225 = -1;
	static volatile int16_t x226 = INT16_MIN;
	int32_t x227 = -1;
	static uint64_t x228 = 499671701LLU;
	uint64_t t45 = 12901417567562LLU;

	t45 = ((x225&x226)/(x227-x228));

	if (t45 != 1LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x229 = INT32_MAX;
	int32_t x230 = -1;
	uint16_t x231 = 163U;
	static int16_t x232 = INT16_MIN;

	t46 = ((x229&x230)/(x231-x232));

	if (t46 != 65211) { NG(); } else { ; }
	
}

void f47(void) {
	static int8_t x234 = -1;
	static int16_t x236 = 5;

	t47 = ((x233&x234)/(x235-x236));

	if (t47 != 0LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x242 = INT16_MAX;
	static uint32_t x243 = UINT32_MAX;
	int64_t x244 = -1LL;

	t48 = ((x241&x242)/(x243-x244));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x245 = 62417806U;
	int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MIN;

	t49 = ((x245&x246)/(x247-x248));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x254 = 8066727809LLU;
	static int8_t x256 = INT8_MIN;
	volatile uint64_t t50 = 0LLU;

	t50 = ((x253&x254)/(x255-x256));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x258 = INT32_MIN;
	volatile int64_t x259 = -27890LL;
	int64_t t51 = 1075LL;

	t51 = ((x257&x258)/(x259-x260));

	if (t51 != -21320LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x262 = INT16_MIN;
	static int16_t x263 = INT16_MIN;
	volatile int8_t x264 = 11;

	t52 = ((x261&x262)/(x263-x264));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x265 = 57;
	static int32_t x266 = 6020301;
	volatile int8_t x267 = INT8_MAX;
	int32_t x268 = -40;
	int32_t t53 = 541;

	t53 = ((x265&x266)/(x267-x268));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x270 = INT8_MIN;
	volatile int8_t x271 = INT8_MIN;
	int16_t x272 = INT16_MIN;
	int32_t t54 = 283852;

	t54 = ((x269&x270)/(x271-x272));

	if (t54 != 65793) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x274 = 757LL;
	int8_t x275 = 29;
	uint32_t x276 = 45242U;
	int64_t t55 = -14760106391849LL;

	t55 = ((x273&x274)/(x275-x276));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x282 = 19U;
	volatile int8_t x283 = 59;
	int64_t x284 = 1291120LL;

	t56 = ((x281&x282)/(x283-x284));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x286 = 2LLU;
	int8_t x287 = -29;
	static volatile uint64_t t57 = 31377LLU;

	t57 = ((x285&x286)/(x287-x288));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x289 = UINT8_MAX;
	int64_t x290 = 5634LL;
	static int32_t x291 = 0;
	static uint64_t x292 = 126434350LLU;
	volatile uint64_t t58 = 19039692LLU;

	t58 = ((x289&x290)/(x291-x292));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x297 = 3188439LLU;
	uint8_t x298 = 110U;
	static uint64_t t59 = 166LLU;

	t59 = ((x297&x298)/(x299-x300));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x305 = 567832681532480LLU;
	static int64_t x306 = INT64_MAX;
	uint64_t x307 = 1313445095329196LLU;
	int32_t x308 = INT32_MIN;
	volatile uint64_t t60 = 15474292746292237LLU;

	t60 = ((x305&x306)/(x307-x308));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x309 = 1662LL;
	uint8_t x310 = UINT8_MAX;
	int32_t x312 = 811;
	volatile int64_t t61 = -2013547874LL;

	t61 = ((x309&x310)/(x311-x312));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x313 = 29;
	uint64_t x314 = 2596672613736LLU;
	uint32_t x315 = 245943418U;
	uint64_t t62 = 52367688LLU;

	t62 = ((x313&x314)/(x315-x316));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x318 = INT64_MIN;
	static int64_t x319 = 0LL;
	volatile uint64_t x320 = 417400792408LLU;
	volatile uint64_t t63 = 2379472564349872LLU;

	t63 = ((x317&x318)/(x319-x320));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x322 = -1;
	int64_t x323 = -1LL;
	volatile int64_t t64 = 1525822080522LL;

	t64 = ((x321&x322)/(x323-x324));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x326 = -1;
	uint32_t x327 = 12685744U;
	uint8_t x328 = 0U;
	uint32_t t65 = 40483U;

	t65 = ((x325&x326)/(x327-x328));

	if (t65 != 338U) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x329 = 0;
	static int16_t x330 = INT16_MAX;
	static volatile int8_t x331 = INT8_MAX;
	volatile uint32_t x332 = UINT32_MAX;
	uint32_t t66 = 0U;

	t66 = ((x329&x330)/(x331-x332));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x333 = 14;
	int64_t t67 = 0LL;

	t67 = ((x333&x334)/(x335-x336));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x338 = -1LL;
	volatile uint8_t x340 = 47U;
	volatile int64_t t68 = 328370624217859LL;

	t68 = ((x337&x338)/(x339-x340));

	if (t68 != -2095223LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x341 = INT16_MIN;
	int8_t x342 = -1;
	int16_t x343 = -4006;
	int64_t x344 = INT64_MIN;
	int64_t t69 = 23819635846LL;

	t69 = ((x341&x342)/(x343-x344));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x345 = UINT16_MAX;
	int32_t x346 = 51903;
	int64_t x347 = -1LL;
	static volatile uint64_t x348 = 2123154056303785LLU;
	static volatile uint64_t t70 = 4791763LLU;

	t70 = ((x345&x346)/(x347-x348));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x349 = 1;
	volatile int32_t x351 = INT32_MIN;
	static volatile uint8_t x352 = 0U;
	int32_t t71 = 486;

	t71 = ((x349&x350)/(x351-x352));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x353 = -21;
	volatile int16_t x354 = -1;
	int64_t x355 = 997675LL;
	int64_t x356 = -1LL;
	static volatile int64_t t72 = -24875277647865LL;

	t72 = ((x353&x354)/(x355-x356));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x357 = 23U;
	uint16_t x358 = UINT16_MAX;
	static int8_t x360 = -62;
	int32_t t73 = 195863951;

	t73 = ((x357&x358)/(x359-x360));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x361 = -14;
	static int8_t x362 = INT8_MIN;
	static int64_t x364 = INT64_MAX;
	int64_t t74 = 1LL;

	t74 = ((x361&x362)/(x363-x364));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x369 = INT64_MIN;
	int32_t x370 = INT32_MIN;
	int32_t x372 = -1;
	int64_t t75 = 1818109771216300534LL;

	t75 = ((x369&x370)/(x371-x372));

	if (t75 != 4294967298LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x373 = INT8_MIN;
	int64_t x374 = -902986421LL;
	int16_t x375 = INT16_MAX;
	int64_t x376 = 85827438597383488LL;

	t76 = ((x373&x374)/(x375-x376));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x377 = -5;
	volatile int16_t x378 = 7610;
	uint64_t x380 = 65278451922536LLU;
	volatile uint64_t t77 = 0LLU;

	t77 = ((x377&x378)/(x379-x380));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x381 = UINT16_MAX;
	int64_t x382 = -244422893703LL;
	int64_t x384 = INT64_MIN;
	volatile int64_t t78 = -914209082LL;

	t78 = ((x381&x382)/(x383-x384));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x385 = INT32_MAX;
	int64_t x386 = INT64_MIN;
	uint16_t x388 = 5U;

	t79 = ((x385&x386)/(x387-x388));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x389 = -224294017;
	static uint16_t x390 = 139U;
	static uint64_t x392 = 1LLU;

	t80 = ((x389&x390)/(x391-x392));

	if (t80 != 11LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x393 = INT16_MIN;
	int32_t t81 = -2691405;

	t81 = ((x393&x394)/(x395-x396));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x397 = INT64_MIN;
	int64_t x398 = -1LL;
	int16_t x400 = 3;
	int64_t t82 = -470384417LL;

	t82 = ((x397&x398)/(x399-x400));

	if (t82 != 2305843009213693952LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x401 = 5U;
	int64_t x402 = INT64_MAX;
	int64_t x403 = INT64_MIN;
	int8_t x404 = -19;
	volatile int64_t t83 = 253327966522771LL;

	t83 = ((x401&x402)/(x403-x404));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x406 = 103274549807506LL;
	int64_t x407 = -9324157LL;
	static int8_t x408 = INT8_MIN;
	volatile int64_t t84 = 95929788212LL;

	t84 = ((x405&x406)/(x407-x408));

	if (t84 != -11061412LL) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x413 = INT16_MAX;
	volatile int8_t x414 = 0;
	volatile int32_t x415 = -1;
	int64_t x416 = INT64_MAX;
	int64_t t85 = 45547LL;

	t85 = ((x413&x414)/(x415-x416));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x417 = 1;
	uint16_t x418 = 4445U;
	int64_t x419 = INT64_MAX;
	uint16_t x420 = 13U;

	t86 = ((x417&x418)/(x419-x420));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x421 = INT64_MAX;
	uint64_t x422 = 139158042316816554LLU;
	int32_t x423 = INT32_MIN;
	uint64_t x424 = 13253125411442LLU;

	t87 = ((x421&x422)/(x423-x424));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x426 = 104;
	volatile int64_t x427 = -293652LL;
	int32_t x428 = INT32_MIN;
	volatile int64_t t88 = 45248LL;

	t88 = ((x425&x426)/(x427-x428));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x429 = 92;
	int16_t x430 = -1;
	static uint8_t x432 = UINT8_MAX;
	uint64_t t89 = 54110LLU;

	t89 = ((x429&x430)/(x431-x432));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x434 = -1;
	int8_t x435 = -42;
	uint32_t x436 = UINT32_MAX;
	uint32_t t90 = 2140454U;

	t90 = ((x433&x434)/(x435-x436));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x437 = 17;
	uint32_t x438 = 2U;
	int8_t x439 = 47;
	volatile uint32_t t91 = 14407054U;

	t91 = ((x437&x438)/(x439-x440));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x441 = 597500775451651465LLU;
	int16_t x442 = INT16_MIN;
	uint64_t x444 = 95307378599LLU;
	volatile uint64_t t92 = 273280LLU;

	t92 = ((x441&x442)/(x443-x444));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x445 = 240362043127348089LLU;
	static int64_t x446 = INT64_MIN;
	int32_t x447 = INT32_MIN;
	volatile int16_t x448 = INT16_MIN;
	volatile uint64_t t93 = 9842084109LLU;

	t93 = ((x445&x446)/(x447-x448));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x449 = INT8_MIN;
	volatile int16_t x450 = INT16_MIN;
	uint64_t x452 = UINT64_MAX;
	volatile uint64_t t94 = 3LLU;

	t94 = ((x449&x450)/(x451-x452));

	if (t94 != 12153590569593LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x453 = -1;
	uint32_t x454 = UINT32_MAX;
	int16_t x455 = INT16_MIN;
	uint16_t x456 = UINT16_MAX;
	volatile uint32_t t95 = 345015474U;

	t95 = ((x453&x454)/(x455-x456));

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x457 = 65U;
	int32_t x458 = 6473;
	int16_t x459 = INT16_MIN;
	static int64_t x460 = -1LL;
	volatile int64_t t96 = -9LL;

	t96 = ((x457&x458)/(x459-x460));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x461 = INT16_MAX;
	uint32_t x464 = UINT32_MAX;

	t97 = ((x461&x462)/(x463-x464));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x469 = -5356;
	int16_t x470 = INT16_MIN;
	int16_t x471 = INT16_MAX;
	volatile int32_t t98 = 1;

	t98 = ((x469&x470)/(x471-x472));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x474 = INT64_MAX;
	uint8_t x475 = 29U;
	int64_t t99 = -1213121LL;

	t99 = ((x473&x474)/(x475-x476));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

