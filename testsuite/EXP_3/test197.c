#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x22 = UINT16_MAX;
static uint64_t x23 = 22LLU;
uint32_t x33 = 21394311U;
uint64_t x36 = 598LLU;
volatile int8_t x37 = -1;
int32_t t5 = 3;
static int8_t x47 = -29;
int32_t x48 = -52607;
volatile int8_t x71 = INT8_MIN;
int64_t x75 = -1LL;
volatile uint16_t x76 = UINT16_MAX;
int8_t x81 = -3;
uint64_t x84 = 178733LLU;
int64_t x85 = 479998533019570171LL;
int8_t x86 = -1;
int16_t x99 = INT16_MIN;
uint32_t t16 = 66018U;
static volatile int64_t x102 = 0LL;
int32_t x127 = 6;
static volatile int16_t x130 = -1;
static int64_t x136 = -1LL;
volatile int64_t t21 = -242LL;
uint16_t x140 = UINT16_MAX;
int8_t x146 = 0;
volatile int64_t t23 = 35112553554065126LL;
volatile uint64_t t25 = 1LLU;
int16_t x173 = INT16_MAX;
volatile uint8_t x174 = 48U;
int16_t x189 = -1;
uint8_t x194 = UINT8_MAX;
int16_t x198 = 26;
volatile int32_t t31 = 27208292;
static int32_t x207 = INT32_MIN;
static int32_t t33 = -213;
volatile uint16_t x223 = UINT16_MAX;
static uint32_t t37 = 0U;
int8_t x241 = INT8_MIN;
volatile int8_t x242 = -1;
volatile int64_t x244 = INT64_MAX;
int8_t x250 = INT8_MIN;
int8_t x252 = 11;
static int16_t x256 = 6;
uint8_t x265 = UINT8_MAX;
uint8_t x266 = 2U;
int64_t x274 = 1604LL;
uint64_t x275 = 6251317031046425LLU;
static int64_t x285 = -67652084861LL;
static volatile int8_t x288 = -1;
int64_t x308 = INT64_MIN;
volatile int32_t x314 = -1;
uint32_t x325 = 13U;
int8_t x327 = INT8_MIN;
volatile uint64_t t49 = 1325LLU;
volatile uint8_t x341 = UINT8_MAX;
int64_t x357 = 14478923317401657LL;
uint32_t x359 = UINT32_MAX;
uint64_t t53 = 0LLU;
int64_t x372 = -53932821040602LL;
int8_t x373 = -1;
volatile uint32_t t56 = UINT32_MAX;
static uint32_t x377 = 7158792U;
int16_t x386 = -1;
volatile uint32_t x389 = 1U;
static volatile int64_t t59 = -446405LL;
volatile int16_t x400 = -918;
int8_t x401 = INT8_MIN;
volatile int32_t t61 = 259849823;
int16_t x407 = INT16_MAX;
uint32_t x408 = UINT32_MAX;
static volatile int32_t x414 = -1;
int16_t x421 = -1;
int8_t x432 = -7;
uint8_t x449 = 6U;
volatile int32_t x453 = 56906;
static int16_t x461 = -334;
uint32_t t71 = 8U;
volatile int32_t x465 = INT32_MIN;
volatile int8_t x469 = -1;
int16_t x470 = -1;
int8_t x486 = 60;
static int16_t x496 = -2;
volatile uint8_t x498 = 36U;
uint64_t x503 = 1006520LLU;
uint64_t t79 = 25LLU;
static uint32_t x509 = UINT32_MAX;
static volatile int8_t x516 = -13;
int64_t t83 = 205240920LL;
int32_t x535 = -30369;
volatile int32_t x536 = -32671;
int8_t x537 = -1;
int16_t x549 = -1;
int64_t x557 = 98149LL;
uint64_t x568 = UINT64_MAX;
int64_t t91 = -4339075LL;
int64_t x589 = -1LL;
static volatile int32_t x590 = 223;
volatile int16_t x592 = INT16_MAX;
uint8_t x600 = 2U;
int16_t x605 = INT16_MIN;
static uint16_t x607 = 3197U;
int8_t x608 = INT8_MIN;
static int16_t x618 = INT16_MAX;
int32_t x622 = INT32_MIN;


