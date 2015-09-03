#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = 826947418411102535LL;
int64_t t1 = 8060002009549LL;
int8_t x11 = -1;
volatile int32_t x22 = 299798;
uint32_t x24 = 179698451U;
static volatile int16_t x29 = INT16_MIN;
int16_t x30 = -1;
int16_t x32 = -1;
int32_t t8 = -4823;
static uint8_t x38 = UINT8_MAX;
uint16_t x40 = 3U;
static volatile int32_t t9 = 38812322;
static volatile int32_t t10 = INT32_MIN;
int32_t x46 = INT32_MIN;
volatile uint8_t x51 = UINT8_MAX;
static volatile int64_t t12 = 1379102332120417062LL;
volatile int16_t x54 = -1;
uint32_t x58 = 2U;
volatile int32_t t14 = -3;
uint32_t x63 = 6U;
volatile uint32_t x64 = UINT32_MAX;
uint16_t x67 = UINT16_MAX;
volatile int32_t x72 = 670;
int8_t x76 = -1;
int32_t t19 = 307506811;
uint8_t x81 = 7U;
static volatile uint16_t x87 = 58U;
static int32_t x88 = -1;
volatile int32_t t21 = -805;
int32_t x93 = -46582;
int16_t x95 = INT16_MIN;
int8_t x96 = INT8_MIN;
int8_t x97 = 3;
volatile int64_t x103 = INT64_MIN;
volatile uint16_t x108 = UINT16_MAX;
volatile int32_t t26 = -642;
uint32_t x119 = 373721U;
int32_t x121 = INT32_MAX;
int64_t x123 = INT64_MAX;
int64_t x125 = -1LL;
volatile int32_t t31 = 13961;
int32_t x131 = INT32_MIN;
int64_t x139 = 0LL;
int32_t t34 = -458;
static volatile int16_t x149 = INT16_MIN;
int32_t t37 = -31728904;
int16_t x156 = INT16_MIN;
volatile int8_t x157 = INT8_MAX;
static int8_t x158 = INT8_MIN;
int32_t x159 = INT32_MIN;
static int8_t x160 = INT8_MIN;
static int8_t x166 = 0;
uint64_t t42 = 115LLU;
int64_t x181 = INT64_MIN;
static int32_t x184 = -1;
static volatile int32_t x185 = 216493;
int32_t x191 = 3;
int16_t x193 = 7;
int64_t x194 = INT64_MIN;
static int8_t x197 = INT8_MAX;
static int8_t x199 = 12;
volatile int8_t x204 = -1;
volatile int64_t t51 = -180425LL;
int64_t t53 = 15LL;
uint16_t x220 = 13U;
int16_t x225 = -1;
int16_t x227 = INT16_MIN;
int16_t x229 = INT16_MAX;
int8_t x250 = -1;
volatile uint8_t x256 = 123U;
volatile int64_t t64 = -24770703812531LL;
volatile int64_t x262 = -2092658052165513LL;
uint64_t x263 = 42183458450529LLU;
static uint64_t x266 = 579415410LLU;
volatile int32_t t66 = INT32_MAX;
volatile int8_t x272 = 1;
int16_t x275 = -15;
int16_t x278 = -777;
volatile int64_t t69 = INT64_MIN;
int16_t x281 = -1;
volatile int16_t x284 = INT16_MIN;
static int32_t t72 = -3677;
uint16_t x293 = 0U;
volatile uint16_t x295 = 8U;
uint64_t x300 = 969232687092LLU;
volatile uint64_t t74 = 287867853416704936LLU;
int16_t x304 = -1;
uint16_t x305 = UINT16_MAX;
volatile uint64_t t76 = UINT64_MAX;
int32_t x314 = -52;
volatile uint32_t x316 = UINT32_MAX;
uint32_t t78 = UINT32_MAX;
volatile int32_t x324 = -1;
int16_t x329 = 11896;
int16_t x332 = 6313;
int16_t x336 = 41;
int32_t t83 = 60;
int64_t x338 = 652561314320668LL;
int32_t x340 = -501991;
volatile uint8_t x348 = 0U;
int32_t x349 = -1;
uint64_t x354 = 1659LLU;
uint16_t x356 = 30U;
volatile int64_t x359 = 58431LL;
static int64_t t91 = INT64_MAX;
uint32_t x371 = 53U;
static uint16_t x373 = 331U;
volatile int64_t x377 = INT64_MAX;
uint8_t x382 = 25U;
int32_t x383 = -266304;
int64_t x386 = -1LL;
int8_t x389 = INT8_MAX;
volatile uint64_t x392 = UINT64_MAX;
int16_t x393 = INT16_MIN;
static int8_t x397 = INT8_MIN;
static int16_t x400 = -1530;


