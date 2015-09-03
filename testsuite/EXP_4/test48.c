#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x5 = 1680400LL;
uint64_t x9 = 292987LLU;
uint8_t x17 = UINT8_MAX;
int32_t x28 = -1;
static volatile int32_t t5 = 0;
int8_t x36 = -1;
int64_t x56 = INT64_MIN;
uint32_t x61 = 2U;
int8_t x65 = INT8_MIN;
uint16_t x66 = 506U;
volatile uint32_t x71 = UINT32_MAX;
int16_t x72 = INT16_MIN;
int32_t t16 = -859970;
int8_t x81 = INT8_MIN;
int32_t t17 = 43585;
volatile uint32_t x90 = 16683716U;
uint32_t x98 = 4U;
volatile int8_t x102 = INT8_MIN;
volatile uint16_t x103 = 222U;
volatile uint16_t x111 = 22U;
int32_t t22 = 0;
uint32_t x113 = UINT32_MAX;
static volatile int32_t t24 = 4629663;
int8_t x122 = INT8_MIN;
uint16_t x125 = 7U;
int32_t x128 = INT32_MIN;
int16_t x145 = -1;
int8_t x147 = INT8_MIN;
volatile uint64_t x151 = 5094136105738015799LLU;
volatile int64_t x153 = -1LL;
int16_t x158 = 0;
int16_t x160 = -1;
int16_t x173 = INT16_MIN;
int64_t x174 = INT64_MIN;
uint32_t x177 = UINT32_MAX;
static volatile uint64_t x180 = 1651546524LLU;
volatile int32_t x181 = INT32_MIN;
uint8_t x189 = 21U;
int8_t x193 = INT8_MAX;
int16_t x194 = -325;
volatile int16_t x197 = INT16_MIN;
uint8_t x200 = 0U;
volatile int32_t t42 = 85922182;
static uint32_t x210 = UINT32_MAX;
int8_t x214 = INT8_MIN;
volatile uint64_t x218 = 966306836LLU;
static int64_t x222 = INT64_MIN;
volatile uint8_t x233 = UINT8_MAX;
int32_t x238 = -48230538;
uint64_t x242 = 9LLU;
int32_t t50 = 15;
volatile uint8_t x250 = 50U;
int16_t x253 = INT16_MIN;
uint8_t x255 = 0U;
int32_t t53 = 0;
int32_t x269 = -566977;
int64_t x271 = 1078971574552LL;
int32_t x281 = 1402;
int16_t x287 = -1;
uint64_t x296 = 5729418584LLU;
int32_t t66 = -121;
int32_t t68 = -1;
int32_t t69 = -332872358;
static uint16_t x345 = UINT16_MAX;
int32_t x350 = INT32_MIN;
static int16_t x359 = INT16_MAX;
int8_t x367 = -2;
uint64_t x368 = 944672483335367LLU;
uint32_t x370 = 533767965U;
uint64_t x379 = 27LLU;
uint32_t x384 = UINT32_MAX;
static volatile int16_t x385 = INT16_MIN;
int8_t x386 = INT8_MIN;
uint32_t x387 = UINT32_MAX;
int32_t x396 = 413102;
static int64_t x397 = INT64_MIN;
int16_t x400 = INT16_MIN;
volatile int16_t x403 = 6601;
static volatile uint32_t x425 = 61101U;
int64_t x428 = -4510283367312871170LL;
uint16_t x429 = 27561U;
int8_t x431 = 0;
volatile int32_t t89 = 3062708;
static volatile int32_t t91 = 8448;
volatile uint64_t x446 = 2213LLU;
int16_t x449 = 4068;
int16_t x450 = INT16_MIN;
int16_t x454 = INT16_MIN;
int16_t x463 = INT16_MIN;
int32_t x470 = INT32_MIN;
int64_t x471 = INT64_MIN;
volatile int32_t t98 = -32452616;
uint32_t x478 = 48952U;


