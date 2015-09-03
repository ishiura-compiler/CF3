#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x9 = INT32_MAX;
uint8_t x12 = 1U;
volatile uint64_t t3 = 208476609112LLU;
int16_t x20 = INT16_MIN;
int32_t t4 = 6919;
static int64_t x25 = -1LL;
int64_t x35 = -1LL;
uint32_t x47 = UINT32_MAX;
uint32_t x50 = UINT32_MAX;
static volatile uint64_t t10 = 2LLU;
int32_t x54 = -1;
static int8_t x60 = -38;
volatile uint64_t t13 = 15679440831LLU;
uint32_t x70 = 56U;
volatile int32_t t14 = 0;
int64_t x82 = INT64_MIN;
uint8_t x93 = 59U;
uint16_t x111 = 29050U;
uint8_t x116 = UINT8_MAX;
int32_t x118 = -1;
volatile int32_t t22 = 188;
static int32_t x127 = INT32_MIN;
int64_t x134 = -5621354869385621LL;
uint8_t x141 = UINT8_MAX;
volatile int8_t x144 = INT8_MIN;
int16_t x146 = INT16_MIN;
volatile int32_t t28 = -769487124;
volatile int32_t x152 = -1;
int16_t x153 = -1;
static int32_t x154 = -1;
int8_t x155 = 22;
volatile int16_t x156 = -1;
static int8_t x163 = INT8_MIN;
uint32_t x165 = UINT32_MAX;
uint8_t x175 = UINT8_MAX;
uint64_t t33 = 101LLU;
int8_t x179 = INT8_MIN;
volatile int8_t x184 = -1;
volatile int32_t t35 = -641456686;
int64_t x196 = INT64_MIN;
int64_t x210 = -1LL;
volatile int16_t x213 = -1;
static int64_t x215 = -1LL;
int16_t x219 = INT16_MIN;
volatile int64_t t42 = 13156978161501063LL;
volatile int64_t x249 = 17LL;
uint16_t x255 = 8127U;
int64_t x256 = -1LL;
static volatile uint32_t t48 = 25557U;
static volatile uint64_t t49 = 274289427LLU;
int16_t x274 = -1;
volatile int8_t x280 = INT8_MIN;
int64_t x295 = INT64_MAX;
int64_t x318 = INT64_MAX;
int8_t x320 = 0;
volatile uint8_t x323 = 1U;
volatile int64_t t61 = 8732021712LL;
uint32_t x330 = 169132824U;
int32_t x332 = INT32_MIN;
int8_t x334 = -1;
static volatile int32_t x346 = INT32_MAX;
int64_t x357 = -140497704LL;
int32_t x360 = -1;
static int32_t x364 = -1;
int8_t x378 = 6;
uint64_t t71 = UINT64_MAX;
int64_t t73 = -11813140612LL;
int8_t x391 = INT8_MIN;
uint64_t x393 = 464880060983237664LLU;
int16_t x394 = INT16_MAX;
volatile int32_t x418 = INT32_MIN;
static volatile uint8_t x419 = UINT8_MAX;
volatile uint16_t x421 = 810U;
int8_t x423 = 26;
int8_t x430 = 11;
volatile int64_t t80 = 0LL;
int32_t x433 = 3044720;
volatile int32_t t83 = 6977;
volatile int32_t t84 = -14179;
uint64_t x449 = 3513888LLU;
int32_t x451 = INT32_MIN;
uint64_t t85 = 601381380LLU;
volatile uint16_t x464 = 30U;
static int32_t t89 = 15572037;
int16_t x476 = INT16_MAX;
static int8_t x481 = 24;
volatile int16_t x484 = -3365;
static int8_t x490 = INT8_MAX;
static int32_t t94 = 7325;
int32_t x502 = INT32_MAX;
volatile int64_t x504 = INT64_MAX;
volatile int64_t t95 = INT64_MAX;
int64_t x510 = INT64_MIN;
uint8_t x521 = 94U;
uint8_t x522 = UINT8_MAX;
int64_t x523 = 272LL;
static uint8_t x526 = 103U;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint16_t x2 = 1245U;
	int8_t x3 = -1;
	uint8_t x4 = UINT8_MAX;
	int32_t t0 = -12424431;

	t0 = ((x1|(x2==x3))*x4);

	if (t0 != -32640) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 6U;
	uint64_t x6 = 13603381351950LLU;
	static int32_t x7 = INT32_MAX;
	volatile uint64_t x8 = UINT64_MAX;
	static uint64_t t1 = 351894403617228LLU;

	t1 = ((x5|(x6==x7))*x8);

	if (t1 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = -3;
	uint8_t x11 = 1U;
	int32_t t2 = INT32_MAX;

	t2 = ((x9|(x10==x11))*x12);

	if (t2 != INT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int64_t x14 = INT64_MIN;
	static uint64_t x15 = 26309672LLU;
	static uint64_t x16 = 264862874623486LLU;

	t3 = ((x13|(x14==x15))*x16);

	if (t3 != 17357788488450155010LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	uint32_t x18 = 14U;
	uint8_t x19 = 43U;

	t4 = ((x17|(x18==x19))*x20);

	if (t4 != 4194304) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint8_t x22 = UINT8_MAX;
	int32_t x23 = INT32_MAX;
	volatile int64_t x24 = -1LL;
	volatile int64_t t5 = -5474LL;

	t5 = ((x21|(x22==x23))*x24);

	if (t5 != 128LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x26 = INT64_MAX;
	static int8_t x27 = -10;
	static volatile int64_t x28 = 27404LL;
	volatile int64_t t6 = 791836014720LL;

	t6 = ((x25|(x26==x27))*x28);

	if (t6 != -27404LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	int32_t x34 = INT32_MAX;
	volatile int16_t x36 = -1;
	volatile uint32_t t7 = 1387102048U;

	t7 = ((x33|(x34==x35))*x36);

	if (t7 != 1U) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint8_t x37 = 33U;
	uint32_t x38 = 35794544U;
	static uint64_t x39 = 5147LLU;
	uint64_t x40 = 136371230098413554LLU;
	volatile uint64_t t8 = 3239LLU;

	t8 = ((x37|(x38==x39))*x40);

	if (t8 != 4500250593247647282LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x45 = INT8_MIN;
	int16_t x46 = -1;
	int8_t x48 = INT8_MIN;
	int32_t t9 = 606890205;

	t9 = ((x45|(x46==x47))*x48);

	if (t9 != 16256) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x49 = UINT16_MAX;
	int32_t x51 = INT32_MIN;
	uint64_t x52 = 741561494458LLU;

	t10 = ((x49|(x50==x51))*x52);

	if (t10 != 48598232539305030LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = 8079705;
	volatile uint16_t x55 = 0U;
	static uint8_t x56 = UINT8_MAX;
	static int32_t t11 = -1;

	t11 = ((x53|(x54==x55))*x56);

	if (t11 != 2060324775) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x57 = 4U;
	int16_t x58 = INT16_MIN;
	int16_t x59 = INT16_MIN;
	volatile int32_t t12 = -568;

	t12 = ((x57|(x58==x59))*x60);

	if (t12 != -190) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = 0U;
	int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MIN;
	static uint64_t x64 = UINT64_MAX;

	t13 = ((x61|(x62==x63))*x64);

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x69 = INT8_MIN;
	int8_t x71 = INT8_MAX;
	int16_t x72 = 4729;

	t14 = ((x69|(x70==x71))*x72);

	if (t14 != -605312) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x73 = 727577LLU;
	static volatile uint64_t x74 = UINT64_MAX;
	static uint32_t x75 = UINT32_MAX;
	int8_t x76 = -6;
	uint64_t t15 = 1101333464053LLU;

	t15 = ((x73|(x74==x75))*x76);

	if (t15 != 18446744073705186154LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x81 = -1;
	volatile int8_t x83 = INT8_MIN;
	int64_t x84 = INT64_MAX;
	volatile int64_t t16 = 11540560493317LL;

	t16 = ((x81|(x82==x83))*x84);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x94 = -1LL;
	uint16_t x95 = UINT16_MAX;
	int16_t x96 = -1;
	volatile int32_t t17 = -78012;

	t17 = ((x93|(x94==x95))*x96);

	if (t17 != -59) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x105 = 79U;
	static uint32_t x106 = 10479U;
	volatile int64_t x107 = INT64_MIN;
	int16_t x108 = -160;
	int32_t t18 = 54208;

	t18 = ((x105|(x106==x107))*x108);

	if (t18 != -12640) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x109 = INT16_MIN;
	static uint8_t x110 = 1U;
	volatile int16_t x112 = -7;
	volatile int32_t t19 = -388542583;

	t19 = ((x109|(x110==x111))*x112);

	if (t19 != 229376) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x113 = 1146491U;
	int16_t x114 = -1;
	uint64_t x115 = 201133054436828267LLU;
	uint32_t t20 = 5440215U;

	t20 = ((x113|(x114==x115))*x116);

	if (t20 != 292355205U) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x117 = -856244637249LL;
	volatile int64_t x119 = INT64_MIN;
	volatile int32_t x120 = -1;
	volatile int64_t t21 = -1096225LL;

	t21 = ((x117|(x118==x119))*x120);

	if (t21 != 856244637249LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x121 = -37576;
	static uint8_t x122 = 21U;
	uint64_t x123 = UINT64_MAX;
	int8_t x124 = 2;

	t22 = ((x121|(x122==x123))*x124);

	if (t22 != -75152) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x125 = UINT16_MAX;
	int64_t x126 = 6772060LL;
	int8_t x128 = 1;
	int32_t t23 = -31731508;

	t23 = ((x125|(x126==x127))*x128);

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x129 = -143;
	uint16_t x130 = 90U;
	int16_t x131 = -13494;
	static uint16_t x132 = UINT16_MAX;
	int32_t t24 = -2339123;

	t24 = ((x129|(x130==x131))*x132);

	if (t24 != -9371505) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x133 = 1;
	int8_t x135 = INT8_MAX;
	static volatile int16_t x136 = -21;
	volatile int32_t t25 = -61;

	t25 = ((x133|(x134==x135))*x136);

	if (t25 != -21) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x137 = 46U;
	volatile int64_t x138 = INT64_MIN;
	int8_t x139 = INT8_MAX;
	volatile int8_t x140 = 0;
	int32_t t26 = -12;

	t26 = ((x137|(x138==x139))*x140);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x142 = INT16_MIN;
	int16_t x143 = INT16_MIN;
	int32_t t27 = 20;

	t27 = ((x141|(x142==x143))*x144);

	if (t27 != -32640) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x145 = 85444;
	int64_t x147 = INT64_MAX;
	int8_t x148 = INT8_MIN;

	t28 = ((x145|(x146==x147))*x148);

	if (t28 != -10936832) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x149 = 106U;
	uint16_t x150 = 0U;
	int8_t x151 = INT8_MIN;
	static int32_t t29 = -6597252;

	t29 = ((x149|(x150==x151))*x152);

	if (t29 != -106) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t t30 = 1430;

	t30 = ((x153|(x154==x155))*x156);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x161 = -1;
	volatile int16_t x162 = INT16_MIN;
	uint16_t x164 = 4U;
	volatile int32_t t31 = -1;

	t31 = ((x161|(x162==x163))*x164);

	if (t31 != -4) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x166 = UINT16_MAX;
	int64_t x167 = -1LL;
	int16_t x168 = INT16_MIN;
	uint32_t t32 = 3293U;

	t32 = ((x165|(x166==x167))*x168);

	if (t32 != 32768U) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x173 = 0LLU;
	static volatile int64_t x174 = INT64_MIN;
	int64_t x176 = INT64_MIN;

	t33 = ((x173|(x174==x175))*x176);

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x177 = 0U;
	uint16_t x178 = 11U;
	uint32_t x180 = UINT32_MAX;
	static volatile uint32_t t34 = 184U;

	t34 = ((x177|(x178==x179))*x180);

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	static uint16_t x181 = 2726U;
	volatile int64_t x182 = -1LL;
	uint64_t x183 = UINT64_MAX;

	t35 = ((x181|(x182==x183))*x184);

	if (t35 != -2727) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x189 = INT64_MIN;
	int64_t x190 = INT64_MIN;
	int16_t x191 = -1;
	static volatile uint16_t x192 = 0U;
	volatile int64_t t36 = 231308200909659LL;

	t36 = ((x189|(x190==x191))*x192);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x193 = 8289684LLU;
	volatile uint32_t x194 = 131559926U;
	int8_t x195 = 1;
	uint64_t t37 = 5337340875LLU;

	t37 = ((x193|(x194==x195))*x196);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x201 = INT8_MAX;
	int8_t x202 = -1;
	int16_t x203 = INT16_MIN;
	int32_t x204 = 2326;
	static volatile int32_t t38 = -1;

	t38 = ((x201|(x202==x203))*x204);

	if (t38 != 295402) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x209 = INT8_MAX;
	volatile int32_t x211 = INT32_MIN;
	int8_t x212 = -13;
	volatile int32_t t39 = -4160547;

	t39 = ((x209|(x210==x211))*x212);

	if (t39 != -1651) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x214 = UINT64_MAX;
	uint8_t x216 = 0U;
	int32_t t40 = -15;

	t40 = ((x213|(x214==x215))*x216);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x217 = -16;
	int8_t x218 = INT8_MIN;
	uint64_t x220 = 100180794LLU;
	uint64_t t41 = 23225002483611332LLU;

	t41 = ((x217|(x218==x219))*x220);

	if (t41 != 18446744072106658912LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x221 = 224051789LL;
	int8_t x222 = INT8_MIN;
	int64_t x223 = 1780999065629648LL;
	int16_t x224 = INT16_MAX;

	t42 = ((x221|(x222==x223))*x224);

	if (t42 != 7341504970163LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x229 = -16LL;
	uint32_t x230 = 2U;
	volatile uint16_t x231 = 60U;
	int16_t x232 = INT16_MIN;
	volatile int64_t t43 = 233902798658741LL;

	t43 = ((x229|(x230==x231))*x232);

	if (t43 != 524288LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x241 = 15880U;
	static uint64_t x242 = 502929444410LLU;
	int32_t x243 = 509393;
	int64_t x244 = -1LL;
	volatile int64_t t44 = 47079LL;

	t44 = ((x241|(x242==x243))*x244);

	if (t44 != -15880LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x245 = -85539LL;
	int8_t x246 = -7;
	int32_t x247 = 3709037;
	static int16_t x248 = 127;
	volatile int64_t t45 = -5LL;

	t45 = ((x245|(x246==x247))*x248);

	if (t45 != -10863453LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x250 = INT32_MIN;
	volatile int8_t x251 = 23;
	int8_t x252 = INT8_MAX;
	static int64_t t46 = 30812LL;

	t46 = ((x249|(x250==x251))*x252);

	if (t46 != 2159LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x253 = 5U;
	uint16_t x254 = 6792U;
	volatile int64_t t47 = 456LL;

	t47 = ((x253|(x254==x255))*x256);

	if (t47 != -5LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x257 = 5230U;
	uint8_t x258 = 102U;
	int8_t x259 = INT8_MIN;
	uint32_t x260 = 0U;

	t48 = ((x257|(x258==x259))*x260);

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x265 = UINT64_MAX;
	int8_t x266 = INT8_MIN;
	int64_t x267 = -1LL;
	int64_t x268 = INT64_MAX;

	t49 = ((x265|(x266==x267))*x268);

	if (t49 != 9223372036854775809LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x269 = INT8_MAX;
	int16_t x270 = INT16_MIN;
	static volatile int8_t x271 = -1;
	int16_t x272 = 462;
	static int32_t t50 = 59530;

	t50 = ((x269|(x270==x271))*x272);

	if (t50 != 58674) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x273 = UINT64_MAX;
	uint16_t x275 = 977U;
	volatile uint8_t x276 = 25U;
	static uint64_t t51 = 493390824339789264LLU;

	t51 = ((x273|(x274==x275))*x276);

	if (t51 != 18446744073709551591LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x277 = 703356U;
	int8_t x278 = -23;
	volatile int64_t x279 = -210523013756LL;
	volatile uint32_t t52 = 890358322U;

	t52 = ((x277|(x278==x279))*x280);

	if (t52 != 4204937728U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x281 = 38LLU;
	volatile int32_t x282 = 278594;
	static uint64_t x283 = 113LLU;
	static volatile int8_t x284 = -1;
	static uint64_t t53 = 12LLU;

	t53 = ((x281|(x282==x283))*x284);

	if (t53 != 18446744073709551578LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x293 = 25383U;
	static int8_t x294 = INT8_MAX;
	int16_t x296 = INT16_MIN;
	int32_t t54 = -1;

	t54 = ((x293|(x294==x295))*x296);

	if (t54 != -831750144) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x297 = 34U;
	volatile int16_t x298 = -1;
	static volatile int64_t x299 = INT64_MIN;
	uint32_t x300 = 226363U;
	uint32_t t55 = 1115301U;

	t55 = ((x297|(x298==x299))*x300);

	if (t55 != 7696342U) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint64_t x301 = 69681168459LLU;
	volatile int8_t x302 = INT8_MAX;
	int32_t x303 = INT32_MIN;
	uint16_t x304 = 36U;
	volatile uint64_t t56 = 76726539479LLU;

	t56 = ((x301|(x302==x303))*x304);

	if (t56 != 2508522064524LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x305 = 953984U;
	static volatile int32_t x306 = -3592210;
	volatile uint32_t x307 = 112U;
	int64_t x308 = 57120634LL;
	static int64_t t57 = -3LL;

	t57 = ((x305|(x306==x307))*x308);

	if (t57 != 54492170905856LL) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x313 = INT16_MIN;
	static int8_t x314 = -1;
	uint32_t x315 = UINT32_MAX;
	int8_t x316 = -1;
	volatile int32_t t58 = 95777926;

	t58 = ((x313|(x314==x315))*x316);

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x317 = INT16_MAX;
	volatile uint8_t x319 = UINT8_MAX;
	volatile int32_t t59 = -17261519;

	t59 = ((x317|(x318==x319))*x320);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x321 = INT8_MAX;
	static volatile uint64_t x322 = 19LLU;
	uint32_t x324 = 961U;
	volatile uint32_t t60 = 63U;

	t60 = ((x321|(x322==x323))*x324);

	if (t60 != 122047U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int32_t x325 = INT32_MAX;
	int32_t x326 = INT32_MIN;
	int32_t x327 = -4;
	static volatile int64_t x328 = -75073LL;

	t61 = ((x325|(x326==x327))*x328);

	if (t61 != -161218039831231LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x329 = 273858LLU;
	int32_t x331 = -1;
	static volatile uint64_t t62 = 5727LLU;

	t62 = ((x329|(x330==x331))*x332);

	if (t62 != 18446155968132677632LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x333 = -1LL;
	uint16_t x335 = 5U;
	int16_t x336 = INT16_MAX;
	volatile int64_t t63 = -138779389048243LL;

	t63 = ((x333|(x334==x335))*x336);

	if (t63 != -32767LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x337 = UINT64_MAX;
	uint32_t x338 = UINT32_MAX;
	int8_t x339 = INT8_MIN;
	volatile int8_t x340 = 4;
	static uint64_t t64 = 359LLU;

	t64 = ((x337|(x338==x339))*x340);

	if (t64 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint64_t x345 = UINT64_MAX;
	int64_t x347 = INT64_MIN;
	volatile uint8_t x348 = 5U;
	volatile uint64_t t65 = 3LLU;

	t65 = ((x345|(x346==x347))*x348);

	if (t65 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x349 = -5;
	static volatile int32_t x350 = -1;
	uint32_t x351 = 8218226U;
	static volatile int64_t x352 = 4821566025834LL;
	int64_t t66 = 12LL;

	t66 = ((x349|(x350==x351))*x352);

	if (t66 != -24107830129170LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x358 = 6U;
	static volatile int8_t x359 = INT8_MIN;
	static volatile int64_t t67 = -2414LL;

	t67 = ((x357|(x358==x359))*x360);

	if (t67 != 140497704LL) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile uint32_t x361 = 340U;
	uint16_t x362 = 18U;
	uint64_t x363 = UINT64_MAX;
	volatile uint32_t t68 = 1505502U;

	t68 = ((x361|(x362==x363))*x364);

	if (t68 != 4294966956U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x369 = UINT32_MAX;
	int16_t x370 = -1;
	static int8_t x371 = 0;
	int32_t x372 = INT32_MAX;
	volatile uint32_t t69 = 35163759U;

	t69 = ((x369|(x370==x371))*x372);

	if (t69 != 2147483649U) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x373 = UINT8_MAX;
	int64_t x374 = -1LL;
	static int32_t x375 = INT32_MIN;
	int64_t x376 = -1LL;
	volatile int64_t t70 = -1313894813864LL;

	t70 = ((x373|(x374==x375))*x376);

	if (t70 != -255LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x377 = 1U;
	int32_t x379 = 47;
	uint64_t x380 = UINT64_MAX;

	t71 = ((x377|(x378==x379))*x380);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x381 = INT16_MIN;
	int8_t x382 = 1;
	int8_t x383 = -1;
	static int16_t x384 = 31;
	volatile int32_t t72 = 123234;

	t72 = ((x381|(x382==x383))*x384);

	if (t72 != -1015808) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x385 = 3U;
	uint8_t x386 = 115U;
	uint64_t x387 = 210593125901LLU;
	int64_t x388 = 44272434583173LL;

	t73 = ((x385|(x386==x387))*x388);

	if (t73 != 132817303749519LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x389 = -2082576;
	int16_t x390 = INT16_MIN;
	uint64_t x392 = 173560263LLU;
	volatile uint64_t t74 = 2391399214991004LLU;

	t74 = ((x389|(x390==x391))*x392);

	if (t74 != 18446382621271274128LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x395 = -125;
	int32_t x396 = 5954;
	static uint64_t t75 = 121411798418033589LLU;

	t75 = ((x393|(x394==x395))*x396);

	if (t75 != 884272037764309056LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x401 = 6U;
	uint16_t x402 = UINT16_MAX;
	static uint64_t x403 = 3710382194264474450LLU;
	int64_t x404 = -1LL;
	volatile int64_t t76 = -57873LL;

	t76 = ((x401|(x402==x403))*x404);

	if (t76 != -6LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x413 = -1;
	uint8_t x414 = 8U;
	static uint16_t x415 = 13605U;
	uint32_t x416 = 494138453U;
	volatile uint32_t t77 = 0U;

	t77 = ((x413|(x414==x415))*x416);

	if (t77 != 3800828843U) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x417 = UINT32_MAX;
	static uint32_t x420 = 7U;
	volatile uint32_t t78 = 9U;

	t78 = ((x417|(x418==x419))*x420);

	if (t78 != 4294967289U) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x422 = 11019106;
	uint8_t x424 = 1U;
	volatile int32_t t79 = -7;

	t79 = ((x421|(x422==x423))*x424);

	if (t79 != 810) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x429 = INT16_MIN;
	int32_t x431 = INT32_MAX;
	int64_t x432 = -1LL;

	t80 = ((x429|(x430==x431))*x432);

	if (t80 != 32768LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x434 = -7634;
	int32_t x435 = INT32_MIN;
	static volatile int32_t x436 = -1;
	int32_t t81 = 2813817;

	t81 = ((x433|(x434==x435))*x436);

	if (t81 != -3044720) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x437 = INT32_MIN;
	int64_t x438 = INT64_MAX;
	static int32_t x439 = INT32_MIN;
	uint64_t x440 = UINT64_MAX;
	uint64_t t82 = 1LLU;

	t82 = ((x437|(x438==x439))*x440);

	if (t82 != 2147483648LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x441 = INT8_MIN;
	int32_t x442 = INT32_MAX;
	uint16_t x443 = 2U;
	int32_t x444 = 0;

	t83 = ((x441|(x442==x443))*x444);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x445 = 6296;
	uint32_t x446 = 11383374U;
	int32_t x447 = -15728;
	int16_t x448 = INT16_MAX;

	t84 = ((x445|(x446==x447))*x448);

	if (t84 != 206301032) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int32_t x450 = INT32_MAX;
	int32_t x452 = INT32_MAX;

	t85 = ((x449|(x450==x451))*x452);

	if (t85 != 7546017017389536LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x453 = 0;
	int64_t x454 = -7190563012LL;
	int16_t x455 = -1;
	int16_t x456 = -25;
	static int32_t t86 = -22103570;

	t86 = ((x453|(x454==x455))*x456);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x461 = 26337995U;
	volatile int16_t x462 = -1;
	int16_t x463 = 141;
	static uint32_t t87 = 41060U;

	t87 = ((x461|(x462==x463))*x464);

	if (t87 != 790139850U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x465 = UINT16_MAX;
	uint64_t x466 = 1484276684768732LLU;
	volatile int8_t x467 = -51;
	int8_t x468 = INT8_MIN;
	int32_t t88 = 189648;

	t88 = ((x465|(x466==x467))*x468);

	if (t88 != -8388480) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x469 = 46U;
	static volatile int64_t x470 = INT64_MAX;
	uint32_t x471 = 13069U;
	int16_t x472 = 0;

	t89 = ((x469|(x470==x471))*x472);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x473 = 64U;
	int32_t x474 = -1;
	volatile uint32_t x475 = 885U;
	volatile int32_t t90 = 18813;

	t90 = ((x473|(x474==x475))*x476);

	if (t90 != 2097088) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x477 = 1U;
	volatile uint8_t x478 = 10U;
	int64_t x479 = INT64_MIN;
	int16_t x480 = 45;
	volatile int32_t t91 = 68047;

	t91 = ((x477|(x478==x479))*x480);

	if (t91 != 45) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x482 = INT32_MAX;
	static volatile int8_t x483 = -3;
	int32_t t92 = 26221062;

	t92 = ((x481|(x482==x483))*x484);

	if (t92 != -80760) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x489 = 0;
	uint8_t x491 = 1U;
	int32_t x492 = 4942;
	volatile int32_t t93 = -120;

	t93 = ((x489|(x490==x491))*x492);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x497 = -1;
	int64_t x498 = INT64_MIN;
	int8_t x499 = -11;
	volatile int8_t x500 = INT8_MAX;

	t94 = ((x497|(x498==x499))*x500);

	if (t94 != -127) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x501 = 1U;
	uint8_t x503 = UINT8_MAX;

	t95 = ((x501|(x502==x503))*x504);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x509 = -1;
	static int8_t x511 = INT8_MAX;
	static uint64_t x512 = 3520LLU;
	uint64_t t96 = 902412LLU;

	t96 = ((x509|(x510==x511))*x512);

	if (t96 != 18446744073709548096LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x513 = 0U;
	static uint8_t x514 = 2U;
	uint8_t x515 = 112U;
	uint64_t x516 = 4022625247980985995LLU;
	volatile uint64_t t97 = 8LLU;

	t97 = ((x513|(x514==x515))*x516);

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x524 = UINT8_MAX;
	volatile int32_t t98 = -15;

	t98 = ((x521|(x522==x523))*x524);

	if (t98 != 23970) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x525 = 15;
	uint64_t x527 = 216915LLU;
	int16_t x528 = INT16_MAX;
	volatile int32_t t99 = 0;

	t99 = ((x525|(x526==x527))*x528);

	if (t99 != 491505) { NG(); } else { ; }
	
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

