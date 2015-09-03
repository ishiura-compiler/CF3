#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 0;
int16_t x9 = INT16_MIN;
static int32_t t2 = -561915;
static int16_t x14 = INT16_MAX;
volatile int64_t x15 = INT64_MIN;
static int16_t x18 = 2946;
int32_t x24 = 5115756;
uint64_t x27 = 432850031039LLU;
int32_t x28 = 312000;
volatile uint16_t x30 = 672U;
int64_t x32 = -1LL;
uint16_t x33 = 28343U;
static volatile uint16_t x34 = UINT16_MAX;
int8_t x35 = 0;
volatile int32_t t8 = 103873;
static int8_t x37 = INT8_MIN;
int16_t x39 = -1;
int8_t x40 = INT8_MIN;
int32_t t9 = 70;
volatile int32_t t11 = -229;
static int32_t x69 = -1;
static int32_t x72 = INT32_MIN;
int8_t x77 = -1;
volatile int16_t x80 = 12;
int64_t x85 = -2128744817784862496LL;
static uint16_t x88 = 2U;
int32_t t21 = 61515535;
static volatile int32_t x92 = INT32_MIN;
int32_t t22 = -9240;
int64_t x94 = -1LL;
volatile int32_t t23 = -7480826;
static volatile int64_t x100 = -1LL;
uint16_t x104 = 4051U;
int32_t t25 = -4006420;
static uint16_t x112 = UINT16_MAX;
volatile int32_t t29 = -976124;
uint64_t x122 = UINT64_MAX;
int64_t x127 = INT64_MIN;
uint64_t x128 = 876293479LLU;
int32_t t31 = 68525269;
static volatile int64_t x135 = INT64_MIN;
uint64_t x136 = 111881799LLU;
int16_t x138 = INT16_MIN;
int8_t x141 = 0;
volatile uint64_t x143 = UINT64_MAX;
int8_t x151 = INT8_MIN;
int32_t t37 = 1;
int16_t x154 = -1;
int8_t x156 = INT8_MAX;
int8_t x161 = INT8_MIN;
uint16_t x164 = 1960U;
static uint8_t x165 = 0U;
int64_t x166 = INT64_MIN;
int32_t t41 = 1;
int64_t x181 = -1LL;
int16_t x182 = INT16_MIN;
static int32_t t45 = 0;
int8_t x186 = 4;
uint32_t x190 = 4454U;
volatile int16_t x193 = -3393;
int8_t x204 = -1;
static int32_t t52 = -28008;
int16_t x222 = INT16_MIN;
int16_t x224 = -531;
volatile int32_t t56 = -29;
static volatile int32_t t58 = -64907746;
volatile uint32_t x237 = 448038319U;
volatile int32_t t59 = 1;
int32_t x242 = -65;
uint8_t x245 = UINT8_MAX;
int16_t x256 = -1;
int16_t x259 = -1;
int16_t x261 = INT16_MIN;
static uint8_t x263 = UINT8_MAX;
int16_t x271 = -1;
uint8_t x272 = 20U;
static int32_t x276 = INT32_MAX;
uint64_t x285 = 31915817183885LLU;
int64_t x294 = INT64_MAX;
static int8_t x295 = 0;
static int8_t x296 = INT8_MAX;
uint64_t x298 = 2119LLU;
int32_t x314 = -111;
int32_t t77 = 8;
volatile int32_t t78 = 512759;
int64_t x327 = INT64_MIN;
uint32_t x335 = 711327089U;
int8_t x336 = INT8_MIN;
uint8_t x342 = UINT8_MAX;
static int64_t x344 = 7LL;
static int32_t t84 = -10262;
int32_t x345 = -1;
uint32_t x349 = 123U;
int32_t x353 = 23308414;
int16_t x354 = -1;
int8_t x356 = INT8_MIN;
volatile int32_t t87 = 2874;
int32_t x366 = INT32_MAX;
uint16_t x368 = 13U;
int8_t x369 = -1;
int32_t x374 = -1;
int32_t x391 = 29754;
int8_t x402 = -1;
uint64_t x403 = UINT64_MAX;
volatile int32_t t98 = 2;
static volatile uint32_t x406 = 292U;


