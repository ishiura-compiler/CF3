#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x5 = 5;
int16_t x7 = INT16_MAX;
int16_t x10 = INT16_MIN;
int64_t x14 = 2021167447061425LL;
static uint8_t x16 = 85U;
int8_t x19 = INT8_MIN;
volatile int32_t t4 = -29;
static uint16_t x22 = 7452U;
int16_t x24 = INT16_MAX;
int32_t x25 = -1;
static int32_t x29 = 4997;
uint8_t x30 = 124U;
uint16_t x44 = UINT16_MAX;
int32_t t9 = -13;
int32_t x46 = INT32_MIN;
uint8_t x47 = 44U;
int8_t x57 = INT8_MAX;
volatile int32_t t12 = -22265;
uint32_t x64 = UINT32_MAX;
static volatile int32_t t17 = -1059;
int32_t t19 = -16766601;
int32_t t20 = -13297366;
volatile int8_t x101 = INT8_MAX;
volatile uint32_t x106 = UINT32_MAX;
static int32_t t22 = 17595177;
int32_t x115 = INT32_MIN;
volatile int32_t t24 = -111334;
static volatile int32_t t27 = -266;
uint16_t x129 = UINT16_MAX;
volatile int64_t x137 = -3916497678988491LL;
volatile int32_t t32 = 58655;
static volatile uint8_t x149 = UINT8_MAX;
volatile uint32_t x155 = 3300050U;
uint64_t x163 = 1604542848LLU;
int32_t x164 = 93546177;
static volatile int8_t x165 = INT8_MIN;
int32_t x168 = INT32_MIN;
uint8_t x176 = 0U;
static int32_t t38 = -136;
volatile int64_t x179 = -3945398082848566693LL;
volatile int16_t x186 = -1;
int32_t x187 = -27691;
static int32_t x191 = -1;
static volatile int32_t t44 = 504841037;
int64_t x205 = -12347595521LL;
int64_t x206 = INT64_MAX;
static uint64_t x208 = UINT64_MAX;
uint32_t x209 = 107720151U;
int32_t t46 = 355299802;
int8_t x216 = 1;
static volatile int32_t t48 = -90;
int8_t x223 = 0;
volatile int8_t x225 = INT8_MIN;
int64_t x228 = INT64_MIN;
int16_t x236 = -1;
uint8_t x242 = UINT8_MAX;
volatile int32_t t54 = 3327085;
int16_t x247 = -1;
int32_t t55 = 1782;
volatile int32_t t56 = 1;
volatile int64_t x254 = INT64_MAX;
volatile int32_t t59 = 48881906;
static volatile int8_t x265 = -1;
int16_t x269 = -11;
int32_t t61 = 1;
int64_t x276 = INT64_MAX;
uint32_t x278 = 2532U;
static int32_t t63 = 339;
volatile int32_t x281 = INT32_MIN;
volatile int16_t x285 = 673;
int16_t x292 = INT16_MIN;
static int32_t x302 = INT32_MAX;
static int64_t x304 = INT64_MIN;
int16_t x307 = INT16_MAX;
static volatile int32_t t71 = -1;
uint8_t x320 = 10U;
int8_t x321 = INT8_MAX;
volatile int32_t t75 = -132807217;
int16_t x337 = 3;
int8_t x338 = INT8_MAX;
int8_t x341 = -1;
int64_t x356 = INT64_MIN;
int64_t x365 = -251793LL;
static int8_t x374 = INT8_MIN;
int32_t x382 = 21708032;
uint16_t x386 = 25U;
int64_t x388 = -17295977509411LL;
int16_t x390 = -1;
int16_t x399 = INT16_MIN;
static int32_t x405 = INT32_MAX;
int32_t t97 = -7269610;


