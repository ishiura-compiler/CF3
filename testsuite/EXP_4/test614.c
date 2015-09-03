#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 204250358;
int8_t x19 = INT8_MIN;
volatile int32_t t4 = -17943;
uint64_t x35 = 69023LLU;
uint32_t x40 = 1U;
int64_t x43 = -18711803204255LL;
static int8_t x54 = INT8_MIN;
uint16_t x57 = UINT16_MAX;
int16_t x61 = INT16_MAX;
uint8_t x64 = 30U;
volatile uint16_t x69 = 1U;
int32_t t16 = -4734;
int8_t x86 = -1;
int32_t x90 = -1;
static int8_t x102 = INT8_MAX;
static int8_t x103 = INT8_MIN;
int32_t x106 = -1;
uint8_t x108 = 5U;
volatile int8_t x113 = INT8_MAX;
int16_t x116 = INT16_MIN;
volatile uint32_t x133 = 113213144U;
static volatile int16_t x135 = -1;
uint32_t t32 = 205U;
volatile int16_t x140 = -3;
int8_t x151 = -1;
volatile uint64_t x152 = UINT64_MAX;
uint32_t x172 = 745201U;
uint64_t t42 = 62LLU;
static volatile int32_t t43 = -629;
int16_t x183 = INT16_MIN;
int16_t x193 = INT16_MIN;
uint64_t t49 = 194910LLU;
volatile int8_t x206 = 2;
volatile int32_t t50 = 119;
volatile int32_t x217 = INT32_MIN;
uint64_t x220 = 285497695LLU;
int32_t x227 = INT32_MIN;
int16_t x228 = INT16_MIN;
int32_t x229 = INT32_MIN;
volatile uint32_t x233 = 1U;
static int64_t x234 = 6744173971807997LL;
static uint16_t x239 = UINT16_MAX;
static volatile uint8_t x247 = UINT8_MAX;
int16_t x252 = -1;
static volatile int32_t x255 = -1;
int32_t x256 = -73042;
static int32_t x258 = INT32_MIN;
int8_t x261 = INT8_MIN;
static uint64_t x265 = 7LLU;
volatile int16_t x276 = 528;
int32_t t67 = INT32_MAX;
int8_t x284 = INT8_MAX;
uint32_t x293 = 2U;
uint32_t t72 = 1523605U;
static int32_t x297 = -2271;
int32_t x298 = INT32_MAX;
static int64_t x300 = -3303650479177239447LL;
volatile int32_t t73 = 1951;
static int32_t t74 = 138926306;
volatile int64_t x305 = 2004627381LL;
uint16_t x310 = 9840U;
int16_t x313 = 1;
int64_t x320 = 3LL;
int64_t x325 = -54800LL;
int64_t t80 = 49432352LL;
static int8_t x340 = -1;
int32_t t82 = -1964411;
static volatile uint64_t t86 = 809371785154083870LLU;
int16_t x361 = INT16_MIN;
static volatile int8_t x364 = INT8_MIN;
volatile int16_t x366 = -1179;
static int64_t x368 = 6330263076LL;
uint64_t x373 = UINT64_MAX;
static int8_t x380 = 11;
int32_t t92 = -82946190;
static uint16_t x383 = 16027U;
int64_t x384 = -1LL;
int8_t x387 = INT8_MAX;
uint8_t x388 = UINT8_MAX;
volatile uint8_t x390 = UINT8_MAX;
uint32_t x392 = UINT32_MAX;
int16_t x402 = INT16_MAX;
uint16_t x404 = UINT16_MAX;
static uint16_t x407 = UINT16_MAX;
int32_t t98 = 46670;


