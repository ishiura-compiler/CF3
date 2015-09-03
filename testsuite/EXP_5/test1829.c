#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t1 = -3;
int16_t x9 = INT16_MIN;
int16_t x12 = -1;
static int16_t x23 = -1;
volatile int64_t x33 = INT64_MIN;
uint8_t x35 = 39U;
int64_t x37 = INT64_MIN;
volatile int16_t x41 = INT16_MIN;
int32_t x46 = 1393;
int8_t x47 = -1;
volatile uint64_t x58 = 16334855LLU;
static int32_t x59 = 122053482;
int64_t x60 = -1LL;
int8_t x61 = 0;
static volatile int16_t x64 = -1;
uint64_t x65 = 338LLU;
int16_t x76 = -671;
int16_t x78 = INT16_MAX;
volatile int64_t x83 = 1956634845LL;
static volatile int32_t x84 = INT32_MIN;
volatile int32_t x88 = INT32_MIN;
uint32_t x92 = 64844U;
static int32_t t22 = -571769780;
volatile int32_t t24 = 246670013;
volatile int32_t t26 = -514;
int32_t t27 = -997668274;
int64_t x116 = INT64_MIN;
static int64_t x117 = INT64_MIN;
uint16_t x118 = 13U;
uint16_t x123 = UINT16_MAX;
static volatile int64_t x125 = INT64_MIN;
int16_t x127 = INT16_MAX;
volatile uint8_t x128 = 6U;
volatile int8_t x131 = -1;
volatile int32_t t33 = 4116145;
volatile uint16_t x140 = UINT16_MAX;
int32_t t34 = -51013046;
int16_t x144 = -1;
int32_t x150 = INT32_MIN;
int64_t x160 = -327430704817602LL;
volatile uint16_t x164 = 57U;
static int32_t t40 = -112705;
int64_t x169 = INT64_MIN;
static uint64_t x172 = UINT64_MAX;
int32_t x176 = INT32_MIN;
uint64_t x198 = 127546449323286LLU;
volatile int64_t x199 = INT64_MIN;
volatile int32_t x203 = -9156901;
static int8_t x206 = 14;
static uint64_t x211 = UINT64_MAX;
int32_t t52 = -1;
int64_t x218 = -237781956160943LL;
int32_t x219 = -1;
uint64_t x220 = UINT64_MAX;
volatile int8_t x224 = INT8_MAX;
int32_t x228 = INT32_MIN;
int8_t x231 = INT8_MIN;
static int32_t x232 = -3569;
static uint16_t x235 = 53U;
volatile uint64_t x246 = 1215494905LLU;
int32_t t61 = 33;
volatile int32_t x249 = INT32_MAX;
int64_t x260 = INT64_MIN;
volatile int32_t t65 = -1181794;
static int8_t x274 = 1;
static int32_t t68 = 313901;
uint8_t x277 = UINT8_MAX;
static int8_t x279 = INT8_MIN;
volatile int16_t x283 = INT16_MAX;
static uint32_t x291 = 2622165U;
int64_t x307 = 2185LL;
uint64_t x325 = 9LLU;
int32_t t82 = 124820674;
volatile uint32_t x334 = 188823U;
uint8_t x335 = 5U;
static int32_t t83 = -27;
int16_t x338 = -1;
uint16_t x341 = 0U;
int32_t x344 = -4051921;
int32_t t86 = 164;
uint64_t x350 = UINT64_MAX;
volatile uint8_t x351 = 57U;
static int64_t x355 = INT64_MIN;
volatile int32_t t88 = 301427363;
volatile int64_t x371 = 10LL;
int32_t t93 = 57;
int8_t x377 = -1;
int32_t x378 = -1113961;
static int8_t x382 = INT8_MAX;
volatile int64_t x384 = 10593470357LL;
uint8_t x386 = 6U;
int64_t x389 = INT64_MIN;
static volatile int32_t t99 = 8461;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x2 = 23;
	int32_t x3 = INT32_MIN;
	int16_t x4 = INT16_MIN;
	int32_t t0 = 306;

	t0 = (x1<((x2&x3)&x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = -39687690025987570LL;
	uint64_t x6 = 310577985211590530LLU;
	static uint16_t x7 = UINT16_MAX;
	static int32_t x8 = INT32_MIN;

	t1 = (x5<((x6&x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x10 = UINT32_MAX;
	int16_t x11 = INT16_MIN;
	int32_t t2 = -268197500;

	t2 = (x9<((x10&x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 494;
	static volatile uint64_t x14 = 6108993908LLU;
	int64_t x15 = INT64_MIN;
	int64_t x16 = INT64_MIN;
	volatile int32_t t3 = 1;

	t3 = (x13<((x14&x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	int8_t x18 = -31;
	int8_t x19 = -2;
	int32_t x20 = INT32_MIN;
	int32_t t4 = -499;

	t4 = (x17<((x18&x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	int16_t x22 = -115;
	int32_t x24 = -1;
	volatile int32_t t5 = -290;

	t5 = (x21<((x22&x23)&x24));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	uint64_t x26 = UINT64_MAX;
	uint8_t x27 = 58U;
	uint64_t x28 = UINT64_MAX;
	volatile int32_t t6 = -3;

	t6 = (x25<((x26&x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 48U;
	int32_t x30 = INT32_MIN;
	int8_t x31 = -1;
	uint32_t x32 = 1922U;
	volatile int32_t t7 = 12;

	t7 = (x29<((x30&x31)&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x34 = UINT16_MAX;
	int16_t x36 = INT16_MAX;
	int32_t t8 = -1;

	t8 = (x33<((x34&x35)&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int16_t x38 = -23;
	int64_t x39 = 156701LL;
	volatile int32_t x40 = 254;
	volatile int32_t t9 = -939575;

	t9 = (x37<((x38&x39)&x40));

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MAX;
	int16_t x43 = INT16_MIN;
	uint16_t x44 = 0U;
	volatile int32_t t10 = -1110;

	t10 = (x41<((x42&x43)&x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int16_t x48 = INT16_MAX;
	volatile int32_t t11 = 65569;

	t11 = (x45<((x46&x47)&x48));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x49 = UINT8_MAX;
	int64_t x50 = -67715149560362LL;
	int32_t x51 = INT32_MAX;
	int8_t x52 = -1;
	int32_t t12 = -133977;

	t12 = (x49<((x50&x51)&x52));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	volatile int32_t x54 = -1;
	int64_t x55 = -1LL;
	uint64_t x56 = 831045LLU;
	static int32_t t13 = -1;

	t13 = (x53<((x54&x55)&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 49U;
	int32_t t14 = 4025676;

	t14 = (x57<((x58&x59)&x60));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x62 = 7U;
	uint16_t x63 = UINT16_MAX;
	static volatile int32_t t15 = -12025;

	t15 = (x61<((x62&x63)&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x66 = 772520964030569LLU;
	int8_t x67 = INT8_MIN;
	int8_t x68 = INT8_MIN;
	int32_t t16 = -47711;

	t16 = (x65<((x66&x67)&x68));

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x69 = UINT16_MAX;
	int32_t x70 = INT32_MAX;
	int32_t x71 = -103291;
	static int16_t x72 = INT16_MAX;
	int32_t t17 = -1006;

	t17 = (x69<((x70&x71)&x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -53305646;
	uint32_t x74 = 2356609U;
	int32_t x75 = INT32_MAX;
	volatile int32_t t18 = -452392;

	t18 = (x73<((x74&x75)&x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	volatile int8_t x79 = INT8_MIN;
	uint32_t x80 = UINT32_MAX;
	int32_t t19 = 20176;

	t19 = (x77<((x78&x79)&x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 26263LLU;
	uint64_t x82 = UINT64_MAX;
	int32_t t20 = -886;

	t20 = (x81<((x82&x83)&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x85 = INT8_MAX;
	int32_t x86 = INT32_MAX;
	int8_t x87 = -1;
	volatile int32_t t21 = -1639;

	t21 = (x85<((x86&x87)&x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x89 = 24237U;
	volatile int16_t x90 = INT16_MIN;
	int64_t x91 = INT64_MIN;

	t22 = (x89<((x90&x91)&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -1;
	static volatile uint8_t x94 = 26U;
	int32_t x95 = 9469;
	uint8_t x96 = 115U;
	volatile int32_t t23 = -19;

	t23 = (x93<((x94&x95)&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = INT16_MAX;
	static uint32_t x98 = UINT32_MAX;
	static uint8_t x99 = UINT8_MAX;
	int64_t x100 = -1428251738049152LL;

	t24 = (x97<((x98&x99)&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x101 = UINT16_MAX;
	int64_t x102 = -179498068LL;
	static int32_t x103 = -1;
	static volatile uint32_t x104 = UINT32_MAX;
	static volatile int32_t t25 = 2794264;

	t25 = (x101<((x102&x103)&x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = 4U;
	int64_t x106 = -576408717754486LL;
	int16_t x107 = INT16_MAX;
	int8_t x108 = 5;

	t26 = (x105<((x106&x107)&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint32_t x109 = UINT32_MAX;
	static int16_t x110 = 1812;
	int32_t x111 = 92041852;
	int16_t x112 = -3;

	t27 = (x109<((x110&x111)&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x113 = UINT32_MAX;
	volatile int8_t x114 = INT8_MIN;
	volatile int32_t x115 = INT32_MIN;
	int32_t t28 = 613343;

	t28 = (x113<((x114&x115)&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x119 = INT16_MIN;
	int64_t x120 = INT64_MIN;
	int32_t t29 = 1558;

	t29 = (x117<((x118&x119)&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MAX;
	int64_t x122 = INT64_MIN;
	int32_t x124 = -1;
	int32_t t30 = -2443924;

	t30 = (x121<((x122&x123)&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x126 = 1U;
	static volatile int32_t t31 = 6;

	t31 = (x125<((x126&x127)&x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x129 = 2596933642115890LLU;
	static uint32_t x130 = 1303664012U;
	int8_t x132 = -1;
	volatile int32_t t32 = 0;

	t32 = (x129<((x130&x131)&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 10294;
	int16_t x134 = INT16_MIN;
	int64_t x135 = INT64_MIN;
	int16_t x136 = INT16_MAX;

	t33 = (x133<((x134&x135)&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	int32_t x138 = INT32_MIN;
	int16_t x139 = -1;

	t34 = (x137<((x138&x139)&x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 7U;
	static volatile int16_t x142 = INT16_MAX;
	static int16_t x143 = -1;
	int32_t t35 = 213;

	t35 = (x141<((x142&x143)&x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -458;
	static int32_t x146 = 10;
	static int16_t x147 = INT16_MIN;
	uint64_t x148 = 80580932992284LLU;
	int32_t t36 = -100;

	t36 = (x145<((x146&x147)&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	uint64_t x151 = UINT64_MAX;
	volatile int64_t x152 = INT64_MIN;
	int32_t t37 = -50378937;

	t37 = (x149<((x150&x151)&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = UINT8_MAX;
	int8_t x154 = INT8_MIN;
	static int16_t x155 = -1;
	int16_t x156 = INT16_MIN;
	volatile int32_t t38 = 343;

	t38 = (x153<((x154&x155)&x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x157 = -1;
	static int64_t x158 = INT64_MIN;
	int32_t x159 = INT32_MIN;
	int32_t t39 = 25;

	t39 = (x157<((x158&x159)&x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = 14;
	static int32_t x162 = INT32_MIN;
	volatile uint32_t x163 = UINT32_MAX;

	t40 = (x161<((x162&x163)&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint32_t x165 = 340U;
	int32_t x166 = 3429713;
	int64_t x167 = 11657LL;
	uint16_t x168 = 11010U;
	static volatile int32_t t41 = -1;

	t41 = (x165<((x166&x167)&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x170 = 13183505LL;
	static uint32_t x171 = 1361U;
	static int32_t t42 = -954;

	t42 = (x169<((x170&x171)&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	int8_t x174 = -14;
	int16_t x175 = 6;
	volatile int32_t t43 = -3942324;

	t43 = (x173<((x174&x175)&x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint8_t x177 = UINT8_MAX;
	volatile int32_t x178 = INT32_MIN;
	int64_t x179 = -1LL;
	int16_t x180 = 1;
	int32_t t44 = 2;

	t44 = (x177<((x178&x179)&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	int64_t x182 = -9633LL;
	uint64_t x183 = UINT64_MAX;
	static int8_t x184 = INT8_MAX;
	int32_t t45 = 1530110;

	t45 = (x181<((x182&x183)&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x185 = 17U;
	int16_t x186 = -1;
	volatile uint8_t x187 = UINT8_MAX;
	int32_t x188 = INT32_MIN;
	volatile int32_t t46 = -858510706;

	t46 = (x185<((x186&x187)&x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MAX;
	static int64_t x191 = INT64_MIN;
	uint64_t x192 = 317204LLU;
	volatile int32_t t47 = 912454164;

	t47 = (x189<((x190&x191)&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x193 = INT8_MIN;
	volatile int16_t x194 = INT16_MIN;
	static volatile uint8_t x195 = 76U;
	int32_t x196 = INT32_MIN;
	volatile int32_t t48 = -88;

	t48 = (x193<((x194&x195)&x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = -29724812;
	int32_t x200 = -1;
	int32_t t49 = -2;

	t49 = (x197<((x198&x199)&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x201 = 67LL;
	int64_t x202 = 12199LL;
	static int8_t x204 = 15;
	static volatile int32_t t50 = -125120587;

	t50 = (x201<((x202&x203)&x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	static uint32_t x207 = UINT32_MAX;
	uint64_t x208 = 377432966LLU;
	volatile int32_t t51 = -112;

	t51 = (x205<((x206&x207)&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	volatile int8_t x210 = 0;
	static uint64_t x212 = UINT64_MAX;

	t52 = (x209<((x210&x211)&x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MAX;
	uint8_t x214 = 0U;
	uint32_t x215 = UINT32_MAX;
	static int32_t x216 = -14643397;
	int32_t t53 = 391221123;

	t53 = (x213<((x214&x215)&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x217 = INT64_MIN;
	static volatile int32_t t54 = -1;

	t54 = (x217<((x218&x219)&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x221 = 104U;
	uint16_t x222 = UINT16_MAX;
	volatile uint32_t x223 = 242021U;
	volatile int32_t t55 = -8874060;

	t55 = (x221<((x222&x223)&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MAX;
	static uint32_t x226 = UINT32_MAX;
	uint16_t x227 = 42U;
	volatile int32_t t56 = 584526;

	t56 = (x225<((x226&x227)&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x229 = INT32_MAX;
	int8_t x230 = -2;
	volatile int32_t t57 = 363904;

	t57 = (x229<((x230&x231)&x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 0;
	volatile uint32_t x234 = 16612633U;
	volatile int8_t x236 = 14;
	static int32_t t58 = 15300581;

	t58 = (x233<((x234&x235)&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = UINT8_MAX;
	int64_t x238 = INT64_MAX;
	int32_t x239 = INT32_MIN;
	static int64_t x240 = INT64_MAX;
	static int32_t t59 = 1;

	t59 = (x237<((x238&x239)&x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x241 = 1U;
	uint16_t x242 = UINT16_MAX;
	int8_t x243 = -2;
	static int8_t x244 = INT8_MAX;
	static int32_t t60 = -4;

	t60 = (x241<((x242&x243)&x244));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	uint32_t x247 = UINT32_MAX;
	static volatile int32_t x248 = INT32_MIN;

	t61 = (x245<((x246&x247)&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = INT32_MAX;
	volatile int16_t x251 = -2;
	static int8_t x252 = INT8_MIN;
	int32_t t62 = -147673;

	t62 = (x249<((x250&x251)&x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 25U;
	static volatile int16_t x254 = INT16_MAX;
	uint16_t x255 = 38U;
	int32_t x256 = INT32_MAX;
	static volatile int32_t t63 = -995;

	t63 = (x253<((x254&x255)&x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = 43U;
	uint32_t x258 = UINT32_MAX;
	volatile int32_t x259 = INT32_MIN;
	static volatile int32_t t64 = 545;

	t64 = (x257<((x258&x259)&x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	uint8_t x262 = UINT8_MAX;
	uint32_t x263 = 62U;
	volatile uint8_t x264 = 2U;

	t65 = (x261<((x262&x263)&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = UINT16_MAX;
	volatile uint8_t x266 = 6U;
	static volatile uint16_t x267 = UINT16_MAX;
	uint64_t x268 = UINT64_MAX;
	int32_t t66 = 75793015;

	t66 = (x265<((x266&x267)&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int32_t x269 = -1457389;
	volatile uint64_t x270 = 26313LLU;
	uint16_t x271 = UINT16_MAX;
	volatile int32_t x272 = INT32_MIN;
	int32_t t67 = 0;

	t67 = (x269<((x270&x271)&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MAX;
	int8_t x275 = -3;
	static int8_t x276 = INT8_MIN;

	t68 = (x273<((x274&x275)&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x278 = 441729U;
	volatile int16_t x280 = INT16_MIN;
	int32_t t69 = 1;

	t69 = (x277<((x278&x279)&x280));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	int64_t x282 = INT64_MIN;
	int16_t x284 = -1;
	static volatile int32_t t70 = -41;

	t70 = (x281<((x282&x283)&x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 764368140U;
	static uint64_t x286 = UINT64_MAX;
	int16_t x287 = 1;
	int16_t x288 = -201;
	int32_t t71 = 0;

	t71 = (x285<((x286&x287)&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -1;
	uint8_t x290 = 5U;
	static int32_t x292 = INT32_MIN;
	volatile int32_t t72 = -62004332;

	t72 = (x289<((x290&x291)&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -27469672;
	volatile uint8_t x294 = 1U;
	uint32_t x295 = 211138U;
	uint32_t x296 = 46921U;
	static int32_t t73 = 238288;

	t73 = (x293<((x294&x295)&x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int32_t x297 = INT32_MIN;
	volatile int32_t x298 = INT32_MIN;
	static int16_t x299 = 450;
	static int64_t x300 = -1803449LL;
	volatile int32_t t74 = -480;

	t74 = (x297<((x298&x299)&x300));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = UINT16_MAX;
	static int64_t x302 = INT64_MIN;
	static volatile uint8_t x303 = 7U;
	uint64_t x304 = 965401132LLU;
	volatile int32_t t75 = -57585321;

	t75 = (x301<((x302&x303)&x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x305 = 65159LLU;
	static uint64_t x306 = 28481890629284LLU;
	int32_t x308 = INT32_MIN;
	static int32_t t76 = -1086;

	t76 = (x305<((x306&x307)&x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x309 = 0;
	static uint64_t x310 = 365039856839094LLU;
	uint32_t x311 = UINT32_MAX;
	uint32_t x312 = 1552U;
	volatile int32_t t77 = 8007;

	t77 = (x309<((x310&x311)&x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = -5;
	static volatile int32_t x314 = INT32_MIN;
	int16_t x315 = INT16_MAX;
	int16_t x316 = -8;
	static int32_t t78 = 1;

	t78 = (x313<((x314&x315)&x316));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x317 = INT64_MIN;
	volatile int8_t x318 = INT8_MIN;
	int64_t x319 = -10LL;
	uint32_t x320 = UINT32_MAX;
	int32_t t79 = 20;

	t79 = (x317<((x318&x319)&x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 7654U;
	int64_t x322 = INT64_MIN;
	int32_t x323 = 3;
	uint64_t x324 = UINT64_MAX;
	volatile int32_t t80 = -45970000;

	t80 = (x321<((x322&x323)&x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x326 = 7;
	int32_t x327 = INT32_MIN;
	static volatile uint16_t x328 = 6U;
	int32_t t81 = 1204;

	t81 = (x325<((x326&x327)&x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int8_t x330 = INT8_MIN;
	uint8_t x331 = 3U;
	static uint16_t x332 = 137U;

	t82 = (x329<((x330&x331)&x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = 7958;
	int32_t x336 = 438515247;

	t83 = (x333<((x334&x335)&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = UINT32_MAX;
	volatile int16_t x339 = -1;
	static int16_t x340 = -2684;
	int32_t t84 = 98207744;

	t84 = (x337<((x338&x339)&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = -820684323846LL;
	int16_t x343 = -1;
	int32_t t85 = -144;

	t85 = (x341<((x342&x343)&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static uint32_t x345 = UINT32_MAX;
	static uint8_t x346 = UINT8_MAX;
	int32_t x347 = -1;
	static int8_t x348 = -2;

	t86 = (x345<((x346&x347)&x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 2U;
	int64_t x352 = -1LL;
	volatile int32_t t87 = 16030043;

	t87 = (x349<((x350&x351)&x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x353 = INT16_MAX;
	int32_t x354 = INT32_MIN;
	int8_t x356 = -4;

	t88 = (x353<((x354&x355)&x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x357 = 972761562U;
	int32_t x358 = -1028044397;
	int64_t x359 = INT64_MAX;
	static uint8_t x360 = 87U;
	static int32_t t89 = -5054662;

	t89 = (x357<((x358&x359)&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = -1;
	uint32_t x362 = 490U;
	int32_t x363 = INT32_MIN;
	uint8_t x364 = 3U;
	volatile int32_t t90 = 448521;

	t90 = (x361<((x362&x363)&x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x365 = 50322;
	int32_t x366 = INT32_MIN;
	uint32_t x367 = 2427U;
	static int8_t x368 = INT8_MIN;
	volatile int32_t t91 = 5940;

	t91 = (x365<((x366&x367)&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = -31545LL;
	int32_t x370 = INT32_MIN;
	volatile uint8_t x372 = 27U;
	volatile int32_t t92 = -1832;

	t92 = (x369<((x370&x371)&x372));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MAX;
	int16_t x374 = -1;
	static int32_t x375 = -1;
	volatile int8_t x376 = 33;

	t93 = (x373<((x374&x375)&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x379 = 11517790230851LLU;
	volatile int16_t x380 = INT16_MIN;
	int32_t t94 = -828686;

	t94 = (x377<((x378&x379)&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = -1;
	volatile int8_t x383 = -1;
	int32_t t95 = -562521;

	t95 = (x381<((x382&x383)&x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x385 = -1;
	static uint32_t x387 = UINT32_MAX;
	int8_t x388 = INT8_MIN;
	int32_t t96 = -6;

	t96 = (x385<((x386&x387)&x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = 37;
	volatile int64_t x391 = INT64_MAX;
	uint64_t x392 = UINT64_MAX;
	int32_t t97 = 0;

	t97 = (x389<((x390&x391)&x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 295LLU;
	int64_t x394 = 54LL;
	uint8_t x395 = UINT8_MAX;
	static uint32_t x396 = UINT32_MAX;
	static int32_t t98 = 65305399;

	t98 = (x393<((x394&x395)&x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	uint16_t x398 = 3968U;
	int64_t x399 = -17375261461956520LL;
	volatile uint64_t x400 = 46078816376307577LLU;

	t99 = (x397<((x398&x399)&x400));

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

