#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x11 = 4;
static volatile int32_t t2 = -6101673;
static uint64_t x16 = 165014LLU;
volatile int32_t x20 = -1;
int16_t x25 = -1;
uint16_t x27 = 102U;
int32_t x33 = -2423444;
static volatile int16_t x38 = INT16_MAX;
int32_t t13 = -1;
int32_t x61 = 173;
static int8_t x76 = -1;
uint16_t x77 = 1U;
int64_t x81 = INT64_MAX;
uint16_t x85 = 898U;
int8_t x88 = INT8_MIN;
volatile uint64_t x94 = UINT64_MAX;
int32_t x95 = -15012147;
static int64_t x98 = INT64_MAX;
uint8_t x99 = 106U;
static int32_t t24 = 0;
int8_t x101 = INT8_MIN;
int32_t x103 = 150;
volatile int64_t x104 = INT64_MAX;
int64_t x107 = INT64_MIN;
static int64_t x109 = -8LL;
int32_t t27 = 1976;
static volatile uint64_t x115 = 41261488290946362LLU;
volatile int32_t t28 = -1;
volatile int8_t x117 = -1;
int16_t x118 = -1;
int32_t t30 = -233;
uint64_t x132 = 0LLU;
volatile int32_t t31 = 33316;
int32_t t33 = -62503245;
int8_t x142 = INT8_MIN;
uint8_t x143 = UINT8_MAX;
uint16_t x156 = 439U;
int32_t x175 = -1;
static volatile int32_t t42 = 3612005;
uint64_t x192 = UINT64_MAX;
static volatile int32_t t46 = -230116486;
uint16_t x210 = 5714U;
int32_t x216 = 341678;
int32_t x221 = INT32_MIN;
uint8_t x223 = 2U;
int16_t x242 = 28;
int64_t x251 = 292453280630653462LL;
uint8_t x265 = UINT8_MAX;
volatile uint32_t x272 = UINT32_MAX;
volatile int32_t t61 = -55555;
volatile int8_t x275 = INT8_MIN;
static uint16_t x280 = 3030U;
volatile int64_t x285 = -1LL;
volatile int64_t x287 = 1068782760522143476LL;
int8_t x288 = -1;
static volatile int32_t t66 = -15779;
uint64_t x296 = 68683249645795LLU;
int32_t t67 = -1;
static uint64_t x297 = UINT64_MAX;
static volatile int64_t x299 = -1LL;
uint64_t x303 = 1783475878134562LLU;
int32_t x306 = INT32_MIN;
volatile int8_t x312 = INT8_MIN;
uint16_t x318 = UINT16_MAX;
int32_t x320 = INT32_MIN;
int32_t t73 = 226581758;
uint16_t x325 = UINT16_MAX;
static uint32_t x333 = 2451U;
int32_t x334 = INT32_MAX;
static volatile uint32_t x339 = 27U;
uint64_t x343 = 14269LLU;
static volatile int8_t x345 = 6;
int32_t x349 = INT32_MAX;
uint32_t x350 = UINT32_MAX;
volatile int32_t t84 = 28918;
int16_t x365 = -2449;
volatile uint64_t x369 = 11748823764362LLU;
volatile int16_t x380 = -31;
uint32_t x387 = 828466640U;
int16_t x388 = -1;
volatile int32_t t89 = -38979;
uint8_t x408 = UINT8_MAX;
volatile int32_t t95 = -68910;
static int32_t x415 = INT32_MIN;
int16_t x417 = -63;
static uint64_t x418 = UINT64_MAX;


