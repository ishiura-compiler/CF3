#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x9 = 1U;
int64_t x12 = INT64_MAX;
int32_t x22 = -1;
int32_t x28 = INT32_MAX;
int16_t x34 = 125;
static int16_t x37 = INT16_MIN;
volatile int64_t x39 = INT64_MIN;
int32_t t6 = -7;
static uint64_t x43 = 13407712LLU;
int64_t x44 = INT64_MAX;
int32_t x48 = -332692;
static int64_t x51 = INT64_MAX;
int32_t t13 = 6;
volatile int32_t t14 = 221743;
int32_t x84 = 1019;
uint32_t x86 = UINT32_MAX;
int16_t x97 = -2;
int16_t x104 = 1888;
int32_t t18 = -802768;
int8_t x107 = -10;
int32_t x119 = 573077;
int16_t x121 = -17;
volatile int32_t x131 = -1;
uint16_t x134 = 758U;
int16_t x136 = 152;
static int8_t x143 = 1;
int32_t x156 = INT32_MIN;
int32_t x159 = INT32_MIN;
static int32_t x173 = INT32_MAX;
int64_t x174 = -1LL;
int64_t x178 = -10LL;
int16_t x185 = -1;
volatile int16_t x189 = -15767;
uint16_t x194 = 27898U;
static int32_t x200 = INT32_MIN;
volatile int8_t x235 = INT8_MIN;
int32_t t46 = -2133162;
static int16_t x246 = -1;
int32_t x250 = 1460;
int32_t x254 = -1065967554;
volatile int8_t x255 = -1;
int32_t x256 = INT32_MIN;
int32_t t49 = 58834;
static uint8_t x262 = 1U;
volatile int8_t x263 = INT8_MAX;
uint32_t x264 = UINT32_MAX;
int32_t t51 = -11316020;
int32_t x267 = INT32_MAX;
int64_t x275 = INT64_MIN;
int64_t x280 = -1LL;
int32_t t54 = -1041978680;
uint8_t x283 = 4U;
volatile int32_t t56 = -183659583;
int64_t x290 = -1LL;
uint32_t x291 = UINT32_MAX;
static int16_t x305 = INT16_MIN;
int8_t x307 = INT8_MAX;
int32_t x319 = -1768878;
volatile int32_t t64 = 32121145;
uint32_t x322 = UINT32_MAX;
int32_t t66 = 7;
static int32_t x342 = INT32_MAX;
int64_t x348 = -3334554871401238LL;
volatile int32_t x353 = INT32_MIN;
int32_t t70 = -6006227;
int16_t x358 = 1;
int64_t x359 = 982056470899880043LL;
uint8_t x364 = UINT8_MAX;
uint16_t x367 = 100U;
int32_t x374 = -1;
uint16_t x384 = 69U;
int8_t x386 = INT8_MIN;
static volatile int8_t x387 = INT8_MIN;
static volatile int16_t x388 = 2555;
int32_t t78 = -11332;
volatile uint32_t x413 = 156U;
int64_t x415 = -1LL;
int64_t x418 = 264908962894LL;
int8_t x426 = -27;
static volatile int8_t x429 = INT8_MIN;
static int32_t x431 = 1;
int8_t x437 = INT8_MAX;
volatile uint16_t x445 = 2557U;
int32_t x448 = INT32_MIN;
int32_t x470 = 871594082;
volatile int64_t x474 = -1LL;
int32_t x475 = INT32_MIN;
volatile uint64_t x478 = UINT64_MAX;
volatile int32_t x480 = 59;
static uint64_t x484 = 1024733934982LLU;
volatile int32_t t93 = -6345;
uint8_t x488 = UINT8_MAX;
uint16_t x489 = 111U;
volatile int32_t x501 = 3310;
volatile int8_t x507 = INT8_MIN;
volatile uint32_t x508 = 56531877U;
int32_t t98 = 3211;