void f0(void) {
	int16_t x1 = INT16_MIN;
	volatile uint32_t x2 = 20082857U;
	int64_t x3 = -9779044982LL;
	int32_t x4 = INT32_MIN;
	int32_t t0 = 1;

	t0 = ((x1/x2)<=(x3<x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x6 = INT8_MIN;
	static int32_t x8 = INT32_MIN;
	volatile int32_t t1 = -27957;

	t1 = ((x5/x6)<=(x7<x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 2U;
	static uint16_t x11 = UINT16_MAX;
	uint32_t x12 = 25175U;
	static volatile int32_t t2 = -1542321;

	t2 = ((x9/x10)<=(x11<x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int32_t x15 = -72;
	volatile int32_t t3 = 2789;

	t3 = ((x13/x14)<=(x15<x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	static int8_t x18 = -1;
	int64_t x20 = 188312LL;

	t4 = ((x17/x18)<=(x19<x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 453U;
	volatile int64_t x23 = 1745220657648LL;
	static volatile int32_t t5 = 5494012;

	t5 = ((x21/x22)<=(x23<x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -1LL;
	int8_t x27 = INT8_MAX;
	int32_t x28 = -1;
	volatile int32_t t6 = 29505;

	t6 = ((x25/x26)<=(x27<x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x31 = 4LL;
	int32_t x32 = 0;
	static int32_t t7 = 517718078;

	t7 = ((x29/x30)<=(x31<x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint32_t x34 = 15U;
	uint8_t x35 = 18U;
	static uint8_t x36 = 17U;
	int32_t t8 = -125963649;

	t8 = ((x33/x34)<=(x35<x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 388455945U;
	static uint32_t x42 = UINT32_MAX;
	int32_t x43 = -61365;

	t9 = ((x41/x42)<=(x43<x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	int32_t x48 = INT32_MIN;
	volatile int32_t t10 = -4;

	t10 = ((x45/x46)<=(x47<x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 1U;
	int16_t x54 = -1;
	int8_t x55 = INT8_MIN;
	static int16_t x56 = INT16_MIN;
	int32_t t11 = -2;

	t11 = ((x53/x54)<=(x55<x56));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x58 = 1;
	int64_t x59 = INT64_MIN;
	volatile int16_t x60 = INT16_MIN;

	t12 = ((x57/x58)<=(x59<x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x61 = -1;
	int64_t x62 = -1LL;
	volatile int8_t x63 = 1;
	static volatile int32_t t13 = -30;

	t13 = ((x61/x62)<=(x63<x64));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x69 = 13U;
	volatile uint64_t x70 = 20939143492LLU;
	uint32_t x71 = UINT32_MAX;
	int16_t x72 = -1;
	volatile int32_t t14 = -76327695;

	t14 = ((x69/x70)<=(x71<x72));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x73 = INT16_MAX;
	uint64_t x74 = 126435608LLU;
	int8_t x75 = 3;
	volatile uint64_t x76 = 3147650LLU;
	static volatile int32_t t15 = -135378709;

	t15 = ((x73/x74)<=(x75<x76));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = INT64_MAX;
	int32_t x78 = 10;
	int16_t x79 = INT16_MIN;
	volatile int16_t x80 = INT16_MAX;
	static int32_t t16 = -1;

	t16 = ((x77/x78)<=(x79<x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint8_t x81 = 1U;
	int64_t x82 = 1572311355672684LL;
	static volatile int8_t x83 = -6;
	int64_t x84 = -1LL;

	t17 = ((x81/x82)<=(x83<x84));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = 29;
	uint16_t x86 = 3U;
	int64_t x87 = 10LL;
	static int8_t x88 = INT8_MIN;
	int32_t t18 = 6100274;

	t18 = ((x85/x86)<=(x87<x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x93 = INT16_MAX;
	volatile int16_t x94 = INT16_MAX;
	static int8_t x95 = -3;
	int64_t x96 = -159731247410037LL;

	t19 = ((x93/x94)<=(x95<x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x97 = INT64_MIN;
	int8_t x98 = INT8_MIN;
	int64_t x99 = 2241LL;
	static int8_t x100 = -1;

	t20 = ((x97/x98)<=(x99<x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x102 = INT8_MAX;
	int32_t x103 = INT32_MIN;
	int16_t x104 = INT16_MIN;
	volatile int32_t t21 = -36;

	t21 = ((x101/x102)<=(x103<x104));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x105 = 3292U;
	int16_t x107 = INT16_MIN;
	int32_t x108 = INT32_MAX;

	t22 = ((x105/x106)<=(x107<x108));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x109 = 397U;
	static volatile uint16_t x110 = 3486U;
	int32_t x111 = -1;
	volatile uint64_t x112 = 10311493202LLU;
	static int32_t t23 = -6202;

	t23 = ((x109/x110)<=(x111<x112));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x113 = 47U;
	int64_t x114 = INT64_MIN;
	static int32_t x116 = INT32_MAX;

	t24 = ((x113/x114)<=(x115<x116));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x117 = -1234858;
	int16_t x118 = INT16_MIN;
	uint8_t x119 = 2U;
	uint16_t x120 = 254U;
	int32_t t25 = 136217097;

	t25 = ((x117/x118)<=(x119<x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 2U;
	static int32_t x122 = INT32_MIN;
	volatile int64_t x123 = -8429585390LL;
	int32_t x124 = 256175638;
	static volatile int32_t t26 = -20;

	t26 = ((x121/x122)<=(x123<x124));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x125 = -1;
	int32_t x126 = INT32_MIN;
	int64_t x127 = -4251634528LL;
	uint32_t x128 = 8070836U;

	t27 = ((x125/x126)<=(x127<x128));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x130 = 3199LL;
	int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MIN;
	volatile int32_t t28 = -147018;

	t28 = ((x129/x130)<=(x131<x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = 3267453;
	int16_t x134 = -3592;
	uint64_t x135 = 76046398502LLU;
	uint64_t x136 = UINT64_MAX;
	static volatile int32_t t29 = -500169367;

	t29 = ((x133/x134)<=(x135<x136));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x138 = 66586185;
	int16_t x139 = -1;
	volatile int16_t x140 = INT16_MAX;
	static int32_t t30 = 300669616;

	t30 = ((x137/x138)<=(x139<x140));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x141 = INT16_MIN;
	int64_t x142 = INT64_MIN;
	int64_t x143 = INT64_MIN;
	int64_t x144 = -1LL;
	volatile int32_t t31 = 57308;

	t31 = ((x141/x142)<=(x143<x144));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	static uint8_t x145 = 11U;
	int8_t x146 = INT8_MAX;
	uint8_t x147 = 24U;
	int32_t x148 = INT32_MIN;

	t32 = ((x145/x146)<=(x147<x148));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x150 = 39;
	static int16_t x151 = INT16_MAX;
	int16_t x152 = INT16_MIN;
	volatile int32_t t33 = 0;

	t33 = ((x149/x150)<=(x151<x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x153 = -1;
	uint16_t x154 = 1984U;
	uint16_t x156 = 0U;
	int32_t t34 = -2926628;

	t34 = ((x153/x154)<=(x155<x156));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x157 = INT32_MIN;
	uint64_t x158 = 4935LLU;
	static uint8_t x159 = 0U;
	int16_t x160 = INT16_MIN;
	int32_t t35 = 5878392;

	t35 = ((x157/x158)<=(x159<x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x161 = 3U;
	int8_t x162 = INT8_MIN;
	int32_t t36 = 9;

	t36 = ((x161/x162)<=(x163<x164));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x166 = -1LL;
	int16_t x167 = 2;
	int32_t t37 = -33;

	t37 = ((x165/x166)<=(x167<x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x173 = 20U;
	volatile uint32_t x174 = UINT32_MAX;
	volatile int32_t x175 = INT32_MAX;

	t38 = ((x173/x174)<=(x175<x176));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x177 = 9U;
	int32_t x178 = INT32_MIN;
	int8_t x180 = INT8_MIN;
	volatile int32_t t39 = 1;

	t39 = ((x177/x178)<=(x179<x180));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x181 = UINT8_MAX;
	int8_t x182 = INT8_MIN;
	int32_t x183 = INT32_MIN;
	int8_t x184 = -1;
	volatile int32_t t40 = -4705132;

	t40 = ((x181/x182)<=(x183<x184));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x185 = 19;
	volatile int8_t x188 = INT8_MIN;
	int32_t t41 = 11371;

	t41 = ((x185/x186)<=(x187<x188));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x189 = 33854106528LLU;
	int8_t x190 = -1;
	volatile int64_t x192 = INT64_MIN;
	volatile int32_t t42 = -846922;

	t42 = ((x189/x190)<=(x191<x192));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x197 = 633015;
	int8_t x198 = -13;
	uint8_t x199 = 1U;
	static volatile int64_t x200 = INT64_MIN;
	volatile int32_t t43 = -1497;

	t43 = ((x197/x198)<=(x199<x200));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x201 = -1LL;
	volatile int32_t x202 = 522967;
	static int8_t x203 = INT8_MIN;
	int32_t x204 = INT32_MIN;

	t44 = ((x201/x202)<=(x203<x204));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x207 = 1251872LLU;
	int32_t t45 = 1185;

	t45 = ((x205/x206)<=(x207<x208));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x210 = INT8_MAX;
	volatile int16_t x211 = -1;
	static int32_t x212 = 37;

	t46 = ((x209/x210)<=(x211<x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = 21;
	static int64_t x214 = -1376334LL;
	int16_t x215 = INT16_MIN;
	int32_t t47 = 0;

	t47 = ((x213/x214)<=(x215<x216));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x217 = INT64_MIN;
	uint16_t x218 = UINT16_MAX;
	static int32_t x219 = -12286;
	int8_t x220 = -1;

	t48 = ((x217/x218)<=(x219<x220));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x221 = 112;
	volatile uint8_t x222 = 14U;
	uint16_t x224 = UINT16_MAX;
	int32_t t49 = -345857184;

	t49 = ((x221/x222)<=(x223<x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x226 = INT8_MAX;
	int32_t x227 = INT32_MIN;
	volatile int32_t t50 = -1;

	t50 = ((x225/x226)<=(x227<x228));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x229 = 1462790233172092LL;
	uint16_t x230 = 16263U;
	int64_t x231 = INT64_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t51 = 3476;

	t51 = ((x229/x230)<=(x231<x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x233 = 26876U;
	int32_t x234 = 31122252;
	volatile int8_t x235 = INT8_MIN;
	volatile int32_t t52 = -1230;

	t52 = ((x233/x234)<=(x235<x236));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x237 = -5246360;
	uint32_t x238 = 1910004U;
	static uint16_t x239 = 103U;
	int16_t x240 = 2;
	int32_t t53 = 1;

	t53 = ((x237/x238)<=(x239<x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x241 = INT32_MIN;
	int16_t x243 = INT16_MIN;
	int64_t x244 = INT64_MIN;

	t54 = ((x241/x242)<=(x243<x244));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x245 = INT64_MIN;
	int32_t x246 = 12644;
	static uint64_t x248 = 106LLU;

	t55 = ((x245/x246)<=(x247<x248));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x249 = INT8_MAX;
	int32_t x250 = INT32_MAX;
	int16_t x251 = INT16_MIN;
	int8_t x252 = INT8_MIN;

	t56 = ((x249/x250)<=(x251<x252));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x253 = 10U;
	static uint16_t x255 = UINT16_MAX;
	static uint16_t x256 = UINT16_MAX;
	volatile int32_t t57 = 2864304;

	t57 = ((x253/x254)<=(x255<x256));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x257 = -236568LL;
	volatile int64_t x258 = 989163701249601LL;
	volatile int16_t x259 = -1;
	int32_t x260 = -535523525;
	volatile int32_t t58 = -26;

	t58 = ((x257/x258)<=(x259<x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x261 = 88;
	static int8_t x262 = 9;
	int8_t x263 = INT8_MIN;
	int16_t x264 = INT16_MIN;

	t59 = ((x261/x262)<=(x263<x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x266 = 16927;
	int32_t x267 = -1;
	int16_t x268 = 3167;
	int32_t t60 = -14785304;

	t60 = ((x265/x266)<=(x267<x268));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x270 = INT16_MIN;
	int32_t x271 = -1;
	static uint32_t x272 = 14456U;

	t61 = ((x269/x270)<=(x271<x272));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x273 = -3423051335LL;
	static int32_t x274 = -1;
	volatile int64_t x275 = -1LL;
	int32_t t62 = 466078102;

	t62 = ((x273/x274)<=(x275<x276));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x277 = INT32_MAX;
	volatile int32_t x279 = -1;
	static int64_t x280 = 8712LL;

	t63 = ((x277/x278)<=(x279<x280));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x282 = 1;
	int16_t x283 = -3;
	int8_t x284 = -1;
	volatile int32_t t64 = 1200768;

	t64 = ((x281/x282)<=(x283<x284));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x286 = INT32_MAX;
	int32_t x287 = 20781;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t65 = -25;

	t65 = ((x285/x286)<=(x287<x288));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x289 = -1;
	int32_t x290 = -1417934;
	volatile int16_t x291 = INT16_MIN;
	int32_t t66 = 424212245;

	t66 = ((x289/x290)<=(x291<x292));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x293 = INT64_MAX;
	volatile int32_t x294 = 4778395;
	volatile uint8_t x295 = 19U;
	int32_t x296 = INT32_MAX;
	volatile int32_t t67 = 3;

	t67 = ((x293/x294)<=(x295<x296));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x297 = 110507851U;
	volatile int8_t x298 = 11;
	static uint64_t x299 = 317067LLU;
	uint16_t x300 = 534U;
	volatile int32_t t68 = 9;

	t68 = ((x297/x298)<=(x299<x300));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x301 = INT16_MIN;
	int8_t x303 = -63;
	static volatile int32_t t69 = 419;

	t69 = ((x301/x302)<=(x303<x304));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x305 = 10U;
	volatile int32_t x306 = INT32_MAX;
	static volatile uint64_t x308 = 191803048066733699LLU;
	volatile int32_t t70 = -7;

	t70 = ((x305/x306)<=(x307<x308));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = -2;
	int32_t x310 = INT32_MIN;
	int32_t x311 = 17437592;
	volatile int32_t x312 = INT32_MAX;

	t71 = ((x309/x310)<=(x311<x312));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int64_t x313 = 94LL;
	int8_t x314 = -1;
	static int32_t x315 = INT32_MIN;
	int16_t x316 = 0;
	int32_t t72 = -60315601;

	t72 = ((x313/x314)<=(x315<x316));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x317 = UINT64_MAX;
	int8_t x318 = INT8_MIN;
	int16_t x319 = INT16_MIN;
	volatile int32_t t73 = -13;

	t73 = ((x317/x318)<=(x319<x320));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint64_t x322 = 3LLU;
	volatile uint8_t x323 = 8U;
	volatile int8_t x324 = INT8_MIN;
	volatile int32_t t74 = -147131096;

	t74 = ((x321/x322)<=(x323<x324));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x325 = INT8_MIN;
	static int64_t x326 = INT64_MAX;
	int8_t x327 = -1;
	int32_t x328 = -24;

	t75 = ((x325/x326)<=(x327<x328));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int32_t x329 = INT32_MIN;
	uint32_t x330 = 539006U;
	int8_t x331 = INT8_MAX;
	static int64_t x332 = -109756517LL;
	static int32_t t76 = 50;

	t76 = ((x329/x330)<=(x331<x332));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x333 = INT16_MIN;
	static int32_t x334 = 1;
	uint16_t x335 = 187U;
	int16_t x336 = INT16_MIN;
	static int32_t t77 = 368850389;

	t77 = ((x333/x334)<=(x335<x336));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x339 = INT8_MAX;
	static volatile int16_t x340 = INT16_MIN;
	volatile int32_t t78 = 132;

	t78 = ((x337/x338)<=(x339<x340));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x342 = 2U;
	int32_t x343 = -1;
	static int32_t x344 = -1;
	static volatile int32_t t79 = 3;

	t79 = ((x341/x342)<=(x343<x344));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x345 = 2;
	volatile int64_t x346 = 239LL;
	int64_t x347 = -4144111466408LL;
	int32_t x348 = INT32_MAX;
	static int32_t t80 = -11592217;

	t80 = ((x345/x346)<=(x347<x348));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x349 = UINT8_MAX;
	static int64_t x350 = -1LL;
	int8_t x351 = -27;
	int32_t x352 = -2;
	int32_t t81 = -45;

	t81 = ((x349/x350)<=(x351<x352));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x353 = -3080824226LL;
	static int32_t x354 = INT32_MAX;
	int16_t x355 = 0;
	volatile int32_t t82 = -86812652;

	t82 = ((x353/x354)<=(x355<x356));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x357 = INT32_MIN;
	int32_t x358 = 3;
	int16_t x359 = -1;
	uint16_t x360 = 0U;
	int32_t t83 = -40846596;

	t83 = ((x357/x358)<=(x359<x360));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x361 = INT64_MAX;
	int64_t x362 = INT64_MIN;
	static uint8_t x363 = 0U;
	int32_t x364 = INT32_MAX;
	static volatile int32_t t84 = -2789371;

	t84 = ((x361/x362)<=(x363<x364));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x366 = 5722U;
	volatile int32_t x367 = INT32_MIN;
	int8_t x368 = INT8_MIN;
	int32_t t85 = -2631;

	t85 = ((x365/x366)<=(x367<x368));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x369 = 2LLU;
	volatile int8_t x370 = -1;
	int32_t x371 = -249;
	int8_t x372 = INT8_MIN;
	volatile int32_t t86 = -171306294;

	t86 = ((x369/x370)<=(x371<x372));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x373 = 2;
	static volatile int16_t x375 = INT16_MIN;
	uint16_t x376 = 2103U;
	volatile int32_t t87 = 244;

	t87 = ((x373/x374)<=(x375<x376));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x377 = 7617U;
	uint64_t x378 = UINT64_MAX;
	int32_t x379 = -155;
	static volatile int16_t x380 = -220;
	int32_t t88 = -12429;

	t88 = ((x377/x378)<=(x379<x380));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint8_t x381 = UINT8_MAX;
	static uint8_t x383 = UINT8_MAX;
	int32_t x384 = INT32_MAX;
	static volatile int32_t t89 = -62722066;

	t89 = ((x381/x382)<=(x383<x384));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x385 = 29370763770909LLU;
	volatile uint64_t x387 = UINT64_MAX;
	volatile int32_t t90 = 40938;

	t90 = ((x385/x386)<=(x387<x388));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x389 = -1LL;
	static int16_t x391 = INT16_MIN;
	uint16_t x392 = 21U;
	int32_t t91 = 32753;

	t91 = ((x389/x390)<=(x391<x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x393 = 968387LLU;
	static int32_t x394 = INT32_MIN;
	volatile int64_t x395 = 983698087LL;
	static volatile int16_t x396 = 0;
	volatile int32_t t92 = -76946224;

	t92 = ((x393/x394)<=(x395<x396));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x397 = INT16_MAX;
	volatile int64_t x398 = INT64_MAX;
	int64_t x400 = 1193984LL;
	volatile int32_t t93 = -512;

	t93 = ((x397/x398)<=(x399<x400));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x401 = 2342;
	int32_t x402 = -5;
	int16_t x403 = INT16_MIN;
	volatile uint64_t x404 = 1914637597151421213LLU;
	volatile int32_t t94 = -959562;

	t94 = ((x401/x402)<=(x403<x404));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x406 = INT32_MAX;
	int8_t x407 = INT8_MIN;
	uint64_t x408 = 840072778030839335LLU;
	static int32_t t95 = 1;

	t95 = ((x405/x406)<=(x407<x408));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x409 = -59;
	volatile uint64_t x410 = 4554311644870620LLU;
	int32_t x411 = 1814;
	int16_t x412 = 2699;
	int32_t t96 = 117774;

	t96 = ((x409/x410)<=(x411<x412));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x413 = 3U;
	uint64_t x414 = 123191567LLU;
	static int64_t x415 = INT64_MAX;
	int8_t x416 = -1;

	t97 = ((x413/x414)<=(x415<x416));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x421 = -1;
	int64_t x422 = INT64_MIN;
	int8_t x423 = INT8_MIN;
	static volatile int8_t x424 = -4;
	volatile int32_t t98 = 1;

	t98 = ((x421/x422)<=(x423<x424));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x425 = INT64_MAX;
	int8_t x426 = -1;
	volatile int8_t x427 = INT8_MIN;
	static int32_t x428 = INT32_MIN;
	volatile int32_t t99 = 1116;

	t99 = ((x425/x426)<=(x427<x428));

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