void f0(void) {
	int16_t x1 = INT16_MIN;
	static volatile uint64_t x2 = 104140191735547445LLU;
	int16_t x3 = INT16_MIN;
	uint16_t x4 = UINT16_MAX;
	static volatile int32_t t0 = -41467;

	t0 = ((x1/x2)<(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 401539568838LL;
	volatile uint8_t x6 = UINT8_MAX;
	int64_t x7 = 1957658012LL;
	uint32_t x8 = 3U;
	int32_t t1 = 17;

	t1 = ((x5/x6)<(x7<x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -17;
	volatile uint8_t x10 = UINT8_MAX;
	int32_t x12 = INT32_MAX;

	t2 = ((x9/x10)<(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MAX;
	volatile uint32_t x14 = UINT32_MAX;
	int8_t x15 = -2;
	static volatile int32_t t3 = -125536871;

	t3 = ((x13/x14)<(x15<x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int64_t x17 = INT64_MIN;
	int16_t x18 = INT16_MAX;
	int16_t x19 = INT16_MAX;
	int32_t t4 = 370149;

	t4 = ((x17/x18)<(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x21 = INT64_MAX;
	int16_t x22 = INT16_MIN;
	int32_t x23 = INT32_MIN;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -10672;

	t5 = ((x21/x22)<(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	static volatile uint16_t x26 = UINT16_MAX;
	volatile uint8_t x28 = 108U;
	volatile int32_t t6 = -1151456;

	t6 = ((x25/x26)<(x27<x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	int32_t x30 = 41;
	uint64_t x31 = 12029159LLU;
	static int64_t x32 = 3172736317836LL;
	volatile int32_t t7 = 63;

	t7 = ((x29/x30)<(x31<x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x34 = 59;
	int8_t x35 = 46;
	int64_t x36 = -431710444386LL;
	static volatile int32_t t8 = 3896095;

	t8 = ((x33/x34)<(x35<x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x37 = UINT32_MAX;
	int8_t x39 = INT8_MIN;
	int64_t x40 = -1LL;
	volatile int32_t t9 = 559707849;

	t9 = ((x37/x38)<(x39<x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = UINT32_MAX;
	int16_t x42 = INT16_MIN;
	uint8_t x43 = 2U;
	int16_t x44 = -1;
	int32_t t10 = -8;

	t10 = ((x41/x42)<(x43<x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 22U;
	static int16_t x46 = INT16_MIN;
	static int64_t x47 = -1LL;
	volatile uint16_t x48 = 13934U;
	int32_t t11 = -24;

	t11 = ((x45/x46)<(x47<x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 7713U;
	int16_t x50 = INT16_MIN;
	static volatile int32_t x51 = -1;
	int8_t x52 = INT8_MIN;
	int32_t t12 = -2203579;

	t12 = ((x49/x50)<(x51<x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -1;
	int32_t x54 = -992695;
	int64_t x55 = -2865254494372014321LL;
	int8_t x56 = INT8_MAX;

	t13 = ((x53/x54)<(x55<x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = INT16_MAX;
	static int16_t x58 = INT16_MIN;
	static int64_t x59 = -1LL;
	int8_t x60 = -8;
	int32_t t14 = 446;

	t14 = ((x57/x58)<(x59<x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x62 = INT64_MIN;
	volatile int16_t x63 = -96;
	uint16_t x64 = 2U;
	volatile int32_t t15 = 3779182;

	t15 = ((x61/x62)<(x63<x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -1;
	volatile uint16_t x66 = UINT16_MAX;
	int32_t x67 = -1;
	volatile uint8_t x68 = UINT8_MAX;
	static volatile int32_t t16 = -507276059;

	t16 = ((x65/x66)<(x67<x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = 0LL;
	volatile uint16_t x70 = 3716U;
	uint8_t x71 = UINT8_MAX;
	static volatile int32_t x72 = -1694037;
	int32_t t17 = -122627;

	t17 = ((x69/x70)<(x71<x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 28249U;
	volatile uint8_t x74 = 6U;
	int64_t x75 = INT64_MAX;
	int32_t t18 = -1837;

	t18 = ((x73/x74)<(x75<x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile int32_t x78 = INT32_MAX;
	int32_t x79 = INT32_MIN;
	uint64_t x80 = UINT64_MAX;
	volatile int32_t t19 = 13610;

	t19 = ((x77/x78)<(x79<x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x82 = 3909820256634341LLU;
	int64_t x83 = INT64_MIN;
	uint32_t x84 = 172U;
	volatile int32_t t20 = 50052507;

	t20 = ((x81/x82)<(x83<x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x86 = INT16_MAX;
	volatile uint16_t x87 = 9679U;
	volatile int32_t t21 = -1;

	t21 = ((x85/x86)<(x87<x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = INT16_MAX;
	static uint8_t x90 = UINT8_MAX;
	int8_t x91 = 0;
	int32_t x92 = -640;
	static volatile int32_t t22 = 14631;

	t22 = ((x89/x90)<(x91<x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x93 = 9487U;
	static int16_t x96 = -1;
	int32_t t23 = -19047;

	t23 = ((x93/x94)<(x95<x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = 20;
	static uint8_t x100 = UINT8_MAX;

	t24 = ((x97/x98)<(x99<x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x102 = -1;
	volatile int32_t t25 = 399;

	t25 = ((x101/x102)<(x103<x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MAX;
	int16_t x106 = -1;
	uint16_t x108 = UINT16_MAX;
	int32_t t26 = -943249;

	t26 = ((x105/x106)<(x107<x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = INT8_MIN;
	uint16_t x111 = UINT16_MAX;
	int64_t x112 = INT64_MAX;

	t27 = ((x109/x110)<(x111<x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x113 = 385U;
	int8_t x114 = INT8_MAX;
	static volatile int16_t x116 = -1;

	t28 = ((x113/x114)<(x115<x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x119 = 81U;
	int32_t x120 = 3031;
	static volatile int32_t t29 = 31160579;

	t29 = ((x117/x118)<(x119<x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MAX;
	int8_t x122 = -1;
	int32_t x123 = -1;
	volatile uint64_t x124 = 108681382466LLU;

	t30 = ((x121/x122)<(x123<x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x129 = -2664422652778LL;
	static int16_t x130 = INT16_MIN;
	static volatile int32_t x131 = INT32_MIN;

	t31 = ((x129/x130)<(x131<x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x133 = -1LL;
	uint32_t x134 = 34899132U;
	int64_t x135 = INT64_MIN;
	int64_t x136 = INT64_MIN;
	int32_t t32 = 99275015;

	t32 = ((x133/x134)<(x135<x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile int16_t x137 = -1;
	static int32_t x138 = -1;
	int16_t x139 = INT16_MAX;
	int32_t x140 = 1;

	t33 = ((x137/x138)<(x139<x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1LL;
	static int32_t x144 = INT32_MIN;
	int32_t t34 = 0;

	t34 = ((x141/x142)<(x143<x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = INT16_MIN;
	int16_t x146 = INT16_MIN;
	int16_t x147 = -19;
	int32_t x148 = INT32_MAX;
	static volatile int32_t t35 = -30;

	t35 = ((x145/x146)<(x147<x148));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	uint32_t x150 = 12484899U;
	int8_t x151 = INT8_MAX;
	uint16_t x152 = 1U;
	int32_t t36 = -2451;

	t36 = ((x149/x150)<(x151<x152));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = UINT32_MAX;
	int32_t x154 = INT32_MAX;
	static int16_t x155 = 3;
	static volatile int32_t t37 = 194603;

	t37 = ((x153/x154)<(x155<x156));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x157 = 3U;
	static int8_t x158 = -53;
	uint8_t x159 = UINT8_MAX;
	int32_t x160 = -1;
	static volatile int32_t t38 = 3970227;

	t38 = ((x157/x158)<(x159<x160));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x169 = INT64_MAX;
	static uint16_t x170 = 23U;
	int8_t x171 = -26;
	volatile int8_t x172 = INT8_MAX;
	static int32_t t39 = -223102;

	t39 = ((x169/x170)<(x171<x172));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x173 = -1LL;
	int64_t x174 = -1LL;
	int16_t x176 = INT16_MIN;
	static volatile int32_t t40 = -16125;

	t40 = ((x173/x174)<(x175<x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = INT32_MIN;
	uint8_t x182 = 1U;
	static uint16_t x183 = UINT16_MAX;
	uint8_t x184 = 4U;
	static int32_t t41 = 111154;

	t41 = ((x181/x182)<(x183<x184));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x185 = 447215503;
	static int16_t x186 = -4001;
	int64_t x187 = INT64_MAX;
	int16_t x188 = INT16_MAX;

	t42 = ((x185/x186)<(x187<x188));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = -1LL;
	int32_t x190 = -1316576;
	int8_t x191 = INT8_MIN;
	static volatile int32_t t43 = -3;

	t43 = ((x189/x190)<(x191<x192));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x197 = INT16_MAX;
	volatile uint64_t x198 = UINT64_MAX;
	uint16_t x199 = 3216U;
	int32_t x200 = -1;
	static int32_t t44 = 11072897;

	t44 = ((x197/x198)<(x199<x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = INT64_MAX;
	static uint8_t x202 = 2U;
	volatile uint32_t x203 = UINT32_MAX;
	int8_t x204 = -9;
	volatile int32_t t45 = 1468205;

	t45 = ((x201/x202)<(x203<x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x205 = -9532853;
	static uint64_t x206 = 2624194907506LLU;
	volatile int64_t x207 = -31293096254002LL;
	int8_t x208 = -7;

	t46 = ((x205/x206)<(x207<x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x209 = INT8_MAX;
	int64_t x211 = INT64_MIN;
	int16_t x212 = INT16_MIN;
	static volatile int32_t t47 = 285;

	t47 = ((x209/x210)<(x211<x212));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x213 = -121902357;
	int64_t x214 = INT64_MIN;
	int64_t x215 = INT64_MAX;
	static volatile int32_t t48 = -37922310;

	t48 = ((x213/x214)<(x215<x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x217 = UINT8_MAX;
	int8_t x218 = INT8_MAX;
	static uint64_t x219 = UINT64_MAX;
	static uint64_t x220 = UINT64_MAX;
	volatile int32_t t49 = -16028370;

	t49 = ((x217/x218)<(x219<x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x222 = 444959192;
	int16_t x224 = INT16_MIN;
	volatile int32_t t50 = 4;

	t50 = ((x221/x222)<(x223<x224));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x225 = 7;
	uint64_t x226 = UINT64_MAX;
	int64_t x227 = -196261442908129LL;
	int64_t x228 = 238183970707142721LL;
	static int32_t t51 = 2382;

	t51 = ((x225/x226)<(x227<x228));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x229 = -367;
	int64_t x230 = INT64_MAX;
	int8_t x231 = -1;
	volatile int32_t x232 = -1;
	volatile int32_t t52 = -3;

	t52 = ((x229/x230)<(x231<x232));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x233 = INT64_MIN;
	uint16_t x234 = 229U;
	int64_t x235 = INT64_MAX;
	int16_t x236 = INT16_MAX;
	volatile int32_t t53 = -3;

	t53 = ((x233/x234)<(x235<x236));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x237 = -16490201LL;
	uint64_t x238 = 16321633609LLU;
	int8_t x239 = -1;
	int16_t x240 = -314;
	int32_t t54 = 74;

	t54 = ((x237/x238)<(x239<x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x241 = INT16_MIN;
	int8_t x243 = INT8_MAX;
	uint64_t x244 = 2731574865LLU;
	int32_t t55 = -1584;

	t55 = ((x241/x242)<(x243<x244));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x245 = 1U;
	int8_t x246 = 5;
	volatile int16_t x247 = -238;
	int32_t x248 = -24985822;
	int32_t t56 = 306449;

	t56 = ((x245/x246)<(x247<x248));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x249 = INT16_MIN;
	volatile int64_t x250 = INT64_MAX;
	int8_t x252 = -38;
	int32_t t57 = -4;

	t57 = ((x249/x250)<(x251<x252));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x257 = 28841977703LLU;
	volatile int64_t x258 = -1LL;
	static int16_t x259 = INT16_MAX;
	int32_t x260 = 7;
	static volatile int32_t t58 = 3;

	t58 = ((x257/x258)<(x259<x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint16_t x261 = 301U;
	uint64_t x262 = 12LLU;
	int16_t x263 = 3913;
	int64_t x264 = INT64_MIN;
	int32_t t59 = 9461557;

	t59 = ((x261/x262)<(x263<x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x266 = 1470413LLU;
	int8_t x267 = -31;
	int32_t x268 = -38614;
	volatile int32_t t60 = -261236386;

	t60 = ((x265/x266)<(x267<x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x269 = INT16_MAX;
	static int8_t x270 = INT8_MIN;
	volatile uint32_t x271 = UINT32_MAX;

	t61 = ((x269/x270)<(x271<x272));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x273 = -1;
	uint32_t x274 = UINT32_MAX;
	static uint64_t x276 = UINT64_MAX;
	int32_t t62 = 4;

	t62 = ((x273/x274)<(x275<x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x277 = INT64_MIN;
	int16_t x278 = INT16_MIN;
	uint32_t x279 = 196389U;
	int32_t t63 = -31393;

	t63 = ((x277/x278)<(x279<x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x281 = UINT8_MAX;
	static uint64_t x282 = UINT64_MAX;
	int32_t x283 = 265788218;
	int16_t x284 = 6245;
	int32_t t64 = 98071534;

	t64 = ((x281/x282)<(x283<x284));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x286 = UINT8_MAX;
	volatile int32_t t65 = 79927540;

	t65 = ((x285/x286)<(x287<x288));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x289 = 0;
	int8_t x290 = 19;
	uint64_t x291 = 1786284LLU;
	uint16_t x292 = 16U;

	t66 = ((x289/x290)<(x291<x292));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint8_t x293 = UINT8_MAX;
	static int64_t x294 = INT64_MIN;
	int64_t x295 = INT64_MIN;

	t67 = ((x293/x294)<(x295<x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint8_t x298 = 3U;
	int16_t x300 = INT16_MIN;
	int32_t t68 = 11277909;

	t68 = ((x297/x298)<(x299<x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x301 = INT8_MIN;
	static int64_t x302 = 32290871383LL;
	int8_t x304 = -45;
	volatile int32_t t69 = -131789173;

	t69 = ((x301/x302)<(x303<x304));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x305 = INT8_MAX;
	static volatile int8_t x307 = INT8_MIN;
	int32_t x308 = INT32_MIN;
	volatile int32_t t70 = 228780934;

	t70 = ((x305/x306)<(x307<x308));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x309 = INT64_MIN;
	volatile uint8_t x310 = 2U;
	int16_t x311 = INT16_MIN;
	volatile int32_t t71 = 0;

	t71 = ((x309/x310)<(x311<x312));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x313 = 600LLU;
	int32_t x314 = -163071;
	uint8_t x315 = 2U;
	int32_t x316 = 1;
	volatile int32_t t72 = -7725;

	t72 = ((x313/x314)<(x315<x316));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x317 = INT64_MIN;
	uint16_t x319 = 51U;

	t73 = ((x317/x318)<(x319<x320));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x321 = -1;
	int8_t x322 = 46;
	volatile int16_t x323 = -15;
	volatile int32_t x324 = INT32_MIN;
	volatile int32_t t74 = 117523357;

	t74 = ((x321/x322)<(x323<x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x326 = UINT32_MAX;
	int16_t x327 = INT16_MIN;
	int16_t x328 = -1;
	int32_t t75 = -1;

	t75 = ((x325/x326)<(x327<x328));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x329 = 17;
	int32_t x330 = INT32_MIN;
	int64_t x331 = INT64_MIN;
	uint8_t x332 = UINT8_MAX;
	int32_t t76 = 1;

	t76 = ((x329/x330)<(x331<x332));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static volatile int16_t x335 = INT16_MIN;
	volatile int16_t x336 = INT16_MIN;
	volatile int32_t t77 = -3795177;

	t77 = ((x333/x334)<(x335<x336));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x337 = 1945673U;
	uint32_t x338 = UINT32_MAX;
	static int16_t x340 = -1;
	volatile int32_t t78 = -103352;

	t78 = ((x337/x338)<(x339<x340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x341 = 31540;
	volatile int8_t x342 = INT8_MIN;
	volatile uint32_t x344 = 872706U;
	volatile int32_t t79 = -188905;

	t79 = ((x341/x342)<(x343<x344));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x346 = -1LL;
	int8_t x347 = INT8_MAX;
	int64_t x348 = INT64_MAX;
	static volatile int32_t t80 = -96538;

	t80 = ((x345/x346)<(x347<x348));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x351 = INT64_MIN;
	int16_t x352 = INT16_MIN;
	int32_t t81 = -203312;

	t81 = ((x349/x350)<(x351<x352));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = -1LL;
	static uint32_t x354 = 234U;
	int32_t x355 = -1;
	static volatile int8_t x356 = INT8_MIN;
	int32_t t82 = 35488;

	t82 = ((x353/x354)<(x355<x356));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x357 = 16U;
	volatile int16_t x358 = INT16_MAX;
	volatile int32_t x359 = -212325;
	static int64_t x360 = INT64_MAX;
	volatile int32_t t83 = -1226695;

	t83 = ((x357/x358)<(x359<x360));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x361 = INT16_MAX;
	int8_t x362 = INT8_MAX;
	static int64_t x363 = -1LL;
	uint32_t x364 = 39U;

	t84 = ((x361/x362)<(x363<x364));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x366 = 713U;
	int64_t x367 = INT64_MIN;
	volatile int32_t x368 = -1;
	volatile int32_t t85 = -396;

	t85 = ((x365/x366)<(x367<x368));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x370 = UINT8_MAX;
	uint64_t x371 = 23426021992LLU;
	static int32_t x372 = INT32_MIN;
	int32_t t86 = 1688749;

	t86 = ((x369/x370)<(x371<x372));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x377 = 4710;
	volatile int32_t x378 = 2786;
	int8_t x379 = -1;
	volatile int32_t t87 = 0;

	t87 = ((x377/x378)<(x379<x380));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x381 = -4477185011176048LL;
	static uint8_t x382 = 20U;
	int32_t x383 = -1;
	int16_t x384 = -1;
	int32_t t88 = -31015;

	t88 = ((x381/x382)<(x383<x384));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x385 = INT64_MAX;
	int16_t x386 = INT16_MIN;

	t89 = ((x385/x386)<(x387<x388));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x389 = 6469U;
	volatile int32_t x390 = -1741710;
	uint64_t x391 = 618964LLU;
	volatile int16_t x392 = INT16_MAX;
	volatile int32_t t90 = -340;

	t90 = ((x389/x390)<(x391<x392));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x393 = 10;
	static int32_t x394 = INT32_MIN;
	int16_t x395 = INT16_MAX;
	int16_t x396 = INT16_MAX;
	volatile int32_t t91 = -13115;

	t91 = ((x393/x394)<(x395<x396));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x397 = UINT16_MAX;
	uint16_t x398 = 27U;
	int32_t x399 = 0;
	uint32_t x400 = 1800270U;
	volatile int32_t t92 = -14;

	t92 = ((x397/x398)<(x399<x400));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x401 = INT32_MAX;
	int16_t x402 = 1075;
	static uint16_t x403 = 1275U;
	uint8_t x404 = UINT8_MAX;
	static volatile int32_t t93 = 352469993;

	t93 = ((x401/x402)<(x403<x404));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x405 = INT16_MIN;
	static volatile uint32_t x406 = UINT32_MAX;
	int64_t x407 = INT64_MIN;
	volatile int32_t t94 = 249296;

	t94 = ((x405/x406)<(x407<x408));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x409 = INT16_MIN;
	volatile uint32_t x410 = 25518U;
	static int16_t x411 = INT16_MIN;
	uint16_t x412 = 7932U;

	t95 = ((x409/x410)<(x411<x412));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x413 = 1U;
	static int64_t x414 = -1LL;
	int64_t x416 = INT64_MAX;
	int32_t t96 = -1;

	t96 = ((x413/x414)<(x415<x416));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x419 = UINT16_MAX;
	int64_t x420 = 0LL;
	int32_t t97 = 7;

	t97 = ((x417/x418)<(x419<x420));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = INT16_MIN;
	uint32_t x422 = 102547079U;
	volatile int64_t x423 = INT64_MIN;
	int16_t x424 = -2;
	static volatile int32_t t98 = -300020;

	t98 = ((x421/x422)<(x423<x424));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x425 = 20183U;
	int16_t x426 = 3;
	int16_t x427 = -1;
	int64_t x428 = -2LL;
	int32_t t99 = 316558615;

	t99 = ((x425/x426)<(x427<x428));

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
