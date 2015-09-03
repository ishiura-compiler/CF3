#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x5 = 1;
int64_t x8 = -1LL;
int32_t t2 = -88516;
uint8_t x15 = 31U;
uint16_t x17 = UINT16_MAX;
int64_t x20 = INT64_MAX;
static uint64_t x22 = 15486371LLU;
static volatile int32_t x23 = -1;
int64_t t8 = -10967595160028LL;
int32_t x45 = -408220;
uint8_t x57 = 59U;
volatile uint16_t x70 = 7U;
uint16_t x71 = 725U;
volatile int64_t t18 = -18025LL;
int64_t x81 = -33760974605651LL;
int32_t x84 = INT32_MIN;
static int64_t t20 = -660869515LL;
int64_t x85 = -3698023403516LL;
int32_t x92 = -14932;
int32_t t22 = 6385;
int64_t x95 = INT64_MIN;
static uint64_t x98 = 535376849226489216LLU;
int64_t x99 = -1LL;
int32_t x109 = INT32_MIN;
volatile int64_t t28 = 403796237LL;
volatile int8_t x117 = -1;
int64_t x118 = 62128LL;
int64_t t29 = -68604698168985LL;
static volatile int32_t x143 = 253;
volatile uint64_t t36 = 1690794297721LLU;
static int16_t x150 = INT16_MIN;
uint32_t x152 = 0U;
uint64_t x161 = 68342128730196044LLU;
int32_t x170 = INT32_MAX;
uint8_t x175 = 17U;
int16_t x176 = INT16_MIN;
int32_t x183 = INT32_MIN;
int16_t x184 = INT16_MAX;
int32_t x185 = -2919;
uint32_t x188 = 8U;
int8_t x191 = -1;
static uint32_t x194 = 2201U;
static int64_t x199 = 109636028037186LL;
volatile int64_t t49 = 2LL;
static int16_t x202 = -13;
static uint16_t x206 = 3U;
int32_t t51 = INT32_MAX;
static volatile uint32_t t52 = 2242U;
uint8_t x216 = 3U;
static volatile int64_t t53 = -52519372LL;
volatile int64_t t54 = -676285002586564770LL;
uint16_t x225 = 4946U;
volatile int64_t x227 = -1LL;
uint64_t t56 = 3920LLU;
uint32_t x230 = 168U;
int32_t x231 = -1;
uint16_t x234 = 293U;
uint8_t x235 = 28U;
int8_t x240 = 42;
int32_t t59 = -7016;
uint32_t t63 = UINT32_MAX;
int32_t x261 = -1;
int16_t x262 = 34;
int8_t x267 = -1;
static int64_t x270 = INT64_MIN;
uint8_t x271 = 32U;
volatile int32_t x275 = -1;
int64_t x280 = -104253LL;
uint32_t x281 = 339U;
static int64_t x282 = -448895LL;
volatile uint32_t x283 = 49U;
static int16_t x286 = INT16_MAX;
static uint16_t x287 = UINT16_MAX;
uint16_t x289 = 15U;
uint32_t t73 = 33327U;
uint16_t x301 = 6U;
volatile int32_t t75 = 588501;
uint8_t x311 = 1U;
int64_t t77 = -1393LL;
int32_t x319 = INT32_MIN;
int64_t t78 = -7LL;
int16_t x323 = INT16_MIN;
static volatile int64_t t79 = -4LL;
uint16_t x329 = UINT16_MAX;
static volatile int16_t x330 = -1;
uint32_t x335 = UINT32_MAX;
volatile int64_t t82 = 1714007930795746LL;
int16_t x340 = INT16_MIN;
static int64_t x342 = 9351413LL;
int64_t x344 = INT64_MAX;
volatile uint32_t x345 = 5U;
int64_t t85 = 15653544053662986LL;
int16_t x350 = INT16_MIN;
static int32_t x354 = -1;
volatile uint8_t x356 = UINT8_MAX;
uint8_t x359 = 63U;
uint32_t x373 = UINT32_MAX;
static int32_t x377 = INT32_MIN;
int64_t t93 = 182809865028LL;
static uint16_t x383 = UINT16_MAX;
static int8_t x384 = INT8_MIN;
volatile int32_t t94 = -301040300;
static int8_t x388 = 1;
int8_t x396 = INT8_MAX;
int64_t t97 = 485008115646103LL;
static uint32_t x399 = 129168U;
int32_t x403 = INT32_MAX;


