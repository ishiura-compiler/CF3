#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x4 = 36553891LLU;
int64_t x7 = -1LL;
volatile int64_t x8 = -1LL;
int32_t x15 = INT32_MIN;
static int32_t t3 = -399;
uint64_t x18 = UINT64_MAX;
uint32_t x20 = 9364336U;
static int8_t x24 = -21;
int32_t x34 = -1;
uint16_t x36 = 1680U;
int8_t x45 = 31;
static volatile int32_t t10 = -163;
int8_t x55 = -1;
int16_t x59 = INT16_MIN;
uint16_t x60 = UINT16_MAX;
int8_t x66 = 1;
static uint8_t x69 = UINT8_MAX;
static uint32_t x71 = 30892034U;
int8_t x72 = INT8_MIN;
volatile int32_t t16 = 6386911;
volatile int64_t x73 = INT64_MIN;
int32_t x81 = INT32_MIN;
static int8_t x88 = -1;
static volatile int32_t t20 = -1;
uint8_t x90 = 3U;
uint64_t x91 = 1LLU;
static uint8_t x92 = 2U;
volatile int64_t x93 = INT64_MIN;
static int8_t x95 = 1;
int32_t x96 = INT32_MIN;
int16_t x109 = INT16_MIN;
static int32_t x112 = -255082385;
uint32_t x113 = UINT32_MAX;
int32_t x116 = 6823938;
int16_t x123 = -36;
int64_t x126 = -1LL;
volatile int32_t t30 = 28;
static int32_t t31 = -142351299;
volatile int16_t x133 = 3;
volatile int16_t x138 = INT16_MAX;
static uint32_t x145 = 0U;
static volatile int16_t x148 = INT16_MAX;
int32_t t35 = -163014;
int32_t x149 = INT32_MAX;
static volatile int8_t x151 = INT8_MAX;
static volatile int32_t t36 = 44031;
static int16_t x153 = 0;
volatile int8_t x161 = INT8_MAX;
static volatile int16_t x163 = -60;
int32_t t40 = 264265495;
static int8_t x184 = INT8_MAX;
uint32_t x186 = 75777U;
static int16_t x190 = -1;
int32_t x193 = INT32_MIN;
uint64_t x195 = 421LLU;
int32_t x196 = INT32_MIN;
int32_t x206 = -391422894;
uint64_t x214 = 218300LLU;
static int64_t x224 = INT64_MAX;
static int32_t t51 = 3716919;
int32_t x225 = INT32_MIN;
static uint32_t x228 = 52330305U;
static int64_t x231 = -1LL;
uint8_t x232 = UINT8_MAX;
int32_t x233 = 265;
volatile int8_t x236 = INT8_MAX;
volatile int32_t t54 = 0;
int64_t x240 = -1LL;
int32_t t55 = 125320;
uint16_t x244 = UINT16_MAX;
static uint8_t x247 = 121U;
int8_t x251 = 17;
volatile uint8_t x256 = UINT8_MAX;
int32_t x258 = INT32_MIN;
int64_t x266 = INT64_MIN;
static uint32_t x270 = 5502338U;
uint16_t x274 = 3U;
static uint16_t x287 = 57U;
int32_t x307 = -526;
volatile int32_t t71 = -9779236;
int8_t x310 = 37;
static volatile uint8_t x312 = 0U;
int32_t t72 = -69128;
volatile int8_t x315 = -1;
int8_t x316 = INT8_MAX;
volatile int16_t x320 = INT16_MIN;
static int32_t x328 = -1;
static volatile int8_t x339 = INT8_MIN;
int16_t x342 = INT16_MIN;
int32_t x343 = INT32_MIN;
static int64_t x349 = INT64_MIN;
uint64_t x350 = UINT64_MAX;
volatile int32_t t79 = 236533824;
int32_t x354 = 531863;
static int32_t x361 = -1;
volatile int16_t x367 = -470;
volatile int64_t x369 = 105819090212308524LL;
int64_t x370 = INT64_MIN;
volatile int8_t x376 = -1;
static volatile int32_t t85 = 1;
volatile uint64_t x383 = 200392LLU;
volatile uint8_t x384 = UINT8_MAX;
int16_t x389 = INT16_MIN;
static uint16_t x398 = 135U;
static int16_t x400 = -3;
static int32_t t90 = 1;
static volatile int32_t t93 = -221993203;
static int16_t x413 = INT16_MIN;
static uint8_t x415 = 11U;
int8_t x416 = INT8_MAX;
volatile int32_t t95 = 1914;
int8_t x423 = INT8_MIN;
int16_t x425 = INT16_MIN;
static int32_t x429 = INT32_MAX;
int32_t t98 = 1533850;
volatile uint32_t x439 = 12613464U;
uint64_t x440 = UINT64_MAX;
int32_t t99 = -478;


