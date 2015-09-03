#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x3 = 455048135049169576LL;
static int16_t x5 = -11;
int32_t x7 = INT32_MAX;
static int16_t x13 = -1;
int64_t x15 = INT64_MIN;
uint32_t x16 = UINT32_MAX;
volatile int32_t t4 = 751;
static uint16_t x21 = 424U;
static int32_t x25 = INT32_MIN;
uint8_t x26 = UINT8_MAX;
int32_t x27 = -1;
static volatile uint32_t t6 = 1200U;
volatile int16_t x29 = -1;
int16_t x31 = -6171;
static int64_t x32 = -211516172LL;
static volatile int64_t t7 = 632950155571026LL;
uint8_t x36 = UINT8_MAX;
uint64_t x40 = UINT64_MAX;
uint64_t t9 = UINT64_MAX;
int8_t x46 = 1;
static volatile uint64_t t11 = 1772957LLU;
int32_t x50 = INT32_MIN;
int64_t x59 = -1086267236633503654LL;
static int8_t x60 = INT8_MAX;
static uint32_t x63 = 9U;
volatile uint32_t t15 = 3323U;
volatile int8_t x65 = 2;
volatile uint64_t t16 = 442559929436586573LLU;
int32_t x73 = -1;
volatile int64_t t19 = -11LL;
uint64_t x86 = 948856558LLU;
int32_t x93 = -1;
volatile uint32_t x94 = 898805U;
static int32_t x100 = INT32_MAX;
static int32_t t24 = INT32_MAX;
int16_t x110 = -1;
int32_t x111 = INT32_MIN;
int8_t x113 = INT8_MIN;
int64_t x116 = -1LL;
uint8_t x118 = 1U;
int32_t x123 = -1;
volatile int64_t t30 = 531312373756934LL;
static int8_t x127 = INT8_MAX;
volatile uint16_t x128 = 111U;
int64_t t32 = INT64_MAX;
volatile uint16_t x137 = 631U;
uint8_t x138 = 2U;
int8_t x139 = INT8_MIN;
volatile int16_t x141 = INT16_MIN;
static uint8_t x142 = UINT8_MAX;
int8_t x145 = INT8_MAX;
volatile int32_t t36 = -294;
static int64_t x155 = INT64_MAX;
int64_t x161 = INT64_MIN;
int32_t x164 = INT32_MIN;
uint64_t x167 = 3438130660893LLU;
int8_t x171 = INT8_MIN;
int32_t x174 = -1;
int64_t x176 = -1LL;
static uint32_t x179 = 17U;
int64_t x181 = -1LL;
static int16_t x193 = -1;
static uint64_t t48 = 639167075094LLU;
uint32_t x197 = UINT32_MAX;
int32_t t50 = 137906904;
volatile int64_t t51 = 24146296050779LL;
int16_t x211 = -1;
int32_t t52 = 6;
uint64_t x215 = 87LLU;
int8_t x220 = INT8_MIN;
volatile uint64_t t55 = 333LLU;
int64_t x227 = -1LL;
static int16_t x239 = INT16_MIN;
volatile uint8_t x240 = 16U;
static int32_t x244 = -1;
volatile int32_t t59 = 5660;
uint32_t x246 = 13U;
static int8_t x248 = 31;
volatile int32_t x249 = INT32_MAX;
int8_t x256 = INT8_MAX;
static volatile int16_t x259 = 1;
int64_t x262 = INT64_MIN;
uint8_t x263 = 126U;
int8_t x264 = -30;
volatile int64_t x270 = INT64_MIN;
int16_t x275 = INT16_MAX;
volatile uint8_t x288 = UINT8_MAX;
static uint16_t x291 = 1U;
volatile int8_t x292 = 1;
static volatile int8_t x299 = INT8_MAX;
int64_t t72 = -1031709LL;
volatile int64_t t73 = -24761515LL;
volatile int64_t x311 = -1673624872204690212LL;
uint8_t x313 = 2U;
uint8_t x322 = 0U;
volatile int16_t x323 = INT16_MIN;
int64_t x324 = INT64_MIN;
volatile int16_t x327 = 165;
int32_t x347 = -84414;
uint8_t x349 = 49U;
uint64_t x351 = 62LLU;
static volatile uint64_t t84 = UINT64_MAX;
static volatile uint16_t x357 = 28296U;
int64_t t88 = 237252737959726LL;
int32_t x371 = INT32_MIN;
static uint64_t t90 = 729626289068LLU;
static volatile int8_t x378 = 6;
int64_t x380 = INT64_MIN;
uint64_t t92 = 28005LLU;
int16_t x385 = INT16_MAX;
uint32_t x387 = 271057U;
uint32_t t93 = 26656U;
uint16_t x395 = 2060U;
volatile int64_t t95 = -4LL;
int64_t x400 = INT64_MIN;
uint64_t t97 = 474LLU;
volatile int16_t x405 = INT16_MAX;
static uint8_t x410 = 5U;
int64_t x411 = INT64_MAX;
static int64_t x412 = -2379286645060LL;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int64_t x2 = INT64_MAX;
	int16_t x4 = 1;
	static int64_t t0 = -509415LL;

	t0 = ((x1&(x2/x3))^x4);

	if (t0 != 21LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 352553LLU;

	t1 = ((x5&(x6/x7))^x8);

	if (t1 != 10LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = UINT16_MAX;
	volatile int64_t x10 = INT64_MIN;
	volatile uint32_t x11 = 235U;
	int8_t x12 = INT8_MIN;
	volatile int64_t t2 = -27708077LL;

	t2 = ((x9&(x10/x11))^x12);

	if (t2 != -25671LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = UINT64_MAX;
	uint64_t t3 = 66443066636LLU;

	t3 = ((x13&(x14/x15))^x16);

	if (t3 != 4294967294LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint8_t x18 = 55U;
	int32_t x19 = INT32_MIN;
	int8_t x20 = INT8_MIN;

	t4 = ((x17&(x18/x19))^x20);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 0U;
	uint32_t x23 = 15U;
	volatile uint64_t x24 = 1567LLU;
	uint64_t t5 = 974LLU;

	t5 = ((x21&(x22/x23))^x24);

	if (t5 != 1567LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x28 = 36564693U;

	t6 = ((x25&(x26/x27))^x28);

	if (t6 != 2184048341U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x30 = INT32_MIN;

	t7 = ((x29&(x30/x31))^x32);

	if (t7 != -211694680LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = -1;
	static int32_t x34 = INT32_MIN;
	volatile int32_t x35 = 7085;
	volatile int32_t t8 = 2982;

	t8 = ((x33&(x34/x35))^x36);

	if (t8 != -302851) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 9445853853483180LL;
	int32_t x38 = 68;
	int64_t x39 = INT64_MIN;

	t9 = ((x37&(x38/x39))^x40);

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = 1;
	uint16_t x42 = 185U;
	static int8_t x43 = 2;
	uint8_t x44 = 0U;
	volatile int32_t t10 = 2204955;

	t10 = ((x41&(x42/x43))^x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	uint64_t x47 = 2980437749185LLU;
	int16_t x48 = 6463;

	t11 = ((x45&(x46/x47))^x48);

	if (t11 != 6463LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = -1LL;
	uint32_t x51 = 10U;
	uint32_t x52 = 795515413U;
	int64_t t12 = 474LL;

	t12 = ((x49&(x50/x51))^x52);

	if (t12 != 598103769LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = -1;
	int64_t x54 = -192592LL;
	static volatile int8_t x55 = INT8_MIN;
	volatile int16_t x56 = -1;
	int64_t t13 = 1337LL;

	t13 = ((x53&(x54/x55))^x56);

	if (t13 != -1505LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int8_t x58 = INT8_MIN;
	int64_t t14 = 25043516073908567LL;

	t14 = ((x57&(x58/x59))^x60);

	if (t14 != 127LL) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint16_t x61 = 1559U;
	volatile int8_t x62 = -1;
	static volatile uint8_t x64 = 69U;

	t15 = ((x61&(x62/x63))^x64);

	if (t15 != 1617U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x66 = INT64_MIN;
	static volatile int8_t x67 = INT8_MIN;
	uint64_t x68 = 6771LLU;

	t16 = ((x65&(x66/x67))^x68);

	if (t16 != 6771LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = 91U;
	int32_t x70 = -1;
	int16_t x71 = INT16_MIN;
	static int64_t x72 = -1LL;
	int64_t t17 = -54148532131LL;

	t17 = ((x69&(x70/x71))^x72);

	if (t17 != -1LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x74 = 113698189097939LLU;
	static uint8_t x75 = 1U;
	int8_t x76 = INT8_MAX;
	uint64_t t18 = 1525519828810356886LLU;

	t18 = ((x73&(x74/x75))^x76);

	if (t18 != 113698189097900LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x78 = INT64_MAX;
	uint8_t x79 = 2U;
	volatile uint32_t x80 = 1U;

	t19 = ((x77&(x78/x79))^x80);

	if (t19 != 4294967294LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	uint64_t x82 = 6508549844722703341LLU;
	uint64_t x83 = UINT64_MAX;
	uint16_t x84 = UINT16_MAX;
	volatile uint64_t t20 = 10640783993760693LLU;

	t20 = ((x81&(x82/x83))^x84);

	if (t20 != 65535LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int32_t x85 = INT32_MIN;
	int64_t x87 = INT64_MIN;
	volatile int64_t x88 = 1LL;
	static volatile uint64_t t21 = 214230405162783LLU;

	t21 = ((x85&(x86/x87))^x88);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = INT32_MIN;
	static volatile int16_t x91 = 1354;
	volatile uint32_t x92 = 1956015U;
	static int64_t t22 = 25LL;

	t22 = ((x89&(x90/x91))^x92);

	if (t22 != -9223372036852819793LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x95 = INT16_MIN;
	int32_t x96 = INT32_MIN;
	volatile uint32_t t23 = 447U;

	t23 = ((x93&(x94/x95))^x96);

	if (t23 != 2147483648U) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	int8_t x98 = -1;
	int32_t x99 = -47676;

	t24 = ((x97&(x98/x99))^x100);

	if (t24 != INT32_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x101 = 9U;
	uint32_t x102 = 215U;
	int8_t x103 = INT8_MAX;
	volatile int32_t x104 = INT32_MIN;
	static volatile uint32_t t25 = 341U;

	t25 = ((x101&(x102/x103))^x104);

	if (t25 != 2147483649U) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	volatile uint8_t x106 = 11U;
	int64_t x107 = -1645877LL;
	int32_t x108 = INT32_MAX;
	int64_t t26 = 3LL;

	t26 = ((x105&(x106/x107))^x108);

	if (t26 != 2147483647LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x109 = INT64_MIN;
	static int16_t x112 = -53;
	volatile int64_t t27 = -41781989LL;

	t27 = ((x109&(x110/x111))^x112);

	if (t27 != -53LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x114 = INT64_MIN;
	volatile uint32_t x115 = 3U;
	int64_t t28 = 84152232671305037LL;

	t28 = ((x113&(x114/x115))^x116);

	if (t28 != 3074457345618258687LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint16_t x117 = UINT16_MAX;
	uint8_t x119 = 62U;
	static int64_t x120 = INT64_MIN;
	int64_t t29 = INT64_MIN;

	t29 = ((x117&(x118/x119))^x120);

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 1U;
	int16_t x122 = INT16_MAX;
	int64_t x124 = INT64_MIN;

	t30 = ((x121&(x122/x123))^x124);

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = UINT16_MAX;
	int64_t x126 = 22LL;
	volatile int64_t t31 = 488513076343435LL;

	t31 = ((x125&(x126/x127))^x128);

	if (t31 != 111LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	static int64_t x130 = INT64_MIN;
	int32_t x131 = INT32_MAX;
	int8_t x132 = -1;

	t32 = ((x129&(x130/x131))^x132);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	int8_t x134 = INT8_MIN;
	static uint16_t x135 = 816U;
	volatile int16_t x136 = -10675;
	int32_t t33 = -4126490;

	t33 = ((x133&(x134/x135))^x136);

	if (t33 != -10675) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x140 = INT8_MIN;
	int32_t t34 = -413;

	t34 = ((x137&(x138/x139))^x140);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x143 = 9;
	int32_t x144 = INT32_MIN;
	int32_t t35 = INT32_MIN;

	t35 = ((x141&(x142/x143))^x144);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MIN;
	uint16_t x147 = UINT16_MAX;
	uint16_t x148 = 3167U;

	t36 = ((x145&(x146/x147))^x148);

	if (t36 != 3167) { NG(); } else { ; }
	
}

void f37(void) {
	static int8_t x149 = INT8_MIN;
	int32_t x150 = INT32_MAX;
	uint16_t x151 = 300U;
	uint8_t x152 = 0U;
	volatile int32_t t37 = -44;

	t37 = ((x149&(x150/x151))^x152);

	if (t37 != 7158272) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = -1LL;
	uint16_t x154 = UINT16_MAX;
	uint32_t x156 = 8126954U;
	volatile int64_t t38 = -49599680647LL;

	t38 = ((x153&(x154/x155))^x156);

	if (t38 != 8126954LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = 2;
	uint64_t x158 = 49742811038LLU;
	int32_t x159 = INT32_MIN;
	uint32_t x160 = 1U;
	volatile uint64_t t39 = 2147150932LLU;

	t39 = ((x157&(x158/x159))^x160);

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x162 = 6U;
	volatile int8_t x163 = INT8_MIN;
	volatile int64_t t40 = -31877LL;

	t40 = ((x161&(x162/x163))^x164);

	if (t40 != -2147483648LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 3;
	uint32_t x166 = 394U;
	int8_t x168 = 1;
	uint64_t t41 = 360LLU;

	t41 = ((x165&(x166/x167))^x168);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	static int8_t x170 = 3;
	volatile uint16_t x172 = UINT16_MAX;
	int32_t t42 = -65;

	t42 = ((x169&(x170/x171))^x172);

	if (t42 != 65535) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -14862;
	int8_t x175 = INT8_MAX;
	int64_t t43 = -4865452108337LL;

	t43 = ((x173&(x174/x175))^x176);

	if (t43 != -1LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -26656;
	static int16_t x178 = INT16_MIN;
	int16_t x180 = 11465;
	uint32_t t44 = 92412614U;

	t44 = ((x177&(x178/x179))^x180);

	if (t44 != 252652361U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x182 = -984063931405737240LL;
	uint8_t x183 = 3U;
	volatile uint16_t x184 = UINT16_MAX;
	int64_t t45 = -748907364944LL;

	t45 = ((x181&(x182/x183))^x184);

	if (t45 != -328021310468530425LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = 0U;
	volatile int16_t x186 = -2428;
	uint64_t x187 = 8661LLU;
	uint64_t x188 = UINT64_MAX;
	static volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x185&(x186/x187))^x188);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -1;
	int16_t x190 = 5734;
	int32_t x191 = -32;
	volatile int16_t x192 = INT16_MIN;
	static int32_t t47 = 0;

	t47 = ((x189&(x190/x191))^x192);

	if (t47 != 32589) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = -1;
	volatile uint64_t x195 = 283575LLU;
	int16_t x196 = INT16_MIN;

	t48 = ((x193&(x194/x195))^x196);

	if (t48 != 18446679023038370825LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x198 = -11;
	volatile int64_t x199 = -1LL;
	uint8_t x200 = 69U;
	static volatile int64_t t49 = -35365797223917656LL;

	t49 = ((x197&(x198/x199))^x200);

	if (t49 != 78LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x201 = INT16_MIN;
	uint16_t x202 = 32U;
	volatile int16_t x203 = -233;
	static int8_t x204 = INT8_MAX;

	t50 = ((x201&(x202/x203))^x204);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	int16_t x206 = -1;
	int16_t x207 = 1;
	uint16_t x208 = 111U;

	t51 = ((x205&(x206/x207))^x208);

	if (t51 != -112LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	static uint8_t x210 = UINT8_MAX;
	int8_t x212 = -26;

	t52 = ((x209&(x210/x211))^x212);

	if (t52 != 2147483622) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = -1LL;
	int32_t x214 = INT32_MAX;
	int32_t x216 = INT32_MIN;
	static uint64_t t53 = 28576005343067LLU;

	t53 = ((x213&(x214/x215))^x216);

	if (t53 != 18446744071586751688LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	static int16_t x218 = 35;
	int64_t x219 = INT64_MIN;
	static volatile int64_t t54 = -4053073604LL;

	t54 = ((x217&(x218/x219))^x220);

	if (t54 != -128LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = 1871LLU;
	uint32_t x222 = 120092U;
	volatile uint8_t x223 = 6U;
	uint64_t x224 = 129499LLU;

	t55 = ((x221&(x222/x223))^x224);

	if (t55 != 131028LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	int32_t x226 = INT32_MIN;
	uint64_t x228 = UINT64_MAX;
	uint64_t t56 = 328600979621LLU;

	t56 = ((x225&(x226/x227))^x228);

	if (t56 != 18446744071562067967LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x229 = INT32_MAX;
	int32_t x230 = INT32_MAX;
	uint32_t x231 = 854085U;
	int16_t x232 = INT16_MIN;
	volatile uint32_t t57 = 416U;

	t57 = ((x229&(x230/x231))^x232);

	if (t57 != 4294937042U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x237 = INT64_MAX;
	int64_t x238 = -9949390584396739LL;
	volatile int64_t t58 = -150LL;

	t58 = ((x237&(x238/x239))^x240);

	if (t58 != 303631304471LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x241 = 55;
	int8_t x242 = 2;
	int16_t x243 = INT16_MIN;

	t59 = ((x241&(x242/x243))^x244);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x245 = -1;
	uint32_t x247 = UINT32_MAX;
	uint32_t t60 = 0U;

	t60 = ((x245&(x246/x247))^x248);

	if (t60 != 31U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x250 = 1778U;
	int64_t x251 = INT64_MAX;
	static uint64_t x252 = 1LLU;
	uint64_t t61 = 256116LLU;

	t61 = ((x249&(x250/x251))^x252);

	if (t61 != 1LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = -1;
	int32_t x254 = INT32_MAX;
	int16_t x255 = INT16_MAX;
	volatile int32_t t62 = 8675;

	t62 = ((x253&(x254/x255))^x256);

	if (t62 != 65661) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x257 = UINT64_MAX;
	static int32_t x258 = -3343594;
	uint64_t x260 = 20765024842049348LLU;
	static uint64_t t63 = 6849868979281043342LLU;

	t63 = ((x257&(x258/x259))^x260);

	if (t63 != 18425979048870714450LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x261 = INT8_MIN;
	int64_t t64 = 12970502LL;

	t64 = ((x261&(x262/x263))^x264);

	if (t64 != 73201365371863394LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x269 = 53U;
	static int16_t x271 = 13264;
	int64_t x272 = INT64_MAX;
	volatile int64_t t65 = -18318LL;

	t65 = ((x269&(x270/x271))^x272);

	if (t65 != 9223372036854775774LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x273 = 24836U;
	volatile int64_t x274 = INT64_MIN;
	int32_t x276 = -1;
	static volatile int64_t t66 = 357660889450407LL;

	t66 = ((x273&(x274/x275))^x276);

	if (t66 != -24833LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x277 = 1U;
	uint32_t x278 = 341817U;
	volatile int32_t x279 = -51346375;
	int64_t x280 = -1LL;
	int64_t t67 = -7430756430LL;

	t67 = ((x277&(x278/x279))^x280);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x281 = -1;
	int8_t x282 = INT8_MIN;
	volatile int16_t x283 = 12890;
	int8_t x284 = -1;
	static volatile int32_t t68 = -3;

	t68 = ((x281&(x282/x283))^x284);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = -7;
	int32_t x286 = INT32_MIN;
	int64_t x287 = 9496LL;
	int64_t t69 = -273535964449LL;

	t69 = ((x285&(x286/x287))^x288);

	if (t69 != -226201LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x289 = -24473273;
	volatile int8_t x290 = INT8_MAX;
	static int32_t t70 = 466533725;

	t70 = ((x289&(x290/x291))^x292);

	if (t70 != 70) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x293 = 18275U;
	volatile int32_t x294 = INT32_MIN;
	uint64_t x295 = UINT64_MAX;
	static int64_t x296 = -1LL;
	volatile uint64_t t71 = UINT64_MAX;

	t71 = ((x293&(x294/x295))^x296);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x297 = INT8_MIN;
	static int8_t x298 = INT8_MIN;
	int64_t x300 = 123606758604726LL;

	t72 = ((x297&(x298/x299))^x300);

	if (t72 != -123606758604746LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int8_t x301 = -1;
	int64_t x302 = INT64_MIN;
	volatile uint8_t x303 = 6U;
	static int16_t x304 = INT16_MIN;

	t73 = ((x301&(x302/x303))^x304);

	if (t73 != 1537228672809118379LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x305 = -1;
	int16_t x306 = INT16_MIN;
	int64_t x307 = -1LL;
	volatile int32_t x308 = INT32_MIN;
	volatile int64_t t74 = -1581780041302054LL;

	t74 = ((x305&(x306/x307))^x308);

	if (t74 != -2147450880LL) { NG(); } else { ; }
	
}

void f75(void) {
	static uint16_t x309 = 830U;
	uint16_t x310 = UINT16_MAX;
	int64_t x312 = -311LL;
	int64_t t75 = -6LL;

	t75 = ((x309&(x310/x311))^x312);

	if (t75 != -311LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x314 = 6535U;
	uint8_t x315 = UINT8_MAX;
	volatile int16_t x316 = -1;
	int32_t t76 = 432;

	t76 = ((x313&(x314/x315))^x316);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x317 = -15069;
	uint8_t x318 = 5U;
	int16_t x319 = -1;
	uint32_t x320 = 17409U;
	uint32_t t77 = 57038U;

	t77 = ((x317&(x318/x319))^x320);

	if (t77 != 4294934818U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int32_t x321 = INT32_MIN;
	volatile int64_t t78 = INT64_MIN;

	t78 = ((x321&(x322/x323))^x324);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x325 = UINT32_MAX;
	uint32_t x326 = 13569U;
	static uint16_t x328 = 23484U;
	uint32_t t79 = 7043U;

	t79 = ((x325&(x326/x327))^x328);

	if (t79 != 23534U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x333 = INT64_MIN;
	uint8_t x334 = 8U;
	volatile uint64_t x335 = 14545006562LLU;
	uint16_t x336 = 2U;
	uint64_t t80 = 567666999LLU;

	t80 = ((x333&(x334/x335))^x336);

	if (t80 != 2LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x337 = 4077746U;
	static int8_t x338 = -1;
	volatile int64_t x339 = 1771214541545391180LL;
	int16_t x340 = INT16_MIN;
	volatile int64_t t81 = 49485763LL;

	t81 = ((x337&(x338/x339))^x340);

	if (t81 != -32768LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x341 = 1U;
	uint64_t x342 = UINT64_MAX;
	uint8_t x343 = UINT8_MAX;
	uint8_t x344 = 2U;
	uint64_t t82 = 13045LLU;

	t82 = ((x341&(x342/x343))^x344);

	if (t82 != 3LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x345 = 110LLU;
	int32_t x346 = -1;
	volatile int32_t x348 = INT32_MIN;
	uint64_t t83 = 475700484LLU;

	t83 = ((x345&(x346/x347))^x348);

	if (t83 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x350 = -1;
	static volatile int64_t x352 = -1LL;

	t84 = ((x349&(x350/x351))^x352);

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x353 = INT32_MAX;
	int8_t x354 = INT8_MIN;
	int8_t x355 = INT8_MIN;
	int32_t x356 = INT32_MIN;
	volatile int32_t t85 = 7642;

	t85 = ((x353&(x354/x355))^x356);

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x358 = 53;
	int32_t x359 = INT32_MAX;
	volatile int8_t x360 = -14;
	volatile int32_t t86 = -641778552;

	t86 = ((x357&(x358/x359))^x360);

	if (t86 != -14) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x361 = 589;
	int64_t x362 = -1LL;
	int64_t x363 = INT64_MAX;
	int8_t x364 = INT8_MAX;
	volatile int64_t t87 = -638499398LL;

	t87 = ((x361&(x362/x363))^x364);

	if (t87 != 127LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x365 = INT16_MIN;
	uint8_t x366 = 12U;
	int64_t x367 = -1LL;
	volatile uint8_t x368 = UINT8_MAX;

	t88 = ((x365&(x366/x367))^x368);

	if (t88 != -32513LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = -2;
	int64_t x370 = 1LL;
	uint32_t x372 = 3U;
	volatile int64_t t89 = 0LL;

	t89 = ((x369&(x370/x371))^x372);

	if (t89 != 3LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x373 = UINT64_MAX;
	int8_t x374 = -2;
	volatile uint8_t x375 = 3U;
	int64_t x376 = INT64_MAX;

	t90 = ((x373&(x374/x375))^x376);

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x377 = INT32_MIN;
	int16_t x379 = -1;
	static volatile int64_t t91 = 117849320523818920LL;

	t91 = ((x377&(x378/x379))^x380);

	if (t91 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x381 = 2U;
	volatile int32_t x382 = INT32_MIN;
	static uint64_t x383 = 1430LLU;
	int32_t x384 = INT32_MIN;

	t92 = ((x381&(x382/x383))^x384);

	if (t92 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x386 = 2U;
	int8_t x388 = 0;

	t93 = ((x385&(x386/x387))^x388);

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x389 = INT16_MIN;
	int32_t x390 = -1;
	static uint16_t x391 = 6735U;
	int64_t x392 = INT64_MAX;
	volatile int64_t t94 = INT64_MAX;

	t94 = ((x389&(x390/x391))^x392);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = INT16_MIN;
	static uint32_t x394 = UINT32_MAX;
	static int64_t x396 = -62LL;

	t95 = ((x393&(x394/x395))^x396);

	if (t95 != -2064446LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x397 = 76832U;
	int32_t x398 = 188;
	int16_t x399 = 2;
	volatile int64_t t96 = INT64_MIN;

	t96 = ((x397&(x398/x399))^x400);

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x401 = INT64_MIN;
	static int8_t x402 = -1;
	uint64_t x403 = UINT64_MAX;
	int64_t x404 = INT64_MIN;

	t97 = ((x401&(x402/x403))^x404);

	if (t97 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x406 = UINT32_MAX;
	static int8_t x407 = INT8_MIN;
	int8_t x408 = 0;
	volatile uint32_t t98 = 2635U;

	t98 = ((x405&(x406/x407))^x408);

	if (t98 != 1U) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x409 = 706499215567LLU;
	volatile uint64_t t99 = 98LLU;

	t99 = ((x409&(x410/x411))^x412);

	if (t99 != 18446741694422906556LLU) { NG(); } else { ; }
	
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

