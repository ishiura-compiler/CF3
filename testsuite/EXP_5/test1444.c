#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -2096028;
int64_t x5 = -939025539490LL;
uint32_t x10 = 2021342U;
static volatile int32_t t2 = -24061948;
int32_t x13 = INT32_MIN;
static uint16_t x16 = UINT16_MAX;
static int8_t x22 = -14;
int32_t x24 = INT32_MIN;
int32_t x31 = INT32_MIN;
static uint64_t x45 = 99807452207963LLU;
int8_t x48 = 1;
uint64_t t11 = 4206696LLU;
int64_t x49 = INT64_MIN;
int64_t t12 = INT64_MIN;
static volatile int64_t x58 = INT64_MIN;
volatile uint8_t x68 = 0U;
int32_t t16 = 715;
int16_t x70 = -11573;
int64_t x73 = -6303LL;
static uint16_t x76 = 21055U;
int64_t x82 = -1LL;
int64_t x83 = INT64_MIN;
uint8_t x93 = 3U;
int64_t x94 = INT64_MIN;
static uint8_t x95 = 4U;
int8_t x98 = -1;
int64_t x100 = INT64_MAX;
static uint16_t x101 = 7U;
int64_t x102 = 249154409LL;
static volatile int16_t x106 = 775;
volatile uint32_t x107 = UINT32_MAX;
int32_t t26 = 12203;
uint16_t x117 = UINT16_MAX;
volatile int8_t x119 = -13;
volatile uint8_t x123 = UINT8_MAX;
int16_t x124 = -9711;
volatile int64_t t30 = INT64_MAX;
int16_t x132 = 925;
int64_t x138 = INT64_MIN;
uint64_t x141 = 64LLU;
int8_t x143 = -7;
volatile int64_t x153 = 1737912817232LL;
uint64_t x161 = UINT64_MAX;
uint16_t x171 = UINT16_MAX;
int32_t x172 = 3760;
volatile int32_t x173 = INT32_MAX;
uint32_t x174 = UINT32_MAX;
static uint32_t t45 = 604720407U;
uint64_t x186 = UINT64_MAX;
volatile int32_t t46 = -3209157;
uint32_t x193 = 386225023U;
static int8_t x198 = INT8_MIN;
uint32_t x201 = UINT32_MAX;
int64_t x203 = INT64_MIN;
static uint8_t x205 = UINT8_MAX;
uint16_t x212 = UINT16_MAX;
static uint16_t x221 = UINT16_MAX;
int32_t x222 = 55306;
uint64_t t57 = 537969LLU;
int8_t x244 = INT8_MIN;
uint64_t x246 = 297799719LLU;
int16_t x250 = INT16_MIN;
static volatile int32_t t62 = -30755;
int64_t x256 = 65878849957694LL;
int32_t t63 = 405100;
volatile int8_t x266 = -1;
int16_t x267 = INT16_MAX;
int64_t x268 = INT64_MIN;
uint32_t x272 = 1220482U;
volatile int32_t t68 = -72203;
int64_t x277 = INT64_MAX;
int8_t x283 = -1;
static uint64_t x284 = 25377709952607695LLU;
volatile int16_t x286 = INT16_MIN;
int64_t x288 = -1LL;
uint16_t x292 = 1U;
uint64_t x293 = 56095284845119LLU;
volatile int16_t x294 = INT16_MIN;
static int32_t x295 = -1;
volatile int32_t x303 = -1;
int32_t x306 = INT32_MIN;
int32_t x309 = -1;
int8_t x312 = -1;
int16_t x315 = INT16_MAX;
uint16_t x316 = 17635U;
int64_t x323 = 38511091LL;
int64_t x331 = INT64_MIN;
static uint8_t x333 = 1U;
int16_t x340 = 2;
volatile int32_t x342 = INT32_MIN;
volatile int32_t t85 = INT32_MAX;
int32_t x346 = INT32_MAX;
int32_t x349 = -1;
volatile int8_t x362 = INT8_MAX;
static volatile int32_t x363 = INT32_MAX;
volatile int16_t x368 = 2903;
int64_t t92 = INT64_MAX;
int8_t x380 = -1;
volatile int32_t t95 = INT32_MIN;
volatile int8_t x387 = -1;


