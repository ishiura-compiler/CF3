#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 95U;
int64_t x5 = -1LL;
int32_t x9 = -1607652;
static int64_t x14 = -106711287LL;
int8_t x17 = -1;
static int16_t x20 = 1;
int16_t x23 = -1;
volatile int16_t x25 = -48;
static uint32_t x27 = UINT32_MAX;
int8_t x28 = 0;
int64_t t7 = -1782224438541LL;
int32_t x36 = INT32_MAX;
static volatile uint32_t x43 = 1960433120U;
int8_t x46 = INT8_MIN;
static int16_t x47 = -1;
static volatile int64_t t11 = -10001895642951393LL;
static volatile uint8_t x50 = 124U;
uint8_t x51 = UINT8_MAX;
uint16_t x53 = 1U;
static volatile uint64_t x56 = UINT64_MAX;
int64_t t14 = 1092131176553LL;
int64_t x61 = INT64_MAX;
static int64_t t16 = -382312LL;
volatile int64_t x77 = -1705LL;
static volatile int64_t x78 = -1LL;
uint16_t x79 = 4841U;
uint64_t x89 = 87266940672LLU;
uint8_t x91 = 21U;
uint32_t x93 = UINT32_MAX;
uint16_t x94 = UINT16_MAX;
static uint16_t x102 = 613U;
static uint64_t x106 = 852381282633LLU;
volatile uint64_t t23 = 1868963890749LLU;
volatile uint16_t x113 = 83U;
int16_t x118 = -11;
int16_t x120 = INT16_MAX;
int16_t x126 = INT16_MIN;
uint8_t x127 = 2U;
int64_t t27 = -1000LL;
volatile int64_t x136 = -5LL;
uint64_t x140 = 581495872513LLU;
int8_t x145 = 5;
static int64_t x147 = -1LL;
volatile uint32_t x163 = UINT32_MAX;
uint32_t t33 = 36674929U;
volatile int64_t x165 = 50328LL;
int64_t x168 = -1LL;
static uint64_t x169 = 7691545247083251451LLU;
static int16_t x172 = INT16_MIN;
int16_t x174 = INT16_MIN;
int8_t x183 = -1;
int8_t x195 = -24;
int8_t x203 = -2;
static volatile int64_t t42 = 67276LL;
volatile int16_t x211 = INT16_MIN;
volatile int64_t t43 = -1931980523533484217LL;
static uint64_t x225 = UINT64_MAX;
static uint8_t x227 = UINT8_MAX;
uint32_t x233 = UINT32_MAX;
static int64_t x237 = -50357922LL;
int16_t x244 = 1;
int64_t x255 = -1LL;
uint64_t t49 = 276067012901904LLU;
volatile uint64_t t51 = 5335LLU;
static uint16_t x270 = 21842U;
uint16_t x280 = 9U;
uint64_t x285 = 6980567LLU;
int8_t x289 = INT8_MIN;
int64_t x291 = INT64_MAX;
int8_t x302 = 0;
int8_t x303 = -1;
uint64_t x305 = UINT64_MAX;
volatile int32_t x310 = 286067367;
int8_t x311 = INT8_MIN;
int32_t t61 = -4725450;
static volatile uint64_t t62 = 603930231136171584LLU;
int64_t x337 = INT64_MAX;
int32_t x338 = 301201981;
volatile int64_t t67 = 12LL;
volatile uint64_t x370 = 3746889059LLU;
static int8_t x372 = INT8_MIN;
int32_t x373 = INT32_MAX;
volatile int8_t x374 = INT8_MIN;
volatile int8_t x383 = INT8_MIN;
uint32_t t74 = 431U;
int32_t x385 = 234;
volatile uint64_t t75 = 361570841610LLU;
int64_t x399 = 104068724653LL;
volatile int64_t t77 = -3138725749223450LL;
uint16_t x405 = 3U;
static int32_t x407 = -1;
uint8_t x410 = 78U;
static volatile int8_t x412 = INT8_MAX;
volatile int32_t t79 = 516542;
static uint32_t t80 = 1587873279U;
int32_t x433 = -1;
volatile uint32_t t81 = 7U;
uint64_t x444 = UINT64_MAX;
static uint64_t t83 = 207467958783449816LLU;
int64_t x446 = -1LL;
volatile uint8_t x450 = 1U;
volatile uint64_t t86 = 0LLU;
int8_t x458 = -1;
volatile int8_t x462 = -4;
uint64_t x464 = UINT64_MAX;
int64_t t89 = -1483754937732883LL;
static volatile int16_t x472 = INT16_MAX;
volatile uint64_t t90 = 3LLU;
static uint64_t x477 = UINT64_MAX;
static uint64_t x485 = 152LLU;
uint32_t x491 = UINT32_MAX;
volatile uint32_t t95 = 10U;
static int64_t x494 = -1LL;
static uint64_t x499 = UINT64_MAX;
int16_t x500 = 9586;
static uint64_t t97 = 646188404801202LLU;
int32_t x501 = -1;
static volatile uint8_t x502 = 19U;
volatile uint8_t x503 = 22U;
uint64_t x504 = 1760773398LLU;
static volatile int16_t x505 = INT16_MIN;