void f0(void) {
	int64_t x2 = 2920230LL;
	uint16_t x3 = 11938U;
	static volatile int16_t x4 = 323;
	volatile int32_t t0 = 721335159;

	t0 = ((x1&x2)<=(x3/x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	volatile int16_t x6 = -41;
	int16_t x7 = 1;
	int16_t x8 = -1;
	int32_t t1 = -1032726;

	t1 = ((x5&x6)<=(x7/x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = 10;
	uint16_t x11 = UINT16_MAX;
	int64_t x12 = -8413069157646096LL;

	t2 = ((x9&x10)<=(x11/x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	static int16_t x16 = INT16_MIN;
	int32_t t3 = -95039;

	t3 = ((x13&x14)<=(x15/x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	static uint32_t x19 = 165687997U;
	uint16_t x20 = 3918U;
	int32_t t4 = 5153;

	t4 = ((x17&x18)<=(x19/x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 6;
	static uint8_t x22 = 1U;
	static uint8_t x23 = UINT8_MAX;
	int32_t t5 = 3095871;

	t5 = ((x21&x22)<=(x23/x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int8_t x26 = -1;
	volatile int32_t t6 = -3;

	t6 = ((x25&x26)<=(x27/x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	uint8_t x31 = 98U;
	static int32_t t7 = 6387713;

	t7 = ((x29&x30)<=(x31/x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x36 = 79711354238LLU;

	t8 = ((x33&x34)<=(x35/x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;

	t9 = ((x37&x38)<=(x39/x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 427721521034454132LL;
	uint8_t x42 = 2U;
	int32_t x43 = INT32_MIN;
	int32_t x44 = INT32_MIN;
	volatile int32_t t10 = 279;

	t10 = ((x41&x42)<=(x43/x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = UINT32_MAX;
	static volatile int32_t x46 = -1;
	uint8_t x47 = 3U;
	uint64_t x48 = 213658LLU;

	t11 = ((x45&x46)<=(x47/x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = 11;
	volatile int32_t x50 = -62305112;
	volatile uint32_t x51 = UINT32_MAX;
	volatile int64_t x52 = INT64_MAX;
	int32_t t12 = 11243;

	t12 = ((x49&x50)<=(x51/x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -1LL;
	int64_t x54 = INT64_MAX;
	int64_t x55 = INT64_MIN;
	int32_t x56 = -362166604;
	volatile int32_t t13 = 5609;

	t13 = ((x53&x54)<=(x55/x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MIN;
	uint32_t x58 = UINT32_MAX;
	int64_t x59 = INT64_MAX;
	volatile int16_t x60 = INT16_MAX;
	int32_t t14 = 279678798;

	t14 = ((x57&x58)<=(x59/x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 169746572156LL;
	static int8_t x62 = 0;
	uint16_t x63 = 2087U;
	static int64_t x64 = -1LL;
	volatile int32_t t15 = -64;

	t15 = ((x61&x62)<=(x63/x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 375;
	volatile uint32_t x66 = 0U;
	uint32_t x67 = 6U;
	int8_t x68 = INT8_MAX;
	static int32_t t16 = -33;

	t16 = ((x65&x66)<=(x67/x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	int64_t x71 = 4020218067544913LL;
	int32_t t17 = 83;

	t17 = ((x69&x70)<=(x71/x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = 8220466LL;
	uint8_t x74 = 9U;
	int16_t x75 = INT16_MAX;
	int16_t x76 = -1;
	volatile int32_t t18 = -57535779;

	t18 = ((x73&x74)<=(x75/x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x78 = INT64_MIN;
	volatile int16_t x79 = INT16_MIN;
	int32_t t19 = -13;

	t19 = ((x77&x78)<=(x79/x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	static int64_t x81 = INT64_MAX;
	int64_t x82 = INT64_MIN;
	int8_t x83 = INT8_MAX;
	uint16_t x84 = 1414U;
	static volatile int32_t t20 = -18;

	t20 = ((x81&x82)<=(x83/x84));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = -1;
	int8_t x87 = 10;

	t21 = ((x85&x86)<=(x87/x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 10U;
	int64_t x90 = INT64_MIN;
	int64_t x91 = INT64_MAX;

	t22 = ((x89&x90)<=(x91/x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	volatile uint64_t x95 = 198709472472753LLU;
	uint64_t x96 = 1577956504479528LLU;

	t23 = ((x93&x94)<=(x95/x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x97 = INT8_MIN;
	static uint32_t x98 = 0U;
	int8_t x99 = -1;
	static volatile int32_t t24 = 4889719;

	t24 = ((x97&x98)<=(x99/x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 264623U;
	uint32_t x102 = 5395U;
	int8_t x103 = INT8_MIN;

	t25 = ((x101&x102)<=(x103/x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 3U;
	int16_t x106 = INT16_MAX;
	uint64_t x107 = 15620099355653598LLU;
	volatile uint32_t x108 = UINT32_MAX;
	volatile int32_t t26 = 29551;

	t26 = ((x105&x106)<=(x107/x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = UINT64_MAX;
	static volatile uint32_t x110 = 0U;
	int64_t x111 = INT64_MAX;
	int32_t t27 = 7;

	t27 = ((x109&x110)<=(x111/x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 1U;
	volatile uint8_t x114 = 3U;
	volatile uint32_t x115 = 1785U;
	int64_t x116 = INT64_MAX;
	volatile int32_t t28 = -428069;

	t28 = ((x113&x114)<=(x115/x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x117 = 175360LL;
	static volatile int32_t x118 = INT32_MAX;
	static int32_t x119 = 18618;
	int32_t x120 = INT32_MAX;

	t29 = ((x117&x118)<=(x119/x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = -1;
	static int64_t x123 = INT64_MIN;
	volatile uint64_t x124 = 4398438901072185LLU;
	int32_t t30 = -736;

	t30 = ((x121&x122)<=(x123/x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 0;
	int64_t x126 = INT64_MIN;

	t31 = ((x125&x126)<=(x127/x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 1039389U;
	int64_t x130 = INT64_MAX;
	static uint64_t x131 = UINT64_MAX;
	int64_t x132 = -3501567112LL;
	volatile int32_t t32 = -40183643;

	t32 = ((x129&x130)<=(x131/x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MIN;
	static int16_t x134 = -1;
	int32_t t33 = 209;

	t33 = ((x133&x134)<=(x135/x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x137 = INT16_MIN;
	volatile int64_t x139 = -1LL;
	int8_t x140 = -1;
	int32_t t34 = -23245706;

	t34 = ((x137&x138)<=(x139/x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x142 = 1U;
	uint64_t x144 = 561429LLU;
	int32_t t35 = 303185623;

	t35 = ((x141&x142)<=(x143/x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x145 = 1721026U;
	int32_t x146 = INT32_MIN;
	uint32_t x147 = 2578833U;
	static int16_t x148 = -1;
	int32_t t36 = -180;

	t36 = ((x145&x146)<=(x147/x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	int16_t x150 = INT16_MIN;
	volatile uint8_t x152 = 2U;

	t37 = ((x149&x150)<=(x151/x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = INT64_MIN;
	int8_t x155 = -1;
	int32_t t38 = -590109119;

	t38 = ((x153&x154)<=(x155/x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -1LL;
	uint32_t x158 = 26006947U;
	int8_t x159 = INT8_MIN;
	uint64_t x160 = UINT64_MAX;
	int32_t t39 = -471;

	t39 = ((x157&x158)<=(x159/x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint64_t x162 = 12589887717756405LLU;
	int32_t x163 = INT32_MIN;
	volatile int32_t t40 = 1295970;

	t40 = ((x161&x162)<=(x163/x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x167 = 714U;
	static uint64_t x168 = 3279730335546LLU;

	t41 = ((x165&x166)<=(x167/x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = -1;
	uint64_t x170 = 2688149029418LLU;
	int64_t x171 = -178384875837LL;
	int16_t x172 = -680;
	int32_t t42 = 12460;

	t42 = ((x169&x170)<=(x171/x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -22372;
	volatile int16_t x174 = INT16_MIN;
	int8_t x175 = 32;
	static uint8_t x176 = 1U;
	int32_t t43 = 24;

	t43 = ((x173&x174)<=(x175/x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	int32_t x178 = INT32_MIN;
	volatile int32_t x179 = -1;
	static uint8_t x180 = 1U;
	int32_t t44 = 4564;

	t44 = ((x177&x178)<=(x179/x180));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x183 = INT32_MAX;
	int32_t x184 = INT32_MIN;

	t45 = ((x181&x182)<=(x183/x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	uint32_t x187 = 1U;
	static int8_t x188 = -1;
	volatile int32_t t46 = -304;

	t46 = ((x185&x186)<=(x187/x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x189 = UINT8_MAX;
	int8_t x191 = 11;
	volatile int64_t x192 = INT64_MIN;
	volatile int32_t t47 = 1;

	t47 = ((x189&x190)<=(x191/x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = INT32_MIN;
	int32_t x195 = -1;
	int32_t x196 = -1;
	volatile int32_t t48 = 2775707;

	t48 = ((x193&x194)<=(x195/x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x197 = -2;
	static uint32_t x198 = UINT32_MAX;
	int64_t x199 = INT64_MIN;
	volatile int32_t x200 = INT32_MIN;
	volatile int32_t t49 = 11555454;

	t49 = ((x197&x198)<=(x199/x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x201 = INT32_MIN;
	uint32_t x202 = 25371U;
	uint32_t x203 = UINT32_MAX;
	volatile int32_t t50 = -2051871;

	t50 = ((x201&x202)<=(x203/x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MAX;
	static int16_t x206 = INT16_MAX;
	int16_t x207 = INT16_MIN;
	volatile int32_t x208 = INT32_MIN;
	int32_t t51 = -374980605;

	t51 = ((x205&x206)<=(x207/x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 939629583LL;
	int16_t x210 = 352;
	int16_t x211 = INT16_MIN;
	int32_t x212 = -2510563;

	t52 = ((x209&x210)<=(x211/x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x213 = INT32_MIN;
	static int64_t x214 = INT64_MAX;
	int64_t x215 = INT64_MAX;
	uint64_t x216 = 796LLU;
	volatile int32_t t53 = 191938335;

	t53 = ((x213&x214)<=(x215/x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static uint16_t x217 = 169U;
	uint32_t x218 = 12U;
	int16_t x219 = INT16_MIN;
	int16_t x220 = INT16_MIN;
	volatile int32_t t54 = 0;

	t54 = ((x217&x218)<=(x219/x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	volatile uint64_t x223 = 8LLU;
	static volatile int32_t t55 = 105108447;

	t55 = ((x221&x222)<=(x223/x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = INT16_MAX;
	uint8_t x226 = 12U;
	int32_t x227 = -56294;
	static volatile int16_t x228 = INT16_MIN;

	t56 = ((x225&x226)<=(x227/x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x229 = 380984LL;
	static int8_t x230 = -10;
	volatile int8_t x231 = -1;
	uint32_t x232 = UINT32_MAX;
	int32_t t57 = 353919261;

	t57 = ((x229&x230)<=(x231/x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = 1525;
	int8_t x234 = -1;
	static uint16_t x235 = UINT16_MAX;
	int8_t x236 = -1;

	t58 = ((x233&x234)<=(x235/x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x238 = 0;
	int16_t x239 = INT16_MAX;
	int8_t x240 = INT8_MIN;

	t59 = ((x237&x238)<=(x239/x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = INT8_MIN;
	static uint16_t x243 = 6U;
	volatile int32_t x244 = INT32_MIN;
	int32_t t60 = 3;

	t60 = ((x241&x242)<=(x243/x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x246 = INT8_MAX;
	int64_t x247 = INT64_MIN;
	volatile uint32_t x248 = 1523911361U;
	int32_t t61 = -7932;

	t61 = ((x245&x246)<=(x247/x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = 307811963;
	uint8_t x250 = 4U;
	static uint64_t x251 = 457050487LLU;
	static volatile int64_t x252 = 3946663LL;
	int32_t t62 = -1;

	t62 = ((x249&x250)<=(x251/x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x253 = INT16_MIN;
	uint16_t x254 = UINT16_MAX;
	int16_t x255 = INT16_MIN;
	int32_t t63 = 1;

	t63 = ((x253&x254)<=(x255/x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = -2LL;
	static int64_t x258 = INT64_MIN;
	int64_t x260 = -3362565LL;
	volatile int32_t t64 = 65611132;

	t64 = ((x257&x258)<=(x259/x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MIN;
	volatile int8_t x264 = INT8_MAX;
	int32_t t65 = 121876;

	t65 = ((x261&x262)<=(x263/x264));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 1U;
	int16_t x266 = -1;
	int32_t x267 = INT32_MIN;
	static int64_t x268 = -14756291989LL;
	volatile int32_t t66 = -1106;

	t66 = ((x265&x266)<=(x267/x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int16_t x270 = INT16_MIN;
	volatile int32_t t67 = 12;

	t67 = ((x269&x270)<=(x271/x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = INT16_MIN;
	int64_t x274 = INT64_MIN;
	int16_t x275 = INT16_MIN;
	volatile int32_t t68 = 93797422;

	t68 = ((x273&x274)<=(x275/x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = 35869;
	uint16_t x278 = 4282U;
	volatile int32_t x279 = INT32_MIN;
	int32_t x280 = INT32_MAX;
	volatile int32_t t69 = -23;

	t69 = ((x277&x278)<=(x279/x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MIN;
	static uint32_t x282 = UINT32_MAX;
	int8_t x283 = -18;
	int8_t x284 = 50;
	volatile int32_t t70 = -112804045;

	t70 = ((x281&x282)<=(x283/x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x286 = 436U;
	static volatile uint64_t x287 = UINT64_MAX;
	volatile int16_t x288 = INT16_MIN;
	static int32_t t71 = 1955;

	t71 = ((x285&x286)<=(x287/x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -1;
	int16_t x290 = -1;
	static volatile int64_t x291 = INT64_MIN;
	int8_t x292 = INT8_MIN;
	volatile int32_t t72 = -218630728;

	t72 = ((x289&x290)<=(x291/x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = -1;
	volatile int32_t t73 = 0;

	t73 = ((x293&x294)<=(x295/x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x297 = UINT32_MAX;
	int64_t x299 = -1LL;
	uint16_t x300 = 556U;
	static int32_t t74 = 476;

	t74 = ((x297&x298)<=(x299/x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = INT32_MAX;
	static volatile int16_t x302 = INT16_MIN;
	int8_t x303 = INT8_MIN;
	volatile int64_t x304 = INT64_MIN;
	int32_t t75 = 26;

	t75 = ((x301&x302)<=(x303/x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x309 = -25;
	static int8_t x310 = INT8_MIN;
	int16_t x311 = INT16_MAX;
	static volatile int32_t x312 = -1;
	static int32_t t76 = -3;

	t76 = ((x309&x310)<=(x311/x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x313 = 1U;
	uint64_t x315 = UINT64_MAX;
	volatile uint8_t x316 = UINT8_MAX;

	t77 = ((x313&x314)<=(x315/x316));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MIN;
	int16_t x318 = -1;
	int8_t x319 = -1;
	int64_t x320 = -823202683178LL;

	t78 = ((x317&x318)<=(x319/x320));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x321 = 3U;
	static volatile int16_t x322 = INT16_MIN;
	static int8_t x323 = -1;
	int32_t x324 = INT32_MIN;
	static volatile int32_t t79 = 15536032;

	t79 = ((x321&x322)<=(x323/x324));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x325 = INT32_MAX;
	static int32_t x326 = INT32_MIN;
	int8_t x328 = 58;
	volatile int32_t t80 = -197645115;

	t80 = ((x325&x326)<=(x327/x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x329 = INT32_MAX;
	int32_t x330 = INT32_MIN;
	uint8_t x331 = UINT8_MAX;
	volatile int64_t x332 = INT64_MAX;
	int32_t t81 = 706901;

	t81 = ((x329&x330)<=(x331/x332));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x333 = 2U;
	int16_t x334 = INT16_MAX;
	volatile int32_t t82 = -7;

	t82 = ((x333&x334)<=(x335/x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = INT32_MAX;
	int32_t x338 = 15;
	int16_t x339 = INT16_MIN;
	int8_t x340 = INT8_MAX;
	int32_t t83 = -26476;

	t83 = ((x337&x338)<=(x339/x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x341 = 26U;
	volatile uint16_t x343 = 335U;

	t84 = ((x341&x342)<=(x343/x344));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x346 = INT16_MIN;
	static int16_t x347 = 116;
	volatile int16_t x348 = 530;
	volatile int32_t t85 = 25669660;

	t85 = ((x345&x346)<=(x347/x348));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x350 = INT16_MAX;
	uint32_t x351 = 226944U;
	static volatile int8_t x352 = -2;
	static volatile int32_t t86 = -83352;

	t86 = ((x349&x350)<=(x351/x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x355 = 3;

	t87 = ((x353&x354)<=(x355/x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x357 = 47138;
	uint64_t x358 = UINT64_MAX;
	volatile int32_t x359 = INT32_MIN;
	static int64_t x360 = INT64_MAX;
	int32_t t88 = -249;

	t88 = ((x357&x358)<=(x359/x360));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x361 = UINT32_MAX;
	volatile uint64_t x362 = 0LLU;
	int64_t x363 = -1LL;
	volatile int16_t x364 = -14111;
	int32_t t89 = 480463;

	t89 = ((x361&x362)<=(x363/x364));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x365 = INT8_MIN;
	volatile uint64_t x367 = UINT64_MAX;
	volatile int32_t t90 = -1;

	t90 = ((x365&x366)<=(x367/x368));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x370 = -322825262LL;
	int8_t x371 = INT8_MAX;
	int8_t x372 = INT8_MIN;
	int32_t t91 = -361445500;

	t91 = ((x369&x370)<=(x371/x372));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x373 = INT16_MIN;
	static uint8_t x375 = 3U;
	int8_t x376 = INT8_MIN;
	int32_t t92 = -7188;

	t92 = ((x373&x374)<=(x375/x376));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x377 = UINT32_MAX;
	uint8_t x378 = 5U;
	volatile int32_t x379 = -1601;
	volatile uint64_t x380 = 2478LLU;
	int32_t t93 = 0;

	t93 = ((x377&x378)<=(x379/x380));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x381 = INT64_MIN;
	int32_t x382 = 0;
	uint64_t x383 = 2192382335070445LLU;
	volatile int64_t x384 = -1LL;
	volatile int32_t t94 = -41;

	t94 = ((x381&x382)<=(x383/x384));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x385 = UINT64_MAX;
	int16_t x386 = INT16_MAX;
	int16_t x387 = INT16_MAX;
	volatile int8_t x388 = INT8_MAX;
	volatile int32_t t95 = -1051;

	t95 = ((x385&x386)<=(x387/x388));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x389 = 15;
	volatile uint64_t x390 = UINT64_MAX;
	uint64_t x392 = 34845851684798489LLU;
	static int32_t t96 = -214701068;

	t96 = ((x389&x390)<=(x391/x392));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = -1LL;
	int64_t x394 = -97337LL;
	uint16_t x395 = UINT16_MAX;
	int64_t x396 = INT64_MAX;
	volatile int32_t t97 = 254;

	t97 = ((x393&x394)<=(x395/x396));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x401 = INT64_MIN;
	uint16_t x404 = 364U;

	t98 = ((x401&x402)<=(x403/x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x405 = 1003512093929620LL;
	int32_t x407 = 10998033;
	volatile uint64_t x408 = 951427986990420LLU;
	int32_t t99 = 21167;

	t99 = ((x405&x406)<=(x407/x408));

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

