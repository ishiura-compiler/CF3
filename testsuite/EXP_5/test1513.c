#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = INT8_MIN;
int64_t x7 = INT64_MAX;
static int32_t x13 = 22;
int32_t x17 = INT32_MIN;
static uint64_t x18 = UINT64_MAX;
static int64_t x20 = INT64_MIN;
uint8_t x21 = 25U;
volatile int32_t x24 = INT32_MAX;
static int32_t t5 = 0;
volatile int16_t x26 = -1;
int8_t x29 = INT8_MIN;
int16_t x32 = -339;
int8_t x35 = 1;
uint32_t x40 = 40580032U;
uint64_t t9 = 3298854439546LLU;
int64_t x48 = -1LL;
int64_t x50 = 4122730044217101921LL;
int8_t x52 = -1;
uint8_t x57 = 0U;
static int16_t x58 = -1;
static uint64_t t15 = 478145711LLU;
static volatile int32_t x66 = INT32_MIN;
static int32_t x74 = -93634;
int64_t x76 = -500711356136LL;
int64_t x83 = 9194440LL;
volatile int64_t t20 = 835202509151364139LL;
uint64_t x86 = 94975313804LLU;
int16_t x94 = -1;
uint64_t x95 = 19034354537LLU;
static uint8_t x96 = UINT8_MAX;
int32_t x104 = 63947;
int32_t t25 = -214514;
static int16_t x106 = INT16_MIN;
int32_t x108 = INT32_MIN;
int64_t x109 = -1LL;
static uint64_t x112 = 3577016806831LLU;
uint16_t x117 = UINT16_MAX;
uint8_t x118 = 97U;
static int32_t x119 = INT32_MAX;
int64_t x121 = INT64_MAX;
int16_t x129 = -1;
int8_t x136 = INT8_MIN;
int32_t x140 = -11173356;
volatile int16_t x142 = -1;
volatile uint64_t t35 = 36803555647LLU;
int32_t t36 = 267038;
int64_t t37 = 2LL;
volatile int16_t x159 = INT16_MIN;
int8_t x162 = INT8_MIN;
static int32_t t40 = 933;
uint64_t t41 = 88599LLU;
uint64_t x170 = 4058172770647688LLU;
static volatile int16_t x172 = INT16_MAX;
int16_t x175 = INT16_MIN;
int8_t x176 = INT8_MAX;
volatile uint16_t x177 = 0U;
volatile int8_t x179 = INT8_MIN;
int8_t x182 = -11;
int16_t x185 = -863;
int32_t x198 = -2762;
int16_t x204 = INT16_MAX;
uint64_t x214 = 13446643862961LLU;
int32_t x218 = 214;
volatile uint16_t x221 = UINT16_MAX;
static volatile uint8_t x223 = UINT8_MAX;
volatile int32_t t55 = 29659;
int32_t x225 = INT32_MIN;
int32_t t56 = 40550;
static int8_t x232 = INT8_MAX;
volatile int32_t t58 = -1840;
uint8_t x237 = 40U;
int8_t x239 = 16;
int32_t t59 = -2979459;
uint16_t x245 = 363U;
int64_t x250 = INT64_MIN;
static uint8_t x256 = 4U;
int32_t x258 = INT32_MIN;
volatile int32_t x259 = 0;
volatile int16_t x260 = 393;
int64_t x266 = INT64_MIN;
uint32_t x279 = 17841658U;
static uint16_t x281 = UINT16_MAX;
int64_t x282 = INT64_MAX;
int16_t x284 = INT16_MIN;
int8_t x286 = INT8_MAX;
static int8_t x287 = INT8_MAX;
int64_t x289 = -434782965391LL;
volatile int64_t x290 = INT64_MIN;
volatile int8_t x295 = -1;
int16_t x300 = INT16_MIN;
int64_t x302 = INT64_MAX;
static int8_t x303 = 3;
int32_t x304 = -36678471;
static uint32_t x307 = 310787872U;
int8_t x313 = -3;
uint64_t x322 = 755958993599LLU;
int16_t x326 = -4;
uint64_t t80 = 1736018382LLU;
int16_t x335 = -1;
int64_t x345 = 0LL;
volatile int64_t t85 = 3086877432996553LL;
volatile uint64_t x349 = UINT64_MAX;
int32_t x350 = INT32_MAX;
volatile uint8_t x353 = UINT8_MAX;
int64_t x355 = -25516721165LL;
int32_t t88 = -686037141;
int32_t t89 = 11356;
int32_t x365 = INT32_MAX;
static int32_t x366 = INT32_MIN;
static int8_t x370 = INT8_MAX;
volatile uint8_t x379 = 0U;
int32_t x384 = 600360;
int16_t x388 = INT16_MAX;
int64_t x389 = INT64_MIN;
static volatile int64_t x391 = INT64_MAX;
static int32_t x395 = INT32_MIN;