void f0(void) {
	uint16_t x1 = 227U;
	uint16_t x2 = UINT16_MAX;
	int16_t x3 = INT16_MIN;
	volatile int32_t t0 = -280263330;

	t0 = (x1+((x2<x3)==x4));

	if (t0 != 227) { NG(); } else { ; }
	
}

void f1(void) {
	static uint64_t x6 = UINT64_MAX;
	int64_t x7 = 147220847905835LL;
	int64_t x8 = INT64_MIN;
	int64_t t1 = 43LL;

	t1 = (x5+((x6<x7)==x8));

	if (t1 != -939025539490LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -1;
	int8_t x11 = -1;
	int64_t x12 = -8396303398708LL;

	t2 = (x9+((x10<x11)==x12));

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = INT16_MIN;
	int8_t x15 = -1;
	int32_t t3 = INT32_MIN;

	t3 = (x13+((x14<x15)==x16));

	if (t3 != INT32_MIN) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x17 = 11499U;
	uint32_t x18 = 14320U;
	int16_t x19 = INT16_MAX;
	uint8_t x20 = 3U;
	static uint32_t t4 = 21918566U;

	t4 = (x17+((x18<x19)==x20));

	if (t4 != 11499U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 89475394U;
	int8_t x23 = INT8_MAX;
	uint32_t t5 = 224931891U;

	t5 = (x21+((x22<x23)==x24));

	if (t5 != 89475394U) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x25 = INT32_MIN;
	static uint64_t x26 = UINT64_MAX;
	int64_t x27 = INT64_MIN;
	int8_t x28 = INT8_MIN;
	volatile int32_t t6 = INT32_MIN;

	t6 = (x25+((x26<x27)==x28));

	if (t6 != INT32_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	uint8_t x30 = 117U;
	uint16_t x32 = UINT16_MAX;
	volatile int32_t t7 = -46863069;

	t7 = (x29+((x30<x31)==x32));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x33 = -1;
	uint8_t x34 = UINT8_MAX;
	static volatile int8_t x35 = INT8_MIN;
	static int64_t x36 = -125371LL;
	volatile int32_t t8 = 13;

	t8 = (x33+((x34<x35)==x36));

	if (t8 != -1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	int32_t x38 = INT32_MAX;
	uint16_t x39 = 225U;
	int32_t x40 = -1;
	volatile int64_t t9 = INT64_MIN;

	t9 = (x37+((x38<x39)==x40));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint64_t x41 = 924855403LLU;
	int32_t x42 = -1;
	volatile uint64_t x43 = 99149682633LLU;
	volatile int32_t x44 = INT32_MIN;
	static uint64_t t10 = 79787191060593937LLU;

	t10 = (x41+((x42<x43)==x44));

	if (t10 != 924855403LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 32LLU;
	int64_t x47 = -26245226394051424LL;

	t11 = (x45+((x46<x47)==x48));

	if (t11 != 99807452207964LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = -6126;
	int16_t x51 = 106;
	uint16_t x52 = UINT16_MAX;

	t12 = (x49+((x50<x51)==x52));

	if (t12 != INT64_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = INT16_MIN;
	static volatile int16_t x54 = -4209;
	static int8_t x55 = 4;
	volatile int8_t x56 = INT8_MIN;
	int32_t t13 = -782603025;

	t13 = (x53+((x54<x55)==x56));

	if (t13 != -32768) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = 126U;
	static int16_t x59 = INT16_MIN;
	uint32_t x60 = 62811306U;
	static uint32_t t14 = 27011686U;

	t14 = (x57+((x58<x59)==x60));

	if (t14 != 126U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -521;
	static int16_t x62 = INT16_MAX;
	uint64_t x63 = UINT64_MAX;
	static int16_t x64 = 744;
	int32_t t15 = -41197692;

	t15 = (x61+((x62<x63)==x64));

	if (t15 != -521) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x65 = UINT8_MAX;
	uint32_t x66 = UINT32_MAX;
	int64_t x67 = 7709377LL;

	t16 = (x65+((x66<x67)==x68));

	if (t16 != 256) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = -9;
	int64_t x71 = INT64_MAX;
	int16_t x72 = 1327;
	volatile int32_t t17 = -662;

	t17 = (x69+((x70<x71)==x72));

	if (t17 != -9) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x74 = INT32_MIN;
	volatile int32_t x75 = 3080;
	int64_t t18 = -3985317LL;

	t18 = (x73+((x74<x75)==x76));

	if (t18 != -6303LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x77 = 96935143LLU;
	volatile int16_t x78 = INT16_MAX;
	static int8_t x79 = INT8_MAX;
	uint64_t x80 = UINT64_MAX;
	volatile uint64_t t19 = 1492319261LLU;

	t19 = (x77+((x78<x79)==x80));

	if (t19 != 96935143LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -1;
	int32_t x84 = -1;
	volatile int32_t t20 = 2314641;

	t20 = (x81+((x82<x83)==x84));

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x85 = -1;
	static uint64_t x86 = UINT64_MAX;
	int32_t x87 = -1;
	volatile uint8_t x88 = 58U;
	static volatile int32_t t21 = 6;

	t21 = (x85+((x86<x87)==x88));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x89 = 109U;
	int64_t x90 = INT64_MIN;
	uint32_t x91 = 515U;
	int32_t x92 = INT32_MIN;
	uint32_t t22 = 1U;

	t22 = (x89+((x90<x91)==x92));

	if (t22 != 109U) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x96 = 62U;
	int32_t t23 = 104;

	t23 = (x93+((x94<x95)==x96));

	if (t23 != 3) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = UINT16_MAX;
	int64_t x99 = INT64_MAX;
	volatile int32_t t24 = 4173863;

	t24 = (x97+((x98<x99)==x100));

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x103 = INT8_MIN;
	static uint32_t x104 = UINT32_MAX;
	int32_t t25 = -775659;

	t25 = (x101+((x102<x103)==x104));

	if (t25 != 7) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 3;
	int64_t x108 = INT64_MAX;

	t26 = (x105+((x106<x107)==x108));

	if (t26 != 3) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -1;
	int32_t x110 = INT32_MIN;
	int8_t x111 = -1;
	uint8_t x112 = 115U;
	int32_t t27 = -754;

	t27 = (x109+((x110<x111)==x112));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int64_t x113 = INT64_MIN;
	uint64_t x114 = 444176540688372LLU;
	int64_t x115 = -1LL;
	static volatile uint8_t x116 = UINT8_MAX;
	volatile int64_t t28 = INT64_MIN;

	t28 = (x113+((x114<x115)==x116));

	if (t28 != INT64_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int8_t x118 = 57;
	int8_t x120 = INT8_MIN;
	int32_t t29 = 214;

	t29 = (x117+((x118<x119)==x120));

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = INT64_MAX;
	int16_t x122 = -11;

	t30 = (x121+((x122<x123)==x124));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x125 = 15U;
	static uint64_t x126 = UINT64_MAX;
	int32_t x127 = 87;
	uint8_t x128 = 15U;
	static volatile int32_t t31 = -1629;

	t31 = (x125+((x126<x127)==x128));

	if (t31 != 15) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x129 = -6744258;
	uint64_t x130 = 11LLU;
	static int8_t x131 = INT8_MAX;
	int32_t t32 = -1993813;

	t32 = (x129+((x130<x131)==x132));

	if (t32 != -6744258) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int32_t x133 = INT32_MIN;
	uint16_t x134 = 60U;
	volatile uint16_t x135 = 1U;
	volatile int64_t x136 = 1794220928409LL;
	static volatile int32_t t33 = INT32_MIN;

	t33 = (x133+((x134<x135)==x136));

	if (t33 != INT32_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MIN;
	volatile int16_t x139 = INT16_MIN;
	uint32_t x140 = 1112478988U;
	static int32_t t34 = INT32_MIN;

	t34 = (x137+((x138<x139)==x140));

	if (t34 != INT32_MIN) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x142 = INT16_MIN;
	int16_t x144 = -561;
	uint64_t t35 = 3445LLU;

	t35 = (x141+((x142<x143)==x144));

	if (t35 != 64LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = 0;
	int32_t x146 = INT32_MIN;
	int64_t x147 = -127LL;
	static volatile int16_t x148 = INT16_MIN;
	int32_t t36 = -15036;

	t36 = (x145+((x146<x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 2U;
	int16_t x150 = INT16_MIN;
	static int8_t x151 = -1;
	volatile uint64_t x152 = UINT64_MAX;
	int32_t t37 = 119368327;

	t37 = (x149+((x150<x151)==x152));

	if (t37 != 2) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = UINT16_MAX;
	static int8_t x155 = 0;
	int64_t x156 = -3973227LL;
	volatile int64_t t38 = 927640262625LL;

	t38 = (x153+((x154<x155)==x156));

	if (t38 != 1737912817232LL) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = INT8_MIN;
	volatile int32_t x158 = INT32_MAX;
	int32_t x159 = INT32_MIN;
	uint16_t x160 = 6050U;
	int32_t t39 = -1917;

	t39 = (x157+((x158<x159)==x160));

	if (t39 != -128) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x162 = 13U;
	volatile int64_t x163 = INT64_MIN;
	static uint16_t x164 = 23096U;
	uint64_t t40 = UINT64_MAX;

	t40 = (x161+((x162<x163)==x164));

	if (t40 != UINT64_MAX) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 77U;
	int64_t x166 = INT64_MIN;
	int16_t x167 = INT16_MIN;
	int16_t x168 = -12619;
	static volatile int32_t t41 = -17;

	t41 = (x165+((x166<x167)==x168));

	if (t41 != 77) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = 24215836;
	int64_t x170 = INT64_MIN;
	static volatile int32_t t42 = -30;

	t42 = (x169+((x170<x171)==x172));

	if (t42 != 24215836) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x175 = UINT32_MAX;
	int16_t x176 = -1;
	static volatile int32_t t43 = INT32_MAX;

	t43 = (x173+((x174<x175)==x176));

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x177 = INT8_MIN;
	volatile uint64_t x178 = 8545LLU;
	static volatile int16_t x179 = INT16_MAX;
	uint16_t x180 = 1U;
	int32_t t44 = 3278876;

	t44 = (x177+((x178<x179)==x180));

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x181 = 94U;
	uint32_t x182 = 97536U;
	static int32_t x183 = INT32_MAX;
	static int32_t x184 = INT32_MAX;

	t45 = (x181+((x182<x183)==x184));

	if (t45 != 94U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = -1;
	static int16_t x187 = -5;
	int64_t x188 = INT64_MAX;

	t46 = (x185+((x186<x187)==x188));

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	int64_t x190 = -1538885231747936599LL;
	uint32_t x191 = 60688133U;
	static int16_t x192 = INT16_MIN;
	int32_t t47 = 33;

	t47 = (x189+((x190<x191)==x192));

	if (t47 != 255) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x194 = 6U;
	uint16_t x195 = 3464U;
	static int16_t x196 = -29;
	static volatile uint32_t t48 = 44522205U;

	t48 = (x193+((x194<x195)==x196));

	if (t48 != 386225023U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	volatile int16_t x199 = -1;
	volatile int32_t x200 = INT32_MIN;
	static int32_t t49 = INT32_MIN;

	t49 = (x197+((x198<x199)==x200));

	if (t49 != INT32_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x202 = UINT16_MAX;
	static int8_t x204 = INT8_MIN;
	static uint32_t t50 = UINT32_MAX;

	t50 = (x201+((x202<x203)==x204));

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x206 = 1;
	volatile int32_t x207 = -1;
	int8_t x208 = INT8_MIN;
	static int32_t t51 = 173454267;

	t51 = (x205+((x206<x207)==x208));

	if (t51 != 255) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = 1989U;
	static uint16_t x210 = 6U;
	static int16_t x211 = 488;
	uint32_t t52 = 12U;

	t52 = (x209+((x210<x211)==x212));

	if (t52 != 1989U) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x213 = 11735943080953755LLU;
	uint32_t x214 = 4501U;
	int32_t x215 = INT32_MIN;
	static int64_t x216 = -1LL;
	uint64_t t53 = 417LLU;

	t53 = (x213+((x214<x215)==x216));

	if (t53 != 11735943080953755LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	uint16_t x218 = 879U;
	volatile int64_t x219 = INT64_MIN;
	volatile int8_t x220 = -3;
	volatile int32_t t54 = 1606459;

	t54 = (x217+((x218<x219)==x220));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x223 = 1;
	volatile int64_t x224 = -41945685023LL;
	volatile int32_t t55 = 669108460;

	t55 = (x221+((x222<x223)==x224));

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = 29;
	volatile int16_t x226 = INT16_MAX;
	int64_t x227 = INT64_MIN;
	int64_t x228 = 60628LL;
	volatile int32_t t56 = -1;

	t56 = (x225+((x226<x227)==x228));

	if (t56 != 29) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile uint64_t x229 = 547288441382LLU;
	int32_t x230 = INT32_MAX;
	static int32_t x231 = 110;
	int64_t x232 = INT64_MIN;

	t57 = (x229+((x230<x231)==x232));

	if (t57 != 547288441382LLU) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x233 = 2021662U;
	int16_t x234 = -478;
	int32_t x235 = INT32_MIN;
	int16_t x236 = INT16_MAX;
	uint32_t t58 = 2U;

	t58 = (x233+((x234<x235)==x236));

	if (t58 != 2021662U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = INT16_MAX;
	volatile uint64_t x238 = 307739037757LLU;
	volatile int64_t x239 = INT64_MIN;
	volatile uint8_t x240 = 1U;
	volatile int32_t t59 = -133480;

	t59 = (x237+((x238<x239)==x240));

	if (t59 != 32768) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x241 = 7248980475LLU;
	int16_t x242 = INT16_MIN;
	int16_t x243 = 5;
	volatile uint64_t t60 = 1653187586LLU;

	t60 = (x241+((x242<x243)==x244));

	if (t60 != 7248980475LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x245 = 1U;
	int32_t x247 = -1;
	int8_t x248 = 1;
	int32_t t61 = -66253067;

	t61 = (x245+((x246<x247)==x248));

	if (t61 != 2) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = 56987932;
	int16_t x251 = -1;
	static volatile int8_t x252 = INT8_MAX;

	t62 = (x249+((x250<x251)==x252));

	if (t62 != 56987932) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = UINT16_MAX;
	int8_t x254 = INT8_MAX;
	static int32_t x255 = INT32_MIN;

	t63 = (x253+((x254<x255)==x256));

	if (t63 != 65535) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x257 = 1890U;
	static uint32_t x258 = 1824163U;
	int32_t x259 = -23981;
	static int64_t x260 = INT64_MIN;
	int32_t t64 = -53;

	t64 = (x257+((x258<x259)==x260));

	if (t64 != 1890) { NG(); } else { ; }
	
}

void f65(void) {
	volatile uint64_t x261 = UINT64_MAX;
	int8_t x262 = INT8_MIN;
	static uint32_t x263 = 21700022U;
	static int8_t x264 = 10;
	uint64_t t65 = UINT64_MAX;

	t65 = (x261+((x262<x263)==x264));

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint8_t x265 = 3U;
	int32_t t66 = 10;

	t66 = (x265+((x266<x267)==x268));

	if (t66 != 3) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	uint32_t x270 = 164481U;
	int8_t x271 = INT8_MAX;
	volatile int64_t t67 = INT64_MIN;

	t67 = (x269+((x270<x271)==x272));

	if (t67 != INT64_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -2;
	static uint16_t x274 = 4U;
	uint64_t x275 = 933LLU;
	uint32_t x276 = UINT32_MAX;

	t68 = (x273+((x274<x275)==x276));

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x278 = 0U;
	int8_t x279 = INT8_MIN;
	uint16_t x280 = UINT16_MAX;
	volatile int64_t t69 = INT64_MAX;

	t69 = (x277+((x278<x279)==x280));

	if (t69 != INT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = 2317789027078890205LL;
	volatile int8_t x282 = -37;
	volatile int64_t t70 = -1LL;

	t70 = (x281+((x282<x283)==x284));

	if (t70 != 2317789027078890205LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x285 = -1LL;
	volatile int16_t x287 = -2;
	int64_t t71 = -856600355386LL;

	t71 = (x285+((x286<x287)==x288));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x289 = INT64_MAX;
	uint16_t x290 = 589U;
	uint8_t x291 = 15U;
	int64_t t72 = INT64_MAX;

	t72 = (x289+((x290<x291)==x292));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x296 = UINT32_MAX;
	uint64_t t73 = 1227274746LLU;

	t73 = (x293+((x294<x295)==x296));

	if (t73 != 56095284845119LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	int8_t x298 = 1;
	int16_t x299 = 30;
	int16_t x300 = -1;
	volatile int32_t t74 = -30968363;

	t74 = (x297+((x298<x299)==x300));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MAX;
	volatile uint16_t x302 = UINT16_MAX;
	int64_t x304 = INT64_MAX;
	volatile int32_t t75 = 7949897;

	t75 = (x301+((x302<x303)==x304));

	if (t75 != 32767) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = 2;
	int64_t x307 = INT64_MIN;
	int16_t x308 = -1;
	static int32_t t76 = 1;

	t76 = (x305+((x306<x307)==x308));

	if (t76 != 2) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x310 = 2U;
	static uint32_t x311 = UINT32_MAX;
	static volatile int32_t t77 = 25940;

	t77 = (x309+((x310<x311)==x312));

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 28478641U;
	int16_t x314 = INT16_MIN;
	static uint32_t t78 = 839U;

	t78 = (x313+((x314<x315)==x316));

	if (t78 != 28478641U) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	int16_t x318 = INT16_MIN;
	static volatile int32_t x319 = INT32_MAX;
	int16_t x320 = INT16_MAX;
	int32_t t79 = -10;

	t79 = (x317+((x318<x319)==x320));

	if (t79 != -32768) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = -21790995175165891LL;
	int64_t x322 = INT64_MAX;
	volatile uint64_t x324 = 7247371785LLU;
	int64_t t80 = 160LL;

	t80 = (x321+((x322<x323)==x324));

	if (t80 != -21790995175165891LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x325 = INT16_MAX;
	volatile int16_t x326 = INT16_MIN;
	volatile int8_t x327 = 1;
	int32_t x328 = INT32_MIN;
	int32_t t81 = 69;

	t81 = (x325+((x326<x327)==x328));

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	int64_t x330 = -1LL;
	uint16_t x332 = 306U;
	int32_t t82 = 656;

	t82 = (x329+((x330<x331)==x332));

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x334 = -32;
	static uint32_t x335 = 14898U;
	static int32_t x336 = -59963010;
	int32_t t83 = -4;

	t83 = (x333+((x334<x335)==x336));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	static uint16_t x338 = 30U;
	volatile int16_t x339 = INT16_MIN;
	volatile int32_t t84 = INT32_MIN;

	t84 = (x337+((x338<x339)==x340));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x341 = INT32_MAX;
	int16_t x343 = INT16_MAX;
	uint32_t x344 = 114U;

	t85 = (x341+((x342<x343)==x344));

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int8_t x347 = 5;
	int8_t x348 = INT8_MIN;
	int64_t t86 = INT64_MIN;

	t86 = (x345+((x346<x347)==x348));

	if (t86 != INT64_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x350 = 6U;
	int32_t x351 = 105;
	uint64_t x352 = UINT64_MAX;
	int32_t t87 = 7;

	t87 = (x349+((x350<x351)==x352));

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x353 = 33424798625542LLU;
	int64_t x354 = INT64_MAX;
	int8_t x355 = -1;
	uint32_t x356 = 3718U;
	volatile uint64_t t88 = 844150751717747250LLU;

	t88 = (x353+((x354<x355)==x356));

	if (t88 != 33424798625542LLU) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x357 = INT32_MIN;
	uint64_t x358 = 721LLU;
	int16_t x359 = INT16_MAX;
	volatile int8_t x360 = 15;
	int32_t t89 = INT32_MIN;

	t89 = (x357+((x358<x359)==x360));

	if (t89 != INT32_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	int8_t x364 = -1;
	volatile int32_t t90 = INT32_MAX;

	t90 = (x361+((x362<x363)==x364));

	if (t90 != INT32_MAX) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x365 = 1214;
	volatile int32_t x366 = 391082;
	uint16_t x367 = 13123U;
	int32_t t91 = -1819;

	t91 = (x365+((x366<x367)==x368));

	if (t91 != 1214) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = INT64_MAX;
	int32_t x370 = 67622912;
	uint32_t x371 = UINT32_MAX;
	volatile int16_t x372 = 3701;

	t92 = (x369+((x370<x371)==x372));

	if (t92 != INT64_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x373 = 122U;
	static uint16_t x374 = 483U;
	int32_t x375 = INT32_MIN;
	static int16_t x376 = INT16_MIN;
	volatile int32_t t93 = -263781266;

	t93 = (x373+((x374<x375)==x376));

	if (t93 != 122) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	volatile int16_t x378 = INT16_MIN;
	int8_t x379 = 1;
	int32_t t94 = 62;

	t94 = (x377+((x378<x379)==x380));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x381 = INT32_MIN;
	uint16_t x382 = 170U;
	int32_t x383 = INT32_MAX;
	int64_t x384 = INT64_MIN;

	t95 = (x381+((x382<x383)==x384));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -7881860LL;
	int8_t x386 = INT8_MIN;
	volatile int8_t x388 = INT8_MIN;
	int64_t t96 = 17804087342LL;

	t96 = (x385+((x386<x387)==x388));

	if (t96 != -7881860LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 1884572;
	int32_t x390 = 238421;
	int16_t x391 = -2038;
	volatile int32_t x392 = -1;
	volatile int32_t t97 = -1692055;

	t97 = (x389+((x390<x391)==x392));

	if (t97 != 1884572) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = -1;
	uint32_t x394 = 183U;
	uint16_t x395 = UINT16_MAX;
	int32_t x396 = -12;
	static int32_t t98 = 77327;

	t98 = (x393+((x394<x395)==x396));

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x397 = UINT64_MAX;
	int8_t x398 = INT8_MAX;
	int8_t x399 = -1;
	int8_t x400 = INT8_MIN;
	volatile uint64_t t99 = UINT64_MAX;

	t99 = (x397+((x398<x399)==x400));

	if (t99 != UINT64_MAX) { NG(); } else { ; }
	
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

