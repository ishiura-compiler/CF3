#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = 268765970LL;
volatile int16_t x29 = 274;
static int64_t x30 = -1LL;
static volatile uint64_t t10 = 444LLU;
volatile uint64_t t12 = 6096894974093277729LLU;
uint64_t x72 = UINT64_MAX;
int8_t x75 = -1;
volatile int16_t x81 = INT16_MIN;
int32_t t17 = -17321432;
int8_t x94 = INT8_MIN;
static uint16_t x99 = 7076U;
uint32_t x104 = UINT32_MAX;
volatile int8_t x106 = -1;
int16_t x107 = INT16_MIN;
int64_t x113 = INT64_MIN;
int64_t x114 = INT64_MIN;
volatile int16_t x116 = INT16_MIN;
int16_t x130 = 2263;
int8_t x133 = INT8_MIN;
uint16_t x139 = UINT16_MAX;
uint8_t x143 = 28U;
int64_t x145 = -2165210070LL;
int64_t t29 = -5LL;
static volatile uint64_t x149 = 1LLU;
volatile int16_t x150 = -1;
static int16_t x151 = INT16_MIN;
int16_t x152 = -840;
uint16_t x174 = 139U;
int16_t x183 = INT16_MIN;
volatile int32_t x188 = -1792;
volatile int64_t x199 = 154LL;
static volatile int8_t x200 = -1;
volatile uint64_t t41 = 72LLU;
int8_t x209 = -1;
static volatile uint64_t t42 = 7LLU;
volatile uint8_t x217 = UINT8_MAX;
int8_t x220 = -1;
static int64_t x221 = -2398343937747190LL;
volatile int64_t t45 = -7844107372643LL;
static uint8_t x227 = 14U;
uint32_t t48 = 847750U;
uint16_t x248 = UINT16_MAX;
int8_t x251 = -1;
static int32_t t54 = 484293368;
volatile uint64_t t55 = 400LLU;
volatile int64_t t56 = -259812069882577800LL;
int32_t x274 = -1;
volatile int64_t t58 = INT64_MIN;
int64_t x285 = -52LL;
volatile int64_t t62 = -14LL;
int64_t x304 = -1LL;
int8_t x305 = INT8_MIN;
uint64_t t64 = 1243625648307LLU;
int32_t x316 = -145568182;
int32_t x318 = -1;
volatile int32_t t66 = 11100286;
int64_t x324 = INT64_MIN;
volatile int32_t x332 = -47812;
static uint8_t x344 = 8U;
int64_t t72 = -5137172LL;
int32_t x348 = INT32_MAX;
int64_t x352 = -11778LL;
static uint32_t x356 = 14658494U;
uint32_t x359 = UINT32_MAX;
int32_t x360 = INT32_MAX;
static uint64_t x361 = 257014591085678LLU;
static volatile uint64_t x366 = 172LLU;
volatile uint64_t x367 = 580367758967768LLU;
static int64_t t80 = -253171LL;
uint32_t x383 = 0U;
static volatile uint32_t x386 = UINT32_MAX;
volatile int16_t x388 = INT16_MIN;
int16_t x394 = -1;
int32_t x398 = INT32_MIN;
uint16_t x405 = 19485U;
int8_t x406 = -1;
static volatile int32_t x408 = INT32_MIN;
volatile int32_t t87 = -13;
int32_t x409 = 185842361;
static volatile uint32_t t88 = 328U;
int8_t x419 = -1;
static volatile int64_t t91 = 585LL;
uint64_t x431 = UINT64_MAX;
uint16_t x432 = UINT16_MAX;
int64_t x439 = INT64_MIN;
static volatile int64_t x440 = -4006434LL;
int64_t t94 = 48LL;
volatile uint16_t x444 = 511U;
uint8_t x449 = 7U;
int8_t x450 = INT8_MAX;
uint16_t x451 = UINT16_MAX;