void f0(void) {
	volatile int64_t x1 = INT64_MIN;
	uint8_t x2 = 0U;
	static uint16_t x3 = UINT16_MAX;
	static int64_t x4 = -1LL;
	volatile int64_t t0 = 13658442599799LL;

	t0 = ((x1*x2)-(x3-x4));

	if (t0 != -65536LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = -10;
	static uint32_t x10 = 14201U;
	static uint8_t x11 = 14U;
	uint16_t x12 = 1012U;
	volatile uint32_t t1 = 2134U;

	t1 = ((x9*x10)-(x11-x12));

	if (t1 != 4294826284U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x17 = -1;
	uint16_t x18 = 23U;
	uint16_t x19 = 11U;
	static uint8_t x20 = 7U;
	int32_t t2 = -3373100;

	t2 = ((x17*x18)-(x19-x20));

	if (t2 != -27) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x21 = 267957LLU;
	static int8_t x24 = INT8_MIN;
	static uint64_t t3 = 21LLU;

	t3 = ((x21*x22)-(x23-x24));

	if (t3 != 17560561845LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x34 = -1;
	int32_t x35 = -1;
	volatile uint64_t t4 = 295014510582763494LLU;

	t4 = ((x33*x34)-(x35-x36));

	if (t4 != 4273573584LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x38 = UINT16_MAX;
	uint8_t x39 = 19U;
	uint16_t x40 = 71U;

	t5 = ((x37*x38)-(x39-x40));

	if (t5 != -65483) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x45 = 39;
	int8_t x46 = INT8_MIN;
	static int32_t t6 = 827014751;

	t6 = ((x45*x46)-(x47-x48));

	if (t6 != -57570) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x49 = INT8_MIN;
	static int64_t x50 = 302125076177LL;
	uint8_t x51 = UINT8_MAX;
	int64_t x52 = -1LL;
	int64_t t7 = 141905362408302214LL;

	t7 = ((x49*x50)-(x51-x52));

	if (t7 != -38672009750912LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x57 = UINT16_MAX;
	static int8_t x58 = INT8_MIN;
	int32_t x59 = 1972;
	static int16_t x60 = -1;
	static volatile int32_t t8 = 111365;

	t8 = ((x57*x58)-(x59-x60));

	if (t8 != -8390453) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x65 = -1;
	int16_t x66 = 239;
	int16_t x67 = 0;
	int64_t x68 = -1LL;
	volatile int64_t t9 = 468863LL;

	t9 = ((x65*x66)-(x67-x68));

	if (t9 != -240LL) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x69 = UINT16_MAX;
	static int64_t x70 = 136129LL;
	uint32_t x72 = 57397779U;
	volatile int64_t t10 = -4766977546LL;

	t10 = ((x69*x70)-(x71-x72));

	if (t10 != 4683644626LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x73 = 1U;
	int16_t x74 = INT16_MIN;
	int64_t t11 = 6196224915394LL;

	t11 = ((x73*x74)-(x75-x76));

	if (t11 != 32768LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x77 = -2864LL;
	volatile uint64_t x78 = 12192LLU;
	static int32_t x79 = -1;
	uint16_t x80 = 29293U;
	static volatile uint64_t t12 = 70243457835LLU;

	t12 = ((x77*x78)-(x79-x80));

	if (t12 != 18446744073674663022LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x82 = UINT64_MAX;
	int8_t x83 = 1;
	volatile uint64_t t13 = 462353788996126732LLU;

	t13 = ((x81*x82)-(x83-x84));

	if (t13 != 178735LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x87 = 128;
	uint64_t x88 = UINT64_MAX;
	uint64_t t14 = 1011202061554160LLU;

	t14 = ((x85*x86)-(x87-x88));

	if (t14 != 17966745540689981316LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint16_t x89 = 15U;
	volatile int32_t x90 = 9;
	int8_t x91 = INT8_MAX;
	uint64_t x92 = UINT64_MAX;
	uint64_t t15 = 189596LLU;

	t15 = ((x89*x90)-(x91-x92));

	if (t15 != 7LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x97 = -1;
	static int8_t x98 = INT8_MIN;
	static uint32_t x100 = UINT32_MAX;

	t16 = ((x97*x98)-(x99-x100));

	if (t16 != 32895U) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int8_t x101 = -1;
	volatile int64_t x103 = -1LL;
	int16_t x104 = INT16_MIN;
	static int64_t t17 = 2791969642011641366LL;

	t17 = ((x101*x102)-(x103-x104));

	if (t17 != -32767LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x117 = INT32_MIN;
	uint32_t x118 = UINT32_MAX;
	uint32_t x119 = 24U;
	uint32_t x120 = UINT32_MAX;
	volatile uint32_t t18 = 971641U;

	t18 = ((x117*x118)-(x119-x120));

	if (t18 != 2147483623U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x125 = INT32_MAX;
	uint8_t x126 = 0U;
	int16_t x128 = -2205;
	int32_t t19 = 880183;

	t19 = ((x125*x126)-(x127-x128));

	if (t19 != -2211) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x129 = UINT64_MAX;
	uint8_t x131 = UINT8_MAX;
	volatile int32_t x132 = -1804448;
	volatile uint64_t t20 = 13LLU;

	t20 = ((x129*x130)-(x131-x132));

	if (t20 != 18446744073707746914LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x133 = -1;
	static int64_t x134 = -1LL;
	int16_t x135 = INT16_MIN;

	t21 = ((x133*x134)-(x135-x136));

	if (t21 != 32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x137 = 16U;
	int16_t x138 = -1;
	static int16_t x139 = INT16_MIN;
	uint32_t t22 = 172705U;

	t22 = ((x137*x138)-(x139-x140));

	if (t22 != 98287U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x145 = INT64_MIN;
	uint16_t x147 = UINT16_MAX;
	volatile int8_t x148 = INT8_MIN;

	t23 = ((x145*x146)-(x147-x148));

	if (t23 != -65663LL) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int8_t x157 = INT8_MIN;
	volatile int8_t x158 = 1;
	int32_t x159 = -25434;
	static volatile uint64_t x160 = 4719LLU;
	uint64_t t24 = 7LLU;

	t24 = ((x157*x158)-(x159-x160));

	if (t24 != 30025LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x165 = -1;
	volatile uint64_t x166 = UINT64_MAX;
	static int16_t x167 = -6727;
	static int8_t x168 = INT8_MAX;

	t25 = ((x165*x166)-(x167-x168));

	if (t25 != 6855LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x169 = INT16_MIN;
	static volatile uint64_t x170 = 228226253LLU;
	volatile int64_t x171 = INT64_MIN;
	volatile int32_t x172 = INT32_MIN;
	volatile uint64_t t26 = 6239587317673651472LLU;

	t26 = ((x169*x170)-(x171-x172));

	if (t26 != 9223364556189433856LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x175 = -197289759458588LL;
	volatile uint64_t x176 = 155LLU;
	volatile uint64_t t27 = 223450LLU;

	t27 = ((x173*x174)-(x175-x176));

	if (t27 != 197289761031559LLU) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x177 = UINT8_MAX;
	static uint8_t x178 = UINT8_MAX;
	uint16_t x179 = 365U;
	int16_t x180 = 4;
	int32_t t28 = 131;

	t28 = ((x177*x178)-(x179-x180));

	if (t28 != 64664) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x190 = INT16_MIN;
	int32_t x191 = 137896464;
	int32_t x192 = INT32_MAX;
	static int32_t t29 = -5326443;

	t29 = ((x189*x190)-(x191-x192));

	if (t29 != 2009619951) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x193 = -32;
	uint32_t x195 = 27U;
	uint64_t x196 = 3408380497LLU;
	volatile uint64_t t30 = 7LLU;

	t30 = ((x193*x194)-(x195-x196));

	if (t30 != 3408372310LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x197 = INT16_MAX;
	static uint8_t x199 = UINT8_MAX;
	static uint16_t x200 = 28U;

	t31 = ((x197*x198)-(x199-x200));

	if (t31 != 851715) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x201 = 21;
	uint16_t x202 = 8U;
	int8_t x203 = 1;
	int16_t x204 = INT16_MIN;
	int32_t t32 = -12;

	t32 = ((x201*x202)-(x203-x204));

	if (t32 != -32601) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x205 = -1;
	int32_t x206 = -2;
	static int8_t x208 = INT8_MIN;

	t33 = ((x205*x206)-(x207-x208));

	if (t33 != 2147483522) { NG(); } else { ; }
	
}

void f34(void) {
	static uint32_t x209 = UINT32_MAX;
	int64_t x210 = -1LL;
	int32_t x211 = INT32_MAX;
	static uint16_t x212 = UINT16_MAX;
	volatile int64_t t34 = 12145968776LL;

	t34 = ((x209*x210)-(x211-x212));

	if (t34 != -6442385407LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x221 = 12093819;
	int16_t x222 = 0;
	int64_t x224 = INT64_MAX;
	volatile int64_t t35 = -2109089021887546LL;

	t35 = ((x221*x222)-(x223-x224));

	if (t35 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x233 = UINT16_MAX;
	int16_t x234 = INT16_MAX;
	volatile uint64_t x235 = 7826727260350115LLU;
	int8_t x236 = 21;
	uint64_t t36 = 117011376604253LLU;

	t36 = ((x233*x234)-(x235-x236));

	if (t36 != 18438917348596586867LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x237 = -1;
	uint32_t x238 = UINT32_MAX;
	volatile int8_t x239 = 0;
	uint16_t x240 = UINT16_MAX;

	t37 = ((x237*x238)-(x239-x240));

	if (t37 != 65536U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x243 = 1017221LL;
	static volatile int64_t t38 = 5409LL;

	t38 = ((x241*x242)-(x243-x244));

	if (t38 != 9223372036853758714LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x249 = 5U;
	uint8_t x251 = 9U;
	int32_t t39 = 0;

	t39 = ((x249*x250)-(x251-x252));

	if (t39 != -638) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x253 = 0;
	int8_t x254 = -1;
	volatile uint32_t x255 = UINT32_MAX;
	volatile uint32_t t40 = 11U;

	t40 = ((x253*x254)-(x255-x256));

	if (t40 != 7U) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x267 = INT16_MAX;
	int32_t x268 = 25292837;
	static int32_t t41 = 14;

	t41 = ((x265*x266)-(x267-x268));

	if (t41 != 25260580) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x273 = UINT64_MAX;
	static int64_t x276 = INT64_MIN;
	volatile uint64_t t42 = 50954LLU;

	t42 = ((x273*x274)-(x275-x276));

	if (t42 != 9217120719823727779LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x286 = 4771U;
	int8_t x287 = INT8_MIN;
	volatile int64_t t43 = -307552912LL;

	t43 = ((x285*x286)-(x287-x288));

	if (t43 != -322768096871704LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x301 = INT32_MAX;
	volatile uint32_t x302 = 64U;
	uint32_t x303 = 717034810U;
	static uint8_t x304 = 56U;
	static volatile uint32_t t44 = 4814U;

	t44 = ((x301*x302)-(x303-x304));

	if (t44 != 3577932478U) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x305 = UINT8_MAX;
	uint8_t x306 = UINT8_MAX;
	uint64_t x307 = 1788LLU;
	volatile uint64_t t45 = 117630644872752LLU;

	t45 = ((x305*x306)-(x307-x308));

	if (t45 != 9223372036854839045LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x313 = 1U;
	int64_t x315 = 3462LL;
	int32_t x316 = -149977;
	volatile int64_t t46 = 566110601LL;

	t46 = ((x313*x314)-(x315-x316));

	if (t46 != -153440LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x317 = INT8_MIN;
	int8_t x318 = INT8_MIN;
	static uint16_t x319 = 3U;
	int8_t x320 = -14;
	static int32_t t47 = -406025;

	t47 = ((x317*x318)-(x319-x320));

	if (t47 != 16367) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile int32_t x326 = INT32_MIN;
	int8_t x328 = -1;
	volatile uint32_t t48 = 14323975U;

	t48 = ((x325*x326)-(x327-x328));

	if (t48 != 2147483775U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x333 = INT8_MAX;
	volatile uint8_t x334 = UINT8_MAX;
	static int8_t x335 = 0;
	uint64_t x336 = 724667351361344632LLU;

	t49 = ((x333*x334)-(x335-x336));

	if (t49 != 724667351361377017LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x337 = -1;
	volatile int64_t x338 = -646437365LL;
	int16_t x339 = -2132;
	volatile uint64_t x340 = 106742633361144292LLU;
	uint64_t t50 = 6073LLU;

	t50 = ((x337*x338)-(x339-x340));

	if (t50 != 106742634007583789LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x342 = INT16_MIN;
	int64_t x343 = INT64_MIN;
	int8_t x344 = -1;
	static volatile int64_t t51 = -3088159235924LL;

	t51 = ((x341*x342)-(x343-x344));

	if (t51 != 9223372036846419967LL) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x353 = -1LL;
	static uint64_t x354 = UINT64_MAX;
	uint64_t x355 = UINT64_MAX;
	volatile int64_t x356 = 24646849240241424LL;
	volatile uint64_t t52 = 2971298384930348388LLU;

	t52 = ((x353*x354)-(x355-x356));

	if (t52 != 24646849240241426LLU) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x358 = 97LLU;
	static volatile int32_t x360 = -1;

	t53 = ((x357*x358)-(x359-x360));

	if (t53 != 1404455561787960729LLU) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x365 = UINT8_MAX;
	uint32_t x366 = 796U;
	static int16_t x367 = 823;
	static int8_t x368 = 31;
	static volatile uint32_t t54 = 1990U;

	t54 = ((x365*x366)-(x367-x368));

	if (t54 != 202188U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x369 = UINT64_MAX;
	uint64_t x370 = UINT64_MAX;
	int32_t x371 = -15178;
	uint64_t t55 = 75579184659743LLU;

	t55 = ((x369*x370)-(x371-x372));

	if (t55 != 18446690140888526193LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint32_t x374 = 1U;
	int16_t x375 = -1;
	int32_t x376 = -1;

	t56 = ((x373*x374)-(x375-x376));

	if (t56 != UINT32_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x378 = INT32_MAX;
	int8_t x379 = -1;
	volatile int8_t x380 = -1;
	volatile uint32_t t57 = 736204405U;

	t57 = ((x377*x378)-(x379-x380));

	if (t57 != 4287808504U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x385 = -1;
	int8_t x387 = 0;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t58 = 3145757160341LLU;

	t58 = ((x385*x386)-(x387-x388));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x390 = 30997;
	int16_t x391 = INT16_MIN;
	volatile int64_t x392 = INT64_MIN;

	t59 = ((x389*x390)-(x391-x392));

	if (t59 != -9223372036854712043LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x397 = 24;
	int8_t x398 = 0;
	uint32_t x399 = UINT32_MAX;
	static volatile uint32_t t60 = 0U;

	t60 = ((x397*x398)-(x399-x400));

	if (t60 != 4294966379U) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x402 = -1;
	int8_t x403 = -1;
	static volatile int8_t x404 = 0;

	t61 = ((x401*x402)-(x403-x404));

	if (t61 != 129) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x405 = -88;
	volatile int16_t x406 = INT16_MIN;
	uint32_t t62 = 237U;

	t62 = ((x405*x406)-(x407-x408));

	if (t62 != 2850816U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x413 = -1;
	int16_t x415 = -1;
	volatile int8_t x416 = -2;
	volatile int32_t t63 = -375;

	t63 = ((x413*x414)-(x415-x416));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x422 = 23110621LLU;
	uint16_t x423 = 0U;
	uint32_t x424 = 936363837U;
	uint64_t t64 = 43LLU;

	t64 = ((x421*x422)-(x423-x424));

	if (t64 != 18446744070327837536LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x425 = UINT64_MAX;
	int32_t x426 = INT32_MAX;
	int64_t x427 = 17220403505112260LL;
	volatile int32_t x428 = INT32_MAX;
	volatile uint64_t t65 = 3119LLU;

	t65 = ((x425*x426)-(x427-x428));

	if (t65 != 18429523670204439356LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x429 = -27323;
	int64_t x430 = -1LL;
	int16_t x431 = INT16_MIN;
	volatile int64_t t66 = -794242LL;

	t66 = ((x429*x430)-(x431-x432));

	if (t66 != 60084LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x441 = 48U;
	int16_t x442 = INT16_MIN;
	int8_t x443 = INT8_MIN;
	volatile uint8_t x444 = 14U;
	volatile int32_t t67 = 1258;

	t67 = ((x441*x442)-(x443-x444));

	if (t67 != -1572722) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x450 = UINT8_MAX;
	static int16_t x451 = INT16_MAX;
	uint8_t x452 = UINT8_MAX;
	int32_t t68 = -9;

	t68 = ((x449*x450)-(x451-x452));

	if (t68 != -30982) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x454 = INT16_MIN;
	uint32_t x455 = 8371U;
	uint8_t x456 = UINT8_MAX;
	uint32_t t69 = 649829U;

	t69 = ((x453*x454)-(x455-x456));

	if (t69 != 2430263372U) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x457 = 6723LLU;
	int16_t x458 = INT16_MIN;
	int64_t x459 = INT64_MIN;
	uint64_t x460 = 783620820929LLU;
	volatile uint64_t t70 = 4755LLU;

	t70 = ((x457*x458)-(x459-x460));

	if (t70 != 9223372820255297473LLU) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x462 = UINT32_MAX;
	int16_t x463 = INT16_MAX;
	static int8_t x464 = INT8_MAX;

	t71 = ((x461*x462)-(x463-x464));

	if (t71 != 4294934990U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x466 = 0LL;
	volatile int16_t x467 = INT16_MIN;
	static volatile uint32_t x468 = 5U;
	static int64_t t72 = -15811499095179907LL;

	t72 = ((x465*x466)-(x467-x468));

	if (t72 != -4294934523LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x471 = INT16_MIN;
	int16_t x472 = INT16_MIN;
	volatile int32_t t73 = -1750892;

	t73 = ((x469*x470)-(x471-x472));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x477 = INT16_MAX;
	uint32_t x478 = 181U;
	static uint16_t x479 = UINT16_MAX;
	int16_t x480 = INT16_MAX;
	volatile uint32_t t74 = 1805441139U;

	t74 = ((x477*x478)-(x479-x480));

	if (t74 != 5898059U) { NG(); } else { ; }
	
}

void f75(void) {
	static uint64_t x485 = 1757945767674476LLU;
	static int32_t x487 = INT32_MIN;
	static volatile int8_t x488 = -13;
	uint64_t t75 = 61880718005304753LLU;

	t75 = ((x485*x486)-(x487-x488));

	if (t75 != 105476748207952195LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x493 = INT16_MAX;
	int8_t x494 = INT8_MIN;
	static int16_t x495 = INT16_MIN;
	static volatile int32_t t76 = 2262826;

	t76 = ((x493*x494)-(x495-x496));

	if (t76 != -4161410) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x497 = INT8_MIN;
	volatile int64_t x499 = INT64_MIN;
	uint64_t x500 = UINT64_MAX;
	uint64_t t77 = 23892031747LLU;

	t77 = ((x497*x498)-(x499-x500));

	if (t77 != 9223372036854771199LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x501 = -1896492872LL;
	volatile int8_t x502 = INT8_MAX;
	uint32_t x504 = UINT32_MAX;
	static uint64_t t78 = 36945553707765302LLU;

	t78 = ((x501*x502)-(x503-x504));

	if (t78 != 18446743837148917647LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x505 = 26935563554LLU;
	int32_t x506 = INT32_MIN;
	static uint32_t x507 = 4U;
	uint64_t x508 = 32625722659102590LLU;

	t79 = ((x505*x506)-(x507-x508));

	if (t79 != 15975919735617544058LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x510 = 356U;
	volatile int8_t x511 = INT8_MIN;
	int32_t x512 = INT32_MIN;
	volatile uint32_t t80 = 56824431U;

	t80 = ((x509*x510)-(x511-x512));

	if (t80 != 2147483420U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x513 = -12;
	int16_t x514 = INT16_MAX;
	int8_t x515 = -1;
	volatile int32_t t81 = -68399;

	t81 = ((x513*x514)-(x515-x516));

	if (t81 != -393216) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x521 = INT16_MAX;
	static int32_t x522 = -1754;
	uint64_t x523 = UINT64_MAX;
	int16_t x524 = INT16_MIN;
	static volatile uint64_t t82 = 3907920932166326LLU;

	t82 = ((x521*x522)-(x523-x524));

	if (t82 != 18446744073652045531LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x529 = 979U;
	volatile uint8_t x530 = UINT8_MAX;
	volatile int64_t x531 = -231469965730LL;
	int8_t x532 = -2;

	t83 = ((x529*x530)-(x531-x532));

	if (t83 != 231470215373LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x533 = -1;
	static uint8_t x534 = 60U;
	int32_t t84 = 29925276;

	t84 = ((x533*x534)-(x535-x536));

	if (t84 != -2362) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x538 = -1569835067499811550LL;
	volatile uint64_t x539 = 3977960358377LLU;
	int64_t x540 = INT64_MAX;
	static volatile uint64_t t85 = 28308406511833907LLU;

	t85 = ((x537*x538)-(x539-x540));

	if (t85 != 10793203126394228980LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x550 = 37350U;
	uint32_t x551 = 9821074U;
	int64_t x552 = -259459LL;
	volatile int64_t t86 = 994406202802481LL;

	t86 = ((x549*x550)-(x551-x552));

	if (t86 != 4284849413LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x553 = -9372LL;
	static volatile uint8_t x554 = UINT8_MAX;
	int16_t x555 = -1;
	uint8_t x556 = 3U;
	volatile int64_t t87 = 771618LL;

	t87 = ((x553*x554)-(x555-x556));

	if (t87 != -2389856LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint8_t x558 = 123U;
	static int8_t x559 = -10;
	volatile uint64_t x560 = 8268LLU;
	static volatile uint64_t t88 = 0LLU;

	t88 = ((x557*x558)-(x559-x560));

	if (t88 != 12080605LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x561 = 7U;
	volatile int16_t x562 = -7;
	int16_t x563 = INT16_MIN;
	int16_t x564 = INT16_MIN;
	volatile int32_t t89 = 9985844;

	t89 = ((x561*x562)-(x563-x564));

	if (t89 != -49) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x565 = 0LL;
	static int64_t x566 = INT64_MIN;
	volatile uint64_t x567 = 467270815801LLU;
	uint64_t t90 = 1286799LLU;

	t90 = ((x565*x566)-(x567-x568));

	if (t90 != 18446743606438735814LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x573 = INT16_MIN;
	volatile int16_t x574 = -1;
	uint16_t x575 = UINT16_MAX;
	int64_t x576 = INT64_MAX;

	t91 = ((x573*x574)-(x575-x576));

	if (t91 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x577 = INT8_MIN;
	volatile uint64_t x578 = UINT64_MAX;
	int32_t x579 = INT32_MIN;
	volatile uint64_t x580 = UINT64_MAX;
	static volatile uint64_t t92 = 64945LLU;

	t92 = ((x577*x578)-(x579-x580));

	if (t92 != 2147483775LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x591 = INT8_MIN;
	int64_t t93 = 386LL;

	t93 = ((x589*x590)-(x591-x592));

	if (t93 != 32672LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x593 = -12;
	uint16_t x594 = 2U;
	int32_t x595 = -1;
	static uint32_t x596 = 123462438U;
	uint32_t t94 = 737U;

	t94 = ((x593*x594)-(x595-x596));

	if (t94 != 123462415U) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x597 = INT16_MIN;
	uint8_t x598 = 5U;
	static int16_t x599 = 1717;
	static int32_t t95 = -96;

	t95 = ((x597*x598)-(x599-x600));

	if (t95 != -165555) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x606 = INT16_MAX;
	static volatile int32_t t96 = -9515219;

	t96 = ((x605*x606)-(x607-x608));

	if (t96 != -1073712381) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x613 = -51;
	int64_t x614 = -25696014363LL;
	uint32_t x615 = 0U;
	int16_t x616 = INT16_MAX;
	static volatile int64_t t97 = -17050532107LL;

	t97 = ((x613*x614)-(x615-x616));

	if (t97 != 1306201797984LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x617 = -1;
	uint32_t x619 = 11558U;
	volatile uint64_t x620 = UINT64_MAX;
	volatile uint64_t t98 = 52100698LLU;

	t98 = ((x617*x618)-(x619-x620));

	if (t98 != 18446744073709507290LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x621 = -1LL;
	uint16_t x623 = 0U;
	int64_t x624 = -516LL;
	static volatile int64_t t99 = 998881360818LL;

	t99 = ((x621*x622)-(x623-x624));

	if (t99 != 2147483132LL) { NG(); } else { ; }
	
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

