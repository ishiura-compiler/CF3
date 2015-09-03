#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -21;
volatile int32_t x2 = 1818082;
volatile uint8_t x4 = 15U;
static int8_t x12 = -61;
int32_t t2 = 156761738;
static uint8_t x14 = UINT8_MAX;
int64_t x17 = -249719559LL;
uint8_t x21 = 1U;
static int16_t x30 = 20;
uint32_t x38 = 3572206U;
int16_t x42 = 3;
uint64_t x49 = 6699256194896189684LLU;
uint64_t x50 = 7932415784106667LLU;
int32_t t12 = 52;
int8_t x58 = -16;
static volatile uint32_t x59 = 10517U;
int16_t x64 = -1;
int32_t t17 = 1724;
int64_t x80 = INT64_MIN;
static volatile int32_t t21 = 20;
int8_t x91 = -1;
volatile int32_t t22 = -133919312;
int8_t x103 = 0;
volatile int16_t x108 = -1;
static uint32_t x112 = UINT32_MAX;
static int16_t x115 = INT16_MIN;
volatile uint8_t x119 = 3U;
uint64_t x120 = 91986547LLU;
int32_t x123 = -204368;
int8_t x127 = -1;
volatile uint64_t x128 = UINT64_MAX;
volatile int64_t x131 = INT64_MAX;
int16_t x136 = -1;
static volatile int32_t x137 = -4;
static uint16_t x139 = UINT16_MAX;
volatile int16_t x140 = -1;
int32_t x141 = -1;
int32_t x152 = INT32_MIN;
volatile int16_t x159 = 1;
int64_t x161 = -508400048414736175LL;
static int8_t x166 = 0;
int16_t x169 = INT16_MAX;
uint8_t x170 = UINT8_MAX;
volatile int32_t t43 = 47384;
volatile int32_t t45 = -76;
int32_t x188 = INT32_MIN;
uint8_t x190 = 28U;
int32_t x196 = INT32_MIN;
volatile int32_t t49 = 0;
uint16_t x204 = UINT16_MAX;
static uint16_t x214 = 21267U;
int32_t t54 = 4;
static int64_t x222 = -1567001636023LL;
uint8_t x228 = UINT8_MAX;
uint32_t x229 = UINT32_MAX;
int16_t x230 = -2;
static volatile int16_t x231 = INT16_MIN;
uint8_t x233 = 39U;
static int32_t x235 = 9;
static uint8_t x236 = 105U;
static int16_t x237 = 1;
static volatile int64_t x238 = -2LL;
int32_t t60 = 55974;
int16_t x260 = 6384;
int16_t x261 = 315;
static int16_t x263 = 2;
volatile int16_t x264 = 2315;
int64_t x267 = INT64_MIN;
static volatile int32_t x268 = -1;
int8_t x272 = -22;
int32_t t68 = -2031409;
uint16_t x277 = 9U;
static int32_t t69 = 5162103;
int16_t x288 = 4868;
int16_t x292 = -1;
uint16_t x301 = 31U;
static int64_t x305 = 4509889LL;
volatile int32_t t76 = -206;
uint8_t x310 = 5U;
int32_t t77 = -17;
uint16_t x318 = 1149U;
static int32_t x322 = -1;
uint64_t x324 = 7629051LLU;
volatile int32_t t81 = -2525711;
int32_t x340 = INT32_MAX;
static int32_t t85 = -57;
int8_t x352 = INT8_MIN;
static int32_t x359 = -1;
uint32_t x360 = UINT32_MAX;
int32_t x366 = INT32_MIN;
int8_t x372 = INT8_MIN;
volatile uint8_t x381 = UINT8_MAX;
volatile int16_t x383 = -1;
volatile int32_t t95 = -33172;
int16_t x389 = 1;
int64_t x394 = -9887138LL;
volatile int32_t t99 = -735781;


