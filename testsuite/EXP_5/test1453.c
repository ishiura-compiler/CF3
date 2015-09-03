#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int8_t x7 = 4;
int32_t t1 = 2;
volatile int32_t t2 = -24;
static int16_t x13 = INT16_MAX;
volatile int32_t x15 = 6404327;
int64_t x19 = INT64_MIN;
int16_t x28 = -1693;
int8_t x30 = INT8_MAX;
static volatile uint64_t x36 = 407004971LLU;
uint16_t x41 = 23U;
volatile int32_t t10 = 57490;
int64_t x60 = INT64_MAX;
volatile uint64_t x68 = 13004886711323LLU;
static uint8_t x69 = 83U;
int32_t t18 = -206088012;
int16_t x83 = INT16_MIN;
int8_t x85 = -3;
uint64_t x93 = UINT64_MAX;
static uint32_t x94 = 478U;
uint32_t x101 = 1306U;
int16_t x103 = 3558;
static volatile int64_t x105 = INT64_MIN;
int16_t x109 = 61;
int64_t x110 = -2871888803246960884LL;
int32_t x113 = INT32_MIN;
int32_t t28 = 8;
uint64_t x129 = 135104486661688744LLU;
uint64_t x133 = 4739631322662731LLU;
volatile int64_t x135 = 50304245442964223LL;
uint16_t x138 = UINT16_MAX;
volatile int32_t x139 = 5223891;
int64_t x150 = INT64_MIN;
int64_t x165 = -1LL;
int16_t x168 = INT16_MAX;
volatile uint32_t x176 = 78979270U;
int32_t x178 = -81563;
int64_t x188 = -77868542670317LL;
static uint64_t x195 = 1093044133659148LLU;
static int32_t x202 = INT32_MIN;
int32_t t51 = -48;
volatile int8_t x211 = -1;
static volatile int32_t t52 = 34;
uint64_t x220 = 7214LLU;
static int32_t t54 = 1223915;
int8_t x221 = -35;
int32_t t55 = 442678;
static int64_t x227 = 0LL;
volatile int16_t x237 = INT16_MIN;
volatile int32_t t59 = -2196067;
static uint8_t x245 = 7U;
static int32_t t63 = 1;
uint64_t x261 = 996093719416189291LLU;
int32_t x264 = -1;
int16_t x283 = -1;
volatile uint32_t x287 = UINT32_MAX;
static volatile int8_t x288 = INT8_MIN;
volatile int32_t x289 = 54;
uint16_t x292 = 12U;
uint32_t x295 = UINT32_MAX;
static uint16_t x296 = UINT16_MAX;
static int8_t x298 = INT8_MIN;
static volatile int32_t x302 = 461161883;
volatile int32_t t75 = -1618;
static volatile int64_t x307 = INT64_MIN;
uint32_t x317 = 1243U;
int32_t x325 = -1;
int64_t x328 = 86045762LL;
volatile int32_t t84 = -31226;
int32_t t85 = -282;
static int32_t t86 = 967916;
uint16_t x357 = 7156U;
int32_t t90 = 23;
int8_t x369 = INT8_MAX;
uint16_t x370 = UINT16_MAX;
int16_t x377 = 3;
static uint16_t x379 = 770U;
int64_t x380 = INT64_MAX;
int64_t x384 = 0LL;
int8_t x385 = -1;
int32_t x388 = 822;
uint64_t x392 = 15452728LLU;
int64_t x396 = INT64_MIN;
int32_t t99 = 92242048;


