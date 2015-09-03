#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -4475245;
int32_t x8 = INT32_MAX;
static volatile int32_t t1 = 1;
volatile uint64_t x14 = 2225368439285485LLU;
uint16_t x19 = UINT16_MAX;
static uint8_t x21 = 0U;
static int64_t x24 = INT64_MIN;
static int32_t t5 = 2;
static volatile int32_t x26 = -10273;
int8_t x29 = INT8_MAX;
static int32_t t7 = 1;
static int64_t x51 = INT64_MIN;
static int8_t x52 = 1;
int64_t x56 = INT64_MAX;
int32_t t13 = 1;
int32_t x60 = INT32_MIN;
static int32_t x61 = -505;
int8_t x63 = INT8_MAX;
uint8_t x70 = UINT8_MAX;
volatile int64_t x71 = INT64_MAX;
int16_t x72 = -1;
volatile int32_t t17 = -11;
uint64_t x77 = UINT64_MAX;
uint16_t x83 = UINT16_MAX;
uint8_t x86 = 8U;
int64_t x92 = -1LL;
uint16_t x97 = UINT16_MAX;
uint16_t x99 = 8293U;
uint32_t x104 = 51355U;
int16_t x109 = -1938;
int32_t t27 = -53716;
int16_t x114 = INT16_MAX;
uint32_t x116 = UINT32_MAX;
volatile int32_t t28 = -1;
volatile uint32_t x119 = 1678642364U;
uint64_t x120 = UINT64_MAX;
volatile int32_t t29 = 53;
volatile int64_t x124 = INT64_MIN;
volatile uint32_t x127 = 6070U;
int16_t x133 = INT16_MIN;
int32_t x138 = INT32_MIN;
uint32_t x139 = 192U;
int64_t x154 = INT64_MIN;
static volatile int8_t x155 = -1;
volatile uint8_t x157 = 2U;
int8_t x161 = 17;
int64_t x164 = -1LL;
volatile int16_t x167 = -27;
int64_t x174 = -1LL;
static uint32_t x176 = 0U;
int64_t x181 = INT64_MIN;
int8_t x202 = 7;
static volatile int16_t x203 = INT16_MIN;
volatile int32_t t50 = 1;
int64_t x212 = -5506817072LL;
static int8_t x217 = INT8_MIN;
int32_t x228 = -1;
int64_t x230 = 7539461770793LL;
uint32_t x233 = 4084531U;
int16_t x243 = INT16_MAX;
static volatile uint16_t x245 = 0U;
int16_t x247 = INT16_MIN;
volatile int32_t t61 = 339162984;
volatile int16_t x250 = INT16_MIN;
int32_t x256 = INT32_MAX;
int32_t x259 = -1;
static int32_t x265 = INT32_MAX;
static uint16_t x267 = 5U;
static int64_t x269 = INT64_MIN;
volatile int64_t x271 = INT64_MAX;
volatile int64_t x275 = INT64_MIN;
static int64_t x280 = -7658742246LL;
static volatile uint64_t x283 = 11LLU;
int32_t t73 = 2;
uint64_t x298 = 2387608309LLU;
volatile int16_t x299 = 17;
int32_t x304 = -60;
volatile uint64_t x308 = 1LLU;
int64_t x311 = INT64_MIN;
uint32_t x312 = UINT32_MAX;
static int8_t x314 = 29;
static int64_t x322 = INT64_MAX;
static int8_t x330 = -1;
volatile int32_t t82 = 1224633;
int64_t x335 = -1LL;
int16_t x347 = -1;
uint32_t x354 = UINT32_MAX;
static uint16_t x355 = UINT16_MAX;
volatile int64_t x356 = -1LL;
int8_t x359 = -1;
uint32_t x361 = 132U;
uint64_t x362 = 7180351076693693LLU;
volatile int32_t t90 = -34;
uint64_t x369 = 4670984686923LLU;
int32_t x376 = -6;
int8_t x377 = INT8_MIN;
uint32_t x378 = UINT32_MAX;
int16_t x391 = 47;
volatile int32_t x398 = -227372;
uint16_t x400 = 44U;


