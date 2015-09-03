#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x2 = -1;
static volatile uint64_t x9 = UINT64_MAX;
volatile int32_t t1 = 702;
static volatile int32_t t2 = 7444;
int16_t x21 = INT16_MIN;
int32_t t4 = -1902129;
uint16_t x26 = 14844U;
int32_t x28 = 13926;
volatile uint32_t x38 = 7209U;
static int16_t x39 = INT16_MAX;
static volatile uint64_t x41 = UINT64_MAX;
int32_t x43 = -1;
static int32_t x46 = INT32_MIN;
volatile int64_t x48 = INT64_MIN;
static uint16_t x49 = UINT16_MAX;
uint64_t x50 = 6343998595LLU;
static int32_t x52 = -335327;
uint16_t x63 = 1242U;
static int16_t x66 = INT16_MAX;
int8_t x68 = -1;
volatile int32_t x76 = -56524022;
int8_t x77 = -1;
static int32_t x83 = 483570124;
int8_t x87 = -5;
uint32_t x88 = 385U;
uint8_t x93 = 5U;
volatile int16_t x94 = INT16_MAX;
int8_t x99 = INT8_MAX;
uint16_t x102 = UINT16_MAX;
int16_t x105 = INT16_MIN;
int64_t x119 = INT64_MIN;
int8_t x128 = -1;
static uint32_t x133 = UINT32_MAX;
volatile int32_t t27 = 63;
static int64_t x138 = INT64_MAX;
int16_t x139 = -1;
static int32_t x140 = INT32_MAX;
int8_t x155 = -1;
uint32_t x159 = 33550905U;
int32_t t36 = 0;
uint16_t x174 = 119U;
volatile int8_t x186 = 10;
int64_t x193 = -1LL;
uint16_t x195 = 52U;
static volatile int8_t x205 = -1;
uint64_t x212 = UINT64_MAX;
volatile int32_t x217 = -1;
int64_t x227 = 159LL;
static int8_t x237 = 1;
int32_t t51 = 485566221;
volatile uint32_t x244 = 19U;
volatile int32_t t52 = 34;
int32_t x248 = INT32_MIN;
static int64_t x254 = -1169046362248023LL;
uint16_t x258 = 12U;
uint16_t x262 = 27741U;
int8_t x264 = -1;
volatile int32_t t56 = 192;
uint32_t x268 = 18082930U;
volatile int32_t t57 = -973432847;
static int8_t x276 = -1;
int16_t x279 = INT16_MAX;
static uint64_t x283 = 45747120148091054LLU;
static int32_t x284 = -1;
int32_t t63 = 1;
int64_t x307 = INT64_MIN;
static volatile int32_t t65 = 214;
int16_t x310 = INT16_MIN;
int8_t x320 = INT8_MIN;
static uint16_t x321 = 1U;
int32_t x329 = INT32_MAX;
volatile int32_t x330 = -1;
static int32_t t70 = -33;
uint8_t x338 = UINT8_MAX;
static int32_t x344 = INT32_MAX;
int32_t x353 = -1;
uint16_t x354 = 6389U;
volatile int64_t x355 = INT64_MIN;
int32_t t75 = -251;
uint64_t x358 = 116LLU;
int64_t x362 = -409932545326972LL;
volatile int32_t t77 = 19190222;
int32_t x365 = INT32_MIN;
int32_t x379 = -24987;
int32_t t79 = 20;
uint32_t x388 = 62208140U;
int32_t t82 = -90763955;
int64_t x402 = 4259439731660LL;
int64_t x404 = 214LL;
volatile int32_t t86 = -2;
volatile uint16_t x419 = 8U;
volatile int32_t t87 = -64698479;
volatile uint64_t x421 = UINT64_MAX;
static int8_t x426 = INT8_MIN;
volatile int64_t x427 = -1LL;
static int16_t x433 = 1;
int32_t x440 = 316;
static volatile int32_t t92 = -347456;
static int16_t x447 = 201;
int32_t x452 = INT32_MAX;
volatile int32_t t94 = 0;
int8_t x455 = INT8_MIN;
int64_t x456 = INT64_MIN;
volatile int32_t t95 = 6854154;
int64_t x457 = -1LL;
volatile int16_t x461 = 241;
int64_t x462 = INT64_MIN;
int8_t x467 = INT8_MAX;
uint64_t x471 = 548506400LLU;
static uint16_t x472 = 5U;
int32_t t99 = 2;


