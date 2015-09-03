#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -386349120;
volatile uint8_t x8 = 3U;
static int16_t x13 = -4;
uint32_t x16 = UINT32_MAX;
int32_t t4 = 45162;
int16_t x21 = INT16_MIN;
uint64_t x27 = 45LLU;
static int32_t x29 = INT32_MAX;
uint32_t x32 = 6U;
volatile int32_t x36 = -1;
volatile int16_t x37 = INT16_MAX;
int64_t x42 = INT64_MIN;
uint8_t x44 = 0U;
volatile int16_t x46 = INT16_MIN;
int32_t x47 = -24;
uint16_t x49 = 15U;
volatile int16_t x51 = -1;
volatile int32_t x54 = 44118;
uint32_t x56 = UINT32_MAX;
uint32_t x62 = UINT32_MAX;
uint8_t x64 = 32U;
uint32_t x76 = UINT32_MAX;
uint32_t t18 = UINT32_MAX;
volatile int32_t x96 = INT32_MIN;
int32_t x104 = -1;
volatile int32_t t25 = -3030;
static volatile int64_t x106 = -1LL;
int8_t x111 = INT8_MAX;
volatile uint64_t t27 = 6242029LLU;
uint8_t x113 = 44U;
int64_t x127 = -431094933181LL;
uint64_t x128 = 3717008303374266LLU;
volatile uint64_t t31 = 1074801212790972180LLU;
volatile int32_t t33 = 978412;
int8_t x138 = -12;
int8_t x140 = INT8_MAX;
static int16_t x146 = -1760;
static uint32_t x148 = UINT32_MAX;
int8_t x150 = INT8_MAX;
int8_t x151 = INT8_MIN;
int32_t x155 = INT32_MIN;
uint32_t t39 = UINT32_MAX;
volatile int32_t t42 = -344210958;
static uint16_t x173 = UINT16_MAX;
static volatile int32_t x175 = 991;
uint8_t x180 = 6U;
int32_t t44 = -14181;
volatile int64_t x184 = -1LL;
volatile int64_t t45 = 78LL;
int32_t t47 = 6579;
volatile int16_t x194 = 109;
static uint16_t x200 = 28U;
volatile int32_t t49 = -3441841;
int32_t x201 = INT32_MIN;
int16_t x202 = INT16_MIN;
static int8_t x207 = -1;
uint32_t x213 = UINT32_MAX;
uint8_t x215 = 47U;
uint64_t x224 = 0LLU;
int64_t x225 = -10LL;
int32_t x227 = INT32_MIN;
volatile uint16_t x229 = UINT16_MAX;
uint32_t t57 = 3U;
uint64_t x242 = 3261448LLU;
volatile int64_t t60 = 2157166493746614LL;
int32_t x252 = INT32_MIN;
uint8_t x263 = UINT8_MAX;
static volatile int8_t x264 = INT8_MIN;
int16_t x272 = INT16_MAX;
static volatile int32_t x280 = 6407436;
static volatile int32_t x282 = 53903074;
volatile uint64_t t70 = UINT64_MAX;
uint32_t x290 = 139U;
int64_t x300 = INT64_MAX;
int16_t x301 = INT16_MIN;
int64_t x303 = -1LL;
uint32_t x308 = UINT32_MAX;
static uint8_t x311 = 0U;
int8_t x321 = INT8_MIN;
uint8_t x325 = 1U;
volatile uint64_t x326 = 425708527LLU;
static uint16_t x329 = UINT16_MAX;
static int8_t x337 = -33;
static int32_t x338 = INT32_MIN;
int8_t x339 = -1;
int16_t x342 = INT16_MAX;
static int8_t x348 = -1;
uint8_t x353 = UINT8_MAX;
static int16_t x365 = 26;
volatile int32_t x371 = 7982;
int16_t x390 = -24;
volatile uint64_t t96 = 78013045730602LLU;
int32_t t97 = -71105247;
volatile int16_t x402 = INT16_MAX;
int64_t x403 = -8922LL;
volatile int64_t x405 = INT64_MIN;
volatile int32_t t99 = -2603;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint32_t x2 = UINT32_MAX;
	uint16_t x3 = UINT16_MAX;
	int8_t x4 = 0;

	t0 = (((x1<x2)<x3)+x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	volatile uint16_t x6 = 22110U;
	static volatile int8_t x7 = INT8_MAX;
	volatile int32_t t1 = 1292;

	t1 = (((x5<x6)<x7)+x8);

	if (t1 != 4) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -1;
	static uint64_t x10 = 15154LLU;
	volatile int64_t x11 = INT64_MIN;
	int16_t x12 = 616;
	int32_t t2 = -1286;

	t2 = (((x9<x10)<x11)+x12);

	if (t2 != 616) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x14 = -1;
	uint16_t x15 = 176U;
	volatile uint32_t t3 = 1U;

	t3 = (((x13<x14)<x15)+x16);

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 2311U;
	int64_t x18 = INT64_MIN;
	int16_t x19 = INT16_MIN;
	int8_t x20 = INT8_MIN;

	t4 = (((x17<x18)<x19)+x20);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x22 = -1;
	static uint32_t x23 = 519289U;
	int16_t x24 = -1;
	volatile int32_t t5 = 2030;

	t5 = (((x21<x22)<x23)+x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 40LLU;
	static int64_t x26 = -1LL;
	volatile uint32_t x28 = 55326858U;
	uint32_t t6 = 1341515U;

	t6 = (((x25<x26)<x27)+x28);

	if (t6 != 55326859U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x30 = INT64_MIN;
	int16_t x31 = -1;
	uint32_t t7 = 391U;

	t7 = (((x29<x30)<x31)+x32);

	if (t7 != 6U) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = 51U;
	volatile uint32_t x34 = 131496U;
	static uint64_t x35 = 16750959LLU;
	int32_t t8 = 408990782;

	t8 = (((x33<x34)<x35)+x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = 0U;
	int8_t x39 = -1;
	int8_t x40 = INT8_MIN;
	int32_t t9 = 896;

	t9 = (((x37<x38)<x39)+x40);

	if (t9 != -128) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	int8_t x43 = -1;
	int32_t t10 = 12077;

	t10 = (((x41<x42)<x43)+x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 1678829078U;
	int8_t x48 = INT8_MAX;
	volatile int32_t t11 = -2;

	t11 = (((x45<x46)<x47)+x48);

	if (t11 != 127) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = UINT32_MAX;
	uint8_t x52 = UINT8_MAX;
	volatile int32_t t12 = -64362;

	t12 = (((x49<x50)<x51)+x52);

	if (t12 != 255) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = 543942888159LL;
	uint16_t x55 = 9290U;
	static uint32_t t13 = 24U;

	t13 = (((x53<x54)<x55)+x56);

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 459471LL;
	volatile uint8_t x58 = UINT8_MAX;
	int16_t x59 = 0;
	int8_t x60 = -1;
	int32_t t14 = 3;

	t14 = (((x57<x58)<x59)+x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	int16_t x63 = INT16_MIN;
	volatile int32_t t15 = -187392889;

	t15 = (((x61<x62)<x63)+x64);

	if (t15 != 32) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 8U;
	int8_t x66 = INT8_MIN;
	uint64_t x67 = 17610742LLU;
	int64_t x68 = INT64_MIN;
	int64_t t16 = -133668791094993383LL;

	t16 = (((x65<x66)<x67)+x68);

	if (t16 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	int16_t x70 = -5301;
	volatile uint16_t x71 = UINT16_MAX;
	int16_t x72 = 5661;
	int32_t t17 = -60;

	t17 = (((x69<x70)<x71)+x72);

	if (t17 != 5662) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int64_t x73 = 15668791156LL;
	static int32_t x74 = 123;
	int16_t x75 = -1;

	t18 = (((x73<x74)<x75)+x76);

	if (t18 != UINT32_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 786494970014155LLU;
	volatile int16_t x78 = -1;
	uint16_t x79 = 25464U;
	static int8_t x80 = -3;
	int32_t t19 = 546007535;

	t19 = (((x77<x78)<x79)+x80);

	if (t19 != -2) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = INT16_MAX;
	int16_t x82 = INT16_MAX;
	uint32_t x83 = UINT32_MAX;
	uint64_t x84 = 67892096267560LLU;
	uint64_t t20 = 57746LLU;

	t20 = (((x81<x82)<x83)+x84);

	if (t20 != 67892096267561LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	uint16_t x86 = 8357U;
	uint8_t x87 = UINT8_MAX;
	int16_t x88 = INT16_MAX;
	volatile int32_t t21 = 1;

	t21 = (((x85<x86)<x87)+x88);

	if (t21 != 32768) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -1LL;
	uint16_t x90 = 942U;
	volatile uint8_t x91 = UINT8_MAX;
	volatile uint32_t x92 = 36181U;
	volatile uint32_t t22 = 720U;

	t22 = (((x89<x90)<x91)+x92);

	if (t22 != 36182U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	static int8_t x94 = INT8_MIN;
	int8_t x95 = INT8_MIN;
	static volatile int32_t t23 = INT32_MIN;

	t23 = (((x93<x94)<x95)+x96);

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x97 = 448038907LL;
	uint64_t x98 = UINT64_MAX;
	int16_t x99 = INT16_MAX;
	int8_t x100 = -3;
	int32_t t24 = 3962;

	t24 = (((x97<x98)<x99)+x100);

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x101 = 492845LLU;
	int32_t x102 = INT32_MIN;
	uint8_t x103 = 31U;

	t25 = (((x101<x102)<x103)+x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x105 = UINT8_MAX;
	uint64_t x107 = UINT64_MAX;
	int32_t x108 = -3;
	int32_t t26 = -95;

	t26 = (((x105<x106)<x107)+x108);

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = 444U;
	uint16_t x110 = UINT16_MAX;
	uint64_t x112 = 27214193237LLU;

	t27 = (((x109<x110)<x111)+x112);

	if (t27 != 27214193238LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x114 = -1;
	static uint64_t x115 = UINT64_MAX;
	volatile uint8_t x116 = 4U;
	volatile int32_t t28 = -49;

	t28 = (((x113<x114)<x115)+x116);

	if (t28 != 5) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = 846501271008LLU;
	uint32_t x118 = 757413225U;
	uint16_t x119 = 1199U;
	int64_t x120 = -1LL;
	static int64_t t29 = -104928060615248LL;

	t29 = (((x117<x118)<x119)+x120);

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	volatile uint32_t x122 = UINT32_MAX;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = -3924;
	volatile int32_t t30 = 27013;

	t30 = (((x121<x122)<x123)+x124);

	if (t30 != -3923) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	volatile int64_t x126 = 3LL;

	t31 = (((x125<x126)<x127)+x128);

	if (t31 != 3717008303374266LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 8115U;
	int16_t x130 = -411;
	int8_t x131 = INT8_MAX;
	int8_t x132 = -1;
	int32_t t32 = 55021;

	t32 = (((x129<x130)<x131)+x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -49394;
	int16_t x134 = INT16_MAX;
	int16_t x135 = INT16_MAX;
	static int32_t x136 = 550;

	t33 = (((x133<x134)<x135)+x136);

	if (t33 != 551) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = 14;
	int64_t x139 = INT64_MIN;
	volatile int32_t t34 = 4673;

	t34 = (((x137<x138)<x139)+x140);

	if (t34 != 127) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint32_t x141 = UINT32_MAX;
	uint16_t x142 = 3423U;
	uint8_t x143 = 0U;
	int32_t x144 = 1;
	volatile int32_t t35 = -22;

	t35 = (((x141<x142)<x143)+x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 617U;
	int16_t x147 = INT16_MIN;
	volatile uint32_t t36 = UINT32_MAX;

	t36 = (((x145<x146)<x147)+x148);

	if (t36 != UINT32_MAX) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	int8_t x152 = INT8_MIN;
	static volatile int32_t t37 = 5967;

	t37 = (((x149<x150)<x151)+x152);

	if (t37 != -128) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int32_t x153 = INT32_MAX;
	int8_t x154 = INT8_MIN;
	int8_t x156 = INT8_MIN;
	static int32_t t38 = 17826114;

	t38 = (((x153<x154)<x155)+x156);

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	uint16_t x158 = 1U;
	int8_t x159 = INT8_MIN;
	static uint32_t x160 = UINT32_MAX;

	t39 = (((x157<x158)<x159)+x160);

	if (t39 != UINT32_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = INT16_MAX;
	static int64_t x162 = -1970341992802586120LL;
	int16_t x163 = INT16_MIN;
	int16_t x164 = -1;
	int32_t t40 = -657166877;

	t40 = (((x161<x162)<x163)+x164);

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 159071;
	uint8_t x166 = UINT8_MAX;
	int32_t x167 = -1;
	int64_t x168 = 513292168612446LL;
	volatile int64_t t41 = -103807185451694LL;

	t41 = (((x165<x166)<x167)+x168);

	if (t41 != 513292168612446LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x169 = 0U;
	static uint64_t x170 = UINT64_MAX;
	volatile uint16_t x171 = 1U;
	int16_t x172 = INT16_MIN;

	t42 = (((x169<x170)<x171)+x172);

	if (t42 != -32768) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x174 = INT8_MIN;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t43 = 213235808822LLU;

	t43 = (((x173<x174)<x175)+x176);

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x177 = 14094650842LL;
	volatile int8_t x178 = -1;
	uint8_t x179 = 10U;

	t44 = (((x177<x178)<x179)+x180);

	if (t44 != 7) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = UINT16_MAX;
	uint64_t x182 = UINT64_MAX;
	int8_t x183 = INT8_MAX;

	t45 = (((x181<x182)<x183)+x184);

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 140U;
	volatile uint64_t x186 = 2041134771488054885LLU;
	int16_t x187 = INT16_MIN;
	static int64_t x188 = INT64_MIN;
	static volatile int64_t t46 = INT64_MIN;

	t46 = (((x185<x186)<x187)+x188);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x189 = INT32_MIN;
	static uint8_t x190 = 0U;
	int16_t x191 = INT16_MAX;
	int8_t x192 = INT8_MIN;

	t47 = (((x189<x190)<x191)+x192);

	if (t47 != -127) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 1U;
	uint64_t x195 = 1LLU;
	volatile int16_t x196 = INT16_MIN;
	static int32_t t48 = 24;

	t48 = (((x193<x194)<x195)+x196);

	if (t48 != -32768) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int16_t x197 = INT16_MIN;
	int64_t x198 = -1LL;
	int32_t x199 = -1;

	t49 = (((x197<x198)<x199)+x200);

	if (t49 != 28) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x203 = 6617LLU;
	static volatile uint16_t x204 = 6428U;
	static int32_t t50 = -74316;

	t50 = (((x201<x202)<x203)+x204);

	if (t50 != 6429) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = UINT32_MAX;
	volatile int64_t x206 = -1LL;
	int8_t x208 = -19;
	int32_t t51 = 149419;

	t51 = (((x205<x206)<x207)+x208);

	if (t51 != -19) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 0U;
	int16_t x210 = 71;
	int32_t x211 = 36801;
	static int32_t x212 = 0;
	volatile int32_t t52 = 57272;

	t52 = (((x209<x210)<x211)+x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x214 = 1U;
	int32_t x216 = -15134;
	static volatile int32_t t53 = -1;

	t53 = (((x213<x214)<x215)+x216);

	if (t53 != -15133) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int16_t x217 = INT16_MIN;
	int64_t x218 = INT64_MIN;
	uint8_t x219 = UINT8_MAX;
	int64_t x220 = -2882568LL;
	int64_t t54 = 71LL;

	t54 = (((x217<x218)<x219)+x220);

	if (t54 != -2882567LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint64_t x221 = 103281567195505856LLU;
	static volatile int32_t x222 = -1;
	int16_t x223 = INT16_MIN;
	volatile uint64_t t55 = 152982LLU;

	t55 = (((x221<x222)<x223)+x224);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x226 = UINT16_MAX;
	uint8_t x228 = 7U;
	volatile int32_t t56 = -809;

	t56 = (((x225<x226)<x227)+x228);

	if (t56 != 7) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x230 = -1LL;
	int64_t x231 = INT64_MAX;
	volatile uint32_t x232 = 9944U;

	t57 = (((x229<x230)<x231)+x232);

	if (t57 != 9945U) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = 1;
	int64_t x234 = INT64_MIN;
	int16_t x235 = -1;
	uint16_t x236 = UINT16_MAX;
	volatile int32_t t58 = 9043563;

	t58 = (((x233<x234)<x235)+x236);

	if (t58 != 65535) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x237 = 441744519U;
	volatile int16_t x238 = INT16_MIN;
	int32_t x239 = INT32_MIN;
	static volatile uint64_t x240 = UINT64_MAX;
	uint64_t t59 = UINT64_MAX;

	t59 = (((x237<x238)<x239)+x240);

	if (t59 != UINT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int16_t x243 = 144;
	static int64_t x244 = -601833LL;

	t60 = (((x241<x242)<x243)+x244);

	if (t60 != -601832LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	int32_t x246 = -14;
	volatile int16_t x247 = -1;
	uint64_t x248 = UINT64_MAX;
	volatile uint64_t t61 = UINT64_MAX;

	t61 = (((x245<x246)<x247)+x248);

	if (t61 != UINT64_MAX) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -1;
	static int8_t x250 = INT8_MIN;
	int8_t x251 = INT8_MIN;
	int32_t t62 = INT32_MIN;

	t62 = (((x249<x250)<x251)+x252);

	if (t62 != INT32_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = UINT16_MAX;
	volatile uint8_t x254 = 58U;
	volatile int16_t x255 = INT16_MAX;
	static uint8_t x256 = UINT8_MAX;
	volatile int32_t t63 = -177884983;

	t63 = (((x253<x254)<x255)+x256);

	if (t63 != 256) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = UINT16_MAX;
	volatile int64_t x258 = INT64_MAX;
	int32_t x259 = -401;
	int8_t x260 = -1;
	volatile int32_t t64 = 2208945;

	t64 = (((x257<x258)<x259)+x260);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x261 = UINT16_MAX;
	static int64_t x262 = 0LL;
	static volatile int32_t t65 = 370;

	t65 = (((x261<x262)<x263)+x264);

	if (t65 != -127) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x265 = INT16_MIN;
	uint64_t x266 = 0LLU;
	static uint32_t x267 = 669229U;
	volatile uint8_t x268 = 1U;
	int32_t t66 = 647;

	t66 = (((x265<x266)<x267)+x268);

	if (t66 != 2) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x269 = INT32_MIN;
	int8_t x270 = -4;
	uint16_t x271 = UINT16_MAX;
	int32_t t67 = -5865;

	t67 = (((x269<x270)<x271)+x272);

	if (t67 != 32768) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x273 = INT64_MIN;
	int16_t x274 = INT16_MIN;
	static uint8_t x275 = UINT8_MAX;
	uint64_t x276 = UINT64_MAX;
	volatile uint64_t t68 = 7685766LLU;

	t68 = (((x273<x274)<x275)+x276);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x277 = INT32_MIN;
	volatile int64_t x278 = INT64_MIN;
	int8_t x279 = INT8_MAX;
	volatile int32_t t69 = -107;

	t69 = (((x277<x278)<x279)+x280);

	if (t69 != 6407437) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x281 = UINT64_MAX;
	volatile int16_t x283 = -361;
	uint64_t x284 = UINT64_MAX;

	t70 = (((x281<x282)<x283)+x284);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = INT16_MIN;
	int16_t x286 = -13;
	int32_t x287 = -1;
	int64_t x288 = INT64_MAX;
	int64_t t71 = INT64_MAX;

	t71 = (((x285<x286)<x287)+x288);

	if (t71 != INT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x289 = UINT32_MAX;
	int32_t x291 = -1;
	volatile int32_t x292 = 6356061;
	volatile int32_t t72 = 8051128;

	t72 = (((x289<x290)<x291)+x292);

	if (t72 != 6356061) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	int16_t x294 = INT16_MAX;
	uint64_t x295 = 176LLU;
	int64_t x296 = INT64_MIN;
	int64_t t73 = 2077185570934LL;

	t73 = (((x293<x294)<x295)+x296);

	if (t73 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = 18354LL;
	int16_t x298 = -1;
	int8_t x299 = 0;
	int64_t t74 = INT64_MAX;

	t74 = (((x297<x298)<x299)+x300);

	if (t74 != INT64_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x302 = INT32_MAX;
	uint64_t x304 = 17LLU;
	volatile uint64_t t75 = 8LLU;

	t75 = (((x301<x302)<x303)+x304);

	if (t75 != 17LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = INT16_MAX;
	int64_t x306 = INT64_MIN;
	int32_t x307 = INT32_MIN;
	volatile uint32_t t76 = UINT32_MAX;

	t76 = (((x305<x306)<x307)+x308);

	if (t76 != UINT32_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x309 = INT8_MAX;
	uint64_t x310 = 1303931812416077LLU;
	volatile int32_t x312 = INT32_MIN;
	int32_t t77 = INT32_MIN;

	t77 = (((x309<x310)<x311)+x312);

	if (t77 != INT32_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = INT16_MIN;
	uint64_t x314 = 1607LLU;
	static int16_t x315 = 0;
	int64_t x316 = -8467746107147LL;
	int64_t t78 = 3871152334410LL;

	t78 = (((x313<x314)<x315)+x316);

	if (t78 != -8467746107147LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x317 = -1;
	static int64_t x318 = INT64_MIN;
	static volatile int16_t x319 = INT16_MAX;
	static int16_t x320 = INT16_MAX;
	volatile int32_t t79 = -58528;

	t79 = (((x317<x318)<x319)+x320);

	if (t79 != 32768) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int32_t x322 = INT32_MIN;
	int16_t x323 = -26;
	int8_t x324 = 1;
	volatile int32_t t80 = -655586395;

	t80 = (((x321<x322)<x323)+x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x327 = -1;
	uint64_t x328 = 1487168LLU;
	volatile uint64_t t81 = 166897414038477LLU;

	t81 = (((x325<x326)<x327)+x328);

	if (t81 != 1487168LLU) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x330 = 20U;
	volatile int16_t x331 = INT16_MIN;
	static uint8_t x332 = UINT8_MAX;
	volatile int32_t t82 = -36;

	t82 = (((x329<x330)<x331)+x332);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x340 = INT64_MIN;
	int64_t t83 = INT64_MIN;

	t83 = (((x337<x338)<x339)+x340);

	if (t83 != INT64_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x341 = 1;
	static uint8_t x343 = 1U;
	uint8_t x344 = 7U;
	volatile int32_t t84 = 1707755;

	t84 = (((x341<x342)<x343)+x344);

	if (t84 != 7) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x345 = UINT8_MAX;
	int32_t x346 = INT32_MIN;
	int32_t x347 = -28896;
	int32_t t85 = 62593;

	t85 = (((x345<x346)<x347)+x348);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x349 = INT64_MIN;
	int64_t x350 = -1LL;
	int16_t x351 = -230;
	volatile int64_t x352 = INT64_MAX;
	int64_t t86 = INT64_MAX;

	t86 = (((x349<x350)<x351)+x352);

	if (t86 != INT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x354 = INT32_MIN;
	int64_t x355 = -1LL;
	int8_t x356 = INT8_MAX;
	static int32_t t87 = -98261955;

	t87 = (((x353<x354)<x355)+x356);

	if (t87 != 127) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x361 = INT16_MIN;
	static uint8_t x362 = 14U;
	int8_t x363 = -3;
	int16_t x364 = -50;
	volatile int32_t t88 = -316125791;

	t88 = (((x361<x362)<x363)+x364);

	if (t88 != -50) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x366 = 0U;
	int32_t x367 = -252;
	int32_t x368 = 2924;
	int32_t t89 = 7;

	t89 = (((x365<x366)<x367)+x368);

	if (t89 != 2924) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x369 = 13U;
	uint32_t x370 = 625853546U;
	uint64_t x372 = UINT64_MAX;
	uint64_t t90 = 10272399LLU;

	t90 = (((x369<x370)<x371)+x372);

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x373 = UINT8_MAX;
	uint32_t x374 = 364U;
	volatile int64_t x375 = -465LL;
	uint64_t x376 = 1922959LLU;
	uint64_t t91 = 210LLU;

	t91 = (((x373<x374)<x375)+x376);

	if (t91 != 1922959LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x377 = INT64_MIN;
	uint16_t x378 = 2543U;
	volatile int64_t x379 = INT64_MIN;
	volatile int16_t x380 = INT16_MAX;
	volatile int32_t t92 = 10;

	t92 = (((x377<x378)<x379)+x380);

	if (t92 != 32767) { NG(); } else { ; }
	
}

void f93(void) {
	static uint32_t x381 = UINT32_MAX;
	volatile int16_t x382 = INT16_MIN;
	uint32_t x383 = 321U;
	int8_t x384 = INT8_MIN;
	volatile int32_t t93 = 1;

	t93 = (((x381<x382)<x383)+x384);

	if (t93 != -127) { NG(); } else { ; }
	
}

void f94(void) {
	static uint16_t x385 = 4U;
	volatile int64_t x386 = -1LL;
	uint8_t x387 = UINT8_MAX;
	static volatile int64_t x388 = INT64_MIN;
	int64_t t94 = -5540445999812161LL;

	t94 = (((x385<x386)<x387)+x388);

	if (t94 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int32_t x389 = -1;
	int16_t x391 = 4;
	int64_t x392 = -1LL;
	volatile int64_t t95 = -15981297710630LL;

	t95 = (((x389<x390)<x391)+x392);

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x393 = UINT64_MAX;
	static int16_t x394 = INT16_MIN;
	static int64_t x395 = INT64_MAX;
	volatile uint64_t x396 = UINT64_MAX;

	t96 = (((x393<x394)<x395)+x396);

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x397 = 180155;
	static uint16_t x398 = UINT16_MAX;
	int8_t x399 = INT8_MIN;
	int32_t x400 = -1;

	t97 = (((x397<x398)<x399)+x400);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x401 = -84425390898419541LL;
	int32_t x404 = -5845663;
	volatile int32_t t98 = -139;

	t98 = (((x401<x402)<x403)+x404);

	if (t98 != -5845663) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x406 = INT64_MIN;
	int16_t x407 = -8;
	int8_t x408 = -1;

	t99 = (((x405<x406)<x407)+x408);

	if (t99 != -1) { NG(); } else { ; }
	
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

