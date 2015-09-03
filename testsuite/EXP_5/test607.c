#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x1 = -1LL;
volatile int32_t t0 = 90228460;
int8_t x5 = INT8_MAX;
uint32_t x10 = UINT32_MAX;
static uint16_t x13 = 13930U;
volatile int32_t t4 = 3364915;
volatile uint32_t x23 = 10U;
static int16_t x30 = 197;
volatile int32_t t7 = 449;
volatile int64_t x33 = INT64_MIN;
volatile uint16_t x42 = 7407U;
uint16_t x49 = 242U;
static int16_t x53 = -1;
uint32_t x55 = UINT32_MAX;
int32_t t13 = 0;
uint32_t x58 = UINT32_MAX;
int32_t x76 = INT32_MIN;
int8_t x92 = 51;
volatile int32_t x95 = INT32_MIN;
uint16_t x103 = 259U;
int8_t x105 = -1;
int32_t t26 = 36689824;
int32_t x115 = INT32_MIN;
static volatile int32_t t28 = -49841826;
uint32_t x117 = UINT32_MAX;
volatile int8_t x118 = INT8_MIN;
volatile uint32_t x132 = 863U;
int16_t x133 = INT16_MAX;
int16_t x143 = INT16_MAX;
volatile int32_t t35 = 649455;
uint8_t x149 = 2U;
static int32_t x150 = 77404530;
int32_t x155 = INT32_MIN;
static uint64_t x156 = UINT64_MAX;
int8_t x162 = INT8_MAX;
uint8_t x166 = UINT8_MAX;
int8_t x178 = -7;
volatile int32_t t45 = 348431474;
int16_t x185 = INT16_MAX;
int64_t x186 = INT64_MAX;
volatile uint16_t x188 = 1541U;
int32_t t46 = 0;
uint64_t x191 = UINT64_MAX;
static int16_t x193 = INT16_MAX;
uint32_t x195 = 10090556U;
volatile uint16_t x200 = UINT16_MAX;
static volatile int8_t x202 = -1;
int32_t x203 = INT32_MIN;
uint8_t x206 = 5U;
static uint64_t x209 = 52139LLU;
int32_t x212 = -1;
volatile int32_t t52 = 136;
int32_t x214 = INT32_MIN;
int32_t x217 = INT32_MAX;
int8_t x221 = INT8_MIN;
static uint8_t x223 = 49U;
volatile int16_t x224 = INT16_MAX;
static volatile int32_t t55 = 253302862;
int8_t x229 = INT8_MAX;
int16_t x233 = INT16_MAX;
static int32_t x234 = INT32_MAX;
int32_t x241 = INT32_MIN;
int64_t x245 = INT64_MAX;
int32_t t62 = 1;
uint32_t x253 = UINT32_MAX;
uint64_t x261 = 102043662751032812LLU;
int64_t x263 = -1LL;
uint8_t x272 = UINT8_MAX;
static volatile int32_t t67 = 4;
uint8_t x275 = 7U;
int64_t x276 = INT64_MAX;
int64_t x291 = INT64_MIN;
uint64_t x297 = 1747428LLU;
volatile int32_t t72 = -1;
volatile int16_t x302 = INT16_MIN;
uint32_t x303 = 274758U;
volatile int32_t t73 = 0;
volatile int16_t x311 = -1;
uint8_t x312 = 1U;
int32_t x314 = -2856;
int16_t x333 = INT16_MIN;
static int32_t x335 = -27;
int8_t x339 = INT8_MIN;
static uint8_t x342 = UINT8_MAX;
static int16_t x348 = -1;
static int64_t x353 = 6358LL;
static int32_t x354 = INT32_MAX;
int64_t x356 = INT64_MAX;
static volatile int32_t t83 = 14217209;
static uint8_t x357 = UINT8_MAX;
uint64_t x360 = 6522945416LLU;
volatile int32_t t84 = -10964269;
int64_t x371 = 961790653LL;
volatile uint16_t x381 = 58U;
volatile int32_t t90 = 477;
volatile uint32_t x387 = UINT32_MAX;
uint16_t x391 = UINT16_MAX;
volatile int16_t x392 = INT16_MIN;
int16_t x397 = -1;
int64_t x403 = INT64_MIN;
int32_t t96 = 9777;
static int8_t x411 = INT8_MAX;
volatile int8_t x413 = INT8_MAX;
volatile int8_t x416 = 1;
int32_t x419 = -1;


