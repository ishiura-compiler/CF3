#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MIN;
uint16_t x12 = UINT16_MAX;
int32_t x20 = INT32_MAX;
int8_t x28 = INT8_MIN;
volatile int32_t t7 = -1;
static volatile uint16_t x42 = 157U;
static uint32_t x47 = 5677746U;
int64_t x53 = INT64_MIN;
volatile int8_t x65 = -1;
uint32_t x66 = 6868U;
int64_t t12 = 7670353818928LL;
volatile int8_t x72 = INT8_MIN;
static int16_t x75 = -5;
int8_t x80 = INT8_MIN;
volatile int64_t x81 = 34601LL;
volatile uint32_t t16 = 204513U;
uint32_t x86 = 25478912U;
int8_t x87 = -14;
static volatile uint64_t x96 = 5LLU;
int32_t x104 = -17;
static volatile uint16_t x116 = 156U;
int64_t t25 = 127521270LL;
volatile int64_t x125 = INT64_MAX;
volatile uint64_t x150 = 7092266910LLU;
volatile int32_t t30 = -2;
volatile int64_t x160 = INT64_MIN;
volatile int64_t t31 = 4507449715810342222LL;
uint32_t x168 = 703438876U;
volatile int32_t x175 = -124291360;
int8_t x176 = INT8_MAX;
int64_t x192 = -392161109883LL;
uint64_t t37 = 8371239731871802819LLU;
int64_t x196 = INT64_MIN;
volatile uint64_t t41 = 7703667942722LLU;
static volatile int32_t t42 = 18819387;
static int32_t t43 = 31736;
static int64_t x227 = -1LL;
int32_t t46 = 8698301;
int64_t x241 = -1LL;
static uint16_t x242 = 3969U;
volatile uint8_t x245 = 19U;
static int8_t x250 = INT8_MIN;
static int32_t x254 = 11848371;
int16_t x264 = -36;
uint32_t x268 = 105918944U;
uint16_t x288 = UINT16_MAX;
int16_t x290 = -49;
int16_t x293 = INT16_MIN;
uint32_t x297 = UINT32_MAX;
static int32_t t60 = -2;
int32_t x306 = INT32_MIN;
volatile uint32_t t61 = 87321U;
int16_t x322 = INT16_MAX;
int32_t t64 = -418;
static int32_t x337 = -1;
int64_t x340 = INT64_MIN;
uint32_t x351 = 0U;
int64_t t70 = -27995067690LL;
int16_t x360 = -1;
uint8_t x363 = UINT8_MAX;
static uint16_t x365 = 2543U;
static volatile int32_t x367 = 18;
volatile int64_t x368 = -43LL;
int8_t x371 = 0;
int64_t x375 = -1LL;
int16_t x376 = -1;
int32_t x381 = -234330;
volatile int32_t t77 = -2354;
volatile uint64_t x389 = 285424651540649557LLU;
volatile int8_t x390 = 5;
volatile uint64_t t80 = 1239864178631081LLU;
static int16_t x404 = 2;
int32_t t82 = -68042;
volatile int32_t t83 = 214;
uint8_t x418 = 33U;
uint64_t x419 = 1049LLU;
int64_t x421 = INT64_MAX;
uint8_t x422 = UINT8_MAX;
int8_t x427 = 0;
uint32_t x429 = 0U;
uint32_t t88 = 1022U;
uint8_t x444 = 32U;
uint8_t x445 = 3U;
int64_t x455 = -1LL;
uint64_t x458 = 7792188260LLU;
static int64_t x461 = INT64_MIN;
volatile int32_t t94 = -6;
volatile int16_t x466 = INT16_MIN;
int32_t t95 = 643;
volatile int32_t t98 = 13080135;


