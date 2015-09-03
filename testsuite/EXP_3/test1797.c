#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x8 = 57053U;
volatile int16_t x11 = INT16_MIN;
int32_t x12 = -92968602;
volatile int64_t t4 = -105275137167477LL;
uint32_t x35 = 800U;
volatile int64_t x39 = 1304842959549LL;
volatile int64_t t9 = -15175191248256031LL;
int16_t x41 = -1;
volatile int64_t x43 = -1LL;
int16_t x45 = INT16_MIN;
volatile int32_t x46 = 4029;
int32_t x52 = INT32_MIN;
volatile uint16_t x62 = 31U;
int16_t x71 = -1;
uint32_t x72 = 69613053U;
int64_t x77 = INT64_MIN;
int8_t x83 = INT8_MAX;
volatile int64_t x85 = INT64_MIN;
static int32_t x92 = 1;
volatile int32_t t23 = 1;
static volatile uint16_t x97 = 26621U;
volatile int64_t x98 = INT64_MAX;
uint64_t x100 = 285993717064LLU;
volatile int16_t x102 = INT16_MIN;
volatile uint16_t x103 = UINT16_MAX;
uint32_t x109 = 518093U;
int16_t x121 = INT16_MAX;
static uint32_t x122 = 55U;
int64_t x127 = INT64_MIN;
int16_t x131 = INT16_MAX;
static volatile int16_t x134 = INT16_MIN;
int32_t x142 = INT32_MIN;
int64_t x143 = INT64_MAX;
int32_t x146 = INT32_MIN;
volatile int64_t t37 = -42655500LL;
int8_t x153 = INT8_MIN;
static int64_t x155 = 3508570788443LL;
uint32_t x158 = 236848U;
static uint16_t x168 = 665U;
static volatile int64_t t41 = 24LL;
volatile int64_t x171 = INT64_MAX;
uint64_t x176 = 17902949944114794LLU;
volatile uint64_t t43 = 89426439LLU;
volatile int8_t x180 = INT8_MIN;
int32_t t44 = -31917293;
static volatile int16_t x188 = INT16_MIN;
static volatile int32_t t47 = -15;
uint16_t x200 = UINT16_MAX;
volatile int64_t x206 = 1671817159LL;
int64_t x208 = INT64_MIN;
int64_t t51 = -5741014LL;
volatile int16_t x210 = -1;
int32_t x213 = 22618;
static volatile int32_t t53 = -445343516;
static int8_t x220 = 37;
volatile int32_t t54 = 418362943;
uint8_t x221 = 8U;
static uint8_t x224 = 35U;
uint64_t x226 = 1LLU;
int16_t x228 = INT16_MIN;
int32_t x231 = INT32_MAX;
volatile int64_t t57 = 28130LL;
int32_t x242 = INT32_MAX;
uint64_t x244 = UINT64_MAX;
uint64_t t60 = 1012128LLU;
static volatile uint16_t x249 = UINT16_MAX;
int64_t x250 = -1LL;
volatile uint32_t x255 = 19997U;
int8_t x258 = INT8_MIN;
uint16_t x262 = 2U;
int16_t x267 = 6;
uint32_t x269 = 1458740817U;
int8_t x270 = INT8_MAX;
int16_t x272 = INT16_MIN;
volatile int64_t t69 = 37LL;
uint8_t x281 = 27U;
int8_t x287 = INT8_MIN;
int16_t x291 = INT16_MAX;
int8_t x294 = INT8_MIN;
uint64_t x297 = UINT64_MAX;
uint16_t x302 = UINT16_MAX;
static volatile uint32_t t77 = 150852002U;
static volatile uint32_t x318 = UINT32_MAX;
uint32_t x328 = 125U;
uint32_t x330 = 1409506901U;
volatile uint8_t x332 = 21U;
int32_t x338 = -51387;
static uint64_t x340 = 17803765175323120LLU;
int16_t x343 = -1;
static uint32_t x348 = 141027U;
static uint64_t x350 = UINT64_MAX;
int64_t x351 = 6LL;
int64_t x356 = INT64_MAX;
int64_t x360 = INT64_MIN;
int32_t x361 = INT32_MAX;
volatile uint32_t t90 = 219U;
volatile int64_t x365 = 1LL;
volatile uint32_t x368 = 929U;
int32_t x369 = INT32_MAX;
static volatile int32_t t92 = 48;
int64_t x379 = INT64_MAX;
static int16_t x394 = INT16_MAX;
uint64_t x395 = 3901609792203LLU;
int8_t x400 = INT8_MIN;
static volatile uint64_t t99 = 3399135LLU;


