#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x8 = 4890704555064195632LLU;
uint32_t x9 = UINT32_MAX;
uint64_t x15 = 31927224261863714LLU;
int16_t x20 = INT16_MIN;
static int64_t t4 = 65277975574413LL;
static uint16_t x21 = 164U;
uint64_t x27 = UINT64_MAX;
int32_t x32 = -1;
int8_t x36 = INT8_MIN;
static int16_t x39 = INT16_MIN;
int64_t x43 = INT64_MIN;
volatile uint16_t x44 = 0U;
int16_t x53 = -1;
volatile int32_t t13 = -700079088;
static volatile int16_t x62 = 461;
static uint32_t x72 = 58U;
volatile uint8_t x76 = 11U;
int16_t x77 = INT16_MIN;
uint16_t x78 = UINT16_MAX;
uint64_t t19 = 14867717671884LLU;
uint16_t x83 = 9457U;
static uint32_t x88 = 30U;
uint16_t x90 = 839U;
static int64_t x98 = -1LL;
int64_t t26 = -140711515033LL;
volatile uint8_t x113 = UINT8_MAX;
int8_t x119 = -1;
static volatile uint32_t t31 = UINT32_MAX;
int16_t x130 = INT16_MIN;
int8_t x132 = 7;
int8_t x133 = INT8_MAX;
int16_t x136 = -1;
volatile int8_t x137 = -1;
volatile int64_t x138 = INT64_MIN;
uint32_t x139 = 97U;
volatile int64_t t34 = 5755LL;
uint8_t x147 = UINT8_MAX;
int64_t x148 = -111957641LL;
static int8_t x150 = -1;
volatile int16_t x154 = INT16_MIN;
volatile int32_t x167 = INT32_MIN;
uint32_t x173 = 281U;
int32_t x174 = 37951;
uint8_t x188 = 5U;
uint64_t t44 = 1111912147251951LLU;
static volatile int16_t x190 = -1;
static int64_t x194 = -1LL;
uint8_t x199 = 2U;
int8_t x200 = INT8_MAX;
static uint16_t x204 = 22679U;
volatile int64_t t48 = -408194340LL;
int64_t x206 = INT64_MIN;
int32_t t50 = 3;
int16_t x220 = -2682;
static uint8_t x222 = 4U;
static int16_t x228 = 4265;
volatile int32_t t54 = 1;
int8_t x234 = INT8_MIN;
volatile int32_t t56 = 355903685;
static volatile uint64_t t57 = 1531103718LLU;
int32_t x244 = -1;
volatile uint64_t t58 = UINT64_MAX;
static int8_t x246 = -1;
uint8_t x247 = 2U;
volatile uint16_t x264 = 5U;
static volatile int64_t x267 = 513228143LL;
volatile int64_t x269 = INT64_MIN;
uint64_t t65 = 1578878LLU;
uint32_t x275 = 12U;
static volatile uint16_t x279 = 135U;
int16_t x285 = INT16_MIN;
int8_t x291 = -1;
int64_t x301 = INT64_MAX;
int32_t x304 = 3;
int64_t x306 = INT64_MIN;
volatile int16_t x307 = -1530;
volatile int16_t x310 = -2;
int32_t t75 = 57;
static int64_t x313 = -1LL;
uint16_t x314 = 6441U;
volatile uint16_t x316 = UINT16_MAX;
int8_t x324 = INT8_MIN;
int64_t t79 = 1012931870311019LL;
uint16_t x329 = 26575U;
uint16_t x337 = UINT16_MAX;
int16_t x344 = -1;
uint64_t t82 = UINT64_MAX;
int16_t x351 = -73;
volatile int64_t t84 = -3LL;
static int8_t x353 = INT8_MIN;
volatile int16_t x357 = INT16_MIN;
volatile int32_t t86 = 23;
static int16_t x362 = INT16_MIN;
volatile uint64_t t88 = 4313207131857715344LLU;
int8_t x375 = -1;
uint8_t x376 = UINT8_MAX;
volatile int8_t x377 = 11;
volatile int16_t x378 = -14;
static volatile int64_t t91 = 3309142790720304LL;
volatile int8_t x382 = INT8_MIN;
uint32_t t92 = 156U;
uint32_t x388 = 10U;
uint64_t x389 = UINT64_MAX;
static uint64_t x393 = 123332504279549780LLU;
volatile uint8_t x401 = UINT8_MAX;
static volatile int8_t x406 = INT8_MIN;
int16_t x415 = 255;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int8_t x2 = INT8_MIN;
	static int64_t x3 = -1LL;
	uint64_t x4 = 232576472LLU;
	volatile uint64_t t0 = UINT64_MAX;

	t0 = (((x1%x2)^x3)|x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	uint32_t x6 = 342772U;
	int32_t x7 = -1;
	uint64_t t1 = 25LLU;

	t1 = (((x5%x6)^x7)|x8);

	if (t1 != 4890704557312539447LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x10 = 1;
	volatile uint32_t x11 = 892315U;
	uint32_t x12 = 63U;
	uint32_t t2 = 3790U;

	t2 = (((x9%x10)^x11)|x12);

	if (t2 != 892351U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 250595729434735785LL;
	uint64_t x14 = UINT64_MAX;
	volatile uint32_t x16 = 1698U;
	uint64_t t3 = 6458016609636822589LLU;

	t3 = (((x13%x14)^x15)|x16);

	if (t3 != 219311719634509739LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int64_t x18 = -4180216718485075LL;
	int32_t x19 = 6291;

	t4 = (((x17%x18)^x19)|x20);

	if (t4 != -6381LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = -1;
	volatile int32_t x23 = INT32_MIN;
	static volatile int64_t x24 = -26410112153345924LL;
	static int64_t t5 = -250LL;

	t5 = (((x21%x22)^x23)|x24);

	if (t5 != -1767956356LL) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile int32_t x25 = INT32_MAX;
	uint64_t x26 = UINT64_MAX;
	static uint16_t x28 = UINT16_MAX;
	volatile uint64_t t6 = 2655580041088LLU;

	t6 = (((x25%x26)^x27)|x28);

	if (t6 != 18446744071562133503LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x29 = 937400452U;
	int64_t x30 = 216167423542619LL;
	static int64_t x31 = INT64_MAX;
	int64_t t7 = 2088291147099833LL;

	t7 = (((x29%x30)^x31)|x32);

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -19475653923LL;
	uint16_t x34 = 38U;
	uint64_t x35 = UINT64_MAX;
	volatile uint64_t t8 = 1LLU;

	t8 = (((x33%x34)^x35)|x36);

	if (t8 != 18446744073709551506LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -35;
	int64_t x38 = INT64_MAX;
	int8_t x40 = -5;
	volatile int64_t t9 = 10871LL;

	t9 = (((x37%x38)^x39)|x40);

	if (t9 != -1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x41 = INT64_MIN;
	volatile int16_t x42 = INT16_MIN;
	static int64_t t10 = INT64_MIN;

	t10 = (((x41%x42)^x43)|x44);

	if (t10 != INT64_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = 153201LL;
	int32_t x46 = INT32_MIN;
	uint16_t x47 = 48U;
	uint8_t x48 = 87U;
	int64_t t11 = -61246920222LL;

	t11 = (((x45%x46)^x47)|x48);

	if (t11 != 153175LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x49 = 349U;
	static uint64_t x50 = 7501LLU;
	volatile uint64_t x51 = 515143346LLU;
	int8_t x52 = INT8_MAX;
	volatile uint64_t t12 = 496852LLU;

	t12 = (((x49%x50)^x51)|x52);

	if (t12 != 515143679LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x54 = 107U;
	volatile int32_t x55 = -1;
	int16_t x56 = INT16_MAX;

	t13 = (((x53%x54)^x55)|x56);

	if (t13 != 32767) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	static int64_t x58 = -1LL;
	volatile int64_t x59 = INT64_MAX;
	int32_t x60 = 806;
	volatile uint64_t t14 = 88802322LLU;

	t14 = (((x57%x58)^x59)|x60);

	if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	volatile int64_t x63 = INT64_MAX;
	int32_t x64 = -1;
	volatile int64_t t15 = 59LL;

	t15 = (((x61%x62)^x63)|x64);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = -10329;
	static int64_t x66 = -1547595773568039836LL;
	uint64_t x67 = 943451020227751603LLU;
	int64_t x68 = -1LL;
	volatile uint64_t t16 = UINT64_MAX;

	t16 = (((x65%x66)^x67)|x68);

	if (t16 != UINT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = INT64_MIN;
	volatile int32_t x70 = -1;
	uint32_t x71 = UINT32_MAX;
	int64_t t17 = 31356437589491LL;

	t17 = (((x69%x70)^x71)|x72);

	if (t17 != 4294967295LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	int64_t x74 = 3206205LL;
	static int8_t x75 = -1;
	static int64_t t18 = 273965LL;

	t18 = (((x73%x74)^x75)|x76);

	if (t18 != 1597599LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x79 = 8055857874921LLU;
	volatile int64_t x80 = INT64_MIN;

	t19 = (((x77%x78)^x79)|x80);

	if (t19 != 18446736017851647977LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static int32_t x82 = -1;
	int64_t x84 = INT64_MIN;
	static volatile int64_t t20 = 58145313288667LL;

	t20 = (((x81%x82)^x83)|x84);

	if (t20 != -9223372036854766351LL) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x85 = INT16_MIN;
	volatile int64_t x86 = INT64_MIN;
	static volatile int64_t x87 = 63073LL;
	static volatile int64_t t21 = -278387LL;

	t21 = (((x85%x86)^x87)|x88);

	if (t21 != -35201LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 19223064U;
	static int8_t x91 = -1;
	uint16_t x92 = UINT16_MAX;
	static uint32_t t22 = UINT32_MAX;

	t22 = (((x89%x90)^x91)|x92);

	if (t22 != UINT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = UINT8_MAX;
	volatile int64_t x94 = 2824535060587753LL;
	static int32_t x95 = INT32_MIN;
	static int32_t x96 = -1;
	int64_t t23 = 2149027885003627LL;

	t23 = (((x93%x94)^x95)|x96);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	int16_t x99 = INT16_MIN;
	static int32_t x100 = INT32_MAX;
	volatile int64_t t24 = -107852215162LL;

	t24 = (((x97%x98)^x99)|x100);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = 29621384LLU;
	int16_t x102 = INT16_MIN;
	int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	volatile uint64_t t25 = 4009899626LLU;

	t25 = (((x101%x102)^x103)|x104);

	if (t25 != 18446744073709550728LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x105 = INT16_MIN;
	int8_t x106 = INT8_MAX;
	uint8_t x107 = UINT8_MAX;
	static int64_t x108 = INT64_MIN;

	t26 = (((x105%x106)^x107)|x108);

	if (t26 != -255LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 0U;
	static volatile uint16_t x110 = UINT16_MAX;
	volatile uint64_t x111 = 7661504340LLU;
	int8_t x112 = INT8_MIN;
	static uint64_t t27 = 6671593LLU;

	t27 = (((x109%x110)^x111)|x112);

	if (t27 != 18446744073709551572LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x114 = 4;
	uint32_t x115 = 7U;
	int8_t x116 = -1;
	volatile uint32_t t28 = UINT32_MAX;

	t28 = (((x113%x114)^x115)|x116);

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MAX;
	int32_t x118 = -8245083;
	static int64_t x120 = INT64_MIN;
	static volatile int64_t t29 = -2706LL;

	t29 = (((x117%x118)^x119)|x120);

	if (t29 != -32768LL) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -4001;
	int16_t x122 = -1;
	int64_t x123 = INT64_MIN;
	volatile int8_t x124 = 13;
	int64_t t30 = -51032225761576LL;

	t30 = (((x121%x122)^x123)|x124);

	if (t30 != -9223372036854775795LL) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -1;
	int16_t x126 = 1;
	static int16_t x127 = 8;
	uint32_t x128 = UINT32_MAX;

	t31 = (((x125%x126)^x127)|x128);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = -1;
	int16_t x131 = -10;
	volatile int32_t t32 = 0;

	t32 = (((x129%x130)^x131)|x132);

	if (t32 != 15) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x134 = INT32_MIN;
	uint64_t x135 = 89LLU;
	uint64_t t33 = UINT64_MAX;

	t33 = (((x133%x134)^x135)|x136);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x140 = INT8_MAX;

	t34 = (((x137%x138)^x139)|x140);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = 18913444U;
	int32_t x146 = INT32_MAX;
	volatile int64_t t35 = -14LL;

	t35 = (((x145%x146)^x147)|x148);

	if (t35 != -109856385LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x149 = 32733403;
	uint16_t x151 = 4076U;
	int64_t x152 = INT64_MAX;
	static int64_t t36 = INT64_MAX;

	t36 = (((x149%x150)^x151)|x152);

	if (t36 != INT64_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x153 = INT8_MIN;
	static uint64_t x155 = UINT64_MAX;
	static uint32_t x156 = 210U;
	volatile uint64_t t37 = 1309336LLU;

	t37 = (((x153%x154)^x155)|x156);

	if (t37 != 255LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x161 = 415845564;
	static uint16_t x162 = UINT16_MAX;
	uint8_t x163 = 83U;
	uint64_t x164 = UINT64_MAX;
	uint64_t t38 = UINT64_MAX;

	t38 = (((x161%x162)^x163)|x164);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = -1LL;
	uint32_t x166 = 55167U;
	static volatile int64_t x168 = 63932316LL;
	volatile int64_t t39 = -10315048LL;

	t39 = (((x165%x166)^x167)|x168);

	if (t39 != 2147483647LL) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x169 = 5U;
	static volatile int8_t x170 = -1;
	int32_t x171 = INT32_MIN;
	volatile uint64_t x172 = UINT64_MAX;
	static volatile uint64_t t40 = UINT64_MAX;

	t40 = (((x169%x170)^x171)|x172);

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x175 = 1;
	uint16_t x176 = 3283U;
	uint32_t t41 = 1U;

	t41 = (((x173%x174)^x175)|x176);

	if (t41 != 3547U) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = INT16_MAX;
	int32_t x178 = 1560;
	int32_t x179 = INT32_MAX;
	static int16_t x180 = INT16_MIN;
	int32_t t42 = -480920167;

	t42 = (((x177%x178)^x179)|x180);

	if (t42 != -8) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int16_t x181 = -480;
	volatile int64_t x182 = -36LL;
	volatile uint32_t x183 = UINT32_MAX;
	int32_t x184 = INT32_MAX;
	int64_t t43 = -29106553934672611LL;

	t43 = (((x181%x182)^x183)|x184);

	if (t43 != -2147483649LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = UINT64_MAX;
	volatile uint16_t x186 = UINT16_MAX;
	static int64_t x187 = INT64_MIN;

	t44 = (((x185%x186)^x187)|x188);

	if (t44 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x189 = -1;
	int8_t x191 = INT8_MAX;
	int8_t x192 = -17;
	volatile int32_t t45 = -819207292;

	t45 = (((x189%x190)^x191)|x192);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x193 = -1LL;
	static int8_t x195 = 9;
	int32_t x196 = INT32_MAX;
	volatile int64_t t46 = 33773LL;

	t46 = (((x193%x194)^x195)|x196);

	if (t46 != 2147483647LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x197 = INT8_MIN;
	int16_t x198 = 2481;
	static volatile int32_t t47 = -53979;

	t47 = (((x197%x198)^x199)|x200);

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = 2;
	volatile int64_t x202 = -7655LL;
	volatile int8_t x203 = -10;

	t48 = (((x201%x202)^x203)|x204);

	if (t48 != -9LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x205 = -158;
	volatile int8_t x207 = INT8_MIN;
	uint64_t x208 = 39203154866213389LLU;
	uint64_t t49 = 63768698379362740LLU;

	t49 = (((x205%x206)^x207)|x208);

	if (t49 != 39203154866213615LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x209 = INT8_MIN;
	uint8_t x210 = 52U;
	static int8_t x211 = INT8_MIN;
	int16_t x212 = INT16_MAX;

	t50 = (((x209%x210)^x211)|x212);

	if (t50 != 32767) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x213 = INT8_MAX;
	int16_t x214 = INT16_MIN;
	volatile int16_t x215 = -103;
	uint8_t x216 = 127U;
	int32_t t51 = 4837131;

	t51 = (((x213%x214)^x215)|x216);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x217 = 5U;
	static int8_t x218 = INT8_MIN;
	volatile int32_t x219 = INT32_MIN;
	static volatile int32_t t52 = -14940239;

	t52 = (((x217%x218)^x219)|x220);

	if (t52 != -2681) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x221 = INT32_MAX;
	int32_t x223 = INT32_MIN;
	int32_t x224 = INT32_MIN;
	volatile int32_t t53 = 12;

	t53 = (((x221%x222)^x223)|x224);

	if (t53 != -2147483645) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x225 = -1;
	static int32_t x226 = INT32_MIN;
	volatile int16_t x227 = INT16_MIN;

	t54 = (((x225%x226)^x227)|x228);

	if (t54 != 32767) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x229 = INT64_MAX;
	int8_t x230 = INT8_MIN;
	volatile uint32_t x231 = UINT32_MAX;
	int8_t x232 = INT8_MAX;
	volatile int64_t t55 = 26540014960LL;

	t55 = (((x229%x230)^x231)|x232);

	if (t55 != 4294967295LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x233 = -1;
	int16_t x235 = 378;
	int32_t x236 = INT32_MAX;

	t56 = (((x233%x234)^x235)|x236);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = INT64_MIN;
	volatile uint64_t x238 = 11749490038637LLU;
	int32_t x239 = INT32_MAX;
	static uint16_t x240 = UINT16_MAX;

	t57 = (((x237%x238)^x239)|x240);

	if (t57 != 10607956328447LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = INT8_MIN;
	static uint64_t x242 = UINT64_MAX;
	static volatile int64_t x243 = INT64_MIN;

	t58 = (((x241%x242)^x243)|x244);

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x245 = -1;
	int64_t x248 = INT64_MIN;
	volatile int64_t t59 = 9782157220551LL;

	t59 = (((x245%x246)^x247)|x248);

	if (t59 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x249 = 3046U;
	static int8_t x250 = INT8_MAX;
	int64_t x251 = INT64_MAX;
	int16_t x252 = INT16_MAX;
	int64_t t60 = INT64_MAX;

	t60 = (((x249%x250)^x251)|x252);

	if (t60 != INT64_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x253 = 61;
	static int64_t x254 = INT64_MIN;
	volatile int8_t x255 = -7;
	static volatile int8_t x256 = INT8_MIN;
	volatile int64_t t61 = -19837877758LL;

	t61 = (((x253%x254)^x255)|x256);

	if (t61 != -60LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x257 = 2196133471002938LLU;
	static uint8_t x258 = 1U;
	int8_t x259 = -1;
	int8_t x260 = 4;
	volatile uint64_t t62 = UINT64_MAX;

	t62 = (((x257%x258)^x259)|x260);

	if (t62 != UINT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x261 = -11277451726832LL;
	int8_t x262 = 1;
	volatile int64_t x263 = 42420260LL;
	volatile int64_t t63 = -27649LL;

	t63 = (((x261%x262)^x263)|x264);

	if (t63 != 42420261LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = -1;
	int32_t x266 = INT32_MIN;
	static int16_t x268 = 7710;
	int64_t t64 = 1379530224LL;

	t64 = (((x265%x266)^x267)|x268);

	if (t64 != -513220962LL) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x270 = INT32_MIN;
	uint64_t x271 = 3955566115810237LLU;
	int16_t x272 = INT16_MAX;

	t65 = (((x269%x270)^x271)|x272);

	if (t65 != 3955566115815423LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint32_t x273 = 160137770U;
	uint64_t x274 = 8960155LLU;
	uint8_t x276 = 95U;
	volatile uint64_t t66 = 6566046LLU;

	t66 = (((x273%x274)^x275)|x276);

	if (t66 != 7815135LLU) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x277 = 115U;
	static uint32_t x278 = 46U;
	static uint32_t x280 = UINT32_MAX;
	volatile uint32_t t67 = UINT32_MAX;

	t67 = (((x277%x278)^x279)|x280);

	if (t67 != UINT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	static uint16_t x281 = 27U;
	int32_t x282 = INT32_MAX;
	int16_t x283 = -1;
	int8_t x284 = INT8_MAX;
	volatile int32_t t68 = -99140;

	t68 = (((x281%x282)^x283)|x284);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x286 = INT8_MIN;
	int8_t x287 = 3;
	static volatile uint8_t x288 = 12U;
	volatile int32_t t69 = -5;

	t69 = (((x285%x286)^x287)|x288);

	if (t69 != 15) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x289 = 66751708U;
	volatile int32_t x290 = INT32_MIN;
	int8_t x292 = INT8_MAX;
	uint32_t t70 = 4128U;

	t70 = (((x289%x290)^x291)|x292);

	if (t70 != 4228215679U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x293 = 722;
	int16_t x294 = -5;
	uint64_t x295 = 133994LLU;
	int16_t x296 = 736;
	static uint64_t t71 = 7078899645240881224LLU;

	t71 = (((x293%x294)^x295)|x296);

	if (t71 != 134120LLU) { NG(); } else { ; }
	
}

void f72(void) {
	static uint64_t x297 = 1273202882240706LLU;
	int32_t x298 = -1;
	volatile int16_t x299 = INT16_MAX;
	int8_t x300 = INT8_MIN;
	volatile uint64_t t72 = 0LLU;

	t72 = (((x297%x298)^x299)|x300);

	if (t72 != 18446744073709551549LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x302 = 1650602;
	int64_t x303 = 16274211164LL;
	static int64_t t73 = 6221567725203LL;

	t73 = (((x301%x302)^x303)|x304);

	if (t73 != 16274478183LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x305 = 122U;
	volatile int64_t x308 = INT64_MIN;
	int64_t t74 = 49868LL;

	t74 = (((x305%x306)^x307)|x308);

	if (t74 != -1412LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x309 = INT32_MIN;
	static int8_t x311 = -1;
	int32_t x312 = 131156966;

	t75 = (((x309%x310)^x311)|x312);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint64_t x315 = 2800433616741763016LLU;
	static volatile uint64_t t76 = 151731LLU;

	t76 = (((x313%x314)^x315)|x316);

	if (t76 != 15646310456967823359LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x317 = 6092LLU;
	uint64_t x318 = UINT64_MAX;
	static int32_t x319 = INT32_MAX;
	int64_t x320 = -1LL;
	volatile uint64_t t77 = UINT64_MAX;

	t77 = (((x317%x318)^x319)|x320);

	if (t77 != UINT64_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x321 = INT16_MIN;
	int32_t x322 = -1;
	int8_t x323 = INT8_MAX;
	int32_t t78 = -15893393;

	t78 = (((x321%x322)^x323)|x324);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x325 = 9862857U;
	int64_t x326 = -28LL;
	int8_t x327 = INT8_MIN;
	static int16_t x328 = INT16_MIN;

	t79 = (((x325%x326)^x327)|x328);

	if (t79 != -103LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int16_t x330 = -141;
	int32_t x331 = 522267467;
	uint16_t x332 = UINT16_MAX;
	int32_t t80 = 6;

	t80 = (((x329%x330)^x331)|x332);

	if (t80 != 522321919) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x338 = INT32_MIN;
	uint16_t x339 = 6U;
	volatile int8_t x340 = -1;
	volatile int32_t t81 = -114989198;

	t81 = (((x337%x338)^x339)|x340);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x341 = -7;
	int8_t x342 = -1;
	volatile uint64_t x343 = UINT64_MAX;

	t82 = (((x341%x342)^x343)|x344);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x345 = -1LL;
	int64_t x346 = INT64_MIN;
	int16_t x347 = -1;
	int32_t x348 = INT32_MAX;
	volatile int64_t t83 = 79491236LL;

	t83 = (((x345%x346)^x347)|x348);

	if (t83 != 2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x349 = INT64_MIN;
	uint8_t x350 = 5U;
	static uint32_t x352 = UINT32_MAX;

	t84 = (((x349%x350)^x351)|x352);

	if (t84 != 4294967295LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x354 = -1;
	int8_t x355 = INT8_MIN;
	volatile uint8_t x356 = 6U;
	int32_t t85 = -20270;

	t85 = (((x353%x354)^x355)|x356);

	if (t85 != -122) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x358 = 54U;
	uint8_t x359 = 6U;
	static int8_t x360 = -1;

	t86 = (((x357%x358)^x359)|x360);

	if (t86 != -1) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x361 = 1044741774LL;
	int32_t x363 = INT32_MIN;
	static uint64_t x364 = UINT64_MAX;
	uint64_t t87 = UINT64_MAX;

	t87 = (((x361%x362)^x363)|x364);

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x365 = -1;
	uint8_t x366 = UINT8_MAX;
	uint64_t x367 = 233252LLU;
	uint16_t x368 = UINT16_MAX;

	t88 = (((x365%x366)^x367)|x368);

	if (t88 != 18446744073709355007LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x369 = INT64_MIN;
	static int32_t x370 = INT32_MIN;
	int32_t x371 = -1;
	int32_t x372 = INT32_MAX;
	int64_t t89 = -11761982030769450LL;

	t89 = (((x369%x370)^x371)|x372);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x373 = INT32_MIN;
	volatile int8_t x374 = 30;
	volatile int32_t t90 = 1763;

	t90 = (((x373%x374)^x375)|x376);

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x379 = 17U;
	static int64_t x380 = -1LL;

	t91 = (((x377%x378)^x379)|x380);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile uint32_t x381 = 14U;
	int8_t x383 = INT8_MIN;
	int16_t x384 = INT16_MIN;

	t92 = (((x381%x382)^x383)|x384);

	if (t92 != 4294967182U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x385 = INT8_MAX;
	int8_t x386 = INT8_MAX;
	int8_t x387 = INT8_MIN;
	static volatile uint32_t t93 = 22U;

	t93 = (((x385%x386)^x387)|x388);

	if (t93 != 4294967178U) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x390 = INT16_MIN;
	uint64_t x391 = UINT64_MAX;
	int64_t x392 = INT64_MIN;
	volatile uint64_t t94 = 19934653857410LLU;

	t94 = (((x389%x390)^x391)|x392);

	if (t94 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x394 = INT32_MIN;
	volatile int16_t x395 = 0;
	static int8_t x396 = INT8_MAX;
	volatile uint64_t t95 = 1789361LLU;

	t95 = (((x393%x394)^x395)|x396);

	if (t95 != 123332504279549823LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x402 = UINT32_MAX;
	uint8_t x403 = 8U;
	int32_t x404 = INT32_MIN;
	uint32_t t96 = 533919862U;

	t96 = (((x401%x402)^x403)|x404);

	if (t96 != 2147483895U) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x405 = -1;
	int16_t x407 = -1;
	static uint32_t x408 = 0U;
	uint32_t t97 = 693064568U;

	t97 = (((x405%x406)^x407)|x408);

	if (t97 != 0U) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x409 = -1LL;
	static int8_t x410 = INT8_MIN;
	int16_t x411 = 0;
	uint64_t x412 = UINT64_MAX;
	uint64_t t98 = UINT64_MAX;

	t98 = (((x409%x410)^x411)|x412);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x413 = INT64_MIN;
	uint64_t x414 = 197976971898949LLU;
	volatile uint16_t x416 = 4272U;
	volatile uint64_t t99 = 26125523223436895LLU;

	t99 = (((x413%x414)^x415)|x416);

	if (t99 != 20870026540027LLU) { NG(); } else { ; }
	
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

