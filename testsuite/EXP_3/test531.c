#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x13 = INT8_MAX;
volatile int8_t x15 = INT8_MAX;
int16_t x16 = INT16_MIN;
uint16_t x20 = 3U;
uint8_t x26 = 54U;
volatile int8_t x29 = -12;
static volatile int8_t x43 = -1;
int16_t x48 = INT16_MAX;
static volatile int64_t x50 = -1LL;
int8_t x52 = INT8_MIN;
volatile int64_t t9 = -532624713249466565LL;
int16_t x53 = INT16_MIN;
static int16_t x68 = -1;
volatile int64_t x69 = -1LL;
uint64_t x71 = UINT64_MAX;
static uint16_t x90 = 10557U;
int32_t x92 = INT32_MIN;
volatile int32_t x93 = 213508137;
uint8_t x96 = 112U;
int64_t t16 = 5LL;
static uint64_t x100 = UINT64_MAX;
uint64_t t17 = 1848332228457LLU;
uint32_t x102 = 3U;
static uint16_t x105 = 13U;
static volatile uint8_t x114 = UINT8_MAX;
uint8_t x128 = UINT8_MAX;
static volatile int32_t t22 = -1002;
int16_t x130 = INT16_MIN;
int64_t x132 = 17944380496897249LL;
uint8_t x137 = 14U;
int32_t x139 = INT32_MIN;
int64_t x149 = 1083258035329529124LL;
volatile int64_t t28 = -73872890272006LL;
int32_t x155 = 42060;
volatile int16_t x158 = INT16_MAX;
int16_t x160 = INT16_MAX;
int8_t x162 = INT8_MIN;
uint32_t x171 = UINT32_MAX;
uint64_t x173 = UINT64_MAX;
volatile uint64_t x181 = 23946LLU;
int8_t x186 = -1;
int64_t x188 = -1LL;
uint64_t x190 = UINT64_MAX;
static int8_t x191 = 19;
volatile uint64_t t36 = 8757214LLU;
int64_t x196 = INT64_MAX;
uint8_t x203 = 1U;
int64_t x206 = INT64_MIN;
static uint32_t x218 = UINT32_MAX;
int64_t x222 = -7194215712LL;
static int64_t x224 = -100893146LL;
volatile int64_t t44 = 4585804669735915442LL;
volatile int64_t t45 = -208LL;
int32_t x232 = -1;
int16_t x242 = 1345;
uint16_t x243 = 858U;
volatile uint32_t t47 = 6281U;
static volatile int32_t x247 = -3305196;
uint64_t x253 = 375223153257LLU;
volatile int32_t x254 = -1;
static volatile int16_t x257 = -1;
volatile int64_t x258 = INT64_MIN;
int32_t x260 = -1;
volatile int32_t x261 = INT32_MAX;
volatile uint64_t x264 = 28LLU;
static int8_t x267 = 0;
int32_t t52 = 84360;
uint8_t x269 = 5U;
volatile int64_t t54 = -1534LL;
volatile int64_t t56 = 570546711389329150LL;
static int32_t x293 = -1;
volatile uint64_t x309 = 30954769946185LLU;
static int8_t x313 = INT8_MAX;
volatile uint64_t t61 = 230LLU;
static volatile int64_t x325 = -1LL;
volatile uint16_t x328 = UINT16_MAX;
uint16_t x330 = UINT16_MAX;
int64_t x335 = INT64_MIN;
volatile uint32_t x336 = 11851U;
int8_t x339 = 3;
uint16_t x340 = UINT16_MAX;
int32_t x341 = INT32_MIN;
uint32_t t67 = 3961U;
static uint32_t x348 = 1U;
static int32_t x350 = -1;
int32_t x358 = INT32_MAX;
static int8_t x359 = -1;
int16_t x361 = -5097;
int16_t x364 = INT16_MAX;
volatile int32_t x367 = -1;
int8_t x370 = INT8_MIN;
uint32_t t74 = 1258655392U;
volatile uint32_t x376 = UINT32_MAX;
volatile uint64_t t75 = 3476985420778LLU;
volatile int32_t x377 = -1;
uint64_t x387 = 1093LLU;
volatile int32_t x388 = -1;
int16_t x392 = 254;
static volatile uint64_t t80 = 1440LLU;
volatile int64_t x398 = INT64_MAX;
uint16_t x400 = 1723U;
static int8_t x410 = INT8_MAX;
uint8_t x413 = UINT8_MAX;
uint64_t t84 = 4091LLU;
uint64_t x418 = 58974663271834LLU;
volatile int32_t t86 = 210273;
int64_t x426 = -17925LL;
int8_t x428 = INT8_MIN;
int64_t t87 = 24061820725295651LL;
static uint8_t x435 = 54U;
volatile uint32_t t91 = 10624U;
int32_t x449 = INT32_MAX;
int16_t x460 = -1;
int8_t x482 = INT8_MAX;
static volatile int16_t x483 = -1;
uint64_t x484 = UINT64_MAX;
volatile uint64_t t98 = 9283485897895625LLU;
uint8_t x492 = UINT8_MAX;


