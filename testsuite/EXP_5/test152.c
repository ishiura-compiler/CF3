#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x4 = UINT16_MAX;
volatile int64_t x22 = 751590872LL;
int32_t x23 = -31;
int8_t x24 = INT8_MIN;
volatile uint8_t x25 = UINT8_MAX;
int16_t x28 = INT16_MIN;
int16_t x32 = -1;
volatile int8_t x33 = INT8_MIN;
uint64_t x34 = UINT64_MAX;
volatile int32_t t8 = -262546;
int32_t t10 = 517;
int32_t t11 = -71314;
int16_t x49 = 0;
int64_t x51 = INT64_MIN;
int8_t x57 = 0;
uint8_t x59 = 1U;
uint16_t x62 = UINT16_MAX;
uint64_t x70 = UINT64_MAX;
int64_t x77 = -988285819LL;
uint8_t x82 = 4U;
volatile int32_t t20 = 91908;
int8_t x93 = 3;
volatile int8_t x101 = -1;
static volatile int8_t x121 = -1;
int16_t x138 = 116;
volatile uint16_t x141 = UINT16_MAX;
uint32_t x148 = 188470500U;
uint8_t x149 = 58U;
static uint16_t x156 = 104U;
int8_t x160 = -9;
static uint8_t x161 = 0U;
static uint16_t x164 = 3U;
volatile uint8_t x170 = 2U;
int32_t x175 = INT32_MIN;
int32_t x192 = INT32_MIN;
uint32_t x196 = 23621337U;
int8_t x197 = INT8_MIN;
int64_t x198 = -1LL;
int32_t x199 = -1;
volatile uint16_t x206 = 31939U;
int8_t x209 = INT8_MAX;
static uint32_t x216 = UINT32_MAX;
volatile int32_t t48 = 7432822;
int8_t x218 = INT8_MIN;
int16_t x219 = -1;
uint8_t x220 = 12U;
volatile int16_t x235 = -1;
volatile int8_t x246 = INT8_MIN;
int32_t t56 = -774416;
int8_t x251 = INT8_MIN;
static uint32_t x252 = UINT32_MAX;
uint8_t x257 = 48U;
int32_t x261 = INT32_MIN;
static int32_t x265 = -1;
int32_t t61 = -48845904;
int16_t x273 = -1;
static volatile int32_t t65 = -902055;
uint8_t x291 = UINT8_MAX;
int8_t x294 = INT8_MIN;
uint16_t x302 = 908U;
int64_t x304 = INT64_MAX;
int32_t t68 = -488383;
static int8_t x312 = INT8_MAX;
int16_t x318 = INT16_MIN;
uint64_t x319 = 540408552094LLU;
static int32_t t73 = 314108213;
int64_t x329 = 637LL;
int8_t x330 = 6;
uint32_t x332 = UINT32_MAX;
int32_t t74 = 1471425;
volatile int32_t x335 = 13360;
static int32_t t75 = -13829;
static int16_t x344 = INT16_MIN;
volatile int64_t x345 = -734086045951LL;
static int8_t x348 = 0;
int8_t x349 = -1;
int64_t x354 = -1LL;
volatile int32_t x355 = INT32_MIN;
int32_t t80 = -38062;
volatile uint32_t x358 = 10868023U;
static int8_t x364 = INT8_MAX;
int32_t t86 = -569;
volatile int16_t x390 = INT16_MAX;
static volatile int16_t x398 = INT16_MAX;
int32_t x435 = 73117301;
uint16_t x437 = UINT16_MAX;
int16_t x438 = 1;
uint64_t x439 = 1612218776214LLU;