void f0(void) {
	uint8_t x1 = 0U;
	int8_t x2 = -1;
	volatile int8_t x3 = INT8_MAX;
	static volatile int16_t x4 = -195;
	int32_t t0 = -493304;

	t0 = (x1<(x2/(x3+x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	int8_t x7 = INT8_MIN;
	int8_t x8 = 32;
	static int32_t t1 = 0;

	t1 = (x5<(x6/(x7+x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x10 = INT64_MIN;
	int32_t x11 = INT32_MAX;
	int16_t x12 = -1;
	volatile int32_t t2 = -7;

	t2 = (x9<(x10/(x11+x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static int8_t x14 = INT8_MAX;
	int8_t x15 = INT8_MIN;
	volatile uint32_t x16 = 8U;
	int32_t t3 = 33578;

	t3 = (x13<(x14/(x15+x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = INT16_MAX;
	uint8_t x19 = UINT8_MAX;
	int64_t x20 = INT64_MIN;
	int32_t t4 = -16661727;

	t4 = (x17<(x18/(x19+x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint64_t x25 = 2021208210237002003LLU;
	int64_t x26 = INT64_MAX;
	static int16_t x27 = -1;

	t5 = (x25<(x26/(x27+x28)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	int8_t x30 = 15;
	uint16_t x31 = 7192U;
	uint64_t x32 = 176LLU;
	volatile int32_t t6 = 26;

	t6 = (x29<(x30/(x31+x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x33 = 689739735366441LLU;
	uint16_t x34 = 6U;
	int16_t x35 = INT16_MIN;
	volatile int32_t t7 = 6;

	t7 = (x33<(x34/(x35+x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int16_t x41 = -3;
	int16_t x42 = INT16_MIN;
	uint8_t x43 = 18U;
	static volatile int8_t x44 = -1;
	int32_t t8 = -148668163;

	t8 = (x41<(x42/(x43+x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = INT8_MIN;
	int32_t x47 = INT32_MIN;
	int64_t x48 = 1939936375LL;
	int32_t t9 = -4469;

	t9 = (x45<(x46/(x47+x48)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x49 = UINT64_MAX;
	int16_t x50 = -1;
	volatile int64_t x51 = -97610942861LL;
	static volatile int16_t x52 = -1;
	volatile int32_t t10 = -24578;

	t10 = (x49<(x50/(x51+x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x53 = -741;
	static volatile int8_t x54 = -1;
	uint8_t x55 = 3U;
	static int32_t t11 = -12513;

	t11 = (x53<(x54/(x55+x56)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x57 = UINT64_MAX;
	int32_t x58 = 14575822;
	uint8_t x59 = 73U;
	int16_t x60 = -1225;
	volatile int32_t t12 = 1655;

	t12 = (x57<(x58/(x59+x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x62 = 12;
	uint8_t x63 = 3U;
	static uint32_t x64 = 527089U;
	static int32_t t13 = -277;

	t13 = (x61<(x62/(x63+x64)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x67 = INT8_MIN;
	int32_t x68 = 33574244;
	volatile int32_t t14 = -26352296;

	t14 = (x65<(x66/(x67+x68)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x69 = -24;
	int64_t x70 = -1LL;
	int32_t t15 = 22;

	t15 = (x69<(x70/(x71+x72)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x77 = 4682U;
	int8_t x78 = INT8_MAX;
	static int32_t x79 = -5317;
	int8_t x80 = INT8_MIN;

	t16 = (x77<(x78/(x79+x80)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int32_t x82 = INT32_MAX;
	int32_t x83 = -157418353;
	static int8_t x84 = 34;

	t17 = (x81<(x82/(x83+x84)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = -19;
	int32_t x91 = 86732;
	int32_t x92 = INT32_MIN;
	int32_t t18 = -249935;

	t18 = (x89<(x90/(x91+x92)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x93 = 7759435LL;
	static int8_t x94 = INT8_MAX;
	uint32_t x95 = 718917685U;
	int16_t x96 = -1;
	int32_t t19 = 1;

	t19 = (x93<(x94/(x95+x96)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x97 = -6;
	int32_t x99 = -248652037;
	uint64_t x100 = UINT64_MAX;
	static volatile int32_t t20 = -23678740;

	t20 = (x97<(x98/(x99+x100)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = 4692;
	uint64_t x104 = 392LLU;
	int32_t t21 = 6961;

	t21 = (x101<(x102/(x103+x104)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x109 = 119U;
	int32_t x110 = INT32_MAX;
	int64_t x112 = -1LL;

	t22 = (x109<(x110/(x111+x112)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x114 = 26;
	int32_t x115 = -1592582;
	static int16_t x116 = -8;
	int32_t t23 = 1708;

	t23 = (x113<(x114/(x115+x116)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x117 = 30296587411LLU;
	uint32_t x118 = 25119U;
	static uint32_t x119 = 15848U;
	static int8_t x120 = INT8_MAX;

	t24 = (x117<(x118/(x119+x120)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x121 = -73667LL;
	int16_t x123 = INT16_MIN;
	int8_t x124 = INT8_MIN;
	int32_t t25 = 64896865;

	t25 = (x121<(x122/(x123+x124)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x126 = UINT16_MAX;
	uint32_t x127 = UINT32_MAX;
	volatile int32_t t26 = 2253017;

	t26 = (x125<(x126/(x127+x128)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint64_t x133 = 7675642587LLU;
	volatile int32_t x134 = -1;
	uint32_t x135 = 57090083U;
	uint16_t x136 = 835U;
	volatile int32_t t27 = -90;

	t27 = (x133<(x134/(x135+x136)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x137 = 5058787;
	volatile int8_t x138 = INT8_MAX;
	uint64_t x139 = 273356831560214284LLU;
	int32_t x140 = -1;
	volatile int32_t t28 = 649;

	t28 = (x137<(x138/(x139+x140)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int16_t x141 = -119;
	volatile int8_t x142 = INT8_MIN;
	uint32_t x143 = 27626087U;
	volatile uint8_t x144 = 1U;
	int32_t t29 = 1799;

	t29 = (x141<(x142/(x143+x144)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x146 = INT32_MIN;
	int16_t x148 = 5737;
	int32_t t30 = -542010;

	t30 = (x145<(x146/(x147+x148)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x149 = INT32_MIN;
	int16_t x150 = 341;
	int32_t x152 = INT32_MIN;
	volatile int32_t t31 = -27175608;

	t31 = (x149<(x150/(x151+x152)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int8_t x154 = -1;
	int8_t x155 = -41;
	static uint8_t x156 = 12U;
	int32_t t32 = 233725;

	t32 = (x153<(x154/(x155+x156)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x157 = -1LL;
	static int64_t x159 = 324367LL;
	int32_t t33 = -40346728;

	t33 = (x157<(x158/(x159+x160)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x161 = -17;
	static int16_t x162 = INT16_MIN;
	volatile uint32_t x163 = 1196U;
	volatile int32_t x164 = INT32_MIN;
	volatile int32_t t34 = 314;

	t34 = (x161<(x162/(x163+x164)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x165 = INT64_MIN;
	int64_t x166 = INT64_MIN;
	static int8_t x167 = -1;
	int16_t x168 = INT16_MAX;
	volatile int32_t t35 = 2669;

	t35 = (x165<(x166/(x167+x168)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x169 = -1;
	int32_t x170 = INT32_MAX;
	int64_t x171 = -1LL;
	uint64_t x172 = 23LLU;
	static int32_t t36 = -431027217;

	t36 = (x169<(x170/(x171+x172)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x175 = INT32_MAX;
	volatile int8_t x176 = INT8_MIN;
	static volatile int32_t t37 = -643944;

	t37 = (x173<(x174/(x175+x176)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint8_t x178 = 124U;
	int16_t x179 = -1;
	volatile int32_t t38 = 39823293;

	t38 = (x177<(x178/(x179+x180)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x182 = 8261298U;
	volatile int64_t x183 = -1LL;
	int32_t x184 = INT32_MAX;
	volatile int32_t t39 = -3083559;

	t39 = (x181<(x182/(x183+x184)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x190 = UINT32_MAX;
	static uint8_t x191 = 11U;
	int64_t x192 = 15284515956723LL;
	volatile int32_t t40 = -116082290;

	t40 = (x189<(x190/(x191+x192)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x195 = -1;
	int8_t x196 = INT8_MIN;
	volatile int32_t t41 = 458472855;

	t41 = (x193<(x194/(x195+x196)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x198 = 667625U;
	int32_t x199 = 18168281;

	t42 = (x197<(x198/(x199+x200)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x201 = -1;
	int16_t x202 = -1;
	static uint8_t x203 = 125U;
	uint32_t x204 = 5722148U;
	int32_t t43 = 3589254;

	t43 = (x201<(x202/(x203+x204)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x209 = 62U;
	int32_t x211 = 6310;
	int32_t x212 = 16;
	volatile int32_t t44 = 79723;

	t44 = (x209<(x210/(x211+x212)));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x213 = 682075197683571595LLU;
	volatile uint8_t x215 = UINT8_MAX;
	int64_t x216 = INT64_MIN;
	volatile int32_t t45 = 1046347566;

	t45 = (x213<(x214/(x215+x216)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x217 = -158LL;
	static volatile int8_t x219 = INT8_MAX;
	uint32_t x220 = 1U;
	volatile int32_t t46 = 65977071;

	t46 = (x217<(x218/(x219+x220)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x221 = UINT64_MAX;
	int16_t x223 = INT16_MIN;
	int16_t x224 = INT16_MIN;
	volatile int32_t t47 = 0;

	t47 = (x221<(x222/(x223+x224)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint32_t x234 = 0U;
	int64_t x235 = INT64_MAX;
	int32_t x236 = INT32_MIN;
	volatile int32_t t48 = 9644;

	t48 = (x233<(x234/(x235+x236)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x237 = INT16_MIN;
	int64_t x239 = INT64_MIN;
	static int64_t x240 = INT64_MAX;
	int32_t t49 = 2903473;

	t49 = (x237<(x238/(x239+x240)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint64_t x241 = 410858LLU;
	int32_t x243 = 990449708;
	volatile uint16_t x244 = UINT16_MAX;

	t50 = (x241<(x242/(x243+x244)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x245 = INT16_MIN;
	int8_t x246 = 1;
	int8_t x247 = INT8_MAX;
	volatile uint32_t x248 = UINT32_MAX;
	volatile int32_t t51 = -3;

	t51 = (x245<(x246/(x247+x248)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x249 = -1;
	static int16_t x251 = -1;
	int32_t x252 = 693;
	int32_t t52 = -2621;

	t52 = (x249<(x250/(x251+x252)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x254 = 1754981U;
	static volatile uint32_t x256 = 65125322U;

	t53 = (x253<(x254/(x255+x256)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x257 = 2254044413414959286LLU;
	int32_t x258 = INT32_MAX;
	int32_t x259 = -4;
	int16_t x260 = 79;
	volatile int32_t t54 = 2033440;

	t54 = (x257<(x258/(x259+x260)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x261 = INT64_MAX;
	static uint32_t x262 = 5286754U;
	static int32_t x263 = -7500054;
	static volatile int8_t x264 = -22;
	volatile int32_t t55 = -516649;

	t55 = (x261<(x262/(x263+x264)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x265 = INT32_MIN;
	int32_t x266 = -1;
	int64_t x267 = 15LL;
	volatile int64_t x268 = INT64_MIN;
	volatile int32_t t56 = -742783491;

	t56 = (x265<(x266/(x267+x268)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x270 = INT8_MAX;
	static int16_t x272 = INT16_MAX;
	int32_t t57 = 243727610;

	t57 = (x269<(x270/(x271+x272)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x273 = INT16_MIN;
	uint32_t x274 = 4215517U;
	int8_t x275 = 12;
	int64_t x276 = -186315795054LL;
	volatile int32_t t58 = 0;

	t58 = (x273<(x274/(x275+x276)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = -1LL;
	volatile uint32_t x278 = 223814U;
	static int64_t x279 = INT64_MIN;
	uint8_t x280 = 4U;
	int32_t t59 = -139;

	t59 = (x277<(x278/(x279+x280)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MIN;
	int32_t x284 = -1;
	volatile int32_t t60 = 3754;

	t60 = (x281<(x282/(x283+x284)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x285 = 5U;
	int16_t x286 = INT16_MIN;
	static uint64_t x288 = 522LLU;
	static volatile int32_t t61 = 300;

	t61 = (x285<(x286/(x287+x288)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x293 = UINT32_MAX;
	int8_t x294 = 0;
	int32_t x295 = 418477732;
	int32_t t62 = 1110276;

	t62 = (x293<(x294/(x295+x296)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x301 = INT16_MIN;
	static volatile uint64_t x302 = UINT64_MAX;
	uint32_t x303 = 311U;
	uint8_t x304 = 0U;
	static volatile int32_t t63 = -2793;

	t63 = (x301<(x302/(x303+x304)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x305 = INT16_MAX;
	uint32_t x306 = 3335U;
	volatile int8_t x307 = -1;
	int16_t x308 = -7;
	volatile int32_t t64 = -123901757;

	t64 = (x305<(x306/(x307+x308)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x309 = -1;
	int16_t x310 = 228;
	static int64_t x311 = 13826LL;
	int16_t x312 = -1;
	volatile int32_t t65 = 499;

	t65 = (x309<(x310/(x311+x312)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x317 = -1LL;
	uint8_t x318 = UINT8_MAX;
	int16_t x319 = INT16_MAX;
	static uint8_t x320 = 100U;

	t66 = (x317<(x318/(x319+x320)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x321 = -18;
	volatile int64_t x322 = 12667LL;
	int16_t x323 = INT16_MIN;
	volatile uint8_t x324 = UINT8_MAX;
	int32_t t67 = -41297;

	t67 = (x321<(x322/(x323+x324)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x325 = UINT16_MAX;
	uint32_t x326 = UINT32_MAX;
	uint32_t x327 = 13096U;
	static uint8_t x328 = 0U;

	t68 = (x325<(x326/(x327+x328)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x333 = INT8_MIN;
	int16_t x334 = INT16_MIN;
	static int8_t x335 = INT8_MIN;
	static int32_t x336 = 1;

	t69 = (x333<(x334/(x335+x336)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x337 = -1402;
	int64_t x338 = INT64_MAX;
	static int8_t x339 = -10;
	int64_t x340 = 6415456936849553LL;
	int32_t t70 = -29379;

	t70 = (x337<(x338/(x339+x340)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x341 = -14;
	int64_t x342 = INT64_MIN;
	uint64_t x343 = 443423956147LLU;
	int8_t x344 = -1;
	volatile int32_t t71 = -116134064;

	t71 = (x341<(x342/(x343+x344)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x346 = -1;
	static volatile uint8_t x347 = 0U;
	int8_t x348 = -14;
	static int32_t t72 = 8;

	t72 = (x345<(x346/(x347+x348)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x349 = INT8_MAX;
	volatile int16_t x351 = INT16_MAX;
	int32_t x352 = -65;
	int32_t t73 = 3976;

	t73 = (x349<(x350/(x351+x352)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint8_t x353 = UINT8_MAX;
	int32_t x354 = 1026119;
	int8_t x355 = INT8_MAX;
	static volatile uint32_t x356 = 6U;
	volatile int32_t t74 = 549673;

	t74 = (x353<(x354/(x355+x356)));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x357 = 0;
	int32_t x358 = INT32_MIN;
	static uint64_t x360 = 219752LLU;
	int32_t t75 = -6409404;

	t75 = (x357<(x358/(x359+x360)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x361 = 7764U;
	uint8_t x362 = UINT8_MAX;
	volatile uint32_t x363 = UINT32_MAX;
	uint32_t x364 = 190530U;
	static int32_t t76 = -1;

	t76 = (x361<(x362/(x363+x364)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x365 = INT16_MIN;
	uint16_t x366 = 3743U;
	int32_t t77 = -5710;

	t77 = (x365<(x366/(x367+x368)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x369 = 650117944LL;
	int16_t x371 = INT16_MIN;
	uint32_t x372 = UINT32_MAX;
	int32_t t78 = -184469;

	t78 = (x369<(x370/(x371+x372)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x373 = -3473;
	int8_t x374 = -58;
	volatile int32_t x375 = -10056651;
	int8_t x376 = 1;
	int32_t t79 = 31860;

	t79 = (x373<(x374/(x375+x376)));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x377 = 9U;
	volatile int16_t x378 = -13;
	int32_t x380 = 1045664744;
	volatile int32_t t80 = 13;

	t80 = (x377<(x378/(x379+x380)));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x381 = INT64_MAX;
	int32_t x382 = INT32_MAX;
	static uint8_t x383 = 22U;
	volatile int32_t t81 = 2027;

	t81 = (x381<(x382/(x383+x384)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x388 = -1;
	int32_t t82 = -7881039;

	t82 = (x385<(x386/(x387+x388)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x393 = UINT32_MAX;
	uint32_t x394 = 122264974U;
	int32_t x395 = -1;
	volatile int32_t t83 = -501298126;

	t83 = (x393<(x394/(x395+x396)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x398 = INT64_MAX;
	uint16_t x399 = 15U;
	int32_t t84 = 8673;

	t84 = (x397<(x398/(x399+x400)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x401 = INT32_MIN;
	int32_t x402 = -1;
	int16_t x404 = 0;
	static int32_t t85 = 3;

	t85 = (x401<(x402/(x403+x404)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x413 = -1;
	uint32_t x414 = UINT32_MAX;
	static uint16_t x415 = UINT16_MAX;
	int32_t x416 = INT32_MIN;
	int32_t t86 = -1677048;

	t86 = (x413<(x414/(x415+x416)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x421 = UINT32_MAX;
	int32_t x422 = INT32_MIN;
	static uint64_t x423 = 740095969761147639LLU;
	int16_t x424 = INT16_MIN;
	static volatile int32_t t87 = -122328;

	t87 = (x421<(x422/(x423+x424)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x426 = 6U;
	uint16_t x427 = 12U;
	int32_t t88 = 3020852;

	t88 = (x425<(x426/(x427+x428)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x430 = INT8_MAX;
	static uint16_t x432 = 2U;

	t89 = (x429<(x430/(x431+x432)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x437 = -1;
	static volatile int16_t x438 = INT16_MIN;
	static int16_t x439 = -1;
	int16_t x440 = INT16_MAX;
	volatile int32_t t90 = 38252;

	t90 = (x437<(x438/(x439+x440)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x441 = INT64_MAX;
	uint64_t x442 = 69595507899138LLU;
	uint32_t x443 = 126815U;
	static int32_t x444 = -1;

	t91 = (x441<(x442/(x443+x444)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x445 = 0;
	uint64_t x447 = UINT64_MAX;
	static uint32_t x448 = 359259880U;
	volatile int32_t t92 = 1;

	t92 = (x445<(x446/(x447+x448)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x451 = 735U;
	uint8_t x452 = 31U;
	int32_t t93 = 546;

	t93 = (x449<(x450/(x451+x452)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x453 = UINT16_MAX;
	volatile uint16_t x455 = UINT16_MAX;
	int64_t x456 = -844LL;
	volatile int32_t t94 = -24;

	t94 = (x453<(x454/(x455+x456)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint32_t x461 = UINT32_MAX;
	int8_t x462 = -1;
	int64_t x464 = -1LL;
	int32_t t95 = -1;

	t95 = (x461<(x462/(x463+x464)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x465 = INT64_MIN;
	static uint32_t x466 = 6650U;
	int8_t x467 = -36;
	int8_t x468 = 0;
	volatile int32_t t96 = -25;

	t96 = (x465<(x466/(x467+x468)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x469 = UINT64_MAX;
	int8_t x472 = INT8_MAX;
	int32_t t97 = 515110202;

	t97 = (x469<(x470/(x471+x472)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint64_t x473 = UINT64_MAX;
	volatile int8_t x474 = 1;
	uint8_t x475 = 0U;
	volatile int8_t x476 = INT8_MAX;

	t98 = (x473<(x474/(x475+x476)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x477 = INT32_MAX;
	uint16_t x479 = 495U;
	volatile int32_t x480 = -8;
	static volatile int32_t t99 = 36558118;

	t99 = (x477<(x478/(x479+x480)));

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