void f0(void) {
	static uint32_t x5 = 701U;
	uint16_t x6 = UINT16_MAX;
	int64_t x7 = -725357517LL;
	uint16_t x8 = 4U;
	volatile int64_t t0 = 6189397059189LL;

	t0 = ((x5-x6)&(x7/x8));

	if (t0 != 4113564172LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x14 = 60472616009823LLU;
	uint64_t t1 = 367686LLU;

	t1 = ((x13-x14)&(x15/x16));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MIN;
	int32_t x18 = -1;
	uint8_t x19 = 0U;
	int32_t t2 = 56;

	t2 = ((x17-x18)&(x19/x20));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x25 = INT8_MIN;
	volatile int8_t x27 = INT8_MAX;
	int8_t x28 = INT8_MIN;
	int32_t t3 = -240942685;

	t3 = ((x25-x26)&(x27/x28));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x30 = INT32_MIN;
	uint32_t x31 = 143U;
	volatile int8_t x32 = INT8_MIN;
	volatile uint32_t t4 = 9694719U;

	t4 = ((x29-x30)&(x31/x32));

	if (t4 != 0U) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x33 = INT16_MIN;
	uint32_t x34 = 213107097U;
	volatile int64_t x35 = INT64_MIN;
	uint16_t x36 = 217U;
	int64_t t5 = -27934322959586985LL;

	t5 = ((x33-x34)&(x35/x36));

	if (t5 != 4043553344LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x37 = -1;
	static int8_t x38 = -5;
	int64_t x39 = -1LL;
	uint64_t x40 = UINT64_MAX;
	volatile uint64_t t6 = 1251LLU;

	t6 = ((x37-x38)&(x39/x40));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x41 = INT16_MAX;
	volatile int16_t x42 = 2;
	volatile int32_t x44 = INT32_MIN;
	int32_t t7 = 1603296;

	t7 = ((x41-x42)&(x43/x44));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MAX;
	static uint32_t x46 = 40644U;
	uint8_t x47 = 21U;
	uint32_t t8 = 143796U;

	t8 = ((x45-x46)&(x47/x48));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x49 = INT16_MIN;
	uint8_t x51 = 4U;

	t9 = ((x49-x50)&(x51/x52));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x54 = INT64_MIN;
	int64_t x55 = INT64_MIN;
	uint32_t x56 = 1U;
	volatile int64_t t10 = -438LL;

	t10 = ((x53-x54)&(x55/x56));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x65 = 3405LL;
	uint8_t x66 = UINT8_MAX;
	static int32_t x67 = 380419;
	volatile int64_t t11 = 65253016LL;

	t11 = ((x65-x66)&(x67/x68));

	if (t11 != 76LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x70 = 0U;
	int8_t x72 = -3;
	volatile uint64_t t12 = 17946076254212419LLU;

	t12 = ((x69-x70)&(x71/x72));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x81 = 620LLU;
	int8_t x82 = INT8_MIN;
	uint16_t x83 = UINT16_MAX;
	static int8_t x84 = -45;
	volatile uint64_t t13 = 214546315574LLU;

	t13 = ((x81-x82)&(x83/x84));

	if (t13 != 576LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x85 = 3U;
	static uint8_t x86 = 1U;
	uint64_t x87 = 5182389172053333LLU;
	volatile uint16_t x88 = UINT16_MAX;
	uint64_t t14 = 21361169LLU;

	t14 = ((x85-x86)&(x87/x88));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x89 = -1LL;
	int16_t x91 = -122;
	volatile int64_t t15 = -124501LL;

	t15 = ((x89-x90)&(x91/x92));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x94 = 1U;
	int64_t x95 = -1LL;

	t16 = ((x93-x94)&(x95/x96));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = 673;
	static int8_t x99 = INT8_MAX;

	t17 = ((x97-x98)&(x99/x100));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x101 = 1U;
	int32_t x103 = -1;
	uint64_t x104 = 5LLU;
	uint64_t t18 = 845268034996LLU;

	t18 = ((x101-x102)&(x103/x104));

	if (t18 != 858993458LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x106 = 3686U;
	int32_t x107 = INT32_MIN;
	int64_t x108 = INT64_MAX;
	int64_t t19 = 1LL;

	t19 = ((x105-x106)&(x107/x108));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x109 = 8U;
	volatile int32_t x110 = 0;
	volatile uint32_t x111 = 2759352U;
	uint16_t x112 = UINT16_MAX;
	volatile uint32_t t20 = 881U;

	t20 = ((x109-x110)&(x111/x112));

	if (t20 != 8U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x113 = INT16_MAX;
	int16_t x115 = -63;
	static volatile int16_t x116 = 7;
	static int32_t t21 = -2710957;

	t21 = ((x113-x114)&(x115/x116));

	if (t21 != 32512) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x125 = INT8_MIN;
	uint16_t x126 = 794U;
	int32_t x127 = INT32_MAX;

	t22 = ((x125-x126)&(x127/x128));

	if (t22 != 8421376) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x129 = 33LLU;
	static volatile uint64_t x131 = 84438LLU;
	static uint64_t t23 = 14005584LLU;

	t23 = ((x129-x130)&(x131/x132));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x133 = 0U;
	static uint64_t x134 = 4LLU;
	volatile int8_t x135 = 1;
	uint8_t x136 = UINT8_MAX;
	volatile uint64_t t24 = 28593752652LLU;

	t24 = ((x133-x134)&(x135/x136));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x138 = 1;
	uint32_t x140 = UINT32_MAX;
	uint32_t t25 = 7815508U;

	t25 = ((x137-x138)&(x139/x140));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x141 = UINT64_MAX;
	volatile int32_t x142 = INT32_MAX;
	static uint64_t x143 = 7465025686LLU;
	int64_t x144 = INT64_MIN;
	volatile uint64_t t26 = 377012LLU;

	t26 = ((x141-x142)&(x143/x144));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x145 = 269297725123702382LLU;
	volatile int8_t x146 = -1;
	uint8_t x147 = UINT8_MAX;
	int32_t x148 = -57654291;
	volatile uint64_t t27 = 6098980727LLU;

	t27 = ((x145-x146)&(x147/x148));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x150 = INT8_MIN;
	uint16_t x151 = 1U;
	int16_t x152 = INT16_MIN;

	t28 = ((x149-x150)&(x151/x152));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x153 = -930912;
	uint8_t x154 = 3U;
	volatile int64_t x156 = INT64_MAX;
	volatile int64_t t29 = -3338287LL;

	t29 = ((x153-x154)&(x155/x156));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x157 = INT16_MIN;
	uint32_t x159 = 7157U;
	volatile uint32_t t30 = 46U;

	t30 = ((x157-x158)&(x159/x160));

	if (t30 != 0U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x161 = INT32_MIN;
	int32_t x163 = INT32_MIN;
	int8_t x164 = INT8_MIN;
	int32_t t31 = 1;

	t31 = ((x161-x162)&(x163/x164));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x169 = INT64_MIN;
	int64_t x170 = -1LL;
	uint16_t x172 = 952U;
	int64_t t32 = 1697177LL;

	t32 = ((x169-x170)&(x171/x172));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x174 = -1;
	int8_t x175 = INT8_MAX;
	static volatile int64_t x176 = INT64_MIN;
	volatile uint64_t t33 = 1045685LLU;

	t33 = ((x173-x174)&(x175/x176));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x182 = INT16_MIN;
	int64_t x183 = 628LL;
	int64_t x184 = INT64_MIN;
	uint64_t t34 = 501LLU;

	t34 = ((x181-x182)&(x183/x184));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x185 = 2570LL;
	int16_t x187 = INT16_MIN;
	static volatile int64_t t35 = 235946161LL;

	t35 = ((x185-x186)&(x187/x188));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x189 = INT8_MIN;
	int64_t x192 = INT64_MIN;

	t36 = ((x189-x190)&(x191/x192));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x193 = 9409683435494LLU;
	uint8_t x194 = UINT8_MAX;
	volatile int8_t x195 = INT8_MIN;
	volatile uint64_t t37 = 245LLU;

	t37 = ((x193-x194)&(x195/x196));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x197 = INT16_MIN;
	int16_t x198 = -1;
	int8_t x199 = INT8_MAX;
	int64_t x200 = -1LL;
	int64_t t38 = -14LL;

	t38 = ((x197-x198)&(x199/x200));

	if (t38 != -32767LL) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x201 = INT64_MIN;
	int8_t x202 = -12;
	static int32_t x204 = 41461503;
	static volatile int64_t t39 = -11LL;

	t39 = ((x201-x202)&(x203/x204));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x205 = -1;
	volatile int16_t x207 = -10014;
	static volatile uint16_t x208 = 2U;
	static volatile int64_t t40 = 109651769191844481LL;

	t40 = ((x205-x206)&(x207/x208));

	if (t40 != 9223372036854770801LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x209 = INT16_MIN;
	static uint64_t x210 = 24222LLU;
	uint64_t x211 = UINT64_MAX;
	uint32_t x212 = 161760U;
	static uint64_t t41 = 3767791727063LLU;

	t41 = ((x209-x210)&(x211/x212));

	if (t41 != 114037735366976LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x213 = -259948179;
	static uint8_t x214 = 9U;
	int64_t x215 = -1LL;
	int8_t x216 = -1;
	volatile int64_t t42 = 2056607736662LL;

	t42 = ((x213-x214)&(x215/x216));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x217 = UINT64_MAX;
	volatile int32_t x219 = -101798336;
	int8_t x220 = -2;
	uint64_t t43 = 1650175241LLU;

	t43 = ((x217-x218)&(x219/x220));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x221 = INT64_MIN;
	int16_t x223 = INT16_MIN;

	t44 = ((x221-x222)&(x223/x224));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x225 = -1;
	int8_t x226 = -24;
	int64_t x227 = INT64_MAX;
	uint16_t x228 = 3332U;

	t45 = ((x225-x226)&(x227/x228));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x229 = UINT64_MAX;
	int8_t x230 = -19;
	int16_t x231 = INT16_MAX;
	volatile uint64_t t46 = 45974385927LLU;

	t46 = ((x229-x230)&(x231/x232));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x241 = UINT32_MAX;
	int32_t x244 = INT32_MIN;

	t47 = ((x241-x242)&(x243/x244));

	if (t47 != 0U) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x245 = INT8_MIN;
	volatile int32_t x246 = INT32_MIN;
	volatile uint16_t x248 = 6U;
	int32_t t48 = 8016895;

	t48 = ((x245-x246)&(x247/x248));

	if (t48 != 2146932736) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x255 = INT64_MIN;
	static volatile int16_t x256 = INT16_MAX;
	volatile uint64_t t49 = 907LLU;

	t49 = ((x253-x254)&(x255/x256));

	if (t49 != 366633218664LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x259 = -1;
	volatile int64_t t50 = 28092859152190377LL;

	t50 = ((x257-x258)&(x259/x260));

	if (t50 != 1LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x262 = 99LLU;
	int32_t x263 = -1018362;
	uint64_t t51 = 997122801653500LLU;

	t51 = ((x261-x262)&(x263/x264));

	if (t51 != 613530384LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int8_t x265 = 4;
	int16_t x266 = INT16_MIN;
	int8_t x268 = INT8_MIN;

	t52 = ((x265-x266)&(x267/x268));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x270 = 5767U;
	int64_t x271 = INT64_MIN;
	static int32_t x272 = INT32_MAX;
	int64_t t53 = -273173311758LL;

	t53 = ((x269-x270)&(x271/x272));

	if (t53 != 4294961534LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x273 = -960194648643LL;
	int8_t x274 = INT8_MIN;
	int8_t x275 = INT8_MIN;
	volatile int16_t x276 = -430;

	t54 = ((x273-x274)&(x275/x276));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x277 = 3;
	volatile int64_t x278 = -453LL;
	uint64_t x279 = UINT64_MAX;
	int32_t x280 = -1;
	uint64_t t55 = 209LLU;

	t55 = ((x277-x278)&(x279/x280));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x285 = 356320186;
	static int64_t x286 = 127822075LL;
	volatile uint16_t x287 = UINT16_MAX;
	volatile int16_t x288 = INT16_MIN;

	t56 = ((x285-x286)&(x287/x288));

	if (t56 != 228498111LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x289 = -10;
	int8_t x290 = -3;
	int32_t x291 = INT32_MAX;
	uint32_t x292 = 707900U;
	uint32_t t57 = 12U;

	t57 = ((x289-x290)&(x291/x292));

	if (t57 != 3033U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x294 = -2;
	volatile int8_t x295 = -1;
	int32_t x296 = 100;
	volatile int32_t t58 = 4113086;

	t58 = ((x293-x294)&(x295/x296));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x305 = 188526835883438110LL;
	int8_t x306 = -1;
	int8_t x307 = 1;
	uint8_t x308 = 99U;
	int64_t t59 = -9961838763950LL;

	t59 = ((x305-x306)&(x307/x308));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x310 = INT8_MIN;
	static uint8_t x311 = UINT8_MAX;
	uint32_t x312 = 9274U;
	uint64_t t60 = 3LLU;

	t60 = ((x309-x310)&(x311/x312));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x314 = UINT64_MAX;
	int16_t x315 = -3;
	uint32_t x316 = UINT32_MAX;

	t61 = ((x313-x314)&(x315/x316));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x321 = 14;
	int16_t x322 = -2981;
	volatile int8_t x323 = 3;
	uint8_t x324 = UINT8_MAX;
	int32_t t62 = 23212792;

	t62 = ((x321-x322)&(x323/x324));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x326 = INT8_MIN;
	volatile int8_t x327 = 0;
	volatile int64_t t63 = 4116776916366LL;

	t63 = ((x325-x326)&(x327/x328));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x329 = 2U;
	int64_t x331 = INT64_MAX;
	static int8_t x332 = -1;
	volatile int64_t t64 = -252576978107LL;

	t64 = ((x329-x330)&(x331/x332));

	if (t64 != 1LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x333 = 13583069404181LL;
	int16_t x334 = INT16_MIN;
	int64_t t65 = -16540366LL;

	t65 = ((x333-x334)&(x335/x336));

	if (t65 != 13228667454465LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x337 = UINT64_MAX;
	int16_t x338 = INT16_MIN;
	volatile uint64_t t66 = 2082LLU;

	t66 = ((x337-x338)&(x339/x340));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x342 = 1717622744U;
	int16_t x343 = 96;
	uint8_t x344 = 3U;

	t67 = ((x341-x342)&(x343/x344));

	if (t67 != 32U) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x345 = 1781U;
	int8_t x346 = INT8_MAX;
	uint8_t x347 = 2U;
	static uint32_t t68 = 83U;

	t68 = ((x345-x346)&(x347/x348));

	if (t68 != 2U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x349 = -6455;
	int64_t x351 = -4528901583236121957LL;
	uint8_t x352 = UINT8_MAX;
	int64_t t69 = -32207929481179238LL;

	t69 = ((x349-x350)&(x351/x352));

	if (t69 != -17760398365638014LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x353 = INT8_MAX;
	volatile int16_t x354 = -1;
	volatile uint16_t x355 = 238U;
	int32_t x356 = -1;
	static int32_t t70 = -57993;

	t70 = ((x353-x354)&(x355/x356));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x357 = UINT64_MAX;
	static int8_t x360 = -1;
	static volatile uint64_t t71 = 3845269501LLU;

	t71 = ((x357-x358)&(x359/x360));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x362 = 7134;
	volatile uint16_t x363 = 1100U;
	int32_t t72 = -18047467;

	t72 = ((x361-x362)&(x363/x364));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x365 = INT16_MAX;
	uint32_t x366 = UINT32_MAX;
	volatile uint8_t x368 = UINT8_MAX;
	volatile uint32_t t73 = 1012472U;

	t73 = ((x365-x366)&(x367/x368));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x369 = UINT32_MAX;
	volatile int8_t x371 = INT8_MAX;
	static volatile uint8_t x372 = 11U;

	t74 = ((x369-x370)&(x371/x372));

	if (t74 != 11U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x373 = INT16_MIN;
	int8_t x374 = INT8_MIN;
	uint64_t x375 = 7103LLU;

	t75 = ((x373-x374)&(x375/x376));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x378 = 14357211U;
	int16_t x379 = -1;
	uint64_t x380 = 12720803LLU;
	volatile uint64_t t76 = 9295LLU;

	t76 = ((x377-x378)&(x379/x380));

	if (t76 != 2720008192LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x381 = -45448655LL;
	static int8_t x382 = INT8_MIN;
	int8_t x383 = -1;
	int8_t x384 = INT8_MIN;
	int64_t t77 = 3740514031180819LL;

	t77 = ((x381-x382)&(x383/x384));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x385 = 3;
	int16_t x386 = INT16_MAX;
	volatile uint64_t t78 = 10773176039LLU;

	t78 = ((x385-x386)&(x387/x388));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x389 = UINT32_MAX;
	volatile int32_t x390 = -1;
	int16_t x391 = 0;
	volatile uint32_t t79 = 3533U;

	t79 = ((x389-x390)&(x391/x392));

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x393 = -2;
	static int32_t x394 = 0;
	uint64_t x395 = 2021685933811186LLU;
	volatile int32_t x396 = INT32_MAX;

	t80 = ((x393-x394)&(x395/x396));

	if (t80 != 941420LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x397 = 1;
	int64_t x399 = 2345482918LL;
	volatile int64_t t81 = 59559211308349252LL;

	t81 = ((x397-x398)&(x399/x400));

	if (t81 != 2LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x401 = -739;
	static int16_t x402 = -924;
	int16_t x403 = INT16_MIN;
	static volatile uint32_t x404 = UINT32_MAX;
	static volatile uint32_t t82 = 486124111U;

	t82 = ((x401-x402)&(x403/x404));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x409 = UINT32_MAX;
	uint8_t x411 = 0U;
	volatile uint8_t x412 = 110U;
	uint32_t t83 = 2649864U;

	t83 = ((x409-x410)&(x411/x412));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x414 = 246491500149247LLU;
	static volatile int32_t x415 = 3708;
	int16_t x416 = INT16_MIN;

	t84 = ((x413-x414)&(x415/x416));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x417 = 60U;
	int64_t x419 = -1LL;
	int64_t x420 = 26419881130910LL;
	uint64_t t85 = 1514951LLU;

	t85 = ((x417-x418)&(x419/x420));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x421 = -25;
	int8_t x422 = INT8_MIN;
	uint16_t x423 = 1U;
	uint16_t x424 = 667U;

	t86 = ((x421-x422)&(x423/x424));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x425 = INT16_MIN;
	volatile uint16_t x427 = 148U;

	t87 = ((x425-x426)&(x427/x428));

	if (t87 != -14843LL) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x429 = 342295LLU;
	int8_t x430 = -1;
	volatile int8_t x431 = INT8_MIN;
	int64_t x432 = 1804478951345098794LL;
	uint64_t t88 = 6786022LLU;

	t88 = ((x429-x430)&(x431/x432));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x433 = 0U;
	static int16_t x434 = INT16_MIN;
	int64_t x436 = -1LL;
	int64_t t89 = 6843685002123754LL;

	t89 = ((x433-x434)&(x435/x436));

	if (t89 != 32768LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x437 = UINT8_MAX;
	int32_t x438 = 1;
	volatile int32_t x439 = -1178563;
	volatile int32_t x440 = -970724970;
	int32_t t90 = -39065;

	t90 = ((x437-x438)&(x439/x440));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x445 = 0;
	int32_t x446 = -1;
	int32_t x447 = INT32_MIN;
	uint32_t x448 = 53616559U;

	t91 = ((x445-x446)&(x447/x448));

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x450 = 23U;
	volatile uint16_t x451 = 0U;
	int32_t x452 = 38;
	uint32_t t92 = 741166840U;

	t92 = ((x449-x450)&(x451/x452));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x457 = UINT64_MAX;
	int16_t x458 = 9258;
	int16_t x459 = INT16_MIN;
	uint64_t t93 = 270351920284864LLU;

	t93 = ((x457-x458)&(x459/x460));

	if (t93 != 32768LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x461 = -1LL;
	uint64_t x462 = UINT64_MAX;
	static int32_t x463 = INT32_MIN;
	static uint16_t x464 = 2U;
	volatile uint64_t t94 = 20LLU;

	t94 = ((x461-x462)&(x463/x464));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x465 = INT16_MIN;
	int8_t x466 = -53;
	int8_t x467 = 0;
	int16_t x468 = -3;
	static volatile int32_t t95 = -5753;

	t95 = ((x465-x466)&(x467/x468));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint32_t x473 = UINT32_MAX;
	static int64_t x474 = 12838LL;
	int32_t x475 = -778;
	int64_t x476 = -49927245LL;
	volatile int64_t t96 = 14730491872662LL;

	t96 = ((x473-x474)&(x475/x476));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x477 = INT32_MIN;
	uint64_t x478 = UINT64_MAX;
	int8_t x479 = 12;
	uint32_t x480 = 47U;
	uint64_t t97 = 8LLU;

	t97 = ((x477-x478)&(x479/x480));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x481 = -1;

	t98 = ((x481-x482)&(x483/x484));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x489 = INT8_MIN;
	uint8_t x490 = 6U;
	uint64_t x491 = 258374157323LLU;
	uint64_t t99 = 3929790303LLU;

	t99 = ((x489-x490)&(x491/x492));

	if (t99 != 1013231984LLU) { NG(); } else { ; }
	
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

