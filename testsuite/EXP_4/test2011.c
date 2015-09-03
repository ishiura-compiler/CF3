#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x8 = -7LL;
uint16_t x13 = 2U;
static uint8_t x19 = UINT8_MAX;
int32_t t4 = 56802;
int16_t x21 = 30;
static volatile int32_t t5 = 42758;
int32_t x27 = -1;
static int16_t x31 = INT16_MIN;
int8_t x33 = -1;
volatile int64_t x36 = -1LL;
int64_t x43 = 702008488LL;
static volatile uint8_t x46 = 17U;
static uint16_t x52 = 5U;
int32_t x53 = -1;
static int32_t t15 = -267;
int32_t x67 = INT32_MIN;
volatile uint16_t x69 = 1U;
static volatile int32_t x72 = INT32_MIN;
int32_t x73 = INT32_MIN;
uint32_t x87 = 264812946U;
int32_t t21 = -25224;
static int8_t x95 = INT8_MIN;
int16_t x97 = 0;
volatile int32_t t24 = 567772748;
volatile int16_t x102 = INT16_MIN;
volatile int32_t t26 = 57;
static int16_t x116 = -1;
volatile int32_t t28 = -12027560;
int32_t t29 = -12140454;
int8_t x127 = INT8_MAX;
int64_t x128 = 70183503295783474LL;
volatile int32_t t34 = -147272;
uint8_t x146 = 45U;
static volatile int16_t x153 = INT16_MIN;
int32_t x159 = -1;
volatile int32_t x168 = INT32_MIN;
volatile int32_t x169 = INT32_MIN;
int32_t x173 = INT32_MIN;
int8_t x177 = INT8_MAX;
int16_t x179 = 7;
static int64_t x182 = -1LL;
int8_t x184 = 1;
int32_t t46 = 8717968;
volatile int8_t x193 = -1;
static uint32_t x195 = UINT32_MAX;
int16_t x201 = -1;
static int16_t x207 = -1;
int64_t x223 = 1557LL;
int64_t x226 = -1687894866198LL;
int32_t x227 = 286;
int32_t t57 = -24;
uint16_t x239 = UINT16_MAX;
int16_t x244 = INT16_MIN;
volatile int32_t t60 = 1690;
int32_t t62 = 6392666;
uint8_t x260 = UINT8_MAX;
volatile int32_t t65 = -896924;
uint32_t x266 = 6873U;
static uint16_t x267 = 91U;
static uint64_t x273 = 75799547790094748LLU;
volatile uint16_t x282 = UINT16_MAX;
static volatile int64_t x286 = INT64_MIN;
static int64_t x287 = -1LL;
static int32_t t71 = 32798184;
int64_t x292 = INT64_MIN;
int8_t x298 = INT8_MIN;
static uint16_t x306 = 16446U;
static uint8_t x309 = 33U;
uint32_t x311 = UINT32_MAX;
static volatile uint16_t x312 = 1U;
uint16_t x314 = 387U;
uint32_t x319 = 2U;
int32_t t79 = 1;
int32_t t81 = 158748;
int32_t t82 = -3;
uint8_t x335 = UINT8_MAX;
static volatile uint32_t x336 = 1575787742U;
int32_t x338 = 1;
int8_t x346 = INT8_MIN;
uint16_t x348 = 12508U;
int32_t x350 = INT32_MAX;
int8_t x361 = 61;
uint64_t x366 = 82965LLU;
static int64_t x371 = -1LL;
int64_t x373 = INT64_MIN;
int32_t t93 = -217056;
int8_t x382 = INT8_MIN;
int16_t x383 = INT16_MAX;
int16_t x384 = 155;
volatile int64_t x394 = INT64_MAX;
static uint64_t x399 = UINT64_MAX;
int32_t t99 = -2920;


