#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint64_t x4 = 1055706871LLU;
uint32_t x5 = UINT32_MAX;
volatile int32_t t1 = 34;
uint16_t x10 = UINT16_MAX;
uint64_t x11 = 133LLU;
volatile int32_t t2 = -112;
static int16_t x13 = INT16_MIN;
volatile int64_t x14 = INT64_MIN;
int32_t x22 = 129197981;
int32_t x26 = INT32_MIN;
static int32_t x28 = 87512;
volatile int32_t t5 = -1749;
uint32_t x33 = UINT32_MAX;
int16_t x34 = INT16_MAX;
static int8_t x40 = -3;
int32_t x46 = -1974;
uint16_t x47 = 456U;
volatile int32_t t11 = -484460343;
uint8_t x70 = 86U;
static volatile int16_t x77 = 14375;
uint8_t x82 = 24U;
int32_t t16 = 3111415;
volatile int32_t x93 = -1248747;
int64_t x94 = INT64_MIN;
int16_t x95 = -121;
uint16_t x96 = 50U;
int64_t x125 = INT64_MIN;
volatile int8_t x126 = 57;
volatile uint8_t x127 = UINT8_MAX;
int32_t x131 = -2021;
int32_t t25 = 1;
static int32_t x149 = INT32_MIN;
int32_t t27 = 251;
uint8_t x162 = UINT8_MAX;
volatile int32_t t29 = 3;
volatile int32_t t32 = -4024379;
int32_t x185 = -1;
uint32_t x190 = UINT32_MAX;
uint8_t x195 = 5U;
int32_t x205 = 587611652;
int16_t x206 = -1;
int32_t x209 = -1;
uint32_t x211 = 1595262U;
int16_t x217 = -1;
int32_t x218 = INT32_MAX;
int32_t x219 = INT32_MAX;
uint32_t x224 = UINT32_MAX;
static uint64_t x225 = UINT64_MAX;
uint64_t x229 = UINT64_MAX;
static int16_t x231 = INT16_MAX;
static int32_t t45 = 74263;
int64_t x249 = 20196648262295LL;
int32_t t46 = 19;
volatile int8_t x253 = -24;
static int32_t x254 = -1;
uint8_t x256 = 26U;
int32_t t47 = -13;
int8_t x258 = -1;
uint8_t x267 = 9U;
int32_t x271 = -1;
int16_t x274 = -1;
int32_t x277 = INT32_MIN;
int64_t x280 = INT64_MIN;
int32_t x304 = INT32_MIN;
int8_t x308 = INT8_MIN;
int8_t x309 = 13;
int64_t x312 = INT64_MIN;
volatile int32_t t58 = -9;
static volatile int32_t t59 = -4;
int32_t x318 = -9;
volatile int32_t x322 = 189;
uint64_t x323 = 8719860372611LLU;
int8_t x324 = INT8_MAX;
static int32_t t61 = 731105;
int8_t x328 = INT8_MAX;
int8_t x335 = INT8_MIN;
volatile int32_t x338 = 0;
int32_t t65 = 193;
uint32_t x345 = UINT32_MAX;
int32_t x346 = INT32_MIN;
int64_t x364 = INT64_MAX;
static uint64_t x371 = 15442472821026251LLU;
volatile int16_t x373 = INT16_MAX;
volatile uint64_t x379 = UINT64_MAX;
int32_t x388 = -67171550;
uint16_t x390 = 11U;
volatile int64_t x400 = 2385492266449LL;
int64_t x401 = INT64_MIN;
volatile int32_t x402 = 895858160;
volatile uint8_t x413 = UINT8_MAX;
int32_t x419 = INT32_MIN;
int32_t t81 = -214939;
int32_t x421 = -1631;
int64_t x425 = -288924LL;
static int64_t x426 = -1LL;
int64_t x427 = -14943965LL;
int16_t x434 = -1;
volatile int32_t t85 = 323;
int16_t x452 = INT16_MIN;
int64_t x454 = -1LL;
static uint8_t x455 = 51U;
static volatile int32_t x469 = 0;
int8_t x474 = INT8_MIN;
int64_t x476 = INT64_MIN;
int64_t x483 = INT64_MAX;
int32_t t92 = -9518529;
int64_t x485 = INT64_MAX;
static int32_t t93 = -14031;
static uint16_t x498 = UINT16_MAX;
uint8_t x503 = 1U;
int16_t x504 = INT16_MIN;
int8_t x505 = INT8_MIN;
uint32_t x506 = 120657U;
int8_t x507 = INT8_MAX;
int32_t t97 = -1004936694;
int8_t x510 = INT8_MIN;
int64_t x511 = INT64_MAX;
int64_t x516 = INT64_MIN;


