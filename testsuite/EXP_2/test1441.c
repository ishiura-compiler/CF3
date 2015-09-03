#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = 83;
int8_t x10 = INT8_MAX;
static int16_t x15 = INT16_MIN;
int32_t t2 = -17695262;
volatile int32_t t3 = -200533;
static int8_t x29 = 1;
static uint8_t x47 = 13U;
volatile uint32_t x65 = UINT32_MAX;
int8_t x66 = INT8_MIN;
volatile int32_t x67 = INT32_MIN;
int64_t x75 = INT64_MIN;
int8_t x99 = -1;
static volatile int64_t t14 = -4129777209LL;
uint16_t x104 = 6U;
uint32_t t15 = 52289U;
static int32_t x108 = -488808197;
static int8_t x110 = -44;
int64_t x125 = INT64_MAX;
volatile int64_t t20 = 425245548876LL;
uint64_t t21 = 127204850999817887LLU;
static uint64_t x142 = UINT64_MAX;
volatile int16_t x144 = -1;
static uint64_t t25 = 204711595967810LLU;
int8_t x168 = 1;
int16_t x170 = 1900;
volatile int32_t t28 = 4591348;
uint16_t x173 = 3U;
static int16_t x176 = INT16_MIN;
volatile int32_t t29 = 243294869;
volatile int32_t x179 = INT32_MAX;
static volatile uint64_t x182 = 10028025808LLU;
uint32_t x193 = 2336U;
int64_t x198 = INT64_MAX;
uint32_t x233 = UINT32_MAX;
uint16_t x234 = 392U;
uint32_t t37 = 62777846U;
int32_t x247 = INT32_MIN;
volatile int32_t t38 = 13;
uint8_t x249 = UINT8_MAX;
volatile uint32_t t41 = 2337347U;
int32_t x263 = 657286;
static int32_t x274 = INT32_MIN;
volatile int16_t x275 = INT16_MIN;
volatile int8_t x276 = -1;
uint8_t x277 = 0U;
uint8_t x278 = 5U;
static uint32_t t45 = 82208U;
volatile uint16_t x282 = 233U;
int32_t x290 = INT32_MIN;
uint64_t x291 = UINT64_MAX;
int8_t x292 = INT8_MAX;
int8_t x310 = INT8_MIN;
uint16_t x317 = UINT16_MAX;
static uint8_t x319 = 6U;
static int32_t x322 = INT32_MAX;
uint16_t x326 = UINT16_MAX;
int32_t t52 = -111065;
static uint8_t x333 = 1U;
volatile int64_t x344 = INT64_MAX;
int32_t x364 = INT32_MAX;
int8_t x372 = -1;
static int32_t x380 = 4;
int16_t x394 = INT16_MIN;
uint8_t x396 = 0U;
int64_t x411 = INT64_MIN;
int32_t t64 = -69;
volatile uint32_t x415 = UINT32_MAX;
int64_t x419 = 7879LL;
volatile uint64_t t66 = 1379049978502LLU;
volatile uint64_t x442 = 84761164904085080LLU;
int32_t x443 = INT32_MIN;
uint64_t x447 = UINT64_MAX;
static int64_t x448 = 22858965271460LL;
int64_t x450 = -923229336459LL;
volatile int64_t t71 = -26LL;
uint16_t x455 = 534U;
int64_t x464 = INT64_MIN;
uint64_t x465 = UINT64_MAX;
int8_t x466 = 61;
int32_t x476 = INT32_MAX;
volatile uint64_t t75 = 45904856431493968LLU;
uint16_t x477 = 233U;
int16_t x481 = 112;
volatile int16_t x482 = INT16_MIN;
int64_t x484 = -48LL;
int32_t x495 = INT32_MIN;
uint64_t t81 = 185633153214LLU;
int32_t x528 = INT32_MIN;
uint16_t x529 = 37U;
int16_t x536 = 9;
int32_t x538 = -1;
uint64_t x541 = UINT64_MAX;
int64_t x542 = -1LL;
uint32_t x545 = 26U;
int32_t x547 = 597286;
int32_t x560 = -39;
int16_t x566 = INT16_MIN;
uint64_t t90 = 2148345105548LLU;
volatile uint16_t x577 = UINT16_MAX;
static int16_t x580 = -1;
volatile int32_t t91 = -299701;
int8_t x590 = INT8_MIN;
int32_t t92 = -837;
int32_t x594 = -1;
int32_t t93 = -297;
uint32_t x610 = UINT32_MAX;
int32_t x612 = -49;
int64_t x625 = 880661887454776LL;


