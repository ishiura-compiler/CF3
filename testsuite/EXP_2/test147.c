#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x27 = -7217;
static int8_t x35 = -1;
int32_t x36 = INT32_MAX;
static int16_t x40 = -1;
volatile uint32_t x43 = 23543737U;
int8_t x49 = INT8_MAX;
uint64_t x55 = 159534437LLU;
int8_t x56 = -1;
int8_t x57 = INT8_MIN;
int64_t x65 = -8278LL;
int16_t x67 = 1111;
int32_t x71 = 32858849;
int16_t x83 = INT16_MIN;
uint64_t t16 = 16042LLU;
int16_t x98 = INT16_MAX;
int32_t t19 = -1;
uint64_t x121 = 83783273LLU;
int64_t t26 = 55726LL;
uint16_t x140 = 2U;
static int8_t x144 = -1;
int64_t x146 = INT64_MIN;
int8_t x148 = INT8_MAX;
static uint16_t x154 = 350U;
static int8_t x161 = INT8_MIN;
uint32_t x172 = 26U;
static volatile uint64_t t34 = 5491624LLU;
static int16_t x177 = INT16_MAX;
uint64_t t35 = 445613770248936LLU;
volatile int8_t x184 = INT8_MIN;
static volatile uint32_t x186 = UINT32_MAX;
volatile uint64_t x188 = UINT64_MAX;
uint64_t x193 = 1588LLU;
static volatile uint32_t x195 = 8627U;
int16_t x211 = -1;
uint8_t x224 = UINT8_MAX;
static int16_t x232 = -1;
static int32_t x241 = -176739;
volatile int64_t t51 = 1127274915278LL;
int16_t x273 = -1;
static uint32_t x275 = UINT32_MAX;
int32_t x281 = 840;
volatile uint64_t x290 = 474994004761199LLU;
volatile uint8_t x295 = 0U;
int64_t x296 = -5689680982LL;
int16_t x298 = INT16_MAX;
volatile int32_t x302 = 112546186;
int16_t x317 = -1;
uint64_t t66 = 3871LLU;
int16_t x330 = INT16_MIN;
int8_t x331 = INT8_MAX;
volatile int64_t t67 = -13081477382LL;
uint32_t x335 = 51950U;
int8_t x340 = -1;
int8_t x346 = -1;
uint64_t x347 = 147LLU;
int64_t x361 = -171418402818LL;
int32_t x364 = INT32_MIN;
int32_t x365 = -1;
int64_t x379 = INT64_MIN;
int32_t x380 = 8182402;
int16_t x382 = INT16_MAX;
static int8_t x385 = -3;
int32_t x402 = INT32_MIN;
uint16_t x410 = 0U;
volatile uint16_t x411 = 2360U;
volatile int32_t x415 = INT32_MIN;
int32_t x417 = INT32_MAX;
volatile int32_t t83 = 17863589;
static int16_t x440 = INT16_MIN;
volatile int32_t t85 = 457727;
uint64_t x443 = 11396608LLU;
static int16_t x444 = INT16_MAX;
uint64_t x446 = UINT64_MAX;
static int64_t t89 = 66293366LL;
int16_t x465 = INT16_MIN;
int8_t x481 = INT8_MIN;
int64_t x485 = INT64_MIN;
int64_t x486 = INT64_MIN;
volatile uint32_t x488 = 382448U;
static volatile int64_t t93 = 6148LL;
static uint16_t x495 = 20U;
static volatile int64_t t94 = 16249372LL;
int64_t x497 = INT64_MIN;
volatile uint16_t x507 = 0U;
uint64_t t96 = 6016659488951LLU;
uint64_t x514 = 238LLU;
int64_t x516 = INT64_MIN;