void f0(void) {
	volatile int8_t x1 = -1;
	int16_t x2 = INT16_MIN;
	int64_t x3 = INT64_MIN;
	volatile uint8_t x4 = 22U;

	t0 = ((x1^(x2<=x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint16_t x5 = UINT16_MAX;
	int8_t x6 = -7;
	uint8_t x7 = 0U;

	t1 = ((x5^(x6<=x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static uint16_t x9 = 1U;
	int32_t x10 = -855;
	volatile int64_t x11 = INT64_MIN;
	int64_t x12 = INT64_MIN;
	volatile int32_t t2 = 168340852;

	t2 = ((x9^(x10<=x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 11;
	volatile uint8_t x15 = UINT8_MAX;
	static int32_t x16 = -72271;
	int32_t t3 = -110;

	t3 = ((x13^(x14<=x15))<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x17 = 1;
	uint8_t x18 = 2U;
	static uint64_t x20 = 498LLU;
	int32_t t4 = -588634017;

	t4 = ((x17^(x18<=x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x22 = 1200237362U;
	static int32_t x23 = -10159019;

	t5 = ((x21^(x22<=x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MIN;
	static uint32_t x27 = 19666U;
	uint64_t x28 = 414LLU;
	volatile int32_t t6 = 71766;

	t6 = ((x25^(x26<=x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x30 = -1;
	int16_t x31 = INT16_MIN;
	volatile uint16_t x32 = UINT16_MAX;

	t7 = ((x29^(x30<=x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = INT32_MIN;
	uint32_t x34 = UINT32_MAX;
	int32_t x35 = INT32_MIN;
	volatile int8_t x36 = -1;
	int32_t t8 = -415811;

	t8 = ((x33^(x34<=x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	static int8_t x38 = -3;
	int64_t x39 = -1LL;
	static int64_t x40 = INT64_MAX;
	volatile int32_t t9 = 442;

	t9 = ((x37^(x38<=x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = 88463122;
	static volatile int32_t x42 = 16034;
	int16_t x43 = INT16_MAX;
	static volatile int32_t x44 = INT32_MAX;
	volatile int32_t t10 = -4;

	t10 = ((x41^(x42<=x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	uint16_t x46 = 2454U;
	uint64_t x47 = 255763712LLU;
	static int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -751651069;

	t11 = ((x45^(x46<=x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MAX;
	volatile int32_t x50 = INT32_MIN;
	volatile int32_t t12 = 1;

	t12 = ((x49^(x50<=x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = -1;
	int64_t x54 = -65252233LL;
	int16_t x55 = -7388;

	t13 = ((x53^(x54<=x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -4;
	volatile int64_t x58 = INT64_MIN;
	int64_t x59 = -1LL;
	static volatile int32_t t14 = 90;

	t14 = ((x57^(x58<=x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = 3824;
	int64_t x64 = 29077998LL;
	int32_t t15 = 772;

	t15 = ((x61^(x62<=x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x65 = -1;
	int32_t x66 = -39682;
	static int64_t x67 = INT64_MAX;
	int64_t x68 = -1LL;
	volatile int32_t t16 = 110;

	t16 = ((x65^(x66<=x67))<x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -1;

	t17 = ((x69^(x70<=x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint16_t x73 = 255U;
	static uint16_t x74 = UINT16_MAX;
	uint64_t x75 = 107707433720311442LLU;
	int64_t x76 = INT64_MAX;
	volatile int32_t t18 = -336068528;

	t18 = ((x73^(x74<=x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = INT8_MAX;
	uint16_t x79 = 1915U;
	static int8_t x80 = INT8_MIN;
	int32_t t19 = -19;

	t19 = ((x77^(x78<=x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 15790039762692236LLU;
	int8_t x82 = 1;
	uint64_t x84 = 0LLU;
	static volatile int32_t t20 = 2654198;

	t20 = ((x81^(x82<=x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	int64_t x87 = INT64_MIN;
	int16_t x88 = -1;
	int32_t t21 = 291;

	t21 = ((x85^(x86<=x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	int64_t x90 = INT64_MIN;
	uint32_t x91 = 0U;
	volatile int32_t t22 = -50669;

	t22 = ((x89^(x90<=x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x93 = 8784969061789LLU;
	uint32_t x94 = 119863U;
	int64_t x95 = -453372111LL;
	volatile uint16_t x96 = 0U;
	volatile int32_t t23 = 1515646;

	t23 = ((x93^(x94<=x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint16_t x98 = 760U;
	static uint16_t x100 = 652U;
	static volatile int32_t t24 = -3;

	t24 = ((x97^(x98<=x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = -1;
	volatile int32_t x102 = 5922;
	int32_t x103 = INT32_MIN;
	int32_t t25 = -3;

	t25 = ((x101^(x102<=x103))<x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = INT8_MAX;
	static uint16_t x106 = UINT16_MAX;
	int64_t x107 = -1LL;
	int16_t x108 = INT16_MIN;
	int32_t t26 = 1514908;

	t26 = ((x105^(x106<=x107))<x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x110 = UINT16_MAX;
	static volatile int64_t x111 = INT64_MAX;
	uint8_t x112 = 1U;

	t27 = ((x109^(x110<=x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = UINT64_MAX;
	volatile int64_t x115 = INT64_MIN;

	t28 = ((x113^(x114<=x115))<x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x117 = UINT16_MAX;
	volatile uint64_t x118 = UINT64_MAX;

	t29 = ((x117^(x118<=x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MAX;
	int64_t x122 = INT64_MAX;
	volatile int64_t x123 = -1LL;
	int32_t t30 = -21;

	t30 = ((x121^(x122<=x123))<x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = -1;
	int8_t x126 = -2;
	int32_t x128 = INT32_MAX;
	volatile int32_t t31 = 2258506;

	t31 = ((x125^(x126<=x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint8_t x129 = 116U;
	uint32_t x130 = 60246U;
	volatile int8_t x131 = 20;
	volatile int16_t x132 = 10143;
	int32_t t32 = -8496;

	t32 = ((x129^(x130<=x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = 1;
	volatile uint16_t x135 = UINT16_MAX;
	static volatile uint64_t x136 = 1567299LLU;
	static volatile int32_t t33 = 29858636;

	t33 = ((x133^(x134<=x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	int16_t x140 = 14;
	int32_t t34 = 653324;

	t34 = ((x137^(x138<=x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MAX;
	int32_t x142 = -120153111;
	uint32_t x143 = 2U;
	int32_t x144 = INT32_MIN;
	int32_t t35 = 1;

	t35 = ((x141^(x142<=x143))<x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x145 = INT8_MIN;
	int32_t x146 = 526310367;
	volatile int8_t x147 = INT8_MIN;
	int64_t x148 = -1LL;
	static volatile int32_t t36 = -20062167;

	t36 = ((x145^(x146<=x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = 261931;
	uint16_t x150 = UINT16_MAX;
	uint8_t x151 = 0U;
	static int32_t x152 = -1;
	static volatile int32_t t37 = -11195;

	t37 = ((x149^(x150<=x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -68166LL;
	uint16_t x156 = UINT16_MAX;
	volatile int32_t t38 = 2404225;

	t38 = ((x153^(x154<=x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x158 = INT16_MIN;
	uint16_t x159 = 346U;
	int16_t x160 = 0;
	int32_t t39 = -502;

	t39 = ((x157^(x158<=x159))<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = INT8_MIN;
	uint64_t x163 = 6324048061572LLU;
	int32_t t40 = -100698944;

	t40 = ((x161^(x162<=x163))<x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x165 = 22272U;
	int16_t x166 = -1;
	int16_t x168 = INT16_MAX;
	int32_t t41 = -32364;

	t41 = ((x165^(x166<=x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x169 = INT32_MAX;
	uint32_t x170 = UINT32_MAX;
	int16_t x171 = 799;
	int16_t x172 = 2428;
	volatile int32_t t42 = 21;

	t42 = ((x169^(x170<=x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MAX;
	int32_t x175 = -1;
	static volatile int32_t t43 = -103;

	t43 = ((x173^(x174<=x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 108021802U;
	int16_t x178 = INT16_MIN;
	uint8_t x179 = 3U;
	int32_t x180 = INT32_MIN;
	volatile int32_t t44 = 3;

	t44 = ((x177^(x178<=x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x182 = INT32_MIN;
	uint32_t x183 = UINT32_MAX;
	static volatile int64_t x184 = INT64_MIN;
	volatile int32_t t45 = -249728351;

	t45 = ((x181^(x182<=x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	int32_t x186 = INT32_MIN;
	uint16_t x187 = 251U;
	static uint64_t x188 = 10866773741951271LLU;
	volatile int32_t t46 = -8117559;

	t46 = ((x185^(x186<=x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 4596;
	int64_t x190 = INT64_MIN;
	int16_t x191 = INT16_MIN;
	int16_t x192 = INT16_MIN;
	static volatile int32_t t47 = 10;

	t47 = ((x189^(x190<=x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x193 = 42917U;
	int32_t x194 = -3645;
	static int16_t x195 = 755;
	int32_t x196 = 329;
	int32_t t48 = -2;

	t48 = ((x193^(x194<=x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = UINT8_MAX;
	int16_t x198 = INT16_MAX;
	static volatile int64_t x199 = -1LL;
	volatile int64_t x200 = INT64_MIN;
	volatile int32_t t49 = 1728;

	t49 = ((x197^(x198<=x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 1U;
	uint16_t x204 = UINT16_MAX;

	t50 = ((x201^(x202<=x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x205 = 0LLU;
	static volatile uint8_t x206 = 5U;
	int16_t x207 = INT16_MIN;
	int32_t x208 = 205;
	volatile int32_t t51 = 2744922;

	t51 = ((x205^(x206<=x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 0U;
	volatile int16_t x210 = INT16_MIN;
	int32_t x211 = -19;
	int32_t t52 = 1568283;

	t52 = ((x209^(x210<=x211))<x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	static uint64_t x214 = 64763962734LLU;
	int32_t x215 = INT32_MAX;
	int64_t x216 = 17069437477LL;
	static volatile int32_t t53 = -350811;

	t53 = ((x213^(x214<=x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x218 = -1LL;
	uint32_t x219 = UINT32_MAX;
	int8_t x220 = INT8_MAX;
	static int32_t t54 = 202;

	t54 = ((x217^(x218<=x219))<x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -7;
	uint32_t x222 = 622188132U;
	static uint64_t x223 = 5249030407530LLU;
	volatile int8_t x224 = INT8_MIN;
	int32_t t55 = -138633791;

	t55 = ((x221^(x222<=x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	uint8_t x226 = UINT8_MAX;
	uint32_t x227 = 721557U;
	volatile int32_t t56 = -220796989;

	t56 = ((x225^(x226<=x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = UINT32_MAX;
	volatile uint16_t x231 = 1U;
	volatile int16_t x232 = 37;
	int32_t t57 = 11686196;

	t57 = ((x229^(x230<=x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x234 = -1;
	volatile uint8_t x235 = UINT8_MAX;
	volatile int16_t x236 = -30;
	volatile int32_t t58 = -659201177;

	t58 = ((x233^(x234<=x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = 131108;
	int64_t x238 = INT64_MIN;
	volatile int16_t x239 = -22;
	int32_t x240 = INT32_MIN;
	int32_t t59 = -11051;

	t59 = ((x237^(x238<=x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x241 = 61U;
	uint64_t x242 = UINT64_MAX;
	static int16_t x244 = -1;
	int32_t t60 = 103213228;

	t60 = ((x241^(x242<=x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = INT64_MIN;
	int16_t x248 = INT16_MAX;

	t61 = ((x245^(x246<=x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MIN;
	uint32_t x251 = 14685485U;
	int32_t x252 = -512151;
	int32_t t62 = -34899881;

	t62 = ((x249^(x250<=x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x253 = INT32_MAX;
	int16_t x254 = INT16_MAX;
	int64_t x255 = -2402023944744720018LL;
	volatile int32_t t63 = 32564377;

	t63 = ((x253^(x254<=x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = UINT64_MAX;
	volatile int64_t x258 = -1LL;
	uint8_t x260 = UINT8_MAX;
	static volatile int32_t t64 = -25558;

	t64 = ((x257^(x258<=x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint16_t x261 = 0U;
	volatile int8_t x262 = INT8_MIN;
	static int8_t x263 = -11;
	int8_t x264 = INT8_MAX;
	int32_t t65 = -370656;

	t65 = ((x261^(x262<=x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	volatile uint64_t x268 = 185081331065711LLU;
	int32_t t66 = -1;

	t66 = ((x265^(x266<=x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x270 = INT16_MIN;
	int32_t x272 = -1;
	volatile int32_t t67 = -209652;

	t67 = ((x269^(x270<=x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = UINT64_MAX;
	int32_t x274 = INT32_MIN;
	static uint16_t x276 = 31U;
	static volatile int32_t t68 = -765;

	t68 = ((x273^(x274<=x275))<x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = -1816039LL;
	int32_t x278 = -1;
	int32_t x279 = INT32_MAX;
	int32_t t69 = 298456580;

	t69 = ((x277^(x278<=x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x281 = 1;
	int32_t x282 = 894;
	uint16_t x284 = UINT16_MAX;
	int32_t t70 = -124516;

	t70 = ((x281^(x282<=x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = -1;
	uint16_t x286 = 6U;
	int32_t x287 = INT32_MAX;
	volatile int8_t x288 = INT8_MIN;
	volatile int32_t t71 = -593296031;

	t71 = ((x285^(x286<=x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	int16_t x290 = INT16_MIN;
	static int16_t x291 = INT16_MIN;
	static int32_t x292 = -1;
	volatile int32_t t72 = 189381557;

	t72 = ((x289^(x290<=x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	uint8_t x294 = UINT8_MAX;
	static int16_t x295 = -1607;
	int16_t x296 = -3;

	t73 = ((x293^(x294<=x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	static int8_t x300 = -1;
	volatile int32_t t74 = 22921;

	t74 = ((x297^(x298<=x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = UINT8_MAX;
	uint32_t x302 = 25693U;
	static uint8_t x303 = 44U;
	int32_t t75 = -31430;

	t75 = ((x301^(x302<=x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	static int32_t x306 = INT32_MIN;
	uint8_t x307 = 5U;
	int32_t t76 = -100;

	t76 = ((x305^(x306<=x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	static volatile int32_t x310 = 248675;
	volatile int32_t t77 = -117;

	t77 = ((x309^(x310<=x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x313 = -1LL;
	int32_t x315 = -26174782;
	int16_t x316 = -1;
	int32_t t78 = -11343;

	t78 = ((x313^(x314<=x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = INT32_MIN;
	static volatile uint8_t x318 = UINT8_MAX;
	uint64_t x319 = UINT64_MAX;
	uint32_t x320 = UINT32_MAX;
	static volatile int32_t t79 = 97;

	t79 = ((x317^(x318<=x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MAX;
	static int16_t x323 = INT16_MIN;
	uint16_t x324 = 1787U;
	volatile int32_t t80 = 15;

	t80 = ((x321^(x322<=x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = 80LL;
	volatile uint8_t x326 = UINT8_MAX;
	int32_t x327 = 35;
	int64_t x328 = INT64_MIN;
	volatile int32_t t81 = 393454;

	t81 = ((x325^(x326<=x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = UINT8_MAX;
	int8_t x331 = 8;
	uint8_t x332 = UINT8_MAX;

	t82 = ((x329^(x330<=x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 6498404U;
	int8_t x334 = INT8_MIN;
	volatile int64_t x336 = INT64_MIN;
	volatile int32_t t83 = 1;

	t83 = ((x333^(x334<=x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x337 = UINT64_MAX;
	int64_t x338 = INT64_MAX;
	int8_t x339 = INT8_MAX;
	int16_t x340 = 2;
	int32_t t84 = 28185;

	t84 = ((x337^(x338<=x339))<x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 1251262368494LL;
	int8_t x342 = INT8_MIN;
	static int32_t x343 = INT32_MIN;
	volatile int64_t x344 = INT64_MIN;
	volatile int32_t t85 = -6;

	t85 = ((x341^(x342<=x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = INT64_MIN;
	static uint32_t x346 = UINT32_MAX;
	static uint8_t x348 = 1U;
	volatile int32_t t86 = -425;

	t86 = ((x345^(x346<=x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x349 = 1346288910LLU;
	volatile int32_t x350 = INT32_MIN;
	static int8_t x351 = 1;
	int32_t x352 = INT32_MIN;
	int32_t t87 = 12668;

	t87 = ((x349^(x350<=x351))<x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	static int32_t t88 = -39;

	t88 = ((x353^(x354<=x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = UINT64_MAX;
	int64_t x358 = INT64_MIN;
	int64_t x360 = INT64_MAX;
	static int32_t t89 = -7288313;

	t89 = ((x357^(x358<=x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x363 = INT16_MIN;
	int8_t x364 = INT8_MAX;

	t90 = ((x361^(x362<=x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	volatile uint64_t x366 = UINT64_MAX;
	static uint64_t x367 = UINT64_MAX;
	uint16_t x368 = UINT16_MAX;
	static volatile int32_t t91 = -1764;

	t91 = ((x365^(x366<=x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x370 = -37861LL;
	int32_t x371 = INT32_MAX;
	int64_t x372 = INT64_MIN;
	int32_t t92 = 3;

	t92 = ((x369^(x370<=x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = UINT32_MAX;
	static int16_t x374 = -1;
	int32_t x375 = -30;
	int32_t t93 = 5;

	t93 = ((x373^(x374<=x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x379 = 1037718U;
	uint8_t x380 = 2U;
	volatile int32_t t94 = 2;

	t94 = ((x377^(x378<=x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x381 = 952974270U;
	static volatile int32_t x382 = -1;
	int8_t x383 = INT8_MAX;
	int8_t x384 = -1;
	int32_t t95 = -1;

	t95 = ((x381^(x382<=x383))<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	uint64_t x386 = 232682811758LLU;
	uint64_t x387 = 283LLU;
	int16_t x388 = -1;
	int32_t t96 = 35007250;

	t96 = ((x385^(x386<=x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 1965446LLU;
	int64_t x390 = INT64_MIN;
	int32_t x392 = INT32_MIN;
	int32_t t97 = 6;

	t97 = ((x389^(x390<=x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	volatile int64_t x394 = -2839975942715615LL;
	int64_t x395 = -28691LL;
	static int16_t x396 = INT16_MIN;
	int32_t t98 = -216;

	t98 = ((x393^(x394<=x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 14LLU;
	static uint64_t x399 = 19953773900639LLU;
	static int32_t t99 = 1;

	t99 = ((x397^(x398<=x399))<x400);

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

