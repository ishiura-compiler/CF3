#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x3 = 431255U;
int8_t x4 = INT8_MIN;
int8_t x8 = INT8_MIN;
int32_t t1 = -479063937;
uint32_t x10 = 234U;
uint32_t x15 = UINT32_MAX;
volatile int32_t t4 = -407;
uint8_t x33 = UINT8_MAX;
uint64_t x36 = 675266285571LLU;
uint16_t x41 = UINT16_MAX;
int16_t x42 = INT16_MIN;
int16_t x45 = INT16_MIN;
int32_t x47 = INT32_MAX;
static uint8_t x48 = 49U;
static int8_t x52 = -1;
uint64_t x57 = UINT64_MAX;
volatile int64_t x59 = INT64_MIN;
volatile int32_t x61 = INT32_MAX;
static uint32_t x65 = 2U;
int64_t x69 = -67LL;
volatile int32_t t16 = 17256;
int8_t x77 = -1;
static int8_t x78 = -1;
int16_t x79 = 508;
int8_t x91 = -1;
int32_t x92 = INT32_MIN;
int32_t x93 = INT32_MIN;
static volatile int8_t x96 = INT8_MAX;
uint64_t x98 = 14LLU;
int16_t x108 = INT16_MAX;
volatile int32_t t21 = 4;
int32_t x115 = INT32_MAX;
static int32_t x117 = INT32_MIN;
uint32_t x118 = 2441U;
volatile int8_t x132 = 13;
volatile int32_t t28 = 11009;
uint32_t x140 = 6374222U;
volatile int32_t t31 = -16353603;
static volatile int64_t x151 = -1LL;
volatile int32_t t32 = -9048;
int8_t x163 = -1;
int32_t x165 = -1;
volatile int16_t x167 = 899;
volatile uint64_t x168 = UINT64_MAX;
int16_t x169 = INT16_MIN;
int64_t x172 = 7023216576068LL;
volatile int32_t t37 = 15736;
static int64_t x177 = 109LL;
int8_t x178 = -1;
uint32_t x190 = 51U;
static volatile int64_t x193 = INT64_MIN;
static int32_t x205 = -5;
volatile int32_t t43 = -20918044;
int8_t x210 = 1;
static int64_t x212 = INT64_MIN;
volatile int32_t t44 = -1327866;
static int64_t x221 = -1LL;
uint32_t x225 = 315348995U;
uint32_t x229 = UINT32_MAX;
uint32_t x230 = 216639867U;
int32_t x231 = INT32_MAX;
int32_t x236 = INT32_MIN;
int32_t t51 = -421674443;
int64_t x245 = -1LL;
int16_t x248 = INT16_MIN;
volatile int32_t t53 = -39711;
uint32_t x255 = 472529901U;
uint64_t x258 = 868120349943LLU;
uint8_t x259 = 0U;
int16_t x267 = -1771;
int16_t x274 = INT16_MIN;
int64_t x276 = -5LL;
int8_t x278 = INT8_MIN;
int64_t x279 = INT64_MIN;
static uint64_t x290 = UINT64_MAX;
int8_t x291 = INT8_MIN;
static int32_t t62 = 1437;
volatile uint64_t x297 = 939271089LLU;
int64_t x306 = INT64_MAX;
uint16_t x312 = UINT16_MAX;
int8_t x317 = -1;
volatile int32_t x331 = INT32_MIN;
int64_t x333 = INT64_MAX;
static uint16_t x336 = 109U;
int16_t x339 = INT16_MIN;
int64_t x353 = 134042300155LL;
int32_t t75 = 5185;
int8_t x367 = INT8_MAX;
int16_t x375 = INT16_MAX;
volatile int32_t t80 = -3166;
int16_t x377 = INT16_MAX;
int64_t x379 = -1300LL;
int16_t x380 = -25;
static int16_t x381 = INT16_MIN;
uint32_t x384 = UINT32_MAX;
int32_t x389 = -61952;
int64_t x399 = 4408521LL;
int16_t x403 = 2;
static volatile int32_t t87 = 0;
static uint64_t x405 = 217790513531265LLU;
uint32_t x406 = UINT32_MAX;
volatile int32_t t88 = 146836;
int8_t x409 = INT8_MIN;
static int8_t x425 = INT8_MIN;
int32_t x426 = INT32_MIN;
volatile int32_t t93 = 5332709;
static volatile uint64_t x434 = UINT64_MAX;
uint64_t x436 = 69847826178LLU;
volatile int32_t t94 = -1023580;
uint8_t x438 = 1U;
int8_t x439 = INT8_MAX;
volatile int16_t x440 = INT16_MAX;
int8_t x447 = INT8_MAX;
int32_t t99 = 13;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	uint16_t x2 = 22681U;
	volatile int32_t t0 = -61269572;

	t0 = ((x1-x2)==(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint16_t x5 = 103U;
	volatile int8_t x6 = INT8_MIN;
	int8_t x7 = INT8_MIN;

	t1 = ((x5-x6)==(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint8_t x9 = 16U;
	int64_t x11 = INT64_MAX;
	int64_t x12 = INT64_MIN;
	int32_t t2 = -872;

	t2 = ((x9-x10)==(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 1U;
	static uint32_t x14 = 284420U;
	int64_t x16 = INT64_MAX;
	int32_t t3 = -40571;

	t3 = ((x13-x14)==(x15&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = UINT64_MAX;
	uint16_t x22 = 16052U;
	int64_t x23 = INT64_MAX;
	static uint16_t x24 = 460U;

	t4 = ((x21-x22)==(x23&x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = INT8_MAX;
	static int32_t x30 = 48;
	int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MIN;
	int32_t t5 = 12761;

	t5 = ((x29-x30)==(x31&x32));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x34 = 1;
	int32_t x35 = -1;
	int32_t t6 = -82172838;

	t6 = ((x33-x34)==(x35&x36));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x37 = INT8_MIN;
	int16_t x38 = INT16_MIN;
	int16_t x39 = 667;
	uint8_t x40 = 26U;
	volatile int32_t t7 = -35363007;

	t7 = ((x37-x38)==(x39&x40));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x43 = 21U;
	static volatile uint64_t x44 = 112900956LLU;
	static int32_t t8 = -1;

	t8 = ((x41-x42)==(x43&x44));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x46 = INT16_MIN;
	volatile int32_t t9 = 24;

	t9 = ((x45-x46)==(x47&x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 1U;
	int64_t x50 = INT64_MAX;
	uint32_t x51 = 1116487U;
	int32_t t10 = 613265058;

	t10 = ((x49-x50)==(x51&x52));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x53 = 1;
	int8_t x54 = -1;
	volatile int16_t x55 = -1;
	int64_t x56 = INT64_MIN;
	static volatile int32_t t11 = 1436390;

	t11 = ((x53-x54)==(x55&x56));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x58 = -5238184472536725LL;
	uint64_t x60 = 694915173438416LLU;
	int32_t t12 = 75332161;

	t12 = ((x57-x58)==(x59&x60));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x62 = 24U;
	int16_t x63 = -1;
	volatile int8_t x64 = 0;
	volatile int32_t t13 = -7795;

	t13 = ((x61-x62)==(x63&x64));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x66 = 30U;
	int16_t x67 = INT16_MIN;
	uint16_t x68 = 200U;
	static volatile int32_t t14 = -9;

	t14 = ((x65-x66)==(x67&x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x70 = 126U;
	static int16_t x71 = 1;
	int64_t x72 = -1LL;
	int32_t t15 = 305;

	t15 = ((x69-x70)==(x71&x72));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = UINT16_MAX;
	int8_t x74 = INT8_MAX;
	static uint16_t x75 = 2047U;
	int16_t x76 = INT16_MAX;

	t16 = ((x73-x74)==(x75&x76));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x80 = UINT8_MAX;
	volatile int32_t t17 = -1644;

	t17 = ((x77-x78)==(x79&x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x89 = 27U;
	int32_t x90 = 40414;
	int32_t t18 = 605;

	t18 = ((x89-x90)==(x91&x92));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x94 = 2170044734826LLU;
	int32_t x95 = -113127;
	static int32_t t19 = 9;

	t19 = ((x93-x94)==(x95&x96));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x97 = INT16_MAX;
	volatile int32_t x99 = INT32_MIN;
	static int32_t x100 = 81866;
	volatile int32_t t20 = 66;

	t20 = ((x97-x98)==(x99&x100));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x105 = INT8_MIN;
	uint8_t x106 = 6U;
	static int16_t x107 = INT16_MIN;

	t21 = ((x105-x106)==(x107&x108));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x109 = UINT8_MAX;
	int8_t x110 = INT8_MIN;
	int64_t x111 = INT64_MIN;
	volatile uint32_t x112 = 1286315711U;
	int32_t t22 = -176;

	t22 = ((x109-x110)==(x111&x112));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x113 = -1;
	int32_t x114 = -1;
	uint8_t x116 = 12U;
	int32_t t23 = -330263;

	t23 = ((x113-x114)==(x115&x116));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x119 = -1;
	int64_t x120 = -8182827LL;
	static int32_t t24 = -32;

	t24 = ((x117-x118)==(x119&x120));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x121 = UINT64_MAX;
	volatile int32_t x122 = INT32_MAX;
	uint64_t x123 = UINT64_MAX;
	int16_t x124 = INT16_MIN;
	int32_t t25 = 117;

	t25 = ((x121-x122)==(x123&x124));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x125 = INT8_MAX;
	volatile uint32_t x126 = 199U;
	static uint16_t x127 = 13U;
	static volatile int64_t x128 = 419808616672701LL;
	int32_t t26 = 685;

	t26 = ((x125-x126)==(x127&x128));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x129 = INT64_MIN;
	int64_t x130 = INT64_MIN;
	uint32_t x131 = UINT32_MAX;
	static int32_t t27 = 16;

	t27 = ((x129-x130)==(x131&x132));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = INT8_MAX;
	int16_t x134 = 20;
	int8_t x135 = INT8_MIN;
	uint32_t x136 = 551638593U;

	t28 = ((x133-x134)==(x135&x136));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x137 = INT16_MAX;
	int16_t x138 = INT16_MAX;
	uint32_t x139 = 11967U;
	static volatile int32_t t29 = -221238;

	t29 = ((x137-x138)==(x139&x140));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x141 = INT16_MAX;
	static int16_t x142 = 3757;
	volatile int16_t x143 = INT16_MAX;
	volatile int64_t x144 = INT64_MIN;
	int32_t t30 = 963785759;

	t30 = ((x141-x142)==(x143&x144));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x145 = UINT64_MAX;
	int32_t x146 = -1;
	static volatile int32_t x147 = -60;
	int8_t x148 = INT8_MIN;

	t31 = ((x145-x146)==(x147&x148));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x149 = 2931U;
	int8_t x150 = 0;
	int8_t x152 = 51;

	t32 = ((x149-x150)==(x151&x152));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -1;
	static volatile uint64_t x154 = 147869477581675LLU;
	volatile int16_t x155 = INT16_MAX;
	int16_t x156 = INT16_MIN;
	static volatile int32_t t33 = 7684;

	t33 = ((x153-x154)==(x155&x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static int16_t x161 = -1;
	int32_t x162 = INT32_MIN;
	static volatile uint16_t x164 = 16350U;
	static int32_t t34 = -42834454;

	t34 = ((x161-x162)==(x163&x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x166 = 3436;
	volatile int32_t t35 = 242159201;

	t35 = ((x165-x166)==(x167&x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x170 = INT32_MIN;
	uint16_t x171 = UINT16_MAX;
	volatile int32_t t36 = 2;

	t36 = ((x169-x170)==(x171&x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x173 = -6200072144406LL;
	static uint8_t x174 = 53U;
	volatile uint32_t x175 = 56063460U;
	static uint32_t x176 = UINT32_MAX;

	t37 = ((x173-x174)==(x175&x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x179 = -1;
	uint16_t x180 = 639U;
	int32_t t38 = 2086167;

	t38 = ((x177-x178)==(x179&x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x181 = 0U;
	int8_t x182 = INT8_MAX;
	uint16_t x183 = 4864U;
	int64_t x184 = -1LL;
	volatile int32_t t39 = 215528;

	t39 = ((x181-x182)==(x183&x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x189 = -1LL;
	int16_t x191 = 57;
	static volatile int32_t x192 = INT32_MIN;
	static volatile int32_t t40 = 215;

	t40 = ((x189-x190)==(x191&x192));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x194 = -1;
	uint8_t x195 = 8U;
	int16_t x196 = INT16_MAX;
	volatile int32_t t41 = 208652;

	t41 = ((x193-x194)==(x195&x196));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int8_t x197 = -24;
	int32_t x198 = 240034209;
	uint64_t x199 = UINT64_MAX;
	int16_t x200 = -9863;
	int32_t t42 = -197;

	t42 = ((x197-x198)==(x199&x200));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x206 = INT8_MAX;
	static int64_t x207 = INT64_MIN;
	static int32_t x208 = INT32_MAX;

	t43 = ((x205-x206)==(x207&x208));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x209 = 15U;
	static uint64_t x211 = 2036784LLU;

	t44 = ((x209-x210)==(x211&x212));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x217 = -16695136LL;
	int64_t x218 = INT64_MIN;
	int32_t x219 = INT32_MIN;
	int8_t x220 = -1;
	volatile int32_t t45 = 238160111;

	t45 = ((x217-x218)==(x219&x220));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x222 = INT8_MIN;
	uint64_t x223 = UINT64_MAX;
	static uint32_t x224 = 66112698U;
	int32_t t46 = -68569303;

	t46 = ((x221-x222)==(x223&x224));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x226 = -1138713052602022153LL;
	volatile int64_t x227 = -1LL;
	int64_t x228 = INT64_MIN;
	volatile int32_t t47 = -222177;

	t47 = ((x225-x226)==(x227&x228));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x232 = INT16_MIN;
	volatile int32_t t48 = -204331;

	t48 = ((x229-x230)==(x231&x232));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x233 = UINT16_MAX;
	static volatile int8_t x234 = INT8_MAX;
	int16_t x235 = INT16_MIN;
	volatile int32_t t49 = -14955516;

	t49 = ((x233-x234)==(x235&x236));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = 1;
	static int32_t x238 = -30698507;
	volatile int16_t x239 = -1;
	static int32_t x240 = INT32_MIN;
	int32_t t50 = 292;

	t50 = ((x237-x238)==(x239&x240));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x241 = INT32_MIN;
	static int64_t x242 = -3697069054LL;
	static int32_t x243 = -1;
	static uint32_t x244 = UINT32_MAX;

	t51 = ((x241-x242)==(x243&x244));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x246 = -1LL;
	int16_t x247 = INT16_MIN;
	volatile int32_t t52 = 719;

	t52 = ((x245-x246)==(x247&x248));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x249 = -24;
	static uint32_t x250 = UINT32_MAX;
	int32_t x251 = INT32_MIN;
	static volatile int64_t x252 = INT64_MIN;

	t53 = ((x249-x250)==(x251&x252));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x253 = INT32_MIN;
	int32_t x254 = INT32_MIN;
	uint32_t x256 = UINT32_MAX;
	int32_t t54 = -9776756;

	t54 = ((x253-x254)==(x255&x256));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x257 = -47;
	int8_t x260 = -1;
	int32_t t55 = 37753;

	t55 = ((x257-x258)==(x259&x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x261 = 2;
	int32_t x262 = INT32_MAX;
	volatile int64_t x263 = -6677447LL;
	uint64_t x264 = UINT64_MAX;
	volatile int32_t t56 = -2869;

	t56 = ((x261-x262)==(x263&x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x265 = 18171083;
	int8_t x266 = 1;
	static int32_t x268 = -1424;
	int32_t t57 = 7;

	t57 = ((x265-x266)==(x267&x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x269 = 121663376U;
	int16_t x270 = INT16_MIN;
	int16_t x271 = INT16_MAX;
	int64_t x272 = INT64_MIN;
	volatile int32_t t58 = 7858141;

	t58 = ((x269-x270)==(x271&x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x273 = 3;
	int32_t x275 = INT32_MIN;
	int32_t t59 = 24982789;

	t59 = ((x273-x274)==(x275&x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = INT8_MIN;
	static volatile uint32_t x280 = 62169U;
	volatile int32_t t60 = 1791;

	t60 = ((x277-x278)==(x279&x280));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x289 = UINT16_MAX;
	uint64_t x292 = 32059LLU;
	int32_t t61 = -10;

	t61 = ((x289-x290)==(x291&x292));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x293 = INT16_MIN;
	static int64_t x294 = -1LL;
	int8_t x295 = 1;
	int16_t x296 = INT16_MIN;

	t62 = ((x293-x294)==(x295&x296));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint32_t x298 = UINT32_MAX;
	volatile int32_t x299 = INT32_MIN;
	int32_t x300 = -146;
	int32_t t63 = 1320726;

	t63 = ((x297-x298)==(x299&x300));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x301 = 13;
	int64_t x302 = -267156271LL;
	uint64_t x303 = 1LLU;
	volatile int64_t x304 = -69LL;
	int32_t t64 = -6;

	t64 = ((x301-x302)==(x303&x304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x305 = UINT32_MAX;
	static uint32_t x307 = 163088294U;
	int16_t x308 = INT16_MAX;
	int32_t t65 = 28;

	t65 = ((x305-x306)==(x307&x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x309 = UINT32_MAX;
	int8_t x310 = 46;
	volatile int16_t x311 = -11;
	int32_t t66 = -1;

	t66 = ((x309-x310)==(x311&x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x318 = 1;
	volatile uint16_t x319 = UINT16_MAX;
	int64_t x320 = INT64_MIN;
	volatile int32_t t67 = 103250355;

	t67 = ((x317-x318)==(x319&x320));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x325 = INT8_MIN;
	int64_t x326 = 1LL;
	volatile int32_t x327 = INT32_MAX;
	uint16_t x328 = 5597U;
	static volatile int32_t t68 = 62068144;

	t68 = ((x325-x326)==(x327&x328));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x329 = INT8_MIN;
	volatile int8_t x330 = 30;
	uint16_t x332 = 71U;
	static int32_t t69 = -1436497;

	t69 = ((x329-x330)==(x331&x332));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x334 = 0U;
	uint32_t x335 = 7U;
	volatile int32_t t70 = -68660559;

	t70 = ((x333-x334)==(x335&x336));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x337 = 22706349LLU;
	int64_t x338 = INT64_MAX;
	volatile int32_t x340 = INT32_MIN;
	static volatile int32_t t71 = -47424;

	t71 = ((x337-x338)==(x339&x340));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x341 = INT16_MAX;
	int8_t x342 = INT8_MIN;
	volatile int32_t x343 = INT32_MIN;
	static int16_t x344 = INT16_MAX;
	volatile int32_t t72 = -6072;

	t72 = ((x341-x342)==(x343&x344));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x345 = INT64_MAX;
	int32_t x346 = 4;
	int8_t x347 = -1;
	int16_t x348 = -1;
	volatile int32_t t73 = 54024;

	t73 = ((x345-x346)==(x347&x348));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x349 = UINT64_MAX;
	static int32_t x350 = INT32_MIN;
	uint64_t x351 = 1932395552879691641LLU;
	uint64_t x352 = 13823061703341378LLU;
	int32_t t74 = 6773329;

	t74 = ((x349-x350)==(x351&x352));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x354 = UINT16_MAX;
	uint64_t x355 = 94033223LLU;
	static int32_t x356 = INT32_MIN;

	t75 = ((x353-x354)==(x355&x356));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile uint16_t x357 = 190U;
	uint16_t x358 = 68U;
	static int64_t x359 = INT64_MIN;
	int16_t x360 = -74;
	int32_t t76 = 0;

	t76 = ((x357-x358)==(x359&x360));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int64_t x361 = -1LL;
	static int8_t x362 = -1;
	int8_t x363 = -1;
	volatile int16_t x364 = -7906;
	volatile int32_t t77 = 2455499;

	t77 = ((x361-x362)==(x363&x364));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x365 = INT8_MAX;
	static int8_t x366 = INT8_MAX;
	int64_t x368 = 1619854124742185LL;
	int32_t t78 = -31370854;

	t78 = ((x365-x366)==(x367&x368));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x369 = INT32_MIN;
	static uint64_t x370 = 166404216062697774LLU;
	static int32_t x371 = INT32_MIN;
	volatile uint64_t x372 = UINT64_MAX;
	volatile int32_t t79 = -790197296;

	t79 = ((x369-x370)==(x371&x372));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x373 = 242374U;
	int32_t x374 = INT32_MIN;
	int8_t x376 = INT8_MIN;

	t80 = ((x373-x374)==(x375&x376));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x378 = 3489000668LLU;
	static int32_t t81 = 0;

	t81 = ((x377-x378)==(x379&x380));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x382 = INT8_MIN;
	static volatile int32_t x383 = 23857255;
	int32_t t82 = -17549;

	t82 = ((x381-x382)==(x383&x384));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x385 = UINT64_MAX;
	int8_t x386 = INT8_MIN;
	static int32_t x387 = 57982;
	int32_t x388 = INT32_MIN;
	int32_t t83 = -400982;

	t83 = ((x385-x386)==(x387&x388));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x390 = INT32_MIN;
	uint64_t x391 = 1833342LLU;
	static uint16_t x392 = 1U;
	static int32_t t84 = -99322;

	t84 = ((x389-x390)==(x391&x392));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x393 = 39LLU;
	volatile int64_t x394 = INT64_MIN;
	static uint16_t x395 = 2017U;
	int16_t x396 = INT16_MIN;
	volatile int32_t t85 = -533716942;

	t85 = ((x393-x394)==(x395&x396));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x397 = 12U;
	static volatile int8_t x398 = INT8_MIN;
	volatile int32_t x400 = -1;
	int32_t t86 = 969;

	t86 = ((x397-x398)==(x399&x400));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x401 = -6614;
	uint16_t x402 = 43U;
	uint64_t x404 = UINT64_MAX;

	t87 = ((x401-x402)==(x403&x404));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x407 = INT8_MIN;
	int16_t x408 = INT16_MIN;

	t88 = ((x405-x406)==(x407&x408));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x410 = 5341U;
	uint32_t x411 = 58907224U;
	int32_t x412 = -367166671;
	int32_t t89 = 114;

	t89 = ((x409-x410)==(x411&x412));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x413 = INT8_MAX;
	int32_t x414 = INT32_MAX;
	int16_t x415 = -1;
	static int8_t x416 = -1;
	int32_t t90 = 2846;

	t90 = ((x413-x414)==(x415&x416));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x421 = -1LL;
	static int32_t x422 = 19251947;
	uint64_t x423 = 3415579270653680528LLU;
	int64_t x424 = -51763613853066116LL;
	int32_t t91 = 0;

	t91 = ((x421-x422)==(x423&x424));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x427 = UINT32_MAX;
	uint32_t x428 = 34U;
	int32_t t92 = -11;

	t92 = ((x425-x426)==(x427&x428));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x429 = 141946874U;
	uint32_t x430 = 54288959U;
	volatile int32_t x431 = 4277;
	int32_t x432 = -36;

	t93 = ((x429-x430)==(x431&x432));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x433 = 13951U;
	int32_t x435 = INT32_MIN;

	t94 = ((x433-x434)==(x435&x436));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x437 = UINT16_MAX;
	volatile int32_t t95 = -367804042;

	t95 = ((x437-x438)==(x439&x440));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x441 = 448495U;
	int8_t x442 = INT8_MIN;
	int64_t x443 = -31838LL;
	int16_t x444 = INT16_MIN;
	int32_t t96 = -16925318;

	t96 = ((x441-x442)==(x443&x444));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x445 = INT32_MAX;
	static uint8_t x446 = 3U;
	uint16_t x448 = 3U;
	static volatile int32_t t97 = -159654445;

	t97 = ((x445-x446)==(x447&x448));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x449 = 2393U;
	uint32_t x450 = 2233529U;
	int8_t x451 = INT8_MAX;
	static uint16_t x452 = 365U;
	volatile int32_t t98 = -1842492;

	t98 = ((x449-x450)==(x451&x452));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x461 = INT16_MAX;
	int16_t x462 = -1;
	uint64_t x463 = 1803137LLU;
	static int64_t x464 = -256879578688187LL;

	t99 = ((x461-x462)==(x463&x464));

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

