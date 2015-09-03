#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x11 = UINT16_MAX;
volatile int16_t x15 = 86;
volatile uint32_t x17 = UINT32_MAX;
static uint16_t x26 = 1910U;
volatile uint64_t x33 = UINT64_MAX;
int32_t x39 = INT32_MIN;
static int64_t x40 = INT64_MIN;
static uint16_t x45 = UINT16_MAX;
int32_t x54 = INT32_MAX;
int32_t x55 = INT32_MAX;
int16_t x57 = -1;
int8_t x59 = INT8_MAX;
int64_t t14 = -127LL;
int8_t x65 = -11;
volatile uint64_t t15 = 6369404LLU;
int16_t x71 = INT16_MIN;
volatile uint8_t x77 = 5U;
volatile uint32_t x82 = UINT32_MAX;
static volatile int16_t x86 = -1;
int32_t x92 = 10260;
static int64_t x93 = -2450750366268409LL;
uint64_t x94 = UINT64_MAX;
uint64_t t23 = 16232993639LLU;
int32_t x109 = INT32_MAX;
int16_t x112 = -3;
int16_t x125 = -1;
int16_t x134 = 22;
uint64_t x142 = UINT64_MAX;
volatile int8_t x143 = INT8_MIN;
uint16_t x144 = 0U;
int64_t t31 = 515304411918065144LL;
volatile int32_t x161 = 97225570;
int8_t x162 = INT8_MIN;
int64_t x164 = 854892504703560792LL;
int64_t t33 = 88466853832LL;
int64_t x168 = -759767030419LL;
volatile int64_t t34 = 263232LL;
volatile int16_t x169 = 1650;
uint8_t x172 = 6U;
int16_t x173 = INT16_MIN;
int16_t x176 = -20;
volatile int32_t x178 = -1;
volatile uint32_t t37 = 71340440U;
int16_t x183 = INT16_MAX;
int64_t t39 = INT64_MIN;
volatile int64_t t41 = -608406LL;
static uint16_t x201 = 5U;
volatile uint32_t t42 = 98U;
uint32_t x206 = 17U;
static int64_t x207 = INT64_MIN;
uint16_t x210 = UINT16_MAX;
int32_t x211 = -1;
static volatile uint64_t x220 = UINT64_MAX;
static uint64_t x224 = UINT64_MAX;
int64_t x237 = -139628037LL;
static int16_t x246 = INT16_MIN;
volatile uint16_t x248 = 0U;
volatile uint64_t t53 = 8195534440787LLU;
uint64_t x265 = 309797LLU;
int8_t x268 = 3;
uint64_t t54 = 82484898314157LLU;
volatile int64_t t55 = INT64_MIN;
int8_t x278 = -1;
int8_t x281 = INT8_MIN;
int64_t x282 = -1LL;
uint8_t x285 = 3U;
volatile int32_t x287 = INT32_MIN;
int8_t x288 = 5;
uint64_t x289 = 2021753645LLU;
volatile int32_t x293 = -1;
static volatile uint32_t x295 = 89U;
uint32_t x296 = 187103230U;
int8_t x321 = INT8_MIN;
int32_t x325 = -1;
int16_t x330 = INT16_MAX;
int32_t t65 = -17669853;
int64_t x337 = INT64_MIN;
int8_t x340 = INT8_MIN;
uint64_t t66 = 115219591540LLU;
int8_t x341 = -1;
uint64_t x343 = 6315586608281186972LLU;
volatile uint64_t t67 = 186481329827479703LLU;
int32_t x346 = 1;
static int32_t x347 = INT32_MAX;
volatile int32_t t68 = 22060632;
int16_t x365 = INT16_MIN;
int8_t x368 = -1;
static volatile uint16_t x373 = 5906U;
int32_t x376 = -1;
volatile int32_t x378 = 5870649;
int64_t x381 = 518530831686269LL;
uint16_t x391 = 5U;
volatile uint64_t x407 = UINT64_MAX;
int16_t x409 = 2;
uint64_t x411 = 1LLU;
uint32_t t80 = 187137U;
int16_t x422 = INT16_MIN;
int64_t x427 = 1410042658308331017LL;
int8_t x428 = 1;
int64_t x434 = -1LL;
int8_t x435 = -3;
volatile int32_t x438 = 423316675;
volatile uint64_t x445 = 2133295492LLU;
uint8_t x449 = 1U;
volatile int64_t x452 = INT64_MIN;
uint32_t x453 = 5U;
volatile int64_t x460 = INT64_MIN;
volatile int64_t t89 = INT64_MIN;
static int16_t x462 = -496;
uint16_t x467 = 975U;
int32_t x475 = -218048;
int64_t x490 = INT64_MIN;
volatile int32_t x492 = INT32_MIN;
int64_t x499 = INT64_MIN;
int32_t x500 = 11;
volatile int64_t t97 = -81429946943774LL;
int64_t x502 = INT64_MAX;
uint32_t x504 = UINT32_MAX;
int32_t x505 = INT32_MIN;
uint16_t x506 = 5U;


