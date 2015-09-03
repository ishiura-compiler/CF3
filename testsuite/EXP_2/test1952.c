#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = -1;
uint32_t t0 = 1905908U;
int32_t x9 = -8;
static int16_t x12 = INT16_MIN;
uint32_t x19 = 63U;
uint8_t x20 = 5U;
static uint32_t x37 = 410U;
int16_t x38 = INT16_MIN;
int64_t t9 = 574LL;
int32_t x42 = -10121;
static volatile uint32_t t10 = 255811U;
int16_t x51 = INT16_MIN;
static int16_t x56 = -1;
static volatile int32_t x66 = INT32_MIN;
volatile int32_t t17 = -21;
volatile int8_t x75 = -1;
static uint64_t x78 = 4034842589250123250LLU;
uint8_t x93 = 11U;
int32_t x94 = INT32_MIN;
uint32_t x96 = UINT32_MAX;
int64_t x103 = INT64_MAX;
int16_t x105 = INT16_MIN;
static int8_t x106 = -2;
int16_t x110 = INT16_MIN;
int16_t x112 = 6;
static uint8_t x126 = 0U;
static int64_t x135 = INT64_MAX;
int32_t t34 = -3;
uint8_t x157 = 0U;
volatile int8_t x158 = 28;
uint32_t t35 = 1137U;
int16_t x165 = -4;
volatile int32_t t37 = 10;
int8_t x170 = INT8_MAX;
int16_t x172 = -8256;
volatile int16_t x174 = INT16_MIN;
int32_t t39 = 22897;
volatile int16_t x180 = -6971;
int32_t x183 = INT32_MIN;
int8_t x186 = INT8_MAX;
uint32_t x190 = 27793U;
volatile int16_t x194 = -1642;
uint32_t x196 = 245423479U;
volatile uint32_t x203 = UINT32_MAX;
volatile int32_t t47 = -1;
uint8_t x211 = 1U;
int8_t x226 = -20;
int32_t t53 = 6;
int64_t x233 = INT64_MIN;
volatile int32_t x235 = 6730505;
int64_t x237 = INT64_MAX;
volatile int32_t t55 = -8711897;
int32_t x247 = -398167736;
uint32_t x248 = 13423276U;
int8_t x253 = -2;
int64_t x256 = 441778177938856913LL;
static int64_t t59 = 48503837296LL;
int8_t x258 = -1;
int8_t x264 = INT8_MAX;
int8_t x269 = INT8_MIN;
int16_t x272 = INT16_MAX;
int64_t x280 = 120492763LL;
int64_t x282 = INT64_MIN;
int16_t x287 = -6424;
uint64_t x288 = 461231688LLU;
int16_t x294 = INT16_MIN;
int32_t x295 = INT32_MIN;
volatile uint32_t t69 = 26637U;
int16_t x303 = 121;
volatile int32_t t71 = -1;
int64_t x321 = 0LL;
uint8_t x325 = 1U;
int8_t x329 = INT8_MAX;
int16_t x334 = -1;
int8_t x335 = -49;
uint8_t x336 = UINT8_MAX;
int64_t x339 = INT64_MIN;
uint8_t x346 = UINT8_MAX;
static int8_t x358 = -1;
int8_t x361 = INT8_MIN;
static int64_t x372 = 321975051934LL;
volatile int16_t x377 = -6890;
uint8_t x379 = 3U;
static volatile int32_t x386 = -259193;
uint8_t x387 = 2U;
uint32_t x400 = UINT32_MAX;
uint32_t t90 = 103522U;
int32_t t92 = 114005;
uint8_t x419 = 14U;
volatile int32_t x421 = INT32_MIN;
volatile int32_t t95 = -19;