void f0(void) {
	uint16_t x1 = 249U;
	int32_t x2 = 83896;
	int16_t x3 = INT16_MAX;
	uint32_t x4 = UINT32_MAX;

	t0 = (x1*(x2<(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = UINT32_MAX;
	static uint16_t x10 = UINT16_MAX;
	static int16_t x11 = INT16_MIN;
	uint16_t x12 = UINT16_MAX;
	volatile uint32_t t1 = 4120U;

	t1 = (x9*(x10<(x11/x12)));

	if (t1 != 0U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x13 = UINT64_MAX;
	uint8_t x14 = UINT8_MAX;
	int32_t x15 = -1;
	uint32_t x16 = 113544U;
	static volatile uint64_t t2 = UINT64_MAX;

	t2 = (x13*(x14<(x15/x16)));

	if (t2 != UINT64_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 2926379595LLU;
	volatile uint8_t x18 = UINT8_MAX;
	volatile uint32_t x20 = 6909539U;
	uint64_t t3 = 267075968257LLU;

	t3 = (x17*(x18<(x19/x20)));

	if (t3 != 2926379595LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = UINT8_MAX;
	int64_t x22 = INT64_MIN;
	uint16_t x23 = UINT16_MAX;
	volatile int64_t x24 = 5758038LL;

	t4 = (x21*(x22<(x23/x24)));

	if (t4 != 255) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x25 = UINT16_MAX;
	uint8_t x26 = UINT8_MAX;
	int64_t x27 = 420LL;
	volatile uint64_t x28 = UINT64_MAX;
	static int32_t t5 = -448145;

	t5 = (x25*(x26<(x27/x28)));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = INT64_MIN;
	static volatile int32_t x32 = 707;
	int32_t t6 = -16082896;

	t6 = (x29*(x30<(x31/x32)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int16_t x33 = INT16_MIN;
	int16_t x34 = INT16_MAX;
	int64_t x36 = -1LL;
	int32_t t7 = 251438198;

	t7 = (x33*(x34<(x35/x36)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = INT64_MIN;
	int64_t x38 = -1LL;
	volatile uint64_t x39 = 214377784745629820LLU;
	int64_t t8 = -17130648959LL;

	t8 = (x37*(x38<(x39/x40)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = INT64_MIN;
	int8_t x42 = 12;
	int8_t x44 = -14;
	static int64_t t9 = INT64_MIN;

	t9 = (x41*(x42<(x43/x44)));

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MAX;
	static volatile uint8_t x46 = UINT8_MAX;
	int8_t x47 = -4;
	int32_t x48 = INT32_MAX;
	static volatile int32_t t10 = 2;

	t10 = (x45*(x46<(x47/x48)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x49 = 933U;
	uint32_t x50 = 144902324U;
	uint64_t x51 = 127319777511991927LLU;
	int64_t x52 = -1LL;
	int32_t t11 = -363;

	t11 = (x49*(x50<(x51/x52)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x53 = 232570564652LL;
	volatile int8_t x55 = -1;
	int16_t x56 = -4025;
	int64_t t12 = -7063454693554LL;

	t12 = (x53*(x54<(x55/x56)));

	if (t12 != 232570564652LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x58 = -1LL;
	int16_t x59 = INT16_MAX;
	volatile uint64_t x60 = UINT64_MAX;
	int32_t t13 = -386439298;

	t13 = (x57*(x58<(x59/x60)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x62 = INT16_MIN;
	uint64_t x63 = UINT64_MAX;
	static volatile int32_t t14 = 37641438;

	t14 = (x61*(x62<(x63/x64)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = UINT32_MAX;
	int16_t x66 = -1;
	int32_t x67 = -1;
	int32_t x68 = INT32_MIN;
	uint32_t t15 = UINT32_MAX;

	t15 = (x65*(x66<(x67/x68)));

	if (t15 != UINT32_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x70 = INT8_MAX;
	volatile int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;

	t16 = (x69*(x70<(x71/x72)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x73 = UINT32_MAX;
	int16_t x74 = INT16_MAX;
	uint32_t x75 = UINT32_MAX;
	int64_t x76 = INT64_MIN;
	volatile uint32_t t17 = 2U;

	t17 = (x73*(x74<(x75/x76)));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x77 = UINT64_MAX;
	int32_t x78 = -1;
	int8_t x79 = -1;
	int16_t x80 = INT16_MAX;
	volatile uint64_t t18 = UINT64_MAX;

	t18 = (x77*(x78<(x79/x80)));

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x81 = 105172U;
	int8_t x82 = 3;
	int64_t x83 = INT64_MIN;
	uint16_t x84 = 24U;
	static volatile uint32_t t19 = 27U;

	t19 = (x81*(x82<(x83/x84)));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MIN;
	uint8_t x87 = UINT8_MAX;
	static int8_t x88 = -1;
	int32_t t20 = 467913;

	t20 = (x85*(x86<(x87/x88)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = -1193062;
	int64_t x91 = -13711807LL;
	int16_t x92 = INT16_MAX;
	static volatile int32_t t21 = -20310;

	t21 = (x89*(x90<(x91/x92)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x93 = -7;
	static int32_t x94 = INT32_MIN;
	static int64_t x95 = 693619987185LL;
	uint8_t x96 = UINT8_MAX;
	volatile int32_t t22 = 33139537;

	t22 = (x93*(x94<(x95/x96)));

	if (t22 != -7) { NG(); } else { ; }
	
}

void f23(void) {
	static uint64_t x97 = 12471LLU;
	int64_t x98 = -1LL;
	uint32_t x99 = 50U;
	int8_t x100 = 26;
	volatile uint64_t t23 = 71LLU;

	t23 = (x97*(x98<(x99/x100)));

	if (t23 != 12471LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = 0;
	int8_t x104 = -10;
	int32_t t24 = 197;

	t24 = (x101*(x102<(x103/x104)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = 2U;
	int8_t x107 = INT8_MAX;
	volatile uint32_t t25 = 2U;

	t25 = (x105*(x106<(x107/x108)));

	if (t25 != 2U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = -1;
	uint64_t x110 = UINT64_MAX;
	uint64_t x111 = 4999569668926721LLU;
	static uint32_t x112 = 2695402U;
	volatile int32_t t26 = 2;

	t26 = (x109*(x110<(x111/x112)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x114 = -1378;
	int8_t x115 = INT8_MAX;
	int32_t t27 = 19896753;

	t27 = (x113*(x114<(x115/x116)));

	if (t27 != 127) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = INT16_MAX;
	uint16_t x118 = 226U;
	int64_t x119 = INT64_MIN;
	int8_t x120 = 5;
	volatile int32_t t28 = 386;

	t28 = (x117*(x118<(x119/x120)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x121 = -1LL;
	static int64_t x122 = -1LL;
	int32_t x123 = 360101;
	int16_t x124 = -1;
	static int64_t t29 = 10LL;

	t29 = (x121*(x122<(x123/x124)));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x125 = INT64_MIN;
	int64_t x126 = INT64_MIN;
	static volatile uint8_t x127 = 17U;
	volatile int16_t x128 = 24;
	static volatile int64_t t30 = INT64_MIN;

	t30 = (x125*(x126<(x127/x128)));

	if (t30 != INT64_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	static int16_t x130 = INT16_MAX;
	static volatile uint32_t x131 = 508153U;
	uint32_t x132 = 477U;
	int32_t t31 = -2822762;

	t31 = (x129*(x130<(x131/x132)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x134 = -14;
	volatile uint64_t x136 = UINT64_MAX;

	t32 = (x133*(x134<(x135/x136)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MAX;
	int16_t x138 = 1;
	int64_t x139 = INT64_MIN;
	volatile int64_t t33 = INT64_MAX;

	t33 = (x137*(x138<(x139/x140)));

	if (t33 != INT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x141 = -42;
	volatile int8_t x142 = INT8_MIN;
	uint64_t x143 = UINT64_MAX;
	int32_t x144 = INT32_MAX;
	static volatile int32_t t34 = -10684386;

	t34 = (x141*(x142<(x143/x144)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = INT16_MIN;
	static int8_t x146 = -1;
	int16_t x147 = INT16_MAX;
	int16_t x148 = 23;
	volatile int32_t t35 = 136418;

	t35 = (x145*(x146<(x147/x148)));

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x149 = 67U;
	int32_t x150 = -736269;
	int32_t t36 = 210328124;

	t36 = (x149*(x150<(x151/x152)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x153 = 5842739351997LL;
	int64_t x154 = INT64_MIN;
	static volatile int64_t x155 = 43821882918692LL;
	int64_t x156 = -1LL;
	int64_t t37 = -1479418353LL;

	t37 = (x153*(x154<(x155/x156)));

	if (t37 != 5842739351997LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x157 = UINT32_MAX;
	int8_t x158 = INT8_MIN;
	int16_t x159 = INT16_MIN;
	int8_t x160 = -47;
	uint32_t t38 = UINT32_MAX;

	t38 = (x157*(x158<(x159/x160)));

	if (t38 != UINT32_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x161 = -1;
	uint8_t x162 = 11U;
	volatile int16_t x163 = INT16_MIN;
	static int16_t x164 = -1;
	int32_t t39 = -309;

	t39 = (x161*(x162<(x163/x164)));

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x165 = UINT16_MAX;
	int64_t x166 = INT64_MAX;
	static int16_t x167 = -8059;
	volatile int8_t x168 = INT8_MIN;
	volatile int32_t t40 = -100;

	t40 = (x165*(x166<(x167/x168)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x169 = -1;
	volatile uint32_t x170 = UINT32_MAX;
	int8_t x171 = INT8_MAX;
	int32_t t41 = -286050346;

	t41 = (x169*(x170<(x171/x172)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x173 = 3650991LLU;
	int8_t x174 = INT8_MIN;
	uint16_t x175 = 10U;
	int64_t x176 = -15LL;

	t42 = (x173*(x174<(x175/x176)));

	if (t42 != 3650991LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = 7U;
	int16_t x178 = 1744;
	volatile uint8_t x179 = 5U;
	int16_t x180 = INT16_MIN;

	t43 = (x177*(x178<(x179/x180)));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x181 = 3U;
	uint8_t x182 = UINT8_MAX;
	volatile int16_t x184 = -1;
	volatile uint32_t t44 = 172U;

	t44 = (x181*(x182<(x183/x184)));

	if (t44 != 3U) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x185 = INT8_MIN;
	uint32_t x186 = UINT32_MAX;
	static int32_t x187 = 608003740;
	static uint32_t x188 = 400U;
	int32_t t45 = -179;

	t45 = (x185*(x186<(x187/x188)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x189 = 147254U;
	int16_t x190 = -121;
	static volatile int16_t x191 = -6;
	int64_t x192 = INT64_MAX;
	volatile uint32_t t46 = 4U;

	t46 = (x189*(x190<(x191/x192)));

	if (t46 != 147254U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x194 = 49;
	int16_t x195 = -4935;
	int16_t x196 = INT16_MIN;
	volatile int32_t t47 = -2792;

	t47 = (x193*(x194<(x195/x196)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MIN;
	int64_t x198 = 747829LL;
	static volatile int16_t x199 = INT16_MIN;
	int8_t x200 = INT8_MIN;
	int32_t t48 = -17;

	t48 = (x197*(x198<(x199/x200)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x201 = 118687926240190LLU;
	static int8_t x202 = 24;
	static uint16_t x203 = 457U;
	volatile uint8_t x204 = 4U;

	t49 = (x201*(x202<(x203/x204)));

	if (t49 != 118687926240190LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x205 = 19U;
	uint32_t x207 = UINT32_MAX;
	int16_t x208 = INT16_MAX;

	t50 = (x205*(x206<(x207/x208)));

	if (t50 != 19) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x209 = INT8_MIN;
	uint32_t x210 = 752372055U;
	static uint32_t x211 = 571931791U;
	int16_t x212 = 368;
	int32_t t51 = -1;

	t51 = (x209*(x210<(x211/x212)));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x213 = 3949;
	int64_t x214 = INT64_MIN;
	volatile int32_t x215 = INT32_MAX;
	int32_t x216 = INT32_MIN;
	volatile int32_t t52 = -4221;

	t52 = (x213*(x214<(x215/x216)));

	if (t52 != 3949) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint16_t x218 = 11U;
	int16_t x219 = INT16_MAX;
	int32_t t53 = -19761836;

	t53 = (x217*(x218<(x219/x220)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = -8305;
	int64_t x222 = INT64_MAX;
	uint32_t x223 = 5539U;
	static uint64_t x224 = UINT64_MAX;
	volatile int32_t t54 = -170751863;

	t54 = (x221*(x222<(x223/x224)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x225 = 14U;
	volatile int8_t x226 = -1;
	volatile int32_t t55 = -25;

	t55 = (x225*(x226<(x227/x228)));

	if (t55 != 14) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x230 = INT32_MAX;
	int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MIN;
	int32_t t56 = -2189873;

	t56 = (x229*(x230<(x231/x232)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x235 = INT32_MIN;
	int32_t x236 = INT32_MIN;
	volatile uint32_t t57 = 32750485U;

	t57 = (x233*(x234<(x235/x236)));

	if (t57 != 0U) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x237 = -3322336;
	uint8_t x238 = 7U;
	uint64_t x240 = UINT64_MAX;
	int32_t t58 = 10;

	t58 = (x237*(x238<(x239/x240)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x241 = UINT32_MAX;
	volatile int8_t x242 = -7;
	static uint32_t x243 = 1281788U;
	int64_t x244 = INT64_MAX;
	uint32_t t59 = UINT32_MAX;

	t59 = (x241*(x242<(x243/x244)));

	if (t59 != UINT32_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x245 = -1LL;
	volatile int64_t x246 = -1LL;
	volatile int32_t x248 = INT32_MIN;
	static volatile int64_t t60 = -481857340759105035LL;

	t60 = (x245*(x246<(x247/x248)));

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = INT64_MIN;
	volatile int16_t x250 = 15455;
	uint16_t x251 = 137U;
	volatile int64_t t61 = -14LL;

	t61 = (x249*(x250<(x251/x252)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = INT16_MAX;
	int16_t x254 = INT16_MAX;
	int32_t t62 = 939920;

	t62 = (x253*(x254<(x255/x256)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x257 = INT8_MAX;
	int32_t x259 = -1;
	static int16_t x260 = INT16_MAX;
	volatile int32_t t63 = 47628178;

	t63 = (x257*(x258<(x259/x260)));

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x262 = 25;
	volatile int32_t x263 = -1;
	static uint32_t x264 = 5U;
	volatile int32_t t64 = 1;

	t64 = (x261*(x262<(x263/x264)));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x266 = INT16_MIN;
	int8_t x267 = INT8_MIN;
	static volatile int64_t x268 = 2545196920LL;
	static uint64_t t65 = 636518355609LLU;

	t65 = (x265*(x266<(x267/x268)));

	if (t65 != 7LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = 5494098920694LLU;
	int32_t x270 = INT32_MIN;
	static int16_t x271 = INT16_MIN;
	uint32_t x272 = 512534829U;
	volatile uint64_t t66 = 15665272LLU;

	t66 = (x269*(x270<(x271/x272)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x273 = INT32_MAX;
	static int8_t x274 = 1;
	volatile uint32_t x275 = UINT32_MAX;

	t67 = (x273*(x274<(x275/x276)));

	if (t67 != INT32_MAX) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint64_t x277 = 15055794LLU;
	static uint8_t x278 = UINT8_MAX;
	uint32_t x279 = 412U;
	static int16_t x280 = INT16_MIN;
	volatile uint64_t t68 = 50876612897LLU;

	t68 = (x277*(x278<(x279/x280)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x281 = 13U;
	static int16_t x282 = INT16_MIN;
	volatile int16_t x283 = -1;
	int32_t t69 = 23898;

	t69 = (x281*(x282<(x283/x284)));

	if (t69 != 13) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x285 = 11241LLU;
	static int64_t x286 = 242198225075504LL;
	static int16_t x287 = INT16_MAX;
	uint32_t x288 = 1785U;
	volatile uint64_t t70 = 1593500237116LLU;

	t70 = (x285*(x286<(x287/x288)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x289 = INT16_MIN;
	static int16_t x290 = -141;
	uint8_t x291 = 94U;
	uint32_t x292 = UINT32_MAX;
	int32_t t71 = 253810124;

	t71 = (x289*(x290<(x291/x292)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x294 = -1;
	volatile int8_t x295 = INT8_MIN;
	int16_t x296 = -1000;

	t72 = (x293*(x294<(x295/x296)));

	if (t72 != 2U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x299 = INT32_MIN;

	t73 = (x297*(x298<(x299/x300)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = -1;
	static int64_t x302 = INT64_MAX;
	volatile uint32_t x303 = 42U;
	static uint32_t x304 = 30350061U;

	t74 = (x301*(x302<(x303/x304)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x306 = 180438LL;
	int8_t x307 = INT8_MAX;
	int32_t x308 = INT32_MIN;
	static int64_t t75 = -11779LL;

	t75 = (x305*(x306<(x307/x308)));

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x309 = 10716663LLU;
	int64_t x311 = INT64_MIN;
	static int32_t x312 = -15765;
	static uint64_t t76 = 121LLU;

	t76 = (x309*(x310<(x311/x312)));

	if (t76 != 10716663LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x314 = INT8_MIN;
	uint16_t x315 = UINT16_MAX;
	int64_t x316 = -1LL;
	volatile int32_t t77 = -64848362;

	t77 = (x313*(x314<(x315/x316)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x317 = 8U;
	int32_t x318 = -11556;
	int32_t x319 = -2;
	int32_t t78 = 483020;

	t78 = (x317*(x318<(x319/x320)));

	if (t78 != 8) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x321 = -1LL;
	static volatile int64_t x322 = -4113617095490LL;
	volatile int64_t x323 = -20035117660694835LL;
	int64_t x324 = INT64_MIN;
	static int64_t t79 = -3152887304599LL;

	t79 = (x321*(x322<(x323/x324)));

	if (t79 != -1LL) { NG(); } else { ; }
	
}

void f80(void) {
	static uint32_t x326 = UINT32_MAX;
	volatile uint32_t x327 = UINT32_MAX;
	volatile int32_t x328 = 151112;

	t80 = (x325*(x326<(x327/x328)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x333 = UINT32_MAX;
	int8_t x334 = -1;
	static int16_t x335 = 451;
	int8_t x336 = INT8_MAX;
	static uint32_t t81 = UINT32_MAX;

	t81 = (x333*(x334<(x335/x336)));

	if (t81 != UINT32_MAX) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x337 = 318;
	int8_t x338 = 5;
	static volatile int8_t x339 = -1;

	t82 = (x337*(x338<(x339/x340)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x341 = 15U;
	static int64_t x342 = INT64_MIN;
	int8_t x343 = INT8_MIN;
	volatile uint8_t x344 = 76U;
	int32_t t83 = -1;

	t83 = (x341*(x342<(x343/x344)));

	if (t83 != 15) { NG(); } else { ; }
	
}

void f84(void) {
	static uint32_t x345 = 50203017U;
	uint64_t x346 = 7662956204LLU;
	int8_t x347 = INT8_MAX;
	static volatile uint16_t x348 = UINT16_MAX;
	static uint32_t t84 = 39U;

	t84 = (x345*(x346<(x347/x348)));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x349 = -1;
	uint32_t x350 = UINT32_MAX;
	int8_t x351 = INT8_MAX;
	static volatile uint64_t x352 = 65395745453704258LLU;
	volatile int32_t t85 = 10;

	t85 = (x349*(x350<(x351/x352)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint64_t x353 = 29LLU;
	uint16_t x354 = UINT16_MAX;
	int8_t x355 = 22;
	int16_t x356 = -21;

	t86 = (x353*(x354<(x355/x356)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x357 = 105717669LLU;
	uint64_t x358 = UINT64_MAX;
	uint32_t x359 = 1783090879U;
	int8_t x360 = 15;
	uint64_t t87 = 586893765454604379LLU;

	t87 = (x357*(x358<(x359/x360)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x362 = -1LL;
	uint32_t x363 = 172193U;
	int32_t t88 = -22;

	t88 = (x361*(x362<(x363/x364)));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x365 = -1;
	uint8_t x367 = UINT8_MAX;
	int32_t t89 = -24521;

	t89 = (x365*(x366<(x367/x368)));

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x369 = 58477289;
	volatile int64_t x370 = -313665450107132059LL;
	static volatile uint8_t x371 = UINT8_MAX;
	uint64_t x372 = UINT64_MAX;
	volatile int32_t t90 = -14128213;

	t90 = (x369*(x370<(x371/x372)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x374 = UINT16_MAX;
	static int8_t x375 = INT8_MIN;
	static uint16_t x376 = 128U;
	static uint64_t t91 = 2805405LLU;

	t91 = (x373*(x374<(x375/x376)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x377 = INT16_MAX;
	volatile int64_t x378 = INT64_MAX;
	static int64_t x379 = INT64_MAX;

	t92 = (x377*(x378<(x379/x380)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x381 = -25;
	uint32_t x382 = UINT32_MAX;
	int32_t t93 = -15;

	t93 = (x381*(x382<(x383/x384)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x385 = -277;
	uint16_t x386 = 1466U;
	int32_t t94 = 6909;

	t94 = (x385*(x386<(x387/x388)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int64_t x389 = 13737641218754995LL;
	static uint64_t x391 = 451570LLU;
	volatile int64_t t95 = -5056630596LL;

	t95 = (x389*(x390<(x391/x392)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x397 = 2U;
	int8_t x398 = 0;
	int64_t x399 = -1LL;
	static uint16_t x400 = 14U;
	int32_t t96 = -8124;

	t96 = (x397*(x398<(x399/x400)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x401 = -1;
	uint32_t x403 = 0U;
	volatile int32_t t97 = -222;

	t97 = (x401*(x402<(x403/x404)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x405 = -1;
	uint32_t x406 = UINT32_MAX;
	static volatile int64_t x408 = -48093667507849555LL;

	t98 = (x405*(x406<(x407/x408)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x413 = -1;
	volatile int32_t x414 = 9594298;
	static int16_t x415 = -1;
	volatile uint64_t x416 = UINT64_MAX;
	volatile int32_t t99 = 496;

	t99 = (x413*(x414<(x415/x416)));

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