void f0(void) {
	int64_t x5 = -425056804485LL;
	volatile int32_t x6 = 1653017;
	int16_t x7 = INT16_MIN;
	uint32_t x8 = 494784628U;
	int32_t t0 = -23;

	t0 = ((x5/(x6&x7))<x8);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x10 = INT64_MIN;
	volatile int64_t x11 = -1LL;
	volatile int32_t t1 = -161425;

	t1 = ((x9/(x10&x11))<x12);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x13 = 3576028LL;
	volatile uint32_t x14 = UINT32_MAX;
	static uint8_t x15 = 1U;
	uint32_t x16 = UINT32_MAX;
	int32_t t2 = 649;

	t2 = ((x13/(x14&x15))<x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x21 = INT16_MIN;
	int32_t x23 = 300450;
	uint32_t x24 = 348861U;
	static int32_t t3 = -349780234;

	t3 = ((x21/(x22&x23))<x24);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x25 = INT64_MAX;
	static volatile int64_t x26 = 1714LL;
	int16_t x27 = -1;
	int32_t t4 = -148918;

	t4 = ((x25/(x26&x27))<x28);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x33 = 90497U;
	int16_t x35 = -239;
	int16_t x36 = 15607;
	static volatile int32_t t5 = 44;

	t5 = ((x33/(x34&x35))<x36);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x38 = -365521856;
	static int32_t x40 = -21;

	t6 = ((x37/(x38&x39))<x40);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x41 = INT8_MIN;
	int8_t x42 = -1;
	volatile int32_t t7 = -10942685;

	t7 = ((x41/(x42&x43))<x44);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x45 = -3;
	int8_t x46 = INT8_MIN;
	volatile uint16_t x47 = 4396U;
	static volatile int32_t t8 = 13715;

	t8 = ((x45/(x46&x47))<x48);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = UINT16_MAX;
	int16_t x50 = -1;
	uint16_t x52 = 0U;
	volatile int32_t t9 = 32855281;

	t9 = ((x49/(x50&x51))<x52);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x57 = 531;
	static uint8_t x58 = UINT8_MAX;
	uint64_t x59 = 44917LLU;
	int16_t x60 = -270;
	volatile int32_t t10 = 953721;

	t10 = ((x57/(x58&x59))<x60);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint8_t x61 = 10U;
	int16_t x62 = 77;
	int16_t x63 = INT16_MAX;
	int64_t x64 = -1037LL;
	volatile int32_t t11 = -4150;

	t11 = ((x61/(x62&x63))<x64);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = 528398LL;
	int8_t x66 = -1;
	volatile int16_t x67 = INT16_MIN;
	int8_t x68 = -1;
	volatile int32_t t12 = 166;

	t12 = ((x65/(x66&x67))<x68);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint64_t x73 = UINT64_MAX;
	static int32_t x74 = INT32_MIN;
	int64_t x75 = INT64_MIN;
	static volatile int16_t x76 = -1;

	t13 = ((x73/(x74&x75))<x76);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x77 = INT8_MIN;
	int16_t x78 = 472;
	int8_t x79 = INT8_MIN;
	uint8_t x80 = 49U;

	t14 = ((x77/(x78&x79))<x80);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint64_t x81 = 266779542LLU;
	static volatile int8_t x82 = INT8_MIN;
	int16_t x83 = INT16_MIN;
	static volatile int32_t t15 = 232021503;

	t15 = ((x81/(x82&x83))<x84);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x85 = 6692668;
	static int32_t x87 = 213;
	static int16_t x88 = INT16_MAX;
	volatile int32_t t16 = 9;

	t16 = ((x85/(x86&x87))<x88);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MIN;
	static uint8_t x100 = UINT8_MAX;
	volatile int32_t t17 = 380;

	t17 = ((x97/(x98&x99))<x100);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x101 = INT8_MIN;
	uint32_t x102 = 10842259U;
	int8_t x103 = INT8_MIN;

	t18 = ((x101/(x102&x103))<x104);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x105 = UINT64_MAX;
	static int32_t x106 = INT32_MIN;
	int8_t x108 = 1;
	static int32_t t19 = 2561426;

	t19 = ((x105/(x106&x107))<x108);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x109 = 191U;
	volatile int8_t x110 = 21;
	int64_t x111 = 623465897301LL;
	int64_t x112 = INT64_MIN;
	int32_t t20 = 256298;

	t20 = ((x109/(x110&x111))<x112);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x113 = -1;
	static int8_t x114 = INT8_MIN;
	static int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MAX;
	int32_t t21 = 152065;

	t21 = ((x113/(x114&x115))<x116);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x117 = INT32_MIN;
	static volatile uint64_t x118 = 273474515LLU;
	int32_t x120 = 51;
	volatile int32_t t22 = 1;

	t22 = ((x117/(x118&x119))<x120);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x122 = INT8_MIN;
	static int32_t x123 = -7581414;
	static uint32_t x124 = 9U;
	volatile int32_t t23 = -611372;

	t23 = ((x121/(x122&x123))<x124);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static uint64_t x125 = 16LLU;
	uint32_t x126 = 7207U;
	static int16_t x127 = -2;
	uint8_t x128 = 20U;
	int32_t t24 = 220;

	t24 = ((x125/(x126&x127))<x128);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x129 = -249967089LL;
	int64_t x130 = -22448089LL;
	volatile int8_t x132 = 4;
	volatile int32_t t25 = -85359692;

	t25 = ((x129/(x130&x131))<x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x133 = INT64_MIN;
	int16_t x135 = -1;
	volatile int32_t t26 = -58936468;

	t26 = ((x133/(x134&x135))<x136);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x137 = UINT64_MAX;
	static int64_t x138 = -1LL;
	int32_t x139 = INT32_MAX;
	int16_t x140 = 2;
	volatile int32_t t27 = 0;

	t27 = ((x137/(x138&x139))<x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x141 = INT16_MAX;
	uint32_t x142 = UINT32_MAX;
	int8_t x144 = INT8_MAX;
	int32_t t28 = 112991;

	t28 = ((x141/(x142&x143))<x144);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x145 = -1LL;
	uint16_t x146 = 12U;
	volatile uint16_t x147 = 56U;
	int64_t x148 = -30715LL;
	static volatile int32_t t29 = 1572526;

	t29 = ((x145/(x146&x147))<x148);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x153 = INT32_MIN;
	static int8_t x154 = 5;
	uint16_t x155 = 5U;
	volatile int32_t t30 = -37229843;

	t30 = ((x153/(x154&x155))<x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x157 = -115;
	int64_t x158 = INT64_MIN;
	static int32_t x160 = INT32_MIN;
	int32_t t31 = -121;

	t31 = ((x157/(x158&x159))<x160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x169 = 132299633U;
	static int16_t x170 = -1;
	int16_t x171 = INT16_MIN;
	static uint16_t x172 = 128U;
	int32_t t32 = 659;

	t32 = ((x169/(x170&x171))<x172);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x175 = UINT64_MAX;
	uint8_t x176 = 5U;
	static volatile int32_t t33 = 644;

	t33 = ((x173/(x174&x175))<x176);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x177 = 35806472642718410LLU;
	static volatile uint16_t x179 = 2U;
	int32_t x180 = -1;
	static volatile int32_t t34 = -188;

	t34 = ((x177/(x178&x179))<x180);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x181 = -1;
	static int16_t x182 = -10516;
	volatile int8_t x183 = -1;
	int32_t x184 = -1;
	static int32_t t35 = 8;

	t35 = ((x181/(x182&x183))<x184);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x186 = 14U;
	uint16_t x187 = 71U;
	static int64_t x188 = INT64_MIN;
	static int32_t t36 = -716;

	t36 = ((x185/(x186&x187))<x188);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x190 = -1LL;
	volatile int16_t x191 = -1;
	int8_t x192 = INT8_MIN;
	int32_t t37 = 133185093;

	t37 = ((x189/(x190&x191))<x192);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x193 = 5285403LL;
	volatile uint64_t x195 = 9882036199191896LLU;
	int16_t x196 = INT16_MAX;
	volatile int32_t t38 = 2412705;

	t38 = ((x193/(x194&x195))<x196);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x197 = -1;
	int64_t x198 = INT64_MAX;
	int8_t x199 = -1;
	static volatile int32_t t39 = 92291;

	t39 = ((x197/(x198&x199))<x200);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x209 = -1;
	static int8_t x210 = -1;
	int32_t x211 = -1;
	uint32_t x212 = 1U;
	volatile int32_t t40 = -33949;

	t40 = ((x209/(x210&x211))<x212);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x213 = UINT32_MAX;
	uint16_t x214 = 3755U;
	uint64_t x215 = UINT64_MAX;
	volatile int64_t x216 = INT64_MAX;
	static volatile int32_t t41 = 16242;

	t41 = ((x213/(x214&x215))<x216);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint64_t x221 = 6267869529LLU;
	uint64_t x222 = 2130539127LLU;
	int16_t x223 = -54;
	int32_t x224 = INT32_MAX;
	volatile int32_t t42 = 56;

	t42 = ((x221/(x222&x223))<x224);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint8_t x225 = 58U;
	int16_t x226 = INT16_MIN;
	static volatile int64_t x227 = -1LL;
	uint32_t x228 = 858857524U;
	volatile int32_t t43 = -484229;

	t43 = ((x225/(x226&x227))<x228);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x229 = -1;
	int32_t x230 = -1;
	volatile int16_t x231 = -1515;
	volatile int64_t x232 = INT64_MAX;
	int32_t t44 = 3345;

	t44 = ((x229/(x230&x231))<x232);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x233 = INT16_MIN;
	static int16_t x234 = INT16_MIN;
	int16_t x236 = 0;
	int32_t t45 = -209155400;

	t45 = ((x233/(x234&x235))<x236);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x237 = -1LL;
	volatile int16_t x238 = -7083;
	static int8_t x239 = 1;
	int16_t x240 = -58;

	t46 = ((x237/(x238&x239))<x240);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x245 = UINT64_MAX;
	uint16_t x247 = UINT16_MAX;
	volatile int16_t x248 = 1;
	int32_t t47 = -12;

	t47 = ((x245/(x246&x247))<x248);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint16_t x249 = UINT16_MAX;
	uint32_t x251 = UINT32_MAX;
	volatile int32_t x252 = INT32_MAX;
	int32_t t48 = -2567;

	t48 = ((x249/(x250&x251))<x252);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x253 = 727LL;

	t49 = ((x253/(x254&x255))<x256);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x257 = INT32_MIN;
	static int32_t x258 = INT32_MIN;
	int8_t x259 = -1;
	int8_t x260 = 1;
	volatile int32_t t50 = 205690;

	t50 = ((x257/(x258&x259))<x260);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x261 = 66U;

	t51 = ((x261/(x262&x263))<x264);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x265 = INT16_MIN;
	volatile uint32_t x266 = 13692U;
	static int64_t x268 = INT64_MIN;
	int32_t t52 = -170;

	t52 = ((x265/(x266&x267))<x268);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x273 = 63736LL;
	int16_t x274 = -1;
	static int8_t x276 = -30;
	volatile int32_t t53 = 539738208;

	t53 = ((x273/(x274&x275))<x276);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x277 = 0U;
	int64_t x278 = -209911651LL;
	uint32_t x279 = UINT32_MAX;

	t54 = ((x277/(x278&x279))<x280);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x281 = 0;
	uint16_t x282 = 677U;
	int64_t x284 = INT64_MIN;
	volatile int32_t t55 = -4058;

	t55 = ((x281/(x282&x283))<x284);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x285 = INT32_MAX;
	int8_t x286 = 21;
	static uint32_t x287 = 14U;
	static uint64_t x288 = 797272315745686LLU;

	t56 = ((x285/(x286&x287))<x288);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x289 = -1;
	static int16_t x292 = INT16_MIN;
	static volatile int32_t t57 = -459;

	t57 = ((x289/(x290&x291))<x292);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x293 = 41U;
	uint8_t x294 = UINT8_MAX;
	volatile uint16_t x295 = 7156U;
	static uint64_t x296 = 21LLU;
	volatile int32_t t58 = 3797668;

	t58 = ((x293/(x294&x295))<x296);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x297 = INT64_MIN;
	int8_t x298 = 6;
	volatile int16_t x299 = -2654;
	int8_t x300 = INT8_MIN;
	int32_t t59 = -458874;

	t59 = ((x297/(x298&x299))<x300);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x301 = 1;
	int32_t x302 = -1;
	int16_t x303 = INT16_MIN;
	int16_t x304 = 0;
	int32_t t60 = -256295;

	t60 = ((x301/(x302&x303))<x304);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int8_t x306 = -1;
	volatile int32_t x308 = INT32_MIN;
	int32_t t61 = 12090911;

	t61 = ((x305/(x306&x307))<x308);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x309 = 235;
	static int16_t x310 = -9;
	int8_t x311 = INT8_MIN;
	int64_t x312 = INT64_MIN;
	static int32_t t62 = -5822611;

	t62 = ((x309/(x310&x311))<x312);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x313 = 48416LLU;
	uint16_t x314 = 25171U;
	int64_t x315 = -1LL;
	uint16_t x316 = 2U;
	volatile int32_t t63 = -4913;

	t63 = ((x313/(x314&x315))<x316);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x317 = INT16_MAX;
	int16_t x318 = INT16_MIN;
	int16_t x320 = INT16_MIN;

	t64 = ((x317/(x318&x319))<x320);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x321 = INT64_MIN;
	uint64_t x323 = 2194789314345009239LLU;
	static int16_t x324 = 228;
	int32_t t65 = 35922807;

	t65 = ((x321/(x322&x323))<x324);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x325 = -1;
	int8_t x326 = -1;
	int8_t x327 = INT8_MAX;
	int8_t x328 = INT8_MAX;

	t66 = ((x325/(x326&x327))<x328);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x341 = INT16_MIN;
	int64_t x343 = -12452LL;
	int64_t x344 = -1LL;
	int32_t t67 = -1058984337;

	t67 = ((x341/(x342&x343))<x344);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x345 = UINT16_MAX;
	volatile int64_t x346 = 60128535507478LL;
	static int64_t x347 = -48723907586091LL;
	int32_t t68 = 56889;

	t68 = ((x345/(x346&x347))<x348);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x349 = INT16_MIN;
	int64_t x350 = 154818626984LL;
	volatile int16_t x351 = -1;
	static int16_t x352 = INT16_MAX;
	volatile int32_t t69 = 580543289;

	t69 = ((x349/(x350&x351))<x352);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x354 = UINT32_MAX;
	static uint32_t x355 = 164U;
	static int16_t x356 = -1;

	t70 = ((x353/(x354&x355))<x356);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x357 = 3868;
	int32_t x360 = INT32_MIN;
	int32_t t71 = -1029566257;

	t71 = ((x357/(x358&x359))<x360);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x361 = INT64_MIN;
	static int16_t x362 = -1;
	int32_t x363 = 12;
	volatile int32_t t72 = 136128399;

	t72 = ((x361/(x362&x363))<x364);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x365 = -1LL;
	volatile int8_t x366 = 14;
	uint16_t x368 = UINT16_MAX;
	int32_t t73 = 33115969;

	t73 = ((x365/(x366&x367))<x368);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x373 = 0;
	uint32_t x375 = UINT32_MAX;
	volatile int8_t x376 = 35;
	int32_t t74 = 20501499;

	t74 = ((x373/(x374&x375))<x376);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x377 = 0;
	int64_t x378 = INT64_MIN;
	int32_t x379 = -1674049;
	int8_t x380 = -1;
	int32_t t75 = -1;

	t75 = ((x377/(x378&x379))<x380);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x381 = INT16_MIN;
	int8_t x382 = 51;
	uint8_t x383 = 112U;
	int32_t t76 = -41067;

	t76 = ((x381/(x382&x383))<x384);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x385 = UINT32_MAX;
	static int32_t t77 = 6532042;

	t77 = ((x385/(x386&x387))<x388);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x389 = 1U;
	int8_t x390 = 1;
	uint64_t x391 = UINT64_MAX;
	volatile uint8_t x392 = UINT8_MAX;

	t78 = ((x389/(x390&x391))<x392);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x397 = INT64_MIN;
	int16_t x398 = -49;
	static int64_t x399 = INT64_MIN;
	uint16_t x400 = 17U;
	volatile int32_t t79 = 1;

	t79 = ((x397/(x398&x399))<x400);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint64_t x401 = 9297741LLU;
	static int16_t x402 = -48;
	int8_t x403 = INT8_MAX;
	static int32_t x404 = 468527;
	int32_t t80 = -5074995;

	t80 = ((x401/(x402&x403))<x404);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x409 = INT32_MIN;
	static int32_t x410 = -18619116;
	int64_t x411 = 15990LL;
	int64_t x412 = -16903812187LL;
	int32_t t81 = 1;

	t81 = ((x409/(x410&x411))<x412);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x414 = INT8_MIN;
	volatile int16_t x416 = INT16_MIN;
	volatile int32_t t82 = 787547933;

	t82 = ((x413/(x414&x415))<x416);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x417 = INT64_MIN;
	static uint8_t x419 = 5U;
	static int16_t x420 = -1;
	int32_t t83 = 18;

	t83 = ((x417/(x418&x419))<x420);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x425 = 2LL;
	static volatile int16_t x427 = INT16_MAX;
	int64_t x428 = INT64_MIN;
	volatile int32_t t84 = -123647;

	t84 = ((x425/(x426&x427))<x428);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x430 = INT8_MAX;
	volatile int16_t x432 = -138;
	int32_t t85 = 170941;

	t85 = ((x429/(x430&x431))<x432);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x438 = -1;
	static uint32_t x439 = 3273U;
	uint16_t x440 = UINT16_MAX;
	int32_t t86 = 7867;

	t86 = ((x437/(x438&x439))<x440);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x446 = -584203;
	int16_t x447 = INT16_MAX;
	volatile int32_t t87 = 2;

	t87 = ((x445/(x446&x447))<x448);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x449 = INT16_MAX;
	int64_t x450 = INT64_MIN;
	int32_t x451 = -1;
	uint16_t x452 = 194U;
	static volatile int32_t t88 = 3777;

	t88 = ((x449/(x450&x451))<x452);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x465 = -16;
	int16_t x466 = INT16_MAX;
	uint64_t x467 = 129153657918311LLU;
	uint8_t x468 = 12U;
	volatile int32_t t89 = 53494521;

	t89 = ((x465/(x466&x467))<x468);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x469 = -7;
	int8_t x471 = INT8_MIN;
	int16_t x472 = 30;
	int32_t t90 = 4;

	t90 = ((x469/(x470&x471))<x472);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x473 = INT32_MIN;
	int64_t x476 = -16506599331415LL;
	volatile int32_t t91 = -13143;

	t91 = ((x473/(x474&x475))<x476);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x477 = -249760088LL;
	uint32_t x479 = 38718821U;
	volatile int32_t t92 = -6540;

	t92 = ((x477/(x478&x479))<x480);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x481 = 0;
	uint32_t x482 = 585187U;
	static volatile int64_t x483 = -3LL;

	t93 = ((x481/(x482&x483))<x484);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x485 = UINT16_MAX;
	int16_t x486 = 5;
	volatile uint32_t x487 = UINT32_MAX;
	volatile int32_t t94 = -124669;

	t94 = ((x485/(x486&x487))<x488);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x490 = UINT8_MAX;
	int64_t x491 = -1LL;
	int32_t x492 = INT32_MIN;
	volatile int32_t t95 = 153100748;

	t95 = ((x489/(x490&x491))<x492);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x493 = -966;
	static volatile int32_t x494 = INT32_MIN;
	uint64_t x495 = UINT64_MAX;
	int16_t x496 = INT16_MIN;
	volatile int32_t t96 = -35;

	t96 = ((x493/(x494&x495))<x496);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x502 = INT8_MIN;
	volatile int64_t x503 = 281LL;
	int8_t x504 = -1;
	int32_t t97 = 798;

	t97 = ((x501/(x502&x503))<x504);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x505 = UINT32_MAX;
	int8_t x506 = -6;

	t98 = ((x505/(x506&x507))<x508);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x509 = 191;
	static volatile int64_t x510 = INT64_MAX;
	static int16_t x511 = -1;
	volatile int64_t x512 = INT64_MIN;
	static volatile int32_t t99 = 1426685;

	t99 = ((x509/(x510&x511))<x512);

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