void f0(void) {
	volatile int32_t x1 = 1;
	int16_t x2 = INT16_MIN;
	static uint16_t x3 = 1U;
	static int32_t x4 = -52;
	volatile int32_t t0 = -680732;

	t0 = (x1%((x2<x3)^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x6 = INT8_MAX;
	uint8_t x8 = 0U;
	int32_t t1 = 422;

	t1 = (x5%((x6<x7)^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int16_t x10 = INT16_MAX;
	int16_t x11 = -1;
	static volatile uint64_t x12 = UINT64_MAX;
	uint64_t t2 = 23307LLU;

	t2 = (x9%((x10<x11)^x12));

	if (t2 != 4294967295LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x14 = UINT16_MAX;
	volatile int8_t x15 = 16;
	static int8_t x16 = INT8_MIN;
	int32_t t3 = 6766504;

	t3 = (x13%((x14<x15)^x16));

	if (t3 != 22) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x19 = 48352;
	int64_t t4 = 1LL;

	t4 = (x17%((x18<x19)^x20));

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = INT8_MIN;
	uint64_t x23 = UINT64_MAX;

	t5 = (x21%((x22<x23)^x24));

	if (t5 != 25) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = UINT64_MAX;
	int64_t x27 = INT64_MAX;
	volatile int64_t x28 = INT64_MIN;
	volatile uint64_t t6 = 5099LLU;

	t6 = (x25%((x26<x27)^x28));

	if (t6 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int8_t x30 = INT8_MAX;
	static int64_t x31 = -1LL;
	static volatile int32_t t7 = -973327540;

	t7 = (x29%((x30<x31)^x32));

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MAX;
	int32_t x34 = 233385;
	int32_t x36 = -3374425;
	int32_t t8 = -184950;

	t8 = (x33%((x34<x35)^x36));

	if (t8 != 32767) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 449847212035586078LLU;
	int16_t x38 = 41;
	int64_t x39 = -1LL;

	t9 = (x37%((x38<x39)^x40));

	if (t9 != 40101022LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MAX;
	uint16_t x42 = UINT16_MAX;
	volatile int64_t x43 = -1LL;
	uint32_t x44 = 12U;
	volatile uint32_t t10 = 62020178U;

	t10 = (x41%((x42<x43)^x44));

	if (t10 != 7U) { NG(); } else { ; }
	
}

void f11(void) {
	static uint32_t x45 = 10928U;
	static uint8_t x46 = 29U;
	int8_t x47 = INT8_MIN;
	int64_t t11 = 325970137383526250LL;

	t11 = (x45%((x46<x47)^x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint32_t x49 = 80632393U;
	static uint8_t x51 = 0U;
	volatile uint32_t t12 = 15945U;

	t12 = (x49%((x50<x51)^x52));

	if (t12 != 80632393U) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	volatile int64_t x54 = INT64_MIN;
	uint8_t x55 = 2U;
	volatile int64_t x56 = INT64_MIN;
	volatile int64_t t13 = -73778040LL;

	t13 = (x53%((x54<x55)^x56));

	if (t13 != -1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x59 = -347176193510835LL;
	int64_t x60 = -4LL;
	static int64_t t14 = -4631692208LL;

	t14 = (x57%((x58<x59)^x60));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 20LL;
	uint64_t x62 = UINT64_MAX;
	int32_t x63 = INT32_MAX;
	uint64_t x64 = 351985507LLU;

	t15 = (x61%((x62<x63)^x64));

	if (t15 != 20LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x65 = INT64_MIN;
	uint64_t x67 = UINT64_MAX;
	uint64_t x68 = 3098941144396381796LLU;
	volatile uint64_t t16 = 1185LLU;

	t16 = (x65%((x66<x67)^x68));

	if (t16 != 3025489748062012214LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = 8220;
	int32_t x70 = -1;
	static int64_t x71 = INT64_MAX;
	int64_t x72 = -1LL;
	int64_t t17 = 3145993852303566LL;

	t17 = (x69%((x70<x71)^x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = -10109553511494LL;
	volatile uint32_t x75 = UINT32_MAX;
	volatile int64_t t18 = -327611828305984LL;

	t18 = (x73%((x74<x75)^x76));

	if (t18 != -95326388794LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = UINT16_MAX;
	int16_t x78 = INT16_MIN;
	volatile int8_t x79 = -1;
	volatile int64_t x80 = INT64_MIN;
	volatile int64_t t19 = -607178825078LL;

	t19 = (x77%((x78<x79)^x80));

	if (t19 != 65535LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x81 = 0U;
	static uint32_t x82 = 1472006046U;
	static int64_t x84 = -223783071LL;

	t20 = (x81%((x82<x83)^x84));

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	static uint8_t x85 = UINT8_MAX;
	int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MAX;
	volatile int32_t t21 = 244;

	t21 = (x85%((x86<x87)^x88));

	if (t21 != 255) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = UINT8_MAX;
	int32_t x90 = INT32_MIN;
	static int8_t x91 = -1;
	uint8_t x92 = 63U;
	static int32_t t22 = 9599;

	t22 = (x89%((x90<x91)^x92));

	if (t22 != 7) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = UINT32_MAX;
	volatile uint32_t t23 = 1045991082U;

	t23 = (x93%((x94<x95)^x96));

	if (t23 != 0U) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = UINT32_MAX;
	static int64_t x98 = INT64_MIN;
	static uint16_t x99 = 14048U;
	uint32_t x100 = 3282U;
	static volatile uint32_t t24 = 268U;

	t24 = (x97%((x98<x99)^x100));

	if (t24 != 2243U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = -1;
	volatile uint64_t x102 = 14180LLU;
	volatile int16_t x103 = 13;

	t25 = (x101%((x102<x103)^x104));

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MAX;
	uint64_t x107 = 65440558722213LLU;
	int32_t t26 = -8275161;

	t26 = (x105%((x106<x107)^x108));

	if (t26 != 32767) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x110 = 16U;
	uint8_t x111 = UINT8_MAX;
	volatile uint64_t t27 = 2LLU;

	t27 = (x109%((x110<x111)^x112));

	if (t27 != 437567911845LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = 2382;
	int64_t x114 = INT64_MIN;
	uint32_t x115 = UINT32_MAX;
	int16_t x116 = INT16_MAX;
	int32_t t28 = 145;

	t28 = (x113%((x114<x115)^x116));

	if (t28 != 2382) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x120 = UINT16_MAX;
	int32_t t29 = -5427824;

	t29 = (x117%((x118<x119)^x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x122 = 23683U;
	volatile int64_t x123 = INT64_MIN;
	int32_t x124 = INT32_MIN;
	int64_t t30 = 0LL;

	t30 = (x121%((x122<x123)^x124));

	if (t30 != 2147483647LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = 2;
	static volatile uint64_t x126 = 220018356893767892LLU;
	int32_t x127 = INT32_MAX;
	int8_t x128 = -1;
	volatile int32_t t31 = 0;

	t31 = (x125%((x126<x127)^x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = INT32_MIN;
	static int32_t x131 = INT32_MIN;
	static int32_t x132 = -1;
	int32_t t32 = -32;

	t32 = (x129%((x130<x131)^x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = INT64_MAX;
	uint16_t x134 = 419U;
	volatile int8_t x135 = -1;
	static int64_t t33 = -9LL;

	t33 = (x133%((x134<x135)^x136));

	if (t33 != 127LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x137 = INT64_MIN;
	volatile int16_t x138 = INT16_MAX;
	int32_t x139 = 3002034;
	int64_t t34 = 1571114497LL;

	t34 = (x137%((x138<x139)^x140));

	if (t34 != -6375523LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x141 = INT64_MIN;
	uint32_t x143 = 13123U;
	volatile uint64_t x144 = UINT64_MAX;

	t35 = (x141%((x142<x143)^x144));

	if (t35 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = 2U;
	static int64_t x146 = 22923204LL;
	uint16_t x147 = 15470U;
	volatile int32_t x148 = INT32_MIN;

	t36 = (x145%((x146<x147)^x148));

	if (t36 != 2) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint32_t x149 = 16985U;
	int8_t x150 = 2;
	uint16_t x151 = 4331U;
	static volatile int64_t x152 = INT64_MAX;

	t37 = (x149%((x150<x151)^x152));

	if (t37 != 16985LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 251U;
	volatile int32_t x154 = 109;
	uint16_t x155 = 3740U;
	int32_t x156 = 0;
	volatile int32_t t38 = 6404813;

	t38 = (x153%((x154<x155)^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x157 = UINT32_MAX;
	int16_t x158 = 2155;
	static int32_t x160 = INT32_MAX;
	volatile uint32_t t39 = 705700U;

	t39 = (x157%((x158<x159)^x160));

	if (t39 != 1U) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = -1;
	static int8_t x163 = INT8_MIN;
	static int32_t x164 = INT32_MIN;

	t40 = (x161%((x162<x163)^x164));

	if (t40 != -1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = INT32_MIN;
	int64_t x166 = -1LL;
	static uint8_t x167 = UINT8_MAX;
	uint64_t x168 = UINT64_MAX;

	t41 = (x165%((x166<x167)^x168));

	if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x169 = 59U;
	int16_t x171 = INT16_MIN;
	static int32_t t42 = 217754742;

	t42 = (x169%((x170<x171)^x172));

	if (t42 != 59) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x173 = 6U;
	uint64_t x174 = 7686170309LLU;
	volatile int32_t t43 = -18626;

	t43 = (x173%((x174<x175)^x176));

	if (t43 != 6) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint8_t x178 = UINT8_MAX;
	uint16_t x180 = UINT16_MAX;
	static volatile int32_t t44 = -13;

	t44 = (x177%((x178<x179)^x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	int8_t x183 = INT8_MIN;
	volatile int8_t x184 = INT8_MIN;
	int32_t t45 = 6544431;

	t45 = (x181%((x182<x183)^x184));

	if (t45 != 127) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x186 = INT16_MIN;
	volatile int32_t x187 = -2021878;
	uint16_t x188 = UINT16_MAX;
	static int32_t t46 = 4;

	t46 = (x185%((x186<x187)^x188));

	if (t46 != -863) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x189 = UINT32_MAX;
	int16_t x190 = -1;
	int32_t x191 = INT32_MIN;
	uint8_t x192 = 10U;
	volatile uint32_t t47 = 13959101U;

	t47 = (x189%((x190<x191)^x192));

	if (t47 != 5U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	static int64_t x194 = 63881146039153060LL;
	static uint64_t x195 = UINT64_MAX;
	volatile uint64_t x196 = 4877379882LLU;
	static volatile uint64_t t48 = 1LLU;

	t48 = (x193%((x194<x195)^x196));

	if (t48 != 4351006282LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x197 = 3U;
	int64_t x199 = -3080561141442099707LL;
	uint64_t x200 = UINT64_MAX;
	uint64_t t49 = 1697936LLU;

	t49 = (x197%((x198<x199)^x200));

	if (t49 != 3LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = INT64_MIN;
	static volatile int32_t x202 = INT32_MAX;
	volatile uint64_t x203 = UINT64_MAX;
	volatile int64_t t50 = 2047146LL;

	t50 = (x201%((x202<x203)^x204));

	if (t50 != -128LL) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -120601102LL;
	int16_t x206 = INT16_MIN;
	int64_t x207 = INT64_MAX;
	int16_t x208 = 9395;
	int64_t t51 = 54LL;

	t51 = (x205%((x206<x207)^x208));

	if (t51 != -930LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x209 = UINT64_MAX;
	uint8_t x210 = UINT8_MAX;
	int8_t x211 = INT8_MAX;
	int16_t x212 = INT16_MAX;
	uint64_t t52 = 253674444757LLU;

	t52 = (x209%((x210<x211)^x212));

	if (t52 != 15LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 112;
	static uint16_t x215 = 78U;
	volatile int16_t x216 = INT16_MIN;
	int32_t t53 = 1226249;

	t53 = (x213%((x214<x215)^x216));

	if (t53 != 112) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x217 = 105LL;
	int32_t x219 = INT32_MIN;
	int16_t x220 = -2;
	int64_t t54 = -1130496038309LL;

	t54 = (x217%((x218<x219)^x220));

	if (t54 != 1LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x222 = -1;
	int8_t x224 = -15;

	t55 = (x221%((x222<x223)^x224));

	if (t55 != 15) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x226 = -21;
	int8_t x227 = INT8_MIN;
	volatile int16_t x228 = -1;

	t56 = (x225%((x226<x227)^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MAX;
	int64_t x230 = 11LL;
	uint16_t x231 = 1773U;
	int32_t t57 = 3991;

	t57 = (x229%((x230<x231)^x232));

	if (t57 != 7) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x233 = 114U;
	int8_t x234 = INT8_MIN;
	static int16_t x235 = -10055;
	int8_t x236 = 1;

	t58 = (x233%((x234<x235)^x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint8_t x238 = UINT8_MAX;
	int8_t x240 = INT8_MAX;

	t59 = (x237%((x238<x239)^x240));

	if (t59 != 40) { NG(); } else { ; }
	
}

void f60(void) {
	uint16_t x241 = 4895U;
	static int64_t x242 = INT64_MIN;
	static int8_t x243 = -11;
	int8_t x244 = -1;
	volatile int32_t t60 = -6;

	t60 = (x241%((x242<x243)^x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x246 = UINT16_MAX;
	static int16_t x247 = 14414;
	static volatile uint32_t x248 = UINT32_MAX;
	static volatile uint32_t t61 = 8360115U;

	t61 = (x245%((x246<x247)^x248));

	if (t61 != 363U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint32_t x249 = UINT32_MAX;
	int32_t x251 = 0;
	int8_t x252 = -15;
	static volatile uint32_t t62 = 611427874U;

	t62 = (x249%((x250<x251)^x252));

	if (t62 != 15U) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 0U;
	int16_t x254 = -1;
	uint8_t x255 = 6U;
	volatile int32_t t63 = 16118;

	t63 = (x253%((x254<x255)^x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = -57;
	static volatile int32_t t64 = 9068845;

	t64 = (x257%((x258<x259)^x260));

	if (t64 != -57) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 24783LLU;
	uint64_t x262 = UINT64_MAX;
	uint8_t x263 = UINT8_MAX;
	int32_t x264 = INT32_MAX;
	uint64_t t65 = 34000608LLU;

	t65 = (x261%((x262<x263)^x264));

	if (t65 != 24783LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	int64_t x267 = INT64_MIN;
	volatile int8_t x268 = INT8_MIN;
	volatile int64_t t66 = -49984446LL;

	t66 = (x265%((x266<x267)^x268));

	if (t66 != -1LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x273 = INT32_MIN;
	uint32_t x274 = 89U;
	int8_t x275 = INT8_MIN;
	int32_t x276 = 112446;
	static volatile int32_t t67 = 1509513;

	t67 = (x273%((x274<x275)^x276));

	if (t67 != -83289) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x277 = 2667617687LLU;
	volatile int64_t x278 = 121554LL;
	int64_t x280 = -21606414289613262LL;
	volatile uint64_t t68 = 11893620643LLU;

	t68 = (x277%((x278<x279)^x280));

	if (t68 != 2667617687LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static uint8_t x283 = 29U;
	volatile int32_t t69 = -243;

	t69 = (x281%((x282<x283)^x284));

	if (t69 != 32767) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x285 = 1;
	static uint64_t x288 = 789594883610203LLU;
	uint64_t t70 = 63LLU;

	t70 = (x285%((x286<x287)^x288));

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x291 = INT64_MAX;
	uint32_t x292 = UINT32_MAX;
	volatile int64_t t71 = -570111279481900670LL;

	t71 = (x289%((x290<x291)^x292));

	if (t71 != -991268697LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x293 = -11148159;
	static uint8_t x294 = 44U;
	int64_t x296 = -1LL;
	volatile int64_t t72 = 109945LL;

	t72 = (x293%((x294<x295)^x296));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int64_t x297 = INT64_MIN;
	uint64_t x298 = 399380754947LLU;
	uint8_t x299 = 91U;
	volatile int64_t t73 = -4910431425642588LL;

	t73 = (x297%((x298<x299)^x300));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x301 = UINT16_MAX;
	volatile int32_t t74 = -432535;

	t74 = (x301%((x302<x303)^x304));

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile uint8_t x305 = UINT8_MAX;
	int8_t x306 = INT8_MAX;
	static uint8_t x308 = UINT8_MAX;
	static int32_t t75 = 445753839;

	t75 = (x305%((x306<x307)^x308));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x309 = INT16_MIN;
	uint32_t x310 = 162U;
	uint8_t x311 = UINT8_MAX;
	int32_t x312 = -28;
	static volatile int32_t t76 = -4128;

	t76 = (x309%((x310<x311)^x312));

	if (t76 != -17) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x314 = INT64_MIN;
	int16_t x315 = INT16_MIN;
	uint64_t x316 = 128033992LLU;
	uint64_t t77 = 243LLU;

	t77 = (x313%((x314<x315)^x316));

	if (t77 != 92316260LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x317 = INT64_MAX;
	int8_t x318 = -1;
	uint16_t x319 = 0U;
	static int64_t x320 = -733226LL;
	volatile int64_t t78 = 655897560829320845LL;

	t78 = (x317%((x318<x319)^x320));

	if (t78 != 651707LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x321 = -117;
	int16_t x323 = INT16_MAX;
	int8_t x324 = 53;
	volatile int32_t t79 = -7;

	t79 = (x321%((x322<x323)^x324));

	if (t79 != -11) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x325 = INT8_MIN;
	int32_t x327 = INT32_MIN;
	uint64_t x328 = 17256147113368113LLU;

	t80 = (x325%((x326<x327)^x328));

	if (t80 != 17178956632406804LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static uint8_t x329 = 11U;
	volatile uint32_t x330 = UINT32_MAX;
	int32_t x331 = -1;
	int8_t x332 = -1;
	static volatile int32_t t81 = -1;

	t81 = (x329%((x330<x331)^x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x333 = 25374696768032LL;
	uint32_t x334 = 7U;
	uint16_t x336 = 2U;
	int64_t t82 = -188050961968649947LL;

	t82 = (x333%((x334<x335)^x336));

	if (t82 != 2LL) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x337 = INT8_MAX;
	static int64_t x338 = 240978879171LL;
	int8_t x339 = INT8_MIN;
	int32_t x340 = INT32_MAX;
	int32_t t83 = -3486726;

	t83 = (x337%((x338<x339)^x340));

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x341 = 49;
	int16_t x342 = 1;
	static uint8_t x343 = 3U;
	int64_t x344 = INT64_MIN;
	volatile int64_t t84 = 54682037155799378LL;

	t84 = (x341%((x342<x343)^x344));

	if (t84 != 49LL) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x346 = INT8_MIN;
	uint64_t x347 = 10LLU;
	int64_t x348 = -1LL;

	t85 = (x345%((x346<x347)^x348));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x351 = INT8_MIN;
	int8_t x352 = INT8_MIN;
	volatile uint64_t t86 = 25862502LLU;

	t86 = (x349%((x350<x351)^x352));

	if (t86 != 127LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x354 = UINT16_MAX;
	uint32_t x356 = UINT32_MAX;
	volatile uint32_t t87 = 118940U;

	t87 = (x353%((x354<x355)^x356));

	if (t87 != 255U) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x357 = 48758;
	volatile int8_t x358 = -1;
	int64_t x359 = INT64_MIN;
	volatile int32_t x360 = 384822;

	t88 = (x357%((x358<x359)^x360));

	if (t88 != 48758) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x361 = INT8_MIN;
	static volatile int8_t x362 = 0;
	int16_t x363 = INT16_MAX;
	int32_t x364 = INT32_MIN;

	t89 = (x361%((x362<x363)^x364));

	if (t89 != -128) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x367 = -13394;
	int8_t x368 = INT8_MIN;
	volatile int32_t t90 = 14708331;

	t90 = (x365%((x366<x367)^x368));

	if (t90 != 7) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x369 = -1;
	uint8_t x371 = 4U;
	uint64_t x372 = 1790482LLU;
	uint64_t t91 = 11282240172LLU;

	t91 = (x369%((x370<x371)^x372));

	if (t91 != 1735115LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = 5823;
	int16_t x374 = INT16_MIN;
	uint64_t x375 = UINT64_MAX;
	static uint64_t x376 = 38221855616741LLU;
	static uint64_t t92 = 9LLU;

	t92 = (x373%((x374<x375)^x376));

	if (t92 != 5823LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = INT64_MIN;
	uint16_t x378 = 105U;
	int8_t x380 = INT8_MAX;
	int64_t t93 = -1830LL;

	t93 = (x377%((x378<x379)^x380));

	if (t93 != -1LL) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x381 = INT32_MAX;
	int64_t x382 = -1LL;
	volatile int8_t x383 = -6;
	int32_t t94 = 6272;

	t94 = (x381%((x382<x383)^x384));

	if (t94 != 596287) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = 3203LL;
	int32_t x386 = INT32_MIN;
	volatile int32_t x387 = INT32_MIN;
	int64_t t95 = 790660911LL;

	t95 = (x385%((x386<x387)^x388));

	if (t95 != 3203LL) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x390 = 7U;
	uint16_t x392 = UINT16_MAX;
	static int64_t t96 = 1047956314332908611LL;

	t96 = (x389%((x390<x391)^x392));

	if (t96 != -8LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x393 = -1;
	int32_t x394 = INT32_MIN;
	volatile int8_t x396 = -3;
	static int32_t t97 = 650349160;

	t97 = (x393%((x394<x395)^x396));

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x401 = 48;
	volatile uint64_t x402 = 1509189954810LLU;
	static uint64_t x403 = 435164LLU;
	int8_t x404 = 14;
	int32_t t98 = 354879;

	t98 = (x401%((x402<x403)^x404));

	if (t98 != 6) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x405 = INT8_MIN;
	int32_t x406 = INT32_MIN;
	int16_t x407 = INT16_MAX;
	int32_t x408 = INT32_MIN;
	volatile int32_t t99 = 3;

	t99 = (x405%((x406<x407)^x408));

	if (t99 != -128) { NG(); } else { ; }
	
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

