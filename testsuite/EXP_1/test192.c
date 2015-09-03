#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x7 = INT32_MIN;
uint64_t x9 = 28520LLU;
uint8_t x12 = UINT8_MAX;
int8_t x18 = INT8_MIN;
int64_t x24 = 1034658516441610LL;
static volatile uint64_t x28 = UINT64_MAX;
uint64_t x33 = 68656729010259LLU;
int64_t x34 = INT64_MIN;
uint16_t x35 = 13U;
uint8_t x41 = 11U;
static int8_t x45 = INT8_MIN;
static volatile uint64_t x62 = UINT64_MAX;
int64_t x63 = 3LL;
static uint32_t x71 = UINT32_MAX;
int8_t x72 = -1;
static uint8_t x75 = 1U;
int8_t x76 = -1;
volatile int64_t x84 = -1LL;
int64_t x86 = INT64_MIN;
static int8_t x89 = INT8_MAX;
static volatile int32_t t19 = -59;
volatile uint32_t x99 = 59U;
volatile int32_t t22 = -140312086;
static volatile uint64_t x133 = UINT64_MAX;
int16_t x135 = -1;
int32_t t27 = 774;
static int64_t x144 = -2143905287LL;
volatile int32_t x147 = INT32_MIN;
volatile int32_t t31 = -2432;
uint8_t x153 = UINT8_MAX;
volatile int64_t x154 = 4194885472LL;
volatile uint64_t x162 = 18838027LLU;
volatile int32_t t34 = 634;
static int32_t x175 = -1;
uint8_t x176 = 19U;
static volatile int8_t x177 = INT8_MIN;
int64_t x182 = -1LL;
int32_t t37 = -102;
uint64_t x189 = 17488163LLU;
uint64_t x196 = 3934432389476857064LLU;
volatile uint64_t x213 = 13468687303909LLU;
int32_t x227 = -1;
int16_t x230 = INT16_MIN;
int32_t t46 = -29140;
static uint16_t x233 = 7U;
int32_t x236 = -1;
int16_t x239 = -1808;
uint8_t x241 = 125U;
int64_t x242 = INT64_MAX;
int32_t x246 = INT32_MAX;
uint16_t x251 = UINT16_MAX;
static volatile int32_t t53 = 3;
int16_t x267 = INT16_MIN;
int32_t x269 = -529152122;
volatile uint8_t x275 = 7U;
int16_t x277 = -1;
uint8_t x279 = 3U;
volatile int32_t t57 = -101;
uint32_t x282 = UINT32_MAX;
static int32_t x285 = INT32_MIN;
int8_t x287 = -1;
int32_t t59 = -1857;
static int16_t x299 = INT16_MAX;
volatile int16_t x305 = INT16_MIN;
int64_t x310 = INT64_MIN;
uint64_t x311 = 213330679173806LLU;
static volatile int32_t t64 = -42;
int32_t t66 = 204159139;
static uint16_t x325 = 370U;
volatile uint16_t x326 = 2U;
uint32_t x349 = UINT32_MAX;
uint64_t x359 = 12638298954LLU;
volatile int32_t x360 = -537;
static volatile uint64_t x361 = UINT64_MAX;
int32_t x367 = 0;
uint64_t x369 = 2303360788097LLU;
int16_t x370 = INT16_MAX;
uint64_t x373 = UINT64_MAX;
volatile int8_t x375 = INT8_MIN;
int64_t x381 = 690620933LL;
volatile int8_t x383 = INT8_MIN;
int16_t x392 = -2;
uint32_t x393 = 1493167U;
int8_t x399 = 0;
volatile int64_t x410 = -1LL;
static int32_t t84 = 7064;
int8_t x415 = -4;
static volatile uint32_t x416 = 306091U;
uint16_t x419 = 236U;
static int32_t x421 = 1680;
static uint32_t x434 = UINT32_MAX;
volatile int64_t x436 = -1617074LL;
uint8_t x437 = 4U;
volatile int8_t x443 = INT8_MAX;
volatile int32_t x449 = 13;
int32_t t91 = -103;
volatile int8_t x459 = 1;
uint64_t x480 = UINT64_MAX;
int32_t t94 = -14153245;
static volatile int8_t x484 = INT8_MIN;
int16_t x485 = INT16_MAX;
int32_t t97 = -11;
uint8_t x493 = 1U;
int32_t x494 = -1;
uint16_t x501 = 365U;