void f0(void) {
	static uint8_t x1 = 15U;
	int16_t x2 = -1;
	uint8_t x3 = UINT8_MAX;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = 2;

	t0 = (x1&((x2-x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x5 = 49U;
	static int32_t x6 = INT32_MAX;
	static volatile int8_t x7 = 20;
	volatile int64_t t1 = 1795341156433618988LL;

	t1 = (x5&((x6-x7)&x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static uint32_t x10 = 659219U;
	static int16_t x11 = INT16_MIN;
	static int64_t x12 = -7304LL;
	volatile int64_t t2 = -14LL;

	t2 = (x9&((x10-x11)&x12));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	volatile int8_t x14 = INT8_MIN;
	static int32_t x15 = -1631;
	int64_t x16 = 229491708627466LL;
	volatile int64_t t3 = -3478783107093521546LL;

	t3 = (x13&((x14-x15)&x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = -1;
	int64_t x22 = -1LL;
	static int16_t x23 = INT16_MIN;
	int64_t x24 = INT64_MAX;
	volatile int64_t t4 = -7566466902LL;

	t4 = (x21&((x22-x23)&x24));

	if (t4 != 32767LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = 16U;
	int64_t x26 = -1LL;
	volatile int8_t x27 = INT8_MAX;
	int64_t x28 = 69677510LL;
	int64_t t5 = -853407081LL;

	t5 = (x25&((x26-x27)&x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x31 = INT32_MAX;
	volatile uint32_t x32 = 1381319U;
	static volatile int64_t t6 = 114231208697931LL;

	t6 = (x29&((x30-x31)&x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	uint16_t x34 = UINT16_MAX;
	uint16_t x35 = UINT16_MAX;
	uint16_t x36 = UINT16_MAX;
	int32_t t7 = -3415386;

	t7 = (x33&((x34-x35)&x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x41 = UINT8_MAX;
	int64_t x42 = -1LL;
	int16_t x43 = INT16_MAX;
	uint64_t x44 = 201LLU;
	static volatile uint64_t t8 = 45534268LLU;

	t8 = (x41&((x42-x43)&x44));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x45 = -62066946212LL;
	int8_t x46 = -7;
	volatile uint64_t x47 = 55691158LLU;
	int16_t x48 = INT16_MIN;
	uint64_t t9 = 21957230377358491LLU;

	t9 = (x45&((x46-x47)&x48));

	if (t9 != 18446744011642503168LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x49 = INT64_MIN;
	volatile int64_t x50 = INT64_MIN;
	uint64_t x51 = 1522033402409735643LLU;
	static int64_t x52 = -1LL;

	t10 = (x49&((x50-x51)&x52));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = 337155881284265LL;
	uint8_t x54 = 3U;
	uint64_t x55 = UINT64_MAX;
	uint32_t x56 = UINT32_MAX;
	volatile uint64_t t11 = 42425321176614LLU;

	t11 = (x53&((x54-x55)&x56));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x57 = 8U;
	int64_t x58 = INT64_MIN;
	uint64_t x59 = 158352LLU;
	volatile uint32_t x60 = UINT32_MAX;

	t12 = (x57&((x58-x59)&x60));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x61 = 239770229LLU;
	int16_t x62 = -235;
	int64_t x63 = INT64_MIN;
	uint16_t x64 = 3U;
	static volatile uint64_t t13 = 238294110701200LLU;

	t13 = (x61&((x62-x63)&x64));

	if (t13 != 1LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = 0U;
	int16_t x66 = INT16_MIN;
	static int32_t x67 = INT32_MIN;
	int8_t x68 = INT8_MIN;
	static volatile int32_t t14 = -5;

	t14 = (x65&((x66-x67)&x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 2U;
	volatile int8_t x70 = INT8_MIN;
	int16_t x71 = INT16_MIN;
	uint64_t t15 = 4079645155LLU;

	t15 = (x69&((x70-x71)&x72));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	int64_t x74 = -5391090761LL;
	uint32_t x76 = 543788U;
	static volatile int64_t t16 = 1153090636194892645LL;

	t16 = (x73&((x74-x75)&x76));

	if (t16 != 524288LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x82 = 1303U;
	int8_t x83 = INT8_MIN;
	static int32_t x84 = INT32_MIN;

	t17 = (x81&((x82-x83)&x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x85 = INT32_MIN;
	int16_t x86 = INT16_MIN;
	static int8_t x87 = INT8_MIN;
	int16_t x88 = -1;
	int32_t t18 = INT32_MIN;

	t18 = (x85&((x86-x87)&x88));

	if (t18 != INT32_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = INT32_MIN;
	volatile uint8_t x95 = 96U;
	static uint16_t x96 = 454U;
	volatile int32_t t19 = 6049150;

	t19 = (x93&((x94-x95)&x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = UINT8_MAX;
	int8_t x98 = INT8_MAX;
	static uint8_t x100 = 13U;
	int32_t t20 = -56;

	t20 = (x97&((x98-x99)&x100));

	if (t20 != 9) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x101 = -1;
	static volatile int32_t x102 = INT32_MIN;
	uint64_t x103 = 2434102871107LLU;
	uint64_t t21 = 1596405496696752915LLU;

	t21 = (x101&((x102-x103)&x104));

	if (t21 != 3291069373LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = -5608;
	uint64_t x108 = 150021183450LLU;
	volatile uint64_t t22 = 4135867467335868LLU;

	t22 = (x105&((x106-x107)&x108));

	if (t22 != 536LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x115 = -1LL;
	volatile int64_t t23 = INT64_MIN;

	t23 = (x113&((x114-x115)&x116));

	if (t23 != INT64_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x121 = INT64_MIN;
	volatile uint32_t x122 = 60U;
	int16_t x123 = 0;
	int32_t x124 = INT32_MIN;
	volatile int64_t t24 = -1996645930117LL;

	t24 = (x121&((x122-x123)&x124));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x129 = 1U;
	volatile int64_t x131 = 1108371492099LL;
	uint8_t x132 = 4U;
	int64_t t25 = -4LL;

	t25 = (x129&((x130-x131)&x132));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x134 = -1;
	volatile int16_t x135 = INT16_MIN;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t26 = -17213950;

	t26 = (x133&((x134-x135)&x136));

	if (t26 != 32640) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x137 = 3770U;
	static volatile uint64_t x138 = 14673549739284298LLU;
	volatile uint64_t x140 = 5110852LLU;
	volatile uint64_t t27 = 19631160872LLU;

	t27 = (x137&((x138-x139)&x140));

	if (t27 != 1024LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x141 = 412886U;
	uint32_t x142 = 54U;
	int64_t x144 = INT64_MAX;
	volatile int64_t t28 = 1522790878524LL;

	t28 = (x141&((x142-x143)&x144));

	if (t28 != 18LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x146 = 15140500163887LL;
	int32_t x147 = INT32_MAX;
	static int64_t x148 = -20928437279202267LL;

	t29 = (x145&((x146-x147)&x148));

	if (t29 != 6047985042464LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t t30 = 376596LLU;

	t30 = (x149&((x150-x151)&x152));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x153 = INT8_MAX;
	static uint64_t x154 = 22LLU;
	int64_t x155 = -74152934LL;
	static int8_t x156 = -54;
	volatile uint64_t t31 = 8120793330896167LLU;

	t31 = (x153&((x154-x155)&x156));

	if (t31 != 72LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x157 = 3413029504748217LLU;
	volatile uint32_t x158 = 54559U;
	int8_t x159 = INT8_MAX;
	uint8_t x160 = 12U;
	static uint64_t t32 = 16636674013479LLU;

	t32 = (x157&((x158-x159)&x160));

	if (t32 != 0LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x161 = 79U;
	uint32_t x162 = 157822780U;
	int8_t x163 = INT8_MAX;
	int8_t x164 = -1;
	static uint32_t t33 = 4186U;

	t33 = (x161&((x162-x163)&x164));

	if (t33 != 13U) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x173 = -1;
	int8_t x175 = INT8_MIN;
	static int64_t x176 = INT64_MIN;
	volatile int64_t t34 = 236383071983LL;

	t34 = (x173&((x174-x175)&x176));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x177 = 134926U;
	int64_t x178 = -1LL;
	static int32_t x179 = 318950696;
	int8_t x180 = -10;
	volatile int64_t t35 = 2672692814LL;

	t35 = (x177&((x178-x179)&x180));

	if (t35 != 518LL) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int16_t x181 = 247;
	volatile uint32_t x182 = 2205663U;
	static uint8_t x184 = UINT8_MAX;
	volatile uint32_t t36 = 2U;

	t36 = (x181&((x182-x183)&x184));

	if (t36 != 215U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x185 = INT32_MAX;
	int32_t x186 = 2405479;
	int64_t x187 = 1456173303LL;
	volatile int64_t t37 = 17585LL;

	t37 = (x185&((x186-x187)&x188));

	if (t37 != 693715200LL) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x193 = INT16_MAX;
	uint8_t x194 = 2U;
	int32_t x195 = 444986389;
	volatile uint8_t x196 = 24U;
	int32_t t38 = 1;

	t38 = (x193&((x194-x195)&x196));

	if (t38 != 8) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x197 = 24231773588LLU;
	static int16_t x198 = INT16_MIN;
	uint64_t t39 = 28662388LLU;

	t39 = (x197&((x198-x199)&x200));

	if (t39 != 24231740676LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x201 = 382527557U;
	volatile int32_t x202 = 498293990;
	static int32_t x203 = INT32_MAX;
	static int8_t x204 = INT8_MIN;
	uint32_t t40 = 94U;

	t40 = (x201&((x202-x203)&x204));

	if (t40 != 343951360U) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x205 = 1U;
	uint64_t x206 = 21078630328675821LLU;
	int16_t x207 = INT16_MAX;
	int32_t x208 = INT32_MIN;

	t41 = (x205&((x206-x207)&x208));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x210 = -1;
	uint32_t x211 = 338193806U;
	static uint64_t x212 = 98LLU;

	t42 = (x209&((x210-x211)&x212));

	if (t42 != 96LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x213 = INT64_MAX;
	uint64_t x214 = UINT64_MAX;
	uint8_t x215 = 4U;
	uint32_t x216 = UINT32_MAX;
	volatile uint64_t t43 = 398479811019503LLU;

	t43 = (x213&((x214-x215)&x216));

	if (t43 != 4294967291LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x218 = UINT16_MAX;
	int8_t x219 = -1;
	int32_t t44 = -7;

	t44 = (x217&((x218-x219)&x220));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x222 = 9U;
	int16_t x223 = 9144;
	int32_t x224 = 8105;

	t45 = (x221&((x222-x223)&x224));

	if (t45 != 5120LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x225 = INT8_MAX;
	static int8_t x226 = 2;
	uint32_t x228 = 4686U;
	uint32_t t46 = 74U;

	t46 = (x225&((x226-x227)&x228));

	if (t46 != 68U) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x233 = -3007;
	volatile uint16_t x234 = 44U;
	uint32_t x235 = 37U;
	int16_t x236 = -1;
	static uint32_t t47 = 43805511U;

	t47 = (x233&((x234-x235)&x236));

	if (t47 != 1U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x237 = INT32_MAX;
	uint8_t x238 = 52U;
	volatile int8_t x239 = -56;
	uint32_t x240 = 484583342U;

	t48 = (x237&((x238-x239)&x240));

	if (t48 != 44U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x241 = INT8_MIN;
	static int64_t x242 = -198120181805316LL;
	uint16_t x243 = 25U;
	static volatile int64_t x244 = INT64_MAX;
	int64_t t49 = -23195009424667LL;

	t49 = (x241&((x242-x243)&x244));

	if (t49 != 9223173916672970368LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x245 = -25757936;
	int64_t x246 = -1LL;
	uint8_t x247 = 3U;
	int64_t t50 = 8527190231LL;

	t50 = (x245&((x246-x247)&x248));

	if (t50 != 63248LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x249 = 28411U;
	int32_t x250 = INT32_MIN;
	int32_t x252 = INT32_MIN;
	volatile int32_t t51 = -127;

	t51 = (x249&((x250-x251)&x252));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x253 = INT64_MAX;
	int32_t x254 = INT32_MAX;
	static int16_t x255 = 402;
	int64_t x256 = 497586475LL;
	volatile int64_t t52 = -1662LL;

	t52 = (x253&((x254-x255)&x256));

	if (t52 != 497586217LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x257 = INT32_MIN;
	volatile uint16_t x258 = 7U;
	static volatile int32_t x259 = INT32_MAX;
	volatile int64_t x260 = 15606385789632LL;
	static volatile int64_t t53 = -67027686723LL;

	t53 = (x257&((x258-x259)&x260));

	if (t53 != 15605763670016LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x261 = 1;
	int8_t x262 = -1;
	volatile int8_t x263 = INT8_MIN;
	int16_t x264 = 3831;

	t54 = (x261&((x262-x263)&x264));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x265 = -50;
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = INT8_MIN;
	int64_t x268 = -1134271060565032332LL;

	t55 = (x265&((x266-x267)&x268));

	if (t55 != 68LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x269 = 368269771U;
	int64_t x270 = INT64_MAX;
	uint8_t x271 = 0U;
	int8_t x272 = -2;

	t56 = (x269&((x270-x271)&x272));

	if (t56 != 368269770LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x273 = 686856746111186575LLU;
	uint16_t x275 = 6231U;
	uint32_t x276 = UINT32_MAX;
	static uint64_t t57 = 911868352908LLU;

	t57 = (x273&((x274-x275)&x276));

	if (t57 != 1267312264LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x277 = -202;
	static uint16_t x278 = 28214U;
	static int64_t x279 = INT64_MAX;
	int16_t x280 = INT16_MIN;

	t58 = (x277&((x278-x279)&x280));

	if (t58 != INT64_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x281 = -1059;
	uint16_t x282 = 1615U;
	volatile int32_t x283 = INT32_MAX;
	int8_t x284 = INT8_MIN;
	volatile int32_t t59 = -269;

	t59 = (x281&((x282-x283)&x284));

	if (t59 != -2147483136) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x286 = 10969544846601LLU;
	static int16_t x287 = INT16_MAX;
	volatile int64_t x288 = -141287LL;
	static volatile uint64_t t60 = 1506LLU;

	t60 = (x285&((x286-x287)&x288));

	if (t60 != 10969544673288LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x293 = 13U;
	uint16_t x294 = 4U;
	uint64_t x295 = 0LLU;
	volatile uint8_t x296 = 17U;
	uint64_t t61 = 2LLU;

	t61 = (x293&((x294-x295)&x296));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x297 = -1LL;
	int8_t x298 = INT8_MAX;
	uint32_t x299 = UINT32_MAX;
	int8_t x300 = INT8_MAX;

	t62 = (x297&((x298-x299)&x300));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x301 = INT32_MIN;
	static int64_t x302 = -65253LL;
	int32_t x303 = INT32_MIN;
	volatile int64_t t63 = 0LL;

	t63 = (x301&((x302-x303)&x304));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x306 = -1;
	int8_t x307 = INT8_MIN;
	uint64_t x308 = 6LLU;

	t64 = (x305&((x306-x307)&x308));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x313 = 387LL;
	int32_t x314 = -5683;
	static int16_t x315 = 149;
	int64_t t65 = -11208171684LL;

	t65 = (x313&((x314-x315)&x316));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x317 = INT32_MAX;
	int32_t x319 = INT32_MIN;
	int8_t x320 = 1;

	t66 = (x317&((x318-x319)&x320));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x321 = INT8_MIN;
	int8_t x322 = -57;
	int8_t x323 = INT8_MIN;
	int64_t t67 = -384054015LL;

	t67 = (x321&((x322-x323)&x324));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = INT8_MIN;
	volatile uint64_t x326 = 874783LLU;
	int64_t x327 = 439661920820935LL;
	int8_t x328 = 1;
	volatile uint64_t t68 = 757399660LLU;

	t68 = (x325&((x326-x327)&x328));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x329 = 1U;
	static volatile int64_t x330 = INT64_MIN;
	static int32_t x331 = INT32_MIN;
	volatile int64_t t69 = 1010713353LL;

	t69 = (x329&((x330-x331)&x332));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x333 = 24U;
	int16_t x334 = INT16_MIN;
	volatile int16_t x335 = INT16_MAX;
	int64_t x336 = 2564081356LL;
	int64_t t70 = 1605309LL;

	t70 = (x333&((x334-x335)&x336));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x337 = UINT16_MAX;
	int32_t x338 = INT32_MIN;
	int64_t x339 = 1LL;
	int32_t x340 = -546997;
	volatile int64_t t71 = -10962LL;

	t71 = (x337&((x338-x339)&x340));

	if (t71 != 42827LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x341 = INT8_MAX;
	uint32_t x342 = 592453012U;
	volatile int64_t x343 = -1078982LL;

	t72 = (x341&((x342-x343)&x344));

	if (t72 != 8LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x345 = INT8_MIN;
	volatile uint16_t x346 = UINT16_MAX;
	int8_t x347 = INT8_MIN;
	int32_t t73 = -8881;

	t73 = (x345&((x346-x347)&x348));

	if (t73 != 65536) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x349 = INT8_MIN;
	int32_t x350 = INT32_MIN;
	int8_t x351 = INT8_MIN;
	volatile int64_t t74 = 235218465065LL;

	t74 = (x349&((x350-x351)&x352));

	if (t74 != -2147483520LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x353 = UINT16_MAX;
	uint32_t x354 = UINT32_MAX;
	uint64_t x355 = 382765150364LLU;
	volatile uint64_t t75 = 15725208414633941LLU;

	t75 = (x353&((x354-x355)&x356));

	if (t75 != 2850LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint8_t x357 = 4U;
	volatile int64_t x358 = -23186423LL;
	int64_t t76 = 305369972LL;

	t76 = (x357&((x358-x359)&x360));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint32_t x362 = 51594856U;
	int8_t x363 = -1;
	uint64_t x364 = 13575868LLU;
	volatile uint64_t t77 = 1998805517760313505LLU;

	t77 = (x361&((x362-x363)&x364));

	if (t77 != 197672LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x365 = 0U;
	uint64_t x368 = 78923LLU;
	uint64_t t78 = 116LLU;

	t78 = (x365&((x366-x367)&x368));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x369 = UINT64_MAX;
	int8_t x370 = -1;
	int8_t x371 = -1;
	static int32_t x372 = -14371;
	static volatile uint64_t t79 = 246534029729LLU;

	t79 = (x369&((x370-x371)&x372));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x373 = -1;
	int16_t x374 = INT16_MAX;
	volatile int64_t x375 = INT64_MAX;
	static volatile int64_t x376 = -1LL;

	t80 = (x373&((x374-x375)&x376));

	if (t80 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x377 = INT16_MIN;
	int64_t x378 = 457860649751505LL;
	static uint8_t x379 = 28U;
	static uint16_t x380 = UINT16_MAX;
	int64_t t81 = 88598503LL;

	t81 = (x377&((x378-x379)&x380));

	if (t81 != 32768LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x381 = 18227U;
	uint32_t x382 = 554830U;
	static int8_t x384 = -1;
	uint32_t t82 = 111174270U;

	t82 = (x381&((x382-x383)&x384));

	if (t82 != 18178U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x385 = INT16_MAX;
	int8_t x387 = INT8_MIN;
	static uint32_t t83 = 29732U;

	t83 = (x385&((x386-x387)&x388));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x393 = UINT64_MAX;
	int16_t x395 = -1;
	uint8_t x396 = 58U;
	volatile uint64_t t84 = 53938302434956LLU;

	t84 = (x393&((x394-x395)&x396));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x397 = INT32_MAX;
	int32_t x399 = INT32_MIN;
	int16_t x400 = INT16_MIN;
	volatile int32_t t85 = -4;

	t85 = (x397&((x398-x399)&x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x401 = 4;
	int64_t x402 = INT64_MIN;
	int32_t x403 = INT32_MIN;
	volatile int8_t x404 = INT8_MIN;
	int64_t t86 = -415LL;

	t86 = (x401&((x402-x403)&x404));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x407 = -1;

	t87 = (x405&((x406-x407)&x408));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x410 = UINT32_MAX;
	static int16_t x411 = INT16_MIN;
	int32_t x412 = INT32_MIN;

	t88 = (x409&((x410-x411)&x412));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x413 = 439LL;
	static uint64_t x414 = 34453470LLU;
	uint8_t x415 = 5U;
	volatile int8_t x416 = INT8_MIN;
	volatile uint64_t t89 = 426803337463LLU;

	t89 = (x413&((x414-x415)&x416));

	if (t89 != 384LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x417 = INT32_MIN;
	uint16_t x418 = 0U;
	int16_t x420 = -722;
	static volatile int32_t t90 = 60577522;

	t90 = (x417&((x418-x419)&x420));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x421 = -1LL;
	volatile uint8_t x422 = 48U;
	int8_t x423 = INT8_MAX;
	volatile int32_t x424 = INT32_MIN;

	t91 = (x421&((x422-x423)&x424));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x429 = 0U;
	int8_t x430 = INT8_MIN;
	uint64_t t92 = 0LLU;

	t92 = (x429&((x430-x431)&x432));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x433 = 3;
	volatile int8_t x434 = -15;
	uint32_t x435 = 0U;
	int64_t x436 = INT64_MAX;
	int64_t t93 = -461970LL;

	t93 = (x433&((x434-x435)&x436));

	if (t93 != 1LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x437 = 1674U;
	int32_t x438 = INT32_MIN;

	t94 = (x437&((x438-x439)&x440));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x441 = INT8_MIN;
	volatile uint16_t x442 = 15082U;
	uint64_t x443 = UINT64_MAX;
	uint64_t t95 = 25132626164LLU;

	t95 = (x441&((x442-x443)&x444));

	if (t95 != 128LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x445 = INT32_MIN;
	int8_t x446 = -1;
	int8_t x447 = INT8_MAX;
	static volatile uint32_t x448 = 6891904U;
	uint32_t t96 = 122173U;

	t96 = (x445&((x446-x447)&x448));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x452 = 2U;
	volatile int32_t t97 = 1802861;

	t97 = (x449&((x450-x451)&x452));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x453 = 1;
	static volatile int16_t x454 = INT16_MAX;
	int16_t x455 = INT16_MAX;
	int16_t x456 = 1;
	int32_t t98 = 57322;

	t98 = (x453&((x454-x455)&x456));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x457 = -555800821;
	int16_t x458 = INT16_MIN;
	volatile int16_t x459 = INT16_MIN;
	uint16_t x460 = UINT16_MAX;
	int32_t t99 = 177;

	t99 = (x457&((x458-x459)&x460));

	if (t99 != 0) { NG(); } else { ; }
	
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