void f0(void) {
	uint64_t x1 = 6710685588869114LLU;
	int8_t x3 = 8;
	uint32_t x4 = 109951000U;

	t0 = ((x1==(x2|x3))-x4);

	if (t0 != 4185016296U) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = -56;
	static int8_t x6 = INT8_MIN;
	volatile int32_t x7 = INT32_MIN;
	int64_t x8 = -210795623570107756LL;
	static int64_t t1 = -174619220LL;

	t1 = ((x5==(x6|x7))-x8);

	if (t1 != 210795623570107756LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int64_t x10 = INT64_MIN;
	volatile int64_t x11 = -1LL;
	int32_t t2 = -71224991;

	t2 = ((x9==(x10|x11))-x12);

	if (t2 != 32768) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = 10U;
	int32_t x14 = INT32_MIN;
	volatile uint64_t x15 = 30517886LLU;
	uint8_t x16 = UINT8_MAX;
	int32_t t3 = -671911;

	t3 = ((x13==(x14|x15))-x16);

	if (t3 != -255) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = -83;
	volatile int16_t x18 = INT16_MIN;
	volatile int32_t t4 = 28739;

	t4 = ((x17==(x18|x19))-x20);

	if (t4 != -5) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 0;
	int64_t x22 = -55LL;
	int16_t x23 = INT16_MIN;
	volatile uint32_t x24 = UINT32_MAX;
	static volatile uint32_t t5 = 104U;

	t5 = ((x21==(x22|x23))-x24);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile int32_t x26 = -1;
	int32_t x27 = INT32_MAX;
	volatile int16_t x28 = -1;
	int32_t t6 = 126;

	t6 = ((x25==(x26|x27))-x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 31745030U;
	int64_t x30 = -1LL;
	int64_t x31 = 5249838LL;
	uint8_t x32 = 43U;
	int32_t t7 = -23;

	t7 = ((x29==(x30|x31))-x32);

	if (t7 != -43) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 13739113U;
	uint64_t x34 = 15962770LLU;
	int64_t x35 = -1LL;
	int8_t x36 = -1;
	volatile int32_t t8 = 1108232;

	t8 = ((x33==(x34|x35))-x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x39 = -1;
	int64_t x40 = INT64_MAX;

	t9 = ((x37==(x38|x39))-x40);

	if (t9 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -6128898436805LL;
	int32_t x43 = -1;
	volatile uint32_t x44 = 442854098U;

	t10 = ((x41==(x42|x43))-x44);

	if (t10 != 3852113198U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = UINT32_MAX;
	uint16_t x46 = 91U;
	int64_t x47 = INT64_MIN;
	int8_t x48 = INT8_MIN;
	volatile int32_t t11 = -4;

	t11 = ((x45==(x46|x47))-x48);

	if (t11 != 128) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	uint8_t x50 = UINT8_MAX;
	uint32_t x52 = UINT32_MAX;
	static volatile uint32_t t12 = 3U;

	t12 = ((x49==(x50|x51))-x52);

	if (t12 != 1U) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	volatile uint8_t x54 = 1U;
	int32_t x55 = INT32_MAX;
	int32_t t13 = -158328990;

	t13 = ((x53==(x54|x55))-x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	int8_t x58 = -1;
	int64_t x59 = -1LL;
	volatile uint32_t x60 = 15783U;
	uint32_t t14 = 62U;

	t14 = ((x57==(x58|x59))-x60);

	if (t14 != 4294951513U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	volatile int16_t x62 = -1;
	int8_t x63 = INT8_MAX;
	volatile uint64_t x64 = 998324LLU;
	uint64_t t15 = 4883LLU;

	t15 = ((x61==(x62|x63))-x64);

	if (t15 != 18446744073708553292LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x65 = INT64_MAX;
	uint32_t x67 = UINT32_MAX;
	volatile int64_t x68 = -2213177980685998545LL;
	volatile int64_t t16 = 21LL;

	t16 = ((x65==(x66|x67))-x68);

	if (t16 != 2213177980685998545LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	uint8_t x70 = UINT8_MAX;
	static volatile int16_t x71 = INT16_MAX;
	int32_t x72 = INT32_MAX;

	t17 = ((x69==(x70|x71))-x72);

	if (t17 != -2147483647) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = UINT64_MAX;
	static volatile int64_t x74 = INT64_MIN;
	int8_t x76 = -1;
	volatile int32_t t18 = 91;

	t18 = ((x73==(x74|x75))-x76);

	if (t18 != 2) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = -1LL;
	static uint32_t x79 = 390U;
	uint32_t x80 = UINT32_MAX;
	uint32_t t19 = 526678U;

	t19 = ((x77==(x78|x79))-x80);

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	volatile uint64_t x82 = 7982128729LLU;
	uint64_t x83 = 131621LLU;
	uint64_t x84 = 7042LLU;
	static volatile uint64_t t20 = 51218463LLU;

	t20 = ((x81==(x82|x83))-x84);

	if (t20 != 18446744073709544574LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 28;
	volatile int64_t x86 = -1LL;
	int16_t x87 = -596;
	volatile int16_t x88 = INT16_MAX;
	volatile int32_t t21 = -2;

	t21 = ((x85==(x86|x87))-x88);

	if (t21 != -32767) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -26518;
	int8_t x90 = 4;
	uint32_t x91 = UINT32_MAX;
	uint64_t x92 = 14935857LLU;
	uint64_t t22 = 1140894055109547LLU;

	t22 = ((x89==(x90|x91))-x92);

	if (t22 != 18446744073694615759LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x95 = INT16_MAX;
	uint32_t t23 = 561097U;

	t23 = ((x93==(x94|x95))-x96);

	if (t23 != 1U) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = INT16_MAX;
	uint16_t x98 = UINT16_MAX;
	static uint64_t x99 = 91713003167LLU;
	int32_t x100 = -1;
	static int32_t t24 = 1160777;

	t24 = ((x97==(x98|x99))-x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = -414LL;
	int8_t x102 = 7;
	int8_t x104 = 32;
	volatile int32_t t25 = -18077;

	t25 = ((x101==(x102|x103))-x104);

	if (t25 != -32) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x107 = 13332U;
	int64_t x108 = -2970LL;
	static volatile int64_t t26 = -12433216LL;

	t26 = ((x105==(x106|x107))-x108);

	if (t26 != 2970LL) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = INT8_MAX;
	volatile uint64_t x111 = 25LLU;
	volatile int32_t t27 = 427067428;

	t27 = ((x109==(x110|x111))-x112);

	if (t27 != -6) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x113 = 159U;
	int16_t x114 = INT16_MIN;
	uint64_t x115 = UINT64_MAX;
	int8_t x116 = 0;
	int32_t t28 = 517072;

	t28 = ((x113==(x114|x115))-x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x117 = 9U;
	static int64_t x118 = -23321911642LL;
	int32_t x119 = INT32_MIN;
	uint64_t x120 = UINT64_MAX;
	static volatile uint64_t t29 = 259457839LLU;

	t29 = ((x117==(x118|x119))-x120);

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x125 = 201508017LLU;
	static uint16_t x127 = 32U;
	int32_t x128 = -1;
	volatile int32_t t30 = -52849;

	t30 = ((x125==(x126|x127))-x128);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = -111;
	static uint8_t x130 = 5U;
	int64_t x131 = INT64_MIN;
	int16_t x132 = INT16_MIN;
	static volatile int32_t t31 = 444;

	t31 = ((x129==(x130|x131))-x132);

	if (t31 != 32768) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x133 = -1;
	uint16_t x134 = 2685U;
	volatile int16_t x136 = -1;
	int32_t t32 = 19194873;

	t32 = ((x133==(x134|x135))-x136);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = 152424LL;
	int16_t x146 = -1;
	uint16_t x147 = UINT16_MAX;
	uint32_t x148 = 1855172U;
	uint32_t t33 = 120048U;

	t33 = ((x145==(x146|x147))-x148);

	if (t33 != 4293112124U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x153 = 16U;
	int8_t x154 = -4;
	int16_t x155 = -1;
	volatile int16_t x156 = INT16_MAX;

	t34 = ((x153==(x154|x155))-x156);

	if (t34 != -32767) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x159 = 5;
	uint32_t x160 = UINT32_MAX;

	t35 = ((x157==(x158|x159))-x160);

	if (t35 != 1U) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 1914U;
	static int32_t x162 = 1;
	int32_t x163 = INT32_MIN;
	uint16_t x164 = 0U;
	volatile int32_t t36 = -410122726;

	t36 = ((x161==(x162|x163))-x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x166 = -1;
	static int16_t x167 = -1;
	uint8_t x168 = 5U;

	t37 = ((x165==(x166|x167))-x168);

	if (t37 != -5) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x169 = INT8_MAX;
	volatile int16_t x171 = -1;
	static volatile int32_t t38 = -4135768;

	t38 = ((x169==(x170|x171))-x172);

	if (t38 != 8256) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint64_t x173 = 5763372LLU;
	int16_t x175 = 945;
	volatile uint16_t x176 = UINT16_MAX;

	t39 = ((x173==(x174|x175))-x176);

	if (t39 != -65535) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x177 = UINT16_MAX;
	int8_t x178 = -1;
	static uint16_t x179 = 2U;
	static volatile int32_t t40 = 11809182;

	t40 = ((x177==(x178|x179))-x180);

	if (t40 != 6971) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x181 = 4U;
	uint32_t x182 = 6U;
	int16_t x184 = 14810;
	int32_t t41 = -8;

	t41 = ((x181==(x182|x183))-x184);

	if (t41 != -14810) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x185 = UINT16_MAX;
	int64_t x187 = -44LL;
	static uint64_t x188 = 18385LLU;
	static volatile uint64_t t42 = 3722690574670LLU;

	t42 = ((x185==(x186|x187))-x188);

	if (t42 != 18446744073709533231LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = -1LL;
	int16_t x191 = 2;
	int64_t x192 = -1LL;
	static int64_t t43 = 43001177LL;

	t43 = ((x189==(x190|x191))-x192);

	if (t43 != 1LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x193 = 18785U;
	int64_t x195 = INT64_MAX;
	uint32_t t44 = 159049572U;

	t44 = ((x193==(x194|x195))-x196);

	if (t44 != 4049543817U) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x197 = 3;
	int8_t x198 = 1;
	int64_t x199 = -1LL;
	static uint32_t x200 = UINT32_MAX;
	static uint32_t t45 = 309612U;

	t45 = ((x197==(x198|x199))-x200);

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x201 = 2785873194660972LLU;
	static int16_t x202 = INT16_MAX;
	static int16_t x204 = INT16_MAX;
	static int32_t t46 = -16736416;

	t46 = ((x201==(x202|x203))-x204);

	if (t46 != -32767) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x205 = -2554774005765370081LL;
	uint16_t x206 = 6U;
	static int32_t x207 = INT32_MAX;
	int16_t x208 = 3690;

	t47 = ((x205==(x206|x207))-x208);

	if (t47 != -3690) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x209 = 0;
	int64_t x210 = 907921852530198LL;
	int16_t x212 = INT16_MIN;
	volatile int32_t t48 = -31;

	t48 = ((x209==(x210|x211))-x212);

	if (t48 != 32768) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = -15015141674LL;
	uint8_t x214 = 18U;
	static volatile int32_t x215 = INT32_MAX;
	volatile int32_t x216 = -1;
	volatile int32_t t49 = -21068;

	t49 = ((x213==(x214|x215))-x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x217 = -7;
	int32_t x218 = -1;
	uint16_t x219 = 2363U;
	static int16_t x220 = 1560;
	volatile int32_t t50 = 33592724;

	t50 = ((x217==(x218|x219))-x220);

	if (t50 != -1560) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x221 = UINT32_MAX;
	int8_t x222 = INT8_MIN;
	int64_t x223 = INT64_MIN;
	int8_t x224 = 0;
	int32_t t51 = 510563814;

	t51 = ((x221==(x222|x223))-x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x225 = INT64_MAX;
	uint16_t x227 = 0U;
	volatile int8_t x228 = INT8_MIN;
	int32_t t52 = -1269956;

	t52 = ((x225==(x226|x227))-x228);

	if (t52 != 128) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x229 = INT64_MAX;
	int16_t x230 = INT16_MIN;
	uint64_t x231 = UINT64_MAX;
	static int32_t x232 = -47712;

	t53 = ((x229==(x230|x231))-x232);

	if (t53 != 47712) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x234 = 579U;
	volatile int32_t x236 = 3290789;
	int32_t t54 = -516498;

	t54 = ((x233==(x234|x235))-x236);

	if (t54 != -3290789) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x238 = 647LL;
	uint8_t x239 = UINT8_MAX;
	volatile int32_t x240 = INT32_MAX;

	t55 = ((x237==(x238|x239))-x240);

	if (t55 != -2147483647) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x241 = INT64_MIN;
	uint16_t x242 = UINT16_MAX;
	int8_t x243 = INT8_MIN;
	int8_t x244 = -12;
	int32_t t56 = -25781737;

	t56 = ((x241==(x242|x243))-x244);

	if (t56 != 12) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x245 = INT8_MIN;
	int16_t x246 = INT16_MIN;
	uint32_t t57 = 185967U;

	t57 = ((x245==(x246|x247))-x248);

	if (t57 != 4281544020U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = -1LL;
	static int8_t x250 = 0;
	static int16_t x251 = -1;
	uint8_t x252 = 13U;
	volatile int32_t t58 = -121490528;

	t58 = ((x249==(x250|x251))-x252);

	if (t58 != -12) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint64_t x254 = 6501977306771398036LLU;
	uint16_t x255 = 208U;

	t59 = ((x253==(x254|x255))-x256);

	if (t59 != -441778177938856913LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x257 = UINT64_MAX;
	int8_t x259 = INT8_MAX;
	int16_t x260 = -1;
	int32_t t60 = -6;

	t60 = ((x257==(x258|x259))-x260);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x261 = -1;
	int16_t x262 = -1096;
	int32_t x263 = INT32_MIN;
	static int32_t t61 = -411874068;

	t61 = ((x261==(x262|x263))-x264);

	if (t61 != -127) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x265 = -165996348147254566LL;
	int16_t x266 = -63;
	int16_t x267 = 222;
	volatile int32_t x268 = -1;
	int32_t t62 = 23139382;

	t62 = ((x265==(x266|x267))-x268);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x270 = 59U;
	int8_t x271 = INT8_MIN;
	int32_t t63 = 1;

	t63 = ((x269==(x270|x271))-x272);

	if (t63 != -32767) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x273 = 6551U;
	int64_t x274 = INT64_MAX;
	uint32_t x275 = 60591U;
	static int64_t x276 = 177679LL;
	static volatile int64_t t64 = -47507721LL;

	t64 = ((x273==(x274|x275))-x276);

	if (t64 != -177679LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = INT64_MIN;
	int16_t x278 = INT16_MIN;
	static int16_t x279 = INT16_MAX;
	static int64_t t65 = -687479540LL;

	t65 = ((x277==(x278|x279))-x280);

	if (t65 != -120492763LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x281 = 2622614U;
	uint8_t x283 = 3U;
	int64_t x284 = -1LL;
	volatile int64_t t66 = 626263041374150LL;

	t66 = ((x281==(x282|x283))-x284);

	if (t66 != 1LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = 39U;
	int8_t x286 = INT8_MIN;
	volatile uint64_t t67 = 50LLU;

	t67 = ((x285==(x286|x287))-x288);

	if (t67 != 18446744073248319928LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = 1616294570LL;
	uint16_t x290 = UINT16_MAX;
	uint32_t x291 = 1U;
	int8_t x292 = 1;
	int32_t t68 = 790872044;

	t68 = ((x289==(x290|x291))-x292);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x293 = 1906520952U;
	uint32_t x296 = 8729875U;

	t69 = ((x293==(x294|x295))-x296);

	if (t69 != 4286237421U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x297 = INT8_MIN;
	static volatile uint16_t x298 = 15067U;
	volatile uint8_t x299 = 0U;
	volatile uint32_t x300 = UINT32_MAX;
	static uint32_t t70 = 316U;

	t70 = ((x297==(x298|x299))-x300);

	if (t70 != 1U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x301 = 1193590597U;
	volatile uint64_t x302 = 28000105783LLU;
	volatile uint8_t x304 = UINT8_MAX;

	t71 = ((x301==(x302|x303))-x304);

	if (t71 != -255) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x309 = INT16_MIN;
	static volatile int8_t x310 = INT8_MIN;
	volatile int8_t x311 = 4;
	uint8_t x312 = UINT8_MAX;
	int32_t t72 = 90;

	t72 = ((x309==(x310|x311))-x312);

	if (t72 != -255) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x313 = INT16_MAX;
	int16_t x314 = 20;
	uint64_t x315 = UINT64_MAX;
	static volatile int8_t x316 = INT8_MIN;
	int32_t t73 = 1;

	t73 = ((x313==(x314|x315))-x316);

	if (t73 != 128) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x317 = -1;
	static uint64_t x318 = UINT64_MAX;
	uint32_t x319 = 8718U;
	uint16_t x320 = UINT16_MAX;
	volatile int32_t t74 = -39;

	t74 = ((x317==(x318|x319))-x320);

	if (t74 != -65534) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x322 = 22U;
	uint16_t x323 = UINT16_MAX;
	static volatile int32_t x324 = INT32_MAX;
	volatile int32_t t75 = 499;

	t75 = ((x321==(x322|x323))-x324);

	if (t75 != -2147483647) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x326 = -20;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -1;
	volatile int32_t t76 = 856;

	t76 = ((x325==(x326|x327))-x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x330 = INT32_MIN;
	int32_t x331 = -1;
	int16_t x332 = 248;
	volatile int32_t t77 = 16186;

	t77 = ((x329==(x330|x331))-x332);

	if (t77 != -248) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x333 = INT8_MIN;
	volatile int32_t t78 = 2681274;

	t78 = ((x333==(x334|x335))-x336);

	if (t78 != -255) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x337 = -7;
	int32_t x338 = -1;
	int16_t x340 = INT16_MIN;
	int32_t t79 = -120641;

	t79 = ((x337==(x338|x339))-x340);

	if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x345 = UINT64_MAX;
	uint64_t x347 = 51898095725LLU;
	volatile uint64_t x348 = 2474272690084220619LLU;
	uint64_t t80 = 545219LLU;

	t80 = ((x345==(x346|x347))-x348);

	if (t80 != 15972471383625330997LLU) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x349 = INT16_MIN;
	int8_t x350 = INT8_MIN;
	int8_t x351 = 41;
	int32_t x352 = INT32_MAX;
	int32_t t81 = 2160;

	t81 = ((x349==(x350|x351))-x352);

	if (t81 != -2147483647) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = INT64_MAX;
	int32_t x354 = INT32_MIN;
	static int8_t x355 = -1;
	static uint32_t x356 = 11017685U;
	uint32_t t82 = 19584963U;

	t82 = ((x353==(x354|x355))-x356);

	if (t82 != 4283949611U) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile int16_t x357 = -1;
	int64_t x359 = INT64_MIN;
	int16_t x360 = INT16_MIN;
	int32_t t83 = 476832416;

	t83 = ((x357==(x358|x359))-x360);

	if (t83 != 32769) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x362 = -1;
	static volatile int32_t x363 = INT32_MIN;
	int16_t x364 = -1;
	volatile int32_t t84 = 0;

	t84 = ((x361==(x362|x363))-x364);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x369 = 1724158U;
	static int16_t x370 = INT16_MIN;
	int8_t x371 = INT8_MAX;
	volatile int64_t t85 = 2LL;

	t85 = ((x369==(x370|x371))-x372);

	if (t85 != -321975051934LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x378 = UINT16_MAX;
	int8_t x380 = 0;
	volatile int32_t t86 = -613;

	t86 = ((x377==(x378|x379))-x380);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x385 = 45U;
	int64_t x388 = -7073042752673LL;
	volatile int64_t t87 = -5912250243LL;

	t87 = ((x385==(x386|x387))-x388);

	if (t87 != 7073042752673LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = INT32_MAX;
	uint64_t x390 = UINT64_MAX;
	int32_t x391 = INT32_MIN;
	static volatile int32_t x392 = 28187012;
	volatile int32_t t88 = 107907487;

	t88 = ((x389==(x390|x391))-x392);

	if (t88 != -28187012) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x393 = 7630770868360LLU;
	uint16_t x394 = 10U;
	volatile uint16_t x395 = UINT16_MAX;
	int8_t x396 = INT8_MAX;
	static int32_t t89 = -570;

	t89 = ((x393==(x394|x395))-x396);

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x397 = -1LL;
	int8_t x398 = -1;
	volatile int64_t x399 = INT64_MIN;

	t90 = ((x397==(x398|x399))-x400);

	if (t90 != 2U) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x401 = 63;
	int64_t x402 = -52LL;
	uint64_t x403 = 28749106695209LLU;
	uint8_t x404 = 5U;
	static volatile int32_t t91 = -3889945;

	t91 = ((x401==(x402|x403))-x404);

	if (t91 != -5) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x405 = 117U;
	int16_t x406 = 0;
	uint8_t x407 = 7U;
	volatile uint8_t x408 = UINT8_MAX;

	t92 = ((x405==(x406|x407))-x408);

	if (t92 != -255) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = 0;
	uint8_t x414 = 1U;
	uint16_t x415 = 23482U;
	uint16_t x416 = 38U;
	volatile int32_t t93 = 692522694;

	t93 = ((x413==(x414|x415))-x416);

	if (t93 != -38) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x417 = 770;
	int32_t x418 = INT32_MIN;
	int16_t x420 = INT16_MIN;
	static volatile int32_t t94 = 1887548;

	t94 = ((x417==(x418|x419))-x420);

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x422 = INT8_MIN;
	int32_t x423 = -1;
	int32_t x424 = 3619;

	t95 = ((x421==(x422|x423))-x424);

	if (t95 != -3619) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x425 = INT8_MAX;
	int64_t x426 = INT64_MAX;
	static volatile uint8_t x427 = UINT8_MAX;
	int16_t x428 = INT16_MIN;
	static int32_t t96 = -72056785;

	t96 = ((x425==(x426|x427))-x428);

	if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x429 = 52311285617946847LLU;
	uint32_t x430 = 70674848U;
	volatile int16_t x431 = -5;
	uint16_t x432 = 15554U;
	volatile int32_t t97 = -528298168;

	t97 = ((x429==(x430|x431))-x432);

	if (t97 != -15554) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x433 = INT32_MAX;
	uint8_t x434 = UINT8_MAX;
	volatile int64_t x435 = 12898286587852386LL;
	int8_t x436 = -6;
	int32_t t98 = 333392;

	t98 = ((x433==(x434|x435))-x436);

	if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x437 = INT32_MAX;
	volatile int32_t x438 = INT32_MIN;
	volatile int32_t x439 = -134414880;
	int16_t x440 = INT16_MIN;
	int32_t t99 = -923;

	t99 = ((x437==(x438|x439))-x440);

	if (t99 != 32768) { NG(); } else { ; }
	
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