void f0(void) {
	uint16_t x1 = 0U;
	int64_t x2 = INT64_MAX;
	static int32_t x3 = INT32_MIN;
	uint16_t x4 = UINT16_MAX;
	volatile int32_t t0 = -265878;

	t0 = (x1<=((x2<x3)==x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static int32_t x6 = INT32_MIN;
	int16_t x8 = INT16_MAX;

	t1 = (x5<=((x6<x7)==x8));

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int16_t x9 = -3712;
	volatile int64_t x10 = 394723586149928LL;
	volatile int16_t x11 = 6362;
	volatile uint64_t x12 = 61763LLU;

	t2 = (x9<=((x10<x11)==x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x14 = -197995;
	static int32_t x16 = INT32_MIN;
	volatile int32_t t3 = -1;

	t3 = (x13<=((x14<x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = 3LLU;
	static volatile int64_t x18 = 1804849950303LL;
	int64_t x20 = INT64_MIN;
	int32_t t4 = 4152;

	t4 = (x17<=((x18<x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = -1LL;
	volatile int8_t x22 = -1;
	volatile int8_t x23 = -1;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -1;

	t5 = (x21<=((x22<x23)==x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = INT16_MIN;
	uint64_t x26 = 265910937LLU;
	int8_t x27 = INT8_MAX;
	volatile int32_t t6 = -485;

	t6 = (x25<=((x26<x27)==x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = INT32_MIN;
	int32_t x31 = INT32_MIN;
	int16_t x32 = -48;
	int32_t t7 = 41965692;

	t7 = (x29<=((x30<x31)==x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	int32_t x34 = 228172;
	int32_t x35 = -1;
	int32_t t8 = -88049;

	t8 = (x33<=((x34<x35)==x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x37 = UINT32_MAX;
	static int32_t x38 = INT32_MIN;
	volatile int32_t x39 = -2;
	volatile int64_t x40 = -117409293652020LL;
	volatile int32_t t9 = -22;

	t9 = (x37<=((x38<x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x42 = INT64_MIN;
	int64_t x43 = INT64_MIN;
	int16_t x44 = 624;

	t10 = (x41<=((x42<x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	static int64_t x46 = INT64_MAX;
	int16_t x47 = INT16_MAX;
	int64_t x48 = -159385362LL;
	static int32_t t11 = 7919;

	t11 = (x45<=((x46<x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = 2941319LL;
	static int8_t x50 = INT8_MAX;
	static int8_t x51 = 24;
	int16_t x52 = -1;
	volatile int32_t t12 = 24;

	t12 = (x49<=((x50<x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	int16_t x54 = INT16_MAX;
	uint64_t x55 = UINT64_MAX;
	int32_t x56 = INT32_MIN;
	int32_t t13 = 2;

	t13 = (x53<=((x54<x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 135U;
	static uint8_t x58 = 6U;
	int64_t x59 = -1LL;
	volatile int32_t t14 = -4;

	t14 = (x57<=((x58<x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = -108294;
	volatile uint64_t x62 = UINT64_MAX;
	uint8_t x63 = UINT8_MAX;
	static int8_t x64 = 1;
	volatile int32_t t15 = -42;

	t15 = (x61<=((x62<x63)==x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = -17706502LL;
	int64_t x66 = 32694LL;
	int64_t x67 = 1LL;
	int32_t t16 = -79436601;

	t16 = (x65<=((x66<x67)==x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x70 = -1;
	int32_t x71 = INT32_MIN;
	int64_t x72 = INT64_MIN;
	int32_t t17 = -102976;

	t17 = (x69<=((x70<x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	int8_t x74 = -1;
	static uint8_t x75 = UINT8_MAX;
	int64_t x76 = INT64_MAX;

	t18 = (x73<=((x74<x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = 5U;
	static int64_t x78 = -1LL;
	int32_t x79 = -860402961;
	int16_t x80 = INT16_MAX;
	volatile int32_t t19 = 0;

	t19 = (x77<=((x78<x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = INT64_MAX;
	int64_t x82 = INT64_MAX;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 3003;

	t20 = (x81<=((x82<x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x86 = INT16_MAX;
	uint32_t x87 = 939U;
	int16_t x88 = INT16_MIN;
	static int32_t t21 = 1740;

	t21 = (x85<=((x86<x87)==x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 100U;
	uint8_t x90 = UINT8_MAX;
	int16_t x91 = INT16_MIN;
	uint32_t x92 = UINT32_MAX;
	volatile int32_t t22 = 906;

	t22 = (x89<=((x90<x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x95 = INT16_MIN;
	int64_t x96 = INT64_MIN;
	int32_t t23 = -62;

	t23 = (x93<=((x94<x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	volatile int32_t x98 = INT32_MIN;
	int64_t x99 = -1110426913994888LL;
	int8_t x100 = -22;
	volatile int32_t t24 = 48471205;

	t24 = (x97<=((x98<x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x102 = INT16_MAX;
	volatile int64_t x104 = INT64_MIN;
	int32_t t25 = -178840139;

	t25 = (x101<=((x102<x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x106 = -20;
	int32_t x107 = -35202;
	int8_t x108 = -1;
	int32_t t26 = 0;

	t26 = (x105<=((x106<x107)==x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x111 = INT16_MIN;
	volatile uint8_t x112 = 11U;
	volatile int32_t t27 = -5498;

	t27 = (x109<=((x110<x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x114 = 8378206;
	volatile int64_t x115 = INT64_MIN;
	uint8_t x116 = 1U;

	t28 = (x113<=((x114<x115)==x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MIN;
	static int64_t x118 = 38416297783LL;
	int8_t x119 = -1;
	static int8_t x120 = -1;
	volatile int32_t t29 = 10429;

	t29 = (x117<=((x118<x119)==x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	uint64_t x122 = UINT64_MAX;
	int16_t x123 = INT16_MAX;
	int16_t x124 = INT16_MIN;
	int32_t t30 = 1;

	t30 = (x121<=((x122<x123)==x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	int16_t x126 = 4;
	int8_t x127 = INT8_MIN;
	int8_t x128 = -1;
	volatile int32_t t31 = 512902830;

	t31 = (x125<=((x126<x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x130 = INT8_MAX;
	static uint16_t x131 = 1472U;
	uint16_t x132 = UINT16_MAX;
	volatile int32_t t32 = 570134863;

	t32 = (x129<=((x130<x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static volatile uint16_t x134 = 4U;
	static uint16_t x136 = 5U;
	volatile int32_t t33 = 13;

	t33 = (x133<=((x134<x135)==x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	uint32_t x140 = 525957267U;
	int32_t t34 = -74392301;

	t34 = (x137<=((x138<x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MAX;
	int16_t x142 = -1;
	uint64_t x143 = UINT64_MAX;
	static int32_t x144 = INT32_MIN;
	int32_t t35 = -1070450482;

	t35 = (x141<=((x142<x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MAX;
	static int32_t x146 = INT32_MIN;
	uint8_t x147 = 13U;
	int16_t x148 = INT16_MIN;
	int32_t t36 = 358277386;

	t36 = (x145<=((x146<x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 22;
	uint32_t x151 = 231218846U;
	uint8_t x152 = 77U;
	int32_t t37 = 1;

	t37 = (x149<=((x150<x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 2497U;
	uint8_t x154 = 0U;
	int32_t x155 = 16107;
	int64_t x156 = 553952292282422LL;
	static volatile int32_t t38 = 90985344;

	t38 = (x153<=((x154<x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = -51919;
	int16_t x158 = INT16_MIN;
	int32_t x159 = INT32_MIN;
	static int8_t x160 = -1;
	static int32_t t39 = 798269;

	t39 = (x157<=((x158<x159)==x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x161 = INT16_MIN;
	static uint8_t x162 = UINT8_MAX;
	int8_t x163 = INT8_MIN;
	int16_t x164 = INT16_MAX;
	int32_t t40 = -1;

	t40 = (x161<=((x162<x163)==x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x166 = INT8_MAX;
	static int16_t x167 = 1;
	static volatile int32_t t41 = -1;

	t41 = (x165<=((x166<x167)==x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -8;
	int16_t x170 = INT16_MIN;
	int32_t x171 = -5938;
	int8_t x172 = INT8_MIN;
	volatile int32_t t42 = -6;

	t42 = (x169<=((x170<x171)==x172));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = 57;
	int16_t x174 = -1;
	int8_t x175 = INT8_MIN;
	int32_t t43 = 341;

	t43 = (x173<=((x174<x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	uint64_t x179 = UINT64_MAX;
	int16_t x180 = -1;
	int32_t t44 = -2803555;

	t44 = (x177<=((x178<x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MAX;
	static uint8_t x182 = UINT8_MAX;
	int32_t x183 = 0;
	uint64_t x184 = UINT64_MAX;
	int32_t t45 = 0;

	t45 = (x181<=((x182<x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x185 = INT8_MAX;
	int8_t x186 = -1;
	int64_t x187 = INT64_MIN;
	volatile int32_t t46 = -44;

	t46 = (x185<=((x186<x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x189 = -5;
	int8_t x190 = INT8_MIN;
	int64_t x191 = INT64_MIN;
	int16_t x192 = INT16_MIN;
	volatile int32_t t47 = 1507;

	t47 = (x189<=((x190<x191)==x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MAX;
	int8_t x194 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	int32_t t48 = 5995;

	t48 = (x193<=((x194<x195)==x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = UINT8_MAX;
	static uint8_t x198 = 3U;
	int64_t x199 = -60LL;
	int16_t x200 = -1;
	volatile int32_t t49 = 680;

	t49 = (x197<=((x198<x199)==x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MAX;
	int32_t x203 = -1;
	uint8_t x204 = UINT8_MAX;
	int32_t t50 = -15;

	t50 = (x201<=((x202<x203)==x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	int64_t x206 = 163160393LL;
	static int16_t x207 = -6;
	int32_t x208 = INT32_MIN;

	t51 = (x205<=((x206<x207)==x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = INT32_MIN;
	int32_t x210 = -1;
	int32_t x212 = -394529;

	t52 = (x209<=((x210<x211)==x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = -1;
	int16_t x214 = INT16_MIN;
	static uint64_t x215 = 8371LLU;
	volatile uint32_t x216 = UINT32_MAX;
	int32_t t53 = 176804236;

	t53 = (x213<=((x214<x215)==x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	volatile int64_t x218 = -1LL;
	int64_t x219 = -318470352758506596LL;

	t54 = (x217<=((x218<x219)==x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x222 = INT64_MIN;
	volatile int16_t x223 = INT16_MIN;
	static uint16_t x224 = 3209U;

	t55 = (x221<=((x222<x223)==x224));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = INT16_MIN;
	int64_t x226 = 8094162LL;
	int8_t x228 = -1;
	volatile int32_t t56 = 7;

	t56 = (x225<=((x226<x227)==x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = 1U;
	int8_t x230 = INT8_MIN;
	uint64_t x231 = 107155306972561LLU;
	int16_t x232 = INT16_MAX;
	int32_t t57 = 6;

	t57 = (x229<=((x230<x231)==x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 255U;
	int16_t x234 = 429;
	uint64_t x235 = 373049299738162059LLU;
	static int16_t x236 = INT16_MIN;
	volatile int32_t t58 = -73012;

	t58 = (x233<=((x234<x235)==x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x238 = UINT64_MAX;
	int64_t x239 = 1LL;
	static uint32_t x240 = 1U;

	t59 = (x237<=((x238<x239)==x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MAX;
	int32_t x242 = INT32_MIN;
	static int64_t x243 = 1141891624LL;
	int32_t x244 = -527;
	static int32_t t60 = 0;

	t60 = (x241<=((x242<x243)==x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x246 = INT64_MIN;
	static int32_t x247 = INT32_MAX;
	volatile int8_t x248 = -1;
	int32_t t61 = -389125;

	t61 = (x245<=((x246<x247)==x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	int64_t x250 = 170232073718003LL;
	uint16_t x251 = 5225U;
	uint8_t x252 = UINT8_MAX;
	int32_t t62 = 789;

	t62 = (x249<=((x250<x251)==x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x253 = 0U;
	static int8_t x254 = -1;
	uint8_t x255 = 6U;
	static int32_t x256 = 102527718;

	t63 = (x253<=((x254<x255)==x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MIN;
	int32_t x258 = -1;
	volatile int64_t x259 = INT64_MAX;
	uint64_t x260 = UINT64_MAX;
	volatile int32_t t64 = -1;

	t64 = (x257<=((x258<x259)==x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x262 = 232LLU;
	int64_t x263 = INT64_MIN;
	int32_t t65 = 49870172;

	t65 = (x261<=((x262<x263)==x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x265 = INT8_MIN;
	uint8_t x266 = 14U;
	int64_t x267 = 576025LL;
	int32_t x268 = 1;
	volatile int32_t t66 = 0;

	t66 = (x265<=((x266<x267)==x268));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x269 = 1648;
	volatile int16_t x270 = -29;
	int8_t x271 = -6;
	int8_t x272 = INT8_MIN;
	static volatile int32_t t67 = 91614741;

	t67 = (x269<=((x270<x271)==x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = UINT8_MAX;
	int8_t x274 = INT8_MIN;
	int32_t x275 = -1;
	int16_t x276 = INT16_MAX;
	int32_t t68 = 1;

	t68 = (x273<=((x274<x275)==x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = 22634865344059LL;
	int16_t x278 = -42;
	uint8_t x279 = 117U;
	static uint8_t x280 = UINT8_MAX;
	volatile int32_t t69 = -1076;

	t69 = (x277<=((x278<x279)==x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int64_t x281 = INT64_MIN;
	volatile int64_t x282 = INT64_MIN;
	static int8_t x284 = -1;
	volatile int32_t t70 = 6;

	t70 = (x281<=((x282<x283)==x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = INT16_MIN;
	volatile int16_t x286 = INT16_MIN;
	int32_t t71 = -63938;

	t71 = (x285<=((x286<x287)==x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x290 = -1;
	volatile int32_t x291 = INT32_MAX;
	int32_t t72 = 625;

	t72 = (x289<=((x290<x291)==x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x293 = -1;
	int8_t x294 = INT8_MIN;
	static int32_t t73 = -16839983;

	t73 = (x293<=((x294<x295)==x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint16_t x297 = 456U;
	volatile int64_t x299 = INT64_MIN;
	int64_t x300 = INT64_MIN;
	volatile int32_t t74 = -3944818;

	t74 = (x297<=((x298<x299)==x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static uint32_t x301 = UINT32_MAX;
	int16_t x303 = 4;
	uint64_t x304 = 285538370496961LLU;

	t75 = (x301<=((x302<x303)==x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	int16_t x306 = 3159;
	int64_t x308 = 106LL;
	volatile int32_t t76 = -35592;

	t76 = (x305<=((x306<x307)==x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	volatile uint8_t x310 = UINT8_MAX;
	static int8_t x311 = INT8_MIN;
	uint32_t x312 = 1U;
	volatile int32_t t77 = -11629;

	t77 = (x309<=((x310<x311)==x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = 62859U;
	uint16_t x314 = 14U;
	volatile int64_t x315 = 2271LL;
	static int32_t x316 = 9;
	volatile int32_t t78 = -649866;

	t78 = (x313<=((x314<x315)==x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x318 = -1LL;
	int16_t x319 = -1;
	int8_t x320 = 1;
	int32_t t79 = -21;

	t79 = (x317<=((x318<x319)==x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = 18;
	static int64_t x322 = INT64_MIN;
	int64_t x323 = -852303LL;
	int32_t x324 = -1;
	static volatile int32_t t80 = 121364988;

	t80 = (x321<=((x322<x323)==x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x326 = 2;
	int32_t x327 = -1;
	static volatile int32_t t81 = 1;

	t81 = (x325<=((x326<x327)==x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = -1536;
	int16_t x330 = INT16_MIN;
	int8_t x331 = 0;
	int64_t x332 = -1299287844851110LL;
	volatile int32_t t82 = 9105508;

	t82 = (x329<=((x330<x331)==x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint64_t x333 = UINT64_MAX;
	uint64_t x334 = 2647843870968104460LLU;
	static int32_t x335 = 0;
	static int8_t x336 = -2;
	int32_t t83 = 594728;

	t83 = (x333<=((x334<x335)==x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = INT8_MAX;
	static int64_t x338 = -7LL;
	volatile int8_t x339 = -1;
	uint8_t x340 = 111U;

	t84 = (x337<=((x338<x339)==x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MIN;
	int8_t x342 = INT8_MIN;
	int32_t x343 = INT32_MAX;
	int64_t x344 = -1LL;

	t85 = (x341<=((x342<x343)==x344));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 205;
	int64_t x346 = INT64_MIN;
	int32_t x347 = 85175;
	uint8_t x348 = 45U;

	t86 = (x345<=((x346<x347)==x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x349 = INT64_MIN;
	volatile int16_t x350 = INT16_MIN;
	int16_t x351 = -1;
	uint32_t x352 = UINT32_MAX;
	volatile int32_t t87 = 1231361;

	t87 = (x349<=((x350<x351)==x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x353 = INT64_MIN;
	int8_t x354 = -3;
	int64_t x355 = -1600LL;
	int32_t x356 = INT32_MIN;
	int32_t t88 = -262;

	t88 = (x353<=((x354<x355)==x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x358 = 10646762799LL;
	uint64_t x359 = 226866595LLU;
	int64_t x360 = -1LL;
	int32_t t89 = 18464593;

	t89 = (x357<=((x358<x359)==x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 2U;
	int8_t x362 = INT8_MAX;
	int32_t x363 = INT32_MAX;
	uint32_t x364 = 98515U;

	t90 = (x361<=((x362<x363)==x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	int64_t x366 = -1LL;
	uint64_t x367 = 137933678433450669LLU;
	int8_t x368 = INT8_MIN;
	static volatile int32_t t91 = -20334385;

	t91 = (x365<=((x366<x367)==x368));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x371 = INT32_MIN;
	uint16_t x372 = 1735U;
	int32_t t92 = -115966;

	t92 = (x369<=((x370<x371)==x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile uint8_t x373 = 32U;
	int8_t x374 = INT8_MIN;
	int8_t x375 = -1;
	int64_t x376 = INT64_MAX;
	int32_t t93 = 392982;

	t93 = (x373<=((x374<x375)==x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x378 = 78U;
	int32_t t94 = 1048882522;

	t94 = (x377<=((x378<x379)==x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x381 = INT16_MIN;
	static int8_t x382 = INT8_MIN;
	int64_t x383 = INT64_MAX;
	volatile int32_t t95 = -837529;

	t95 = (x381<=((x382<x383)==x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x386 = UINT16_MAX;
	int16_t x387 = INT16_MAX;
	int32_t t96 = 101620680;

	t96 = (x385<=((x386<x387)==x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 1042914230U;
	static uint32_t x390 = 182333417U;
	int16_t x391 = -179;
	int32_t t97 = 0;

	t97 = (x389<=((x390<x391)==x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int32_t x393 = INT32_MIN;
	static int32_t x394 = -6088;
	int8_t x395 = 1;
	int32_t t98 = 53581;

	t98 = (x393<=((x394<x395)==x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = INT64_MIN;
	static volatile uint16_t x398 = UINT16_MAX;
	uint8_t x399 = UINT8_MAX;
	static uint64_t x400 = 465LLU;

	t99 = (x397<=((x398<x399)==x400));

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