void f0(void) {
	int8_t x3 = -1;
	volatile int32_t t0 = -798;

	t0 = (x1<((x2&x3)%x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = INT8_MAX;
	static int16_t x6 = INT16_MIN;
	int32_t x7 = INT32_MIN;
	volatile int64_t x8 = INT64_MIN;
	int32_t t1 = -31;

	t1 = (x5<((x6&x7)%x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 15U;
	volatile int64_t x10 = 46096018830732LL;
	int16_t x11 = INT16_MIN;

	t2 = (x9<((x10&x11)%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 30U;
	int8_t x15 = INT8_MIN;
	uint16_t x16 = UINT16_MAX;
	volatile int32_t t3 = -408718;

	t3 = (x13<((x14&x15)%x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = 1;
	uint64_t x19 = 14LLU;
	uint8_t x20 = 3U;
	volatile int32_t t4 = 7;

	t4 = (x17<((x18&x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x22 = 0U;
	int16_t x23 = -54;
	int8_t x24 = -1;
	int32_t t5 = 254;

	t5 = (x21<((x22&x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	volatile int8_t x26 = 0;
	static int64_t x27 = -1LL;
	static int8_t x28 = INT8_MAX;
	static volatile int32_t t6 = 49;

	t6 = (x25<((x26&x27)%x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = UINT64_MAX;
	static uint16_t x31 = 68U;
	uint8_t x32 = 91U;
	int32_t t7 = 10;

	t7 = (x29<((x30&x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	static volatile uint8_t x34 = 123U;
	uint16_t x35 = 1U;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -2;

	t8 = (x33<((x34&x35)%x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -8;
	int8_t x39 = -1;
	uint32_t x40 = 209798895U;
	volatile int32_t t9 = 1;

	t9 = (x37<((x38&x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = 8310;
	int8_t x43 = -3;
	static int16_t x44 = 2474;
	volatile int32_t t10 = 40;

	t10 = (x41<((x42&x43)%x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int64_t x46 = INT64_MIN;
	static int32_t x47 = INT32_MIN;
	volatile int16_t x48 = -1;
	int32_t t11 = 141;

	t11 = (x45<((x46&x47)%x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x51 = INT64_MAX;
	int64_t x52 = -1LL;

	t12 = (x49<((x50&x51)%x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	uint16_t x54 = 924U;
	int64_t x55 = -1LL;
	uint32_t x56 = 61227U;
	volatile int32_t t13 = 211;

	t13 = (x53<((x54&x55)%x56));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	volatile int8_t x57 = -24;
	uint16_t x60 = UINT16_MAX;
	volatile int32_t t14 = 1299;

	t14 = (x57<((x58&x59)%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = -1;
	int32_t x62 = -1;
	int8_t x63 = INT8_MAX;
	volatile int32_t t15 = -1;

	t15 = (x61<((x62&x63)%x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x65 = 3U;
	volatile uint32_t x66 = 23579U;
	static int16_t x67 = INT16_MIN;
	volatile int64_t x68 = 284250LL;
	volatile int32_t t16 = 39906;

	t16 = (x65<((x66&x67)%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x69 = INT16_MIN;
	volatile uint8_t x70 = 30U;
	volatile int8_t x71 = INT8_MIN;
	int32_t x72 = -12841;

	t17 = (x69<((x70&x71)%x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 1U;
	static uint16_t x74 = 9875U;
	uint64_t x75 = 142810338227796955LLU;
	volatile int8_t x76 = -1;
	volatile int32_t t18 = -5177613;

	t18 = (x73<((x74&x75)%x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x77 = 31LLU;
	uint32_t x78 = 9512U;
	static uint32_t x79 = 1255U;
	volatile int32_t t19 = 62717896;

	t19 = (x77<((x78&x79)%x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	int8_t x82 = -1;
	static int64_t x83 = INT64_MAX;
	static int8_t x84 = -24;
	int32_t t20 = 1029456186;

	t20 = (x81<((x82&x83)%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x85 = INT8_MIN;
	int8_t x86 = INT8_MAX;
	int32_t x87 = INT32_MIN;
	static int8_t x88 = -1;

	t21 = (x85<((x86&x87)%x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int8_t x89 = INT8_MAX;
	int32_t x90 = -62358;
	int8_t x92 = -1;

	t22 = (x89<((x90&x91)%x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x93 = 2276U;
	volatile int32_t x94 = INT32_MIN;
	int8_t x95 = -1;
	int8_t x96 = INT8_MAX;
	volatile int32_t t23 = -3;

	t23 = (x93<((x94&x95)%x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MIN;
	int16_t x98 = INT16_MIN;
	volatile int16_t x99 = INT16_MIN;
	static int8_t x100 = -1;
	static int32_t t24 = -119458017;

	t24 = (x97<((x98&x99)%x100));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MIN;
	volatile uint32_t x102 = UINT32_MAX;
	uint32_t x104 = 51017880U;
	volatile int32_t t25 = -6;

	t25 = (x101<((x102&x103)%x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MAX;
	static uint16_t x106 = 6U;
	uint32_t x107 = 879258191U;
	int32_t t26 = 403229558;

	t26 = (x105<((x106&x107)%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	uint8_t x110 = 33U;
	volatile int8_t x111 = -1;
	static int32_t t27 = -2705;

	t27 = (x109<((x110&x111)%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MAX;
	uint16_t x114 = 1U;
	uint32_t x116 = UINT32_MAX;
	int32_t t28 = 4114;

	t28 = (x113<((x114&x115)%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = INT8_MIN;
	static int32_t x118 = INT32_MIN;
	static volatile int32_t t29 = 147708;

	t29 = (x117<((x118&x119)%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MAX;
	volatile int16_t x122 = INT16_MIN;
	uint32_t x124 = 8928625U;
	static int32_t t30 = -502810033;

	t30 = (x121<((x122&x123)%x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MIN;
	uint64_t x126 = 144220797378446242LLU;
	static int32_t t31 = -24991999;

	t31 = (x125<((x126&x127)%x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static int64_t x129 = 24334LL;
	int8_t x130 = -24;
	static uint32_t x132 = 537068278U;
	volatile int32_t t32 = 14;

	t32 = (x129<((x130&x131)%x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x133 = -1;
	int32_t x134 = INT32_MIN;
	int32_t x135 = -867;
	int32_t t33 = 207976;

	t33 = (x133<((x134&x135)%x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x138 = 121U;
	volatile int32_t t34 = -1;

	t34 = (x137<((x138&x139)%x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static uint64_t x142 = 3966493LLU;
	volatile int16_t x143 = INT16_MIN;
	static int16_t x144 = 14406;
	int32_t t35 = 732;

	t35 = (x141<((x142&x143)%x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	volatile int16_t x146 = INT16_MIN;
	volatile uint8_t x147 = 2U;
	int16_t x148 = INT16_MIN;
	int32_t t36 = -32791006;

	t36 = (x145<((x146&x147)%x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -1;
	volatile int64_t x150 = INT64_MIN;
	uint32_t x151 = 29U;
	volatile int32_t t37 = 135785560;

	t37 = (x149<((x150&x151)%x152));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -1LL;
	static volatile int32_t x154 = -1932;
	uint16_t x155 = 2437U;
	int16_t x156 = 1;
	int32_t t38 = -80;

	t38 = (x153<((x154&x155)%x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MAX;
	int16_t x158 = -1;
	int16_t x160 = 10911;
	volatile int32_t t39 = -3612502;

	t39 = (x157<((x158&x159)%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x162 = INT16_MIN;
	uint16_t x163 = 3295U;
	int64_t x164 = 10727LL;
	volatile int32_t t40 = -18478;

	t40 = (x161<((x162&x163)%x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	int8_t x167 = INT8_MIN;
	uint16_t x168 = UINT16_MAX;
	static volatile int32_t t41 = 467;

	t41 = (x165<((x166&x167)%x168));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x171 = 3519;
	static uint64_t x172 = UINT64_MAX;
	int32_t t42 = -2;

	t42 = (x169<((x170&x171)%x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = INT32_MAX;
	uint8_t x174 = UINT8_MAX;
	int64_t x175 = 6036LL;
	int8_t x176 = INT8_MIN;

	t43 = (x173<((x174&x175)%x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	int32_t x178 = -120635;
	int32_t x179 = -5;
	int16_t x180 = 53;
	volatile int32_t t44 = 825024382;

	t44 = (x177<((x178&x179)%x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = INT32_MIN;
	uint16_t x182 = 23U;
	int64_t x183 = 7026952903LL;
	int16_t x184 = -1;

	t45 = (x181<((x182&x183)%x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x185 = INT16_MIN;
	int32_t x186 = INT32_MIN;
	volatile uint32_t x187 = 6093814U;
	volatile int32_t t46 = 16303;

	t46 = (x185<((x186&x187)%x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = 3LL;
	volatile int16_t x191 = 53;
	int32_t x192 = INT32_MAX;
	volatile int32_t t47 = 124202;

	t47 = (x189<((x190&x191)%x192));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = 13405707LLU;
	int16_t x194 = 9;
	uint32_t x195 = UINT32_MAX;
	int32_t t48 = -2;

	t48 = (x193<((x194&x195)%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x197 = 619746270185LLU;
	static int32_t x198 = INT32_MIN;
	static uint8_t x199 = 30U;
	static volatile int8_t x200 = 27;

	t49 = (x197<((x198&x199)%x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int8_t x201 = -1;
	int64_t x202 = -128225506LL;
	volatile uint64_t x203 = 1652268804558963326LLU;
	int32_t t50 = -90;

	t50 = (x201<((x202&x203)%x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x205 = 907804101LLU;
	int32_t x206 = -1;
	uint16_t x207 = 55U;
	volatile int16_t x208 = INT16_MIN;
	int32_t t51 = -1;

	t51 = (x205<((x206&x207)%x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x209 = INT16_MAX;
	static int8_t x210 = INT8_MAX;
	int32_t x211 = 14417;
	volatile int32_t x212 = -1;
	int32_t t52 = 1;

	t52 = (x209<((x210&x211)%x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	int32_t x215 = -6233214;
	uint32_t x216 = UINT32_MAX;
	int32_t t53 = -54517;

	t53 = (x213<((x214&x215)%x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int16_t x218 = INT16_MAX;
	int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;

	t54 = (x217<((x218&x219)%x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x221 = -1;
	static volatile uint64_t x223 = 3509495170080060390LLU;
	int32_t x224 = INT32_MIN;
	volatile int32_t t55 = -656770276;

	t55 = (x221<((x222&x223)%x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = 1;
	volatile int32_t x226 = 384542167;
	static volatile uint16_t x227 = 1734U;
	int32_t t56 = -396;

	t56 = (x225<((x226&x227)%x228));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x232 = -4967LL;
	int32_t t57 = -388513;

	t57 = (x229<((x230&x231)%x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int16_t x234 = INT16_MIN;
	int32_t t58 = -3111;

	t58 = (x233<((x234&x235)%x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x239 = -11325952579177LL;
	int64_t x240 = INT64_MIN;
	int32_t t59 = 150;

	t59 = (x237<((x238&x239)%x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = UINT64_MAX;
	uint16_t x242 = UINT16_MAX;
	volatile int8_t x243 = 0;
	volatile uint64_t x244 = 2404251272038593619LLU;

	t60 = (x241<((x242&x243)%x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	uint8_t x246 = 100U;
	volatile int64_t x247 = 526733717282LL;
	uint64_t x248 = UINT64_MAX;
	volatile int32_t t61 = -1281;

	t61 = (x245<((x246&x247)%x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = 1U;
	static int64_t x250 = INT64_MAX;
	int32_t x251 = 198906220;
	uint32_t x252 = UINT32_MAX;
	volatile int32_t t62 = -235838;

	t62 = (x249<((x250&x251)%x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x253 = INT32_MIN;
	static int16_t x254 = -3;
	int64_t x255 = -1LL;
	volatile uint64_t x256 = 32589237030793049LLU;
	volatile int32_t t63 = 516139;

	t63 = (x253<((x254&x255)%x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = 9U;
	uint16_t x258 = UINT16_MAX;
	int16_t x259 = INT16_MAX;
	volatile int32_t t64 = -9;

	t64 = (x257<((x258&x259)%x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x262 = UINT8_MAX;
	int32_t t65 = -8010140;

	t65 = (x261<((x262&x263)%x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint64_t x265 = 265191789318889614LLU;
	uint8_t x266 = 2U;
	volatile int32_t t66 = 516697;

	t66 = (x265<((x266&x267)%x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = -1LL;
	int32_t x270 = INT32_MIN;
	volatile uint8_t x271 = UINT8_MAX;
	static int32_t t67 = 50916;

	t67 = (x269<((x270&x271)%x272));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	int32_t x274 = INT32_MAX;
	uint8_t x275 = 0U;
	int16_t x276 = 325;

	t68 = (x273<((x274&x275)%x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x278 = 1314626U;
	volatile int16_t x279 = -30;
	uint64_t x280 = UINT64_MAX;

	t69 = (x277<((x278&x279)%x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = -243318713458LL;
	volatile int64_t x282 = -1LL;
	uint32_t x283 = UINT32_MAX;
	int8_t x284 = 14;
	static int32_t t70 = 148;

	t70 = (x281<((x282&x283)%x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MIN;
	int8_t x286 = 0;
	volatile uint16_t x287 = UINT16_MAX;
	volatile int32_t t71 = 8742;

	t71 = (x285<((x286&x287)%x288));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MIN;
	int64_t x290 = -1LL;
	int16_t x291 = -3;
	int32_t t72 = 515;

	t72 = (x289<((x290&x291)%x292));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -4LL;
	int8_t x294 = 11;
	int32_t x295 = -178;
	uint8_t x296 = 17U;
	volatile int32_t t73 = 846813;

	t73 = (x293<((x294&x295)%x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 3U;
	uint8_t x298 = 2U;
	uint32_t x299 = 293352U;
	static uint32_t x300 = UINT32_MAX;
	int32_t t74 = 39;

	t74 = (x297<((x298&x299)%x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = -1;
	static uint64_t x303 = 20626017137452319LLU;
	uint8_t x304 = 31U;
	volatile int32_t t75 = -1;

	t75 = (x301<((x302&x303)%x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x306 = INT8_MAX;
	uint64_t x307 = 12062041LLU;
	static volatile int16_t x308 = INT16_MAX;

	t76 = (x305<((x306&x307)%x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x309 = 1820718608724911LLU;
	static uint32_t x311 = 2218U;
	static uint64_t x312 = 3LLU;

	t77 = (x309<((x310&x311)%x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = INT32_MIN;
	uint64_t x314 = 26489798LLU;
	int16_t x315 = 0;
	uint32_t x316 = UINT32_MAX;
	int32_t t78 = 699470;

	t78 = (x313<((x314&x315)%x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int8_t x317 = 2;
	static int16_t x319 = 11;
	uint32_t x320 = 7U;
	volatile int32_t t79 = -9156634;

	t79 = (x317<((x318&x319)%x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x321 = INT64_MIN;
	uint64_t x323 = 22455823LLU;
	volatile int32_t t80 = -876;

	t80 = (x321<((x322&x323)%x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x325 = INT16_MAX;
	volatile int64_t x326 = INT64_MIN;
	volatile int64_t x327 = -892132094LL;
	static volatile int32_t x328 = 589864;

	t81 = (x325<((x326&x327)%x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static uint16_t x329 = 30640U;
	int16_t x330 = INT16_MIN;
	int64_t x331 = INT64_MAX;
	uint32_t x332 = 10389056U;
	int32_t t82 = -1;

	t82 = (x329<((x330&x331)%x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x333 = UINT16_MAX;
	int32_t x334 = INT32_MIN;
	int8_t x335 = INT8_MAX;
	int32_t x336 = INT32_MIN;
	int32_t t83 = -327;

	t83 = (x333<((x334&x335)%x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = UINT8_MAX;
	uint32_t x338 = UINT32_MAX;
	volatile int8_t x339 = INT8_MIN;
	int32_t t84 = 5133847;

	t84 = (x337<((x338&x339)%x340));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = -2019;
	uint8_t x342 = UINT8_MAX;
	uint32_t x343 = 27886U;
	int8_t x344 = -1;

	t85 = (x341<((x342&x343)%x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	volatile uint16_t x346 = 0U;
	uint32_t x347 = 153012U;
	uint64_t x348 = 1LLU;
	volatile int32_t t86 = -371;

	t86 = (x345<((x346&x347)%x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = INT64_MIN;
	int16_t x350 = INT16_MAX;
	volatile int64_t x351 = 30823791LL;
	static int32_t t87 = 112;

	t87 = (x349<((x350&x351)%x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	uint64_t x354 = 25782LLU;
	int32_t x355 = INT32_MIN;
	int64_t x356 = INT64_MIN;
	static volatile int32_t t88 = 119;

	t88 = (x353<((x354&x355)%x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MAX;
	int8_t x358 = INT8_MIN;
	int32_t t89 = -10;

	t89 = (x357<((x358&x359)%x360));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x361 = 7;
	uint32_t x362 = 55239262U;
	int16_t x363 = 0;
	int16_t x364 = 12;
	int32_t t90 = 38;

	t90 = (x361<((x362&x363)%x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = 0;
	volatile int8_t x367 = 1;
	int32_t x368 = INT32_MIN;
	volatile int32_t t91 = 128733;

	t91 = (x365<((x366&x367)%x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -38994459;
	uint32_t x370 = 7566715U;
	static uint16_t x371 = 297U;
	volatile int32_t t92 = 56;

	t92 = (x369<((x370&x371)%x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x373 = 221U;
	volatile uint32_t x374 = 2682U;
	volatile uint32_t x375 = 98U;
	int8_t x376 = INT8_MAX;
	volatile int32_t t93 = 10581;

	t93 = (x373<((x374&x375)%x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int8_t x378 = -12;
	uint64_t x379 = 234915590380545LLU;
	int16_t x380 = INT16_MIN;
	volatile int32_t t94 = 26;

	t94 = (x377<((x378&x379)%x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x382 = 15727U;
	int16_t x384 = INT16_MIN;

	t95 = (x381<((x382&x383)%x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x385 = 3U;
	volatile int64_t x386 = INT64_MIN;
	uint64_t x387 = 42770837849LLU;
	int64_t x388 = INT64_MIN;
	int32_t t96 = -553150;

	t96 = (x385<((x386&x387)%x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x390 = 298LLU;
	uint64_t x391 = UINT64_MAX;
	int8_t x392 = 22;
	int32_t t97 = 3704;

	t97 = (x389<((x390&x391)%x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int16_t x393 = -1;
	volatile int8_t x395 = INT8_MIN;
	int32_t x396 = INT32_MAX;
	int32_t t98 = -50195083;

	t98 = (x393<((x394&x395)%x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = UINT16_MAX;
	volatile int8_t x398 = INT8_MIN;
	volatile int32_t x399 = INT32_MIN;
	int8_t x400 = INT8_MAX;

	t99 = (x397<((x398&x399)%x400));

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

