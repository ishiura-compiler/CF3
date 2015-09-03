#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x2 = 521499258U;
int32_t x19 = 387636;
uint32_t x25 = 3U;
uint8_t x26 = UINT8_MAX;
volatile int16_t x36 = INT16_MIN;
volatile int8_t x42 = -63;
int32_t x46 = 3550;
volatile int8_t x52 = -8;
static uint64_t t11 = 2658256981LLU;
volatile int64_t x53 = INT64_MIN;
int8_t x55 = -6;
static volatile int32_t t14 = 1633;
int8_t x65 = INT8_MAX;
volatile uint8_t x67 = UINT8_MAX;
static int8_t x68 = INT8_MAX;
int16_t x70 = 7730;
static uint64_t x71 = 282201538949904LLU;
static int32_t x75 = 210909;
uint8_t x78 = UINT8_MAX;
int64_t x79 = INT64_MIN;
volatile int64_t x86 = -1LL;
static uint16_t x89 = UINT16_MAX;
int8_t x95 = -3;
volatile int32_t t22 = 6;
uint16_t x101 = UINT16_MAX;
int32_t x102 = -1;
int64_t x105 = 30LL;
int64_t t24 = -22LL;
volatile int32_t x109 = -1;
int32_t t25 = 122;
static int16_t x125 = INT16_MIN;
int64_t x128 = 796037083245LL;
int32_t t29 = 32;
uint8_t x147 = 5U;
uint16_t x149 = UINT16_MAX;
int32_t x150 = -1;
uint64_t x168 = 15014273954LLU;
int64_t x176 = INT64_MIN;
volatile uint32_t x177 = 34U;
volatile int64_t x179 = 162414630LL;
int64_t x180 = 454LL;
static int8_t x181 = -1;
static int64_t x186 = INT64_MIN;
int8_t x198 = 1;
volatile int32_t x205 = INT32_MIN;
static int8_t x207 = -1;
int32_t x218 = -1;
int32_t t49 = 732;
int16_t x221 = INT16_MIN;
volatile int64_t t51 = 602LL;
int32_t x229 = INT32_MIN;
int64_t x244 = -1LL;
uint16_t x250 = UINT16_MAX;
volatile uint16_t x253 = 1269U;
static int8_t x268 = -1;
int64_t x270 = INT64_MIN;
int32_t t61 = -113307;
int32_t t62 = 3114;
int64_t x287 = -151807961242255LL;
static int8_t x292 = -1;
int8_t x309 = INT8_MIN;
int16_t x314 = 1;
volatile int32_t t70 = -1;
int16_t x317 = -821;
static uint64_t x319 = 2171LLU;
uint64_t x321 = 2085372670961658863LLU;
uint64_t t72 = 1331212893LLU;
int32_t x327 = INT32_MAX;
int32_t x344 = INT32_MIN;
int32_t t78 = 507026;
uint8_t x356 = 30U;
static volatile uint64_t x359 = 37700LLU;
int64_t t82 = 40962975LL;
static uint16_t x388 = 686U;
int16_t x392 = -9597;
volatile int32_t t88 = 922945;
uint8_t x412 = 66U;
uint16_t x428 = 5665U;
uint64_t x433 = 7251202323011LLU;
int16_t x435 = INT16_MIN;
int8_t x444 = INT8_MIN;
int32_t t94 = -231468452;
int16_t x448 = 0;
volatile int32_t t95 = 276;
int64_t x456 = INT64_MIN;
int32_t t97 = -2527;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int64_t x3 = -1LL;
	int32_t x4 = INT32_MAX;
	volatile int32_t t0 = -1;

	t0 = (x1&((x2+x3)<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 1747143LLU;
	uint8_t x6 = 50U;
	static volatile uint32_t x7 = UINT32_MAX;
	uint32_t x8 = 499377928U;
	volatile uint64_t t1 = 68725LLU;

	t1 = (x5&((x6+x7)<=x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x13 = INT16_MAX;
	int16_t x14 = -1967;
	int16_t x15 = -483;
	int8_t x16 = INT8_MAX;
	volatile int32_t t2 = 721707;

	t2 = (x13&((x14+x15)<=x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = INT32_MAX;
	volatile int16_t x18 = -1;
	uint8_t x20 = 15U;
	volatile int32_t t3 = -633;

	t3 = (x17&((x18+x19)<=x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	static uint64_t x22 = 58796181672942064LLU;
	int64_t x23 = 221574177604757LL;
	uint32_t x24 = 513U;
	volatile int32_t t4 = -14819;

	t4 = (x21&((x22+x23)<=x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x27 = INT64_MIN;
	int8_t x28 = INT8_MAX;
	static volatile uint32_t t5 = 0U;

	t5 = (x25&((x26+x27)<=x28));

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x29 = 1158LL;
	uint8_t x30 = UINT8_MAX;
	int32_t x31 = INT32_MIN;
	static int8_t x32 = 0;
	volatile int64_t t6 = 1441411LL;

	t6 = (x29&((x30+x31)<=x32));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MAX;
	int8_t x34 = INT8_MAX;
	static int32_t x35 = 5;
	int64_t t7 = 50653588603157LL;

	t7 = (x33&((x34+x35)<=x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x37 = INT8_MAX;
	static volatile uint16_t x38 = UINT16_MAX;
	uint8_t x39 = 1U;
	int64_t x40 = INT64_MAX;
	volatile int32_t t8 = -65920;

	t8 = (x37&((x38+x39)<=x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x41 = INT8_MIN;
	static uint16_t x43 = 5U;
	uint8_t x44 = 8U;
	static volatile int32_t t9 = -30;

	t9 = (x41&((x42+x43)<=x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = UINT32_MAX;
	int64_t x47 = 7834096156453LL;
	uint8_t x48 = UINT8_MAX;
	volatile uint32_t t10 = 0U;

	t10 = (x45&((x46+x47)<=x48));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 3506363LLU;
	int8_t x50 = INT8_MAX;
	uint64_t x51 = 46184239905LLU;

	t11 = (x49&((x50+x51)<=x52));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x54 = 1;
	volatile int32_t x56 = -1;
	static volatile int64_t t12 = 27335LL;

	t12 = (x53&((x54+x55)<=x56));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x57 = 1;
	static int8_t x58 = INT8_MIN;
	volatile uint64_t x59 = UINT64_MAX;
	uint16_t x60 = 236U;
	int32_t t13 = -3571;

	t13 = (x57&((x58+x59)<=x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x61 = UINT8_MAX;
	int16_t x62 = 115;
	int8_t x63 = INT8_MIN;
	int64_t x64 = 2LL;

	t14 = (x61&((x62+x63)<=x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x66 = INT32_MIN;
	int32_t t15 = 838715767;

	t15 = (x65&((x66+x67)<=x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x69 = INT16_MIN;
	static int8_t x72 = -1;
	int32_t t16 = 11571406;

	t16 = (x69&((x70+x71)<=x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x73 = -1;
	int16_t x74 = -6;
	static int16_t x76 = INT16_MAX;
	int32_t t17 = 6;

	t17 = (x73&((x74+x75)<=x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	uint64_t x80 = UINT64_MAX;
	int32_t t18 = -1;

	t18 = (x77&((x78+x79)<=x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x85 = UINT32_MAX;
	uint32_t x87 = UINT32_MAX;
	uint32_t x88 = 13589247U;
	uint32_t t19 = 1896U;

	t19 = (x85&((x86+x87)<=x88));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x90 = 166901408U;
	uint16_t x91 = 1U;
	uint16_t x92 = 113U;
	int32_t t20 = 0;

	t20 = (x89&((x90+x91)<=x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x93 = INT64_MAX;
	int16_t x94 = INT16_MIN;
	static int16_t x96 = INT16_MIN;
	int64_t t21 = 0LL;

	t21 = (x93&((x94+x95)<=x96));

	if (t21 != 1LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x97 = 1U;
	static uint16_t x98 = 30269U;
	int8_t x99 = 0;
	int32_t x100 = INT32_MAX;

	t22 = (x97&((x98+x99)<=x100));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x103 = -1;
	static uint32_t x104 = 1514032U;
	int32_t t23 = 1;

	t23 = (x101&((x102+x103)<=x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x106 = -444351283;
	static int32_t x107 = -1;
	int32_t x108 = -305641121;

	t24 = (x105&((x106+x107)<=x108));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x110 = INT8_MIN;
	static uint32_t x111 = 14456647U;
	int8_t x112 = -1;

	t25 = (x109&((x110+x111)<=x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x113 = UINT32_MAX;
	volatile int32_t x114 = 700203535;
	uint16_t x115 = 10729U;
	int32_t x116 = INT32_MIN;
	volatile uint32_t t26 = 3U;

	t26 = (x113&((x114+x115)<=x116));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x117 = -1;
	int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MIN;
	static int64_t x120 = INT64_MAX;
	int32_t t27 = -96906;

	t27 = (x117&((x118+x119)<=x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x121 = INT16_MIN;
	int16_t x122 = INT16_MIN;
	static uint32_t x123 = UINT32_MAX;
	int8_t x124 = 1;
	volatile int32_t t28 = -1018125519;

	t28 = (x121&((x122+x123)<=x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x126 = -1LL;
	int8_t x127 = INT8_MAX;

	t29 = (x125&((x126+x127)<=x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x129 = -355474586;
	volatile int8_t x130 = -1;
	int8_t x131 = INT8_MIN;
	static int32_t x132 = -1;
	int32_t t30 = 3;

	t30 = (x129&((x130+x131)<=x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x133 = 44331654U;
	int32_t x134 = 6442;
	static int16_t x135 = INT16_MAX;
	volatile int64_t x136 = INT64_MIN;
	volatile uint32_t t31 = 16963383U;

	t31 = (x133&((x134+x135)<=x136));

	if (t31 != 0U) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = -6102760424044622LL;
	uint32_t x138 = 145U;
	int64_t x139 = INT64_MIN;
	uint8_t x140 = 2U;
	volatile int64_t t32 = -83477135767896LL;

	t32 = (x137&((x138+x139)<=x140));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x141 = 391269228889328979LLU;
	int64_t x142 = -32153696LL;
	uint32_t x143 = UINT32_MAX;
	int64_t x144 = INT64_MIN;
	uint64_t t33 = 2665968750692158LLU;

	t33 = (x141&((x142+x143)<=x144));

	if (t33 != 0LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	int8_t x146 = INT8_MIN;
	int16_t x148 = 0;
	static int32_t t34 = -2925149;

	t34 = (x145&((x146+x147)<=x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x151 = 6771833250820LLU;
	int64_t x152 = INT64_MAX;
	int32_t t35 = -165030732;

	t35 = (x149&((x150+x151)<=x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x153 = INT64_MAX;
	static int8_t x154 = -1;
	uint8_t x155 = 0U;
	int64_t x156 = -1LL;
	static int64_t t36 = 7814266878134312LL;

	t36 = (x153&((x154+x155)<=x156));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int8_t x157 = 2;
	uint64_t x158 = 17468912760295518LLU;
	uint32_t x159 = 13016U;
	static int64_t x160 = -1LL;
	volatile int32_t t37 = 134765;

	t37 = (x157&((x158+x159)<=x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x161 = INT16_MIN;
	int16_t x162 = -1;
	int16_t x163 = INT16_MAX;
	volatile int16_t x164 = 4;
	static int32_t t38 = 979047;

	t38 = (x161&((x162+x163)<=x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x165 = 385U;
	volatile int32_t x166 = -1;
	uint8_t x167 = UINT8_MAX;
	int32_t t39 = 0;

	t39 = (x165&((x166+x167)<=x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x169 = INT16_MIN;
	static int64_t x170 = INT64_MIN;
	uint32_t x171 = 404070694U;
	int16_t x172 = 6;
	volatile int32_t t40 = -395;

	t40 = (x169&((x170+x171)<=x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x173 = INT8_MIN;
	int16_t x174 = INT16_MAX;
	int8_t x175 = 9;
	volatile int32_t t41 = -500;

	t41 = (x173&((x174+x175)<=x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x178 = 4;
	volatile uint32_t t42 = 193U;

	t42 = (x177&((x178+x179)<=x180));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x182 = 0;
	uint16_t x183 = 9U;
	int32_t x184 = 3284;
	volatile int32_t t43 = 223135604;

	t43 = (x181&((x182+x183)<=x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x185 = 10933738U;
	static uint64_t x187 = 1092228796797860656LLU;
	int64_t x188 = -870485524LL;
	volatile uint32_t t44 = 5U;

	t44 = (x185&((x186+x187)<=x188));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MIN;
	int16_t x199 = -33;
	uint64_t x200 = 16612664384LLU;
	volatile int32_t t45 = -994531427;

	t45 = (x197&((x198+x199)<=x200));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x201 = INT16_MIN;
	volatile int8_t x202 = INT8_MIN;
	uint16_t x203 = 1722U;
	int8_t x204 = INT8_MIN;
	volatile int32_t t46 = 121;

	t46 = (x201&((x202+x203)<=x204));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x206 = INT16_MIN;
	int64_t x208 = INT64_MIN;
	volatile int32_t t47 = 193;

	t47 = (x205&((x206+x207)<=x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = INT8_MAX;
	int32_t x210 = INT32_MIN;
	uint16_t x211 = 655U;
	int32_t x212 = INT32_MIN;
	int32_t t48 = 213;

	t48 = (x209&((x210+x211)<=x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x217 = 61U;
	int16_t x219 = -1;
	static int32_t x220 = INT32_MIN;

	t49 = (x217&((x218+x219)<=x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x222 = 70U;
	static int32_t x223 = -1;
	int16_t x224 = 25;
	int32_t t50 = -6718291;

	t50 = (x221&((x222+x223)<=x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x225 = INT64_MAX;
	static uint16_t x226 = 444U;
	int64_t x227 = INT64_MIN;
	static int8_t x228 = -1;

	t51 = (x225&((x226+x227)<=x228));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x230 = -1;
	static int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MIN;
	static volatile int32_t t52 = 3147;

	t52 = (x229&((x230+x231)<=x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x233 = INT64_MAX;
	int64_t x234 = 124144843843240361LL;
	volatile int8_t x235 = INT8_MAX;
	int8_t x236 = INT8_MAX;
	int64_t t53 = 893133837LL;

	t53 = (x233&((x234+x235)<=x236));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x237 = 13293948LLU;
	uint64_t x238 = UINT64_MAX;
	int8_t x239 = -17;
	int16_t x240 = -1;
	uint64_t t54 = 11LLU;

	t54 = (x237&((x238+x239)<=x240));

	if (t54 != 0LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = 2;
	uint16_t x242 = 521U;
	uint16_t x243 = UINT16_MAX;
	volatile int32_t t55 = 14888;

	t55 = (x241&((x242+x243)<=x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x245 = -1LL;
	int64_t x246 = INT64_MIN;
	int64_t x247 = INT64_MAX;
	uint16_t x248 = 11U;
	int64_t t56 = 12698LL;

	t56 = (x245&((x246+x247)<=x248));

	if (t56 != 1LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x249 = INT16_MIN;
	int64_t x251 = INT64_MIN;
	int32_t x252 = 59779;
	volatile int32_t t57 = -172958;

	t57 = (x249&((x250+x251)<=x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x254 = -20;
	static uint32_t x255 = UINT32_MAX;
	volatile uint64_t x256 = UINT64_MAX;
	int32_t t58 = -57841202;

	t58 = (x253&((x254+x255)<=x256));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x257 = -11846338555373LL;
	static volatile int64_t x258 = INT64_MIN;
	int16_t x259 = 334;
	int32_t x260 = 4941;
	volatile int64_t t59 = 53761LL;

	t59 = (x257&((x258+x259)<=x260));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x265 = 113471202;
	static uint64_t x266 = UINT64_MAX;
	volatile int8_t x267 = INT8_MIN;
	int32_t t60 = 1;

	t60 = (x265&((x266+x267)<=x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x269 = -31;
	int16_t x271 = 0;
	volatile int32_t x272 = INT32_MAX;

	t61 = (x269&((x270+x271)<=x272));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = 5;
	int16_t x282 = -15;
	int16_t x283 = INT16_MIN;
	volatile uint16_t x284 = 298U;

	t62 = (x281&((x282+x283)<=x284));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = 29;
	static int64_t x286 = INT64_MAX;
	volatile int64_t x288 = INT64_MAX;
	int32_t t63 = -10511159;

	t63 = (x285&((x286+x287)<=x288));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int8_t x289 = INT8_MIN;
	int16_t x290 = -1;
	static uint16_t x291 = UINT16_MAX;
	static volatile int32_t t64 = -12698382;

	t64 = (x289&((x290+x291)<=x292));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x293 = INT64_MIN;
	volatile int64_t x294 = INT64_MAX;
	int32_t x295 = -1;
	int32_t x296 = -13900;
	int64_t t65 = 2587471029998876LL;

	t65 = (x293&((x294+x295)<=x296));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x297 = 0U;
	int8_t x298 = -1;
	volatile int16_t x299 = -1;
	uint32_t x300 = 184459637U;
	volatile int32_t t66 = -13556490;

	t66 = (x297&((x298+x299)<=x300));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x301 = INT32_MIN;
	uint64_t x302 = 427839981LLU;
	int8_t x303 = INT8_MIN;
	volatile int64_t x304 = INT64_MAX;
	int32_t t67 = -341338;

	t67 = (x301&((x302+x303)<=x304));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x305 = 197885;
	static volatile int16_t x306 = -20;
	int32_t x307 = -1938694;
	volatile int8_t x308 = INT8_MAX;
	int32_t t68 = 171407733;

	t68 = (x305&((x306+x307)<=x308));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x310 = -69667;
	int16_t x311 = -45;
	volatile int64_t x312 = INT64_MIN;
	int32_t t69 = 1767;

	t69 = (x309&((x310+x311)<=x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x313 = INT16_MAX;
	volatile int32_t x315 = INT32_MIN;
	int16_t x316 = -1;

	t70 = (x313&((x314+x315)<=x316));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x318 = -2;
	static int8_t x320 = INT8_MAX;
	int32_t t71 = -51918051;

	t71 = (x317&((x318+x319)<=x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x322 = 14684193984068028LL;
	int64_t x323 = 3407944291863LL;
	int8_t x324 = INT8_MAX;

	t72 = (x321&((x322+x323)<=x324));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x325 = UINT32_MAX;
	int8_t x326 = -1;
	int8_t x328 = INT8_MIN;
	uint32_t t73 = 22874669U;

	t73 = (x325&((x326+x327)<=x328));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x329 = INT8_MIN;
	static volatile uint8_t x330 = 1U;
	volatile int8_t x331 = INT8_MIN;
	uint16_t x332 = 9273U;
	int32_t t74 = -29057;

	t74 = (x329&((x330+x331)<=x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x337 = INT16_MAX;
	static uint8_t x338 = 0U;
	static int16_t x339 = INT16_MAX;
	volatile int64_t x340 = 2281LL;
	int32_t t75 = -430;

	t75 = (x337&((x338+x339)<=x340));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x341 = 6U;
	int8_t x342 = INT8_MAX;
	int16_t x343 = 9;
	volatile int32_t t76 = -1382;

	t76 = (x341&((x342+x343)<=x344));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x345 = -48;
	static uint32_t x346 = 201607770U;
	static uint64_t x347 = 3717599461LLU;
	int32_t x348 = INT32_MIN;
	int32_t t77 = 1;

	t77 = (x345&((x346+x347)<=x348));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x349 = 58U;
	volatile int16_t x350 = INT16_MAX;
	int16_t x351 = -1;
	int8_t x352 = -1;

	t78 = (x349&((x350+x351)<=x352));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x353 = INT64_MAX;
	int64_t x354 = INT64_MAX;
	volatile int8_t x355 = INT8_MIN;
	int64_t t79 = 823623640444LL;

	t79 = (x353&((x354+x355)<=x356));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x357 = -4;
	volatile uint32_t x358 = UINT32_MAX;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t80 = -2;

	t80 = (x357&((x358+x359)<=x360));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x361 = INT16_MIN;
	uint32_t x362 = UINT32_MAX;
	static int32_t x363 = INT32_MAX;
	volatile uint16_t x364 = UINT16_MAX;
	int32_t t81 = -880;

	t81 = (x361&((x362+x363)<=x364));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x365 = -20389971LL;
	int32_t x366 = 46;
	int32_t x367 = INT32_MIN;
	uint16_t x368 = 3U;

	t82 = (x365&((x366+x367)<=x368));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = 6;
	int16_t x371 = 1065;
	static int8_t x372 = INT8_MIN;
	int32_t t83 = -975784765;

	t83 = (x369&((x370+x371)<=x372));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x385 = 8;
	int64_t x386 = INT64_MAX;
	volatile int8_t x387 = INT8_MIN;
	int32_t t84 = -26158737;

	t84 = (x385&((x386+x387)<=x388));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x389 = INT16_MAX;
	int8_t x390 = INT8_MAX;
	uint64_t x391 = UINT64_MAX;
	static int32_t t85 = 10608569;

	t85 = (x389&((x390+x391)<=x392));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x393 = -44;
	int16_t x394 = -1;
	uint32_t x395 = 493044359U;
	int32_t x396 = -541360507;
	volatile int32_t t86 = 52067;

	t86 = (x393&((x394+x395)<=x396));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint8_t x397 = 3U;
	volatile int64_t x398 = -1LL;
	uint8_t x399 = UINT8_MAX;
	volatile int64_t x400 = 90529641LL;
	static volatile int32_t t87 = -140854317;

	t87 = (x397&((x398+x399)<=x400));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int32_t x405 = INT32_MIN;
	static volatile int64_t x406 = INT64_MIN;
	uint64_t x407 = 664252036039744878LLU;
	int32_t x408 = INT32_MIN;

	t88 = (x405&((x406+x407)<=x408));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x409 = -3395;
	volatile int32_t x410 = INT32_MAX;
	static volatile int64_t x411 = INT64_MIN;
	int32_t t89 = 5105;

	t89 = (x409&((x410+x411)<=x412));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x413 = -1;
	int64_t x414 = 29655LL;
	uint16_t x415 = 975U;
	volatile int32_t x416 = INT32_MIN;
	int32_t t90 = 1;

	t90 = (x413&((x414+x415)<=x416));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x425 = INT32_MIN;
	volatile int16_t x426 = 5636;
	volatile int16_t x427 = INT16_MIN;
	volatile int32_t t91 = -11410;

	t91 = (x425&((x426+x427)<=x428));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x434 = 812;
	volatile int32_t x436 = INT32_MIN;
	volatile uint64_t t92 = 300069991822599346LLU;

	t92 = (x433&((x434+x435)<=x436));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x437 = -1LL;
	int16_t x438 = 3147;
	volatile int8_t x439 = INT8_MIN;
	int8_t x440 = INT8_MIN;
	volatile int64_t t93 = -487836LL;

	t93 = (x437&((x438+x439)<=x440));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x441 = -5;
	uint16_t x442 = 114U;
	int8_t x443 = INT8_MIN;

	t94 = (x441&((x442+x443)<=x444));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile uint8_t x445 = 122U;
	static uint64_t x446 = 8229410LLU;
	uint64_t x447 = 4203974136LLU;

	t95 = (x445&((x446+x447)<=x448));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x449 = INT32_MAX;
	static int32_t x450 = INT32_MIN;
	int16_t x451 = INT16_MAX;
	volatile int64_t x452 = INT64_MIN;
	static volatile int32_t t96 = -14700691;

	t96 = (x449&((x450+x451)<=x452));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x453 = INT8_MIN;
	int64_t x454 = -75LL;
	int8_t x455 = INT8_MIN;

	t97 = (x453&((x454+x455)<=x456));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x457 = INT16_MIN;
	int32_t x458 = 448;
	static int8_t x459 = INT8_MIN;
	static uint8_t x460 = UINT8_MAX;
	int32_t t98 = -251;

	t98 = (x457&((x458+x459)<=x460));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x461 = 0;
	static uint8_t x462 = 59U;
	uint16_t x463 = 3U;
	int8_t x464 = -1;
	volatile int32_t t99 = 53404;

	t99 = (x461&((x462+x463)<=x464));

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