void f0(void) {
	static int16_t x2 = -1;
	static uint8_t x3 = 2U;
	int16_t x4 = -124;

	t0 = (x1<((x2/x3)==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -1;
	uint32_t x7 = 2057191U;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -155;

	t1 = (x5<((x6/x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 0U;
	static volatile int8_t x11 = 21;
	int16_t x12 = -1;
	int32_t t2 = 353080;

	t2 = (x9<((x10/x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -1;
	volatile int64_t x15 = INT64_MAX;
	volatile uint64_t x16 = UINT64_MAX;
	static int32_t t3 = 30932;

	t3 = (x13<((x14/x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static uint16_t x17 = 3U;
	int64_t x18 = 130LL;
	static uint8_t x19 = 82U;
	int32_t x20 = 17459470;

	t4 = (x17<((x18/x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	static volatile uint16_t x22 = UINT16_MAX;
	int8_t x24 = 33;
	int32_t t5 = 908290681;

	t5 = (x21<((x22/x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = -1;
	volatile int8_t x26 = 0;
	static uint32_t x27 = UINT32_MAX;
	int16_t x28 = INT16_MIN;
	int32_t t6 = -1;

	t6 = (x25<((x26/x27)==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = INT64_MAX;
	uint8_t x31 = 4U;
	int8_t x32 = INT8_MIN;

	t7 = (x29<((x30/x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x34 = 1LLU;
	uint8_t x35 = 1U;
	static int16_t x36 = INT16_MAX;
	volatile int32_t t8 = -6208;

	t8 = (x33<((x34/x35)==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	static volatile int16_t x38 = -1;
	static uint32_t x39 = UINT32_MAX;
	uint8_t x40 = 27U;
	volatile int32_t t9 = 92785;

	t9 = (x37<((x38/x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 1U;
	int16_t x43 = INT16_MIN;
	volatile int16_t x44 = INT16_MIN;
	volatile int32_t t10 = -3085625;

	t10 = (x41<((x42/x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = -1;
	uint8_t x46 = 16U;
	volatile int32_t x47 = INT32_MAX;
	int8_t x48 = INT8_MIN;
	int32_t t11 = -94926147;

	t11 = (x45<((x46/x47)==x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x50 = 39;
	int16_t x51 = -996;
	volatile uint8_t x52 = 3U;
	static volatile int32_t t12 = -29272;

	t12 = (x49<((x50/x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = 59919172546595365LLU;
	int64_t x56 = INT64_MIN;

	t13 = (x53<((x54/x55)==x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = UINT16_MAX;
	volatile int32_t x59 = INT32_MIN;
	uint64_t x60 = UINT64_MAX;
	int32_t t14 = -7221;

	t14 = (x57<((x58/x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x61 = 1;
	uint64_t x62 = UINT64_MAX;
	static uint8_t x63 = 2U;
	int32_t x64 = -1;
	static int32_t t15 = 1;

	t15 = (x61<((x62/x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 4950067U;
	int64_t x66 = 2388165573590294562LL;
	uint16_t x67 = 25U;
	int32_t x68 = 1578;
	volatile int32_t t16 = 4;

	t16 = (x65<((x66/x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	uint64_t x70 = 35127039LLU;
	static int64_t x71 = -23727188792LL;
	static int8_t x72 = INT8_MIN;
	int32_t t17 = -2;

	t17 = (x69<((x70/x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x73 = 6;
	int32_t x74 = INT32_MAX;
	int8_t x75 = 11;
	volatile int32_t t18 = 2680899;

	t18 = (x73<((x74/x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = 47;
	static int16_t x78 = INT16_MAX;
	static int8_t x79 = INT8_MIN;
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t19 = 89801863;

	t19 = (x77<((x78/x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = 42034U;
	int8_t x82 = -1;
	int32_t x83 = -487;
	static volatile int8_t x84 = -1;
	volatile int32_t t20 = -53853;

	t20 = (x81<((x82/x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = UINT8_MAX;
	uint16_t x86 = 81U;
	int16_t x87 = -1;
	static int64_t x88 = INT64_MIN;
	static int32_t t21 = -1;

	t21 = (x85<((x86/x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint16_t x89 = UINT16_MAX;
	uint8_t x90 = 0U;
	static uint16_t x91 = UINT16_MAX;
	int32_t t22 = -7868993;

	t22 = (x89<((x90/x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = UINT8_MAX;
	int32_t x94 = -1;
	static int64_t x96 = INT64_MAX;
	volatile int32_t t23 = -442;

	t23 = (x93<((x94/x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = -1;
	uint32_t x98 = UINT32_MAX;
	uint32_t x99 = UINT32_MAX;
	uint32_t x100 = 427068955U;
	volatile int32_t t24 = -30699;

	t24 = (x97<((x98/x99)==x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = 118886;
	static int32_t x102 = INT32_MIN;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t25 = -890609;

	t25 = (x101<((x102/x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x106 = -1848;
	volatile int32_t x107 = -1;
	volatile int8_t x108 = -1;

	t26 = (x105<((x106/x107)==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MIN;
	int16_t x110 = 34;
	volatile uint64_t x111 = 51740395LLU;
	static uint16_t x112 = UINT16_MAX;
	volatile int32_t t27 = 154;

	t27 = (x109<((x110/x111)==x112));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	static int64_t x114 = -33221919LL;
	volatile int32_t x116 = -1;

	t28 = (x113<((x114/x115)==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x119 = 2;
	int32_t x120 = -400861;
	int32_t t29 = -3305667;

	t29 = (x117<((x118/x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	int16_t x122 = INT16_MIN;
	int64_t x123 = -1LL;
	int8_t x124 = -30;
	static int32_t t30 = 26213;

	t30 = (x121<((x122/x123)==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x125 = 262898790LLU;
	static int16_t x126 = INT16_MIN;
	uint16_t x127 = 229U;
	volatile int32_t x128 = -3;
	volatile int32_t t31 = -218486444;

	t31 = (x125<((x126/x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = 1328931124958436531LLU;
	static volatile int16_t x130 = 1;
	int16_t x131 = INT16_MIN;
	volatile int32_t t32 = -56;

	t32 = (x129<((x130/x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x134 = -1;
	static uint16_t x135 = 23705U;
	volatile int32_t x136 = INT32_MIN;
	volatile int32_t t33 = -581036542;

	t33 = (x133<((x134/x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = -3338;
	int8_t x138 = -1;
	int64_t x139 = INT64_MIN;
	static volatile uint8_t x140 = 88U;
	int32_t t34 = 1270601;

	t34 = (x137<((x138/x139)==x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MAX;
	int16_t x142 = -1133;
	static int64_t x144 = 193LL;

	t35 = (x141<((x142/x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	int16_t x146 = -1;
	int64_t x147 = 1709695LL;
	uint32_t x148 = 2033677855U;
	volatile int32_t t36 = 159825112;

	t36 = (x145<((x146/x147)==x148));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x151 = INT16_MIN;
	volatile int8_t x152 = -1;
	int32_t t37 = -3933327;

	t37 = (x149<((x150/x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x153 = 556323993609683LLU;
	volatile int64_t x154 = INT64_MIN;
	int32_t t38 = 7146;

	t38 = (x153<((x154/x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = 9588936;
	int32_t x158 = INT32_MIN;
	uint16_t x159 = UINT16_MAX;
	static uint8_t x160 = 3U;
	volatile int32_t t39 = 1416;

	t39 = (x157<((x158/x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = 3U;
	int64_t x163 = 331163303594560753LL;
	int8_t x164 = -1;
	volatile int32_t t40 = -488;

	t40 = (x161<((x162/x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x165 = 127;
	int64_t x167 = 66934754693267LL;
	uint8_t x168 = 4U;
	volatile int32_t t41 = 8743;

	t41 = (x165<((x166/x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int32_t x170 = INT32_MAX;
	volatile int16_t x171 = INT16_MIN;
	int16_t x172 = -66;
	volatile int32_t t42 = 32803396;

	t42 = (x169<((x170/x171)==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = 19849440LLU;
	int64_t x174 = INT64_MIN;
	int16_t x175 = -21;
	volatile uint8_t x176 = UINT8_MAX;
	static volatile int32_t t43 = 1026;

	t43 = (x173<((x174/x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = 1LL;
	volatile uint64_t x179 = UINT64_MAX;
	uint16_t x180 = 825U;
	int32_t t44 = -84;

	t44 = (x177<((x178/x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int64_t x181 = -1LL;
	int16_t x182 = INT16_MIN;
	static uint64_t x183 = UINT64_MAX;
	static int32_t x184 = INT32_MIN;

	t45 = (x181<((x182/x183)==x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	static int8_t x187 = INT8_MIN;

	t46 = (x185<((x186/x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MIN;
	uint8_t x190 = UINT8_MAX;
	uint64_t x192 = UINT64_MAX;
	volatile int32_t t47 = -398009976;

	t47 = (x189<((x190/x191)==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = INT16_MIN;
	int32_t x196 = INT32_MAX;
	volatile int32_t t48 = -1;

	t48 = (x193<((x194/x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x197 = 1037688931LL;
	int16_t x198 = -163;
	static int8_t x199 = INT8_MIN;
	int32_t t49 = -374;

	t49 = (x197<((x198/x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	static int16_t x204 = INT16_MAX;
	int32_t t50 = -4;

	t50 = (x201<((x202/x203)==x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = 1U;
	int64_t x207 = -100782199471592LL;
	int64_t x208 = -1LL;
	int32_t t51 = -373;

	t51 = (x205<((x206/x207)==x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile uint64_t x210 = 905059856LLU;
	static int32_t x211 = 1038757922;

	t52 = (x209<((x210/x211)==x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x213 = INT8_MAX;
	uint32_t x215 = UINT32_MAX;
	int16_t x216 = -1;
	int32_t t53 = -42359;

	t53 = (x213<((x214/x215)==x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = INT16_MAX;
	static int8_t x219 = 42;
	volatile int64_t x220 = INT64_MIN;
	volatile int32_t t54 = -439462;

	t54 = (x217<((x218/x219)==x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x222 = -3;

	t55 = (x221<((x222/x223)==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x225 = -83571750;
	int64_t x226 = -1LL;
	int8_t x227 = INT8_MAX;
	int64_t x228 = INT64_MAX;
	int32_t t56 = -122453;

	t56 = (x225<((x226/x227)==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x230 = INT8_MAX;
	uint64_t x231 = UINT64_MAX;
	int64_t x232 = INT64_MAX;
	volatile int32_t t57 = 37965;

	t57 = (x229<((x230/x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x235 = 48146U;
	volatile int64_t x236 = 10155LL;
	volatile int32_t t58 = -1;

	t58 = (x233<((x234/x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MIN;
	uint16_t x238 = UINT16_MAX;
	int32_t x239 = INT32_MIN;
	static uint64_t x240 = UINT64_MAX;
	volatile int32_t t59 = -195731831;

	t59 = (x237<((x238/x239)==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x242 = 0U;
	int8_t x243 = 14;
	static volatile int32_t x244 = 27690;
	volatile int32_t t60 = -10;

	t60 = (x241<((x242/x243)==x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x246 = INT32_MIN;
	int8_t x247 = -26;
	int16_t x248 = INT16_MIN;
	volatile int32_t t61 = -31384657;

	t61 = (x245<((x246/x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	static int32_t x250 = 93;
	int8_t x251 = 5;
	uint64_t x252 = 7LLU;

	t62 = (x249<((x250/x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x254 = -661;
	static int64_t x255 = -10414LL;
	uint16_t x256 = 703U;
	int32_t t63 = 1047;

	t63 = (x253<((x254/x255)==x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 159288236U;
	int8_t x258 = INT8_MIN;
	volatile int8_t x259 = -1;
	int64_t x260 = -31LL;
	int32_t t64 = -91560;

	t64 = (x257<((x258/x259)==x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x262 = -1;
	static int16_t x264 = -195;
	int32_t t65 = 3684328;

	t65 = (x261<((x262/x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x265 = INT32_MIN;
	static volatile uint32_t x266 = UINT32_MAX;
	uint32_t x267 = UINT32_MAX;
	int16_t x268 = INT16_MIN;
	volatile int32_t t66 = -127131;

	t66 = (x265<((x266/x267)==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 0;
	volatile uint64_t x270 = 253911782289326LLU;
	static int32_t x271 = -3;

	t67 = (x269<((x270/x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int8_t x273 = -3;
	static int32_t x274 = -1;
	volatile int32_t t68 = 6;

	t68 = (x273<((x274/x275)==x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x277 = INT32_MAX;
	volatile uint64_t x278 = UINT64_MAX;
	int64_t x279 = INT64_MIN;
	int8_t x280 = -1;
	static int32_t t69 = 5;

	t69 = (x277<((x278/x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x289 = INT8_MAX;
	uint64_t x290 = 42679LLU;
	int64_t x292 = INT64_MIN;
	volatile int32_t t70 = -2;

	t70 = (x289<((x290/x291)==x292));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x293 = -1LL;
	int16_t x294 = 2;
	int32_t x295 = INT32_MIN;
	int64_t x296 = INT64_MIN;
	int32_t t71 = 1;

	t71 = (x293<((x294/x295)==x296));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x298 = 13898U;
	static int32_t x299 = -1;
	static int64_t x300 = INT64_MIN;

	t72 = (x297<((x298/x299)==x300));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile uint8_t x301 = 1U;
	int64_t x304 = INT64_MIN;

	t73 = (x301<((x302/x303)==x304));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x309 = 152;
	int32_t x310 = 311671204;
	static int32_t t74 = 1;

	t74 = (x309<((x310/x311)==x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x313 = -3;
	int32_t x315 = -1;
	volatile int32_t x316 = INT32_MIN;
	volatile int32_t t75 = 201776667;

	t75 = (x313<((x314/x315)==x316));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = 298;
	uint64_t x318 = 403639485LLU;
	int64_t x319 = -1LL;
	int64_t x320 = INT64_MIN;
	int32_t t76 = -851343;

	t76 = (x317<((x318/x319)==x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x321 = 1613U;
	int8_t x322 = -1;
	volatile int32_t x323 = -1;
	int64_t x324 = 115214681LL;
	volatile int32_t t77 = 15514;

	t77 = (x321<((x322/x323)==x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x334 = 22U;
	uint16_t x336 = 121U;
	volatile int32_t t78 = 1;

	t78 = (x333<((x334/x335)==x336));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x337 = INT8_MIN;
	int16_t x338 = -1;
	static uint64_t x340 = 337356296412721402LLU;
	volatile int32_t t79 = -111109036;

	t79 = (x337<((x338/x339)==x340));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x341 = -215905777LL;
	uint16_t x343 = 27U;
	int16_t x344 = 47;
	volatile int32_t t80 = -6;

	t80 = (x341<((x342/x343)==x344));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x345 = 124U;
	int64_t x346 = INT64_MIN;
	int16_t x347 = INT16_MIN;
	static volatile int32_t t81 = 19284231;

	t81 = (x345<((x346/x347)==x348));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x349 = -1;
	static volatile uint16_t x350 = UINT16_MAX;
	int32_t x351 = 31;
	int16_t x352 = INT16_MIN;
	int32_t t82 = -1;

	t82 = (x349<((x350/x351)==x352));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x355 = INT64_MIN;

	t83 = (x353<((x354/x355)==x356));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x358 = -791604164LL;
	int16_t x359 = -16177;

	t84 = (x357<((x358/x359)==x360));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x361 = -1;
	static volatile int32_t x362 = 17;
	volatile int32_t x363 = 65740;
	int16_t x364 = INT16_MAX;
	int32_t t85 = -92354;

	t85 = (x361<((x362/x363)==x364));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = INT16_MIN;
	int8_t x366 = INT8_MIN;
	volatile int64_t x367 = -1LL;
	int16_t x368 = INT16_MAX;
	volatile int32_t t86 = 836381;

	t86 = (x365<((x366/x367)==x368));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x369 = 20U;
	volatile int32_t x370 = INT32_MIN;
	int8_t x372 = -5;
	static int32_t t87 = 11;

	t87 = (x369<((x370/x371)==x372));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x373 = -1;
	int64_t x374 = INT64_MIN;
	uint32_t x375 = 233009237U;
	int32_t x376 = -1;
	volatile int32_t t88 = 409;

	t88 = (x373<((x374/x375)==x376));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x377 = INT8_MIN;
	volatile int8_t x378 = INT8_MIN;
	volatile int64_t x379 = INT64_MIN;
	uint16_t x380 = 4U;
	volatile int32_t t89 = 13310;

	t89 = (x377<((x378/x379)==x380));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x382 = 1U;
	int64_t x383 = INT64_MAX;
	int64_t x384 = 637418702006LL;

	t90 = (x381<((x382/x383)==x384));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x385 = 3LLU;
	int8_t x386 = 31;
	static int64_t x388 = -28779064462LL;
	static int32_t t91 = 96382;

	t91 = (x385<((x386/x387)==x388));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x389 = -1LL;
	int8_t x390 = INT8_MIN;
	int32_t t92 = 25;

	t92 = (x389<((x390/x391)==x392));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x393 = -58;
	static uint8_t x394 = 2U;
	uint32_t x395 = UINT32_MAX;
	int32_t x396 = -7523265;
	int32_t t93 = -50;

	t93 = (x393<((x394/x395)==x396));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x398 = INT32_MIN;
	int64_t x399 = -1LL;
	uint64_t x400 = 17164082989LLU;
	static int32_t t94 = -184;

	t94 = (x397<((x398/x399)==x400));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x401 = -1;
	int64_t x402 = -1LL;
	int16_t x404 = INT16_MIN;
	volatile int32_t t95 = 8;

	t95 = (x401<((x402/x403)==x404));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = -57;
	static uint64_t x406 = UINT64_MAX;
	static int8_t x407 = INT8_MIN;
	int16_t x408 = INT16_MIN;

	t96 = (x405<((x406/x407)==x408));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x409 = 167U;
	int32_t x410 = INT32_MAX;
	static uint16_t x412 = 11269U;
	static int32_t t97 = -10238;

	t97 = (x409<((x410/x411)==x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x414 = -1;
	uint8_t x415 = UINT8_MAX;
	int32_t t98 = 44254609;

	t98 = (x413<((x414/x415)==x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x417 = INT64_MIN;
	uint16_t x418 = 0U;
	int8_t x420 = INT8_MIN;
	volatile int32_t t99 = 362063422;

	t99 = (x417<((x418/x419)==x420));

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

