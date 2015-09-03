#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x2 = UINT64_MAX;
uint16_t x3 = UINT16_MAX;
static int8_t x7 = 40;
int8_t x25 = -35;
int64_t x27 = INT64_MIN;
volatile int32_t t7 = 6;
int32_t t8 = -5699278;
uint32_t x42 = 187U;
volatile int32_t x46 = -1;
int16_t x58 = -7;
static volatile int32_t x61 = 0;
int32_t t14 = 410;
uint16_t x67 = UINT16_MAX;
int16_t x69 = INT16_MIN;
static uint16_t x73 = UINT16_MAX;
static volatile int16_t x79 = -1;
int32_t x83 = -1;
static volatile int32_t t19 = -999329253;
static uint16_t x85 = 28U;
int32_t x87 = 4890;
static int32_t x94 = INT32_MIN;
int64_t x101 = INT64_MIN;
static int64_t x104 = INT64_MIN;
volatile uint8_t x112 = UINT8_MAX;
static int64_t x124 = -1LL;
int16_t x127 = INT16_MIN;
volatile int16_t x132 = 3;
uint64_t x141 = UINT64_MAX;
int64_t x142 = 3903LL;
uint16_t x149 = 14005U;
volatile int64_t x151 = -60065498495184748LL;
static volatile int64_t x158 = -612293221431893LL;
volatile int32_t t38 = -9014387;
static uint8_t x168 = UINT8_MAX;
volatile int32_t t42 = 390476;
static volatile int16_t x180 = INT16_MAX;
static volatile int32_t t44 = -8452850;
int32_t x194 = 278470221;
static uint8_t x196 = 8U;
uint32_t x215 = UINT32_MAX;
int64_t x220 = 0LL;
static int32_t x221 = -52;
static int16_t x222 = INT16_MIN;
int32_t t54 = -100148;
int8_t x226 = 1;
uint8_t x238 = UINT8_MAX;
int16_t x254 = -10;
int32_t x255 = -1;
int32_t x257 = 45;
static uint64_t x258 = UINT64_MAX;
static uint64_t x259 = 82886314LLU;
volatile int64_t x260 = INT64_MIN;
int64_t x262 = INT64_MIN;
int64_t x265 = INT64_MIN;
static int64_t x267 = -40LL;
uint32_t x271 = 5U;
static int16_t x272 = 3;
static int16_t x273 = INT16_MAX;
int64_t x278 = -1LL;
int16_t x279 = -847;
volatile int32_t t66 = 20;
int8_t x285 = INT8_MIN;
volatile uint64_t x291 = UINT64_MAX;
int32_t x292 = INT32_MIN;
uint16_t x297 = 30950U;
uint64_t x299 = 11945278574314LLU;
int32_t t71 = 485789;
volatile uint16_t x310 = 8U;
int16_t x315 = INT16_MIN;
volatile uint64_t x328 = 6028302LLU;
uint32_t x333 = 1081179U;
volatile int32_t t79 = 17504125;
uint8_t x347 = 1U;
volatile int8_t x349 = -1;
uint64_t x353 = 3700770LLU;
int8_t x354 = INT8_MIN;
static volatile int32_t x355 = -806556;
static uint16_t x356 = UINT16_MAX;
int32_t x357 = INT32_MIN;
int8_t x359 = INT8_MIN;
static int32_t t85 = 1;
volatile int64_t x372 = INT64_MIN;
int32_t x375 = 9410;
uint32_t x379 = UINT32_MAX;
uint8_t x389 = UINT8_MAX;
int8_t x392 = -1;
uint64_t x400 = 247433309LLU;
int32_t x403 = -34162727;
int32_t x405 = 38;
static int64_t x417 = -1LL;
volatile int32_t x418 = 452;
int32_t x419 = INT32_MAX;


