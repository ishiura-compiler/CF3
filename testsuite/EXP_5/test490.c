#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x4 = INT32_MIN;
static volatile uint8_t x8 = UINT8_MAX;
static volatile int8_t x15 = INT8_MIN;
int64_t x26 = 407LL;
int64_t x31 = -30LL;
int32_t t5 = -56332;
static int64_t x61 = -1LL;
uint8_t x63 = 0U;
int32_t t10 = -71578760;
volatile uint64_t x74 = 195420848439635769LLU;
int16_t x83 = -1;
static int16_t x84 = INT16_MIN;
uint8_t x94 = 0U;
int32_t t15 = -899;
int8_t x114 = INT8_MAX;
volatile int64_t x127 = -1LL;
volatile int32_t t19 = 17577855;
int64_t x156 = INT64_MIN;
static uint16_t x158 = 2U;
static volatile int32_t x166 = INT32_MIN;
uint16_t x175 = 111U;
int32_t t29 = 75;
int32_t x187 = -1;
int32_t x189 = INT32_MIN;
static volatile uint32_t x201 = 3421000U;
uint8_t x223 = UINT8_MAX;
volatile int16_t x234 = INT16_MIN;
int8_t x237 = INT8_MIN;
int64_t x238 = -240692LL;
int16_t x239 = -1;
int8_t x242 = 1;
int8_t x246 = INT8_MIN;
volatile int32_t t43 = 505350;
int32_t t44 = 3034;
uint32_t x265 = UINT32_MAX;
uint16_t x268 = 39U;
static int8_t x269 = -1;
volatile int32_t t46 = 515087337;
static int32_t x281 = -695031;
int64_t x282 = -387LL;
int64_t x283 = -1LL;
uint8_t x289 = 3U;
static int32_t t50 = 7994350;
int8_t x298 = INT8_MAX;
uint32_t x301 = 561103U;
uint8_t x302 = 9U;
int8_t x303 = 3;
int64_t x306 = -53872452664226LL;
static uint8_t x308 = 0U;
int32_t x312 = 9;
int32_t t54 = -403;
volatile int32_t t55 = 1522411;
int32_t x321 = INT32_MIN;
volatile int16_t x324 = -1;
int16_t x333 = 4;
static uint64_t x335 = 159LLU;
uint32_t x338 = 42692418U;
int32_t x365 = -4;
int16_t x372 = 154;
int16_t x376 = -1;
volatile int32_t t64 = 140;
uint16_t x379 = UINT16_MAX;
static int32_t t65 = 1;
int8_t x388 = -1;
int32_t t68 = 1;
static int16_t x409 = INT16_MIN;
int64_t x418 = -1LL;
volatile uint64_t x428 = UINT64_MAX;
uint32_t x430 = 2604035U;
static volatile int32_t t76 = -4076;
uint64_t x443 = UINT64_MAX;
uint16_t x453 = UINT16_MAX;
volatile int32_t t79 = 110339;
int32_t x468 = INT32_MIN;
int32_t x470 = INT32_MAX;
static volatile int32_t t81 = -4141;
static volatile int8_t x482 = INT8_MIN;
int64_t x488 = -1LL;
int32_t t84 = 842728739;
static int16_t x490 = INT16_MIN;
int32_t t85 = 47139;
volatile int16_t x506 = INT16_MAX;
static int32_t t87 = 0;
static int16_t x509 = 529;
static int64_t x516 = -420512904LL;
int32_t t89 = 6;
int16_t x531 = -1;
int32_t t90 = 130058806;
static volatile int16_t x533 = 5;
int16_t x535 = -1;
int16_t x536 = INT16_MIN;
volatile int32_t t91 = -3714;
uint16_t x543 = 16223U;
uint8_t x548 = UINT8_MAX;
static volatile int32_t x550 = INT32_MAX;
int32_t t94 = 122951;
uint32_t x560 = 1027467U;
uint8_t x569 = 41U;
int32_t t97 = 10832;
int32_t x575 = INT32_MIN;
int16_t x578 = INT16_MAX;


