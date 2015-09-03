#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t x11 = INT32_MIN;
int16_t x15 = -1;
int32_t t3 = -54442034;
volatile uint64_t x17 = 3LLU;
static uint64_t x20 = 86796072LLU;
int16_t x35 = INT16_MAX;
int32_t t7 = 291488;
int64_t x37 = 122590170534708LL;
int8_t x40 = -3;
uint64_t x45 = 6744LLU;
static int8_t x47 = 14;
int64_t x52 = -47004556080LL;
int64_t x56 = -1LL;
static int32_t x57 = INT32_MAX;
int64_t x58 = INT64_MAX;
int8_t x60 = -1;
static volatile int32_t t13 = -41;
int32_t x61 = -10459;
uint32_t x63 = 211061564U;
volatile uint64_t x68 = 660929457238492555LLU;
volatile int8_t x69 = INT8_MAX;
int32_t t16 = 24164949;
int16_t x85 = -1;
int16_t x89 = 2355;
static volatile int8_t x90 = -1;
static int16_t x91 = -1;
uint8_t x94 = UINT8_MAX;
int16_t x96 = -1;
uint8_t x108 = 6U;
uint8_t x110 = 58U;
static int32_t t26 = -1;
static uint16_t x116 = 2U;
int64_t x120 = INT64_MIN;
int64_t x132 = INT64_MIN;
int8_t x134 = INT8_MIN;
static int64_t x136 = -1LL;
uint16_t x139 = 1U;
static int32_t x142 = 3;
static volatile int8_t x144 = -1;
volatile int8_t x147 = 1;
int32_t t35 = 1;
int64_t x151 = INT64_MIN;
int8_t x152 = INT8_MIN;
volatile int32_t t36 = 31687459;
int16_t x156 = -1;
volatile int32_t t37 = 17;
uint32_t x159 = 116U;
int32_t t38 = 138375;
static int8_t x163 = INT8_MAX;
int64_t x165 = INT64_MIN;
static int32_t t40 = -50;
int64_t x173 = INT64_MAX;
volatile int32_t t43 = -461;
uint32_t x184 = UINT32_MAX;
static int32_t x187 = -1;
int16_t x206 = INT16_MAX;
static int16_t x210 = 1;
int32_t t50 = -6064;
static int16_t x219 = INT16_MAX;
volatile uint8_t x220 = 75U;
volatile int64_t x224 = INT64_MAX;
static uint64_t x231 = 114322337463496LLU;
uint16_t x233 = UINT16_MAX;
static volatile int32_t t57 = 873976477;
int8_t x244 = -7;
static uint8_t x248 = UINT8_MAX;
int8_t x250 = -1;
uint32_t x251 = 175U;
int32_t x255 = -1;
uint64_t x271 = UINT64_MAX;
int32_t x272 = -2;
static volatile int8_t x283 = INT8_MAX;
uint32_t x286 = UINT32_MAX;
uint16_t x287 = 954U;
static int8_t x296 = INT8_MIN;
int16_t x301 = INT16_MIN;
int16_t x310 = -50;
uint32_t x311 = 73595457U;
uint32_t x312 = UINT32_MAX;
int32_t x326 = INT32_MIN;
int64_t x328 = -1LL;
volatile int64_t x337 = INT64_MIN;
volatile uint8_t x341 = 3U;
volatile uint8_t x342 = UINT8_MAX;
uint64_t x343 = UINT64_MAX;
int64_t x350 = INT64_MIN;
int16_t x353 = -1;
int8_t x372 = INT8_MIN;
int32_t x376 = 32494845;
uint32_t x378 = UINT32_MAX;
int32_t x389 = INT32_MIN;
int8_t x392 = INT8_MIN;
int32_t t89 = -244;
int64_t x400 = -1LL;
uint16_t x401 = 5U;
volatile uint8_t x402 = UINT8_MAX;
static volatile int32_t t91 = -7252;
volatile int8_t x406 = -1;
uint16_t x409 = 1U;
int32_t x414 = 304940;
volatile int32_t t94 = -343062;
static int16_t x427 = -1;
int8_t x429 = -4;
int16_t x430 = INT16_MIN;
volatile int32_t t97 = -990332459;
int16_t x439 = INT16_MAX;
uint16_t x441 = 399U;