void f0(void) {
	static uint16_t x1 = 933U;
	uint32_t x2 = 1U;
	uint8_t x3 = 1U;
	volatile int16_t x4 = INT16_MAX;
	volatile uint32_t t0 = 140561U;

	t0 = ((x1|(x2%x3))&x4);

	if (t0 != 933U) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	int64_t x7 = INT64_MIN;
	static int64_t t1 = 20761126869548905LL;

	t1 = ((x5|(x6%x7))&x8);

	if (t1 != -32767LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 4U;
	static volatile int8_t x10 = 0;
	volatile int8_t x11 = INT8_MIN;
	static int16_t x12 = -1;

	t2 = ((x9|(x10%x11))&x12);

	if (t2 != 4) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int8_t x14 = -1;
	int8_t x16 = -1;
	static volatile int64_t t3 = 1141314LL;

	t3 = ((x13|(x14%x15))&x16);

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	uint64_t x19 = 242161935162LLU;
	static uint64_t t4 = 173723813LLU;

	t4 = ((x17|(x18%x19))&x20);

	if (t4 != 29777985535LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int64_t x21 = INT64_MIN;
	uint16_t x24 = UINT16_MAX;
	volatile uint64_t t5 = 5381426LLU;

	t5 = ((x21|(x22%x23))&x24);

	if (t5 != 19875LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	uint64_t x26 = 7806868LLU;
	int8_t x27 = -1;
	int64_t x28 = INT64_MIN;
	uint64_t t6 = 1972871755LLU;

	t6 = ((x25|(x26%x27))&x28);

	if (t6 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x29 = -3;
	int64_t x30 = INT64_MIN;
	static uint32_t x31 = UINT32_MAX;
	uint32_t x32 = UINT32_MAX;
	volatile int64_t t7 = -1942596613447179LL;

	t7 = ((x29|(x30%x31))&x32);

	if (t7 != 4294967293LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	int16_t x34 = INT16_MIN;
	volatile uint8_t x35 = 5U;
	int64_t x36 = 1560673228961LL;

	t8 = ((x33|(x34%x35))&x36);

	if (t8 != 1560673228961LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int32_t x37 = INT32_MIN;
	int64_t x38 = 333083194588LL;
	static volatile int32_t x39 = INT32_MIN;
	int64_t x40 = -223787950048705281LL;
	int64_t t9 = -60850503799489LL;

	t9 = ((x37|(x38%x39))&x40);

	if (t9 != -223787950049852196LL) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int8_t x42 = -31;
	volatile int32_t x43 = INT32_MAX;
	uint64_t x44 = 7034764801044380651LLU;
	volatile uint64_t t10 = 260882229140LLU;

	t10 = ((x41|(x42%x43))&x44);

	if (t10 != 7034764801044380641LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = 1232688389976958343LL;
	static uint64_t x47 = 833LLU;
	volatile uint32_t x48 = UINT32_MAX;
	volatile uint64_t t11 = 489321LLU;

	t11 = ((x45|(x46%x47))&x48);

	if (t11 != 4294559221LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = INT64_MIN;
	int16_t x51 = -1;
	int32_t x52 = -1;
	int64_t t12 = 3LL;

	t12 = ((x49|(x50%x51))&x52);

	if (t12 != -32768LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MAX;
	int8_t x54 = INT8_MAX;
	volatile uint16_t x55 = 9U;
	int8_t x56 = -16;
	volatile int64_t t13 = -62347958330207LL;

	t13 = ((x53|(x54%x55))&x56);

	if (t13 != 9223372036854775792LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = UINT16_MAX;
	uint16_t x59 = UINT16_MAX;
	int8_t x60 = -1;
	volatile int32_t t14 = 446;

	t14 = ((x57|(x58%x59))&x60);

	if (t14 != 59) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x61 = 2822495LLU;
	uint32_t x62 = UINT32_MAX;
	static int32_t x63 = INT32_MIN;
	int16_t x64 = -21;
	volatile uint64_t t15 = 456433618388758445LLU;

	t15 = ((x61|(x62%x63))&x64);

	if (t15 != 2147483627LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MAX;
	uint64_t x66 = 3988806LLU;
	volatile uint8_t x67 = UINT8_MAX;
	static int32_t x68 = INT32_MIN;
	static uint64_t t16 = 2767360LLU;

	t16 = ((x65|(x66%x67))&x68);

	if (t16 != 9223372034707292160LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	uint8_t x72 = 6U;
	uint32_t t17 = 38U;

	t17 = ((x69|(x70%x71))&x72);

	if (t17 != 6U) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x73 = -1LL;
	uint16_t x74 = UINT16_MAX;
	volatile uint16_t x75 = 169U;
	int32_t x76 = 104274;

	t18 = ((x73|(x74%x75))&x76);

	if (t18 != 104274LL) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -15026163LL;
	int16_t x78 = INT16_MAX;
	static uint8_t x79 = 2U;
	int32_t x80 = INT32_MIN;
	int64_t t19 = 1855806666LL;

	t19 = ((x77|(x78%x79))&x80);

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x82 = INT32_MIN;
	int64_t x83 = -2830LL;

	t20 = ((x81|(x82%x83))&x84);

	if (t20 != -2147483648LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x86 = 14U;
	int8_t x87 = -1;
	int8_t x88 = -14;
	int64_t t21 = 22880057LL;

	t21 = ((x85|(x86%x87))&x88);

	if (t21 != -3698023403520LL) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MIN;
	volatile int32_t x90 = INT32_MAX;
	int32_t x91 = -151;

	t22 = ((x89|(x90%x91))&x92);

	if (t22 != -14976) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int16_t x93 = -687;
	int8_t x94 = -6;
	volatile int32_t x96 = -1;
	volatile int64_t t23 = -24488326456445LL;

	t23 = ((x93|(x94%x95))&x96);

	if (t23 != -5LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MAX;
	static uint8_t x100 = 3U;
	static uint64_t t24 = 11952796LLU;

	t24 = ((x97|(x98%x99))&x100);

	if (t24 != 3LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	uint32_t x102 = 3U;
	static volatile int16_t x103 = -1;
	uint32_t x104 = 13520U;
	uint32_t t25 = 103392U;

	t25 = ((x101|(x102%x103))&x104);

	if (t25 != 13520U) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	int8_t x106 = -4;
	int8_t x107 = -1;
	uint8_t x108 = UINT8_MAX;
	static volatile int64_t t26 = 311948LL;

	t26 = ((x105|(x106%x107))&x108);

	if (t26 != 255LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x110 = 2U;
	int16_t x111 = -1;
	int32_t x112 = INT32_MIN;
	volatile int32_t t27 = INT32_MIN;

	t27 = ((x109|(x110%x111))&x112);

	if (t27 != INT32_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	static uint16_t x113 = 7268U;
	uint16_t x114 = UINT16_MAX;
	static int64_t x115 = -83707159357148638LL;
	uint8_t x116 = 7U;

	t28 = ((x113|(x114%x115))&x116);

	if (t28 != 7LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x119 = INT64_MIN;
	static uint8_t x120 = 5U;

	t29 = ((x117|(x118%x119))&x120);

	if (t29 != 5LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint16_t x121 = 113U;
	volatile int16_t x122 = INT16_MIN;
	static int16_t x123 = INT16_MIN;
	int16_t x124 = -1;
	int32_t t30 = 525320662;

	t30 = ((x121|(x122%x123))&x124);

	if (t30 != 113) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 24;
	int64_t x126 = INT64_MAX;
	uint16_t x127 = UINT16_MAX;
	uint32_t x128 = 42544U;
	volatile int64_t t31 = 463104136608533LL;

	t31 = ((x125|(x126%x127))&x128);

	if (t31 != 9776LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 5240262106346LLU;
	static volatile int8_t x130 = -1;
	int64_t x131 = INT64_MIN;
	uint8_t x132 = 6U;
	static volatile uint64_t t32 = 880119086750023425LLU;

	t32 = ((x129|(x130%x131))&x132);

	if (t32 != 6LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MIN;
	int64_t x134 = 56950616063LL;
	int64_t x135 = INT64_MIN;
	static int64_t x136 = -1LL;
	int64_t t33 = 1250026LL;

	t33 = ((x133|(x134%x135))&x136);

	if (t33 != -9223371979904159745LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = INT32_MIN;
	int8_t x138 = INT8_MIN;
	int8_t x139 = INT8_MIN;
	int64_t x140 = INT64_MAX;
	int64_t t34 = 2833689091LL;

	t34 = ((x137|(x138%x139))&x140);

	if (t34 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	int32_t x142 = 4;
	int64_t x144 = INT64_MIN;
	int64_t t35 = 552105679LL;

	t35 = ((x141|(x142%x143))&x144);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int32_t x146 = -1;
	int16_t x147 = -1;
	uint64_t x148 = UINT64_MAX;

	t36 = ((x145|(x146%x147))&x148);

	if (t36 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	int8_t x151 = INT8_MIN;
	uint32_t t37 = 7148891U;

	t37 = ((x149|(x150%x151))&x152);

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = 1;
	int8_t x154 = INT8_MAX;
	int32_t x155 = INT32_MAX;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t38 = 299085810;

	t38 = ((x153|(x154%x155))&x156);

	if (t38 != 127) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MIN;
	uint32_t x158 = 66348826U;
	volatile uint64_t x159 = 1906LLU;
	volatile uint64_t x160 = 3158946437888LLU;
	volatile uint64_t t39 = 911455LLU;

	t39 = ((x157|(x158%x159))&x160);

	if (t39 != 3158946437888LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x162 = 33U;
	static int16_t x163 = INT16_MAX;
	int16_t x164 = 285;
	volatile uint64_t t40 = 0LLU;

	t40 = ((x161|(x162%x163))&x164);

	if (t40 != 13LLU) { NG(); } else { ; }
	
}

void f41(void) {
	static uint32_t x165 = UINT32_MAX;
	uint16_t x166 = 214U;
	uint64_t x167 = 58859555170LLU;
	volatile int8_t x168 = -44;
	uint64_t t41 = 2LLU;

	t41 = ((x165|(x166%x167))&x168);

	if (t41 != 4294967252LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = UINT8_MAX;
	int8_t x171 = INT8_MIN;
	int32_t x172 = 374;
	volatile int32_t t42 = 2665;

	t42 = ((x169|(x170%x171))&x172);

	if (t42 != 118) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 16;
	volatile uint32_t x174 = 1991071U;
	volatile uint32_t t43 = 699185360U;

	t43 = ((x173|(x174%x175))&x176);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x177 = INT32_MIN;
	uint16_t x178 = 24641U;
	int16_t x179 = -1;
	int32_t x180 = 33;
	static volatile int32_t t44 = -2136704;

	t44 = ((x177|(x178%x179))&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = UINT8_MAX;
	int16_t x182 = -1;
	int32_t t45 = -2;

	t45 = ((x181|(x182%x183))&x184);

	if (t45 != 32767) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x186 = 41U;
	int32_t x187 = -1;
	static volatile uint32_t t46 = 113U;

	t46 = ((x185|(x186%x187))&x188);

	if (t46 != 8U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 43700;
	int16_t x190 = 0;
	static uint32_t x192 = UINT32_MAX;
	volatile uint32_t t47 = 2547229U;

	t47 = ((x189|(x190%x191))&x192);

	if (t47 != 43700U) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 3402983U;
	static volatile int8_t x195 = -1;
	uint64_t x196 = UINT64_MAX;
	uint64_t t48 = 1LLU;

	t48 = ((x193|(x194%x195))&x196);

	if (t48 != 3403007LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = 0;
	volatile int32_t x198 = INT32_MIN;
	uint16_t x200 = UINT16_MAX;

	t49 = ((x197|(x198%x199))&x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -1;
	int8_t x203 = 1;
	int16_t x204 = -1;
	volatile int32_t t50 = -487417;

	t50 = ((x201|(x202%x203))&x204);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = -1;
	int16_t x207 = INT16_MIN;
	static int32_t x208 = INT32_MAX;

	t51 = ((x205|(x206%x207))&x208);

	if (t51 != INT32_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = UINT8_MAX;
	uint32_t x210 = 106U;
	uint32_t x211 = UINT32_MAX;
	uint16_t x212 = 39U;

	t52 = ((x209|(x210%x211))&x212);

	if (t52 != 39U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	uint16_t x214 = 2U;
	volatile int64_t x215 = INT64_MAX;

	t53 = ((x213|(x214%x215))&x216);

	if (t53 != 3LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = UINT32_MAX;
	int32_t x218 = 1081689;
	int64_t x219 = 757576021665519499LL;
	uint16_t x220 = 36U;

	t54 = ((x217|(x218%x219))&x220);

	if (t54 != 36LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = 141344U;
	int16_t x222 = -1;
	int64_t x223 = INT64_MIN;
	int32_t x224 = INT32_MIN;
	volatile int64_t t55 = 7274337783190LL;

	t55 = ((x221|(x222%x223))&x224);

	if (t55 != -2147483648LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x226 = INT16_MIN;
	static uint64_t x228 = 157216149827LLU;

	t56 = ((x225|(x226%x227))&x228);

	if (t56 != 4418LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x229 = 649714844LLU;
	uint8_t x232 = 17U;
	static uint64_t t57 = 12920707681630LLU;

	t57 = ((x229|(x230%x231))&x232);

	if (t57 != 16LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = 2LL;
	int8_t x236 = -4;
	static volatile int64_t t58 = -9700987426929578LL;

	t58 = ((x233|(x234%x235))&x236);

	if (t58 != 12LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x237 = 234160;
	volatile uint16_t x238 = 3U;
	static int8_t x239 = INT8_MIN;

	t59 = ((x237|(x238%x239))&x240);

	if (t59 != 34) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x241 = -1LL;
	static uint64_t x242 = 251139406855LLU;
	uint16_t x243 = UINT16_MAX;
	volatile uint8_t x244 = 6U;
	static volatile uint64_t t60 = 119331LLU;

	t60 = ((x241|(x242%x243))&x244);

	if (t60 != 6LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = -27936LL;
	uint8_t x250 = UINT8_MAX;
	volatile int32_t x251 = -1;
	int64_t x252 = 23644LL;
	int64_t t61 = -43604673980LL;

	t61 = ((x249|(x250%x251))&x252);

	if (t61 != 4160LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x253 = UINT64_MAX;
	int64_t x254 = INT64_MIN;
	uint8_t x255 = UINT8_MAX;
	uint32_t x256 = 205U;
	volatile uint64_t t62 = 30673586993481365LLU;

	t62 = ((x253|(x254%x255))&x256);

	if (t62 != 205LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x257 = 51U;
	static volatile int16_t x258 = -1;
	static int16_t x259 = INT16_MIN;
	uint32_t x260 = UINT32_MAX;

	t63 = ((x257|(x258%x259))&x260);

	if (t63 != UINT32_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x263 = INT16_MAX;
	uint16_t x264 = UINT16_MAX;
	int32_t t64 = 304723876;

	t64 = ((x261|(x262%x263))&x264);

	if (t64 != 65535) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 3U;
	volatile int8_t x266 = 0;
	static volatile int32_t x268 = 448609;
	int32_t t65 = -4;

	t65 = ((x265|(x266%x267))&x268);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = -33;
	uint64_t x272 = 337639LLU;
	static volatile uint64_t t66 = 62LLU;

	t66 = ((x269|(x270%x271))&x272);

	if (t66 != 337607LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x273 = -1;
	volatile int32_t x274 = -1410727;
	uint16_t x276 = UINT16_MAX;
	int32_t t67 = 75;

	t67 = ((x273|(x274%x275))&x276);

	if (t67 != 65535) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -24;
	int16_t x278 = INT16_MIN;
	uint16_t x279 = 382U;
	volatile int64_t t68 = -79LL;

	t68 = ((x277|(x278%x279))&x280);

	if (t68 != -104254LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x284 = -1;
	int64_t t69 = 61301812309147LL;

	t69 = ((x281|(x282%x283))&x284);

	if (t69 != -5LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x285 = INT16_MIN;
	int64_t x288 = INT64_MAX;
	static int64_t t70 = INT64_MAX;

	t70 = ((x285|(x286%x287))&x288);

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x290 = -1;
	int64_t x291 = -1LL;
	uint8_t x292 = UINT8_MAX;
	static volatile int64_t t71 = 805747418LL;

	t71 = ((x289|(x290%x291))&x292);

	if (t71 != 15LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = INT16_MIN;
	int64_t x294 = 510833512203222LL;
	static int64_t x295 = -2376507397299LL;
	int32_t x296 = -1;
	int64_t t72 = -14761838LL;

	t72 = ((x293|(x294%x295))&x296);

	if (t72 != -2508LL) { NG(); } else { ; }
	
}

void f73(void) {
	static uint16_t x297 = 82U;
	volatile int8_t x298 = INT8_MIN;
	uint32_t x299 = 83096651U;
	int8_t x300 = 0;

	t73 = ((x297|(x298%x299))&x300);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x302 = 374U;
	int8_t x303 = -1;
	static volatile int8_t x304 = INT8_MIN;
	int32_t t74 = -194;

	t74 = ((x301|(x302%x303))&x304);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x305 = 101U;
	static int16_t x306 = INT16_MIN;
	int16_t x307 = -3;
	volatile uint16_t x308 = 25401U;

	t75 = ((x305|(x306%x307))&x308);

	if (t75 != 25401) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x309 = 1U;
	static int16_t x310 = INT16_MIN;
	int32_t x312 = 3044670;
	volatile int32_t t76 = -598525;

	t76 = ((x309|(x310%x311))&x312);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile uint16_t x313 = UINT16_MAX;
	int64_t x314 = INT64_MIN;
	int8_t x315 = INT8_MIN;
	int32_t x316 = -1;

	t77 = ((x313|(x314%x315))&x316);

	if (t77 != 65535LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x317 = INT8_MIN;
	static volatile int64_t x318 = -6LL;
	int8_t x320 = -7;

	t78 = ((x317|(x318%x319))&x320);

	if (t78 != -8LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = 5390LL;
	int32_t x322 = 375;
	int32_t x324 = INT32_MIN;

	t79 = ((x321|(x322%x323))&x324);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x325 = 805286816U;
	int16_t x326 = INT16_MIN;
	static int8_t x327 = -1;
	int64_t x328 = INT64_MIN;
	volatile int64_t t80 = -26704863464873966LL;

	t80 = ((x325|(x326%x327))&x328);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x331 = INT64_MIN;
	int32_t x332 = INT32_MIN;
	int64_t t81 = 1LL;

	t81 = ((x329|(x330%x331))&x332);

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x333 = 6U;
	volatile int16_t x334 = INT16_MIN;
	int64_t x336 = -1LL;

	t82 = ((x333|(x334%x335))&x336);

	if (t82 != 4294934534LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x337 = 30;
	volatile uint8_t x338 = 0U;
	int32_t x339 = INT32_MAX;
	static int32_t t83 = 3553;

	t83 = ((x337|(x338%x339))&x340);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x341 = 16142U;
	uint64_t x343 = 599021781867868449LLU;
	volatile uint64_t t84 = 34LLU;

	t84 = ((x341|(x342%x343))&x344);

	if (t84 != 9355263LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x346 = INT32_MAX;
	int64_t x347 = INT64_MIN;
	int8_t x348 = INT8_MAX;

	t85 = ((x345|(x346%x347))&x348);

	if (t85 != 127LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = 11673;
	int64_t x351 = -384491890LL;
	int64_t x352 = -2401304893207611423LL;
	int64_t t86 = 2164122220780866LL;

	t86 = ((x349|(x350%x351))&x352);

	if (t86 != -2401304893207632511LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x353 = -2370629;
	int64_t x355 = INT64_MAX;
	volatile int64_t t87 = 181387644558050LL;

	t87 = ((x353|(x354%x355))&x356);

	if (t87 != 255LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x357 = UINT16_MAX;
	int16_t x358 = INT16_MIN;
	uint16_t x360 = UINT16_MAX;
	int32_t t88 = -67790;

	t88 = ((x357|(x358%x359))&x360);

	if (t88 != 65535) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x361 = UINT8_MAX;
	static int32_t x362 = INT32_MAX;
	uint32_t x363 = 6U;
	int64_t x364 = INT64_MAX;
	volatile int64_t t89 = 476127237940560LL;

	t89 = ((x361|(x362%x363))&x364);

	if (t89 != 255LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x365 = 3;
	uint16_t x366 = 692U;
	uint32_t x367 = UINT32_MAX;
	uint32_t x368 = 86383U;
	uint32_t t90 = 15576U;

	t90 = ((x365|(x366%x367))&x368);

	if (t90 != 39U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x369 = -1;
	int32_t x370 = 2040927;
	static int16_t x371 = -1;
	int32_t x372 = 8020054;
	int32_t t91 = -1;

	t91 = ((x369|(x370%x371))&x372);

	if (t91 != 8020054) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x374 = -4;
	int8_t x375 = INT8_MIN;
	uint16_t x376 = 49U;
	static uint32_t t92 = 168659495U;

	t92 = ((x373|(x374%x375))&x376);

	if (t92 != 49U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x378 = INT16_MIN;
	int64_t x379 = 436412922054LL;
	uint16_t x380 = 1U;

	t93 = ((x377|(x378%x379))&x380);

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x381 = -1;
	int16_t x382 = -20;

	t94 = ((x381|(x382%x383))&x384);

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x385 = 6U;
	volatile uint16_t x386 = 7U;
	int32_t x387 = -1;
	volatile int32_t t95 = 2756;

	t95 = ((x385|(x386%x387))&x388);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x389 = 2U;
	static uint16_t x390 = UINT16_MAX;
	int16_t x391 = -1;
	uint16_t x392 = 536U;
	volatile uint32_t t96 = 3U;

	t96 = ((x389|(x390%x391))&x392);

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = INT64_MIN;
	int32_t x394 = INT32_MAX;
	static int32_t x395 = -18176952;

	t97 = ((x393|(x394%x395))&x396);

	if (t97 != 47LL) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x397 = -18293651042044LL;
	uint16_t x398 = UINT16_MAX;
	int8_t x400 = INT8_MIN;
	int64_t t98 = 255947952340950245LL;

	t98 = ((x397|(x398%x399))&x400);

	if (t98 != -18293651013760LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x401 = 100U;
	int64_t x402 = -1LL;
	uint8_t x404 = 7U;
	int64_t t99 = -990232LL;

	t99 = ((x401|(x402%x403))&x404);

	if (t99 != 7LL) { NG(); } else { ; }
	
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