void f0(void) {
	int16_t x2 = -7029;
	static volatile int64_t x3 = INT64_MAX;
	static int64_t x4 = INT64_MIN;
	static int64_t t0 = -71LL;

	t0 = ((x1*(x2|x3))-x4);

	if (t0 != 9223372036854775713LL) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x6 = INT32_MIN;
	int64_t x7 = INT64_MIN;
	volatile int8_t x8 = -24;
	volatile int64_t t1 = -12706584614746818LL;

	t1 = ((x5*(x6|x7))-x8);

	if (t1 != 2147483672LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 103123692853LLU;
	int32_t x11 = INT32_MAX;
	uint8_t x12 = 126U;
	static volatile uint64_t t2 = 833147374047462485LLU;

	t2 = ((x9*(x10|x11))-x12);

	if (t2 != 18277576161009108838LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int8_t x13 = INT8_MIN;
	volatile uint8_t x15 = 41U;
	int16_t x16 = -13;
	int64_t t3 = 40452932804072LL;

	t3 = ((x13*(x14|x15))-x16);

	if (t3 != 13659040653LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x18 = INT32_MAX;
	int32_t x19 = INT32_MIN;
	volatile int32_t t4 = 18618;

	t4 = ((x17*(x18|x19))-x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	static int16_t x22 = INT16_MIN;
	int16_t x24 = 26;
	static int64_t t5 = 4022446605LL;

	t5 = ((x21*(x22|x23))-x24);

	if (t5 != -25LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x26 = 0U;
	static uint32_t t6 = 2U;

	t6 = ((x25*(x26|x27))-x28);

	if (t6 != 48U) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -801;
	int32_t x30 = -11325;
	volatile int64_t x31 = -99757591LL;
	int16_t x32 = INT16_MAX;

	t7 = ((x29*(x30|x31))-x32);

	if (t7 != 9006518LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 0U;
	int16_t x34 = 122;
	static int8_t x35 = INT8_MIN;
	static volatile int32_t t8 = 451789139;

	t8 = ((x33*(x34|x35))-x36);

	if (t8 != -2147483647) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x37 = INT16_MIN;
	int8_t x38 = INT8_MAX;
	int16_t x39 = INT16_MAX;
	static int32_t x40 = 322503;
	static volatile int32_t t9 = 385282094;

	t9 = ((x37*(x38|x39))-x40);

	if (t9 != -1074031559) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	static int8_t x42 = 7;
	volatile uint16_t x44 = UINT16_MAX;
	uint32_t t10 = 163236288U;

	t10 = ((x41*(x42|x43))-x44);

	if (t10 != 2334468634U) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -1LL;
	static uint8_t x48 = UINT8_MAX;

	t11 = ((x45*(x46|x47))-x48);

	if (t11 != -254LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	static volatile uint8_t x52 = 1U;
	int64_t t12 = -1585336877598903LL;

	t12 = ((x49*(x50|x51))-x52);

	if (t12 != -256LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x54 = 2218;
	static int16_t x55 = INT16_MIN;
	uint64_t t13 = 130061622202LLU;

	t13 = ((x53*(x54|x55))-x56);

	if (t13 != 18446744073709521067LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x57 = -1;
	uint16_t x58 = 20976U;
	int8_t x59 = 0;
	static volatile int64_t x60 = INT64_MIN;

	t14 = ((x57*(x58|x59))-x60);

	if (t14 != 9223372036854754832LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x62 = 1643392LLU;
	uint32_t x63 = 3646U;
	int64_t x64 = -1LL;
	volatile uint64_t t15 = 2072976940547335999LLU;

	t15 = ((x61*(x62|x63))-x64);

	if (t15 != 18446744073707905091LLU) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x69 = 579428U;
	uint32_t x70 = 4670844U;
	static uint32_t x71 = 437866367U;
	int64_t x72 = -1LL;

	t16 = ((x69*(x70|x71))-x72);

	if (t16 != 3572938397LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x80 = 1847U;
	static volatile int64_t t17 = 340266618LL;

	t17 = ((x77*(x78|x79))-x80);

	if (t17 != -142LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x81 = 3878U;
	int64_t x82 = -34LL;
	int32_t x83 = INT32_MIN;
	uint32_t x84 = 166852998U;
	int64_t t18 = -15282LL;

	t18 = ((x81*(x82|x83))-x84);

	if (t18 != -166984850LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x90 = -1;
	volatile int64_t x92 = -43180717504LL;
	uint64_t t19 = 57984629218587471LLU;

	t19 = ((x89*(x90|x91))-x92);

	if (t19 != 18446744029623328448LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x95 = -1;
	int16_t x96 = -12975;
	volatile uint32_t t20 = 603777838U;

	t20 = ((x93*(x94|x95))-x96);

	if (t20 != 12976U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x97 = INT16_MIN;
	int8_t x98 = 0;
	static int64_t x99 = 2766840633LL;
	volatile uint16_t x100 = 1U;
	volatile int64_t t21 = 2LL;

	t21 = ((x97*(x98|x99))-x100);

	if (t21 != -90663833862145LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x101 = -7;
	int64_t x103 = 159833LL;
	volatile uint64_t x104 = 60243290639193157LLU;
	uint64_t t22 = 56105489969LLU;

	t22 = ((x101*(x102|x103))-x104);

	if (t22 != 18386500783069235792LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x105 = 2416U;
	volatile uint32_t x107 = 25U;
	int8_t x108 = INT8_MIN;

	t23 = ((x105*(x106|x107))-x108);

	if (t23 != 2059353178880112LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x109 = -980901;
	uint32_t x110 = 2745446U;
	int16_t x111 = -1;
	static uint64_t x112 = 4387319438856391LLU;
	uint64_t t24 = 3715LLU;

	t24 = ((x109*(x110|x111))-x112);

	if (t24 != 18442356754271676126LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x114 = INT8_MAX;
	static uint16_t x115 = UINT16_MAX;
	int8_t x116 = INT8_MIN;
	int32_t t25 = -346;

	t25 = ((x113*(x114|x115))-x116);

	if (t25 != 5439533) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = -1LL;
	static uint64_t x119 = 2812LLU;
	static volatile uint64_t t26 = 207177LLU;

	t26 = ((x117*(x118|x119))-x120);

	if (t26 != 18446744073709518852LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x125 = INT16_MAX;
	volatile int64_t x128 = -986LL;

	t27 = ((x125*(x126|x127))-x128);

	if (t27 != -1073642536LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x133 = INT8_MIN;
	static volatile int32_t x134 = -5306;
	static int32_t x135 = INT32_MIN;
	volatile int64_t t28 = 374LL;

	t28 = ((x133*(x134|x135))-x136);

	if (t28 != 679173LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x137 = INT32_MAX;
	int64_t x138 = -405882565LL;
	static int8_t x139 = -14;
	static volatile uint64_t t29 = 0LLU;

	t29 = ((x137*(x138|x139))-x140);

	if (t29 != 18446743481476260868LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x146 = INT32_MIN;
	int64_t x148 = -2158911804611547228LL;
	int64_t t30 = -36976594LL;

	t30 = ((x145*(x146|x147))-x148);

	if (t30 != 2158911804611547223LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x153 = 6410485539LLU;
	volatile uint64_t x154 = 14925793778219LLU;
	int32_t x155 = 3;
	int64_t x156 = INT64_MIN;
	uint64_t t31 = 7951806977080641569LLU;

	t31 = ((x153*(x154|x155))-x156);

	if (t31 != 7547035074483218657LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x157 = UINT32_MAX;
	volatile uint64_t x158 = 3766975991164354075LLU;
	int16_t x159 = INT16_MAX;
	int64_t x160 = INT64_MIN;
	uint64_t t32 = 6053305231461074LLU;

	t32 = ((x157*(x158|x159))-x160);

	if (t32 != 17473970172056895489LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x161 = 99U;
	uint32_t x162 = 3U;
	static int32_t x164 = INT32_MIN;

	t33 = ((x161*(x162|x163))-x164);

	if (t33 != 2147483549U) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x166 = INT8_MAX;
	int16_t x167 = INT16_MAX;
	static volatile int64_t t34 = 305137LL;

	t34 = ((x165*(x166|x167))-x168);

	if (t34 != 1649097577LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x170 = INT32_MAX;
	uint8_t x171 = 9U;
	volatile uint64_t t35 = 264LLU;

	t35 = ((x169*(x170|x171))-x172);

	if (t35 != 16024097568854292741LLU) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x173 = -7;
	int32_t x175 = INT32_MIN;
	volatile uint64_t x176 = 48461442590356336LLU;
	uint64_t t36 = 14310LLU;

	t36 = ((x173*(x174|x175))-x176);

	if (t36 != 18398282631119424656LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x181 = -1;
	int8_t x182 = INT8_MIN;
	int64_t x184 = 259283016315792LL;
	static int64_t t37 = -30418771932LL;

	t37 = ((x181*(x182|x183))-x184);

	if (t37 != -259283016315791LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x185 = -1;
	static uint64_t x186 = 669667959703270LLU;
	int32_t x187 = 61841184;
	static volatile int64_t x188 = 446460335721LL;
	static volatile uint64_t t38 = 762677529489LLU;

	t38 = ((x185*(x186|x187))-x188);

	if (t38 != 18446073959236782513LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x189 = 18303LLU;
	int32_t x190 = 559497873;
	int32_t x191 = 37;
	int8_t x192 = -1;
	uint64_t t39 = 1315767251144361LLU;

	t39 = ((x189*(x190|x191))-x192);

	if (t39 != 10240490228428LLU) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x193 = INT8_MAX;
	volatile uint8_t x194 = UINT8_MAX;
	int16_t x196 = INT16_MIN;
	int32_t t40 = 463582;

	t40 = ((x193*(x194|x195))-x196);

	if (t40 != 32641) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x201 = INT32_MIN;
	int64_t x202 = -1LL;
	volatile int32_t x204 = -1;
	static volatile int64_t t41 = -51877979302746842LL;

	t41 = ((x201*(x202|x203))-x204);

	if (t41 != 2147483649LL) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x205 = INT16_MAX;
	int32_t x206 = INT32_MAX;
	int64_t x207 = -1LL;
	int32_t x208 = INT32_MIN;

	t42 = ((x205*(x206|x207))-x208);

	if (t42 != 2147450881LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x209 = 17862U;
	int64_t x210 = -1138662817884809128LL;
	int8_t x212 = -10;

	t43 = ((x209*(x210|x211))-x212);

	if (t43 != -181335014LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x226 = -1;
	uint8_t x228 = UINT8_MAX;
	uint64_t t44 = 7896674185230LLU;

	t44 = ((x225*(x226|x227))-x228);

	if (t44 != 18446744073709551362LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x234 = INT64_MIN;
	int64_t x235 = -1LL;
	uint8_t x236 = UINT8_MAX;
	int64_t t45 = 6651LL;

	t45 = ((x233*(x234|x235))-x236);

	if (t45 != -4294967550LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x238 = -2;
	int32_t x239 = -126;
	int8_t x240 = -1;
	volatile int64_t t46 = 33790205829LL;

	t46 = ((x237*(x238|x239))-x240);

	if (t46 != 100715845LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x241 = UINT8_MAX;
	static int16_t x242 = INT16_MIN;
	int8_t x243 = -1;
	volatile int32_t t47 = -91;

	t47 = ((x241*(x242|x243))-x244);

	if (t47 != -256) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x245 = INT32_MIN;
	int64_t x246 = -833LL;
	volatile uint8_t x247 = UINT8_MAX;
	int32_t x248 = 1984553;
	int64_t t48 = 181478210LL;

	t48 = ((x245*(x246|x247))-x248);

	if (t48 != 1651412940759LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x253 = 380699646U;
	uint64_t x254 = 24538254442499473LLU;
	uint16_t x256 = 3U;

	t49 = ((x253*(x254|x255))-x256);

	if (t49 != 18446744073328851967LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x261 = 1523U;
	int64_t x262 = -1LL;
	int32_t x263 = -1;
	int64_t x264 = -1LL;
	static int64_t t50 = 101030566728660LL;

	t50 = ((x261*(x262|x263))-x264);

	if (t50 != -1522LL) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x265 = -1;
	uint64_t x266 = UINT64_MAX;
	int8_t x267 = 2;
	volatile int32_t x268 = INT32_MIN;

	t51 = ((x265*(x266|x267))-x268);

	if (t51 != 2147483649LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint32_t x269 = 56U;
	static int8_t x271 = 3;
	uint8_t x272 = 0U;
	uint32_t t52 = 14U;

	t52 = ((x269*(x270|x271))-x272);

	if (t52 != 1223208U) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x273 = UINT64_MAX;
	uint32_t x274 = 7U;
	int16_t x275 = 0;
	uint64_t x276 = 40894127LLU;
	uint64_t t53 = 11926LLU;

	t53 = ((x273*(x274|x275))-x276);

	if (t53 != 18446744073668657482LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x277 = -1LL;
	int8_t x278 = -3;
	int32_t x279 = 6794738;
	static volatile int64_t t54 = -178460170655LL;

	t54 = ((x277*(x278|x279))-x280);

	if (t54 != -8LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x286 = 0;
	static uint8_t x287 = 52U;
	int64_t x288 = -1LL;
	uint64_t t55 = 62121106LLU;

	t55 = ((x285*(x286|x287))-x288);

	if (t55 != 362989485LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x290 = INT32_MIN;
	volatile int32_t x292 = INT32_MAX;
	static volatile int64_t t56 = -273043243865312LL;

	t56 = ((x289*(x290|x291))-x292);

	if (t56 != -2147483519LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x293 = UINT64_MAX;
	volatile uint8_t x294 = 48U;
	int8_t x295 = -1;
	uint8_t x296 = 13U;
	static uint64_t t57 = 234804260409321022LLU;

	t57 = ((x293*(x294|x295))-x296);

	if (t57 != 18446744073709551604LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static uint32_t x297 = 20U;
	volatile int8_t x298 = -1;
	static int16_t x299 = INT16_MAX;
	uint64_t x300 = 125746440811122LLU;
	volatile uint64_t t58 = 279LLU;

	t58 = ((x297*(x298|x299))-x300);

	if (t58 != 18446618331563707770LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x301 = INT32_MAX;
	int16_t x304 = INT16_MIN;
	int32_t t59 = 430;

	t59 = ((x301*(x302|x303))-x304);

	if (t59 != -2147450879) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x306 = INT64_MAX;
	static int32_t x307 = INT32_MAX;
	static int8_t x308 = -4;
	volatile uint64_t t60 = 8154LLU;

	t60 = ((x305*(x306|x307))-x308);

	if (t60 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x309 = INT8_MAX;
	int16_t x312 = -1;

	t61 = ((x309*(x310|x311))-x312);

	if (t61 != -11302) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x313 = -8;
	int8_t x314 = INT8_MIN;
	uint16_t x315 = 1705U;
	static uint64_t x316 = UINT64_MAX;

	t62 = ((x313*(x314|x315))-x316);

	if (t62 != 697LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x317 = UINT32_MAX;
	int16_t x318 = INT16_MAX;
	volatile int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MIN;
	uint32_t t63 = 64880U;

	t63 = ((x317*(x318|x319))-x320);

	if (t63 != 2147483649U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x321 = UINT32_MAX;
	uint64_t x322 = 116962948LLU;
	int16_t x323 = 0;
	int64_t x324 = -7700LL;
	volatile uint64_t t64 = 106785LLU;

	t64 = ((x321*(x322|x323))-x324);

	if (t64 != 502352036386793360LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x325 = 11449U;
	static int16_t x326 = -1;
	int8_t x327 = INT8_MAX;
	volatile uint32_t x328 = 1452U;
	uint32_t t65 = 372544184U;

	t65 = ((x325*(x326|x327))-x328);

	if (t65 != 4294954395U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x329 = -1;
	volatile int32_t x330 = -1;
	uint8_t x331 = 0U;
	static uint32_t x332 = 7954334U;
	uint32_t t66 = 3411454U;

	t66 = ((x329*(x330|x331))-x332);

	if (t66 != 4287012963U) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x339 = -1LL;
	static volatile int8_t x340 = -1;

	t67 = ((x337*(x338|x339))-x340);

	if (t67 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x349 = 52U;
	static int64_t x350 = -1LL;
	static uint64_t x351 = UINT64_MAX;
	static int8_t x352 = INT8_MIN;
	uint64_t t68 = 5748448LLU;

	t68 = ((x349*(x350|x351))-x352);

	if (t68 != 76LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x353 = UINT8_MAX;
	static volatile uint32_t x354 = 965904375U;
	int32_t x355 = -1;
	int64_t x356 = -1LL;
	int64_t t69 = 1LL;

	t69 = ((x353*(x354|x355))-x356);

	if (t69 != 4294967042LL) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x365 = 2LL;
	static int32_t x366 = -1;
	int16_t x367 = INT16_MAX;
	int8_t x368 = 42;
	int64_t t70 = -771LL;

	t70 = ((x365*(x366|x367))-x368);

	if (t70 != -44LL) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x369 = 135U;
	uint16_t x371 = UINT16_MAX;
	volatile uint64_t t71 = 1LLU;

	t71 = ((x369*(x370|x371))-x372);

	if (t71 != 505830113273LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x375 = -1;
	static volatile int16_t x376 = INT16_MIN;
	volatile int32_t t72 = 1;

	t72 = ((x373*(x374|x375))-x376);

	if (t72 != -2147450879) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x377 = -1;
	int64_t x378 = INT64_MAX;
	int64_t x379 = INT64_MIN;
	uint64_t x380 = 1723684655235LLU;
	volatile uint64_t t73 = 2283495768750730LLU;

	t73 = ((x377*(x378|x379))-x380);

	if (t73 != 18446742350024896382LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x381 = 1984777470U;
	static volatile uint16_t x382 = 52U;
	int32_t x384 = INT32_MIN;

	t74 = ((x381*(x382|x383))-x384);

	if (t74 != 1628251288U) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x386 = INT16_MIN;
	uint64_t x387 = UINT64_MAX;
	uint64_t x388 = 95259570LLU;

	t75 = ((x385*(x386|x387))-x388);

	if (t75 != 18446744073614291812LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x393 = INT32_MIN;
	static uint16_t x394 = 0U;
	uint8_t x395 = 1U;
	int32_t x396 = -1;
	volatile int32_t t76 = -404023;

	t76 = ((x393*(x394|x395))-x396);

	if (t76 != -2147483647) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x397 = 0;
	int8_t x398 = INT8_MAX;
	int16_t x400 = -1;

	t77 = ((x397*(x398|x399))-x400);

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x406 = 386;
	int8_t x408 = 0;
	volatile int32_t t78 = 2;

	t78 = ((x405*(x406|x407))-x408);

	if (t78 != -3) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x409 = INT8_MAX;
	static int8_t x411 = 15;

	t79 = ((x409*(x410|x411))-x412);

	if (t79 != 9906) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x429 = -1;
	uint32_t x430 = UINT32_MAX;
	volatile int16_t x431 = INT16_MAX;
	uint16_t x432 = 6U;

	t80 = ((x429*(x430|x431))-x432);

	if (t80 != 4294967291U) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x434 = 49653U;
	static int16_t x435 = INT16_MIN;
	static volatile int16_t x436 = 6613;

	t81 = ((x433*(x434|x435))-x436);

	if (t81 != 9270U) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x437 = INT16_MIN;
	int32_t x438 = -1;
	static volatile uint16_t x439 = 0U;
	int16_t x440 = INT16_MAX;
	static volatile int32_t t82 = 21;

	t82 = ((x437*(x438|x439))-x440);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x441 = 1U;
	volatile int32_t x442 = -97;
	static int32_t x443 = INT32_MAX;

	t83 = ((x441*(x442|x443))-x444);

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x445 = 5U;
	int64_t x447 = -1LL;
	int16_t x448 = INT16_MIN;
	int64_t t84 = -5272LL;

	t84 = ((x445*(x446|x447))-x448);

	if (t84 != 32763LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x449 = INT8_MAX;
	static int16_t x451 = INT16_MIN;
	int32_t x452 = INT32_MIN;
	int32_t t85 = 591;

	t85 = ((x449*(x450|x451))-x452);

	if (t85 != 2143322239) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x453 = 10;
	static uint64_t x454 = 22429282106LLU;
	volatile int32_t x455 = -181943509;
	uint16_t x456 = 1U;

	t86 = ((x453*(x454|x455))-x456);

	if (t86 != 18446744073358235725LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x457 = UINT64_MAX;
	uint32_t x459 = UINT32_MAX;
	static volatile int8_t x460 = -1;
	volatile uint64_t t87 = 517229477252LLU;

	t87 = ((x457*(x458|x459))-x460);

	if (t87 != 18446744069414584322LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x461 = 10916U;
	int64_t x463 = -1LL;
	uint64_t t88 = 138546252739519LLU;

	t88 = ((x461*(x462|x463))-x464);

	if (t88 != 18446744073709540701LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x465 = -13059599070LL;
	uint8_t x466 = UINT8_MAX;
	volatile int64_t x467 = -1LL;
	static int16_t x468 = 1220;

	t89 = ((x465*(x466|x467))-x468);

	if (t89 != 13059597850LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x469 = 1396107705495LLU;
	uint8_t x470 = 12U;
	int8_t x471 = INT8_MIN;

	t90 = ((x469*(x470|x471))-x472);

	if (t90 != 18446582125215681429LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x473 = INT32_MAX;
	int16_t x474 = INT16_MIN;
	int64_t x475 = INT64_MAX;
	static uint16_t x476 = 10U;
	int64_t t91 = 130453302686825472LL;

	t91 = ((x473*(x474|x475))-x476);

	if (t91 != -2147483657LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x478 = UINT16_MAX;
	volatile uint8_t x479 = 1U;
	int8_t x480 = 7;
	static uint64_t t92 = 12214178785346628LLU;

	t92 = ((x477*(x478|x479))-x480);

	if (t92 != 18446744073709486074LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x481 = -1;
	int32_t x482 = 511;
	volatile int16_t x483 = INT16_MAX;
	volatile int8_t x484 = -1;
	volatile int32_t t93 = -17264501;

	t93 = ((x481*(x482|x483))-x484);

	if (t93 != -32766) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x486 = INT32_MIN;
	int32_t x487 = INT32_MIN;
	uint64_t x488 = UINT64_MAX;
	static uint64_t t94 = 5096985700656LLU;

	t94 = ((x485*(x486|x487))-x488);

	if (t94 != 18446743747292037121LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x489 = 23186U;
	int8_t x490 = INT8_MIN;
	int16_t x492 = INT16_MIN;

	t95 = ((x489*(x490|x491))-x492);

	if (t95 != 9582U) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x493 = INT16_MIN;
	int8_t x495 = -27;
	uint8_t x496 = 20U;
	int64_t t96 = 2LL;

	t96 = ((x493*(x494|x495))-x496);

	if (t96 != 32748LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x497 = INT16_MIN;
	static volatile int8_t x498 = INT8_MAX;

	t97 = ((x497*(x498|x499))-x500);

	if (t97 != 23182LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t t98 = 4084797124572LLU;

	t98 = ((x501*(x502|x503))-x504);

	if (t98 != 18446744071948778195LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x506 = INT64_MIN;
	volatile int8_t x507 = INT8_MIN;
	uint8_t x508 = UINT8_MAX;
	volatile int64_t t99 = 116216558770LL;

	t99 = ((x505*(x506|x507))-x508);

	if (t99 != 4194049LL) { NG(); } else { ; }
	
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

