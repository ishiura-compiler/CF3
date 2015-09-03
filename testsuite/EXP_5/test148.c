#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x27 = -1;
volatile int64_t t5 = 469261722LL;
int16_t x35 = INT16_MIN;
int16_t x38 = 107;
int32_t x60 = 2;
int16_t x62 = -348;
volatile uint64_t x64 = UINT64_MAX;
uint64_t t11 = 360969513LLU;
uint32_t x65 = 969U;
static volatile int8_t x71 = INT8_MIN;
int8_t x72 = INT8_MIN;
int8_t x73 = INT8_MIN;
int64_t x77 = -1LL;
uint32_t x80 = 2979154U;
int32_t x81 = 3112035;
volatile uint64_t t17 = 618045LLU;
volatile int64_t t18 = 956119092LL;
static int64_t x103 = -1989069823981461LL;
int32_t x105 = -1;
int64_t x112 = INT64_MAX;
int8_t x121 = -1;
static uint64_t t26 = 34785490358733896LLU;
uint32_t x133 = 3723436U;
static int8_t x137 = -1;
int64_t x138 = -1LL;
int32_t x144 = -6392;
int64_t t29 = 58LL;
volatile int32_t x145 = 7;
uint64_t x146 = 866LLU;
uint8_t x148 = 0U;
int32_t x151 = INT32_MIN;
volatile int64_t x152 = -90860574LL;
volatile int64_t t31 = -405244LL;
static int8_t x155 = -1;
int64_t x160 = -10930050LL;
volatile int64_t t34 = -1095699049LL;
static volatile int64_t t35 = -228650LL;
static int64_t x172 = INT64_MAX;
int32_t x176 = INT32_MAX;
uint8_t x179 = 5U;
uint16_t x185 = 454U;
uint32_t x193 = 0U;
static int64_t t41 = 116900658442LL;
int64_t x201 = INT64_MIN;
int8_t x208 = INT8_MIN;
static int8_t x213 = INT8_MAX;
static uint8_t x224 = UINT8_MAX;
int32_t x225 = -1;
uint8_t x226 = UINT8_MAX;
int32_t x228 = -1;
int64_t t52 = -3LL;
int8_t x244 = INT8_MIN;
int64_t x248 = -334200189151590LL;
int32_t x251 = -391;
static uint16_t x252 = 1541U;
static volatile int16_t x253 = INT16_MAX;
static int16_t x254 = -1;
uint32_t x259 = UINT32_MAX;
volatile int8_t x262 = -1;
int16_t x272 = -1450;
uint16_t x274 = 4625U;
int32_t x287 = -410;
volatile int64_t x304 = -31120774LL;
volatile int64_t t66 = 33949LL;
uint64_t x307 = 8237686LLU;
uint64_t x319 = UINT64_MAX;
int8_t x320 = INT8_MIN;
static int8_t x340 = INT8_MIN;
uint64_t t74 = 1005LLU;
static int16_t x346 = -1444;
int32_t t77 = 6328613;
uint32_t x353 = 1U;
static volatile uint16_t x355 = 2170U;
int8_t x356 = INT8_MIN;
uint8_t x364 = UINT8_MAX;
static volatile int8_t x366 = -1;
volatile uint16_t x369 = 3U;
volatile uint16_t x377 = 4U;
volatile uint64_t t84 = 180156092LLU;
int64_t t85 = 8LL;
static volatile uint64_t t86 = 57LLU;
volatile int8_t x401 = INT8_MIN;
static uint32_t x405 = UINT32_MAX;
int8_t x408 = INT8_MIN;
volatile int8_t x410 = -16;
int16_t x411 = -39;
int16_t x416 = 10;
static int8_t x425 = -5;
int32_t t93 = 4084116;
uint16_t x443 = 838U;
int32_t x444 = INT32_MIN;
uint64_t x447 = 1163926420LLU;
volatile int64_t x455 = 4LL;
int16_t x456 = -1648;
uint8_t x458 = 108U;
int16_t x460 = INT16_MIN;
volatile uint64_t t98 = 440960716575070LLU;
int16_t x464 = -105;