void f0(void) {
	static uint64_t x2 = UINT64_MAX;
	int8_t x3 = -1;
	uint64_t x4 = 256598159949189LLU;
	volatile uint64_t t0 = 15471020838618LLU;

	t0 = (((x1<x2)-x3)%x4);

	if (t0 != 2LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x9 = INT32_MAX;
	volatile int8_t x10 = 0;
	volatile uint64_t x11 = 728LLU;
	uint64_t t1 = 210224LLU;

	t1 = (((x9<x10)-x11)%x12);

	if (t1 != 64808LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = -1LL;
	int16_t x14 = -137;
	int8_t x15 = INT8_MAX;
	uint16_t x16 = 509U;
	static volatile int32_t t2 = -7;

	t2 = (((x13<x14)-x15)%x16);

	if (t2 != -127) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = -175728655;
	uint16_t x18 = 1U;
	static uint16_t x19 = UINT16_MAX;
	static int32_t t3 = 239;

	t3 = (((x17<x18)-x19)%x20);

	if (t3 != -65534) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MAX;
	volatile int64_t x26 = -1LL;
	int32_t x27 = -1893;
	static int32_t t4 = 356;

	t4 = (((x25<x26)-x27)%x28);

	if (t4 != 101) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -1299;
	volatile int16_t x30 = 3;
	volatile int8_t x31 = INT8_MIN;
	int32_t x32 = INT32_MIN;
	int32_t t5 = -87421;

	t5 = (((x29<x30)-x31)%x32);

	if (t5 != 129) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x33 = INT8_MIN;
	uint64_t x34 = UINT64_MAX;
	uint8_t x35 = UINT8_MAX;
	int16_t x36 = 12;
	volatile int32_t t6 = -845961;

	t6 = (((x33<x34)-x35)%x36);

	if (t6 != -2) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x37 = -205;
	uint32_t x38 = 20382U;
	static volatile int8_t x39 = -1;
	int16_t x40 = INT16_MIN;

	t7 = (((x37<x38)-x39)%x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x41 = -1LL;
	uint16_t x43 = 29319U;
	int8_t x44 = INT8_MIN;
	int32_t t8 = 87;

	t8 = (((x41<x42)-x43)%x44);

	if (t8 != -6) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	static uint16_t x46 = UINT16_MAX;
	uint64_t x48 = UINT64_MAX;
	volatile uint64_t t9 = 1204LLU;

	t9 = (((x45<x46)-x47)%x48);

	if (t9 != 4289289550LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x49 = 41906;
	int64_t x50 = -1LL;
	static int8_t x51 = INT8_MIN;
	int32_t x52 = INT32_MIN;
	volatile int32_t t10 = -1;

	t10 = (((x49<x50)-x51)%x52);

	if (t10 != 128) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x54 = 15U;
	static int64_t x55 = -21090716915329LL;
	uint16_t x56 = 14634U;
	static volatile int64_t t11 = 112464455LL;

	t11 = (((x53<x54)-x55)%x56);

	if (t11 != 5096LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x67 = INT16_MAX;
	static int64_t x68 = INT64_MIN;

	t12 = (((x65<x66)-x67)%x68);

	if (t12 != -32767LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = -1LL;
	uint64_t x70 = 11096846444304340LLU;
	int64_t x71 = INT64_MAX;
	volatile int64_t t13 = -77488658799LL;

	t13 = (((x69<x70)-x71)%x72);

	if (t13 != -127LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x73 = -1;
	uint64_t x74 = UINT64_MAX;
	volatile int8_t x76 = 1;
	int32_t t14 = -594;

	t14 = (((x73<x74)-x75)%x76);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x77 = UINT32_MAX;
	int32_t x78 = 0;
	int32_t x79 = INT32_MAX;
	volatile int32_t t15 = -1809;

	t15 = (((x77<x78)-x79)%x80);

	if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x82 = INT64_MIN;
	volatile uint32_t x83 = 199181U;
	volatile int8_t x84 = -2;

	t16 = (((x81<x82)-x83)%x84);

	if (t16 != 4294768115U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x85 = INT16_MAX;
	volatile int64_t x88 = INT64_MAX;
	volatile int64_t t17 = 94262654644922LL;

	t17 = (((x85<x86)-x87)%x88);

	if (t17 != 15LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x89 = INT64_MIN;
	volatile int64_t x90 = INT64_MIN;
	int16_t x91 = -156;
	int32_t x92 = -181716;
	static volatile int32_t t18 = -3;

	t18 = (((x89<x90)-x91)%x92);

	if (t18 != 156) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x93 = 27019;
	int16_t x94 = -56;
	static int8_t x95 = -1;
	static uint64_t t19 = 598LLU;

	t19 = (((x93<x94)-x95)%x96);

	if (t19 != 1LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x97 = 8161020756867912LL;
	int64_t x98 = -1LL;
	static int8_t x99 = INT8_MIN;
	uint16_t x100 = UINT16_MAX;
	volatile int32_t t20 = 1;

	t20 = (((x97<x98)-x99)%x100);

	if (t20 != 128) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = -127478547640LL;
	uint8_t x102 = UINT8_MAX;
	volatile int8_t x103 = INT8_MIN;
	volatile int32_t t21 = 62;

	t21 = (((x101<x102)-x103)%x104);

	if (t21 != 10) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x105 = 39U;
	int8_t x106 = INT8_MAX;
	uint64_t x107 = 12593381446048LLU;
	int64_t x108 = INT64_MAX;
	uint64_t t22 = 42060232476LLU;

	t22 = (((x105<x106)-x107)%x108);

	if (t22 != 9223359443473329762LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x109 = 14;
	static uint32_t x110 = 689U;
	int16_t x111 = 3713;
	static volatile int32_t x112 = 257;
	int32_t t23 = 104443253;

	t23 = (((x109<x110)-x111)%x112);

	if (t23 != -114) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x113 = INT8_MIN;
	static int32_t x114 = INT32_MAX;
	static int8_t x115 = INT8_MAX;
	int32_t t24 = 57734817;

	t24 = (((x113<x114)-x115)%x116);

	if (t24 != -126) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = INT16_MAX;
	volatile uint64_t x118 = 1780905067988LLU;
	int64_t x119 = -1LL;
	volatile int64_t x120 = INT64_MAX;

	t25 = (((x117<x118)-x119)%x120);

	if (t25 != 2LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x126 = INT8_MIN;
	static uint8_t x127 = 11U;
	int32_t x128 = 1007;
	int32_t t26 = -2016862;

	t26 = (((x125<x126)-x127)%x128);

	if (t26 != -11) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x129 = 11;
	volatile int16_t x130 = -2031;
	static int8_t x131 = INT8_MIN;
	volatile int64_t x132 = INT64_MIN;
	int64_t t27 = 1005509524693LL;

	t27 = (((x129<x130)-x131)%x132);

	if (t27 != 128LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x141 = INT64_MAX;
	volatile uint16_t x142 = 278U;
	uint64_t x143 = 79256LLU;
	uint8_t x144 = UINT8_MAX;
	static uint64_t t28 = 338650757028288425LLU;

	t28 = (((x141<x142)-x143)%x144);

	if (t28 != 50LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x145 = INT64_MIN;
	volatile int8_t x146 = INT8_MIN;
	int16_t x147 = -1;
	uint64_t x148 = 42926386689272888LLU;
	volatile uint64_t t29 = 1682284LLU;

	t29 = (((x145<x146)-x147)%x148);

	if (t29 != 2LLU) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x149 = 2;
	int8_t x151 = 15;
	volatile uint16_t x152 = UINT16_MAX;

	t30 = (((x149<x150)-x151)%x152);

	if (t30 != -14) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x157 = 89U;
	int32_t x158 = INT32_MAX;
	int8_t x159 = -1;

	t31 = (((x157<x158)-x159)%x160);

	if (t31 != 2LL) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x161 = -1;
	volatile uint64_t x162 = 0LLU;
	volatile uint64_t x163 = UINT64_MAX;
	int64_t x164 = INT64_MAX;
	volatile uint64_t t32 = 471736342355039LLU;

	t32 = (((x161<x162)-x163)%x164);

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x165 = INT32_MIN;
	int16_t x166 = INT16_MAX;
	int16_t x167 = -1;
	uint32_t t33 = 18471U;

	t33 = (((x165<x166)-x167)%x168);

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x173 = 23919U;
	int8_t x174 = 4;
	volatile int32_t t34 = 29474848;

	t34 = (((x173<x174)-x175)%x176);

	if (t34 != 16) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = 15;
	static volatile int32_t x178 = 2026982;
	int8_t x179 = 38;
	volatile int32_t x180 = INT32_MAX;
	static int32_t t35 = 477;

	t35 = (((x177<x178)-x179)%x180);

	if (t35 != -37) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x185 = INT32_MAX;
	volatile uint8_t x186 = 3U;
	static volatile int8_t x187 = -1;
	uint8_t x188 = 13U;
	static int32_t t36 = -1369;

	t36 = (((x185<x186)-x187)%x188);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint64_t x189 = 1572485LLU;
	int64_t x190 = -1LL;
	uint64_t x191 = 31LLU;

	t37 = (((x189<x190)-x191)%x192);

	if (t37 != 392161109853LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x193 = INT8_MAX;
	static uint32_t x194 = 103U;
	int8_t x195 = -31;
	volatile int64_t t38 = -1095936951217934334LL;

	t38 = (((x193<x194)-x195)%x196);

	if (t38 != 31LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x197 = UINT64_MAX;
	uint16_t x198 = 4U;
	uint16_t x199 = UINT16_MAX;
	uint16_t x200 = 91U;
	int32_t t39 = -1776;

	t39 = (((x197<x198)-x199)%x200);

	if (t39 != -15) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x201 = 35530LLU;
	static int64_t x202 = 469311602607477LL;
	int32_t x203 = -417;
	volatile int64_t x204 = -1352958002LL;
	volatile int64_t t40 = -9458490414LL;

	t40 = (((x201<x202)-x203)%x204);

	if (t40 != 418LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x209 = 638;
	int64_t x210 = INT64_MIN;
	uint64_t x211 = UINT64_MAX;
	int8_t x212 = INT8_MIN;

	t41 = (((x209<x210)-x211)%x212);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x213 = 4036540662LLU;
	static volatile int8_t x214 = INT8_MIN;
	static volatile int16_t x215 = INT16_MIN;
	static int16_t x216 = INT16_MAX;

	t42 = (((x213<x214)-x215)%x216);

	if (t42 != 2) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x217 = 0;
	uint32_t x218 = UINT32_MAX;
	volatile uint8_t x219 = UINT8_MAX;
	int16_t x220 = -1;

	t43 = (((x217<x218)-x219)%x220);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x225 = 6U;
	static volatile int64_t x226 = 138LL;
	int8_t x228 = -1;
	volatile int64_t t44 = -498227LL;

	t44 = (((x225<x226)-x227)%x228);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x233 = INT32_MAX;
	int8_t x234 = INT8_MIN;
	volatile int16_t x235 = INT16_MAX;
	static int64_t x236 = INT64_MAX;
	static int64_t t45 = -700294LL;

	t45 = (((x233<x234)-x235)%x236);

	if (t45 != -32767LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x237 = 8542U;
	int64_t x238 = 688354311383810609LL;
	uint16_t x239 = 1U;
	static int32_t x240 = -1;

	t46 = (((x237<x238)-x239)%x240);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x243 = INT32_MAX;
	int64_t x244 = 820008041780243467LL;
	static volatile int64_t t47 = 15LL;

	t47 = (((x241<x242)-x243)%x244);

	if (t47 != -2147483646LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x246 = -1;
	int64_t x247 = 136648407LL;
	static volatile uint8_t x248 = 3U;
	volatile int64_t t48 = 2143490LL;

	t48 = (((x245<x246)-x247)%x248);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x249 = 29993U;
	volatile uint16_t x251 = 5U;
	int16_t x252 = INT16_MIN;
	volatile int32_t t49 = 5;

	t49 = (((x249<x250)-x251)%x252);

	if (t49 != -5) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x253 = UINT16_MAX;
	uint8_t x255 = 6U;
	uint32_t x256 = 1U;
	uint32_t t50 = 4215611U;

	t50 = (((x253<x254)-x255)%x256);

	if (t50 != 0U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x257 = 127872885384532LLU;
	int8_t x258 = -1;
	volatile uint32_t x259 = 1018834437U;
	static int64_t x260 = -1LL;
	static int64_t t51 = -525208930986266569LL;

	t51 = (((x257<x258)-x259)%x260);

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x261 = INT64_MIN;
	uint64_t x262 = 166347971LLU;
	static uint8_t x263 = UINT8_MAX;
	volatile int32_t t52 = -1003617;

	t52 = (((x261<x262)-x263)%x264);

	if (t52 != -3) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x265 = 393U;
	uint32_t x266 = 0U;
	volatile uint16_t x267 = UINT16_MAX;
	uint32_t t53 = 1033753U;

	t53 = (((x265<x266)-x267)%x268);

	if (t53 != 58144001U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x273 = 1937U;
	uint8_t x274 = 1U;
	uint64_t x275 = 1860456LLU;
	int32_t x276 = INT32_MAX;
	uint64_t t54 = 912724723LLU;

	t54 = (((x273<x274)-x275)%x276);

	if (t54 != 2145623195LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x281 = 10;
	static int8_t x282 = -1;
	volatile uint32_t x283 = UINT32_MAX;
	static int32_t x284 = -61436806;
	uint32_t t55 = 35651939U;

	t55 = (((x281<x282)-x283)%x284);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x285 = UINT8_MAX;
	int16_t x286 = -1;
	static int16_t x287 = -1;
	volatile int32_t t56 = 1;

	t56 = (((x285<x286)-x287)%x288);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x289 = INT32_MAX;
	static volatile int8_t x291 = 25;
	uint16_t x292 = 697U;
	int32_t t57 = 29;

	t57 = (((x289<x290)-x291)%x292);

	if (t57 != -25) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x294 = -1;
	uint16_t x295 = 2840U;
	int8_t x296 = INT8_MAX;
	int32_t t58 = 3523124;

	t58 = (((x293<x294)-x295)%x296);

	if (t58 != -45) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x298 = 18U;
	int64_t x299 = -5489LL;
	volatile uint64_t x300 = UINT64_MAX;
	uint64_t t59 = 1525LLU;

	t59 = (((x297<x298)-x299)%x300);

	if (t59 != 5489LLU) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x301 = UINT64_MAX;
	int8_t x302 = INT8_MIN;
	uint16_t x303 = 206U;
	uint8_t x304 = UINT8_MAX;

	t60 = (((x301<x302)-x303)%x304);

	if (t60 != -206) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x305 = INT16_MIN;
	uint32_t x307 = UINT32_MAX;
	static int8_t x308 = 1;

	t61 = (((x305<x306)-x307)%x308);

	if (t61 != 0U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x309 = UINT8_MAX;
	int64_t x310 = INT64_MIN;
	int8_t x311 = -22;
	volatile int8_t x312 = -1;
	volatile int32_t t62 = -1592;

	t62 = (((x309<x310)-x311)%x312);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x313 = INT8_MIN;
	int8_t x314 = 1;
	static volatile int64_t x315 = -1LL;
	volatile int8_t x316 = 1;
	volatile int64_t t63 = -1505LL;

	t63 = (((x313<x314)-x315)%x316);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x321 = 10U;
	int32_t x323 = INT32_MAX;
	uint8_t x324 = UINT8_MAX;

	t64 = (((x321<x322)-x323)%x324);

	if (t64 != -126) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int16_t x325 = INT16_MAX;
	static int32_t x326 = -3;
	uint8_t x327 = 10U;
	uint64_t x328 = UINT64_MAX;
	uint64_t t65 = 216563LLU;

	t65 = (((x325<x326)-x327)%x328);

	if (t65 != 18446744073709551606LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x329 = -1LL;
	int32_t x330 = 34598;
	uint16_t x331 = 753U;
	volatile uint64_t x332 = 34453462778LLU;
	uint64_t t66 = 20538207430621LLU;

	t66 = (((x329<x330)-x331)%x332);

	if (t66 != 29228857986LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x338 = INT8_MIN;
	int16_t x339 = 0;
	int64_t t67 = 52319182633250LL;

	t67 = (((x337<x338)-x339)%x340);

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x345 = UINT8_MAX;
	uint64_t x346 = UINT64_MAX;
	volatile uint32_t x347 = UINT32_MAX;
	uint8_t x348 = UINT8_MAX;
	uint32_t t68 = 22548248U;

	t68 = (((x345<x346)-x347)%x348);

	if (t68 != 2U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x349 = 125009436946130LLU;
	int64_t x350 = 230508LL;
	static int16_t x352 = INT16_MAX;
	static uint32_t t69 = 122266906U;

	t69 = (((x349<x350)-x351)%x352);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x353 = -1LL;
	int16_t x354 = INT16_MIN;
	int16_t x355 = -1;
	int64_t x356 = INT64_MIN;

	t70 = (((x353<x354)-x355)%x356);

	if (t70 != 1LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x357 = UINT32_MAX;
	int32_t x358 = INT32_MIN;
	static int64_t x359 = -160633718LL;
	static int64_t t71 = -78429373LL;

	t71 = (((x357<x358)-x359)%x360);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x361 = -4223;
	int32_t x362 = INT32_MIN;
	static uint64_t x364 = UINT64_MAX;
	volatile uint64_t t72 = 85898391573698LLU;

	t72 = (((x361<x362)-x363)%x364);

	if (t72 != 18446744073709551361LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x366 = INT16_MIN;
	volatile int64_t t73 = -7185635183711LL;

	t73 = (((x365<x366)-x367)%x368);

	if (t73 != -18LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x369 = 33093452LLU;
	static uint64_t x370 = 113LLU;
	int32_t x372 = 30033;
	int32_t t74 = 19635430;

	t74 = (((x369<x370)-x371)%x372);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x373 = INT8_MIN;
	volatile int64_t x374 = INT64_MIN;
	int64_t t75 = 1613939LL;

	t75 = (((x373<x374)-x375)%x376);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x377 = -1;
	volatile int16_t x378 = INT16_MIN;
	uint16_t x379 = 62U;
	volatile uint32_t x380 = UINT32_MAX;
	static uint32_t t76 = 1627465847U;

	t76 = (((x377<x378)-x379)%x380);

	if (t76 != 4294967234U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x382 = 0;
	volatile uint16_t x383 = UINT16_MAX;
	int16_t x384 = -1;

	t77 = (((x381<x382)-x383)%x384);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x385 = UINT8_MAX;
	static int8_t x386 = INT8_MAX;
	volatile int16_t x387 = INT16_MIN;
	static uint8_t x388 = UINT8_MAX;
	int32_t t78 = -475565893;

	t78 = (((x385<x386)-x387)%x388);

	if (t78 != 128) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x391 = 4755U;
	volatile int32_t x392 = -1;
	volatile uint32_t t79 = 109040U;

	t79 = (((x389<x390)-x391)%x392);

	if (t79 != 4294962541U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x397 = UINT8_MAX;
	int32_t x398 = INT32_MIN;
	uint64_t x399 = 8254782810433425971LLU;
	static int64_t x400 = -1LL;

	t80 = (((x397<x398)-x399)%x400);

	if (t80 != 10191961263276125645LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x401 = -856;
	static volatile int16_t x402 = -22;
	int8_t x403 = -1;
	volatile int32_t t81 = 13502312;

	t81 = (((x401<x402)-x403)%x404);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x409 = -1LL;
	static uint16_t x410 = UINT16_MAX;
	int16_t x411 = -12;
	uint16_t x412 = 772U;

	t82 = (((x409<x410)-x411)%x412);

	if (t82 != 13) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x413 = 4663523U;
	int16_t x414 = -1;
	static int8_t x415 = INT8_MIN;
	volatile int16_t x416 = -1;

	t83 = (((x413<x414)-x415)%x416);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x417 = 3U;
	volatile int64_t x420 = 10951198319475LL;
	volatile uint64_t t84 = 6533155967LLU;

	t84 = (((x417<x418)-x419)%x420);

	if (t84 != 9015668206293LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x423 = INT8_MAX;
	int8_t x424 = INT8_MIN;
	int32_t t85 = -141;

	t85 = (((x421<x422)-x423)%x424);

	if (t85 != -127) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x425 = INT16_MIN;
	uint64_t x426 = 1477258473LLU;
	volatile int16_t x428 = INT16_MIN;
	int32_t t86 = -275637;

	t86 = (((x425<x426)-x427)%x428);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x430 = INT16_MIN;
	volatile int8_t x431 = -1;
	uint8_t x432 = 119U;
	volatile int32_t t87 = 1311548;

	t87 = (((x429<x430)-x431)%x432);

	if (t87 != 2) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x437 = INT32_MAX;
	uint32_t x438 = 4197U;
	uint32_t x439 = 224257498U;
	volatile int16_t x440 = INT16_MIN;

	t88 = (((x437<x438)-x439)%x440);

	if (t88 != 4070709798U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x441 = 18808058948LLU;
	int32_t x442 = INT32_MIN;
	int16_t x443 = 3015;
	static volatile int32_t t89 = -15;

	t89 = (((x441<x442)-x443)%x444);

	if (t89 != -6) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int64_t x446 = INT64_MAX;
	int64_t x447 = INT64_MAX;
	int64_t x448 = INT64_MIN;
	int64_t t90 = 92557LL;

	t90 = (((x445<x446)-x447)%x448);

	if (t90 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int16_t x449 = -15;
	uint32_t x450 = 2273077U;
	static volatile int64_t x451 = -1LL;
	uint8_t x452 = 49U;
	volatile int64_t t91 = -282234LL;

	t91 = (((x449<x450)-x451)%x452);

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x453 = -15791;
	int64_t x454 = INT64_MIN;
	int64_t x456 = -1LL;
	volatile int64_t t92 = -8463215408LL;

	t92 = (((x453<x454)-x455)%x456);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x457 = 10U;
	int8_t x459 = INT8_MIN;
	int64_t x460 = 73183937935783LL;
	int64_t t93 = -121012391384LL;

	t93 = (((x457<x458)-x459)%x460);

	if (t93 != 129LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x462 = -5LL;
	int32_t x463 = INT32_MAX;
	int8_t x464 = 1;

	t94 = (((x461<x462)-x463)%x464);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x465 = INT16_MAX;
	int8_t x467 = 1;
	static int8_t x468 = -31;

	t95 = (((x465<x466)-x467)%x468);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x469 = 0LLU;
	static volatile int16_t x470 = -1;
	static volatile uint64_t x471 = 7958159491697873LLU;
	volatile uint32_t x472 = 13U;
	uint64_t t96 = 5938154677617LLU;

	t96 = (((x469<x470)-x471)%x472);

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x473 = 26U;
	static int32_t x474 = INT32_MIN;
	int64_t x475 = INT64_MAX;
	int8_t x476 = -1;
	volatile int64_t t97 = -2165443583089LL;

	t97 = (((x473<x474)-x475)%x476);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x477 = UINT8_MAX;
	volatile uint64_t x478 = 44LLU;
	static int8_t x479 = INT8_MIN;
	volatile int8_t x480 = -5;

	t98 = (((x477<x478)-x479)%x480);

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x481 = UINT32_MAX;
	int64_t x482 = -4570498LL;
	int8_t x483 = 27;
	static uint16_t x484 = UINT16_MAX;
	int32_t t99 = 7915;

	t99 = (((x481<x482)-x483)%x484);

	if (t99 != -27) { NG(); } else { ; }
	
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