void f0(void) {
	int16_t x1 = -1;
	int64_t x2 = 1LL;
	int64_t x3 = INT64_MIN;
	uint16_t x4 = 181U;
	static volatile int32_t t0 = 5448;

	t0 = (((x1^x2)<x3)|x4);

	if (t0 != 181) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MAX;
	static int64_t x6 = 879977441912029LL;
	int16_t x7 = INT16_MIN;

	t1 = (((x5^x6)<x7)|x8);

	if (t1 != 826947418411102535LL) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 4U;
	volatile int32_t x10 = INT32_MAX;
	uint64_t x12 = UINT64_MAX;
	volatile uint64_t t2 = UINT64_MAX;

	t2 = (((x9^x10)<x11)|x12);

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = UINT32_MAX;
	int32_t x14 = 1807;
	int64_t x15 = INT64_MIN;
	int8_t x16 = INT8_MIN;
	int32_t t3 = 193;

	t3 = (((x13^x14)<x15)|x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -1;
	volatile int32_t x18 = -1;
	volatile uint32_t x19 = 759241U;
	int8_t x20 = -1;
	volatile int32_t t4 = -1149243;

	t4 = (((x17^x18)<x19)|x20);

	if (t4 != -1) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint8_t x21 = 0U;
	static volatile uint64_t x23 = 2570LLU;
	uint32_t t5 = 29724344U;

	t5 = (((x21^x22)<x23)|x24);

	if (t5 != 179698451U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 1;
	int16_t x26 = INT16_MIN;
	uint8_t x27 = UINT8_MAX;
	volatile int64_t x28 = INT64_MIN;
	static int64_t t6 = 346307247658843460LL;

	t6 = (((x25^x26)<x27)|x28);

	if (t6 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x31 = INT64_MIN;
	int32_t t7 = 3412269;

	t7 = (((x29^x30)<x31)|x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = 8;
	volatile int16_t x34 = 244;
	int32_t x35 = INT32_MIN;
	volatile int8_t x36 = INT8_MIN;

	t8 = (((x33^x34)<x35)|x36);

	if (t8 != -128) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	uint32_t x39 = 54419013U;

	t9 = (((x37^x38)<x39)|x40);

	if (t9 != 3) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x41 = INT16_MAX;
	uint32_t x42 = UINT32_MAX;
	uint16_t x43 = UINT16_MAX;
	int32_t x44 = INT32_MIN;

	t10 = (((x41^x42)<x43)|x44);

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x45 = UINT32_MAX;
	static volatile int64_t x47 = -1LL;
	int32_t x48 = 0;
	static int32_t t11 = -46;

	t11 = (((x45^x46)<x47)|x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = 112U;
	int64_t x50 = -292610LL;
	int64_t x52 = INT64_MIN;

	t12 = (((x49^x50)<x51)|x52);

	if (t12 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x53 = -1;
	volatile int8_t x55 = INT8_MIN;
	int16_t x56 = 21;
	int32_t t13 = 3088;

	t13 = (((x53^x54)<x55)|x56);

	if (t13 != 21) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = 2345654424758LLU;
	static uint64_t x59 = 1796LLU;
	volatile int8_t x60 = INT8_MIN;

	t14 = (((x57^x58)<x59)|x60);

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x61 = INT8_MAX;
	volatile int64_t x62 = -489210654911614528LL;
	uint32_t t15 = UINT32_MAX;

	t15 = (((x61^x62)<x63)|x64);

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 0;
	static uint16_t x66 = 3U;
	volatile int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 43398839;

	t16 = (((x65^x66)<x67)|x68);

	if (t16 != -32767) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 4802247LLU;
	int64_t x70 = -6492812306856LL;
	volatile uint8_t x71 = 4U;
	int32_t t17 = -1104135;

	t17 = (((x69^x70)<x71)|x72);

	if (t17 != 670) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	static int16_t x74 = -1;
	int8_t x75 = INT8_MAX;
	volatile int32_t t18 = 29019;

	t18 = (((x73^x74)<x75)|x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	uint64_t x78 = 3622552648939831LLU;
	int64_t x79 = INT64_MAX;
	int16_t x80 = 31;

	t19 = (((x77^x78)<x79)|x80);

	if (t19 != 31) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x82 = UINT32_MAX;
	int64_t x83 = INT64_MIN;
	uint64_t x84 = UINT64_MAX;
	static uint64_t t20 = UINT64_MAX;

	t20 = (((x81^x82)<x83)|x84);

	if (t20 != UINT64_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = UINT8_MAX;
	int16_t x86 = INT16_MIN;

	t21 = (((x85^x86)<x87)|x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	uint32_t x90 = 779U;
	static int32_t x91 = 149;
	uint8_t x92 = 3U;
	volatile int32_t t22 = -45450;

	t22 = (((x89^x90)<x91)|x92);

	if (t22 != 3) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x94 = INT64_MIN;
	volatile int32_t t23 = 0;

	t23 = (((x93^x94)<x95)|x96);

	if (t23 != -128) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x98 = 5172U;
	int64_t x99 = INT64_MAX;
	int16_t x100 = 537;
	int32_t t24 = -4080;

	t24 = (((x97^x98)<x99)|x100);

	if (t24 != 537) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	static volatile int8_t x102 = -25;
	int32_t x104 = INT32_MIN;
	volatile int32_t t25 = INT32_MIN;

	t25 = (((x101^x102)<x103)|x104);

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint16_t x105 = 23613U;
	volatile int32_t x106 = INT32_MIN;
	int8_t x107 = -28;

	t26 = (((x105^x106)<x107)|x108);

	if (t26 != 65535) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = 229703;
	uint8_t x110 = UINT8_MAX;
	int8_t x111 = INT8_MIN;
	int32_t x112 = INT32_MAX;
	volatile int32_t t27 = INT32_MAX;

	t27 = (((x109^x110)<x111)|x112);

	if (t27 != INT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = INT32_MIN;
	volatile int16_t x114 = -1;
	uint32_t x115 = UINT32_MAX;
	volatile int16_t x116 = INT16_MIN;
	static int32_t t28 = -2273;

	t28 = (((x113^x114)<x115)|x116);

	if (t28 != -32767) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = INT8_MIN;
	int32_t x118 = -1;
	int8_t x120 = INT8_MIN;
	int32_t t29 = -48;

	t29 = (((x117^x118)<x119)|x120);

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x122 = UINT16_MAX;
	int8_t x124 = -1;
	volatile int32_t t30 = 121;

	t30 = (((x121^x122)<x123)|x124);

	if (t30 != -1) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x126 = INT64_MIN;
	int32_t x127 = 416748921;
	uint16_t x128 = 318U;

	t31 = (((x125^x126)<x127)|x128);

	if (t31 != 318) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = -207786334296972LL;
	uint16_t x130 = UINT16_MAX;
	int64_t x132 = -1LL;
	int64_t t32 = 175135068296948649LL;

	t32 = (((x129^x130)<x131)|x132);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = 5513508;
	volatile uint16_t x134 = 1U;
	int64_t x135 = INT64_MIN;
	static int16_t x136 = INT16_MIN;
	volatile int32_t t33 = -26975596;

	t33 = (((x133^x134)<x135)|x136);

	if (t33 != -32768) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 10U;
	int64_t x138 = -1LL;
	int32_t x140 = -1;

	t34 = (((x137^x138)<x139)|x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	static int8_t x142 = 8;
	static uint8_t x143 = UINT8_MAX;
	int8_t x144 = INT8_MAX;
	volatile int32_t t35 = -23469;

	t35 = (((x141^x142)<x143)|x144);

	if (t35 != 127) { NG(); } else { ; }
	
}

void f36(void) {
	static int64_t x145 = INT64_MIN;
	int32_t x146 = -3;
	int64_t x147 = -31587191868985LL;
	uint64_t x148 = 511506484LLU;
	uint64_t t36 = 1437LLU;

	t36 = (((x145^x146)<x147)|x148);

	if (t36 != 511506484LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = -1;
	static uint16_t x151 = 0U;
	static int8_t x152 = 46;

	t37 = (((x149^x150)<x151)|x152);

	if (t37 != 46) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x153 = UINT64_MAX;
	static volatile int64_t x154 = -1LL;
	int16_t x155 = INT16_MIN;
	volatile int32_t t38 = -12511349;

	t38 = (((x153^x154)<x155)|x156);

	if (t38 != -32767) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t t39 = -315;

	t39 = (((x157^x158)<x159)|x160);

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = 3U;
	uint32_t x162 = 1262365U;
	uint64_t x163 = UINT64_MAX;
	int64_t x164 = INT64_MAX;
	volatile int64_t t40 = INT64_MAX;

	t40 = (((x161^x162)<x163)|x164);

	if (t40 != INT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x165 = -76146743;
	uint32_t x167 = 2348U;
	int8_t x168 = 24;
	volatile int32_t t41 = -88409151;

	t41 = (((x165^x166)<x167)|x168);

	if (t41 != 24) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = INT16_MAX;
	int8_t x170 = -1;
	int64_t x171 = -2164846190489733LL;
	uint64_t x172 = 10061581739LLU;

	t42 = (((x169^x170)<x171)|x172);

	if (t42 != 10061581739LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	int16_t x174 = INT16_MIN;
	volatile int16_t x175 = -2;
	int8_t x176 = INT8_MIN;
	int32_t t43 = -33027214;

	t43 = (((x173^x174)<x175)|x176);

	if (t43 != -128) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x177 = INT8_MAX;
	volatile uint8_t x178 = 1U;
	uint8_t x179 = 0U;
	int32_t x180 = INT32_MAX;
	volatile int32_t t44 = INT32_MAX;

	t44 = (((x177^x178)<x179)|x180);

	if (t44 != INT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x182 = 5U;
	uint16_t x183 = 2806U;
	int32_t t45 = 5758631;

	t45 = (((x181^x182)<x183)|x184);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x186 = -313735767317374LL;
	static uint8_t x187 = UINT8_MAX;
	static uint16_t x188 = 336U;
	volatile int32_t t46 = -376580531;

	t46 = (((x185^x186)<x187)|x188);

	if (t46 != 337) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x189 = 2737U;
	static int16_t x190 = INT16_MAX;
	int32_t x192 = INT32_MIN;
	static volatile int32_t t47 = INT32_MIN;

	t47 = (((x189^x190)<x191)|x192);

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x195 = -1;
	static uint32_t x196 = 235892U;
	volatile uint32_t t48 = 367678812U;

	t48 = (((x193^x194)<x195)|x196);

	if (t48 != 235893U) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x198 = 240U;
	int16_t x200 = INT16_MIN;
	int32_t t49 = 93244715;

	t49 = (((x197^x198)<x199)|x200);

	if (t49 != -32768) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 116U;
	uint32_t x202 = 9489U;
	int16_t x203 = -1;
	static int32_t t50 = 0;

	t50 = (((x201^x202)<x203)|x204);

	if (t50 != -1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x205 = 0;
	uint32_t x206 = 293079U;
	static int16_t x207 = -1;
	int64_t x208 = -278181389596819271LL;

	t51 = (((x205^x206)<x207)|x208);

	if (t51 != -278181389596819271LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	int16_t x210 = -1;
	volatile uint8_t x211 = UINT8_MAX;
	volatile int64_t x212 = -70289LL;
	static volatile int64_t t52 = -5060807506100999LL;

	t52 = (((x209^x210)<x211)|x212);

	if (t52 != -70289LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	uint16_t x214 = 0U;
	int16_t x215 = INT16_MIN;
	int64_t x216 = 0LL;

	t53 = (((x213^x214)<x215)|x216);

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = INT64_MIN;
	uint8_t x218 = 32U;
	uint16_t x219 = 1U;
	int32_t t54 = 1155890;

	t54 = (((x217^x218)<x219)|x220);

	if (t54 != 13) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = 8226LL;
	volatile uint8_t x222 = 12U;
	volatile int64_t x223 = INT64_MIN;
	uint64_t x224 = 1888363LLU;
	static uint64_t t55 = 4017281LLU;

	t55 = (((x221^x222)<x223)|x224);

	if (t55 != 1888363LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x226 = -1;
	int16_t x228 = INT16_MAX;
	static volatile int32_t t56 = 164413440;

	t56 = (((x225^x226)<x227)|x228);

	if (t56 != 32767) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x230 = 0U;
	int8_t x231 = -1;
	int16_t x232 = INT16_MIN;
	static volatile int32_t t57 = -149;

	t57 = (((x229^x230)<x231)|x232);

	if (t57 != -32768) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = INT64_MIN;
	volatile int64_t x234 = INT64_MAX;
	volatile int16_t x235 = INT16_MIN;
	uint8_t x236 = 2U;
	volatile int32_t t58 = 983993;

	t58 = (((x233^x234)<x235)|x236);

	if (t58 != 2) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	static volatile int8_t x238 = 1;
	int64_t x239 = INT64_MAX;
	int32_t x240 = -2060;
	volatile int32_t t59 = -23504;

	t59 = (((x237^x238)<x239)|x240);

	if (t59 != -2059) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = 474U;
	uint8_t x242 = 0U;
	int32_t x243 = -1;
	int16_t x244 = INT16_MAX;
	volatile int32_t t60 = 1;

	t60 = (((x241^x242)<x243)|x244);

	if (t60 != 32767) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	int32_t x246 = INT32_MIN;
	uint8_t x247 = 8U;
	int64_t x248 = INT64_MIN;
	int64_t t61 = INT64_MIN;

	t61 = (((x245^x246)<x247)|x248);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = 313623107LL;
	uint32_t x251 = 6496314U;
	uint32_t x252 = 6397U;
	volatile uint32_t t62 = 63014U;

	t62 = (((x249^x250)<x251)|x252);

	if (t62 != 6397U) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = -2545;
	int32_t x255 = INT32_MAX;
	volatile int32_t t63 = 33940256;

	t63 = (((x253^x254)<x255)|x256);

	if (t63 != 123) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 2171403U;
	int32_t x258 = INT32_MAX;
	static int16_t x259 = INT16_MIN;
	int64_t x260 = -7812969120135LL;

	t64 = (((x257^x258)<x259)|x260);

	if (t64 != -7812969120135LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MAX;
	static uint64_t x264 = UINT64_MAX;
	volatile uint64_t t65 = UINT64_MAX;

	t65 = (((x261^x262)<x263)|x264);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x265 = UINT8_MAX;
	int32_t x267 = INT32_MIN;
	int32_t x268 = INT32_MAX;

	t66 = (((x265^x266)<x267)|x268);

	if (t66 != INT32_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = UINT64_MAX;
	static volatile int8_t x270 = INT8_MIN;
	volatile int32_t x271 = -1;
	volatile int32_t t67 = -7418;

	t67 = (((x269^x270)<x271)|x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x273 = 103168LLU;
	uint16_t x274 = 5U;
	int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 8;

	t68 = (((x273^x274)<x275)|x276);

	if (t68 != -127) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int8_t x279 = INT8_MIN;
	int64_t x280 = INT64_MIN;

	t69 = (((x277^x278)<x279)|x280);

	if (t69 != INT64_MIN) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x282 = UINT16_MAX;
	uint64_t x283 = UINT64_MAX;
	int32_t t70 = -2;

	t70 = (((x281^x282)<x283)|x284);

	if (t70 != -32767) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x285 = -19;
	int32_t x286 = -1;
	int32_t x287 = INT32_MIN;
	int8_t x288 = 62;
	int32_t t71 = 0;

	t71 = (((x285^x286)<x287)|x288);

	if (t71 != 62) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint16_t x289 = UINT16_MAX;
	static int32_t x290 = INT32_MAX;
	uint32_t x291 = 74145U;
	uint16_t x292 = 1U;

	t72 = (((x289^x290)<x291)|x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x294 = 32757U;
	static volatile int32_t x296 = -84;
	volatile int32_t t73 = -60639666;

	t73 = (((x293^x294)<x295)|x296);

	if (t73 != -84) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = 160299590LLU;
	int16_t x298 = 4658;
	volatile int32_t x299 = 518433654;

	t74 = (((x297^x298)<x299)|x300);

	if (t74 != 969232687093LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = -1;
	uint32_t x302 = UINT32_MAX;
	int8_t x303 = INT8_MAX;
	int32_t t75 = 860642;

	t75 = (((x301^x302)<x303)|x304);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x306 = 1590826U;
	static int32_t x307 = INT32_MIN;
	volatile uint64_t x308 = UINT64_MAX;

	t76 = (((x305^x306)<x307)|x308);

	if (t76 != UINT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 32559224132LLU;
	int64_t x310 = INT64_MIN;
	static int32_t x311 = -47;
	int64_t x312 = INT64_MIN;
	int64_t t77 = 715008LL;

	t77 = (((x309^x310)<x311)|x312);

	if (t77 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	uint16_t x315 = UINT16_MAX;

	t78 = (((x313^x314)<x315)|x316);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x317 = INT32_MIN;
	uint16_t x318 = 1272U;
	uint64_t x319 = 1LLU;
	int64_t x320 = INT64_MAX;
	volatile int64_t t79 = INT64_MAX;

	t79 = (((x317^x318)<x319)|x320);

	if (t79 != INT64_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x321 = INT8_MIN;
	static uint16_t x322 = UINT16_MAX;
	volatile int16_t x323 = INT16_MIN;
	volatile int32_t t80 = -11541476;

	t80 = (((x321^x322)<x323)|x324);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = 3U;
	static int32_t x326 = 31567288;
	static volatile int64_t x327 = INT64_MIN;
	static volatile uint8_t x328 = UINT8_MAX;
	int32_t t81 = 210930;

	t81 = (((x325^x326)<x327)|x328);

	if (t81 != 255) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x330 = UINT16_MAX;
	int16_t x331 = -12431;
	volatile int32_t t82 = 306;

	t82 = (((x329^x330)<x331)|x332);

	if (t82 != 6313) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x333 = 14181842091336LLU;
	uint16_t x334 = UINT16_MAX;
	uint8_t x335 = UINT8_MAX;

	t83 = (((x333^x334)<x335)|x336);

	if (t83 != 41) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x337 = INT16_MAX;
	static uint16_t x339 = UINT16_MAX;
	static volatile int32_t t84 = 13721019;

	t84 = (((x337^x338)<x339)|x340);

	if (t84 != -501991) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x341 = 233;
	volatile int16_t x342 = INT16_MIN;
	int8_t x343 = INT8_MIN;
	int8_t x344 = 59;
	volatile int32_t t85 = -13855;

	t85 = (((x341^x342)<x343)|x344);

	if (t85 != 59) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = 628;
	int16_t x346 = INT16_MIN;
	volatile uint32_t x347 = 83332U;
	volatile int32_t t86 = 45835900;

	t86 = (((x345^x346)<x347)|x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x350 = 80;
	static uint64_t x351 = 436608014LLU;
	static uint8_t x352 = 0U;
	static volatile int32_t t87 = -1;

	t87 = (((x349^x350)<x351)|x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x353 = 119U;
	static uint32_t x355 = 513932U;
	int32_t t88 = 2;

	t88 = (((x353^x354)<x355)|x356);

	if (t88 != 31) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	int8_t x358 = INT8_MIN;
	uint16_t x360 = 58U;
	static volatile int32_t t89 = -281473457;

	t89 = (((x357^x358)<x359)|x360);

	if (t89 != 58) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	static uint16_t x362 = 3041U;
	int64_t x363 = INT64_MIN;
	int32_t x364 = 3135932;
	volatile int32_t t90 = 186777233;

	t90 = (((x361^x362)<x363)|x364);

	if (t90 != 3135932) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = UINT32_MAX;
	uint64_t x366 = 553244426655922LLU;
	static int64_t x367 = INT64_MIN;
	int64_t x368 = INT64_MAX;

	t91 = (((x365^x366)<x367)|x368);

	if (t91 != INT64_MAX) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MIN;
	int16_t x370 = 0;
	uint64_t x372 = 1LLU;
	volatile uint64_t t92 = 92100300LLU;

	t92 = (((x369^x370)<x371)|x372);

	if (t92 != 1LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x374 = 948547069;
	static int16_t x375 = 1433;
	int8_t x376 = INT8_MIN;
	volatile int32_t t93 = 42;

	t93 = (((x373^x374)<x375)|x376);

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x378 = 11U;
	int32_t x379 = INT32_MIN;
	uint64_t x380 = 13LLU;
	volatile uint64_t t94 = 1752250937568850LLU;

	t94 = (((x377^x378)<x379)|x380);

	if (t94 != 13LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	int32_t x384 = -7637;
	int32_t t95 = -8791;

	t95 = (((x381^x382)<x383)|x384);

	if (t95 != -7637) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = 105;
	int64_t x387 = -1LL;
	int64_t x388 = INT64_MIN;
	int64_t t96 = 29926029LL;

	t96 = (((x385^x386)<x387)|x388);

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x390 = 0;
	static uint16_t x391 = 3U;
	uint64_t t97 = UINT64_MAX;

	t97 = (((x389^x390)<x391)|x392);

	if (t97 != UINT64_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x394 = INT64_MAX;
	volatile int16_t x395 = -1;
	int8_t x396 = INT8_MAX;
	static int32_t t98 = 515652682;

	t98 = (((x393^x394)<x395)|x396);

	if (t98 != 127) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x398 = 1U;
	int32_t x399 = INT32_MIN;
	volatile int32_t t99 = -4774759;

	t99 = (((x397^x398)<x399)|x400);

	if (t99 != -1530) { NG(); } else { ; }
	
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