void f0(void) {
	int32_t x5 = INT32_MAX;
	int16_t x6 = 5351;
	static int8_t x7 = INT8_MIN;
	uint16_t x8 = UINT16_MAX;

	t0 = ((x5>>(x6<x7))&x8);

	if (t0 != 65535) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x9 = 11;
	static volatile int64_t x11 = INT64_MAX;
	uint64_t x12 = UINT64_MAX;
	uint64_t t1 = 30388576422797LLU;

	t1 = ((x9>>(x10<x11))&x12);

	if (t1 != 5LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = 5;
	int64_t x14 = 348427825LL;
	uint16_t x16 = 173U;

	t2 = ((x13>>(x14<x15))&x16);

	if (t2 != 5) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x17 = 3048;
	static int32_t x18 = INT32_MIN;
	int64_t x19 = INT64_MIN;
	static volatile int32_t x20 = -2803;

	t3 = ((x17>>(x18<x19))&x20);

	if (t3 != 264) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x30 = -1;
	uint64_t x31 = 510218824861LLU;
	volatile uint16_t x32 = UINT16_MAX;
	volatile int32_t t4 = 10682991;

	t4 = ((x29>>(x30<x31))&x32);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x33 = 796LLU;
	int32_t x34 = INT32_MIN;
	int64_t x35 = -1122238147111LL;
	int32_t x36 = INT32_MAX;
	uint64_t t5 = 0LLU;

	t5 = ((x33>>(x34<x35))&x36);

	if (t5 != 796LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x45 = 1U;
	static volatile int64_t x46 = INT64_MIN;
	int16_t x48 = -1;
	int32_t t6 = 193;

	t6 = ((x45>>(x46<x47))&x48);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x49 = 2U;
	int32_t x50 = -1;
	int32_t x51 = INT32_MIN;
	uint32_t x52 = UINT32_MAX;
	volatile uint32_t t7 = 2318371U;

	t7 = ((x49>>(x50<x51))&x52);

	if (t7 != 2U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x68 = 9943U;
	static volatile uint32_t t8 = 446925U;

	t8 = ((x65>>(x66<x67))&x68);

	if (t8 != 9943U) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x73 = INT64_MAX;
	static volatile int32_t x74 = INT32_MIN;
	int16_t x76 = 1;
	volatile int64_t t9 = -1LL;

	t9 = ((x73>>(x74<x75))&x76);

	if (t9 != 1LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x77 = 8179110;
	int32_t x78 = INT32_MAX;
	uint16_t x79 = 169U;
	int8_t x80 = 1;
	static int32_t t10 = 57795;

	t10 = ((x77>>(x78<x79))&x80);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile uint64_t x85 = 17094735LLU;
	int16_t x86 = -840;
	int16_t x87 = INT16_MIN;
	uint32_t x88 = UINT32_MAX;
	volatile uint64_t t11 = 15LLU;

	t11 = ((x85>>(x86<x87))&x88);

	if (t11 != 17094735LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x89 = INT8_MAX;
	int8_t x90 = -22;
	volatile int8_t x91 = -3;
	uint64_t x92 = 266978177950LLU;
	uint64_t t12 = 608622546978741521LLU;

	t12 = ((x89>>(x90<x91))&x92);

	if (t12 != 30LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x93 = UINT32_MAX;
	volatile int8_t x94 = -2;
	int64_t x95 = 2LL;
	volatile int64_t x96 = 426LL;
	int64_t t13 = 46350255571LL;

	t13 = ((x93>>(x94<x95))&x96);

	if (t13 != 426LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x97 = INT8_MAX;
	static uint64_t x98 = 639575876066242452LLU;
	int64_t x100 = 3740373460723975999LL;

	t14 = ((x97>>(x98<x99))&x100);

	if (t14 != 63LL) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x101 = UINT32_MAX;
	uint8_t x102 = 31U;
	uint64_t x103 = 1753371873123LLU;

	t15 = ((x101>>(x102<x103))&x104);

	if (t15 != 6U) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x105 = UINT8_MAX;
	uint8_t x106 = 54U;
	static int32_t x107 = INT32_MIN;
	static int32_t t16 = -13783363;

	t16 = ((x105>>(x106<x107))&x108);

	if (t16 != 251) { NG(); } else { ; }
	
}

void f17(void) {
	static uint64_t x109 = UINT64_MAX;
	volatile int8_t x111 = 7;
	volatile int8_t x112 = -1;
	volatile uint64_t t17 = 188822997550LLU;

	t17 = ((x109>>(x110<x111))&x112);

	if (t17 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x113 = INT32_MAX;
	uint8_t x114 = 0U;
	static uint32_t x115 = 16U;
	int8_t x116 = INT8_MIN;
	int32_t t18 = -6;

	t18 = ((x113>>(x114<x115))&x116);

	if (t18 != 1073741696) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x117 = UINT64_MAX;
	int8_t x118 = -27;
	volatile int64_t x119 = -1LL;
	int64_t x120 = INT64_MAX;
	uint64_t t19 = 705332905899201609LLU;

	t19 = ((x117>>(x118<x119))&x120);

	if (t19 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x126 = -1;
	volatile int8_t x127 = INT8_MIN;
	volatile int64_t x128 = INT64_MIN;

	t20 = ((x125>>(x126<x127))&x128);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x133 = 3U;
	uint8_t x134 = 29U;
	int64_t x135 = 57LL;
	static uint64_t x136 = 169597647099LLU;

	t21 = ((x133>>(x134<x135))&x136);

	if (t21 != 1LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static uint64_t x137 = 476768467474501LLU;
	volatile uint64_t x138 = 219596656317LLU;
	int16_t x139 = 847;
	uint8_t x140 = UINT8_MAX;
	static uint64_t t22 = 1651024LLU;

	t22 = ((x137>>(x138<x139))&x140);

	if (t22 != 69LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x141 = 21;
	uint32_t x143 = UINT32_MAX;
	int32_t t23 = 31263129;

	t23 = ((x141>>(x142<x143))&x144);

	if (t23 != 21) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x145 = 50;
	int64_t x146 = INT64_MIN;
	uint64_t x147 = 1526484125429LLU;
	int64_t x148 = 58156170127959LL;
	volatile int64_t t24 = -4839238LL;

	t24 = ((x145>>(x146<x147))&x148);

	if (t24 != 18LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x149 = UINT8_MAX;
	int8_t x150 = INT8_MIN;
	int64_t x151 = INT64_MAX;
	uint64_t x152 = UINT64_MAX;

	t25 = ((x149>>(x150<x151))&x152);

	if (t25 != 127LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x157 = 4859962U;
	static int16_t x158 = -1;
	int8_t x159 = -1;
	uint64_t x160 = 63209721936249603LLU;
	uint64_t t26 = 6076LLU;

	t26 = ((x157>>(x158<x159))&x160);

	if (t26 != 4718594LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x165 = 2U;
	volatile int16_t x166 = -1;
	int32_t x167 = INT32_MIN;
	volatile uint32_t t27 = 1010U;

	t27 = ((x165>>(x166<x167))&x168);

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x169 = INT16_MAX;
	static int16_t x171 = INT16_MIN;
	uint8_t x172 = 1U;

	t28 = ((x169>>(x170<x171))&x172);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x174 = 126U;
	static int32_t x175 = -1124;

	t29 = ((x173>>(x174<x175))&x176);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x177 = 5;
	static volatile int32_t x178 = 35372331;
	int32_t x180 = -1;
	static volatile int32_t t30 = 425;

	t30 = ((x177>>(x178<x179))&x180);

	if (t30 != 2) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x181 = 0U;
	static int32_t x183 = INT32_MAX;
	static int8_t x184 = INT8_MAX;
	volatile int32_t t31 = 0;

	t31 = ((x181>>(x182<x183))&x184);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x189 = INT64_MAX;
	uint16_t x190 = 10U;
	volatile int8_t x191 = 0;
	int64_t x192 = -1LL;
	volatile int64_t t32 = INT64_MAX;

	t32 = ((x189>>(x190<x191))&x192);

	if (t32 != INT64_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x194 = INT32_MIN;
	uint16_t x195 = 2884U;
	int8_t x196 = INT8_MIN;
	uint32_t t33 = 12436U;

	t33 = ((x193>>(x194<x195))&x196);

	if (t33 != 1152U) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x197 = 53404;
	static int16_t x199 = INT16_MIN;
	uint8_t x200 = 120U;
	volatile int32_t t34 = -247;

	t34 = ((x197>>(x198<x199))&x200);

	if (t34 != 24) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x201 = INT32_MAX;
	static int32_t x202 = -46978;
	int64_t x203 = 15183402LL;
	volatile int64_t x204 = INT64_MIN;
	volatile int64_t t35 = -1090470723853596433LL;

	t35 = ((x201>>(x202<x203))&x204);

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x205 = 25667496U;
	uint8_t x206 = 1U;
	static volatile int16_t x207 = INT16_MAX;
	static int8_t x208 = 13;
	uint32_t t36 = 6U;

	t36 = ((x205>>(x206<x207))&x208);

	if (t36 != 4U) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x235 = 55681U;
	int8_t x236 = INT8_MIN;

	t37 = ((x233>>(x234<x235))&x236);

	if (t37 != 2147483520U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x245 = 6U;
	int32_t x246 = -359142203;
	static volatile uint8_t x248 = 1U;

	t38 = ((x245>>(x246<x247))&x248);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int16_t x250 = INT16_MIN;
	static uint16_t x251 = UINT16_MAX;
	volatile int16_t x252 = INT16_MIN;
	int32_t t39 = 62;

	t39 = ((x249>>(x250<x251))&x252);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x253 = 4U;
	uint32_t x254 = UINT32_MAX;
	int32_t x255 = INT32_MIN;
	int8_t x256 = -4;
	static volatile int32_t t40 = -128848;

	t40 = ((x253>>(x254<x255))&x256);

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x257 = 2U;
	int64_t x258 = -1LL;
	int32_t x259 = INT32_MIN;
	static uint8_t x260 = 7U;

	t41 = ((x257>>(x258<x259))&x260);

	if (t41 != 2U) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x261 = 3U;
	static uint32_t x262 = 49U;
	volatile int8_t x264 = 3;
	static volatile int32_t t42 = 105291;

	t42 = ((x261>>(x262<x263))&x264);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x265 = UINT32_MAX;
	int8_t x266 = INT8_MIN;
	uint8_t x267 = 56U;
	volatile uint16_t x268 = UINT16_MAX;
	static volatile uint32_t t43 = 1525509U;

	t43 = ((x265>>(x266<x267))&x268);

	if (t43 != 65535U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x273 = 41U;
	int32_t t44 = -1079;

	t44 = ((x273>>(x274<x275))&x276);

	if (t44 != 20) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x279 = INT8_MIN;
	uint32_t x280 = 130497650U;

	t45 = ((x277>>(x278<x279))&x280);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x281 = INT32_MAX;
	int16_t x283 = INT16_MAX;
	volatile uint8_t x284 = UINT8_MAX;
	static volatile int32_t t46 = -140;

	t46 = ((x281>>(x282<x283))&x284);

	if (t46 != 255) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x289 = 243935908U;
	volatile uint32_t t47 = 1040756278U;

	t47 = ((x289>>(x290<x291))&x292);

	if (t47 != 82U) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x309 = 1LL;
	uint64_t x311 = 518LLU;
	static uint8_t x312 = UINT8_MAX;
	volatile int64_t t48 = -1192339275017LL;

	t48 = ((x309>>(x310<x311))&x312);

	if (t48 != 1LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x313 = 57431U;
	volatile int16_t x314 = INT16_MAX;
	static int64_t x315 = INT64_MIN;
	int32_t x316 = INT32_MIN;
	volatile uint32_t t49 = 1361650U;

	t49 = ((x313>>(x314<x315))&x316);

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x318 = 9U;
	volatile uint8_t x320 = UINT8_MAX;
	static volatile int32_t t50 = -991;

	t50 = ((x317>>(x318<x319))&x320);

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x321 = 1;
	int16_t x323 = INT16_MAX;
	int16_t x324 = 8;
	volatile int32_t t51 = -3;

	t51 = ((x321>>(x322<x323))&x324);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x325 = INT16_MAX;
	uint32_t x327 = 360U;
	static int8_t x328 = INT8_MIN;

	t52 = ((x325>>(x326<x327))&x328);

	if (t52 != 32640) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x329 = 6U;
	int8_t x330 = -1;
	static uint32_t x331 = 914848029U;
	int8_t x332 = INT8_MAX;
	int32_t t53 = 1;

	t53 = ((x329>>(x330<x331))&x332);

	if (t53 != 6) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x334 = 1;
	int64_t x335 = -1LL;
	static volatile int8_t x336 = -53;
	static int32_t t54 = -1652140;

	t54 = ((x333>>(x334<x335))&x336);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x341 = 159112437U;
	uint32_t x342 = 8560U;
	int64_t x343 = INT64_MAX;
	static int64_t t55 = -2171058851609041LL;

	t55 = ((x341>>(x342<x343))&x344);

	if (t55 != 79556218LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x353 = UINT16_MAX;
	int32_t x354 = INT32_MIN;
	int16_t x355 = -10614;
	int8_t x356 = INT8_MIN;
	volatile int32_t t56 = -112977287;

	t56 = ((x353>>(x354<x355))&x356);

	if (t56 != 32640) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x357 = UINT8_MAX;
	int32_t x358 = -1437;
	static int32_t x359 = -102;
	static uint64_t x360 = UINT64_MAX;
	volatile uint64_t t57 = 4LLU;

	t57 = ((x357>>(x358<x359))&x360);

	if (t57 != 127LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x361 = UINT64_MAX;
	static volatile int8_t x362 = INT8_MAX;
	int8_t x363 = INT8_MIN;
	volatile uint64_t t58 = 3281900LLU;

	t58 = ((x361>>(x362<x363))&x364);

	if (t58 != 2147483647LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x369 = 15U;
	int8_t x370 = INT8_MIN;
	static int8_t x371 = INT8_MAX;
	uint32_t t59 = 379944975U;

	t59 = ((x369>>(x370<x371))&x372);

	if (t59 != 7U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x377 = 5;
	int8_t x378 = 0;
	int32_t x379 = INT32_MIN;
	static volatile int32_t t60 = -123;

	t60 = ((x377>>(x378<x379))&x380);

	if (t60 != 4) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x385 = 106653296U;
	static int64_t x386 = -1LL;
	int32_t x387 = -71;
	volatile int64_t x388 = -1LL;
	static int64_t t61 = 307LL;

	t61 = ((x385>>(x386<x387))&x388);

	if (t61 != 106653296LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x393 = 18U;
	static volatile int8_t x395 = INT8_MAX;
	static int32_t t62 = 739169;

	t62 = ((x393>>(x394<x395))&x396);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x397 = 6813251139603545LLU;
	uint32_t x398 = UINT32_MAX;
	uint8_t x399 = 93U;
	static volatile int32_t x400 = INT32_MAX;
	volatile uint64_t t63 = 13795641210LLU;

	t63 = ((x397>>(x398<x399))&x400);

	if (t63 != 636554329LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x409 = 7402887;
	volatile int32_t x410 = INT32_MAX;
	int8_t x412 = INT8_MIN;

	t64 = ((x409>>(x410<x411))&x412);

	if (t64 != 7402880) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint8_t x413 = 25U;
	uint64_t x414 = 12092LLU;
	uint16_t x416 = UINT16_MAX;
	int32_t t65 = 27419365;

	t65 = ((x413>>(x414<x415))&x416);

	if (t65 != 12) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x417 = 22LLU;
	int32_t x418 = INT32_MIN;
	uint16_t x420 = 0U;

	t66 = ((x417>>(x418<x419))&x420);

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x421 = 0U;
	uint64_t x422 = 3LLU;
	uint64_t x423 = UINT64_MAX;
	int8_t x424 = 3;
	volatile uint32_t t67 = 1510475U;

	t67 = ((x421>>(x422<x423))&x424);

	if (t67 != 0U) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x433 = 719U;
	volatile uint16_t x434 = 9U;
	int8_t x435 = -1;
	int32_t x436 = 106825;
	static volatile int32_t t68 = 1;

	t68 = ((x433>>(x434<x435))&x436);

	if (t68 != 73) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x441 = INT16_MAX;
	uint32_t x444 = UINT32_MAX;
	uint32_t t69 = 4U;

	t69 = ((x441>>(x442<x443))&x444);

	if (t69 != 16383U) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint16_t x445 = 2U;
	static int8_t x446 = INT8_MIN;
	static int64_t t70 = 63041563604LL;

	t70 = ((x445>>(x446<x447))&x448);

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x449 = UINT8_MAX;
	static int64_t x451 = INT64_MAX;
	int64_t x452 = -1LL;

	t71 = ((x449>>(x450<x451))&x452);

	if (t71 != 127LL) { NG(); } else { ; }
	
}

void f72(void) {
	static volatile uint64_t x453 = 188862168207827178LLU;
	uint8_t x454 = 7U;
	volatile int64_t x456 = INT64_MAX;
	uint64_t t72 = 137883580LLU;

	t72 = ((x453>>(x454<x455))&x456);

	if (t72 != 94431084103913589LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x461 = 141;
	volatile int16_t x462 = -1;
	int8_t x463 = 1;
	volatile int64_t t73 = -10465121904227367LL;

	t73 = ((x461>>(x462<x463))&x464);

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x467 = INT64_MIN;
	static uint64_t x468 = UINT64_MAX;
	volatile uint64_t t74 = UINT64_MAX;

	t74 = ((x465>>(x466<x467))&x468);

	if (t74 != UINT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint64_t x473 = 212987410LLU;
	static int16_t x474 = -4;
	int32_t x475 = -102233819;

	t75 = ((x473>>(x474<x475))&x476);

	if (t75 != 212987410LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x478 = 89510653272LLU;
	static int64_t x479 = INT64_MIN;
	static int64_t x480 = INT64_MIN;
	int64_t t76 = -7064983LL;

	t76 = ((x477>>(x478<x479))&x480);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x483 = INT64_MIN;
	volatile int64_t t77 = 1257340289295843351LL;

	t77 = ((x481>>(x482<x483))&x484);

	if (t77 != 80LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x493 = 4093U;
	volatile uint64_t x494 = 4120504888742LLU;
	uint32_t x496 = 6U;
	uint32_t t78 = 77524189U;

	t78 = ((x493>>(x494<x495))&x496);

	if (t78 != 6U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x501 = 1;
	int8_t x502 = INT8_MIN;
	uint16_t x503 = 771U;
	volatile int64_t x504 = -1LL;
	int64_t t79 = -2082LL;

	t79 = ((x501>>(x502<x503))&x504);

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x513 = UINT16_MAX;
	uint64_t x514 = 1983461207595580LLU;
	uint8_t x515 = 1U;
	int32_t x516 = INT32_MIN;
	volatile int32_t t80 = -230617;

	t80 = ((x513>>(x514<x515))&x516);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x521 = 2888443527LLU;
	uint8_t x522 = UINT8_MAX;
	uint8_t x523 = 4U;
	int8_t x524 = INT8_MIN;

	t81 = ((x521>>(x522<x523))&x524);

	if (t81 != 2888443520LLU) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x525 = INT64_MAX;
	int16_t x526 = 6297;
	int16_t x527 = -1;
	int64_t t82 = 14074408LL;

	t82 = ((x525>>(x526<x527))&x528);

	if (t82 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x530 = INT8_MAX;
	int16_t x531 = -1;
	volatile int16_t x532 = INT16_MAX;
	int32_t t83 = -662799;

	t83 = ((x529>>(x530<x531))&x532);

	if (t83 != 37) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x533 = 707;
	int16_t x534 = INT16_MIN;
	static int32_t x535 = -999758605;
	int32_t t84 = -49;

	t84 = ((x533>>(x534<x535))&x536);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int64_t x537 = INT64_MAX;
	int64_t x539 = -32415691129401LL;
	static int64_t x540 = -4290LL;
	int64_t t85 = -379377292381336LL;

	t85 = ((x537>>(x538<x539))&x540);

	if (t85 != 9223372036854771518LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x543 = -22LL;
	int8_t x544 = INT8_MAX;
	volatile uint64_t t86 = 27LLU;

	t86 = ((x541>>(x542<x543))&x544);

	if (t86 != 127LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x546 = 1135925479LL;
	int16_t x548 = 8;
	uint32_t t87 = 3942699U;

	t87 = ((x545>>(x546<x547))&x548);

	if (t87 != 8U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x549 = 3;
	uint16_t x550 = UINT16_MAX;
	int64_t x551 = -1LL;
	volatile int32_t x552 = INT32_MIN;
	static int32_t t88 = 29113;

	t88 = ((x549>>(x550<x551))&x552);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x557 = 24718LLU;
	static int8_t x558 = INT8_MIN;
	int64_t x559 = -127597817968759LL;
	static volatile uint64_t t89 = 131LLU;

	t89 = ((x557>>(x558<x559))&x560);

	if (t89 != 24712LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x565 = 1437247068LLU;
	uint32_t x567 = 378628U;
	static uint8_t x568 = 4U;

	t90 = ((x565>>(x566<x567))&x568);

	if (t90 != 4LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x578 = UINT64_MAX;
	uint16_t x579 = 36U;

	t91 = ((x577>>(x578<x579))&x580);

	if (t91 != 65535) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x589 = INT32_MAX;
	volatile int8_t x591 = 0;
	volatile int8_t x592 = INT8_MAX;

	t92 = ((x589>>(x590<x591))&x592);

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x593 = 907998;
	int8_t x595 = 3;
	uint16_t x596 = 836U;

	t93 = ((x593>>(x594<x595))&x596);

	if (t93 != 324) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x597 = UINT32_MAX;
	static int8_t x598 = -1;
	uint32_t x599 = 1U;
	static uint8_t x600 = 0U;
	uint32_t t94 = 68U;

	t94 = ((x597>>(x598<x599))&x600);

	if (t94 != 0U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x601 = 29U;
	static int32_t x602 = INT32_MAX;
	volatile uint32_t x603 = 1944U;
	static int64_t x604 = INT64_MAX;
	volatile int64_t t95 = -133264303730747649LL;

	t95 = ((x601>>(x602<x603))&x604);

	if (t95 != 29LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x605 = UINT32_MAX;
	uint32_t x606 = 1669U;
	uint16_t x607 = 28115U;
	volatile int8_t x608 = -10;
	static uint32_t t96 = 121519U;

	t96 = ((x605>>(x606<x607))&x608);

	if (t96 != 2147483638U) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x609 = 2U;
	static int8_t x611 = INT8_MIN;
	int32_t t97 = 1;

	t97 = ((x609>>(x610<x611))&x612);

	if (t97 != 2) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint32_t x621 = 56U;
	int16_t x622 = INT16_MIN;
	uint16_t x623 = 1U;
	uint16_t x624 = UINT16_MAX;
	static uint32_t t98 = 3355U;

	t98 = ((x621>>(x622<x623))&x624);

	if (t98 != 28U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile uint32_t x626 = 2886268U;
	uint64_t x627 = 5627148733667491LLU;
	uint16_t x628 = UINT16_MAX;
	int64_t t99 = 274166778917LL;

	t99 = ((x625>>(x626<x627))&x628);

	if (t99 != 1820LL) { NG(); } else { ; }
	
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

