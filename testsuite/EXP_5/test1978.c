#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 0U;
int8_t x22 = INT8_MIN;
uint64_t x23 = 24444872003LLU;
int64_t x40 = -1LL;
int32_t x42 = INT32_MIN;
int32_t t8 = -57988;
int8_t x52 = INT8_MIN;
int32_t x55 = 2671415;
static volatile int64_t t11 = INT64_MIN;
uint16_t x64 = UINT16_MAX;
int32_t x71 = -1;
static int8_t x74 = -1;
int8_t x77 = INT8_MIN;
int32_t t17 = 32569540;
uint16_t x94 = 2U;
uint8_t x101 = UINT8_MAX;
static int64_t t23 = 3721173071LL;
int32_t x110 = -8699201;
int8_t x113 = INT8_MIN;
uint16_t x114 = 0U;
int64_t x115 = 5206809LL;
volatile uint16_t x129 = UINT16_MAX;
int64_t x135 = INT64_MIN;
int64_t x136 = INT64_MIN;
volatile int64_t t29 = INT64_MIN;
uint8_t x142 = UINT8_MAX;
int8_t x145 = -1;
int8_t x146 = INT8_MIN;
uint16_t x155 = 2910U;
int16_t x162 = -7;
uint8_t x173 = 1U;
int64_t t39 = -6893723369LL;
int32_t t40 = 0;
int32_t t42 = -16239;
static volatile int64_t x200 = -3608415122LL;
static volatile uint32_t x201 = UINT32_MAX;
volatile int16_t x203 = INT16_MIN;
static uint16_t x205 = 297U;
int16_t x210 = INT16_MIN;
int32_t t47 = 3611;
static int64_t x214 = 91509409LL;
int64_t t48 = INT64_MIN;
static int64_t x221 = INT64_MAX;
uint8_t x223 = UINT8_MAX;
int64_t t49 = INT64_MAX;
int32_t x232 = 66674518;
uint64_t x239 = 30410326808092417LLU;
static int32_t x242 = INT32_MAX;
uint64_t x250 = 128745121041LLU;
volatile int32_t x253 = INT32_MAX;
int64_t x257 = -1LL;
static int32_t x259 = -160696743;
int8_t x260 = INT8_MAX;
int64_t t57 = -3752813LL;
int16_t x264 = INT16_MAX;
volatile int32_t t59 = -491;
int32_t x271 = INT32_MAX;
uint64_t x276 = 3766LLU;
int32_t x281 = INT32_MIN;
static uint8_t x289 = 30U;
int8_t x293 = INT8_MAX;
int32_t x312 = INT32_MAX;
static volatile uint32_t t70 = 13513186U;
static int64_t x319 = -1LL;
int16_t x322 = INT16_MIN;
static int8_t x328 = INT8_MIN;
uint32_t x329 = UINT32_MAX;
static uint8_t x332 = 112U;
uint64_t x334 = 21878065607121590LLU;
volatile int32_t t75 = -14796623;
int64_t x340 = 1LL;
uint32_t x343 = 6U;
int32_t t79 = -33115742;
int32_t x363 = -41727765;
static volatile uint32_t x367 = 141U;
int32_t x369 = 50063819;
uint32_t x372 = 440126U;
volatile int32_t t84 = -49934588;
static volatile int64_t x373 = -105536647961332284LL;
int64_t t85 = -19555479463LL;
int32_t x378 = INT32_MAX;
int8_t x380 = INT8_MIN;
int32_t x389 = INT32_MIN;
volatile uint64_t x392 = 10556095091271145LLU;
static volatile int32_t t89 = INT32_MIN;
int16_t x398 = INT16_MAX;
int32_t x402 = 162780244;
static int8_t x404 = INT8_MIN;
volatile int32_t t93 = 67075832;
int16_t x415 = INT16_MIN;
int16_t x427 = -4;
static int32_t t97 = 2534391;
static uint32_t x431 = 44760U;
uint64_t x432 = 26649802529498LLU;
volatile uint64_t x433 = 420577579LLU;
uint64_t t99 = 823027692970LLU;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int8_t x3 = 28;
	int8_t x4 = -1;
	static int32_t t0 = INT32_MAX;

	t0 = (x1-((x2|x3)<=x4));

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -1LL;
	int8_t x6 = INT8_MAX;
	int32_t x7 = 5378;
	uint8_t x8 = 29U;
	volatile int64_t t1 = 36459LL;

	t1 = (x5-((x6|x7)<=x8));

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = 9385LL;
	volatile int32_t x10 = INT32_MIN;
	volatile int64_t x11 = 83202146053798185LL;
	uint64_t x12 = 4909739LLU;
	int64_t t2 = -14454463487228758LL;

	t2 = (x9-((x10|x11)<=x12));

	if (t2 != 9385LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int32_t x14 = INT32_MIN;
	uint16_t x15 = UINT16_MAX;
	uint8_t x16 = UINT8_MAX;
	static int32_t t3 = 132909;

	t3 = (x13-((x14|x15)<=x16));

	if (t3 != 32766) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	int8_t x18 = -1;
	int16_t x19 = -1;
	uint8_t x20 = UINT8_MAX;
	uint32_t t4 = 13693U;

	t4 = (x17-((x18|x19)<=x20));

	if (t4 != 4294967294U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int16_t x21 = -1;
	int64_t x24 = -55LL;
	int32_t t5 = 823;

	t5 = (x21-((x22|x23)<=x24));

	if (t5 != -2) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MIN;
	int32_t x34 = INT32_MIN;
	static uint16_t x35 = UINT16_MAX;
	static uint16_t x36 = 0U;
	int32_t t6 = 549847;

	t6 = (x33-((x34|x35)<=x36));

	if (t6 != -129) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x37 = INT8_MIN;
	static int64_t x38 = -893LL;
	int8_t x39 = -1;
	static volatile int32_t t7 = 2680504;

	t7 = (x37-((x38|x39)<=x40));

	if (t7 != -129) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = 7;
	uint32_t x43 = UINT32_MAX;
	int16_t x44 = -1;

	t8 = (x41-((x42|x43)<=x44));

	if (t8 != 6) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	int32_t x46 = 42;
	int8_t x47 = -1;
	uint8_t x48 = 1U;
	volatile uint32_t t9 = 3285U;

	t9 = (x45-((x46|x47)<=x48));

	if (t9 != 4294967294U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x49 = INT8_MIN;
	int32_t x50 = 30588;
	int8_t x51 = INT8_MAX;
	static int32_t t10 = 286034;

	t10 = (x49-((x50|x51)<=x52));

	if (t10 != -128) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = INT64_MIN;
	uint32_t x54 = 25393233U;
	static volatile uint8_t x56 = 16U;

	t11 = (x53-((x54|x55)<=x56));

	if (t11 != INT64_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 502808517245LLU;
	volatile int64_t x62 = -1LL;
	int32_t x63 = INT32_MIN;
	uint64_t t12 = 0LLU;

	t12 = (x61-((x62|x63)<=x64));

	if (t12 != 502808517244LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x65 = INT8_MIN;
	int64_t x66 = 202363912342LL;
	static int32_t x67 = INT32_MIN;
	static int16_t x68 = INT16_MAX;
	static volatile int32_t t13 = -32461;

	t13 = (x65-((x66|x67)<=x68));

	if (t13 != -129) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 21LLU;
	uint8_t x70 = UINT8_MAX;
	uint16_t x72 = UINT16_MAX;
	uint64_t t14 = 126843650003LLU;

	t14 = (x69-((x70|x71)<=x72));

	if (t14 != 20LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = -1;
	int8_t x75 = INT8_MIN;
	uint16_t x76 = UINT16_MAX;
	volatile int32_t t15 = 15774710;

	t15 = (x73-((x74|x75)<=x76));

	if (t15 != -2) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x78 = 177U;
	static int16_t x79 = -1;
	static volatile int64_t x80 = 738792LL;
	volatile int32_t t16 = 327950;

	t16 = (x77-((x78|x79)<=x80));

	if (t16 != -128) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x81 = INT8_MAX;
	int16_t x82 = INT16_MAX;
	int8_t x83 = 0;
	int8_t x84 = INT8_MIN;

	t17 = (x81-((x82|x83)<=x84));

	if (t17 != 127) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 2LLU;
	static volatile int32_t x86 = INT32_MIN;
	static int64_t x87 = -1LL;
	volatile int64_t x88 = INT64_MAX;
	volatile uint64_t t18 = 514518855LLU;

	t18 = (x85-((x86|x87)<=x88));

	if (t18 != 1LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint32_t x89 = UINT32_MAX;
	volatile int64_t x90 = -1LL;
	uint32_t x91 = UINT32_MAX;
	uint32_t x92 = 44885U;
	static volatile uint32_t t19 = 6716U;

	t19 = (x89-((x90|x91)<=x92));

	if (t19 != 4294967294U) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x93 = -1;
	int64_t x95 = INT64_MIN;
	volatile int16_t x96 = -1;
	int32_t t20 = -129097;

	t20 = (x93-((x94|x95)<=x96));

	if (t20 != -2) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x97 = -1LL;
	volatile int64_t x98 = -1LL;
	int64_t x99 = INT64_MIN;
	uint32_t x100 = 64262U;
	volatile int64_t t21 = -13457LL;

	t21 = (x97-((x98|x99)<=x100));

	if (t21 != -2LL) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x102 = INT16_MIN;
	int32_t x103 = -1;
	int32_t x104 = -1;
	volatile int32_t t22 = 9968;

	t22 = (x101-((x102|x103)<=x104));

	if (t22 != 254) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x105 = 67LL;
	int8_t x106 = 26;
	int64_t x107 = 62LL;
	static int64_t x108 = INT64_MAX;

	t23 = (x105-((x106|x107)<=x108));

	if (t23 != 66LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x109 = 43LL;
	int8_t x111 = INT8_MIN;
	int8_t x112 = -1;
	volatile int64_t t24 = 251969583LL;

	t24 = (x109-((x110|x111)<=x112));

	if (t24 != 42LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x116 = -1;
	int32_t t25 = -18097;

	t25 = (x113-((x114|x115)<=x116));

	if (t25 != -128) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x121 = 97758U;
	volatile int64_t x122 = -211LL;
	static int16_t x123 = -1;
	int32_t x124 = -1;
	uint32_t t26 = 5574621U;

	t26 = (x121-((x122|x123)<=x124));

	if (t26 != 97757U) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = 293;
	static volatile uint16_t x126 = 1628U;
	int32_t x127 = INT32_MAX;
	int16_t x128 = -1;
	volatile int32_t t27 = 144687441;

	t27 = (x125-((x126|x127)<=x128));

	if (t27 != 293) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x130 = UINT8_MAX;
	static uint8_t x131 = UINT8_MAX;
	int32_t x132 = INT32_MIN;
	volatile int32_t t28 = -448957554;

	t28 = (x129-((x130|x131)<=x132));

	if (t28 != 65535) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x133 = INT64_MIN;
	volatile uint32_t x134 = UINT32_MAX;

	t29 = (x133-((x134|x135)<=x136));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x137 = INT16_MIN;
	static volatile uint64_t x138 = 64LLU;
	int8_t x139 = INT8_MAX;
	int32_t x140 = -1;
	int32_t t30 = -410881;

	t30 = (x137-((x138|x139)<=x140));

	if (t30 != -32769) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x141 = UINT64_MAX;
	int64_t x143 = INT64_MAX;
	static uint64_t x144 = UINT64_MAX;
	static uint64_t t31 = 236992573LLU;

	t31 = (x141-((x142|x143)<=x144));

	if (t31 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x147 = -1LL;
	int64_t x148 = -159168LL;
	int32_t t32 = 48;

	t32 = (x145-((x146|x147)<=x148));

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x149 = 402436234U;
	static volatile int8_t x150 = INT8_MIN;
	volatile int16_t x151 = INT16_MAX;
	int64_t x152 = 760356LL;
	volatile uint32_t t33 = 90U;

	t33 = (x149-((x150|x151)<=x152));

	if (t33 != 402436233U) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x153 = UINT64_MAX;
	int32_t x154 = INT32_MIN;
	uint8_t x156 = 1U;
	uint64_t t34 = 8378459246186292498LLU;

	t34 = (x153-((x154|x155)<=x156));

	if (t34 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint64_t x157 = 3810708377LLU;
	uint16_t x158 = 197U;
	int64_t x159 = -5367680433004LL;
	int16_t x160 = 127;
	static volatile uint64_t t35 = 6LLU;

	t35 = (x157-((x158|x159)<=x160));

	if (t35 != 3810708376LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int64_t x161 = 6408611996443LL;
	int8_t x163 = -1;
	static int64_t x164 = 1031306LL;
	int64_t t36 = -11911712LL;

	t36 = (x161-((x162|x163)<=x164));

	if (t36 != 6408611996442LL) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = INT16_MIN;
	int16_t x166 = INT16_MIN;
	static int16_t x167 = -1;
	volatile uint64_t x168 = 62307016077252LLU;
	int32_t t37 = -4005;

	t37 = (x165-((x166|x167)<=x168));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x174 = INT16_MIN;
	int64_t x175 = -1LL;
	int32_t x176 = INT32_MAX;
	volatile int32_t t38 = 50784;

	t38 = (x173-((x174|x175)<=x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x177 = 54LL;
	uint16_t x178 = 389U;
	static int64_t x179 = -19012LL;
	uint8_t x180 = 60U;

	t39 = (x177-((x178|x179)<=x180));

	if (t39 != 53LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x181 = -1;
	uint16_t x182 = UINT16_MAX;
	int8_t x183 = 1;
	volatile int8_t x184 = INT8_MIN;

	t40 = (x181-((x182|x183)<=x184));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x185 = UINT8_MAX;
	uint32_t x186 = 2U;
	int16_t x187 = 1158;
	int64_t x188 = INT64_MAX;
	volatile int32_t t41 = 740;

	t41 = (x185-((x186|x187)<=x188));

	if (t41 != 254) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x189 = 3248U;
	static int32_t x190 = -1;
	uint16_t x191 = 1U;
	static uint32_t x192 = UINT32_MAX;

	t42 = (x189-((x190|x191)<=x192));

	if (t42 != 3247) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x193 = 34U;
	int32_t x194 = -1;
	int32_t x195 = -11;
	static uint64_t x196 = 1466253267919LLU;
	volatile int32_t t43 = -62920;

	t43 = (x193-((x194|x195)<=x196));

	if (t43 != 34) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x197 = 24722387376LL;
	uint32_t x198 = 7719415U;
	uint8_t x199 = 0U;
	volatile int64_t t44 = -122331096540894LL;

	t44 = (x197-((x198|x199)<=x200));

	if (t44 != 24722387376LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x202 = UINT64_MAX;
	volatile int32_t x204 = INT32_MAX;
	static uint32_t t45 = UINT32_MAX;

	t45 = (x201-((x202|x203)<=x204));

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x206 = 1U;
	static int32_t x207 = 43990586;
	int32_t x208 = INT32_MIN;
	volatile int32_t t46 = 88;

	t46 = (x205-((x206|x207)<=x208));

	if (t46 != 297) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x209 = -3;
	volatile int32_t x211 = -1;
	uint32_t x212 = UINT32_MAX;

	t47 = (x209-((x210|x211)<=x212));

	if (t47 != -4) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x213 = INT64_MIN;
	static int8_t x215 = 1;
	volatile int32_t x216 = 119665;

	t48 = (x213-((x214|x215)<=x216));

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x222 = INT16_MIN;
	volatile uint32_t x224 = 18U;

	t49 = (x221-((x222|x223)<=x224));

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = -1LL;
	int32_t x226 = -1;
	int64_t x227 = INT64_MIN;
	volatile int32_t x228 = -17;
	volatile int64_t t50 = -65699724513536668LL;

	t50 = (x225-((x226|x227)<=x228));

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x229 = UINT16_MAX;
	int32_t x230 = INT32_MIN;
	static int32_t x231 = -1;
	volatile int32_t t51 = -112128;

	t51 = (x229-((x230|x231)<=x232));

	if (t51 != 65534) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x237 = INT8_MAX;
	static volatile int16_t x238 = -5919;
	static int64_t x240 = 162955LL;
	static volatile int32_t t52 = -3841302;

	t52 = (x237-((x238|x239)<=x240));

	if (t52 != 127) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x241 = UINT32_MAX;
	int64_t x243 = -19457832150539LL;
	int64_t x244 = -1LL;
	static uint32_t t53 = 8U;

	t53 = (x241-((x242|x243)<=x244));

	if (t53 != 4294967294U) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x245 = 6U;
	int64_t x246 = INT64_MIN;
	uint64_t x247 = 3LLU;
	uint16_t x248 = 1464U;
	volatile int32_t t54 = -28;

	t54 = (x245-((x246|x247)<=x248));

	if (t54 != 6) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = 1353;
	int8_t x251 = -1;
	uint32_t x252 = 119422U;
	static int32_t t55 = 35688598;

	t55 = (x249-((x250|x251)<=x252));

	if (t55 != 1353) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x254 = INT16_MIN;
	uint32_t x255 = 21U;
	uint8_t x256 = 56U;
	static int32_t t56 = INT32_MAX;

	t56 = (x253-((x254|x255)<=x256));

	if (t56 != INT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x258 = INT32_MAX;

	t57 = (x257-((x258|x259)<=x260));

	if (t57 != -2LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x261 = 3U;
	int32_t x262 = INT32_MIN;
	int32_t x263 = 890959724;
	int32_t t58 = -12842;

	t58 = (x261-((x262|x263)<=x264));

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x265 = 60;
	int32_t x266 = -1;
	static uint8_t x267 = 121U;
	int32_t x268 = -1;

	t59 = (x265-((x266|x267)<=x268));

	if (t59 != 59) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x269 = -4805;
	int8_t x270 = -1;
	volatile uint8_t x272 = 1U;
	static volatile int32_t t60 = 4854204;

	t60 = (x269-((x270|x271)<=x272));

	if (t60 != -4806) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x273 = 4U;
	int8_t x274 = -1;
	int16_t x275 = 1;
	int32_t t61 = 15638;

	t61 = (x273-((x274|x275)<=x276));

	if (t61 != 4) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x277 = 523;
	static uint32_t x278 = 335618864U;
	int64_t x279 = -1LL;
	int64_t x280 = INT64_MAX;
	volatile int32_t t62 = -691;

	t62 = (x277-((x278|x279)<=x280));

	if (t62 != 522) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x282 = -1;
	uint32_t x283 = 76U;
	int16_t x284 = INT16_MAX;
	int32_t t63 = INT32_MIN;

	t63 = (x281-((x282|x283)<=x284));

	if (t63 != INT32_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = INT16_MIN;
	volatile int8_t x286 = -1;
	static uint64_t x287 = 3772744LLU;
	int64_t x288 = INT64_MIN;
	int32_t t64 = 758;

	t64 = (x285-((x286|x287)<=x288));

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x290 = 1U;
	static int64_t x291 = INT64_MIN;
	int32_t x292 = -121;
	static int32_t t65 = -7506;

	t65 = (x289-((x290|x291)<=x292));

	if (t65 != 29) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x294 = UINT32_MAX;
	volatile int64_t x295 = -1LL;
	int16_t x296 = -54;
	int32_t t66 = -316;

	t66 = (x293-((x294|x295)<=x296));

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x301 = INT16_MIN;
	uint32_t x302 = 243617194U;
	int64_t x303 = INT64_MIN;
	volatile int16_t x304 = INT16_MIN;
	int32_t t67 = -1;

	t67 = (x301-((x302|x303)<=x304));

	if (t67 != -32769) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = INT8_MAX;
	int32_t x306 = INT32_MIN;
	static int16_t x307 = 14739;
	volatile uint16_t x308 = 19156U;
	volatile int32_t t68 = 6249331;

	t68 = (x305-((x306|x307)<=x308));

	if (t68 != 126) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x309 = INT8_MAX;
	static volatile int64_t x310 = -1LL;
	int16_t x311 = INT16_MAX;
	static volatile int32_t t69 = -96374329;

	t69 = (x309-((x310|x311)<=x312));

	if (t69 != 126) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x313 = 199U;
	int8_t x314 = -1;
	int32_t x315 = INT32_MAX;
	uint32_t x316 = UINT32_MAX;

	t70 = (x313-((x314|x315)<=x316));

	if (t70 != 198U) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = INT8_MIN;
	static uint32_t x318 = UINT32_MAX;
	uint64_t x320 = 102024161975287308LLU;
	int32_t t71 = 78;

	t71 = (x317-((x318|x319)<=x320));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x321 = -14;
	int32_t x323 = INT32_MAX;
	int8_t x324 = -1;
	int32_t t72 = 11;

	t72 = (x321-((x322|x323)<=x324));

	if (t72 != -15) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x325 = 516732U;
	int32_t x326 = -16380625;
	static int8_t x327 = 7;
	static uint32_t t73 = 38372459U;

	t73 = (x325-((x326|x327)<=x328));

	if (t73 != 516731U) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x330 = -1;
	uint16_t x331 = 1U;
	volatile uint32_t t74 = 1U;

	t74 = (x329-((x330|x331)<=x332));

	if (t74 != 4294967294U) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MAX;
	static int32_t x335 = INT32_MIN;
	int8_t x336 = -3;

	t75 = (x333-((x334|x335)<=x336));

	if (t75 != 32766) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x337 = UINT32_MAX;
	int32_t x338 = -5;
	int16_t x339 = -5;
	uint32_t t76 = 11U;

	t76 = (x337-((x338|x339)<=x340));

	if (t76 != 4294967294U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = INT16_MIN;
	int64_t x342 = INT64_MAX;
	int32_t x344 = -100942;
	int32_t t77 = -1;

	t77 = (x341-((x342|x343)<=x344));

	if (t77 != -32768) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x345 = INT8_MIN;
	int32_t x346 = 482777;
	static volatile int32_t x347 = INT32_MAX;
	uint32_t x348 = 15298U;
	volatile int32_t t78 = 968264612;

	t78 = (x345-((x346|x347)<=x348));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x349 = 3U;
	int32_t x350 = INT32_MIN;
	uint8_t x351 = 1U;
	uint64_t x352 = 3920277230895LLU;

	t79 = (x349-((x350|x351)<=x352));

	if (t79 != 3) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int32_t x353 = 8103;
	uint8_t x354 = 1U;
	volatile int8_t x355 = INT8_MIN;
	int64_t x356 = 2LL;
	volatile int32_t t80 = -1;

	t80 = (x353-((x354|x355)<=x356));

	if (t80 != 8102) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x357 = UINT32_MAX;
	static int64_t x358 = -1381367584672873LL;
	int32_t x359 = 19;
	static int32_t x360 = -302422851;
	volatile uint32_t t81 = 0U;

	t81 = (x357-((x358|x359)<=x360));

	if (t81 != 4294967294U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x361 = 988107641LLU;
	static int16_t x362 = INT16_MIN;
	int64_t x364 = -1LL;
	static volatile uint64_t t82 = 15770356725824643LLU;

	t82 = (x361-((x362|x363)<=x364));

	if (t82 != 988107640LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x365 = 664LLU;
	int8_t x366 = INT8_MIN;
	volatile uint32_t x368 = UINT32_MAX;
	volatile uint64_t t83 = 4625083262049950LLU;

	t83 = (x365-((x366|x367)<=x368));

	if (t83 != 663LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x370 = 1;
	volatile int32_t x371 = 0;

	t84 = (x369-((x370|x371)<=x372));

	if (t84 != 50063818) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x374 = 6565U;
	int16_t x375 = INT16_MAX;
	int32_t x376 = INT32_MIN;

	t85 = (x373-((x374|x375)<=x376));

	if (t85 != -105536647961332284LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x377 = INT16_MAX;
	int16_t x379 = INT16_MIN;
	volatile int32_t t86 = -896223312;

	t86 = (x377-((x378|x379)<=x380));

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x381 = INT32_MAX;
	int8_t x382 = -1;
	static int16_t x383 = -87;
	static uint8_t x384 = UINT8_MAX;
	int32_t t87 = 11539783;

	t87 = (x381-((x382|x383)<=x384));

	if (t87 != 2147483646) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x385 = 1LL;
	int16_t x386 = -1;
	int32_t x387 = INT32_MIN;
	uint64_t x388 = UINT64_MAX;
	int64_t t88 = 61276832499502263LL;

	t88 = (x385-((x386|x387)<=x388));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x390 = UINT64_MAX;
	int8_t x391 = 54;

	t89 = (x389-((x390|x391)<=x392));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x393 = 191U;
	int8_t x394 = 1;
	volatile int16_t x395 = 60;
	int8_t x396 = -1;
	uint32_t t90 = 2565926U;

	t90 = (x393-((x394|x395)<=x396));

	if (t90 != 191U) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x397 = INT8_MIN;
	static int16_t x399 = INT16_MIN;
	volatile uint32_t x400 = 56U;
	volatile int32_t t91 = 1;

	t91 = (x397-((x398|x399)<=x400));

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x401 = INT32_MAX;
	static volatile uint8_t x403 = 1U;
	static volatile int32_t t92 = INT32_MAX;

	t92 = (x401-((x402|x403)<=x404));

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x405 = INT8_MIN;
	uint64_t x406 = UINT64_MAX;
	static volatile int16_t x407 = INT16_MAX;
	uint64_t x408 = 5118LLU;

	t93 = (x405-((x406|x407)<=x408));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	static uint64_t x409 = UINT64_MAX;
	int16_t x410 = -14;
	int8_t x411 = 1;
	static volatile uint16_t x412 = UINT16_MAX;
	uint64_t t94 = 514783016LLU;

	t94 = (x409-((x410|x411)<=x412));

	if (t94 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x413 = INT8_MIN;
	int8_t x414 = 11;
	int64_t x416 = -1LL;
	static volatile int32_t t95 = -3232;

	t95 = (x413-((x414|x415)<=x416));

	if (t95 != -129) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x421 = 25227U;
	uint8_t x422 = UINT8_MAX;
	int64_t x423 = INT64_MIN;
	static int16_t x424 = INT16_MIN;
	static volatile int32_t t96 = 1;

	t96 = (x421-((x422|x423)<=x424));

	if (t96 != 25226) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x425 = 107828;
	volatile uint64_t x426 = UINT64_MAX;
	static int64_t x428 = INT64_MAX;

	t97 = (x425-((x426|x427)<=x428));

	if (t97 != 107828) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x429 = 739431204995LLU;
	int8_t x430 = INT8_MAX;
	volatile uint64_t t98 = 4300712652LLU;

	t98 = (x429-((x430|x431)<=x432));

	if (t98 != 739431204994LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x434 = -1;
	int16_t x435 = 7;
	int8_t x436 = -1;

	t99 = (x433-((x434|x435)<=x436));

	if (t99 != 420577578LLU) { NG(); } else { ; }
	
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