void f0(void) {
	static uint64_t x1 = UINT64_MAX;
	uint16_t x2 = UINT16_MAX;
	uint16_t x3 = UINT16_MAX;
	int32_t t0 = -7098955;

	t0 = (x1<(x2/(x3%x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	int16_t x7 = INT16_MAX;
	volatile int64_t x8 = INT64_MIN;

	t1 = (x5<(x6/(x7%x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static uint64_t x9 = UINT64_MAX;
	uint64_t x12 = 584882348586LLU;

	t2 = (x9<(x10/(x11%x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x15 = 2554757LLU;
	int64_t x16 = INT64_MIN;
	volatile int32_t t3 = -1482275;

	t3 = (x13<(x14/(x15%x16)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int8_t x21 = INT8_MIN;
	int32_t x23 = -1;
	volatile uint32_t x24 = 766332U;
	int32_t t4 = -8881;

	t4 = (x21<(x22/(x23%x24)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MIN;
	uint32_t x27 = UINT32_MAX;

	t5 = (x25<(x26/(x27%x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	int16_t x30 = INT16_MIN;
	uint32_t x31 = 164484U;
	int16_t x32 = -1;
	static int32_t t6 = 2;

	t6 = (x29<(x30/(x31%x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static volatile uint64_t x35 = 293766231LLU;
	static int64_t x36 = INT64_MIN;
	int32_t t7 = 114720;

	t7 = (x33<(x34/(x35%x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	static uint16_t x38 = UINT16_MAX;
	int16_t x39 = INT16_MAX;
	volatile int32_t t8 = -3;

	t8 = (x37<(x38/(x39%x40)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x45 = 27967188811289LLU;
	static int64_t x48 = INT64_MAX;
	volatile int32_t t9 = -4;

	t9 = (x45<(x46/(x47%x48)));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x49 = INT8_MIN;
	static int64_t x50 = 457399067LL;
	int64_t x51 = -996958LL;
	static uint16_t x52 = 17U;
	static volatile int32_t t10 = 160;

	t10 = (x49<(x50/(x51%x52)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x57 = INT8_MIN;
	int8_t x58 = 1;
	volatile uint32_t x59 = UINT32_MAX;
	uint64_t x60 = 2434LLU;

	t11 = (x57<(x58/(x59%x60)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x61 = 503251U;
	static uint16_t x62 = 28512U;
	int8_t x63 = INT8_MIN;
	uint16_t x64 = UINT16_MAX;
	volatile int32_t t12 = 10988296;

	t12 = (x61<(x62/(x63%x64)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x69 = -99;
	static int32_t x71 = -94;
	static uint16_t x72 = UINT16_MAX;
	volatile int32_t t13 = -65511;

	t13 = (x69<(x70/(x71%x72)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x78 = 4396U;
	uint64_t x79 = 8090LLU;
	int16_t x80 = -1;
	int32_t t14 = -12441;

	t14 = (x77<(x78/(x79%x80)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x81 = UINT32_MAX;
	uint64_t x83 = UINT64_MAX;
	int64_t x84 = INT64_MAX;
	int32_t t15 = 33812611;

	t15 = (x81<(x82/(x83%x84)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x85 = -1;
	int8_t x86 = 8;
	static volatile uint32_t x87 = 177U;
	int32_t x88 = INT32_MAX;

	t16 = (x85<(x86/(x87%x88)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t t17 = 28;

	t17 = (x93<(x94/(x95%x96)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x97 = INT32_MIN;
	volatile int16_t x98 = INT16_MIN;
	volatile int8_t x99 = INT8_MIN;
	int16_t x100 = 1141;
	volatile int32_t t18 = 658;

	t18 = (x97<(x98/(x99%x100)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x105 = 1592U;
	uint64_t x106 = UINT64_MAX;
	int8_t x107 = INT8_MAX;
	uint64_t x108 = 108630LLU;
	int32_t t19 = -2;

	t19 = (x105<(x106/(x107%x108)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x113 = -1;
	int64_t x114 = -1LL;
	int32_t x115 = -1;
	int64_t x116 = -1098831259283931LL;
	int32_t t20 = -50850184;

	t20 = (x113<(x114/(x115%x116)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x121 = 296123U;
	int16_t x122 = INT16_MIN;
	static uint64_t x123 = 12050121051LLU;
	uint8_t x124 = UINT8_MAX;
	int32_t t21 = 67;

	t21 = (x121<(x122/(x123%x124)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x128 = 28U;
	volatile int32_t t22 = -473233831;

	t22 = (x125<(x126/(x127%x128)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x129 = INT64_MIN;
	int8_t x130 = INT8_MAX;
	int16_t x132 = INT16_MIN;
	int32_t t23 = -12941980;

	t23 = (x129<(x130/(x131%x132)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x137 = INT8_MIN;
	int64_t x138 = INT64_MIN;
	uint16_t x139 = 19U;
	static uint16_t x140 = 61U;
	static int32_t t24 = 1;

	t24 = (x137<(x138/(x139%x140)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x141 = INT8_MIN;
	uint8_t x142 = 13U;
	int32_t x143 = -1;
	int64_t x144 = INT64_MIN;

	t25 = (x141<(x142/(x143%x144)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x145 = 50LLU;
	int8_t x146 = INT8_MIN;
	uint64_t x147 = 200062224156656724LLU;
	uint64_t x148 = UINT64_MAX;
	int32_t t26 = 15;

	t26 = (x145<(x146/(x147%x148)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x150 = -1;
	uint64_t x151 = UINT64_MAX;
	volatile int32_t x152 = INT32_MAX;

	t27 = (x149<(x150/(x151%x152)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int32_t x153 = 4;
	uint8_t x154 = 49U;
	int32_t x155 = -1;
	int32_t x156 = -79719;
	static volatile int32_t t28 = 0;

	t28 = (x153<(x154/(x155%x156)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x161 = -19;
	int16_t x163 = 7;
	int8_t x164 = INT8_MIN;

	t29 = (x161<(x162/(x163%x164)));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x165 = UINT16_MAX;
	int32_t x166 = INT32_MIN;
	int32_t x167 = INT32_MIN;
	volatile uint8_t x168 = UINT8_MAX;
	int32_t t30 = -408735;

	t30 = (x165<(x166/(x167%x168)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x177 = -1;
	int64_t x178 = INT64_MIN;
	int8_t x179 = INT8_MIN;
	volatile uint16_t x180 = 14U;
	int32_t t31 = 5793505;

	t31 = (x177<(x178/(x179%x180)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x181 = INT8_MIN;
	int16_t x182 = -1;
	volatile uint32_t x183 = 168271U;
	int32_t x184 = INT32_MIN;

	t32 = (x181<(x182/(x183%x184)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x186 = INT16_MIN;
	uint8_t x187 = UINT8_MAX;
	volatile uint64_t x188 = 331111LLU;
	volatile int32_t t33 = -1409;

	t33 = (x185<(x186/(x187%x188)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x189 = 6U;
	volatile int64_t x191 = 256864010874486LL;
	int32_t x192 = INT32_MIN;
	int32_t t34 = -70863;

	t34 = (x189<(x190/(x191%x192)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x193 = 0U;
	volatile int32_t x194 = 14076;
	uint32_t x196 = 702U;
	static volatile int32_t t35 = -1992;

	t35 = (x193<(x194/(x195%x196)));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int32_t x201 = INT32_MIN;
	volatile int32_t x202 = INT32_MAX;
	int8_t x203 = INT8_MIN;
	static uint32_t x204 = UINT32_MAX;
	volatile int32_t t36 = -3494;

	t36 = (x201<(x202/(x203%x204)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x207 = 933LLU;
	volatile int64_t x208 = 160LL;
	int32_t t37 = -1;

	t37 = (x205<(x206/(x207%x208)));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x210 = UINT8_MAX;
	uint32_t x212 = 9037546U;
	static int32_t t38 = -43945750;

	t38 = (x209<(x210/(x211%x212)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x213 = -19707880246493951LL;
	static volatile int8_t x214 = INT8_MAX;
	int64_t x215 = INT64_MAX;
	int32_t x216 = INT32_MAX;
	int32_t t39 = 7;

	t39 = (x213<(x214/(x215%x216)));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x220 = -3817947;
	int32_t t40 = 8;

	t40 = (x217<(x218/(x219%x220)));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x221 = INT16_MIN;
	uint64_t x222 = 54707LLU;
	int64_t x223 = 1370350237LL;
	volatile int32_t t41 = 14;

	t41 = (x221<(x222/(x223%x224)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint16_t x226 = UINT16_MAX;
	int8_t x227 = 1;
	uint8_t x228 = 13U;
	volatile int32_t t42 = -132712589;

	t42 = (x225<(x226/(x227%x228)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x230 = -1;
	int32_t x232 = INT32_MIN;
	static volatile int32_t t43 = -4;

	t43 = (x229<(x230/(x231%x232)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x233 = -6;
	int16_t x234 = INT16_MIN;
	int32_t x235 = INT32_MAX;
	uint8_t x236 = UINT8_MAX;
	static int32_t t44 = -20409874;

	t44 = (x233<(x234/(x235%x236)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x241 = 29U;
	int64_t x242 = INT64_MIN;
	int8_t x243 = INT8_MIN;
	int16_t x244 = -11;

	t45 = (x241<(x242/(x243%x244)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x250 = -1;
	volatile int32_t x251 = INT32_MIN;
	uint32_t x252 = 351571999U;

	t46 = (x249<(x250/(x251%x252)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x255 = INT8_MAX;

	t47 = (x253<(x254/(x255%x256)));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x257 = UINT32_MAX;
	uint64_t x259 = 1478047LLU;
	int64_t x260 = INT64_MIN;
	int32_t t48 = -460678;

	t48 = (x257<(x258/(x259%x260)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static uint8_t x261 = 2U;
	volatile int8_t x262 = INT8_MIN;
	static volatile int8_t x263 = INT8_MIN;
	volatile int32_t x264 = INT32_MIN;
	volatile int32_t t49 = -42;

	t49 = (x261<(x262/(x263%x264)));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x265 = 7692430708LL;
	uint64_t x266 = 124LLU;
	volatile int16_t x268 = INT16_MIN;
	volatile int32_t t50 = 256528;

	t50 = (x265<(x266/(x267%x268)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x269 = 1041720808LLU;
	volatile uint16_t x270 = 189U;
	int8_t x272 = 7;
	int32_t t51 = 759581824;

	t51 = (x269<(x270/(x271%x272)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x273 = 38309952U;
	static int8_t x275 = INT8_MAX;
	static uint16_t x276 = UINT16_MAX;
	int32_t t52 = -890910;

	t52 = (x273<(x274/(x275%x276)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x278 = 1;
	int16_t x279 = 15;
	static volatile int32_t t53 = -76;

	t53 = (x277<(x278/(x279%x280)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x285 = INT16_MIN;
	volatile int8_t x286 = 3;
	uint32_t x287 = 3U;
	volatile int64_t x288 = INT64_MAX;
	int32_t t54 = -6965;

	t54 = (x285<(x286/(x287%x288)));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x297 = INT64_MAX;
	volatile uint64_t x298 = UINT64_MAX;
	int8_t x299 = INT8_MAX;
	uint32_t x300 = UINT32_MAX;
	static int32_t t55 = 20384363;

	t55 = (x297<(x298/(x299%x300)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x301 = INT16_MIN;
	int16_t x302 = -1;
	uint16_t x303 = 28U;
	int32_t t56 = 11065705;

	t56 = (x301<(x302/(x303%x304)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static int16_t x305 = -1;
	volatile int32_t x306 = -7100;
	volatile int8_t x307 = -43;
	int32_t t57 = -9393;

	t57 = (x305<(x306/(x307%x308)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x310 = INT8_MAX;
	int64_t x311 = INT64_MAX;

	t58 = (x309<(x310/(x311%x312)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x313 = INT16_MAX;
	static int32_t x314 = -1;
	static int8_t x315 = 1;
	uint32_t x316 = 2070278622U;

	t59 = (x313<(x314/(x315%x316)));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x317 = -1;
	uint64_t x319 = UINT64_MAX;
	static int32_t x320 = INT32_MIN;
	int32_t t60 = 294556;

	t60 = (x317<(x318/(x319%x320)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x321 = UINT32_MAX;

	t61 = (x321<(x322/(x323%x324)));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x325 = INT8_MIN;
	int32_t x326 = INT32_MIN;
	uint32_t x327 = 679447390U;
	volatile int32_t t62 = -51;

	t62 = (x325<(x326/(x327%x328)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x329 = INT16_MIN;
	int64_t x330 = INT64_MIN;
	uint8_t x331 = 6U;
	volatile uint16_t x332 = 7494U;
	volatile int32_t t63 = -1;

	t63 = (x329<(x330/(x331%x332)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x333 = -1;
	uint32_t x334 = 11755U;
	int64_t x336 = -404473LL;
	int32_t t64 = -5584;

	t64 = (x333<(x334/(x335%x336)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x337 = INT16_MAX;
	uint32_t x339 = 1661080U;
	uint32_t x340 = 13582318U;

	t65 = (x337<(x338/(x339%x340)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x341 = INT8_MIN;
	int64_t x342 = -769037LL;
	int64_t x343 = 178827LL;
	volatile int8_t x344 = 16;
	int32_t t66 = 51;

	t66 = (x341<(x342/(x343%x344)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x347 = 6599U;
	volatile int64_t x348 = INT64_MIN;
	volatile int32_t t67 = -58;

	t67 = (x345<(x346/(x347%x348)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x353 = INT16_MIN;
	static int8_t x354 = INT8_MIN;
	volatile uint32_t x355 = 8U;
	int64_t x356 = INT64_MIN;
	int32_t t68 = -2080215;

	t68 = (x353<(x354/(x355%x356)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x357 = INT32_MAX;
	static uint64_t x358 = 6819175604758022470LLU;
	int32_t x359 = INT32_MAX;
	static uint64_t x360 = 507338701669LLU;
	static int32_t t69 = -80352;

	t69 = (x357<(x358/(x359%x360)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x361 = 75U;
	int32_t x362 = INT32_MIN;
	uint32_t x363 = UINT32_MAX;
	int32_t t70 = 1;

	t70 = (x361<(x362/(x363%x364)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x369 = -1;
	int8_t x370 = -1;
	static volatile int32_t x372 = INT32_MAX;
	int32_t t71 = -1555835;

	t71 = (x369<(x370/(x371%x372)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x374 = INT16_MIN;
	static uint32_t x375 = 2U;
	static int64_t x376 = INT64_MIN;
	int32_t t72 = -24685;

	t72 = (x373<(x374/(x375%x376)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x377 = 1997;
	volatile int32_t x378 = -1;
	int16_t x380 = INT16_MIN;
	int32_t t73 = -41351874;

	t73 = (x377<(x378/(x379%x380)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x381 = INT64_MAX;
	static int16_t x382 = INT16_MAX;
	int32_t x383 = INT32_MAX;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t74 = 3959;

	t74 = (x381<(x382/(x383%x384)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x385 = -24658;
	static int64_t x386 = -1LL;
	uint8_t x387 = 97U;
	static int32_t t75 = 3;

	t75 = (x385<(x386/(x387%x388)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x389 = UINT32_MAX;
	uint16_t x391 = 1448U;
	volatile int64_t x392 = -16943766579LL;
	volatile int32_t t76 = 41;

	t76 = (x389<(x390/(x391%x392)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int32_t x397 = INT32_MAX;
	static int8_t x398 = INT8_MAX;
	static uint8_t x399 = 15U;
	volatile int32_t t77 = 778699312;

	t77 = (x397<(x398/(x399%x400)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x403 = -1LL;
	static int64_t x404 = INT64_MIN;
	volatile int32_t t78 = -14632;

	t78 = (x401<(x402/(x403%x404)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x405 = -1;
	volatile uint16_t x406 = 31U;
	int32_t x407 = -3;
	uint16_t x408 = UINT16_MAX;
	volatile int32_t t79 = 155760319;

	t79 = (x405<(x406/(x407%x408)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x414 = INT64_MAX;
	volatile int64_t x415 = INT64_MIN;
	int64_t x416 = INT64_MAX;
	volatile int32_t t80 = -47285814;

	t80 = (x413<(x414/(x415%x416)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x417 = -1;
	volatile int64_t x418 = 2735334688LL;
	static volatile uint16_t x420 = 101U;

	t81 = (x417<(x418/(x419%x420)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x422 = UINT8_MAX;
	int16_t x423 = INT16_MIN;
	uint64_t x424 = UINT64_MAX;
	volatile int32_t t82 = 28081;

	t82 = (x421<(x422/(x423%x424)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x428 = -26LL;
	volatile int32_t t83 = 53851;

	t83 = (x425<(x426/(x427%x428)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x433 = INT16_MAX;
	volatile uint64_t x435 = 16853LLU;
	static int16_t x436 = INT16_MIN;
	volatile int32_t t84 = 30544;

	t84 = (x433<(x434/(x435%x436)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x441 = -1;
	int16_t x442 = -3203;
	volatile uint8_t x443 = UINT8_MAX;
	uint64_t x444 = 272361645467LLU;

	t85 = (x441<(x442/(x443%x444)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x445 = INT8_MIN;
	int16_t x446 = INT16_MAX;
	volatile int8_t x447 = -1;
	int16_t x448 = INT16_MIN;
	volatile int32_t t86 = -26;

	t86 = (x445<(x446/(x447%x448)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x449 = INT32_MIN;
	static int8_t x450 = INT8_MIN;
	int32_t x451 = -1;
	static volatile int32_t t87 = 60365;

	t87 = (x449<(x450/(x451%x452)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x453 = -19304848397322156LL;
	volatile int64_t x456 = INT64_MIN;
	int32_t t88 = 394593;

	t88 = (x453<(x454/(x455%x456)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile uint64_t x470 = 213272269447990LLU;
	uint32_t x471 = UINT32_MAX;
	uint64_t x472 = 7791584579396LLU;
	volatile int32_t t89 = 21463708;

	t89 = (x469<(x470/(x471%x472)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x473 = 83;
	uint32_t x475 = UINT32_MAX;
	volatile int32_t t90 = 12;

	t90 = (x473<(x474/(x475%x476)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x477 = -1LL;
	static int16_t x478 = -972;
	uint64_t x479 = 1333235219349LLU;
	volatile int8_t x480 = INT8_MIN;
	volatile int32_t t91 = 17;

	t91 = (x477<(x478/(x479%x480)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x481 = -1;
	static int32_t x482 = INT32_MIN;
	uint32_t x484 = UINT32_MAX;

	t92 = (x481<(x482/(x483%x484)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x486 = UINT64_MAX;
	int16_t x487 = -27;
	volatile uint32_t x488 = UINT32_MAX;

	t93 = (x485<(x486/(x487%x488)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x493 = INT64_MIN;
	static uint8_t x494 = UINT8_MAX;
	static int16_t x495 = INT16_MAX;
	static uint64_t x496 = 374820LLU;
	static volatile int32_t t94 = 3122276;

	t94 = (x493<(x494/(x495%x496)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x497 = INT8_MIN;
	static int8_t x499 = INT8_MIN;
	int16_t x500 = INT16_MIN;
	volatile int32_t t95 = -5895073;

	t95 = (x497<(x498/(x499%x500)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x501 = -2;
	int8_t x502 = -50;
	int32_t t96 = -5257757;

	t96 = (x501<(x502/(x503%x504)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int32_t x508 = -1182323;

	t97 = (x505<(x506/(x507%x508)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x509 = INT32_MAX;
	int32_t x512 = -44779;
	int32_t t98 = 1;

	t98 = (x509<(x510/(x511%x512)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x513 = 86828796986LLU;
	int16_t x514 = INT16_MIN;
	volatile uint16_t x515 = UINT16_MAX;
	volatile int32_t t99 = 0;

	t99 = (x513<(x514/(x515%x516)));

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