void f0(void) {
	int8_t x1 = INT8_MIN;
	int16_t x2 = -1;
	int16_t x3 = -1347;
	volatile int32_t t0 = 36744683;

	t0 = (x1<((x2+x3)|x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = INT32_MAX;
	volatile int64_t x6 = INT64_MIN;
	int8_t x7 = 1;
	static int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = -519004127;

	t1 = (x5<((x6+x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int64_t x10 = INT64_MIN;
	static uint16_t x11 = 90U;
	uint32_t x12 = 1056U;
	volatile int32_t t2 = 26588279;

	t2 = (x9<((x10+x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	int8_t x14 = -1;
	int16_t x15 = -1;
	uint32_t x16 = UINT32_MAX;
	static int32_t t3 = -11777;

	t3 = (x13<((x14+x15)|x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int8_t x18 = INT8_MIN;
	int8_t x19 = INT8_MIN;
	uint64_t x20 = 72225013616LLU;
	volatile int32_t t4 = 1050898494;

	t4 = (x17<((x18+x19)|x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int32_t t5 = -21418;

	t5 = (x21<((x22+x23)|x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x26 = 909582U;
	volatile uint8_t x27 = UINT8_MAX;
	int32_t t6 = -3044778;

	t6 = (x25<((x26+x27)|x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int32_t x29 = -4;
	int64_t x30 = INT64_MAX;
	volatile uint64_t x31 = 7266LLU;
	int32_t t7 = 1014214080;

	t7 = (x29<((x30+x31)|x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x35 = INT32_MAX;
	int64_t x36 = -1LL;

	t8 = (x33<((x34+x35)|x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 20U;
	static int8_t x38 = INT8_MIN;
	int32_t x39 = -285461612;
	uint32_t x40 = 0U;
	volatile int32_t t9 = -2;

	t9 = (x37<((x38+x39)|x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint8_t x41 = UINT8_MAX;
	int32_t x42 = INT32_MIN;
	volatile uint32_t x43 = 1639U;
	int16_t x44 = 0;

	t10 = (x41<((x42+x43)|x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 47U;
	uint32_t x46 = 1629187685U;
	int16_t x47 = -1;
	uint64_t x48 = UINT64_MAX;

	t11 = (x45<((x46+x47)|x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x50 = 1;
	int16_t x52 = 0;
	int32_t t12 = -108154;

	t12 = (x49<((x50+x51)|x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = 0;
	volatile uint16_t x54 = 10021U;
	int32_t x55 = -379561;
	int8_t x56 = -1;
	int32_t t13 = -3;

	t13 = (x53<((x54+x55)|x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = INT32_MIN;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = 4163;

	t14 = (x57<((x58+x59)|x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int32_t x61 = -1;
	int64_t x63 = INT64_MIN;
	int64_t x64 = 204096928063634LL;
	volatile int32_t t15 = -391;

	t15 = (x61<((x62+x63)|x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint32_t x69 = 294912U;
	uint16_t x71 = 404U;
	int16_t x72 = 5;
	static volatile int32_t t16 = 1718717;

	t16 = (x69<((x70+x71)|x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x78 = 3309040LLU;
	int8_t x79 = 49;
	uint64_t x80 = UINT64_MAX;
	static int32_t t17 = -501169167;

	t17 = (x77<((x78+x79)|x80));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = INT32_MIN;
	int8_t x83 = INT8_MIN;
	int8_t x84 = 55;
	static int32_t t18 = 3;

	t18 = (x81<((x82+x83)|x84));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x85 = UINT64_MAX;
	int64_t x86 = -1LL;
	uint16_t x87 = 3764U;
	int8_t x88 = INT8_MIN;
	volatile int32_t t19 = 3112073;

	t19 = (x85<((x86+x87)|x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x89 = UINT32_MAX;
	int32_t x90 = -4459243;
	int32_t x91 = -1;
	uint32_t x92 = UINT32_MAX;

	t20 = (x89<((x90+x91)|x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x94 = 0;
	static volatile uint32_t x95 = 422028390U;
	int8_t x96 = INT8_MAX;
	static volatile int32_t t21 = -2;

	t21 = (x93<((x94+x95)|x96));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MAX;
	uint32_t x98 = 58U;
	uint16_t x99 = UINT16_MAX;
	uint16_t x100 = 1U;
	static int32_t t22 = 10355;

	t22 = (x97<((x98+x99)|x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x102 = UINT64_MAX;
	int32_t x103 = INT32_MAX;
	uint16_t x104 = 6412U;
	static int32_t t23 = -84382;

	t23 = (x101<((x102+x103)|x104));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 31487U;
	int64_t x106 = INT64_MIN;
	volatile uint8_t x107 = UINT8_MAX;
	uint16_t x108 = UINT16_MAX;
	static int32_t t24 = 181285924;

	t24 = (x105<((x106+x107)|x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x109 = INT64_MAX;
	volatile uint8_t x110 = 1U;
	uint16_t x111 = 359U;
	uint64_t x112 = UINT64_MAX;
	int32_t t25 = -1267;

	t25 = (x109<((x110+x111)|x112));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x113 = 614347600340232439LL;
	static int16_t x114 = INT16_MIN;
	volatile int16_t x115 = 1;
	volatile int32_t x116 = -262225681;
	int32_t t26 = -374;

	t26 = (x113<((x114+x115)|x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x117 = 58LLU;
	uint64_t x118 = UINT64_MAX;
	uint64_t x119 = UINT64_MAX;
	int64_t x120 = INT64_MIN;
	volatile int32_t t27 = -21998065;

	t27 = (x117<((x118+x119)|x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x122 = 55;
	static int32_t x123 = -1;
	static volatile int32_t x124 = INT32_MIN;
	volatile int32_t t28 = 180403494;

	t28 = (x121<((x122+x123)|x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = -1;
	volatile int64_t x126 = 459LL;
	int16_t x127 = -1;
	int8_t x128 = INT8_MAX;
	volatile int32_t t29 = 30854;

	t29 = (x125<((x126+x127)|x128));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x133 = INT32_MIN;
	static uint16_t x134 = 3U;
	volatile int16_t x135 = INT16_MIN;
	int8_t x136 = INT8_MIN;
	int32_t t30 = -247;

	t30 = (x133<((x134+x135)|x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x137 = INT8_MIN;
	volatile int64_t x139 = -3182550569052586LL;
	int16_t x140 = INT16_MAX;
	int32_t t31 = 52;

	t31 = (x137<((x138+x139)|x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x142 = INT8_MIN;
	uint8_t x143 = 57U;
	volatile int8_t x144 = INT8_MAX;
	volatile int32_t t32 = 1;

	t32 = (x141<((x142+x143)|x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x145 = -947023LL;
	static uint64_t x146 = UINT64_MAX;
	static int64_t x147 = -1LL;
	volatile int32_t t33 = 920189260;

	t33 = (x145<((x146+x147)|x148));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x150 = INT16_MIN;
	int16_t x151 = INT16_MIN;
	int64_t x152 = 7044LL;
	volatile int32_t t34 = -232;

	t34 = (x149<((x150+x151)|x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x153 = INT64_MIN;
	volatile uint32_t x154 = 2618U;
	static int16_t x155 = 966;
	volatile int32_t t35 = -7845665;

	t35 = (x153<((x154+x155)|x156));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint16_t x157 = 4U;
	int64_t x158 = 7797814874123521LL;
	uint8_t x159 = UINT8_MAX;
	int32_t t36 = 69289899;

	t36 = (x157<((x158+x159)|x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint32_t x162 = 1471451007U;
	static volatile int32_t x163 = INT32_MAX;
	volatile int32_t t37 = 1279010;

	t37 = (x161<((x162+x163)|x164));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x165 = -1837LL;
	int8_t x166 = INT8_MAX;
	int16_t x167 = INT16_MAX;
	int32_t x168 = 4;
	static volatile int32_t t38 = 430631;

	t38 = (x165<((x166+x167)|x168));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x169 = 24426U;
	volatile int8_t x171 = INT8_MIN;
	uint8_t x172 = 10U;
	volatile int32_t t39 = 2810;

	t39 = (x169<((x170+x171)|x172));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x173 = -1;
	uint16_t x174 = 977U;
	int8_t x176 = -1;
	int32_t t40 = -19;

	t40 = (x173<((x174+x175)|x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MAX;
	static int8_t x182 = INT8_MIN;
	static int8_t x183 = INT8_MIN;
	int64_t x184 = INT64_MAX;
	int32_t t41 = -1;

	t41 = (x181<((x182+x183)|x184));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = INT64_MIN;
	int8_t x186 = INT8_MIN;
	int16_t x187 = -104;
	volatile int16_t x188 = INT16_MIN;
	volatile int32_t t42 = -479942;

	t42 = (x185<((x186+x187)|x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -1;
	volatile int64_t x190 = 26195LL;
	uint16_t x191 = UINT16_MAX;
	static int32_t t43 = -474;

	t43 = (x189<((x190+x191)|x192));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x193 = 6;
	volatile int16_t x194 = INT16_MAX;
	static int32_t x195 = 880;
	int32_t t44 = -83;

	t44 = (x193<((x194+x195)|x196));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x200 = -77;
	int32_t t45 = 991755;

	t45 = (x197<((x198+x199)|x200));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MAX;
	static int32_t x207 = 92128;
	int16_t x208 = INT16_MAX;
	volatile int32_t t46 = -14877;

	t46 = (x205<((x206+x207)|x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x210 = 1;
	volatile int8_t x211 = -1;
	volatile uint64_t x212 = 58359532406617166LLU;
	static int32_t t47 = -480;

	t47 = (x209<((x210+x211)|x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x213 = 172422U;
	int8_t x214 = INT8_MAX;
	int16_t x215 = -1;

	t48 = (x213<((x214+x215)|x216));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x217 = INT8_MIN;
	static volatile int32_t t49 = -101;

	t49 = (x217<((x218+x219)|x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x221 = INT64_MAX;
	int32_t x222 = INT32_MAX;
	static int8_t x223 = INT8_MIN;
	int64_t x224 = 201732159LL;
	int32_t t50 = -65191857;

	t50 = (x221<((x222+x223)|x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x225 = INT32_MAX;
	uint8_t x226 = UINT8_MAX;
	uint32_t x227 = 1753082354U;
	static int8_t x228 = -1;
	volatile int32_t t51 = 0;

	t51 = (x225<((x226+x227)|x228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x229 = INT64_MAX;
	int16_t x230 = -90;
	int8_t x231 = -1;
	volatile uint64_t x232 = 127173215LLU;
	static volatile int32_t t52 = 6;

	t52 = (x229<((x230+x231)|x232));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x233 = UINT32_MAX;
	uint8_t x234 = UINT8_MAX;
	uint32_t x236 = 24420870U;
	int32_t t53 = -230;

	t53 = (x233<((x234+x235)|x236));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x237 = 59636U;
	volatile int16_t x238 = INT16_MIN;
	volatile uint32_t x239 = 1028180U;
	int64_t x240 = INT64_MAX;
	volatile int32_t t54 = 21;

	t54 = (x237<((x238+x239)|x240));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x241 = -29;
	uint64_t x242 = 2LLU;
	static volatile uint16_t x243 = 27U;
	uint32_t x244 = 1U;
	int32_t t55 = -93;

	t55 = (x241<((x242+x243)|x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x245 = 3U;
	uint8_t x247 = 1U;
	uint8_t x248 = UINT8_MAX;

	t56 = (x245<((x246+x247)|x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x249 = -1LL;
	static uint8_t x250 = 3U;
	int32_t t57 = 1203835;

	t57 = (x249<((x250+x251)|x252));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x253 = INT16_MIN;
	uint32_t x254 = UINT32_MAX;
	int32_t x255 = -1;
	int64_t x256 = -1LL;
	volatile int32_t t58 = 606;

	t58 = (x253<((x254+x255)|x256));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x258 = -1LL;
	int64_t x259 = -1LL;
	volatile int32_t x260 = -1;
	int32_t t59 = -52746889;

	t59 = (x257<((x258+x259)|x260));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x262 = -1;
	int8_t x263 = INT8_MIN;
	uint16_t x264 = 1U;
	volatile int32_t t60 = 74385;

	t60 = (x261<((x262+x263)|x264));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x266 = INT8_MIN;
	int64_t x267 = INT64_MAX;
	int64_t x268 = 34049101037428LL;

	t61 = (x265<((x266+x267)|x268));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x274 = 2981122U;
	uint32_t x275 = UINT32_MAX;
	int64_t x276 = INT64_MAX;
	int32_t t62 = 765086;

	t62 = (x273<((x274+x275)|x276));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x277 = INT32_MAX;
	uint32_t x278 = UINT32_MAX;
	volatile int16_t x279 = INT16_MAX;
	int8_t x280 = INT8_MIN;
	int32_t t63 = -16025;

	t63 = (x277<((x278+x279)|x280));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x281 = 14331U;
	volatile uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MAX;
	int32_t t64 = -289;

	t64 = (x281<((x282+x283)|x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x285 = 797117953835LLU;
	uint32_t x286 = 31076U;
	static volatile int16_t x287 = 32;
	uint8_t x288 = UINT8_MAX;

	t65 = (x285<((x286+x287)|x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x289 = INT8_MIN;
	int8_t x290 = -7;
	uint32_t x292 = 6U;
	volatile int32_t t66 = 819;

	t66 = (x289<((x290+x291)|x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x293 = 823U;
	int32_t x295 = INT32_MAX;
	int16_t x296 = -1;
	volatile int32_t t67 = 8056203;

	t67 = (x293<((x294+x295)|x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x301 = INT64_MIN;
	uint64_t x303 = 1589429LLU;

	t68 = (x301<((x302+x303)|x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x309 = -1;
	static uint64_t x310 = 92851499454463858LLU;
	static int8_t x311 = INT8_MIN;
	int32_t t69 = -27830;

	t69 = (x309<((x310+x311)|x312));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x313 = 0U;
	uint8_t x314 = 47U;
	static volatile uint8_t x315 = 1U;
	int16_t x316 = 2;
	int32_t t70 = 59763859;

	t70 = (x313<((x314+x315)|x316));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x317 = 14731619734138076LL;
	uint16_t x320 = 35U;
	volatile int32_t t71 = -514778;

	t71 = (x317<((x318+x319)|x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile int64_t x321 = 220441016LL;
	int16_t x322 = INT16_MAX;
	static int64_t x323 = 536124772LL;
	static int64_t x324 = -236443914593LL;
	volatile int32_t t72 = -442404;

	t72 = (x321<((x322+x323)|x324));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x325 = INT8_MAX;
	int8_t x326 = INT8_MAX;
	int16_t x327 = 1;
	uint32_t x328 = UINT32_MAX;

	t73 = (x325<((x326+x327)|x328));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x331 = INT64_MIN;

	t74 = (x329<((x330+x331)|x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x333 = 3U;
	uint8_t x334 = UINT8_MAX;
	int8_t x336 = INT8_MAX;

	t75 = (x333<((x334+x335)|x336));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = INT64_MIN;
	int64_t x338 = -4772331LL;
	int32_t x339 = -5;
	int8_t x340 = -7;
	volatile int32_t t76 = -98201992;

	t76 = (x337<((x338+x339)|x340));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = 874460800725LL;
	int16_t x342 = INT16_MIN;
	volatile uint16_t x343 = 8568U;
	int32_t t77 = 402909;

	t77 = (x341<((x342+x343)|x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x346 = 13;
	int64_t x347 = INT64_MIN;
	volatile int32_t t78 = -92508101;

	t78 = (x345<((x346+x347)|x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x350 = -1;
	int32_t x351 = INT32_MAX;
	int16_t x352 = INT16_MIN;
	volatile int32_t t79 = 6139541;

	t79 = (x349<((x350+x351)|x352));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x353 = INT64_MIN;
	uint8_t x356 = 0U;

	t80 = (x353<((x354+x355)|x356));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = 0;
	static uint8_t x359 = 11U;
	volatile int16_t x360 = -2;
	static int32_t t81 = -826;

	t81 = (x357<((x358+x359)|x360));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x361 = 1U;
	volatile int16_t x362 = INT16_MIN;
	uint8_t x363 = UINT8_MAX;
	volatile int32_t t82 = 15862;

	t82 = (x361<((x362+x363)|x364));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x369 = INT32_MIN;
	int16_t x370 = 1;
	int16_t x371 = INT16_MAX;
	volatile int8_t x372 = 12;
	volatile int32_t t83 = 12;

	t83 = (x369<((x370+x371)|x372));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x373 = -1;
	uint64_t x374 = 2711LLU;
	uint16_t x375 = UINT16_MAX;
	volatile uint8_t x376 = UINT8_MAX;
	int32_t t84 = -1815240;

	t84 = (x373<((x374+x375)|x376));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x381 = 2U;
	int32_t x382 = 127833021;
	volatile uint64_t x383 = UINT64_MAX;
	int32_t x384 = INT32_MIN;
	int32_t t85 = -67506;

	t85 = (x381<((x382+x383)|x384));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x385 = INT64_MIN;
	int16_t x386 = INT16_MAX;
	static int8_t x387 = INT8_MIN;
	int32_t x388 = INT32_MIN;

	t86 = (x385<((x386+x387)|x388));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x389 = 984974355;
	static volatile int64_t x391 = 0LL;
	int16_t x392 = 129;
	static int32_t t87 = 67973;

	t87 = (x389<((x390+x391)|x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x393 = INT64_MIN;
	int16_t x394 = INT16_MIN;
	int8_t x395 = 10;
	int8_t x396 = -1;
	static int32_t t88 = -35575;

	t88 = (x393<((x394+x395)|x396));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x397 = INT16_MIN;
	uint8_t x399 = 13U;
	int8_t x400 = -3;
	volatile int32_t t89 = 1854;

	t89 = (x397<((x398+x399)|x400));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = 4;
	static int64_t x402 = INT64_MIN;
	uint16_t x403 = 1U;
	volatile int32_t x404 = -1;
	volatile int32_t t90 = 6;

	t90 = (x401<((x402+x403)|x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x405 = 56U;
	int32_t x406 = INT32_MAX;
	uint64_t x407 = UINT64_MAX;
	static int16_t x408 = INT16_MIN;
	volatile int32_t t91 = -111008;

	t91 = (x405<((x406+x407)|x408));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x409 = -1;
	int32_t x410 = INT32_MIN;
	int64_t x411 = 735389112750LL;
	uint64_t x412 = 8098075357022294LLU;
	int32_t t92 = 3282427;

	t92 = (x409<((x410+x411)|x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x417 = -1LL;
	uint16_t x418 = UINT16_MAX;
	volatile int8_t x419 = -3;
	int64_t x420 = INT64_MIN;
	int32_t t93 = -129542;

	t93 = (x417<((x418+x419)|x420));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x421 = INT8_MIN;
	int64_t x422 = -4391591959911LL;
	static int8_t x423 = INT8_MIN;
	uint64_t x424 = UINT64_MAX;
	volatile int32_t t94 = 98864613;

	t94 = (x421<((x422+x423)|x424));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x425 = 16U;
	int8_t x426 = INT8_MIN;
	int16_t x427 = -1;
	int16_t x428 = INT16_MAX;
	volatile int32_t t95 = -1296379;

	t95 = (x425<((x426+x427)|x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x429 = -1;
	static int32_t x430 = -1;
	int32_t x431 = INT32_MAX;
	int64_t x432 = -9439163LL;
	int32_t t96 = 2;

	t96 = (x429<((x430+x431)|x432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x433 = INT16_MIN;
	int16_t x434 = -1;
	static volatile int8_t x436 = -1;
	volatile int32_t t97 = -23707;

	t97 = (x433<((x434+x435)|x436));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x440 = 0U;
	int32_t t98 = 33998;

	t98 = (x437<((x438+x439)|x440));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x441 = UINT8_MAX;
	volatile int16_t x442 = 14380;
	int64_t x443 = INT64_MIN;
	uint32_t x444 = 9563685U;
	volatile int32_t t99 = 14788167;

	t99 = (x441<((x442+x443)|x444));

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