void f0(void) {
	static int64_t x1 = -1LL;
	volatile int16_t x4 = 24;
	int32_t t0 = -59;

	t0 = (x1<((x2/x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = 15117U;
	int32_t x6 = 9;
	uint8_t x8 = 121U;
	static int32_t t1 = 181475;

	t1 = (x5<((x6/x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = UINT64_MAX;
	static volatile int16_t x10 = INT16_MIN;
	static uint16_t x11 = 2352U;
	int16_t x12 = INT16_MAX;
	static int32_t t2 = -200;

	t2 = (x9<((x10/x11)|x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint64_t x13 = 24104680114LLU;
	int16_t x14 = INT16_MIN;
	static int32_t x15 = -1;
	volatile int32_t x16 = INT32_MAX;
	volatile int32_t t3 = -15681;

	t3 = (x13<((x14/x15)|x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MIN;
	int16_t x22 = 30;
	int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t4 = 2;

	t4 = (x21<((x22/x23)|x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x26 = 1LLU;
	static int32_t x28 = -1;
	volatile int32_t t5 = -3420;

	t5 = (x25<((x26/x27)|x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x29 = 2U;
	volatile int16_t x30 = -1;
	uint16_t x31 = 1U;
	int32_t x32 = -653112;
	volatile int32_t t6 = 5;

	t6 = (x29<((x30/x31)|x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -63;
	static volatile int16_t x34 = -196;
	uint32_t x35 = 616429563U;
	int32_t x36 = -1;

	t7 = (x33<((x34/x35)|x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint16_t x37 = 4U;
	int8_t x38 = INT8_MAX;
	int16_t x39 = INT16_MIN;
	int16_t x40 = 395;

	t8 = (x37<((x38/x39)|x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x41 = INT32_MIN;
	static int32_t x43 = 31521;
	int8_t x44 = -1;
	int32_t t9 = 19;

	t9 = (x41<((x42/x43)|x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x45 = 23465U;
	static uint8_t x47 = 4U;
	int64_t x48 = INT64_MIN;
	volatile int32_t t10 = -157222225;

	t10 = (x45<((x46/x47)|x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = 0;
	int64_t x50 = INT64_MIN;
	static volatile int64_t x51 = INT64_MAX;
	volatile uint64_t x52 = UINT64_MAX;
	int32_t t11 = -959;

	t11 = (x49<((x50/x51)|x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MIN;
	int64_t x54 = -1LL;
	uint8_t x55 = 48U;
	static volatile int32_t x56 = 508;
	int32_t t12 = 1;

	t12 = (x53<((x54/x55)|x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x57 = UINT32_MAX;
	static uint64_t x59 = 5881016LLU;
	uint8_t x60 = UINT8_MAX;
	static int32_t t13 = 195078677;

	t13 = (x57<((x58/x59)|x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x62 = INT16_MAX;
	int32_t x63 = -66;
	uint16_t x64 = 245U;

	t14 = (x61<((x62/x63)|x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x65 = 12U;
	static int8_t x66 = 16;
	volatile uint16_t x68 = UINT16_MAX;
	static volatile int32_t t15 = 0;

	t15 = (x65<((x66/x67)|x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = 105LL;
	uint32_t x71 = 24U;
	uint8_t x72 = UINT8_MAX;
	int32_t t16 = 6;

	t16 = (x69<((x70/x71)|x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static int32_t x74 = INT32_MAX;
	static uint64_t x75 = UINT64_MAX;
	int8_t x76 = INT8_MIN;
	volatile int32_t t17 = -12579;

	t17 = (x73<((x74/x75)|x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile uint32_t x77 = UINT32_MAX;
	volatile int8_t x78 = 0;
	int64_t x80 = INT64_MIN;
	static volatile int32_t t18 = -2;

	t18 = (x77<((x78/x79)|x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = 400;
	int32_t x82 = -30;
	int8_t x84 = -1;

	t19 = (x81<((x82/x83)|x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x86 = 90493;
	volatile int16_t x88 = -1;
	int32_t t20 = 457644450;

	t20 = (x85<((x86/x87)|x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x89 = 0;
	int32_t x90 = INT32_MIN;
	volatile uint8_t x91 = 7U;
	static uint8_t x92 = 44U;
	volatile int32_t t21 = 451664;

	t21 = (x89<((x90/x91)|x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MIN;
	volatile int32_t x95 = 2145;
	static uint8_t x96 = 60U;
	volatile int32_t t22 = -49857;

	t22 = (x93<((x94/x95)|x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x97 = UINT32_MAX;
	int64_t x98 = INT64_MIN;
	uint16_t x99 = 1500U;
	uint64_t x100 = 2014934708017344LLU;
	int32_t t23 = 0;

	t23 = (x97<((x98/x99)|x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x102 = INT8_MAX;
	uint16_t x103 = UINT16_MAX;
	static int32_t t24 = -210631;

	t24 = (x101<((x102/x103)|x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 1429820781U;
	volatile uint8_t x106 = UINT8_MAX;
	uint32_t x107 = 11421041U;
	int32_t x108 = -1;
	static int32_t t25 = -5;

	t25 = (x105<((x106/x107)|x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x109 = 86U;
	volatile int8_t x110 = 0;
	int32_t x111 = -1;
	int32_t t26 = -7419;

	t26 = (x109<((x110/x111)|x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = INT64_MIN;
	volatile uint8_t x114 = 15U;
	static uint16_t x115 = 39U;
	int8_t x116 = 7;
	int32_t t27 = -895785;

	t27 = (x113<((x114/x115)|x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x117 = 988367331U;
	int8_t x118 = INT8_MAX;
	int16_t x119 = INT16_MAX;
	int32_t x120 = INT32_MIN;
	int32_t t28 = 50;

	t28 = (x117<((x118/x119)|x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MAX;
	volatile int64_t x123 = -127LL;
	volatile int32_t t29 = 41166590;

	t29 = (x121<((x122/x123)|x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x125 = 2U;
	int64_t x126 = -70096288658199018LL;
	int16_t x128 = -1;
	volatile int32_t t30 = 101;

	t30 = (x125<((x126/x127)|x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int16_t x129 = INT16_MIN;
	static uint16_t x130 = UINT16_MAX;
	static int16_t x131 = INT16_MAX;
	static int32_t t31 = 60;

	t31 = (x129<((x130/x131)|x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x133 = INT8_MAX;
	int32_t x134 = -57;
	static int64_t x135 = -1LL;
	int8_t x136 = INT8_MIN;
	volatile int32_t t32 = 393847;

	t32 = (x133<((x134/x135)|x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x137 = INT16_MIN;
	static int8_t x138 = INT8_MIN;
	int64_t x139 = INT64_MIN;
	uint8_t x140 = 0U;
	int32_t t33 = -96498;

	t33 = (x137<((x138/x139)|x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x143 = 27U;
	int8_t x144 = INT8_MIN;
	volatile int32_t t34 = 175;

	t34 = (x141<((x142/x143)|x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x145 = INT64_MAX;
	uint64_t x146 = 901389LLU;
	uint32_t x147 = 3235U;
	int64_t x148 = INT64_MIN;
	volatile int32_t t35 = 36910404;

	t35 = (x145<((x146/x147)|x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x150 = INT16_MIN;
	uint16_t x152 = UINT16_MAX;
	int32_t t36 = -1;

	t36 = (x149<((x150/x151)|x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x153 = INT16_MIN;
	int32_t x154 = INT32_MIN;
	volatile int32_t x155 = 637135;
	uint8_t x156 = 48U;
	static int32_t t37 = -707431;

	t37 = (x153<((x154/x155)|x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = -1LL;
	volatile int64_t x159 = 222129601760LL;
	int16_t x160 = INT16_MAX;

	t38 = (x157<((x158/x159)|x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x161 = INT32_MIN;
	int16_t x162 = INT16_MIN;
	uint8_t x163 = UINT8_MAX;
	uint16_t x164 = 116U;
	int32_t t39 = 33035;

	t39 = (x161<((x162/x163)|x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile uint8_t x165 = 89U;
	int64_t x166 = -1LL;
	volatile int16_t x167 = -1;
	int32_t t40 = -3476;

	t40 = (x165<((x166/x167)|x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x169 = -1;
	int32_t x170 = -1;
	static int64_t x171 = 13699666717LL;
	volatile uint8_t x172 = 89U;
	volatile int32_t t41 = 479950929;

	t41 = (x169<((x170/x171)|x172));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = -13182465;
	int32_t x174 = -27119294;
	int64_t x175 = -3434249444124596977LL;
	volatile int64_t x176 = INT64_MIN;

	t42 = (x173<((x174/x175)|x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x177 = INT32_MAX;
	uint32_t x178 = 795591549U;
	uint32_t x179 = UINT32_MAX;
	static int32_t t43 = 0;

	t43 = (x177<((x178/x179)|x180));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x181 = UINT8_MAX;
	uint32_t x182 = UINT32_MAX;
	static volatile int8_t x183 = INT8_MAX;
	static int32_t x184 = -607;

	t44 = (x181<((x182/x183)|x184));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x185 = INT32_MIN;
	int8_t x186 = -1;
	int32_t x187 = -1;
	int64_t x188 = INT64_MAX;
	volatile int32_t t45 = -32;

	t45 = (x185<((x186/x187)|x188));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x189 = 1U;
	volatile int16_t x190 = -1;
	volatile uint64_t x191 = 957965LLU;
	static uint32_t x192 = UINT32_MAX;
	volatile int32_t t46 = -1113829;

	t46 = (x189<((x190/x191)|x192));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -6;
	int64_t x195 = -9682609243LL;
	volatile int32_t t47 = 864769948;

	t47 = (x193<((x194/x195)|x196));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x197 = INT64_MAX;
	int64_t x198 = INT64_MIN;
	int8_t x199 = 3;
	int8_t x200 = INT8_MAX;
	volatile int32_t t48 = -22524;

	t48 = (x197<((x198/x199)|x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x201 = INT8_MIN;
	int16_t x202 = INT16_MIN;
	static volatile int8_t x203 = INT8_MAX;
	int16_t x204 = -1;
	int32_t t49 = -15306;

	t49 = (x201<((x202/x203)|x204));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x205 = INT32_MAX;
	uint64_t x206 = 0LLU;
	static int8_t x207 = -1;
	int32_t x208 = -1;
	volatile int32_t t50 = -1;

	t50 = (x205<((x206/x207)|x208));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x209 = 28801817;
	int8_t x210 = INT8_MAX;
	int16_t x211 = 201;
	static volatile int32_t x212 = INT32_MIN;
	volatile int32_t t51 = -178027729;

	t51 = (x209<((x210/x211)|x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x213 = 38U;
	int8_t x214 = 0;
	uint32_t x216 = 17045U;
	volatile int32_t t52 = -121485;

	t52 = (x213<((x214/x215)|x216));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x217 = 4269195392168480565LL;
	int16_t x218 = INT16_MIN;
	int16_t x219 = INT16_MIN;
	int32_t t53 = -8548;

	t53 = (x217<((x218/x219)|x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x223 = -1;
	uint16_t x224 = UINT16_MAX;

	t54 = (x221<((x222/x223)|x224));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MIN;
	int16_t x227 = -1;
	int8_t x228 = 12;
	int32_t t55 = -80210479;

	t55 = (x225<((x226/x227)|x228));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = 17;
	int8_t x234 = -23;
	volatile uint16_t x235 = 1782U;
	int32_t x236 = -1;
	volatile int32_t t56 = -53781;

	t56 = (x233<((x234/x235)|x236));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x237 = 1;
	volatile int8_t x239 = INT8_MIN;
	int8_t x240 = INT8_MIN;
	volatile int32_t t57 = 530014;

	t57 = (x237<((x238/x239)|x240));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x245 = INT16_MIN;
	uint16_t x246 = 7U;
	static int32_t x247 = -1;
	int64_t x248 = INT64_MIN;
	volatile int32_t t58 = 326590631;

	t58 = (x245<((x246/x247)|x248));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x249 = -1LL;
	uint32_t x250 = UINT32_MAX;
	volatile int32_t x251 = -5;
	int64_t x252 = INT64_MIN;
	int32_t t59 = -297741144;

	t59 = (x249<((x250/x251)|x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x253 = UINT16_MAX;
	int8_t x256 = 3;
	int32_t t60 = 100;

	t60 = (x253<((x254/x255)|x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t t61 = -7;

	t61 = (x257<((x258/x259)|x260));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x261 = UINT32_MAX;
	uint8_t x263 = 1U;
	int32_t x264 = -1;
	int32_t t62 = 337863;

	t62 = (x261<((x262/x263)|x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x266 = 4LL;
	uint64_t x268 = 1536LLU;
	volatile int32_t t63 = 8097541;

	t63 = (x265<((x266/x267)|x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x269 = 2202U;
	int32_t x270 = 36;
	volatile int32_t t64 = 30787118;

	t64 = (x269<((x270/x271)|x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x274 = 15138553402LL;
	int8_t x275 = 6;
	uint8_t x276 = UINT8_MAX;
	volatile int32_t t65 = 4730;

	t65 = (x273<((x274/x275)|x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x277 = 43U;
	volatile int32_t x280 = INT32_MAX;

	t66 = (x277<((x278/x279)|x280));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = INT32_MIN;
	volatile uint8_t x282 = 38U;
	int64_t x283 = 28947067827552251LL;
	int32_t x284 = INT32_MIN;
	volatile int32_t t67 = -2634;

	t67 = (x281<((x282/x283)|x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x286 = UINT64_MAX;
	int64_t x287 = -1LL;
	int64_t x288 = INT64_MIN;
	volatile int32_t t68 = -99470919;

	t68 = (x285<((x286/x287)|x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = INT16_MIN;
	int8_t x290 = INT8_MIN;
	int32_t t69 = 49507432;

	t69 = (x289<((x290/x291)|x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x293 = INT16_MIN;
	uint8_t x294 = UINT8_MAX;
	int64_t x295 = -1LL;
	volatile int64_t x296 = INT64_MAX;
	volatile int32_t t70 = 175201;

	t70 = (x293<((x294/x295)|x296));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x298 = 29U;
	volatile int32_t x300 = INT32_MIN;

	t71 = (x297<((x298/x299)|x300));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = 5;
	volatile int64_t x302 = INT64_MIN;
	static uint16_t x303 = 11411U;
	int32_t x304 = 16368061;
	volatile int32_t t72 = 542;

	t72 = (x301<((x302/x303)|x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = INT16_MIN;
	static int32_t x306 = INT32_MAX;
	int64_t x307 = -7019LL;
	int64_t x308 = -1LL;
	static int32_t t73 = -53;

	t73 = (x305<((x306/x307)|x308));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x309 = INT16_MAX;
	static int8_t x311 = -2;
	static uint8_t x312 = 3U;
	volatile int32_t t74 = -88820;

	t74 = (x309<((x310/x311)|x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x313 = -1;
	static int16_t x314 = 1;
	int64_t x316 = -1LL;
	int32_t t75 = -15855564;

	t75 = (x313<((x314/x315)|x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x317 = INT8_MIN;
	uint8_t x318 = 4U;
	uint32_t x319 = UINT32_MAX;
	uint32_t x320 = 31U;
	volatile int32_t t76 = 92388180;

	t76 = (x317<((x318/x319)|x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x321 = UINT16_MAX;
	static uint32_t x322 = 24873829U;
	uint32_t x323 = 4237520U;
	int16_t x324 = INT16_MIN;
	volatile int32_t t77 = 12674;

	t77 = (x321<((x322/x323)|x324));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = INT64_MIN;
	int64_t x326 = INT64_MAX;
	int8_t x327 = INT8_MAX;
	volatile int32_t t78 = 2314;

	t78 = (x325<((x326/x327)|x328));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x334 = 2;
	static uint16_t x335 = 32549U;
	uint32_t x336 = 32U;

	t79 = (x333<((x334/x335)|x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x337 = 1;
	static int64_t x338 = 33495152681741731LL;
	uint64_t x339 = UINT64_MAX;
	uint8_t x340 = 108U;
	volatile int32_t t80 = -1;

	t80 = (x337<((x338/x339)|x340));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = -2287630;
	volatile uint32_t x342 = UINT32_MAX;
	int8_t x343 = INT8_MAX;
	static int8_t x344 = INT8_MAX;
	volatile int32_t t81 = 60261;

	t81 = (x341<((x342/x343)|x344));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x345 = INT64_MIN;
	volatile int64_t x346 = INT64_MIN;
	static int8_t x348 = -1;
	static volatile int32_t t82 = 61;

	t82 = (x345<((x346/x347)|x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x350 = 1;
	int32_t x351 = INT32_MIN;
	int32_t x352 = 1775;
	int32_t t83 = -1;

	t83 = (x349<((x350/x351)|x352));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t t84 = -72252486;

	t84 = (x353<((x354/x355)|x356));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x358 = 312U;
	volatile int64_t x360 = INT64_MIN;

	t85 = (x357<((x358/x359)|x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x361 = -13725263963743LL;
	static int8_t x362 = -7;
	int16_t x363 = INT16_MIN;
	int8_t x364 = INT8_MIN;
	volatile int32_t t86 = -400663706;

	t86 = (x361<((x362/x363)|x364));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x365 = 1897094155U;
	uint8_t x366 = UINT8_MAX;
	static volatile int32_t x367 = INT32_MIN;
	static uint32_t x368 = UINT32_MAX;
	int32_t t87 = -18;

	t87 = (x365<((x366/x367)|x368));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint64_t x369 = UINT64_MAX;
	int32_t x370 = 89824;
	int8_t x371 = INT8_MIN;
	int32_t t88 = -33032;

	t88 = (x369<((x370/x371)|x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = 5;
	int64_t x374 = -1LL;
	uint8_t x376 = 3U;
	volatile int32_t t89 = -21;

	t89 = (x373<((x374/x375)|x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x377 = INT64_MIN;
	int16_t x378 = INT16_MIN;
	int64_t x380 = -71852164209593603LL;
	int32_t t90 = -406359824;

	t90 = (x377<((x378/x379)|x380));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x381 = UINT32_MAX;
	int16_t x382 = -1;
	static int32_t x383 = -1;
	static volatile int8_t x384 = INT8_MIN;
	volatile int32_t t91 = -83;

	t91 = (x381<((x382/x383)|x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x385 = INT64_MIN;
	static int32_t x386 = -1;
	static int32_t x387 = INT32_MIN;
	volatile uint8_t x388 = 47U;
	volatile int32_t t92 = 104355;

	t92 = (x385<((x386/x387)|x388));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x390 = 11629U;
	volatile uint64_t x391 = 318278470393046LLU;
	volatile int32_t t93 = -7221;

	t93 = (x389<((x390/x391)|x392));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x393 = INT64_MAX;
	int32_t x394 = -1;
	static int32_t x395 = INT32_MAX;
	static volatile uint32_t x396 = 1653U;
	volatile int32_t t94 = 2980;

	t94 = (x393<((x394/x395)|x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x397 = 3U;
	volatile uint8_t x398 = 12U;
	volatile int8_t x399 = -1;
	int32_t t95 = 2;

	t95 = (x397<((x398/x399)|x400));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = INT8_MIN;
	uint32_t x402 = 365724112U;
	int32_t x404 = INT32_MIN;
	int32_t t96 = -14019;

	t96 = (x401<((x402/x403)|x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x406 = INT64_MAX;
	uint16_t x407 = 1U;
	int32_t x408 = INT32_MIN;
	static int32_t t97 = 32;

	t97 = (x405<((x406/x407)|x408));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = 1;
	int32_t x414 = -782;
	volatile int8_t x415 = INT8_MIN;
	int8_t x416 = -5;
	static int32_t t98 = 858725991;

	t98 = (x413<((x414/x415)|x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x420 = INT16_MAX;
	volatile int32_t t99 = 43457;

	t99 = (x417<((x418/x419)|x420));

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