void f0(void) {
	volatile int8_t x1 = -3;
	volatile uint64_t x2 = 1835770527906921435LLU;
	static uint64_t x3 = 4101719672442LLU;
	volatile int64_t x4 = -1LL;
	volatile int32_t t0 = -33442698;

	t0 = ((x1<=x2)<(x3-x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = INT16_MAX;
	static volatile int16_t x6 = INT16_MAX;
	int32_t x7 = INT32_MIN;
	int16_t x8 = INT16_MIN;
	int32_t t1 = 7452257;

	t1 = ((x5<=x6)<(x7-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	static int64_t x10 = INT64_MAX;
	int16_t x12 = -1;
	int32_t t2 = 3020188;

	t2 = ((x9<=x10)<(x11-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	int16_t x14 = 6722;
	static volatile int16_t x16 = -520;

	t3 = ((x13<=x14)<(x15-x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	volatile int32_t t4 = 75615;

	t4 = ((x17<=x18)<(x19-x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = 58;
	uint64_t x26 = 254901039896LLU;
	int8_t x27 = INT8_MAX;
	volatile int64_t x28 = -47403217814458LL;
	static int32_t t5 = -45020;

	t5 = ((x25<=x26)<(x27-x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint32_t x29 = UINT32_MAX;
	int8_t x30 = 18;
	uint32_t x31 = UINT32_MAX;
	static volatile uint16_t x32 = UINT16_MAX;
	volatile int32_t t6 = -20276;

	t6 = ((x29<=x30)<(x31-x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MAX;
	uint32_t x34 = UINT32_MAX;
	volatile int16_t x36 = -1;

	t7 = ((x33<=x34)<(x35-x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x38 = UINT8_MAX;
	volatile int32_t x39 = -241214330;
	static int32_t t8 = -63268;

	t8 = ((x37<=x38)<(x39-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 1U;
	int32_t x42 = -1;
	volatile int64_t x43 = -119492316771LL;
	int8_t x44 = INT8_MAX;
	int32_t t9 = -75810541;

	t9 = ((x41<=x42)<(x43-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int32_t x46 = INT32_MIN;
	uint32_t x48 = 6514470U;
	volatile int32_t t10 = 424;

	t10 = ((x45<=x46)<(x47-x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 127193153U;
	int16_t x50 = INT16_MIN;
	volatile uint64_t x51 = UINT64_MAX;
	volatile int32_t t11 = 1;

	t11 = ((x49<=x50)<(x51-x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x53 = 136382413052525162LLU;
	int16_t x54 = 1;
	int16_t x55 = 105;
	volatile int32_t t12 = 1;

	t12 = ((x53<=x54)<(x55-x56));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x59 = -1;

	t13 = ((x57<=x58)<(x59-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x62 = -54716;
	uint64_t x64 = UINT64_MAX;
	int32_t t14 = 7;

	t14 = ((x61<=x62)<(x63-x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile uint8_t x65 = 20U;
	uint32_t x66 = 35213957U;
	volatile int32_t x67 = INT32_MAX;
	volatile int32_t t15 = 106445;

	t15 = ((x65<=x66)<(x67-x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = INT64_MIN;
	static int8_t x71 = INT8_MIN;
	int32_t x72 = 0;

	t16 = ((x69<=x70)<(x71-x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = 3;
	volatile int32_t x74 = -1;
	volatile int8_t x75 = INT8_MAX;
	uint8_t x76 = 0U;
	volatile int32_t t17 = -6;

	t17 = ((x73<=x74)<(x75-x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -1LL;
	static volatile int8_t x78 = INT8_MIN;
	volatile int32_t x79 = -12;
	static int64_t x80 = INT64_MIN;
	int32_t t18 = 7779;

	t18 = ((x77<=x78)<(x79-x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x81 = 47;
	int32_t x82 = 145;
	static uint16_t x83 = 8U;
	volatile uint64_t x84 = 263139218393LLU;
	volatile int32_t t19 = -2451;

	t19 = ((x81<=x82)<(x83-x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x86 = -1;
	static int8_t x87 = INT8_MAX;
	static uint32_t x88 = 6U;
	int32_t t20 = -377904526;

	t20 = ((x85<=x86)<(x87-x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x92 = UINT64_MAX;
	int32_t t21 = -573875;

	t21 = ((x89<=x90)<(x91-x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = INT16_MAX;
	volatile int16_t x95 = -110;
	volatile int32_t t22 = 1366865;

	t22 = ((x93<=x94)<(x95-x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = INT8_MAX;
	volatile uint32_t x98 = 10U;
	int32_t x99 = -2390166;
	int64_t x100 = -195244332815589361LL;
	static int32_t t23 = 21625;

	t23 = ((x97<=x98)<(x99-x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x101 = INT8_MIN;
	static uint8_t x102 = 0U;
	volatile uint32_t x103 = 34312U;
	int32_t x104 = 3718616;
	volatile int32_t t24 = -110727;

	t24 = ((x101<=x102)<(x103-x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = -5;
	uint32_t x106 = 10852099U;
	uint64_t x107 = UINT64_MAX;
	int32_t t25 = -5218;

	t25 = ((x105<=x106)<(x107-x108));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x109 = UINT16_MAX;
	uint8_t x111 = UINT8_MAX;
	static uint8_t x112 = 52U;

	t26 = ((x109<=x110)<(x111-x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x113 = 2033U;
	int16_t x114 = 7;
	int32_t x115 = INT32_MAX;
	int32_t t27 = 24270;

	t27 = ((x113<=x114)<(x115-x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 929367326U;
	static volatile uint32_t x118 = 354047127U;
	int8_t x119 = -60;
	int32_t t28 = -15648081;

	t28 = ((x117<=x118)<(x119-x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x121 = UINT16_MAX;
	int64_t x122 = -6934063650LL;
	uint32_t x123 = 0U;
	uint8_t x124 = 106U;
	static int32_t t29 = 634;

	t29 = ((x121<=x122)<(x123-x124));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = UINT8_MAX;
	static int32_t x126 = INT32_MIN;
	static int64_t x127 = 1233723001328841180LL;
	static volatile int16_t x128 = INT16_MAX;
	volatile int32_t t30 = 13541084;

	t30 = ((x125<=x126)<(x127-x128));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x129 = -1;
	uint64_t x130 = 19639LLU;
	int32_t x131 = INT32_MIN;
	int32_t t31 = 274510398;

	t31 = ((x129<=x130)<(x131-x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = UINT8_MAX;
	static int8_t x135 = INT8_MIN;
	int32_t t32 = 0;

	t32 = ((x133<=x134)<(x135-x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x137 = 40U;
	int64_t x138 = INT64_MAX;
	int32_t x140 = -1;
	volatile int32_t t33 = -42487;

	t33 = ((x137<=x138)<(x139-x140));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x141 = -2;
	volatile int8_t x143 = INT8_MAX;
	int32_t t34 = 2538;

	t34 = ((x141<=x142)<(x143-x144));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x145 = UINT32_MAX;
	static uint64_t x146 = UINT64_MAX;
	int16_t x148 = -104;

	t35 = ((x145<=x146)<(x147-x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x149 = INT16_MAX;
	static int64_t x150 = -853268330436227525LL;

	t36 = ((x149<=x150)<(x151-x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = UINT32_MAX;
	uint64_t x154 = UINT64_MAX;
	int16_t x155 = 1257;

	t37 = ((x153<=x154)<(x155-x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x157 = 1;
	uint64_t x158 = UINT64_MAX;
	uint32_t x160 = 33499U;

	t38 = ((x157<=x158)<(x159-x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x161 = 1U;
	uint64_t x162 = 0LLU;
	uint16_t x164 = UINT16_MAX;
	int32_t t39 = -375241;

	t39 = ((x161<=x162)<(x163-x164));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = -1LL;
	int16_t x167 = INT16_MAX;
	int8_t x168 = INT8_MAX;

	t40 = ((x165<=x166)<(x167-x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x169 = -39;
	int32_t x170 = INT32_MIN;
	int32_t x171 = INT32_MIN;
	volatile int8_t x172 = INT8_MIN;
	int32_t t41 = -386803;

	t41 = ((x169<=x170)<(x171-x172));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x174 = INT16_MAX;
	int32_t x175 = -2;
	uint16_t x176 = 0U;
	volatile int32_t t42 = 320;

	t42 = ((x173<=x174)<(x175-x176));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x177 = INT32_MIN;
	int32_t x178 = INT32_MIN;
	int16_t x179 = -1;
	static int64_t x180 = -3LL;

	t43 = ((x177<=x178)<(x179-x180));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = INT64_MIN;
	int64_t x182 = -1LL;
	int16_t x183 = -1;
	volatile int32_t t44 = 23;

	t44 = ((x181<=x182)<(x183-x184));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = INT64_MIN;
	int16_t x186 = 385;
	static uint16_t x188 = UINT16_MAX;
	int32_t t45 = -516463;

	t45 = ((x185<=x186)<(x187-x188));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = INT64_MIN;
	int16_t x190 = INT16_MIN;
	int64_t x191 = INT64_MIN;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t46 = -2985313;

	t46 = ((x189<=x190)<(x191-x192));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x197 = 2110U;
	uint16_t x198 = UINT16_MAX;
	int16_t x199 = -1;
	int32_t x200 = 91289;
	volatile int32_t t47 = 21;

	t47 = ((x197<=x198)<(x199-x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x201 = INT32_MIN;
	static uint8_t x202 = UINT8_MAX;
	static int8_t x203 = -1;
	int64_t x204 = 168LL;
	volatile int32_t t48 = 61;

	t48 = ((x201<=x202)<(x203-x204));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x205 = INT8_MAX;
	int32_t x207 = INT32_MIN;
	int64_t x208 = INT64_MIN;
	static int32_t t49 = 934969;

	t49 = ((x205<=x206)<(x207-x208));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x209 = INT64_MIN;
	int16_t x211 = INT16_MIN;
	uint16_t x212 = 2U;

	t50 = ((x209<=x210)<(x211-x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x213 = UINT64_MAX;
	uint32_t x214 = UINT32_MAX;
	uint8_t x215 = 89U;
	static int8_t x216 = 7;
	static volatile int32_t t51 = 1;

	t51 = ((x213<=x214)<(x215-x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = 3;
	int8_t x218 = INT8_MAX;
	static volatile int32_t t52 = -138;

	t52 = ((x217<=x218)<(x219-x220));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x221 = 93549251856595061LLU;
	static int16_t x222 = INT16_MIN;
	static uint32_t x223 = UINT32_MAX;
	int32_t t53 = -159;

	t53 = ((x221<=x222)<(x223-x224));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MIN;
	volatile int16_t x226 = 579;
	int8_t x227 = -4;
	static volatile uint64_t x228 = 1898231427830940LLU;
	volatile int32_t t54 = 252;

	t54 = ((x225<=x226)<(x227-x228));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static volatile int64_t x229 = INT64_MIN;
	static int16_t x230 = -1;
	volatile int64_t x232 = -6118523988485LL;
	int32_t t55 = -7;

	t55 = ((x229<=x230)<(x231-x232));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x234 = INT64_MAX;
	int64_t x235 = 14798712039406LL;
	int32_t x236 = INT32_MAX;
	volatile int32_t t56 = 3237;

	t56 = ((x233<=x234)<(x235-x236));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x237 = 213320991694LLU;
	int32_t x238 = INT32_MAX;
	uint64_t x239 = 14501779LLU;
	volatile uint32_t x240 = 88U;

	t57 = ((x237<=x238)<(x239-x240));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x241 = INT16_MIN;
	int8_t x242 = -4;
	int8_t x243 = INT8_MIN;
	volatile int32_t t58 = 181926;

	t58 = ((x241<=x242)<(x243-x244));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x245 = -169802;
	volatile uint8_t x246 = UINT8_MAX;
	static uint64_t x247 = 34235529828073LLU;
	static volatile int32_t t59 = 1;

	t59 = ((x245<=x246)<(x247-x248));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x249 = -1;
	volatile int16_t x252 = INT16_MIN;
	int32_t t60 = 100599131;

	t60 = ((x249<=x250)<(x251-x252));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x253 = UINT16_MAX;
	int64_t x254 = -1LL;
	int16_t x256 = INT16_MIN;
	volatile int32_t t61 = 2;

	t61 = ((x253<=x254)<(x255-x256));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x257 = -5115;
	static volatile int16_t x258 = INT16_MIN;
	static uint16_t x259 = UINT16_MAX;
	int16_t x260 = -1;
	int32_t t62 = -7;

	t62 = ((x257<=x258)<(x259-x260));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x261 = 1U;
	uint16_t x262 = 21402U;
	int32_t x263 = 4102;
	int16_t x264 = -1;
	volatile int32_t t63 = -46580288;

	t63 = ((x261<=x262)<(x263-x264));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x269 = 44U;
	static volatile int8_t x270 = INT8_MAX;
	int32_t t64 = 22759415;

	t64 = ((x269<=x270)<(x271-x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x273 = 6U;
	uint16_t x274 = 1481U;
	static int16_t x275 = INT16_MIN;
	volatile int16_t x276 = 3192;
	static volatile int32_t t65 = -438528;

	t65 = ((x273<=x274)<(x275-x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x277 = 496284788509LL;
	int32_t x278 = INT32_MIN;
	uint64_t x279 = 7686689771055LLU;
	uint8_t x280 = 1U;
	static volatile int32_t t66 = 107734683;

	t66 = ((x277<=x278)<(x279-x280));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = INT8_MIN;
	uint16_t x282 = 96U;
	static int16_t x284 = 0;
	int32_t t67 = -15;

	t67 = ((x281<=x282)<(x283-x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x285 = 6522;
	static volatile uint8_t x288 = 27U;
	int32_t t68 = 1140;

	t68 = ((x285<=x286)<(x287-x288));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = -1;
	int32_t x294 = INT32_MIN;
	static uint16_t x295 = UINT16_MAX;
	volatile int32_t t69 = 1643233;

	t69 = ((x293<=x294)<(x295-x296));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x302 = INT16_MIN;
	static int16_t x303 = -1;
	int32_t x304 = -1;
	volatile int32_t t70 = 84;

	t70 = ((x301<=x302)<(x303-x304));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x305 = INT64_MIN;
	static int16_t x306 = INT16_MIN;
	uint16_t x307 = 624U;
	int8_t x308 = INT8_MIN;
	volatile int32_t t71 = 6161;

	t71 = ((x305<=x306)<(x307-x308));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x309 = INT8_MIN;
	volatile int32_t t72 = -13017;

	t72 = ((x309<=x310)<(x311-x312));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x313 = 953317LL;
	int8_t x314 = INT8_MAX;
	int32_t x315 = -9;
	volatile int16_t x316 = INT16_MIN;
	int32_t t73 = 21326677;

	t73 = ((x313<=x314)<(x315-x316));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x317 = -140253713261747LL;
	volatile int16_t x318 = -12064;
	volatile int64_t x319 = INT64_MIN;
	int16_t x320 = -1;
	int32_t t74 = -128160;

	t74 = ((x317<=x318)<(x319-x320));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = 1LL;
	int8_t x322 = INT8_MAX;
	volatile uint64_t x323 = UINT64_MAX;
	uint64_t x324 = 4264584390LLU;
	int32_t t75 = 169;

	t75 = ((x321<=x322)<(x323-x324));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x325 = 5U;
	uint8_t x327 = 15U;
	int32_t t76 = 3943;

	t76 = ((x325<=x326)<(x327-x328));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x338 = INT64_MIN;
	static uint32_t x339 = 11294521U;
	int16_t x340 = -1;
	volatile int32_t t77 = -1347;

	t77 = ((x337<=x338)<(x339-x340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x344 = INT16_MIN;
	int32_t t78 = -1;

	t78 = ((x341<=x342)<(x343-x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint64_t x345 = UINT64_MAX;
	int64_t x346 = -825627333916948LL;
	uint64_t x347 = UINT64_MAX;
	uint16_t x348 = UINT16_MAX;
	volatile int32_t t79 = 56003;

	t79 = ((x345<=x346)<(x347-x348));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x349 = INT64_MAX;
	int16_t x351 = -112;
	int64_t x352 = -12347113124LL;
	int32_t t80 = 14;

	t80 = ((x349<=x350)<(x351-x352));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x354 = -1;
	uint32_t x355 = 222857U;
	uint32_t x356 = UINT32_MAX;
	volatile int32_t t81 = 12350594;

	t81 = ((x353<=x354)<(x355-x356));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x357 = -1;
	int32_t x358 = INT32_MIN;
	int16_t x359 = -1;
	int64_t x360 = -57416672LL;
	int32_t t82 = 40725655;

	t82 = ((x357<=x358)<(x359-x360));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x361 = -74LL;
	int8_t x362 = INT8_MIN;
	static int16_t x363 = INT16_MIN;
	int8_t x364 = INT8_MAX;
	volatile int32_t t83 = -218036136;

	t83 = ((x361<=x362)<(x363-x364));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x365 = INT16_MIN;
	int64_t x366 = INT64_MIN;
	volatile uint32_t x367 = UINT32_MAX;
	static int64_t x368 = INT64_MAX;
	int32_t t84 = -412;

	t84 = ((x365<=x366)<(x367-x368));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x369 = -1LL;
	uint8_t x370 = 116U;
	int8_t x371 = INT8_MIN;
	volatile int32_t t85 = 14661557;

	t85 = ((x369<=x370)<(x371-x372));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = -1LL;
	static int64_t x374 = -13325229817LL;
	int16_t x375 = -1;
	int32_t t86 = 5256969;

	t86 = ((x373<=x374)<(x375-x376));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x377 = 1U;
	int16_t x379 = INT16_MAX;
	int16_t x380 = INT16_MIN;
	int32_t t87 = 547;

	t87 = ((x377<=x378)<(x379-x380));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x385 = -1;
	int64_t x386 = INT64_MAX;
	static uint8_t x387 = 2U;
	int16_t x388 = 143;
	static int32_t t88 = -11;

	t88 = ((x385<=x386)<(x387-x388));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x390 = INT64_MAX;
	int8_t x391 = 3;

	t89 = ((x389<=x390)<(x391-x392));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x397 = 6U;
	volatile int32_t x398 = INT32_MAX;
	int16_t x399 = -1;
	int32_t t90 = -19;

	t90 = ((x397<=x398)<(x399-x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x403 = 106060LLU;
	volatile uint16_t x404 = UINT16_MAX;

	t91 = ((x401<=x402)<(x403-x404));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x405 = -1LL;
	static int8_t x407 = -1;
	int16_t x408 = 452;
	volatile int32_t t92 = 69;

	t92 = ((x405<=x406)<(x407-x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x410 = INT32_MIN;
	static int32_t x411 = INT32_MAX;
	static uint32_t x412 = 4152U;
	volatile int32_t t93 = 63;

	t93 = ((x409<=x410)<(x411-x412));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x413 = INT32_MAX;
	static volatile uint16_t x415 = 4U;
	int8_t x416 = INT8_MAX;

	t94 = ((x413<=x414)<(x415-x416));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x417 = INT64_MIN;
	int32_t x418 = -4120;
	int8_t x419 = INT8_MIN;
	uint8_t x420 = 2U;
	volatile int32_t t95 = -47605733;

	t95 = ((x417<=x418)<(x419-x420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x425 = 4765U;
	int16_t x426 = -1;
	uint64_t x428 = UINT64_MAX;
	int32_t t96 = -13927;

	t96 = ((x425<=x426)<(x427-x428));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x431 = -78661900609718545LL;
	volatile int16_t x432 = INT16_MIN;

	t97 = ((x429<=x430)<(x431-x432));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x437 = INT64_MAX;
	uint8_t x438 = 28U;
	uint32_t x440 = 4865U;
	volatile int32_t t98 = -233322246;

	t98 = ((x437<=x438)<(x439-x440));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x442 = 14U;
	int16_t x443 = -1;
	static volatile uint64_t x444 = 20047097187586472LLU;
	int32_t t99 = -315;

	t99 = ((x441<=x442)<(x443-x444));

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