void f0(void) {
	uint32_t x1 = 430433702U;
	int16_t x2 = -1;
	volatile int32_t x3 = 220;
	int64_t x4 = INT64_MAX;
	int64_t t0 = -5514151212178LL;

	t0 = ((x1|(x2+x3))/x4);

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	volatile int8_t x6 = INT8_MIN;
	int8_t x7 = INT8_MIN;
	uint16_t x8 = 249U;
	int32_t t1 = 179133297;

	t1 = ((x5|(x6+x7))/x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	uint8_t x10 = UINT8_MAX;
	int8_t x11 = 0;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = -37377916LL;

	t2 = ((x9|(x10+x11))/x12);

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 22659512797403LLU;
	int8_t x14 = 0;
	volatile int16_t x15 = INT16_MIN;
	int64_t x16 = INT64_MAX;
	uint64_t t3 = 381862419989LLU;

	t3 = ((x13|(x14+x15))/x16);

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x21 = 2;
	static int16_t x22 = INT16_MIN;
	static int32_t x23 = INT32_MAX;
	int8_t x24 = -1;
	volatile int32_t t4 = 14050;

	t4 = ((x21|(x22+x23))/x24);

	if (t4 != -2147450879) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x25 = 0;
	int8_t x26 = -1;
	int8_t x28 = INT8_MAX;
	volatile int32_t t5 = -12;

	t5 = ((x25|(x26+x27))/x28);

	if (t5 != -56) { NG(); } else { ; }
	
}

void f6(void) {
	static uint64_t x29 = 63183032317107LLU;
	static int16_t x30 = -1;
	static int16_t x31 = 4;
	int16_t x32 = -1;
	volatile uint64_t t6 = 118837482LLU;

	t6 = ((x29|(x30+x31))/x32);

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint16_t x33 = UINT16_MAX;
	int8_t x34 = INT8_MIN;
	volatile int32_t t7 = 10356023;

	t7 = ((x33|(x34+x35))/x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = 1924297859LL;
	volatile uint64_t x38 = UINT64_MAX;
	static int64_t x39 = -1LL;
	uint64_t t8 = 47262LLU;

	t8 = ((x37|(x38+x39))/x40);

	if (t8 != 1LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	static int8_t x42 = -1;
	uint32_t x44 = 1997879351U;
	uint32_t t9 = 50362246U;

	t9 = ((x41|(x42+x43))/x44);

	if (t9 != 1U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x50 = INT16_MIN;
	int64_t x51 = -103LL;
	static volatile int64_t x52 = -1LL;
	volatile int64_t t10 = 53LL;

	t10 = ((x49|(x50+x51))/x52);

	if (t10 != 32769LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x53 = INT64_MAX;
	int16_t x54 = 1;
	uint64_t t11 = 113942065906LLU;

	t11 = ((x53|(x54+x55))/x56);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x58 = -149;
	int8_t x59 = -1;
	static int16_t x60 = INT16_MIN;
	int32_t t12 = -156502152;

	t12 = ((x57|(x58+x59))/x60);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x66 = UINT8_MAX;
	int32_t x68 = 7591;
	int64_t t13 = -5LL;

	t13 = ((x65|(x66+x67))/x68);

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x69 = INT16_MIN;
	uint64_t x70 = 63091970516LLU;
	int32_t x72 = INT32_MAX;
	uint64_t t14 = 269176065921666LLU;

	t14 = ((x69|(x70+x71))/x72);

	if (t14 != 8589934595LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = INT16_MIN;
	uint32_t x78 = 2005086354U;
	uint64_t x79 = 975820825004LLU;
	uint64_t x80 = 2936LLU;
	static uint64_t t15 = 258840148640219628LLU;

	t15 = ((x77|(x78+x79))/x80);

	if (t15 != 6282950978783903LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = INT16_MAX;
	int32_t x82 = -1;
	static uint64_t x84 = 130660LLU;

	t16 = ((x81|(x82+x83))/x84);

	if (t16 != 141181264914354LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x89 = INT64_MIN;
	int32_t x90 = -1;
	uint16_t x91 = UINT16_MAX;
	uint32_t x92 = 14745881U;
	int64_t t17 = 1LL;

	t17 = ((x89|(x90+x91))/x92);

	if (t17 != -625488028613LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x93 = 25U;
	static int16_t x94 = -1;
	int8_t x95 = INT8_MAX;
	static volatile int16_t x96 = -3;
	int32_t t18 = -199;

	t18 = ((x93|(x94+x95))/x96);

	if (t18 != -42) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint8_t x97 = UINT8_MAX;
	int32_t x99 = INT32_MIN;
	volatile int32_t x100 = -6729;

	t19 = ((x97|(x98+x99))/x100);

	if (t19 != 319133) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x105 = -1;
	static int16_t x106 = INT16_MIN;
	static uint16_t x107 = UINT16_MAX;
	int64_t x108 = INT64_MAX;
	static int64_t t20 = 3362557848588LL;

	t20 = ((x105|(x106+x107))/x108);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x113 = UINT64_MAX;
	volatile int8_t x114 = -1;
	volatile uint32_t x115 = 7U;
	uint8_t x116 = 16U;
	volatile uint64_t t21 = 61LLU;

	t21 = ((x113|(x114+x115))/x116);

	if (t21 != 1152921504606846975LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x117 = INT16_MIN;
	int8_t x118 = -1;
	static volatile int16_t x119 = INT16_MIN;
	int8_t x120 = INT8_MAX;
	volatile int32_t t22 = -1281361;

	t22 = ((x117|(x118+x119))/x120);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x122 = 6653U;
	volatile int8_t x123 = 27;
	int32_t x124 = INT32_MIN;
	static uint64_t t23 = 249028977936512LLU;

	t23 = ((x121|(x122+x123))/x124);

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x125 = -1;
	int32_t x126 = 110338314;
	static int64_t x127 = -2131LL;
	uint16_t x128 = 8U;
	volatile int64_t t24 = -454909076873905LL;

	t24 = ((x125|(x126+x127))/x128);

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x129 = INT32_MIN;
	static volatile uint32_t x130 = 126943836U;
	uint64_t x131 = 49LLU;
	int8_t x132 = 1;
	static volatile uint64_t t25 = 317420LLU;

	t25 = ((x129|(x130+x131))/x132);

	if (t25 != 18446744071689011853LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = INT8_MIN;
	static int64_t x134 = INT64_MAX;
	int16_t x135 = INT16_MIN;
	int16_t x136 = INT16_MIN;

	t26 = ((x133|(x134+x135))/x136);

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x137 = INT32_MIN;
	int32_t x138 = INT32_MAX;
	int32_t x139 = INT32_MIN;
	volatile int32_t t27 = 50590463;

	t27 = ((x137|(x138+x139))/x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = INT16_MIN;
	static uint32_t x142 = UINT32_MAX;
	int64_t x143 = -1LL;
	static volatile int64_t t28 = 52LL;

	t28 = ((x141|(x142+x143))/x144);

	if (t28 != 2LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x145 = 0;
	static int64_t x147 = INT64_MAX;
	volatile int64_t t29 = 3279982034817LL;

	t29 = ((x145|(x146+x147))/x148);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x149 = 221949637372954LL;
	volatile int16_t x150 = -8;
	static uint8_t x151 = UINT8_MAX;
	volatile int32_t x152 = 187312028;
	int64_t t30 = -579286547406LL;

	t30 = ((x149|(x150+x151))/x152);

	if (t30 != 1184919LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x153 = 1139536LLU;
	static volatile int8_t x155 = INT8_MIN;
	uint32_t x156 = 52U;
	uint64_t t31 = 336100369125LLU;

	t31 = ((x153|(x154+x155))/x156);

	if (t31 != 21916LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x162 = INT8_MIN;
	int32_t x163 = 110685781;
	volatile uint16_t x164 = 1564U;
	int32_t t32 = -1798513;

	t32 = ((x161|(x162+x163))/x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x165 = 41U;
	volatile int64_t x166 = INT64_MIN;
	uint32_t x167 = 3U;
	uint8_t x168 = 1U;
	int64_t t33 = 6LL;

	t33 = ((x165|(x166+x167))/x168);

	if (t33 != -9223372036854775765LL) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x169 = INT16_MAX;
	uint16_t x170 = 5377U;
	uint64_t x171 = 5722014133700380380LLU;

	t34 = ((x169|(x170+x171))/x172);

	if (t34 != 220077466680784423LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x178 = INT8_MAX;
	uint32_t x179 = 20419U;
	uint64_t x180 = UINT64_MAX;

	t35 = ((x177|(x178+x179))/x180);

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x181 = UINT64_MAX;
	static uint8_t x182 = 6U;
	static uint8_t x183 = 1U;
	static uint64_t t36 = 461207867342931LLU;

	t36 = ((x181|(x182+x183))/x184);

	if (t36 != 1LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x187 = UINT32_MAX;
	volatile uint64_t t37 = 222033006336LLU;

	t37 = ((x185|(x186+x187))/x188);

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x189 = -50;
	int8_t x190 = INT8_MIN;
	uint32_t x191 = 452U;
	uint32_t x192 = 9264U;
	uint32_t t38 = 1166U;

	t38 = ((x189|(x190+x191))/x192);

	if (t38 != 463619U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x194 = -172206363184430344LL;
	int64_t x196 = -4322257320716897LL;
	static volatile uint64_t t39 = 391169074LLU;

	t39 = ((x193|(x194+x195))/x196);

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = 116;
	int8_t x198 = INT8_MIN;
	uint8_t x199 = UINT8_MAX;
	int16_t x200 = -4528;
	int32_t t40 = -6216069;

	t40 = ((x197|(x198+x199))/x200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x201 = -1;
	int8_t x202 = INT8_MIN;
	uint16_t x203 = 944U;
	uint16_t x204 = 87U;
	int32_t t41 = -108792082;

	t41 = ((x201|(x202+x203))/x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x205 = -64098009021039LL;
	int32_t x206 = -40;
	int8_t x207 = -49;
	int8_t x208 = -1;
	int64_t t42 = -214921600999LL;

	t42 = ((x205|(x206+x207))/x208);

	if (t42 != 73LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x209 = -12LL;
	int16_t x210 = INT16_MIN;
	static uint8_t x212 = 41U;
	int64_t t43 = -488LL;

	t43 = ((x209|(x210+x211))/x212);

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x221 = 2329455LLU;
	int8_t x222 = -1;
	int32_t x223 = INT32_MAX;
	uint64_t t44 = 5153461690017914708LLU;

	t44 = ((x221|(x222+x223))/x224);

	if (t44 != 8421504LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x225 = -1;
	volatile int64_t x226 = 2052006401LL;
	int32_t x227 = INT32_MIN;
	int32_t x228 = -13578859;
	int64_t t45 = -12978380833366792LL;

	t45 = ((x225|(x226+x227))/x228);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x229 = 5;
	uint32_t x230 = 1U;
	int16_t x231 = INT16_MIN;
	uint32_t t46 = 1U;

	t46 = ((x229|(x230+x231))/x232);

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x233 = 61U;
	volatile uint64_t x234 = 2295529146464LLU;
	volatile int16_t x235 = INT16_MAX;
	volatile uint8_t x236 = 103U;
	volatile uint64_t t47 = 7384177LLU;

	t47 = ((x233|(x234+x235))/x236);

	if (t47 != 22286691060LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x237 = 30U;
	uint16_t x238 = 2U;
	int8_t x239 = INT8_MAX;
	volatile uint32_t x240 = 17U;
	volatile uint32_t t48 = 6591004U;

	t48 = ((x237|(x238+x239))/x240);

	if (t48 != 9U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x242 = INT16_MIN;
	volatile int16_t x243 = -1;
	int16_t x244 = -1;
	volatile int32_t t49 = -34;

	t49 = ((x241|(x242+x243))/x244);

	if (t49 != 32769) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = INT8_MIN;
	volatile uint64_t x246 = 2807865270531412948LLU;
	volatile int16_t x247 = INT16_MAX;
	static int16_t x248 = INT16_MIN;
	uint64_t t50 = 8672997282580360LLU;

	t50 = ((x245|(x246+x247))/x248);

	if (t50 != 1LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int64_t x249 = -1LL;
	uint16_t x250 = UINT16_MAX;
	int64_t x251 = INT64_MIN;
	volatile int8_t x252 = -1;

	t51 = ((x249|(x250+x251))/x252);

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x253 = -1;
	static int32_t x254 = 513073;
	int64_t x255 = INT64_MIN;
	int64_t x256 = -1LL;
	int64_t t52 = -63028360LL;

	t52 = ((x253|(x254+x255))/x256);

	if (t52 != 1LL) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x261 = 20U;
	int32_t x262 = -1236310;
	int16_t x263 = -1;
	int32_t x264 = INT32_MIN;
	volatile int32_t t53 = 61;

	t53 = ((x261|(x262+x263))/x264);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint64_t x265 = 1283540310589613643LLU;
	static volatile int32_t x266 = -30174950;
	volatile int32_t x267 = 23388645;
	uint32_t x268 = 54U;
	volatile uint64_t t54 = 4976808458LLU;

	t54 = ((x265|(x266+x267))/x268);

	if (t54 != 341606371735244302LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x274 = UINT16_MAX;
	int8_t x276 = -1;
	uint32_t t55 = 61494U;

	t55 = ((x273|(x274+x275))/x276);

	if (t55 != 1U) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x277 = 2958U;
	int64_t x278 = INT64_MIN;
	static int8_t x279 = INT8_MAX;
	volatile int32_t x280 = 183586;
	int64_t t56 = 28LL;

	t56 = ((x277|(x278+x279))/x280);

	if (t56 != -50240062079106LL) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x282 = INT16_MAX;
	volatile int32_t x283 = INT32_MIN;
	volatile int16_t x284 = INT16_MIN;
	int32_t t57 = -562737182;

	t57 = ((x281|(x282+x283))/x284);

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x285 = 144LL;
	int16_t x286 = INT16_MIN;
	uint8_t x287 = 17U;
	uint32_t x288 = 13606U;
	int64_t t58 = 3517880697921LL;

	t58 = ((x285|(x286+x287))/x288);

	if (t58 != -2LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x289 = -1LL;
	static volatile uint32_t x291 = UINT32_MAX;
	int32_t x292 = INT32_MIN;
	volatile uint64_t t59 = 110001912615454LLU;

	t59 = ((x289|(x290+x291))/x292);

	if (t59 != 1LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x293 = INT8_MAX;
	static int8_t x294 = INT8_MIN;
	volatile int64_t t60 = -957897LL;

	t60 = ((x293|(x294+x295))/x296);

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x297 = -2486740599LL;
	static int64_t x299 = 2294812605647207LL;
	uint16_t x300 = 17218U;
	volatile int64_t t61 = 389967LL;

	t61 = ((x297|(x298+x299))/x300);

	if (t61 != -3930LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x301 = -1LL;
	int64_t x303 = -1LL;
	int16_t x304 = INT16_MIN;
	volatile int64_t t62 = -1600545058LL;

	t62 = ((x301|(x302+x303))/x304);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x305 = -1;
	int8_t x306 = -49;
	uint8_t x307 = UINT8_MAX;
	int64_t x308 = -33220899132495LL;
	volatile int64_t t63 = -131625528LL;

	t63 = ((x305|(x306+x307))/x308);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x309 = -1;
	int8_t x310 = INT8_MIN;
	int8_t x311 = -1;
	int32_t x312 = INT32_MAX;
	int32_t t64 = 1;

	t64 = ((x309|(x310+x311))/x312);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x318 = INT16_MIN;
	int64_t x319 = INT64_MAX;
	static int16_t x320 = -13;
	int64_t t65 = 1379554752LL;

	t65 = ((x317|(x318+x319))/x320);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x325 = -1;
	static uint64_t x326 = UINT64_MAX;
	uint64_t x327 = 735960475LLU;
	volatile uint32_t x328 = 2083949739U;

	t66 = ((x325|(x326+x327))/x328);

	if (t66 != 8851818126LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x329 = -270752276680LL;
	volatile int32_t x332 = -1449;

	t67 = ((x329|(x330+x331))/x332);

	if (t67 != 17LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x333 = -1;
	uint64_t x334 = 2201850LLU;
	uint8_t x336 = 63U;
	volatile uint64_t t68 = 3354596LLU;

	t68 = ((x333|(x334+x335))/x336);

	if (t68 != 292805461487453200LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x337 = 18U;
	uint32_t x338 = 86U;
	int32_t x339 = -387429358;
	static uint32_t t69 = 497U;

	t69 = ((x337|(x338+x339))/x340);

	if (t69 != 0U) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x345 = INT8_MAX;
	static int32_t x348 = INT32_MIN;
	volatile uint64_t t70 = 25331643566229LLU;

	t70 = ((x345|(x346+x347))/x348);

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x357 = INT64_MIN;
	int8_t x358 = -1;
	int8_t x359 = INT8_MIN;
	uint32_t x360 = UINT32_MAX;
	int64_t t71 = 2312668869727076LL;

	t71 = ((x357|(x358+x359))/x360);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x362 = 11U;
	int32_t x363 = 6463;
	int64_t t72 = 125LL;

	t72 = ((x361|(x362+x363))/x364);

	if (t72 != 79LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x366 = -883;
	uint16_t x367 = UINT16_MAX;
	static int16_t x368 = -1901;
	volatile int32_t t73 = 105142320;

	t73 = ((x365|(x366+x367))/x368);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x373 = INT16_MIN;
	int8_t x374 = INT8_MAX;
	int32_t x375 = -1;
	int16_t x376 = -1768;
	int32_t t74 = -834;

	t74 = ((x373|(x374+x375))/x376);

	if (t74 != 18) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x377 = UINT64_MAX;
	int8_t x378 = 10;
	volatile uint64_t t75 = 15LLU;

	t75 = ((x377|(x378+x379))/x380);

	if (t75 != 2254441186550LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x381 = UINT8_MAX;
	int8_t x383 = 3;
	int64_t x384 = 28440485549LL;
	volatile int64_t t76 = 7LL;

	t76 = ((x381|(x382+x383))/x384);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x386 = 47814414U;
	static volatile uint32_t x387 = UINT32_MAX;
	uint64_t x388 = 11801609598LLU;
	volatile uint64_t t77 = 169674654LLU;

	t77 = ((x385|(x386+x387))/x388);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x389 = INT8_MIN;
	volatile int8_t x390 = INT8_MIN;
	volatile uint32_t x391 = 4821029U;
	static int8_t x392 = INT8_MIN;
	volatile uint32_t t78 = 27748883U;

	t78 = ((x389|(x390+x391))/x392);

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x393 = INT8_MIN;
	int64_t x394 = -443153431828LL;
	uint32_t x395 = UINT32_MAX;
	int8_t x396 = INT8_MIN;
	static volatile int64_t t79 = -252LL;

	t79 = ((x393|(x394+x395))/x396);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x401 = INT32_MIN;
	static int8_t x403 = INT8_MAX;
	static uint32_t x404 = UINT32_MAX;
	static volatile uint32_t t80 = 7599U;

	t80 = ((x401|(x402+x403))/x404);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x409 = UINT8_MAX;
	uint64_t x412 = 263014539041093LLU;
	uint64_t t81 = 57851697901765LLU;

	t81 = ((x409|(x410+x411))/x412);

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x413 = INT64_MAX;
	static int64_t x414 = -1LL;
	static volatile int8_t x416 = -1;
	int64_t t82 = 3961624055LL;

	t82 = ((x413|(x414+x415))/x416);

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x418 = 21U;
	int16_t x419 = 141;
	static int32_t x420 = 12039497;

	t83 = ((x417|(x418+x419))/x420);

	if (t83 != 178) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x433 = INT16_MAX;
	int16_t x434 = INT16_MIN;
	uint8_t x435 = 49U;
	uint16_t x436 = 57U;
	int32_t t84 = -8072584;

	t84 = ((x433|(x434+x435))/x436);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x437 = INT8_MIN;
	uint8_t x438 = 3U;
	volatile uint8_t x439 = 3U;

	t85 = ((x437|(x438+x439))/x440);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x441 = -1LL;
	int16_t x442 = INT16_MAX;
	static uint64_t t86 = 14980700593LLU;

	t86 = ((x441|(x442+x443))/x444);

	if (t86 != 562967133814800LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x445 = 90U;
	static uint8_t x447 = UINT8_MAX;
	int64_t x448 = INT64_MIN;
	uint64_t t87 = 7LLU;

	t87 = ((x445|(x446+x447))/x448);

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x453 = INT8_MAX;
	uint16_t x454 = UINT16_MAX;
	static int16_t x455 = INT16_MIN;
	int64_t x456 = INT64_MIN;
	int64_t t88 = -970315667384954LL;

	t88 = ((x453|(x454+x455))/x456);

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x457 = -48;
	int64_t x458 = -391831006LL;
	volatile int64_t x459 = 28169882403LL;
	static volatile int16_t x460 = INT16_MIN;

	t89 = ((x457|(x458+x459))/x460);

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x466 = 2U;
	uint64_t x467 = 515745910737LLU;
	int64_t x468 = -1LL;
	uint64_t t90 = 16276531LLU;

	t90 = ((x465|(x466+x467))/x468);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x477 = 1027776828LLU;
	int8_t x478 = -1;
	int32_t x479 = 61079;
	static int32_t x480 = -98104151;
	uint64_t t91 = 3216221864369LLU;

	t91 = ((x477|(x478+x479))/x480);

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x482 = INT8_MIN;
	int16_t x483 = 2;
	uint16_t x484 = 14U;
	volatile int32_t t92 = -3432679;

	t92 = ((x481|(x482+x483))/x484);

	if (t92 != -9) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x487 = 632U;

	t93 = ((x485|(x486+x487))/x488);

	if (t93 != -24116669552082LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x493 = UINT32_MAX;
	volatile int64_t x494 = 1057553494209888LL;
	int16_t x496 = INT16_MAX;

	t94 = ((x493|(x494+x495))/x496);

	if (t94 != 32274974586LL) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x498 = INT16_MAX;
	uint64_t x499 = UINT64_MAX;
	int32_t x500 = -1;
	uint64_t t95 = 1959045LLU;

	t95 = ((x497|(x498+x499))/x500);

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x505 = INT8_MIN;
	uint64_t x506 = 791LLU;
	volatile int8_t x508 = INT8_MAX;

	t96 = ((x505|(x506+x507))/x508);

	if (t96 != 145249953336295681LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x509 = INT64_MIN;
	int8_t x510 = 33;
	volatile uint32_t x511 = 71U;
	int64_t x512 = 2LL;
	int64_t t97 = -51374534LL;

	t97 = ((x509|(x510+x511))/x512);

	if (t97 != -4611686018427387852LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x513 = 6U;
	uint16_t x515 = 44U;
	static uint64_t t98 = 519391694LLU;

	t98 = ((x513|(x514+x515))/x516);

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x517 = 3775081;
	int16_t x518 = -1;
	static uint64_t x519 = 29LLU;
	uint16_t x520 = UINT16_MAX;
	uint64_t t99 = 15LLU;

	t99 = ((x517|(x518+x519))/x520);

	if (t99 != 57LLU) { NG(); } else { ; }
	
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