void f0(void) {
	int32_t x1 = INT32_MIN;
	uint8_t x2 = UINT8_MAX;
	static uint8_t x3 = UINT8_MAX;
	int32_t t0 = -8076;

	t0 = (x1<((x2&x3)-x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 4123670U;
	volatile uint16_t x6 = UINT16_MAX;
	volatile int32_t t1 = -2332;

	t1 = (x5<((x6&x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -1;
	int16_t x10 = INT16_MIN;
	int64_t x11 = INT64_MIN;
	volatile uint64_t x12 = UINT64_MAX;
	volatile int32_t t2 = 176729711;

	t2 = (x9<((x10&x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int16_t x13 = 1;
	static int32_t x14 = -1;
	static uint64_t x16 = 3115098971514800845LLU;

	t3 = (x13<((x14&x15)-x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = UINT64_MAX;
	int16_t x19 = -1;
	int32_t t4 = -6903;

	t4 = (x17<((x18&x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MIN;
	int64_t x23 = 6817LL;
	int32_t t5 = 3;

	t5 = (x21<((x22&x23)-x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int64_t x29 = INT64_MIN;
	int64_t x30 = INT64_MAX;
	int16_t x31 = -10165;
	int64_t x32 = 0LL;
	volatile int32_t t6 = -46111;

	t6 = (x29<((x30&x31)-x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	volatile uint16_t x35 = UINT16_MAX;
	int32_t t7 = 532817;

	t7 = (x33<((x34&x35)-x36));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x37 = -1;
	uint64_t x38 = 502LLU;
	int64_t x39 = 1LL;
	volatile int8_t x40 = -52;
	int32_t t8 = -134;

	t8 = (x37<((x38&x39)-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x41 = 1U;
	uint8_t x42 = 11U;
	volatile int16_t x43 = 13005;
	static int16_t x44 = INT16_MIN;
	volatile int32_t t9 = -739631;

	t9 = (x41<((x42&x43)-x44));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = INT8_MIN;
	uint16_t x47 = UINT16_MAX;
	uint16_t x48 = UINT16_MAX;

	t10 = (x45<((x46&x47)-x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = 8260161U;
	int16_t x50 = INT16_MIN;
	int8_t x51 = INT8_MIN;
	uint32_t x52 = 79965U;
	int32_t t11 = -1258;

	t11 = (x49<((x50&x51)-x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	static int64_t x54 = INT64_MIN;
	int64_t x56 = -1LL;
	volatile int32_t t12 = -8048;

	t12 = (x53<((x54&x55)-x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -6;
	static int64_t x58 = -417067096303673983LL;
	static int32_t t13 = -12;

	t13 = (x57<((x58&x59)-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = 39;
	uint32_t x62 = 206U;
	volatile int8_t x63 = INT8_MAX;
	static int64_t x64 = -727759LL;
	int32_t t14 = -5420973;

	t14 = (x61<((x62&x63)-x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = INT8_MIN;
	volatile int16_t x67 = -1;
	int32_t x68 = -32602;
	int32_t t15 = 0;

	t15 = (x65<((x66&x67)-x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x70 = UINT32_MAX;

	t16 = (x69<((x70&x71)-x72));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x74 = -48525;
	int8_t x75 = INT8_MIN;
	int16_t x76 = INT16_MAX;
	int32_t t17 = 127338304;

	t17 = (x73<((x74&x75)-x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = UINT16_MAX;
	volatile int8_t x78 = INT8_MIN;
	volatile int8_t x79 = INT8_MIN;
	static uint64_t x80 = 3012597756584LLU;
	int32_t t18 = 8054806;

	t18 = (x77<((x78&x79)-x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x82 = 3U;
	int8_t x83 = INT8_MIN;
	int8_t x84 = 0;
	volatile int32_t t19 = 8701;

	t19 = (x81<((x82&x83)-x84));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = INT8_MIN;
	static uint8_t x86 = 44U;
	static volatile int8_t x87 = 0;

	t20 = (x85<((x86&x87)-x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x89 = INT32_MAX;
	int32_t t21 = 1340;

	t21 = (x89<((x90&x91)-x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x94 = -277LL;
	int32_t t22 = -2772964;

	t22 = (x93<((x94&x95)-x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x97 = -1;
	volatile int16_t x98 = INT16_MAX;
	int16_t x99 = 1534;
	int16_t x100 = -99;
	int32_t t23 = -1957;

	t23 = (x97<((x98&x99)-x100));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = INT16_MIN;
	volatile int16_t x102 = INT16_MIN;
	static int8_t x103 = 1;
	int16_t x104 = INT16_MAX;
	static int32_t t24 = 162;

	t24 = (x101<((x102&x103)-x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x105 = 1305571048162LLU;
	int8_t x106 = INT8_MIN;
	static int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MIN;
	volatile int32_t t25 = -70589;

	t25 = (x105<((x106&x107)-x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x110 = 2917633387782LLU;
	int8_t x111 = 1;
	volatile int32_t t26 = 14107511;

	t26 = (x109<((x110&x111)-x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x114 = -15;
	uint32_t x115 = 213U;
	int32_t t27 = 53204386;

	t27 = (x113<((x114&x115)-x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint32_t x117 = UINT32_MAX;
	int64_t x118 = -137405575008980LL;
	static int16_t x119 = -11;
	uint16_t x120 = 956U;
	volatile int32_t t28 = 14146292;

	t28 = (x117<((x118&x119)-x120));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x121 = UINT8_MAX;
	volatile int8_t x122 = 1;
	volatile int32_t x124 = -1;
	volatile int32_t t29 = -113025;

	t29 = (x121<((x122&x123)-x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile uint16_t x125 = 10U;
	static volatile int8_t x127 = INT8_MIN;
	uint32_t x128 = 29U;

	t30 = (x125<((x126&x127)-x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = UINT16_MAX;
	volatile int8_t x130 = INT8_MIN;
	uint32_t x131 = UINT32_MAX;
	volatile int16_t x132 = -1;

	t31 = (x129<((x130&x131)-x132));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x134 = 6049664LL;
	int8_t x135 = 35;
	static uint32_t x136 = 7437U;
	volatile int32_t t32 = -3;

	t32 = (x133<((x134&x135)-x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x137 = INT16_MAX;
	uint8_t x139 = 3U;
	int16_t x140 = 427;
	volatile int32_t t33 = -116296279;

	t33 = (x137<((x138&x139)-x140));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint8_t x141 = 127U;
	int64_t x142 = -289269038LL;
	int64_t x143 = INT64_MIN;
	int64_t x144 = -1LL;
	volatile int32_t t34 = 8;

	t34 = (x141<((x142&x143)-x144));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x146 = UINT32_MAX;
	static int8_t x147 = INT8_MAX;

	t35 = (x145<((x146&x147)-x148));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int8_t x150 = INT8_MAX;
	volatile int16_t x152 = -1;

	t36 = (x149<((x150&x151)-x152));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x154 = UINT16_MAX;
	uint8_t x155 = 3U;
	int8_t x156 = INT8_MIN;
	int32_t t37 = 6751151;

	t37 = (x153<((x154&x155)-x156));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x157 = INT16_MIN;
	uint16_t x158 = 901U;
	int64_t x159 = INT64_MIN;
	volatile int32_t x160 = -1;
	static volatile int32_t t38 = 170;

	t38 = (x157<((x158&x159)-x160));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x162 = 15699566;
	int64_t x164 = -1LL;
	volatile int32_t t39 = 6633;

	t39 = (x161<((x162&x163)-x164));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = 14994;
	int8_t x166 = -1;
	static volatile int8_t x167 = INT8_MIN;
	volatile int32_t x168 = INT32_MIN;

	t40 = (x165<((x166&x167)-x168));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x173 = 0U;
	static int8_t x174 = 53;
	volatile uint8_t x175 = UINT8_MAX;
	int16_t x176 = 937;
	int32_t t41 = 20353;

	t41 = (x173<((x174&x175)-x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x181 = INT8_MIN;
	uint64_t x182 = UINT64_MAX;
	uint16_t x183 = UINT16_MAX;
	volatile int32_t t42 = 61887;

	t42 = (x181<((x182&x183)-x184));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x185 = INT32_MIN;
	int16_t x187 = 11949;
	uint16_t x188 = UINT16_MAX;
	static volatile int32_t t43 = 17972475;

	t43 = (x185<((x186&x187)-x188));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x189 = -1;
	int16_t x191 = -1;
	uint64_t x192 = 4277631328309LLU;
	static volatile int32_t t44 = -46;

	t44 = (x189<((x190&x191)-x192));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x194 = -1LL;
	int32_t t45 = 6383677;

	t45 = (x193<((x194&x195)-x196));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x197 = INT8_MIN;
	int16_t x198 = INT16_MIN;
	int16_t x199 = 1;
	uint16_t x200 = UINT16_MAX;
	volatile int32_t t46 = 554443;

	t46 = (x197<((x198&x199)-x200));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x205 = 7U;
	int8_t x207 = 1;
	int32_t x208 = INT32_MAX;
	int32_t t47 = 261182610;

	t47 = (x205<((x206&x207)-x208));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x209 = -1LL;
	int8_t x210 = -3;
	int32_t x211 = -1;
	volatile uint16_t x212 = 86U;
	static volatile int32_t t48 = 32077945;

	t48 = (x209<((x210&x211)-x212));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = -1;
	uint32_t x215 = UINT32_MAX;
	uint32_t x216 = 931060359U;
	volatile int32_t t49 = -97668758;

	t49 = (x213<((x214&x215)-x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x217 = -7;
	uint64_t x218 = UINT64_MAX;
	volatile int64_t x219 = -1LL;
	volatile int16_t x220 = INT16_MAX;
	static volatile int32_t t50 = 697311974;

	t50 = (x217<((x218&x219)-x220));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x221 = INT64_MIN;
	int32_t x222 = -24;
	uint8_t x223 = UINT8_MAX;

	t51 = (x221<((x222&x223)-x224));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x226 = INT16_MAX;
	volatile int8_t x227 = -1;
	volatile int32_t t52 = 1771;

	t52 = (x225<((x226&x227)-x228));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x229 = -2782718375005047LL;
	uint64_t x230 = UINT64_MAX;
	int32_t t53 = -1;

	t53 = (x229<((x230&x231)-x232));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x234 = 10;
	int64_t x235 = INT64_MAX;

	t54 = (x233<((x234&x235)-x236));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = INT64_MIN;
	uint32_t x238 = 51U;
	volatile int8_t x239 = INT8_MIN;

	t55 = (x237<((x238&x239)-x240));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x241 = INT32_MAX;
	int16_t x242 = INT16_MIN;
	int32_t x243 = -579305;
	volatile int32_t t56 = 7234751;

	t56 = (x241<((x242&x243)-x244));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int64_t x245 = INT64_MIN;
	uint16_t x246 = 27U;
	int16_t x248 = INT16_MAX;
	int32_t t57 = -102510;

	t57 = (x245<((x246&x247)-x248));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = -8315;
	static int16_t x250 = INT16_MIN;
	int64_t x252 = INT64_MAX;
	int32_t t58 = -17613;

	t58 = (x249<((x250&x251)-x252));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x253 = 27U;
	uint16_t x254 = 0U;
	int64_t x255 = INT64_MIN;
	static volatile int32_t t59 = 4417210;

	t59 = (x253<((x254&x255)-x256));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = -1;
	uint16_t x259 = 1U;
	uint32_t x260 = 107497672U;
	int32_t t60 = 54;

	t60 = (x257<((x258&x259)-x260));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x261 = 12389463025489LLU;
	static uint32_t x262 = 904494535U;
	uint8_t x263 = UINT8_MAX;
	static volatile uint32_t x264 = 5U;
	int32_t t61 = -518518;

	t61 = (x261<((x262&x263)-x264));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x265 = 14930LLU;
	int8_t x267 = INT8_MIN;
	uint64_t x268 = UINT64_MAX;
	volatile int32_t t62 = -82943;

	t62 = (x265<((x266&x267)-x268));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x269 = -1;
	int8_t x271 = INT8_MIN;
	volatile int16_t x272 = -58;
	int32_t t63 = 302814;

	t63 = (x269<((x270&x271)-x272));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x273 = INT64_MIN;
	int16_t x275 = -5;
	static int16_t x276 = INT16_MIN;
	int32_t t64 = 1;

	t64 = (x273<((x274&x275)-x276));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x277 = 454U;
	uint64_t x278 = UINT64_MAX;
	volatile int16_t x279 = INT16_MIN;
	static int8_t x280 = INT8_MIN;
	static volatile int32_t t65 = -755496864;

	t65 = (x277<((x278&x279)-x280));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int64_t x285 = -1LL;
	int16_t x286 = INT16_MIN;
	int32_t x288 = -1;
	static int32_t t66 = 6328104;

	t66 = (x285<((x286&x287)-x288));

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x289 = INT8_MAX;
	static int8_t x290 = -1;
	int8_t x291 = 0;
	int16_t x292 = 5;
	static volatile int32_t t67 = -280743650;

	t67 = (x289<((x290&x291)-x292));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x293 = 1518445U;
	int64_t x294 = 22961768LL;
	int64_t x295 = INT64_MIN;
	uint8_t x296 = 25U;
	static volatile int32_t t68 = -31136371;

	t68 = (x293<((x294&x295)-x296));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint64_t x297 = UINT64_MAX;
	uint16_t x298 = UINT16_MAX;
	static int8_t x299 = -1;
	uint8_t x300 = 23U;
	volatile int32_t t69 = 0;

	t69 = (x297<((x298&x299)-x300));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x301 = 162U;
	static volatile uint64_t x302 = UINT64_MAX;
	volatile uint8_t x303 = UINT8_MAX;
	uint32_t x304 = UINT32_MAX;
	int32_t t70 = -127331047;

	t70 = (x301<((x302&x303)-x304));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int32_t x305 = -2583;
	int16_t x306 = INT16_MIN;
	int8_t x308 = 4;

	t71 = (x305<((x306&x307)-x308));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x309 = INT16_MIN;
	volatile int64_t x311 = -3160575LL;

	t72 = (x309<((x310&x311)-x312));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x313 = INT32_MIN;
	uint64_t x314 = 254LLU;
	int32_t t73 = -830888973;

	t73 = (x313<((x314&x315)-x316));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x317 = 0;
	uint8_t x318 = UINT8_MAX;
	int32_t x319 = 1;
	volatile int32_t t74 = 5596;

	t74 = (x317<((x318&x319)-x320));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x321 = INT64_MIN;
	static int16_t x322 = INT16_MAX;
	static int8_t x323 = -1;
	uint8_t x324 = 0U;
	int32_t t75 = -3;

	t75 = (x321<((x322&x323)-x324));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x325 = INT16_MIN;
	static int64_t x326 = INT64_MIN;
	volatile int8_t x327 = INT8_MIN;
	static int32_t t76 = 819498958;

	t76 = (x325<((x326&x327)-x328));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x337 = 15329404U;
	uint16_t x338 = 56U;
	int64_t x340 = -1098259176163486499LL;
	volatile int32_t t77 = -6131;

	t77 = (x337<((x338&x339)-x340));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x341 = 28106LLU;
	static int8_t x344 = INT8_MIN;
	volatile int32_t t78 = -6821;

	t78 = (x341<((x342&x343)-x344));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x351 = -1;
	static int64_t x352 = -430130527LL;

	t79 = (x349<((x350&x351)-x352));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x353 = -1;
	int16_t x355 = INT16_MAX;
	int8_t x356 = -1;
	static volatile int32_t t80 = -80467625;

	t80 = (x353<((x354&x355)-x356));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = 7;
	int32_t x358 = -1;
	static volatile int16_t x359 = INT16_MIN;
	int64_t x360 = 26236544LL;
	int32_t t81 = 0;

	t81 = (x357<((x358&x359)-x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x362 = -7;
	uint64_t x363 = UINT64_MAX;
	uint8_t x364 = 10U;
	static volatile int32_t t82 = 752908;

	t82 = (x361<((x362&x363)-x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = INT16_MIN;
	int16_t x366 = -1;
	static int32_t x368 = 28;
	volatile int32_t t83 = 422;

	t83 = (x365<((x366&x367)-x368));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x371 = 60;
	volatile int8_t x372 = -14;
	volatile int32_t t84 = 623;

	t84 = (x369<((x370&x371)-x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x373 = -1;
	uint64_t x374 = 734746229017246176LLU;
	static int64_t x375 = INT64_MIN;

	t85 = (x373<((x374&x375)-x376));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x381 = 10874186;
	static uint16_t x382 = 1U;
	int32_t t86 = -1;

	t86 = (x381<((x382&x383)-x384));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x385 = INT16_MAX;
	int8_t x386 = INT8_MIN;
	volatile int32_t x387 = INT32_MIN;
	int64_t x388 = INT64_MIN;
	int32_t t87 = -4797;

	t87 = (x385<((x386&x387)-x388));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x390 = 0;
	volatile int16_t x391 = -1;
	volatile uint32_t x392 = 109U;
	volatile int32_t t88 = -44888956;

	t88 = (x389<((x390&x391)-x392));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x393 = -10;
	int8_t x394 = INT8_MAX;
	static int32_t x395 = 29372;
	int16_t x396 = -6;
	volatile int32_t t89 = 4;

	t89 = (x393<((x394&x395)-x396));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int8_t x397 = INT8_MIN;
	static uint32_t x399 = UINT32_MAX;

	t90 = (x397<((x398&x399)-x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x401 = 1045LL;
	volatile uint32_t x402 = 1U;
	int16_t x403 = INT16_MIN;
	volatile int16_t x404 = 899;
	int32_t t91 = 2880;

	t91 = (x401<((x402&x403)-x404));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x405 = -1;
	int32_t x406 = -10379300;
	uint32_t x407 = 273624361U;
	volatile int64_t x408 = -120570968156135870LL;
	volatile int32_t t92 = -6458813;

	t92 = (x405<((x406&x407)-x408));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x409 = INT64_MIN;
	static volatile uint32_t x410 = UINT32_MAX;
	volatile uint32_t x411 = UINT32_MAX;
	static int64_t x412 = 92LL;

	t93 = (x409<((x410&x411)-x412));

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x414 = INT16_MIN;
	int32_t t94 = -50701;

	t94 = (x413<((x414&x415)-x416));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x417 = 30U;
	volatile int64_t x418 = INT64_MIN;
	int32_t x419 = -1;
	static int8_t x420 = -1;

	t95 = (x417<((x418&x419)-x420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x421 = UINT64_MAX;
	int16_t x422 = INT16_MIN;
	uint32_t x424 = 8963U;
	int32_t t96 = -72891;

	t96 = (x421<((x422&x423)-x424));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x426 = INT16_MIN;
	int8_t x427 = -1;
	uint32_t x428 = UINT32_MAX;
	volatile int32_t t97 = -3202;

	t97 = (x425<((x426&x427)-x428));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x430 = UINT8_MAX;
	int8_t x431 = -1;
	uint8_t x432 = 12U;

	t98 = (x429<((x430&x431)-x432));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x437 = -33;
	int32_t x438 = INT32_MIN;

	t99 = (x437<((x438&x439)-x440));

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