void f0(void) {
	int16_t x1 = -566;
	volatile int16_t x2 = INT16_MAX;
	int16_t x3 = INT16_MIN;
	int64_t x4 = -1LL;
	int64_t t0 = 89402971LL;

	t0 = ((x1<x2)*(x3&x4));

	if (t0 != -32768LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = INT64_MIN;
	volatile uint16_t x6 = UINT16_MAX;
	static uint8_t x7 = 82U;
	uint32_t t1 = 32U;

	t1 = ((x5<x6)*(x7&x8));

	if (t1 != 80U) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int32_t x9 = -345485;
	volatile int64_t x10 = -99913685151LL;
	volatile int32_t t2 = -32;

	t2 = ((x9<x10)*(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = 1U;
	int64_t x14 = INT64_MIN;
	int64_t x15 = INT64_MIN;
	int8_t x16 = 0;
	volatile int64_t t3 = -1LL;

	t3 = ((x13<x14)*(x15&x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 7347U;
	int32_t x18 = INT32_MAX;
	volatile int64_t x19 = -16387123297LL;
	volatile int64_t x20 = INT64_MAX;

	t4 = ((x17<x18)*(x19&x20));

	if (t4 != 9223372020467652511LL) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static volatile uint64_t x22 = 3754778LLU;
	volatile uint32_t x23 = 1373U;
	uint8_t x24 = UINT8_MAX;
	static uint32_t t5 = 435373U;

	t5 = ((x21<x22)*(x23&x24));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 701309841195LL;
	int32_t x26 = -813;
	int16_t x27 = -1;
	uint64_t x28 = 95690LLU;
	volatile uint64_t t6 = 4116214767LLU;

	t6 = ((x25<x26)*(x27&x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint64_t x29 = 1297077LLU;
	uint32_t x30 = UINT32_MAX;
	volatile int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MIN;
	static int32_t t7 = -3;

	t7 = ((x29<x30)*(x31&x32));

	if (t7 != -32768) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 20U;
	int32_t x34 = -1;
	volatile int8_t x36 = INT8_MIN;
	static volatile uint32_t t8 = 5U;

	t8 = ((x33<x34)*(x35&x36));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1514080LL;
	static int16_t x38 = INT16_MAX;
	int32_t x40 = INT32_MIN;

	t9 = ((x37<x38)*(x39&x40));

	if (t9 != 1303522574336LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x42 = UINT8_MAX;
	int8_t x44 = INT8_MIN;
	volatile int64_t t10 = 54860399LL;

	t10 = ((x41<x42)*(x43&x44));

	if (t10 != -128LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x47 = 21;
	volatile uint32_t x48 = UINT32_MAX;
	uint32_t t11 = 1798673499U;

	t11 = ((x45<x46)*(x47&x48));

	if (t11 != 21U) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = 1LLU;
	uint32_t x50 = 124653U;
	int16_t x51 = INT16_MIN;
	volatile int32_t t12 = INT32_MIN;

	t12 = ((x49<x50)*(x51&x52));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	volatile int64_t x54 = INT64_MIN;
	uint16_t x55 = 84U;
	uint32_t x56 = 21U;
	volatile uint32_t t13 = 86U;

	t13 = ((x53<x54)*(x55&x56));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -4;
	int8_t x58 = INT8_MAX;
	static int16_t x59 = -3;
	int16_t x60 = -1;
	volatile int32_t t14 = 29208;

	t14 = ((x57<x58)*(x59&x60));

	if (t14 != -3) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	uint32_t x63 = UINT32_MAX;
	volatile uint32_t x64 = 123334U;
	volatile uint32_t t15 = 2041U;

	t15 = ((x61<x62)*(x63&x64));

	if (t15 != 123334U) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x65 = -1;
	uint8_t x66 = UINT8_MAX;
	int8_t x67 = -1;
	int32_t x68 = INT32_MIN;
	int32_t t16 = INT32_MIN;

	t16 = ((x65<x66)*(x67&x68));

	if (t16 != INT32_MIN) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MAX;
	static uint8_t x70 = 6U;
	volatile uint32_t t17 = 64504192U;

	t17 = ((x69<x70)*(x71&x72));

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = INT32_MIN;
	uint32_t x74 = 934U;
	int8_t x75 = INT8_MIN;
	volatile uint8_t x76 = 0U;
	volatile int32_t t18 = -147;

	t18 = ((x73<x74)*(x75&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x78 = -1;
	volatile int8_t x79 = INT8_MIN;
	int16_t x80 = INT16_MIN;
	static volatile int32_t t19 = -3276;

	t19 = ((x77<x78)*(x79&x80));

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = INT64_MAX;
	int16_t x82 = -1;
	int64_t x84 = INT64_MIN;
	static int64_t t20 = -32176027LL;

	t20 = ((x81<x82)*(x83&x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x86 = 11;
	int32_t x87 = INT32_MIN;
	int32_t x88 = -1;
	volatile int32_t t21 = INT32_MIN;

	t21 = ((x85<x86)*(x87&x88));

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = -12393283LL;
	volatile int32_t x90 = -7;
	uint16_t x91 = 1579U;
	int32_t t22 = 4725913;

	t22 = ((x89<x90)*(x91&x92));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x93 = INT32_MAX;
	int32_t x94 = -1;
	int32_t x95 = INT32_MAX;
	uint16_t x96 = 1798U;

	t23 = ((x93<x94)*(x95&x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x99 = UINT16_MAX;
	uint64_t t24 = 373026305055249079LLU;

	t24 = ((x97<x98)*(x99&x100));

	if (t24 != 52552LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x101 = 1;
	volatile int16_t x104 = INT16_MIN;
	int32_t t25 = -149;

	t25 = ((x101<x102)*(x103&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = -1LL;
	static int16_t x106 = INT16_MIN;
	uint8_t x107 = UINT8_MAX;
	int8_t x108 = INT8_MAX;
	int32_t t26 = 6848;

	t26 = ((x105<x106)*(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x110 = INT8_MAX;
	int16_t x111 = -15025;
	int64_t x112 = -3685766915704LL;
	int64_t t27 = -22345LL;

	t27 = ((x109<x110)*(x111&x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = 2;
	int16_t x114 = INT16_MIN;
	uint32_t x115 = UINT32_MAX;
	int64_t x116 = 88824187LL;
	int64_t t28 = -2499388780LL;

	t28 = ((x113<x114)*(x115&x116));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int8_t x118 = 13;
	int64_t x119 = 216LL;
	uint16_t x120 = 1U;
	int64_t t29 = 248360522703LL;

	t29 = ((x117<x118)*(x119&x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x123 = INT16_MIN;
	static uint8_t x124 = 120U;
	volatile int32_t t30 = -10875;

	t30 = ((x121<x122)*(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = -88517LL;
	int64_t x126 = -1LL;
	int32_t x128 = INT32_MIN;
	int64_t t31 = INT64_MIN;

	t31 = ((x125<x126)*(x127&x128));

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	static uint16_t x130 = 0U;
	volatile int64_t x132 = -1LL;
	int64_t t32 = -1168410393703380LL;

	t32 = ((x129<x130)*(x131&x132));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	static int8_t x135 = -1;
	int64_t x136 = INT64_MIN;
	static int64_t t33 = -33825026822971LL;

	t33 = ((x133<x134)*(x135&x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x137 = 6472U;
	static uint64_t x138 = 4LLU;
	int32_t x139 = INT32_MIN;
	int8_t x140 = INT8_MIN;
	int32_t t34 = -15;

	t34 = ((x137<x138)*(x139&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	static int8_t x144 = INT8_MIN;
	int64_t t35 = 2927459431374835LL;

	t35 = ((x141<x142)*(x143&x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = -45;
	static int64_t x147 = -1LL;
	int8_t x148 = INT8_MAX;
	volatile int64_t t36 = -369954367LL;

	t36 = ((x145<x146)*(x147&x148));

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	int16_t x150 = INT16_MAX;
	int16_t x151 = -113;
	static volatile int64_t x152 = 10LL;

	t37 = ((x149<x150)*(x151&x152));

	if (t37 != 10LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = 2;
	uint64_t x156 = UINT64_MAX;
	static uint64_t t38 = 7345186LLU;

	t38 = ((x153<x154)*(x155&x156));

	if (t38 != 3508570788443LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = -60;
	uint32_t x159 = UINT32_MAX;
	uint8_t x160 = 12U;
	uint32_t t39 = 5915U;

	t39 = ((x157<x158)*(x159&x160));

	if (t39 != 0U) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = UINT64_MAX;
	int16_t x162 = -1;
	int8_t x163 = -4;
	static uint64_t x164 = UINT64_MAX;
	volatile uint64_t t40 = 102LLU;

	t40 = ((x161<x162)*(x163&x164));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x165 = 122U;
	int64_t x166 = INT64_MIN;
	int64_t x167 = 575520998LL;

	t41 = ((x165<x166)*(x167&x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 1633282U;
	int64_t x170 = INT64_MAX;
	static volatile int64_t x172 = -4069LL;
	static int64_t t42 = 5LL;

	t42 = ((x169<x170)*(x171&x172));

	if (t42 != 9223372036854771739LL) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int64_t x174 = INT64_MIN;
	int8_t x175 = INT8_MIN;

	t43 = ((x173<x174)*(x175&x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint64_t x177 = 307LLU;
	uint32_t x178 = 355750U;
	volatile int8_t x179 = 1;

	t44 = ((x177<x178)*(x179&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MIN;
	int32_t x182 = INT32_MIN;
	int16_t x183 = -1;
	int64_t x184 = INT64_MIN;
	int64_t t45 = INT64_MIN;

	t45 = ((x181<x182)*(x183&x184));

	if (t45 != INT64_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	static volatile int16_t x186 = 0;
	uint32_t x187 = 189U;
	uint32_t t46 = 937U;

	t46 = ((x185<x186)*(x187&x188));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x189 = UINT16_MAX;
	static uint8_t x190 = UINT8_MAX;
	volatile int32_t x191 = -82981849;
	static uint8_t x192 = UINT8_MAX;

	t47 = ((x189<x190)*(x191&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 11U;
	int64_t x194 = -1LL;
	int64_t x195 = INT64_MIN;
	int16_t x196 = 12;
	volatile int64_t t48 = 3774LL;

	t48 = ((x193<x194)*(x195&x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x197 = INT64_MAX;
	uint64_t x198 = 9288222962051LLU;
	volatile int8_t x199 = INT8_MAX;
	volatile int32_t t49 = 99302;

	t49 = ((x197<x198)*(x199&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = -511082108LL;
	int32_t x202 = INT32_MIN;
	volatile int32_t x203 = INT32_MAX;
	int16_t x204 = INT16_MIN;
	int32_t t50 = 1;

	t50 = ((x201<x202)*(x203&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	static volatile uint16_t x207 = UINT16_MAX;

	t51 = ((x205<x206)*(x207&x208));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	uint32_t x211 = UINT32_MAX;
	static uint16_t x212 = 26U;
	volatile uint32_t t52 = 2U;

	t52 = ((x209<x210)*(x211&x212));

	if (t52 != 26U) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x214 = UINT8_MAX;
	static int32_t x215 = 359;
	int32_t x216 = INT32_MIN;

	t53 = ((x213<x214)*(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = 6;
	uint32_t x218 = 6U;
	int16_t x219 = -1;

	t54 = ((x217<x218)*(x219&x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = INT16_MAX;
	int32_t x223 = INT32_MIN;
	static int32_t t55 = 1;

	t55 = ((x221<x222)*(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	uint64_t x227 = 45LLU;
	uint64_t t56 = 43906061402339LLU;

	t56 = ((x225<x226)*(x227&x228));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	static int8_t x229 = -5;
	uint64_t x230 = 76201775996128LLU;
	int64_t x232 = -193LL;

	t57 = ((x229<x230)*(x231&x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x233 = UINT16_MAX;
	static int32_t x234 = -1;
	uint64_t x235 = UINT64_MAX;
	int64_t x236 = -1LL;
	uint64_t t58 = 1609303845781277508LLU;

	t58 = ((x233<x234)*(x235&x236));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	int32_t x238 = -29352;
	static int8_t x239 = INT8_MAX;
	int8_t x240 = -1;
	volatile int32_t t59 = 80;

	t59 = ((x237<x238)*(x239&x240));

	if (t59 != 127) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	volatile uint32_t x243 = 2026U;

	t60 = ((x241<x242)*(x243&x244));

	if (t60 != 2026LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = 18U;
	uint8_t x246 = 13U;
	static uint64_t x247 = 79809641450LLU;
	static int8_t x248 = -1;
	volatile uint64_t t61 = 1LLU;

	t61 = ((x245<x246)*(x247&x248));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x251 = INT32_MIN;
	uint8_t x252 = 1U;
	volatile int32_t t62 = -63;

	t62 = ((x249<x250)*(x251&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MAX;
	int64_t x254 = -1LL;
	int64_t x256 = INT64_MIN;
	int64_t t63 = 2022654079526654271LL;

	t63 = ((x253<x254)*(x255&x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int32_t x257 = INT32_MAX;
	int16_t x259 = -1;
	uint32_t x260 = 435148U;
	uint32_t t64 = 490838U;

	t64 = ((x257<x258)*(x259&x260));

	if (t64 != 0U) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -4903;
	uint8_t x263 = 14U;
	int8_t x264 = INT8_MIN;
	static int32_t t65 = 309609;

	t65 = ((x261<x262)*(x263&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = -578;
	volatile int8_t x266 = 1;
	volatile uint16_t x268 = 45U;
	static int32_t t66 = 31171944;

	t66 = ((x265<x266)*(x267&x268));

	if (t66 != 4) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int32_t x271 = -1;
	volatile int32_t t67 = 197651953;

	t67 = ((x269<x270)*(x271&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int8_t x274 = -7;
	uint32_t x275 = UINT32_MAX;
	int32_t x276 = INT32_MAX;
	volatile uint32_t t68 = 101504142U;

	t68 = ((x273<x274)*(x275&x276));

	if (t68 != 2147483647U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x277 = INT16_MIN;
	static volatile uint8_t x278 = UINT8_MAX;
	volatile int64_t x279 = INT64_MIN;
	uint8_t x280 = 6U;

	t69 = ((x277<x278)*(x279&x280));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x282 = UINT32_MAX;
	int64_t x283 = INT64_MAX;
	uint64_t x284 = 201266872LLU;
	volatile uint64_t t70 = 982146146LLU;

	t70 = ((x281<x282)*(x283&x284));

	if (t70 != 201266872LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x285 = INT8_MIN;
	int8_t x286 = -47;
	int8_t x288 = 14;
	int32_t t71 = 197;

	t71 = ((x285<x286)*(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x289 = INT8_MAX;
	uint32_t x290 = UINT32_MAX;
	int32_t x292 = -1;
	static int32_t t72 = -3;

	t72 = ((x289<x290)*(x291&x292));

	if (t72 != 32767) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x293 = 2235U;
	static volatile int32_t x295 = INT32_MIN;
	int16_t x296 = 0;
	int32_t t73 = -5167;

	t73 = ((x293<x294)*(x295&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x298 = INT64_MAX;
	uint8_t x299 = UINT8_MAX;
	int64_t x300 = -1LL;
	static volatile int64_t t74 = 6265168683675LL;

	t74 = ((x297<x298)*(x299&x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x301 = INT8_MIN;
	int64_t x303 = INT64_MAX;
	volatile int64_t x304 = -4088901LL;
	int64_t t75 = -2441756LL;

	t75 = ((x301<x302)*(x303&x304));

	if (t75 != 9223372036850686907LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x305 = -1;
	int16_t x306 = 6;
	static int8_t x307 = INT8_MIN;
	int32_t x308 = INT32_MIN;
	int32_t t76 = INT32_MIN;

	t76 = ((x305<x306)*(x307&x308));

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x309 = UINT64_MAX;
	int8_t x310 = 4;
	uint16_t x311 = UINT16_MAX;
	uint32_t x312 = 199U;

	t77 = ((x309<x310)*(x311&x312));

	if (t77 != 0U) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MAX;
	volatile int32_t x314 = INT32_MAX;
	uint32_t x315 = 9U;
	uint16_t x316 = 216U;
	volatile uint32_t t78 = 15U;

	t78 = ((x313<x314)*(x315&x316));

	if (t78 != 8U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = INT8_MIN;
	uint8_t x319 = UINT8_MAX;
	uint16_t x320 = 7374U;
	int32_t t79 = 1;

	t79 = ((x317<x318)*(x319&x320));

	if (t79 != 206) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = 47U;
	volatile uint8_t x322 = 1U;
	volatile uint32_t x323 = 1U;
	int8_t x324 = -1;
	uint32_t t80 = 881116361U;

	t80 = ((x321<x322)*(x323&x324));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x325 = UINT8_MAX;
	int16_t x326 = INT16_MIN;
	uint32_t x327 = 6496114U;
	static uint32_t t81 = 62U;

	t81 = ((x325<x326)*(x327&x328));

	if (t81 != 0U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = 31;
	static int32_t x331 = 14351198;
	int32_t t82 = -2333;

	t82 = ((x329<x330)*(x331&x332));

	if (t82 != 20) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x333 = UINT32_MAX;
	int32_t x334 = INT32_MAX;
	uint8_t x335 = UINT8_MAX;
	uint32_t x336 = 237245523U;
	volatile uint32_t t83 = 106833U;

	t83 = ((x333<x334)*(x335&x336));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x337 = INT32_MAX;
	uint32_t x339 = UINT32_MAX;
	volatile uint64_t t84 = 32116293214710950LLU;

	t84 = ((x337<x338)*(x339&x340));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x341 = UINT32_MAX;
	volatile int32_t x342 = 3985;
	int64_t x344 = -375138140672006LL;
	volatile int64_t t85 = -220497048445623832LL;

	t85 = ((x341<x342)*(x343&x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = -31;
	volatile uint8_t x346 = UINT8_MAX;
	volatile int8_t x347 = INT8_MAX;
	uint32_t t86 = 359568063U;

	t86 = ((x345<x346)*(x347&x348));

	if (t86 != 99U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 6966U;
	static uint16_t x352 = 2816U;
	int64_t t87 = -36922953LL;

	t87 = ((x349<x350)*(x351&x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MAX;
	int8_t x354 = INT8_MAX;
	uint32_t x355 = 207587813U;
	volatile int64_t t88 = 44140398205LL;

	t88 = ((x353<x354)*(x355&x356));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	int16_t x358 = -1642;
	int8_t x359 = INT8_MIN;
	volatile int64_t t89 = -48024391498092LL;

	t89 = ((x357<x358)*(x359&x360));

	if (t89 != 0LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x362 = 9U;
	int32_t x363 = INT32_MIN;
	uint32_t x364 = 109U;

	t90 = ((x361<x362)*(x363&x364));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x366 = UINT32_MAX;
	int8_t x367 = INT8_MIN;
	volatile uint32_t t91 = 1093181U;

	t91 = ((x365<x366)*(x367&x368));

	if (t91 != 896U) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x370 = INT64_MIN;
	int8_t x371 = INT8_MIN;
	int16_t x372 = INT16_MAX;

	t92 = ((x369<x370)*(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MAX;
	int8_t x374 = INT8_MIN;
	int32_t x375 = INT32_MIN;
	uint32_t x376 = UINT32_MAX;
	volatile uint32_t t93 = 458224U;

	t93 = ((x373<x374)*(x375&x376));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x377 = -1LL;
	uint16_t x378 = 297U;
	static int64_t x380 = 125674993684298784LL;
	static int64_t t94 = -1547532428033517886LL;

	t94 = ((x377<x378)*(x379&x380));

	if (t94 != 125674993684298784LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x381 = 12U;
	int32_t x382 = INT32_MIN;
	int16_t x383 = -1;
	volatile uint32_t x384 = UINT32_MAX;
	uint32_t t95 = 1U;

	t95 = ((x381<x382)*(x383&x384));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = 1;
	int64_t x386 = 358994LL;
	static int64_t x387 = INT64_MIN;
	int8_t x388 = -2;
	int64_t t96 = INT64_MIN;

	t96 = ((x385<x386)*(x387&x388));

	if (t96 != INT64_MIN) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x389 = 0LL;
	int64_t x390 = INT64_MIN;
	volatile uint8_t x391 = 1U;
	uint16_t x392 = 126U;
	volatile int32_t t97 = 433491440;

	t97 = ((x389<x390)*(x391&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x393 = INT32_MIN;
	uint16_t x396 = 4U;
	volatile uint64_t t98 = 12LLU;

	t98 = ((x393<x394)*(x395&x396));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = -1687912866452LL;
	int32_t x398 = INT32_MAX;
	uint64_t x399 = UINT64_MAX;

	t99 = ((x397<x398)*(x399&x400));

	if (t99 != 18446744073709551488LLU) { NG(); } else { ; }
	
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