void f0(void) {
	int16_t x1 = -1;
	int32_t x2 = 42;
	volatile int16_t x3 = -1;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 468406082;

	t0 = (((x1+x2)%x3)+x4);

	if (t0 != -128) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x9 = 1190;
	int32_t x10 = 1049630;
	static int16_t x12 = INT16_MIN;
	static volatile int32_t t1 = -59147365;

	t1 = (((x9+x10)%x11)+x12);

	if (t1 != -30508) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x13 = 9LLU;
	uint32_t x14 = 2U;
	int16_t x16 = INT16_MIN;
	volatile uint64_t t2 = 152224264477110782LLU;

	t2 = (((x13+x14)%x15)+x16);

	if (t2 != 18446744073709518859LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x18 = 28;
	int64_t x19 = 39LL;
	static int16_t x20 = 197;
	volatile int64_t t3 = -290510LL;

	t3 = (((x17+x18)%x19)+x20);

	if (t3 != 224LL) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = 3;
	static int8_t x22 = INT8_MAX;
	int8_t x23 = INT8_MIN;
	volatile int8_t x24 = INT8_MIN;
	volatile int32_t t4 = -954;

	t4 = (((x21+x22)%x23)+x24);

	if (t4 != -126) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 509349951U;
	static int32_t x27 = 386499564;
	uint8_t x28 = UINT8_MAX;
	volatile uint32_t t5 = 26U;

	t5 = (((x25+x26)%x27)+x28);

	if (t5 != 122852552U) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = INT8_MIN;
	volatile int32_t x30 = -1;
	uint32_t x31 = 35858656U;
	int64_t x32 = -1LL;
	static int64_t t6 = -2078062277LL;

	t6 = (((x29+x30)%x31)+x32);

	if (t6 != 27787102LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x34 = 819846752070LL;
	static volatile int64_t x35 = 3LL;
	volatile uint64_t x36 = UINT64_MAX;
	volatile uint64_t t7 = 25450268591LLU;

	t7 = (((x33+x34)%x35)+x36);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = -1;
	uint64_t x38 = 29947526039LLU;
	uint64_t t8 = 924243LLU;

	t8 = (((x37+x38)%x39)+x40);

	if (t8 != 9223372066802301846LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = UINT8_MAX;
	volatile uint64_t x42 = UINT64_MAX;
	volatile int32_t x43 = INT32_MIN;
	int64_t x44 = 1375085005111568LL;
	volatile uint64_t t9 = 598001900LLU;

	t9 = (((x41+x42)%x43)+x44);

	if (t9 != 1375085005111822LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = INT8_MIN;
	uint64_t x47 = 15068897581738LLU;
	uint32_t x48 = UINT32_MAX;
	volatile uint64_t t10 = 1336LLU;

	t10 = (((x45+x46)%x47)+x48);

	if (t10 != 4295032702LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x49 = -286;
	volatile int16_t x50 = INT16_MIN;
	uint64_t x51 = 771095859904482787LLU;
	uint16_t x52 = UINT16_MAX;
	uint64_t t11 = 854555101LLU;

	t11 = (((x49+x50)%x51)+x52);

	if (t11 != 711539295906479996LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x53 = INT32_MIN;
	int64_t x56 = -42572LL;
	int64_t t12 = 1927070916668449811LL;

	t12 = (((x53+x54)%x55)+x56);

	if (t12 != -42573LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x58 = -1LL;
	int16_t x60 = INT16_MIN;
	volatile int64_t t13 = 114593132274LL;

	t13 = (((x57+x58)%x59)+x60);

	if (t13 != -32770LL) { NG(); } else { ; }
	
}

void f14(void) {
	static uint32_t x61 = 398210U;
	int64_t x62 = -1LL;
	static volatile int64_t x63 = INT64_MIN;
	int8_t x64 = -22;

	t14 = (((x61+x62)%x63)+x64);

	if (t14 != 398187LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x66 = 2452;
	uint64_t x67 = 1LLU;
	int32_t x68 = INT32_MIN;

	t15 = (((x65+x66)%x67)+x68);

	if (t15 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = -4;
	int64_t x70 = INT64_MAX;
	int32_t x72 = -1;
	volatile int64_t t16 = -2066618570628481017LL;

	t16 = (((x69+x70)%x71)+x72);

	if (t16 != 32762LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = 3543;
	uint8_t x74 = UINT8_MAX;
	static int64_t x75 = -1LL;
	uint32_t x76 = 577979U;
	static int64_t t17 = -45073683LL;

	t17 = (((x73+x74)%x75)+x76);

	if (t17 != 577979LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x78 = 0U;
	volatile int64_t x79 = -15395LL;
	static int16_t x80 = INT16_MIN;
	static volatile int64_t t18 = 33377651607142943LL;

	t18 = (((x77+x78)%x79)+x80);

	if (t18 != -32763LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x81 = 858420U;
	int8_t x83 = INT8_MAX;
	int64_t x84 = -1LL;
	volatile int64_t t19 = 7569883012LL;

	t19 = (((x81+x82)%x83)+x84);

	if (t19 != 25LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x85 = UINT16_MAX;
	volatile uint8_t x87 = UINT8_MAX;
	volatile int16_t x88 = 740;
	volatile int32_t t20 = -1910;

	t20 = (((x85+x86)%x87)+x88);

	if (t20 != 994) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = -1;
	volatile int32_t x90 = -127224;
	volatile uint16_t x91 = 6058U;
	static int32_t t21 = 4669;

	t21 = (((x89+x90)%x91)+x92);

	if (t21 != 10253) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x95 = 16LL;
	int64_t x96 = -1LL;
	volatile uint64_t t22 = 525773475LLU;

	t22 = (((x93+x94)%x95)+x96);

	if (t22 != 5LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x97 = 2U;
	int16_t x98 = INT16_MIN;
	uint64_t x99 = 894213388731703LLU;
	uint32_t x100 = 1741758U;

	t23 = (((x97+x98)%x99)+x100);

	if (t23 != 16077564959421LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x105 = 324325039U;
	int32_t x106 = INT32_MIN;
	int32_t x107 = INT32_MIN;
	int32_t x108 = -1;
	uint32_t t24 = 181030U;

	t24 = (((x105+x106)%x107)+x108);

	if (t24 != 324325038U) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x110 = INT32_MIN;
	static int16_t x111 = INT16_MIN;
	int32_t t25 = 11;

	t25 = (((x109+x110)%x111)+x112);

	if (t25 != -4) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x126 = 0;
	int16_t x127 = INT16_MIN;
	volatile int16_t x128 = INT16_MIN;
	static int32_t t26 = 7;

	t26 = (((x125+x126)%x127)+x128);

	if (t26 != -32769) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x129 = 19;
	int8_t x130 = INT8_MAX;
	int64_t x131 = INT64_MAX;
	static int32_t x132 = INT32_MIN;
	volatile int64_t t27 = 9852371395179LL;

	t27 = (((x129+x130)%x131)+x132);

	if (t27 != -2147483502LL) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x133 = INT8_MIN;
	volatile uint32_t x135 = 288800108U;
	uint64_t x136 = UINT64_MAX;
	static uint64_t t28 = 3795404804471LLU;

	t28 = (((x133+x134)%x135)+x136);

	if (t28 != 251765677LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x141 = -510554099;
	volatile uint64_t t29 = 8102253690336255391LLU;

	t29 = (((x141+x142)%x143)+x144);

	if (t29 != 18446744073198997516LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x145 = 206337LLU;
	static int64_t x146 = -1LL;
	int32_t x147 = 3154724;
	int8_t x148 = INT8_MAX;
	volatile uint64_t t30 = 12817314505974LLU;

	t30 = (((x145+x146)%x147)+x148);

	if (t30 != 206463LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x153 = 2045U;
	int16_t x154 = 13727;
	static volatile int8_t x155 = -1;
	int64_t x156 = -1LL;

	t31 = (((x153+x154)%x155)+x156);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x157 = 0;
	int16_t x158 = -5618;
	uint64_t x159 = UINT64_MAX;
	int8_t x160 = INT8_MAX;
	uint64_t t32 = 637322836242692LLU;

	t32 = (((x157+x158)%x159)+x160);

	if (t32 != 18446744073709546125LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x163 = INT16_MAX;

	t33 = (((x161+x162)%x163)+x164);

	if (t33 != 854892504703566545LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x165 = 3;
	uint8_t x166 = 20U;
	static int16_t x167 = -1;

	t34 = (((x165+x166)%x167)+x168);

	if (t34 != -759767030419LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x170 = 13U;
	uint32_t x171 = 210U;
	uint32_t t35 = 132U;

	t35 = (((x169+x170)%x171)+x172);

	if (t35 != 199U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x174 = -1;
	uint64_t x175 = UINT64_MAX;
	uint64_t t36 = 137431LLU;

	t36 = (((x173+x174)%x175)+x176);

	if (t36 != 18446744073709518827LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x177 = 538U;
	int8_t x179 = 1;
	uint8_t x180 = UINT8_MAX;

	t37 = (((x177+x178)%x179)+x180);

	if (t37 != 255U) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x181 = -1;
	static int32_t x182 = -1;
	int32_t x184 = 37572367;
	int32_t t38 = -153;

	t38 = (((x181+x182)%x183)+x184);

	if (t38 != 37572365) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int64_t x189 = -1LL;
	static volatile int16_t x190 = INT16_MIN;
	int8_t x191 = -1;
	volatile int64_t x192 = INT64_MIN;

	t39 = (((x189+x190)%x191)+x192);

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x193 = INT16_MIN;
	int64_t x194 = -721LL;
	int16_t x195 = -1;
	int16_t x196 = -1;
	volatile int64_t t40 = 5267129331556023LL;

	t40 = (((x193+x194)%x195)+x196);

	if (t40 != -1LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x197 = -13815247LL;
	int64_t x198 = 150250612LL;
	static uint32_t x199 = 2800U;
	volatile int32_t x200 = INT32_MIN;

	t41 = (((x197+x198)%x199)+x200);

	if (t41 != -2147481083LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x202 = UINT32_MAX;
	uint16_t x203 = UINT16_MAX;
	int8_t x204 = 0;

	t42 = (((x201+x202)%x203)+x204);

	if (t42 != 4U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = -1LL;
	volatile uint8_t x208 = 28U;
	int64_t t43 = 2632716LL;

	t43 = (((x205+x206)%x207)+x208);

	if (t43 != 44LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x209 = INT64_MIN;
	uint8_t x212 = 1U;
	static int64_t t44 = -86934LL;

	t44 = (((x209+x210)%x211)+x212);

	if (t44 != 1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x213 = INT8_MIN;
	int8_t x214 = -1;
	volatile int32_t x215 = INT32_MIN;
	int32_t x216 = 18513788;
	static volatile int32_t t45 = -124;

	t45 = (((x213+x214)%x215)+x216);

	if (t45 != 18513659) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x217 = INT8_MIN;
	static uint32_t x218 = UINT32_MAX;
	int64_t x219 = -1LL;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = (((x217+x218)%x219)+x220);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x221 = 1332542926868613874LLU;
	uint32_t x222 = 3U;
	volatile int16_t x223 = 412;
	volatile uint64_t t47 = 2040908172328LLU;

	t47 = (((x221+x222)%x223)+x224);

	if (t47 != 100LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x238 = 0;
	int64_t x239 = INT64_MIN;
	uint32_t x240 = UINT32_MAX;
	int64_t t48 = -16486417164LL;

	t48 = (((x237+x238)%x239)+x240);

	if (t48 != 4155339258LL) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint8_t x241 = UINT8_MAX;
	int8_t x242 = INT8_MIN;
	volatile int8_t x243 = INT8_MIN;
	uint64_t x244 = 21123LLU;
	uint64_t t49 = 18709243402389314LLU;

	t49 = (((x241+x242)%x243)+x244);

	if (t49 != 21250LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static uint16_t x245 = UINT16_MAX;
	int8_t x247 = INT8_MIN;
	int32_t t50 = 858460;

	t50 = (((x245+x246)%x247)+x248);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x249 = -1LL;
	volatile uint8_t x250 = UINT8_MAX;
	volatile int16_t x251 = INT16_MIN;
	uint64_t x252 = UINT64_MAX;
	volatile uint64_t t51 = 7279828526LLU;

	t51 = (((x249+x250)%x251)+x252);

	if (t51 != 253LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x253 = INT32_MIN;
	volatile int64_t x254 = -31859LL;
	static int16_t x255 = INT16_MIN;
	static int16_t x256 = INT16_MAX;
	static volatile int64_t t52 = -202LL;

	t52 = (((x253+x254)%x255)+x256);

	if (t52 != 908LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x257 = INT64_MIN;
	static uint32_t x258 = UINT32_MAX;
	int16_t x259 = 991;
	static uint64_t x260 = UINT64_MAX;

	t53 = (((x257+x258)%x259)+x260);

	if (t53 != 18446744073709550758LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x266 = INT8_MAX;
	int32_t x267 = -1;

	t54 = (((x265+x266)%x267)+x268);

	if (t54 != 309927LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x273 = 13973433;
	volatile int16_t x274 = -1;
	int8_t x275 = 1;
	int64_t x276 = INT64_MIN;

	t55 = (((x273+x274)%x275)+x276);

	if (t55 != INT64_MIN) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int8_t x277 = -6;
	static uint32_t x279 = 1619684254U;
	volatile int8_t x280 = INT8_MAX;
	static volatile uint32_t t56 = 7U;

	t56 = (((x277+x278)%x279)+x280);

	if (t56 != 1055598908U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x283 = -1;
	int32_t x284 = INT32_MIN;
	volatile int64_t t57 = 15576862277257LL;

	t57 = (((x281+x282)%x283)+x284);

	if (t57 != -2147483648LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x286 = INT16_MIN;
	int32_t t58 = 182;

	t58 = (((x285+x286)%x287)+x288);

	if (t58 != -32760) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x290 = -1LL;
	static int8_t x291 = -1;
	static int16_t x292 = INT16_MIN;
	static uint64_t t59 = 24527LLU;

	t59 = (((x289+x290)%x291)+x292);

	if (t59 != 2021720876LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x294 = -21672;
	volatile uint32_t t60 = 99393238U;

	t60 = (((x293+x294)%x295)+x296);

	if (t60 != 187103318U) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x301 = INT16_MAX;
	uint16_t x302 = 20U;
	static volatile int16_t x303 = INT16_MIN;
	int8_t x304 = INT8_MAX;
	static volatile int32_t t61 = 22;

	t61 = (((x301+x302)%x303)+x304);

	if (t61 != 146) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x322 = 107U;
	int8_t x323 = INT8_MIN;
	uint16_t x324 = UINT16_MAX;
	int32_t t62 = 3682637;

	t62 = (((x321+x322)%x323)+x324);

	if (t62 != 65514) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x326 = INT16_MAX;
	volatile int32_t x327 = INT32_MIN;
	static int8_t x328 = INT8_MIN;
	int32_t t63 = 8175539;

	t63 = (((x325+x326)%x327)+x328);

	if (t63 != 32638) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x329 = -96LL;
	volatile int16_t x331 = INT16_MIN;
	int16_t x332 = INT16_MAX;
	volatile int64_t t64 = 1057878755511LL;

	t64 = (((x329+x330)%x331)+x332);

	if (t64 != 65438LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x333 = 0U;
	int8_t x334 = INT8_MIN;
	int16_t x335 = -61;
	static uint8_t x336 = UINT8_MAX;

	t65 = (((x333+x334)%x335)+x336);

	if (t65 != 249) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x338 = UINT64_MAX;
	volatile int64_t x339 = INT64_MAX;

	t66 = (((x337+x338)%x339)+x340);

	if (t66 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x342 = -1;
	volatile uint8_t x344 = 5U;

	t67 = (((x341+x342)%x343)+x344);

	if (t67 != 5815570857147177675LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x345 = INT8_MAX;
	static int32_t x348 = -1;

	t68 = (((x345+x346)%x347)+x348);

	if (t68 != 127) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x349 = 4U;
	uint16_t x350 = UINT16_MAX;
	int8_t x351 = INT8_MIN;
	int16_t x352 = -3;
	int32_t t69 = 8538635;

	t69 = (((x349+x350)%x351)+x352);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x353 = 148889;
	uint32_t x354 = 8251558U;
	int32_t x355 = INT32_MIN;
	int32_t x356 = INT32_MIN;
	uint32_t t70 = 6724U;

	t70 = (((x353+x354)%x355)+x356);

	if (t70 != 2155884095U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x361 = INT16_MAX;
	volatile int64_t x362 = INT64_MIN;
	static uint16_t x363 = 13980U;
	uint64_t x364 = 1541481422932LLU;
	volatile uint64_t t71 = 95197132889LLU;

	t71 = (((x361+x362)%x363)+x364);

	if (t71 != 1541481410931LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x366 = 132934586986412LL;
	int16_t x367 = 441;
	int64_t t72 = -2208735LL;

	t72 = (((x365+x366)%x367)+x368);

	if (t72 != -1LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x374 = 31U;
	uint8_t x375 = UINT8_MAX;
	int32_t t73 = -14801601;

	t73 = (((x373+x374)%x375)+x376);

	if (t73 != 71) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x377 = 7;
	uint8_t x379 = 54U;
	static volatile uint64_t x380 = UINT64_MAX;
	static uint64_t t74 = 7630834447032258151LLU;

	t74 = (((x377+x378)%x379)+x380);

	if (t74 != 45LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x382 = UINT8_MAX;
	volatile int16_t x383 = INT16_MIN;
	int16_t x384 = -1;
	volatile int64_t t75 = -4150848060263156334LL;

	t75 = (((x381+x382)%x383)+x384);

	if (t75 != 7035LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x389 = UINT32_MAX;
	int16_t x390 = -1;
	static uint64_t x392 = UINT64_MAX;
	volatile uint64_t t76 = 3628519281821446085LLU;

	t76 = (((x389+x390)%x391)+x392);

	if (t76 != 3LLU) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x393 = INT16_MIN;
	volatile uint64_t x394 = UINT64_MAX;
	uint8_t x395 = 1U;
	uint16_t x396 = 3U;
	volatile uint64_t t77 = 176626842948LLU;

	t77 = (((x393+x394)%x395)+x396);

	if (t77 != 3LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x405 = 26U;
	static volatile int8_t x406 = -1;
	volatile uint8_t x408 = 50U;
	volatile uint64_t t78 = 1377313849123023LLU;

	t78 = (((x405+x406)%x407)+x408);

	if (t78 != 75LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x410 = INT8_MAX;
	static int64_t x412 = 2LL;
	uint64_t t79 = 34443343351800LLU;

	t79 = (((x409+x410)%x411)+x412);

	if (t79 != 2LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x413 = INT32_MAX;
	int8_t x414 = -1;
	uint8_t x415 = UINT8_MAX;
	static uint32_t x416 = 372129U;

	t80 = (((x413+x414)%x415)+x416);

	if (t80 != 372255U) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x421 = 692795;
	uint32_t x423 = 1U;
	int32_t x424 = -1;
	volatile uint32_t t81 = UINT32_MAX;

	t81 = (((x421+x422)%x423)+x424);

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x425 = 15135U;
	int8_t x426 = -1;
	volatile int64_t t82 = -42136089LL;

	t82 = (((x425+x426)%x427)+x428);

	if (t82 != 15135LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x429 = INT64_MIN;
	uint64_t x430 = 7LLU;
	static int64_t x431 = -1LL;
	uint8_t x432 = UINT8_MAX;
	volatile uint64_t t83 = 320650607709452LLU;

	t83 = (((x429+x430)%x431)+x432);

	if (t83 != 9223372036854776070LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x433 = 1;
	int16_t x436 = INT16_MAX;
	int64_t t84 = 10302244838270956LL;

	t84 = (((x433+x434)%x435)+x436);

	if (t84 != 32767LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x437 = INT8_MAX;
	int32_t x439 = 14611;
	volatile uint64_t x440 = UINT64_MAX;
	volatile uint64_t t85 = 23923485LLU;

	t85 = (((x437+x438)%x439)+x440);

	if (t85 != 6909LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x446 = UINT16_MAX;
	int16_t x447 = INT16_MAX;
	int8_t x448 = INT8_MIN;
	static volatile uint64_t t86 = 175867LLU;

	t86 = (((x445+x446)%x447)+x448);

	if (t86 != 32597LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x450 = -1LL;
	int64_t x451 = INT64_MIN;
	volatile int64_t t87 = INT64_MIN;

	t87 = (((x449+x450)%x451)+x452);

	if (t87 != INT64_MIN) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int8_t x454 = 2;
	int8_t x455 = 16;
	int32_t x456 = -74301529;
	uint32_t t88 = 3480304U;

	t88 = (((x453+x454)%x455)+x456);

	if (t88 != 4220665774U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x457 = 43;
	volatile int32_t x458 = 12650944;
	int16_t x459 = -1;

	t89 = (((x457+x458)%x459)+x460);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x461 = 440528224657675015LL;
	int16_t x463 = -1;
	volatile uint8_t x464 = 126U;
	int64_t t90 = -1998124454137LL;

	t90 = (((x461+x462)%x463)+x464);

	if (t90 != 126LL) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x465 = -1LL;
	int8_t x466 = INT8_MIN;
	static int32_t x468 = INT32_MAX;
	volatile int64_t t91 = 21661LL;

	t91 = (((x465+x466)%x467)+x468);

	if (t91 != 2147483518LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x473 = 2646333457903016097LLU;
	volatile int32_t x474 = INT32_MIN;
	int64_t x476 = -4936477137146842LL;
	uint64_t t92 = 15179514906458624LLU;

	t92 = (((x473+x474)%x475)+x476);

	if (t92 != 2641396978618385607LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static uint8_t x481 = UINT8_MAX;
	int32_t x482 = INT32_MIN;
	int32_t x483 = 10618924;
	uint64_t x484 = UINT64_MAX;
	static uint64_t t93 = 5201356099982LLU;

	t93 = (((x481+x482)%x483)+x484);

	if (t93 != 18446744073707090870LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x485 = INT16_MIN;
	uint32_t x486 = 7753U;
	volatile int32_t x487 = -20240055;
	int64_t x488 = -122596LL;
	volatile int64_t t94 = -67596748365LL;

	t94 = (((x485+x486)%x487)+x488);

	if (t94 != 20092444LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x489 = 77;
	int16_t x491 = -1;
	int64_t t95 = 336803LL;

	t95 = (((x489+x490)%x491)+x492);

	if (t95 != -2147483648LL) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x493 = INT16_MIN;
	static uint32_t x494 = 43620590U;
	static int64_t x495 = INT64_MIN;
	int16_t x496 = INT16_MAX;
	int64_t t96 = -1531155557211740866LL;

	t96 = (((x493+x494)%x495)+x496);

	if (t96 != 43620589LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint32_t x497 = 1U;
	static volatile uint8_t x498 = 12U;

	t97 = (((x497+x498)%x499)+x500);

	if (t97 != 24LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x501 = -1LL;
	int8_t x503 = -1;
	int64_t t98 = -142LL;

	t98 = (((x501+x502)%x503)+x504);

	if (t98 != 4294967295LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x507 = -1;
	int16_t x508 = 0;
	static int32_t t99 = -103;

	t99 = (((x505+x506)%x507)+x508);

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

