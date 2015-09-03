#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x3 = 46;
volatile uint32_t x4 = UINT32_MAX;
int8_t x12 = -1;
int64_t t1 = -4595693881972497LL;
int32_t x13 = -1;
static uint64_t x16 = 45107857369LLU;
uint64_t t2 = UINT64_MAX;
uint32_t x19 = 379U;
uint32_t t3 = 56U;
uint64_t x22 = UINT64_MAX;
static int64_t x23 = -6867078427006LL;
int32_t x42 = -1;
static int8_t x48 = INT8_MAX;
int32_t x51 = -1;
uint32_t t10 = 37U;
int64_t x59 = INT64_MAX;
int8_t x63 = INT8_MIN;
uint16_t x66 = UINT16_MAX;
static int16_t x67 = INT16_MIN;
uint32_t x75 = 123334U;
int32_t x83 = INT32_MIN;
static int8_t x84 = INT8_MIN;
static int16_t x88 = 59;
int16_t x91 = INT16_MIN;
int16_t x94 = INT16_MIN;
uint64_t t22 = 3962727331963114LLU;
volatile int32_t x109 = -1;
uint16_t x119 = UINT16_MAX;
uint32_t x137 = UINT32_MAX;
uint64_t t31 = 728174LLU;
volatile int8_t x142 = 0;
int32_t x145 = INT32_MIN;
uint16_t x146 = UINT16_MAX;
static int32_t x150 = -1;
static uint64_t x156 = 4449020743525705720LLU;
volatile uint8_t x159 = 13U;
int64_t x170 = INT64_MIN;
volatile int64_t x172 = 906987771105LL;
int16_t x190 = INT16_MIN;
volatile int32_t t44 = -21399;
int8_t x198 = -1;
int16_t x199 = 2344;
int32_t x205 = INT32_MIN;
int8_t x208 = INT8_MIN;
int32_t t48 = INT32_MIN;
uint64_t x210 = UINT64_MAX;
volatile int16_t x212 = 3784;
volatile uint64_t x217 = 4093947681343665278LLU;
uint32_t x222 = 0U;
int64_t x224 = INT64_MIN;
volatile uint64_t x228 = 2899132947LLU;
int64_t x233 = -1LL;
int64_t t54 = 33665903711940740LL;
int64_t x243 = INT64_MIN;
uint32_t x244 = 11312692U;
int64_t x252 = INT64_MIN;
int8_t x264 = 1;
static int32_t x267 = INT32_MIN;
volatile uint64_t t63 = 2379012010756654489LLU;
int64_t x283 = INT64_MIN;
volatile int64_t t67 = -4LL;
static uint8_t x294 = UINT8_MAX;
volatile uint64_t x295 = UINT64_MAX;
volatile int32_t t69 = -6;
static volatile uint64_t x301 = 39LLU;
static int32_t x302 = -1;
uint64_t t70 = 447590440561LLU;
static int16_t x306 = INT16_MAX;
uint32_t x308 = 475U;
static int32_t x313 = -1;
uint64_t x320 = UINT64_MAX;
volatile uint64_t t74 = UINT64_MAX;
int32_t x325 = 141;
int16_t x326 = INT16_MIN;
volatile int64_t x334 = -1LL;
static uint64_t t78 = UINT64_MAX;
static int32_t x344 = -257197752;
int8_t x348 = INT8_MAX;
int16_t x362 = -1394;
static int64_t x363 = -1LL;
int32_t x367 = 23484901;
int32_t t87 = INT32_MAX;
uint64_t x384 = 6117010LLU;
uint64_t t88 = 49088651593LLU;
static uint64_t x385 = 338LLU;
static int32_t x386 = -1;
int16_t x390 = 1;
int16_t x395 = -1;
int64_t t93 = -183256LL;
int8_t x406 = INT8_MIN;
volatile int32_t x408 = -1;
static volatile uint32_t x411 = 430341U;
volatile int16_t x412 = INT16_MIN;
static volatile int32_t x422 = INT32_MAX;
uint64_t x427 = 8588120852664337LLU;
int16_t x428 = INT16_MIN;
static volatile uint64_t t99 = 1525LLU;