void f0(void) {
	static uint32_t x1 = 1359U;
	int8_t x2 = INT8_MIN;
	int16_t x3 = -1;
	int8_t x4 = INT8_MIN;
	volatile int32_t t0 = 569274901;

	t0 = (((x1-x2)-x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	volatile uint64_t x6 = UINT64_MAX;
	volatile uint32_t x8 = 6333391U;
	static volatile int32_t t1 = 263569372;

	t1 = (((x5-x6)-x7)<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint8_t x10 = 2U;
	int16_t x11 = -1;
	int32_t t2 = -4;

	t2 = (((x9-x10)-x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	static uint16_t x14 = UINT16_MAX;
	static uint32_t x15 = UINT32_MAX;
	uint32_t x16 = 2U;
	volatile int32_t t3 = -8488909;

	t3 = (((x13-x14)-x15)<=x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 42U;
	int64_t x19 = -9433585714210LL;
	uint16_t x20 = UINT16_MAX;
	int32_t t4 = -134;

	t4 = (((x17-x18)-x19)<=x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	int64_t x22 = INT64_MAX;
	int32_t x23 = INT32_MIN;
	int32_t t5 = -165792618;

	t5 = (((x21-x22)-x23)<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	int32_t x26 = INT32_MIN;
	int8_t x27 = INT8_MAX;
	int32_t t6 = -96;

	t6 = (((x25-x26)-x27)<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x36 = UINT32_MAX;
	volatile int32_t t7 = -26775417;

	t7 = (((x33-x34)-x35)<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MIN;
	int32_t x44 = -1;
	volatile int32_t t8 = -32;

	t8 = (((x41-x42)-x43)<=x44);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x46 = INT32_MIN;
	volatile int16_t x47 = -1;
	uint32_t x48 = 859789557U;
	volatile int32_t t9 = 7;

	t9 = (((x45-x46)-x47)<=x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x53 = -221;
	static uint32_t x54 = 173942U;
	uint8_t x55 = UINT8_MAX;
	static volatile int32_t x56 = -1;
	int32_t t10 = -2492;

	t10 = (((x53-x54)-x55)<=x56);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x57 = INT64_MIN;
	int16_t x58 = -1;
	int8_t x59 = INT8_MIN;
	static uint32_t x60 = UINT32_MAX;
	int32_t t11 = -4098588;

	t11 = (((x57-x58)-x59)<=x60);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x61 = INT64_MAX;
	uint8_t x64 = 27U;
	static int32_t t12 = 11333344;

	t12 = (((x61-x62)-x63)<=x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x65 = 0U;
	uint8_t x66 = 106U;
	static uint8_t x67 = 25U;
	int8_t x68 = INT8_MIN;
	volatile int32_t t13 = -44987906;

	t13 = (((x65-x66)-x67)<=x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint8_t x69 = UINT8_MAX;
	int16_t x70 = -1;
	int32_t t14 = 2434;

	t14 = (((x69-x70)-x71)<=x72);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x73 = INT32_MAX;
	static uint8_t x74 = 11U;
	volatile int32_t t15 = 50959;

	t15 = (((x73-x74)-x75)<=x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MAX;
	volatile uint16_t x78 = UINT16_MAX;
	int32_t x79 = -1;
	static uint16_t x80 = 0U;
	volatile int32_t t16 = -1582805;

	t16 = (((x77-x78)-x79)<=x80);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x81 = 62451166;
	volatile uint16_t x82 = 13U;
	int16_t x83 = INT16_MAX;
	volatile int32_t t17 = -24;

	t17 = (((x81-x82)-x83)<=x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x85 = 49948618425LLU;
	volatile uint16_t x87 = 561U;
	uint64_t x88 = 6162827352936441LLU;
	int32_t t18 = -92;

	t18 = (((x85-x86)-x87)<=x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x90 = INT64_MAX;
	static int64_t x91 = -179LL;
	uint8_t x92 = 4U;

	t19 = (((x89-x90)-x91)<=x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x93 = -1;
	static int16_t x94 = INT16_MIN;
	static volatile int32_t x95 = -87028;
	volatile uint64_t x96 = 29818918992895LLU;
	static volatile int32_t t20 = -902148307;

	t20 = (((x93-x94)-x95)<=x96);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x97 = 1849U;
	static int32_t x98 = INT32_MAX;
	int64_t x100 = 57651710644LL;
	int32_t t21 = 0;

	t21 = (((x97-x98)-x99)<=x100);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x105 = INT8_MIN;
	static int8_t x106 = INT8_MAX;
	int8_t x107 = INT8_MIN;
	uint8_t x108 = 54U;

	t22 = (((x105-x106)-x107)<=x108);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint32_t x109 = UINT32_MAX;
	static int8_t x110 = INT8_MIN;
	static int32_t x111 = -276189;
	int32_t x112 = INT32_MIN;
	int32_t t23 = 1531827;

	t23 = (((x109-x110)-x111)<=x112);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x117 = 0U;
	static volatile int64_t x118 = -11155LL;
	volatile int64_t x119 = -1LL;
	static uint8_t x120 = 0U;
	volatile int32_t t24 = 2;

	t24 = (((x117-x118)-x119)<=x120);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = UINT64_MAX;
	volatile int16_t x122 = -1;
	uint64_t x123 = 2923876747056LLU;
	int64_t x124 = -1LL;
	volatile int32_t t25 = -15;

	t25 = (((x121-x122)-x123)<=x124);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x129 = 9;
	static uint16_t x130 = 19361U;
	volatile int16_t x131 = INT16_MIN;
	static uint8_t x132 = UINT8_MAX;
	volatile int32_t t26 = 2392;

	t26 = (((x129-x130)-x131)<=x132);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x134 = UINT8_MAX;
	static uint8_t x136 = 62U;

	t27 = (((x133-x134)-x135)<=x136);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x137 = 1795U;
	static int32_t x138 = INT32_MIN;
	volatile uint32_t x139 = UINT32_MAX;
	int64_t x140 = INT64_MAX;
	int32_t t28 = 610;

	t28 = (((x137-x138)-x139)<=x140);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = -1LL;
	int8_t x142 = -3;
	volatile uint8_t x143 = 13U;
	static int32_t t29 = 9486342;

	t29 = (((x141-x142)-x143)<=x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x145 = -1;
	uint16_t x146 = UINT16_MAX;
	int16_t x148 = -1;
	volatile int32_t t30 = -3837459;

	t30 = (((x145-x146)-x147)<=x148);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x149 = 74230U;
	int64_t x150 = -1LL;
	int32_t x151 = -1;
	uint8_t x152 = 29U;

	t31 = (((x149-x150)-x151)<=x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x155 = INT64_MIN;
	int16_t x156 = INT16_MIN;
	int32_t t32 = 31;

	t32 = (((x153-x154)-x155)<=x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x157 = INT32_MIN;
	volatile int16_t x158 = INT16_MIN;
	static int8_t x159 = INT8_MIN;
	int8_t x160 = INT8_MIN;
	static volatile int32_t t33 = -90;

	t33 = (((x157-x158)-x159)<=x160);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x161 = 726527399LL;
	static uint8_t x163 = 108U;
	volatile int32_t x164 = INT32_MAX;

	t34 = (((x161-x162)-x163)<=x164);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x173 = 3382529747086448410LLU;
	volatile uint32_t x174 = 11U;
	volatile int32_t t35 = 615;

	t35 = (((x173-x174)-x175)<=x176);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x178 = 0;
	int64_t x179 = INT64_MIN;
	int32_t x180 = INT32_MIN;
	int32_t t36 = 9;

	t36 = (((x177-x178)-x179)<=x180);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x181 = UINT64_MAX;
	int16_t x183 = INT16_MIN;
	int32_t x184 = -1;

	t37 = (((x181-x182)-x183)<=x184);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x185 = INT16_MIN;
	int16_t x186 = INT16_MAX;
	int32_t x187 = 100;
	int64_t x188 = -7027602380LL;
	volatile int32_t t38 = 13;

	t38 = (((x185-x186)-x187)<=x188);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x190 = UINT32_MAX;
	uint8_t x191 = 115U;
	int64_t x192 = INT64_MIN;
	volatile int32_t t39 = 159797576;

	t39 = (((x189-x190)-x191)<=x192);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x193 = 2039960912654679493LL;
	int32_t x194 = INT32_MIN;
	volatile uint8_t x195 = 4U;
	volatile int32_t t40 = -7;

	t40 = (((x193-x194)-x195)<=x196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x197 = 1811594;
	uint32_t x198 = 1U;
	int8_t x199 = INT8_MIN;
	int16_t x200 = 0;
	int32_t t41 = -118;

	t41 = (((x197-x198)-x199)<=x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x205 = -1LL;
	int32_t x206 = -1;
	int16_t x207 = -1;
	uint8_t x208 = 63U;
	volatile int32_t t42 = -1;

	t42 = (((x205-x206)-x207)<=x208);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x214 = 1;
	int64_t x215 = 13LL;
	int16_t x216 = INT16_MAX;
	volatile int32_t t43 = 102447823;

	t43 = (((x213-x214)-x215)<=x216);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x221 = 1U;
	int16_t x222 = INT16_MIN;
	volatile int64_t x223 = INT64_MAX;
	uint8_t x224 = 4U;
	static volatile int32_t t44 = -6580664;

	t44 = (((x221-x222)-x223)<=x224);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x225 = -35010519LL;
	static uint64_t x226 = 4889919597367537LLU;
	static volatile uint8_t x228 = UINT8_MAX;
	volatile int32_t t45 = -122196596;

	t45 = (((x225-x226)-x227)<=x228);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x229 = INT8_MIN;
	int8_t x231 = INT8_MAX;
	static int16_t x232 = INT16_MIN;

	t46 = (((x229-x230)-x231)<=x232);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x234 = INT8_MIN;
	static volatile uint8_t x235 = 42U;
	int32_t t47 = -402474309;

	t47 = (((x233-x234)-x235)<=x236);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x237 = INT64_MIN;
	int64_t x238 = -1LL;
	int64_t x240 = -1LL;
	int32_t t48 = 72238584;

	t48 = (((x237-x238)-x239)<=x240);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x243 = 32U;
	uint8_t x244 = UINT8_MAX;
	int32_t t49 = 491025;

	t49 = (((x241-x242)-x243)<=x244);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x245 = 3432LL;
	uint16_t x247 = UINT16_MAX;
	static volatile uint8_t x248 = 27U;
	volatile int32_t t50 = -40090;

	t50 = (((x245-x246)-x247)<=x248);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x249 = INT8_MIN;
	uint32_t x250 = UINT32_MAX;
	volatile uint16_t x252 = 12U;
	int32_t t51 = -17;

	t51 = (((x249-x250)-x251)<=x252);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x253 = -1663378;
	uint8_t x254 = 2U;
	uint8_t x255 = 2U;
	uint16_t x256 = UINT16_MAX;
	int32_t t52 = 46;

	t52 = (((x253-x254)-x255)<=x256);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x257 = INT16_MAX;
	volatile int64_t x258 = 196560160563LL;
	static volatile uint16_t x259 = UINT16_MAX;
	volatile int16_t x260 = -2;

	t53 = (((x257-x258)-x259)<=x260);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x265 = 4;
	uint32_t x266 = UINT32_MAX;
	static int8_t x268 = INT8_MIN;
	volatile int32_t t54 = 57346;

	t54 = (((x265-x266)-x267)<=x268);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x270 = UINT32_MAX;
	uint64_t x271 = UINT64_MAX;
	volatile int8_t x272 = INT8_MIN;
	int32_t t55 = -548484;

	t55 = (((x269-x270)-x271)<=x272);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x273 = 53LL;
	static uint8_t x274 = 4U;
	static volatile int16_t x276 = INT16_MIN;
	int32_t t56 = -3306;

	t56 = (((x273-x274)-x275)<=x276);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint32_t x278 = 37111U;
	int64_t x280 = -1120954328LL;

	t57 = (((x277-x278)-x279)<=x280);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x281 = 0;
	int16_t x283 = -1;
	int8_t x284 = INT8_MIN;
	static volatile int32_t t58 = 633459936;

	t58 = (((x281-x282)-x283)<=x284);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x286 = INT64_MIN;
	static int64_t x288 = INT64_MIN;

	t59 = (((x285-x286)-x287)<=x288);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x293 = 3309276908210LLU;
	uint8_t x294 = UINT8_MAX;
	volatile uint8_t x295 = 5U;
	int64_t x296 = -1LL;
	static int32_t t60 = -71779;

	t60 = (((x293-x294)-x295)<=x296);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x297 = -1LL;
	volatile uint8_t x298 = 18U;
	volatile uint64_t x300 = 25941LLU;
	static volatile int32_t t61 = -6800;

	t61 = (((x297-x298)-x299)<=x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x301 = 1;
	static volatile int16_t x302 = 11570;
	uint32_t x303 = 153057383U;
	static uint32_t x304 = 3164U;
	int32_t t62 = -6;

	t62 = (((x301-x302)-x303)<=x304);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x306 = 372;
	volatile int32_t x307 = INT32_MIN;
	int16_t x308 = 155;
	volatile int32_t t63 = 573619712;

	t63 = (((x305-x306)-x307)<=x308);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x309 = 7441LLU;
	uint16_t x312 = 9U;

	t64 = (((x309-x310)-x311)<=x312);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x313 = 25U;
	static int64_t x314 = 112720967LL;
	static int8_t x315 = -3;
	int32_t x316 = INT32_MIN;
	int32_t t65 = -1;

	t65 = (((x313-x314)-x315)<=x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x317 = 679190544;
	static int8_t x318 = INT8_MAX;
	uint32_t x319 = 1U;
	static uint64_t x320 = 44LLU;

	t66 = (((x317-x318)-x319)<=x320);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x321 = INT8_MAX;
	volatile int8_t x322 = INT8_MIN;
	int16_t x323 = INT16_MIN;
	int8_t x324 = INT8_MIN;
	int32_t t67 = 7;

	t67 = (((x321-x322)-x323)<=x324);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x327 = -96401889LL;
	static volatile uint8_t x328 = 62U;
	volatile int32_t t68 = 1371;

	t68 = (((x325-x326)-x327)<=x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x329 = INT16_MIN;
	static int8_t x330 = INT8_MIN;
	int8_t x331 = -1;
	static uint64_t x332 = UINT64_MAX;
	volatile int32_t t69 = 61;

	t69 = (((x329-x330)-x331)<=x332);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x341 = 10131;
	int8_t x342 = INT8_MIN;
	int8_t x343 = -1;
	int16_t x344 = INT16_MAX;
	int32_t t70 = 986;

	t70 = (((x341-x342)-x343)<=x344);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x350 = 4;
	int64_t x351 = -1LL;
	int16_t x352 = INT16_MIN;
	int32_t t71 = 1174821;

	t71 = (((x349-x350)-x351)<=x352);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x357 = UINT16_MAX;
	static uint8_t x358 = 36U;
	static volatile int32_t t72 = -1;

	t72 = (((x357-x358)-x359)<=x360);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x362 = INT8_MIN;
	int16_t x363 = INT16_MIN;
	static uint64_t x364 = UINT64_MAX;
	volatile int32_t t73 = 1816948;

	t73 = (((x361-x362)-x363)<=x364);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x365 = -123;
	int32_t x366 = INT32_MIN;
	int32_t x368 = INT32_MIN;
	int32_t t74 = 3028;

	t74 = (((x365-x366)-x367)<=x368);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x371 = INT8_MIN;
	volatile int16_t x372 = INT16_MIN;
	static int32_t t75 = 0;

	t75 = (((x369-x370)-x371)<=x372);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x374 = 2204;
	uint64_t x376 = 222082455LLU;
	volatile int32_t t76 = 74469;

	t76 = (((x373-x374)-x375)<=x376);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x377 = -1;
	uint64_t x378 = 392538413LLU;
	uint64_t x379 = 446945747201912594LLU;
	uint64_t x380 = 24807LLU;
	int32_t t77 = -1;

	t77 = (((x377-x378)-x379)<=x380);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x382 = INT16_MIN;
	int32_t x384 = 33765;
	volatile int32_t t78 = -2;

	t78 = (((x381-x382)-x383)<=x384);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x389 = -1;
	int64_t x390 = INT64_MIN;
	int32_t x391 = 3770;
	static volatile int32_t t79 = -885935735;

	t79 = (((x389-x390)-x391)<=x392);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x394 = UINT64_MAX;
	int64_t x395 = INT64_MIN;
	volatile uint16_t x396 = 3824U;
	int32_t t80 = -1;

	t80 = (((x393-x394)-x395)<=x396);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = INT8_MIN;
	int32_t x400 = INT32_MIN;
	int32_t t81 = -9396;

	t81 = (((x397-x398)-x399)<=x400);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x401 = -6;
	int16_t x402 = -1;
	int8_t x403 = -1;
	uint64_t x404 = UINT64_MAX;
	volatile int32_t t82 = 10247358;

	t82 = (((x401-x402)-x403)<=x404);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x405 = 1637836228U;
	int32_t x406 = INT32_MIN;
	int32_t x407 = -1;
	volatile uint32_t x408 = 88U;
	volatile int32_t t83 = 4812585;

	t83 = (((x405-x406)-x407)<=x408);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x409 = INT32_MAX;
	static volatile int8_t x411 = INT8_MIN;
	uint32_t x412 = 619221U;

	t84 = (((x409-x410)-x411)<=x412);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x413 = 977120179LLU;
	int64_t x414 = INT64_MAX;
	static int32_t t85 = -482;

	t85 = (((x413-x414)-x415)<=x416);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x417 = UINT64_MAX;
	int32_t x418 = -5;
	int16_t x420 = INT16_MAX;
	volatile int32_t t86 = 1273489;

	t86 = (((x417-x418)-x419)<=x420);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x422 = INT16_MAX;
	volatile int32_t x423 = INT32_MIN;
	int8_t x424 = INT8_MAX;
	static int32_t t87 = 265433;

	t87 = (((x421-x422)-x423)<=x424);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x433 = 1;
	uint64_t x435 = UINT64_MAX;
	volatile int32_t t88 = -191388;

	t88 = (((x433-x434)-x435)<=x436);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x438 = 2U;
	static volatile int8_t x439 = INT8_MAX;
	uint16_t x440 = 1334U;
	volatile int32_t t89 = 57;

	t89 = (((x437-x438)-x439)<=x440);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x441 = -1;
	uint16_t x442 = 7U;
	int32_t x444 = INT32_MIN;
	int32_t t90 = -9;

	t90 = (((x441-x442)-x443)<=x444);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x450 = 5984665U;
	uint8_t x451 = UINT8_MAX;
	int32_t x452 = INT32_MIN;

	t91 = (((x449-x450)-x451)<=x452);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x457 = -3897942394103345538LL;
	static int16_t x458 = 3513;
	static int32_t x460 = INT32_MIN;
	static volatile int32_t t92 = -54088;

	t92 = (((x457-x458)-x459)<=x460);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x473 = UINT32_MAX;
	int32_t x474 = -944339;
	int32_t x475 = INT32_MIN;
	uint32_t x476 = 317596U;
	static int32_t t93 = 718855;

	t93 = (((x473-x474)-x475)<=x476);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x477 = INT8_MIN;
	volatile int64_t x478 = INT64_MIN;
	static volatile int16_t x479 = 322;

	t94 = (((x477-x478)-x479)<=x480);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x481 = INT64_MAX;
	static volatile uint16_t x482 = UINT16_MAX;
	int8_t x483 = INT8_MIN;
	int32_t t95 = -48482;

	t95 = (((x481-x482)-x483)<=x484);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x486 = 1377471863454881669LLU;
	uint32_t x487 = 242849462U;
	int32_t x488 = INT32_MAX;
	static volatile int32_t t96 = -30250;

	t96 = (((x485-x486)-x487)<=x488);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x489 = INT8_MAX;
	int64_t x490 = -8LL;
	int16_t x491 = -9;
	int8_t x492 = -1;

	t97 = (((x489-x490)-x491)<=x492);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x495 = -4315153615116401246LL;
	static uint64_t x496 = UINT64_MAX;
	volatile int32_t t98 = -39091462;

	t98 = (((x493-x494)-x495)<=x496);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x502 = UINT32_MAX;
	int64_t x503 = -2345LL;
	static volatile int32_t x504 = -222;
	static int32_t t99 = 1015;

	t99 = (((x501-x502)-x503)<=x504);

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