void f0(void) {
	int32_t x1 = INT32_MAX;
	int64_t x2 = INT64_MAX;
	int32_t x3 = -1;
	uint8_t x4 = 5U;
	volatile int32_t t0 = -9329119;

	t0 = (x1<(x2|(x3|x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint16_t x5 = UINT16_MAX;
	static int8_t x6 = INT8_MIN;
	int8_t x7 = 0;
	volatile int32_t t1 = 1934;

	t1 = (x5<(x6|(x7|x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	int64_t x10 = INT64_MIN;
	uint32_t x11 = 17445U;
	int8_t x12 = -1;
	static int32_t t2 = 8413495;

	t2 = (x9<(x10|(x11|x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint16_t x14 = 1U;
	static int32_t x15 = -1;
	uint32_t x16 = 17U;
	static int32_t t3 = 1431;

	t3 = (x13<(x14|(x15|x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	uint8_t x18 = UINT8_MAX;
	static uint64_t x20 = 6548581026661205LLU;

	t4 = (x17<(x18|(x19|x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MAX;
	int16_t x23 = INT16_MAX;
	volatile uint16_t x24 = 15U;

	t5 = (x21<(x22|(x23|x24)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 1021LLU;
	uint16_t x26 = UINT16_MAX;
	uint64_t x28 = 49014510707545730LLU;
	static int32_t t6 = -42042749;

	t6 = (x25<(x26|(x27|x28)));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	int64_t x30 = -1LL;
	int16_t x32 = INT16_MAX;
	volatile int32_t t7 = 26025;

	t7 = (x29<(x30|(x31|x32)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = 3183U;
	static int8_t x35 = -1;
	static volatile int32_t t8 = 633;

	t8 = (x33<(x34|(x35|x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint32_t x37 = UINT32_MAX;
	int64_t x38 = 27027144LL;
	uint8_t x39 = UINT8_MAX;
	static volatile int8_t x40 = -1;
	volatile int32_t t9 = -871250089;

	t9 = (x37<(x38|(x39|x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = 9U;
	static int8_t x42 = INT8_MIN;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = -3425;

	t10 = (x41<(x42|(x43|x44)));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	uint32_t x47 = UINT32_MAX;
	static uint64_t x48 = 237885200659444886LLU;
	volatile int32_t t11 = -18;

	t11 = (x45<(x46|(x47|x48)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = INT16_MIN;
	volatile uint16_t x50 = 86U;
	uint64_t x51 = UINT64_MAX;
	volatile int32_t t12 = 337868610;

	t12 = (x49<(x50|(x51|x52)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x54 = 1907022012931312862LL;
	static uint16_t x55 = 46U;
	int8_t x56 = -7;
	volatile int32_t t13 = 1;

	t13 = (x53<(x54|(x55|x56)));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 1878U;
	uint16_t x58 = UINT16_MAX;
	static int32_t x59 = -1;
	int32_t x60 = -1;
	volatile int32_t t14 = 9;

	t14 = (x57<(x58|(x59|x60)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = UINT8_MAX;
	static volatile uint64_t x62 = UINT64_MAX;
	uint64_t x63 = 57031469LLU;
	int64_t x64 = INT64_MIN;

	t15 = (x61<(x62|(x63|x64)));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 6270363U;
	uint64_t x66 = 1891130292168LLU;
	volatile int8_t x68 = -1;
	int32_t t16 = 49046;

	t16 = (x65<(x66|(x67|x68)));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = 446;
	static uint8_t x71 = 14U;
	static int32_t t17 = -35;

	t17 = (x69<(x70|(x71|x72)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x74 = INT64_MIN;
	int64_t x75 = -1LL;
	static uint32_t x76 = 60U;
	static volatile int32_t t18 = -390917505;

	t18 = (x73<(x74|(x75|x76)));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint16_t x77 = 2U;
	uint64_t x78 = UINT64_MAX;
	uint64_t x79 = 602929196876LLU;
	volatile uint16_t x80 = 183U;
	volatile int32_t t19 = 491859;

	t19 = (x77<(x78|(x79|x80)));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MAX;
	int32_t x82 = INT32_MIN;
	volatile int8_t x83 = INT8_MAX;
	int8_t x84 = -1;
	volatile int32_t t20 = -1;

	t20 = (x81<(x82|(x83|x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = 51U;
	static uint16_t x86 = UINT16_MAX;
	static uint64_t x88 = 18319326893349LLU;

	t21 = (x85<(x86|(x87|x88)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = 678053364356207LL;
	uint16_t x90 = 182U;
	static uint16_t x91 = UINT16_MAX;
	static uint8_t x92 = UINT8_MAX;
	volatile int32_t t22 = -12213215;

	t22 = (x89<(x90|(x91|x92)));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int64_t x94 = 47LL;
	volatile uint8_t x96 = 15U;
	volatile int32_t t23 = 274724;

	t23 = (x93<(x94|(x95|x96)));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x98 = -2;
	uint16_t x99 = UINT16_MAX;
	static int16_t x100 = 0;

	t24 = (x97<(x98|(x99|x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int8_t x103 = INT8_MAX;
	int64_t x104 = 99000269LL;
	int32_t t25 = -353601724;

	t25 = (x101<(x102|(x103|x104)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = INT64_MIN;
	volatile uint8_t x106 = 6U;
	int16_t x107 = INT16_MIN;
	uint16_t x108 = 1122U;

	t26 = (x105<(x106|(x107|x108)));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -26;
	int64_t x110 = -8107965LL;
	static uint16_t x111 = UINT16_MAX;
	int64_t x112 = INT64_MIN;
	int32_t t27 = -928819710;

	t27 = (x109<(x110|(x111|x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 18U;
	uint8_t x114 = UINT8_MAX;
	int64_t x115 = -1LL;

	t28 = (x113<(x114|(x115|x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	static uint32_t x118 = 161U;
	int32_t x119 = -1;
	static int64_t x120 = 5736030544612LL;

	t29 = (x117<(x118|(x119|x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x121 = INT8_MIN;
	static int8_t x122 = INT8_MAX;
	uint16_t x123 = UINT16_MAX;
	uint16_t x124 = UINT16_MAX;
	volatile int32_t t30 = -1;

	t30 = (x121<(x122|(x123|x124)));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x125 = 250U;
	uint32_t x126 = 110735U;
	volatile int32_t t31 = 0;

	t31 = (x125<(x126|(x127|x128)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = -49;
	int64_t x130 = -204583090149003169LL;
	volatile int64_t x131 = -1LL;
	int32_t x132 = INT32_MIN;
	static volatile int32_t t32 = -317;

	t32 = (x129<(x130|(x131|x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 1052280U;
	uint64_t x134 = 64165644321471042LLU;
	volatile int8_t x135 = INT8_MIN;
	static volatile uint64_t x136 = UINT64_MAX;
	static int32_t t33 = 6578882;

	t33 = (x133<(x134|(x135|x136)));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	int32_t x138 = 1;
	volatile int16_t x139 = INT16_MIN;
	static int32_t x140 = INT32_MAX;

	t34 = (x137<(x138|(x139|x140)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = UINT16_MAX;
	uint8_t x142 = 2U;
	int32_t x143 = INT32_MAX;
	int8_t x144 = -1;
	int32_t t35 = 4779914;

	t35 = (x141<(x142|(x143|x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x145 = INT8_MIN;
	static uint16_t x147 = 2U;
	int8_t x148 = 15;
	static volatile int32_t t36 = 142;

	t36 = (x145<(x146|(x147|x148)));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = UINT64_MAX;
	int64_t x150 = -1425837857537044303LL;
	int8_t x151 = 9;
	int16_t x152 = INT16_MIN;
	static volatile int32_t t37 = -1209962;

	t37 = (x149<(x150|(x151|x152)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint32_t x154 = 246115948U;
	volatile uint16_t x155 = 403U;
	int32_t x156 = INT32_MAX;
	volatile int32_t t38 = 24115793;

	t38 = (x153<(x154|(x155|x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = -1;
	static int32_t x158 = INT32_MIN;
	int16_t x160 = -645;
	int32_t t39 = 124200;

	t39 = (x157<(x158|(x159|x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int8_t x161 = INT8_MIN;
	uint16_t x162 = 3080U;
	int8_t x163 = INT8_MAX;
	static int32_t x164 = -3962176;
	volatile int32_t t40 = -27329;

	t40 = (x161<(x162|(x163|x164)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = -1;
	static int8_t x166 = INT8_MIN;
	volatile uint16_t x167 = 15U;
	int32_t t41 = -194144;

	t41 = (x165<(x166|(x167|x168)));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = -12;
	static int16_t x171 = -1;
	int8_t x172 = INT8_MIN;
	int32_t t42 = 24317;

	t42 = (x169<(x170|(x171|x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x174 = -1;
	uint32_t x175 = 6454U;
	int32_t x176 = 308764971;
	volatile int32_t t43 = -95186210;

	t43 = (x173<(x174|(x175|x176)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x178 = INT16_MIN;
	int32_t x180 = -2828370;
	static int32_t t44 = -11;

	t44 = (x177<(x178|(x179|x180)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = -1;
	int32_t x183 = -1;
	volatile int32_t t45 = 27546;

	t45 = (x181<(x182|(x183|x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = 58;
	uint32_t x186 = UINT32_MAX;
	int32_t x187 = INT32_MIN;
	int32_t x188 = INT32_MIN;

	t46 = (x185<(x186|(x187|x188)));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static uint64_t x189 = 8577082751LLU;
	int8_t x190 = -1;
	uint32_t x191 = UINT32_MAX;
	int16_t x192 = INT16_MIN;
	int32_t t47 = -335482690;

	t47 = (x189<(x190|(x191|x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = INT16_MAX;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 2037;

	t48 = (x193<(x194|(x195|x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 226173U;
	uint64_t x198 = 804022131124083525LLU;
	uint64_t x199 = UINT64_MAX;
	static int8_t x200 = INT8_MAX;
	volatile int32_t t49 = -4;

	t49 = (x197<(x198|(x199|x200)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x202 = INT8_MAX;
	int16_t x203 = INT16_MIN;
	int16_t x204 = INT16_MIN;
	int32_t t50 = 208;

	t50 = (x201<(x202|(x203|x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1395LL;
	static volatile int16_t x206 = 0;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 79118;

	t51 = (x205<(x206|(x207|x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	static uint32_t x210 = UINT32_MAX;
	static volatile int64_t x211 = INT64_MIN;
	volatile int64_t x212 = INT64_MIN;
	volatile int32_t t52 = 777458;

	t52 = (x209<(x210|(x211|x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x213 = 14U;
	int16_t x214 = -6574;
	static int8_t x215 = 1;
	int16_t x216 = 0;
	static int32_t t53 = 99946;

	t53 = (x213<(x214|(x215|x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x217 = UINT64_MAX;
	volatile uint32_t x218 = 901U;
	uint16_t x219 = UINT16_MAX;
	static volatile int64_t x220 = INT64_MAX;
	int32_t t54 = -73948651;

	t54 = (x217<(x218|(x219|x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = INT32_MAX;
	static int64_t x222 = INT64_MAX;
	int32_t x224 = INT32_MAX;
	volatile int32_t t55 = 210856;

	t55 = (x221<(x222|(x223|x224)));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MIN;
	int16_t x228 = -471;
	volatile int32_t t56 = -575623;

	t56 = (x225<(x226|(x227|x228)));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = -21;
	int64_t x230 = -1LL;
	volatile uint64_t x231 = 141441566715LLU;
	int32_t x232 = INT32_MIN;

	t57 = (x229<(x230|(x231|x232)));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 0;
	int32_t x234 = -1;
	int32_t x235 = INT32_MIN;
	int64_t x236 = -1LL;
	int32_t t58 = -7970562;

	t58 = (x233<(x234|(x235|x236)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	int32_t x238 = -1;
	uint8_t x240 = 53U;
	static volatile int32_t t59 = -1;

	t59 = (x237<(x238|(x239|x240)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x241 = 100U;
	volatile int16_t x242 = -5;
	volatile int32_t x243 = INT32_MAX;

	t60 = (x241<(x242|(x243|x244)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = INT16_MIN;
	volatile int8_t x246 = INT8_MAX;
	uint16_t x247 = UINT16_MAX;
	static uint16_t x248 = 807U;
	volatile int32_t t61 = -34;

	t61 = (x245<(x246|(x247|x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = 27;
	uint64_t x250 = 30LLU;
	int8_t x251 = -1;
	volatile int32_t x252 = 239265982;

	t62 = (x249<(x250|(x251|x252)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	int32_t x254 = -1;
	volatile int16_t x255 = -1;
	int8_t x256 = -1;
	volatile int32_t t63 = 4306731;

	t63 = (x253<(x254|(x255|x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	static int64_t x258 = -3053388103925LL;
	volatile int64_t x259 = -373975393139641345LL;
	static int32_t t64 = -1444;

	t64 = (x257<(x258|(x259|x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int32_t x262 = -41596625;
	static int64_t x263 = INT64_MAX;
	int16_t x264 = INT16_MIN;

	t65 = (x261<(x262|(x263|x264)));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 3447334;
	static volatile uint32_t x268 = UINT32_MAX;
	int32_t t66 = -12413;

	t66 = (x265<(x266|(x267|x268)));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int64_t x269 = INT64_MIN;
	uint8_t x270 = 8U;
	volatile int32_t x271 = 45284;
	uint64_t x272 = UINT64_MAX;
	volatile int32_t t67 = 23465477;

	t67 = (x269<(x270|(x271|x272)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x274 = -1469557;
	uint8_t x275 = UINT8_MAX;
	int64_t x276 = INT64_MIN;
	volatile int32_t t68 = -78836;

	t68 = (x273<(x274|(x275|x276)));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 4;
	volatile int64_t x278 = INT64_MIN;
	int16_t x279 = INT16_MAX;
	static uint32_t x280 = UINT32_MAX;
	int32_t t69 = 30309444;

	t69 = (x277<(x278|(x279|x280)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	volatile int16_t x283 = INT16_MIN;
	volatile int64_t x284 = INT64_MIN;
	static volatile int32_t t70 = 249487807;

	t70 = (x281<(x282|(x283|x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	static int64_t x288 = INT64_MIN;

	t71 = (x285<(x286|(x287|x288)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x289 = 110U;
	int32_t x290 = 651;
	int32_t x291 = INT32_MIN;
	volatile int32_t t72 = 1397517;

	t72 = (x289<(x290|(x291|x292)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint8_t x293 = UINT8_MAX;
	uint16_t x294 = UINT16_MAX;
	int8_t x295 = INT8_MAX;
	uint32_t x296 = 20574U;
	int32_t t73 = 1;

	t73 = (x293<(x294|(x295|x296)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = UINT64_MAX;
	int8_t x299 = -1;
	int32_t x300 = 223920;
	volatile int32_t t74 = -67375;

	t74 = (x297<(x298|(x299|x300)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = 164;
	int8_t x302 = INT8_MAX;
	uint8_t x303 = 0U;
	int32_t x304 = INT32_MIN;
	volatile int32_t t75 = 13972355;

	t75 = (x301<(x302|(x303|x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x305 = INT64_MAX;
	int16_t x307 = -1;
	int16_t x308 = INT16_MIN;
	static volatile int32_t t76 = 0;

	t76 = (x305<(x306|(x307|x308)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x310 = -1;
	static int32_t t77 = 1;

	t77 = (x309<(x310|(x311|x312)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = INT32_MIN;
	int32_t x315 = -7;
	static uint64_t x316 = UINT64_MAX;
	static volatile int32_t t78 = -17;

	t78 = (x313<(x314|(x315|x316)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x317 = 21235767880054399LLU;
	uint16_t x318 = 1862U;
	static int8_t x320 = INT8_MAX;

	t79 = (x317<(x318|(x319|x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 154404769U;
	volatile int32_t x322 = INT32_MAX;
	volatile int64_t x323 = INT64_MIN;
	int8_t x324 = INT8_MIN;
	volatile int32_t t80 = -54781590;

	t80 = (x321<(x322|(x323|x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x325 = 667236339114LL;
	int32_t x326 = INT32_MIN;
	uint64_t x327 = 797LLU;
	int8_t x328 = INT8_MIN;

	t81 = (x325<(x326|(x327|x328)));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = 75U;
	int64_t x330 = INT64_MIN;
	volatile int64_t x331 = INT64_MIN;
	volatile int8_t x332 = -1;

	t82 = (x329<(x330|(x331|x332)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = 46118269U;
	static uint8_t x334 = 52U;
	volatile int32_t t83 = 1052;

	t83 = (x333<(x334|(x335|x336)));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = 148LLU;
	int16_t x339 = -195;
	int16_t x340 = -12;
	volatile int32_t t84 = -801715;

	t84 = (x337<(x338|(x339|x340)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	int16_t x342 = INT16_MAX;
	uint16_t x343 = UINT16_MAX;
	int16_t x344 = INT16_MIN;
	volatile int32_t t85 = -4;

	t85 = (x341<(x342|(x343|x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int64_t x347 = -267458LL;
	volatile int32_t t86 = -8185823;

	t86 = (x345<(x346|(x347|x348)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x349 = INT64_MAX;
	uint32_t x351 = 1024782U;
	uint64_t x352 = 3570385LLU;
	int32_t t87 = -79378981;

	t87 = (x349<(x350|(x351|x352)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x353 = INT32_MIN;
	uint16_t x354 = 0U;
	static int32_t x355 = INT32_MIN;
	int16_t x356 = -16209;
	static volatile int32_t t88 = 851;

	t88 = (x353<(x354|(x355|x356)));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	int8_t x358 = -1;
	int32_t x359 = 94;
	uint64_t x360 = UINT64_MAX;
	volatile int32_t t89 = 232833;

	t89 = (x357<(x358|(x359|x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x362 = 15355737788469515LLU;
	int16_t x363 = 856;
	int64_t x364 = -5111002478242745LL;
	static int32_t t90 = 18;

	t90 = (x361<(x362|(x363|x364)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x365 = 1237715U;
	int16_t x367 = 123;
	volatile int8_t x368 = -1;
	volatile int32_t t91 = -558;

	t91 = (x365<(x366|(x367|x368)));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 177U;
	volatile uint8_t x370 = UINT8_MAX;
	uint16_t x372 = 497U;
	volatile int32_t t92 = -271;

	t92 = (x369<(x370|(x371|x372)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x374 = -95184;
	int8_t x375 = 1;
	volatile int8_t x376 = -1;

	t93 = (x373<(x374|(x375|x376)));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	int16_t x378 = INT16_MIN;
	volatile int64_t x379 = INT64_MIN;
	volatile uint8_t x380 = 3U;
	volatile int32_t t94 = 85;

	t94 = (x377<(x378|(x379|x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = 83;
	volatile int32_t t95 = -856;

	t95 = (x381<(x382|(x383|x384)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = -1;
	volatile int32_t x386 = -1;
	uint8_t x387 = UINT8_MAX;
	uint16_t x388 = 0U;
	static int32_t t96 = -1;

	t96 = (x385<(x386|(x387|x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = -1588847133651346750LL;
	int16_t x390 = INT16_MAX;
	volatile int32_t x391 = INT32_MIN;
	int32_t x392 = INT32_MIN;
	static int32_t t97 = 1926;

	t97 = (x389<(x390|(x391|x392)));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 29466U;
	int64_t x395 = -3LL;
	int16_t x396 = 8528;
	volatile int32_t t98 = 2867;

	t98 = (x393<(x394|(x395|x396)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -56330845101167LL;
	int32_t x398 = INT32_MAX;
	uint16_t x400 = 7U;

	t99 = (x397<(x398|(x399|x400)));

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