void f0(void) {
	uint32_t x9 = UINT32_MAX;
	uint8_t x10 = 28U;
	uint16_t x11 = 1U;
	volatile int32_t x12 = INT32_MAX;
	volatile uint32_t t0 = 216605382U;

	t0 = (x9%((x10+x11)|x12));

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x13 = 1797U;
	uint64_t x14 = UINT64_MAX;
	int16_t x15 = INT16_MAX;
	int32_t x16 = INT32_MIN;
	uint64_t t1 = 58254649994LLU;

	t1 = (x13%((x14+x15)|x16));

	if (t1 != 1797LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x17 = INT8_MAX;
	volatile int16_t x18 = -5504;
	uint16_t x19 = UINT16_MAX;
	int64_t x20 = -1LL;
	int64_t t2 = -4341672LL;

	t2 = (x17%((x18+x19)|x20));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x21 = -1;
	int8_t x22 = INT8_MAX;
	volatile int16_t x23 = -1;
	volatile int64_t x24 = 51LL;
	static int64_t t3 = 2398120891836706005LL;

	t3 = (x21%((x22+x23)|x24));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x25 = 30153589LL;
	int64_t x26 = 126720832592619297LL;
	uint8_t x28 = UINT8_MAX;
	int64_t t4 = 3642929LL;

	t4 = (x25%((x26+x27)|x28));

	if (t4 != 30153589LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x29 = -7532;
	int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MAX;
	int8_t x32 = -16;

	t5 = (x29%((x30+x31)|x32));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x33 = 60U;
	static volatile int64_t x34 = 13LL;
	static uint8_t x36 = UINT8_MAX;
	static volatile int64_t t6 = 442LL;

	t6 = (x33%((x34+x35)|x36));

	if (t6 != 60LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x37 = INT16_MAX;
	static int32_t x39 = -1;
	volatile int8_t x40 = -48;
	int32_t t7 = -57;

	t7 = (x37%((x38+x39)|x40));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int8_t x45 = -15;
	uint64_t x46 = 58416687LLU;
	static int64_t x47 = -1LL;
	int64_t x48 = -1337094407LL;
	volatile uint64_t t8 = 230599301LLU;

	t8 = (x45%((x46+x47)|x48));

	if (t8 != 1283465458LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x49 = -18;
	int8_t x50 = -1;
	static int64_t x51 = -1LL;
	uint64_t x52 = 2902351144093522LLU;
	uint64_t t9 = 437868866354569LLU;

	t9 = (x49%((x50+x51)|x52));

	if (t9 != 18446744073709551598LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x57 = INT8_MIN;
	int32_t x58 = -1;
	int32_t x59 = -1;
	volatile int32_t t10 = 1;

	t10 = (x57%((x58+x59)|x60));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x61 = INT8_MIN;
	int8_t x63 = INT8_MIN;

	t11 = (x61%((x62+x63)|x64));

	if (t11 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x66 = INT8_MAX;
	volatile uint64_t x67 = 117064164931444LLU;
	static uint64_t x68 = 3013012758685LLU;
	volatile uint64_t t12 = 146530280702704838LLU;

	t12 = (x65%((x66+x67)|x68));

	if (t12 != 969LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x69 = INT16_MAX;
	volatile int32_t x70 = -1;
	static volatile int32_t t13 = 64740439;

	t13 = (x69%((x70+x71)|x72));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x74 = -1;
	volatile int16_t x75 = INT16_MIN;
	volatile int32_t x76 = -137598;
	int32_t t14 = -58563;

	t14 = (x73%((x74+x75)|x76));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x78 = -1LL;
	volatile int64_t x79 = -1LL;
	volatile int64_t t15 = 217690908129059582LL;

	t15 = (x77%((x78+x79)|x80));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x82 = 10625;
	uint64_t x83 = UINT64_MAX;
	int32_t x84 = INT32_MAX;
	uint64_t t16 = 114LLU;

	t16 = (x81%((x82+x83)|x84));

	if (t16 != 3112035LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x85 = UINT8_MAX;
	uint8_t x86 = UINT8_MAX;
	int32_t x87 = INT32_MIN;
	uint64_t x88 = 2LLU;

	t17 = (x85%((x86+x87)|x88));

	if (t17 != 255LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x89 = INT64_MAX;
	int8_t x90 = INT8_MIN;
	static int8_t x91 = 0;
	volatile uint32_t x92 = 471U;

	t18 = (x89%((x90+x91)|x92));

	if (t18 != 2147484467LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x97 = INT16_MAX;
	int16_t x98 = INT16_MAX;
	int16_t x99 = -350;
	static uint32_t x100 = 471U;
	static uint32_t t19 = 17577U;

	t19 = (x97%((x98+x99)|x100));

	if (t19 != 8U) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int64_t x101 = INT64_MAX;
	int8_t x102 = 1;
	int64_t x104 = -1LL;
	int64_t t20 = -966495815196LL;

	t20 = (x101%((x102+x103)|x104));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x106 = INT8_MIN;
	static int8_t x107 = INT8_MIN;
	static int32_t x108 = INT32_MIN;
	volatile int32_t t21 = 34436;

	t21 = (x105%((x106+x107)|x108));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = UINT8_MAX;
	int32_t x110 = INT32_MIN;
	int64_t x111 = -1LL;
	volatile int64_t t22 = 2081953635LL;

	t22 = (x109%((x110+x111)|x112));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x113 = INT32_MIN;
	int16_t x114 = INT16_MIN;
	static int16_t x115 = INT16_MIN;
	volatile int16_t x116 = -5150;
	int32_t t23 = 88669661;

	t23 = (x113%((x114+x115)|x116));

	if (t23 != -598) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x117 = -970809422159976977LL;
	int16_t x118 = INT16_MIN;
	int64_t x119 = 18713809LL;
	int16_t x120 = -322;
	int64_t t24 = -2050769719207586661LL;

	t24 = (x117%((x118+x119)|x120));

	if (t24 != -186LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x122 = INT8_MIN;
	int32_t x123 = 3;
	int64_t x124 = INT64_MAX;
	volatile int64_t t25 = 898319086780589503LL;

	t25 = (x121%((x122+x123)|x124));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x125 = 109U;
	int16_t x126 = INT16_MIN;
	static uint64_t x127 = 16427LLU;
	static int64_t x128 = -1LL;

	t26 = (x125%((x126+x127)|x128));

	if (t26 != 109LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x134 = -25071298867652133LL;
	int8_t x135 = -5;
	volatile int16_t x136 = INT16_MIN;
	volatile int64_t t27 = 167LL;

	t27 = (x133%((x134+x135)|x136));

	if (t27 != 9568LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x139 = -1LL;
	int8_t x140 = 24;
	static volatile int64_t t28 = 88036528019055366LL;

	t28 = (x137%((x138+x139)|x140));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x141 = -1LL;
	volatile uint32_t x142 = 390787U;
	int8_t x143 = -1;

	t29 = (x141%((x142+x143)|x144));

	if (t29 != -1LL) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x147 = -1LL;
	uint64_t t30 = 38601887LLU;

	t30 = (x145%((x146+x147)|x148));

	if (t30 != 7LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x149 = 3LL;
	uint32_t x150 = UINT32_MAX;

	t31 = (x149%((x150+x151)|x152));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x153 = UINT64_MAX;
	static int32_t x154 = INT32_MAX;
	volatile int8_t x156 = INT8_MIN;
	static volatile uint64_t t32 = 52526LLU;

	t32 = (x153%((x154+x155)|x156));

	if (t32 != 1LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x157 = INT16_MAX;
	int64_t x158 = -1LL;
	uint16_t x159 = UINT16_MAX;
	volatile int64_t t33 = -374397342941754LL;

	t33 = (x157%((x158+x159)|x160));

	if (t33 != 32767LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x161 = -589;
	uint32_t x162 = 69061447U;
	volatile int64_t x163 = -1964862129LL;
	int32_t x164 = INT32_MIN;

	t34 = (x161%((x162+x163)|x164));

	if (t34 != -589LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x165 = INT64_MAX;
	int8_t x166 = 1;
	uint16_t x167 = 166U;
	uint8_t x168 = 1U;

	t35 = (x165%((x166+x167)|x168));

	if (t35 != 107LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x169 = INT16_MAX;
	int64_t x170 = INT64_MIN;
	uint64_t x171 = 39923LLU;
	uint64_t t36 = 12LLU;

	t36 = (x169%((x170+x171)|x172));

	if (t36 != 32767LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x173 = UINT8_MAX;
	static int64_t x174 = INT64_MAX;
	int16_t x175 = -487;
	static int64_t t37 = 1LL;

	t37 = (x173%((x174+x175)|x176));

	if (t37 != 255LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x177 = INT8_MIN;
	int8_t x178 = INT8_MAX;
	int16_t x180 = -373;
	int32_t t38 = -2;

	t38 = (x177%((x178+x179)|x180));

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x186 = UINT16_MAX;
	int64_t x187 = 5631708132492698LL;
	uint32_t x188 = 3603628U;
	volatile int64_t t39 = -1581764332LL;

	t39 = (x185%((x186+x187)|x188));

	if (t39 != 454LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x189 = INT64_MIN;
	static uint64_t x190 = 6489LLU;
	int8_t x191 = INT8_MIN;
	static uint32_t x192 = 3U;
	volatile uint64_t t40 = 34424310270359LLU;

	t40 = (x189%((x190+x191)|x192));

	if (t40 != 3221LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x194 = UINT16_MAX;
	int64_t x195 = INT64_MIN;
	int16_t x196 = INT16_MIN;

	t41 = (x193%((x194+x195)|x196));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x197 = 3633451861249027LLU;
	static uint8_t x198 = 7U;
	int8_t x199 = -1;
	uint32_t x200 = 1753581606U;
	static uint64_t t42 = 8667571890209983LLU;

	t42 = (x197%((x198+x199)|x200));

	if (t42 != 962729725LLU) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint8_t x202 = 1U;
	int16_t x203 = INT16_MAX;
	int32_t x204 = -1;
	volatile int64_t t43 = -382262992259337LL;

	t43 = (x201%((x202+x203)|x204));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x205 = INT32_MAX;
	volatile int64_t x206 = INT64_MIN;
	int64_t x207 = 2878955066951LL;
	volatile int64_t t44 = 12LL;

	t44 = (x205%((x206+x207)|x208));

	if (t44 != 40LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x209 = 3U;
	uint16_t x210 = 0U;
	volatile uint16_t x211 = 134U;
	static int64_t x212 = 532415543880LL;
	volatile int64_t t45 = -17341963222910LL;

	t45 = (x209%((x210+x211)|x212));

	if (t45 != 3LL) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x214 = INT16_MIN;
	int64_t x215 = 0LL;
	static int8_t x216 = -1;
	static volatile int64_t t46 = 55810292189LL;

	t46 = (x213%((x214+x215)|x216));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x217 = -1;
	uint64_t x218 = 2LLU;
	int64_t x219 = INT64_MAX;
	uint16_t x220 = 14U;
	uint64_t t47 = 24397993309648LLU;

	t47 = (x217%((x218+x219)|x220));

	if (t47 != 9223372036854775792LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x221 = 1154;
	static volatile int64_t x222 = 721LL;
	int16_t x223 = -336;
	volatile int64_t t48 = 472132LL;

	t48 = (x221%((x222+x223)|x224));

	if (t48 != 132LL) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x227 = UINT64_MAX;
	volatile uint64_t t49 = 4256LLU;

	t49 = (x225%((x226+x227)|x228));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x229 = 5;
	uint8_t x230 = 1U;
	uint32_t x231 = 194281473U;
	uint8_t x232 = 1U;
	volatile uint32_t t50 = 3063285U;

	t50 = (x229%((x230+x231)|x232));

	if (t50 != 5U) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x233 = INT16_MIN;
	uint16_t x234 = 1U;
	uint64_t x235 = 2777589543563189LLU;
	static int64_t x236 = INT64_MIN;
	volatile uint64_t t51 = 48LLU;

	t51 = (x233%((x234+x235)|x236));

	if (t51 != 9220594447311179850LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = INT32_MAX;
	int32_t x238 = -1;
	uint16_t x239 = UINT16_MAX;
	int64_t x240 = INT64_MAX;

	t52 = (x237%((x238+x239)|x240));

	if (t52 != 2147483647LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x241 = UINT64_MAX;
	int8_t x242 = INT8_MIN;
	static int32_t x243 = -1;
	volatile uint64_t t53 = 1768LLU;

	t53 = (x241%((x242+x243)|x244));

	if (t53 != 0LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint8_t x245 = 19U;
	uint16_t x246 = UINT16_MAX;
	volatile uint32_t x247 = UINT32_MAX;
	volatile int64_t t54 = -850141LL;

	t54 = (x245%((x246+x247)|x248));

	if (t54 != 19LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x249 = INT32_MAX;
	uint8_t x250 = 3U;
	volatile int32_t t55 = -11966;

	t55 = (x249%((x250+x251)|x252));

	if (t55 != 136) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x255 = 396567;
	int16_t x256 = INT16_MIN;
	volatile int32_t t56 = -232469;

	t56 = (x253%((x254+x255)|x256));

	if (t56 != 3349) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x257 = INT64_MIN;
	int64_t x258 = INT64_MIN;
	uint8_t x260 = UINT8_MAX;
	static volatile int64_t t57 = -4774123LL;

	t57 = (x257%((x258+x259)|x260));

	if (t57 != -4294967295LL) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = -43692868987209972LL;
	static uint64_t x263 = UINT64_MAX;
	volatile int64_t x264 = -65LL;
	uint64_t t58 = 4299065LLU;

	t58 = (x261%((x262+x263)|x264));

	if (t58 != 18403051204722341644LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x265 = -1459668LL;
	int32_t x266 = -127474978;
	int64_t x267 = -1LL;
	int16_t x268 = INT16_MAX;
	int64_t t59 = -29621437LL;

	t59 = (x265%((x266+x267)|x268));

	if (t59 != -1459668LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x269 = -2859851LL;
	int64_t x270 = INT64_MIN;
	uint16_t x271 = 9080U;
	int64_t t60 = 32060039144656162LL;

	t60 = (x269%((x270+x271)|x272));

	if (t60 != -239LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x273 = 1;
	int8_t x275 = INT8_MIN;
	uint32_t x276 = 15595U;
	uint32_t t61 = 872U;

	t61 = (x273%((x274+x275)|x276));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x277 = 733U;
	uint8_t x278 = UINT8_MAX;
	volatile int32_t x279 = 13960;
	static int64_t x280 = INT64_MIN;
	int64_t t62 = 1LL;

	t62 = (x277%((x278+x279)|x280));

	if (t62 != 733LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x285 = 11U;
	int16_t x286 = 7;
	int16_t x288 = -1610;
	volatile int32_t t63 = -1;

	t63 = (x285%((x286+x287)|x288));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x289 = 434831870877739LLU;
	uint32_t x290 = UINT32_MAX;
	uint64_t x291 = 5423649035502285LLU;
	volatile int16_t x292 = INT16_MIN;
	static uint64_t t64 = 1LLU;

	t64 = (x289%((x290+x291)|x292));

	if (t64 != 434831870877739LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x297 = INT32_MIN;
	volatile uint8_t x298 = 20U;
	volatile int16_t x299 = -5;
	volatile uint32_t x300 = 120053U;
	volatile uint32_t t65 = 1613194904U;

	t65 = (x297%((x298+x299)|x300));

	if (t65 != 36830U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x301 = 12592;
	volatile int8_t x302 = -1;
	int32_t x303 = -1;

	t66 = (x301%((x302+x303)|x304));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x305 = INT32_MAX;
	uint8_t x306 = UINT8_MAX;
	int64_t x308 = INT64_MIN;
	uint64_t t67 = 1LLU;

	t67 = (x305%((x306+x307)|x308));

	if (t67 != 2147483647LLU) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x313 = 859267150U;
	int16_t x314 = -1;
	uint16_t x315 = UINT16_MAX;
	uint16_t x316 = UINT16_MAX;
	volatile uint32_t t68 = 129256056U;

	t68 = (x313%((x314+x315)|x316));

	if (t68 != 37765U) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x317 = 3544LLU;
	volatile int64_t x318 = INT64_MIN;
	uint64_t t69 = 557544734828526988LLU;

	t69 = (x317%((x318+x319)|x320));

	if (t69 != 3544LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x321 = -1;
	int8_t x322 = INT8_MIN;
	static uint16_t x323 = 449U;
	int64_t x324 = -2062457767687417LL;
	int64_t t70 = 1767404973LL;

	t70 = (x321%((x322+x323)|x324));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x325 = INT64_MIN;
	static uint16_t x326 = UINT16_MAX;
	static volatile uint16_t x327 = UINT16_MAX;
	uint16_t x328 = 158U;
	int64_t t71 = -1361433642LL;

	t71 = (x325%((x326+x327)|x328));

	if (t71 != -32768LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x329 = INT16_MIN;
	volatile int64_t x330 = INT64_MIN;
	uint16_t x331 = 6U;
	static volatile uint64_t x332 = UINT64_MAX;
	volatile uint64_t t72 = 68194439LLU;

	t72 = (x329%((x330+x331)|x332));

	if (t72 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x333 = 6822113LLU;
	static int16_t x334 = INT16_MIN;
	int8_t x335 = INT8_MAX;
	static int8_t x336 = -11;
	uint64_t t73 = 4473371196847051LLU;

	t73 = (x333%((x334+x335)|x336));

	if (t73 != 6822113LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x337 = 3910177312440LLU;
	volatile uint16_t x338 = 187U;
	int8_t x339 = -4;

	t74 = (x337%((x338+x339)|x340));

	if (t74 != 3910177312440LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x341 = UINT64_MAX;
	uint64_t x342 = UINT64_MAX;
	int32_t x343 = INT32_MAX;
	int32_t x344 = INT32_MIN;
	volatile uint64_t t75 = 305LLU;

	t75 = (x341%((x342+x343)|x344));

	if (t75 != 1LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x345 = -1LL;
	int16_t x347 = 61;
	int64_t x348 = -353619520845805LL;
	int64_t t76 = -2066791LL;

	t76 = (x345%((x346+x347)|x348));

	if (t76 != -1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x349 = -1;
	int32_t x350 = -1;
	uint16_t x351 = 3U;
	uint16_t x352 = 13206U;

	t77 = (x349%((x350+x351)|x352));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x354 = -1029;
	uint32_t t78 = 31061967U;

	t78 = (x353%((x354+x355)|x356));

	if (t78 != 1U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x357 = -1;
	int16_t x358 = INT16_MIN;
	static volatile uint64_t x359 = 1334851LLU;
	int8_t x360 = -5;
	uint64_t t79 = 688327LLU;

	t79 = (x357%((x358+x359)|x360));

	if (t79 != 4LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x361 = INT8_MAX;
	int8_t x362 = INT8_MAX;
	int16_t x363 = -1;
	int32_t t80 = 225;

	t80 = (x361%((x362+x363)|x364));

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x365 = UINT16_MAX;
	static int8_t x367 = -1;
	int64_t x368 = INT64_MAX;
	int64_t t81 = -6133855404LL;

	t81 = (x365%((x366+x367)|x368));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x370 = -1LL;
	uint64_t x371 = UINT64_MAX;
	uint8_t x372 = 1U;
	volatile uint64_t t82 = 3736795143563365LLU;

	t82 = (x369%((x370+x371)|x372));

	if (t82 != 3LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x378 = 845665812017LLU;
	volatile uint64_t x379 = UINT64_MAX;
	int8_t x380 = INT8_MIN;
	uint64_t t83 = 319092796LLU;

	t83 = (x377%((x378+x379)|x380));

	if (t83 != 4LLU) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x385 = INT16_MIN;
	static volatile int8_t x386 = 1;
	uint64_t x387 = 15537878124LLU;
	int8_t x388 = -1;

	t84 = (x385%((x386+x387)|x388));

	if (t84 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x389 = 1;
	int32_t x390 = -1;
	int8_t x391 = INT8_MAX;
	volatile int64_t x392 = 1636156LL;

	t85 = (x389%((x390+x391)|x392));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x393 = UINT64_MAX;
	volatile int64_t x394 = INT64_MIN;
	uint16_t x395 = UINT16_MAX;
	int64_t x396 = -1LL;

	t86 = (x393%((x394+x395)|x396));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x397 = 35540045U;
	int64_t x398 = 18711722177810032LL;
	static uint32_t x399 = 20489087U;
	int8_t x400 = -5;
	volatile int64_t t87 = 61LL;

	t87 = (x397%((x398+x399)|x400));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x402 = -1;
	int8_t x403 = INT8_MIN;
	static int64_t x404 = INT64_MIN;
	int64_t t88 = -1LL;

	t88 = (x401%((x402+x403)|x404));

	if (t88 != -128LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x406 = -1;
	uint16_t x407 = 19U;
	static uint32_t t89 = 26430U;

	t89 = (x405%((x406+x407)|x408));

	if (t89 != 109U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x409 = INT16_MAX;
	int32_t x412 = -11;
	int32_t t90 = 151370869;

	t90 = (x409%((x410+x411)|x412));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x413 = -1LL;
	int16_t x414 = INT16_MIN;
	uint64_t x415 = UINT64_MAX;
	uint64_t t91 = 14LLU;

	t91 = (x413%((x414+x415)|x416));

	if (t91 != 32768LLU) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x421 = 114U;
	static uint64_t x422 = 2415375483644470587LLU;
	volatile uint8_t x423 = 1U;
	int64_t x424 = INT64_MAX;
	volatile uint64_t t92 = 115239219615LLU;

	t92 = (x421%((x422+x423)|x424));

	if (t92 != 114LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x426 = UINT8_MAX;
	uint16_t x427 = 1U;
	int32_t x428 = INT32_MIN;

	t93 = (x425%((x426+x427)|x428));

	if (t93 != -5) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x441 = 26417U;
	uint32_t x442 = 179194U;
	uint32_t t94 = 1806211U;

	t94 = (x441%((x442+x443)|x444));

	if (t94 != 26417U) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x445 = INT8_MIN;
	int64_t x446 = INT64_MIN;
	volatile int64_t x448 = -1565532822702364950LL;
	volatile uint64_t t95 = 73843991399LLU;

	t95 = (x445%((x446+x447)|x448));

	if (t95 != 1565532821538439042LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x449 = INT8_MAX;
	int64_t x450 = -1LL;
	int16_t x451 = 1;
	static volatile int8_t x452 = INT8_MIN;
	int64_t t96 = -176956327584194LL;

	t96 = (x449%((x450+x451)|x452));

	if (t96 != 127LL) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x453 = 7067831419LL;
	volatile uint16_t x454 = UINT16_MAX;
	static volatile int64_t t97 = -171LL;

	t97 = (x453%((x454+x455)|x456));

	if (t97 != 89LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x457 = UINT64_MAX;
	uint8_t x459 = UINT8_MAX;

	t98 = (x457%((x458+x459)|x460));

	if (t98 != 32404LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x461 = 4;
	uint16_t x462 = 24U;
	int32_t x463 = -5172779;
	volatile int32_t t99 = 1;

	t99 = (x461%((x462+x463)|x464));

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