void f0(void) {
	uint32_t x1 = 6954046U;
	int32_t x2 = INT32_MIN;
	uint32_t t0 = 132985091U;

	t0 = (x1-((x2/x3)&x4));

	if (t0 != 53638473U) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -449;
	int64_t x10 = INT64_MIN;
	int16_t x11 = 112;

	t1 = (x9-((x10/x11)&x12));

	if (t1 != 82351536043345763LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x14 = 12U;
	int32_t x15 = -132453;

	t2 = (x13-((x14/x15)&x16));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 29U;
	uint8_t x18 = 24U;
	int16_t x20 = -1;

	t3 = (x17-((x18/x19)&x20));

	if (t3 != 29U) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 2U;
	static int64_t x24 = INT64_MIN;
	static uint64_t t4 = 4924760515609682LLU;

	t4 = (x21-((x22/x23)&x24));

	if (t4 != 2LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = INT8_MIN;
	int32_t x26 = -2245;
	int32_t x27 = INT32_MIN;
	static uint16_t x28 = UINT16_MAX;
	int32_t t5 = -20775999;

	t5 = (x25-((x26/x27)&x28));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = 5592U;
	static uint8_t x35 = 5U;
	static int8_t x36 = -13;
	uint32_t t6 = 400636156U;

	t6 = (x33-((x34/x35)&x36));

	if (t6 != 4294933422U) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x37 = INT32_MIN;
	volatile uint32_t x38 = UINT32_MAX;
	uint32_t x39 = 2431253U;
	volatile int32_t x40 = INT32_MAX;
	static uint32_t t7 = 174255U;

	t7 = (x37-((x38/x39)&x40));

	if (t7 != 2147481882U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = -2;
	int8_t x43 = INT8_MIN;
	int64_t x44 = 2346985LL;
	int64_t t8 = -34072816179702LL;

	t8 = (x41-((x42/x43)&x44));

	if (t8 != -2LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = -1;
	static volatile int16_t x46 = INT16_MAX;
	int64_t x47 = INT64_MIN;
	static int64_t t9 = -564204508430LL;

	t9 = (x45-((x46/x47)&x48));

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x49 = 1U;
	volatile uint8_t x50 = UINT8_MAX;
	uint32_t x52 = 601U;

	t10 = (x49-((x50/x51)&x52));

	if (t10 != 4294966784U) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x57 = 688148;
	int8_t x58 = -1;
	int16_t x60 = -1;
	static int64_t t11 = 40441LL;

	t11 = (x57-((x58/x59)&x60));

	if (t11 != 688148LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x61 = 4035LLU;
	volatile uint64_t x62 = 697930277699LLU;
	volatile int64_t x64 = INT64_MIN;
	volatile uint64_t t12 = 3532395771572LLU;

	t12 = (x61-((x62/x63)&x64));

	if (t12 != 4035LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x65 = INT64_MIN;
	volatile uint64_t x68 = 52779110405LLU;
	volatile uint64_t t13 = 7795284093546196LLU;

	t13 = (x65-((x66/x67)&x68));

	if (t13 != 9223371984075665403LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x69 = 29138646LLU;
	int64_t x70 = INT64_MIN;
	int16_t x71 = INT16_MIN;
	int16_t x72 = -2187;
	uint64_t t14 = 6906090LLU;

	t14 = (x69-((x70/x71)&x72));

	if (t14 != 18446462598761979606LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x73 = INT16_MIN;
	volatile uint16_t x74 = 0U;
	int64_t x76 = INT64_MIN;
	volatile int64_t t15 = 1712195661331034LL;

	t15 = (x73-((x74/x75)&x76));

	if (t15 != -32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x77 = -1;
	int8_t x78 = -1;
	static int8_t x79 = INT8_MAX;
	uint16_t x80 = UINT16_MAX;
	volatile int32_t t16 = 3;

	t16 = (x77-((x78/x79)&x80));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = 2076604676U;
	volatile uint16_t x82 = UINT16_MAX;
	uint32_t t17 = 789561U;

	t17 = (x81-((x82/x83)&x84));

	if (t17 != 2076604676U) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x85 = UINT32_MAX;
	int16_t x86 = -15;
	static int32_t x87 = INT32_MIN;
	uint32_t t18 = UINT32_MAX;

	t18 = (x85-((x86/x87)&x88));

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x89 = INT32_MIN;
	static int16_t x90 = 383;
	int32_t x92 = 7;
	volatile int32_t t19 = INT32_MIN;

	t19 = (x89-((x90/x91)&x92));

	if (t19 != INT32_MIN) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = 8042U;
	volatile int64_t x95 = INT64_MAX;
	volatile int8_t x96 = INT8_MIN;
	int64_t t20 = 217387688LL;

	t20 = (x93-((x94/x95)&x96));

	if (t20 != 8042LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = 5408U;
	int8_t x98 = -1;
	uint64_t x99 = UINT64_MAX;
	static int64_t x100 = INT64_MIN;
	uint64_t t21 = 33464LLU;

	t21 = (x97-((x98/x99)&x100));

	if (t21 != 5408LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x101 = INT16_MAX;
	static volatile int64_t x102 = INT64_MIN;
	uint64_t x103 = 76853681055624LLU;
	static int16_t x104 = -12761;

	t22 = (x101-((x102/x103)&x104));

	if (t22 != 18446744073709468667LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x105 = 249511;
	int16_t x106 = 1;
	int64_t x107 = -15735LL;
	static volatile uint64_t x108 = UINT64_MAX;
	static uint64_t t23 = 753LLU;

	t23 = (x105-((x106/x107)&x108));

	if (t23 != 249511LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x110 = UINT64_MAX;
	int16_t x111 = INT16_MAX;
	int32_t x112 = INT32_MAX;
	static volatile uint64_t t24 = 43417434610683728LLU;

	t24 = (x109-((x110/x111)&x112));

	if (t24 != 18446744073709027311LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x113 = INT64_MIN;
	uint32_t x114 = 24548096U;
	static uint64_t x115 = UINT64_MAX;
	int32_t x116 = -2469;
	static uint64_t t25 = 13958055516462LLU;

	t25 = (x113-((x114/x115)&x116));

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x117 = UINT8_MAX;
	uint32_t x118 = UINT32_MAX;
	int32_t x120 = INT32_MIN;
	static uint32_t t26 = 71U;

	t26 = (x117-((x118/x119)&x120));

	if (t26 != 255U) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x121 = 98478945LLU;
	int32_t x122 = -1;
	int64_t x123 = -501960692667797LL;
	int8_t x124 = -61;
	volatile uint64_t t27 = 819814LLU;

	t27 = (x121-((x122/x123)&x124));

	if (t27 != 98478945LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = INT32_MIN;
	static uint16_t x126 = 3U;
	int16_t x127 = INT16_MIN;
	uint8_t x128 = 6U;
	int32_t t28 = INT32_MIN;

	t28 = (x125-((x126/x127)&x128));

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MAX;
	int8_t x130 = 0;
	int64_t x131 = INT64_MIN;
	uint8_t x132 = UINT8_MAX;
	int64_t t29 = INT64_MAX;

	t29 = (x129-((x130/x131)&x132));

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 2U;
	uint16_t x134 = UINT16_MAX;
	int8_t x135 = INT8_MIN;
	int16_t x136 = -29;
	volatile int32_t t30 = -369;

	t30 = (x133-((x134/x135)&x136));

	if (t30 != 513) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x138 = UINT64_MAX;
	int8_t x139 = -37;
	volatile int64_t x140 = INT64_MAX;

	t31 = (x137-((x138/x139)&x140));

	if (t31 != 4294967294LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x141 = INT32_MIN;
	int64_t x143 = -623786979698LL;
	int64_t x144 = INT64_MAX;
	int64_t t32 = 516041805896051611LL;

	t32 = (x141-((x142/x143)&x144));

	if (t32 != -2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x147 = 7255U;
	static uint32_t x148 = 51U;
	uint32_t t33 = 487858U;

	t33 = (x145-((x146/x147)&x148));

	if (t33 != 2147483647U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x149 = -15;
	int64_t x151 = -1LL;
	int8_t x152 = INT8_MIN;
	int64_t t34 = 350245944314095LL;

	t34 = (x149-((x150/x151)&x152));

	if (t34 != -15LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x153 = INT16_MIN;
	uint64_t x154 = UINT64_MAX;
	static int64_t x155 = INT64_MIN;
	uint64_t t35 = 4605225219LLU;

	t35 = (x153-((x154/x155)&x156));

	if (t35 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x157 = -430888713LL;
	int8_t x158 = INT8_MIN;
	int32_t x160 = -1;
	int64_t t36 = 4345867754705810LL;

	t36 = (x157-((x158/x159)&x160));

	if (t36 != -430888704LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x161 = -1;
	int64_t x162 = INT64_MIN;
	volatile uint8_t x163 = UINT8_MAX;
	int8_t x164 = INT8_MIN;
	volatile int64_t t37 = 3227409401153597662LL;

	t37 = (x161-((x162/x163)&x164));

	if (t37 != 36170086419038335LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x165 = INT16_MIN;
	static int64_t x166 = INT64_MIN;
	int64_t x167 = INT64_MIN;
	int8_t x168 = 40;
	volatile int64_t t38 = 6450352204202LL;

	t38 = (x165-((x166/x167)&x168));

	if (t38 != -32768LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x169 = INT32_MAX;
	int8_t x171 = INT8_MIN;
	int64_t t39 = -13591586185LL;

	t39 = (x169-((x170/x171)&x172));

	if (t39 != 2147483647LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x173 = -1;
	int8_t x174 = -1;
	int16_t x175 = -1;
	int64_t x176 = INT64_MIN;
	int64_t t40 = 309LL;

	t40 = (x173-((x174/x175)&x176));

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x177 = 311327U;
	uint32_t x178 = UINT32_MAX;
	int8_t x179 = -1;
	int8_t x180 = 0;
	volatile uint32_t t41 = 3257U;

	t41 = (x177-((x178/x179)&x180));

	if (t41 != 311327U) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x181 = INT16_MAX;
	int32_t x182 = INT32_MAX;
	int64_t x183 = INT64_MIN;
	int16_t x184 = INT16_MIN;
	volatile int64_t t42 = 6819130972040LL;

	t42 = (x181-((x182/x183)&x184));

	if (t42 != 32767LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = INT8_MIN;
	int64_t x186 = 5805LL;
	uint16_t x187 = 501U;
	int8_t x188 = -1;
	int64_t t43 = 1540LL;

	t43 = (x185-((x186/x187)&x188));

	if (t43 != -139LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int8_t x189 = INT8_MIN;
	int8_t x191 = INT8_MAX;
	int8_t x192 = INT8_MIN;

	t44 = (x189-((x190/x191)&x192));

	if (t44 != 256) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x193 = INT16_MAX;
	volatile uint64_t x194 = 622705164421LLU;
	int8_t x195 = -1;
	static int8_t x196 = INT8_MAX;
	uint64_t t45 = 2169276524881LLU;

	t45 = (x193-((x194/x195)&x196));

	if (t45 != 32767LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -1;
	int8_t x200 = 1;
	volatile int32_t t46 = -101;

	t46 = (x197-((x198/x199)&x200));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = 0U;
	int8_t x202 = INT8_MIN;
	int32_t x203 = 18418680;
	int16_t x204 = INT16_MIN;
	int32_t t47 = -49895;

	t47 = (x201-((x202/x203)&x204));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x206 = INT16_MIN;
	int32_t x207 = 280919;

	t48 = (x205-((x206/x207)&x208));

	if (t48 != INT32_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = INT16_MAX;
	volatile uint32_t x211 = 463U;
	volatile uint64_t t49 = 242592LLU;

	t49 = (x209-((x210/x211)&x212));

	if (t49 != 31231LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x218 = INT8_MIN;
	uint32_t x219 = 387776U;
	uint32_t x220 = UINT32_MAX;
	uint64_t t50 = 308LLU;

	t50 = (x217-((x218/x219)&x220));

	if (t50 != 4093947681343654203LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile uint64_t x221 = 28700458LLU;
	int8_t x223 = INT8_MIN;
	uint64_t t51 = 721664LLU;

	t51 = (x221-((x222/x223)&x224));

	if (t51 != 28700458LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x225 = -106190559220327214LL;
	uint32_t x226 = UINT32_MAX;
	static uint16_t x227 = UINT16_MAX;
	uint64_t t52 = 16842605162209LLU;

	t52 = (x225-((x226/x227)&x228));

	if (t52 != 18340553514489158865LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x234 = INT64_MAX;
	uint32_t x235 = UINT32_MAX;
	static volatile uint8_t x236 = 113U;
	int64_t t53 = 20510553929025LL;

	t53 = (x233-((x234/x235)&x236));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x237 = 0;
	int16_t x238 = -5;
	static uint8_t x239 = 3U;
	int64_t x240 = 114175LL;

	t54 = (x237-((x238/x239)&x240));

	if (t54 != -114175LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = -1;
	static volatile int64_t t55 = -463478LL;

	t55 = (x241-((x242/x243)&x244));

	if (t55 != -32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x245 = UINT64_MAX;
	int32_t x246 = -1;
	uint16_t x247 = 7467U;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t56 = UINT64_MAX;

	t56 = (x245-((x246/x247)&x248));

	if (t56 != UINT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x249 = UINT64_MAX;
	int64_t x250 = INT64_MIN;
	static volatile int64_t x251 = 16365821LL;
	uint64_t t57 = 350LLU;

	t57 = (x249-((x250/x251)&x252));

	if (t57 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x253 = 7382;
	uint64_t x254 = UINT64_MAX;
	int16_t x255 = INT16_MIN;
	uint16_t x256 = 378U;
	static uint64_t t58 = 3978065042106LLU;

	t58 = (x253-((x254/x255)&x256));

	if (t58 != 7382LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x257 = -1;
	int32_t x258 = 131310927;
	int8_t x259 = -1;
	int32_t x260 = -1;
	volatile int32_t t59 = -222923;

	t59 = (x257-((x258/x259)&x260));

	if (t59 != 131310926) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x261 = INT16_MIN;
	int64_t x262 = 141046707778588662LL;
	int64_t x263 = INT64_MIN;
	static volatile int64_t t60 = -92648303668LL;

	t60 = (x261-((x262/x263)&x264));

	if (t60 != -32768LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x265 = 53039U;
	volatile int64_t x266 = INT64_MIN;
	volatile uint16_t x268 = 182U;
	int64_t t61 = 227127827893LL;

	t61 = (x265-((x266/x267)&x268));

	if (t61 != 53039LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x269 = 71U;
	int64_t x270 = -1LL;
	int16_t x271 = INT16_MAX;
	uint32_t x272 = UINT32_MAX;
	static volatile int64_t t62 = -72541257LL;

	t62 = (x269-((x270/x271)&x272));

	if (t62 != 71LL) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x273 = 7358;
	static int16_t x274 = INT16_MIN;
	static int16_t x275 = -1;
	uint64_t x276 = 2834490462811LLU;

	t63 = (x273-((x274/x275)&x276));

	if (t63 != 7358LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x277 = INT16_MIN;
	volatile int8_t x278 = -1;
	int64_t x279 = -9398906834LL;
	static uint32_t x280 = 27152081U;
	static volatile int64_t t64 = 4109224171094571LL;

	t64 = (x277-((x278/x279)&x280));

	if (t64 != -32768LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = INT16_MIN;
	static int8_t x282 = 0;
	int32_t x284 = INT32_MIN;
	int64_t t65 = -708304LL;

	t65 = (x281-((x282/x283)&x284));

	if (t65 != -32768LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x285 = UINT8_MAX;
	uint32_t x286 = 213181U;
	int16_t x287 = -1;
	volatile uint32_t x288 = 23084U;
	volatile uint32_t t66 = 36550U;

	t66 = (x285-((x286/x287)&x288));

	if (t66 != 255U) { NG(); } else { ; }
	
}

void f67(void) {
	static uint8_t x289 = UINT8_MAX;
	uint16_t x290 = 19939U;
	int64_t x291 = INT64_MIN;
	static int64_t x292 = INT64_MIN;

	t67 = (x289-((x290/x291)&x292));

	if (t67 != 255LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x293 = 0;
	volatile uint64_t x296 = 53198324703119LLU;
	uint64_t t68 = 1314829675137084100LLU;

	t68 = (x293-((x294/x295)&x296));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x297 = INT16_MIN;
	uint8_t x298 = UINT8_MAX;
	int8_t x299 = -1;
	static int32_t x300 = 598765;

	t69 = (x297-((x298/x299)&x300));

	if (t69 != -631297) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x303 = INT32_MIN;
	volatile uint64_t x304 = 468347188396265238LLU;

	t70 = (x301-((x302/x303)&x304));

	if (t70 != 39LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x305 = 27;
	static volatile int16_t x307 = INT16_MAX;
	volatile uint32_t t71 = 32686601U;

	t71 = (x305-((x306/x307)&x308));

	if (t71 != 26U) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x309 = 16U;
	int8_t x310 = -12;
	volatile int32_t x311 = -1;
	uint64_t x312 = UINT64_MAX;
	uint64_t t72 = 232748901935373LLU;

	t72 = (x309-((x310/x311)&x312));

	if (t72 != 4LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x314 = 0U;
	volatile int16_t x315 = 23;
	int16_t x316 = INT16_MIN;
	int32_t t73 = -13621944;

	t73 = (x313-((x314/x315)&x316));

	if (t73 != -1) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x317 = -1LL;
	int32_t x318 = -1;
	volatile uint16_t x319 = 251U;

	t74 = (x317-((x318/x319)&x320));

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x321 = 2130;
	volatile uint8_t x322 = 90U;
	int16_t x323 = INT16_MIN;
	uint16_t x324 = 24U;
	static int32_t t75 = 125687;

	t75 = (x321-((x322/x323)&x324));

	if (t75 != 2130) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x327 = 51765450;
	volatile int32_t x328 = INT32_MAX;
	static int32_t t76 = 809;

	t76 = (x325-((x326/x327)&x328));

	if (t76 != 141) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x333 = 31779676816210134LL;
	volatile int8_t x335 = 28;
	uint16_t x336 = 42U;
	int64_t t77 = -7571061LL;

	t77 = (x333-((x334/x335)&x336));

	if (t77 != 31779676816210134LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x337 = UINT64_MAX;
	uint8_t x338 = 0U;
	uint8_t x339 = 7U;
	static uint64_t x340 = UINT64_MAX;

	t78 = (x337-((x338/x339)&x340));

	if (t78 != UINT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x341 = -122464081LL;
	uint8_t x342 = 0U;
	int16_t x343 = 4702;
	volatile int64_t t79 = -2282772LL;

	t79 = (x341-((x342/x343)&x344));

	if (t79 != -122464081LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x345 = 14U;
	int64_t x346 = INT64_MIN;
	static uint8_t x347 = 5U;
	static int64_t t80 = -416LL;

	t80 = (x345-((x346/x347)&x348));

	if (t80 != -89LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x349 = INT16_MIN;
	static int8_t x350 = -1;
	static volatile int16_t x351 = 11712;
	int8_t x352 = INT8_MIN;
	static volatile int32_t t81 = 59694;

	t81 = (x349-((x350/x351)&x352));

	if (t81 != -32768) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x357 = INT64_MAX;
	uint64_t x358 = 14233534394487028LLU;
	int16_t x359 = INT16_MAX;
	int32_t x360 = -1;
	volatile uint64_t t82 = 3LLU;

	t82 = (x357-((x358/x359)&x360));

	if (t82 != 9223371602468521512LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x361 = UINT8_MAX;
	int8_t x364 = -1;
	volatile int64_t t83 = -3LL;

	t83 = (x361-((x362/x363)&x364));

	if (t83 != -1139LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x365 = 0;
	int32_t x366 = 2445085;
	static uint64_t x368 = 1281LLU;
	uint64_t t84 = 0LLU;

	t84 = (x365-((x366/x367)&x368));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x369 = INT8_MIN;
	int64_t x370 = 1617883549LL;
	int16_t x371 = INT16_MIN;
	uint8_t x372 = UINT8_MAX;
	volatile int64_t t85 = 109944832285LL;

	t85 = (x369-((x370/x371)&x372));

	if (t85 != -163LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = -1LL;
	int8_t x374 = -1;
	uint16_t x375 = UINT16_MAX;
	static int64_t x376 = -3506736317204904LL;
	static int64_t t86 = 100592LL;

	t86 = (x373-((x374/x375)&x376));

	if (t86 != -1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x377 = INT32_MAX;
	int16_t x378 = 1;
	int32_t x379 = INT32_MIN;
	static uint16_t x380 = 13451U;

	t87 = (x377-((x378/x379)&x380));

	if (t87 != INT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x381 = -1;
	uint16_t x382 = UINT16_MAX;
	int16_t x383 = INT16_MIN;

	t88 = (x381-((x382/x383)&x384));

	if (t88 != 18446744073703434605LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x387 = 105U;
	volatile uint32_t x388 = 4U;
	volatile uint64_t t89 = 17141297122LLU;

	t89 = (x385-((x386/x387)&x388));

	if (t89 != 338LLU) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int16_t x389 = INT16_MIN;
	static volatile int64_t x391 = -1LL;
	static volatile int64_t x392 = 31995420432667944LL;
	int64_t t90 = -6LL;

	t90 = (x389-((x390/x391)&x392));

	if (t90 != -31995420432700712LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x393 = INT16_MIN;
	uint16_t x394 = 0U;
	volatile int32_t x396 = -1;
	volatile int32_t t91 = 56865;

	t91 = (x393-((x394/x395)&x396));

	if (t91 != -32768) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x397 = INT64_MAX;
	volatile int32_t x398 = INT32_MIN;
	int8_t x399 = -50;
	uint16_t x400 = 1588U;
	int64_t t92 = 47301803LL;

	t92 = (x397-((x398/x399)&x400));

	if (t92 != 9223372036854774751LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x401 = 14624U;
	int32_t x402 = -424;
	int64_t x403 = INT64_MIN;
	static volatile uint32_t x404 = 39U;

	t93 = (x401-((x402/x403)&x404));

	if (t93 != 14624LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x405 = INT8_MIN;
	int64_t x407 = INT64_MAX;
	static volatile int64_t t94 = 250156LL;

	t94 = (x405-((x406/x407)&x408));

	if (t94 != -128LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = -1;
	uint16_t x410 = 86U;
	static volatile uint32_t t95 = UINT32_MAX;

	t95 = (x409-((x410/x411)&x412));

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x413 = -1;
	volatile uint16_t x414 = UINT16_MAX;
	static uint64_t x415 = 310791566643LLU;
	int16_t x416 = -1;
	uint64_t t96 = UINT64_MAX;

	t96 = (x413-((x414/x415)&x416));

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x417 = 0;
	int32_t x418 = -12;
	int64_t x419 = -123856045420LL;
	static int32_t x420 = -1;
	int64_t t97 = 508639307352677482LL;

	t97 = (x417-((x418/x419)&x420));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x421 = -7543;
	int32_t x423 = 24918135;
	int8_t x424 = -1;
	int32_t t98 = 1517;

	t98 = (x421-((x422/x423)&x424));

	if (t98 != -7629) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x425 = 1040438733LLU;
	volatile int32_t x426 = -738;

	t99 = (x425-((x426/x427)&x428));

	if (t99 != 1040438733LLU) { NG(); } else { ; }
	
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