void f0(void) {
	uint32_t x1 = 1467537243U;
	static volatile uint32_t x3 = 5229U;
	int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -55;

	t0 = ((x1*(x2|x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x10 = 5630466106LL;
	volatile uint64_t x11 = UINT64_MAX;
	int64_t x12 = 9230LL;

	t1 = ((x9*(x10|x11))<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = -1;
	int8_t x14 = INT8_MAX;
	int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MAX;

	t2 = ((x13*(x14|x15))<x16);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x17 = UINT16_MAX;
	int64_t x18 = INT64_MIN;
	int16_t x19 = INT16_MIN;
	uint16_t x20 = 2623U;
	int32_t t3 = -5;

	t3 = ((x17*(x18|x19))<x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x22 = INT32_MIN;
	volatile int8_t x23 = -1;
	static uint32_t x24 = 35126858U;

	t4 = ((x21*(x22|x23))<x24);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x25 = INT64_MIN;
	static uint64_t x27 = 4071631829LLU;
	int32_t t5 = 512602;

	t5 = ((x25*(x26|x27))<x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	static uint64_t x30 = UINT64_MAX;
	int64_t x31 = 75742LL;
	static uint8_t x32 = 48U;
	volatile int32_t t6 = -523663368;

	t6 = ((x29*(x30|x31))<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = UINT16_MAX;
	static volatile int32_t x40 = INT32_MAX;
	int32_t t7 = -357524979;

	t7 = ((x37*(x38|x39))<x40);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x42 = UINT32_MAX;
	static int16_t x44 = -1;
	volatile int32_t t8 = 208336;

	t8 = ((x41*(x42|x43))<x44);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x45 = UINT32_MAX;
	int8_t x47 = INT8_MIN;
	int32_t t9 = -54584408;

	t9 = ((x45*(x46|x47))<x48);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x51 = INT16_MAX;
	volatile int32_t t10 = 4585866;

	t10 = ((x49*(x50|x51))<x52);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = 3;
	uint16_t x58 = 943U;
	int8_t x59 = INT8_MIN;
	int32_t x60 = INT32_MIN;
	int32_t t11 = 6;

	t11 = ((x57*(x58|x59))<x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x61 = 826793181356LL;
	volatile uint64_t x62 = 203324LLU;
	uint8_t x64 = 32U;
	volatile int32_t t12 = 7916026;

	t12 = ((x61*(x62|x63))<x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x65 = INT8_MIN;
	int64_t x67 = -256326899LL;
	volatile int32_t t13 = 56;

	t13 = ((x65*(x66|x67))<x68);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x69 = -5567517191433434LL;
	volatile uint16_t x70 = 76U;
	int8_t x71 = INT8_MIN;
	volatile int32_t x72 = INT32_MIN;
	volatile int32_t t14 = -732126;

	t14 = ((x69*(x70|x71))<x72);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x73 = INT8_MAX;
	uint16_t x74 = UINT16_MAX;
	int16_t x75 = -10702;
	int32_t t15 = 90564109;

	t15 = ((x73*(x74|x75))<x76);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x78 = -1;
	int8_t x79 = -1;
	uint16_t x80 = 3U;
	volatile int32_t t16 = 3953751;

	t16 = ((x77*(x78|x79))<x80);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x81 = 37U;
	int8_t x82 = -1;
	static volatile int32_t x84 = INT32_MAX;
	int32_t t17 = -93499213;

	t17 = ((x81*(x82|x83))<x84);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x85 = 11064637554LL;
	uint64_t x86 = 1377706779241573120LLU;
	int32_t t18 = -57;

	t18 = ((x85*(x86|x87))<x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x95 = INT8_MIN;
	int16_t x96 = -71;
	static int32_t t19 = 3;

	t19 = ((x93*(x94|x95))<x96);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = 7U;
	int8_t x98 = INT8_MAX;
	static uint16_t x100 = 397U;
	int32_t t20 = 172264691;

	t20 = ((x97*(x98|x99))<x100);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x101 = INT64_MAX;
	uint64_t x103 = UINT64_MAX;
	volatile int8_t x104 = INT8_MAX;
	int32_t t21 = 103719;

	t21 = ((x101*(x102|x103))<x104);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x106 = 25U;
	int8_t x107 = -1;
	int32_t x108 = -6615936;
	volatile int32_t t22 = 1213567;

	t22 = ((x105*(x106|x107))<x108);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x113 = INT8_MIN;
	volatile int16_t x114 = -1;
	uint16_t x115 = 0U;
	int64_t x116 = -13131922008270LL;
	volatile int32_t t23 = 0;

	t23 = ((x113*(x114|x115))<x116);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x117 = 1U;
	volatile uint8_t x118 = 75U;
	int8_t x120 = 9;
	int32_t t24 = 5218;

	t24 = ((x117*(x118|x119))<x120);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x121 = UINT64_MAX;
	static int16_t x122 = INT16_MIN;
	int16_t x123 = INT16_MAX;
	int64_t x124 = -112707183337675917LL;
	int32_t t25 = -1045455;

	t25 = ((x121*(x122|x123))<x124);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x125 = 741657U;
	volatile uint32_t x126 = 408909U;
	static volatile int64_t x127 = 15665538LL;
	volatile int32_t t26 = 1029350948;

	t26 = ((x125*(x126|x127))<x128);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = 7198651U;

	t27 = ((x133*(x134|x135))<x136);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x137 = 18418U;
	volatile int32_t t28 = 12726620;

	t28 = ((x137*(x138|x139))<x140);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x141 = -1LL;
	uint8_t x142 = 1U;
	int64_t x143 = INT64_MIN;
	int8_t x144 = INT8_MIN;
	int32_t t29 = -1;

	t29 = ((x141*(x142|x143))<x144);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x145 = -211;
	int64_t x146 = -1LL;
	static uint16_t x147 = 3277U;
	uint16_t x148 = UINT16_MAX;
	volatile int32_t t30 = 17083788;

	t30 = ((x145*(x146|x147))<x148);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = INT32_MAX;
	static uint16_t x150 = 23U;
	int16_t x151 = -1;
	uint32_t x152 = 13U;
	volatile int32_t t31 = -189;

	t31 = ((x149*(x150|x151))<x152);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint16_t x153 = UINT16_MAX;
	int32_t x154 = -1;
	int32_t x156 = -1;
	int32_t t32 = 4057;

	t32 = ((x153*(x154|x155))<x156);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x157 = -1LL;
	static int16_t x158 = -1;
	int32_t x160 = -3;
	int32_t t33 = 156764;

	t33 = ((x157*(x158|x159))<x160);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = INT32_MAX;
	static int16_t x162 = 4074;
	int64_t x163 = -1LL;
	uint64_t x164 = 94366509286335LLU;
	volatile int32_t t34 = -146144;

	t34 = ((x161*(x162|x163))<x164);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x165 = INT8_MIN;
	volatile int16_t x166 = 10577;
	int32_t x167 = -1;
	static int32_t x168 = INT32_MIN;
	static int32_t t35 = -1796;

	t35 = ((x165*(x166|x167))<x168);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x169 = 51U;
	int8_t x170 = INT8_MIN;
	int64_t x171 = INT64_MIN;
	static int16_t x172 = -1;

	t36 = ((x169*(x170|x171))<x172);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int32_t x173 = -1789529;
	static uint64_t x175 = 28616021LLU;
	int8_t x176 = 14;
	int32_t t37 = -217;

	t37 = ((x173*(x174|x175))<x176);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x177 = INT8_MIN;
	int16_t x178 = -1;
	uint8_t x179 = UINT8_MAX;
	uint32_t x180 = 121577U;
	volatile int32_t t38 = 9;

	t38 = ((x177*(x178|x179))<x180);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x181 = UINT8_MAX;
	int8_t x182 = INT8_MIN;
	uint32_t x183 = 262311U;
	int16_t x184 = INT16_MIN;
	volatile int32_t t39 = 5424729;

	t39 = ((x181*(x182|x183))<x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = -1LL;
	static volatile int16_t x187 = INT16_MIN;
	uint64_t x188 = 40202041959431380LLU;
	volatile int32_t t40 = -299531;

	t40 = ((x185*(x186|x187))<x188);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x189 = 1283618LL;
	int16_t x190 = INT16_MIN;
	int16_t x191 = -56;
	int64_t x192 = INT64_MIN;
	static int32_t t41 = -2;

	t41 = ((x189*(x190|x191))<x192);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x194 = INT64_MAX;
	volatile int16_t x196 = INT16_MAX;
	int32_t t42 = 881316000;

	t42 = ((x193*(x194|x195))<x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x201 = UINT16_MAX;
	int16_t x202 = INT16_MIN;
	int64_t x203 = -157953505LL;
	uint16_t x204 = 29U;
	int32_t t43 = -3220604;

	t43 = ((x201*(x202|x203))<x204);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x206 = -1LL;
	int32_t x207 = -1;
	int16_t x208 = INT16_MIN;
	static int32_t t44 = -2919943;

	t44 = ((x205*(x206|x207))<x208);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x209 = UINT64_MAX;
	volatile int32_t x210 = 32715;
	static uint64_t x211 = 17LLU;
	int32_t t45 = -22840887;

	t45 = ((x209*(x210|x211))<x212);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x213 = 904618812U;
	static volatile uint8_t x214 = 1U;
	int16_t x215 = 11;
	static int32_t x216 = INT32_MIN;
	static int32_t t46 = -1;

	t46 = ((x213*(x214|x215))<x216);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x218 = 0;
	static int32_t x219 = -1;
	uint16_t x220 = 21U;
	volatile int32_t t47 = 9625;

	t47 = ((x217*(x218|x219))<x220);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x221 = INT8_MIN;
	uint32_t x222 = 254507U;
	int32_t x223 = INT32_MAX;
	volatile int8_t x224 = -1;
	volatile int32_t t48 = -226615;

	t48 = ((x221*(x222|x223))<x224);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = -1428698494849547LL;
	uint64_t x226 = 0LLU;
	int16_t x228 = 2746;
	volatile int32_t t49 = -829193522;

	t49 = ((x225*(x226|x227))<x228);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x233 = 1U;
	uint32_t x234 = 979571609U;
	int64_t x235 = INT64_MAX;
	int8_t x236 = -14;
	volatile int32_t t50 = 466108;

	t50 = ((x233*(x234|x235))<x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x238 = -34759603100LL;
	volatile int64_t x239 = -1LL;
	uint16_t x240 = 1496U;

	t51 = ((x237*(x238|x239))<x240);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = -43550LL;
	int8_t x242 = -1;
	int64_t x243 = INT64_MIN;

	t52 = ((x241*(x242|x243))<x244);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x245 = 11343U;
	static uint16_t x246 = 49U;
	volatile uint64_t x247 = UINT64_MAX;
	volatile int32_t t53 = -1;

	t53 = ((x245*(x246|x247))<x248);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x253 = INT16_MIN;
	int64_t x255 = -177236LL;
	int16_t x256 = INT16_MAX;
	volatile int32_t t54 = 61;

	t54 = ((x253*(x254|x255))<x256);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x257 = 1104U;
	int16_t x259 = -46;
	static int16_t x260 = -1;
	int32_t t55 = 0;

	t55 = ((x257*(x258|x259))<x260);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x261 = -1LL;
	uint32_t x263 = UINT32_MAX;

	t56 = ((x261*(x262|x263))<x264);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x265 = INT8_MIN;
	uint32_t x266 = UINT32_MAX;
	static uint64_t x267 = 21701LLU;

	t57 = ((x265*(x266|x267))<x268);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x269 = 43525U;
	static int16_t x270 = 1;
	volatile int8_t x271 = INT8_MIN;
	int8_t x272 = INT8_MIN;
	int32_t t58 = -58573556;

	t58 = ((x269*(x270|x271))<x272);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = 2;
	static volatile uint32_t x274 = UINT32_MAX;
	int8_t x275 = 27;
	volatile int32_t t59 = 1;

	t59 = ((x273*(x274|x275))<x276);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x277 = -1LL;
	volatile int16_t x278 = INT16_MAX;
	static uint64_t x280 = 516847015LLU;
	volatile int32_t t60 = 53861708;

	t60 = ((x277*(x278|x279))<x280);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = INT8_MIN;
	int32_t x282 = INT32_MAX;
	volatile int32_t t61 = -1;

	t61 = ((x281*(x282|x283))<x284);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x289 = 64U;
	uint16_t x290 = 13U;
	int8_t x291 = INT8_MIN;
	int32_t x292 = -802139041;
	int32_t t62 = 784669145;

	t62 = ((x289*(x290|x291))<x292);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x293 = INT8_MIN;
	static volatile int64_t x294 = -1LL;
	int32_t x295 = 481;
	volatile int32_t x296 = INT32_MIN;

	t63 = ((x293*(x294|x295))<x296);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x301 = -1;
	volatile int16_t x302 = 1;
	int8_t x303 = 1;
	uint16_t x304 = UINT16_MAX;
	volatile int32_t t64 = 16400;

	t64 = ((x301*(x302|x303))<x304);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x305 = -1805916563LL;
	static volatile int16_t x306 = INT16_MIN;
	int16_t x308 = INT16_MIN;

	t65 = ((x305*(x306|x307))<x308);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x309 = 5808LLU;
	int8_t x311 = INT8_MAX;
	uint64_t x312 = 785508063620LLU;
	int32_t t66 = 48781278;

	t66 = ((x309*(x310|x311))<x312);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x317 = 56770U;
	int32_t x318 = INT32_MIN;
	int16_t x319 = INT16_MAX;
	static int32_t t67 = 39138941;

	t67 = ((x317*(x318|x319))<x320);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x322 = 14097461832592259LLU;
	int32_t x323 = INT32_MIN;
	uint32_t x324 = 266598U;
	volatile int32_t t68 = 0;

	t68 = ((x321*(x322|x323))<x324);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x325 = -1724583365535849060LL;
	volatile int64_t x326 = INT64_MAX;
	int32_t x327 = INT32_MIN;
	uint64_t x328 = 5128154200282250LLU;
	volatile int32_t t69 = 11;

	t69 = ((x325*(x326|x327))<x328);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x331 = -1;
	static uint8_t x332 = 5U;

	t70 = ((x329*(x330|x331))<x332);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x333 = 141453422270914303LLU;
	uint32_t x334 = 2840U;
	int32_t x335 = INT32_MIN;
	static uint32_t x336 = UINT32_MAX;
	int32_t t71 = -60;

	t71 = ((x333*(x334|x335))<x336);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = INT16_MIN;
	uint64_t x339 = 784933836048903325LLU;
	static int32_t x340 = INT32_MIN;
	volatile int32_t t72 = 322;

	t72 = ((x337*(x338|x339))<x340);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x341 = -8;
	volatile uint32_t x342 = 31951924U;
	int8_t x343 = 14;
	int32_t t73 = -922;

	t73 = ((x341*(x342|x343))<x344);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x345 = -1LL;
	int32_t x346 = -7015761;
	uint32_t x347 = 17727U;
	int32_t x348 = INT32_MIN;
	volatile int32_t t74 = -66458935;

	t74 = ((x345*(x346|x347))<x348);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x356 = 159U;

	t75 = ((x353*(x354|x355))<x356);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x357 = -78310688LL;
	int8_t x359 = INT8_MAX;
	int16_t x360 = INT16_MIN;
	volatile int32_t t76 = 400;

	t76 = ((x357*(x358|x359))<x360);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x361 = -1;
	int8_t x363 = -1;
	volatile int16_t x364 = INT16_MAX;

	t77 = ((x361*(x362|x363))<x364);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x366 = -1;
	int64_t x367 = 28356283616510LL;
	uint16_t x368 = 14U;
	int32_t t78 = 16311792;

	t78 = ((x365*(x366|x367))<x368);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x377 = 12422801;
	volatile uint64_t x378 = UINT64_MAX;
	int64_t x380 = INT64_MIN;

	t79 = ((x377*(x378|x379))<x380);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x381 = -1374;
	int32_t x382 = INT32_MIN;
	uint32_t x383 = 812U;
	static int16_t x384 = 12221;
	static volatile int32_t t80 = 71728;

	t80 = ((x381*(x382|x383))<x384);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x385 = 7U;
	static int8_t x386 = -12;
	uint32_t x387 = 1712465209U;
	int32_t t81 = 5332129;

	t81 = ((x385*(x386|x387))<x388);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x397 = 5744270LLU;
	int64_t x398 = -1LL;
	static int64_t x399 = INT64_MAX;
	uint64_t x400 = 709222828467268711LLU;

	t82 = ((x397*(x398|x399))<x400);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x401 = UINT8_MAX;
	int16_t x403 = 1;
	int32_t t83 = 1;

	t83 = ((x401*(x402|x403))<x404);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint16_t x405 = 345U;
	volatile int8_t x406 = INT8_MAX;
	uint8_t x407 = 31U;
	volatile int64_t x408 = -6LL;
	static volatile int32_t t84 = -94872;

	t84 = ((x405*(x406|x407))<x408);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x409 = UINT8_MAX;
	static int8_t x410 = -1;
	static int64_t x411 = INT64_MAX;
	static volatile uint8_t x412 = UINT8_MAX;
	volatile int32_t t85 = -2597;

	t85 = ((x409*(x410|x411))<x412);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x413 = UINT16_MAX;
	static int8_t x414 = -13;
	int32_t x415 = 370883424;
	int8_t x416 = INT8_MAX;

	t86 = ((x413*(x414|x415))<x416);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x417 = INT64_MAX;
	uint64_t x418 = UINT64_MAX;
	int64_t x420 = -1LL;

	t87 = ((x417*(x418|x419))<x420);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x422 = 557;
	int64_t x423 = -1LL;
	int8_t x424 = -1;
	int32_t t88 = 1;

	t88 = ((x421*(x422|x423))<x424);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x425 = 7;
	static int8_t x428 = -40;
	int32_t t89 = 1;

	t89 = ((x425*(x426|x427))<x428);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x429 = UINT64_MAX;
	volatile int64_t x430 = INT64_MIN;
	int8_t x431 = INT8_MIN;
	int8_t x432 = 17;
	volatile int32_t t90 = -1;

	t90 = ((x429*(x430|x431))<x432);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x434 = INT64_MIN;
	static int32_t x435 = INT32_MIN;
	int32_t x436 = 1155;
	volatile int32_t t91 = -1;

	t91 = ((x433*(x434|x435))<x436);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x437 = INT32_MAX;
	uint32_t x438 = 24772U;
	int32_t x439 = -65538;

	t92 = ((x437*(x438|x439))<x440);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x445 = UINT8_MAX;
	int16_t x446 = -1;
	volatile int64_t x448 = -1LL;
	int32_t t93 = 940467;

	t93 = ((x445*(x446|x447))<x448);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x449 = -1;
	int8_t x450 = -1;
	int8_t x451 = 48;

	t94 = ((x449*(x450|x451))<x452);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x453 = 14485752LLU;
	int16_t x454 = -1;

	t95 = ((x453*(x454|x455))<x456);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x458 = 1;
	int16_t x459 = INT16_MAX;
	static int16_t x460 = -1;
	volatile int32_t t96 = -4319386;

	t96 = ((x457*(x458|x459))<x460);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x463 = UINT64_MAX;
	int16_t x464 = INT16_MIN;
	static volatile int32_t t97 = -67;

	t97 = ((x461*(x462|x463))<x464);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x465 = INT16_MIN;
	volatile int16_t x466 = -1;
	int64_t x468 = -32074LL;
	volatile int32_t t98 = 541271;

	t98 = ((x465*(x466|x467))<x468);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x469 = 0;
	static volatile int32_t x470 = INT32_MAX;

	t99 = ((x469*(x470|x471))<x472);

	if (t99 != 1) { NG(); } else { ; }
	
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