void f0(void) {
	uint64_t x1 = 19516760332682LLU;
	int8_t x2 = INT8_MAX;
	static uint32_t x3 = 3U;
	int32_t t0 = 101388930;

	t0 = (x1<((x2*x3)|x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint64_t x5 = 45866914441LLU;
	uint32_t x6 = UINT32_MAX;
	static int32_t x7 = 0;
	int32_t t1 = -4416563;

	t1 = (x5<((x6*x7)|x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x13 = 0U;
	uint32_t x14 = UINT32_MAX;
	int16_t x16 = -1;
	static int32_t t2 = 62086;

	t2 = (x13<((x14*x15)|x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x17 = INT16_MAX;
	int8_t x18 = INT8_MIN;
	int16_t x19 = 1;
	int16_t x20 = -6596;
	int32_t t3 = 926164;

	t3 = (x17<((x18*x19)|x20));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x25 = 693U;
	int32_t x27 = INT32_MIN;
	volatile int16_t x28 = INT16_MIN;
	int32_t t4 = -14949;

	t4 = (x25<((x26*x27)|x28));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = 1758706012225207LL;
	int32_t x30 = -1;
	static int16_t x32 = -1612;

	t5 = (x29<((x30*x31)|x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x33 = INT64_MIN;
	volatile uint8_t x34 = UINT8_MAX;
	uint8_t x35 = 25U;
	int8_t x36 = 1;
	static int32_t t6 = 7490190;

	t6 = (x33<((x34*x35)|x36));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x41 = INT64_MIN;
	static uint32_t x42 = 9320140U;
	volatile int32_t x43 = INT32_MIN;
	volatile int16_t x44 = INT16_MIN;
	static volatile int32_t t7 = 6309130;

	t7 = (x41<((x42*x43)|x44));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MIN;
	static uint64_t x46 = UINT64_MAX;
	uint32_t x47 = UINT32_MAX;
	int32_t x48 = INT32_MAX;
	volatile int32_t t8 = -455753512;

	t8 = (x45<((x46*x47)|x48));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x57 = UINT64_MAX;
	int64_t x58 = -1LL;
	volatile uint8_t x59 = 32U;
	int64_t x60 = INT64_MIN;
	int32_t t9 = -2985;

	t9 = (x57<((x58*x59)|x60));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x62 = -1LL;
	int16_t x64 = -1;

	t10 = (x61<((x62*x63)|x64));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x65 = INT8_MAX;
	int16_t x66 = -30;
	uint64_t x67 = 5461376275LLU;
	int8_t x68 = -1;
	volatile int32_t t11 = -2587;

	t11 = (x65<((x66*x67)|x68));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x73 = INT16_MIN;
	uint64_t x75 = UINT64_MAX;
	int64_t x76 = 1579980460815571282LL;
	static volatile int32_t t12 = -125;

	t12 = (x73<((x74*x75)|x76));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x81 = UINT32_MAX;
	int64_t x82 = -1LL;
	volatile int32_t t13 = 11312;

	t13 = (x81<((x82*x83)|x84));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int16_t x85 = INT16_MAX;
	int16_t x86 = -1;
	volatile uint16_t x87 = UINT16_MAX;
	volatile int8_t x88 = -3;
	volatile int32_t t14 = 619318569;

	t14 = (x85<((x86*x87)|x88));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x93 = -1;
	int64_t x95 = 14926946LL;
	int16_t x96 = -1;

	t15 = (x93<((x94*x95)|x96));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x105 = INT64_MAX;
	volatile int16_t x106 = INT16_MAX;
	int16_t x107 = INT16_MIN;
	int8_t x108 = INT8_MIN;
	int32_t t16 = -692209;

	t16 = (x105<((x106*x107)|x108));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x113 = UINT64_MAX;
	static volatile uint16_t x115 = UINT16_MAX;
	int16_t x116 = INT16_MAX;
	static volatile int32_t t17 = -107119;

	t17 = (x113<((x114*x115)|x116));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x121 = INT16_MAX;
	static uint16_t x122 = 19U;
	int16_t x123 = INT16_MIN;
	int64_t x124 = INT64_MAX;
	int32_t t18 = 201;

	t18 = (x121<((x122*x123)|x124));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x125 = 7884362U;
	uint32_t x126 = UINT32_MAX;
	static int32_t x128 = INT32_MAX;

	t19 = (x125<((x126*x127)|x128));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x133 = INT8_MAX;
	int8_t x134 = INT8_MAX;
	static uint64_t x135 = UINT64_MAX;
	static volatile uint8_t x136 = UINT8_MAX;
	volatile int32_t t20 = 1;

	t20 = (x133<((x134*x135)|x136));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x137 = -1;
	uint16_t x138 = 3U;
	volatile int8_t x139 = INT8_MAX;
	uint64_t x140 = 13LLU;
	int32_t t21 = 1022011129;

	t21 = (x137<((x138*x139)|x140));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint8_t x141 = 70U;
	volatile uint16_t x142 = 16366U;
	int8_t x143 = -1;
	volatile int64_t x144 = -1LL;
	volatile int32_t t22 = -294;

	t22 = (x141<((x142*x143)|x144));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x145 = INT32_MIN;
	static volatile uint64_t x146 = 75471642271708LLU;
	int32_t x147 = -1;
	uint64_t x148 = 121410363LLU;
	volatile int32_t t23 = 4557134;

	t23 = (x145<((x146*x147)|x148));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x149 = UINT64_MAX;
	static int8_t x150 = INT8_MIN;
	int32_t x151 = -1;
	int16_t x152 = 319;
	volatile int32_t t24 = 6;

	t24 = (x149<((x150*x151)|x152));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x153 = -2905;
	static int16_t x154 = 520;
	static uint64_t x155 = UINT64_MAX;
	volatile int32_t t25 = 1;

	t25 = (x153<((x154*x155)|x156));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x157 = INT64_MIN;
	int16_t x159 = INT16_MIN;
	uint16_t x160 = UINT16_MAX;
	volatile int32_t t26 = -27459;

	t26 = (x157<((x158*x159)|x160));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x161 = INT8_MAX;
	int8_t x162 = -1;
	int64_t x163 = -1LL;
	int8_t x164 = -6;
	static volatile int32_t t27 = -2158687;

	t27 = (x161<((x162*x163)|x164));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x165 = INT64_MIN;
	volatile int64_t x167 = 15162108LL;
	int64_t x168 = INT64_MAX;
	int32_t t28 = 150;

	t28 = (x165<((x166*x167)|x168));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x173 = 3;
	int16_t x174 = INT16_MAX;
	uint16_t x176 = 1103U;

	t29 = (x173<((x174*x175)|x176));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x177 = 30U;
	int8_t x178 = INT8_MIN;
	static int16_t x179 = INT16_MIN;
	static int8_t x180 = 54;
	volatile int32_t t30 = -1;

	t30 = (x177<((x178*x179)|x180));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x185 = -1;
	int8_t x186 = 1;
	static volatile int16_t x188 = -3;
	int32_t t31 = -1328948;

	t31 = (x185<((x186*x187)|x188));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x190 = -51;
	int8_t x191 = -24;
	int32_t x192 = INT32_MIN;
	static volatile int32_t t32 = 297529209;

	t32 = (x189<((x190*x191)|x192));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x202 = UINT8_MAX;
	uint16_t x203 = 133U;
	uint8_t x204 = 0U;
	static int32_t t33 = 26;

	t33 = (x201<((x202*x203)|x204));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x209 = 248757904180919LLU;
	int8_t x210 = -1;
	uint16_t x211 = 15912U;
	uint32_t x212 = UINT32_MAX;
	volatile int32_t t34 = 1775;

	t34 = (x209<((x210*x211)|x212));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x213 = -1;
	uint64_t x214 = 125460186440301LLU;
	volatile int32_t x215 = INT32_MIN;
	int16_t x216 = INT16_MAX;
	volatile int32_t t35 = 21116932;

	t35 = (x213<((x214*x215)|x216));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x221 = 70U;
	int64_t x222 = 3477582LL;
	int8_t x224 = INT8_MAX;
	volatile int32_t t36 = 26230;

	t36 = (x221<((x222*x223)|x224));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x225 = INT8_MAX;
	int8_t x226 = -1;
	uint16_t x227 = UINT16_MAX;
	int32_t x228 = -25492757;
	volatile int32_t t37 = 2936097;

	t37 = (x225<((x226*x227)|x228));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x229 = UINT64_MAX;
	static uint16_t x230 = 10340U;
	static int8_t x231 = 2;
	uint32_t x232 = UINT32_MAX;
	volatile int32_t t38 = -128406240;

	t38 = (x229<((x230*x231)|x232));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x233 = 2597U;
	static int32_t x235 = -1;
	uint8_t x236 = 7U;
	int32_t t39 = -17813;

	t39 = (x233<((x234*x235)|x236));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x240 = -1;
	volatile int32_t t40 = 2855032;

	t40 = (x237<((x238*x239)|x240));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x241 = INT32_MAX;
	int32_t x243 = INT32_MAX;
	int32_t x244 = 338977;
	int32_t t41 = 966658;

	t41 = (x241<((x242*x243)|x244));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int32_t x245 = INT32_MAX;
	int16_t x247 = -1;
	int16_t x248 = -478;
	volatile int32_t t42 = -479355;

	t42 = (x245<((x246*x247)|x248));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x253 = 1036785946;
	volatile uint32_t x254 = 10062933U;
	int8_t x255 = 0;
	int32_t x256 = -3823082;

	t43 = (x253<((x254*x255)|x256));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x257 = INT64_MIN;
	volatile uint16_t x258 = UINT16_MAX;
	uint8_t x259 = 0U;
	volatile uint64_t x260 = UINT64_MAX;

	t44 = (x257<((x258*x259)|x260));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x266 = 44526U;
	uint32_t x267 = 66U;
	int32_t t45 = -4539;

	t45 = (x265<((x266*x267)|x268));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x270 = 3776LLU;
	static int16_t x271 = INT16_MAX;
	int16_t x272 = INT16_MAX;

	t46 = (x269<((x270*x271)|x272));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x277 = 8U;
	uint16_t x278 = 7U;
	volatile int8_t x279 = -19;
	int64_t x280 = INT64_MIN;
	volatile int32_t t47 = 6862;

	t47 = (x277<((x278*x279)|x280));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x284 = INT32_MIN;
	static volatile int32_t t48 = 381;

	t48 = (x281<((x282*x283)|x284));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x290 = -241139;
	int8_t x291 = -11;
	uint32_t x292 = 161720U;
	int32_t t49 = -86;

	t49 = (x289<((x290*x291)|x292));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x293 = INT8_MAX;
	volatile int64_t x294 = 74231826171982LL;
	int64_t x295 = -1LL;
	int64_t x296 = INT64_MIN;

	t50 = (x293<((x294*x295)|x296));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x297 = INT16_MIN;
	int8_t x299 = INT8_MIN;
	int8_t x300 = INT8_MIN;
	volatile int32_t t51 = -2;

	t51 = (x297<((x298*x299)|x300));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x304 = INT16_MIN;
	volatile int32_t t52 = -23159141;

	t52 = (x301<((x302*x303)|x304));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x305 = INT8_MAX;
	static int8_t x307 = INT8_MIN;
	int32_t t53 = 855417;

	t53 = (x305<((x306*x307)|x308));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x309 = -1;
	int64_t x310 = 61008624008LL;
	uint8_t x311 = UINT8_MAX;

	t54 = (x309<((x310*x311)|x312));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x313 = INT16_MIN;
	uint16_t x314 = 263U;
	int8_t x315 = INT8_MAX;
	int32_t x316 = INT32_MAX;

	t55 = (x313<((x314*x315)|x316));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x317 = INT64_MIN;
	int32_t x318 = INT32_MAX;
	int64_t x319 = -1LL;
	int64_t x320 = INT64_MIN;
	int32_t t56 = 10;

	t56 = (x317<((x318*x319)|x320));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x322 = 45638279U;
	int8_t x323 = -1;
	int32_t t57 = -9159502;

	t57 = (x321<((x322*x323)|x324));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x334 = 237U;
	static uint32_t x336 = UINT32_MAX;
	int32_t t58 = 0;

	t58 = (x333<((x334*x335)|x336));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x337 = INT8_MAX;
	int32_t x339 = 1;
	int32_t x340 = 191;
	volatile int32_t t59 = -3369;

	t59 = (x337<((x338*x339)|x340));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x345 = INT64_MIN;
	int16_t x346 = -1;
	int32_t x347 = INT32_MAX;
	static uint8_t x348 = 2U;
	volatile int32_t t60 = 261941786;

	t60 = (x345<((x346*x347)|x348));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x353 = INT8_MIN;
	static volatile int8_t x354 = 1;
	volatile int32_t x355 = INT32_MAX;
	static volatile uint64_t x356 = 47031323LLU;
	static int32_t t61 = -9166923;

	t61 = (x353<((x354*x355)|x356));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x366 = UINT16_MAX;
	uint8_t x367 = 1U;
	int32_t x368 = -1;
	volatile int32_t t62 = 11243;

	t62 = (x365<((x366*x367)|x368));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x369 = INT8_MAX;
	volatile int32_t x370 = INT32_MAX;
	int32_t x371 = -1;
	int32_t t63 = 628826405;

	t63 = (x369<((x370*x371)|x372));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = 1834U;
	int8_t x375 = INT8_MAX;

	t64 = (x373<((x374*x375)|x376));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x377 = -1LL;
	uint32_t x378 = UINT32_MAX;
	uint32_t x380 = 89U;

	t65 = (x377<((x378*x379)|x380));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x385 = 3U;
	int8_t x386 = 0;
	int8_t x387 = -1;
	volatile int32_t t66 = 260959;

	t66 = (x385<((x386*x387)|x388));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x389 = 895324447LLU;
	int16_t x390 = INT16_MIN;
	uint32_t x391 = 15032U;
	int16_t x392 = INT16_MIN;
	static int32_t t67 = 5873;

	t67 = (x389<((x390*x391)|x392));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x393 = -574LL;
	volatile int16_t x394 = 1643;
	int16_t x395 = -1;
	uint8_t x396 = UINT8_MAX;

	t68 = (x393<((x394*x395)|x396));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x397 = 8U;
	int16_t x398 = INT16_MIN;
	volatile int8_t x399 = INT8_MIN;
	int8_t x400 = INT8_MAX;
	volatile int32_t t69 = -252291858;

	t69 = (x397<((x398*x399)|x400));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x401 = 6U;
	volatile int8_t x402 = INT8_MAX;
	uint8_t x403 = UINT8_MAX;
	int32_t x404 = 428488;
	volatile int32_t t70 = -115743;

	t70 = (x401<((x402*x403)|x404));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x410 = INT8_MIN;
	static volatile int8_t x411 = -1;
	int32_t x412 = -1;
	static volatile int32_t t71 = -93698;

	t71 = (x409<((x410*x411)|x412));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x417 = INT64_MAX;
	volatile int16_t x419 = INT16_MIN;
	static volatile int16_t x420 = -1;
	volatile int32_t t72 = -1181728;

	t72 = (x417<((x418*x419)|x420));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x421 = 719365489;
	int8_t x422 = INT8_MIN;
	int8_t x423 = INT8_MIN;
	uint8_t x424 = UINT8_MAX;
	static int32_t t73 = -1801648;

	t73 = (x421<((x422*x423)|x424));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x425 = 8;
	static volatile uint8_t x426 = 2U;
	volatile int16_t x427 = INT16_MAX;
	volatile int32_t t74 = 1;

	t74 = (x425<((x426*x427)|x428));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x429 = INT64_MIN;
	uint64_t x431 = UINT64_MAX;
	static uint8_t x432 = 85U;
	volatile int32_t t75 = 4148;

	t75 = (x429<((x430*x431)|x432));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x437 = 118849051156235LLU;
	static int16_t x438 = -1361;
	static int8_t x439 = -63;
	int32_t x440 = INT32_MAX;

	t76 = (x437<((x438*x439)|x440));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x441 = INT32_MIN;
	volatile int16_t x442 = 17;
	uint8_t x444 = UINT8_MAX;
	volatile int32_t t77 = -1160047;

	t77 = (x441<((x442*x443)|x444));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x445 = UINT64_MAX;
	int8_t x446 = -1;
	volatile int64_t x447 = -61375195535486627LL;
	int32_t x448 = INT32_MIN;
	volatile int32_t t78 = -62;

	t78 = (x445<((x446*x447)|x448));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x454 = INT64_MIN;
	uint64_t x455 = 97940103393553774LLU;
	uint16_t x456 = UINT16_MAX;

	t79 = (x453<((x454*x455)|x456));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x465 = UINT32_MAX;
	volatile int32_t x466 = INT32_MAX;
	uint32_t x467 = UINT32_MAX;
	volatile int32_t t80 = 156;

	t80 = (x465<((x466*x467)|x468));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x469 = -2;
	volatile int32_t x471 = -1;
	volatile int8_t x472 = -1;

	t81 = (x469<((x470*x471)|x472));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x477 = -1;
	int8_t x478 = 1;
	uint64_t x479 = 600LLU;
	uint32_t x480 = 65797516U;
	volatile int32_t t82 = 1;

	t82 = (x477<((x478*x479)|x480));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x481 = 2U;
	int64_t x483 = -24819LL;
	int32_t x484 = -1;
	int32_t t83 = -697445218;

	t83 = (x481<((x482*x483)|x484));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int64_t x485 = -1LL;
	int64_t x486 = -1998520567737617470LL;
	int16_t x487 = -1;

	t84 = (x485<((x486*x487)|x488));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x489 = -1668;
	uint32_t x491 = 814787492U;
	int64_t x492 = -106542312598191LL;

	t85 = (x489<((x490*x491)|x492));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x497 = -1LL;
	uint16_t x498 = UINT16_MAX;
	int16_t x499 = -1;
	uint16_t x500 = 53U;
	int32_t t86 = -285560462;

	t86 = (x497<((x498*x499)|x500));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint8_t x505 = UINT8_MAX;
	int8_t x507 = -1;
	uint16_t x508 = UINT16_MAX;

	t87 = (x505<((x506*x507)|x508));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x510 = -1LL;
	uint16_t x511 = UINT16_MAX;
	static uint16_t x512 = UINT16_MAX;
	int32_t t88 = -1;

	t88 = (x509<((x510*x511)|x512));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x513 = INT32_MIN;
	volatile int8_t x514 = -41;
	static uint32_t x515 = UINT32_MAX;

	t89 = (x513<((x514*x515)|x516));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x529 = UINT16_MAX;
	uint32_t x530 = 149640503U;
	int16_t x532 = -1;

	t90 = (x529<((x530*x531)|x532));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x534 = 595299;

	t91 = (x533<((x534*x535)|x536));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x541 = 36644348450735LLU;
	uint8_t x542 = UINT8_MAX;
	uint8_t x544 = 5U;
	volatile int32_t t92 = -193822;

	t92 = (x541<((x542*x543)|x544));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x545 = 2541582U;
	static int64_t x546 = -1LL;
	static int32_t x547 = -1;
	volatile int32_t t93 = -7;

	t93 = (x545<((x546*x547)|x548));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x549 = -1LL;
	uint64_t x551 = UINT64_MAX;
	static int32_t x552 = INT32_MIN;

	t94 = (x549<((x550*x551)|x552));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x553 = -1;
	uint16_t x554 = 8088U;
	int16_t x555 = -1;
	static int64_t x556 = 203695016346739173LL;
	int32_t t95 = 135331;

	t95 = (x553<((x554*x555)|x556));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x557 = -1LL;
	static uint64_t x558 = 78LLU;
	uint64_t x559 = 4023476507LLU;
	volatile int32_t t96 = 525491792;

	t96 = (x557<((x558*x559)|x560));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x570 = INT16_MAX;
	volatile uint16_t x571 = UINT16_MAX;
	int32_t x572 = -800642;

	t97 = (x569<((x570*x571)|x572));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x573 = 5;
	static volatile uint64_t x574 = 61766486555658LLU;
	uint32_t x576 = 66682132U;
	int32_t t98 = -35;

	t98 = (x573<((x574*x575)|x576));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x577 = -194549106LL;
	int8_t x579 = -1;
	static uint64_t x580 = 2037977LLU;
	int32_t t99 = 26442;

	t99 = (x577<((x578*x579)|x580));

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

