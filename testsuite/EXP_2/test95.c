#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x5 = INT64_MIN;
volatile int64_t x10 = INT64_MAX;
uint16_t x14 = 2U;
volatile int32_t t3 = 752963734;
int8_t x17 = -4;
static int16_t x23 = 3;
volatile int32_t t6 = 161831440;
uint8_t x33 = UINT8_MAX;
static int32_t x34 = 0;
uint8_t x55 = 1U;
uint16_t x56 = 5U;
uint32_t x57 = 20597U;
static int16_t x63 = INT16_MIN;
volatile int32_t t14 = 3990621;
int16_t x75 = -7;
uint16_t x79 = UINT16_MAX;
int16_t x91 = INT16_MIN;
uint16_t x102 = 1938U;
volatile int8_t x106 = -1;
static uint32_t t23 = 5U;
volatile int32_t x120 = 52888;
int32_t t26 = -1072;
int8_t x133 = -1;
uint64_t x139 = 53265621372LLU;
int32_t t30 = 38;
static int8_t x151 = INT8_MIN;
static int16_t x154 = 14352;
int64_t x155 = -1LL;
uint64_t t34 = 8647054497046LLU;
volatile int16_t x171 = INT16_MIN;
uint8_t x172 = 125U;
static int16_t x179 = INT16_MIN;
int8_t x180 = 1;
uint16_t x185 = 1247U;
static int16_t x187 = -1;
int32_t x191 = -21740888;
int64_t t41 = -30450LL;
int16_t x203 = -6;
volatile int16_t x210 = -1;
volatile int8_t x212 = INT8_MAX;
int32_t t49 = 318351458;
volatile int32_t x232 = -112537;
static uint8_t x234 = 14U;
int8_t x245 = INT8_MIN;
int64_t x249 = INT64_MIN;
int8_t x250 = 1;
int16_t x251 = -1;
static int64_t x272 = INT64_MIN;
int32_t x273 = 1;
volatile uint16_t x274 = 1495U;
int16_t x276 = -1;
int32_t t58 = -11372;
int16_t x286 = -1;
uint16_t x295 = UINT16_MAX;
static volatile int32_t t60 = -2415633;
int32_t x298 = -1;
int8_t x299 = 2;
int32_t t61 = -982423;
uint32_t x305 = 739U;
static uint8_t x312 = 1U;
volatile int8_t x322 = 2;
volatile int32_t t67 = -8003;
uint64_t x336 = UINT64_MAX;
volatile int16_t x346 = -1;
static int16_t x350 = -1;
int8_t x357 = INT8_MAX;
uint64_t x360 = UINT64_MAX;
static int16_t x362 = INT16_MAX;
static int32_t t75 = 440853;
static volatile int32_t x366 = INT32_MIN;
static int64_t t76 = 233043201316LL;
int64_t x369 = 113356583471LL;
int8_t x372 = INT8_MAX;
volatile int64_t t78 = 1LL;
int64_t x381 = INT64_MIN;
volatile uint16_t x387 = UINT16_MAX;
int8_t x390 = INT8_MIN;
int32_t t86 = 43;
int32_t x410 = 810213;
int32_t t87 = 537241;
int16_t x419 = INT16_MIN;
volatile int32_t t89 = 407567;
int32_t t90 = 30654;
uint32_t x426 = 3432704U;
volatile int64_t x428 = -861LL;
int64_t x433 = -1LL;
int64_t x434 = 1363189465LL;
int32_t x435 = 311320500;
volatile int64_t t92 = -2545LL;
volatile int32_t t93 = 4840;
static uint64_t x442 = 162561802514LLU;
volatile int32_t t94 = 3717;
int16_t x450 = 61;
uint16_t x451 = 29U;
int64_t x456 = INT64_MIN;
static uint64_t x458 = 239LLU;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int8_t x2 = INT8_MIN;
	int8_t x3 = INT8_MIN;
	uint16_t x4 = 1938U;
	volatile int32_t t0 = 347968615;

	t0 = ((x1==(x2+x3))/x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = 0;
	int8_t x7 = -1;
	int8_t x8 = -10;
	int32_t t1 = -12988;

	t1 = ((x5==(x6+x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = INT32_MAX;
	volatile uint32_t x11 = 0U;
	uint8_t x12 = 44U;
	int32_t t2 = -468;

	t2 = ((x9==(x10+x11))/x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 231;
	static uint32_t x15 = 169798765U;
	int32_t x16 = INT32_MAX;

	t3 = ((x13==(x14+x15))/x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x18 = 0U;
	int8_t x19 = -2;
	int32_t x20 = INT32_MAX;
	static volatile int32_t t4 = 639783957;

	t4 = ((x17==(x18+x19))/x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 385U;
	int16_t x22 = INT16_MIN;
	int32_t x24 = INT32_MIN;
	static int32_t t5 = 5571;

	t5 = ((x21==(x22+x23))/x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	volatile int16_t x26 = INT16_MAX;
	uint32_t x27 = UINT32_MAX;
	uint8_t x28 = UINT8_MAX;

	t6 = ((x25==(x26+x27))/x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = 0;
	uint32_t x30 = 33U;
	uint16_t x31 = UINT16_MAX;
	int8_t x32 = -1;
	int32_t t7 = -26310064;

	t7 = ((x29==(x30+x31))/x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x35 = 0U;
	static int64_t x36 = INT64_MIN;
	int64_t t8 = 957354572072964301LL;

	t8 = ((x33==(x34+x35))/x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = 559LL;
	int16_t x38 = -1;
	uint64_t x39 = UINT64_MAX;
	int8_t x40 = INT8_MIN;
	static volatile int32_t t9 = -1;

	t9 = ((x37==(x38+x39))/x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = 30810480648LL;
	int64_t x46 = INT64_MIN;
	static volatile int64_t x47 = INT64_MAX;
	int16_t x48 = -241;
	volatile int32_t t10 = 5;

	t10 = ((x45==(x46+x47))/x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x49 = 24U;
	uint16_t x50 = 214U;
	int8_t x51 = 0;
	int64_t x52 = INT64_MIN;
	static volatile int64_t t11 = -2LL;

	t11 = ((x49==(x50+x51))/x52);

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = 16;
	int32_t x54 = -1;
	volatile int32_t t12 = -244;

	t12 = ((x53==(x54+x55))/x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = INT64_MIN;
	int16_t x59 = 101;
	int8_t x60 = INT8_MIN;
	volatile int32_t t13 = 972;

	t13 = ((x57==(x58+x59))/x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = UINT64_MAX;
	int16_t x62 = -1;
	volatile int32_t x64 = INT32_MIN;

	t14 = ((x61==(x62+x63))/x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = -34;
	int64_t x66 = 865LL;
	int32_t x67 = INT32_MAX;
	static int16_t x68 = 12;
	volatile int32_t t15 = -261937562;

	t15 = ((x65==(x66+x67))/x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x73 = INT16_MIN;
	int64_t x74 = -174677887581502LL;
	int32_t x76 = -15;
	int32_t t16 = 7496526;

	t16 = ((x73==(x74+x75))/x76);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x77 = INT32_MAX;
	int16_t x78 = INT16_MIN;
	static volatile int16_t x80 = INT16_MIN;
	int32_t t17 = 321281028;

	t17 = ((x77==(x78+x79))/x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x81 = 0;
	int16_t x82 = -1;
	int16_t x83 = INT16_MAX;
	int8_t x84 = INT8_MAX;
	int32_t t18 = 102549;

	t18 = ((x81==(x82+x83))/x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x89 = UINT16_MAX;
	uint32_t x90 = UINT32_MAX;
	static volatile int16_t x92 = 5373;
	volatile int32_t t19 = 234;

	t19 = ((x89==(x90+x91))/x92);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint8_t x93 = UINT8_MAX;
	static uint8_t x94 = UINT8_MAX;
	volatile int8_t x95 = -1;
	int64_t x96 = INT64_MIN;
	int64_t t20 = -983593827665770LL;

	t20 = ((x93==(x94+x95))/x96);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x101 = 9168U;
	int16_t x103 = INT16_MAX;
	uint8_t x104 = 13U;
	int32_t t21 = 265694903;

	t21 = ((x101==(x102+x103))/x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x105 = -1LL;
	int64_t x107 = INT64_MAX;
	uint8_t x108 = UINT8_MAX;
	volatile int32_t t22 = -125;

	t22 = ((x105==(x106+x107))/x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x109 = 68321343U;
	uint64_t x110 = 43249935177LLU;
	static uint64_t x111 = UINT64_MAX;
	volatile uint32_t x112 = 13U;

	t23 = ((x109==(x110+x111))/x112);

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x113 = 88259LLU;
	int16_t x114 = INT16_MAX;
	static uint64_t x115 = UINT64_MAX;
	volatile uint32_t x116 = 8617126U;
	volatile uint32_t t24 = 49U;

	t24 = ((x113==(x114+x115))/x116);

	if (t24 != 0U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = INT8_MAX;
	static int64_t x118 = -19501971LL;
	static int16_t x119 = INT16_MIN;
	int32_t t25 = -2523;

	t25 = ((x117==(x118+x119))/x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x121 = -14281340610214LL;
	int8_t x122 = INT8_MIN;
	uint32_t x123 = UINT32_MAX;
	static int8_t x124 = INT8_MAX;

	t26 = ((x121==(x122+x123))/x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x125 = 36449032U;
	static uint32_t x126 = UINT32_MAX;
	int32_t x127 = INT32_MAX;
	int8_t x128 = -1;
	volatile int32_t t27 = 28579;

	t27 = ((x125==(x126+x127))/x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x129 = 1311U;
	volatile int32_t x130 = INT32_MIN;
	static uint16_t x131 = 10U;
	static int16_t x132 = -194;
	volatile int32_t t28 = 11747230;

	t28 = ((x129==(x130+x131))/x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x134 = 459LLU;
	int32_t x135 = -15;
	static uint64_t x136 = 9LLU;
	static volatile uint64_t t29 = 1693LLU;

	t29 = ((x133==(x134+x135))/x136);

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x137 = 0;
	static int32_t x138 = 31122;
	static uint16_t x140 = 1U;

	t30 = ((x137==(x138+x139))/x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x149 = 0U;
	int8_t x150 = INT8_MIN;
	volatile int32_t x152 = INT32_MAX;
	static int32_t t31 = 1657;

	t31 = ((x149==(x150+x151))/x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int16_t x153 = -1022;
	static int16_t x156 = INT16_MIN;
	static volatile int32_t t32 = 3;

	t32 = ((x153==(x154+x155))/x156);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x157 = 62125377291LLU;
	int8_t x158 = 12;
	volatile int16_t x159 = INT16_MIN;
	int64_t x160 = INT64_MIN;
	static int64_t t33 = -3158387372LL;

	t33 = ((x157==(x158+x159))/x160);

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x161 = INT8_MIN;
	volatile int16_t x162 = INT16_MIN;
	static volatile int32_t x163 = -1;
	uint64_t x164 = 7854441530LLU;

	t34 = ((x161==(x162+x163))/x164);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x169 = -1LL;
	int32_t x170 = 1828;
	int32_t t35 = -207820960;

	t35 = ((x169==(x170+x171))/x172);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x173 = INT32_MIN;
	uint32_t x174 = UINT32_MAX;
	int16_t x175 = INT16_MIN;
	static int32_t x176 = INT32_MIN;
	static int32_t t36 = -3361;

	t36 = ((x173==(x174+x175))/x176);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x177 = UINT64_MAX;
	uint16_t x178 = 1U;
	int32_t t37 = -4183857;

	t37 = ((x177==(x178+x179))/x180);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = INT64_MIN;
	int16_t x183 = INT16_MAX;
	int32_t x184 = 4386;
	static int32_t t38 = -1622;

	t38 = ((x181==(x182+x183))/x184);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x186 = INT16_MIN;
	int32_t x188 = INT32_MIN;
	volatile int32_t t39 = 33330018;

	t39 = ((x185==(x186+x187))/x188);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x189 = INT8_MIN;
	volatile int8_t x190 = INT8_MAX;
	int8_t x192 = -1;
	volatile int32_t t40 = -13039;

	t40 = ((x189==(x190+x191))/x192);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x193 = 54U;
	static uint8_t x194 = 22U;
	int32_t x195 = -738965721;
	volatile int64_t x196 = INT64_MIN;

	t41 = ((x193==(x194+x195))/x196);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x197 = 125U;
	uint8_t x198 = 11U;
	volatile int8_t x199 = -28;
	int32_t x200 = INT32_MIN;
	static int32_t t42 = 37;

	t42 = ((x197==(x198+x199))/x200);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x201 = -1;
	uint64_t x202 = 0LLU;
	volatile int32_t x204 = -75;
	int32_t t43 = -322;

	t43 = ((x201==(x202+x203))/x204);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x205 = INT8_MIN;
	static int8_t x206 = INT8_MAX;
	int32_t x207 = INT32_MIN;
	uint32_t x208 = UINT32_MAX;
	volatile uint32_t t44 = 127513U;

	t44 = ((x205==(x206+x207))/x208);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x209 = 31257859479228474LLU;
	uint8_t x211 = 64U;
	volatile int32_t t45 = -6;

	t45 = ((x209==(x210+x211))/x212);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x213 = INT64_MIN;
	int64_t x214 = -1075LL;
	int32_t x215 = -140;
	int32_t x216 = -6040;
	int32_t t46 = 0;

	t46 = ((x213==(x214+x215))/x216);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x217 = -10;
	int8_t x218 = -5;
	uint16_t x219 = 258U;
	volatile int64_t x220 = -824358392LL;
	volatile int64_t t47 = 153LL;

	t47 = ((x217==(x218+x219))/x220);

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x221 = 25824U;
	int8_t x222 = INT8_MIN;
	int32_t x223 = -1;
	int32_t x224 = INT32_MAX;
	int32_t t48 = -367413;

	t48 = ((x221==(x222+x223))/x224);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x225 = UINT32_MAX;
	static uint16_t x226 = 4996U;
	static uint16_t x227 = 22U;
	int8_t x228 = INT8_MIN;

	t49 = ((x225==(x226+x227))/x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = INT32_MIN;
	volatile uint64_t x230 = UINT64_MAX;
	uint64_t x231 = 3707695000LLU;
	volatile int32_t t50 = 19171200;

	t50 = ((x229==(x230+x231))/x232);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = -88;
	static int16_t x235 = -1;
	static uint64_t x236 = 1700984587470666LLU;
	static volatile uint64_t t51 = 486491569995264893LLU;

	t51 = ((x233==(x234+x235))/x236);

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = INT32_MIN;
	static volatile uint16_t x238 = UINT16_MAX;
	int32_t x239 = INT32_MIN;
	volatile uint8_t x240 = UINT8_MAX;
	static int32_t t52 = -660672030;

	t52 = ((x237==(x238+x239))/x240);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x241 = INT64_MIN;
	int16_t x242 = INT16_MIN;
	int16_t x243 = INT16_MAX;
	int32_t x244 = -1;
	static int32_t t53 = 2849748;

	t53 = ((x241==(x242+x243))/x244);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x246 = 8033;
	volatile int32_t x247 = -507317;
	int64_t x248 = 4742LL;
	volatile int64_t t54 = 1893235415457898837LL;

	t54 = ((x245==(x246+x247))/x248);

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x252 = -1;
	volatile int32_t t55 = 12;

	t55 = ((x249==(x250+x251))/x252);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x253 = INT8_MIN;
	uint8_t x254 = 81U;
	uint64_t x255 = 313198158LLU;
	uint64_t x256 = 4174821554659LLU;
	uint64_t t56 = 365906LLU;

	t56 = ((x253==(x254+x255))/x256);

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x269 = -12928;
	volatile uint8_t x270 = 0U;
	int8_t x271 = -1;
	int64_t t57 = 2098127546896LL;

	t57 = ((x269==(x270+x271))/x272);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x275 = 821LLU;

	t58 = ((x273==(x274+x275))/x276);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x285 = 17;
	uint32_t x287 = 1U;
	int32_t x288 = 291;
	volatile int32_t t59 = 0;

	t59 = ((x285==(x286+x287))/x288);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x293 = -14591LL;
	volatile int8_t x294 = 0;
	int16_t x296 = INT16_MIN;

	t60 = ((x293==(x294+x295))/x296);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x297 = UINT8_MAX;
	int32_t x300 = -1;

	t61 = ((x297==(x298+x299))/x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x301 = UINT8_MAX;
	int16_t x302 = -1;
	uint64_t x303 = 1412579LLU;
	int64_t x304 = INT64_MAX;
	volatile int64_t t62 = -40LL;

	t62 = ((x301==(x302+x303))/x304);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x306 = UINT16_MAX;
	volatile int8_t x307 = INT8_MIN;
	int16_t x308 = INT16_MIN;
	volatile int32_t t63 = 2427804;

	t63 = ((x305==(x306+x307))/x308);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x309 = -4370438120348LL;
	int16_t x310 = -431;
	int8_t x311 = -1;
	int32_t t64 = 18861996;

	t64 = ((x309==(x310+x311))/x312);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = -1;
	int32_t x314 = -1;
	int16_t x315 = INT16_MIN;
	int32_t x316 = -243186;
	volatile int32_t t65 = 999102265;

	t65 = ((x313==(x314+x315))/x316);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x317 = INT16_MAX;
	int32_t x318 = -1;
	volatile int8_t x319 = 0;
	int64_t x320 = -26998451824800LL;
	volatile int64_t t66 = 12982LL;

	t66 = ((x317==(x318+x319))/x320);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x321 = INT32_MIN;
	uint64_t x323 = 8578152LLU;
	int16_t x324 = -9;

	t67 = ((x321==(x322+x323))/x324);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x325 = INT32_MAX;
	int64_t x326 = -1LL;
	int16_t x327 = -3705;
	int32_t x328 = -967201;
	int32_t t68 = 982529278;

	t68 = ((x325==(x326+x327))/x328);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x329 = 29U;
	static volatile int16_t x330 = -1;
	int16_t x331 = -1;
	int32_t x332 = INT32_MIN;
	int32_t t69 = 164;

	t69 = ((x329==(x330+x331))/x332);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x333 = INT8_MIN;
	uint8_t x334 = 6U;
	int32_t x335 = -1;
	uint64_t t70 = 13397303757942LLU;

	t70 = ((x333==(x334+x335))/x336);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x341 = INT16_MAX;
	int32_t x342 = -1;
	volatile int32_t x343 = 424;
	int8_t x344 = -3;
	int32_t t71 = -7293852;

	t71 = ((x341==(x342+x343))/x344);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x345 = -5;
	int32_t x347 = INT32_MAX;
	uint16_t x348 = UINT16_MAX;
	static volatile int32_t t72 = -52973873;

	t72 = ((x345==(x346+x347))/x348);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x349 = -8051;
	volatile int8_t x351 = INT8_MAX;
	uint32_t x352 = 11713249U;
	volatile uint32_t t73 = 970921929U;

	t73 = ((x349==(x350+x351))/x352);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x358 = UINT64_MAX;
	volatile int8_t x359 = -14;
	uint64_t t74 = 142342340633LLU;

	t74 = ((x357==(x358+x359))/x360);

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x361 = -1LL;
	int64_t x363 = 42427663553685547LL;
	int8_t x364 = -1;

	t75 = ((x361==(x362+x363))/x364);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x365 = -61669713013132LL;
	uint32_t x367 = 829680U;
	static int64_t x368 = INT64_MIN;

	t76 = ((x365==(x366+x367))/x368);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x370 = INT8_MIN;
	uint32_t x371 = 1030268U;
	volatile int32_t t77 = 762353;

	t77 = ((x369==(x370+x371))/x372);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint32_t x373 = UINT32_MAX;
	int8_t x374 = -1;
	int16_t x375 = 22;
	int64_t x376 = INT64_MAX;

	t78 = ((x373==(x374+x375))/x376);

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x377 = 725649732112LL;
	static int64_t x378 = -6554068456LL;
	static int16_t x379 = -1;
	static int16_t x380 = 97;
	volatile int32_t t79 = 262284;

	t79 = ((x377==(x378+x379))/x380);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int16_t x382 = INT16_MIN;
	int32_t x383 = 123982163;
	static uint16_t x384 = UINT16_MAX;
	volatile int32_t t80 = 46;

	t80 = ((x381==(x382+x383))/x384);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x385 = INT16_MAX;
	uint32_t x386 = UINT32_MAX;
	int32_t x388 = -1;
	static int32_t t81 = -4;

	t81 = ((x385==(x386+x387))/x388);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x389 = -496;
	volatile uint64_t x391 = 3207517153LLU;
	int8_t x392 = -1;
	volatile int32_t t82 = 176;

	t82 = ((x389==(x390+x391))/x392);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x393 = 1;
	uint16_t x394 = 14722U;
	volatile int64_t x395 = -348607LL;
	int64_t x396 = 695872LL;
	int64_t t83 = 119109302458888LL;

	t83 = ((x393==(x394+x395))/x396);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x397 = -1;
	volatile int64_t x398 = 885LL;
	uint64_t x399 = 463LLU;
	static volatile int16_t x400 = -1;
	volatile int32_t t84 = 320430921;

	t84 = ((x397==(x398+x399))/x400);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x401 = INT16_MIN;
	int8_t x402 = INT8_MIN;
	int16_t x403 = 4;
	int64_t x404 = INT64_MIN;
	int64_t t85 = 33816480945LL;

	t85 = ((x401==(x402+x403))/x404);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x405 = -1LL;
	volatile int32_t x406 = -1;
	static int32_t x407 = INT32_MAX;
	static volatile int32_t x408 = -1;

	t86 = ((x405==(x406+x407))/x408);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x409 = INT16_MIN;
	static int32_t x411 = INT32_MIN;
	int32_t x412 = INT32_MIN;

	t87 = ((x409==(x410+x411))/x412);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x413 = -1;
	static int16_t x414 = -121;
	int8_t x415 = 2;
	int64_t x416 = -49645800LL;
	int64_t t88 = -23036333428LL;

	t88 = ((x413==(x414+x415))/x416);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x417 = INT64_MAX;
	int8_t x418 = 49;
	static int16_t x420 = INT16_MIN;

	t89 = ((x417==(x418+x419))/x420);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x421 = -48;
	int16_t x422 = -1;
	int64_t x423 = 145514776401727LL;
	int16_t x424 = -1;

	t90 = ((x421==(x422+x423))/x424);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x425 = -91984875LL;
	volatile int32_t x427 = -4068946;
	volatile int64_t t91 = -2142695LL;

	t91 = ((x425==(x426+x427))/x428);

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x436 = INT64_MAX;

	t92 = ((x433==(x434+x435))/x436);

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x437 = INT8_MIN;
	static uint16_t x438 = UINT16_MAX;
	volatile uint32_t x439 = 37U;
	volatile uint8_t x440 = 2U;

	t93 = ((x437==(x438+x439))/x440);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x441 = -42LL;
	int64_t x443 = -1LL;
	volatile int16_t x444 = INT16_MIN;

	t94 = ((x441==(x442+x443))/x444);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x445 = -15;
	uint64_t x446 = UINT64_MAX;
	uint8_t x447 = 127U;
	volatile int32_t x448 = -71767;
	volatile int32_t t95 = -991;

	t95 = ((x445==(x446+x447))/x448);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x449 = INT32_MIN;
	static volatile int64_t x452 = INT64_MIN;
	volatile int64_t t96 = -12792LL;

	t96 = ((x449==(x450+x451))/x452);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x453 = INT64_MAX;
	uint16_t x454 = UINT16_MAX;
	int64_t x455 = 100980386LL;
	volatile int64_t t97 = 11640118623006LL;

	t97 = ((x453==(x454+x455))/x456);

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x457 = INT32_MIN;
	uint32_t x459 = 0U;
	static uint64_t x460 = UINT64_MAX;
	volatile uint64_t t98 = 109691941306LLU;

	t98 = ((x457==(x458+x459))/x460);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x461 = -68;
	static volatile int16_t x462 = 97;
	int16_t x463 = INT16_MAX;
	int16_t x464 = -1;
	volatile int32_t t99 = 532;

	t99 = ((x461==(x462+x463))/x464);

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

