#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x4 = INT8_MIN;
static volatile int64_t t1 = -7125304LL;
volatile int8_t x17 = 23;
uint64_t t4 = 30165991910248604LLU;
int16_t x22 = -6;
int64_t x27 = INT64_MIN;
int64_t x28 = 1251LL;
int64_t x35 = INT64_MAX;
int8_t x37 = -1;
volatile int64_t t10 = 1643248473LL;
int16_t x47 = 16059;
volatile uint64_t t12 = 1060405929448584LLU;
int64_t t13 = INT64_MIN;
uint32_t x57 = UINT32_MAX;
volatile int32_t t14 = -240827;
uint16_t x62 = 63U;
volatile int32_t t15 = -66;
int32_t x66 = INT32_MIN;
volatile int64_t x70 = INT64_MIN;
uint8_t x72 = UINT8_MAX;
static uint8_t x85 = 6U;
static int16_t x97 = INT16_MIN;
volatile int64_t x104 = -1LL;
volatile uint64_t t25 = 326LLU;
int64_t x108 = INT64_MAX;
int16_t x109 = INT16_MIN;
static int8_t x110 = INT8_MIN;
static int64_t x127 = INT64_MIN;
int64_t t31 = INT64_MIN;
volatile uint32_t t32 = 249U;
int32_t x148 = 425542572;
static uint64_t x149 = 8794463815866958123LLU;
uint8_t x152 = 27U;
static uint64_t x155 = 225083727LLU;
volatile int8_t x156 = INT8_MIN;
uint8_t x159 = UINT8_MAX;
uint16_t x160 = 1901U;
uint32_t x165 = 5U;
static uint32_t x167 = UINT32_MAX;
volatile int64_t x172 = INT64_MIN;
uint32_t x175 = 137733573U;
volatile uint32_t t43 = 247U;
int64_t x179 = INT64_MIN;
static int8_t x184 = -60;
int16_t x187 = -1;
uint16_t x189 = UINT16_MAX;
int32_t x192 = 10;
volatile int32_t t47 = 260126;
int64_t x195 = INT64_MAX;
uint16_t x202 = 7759U;
int8_t x204 = INT8_MIN;
volatile int32_t t52 = INT32_MIN;
static int32_t x215 = INT32_MIN;
int32_t t54 = INT32_MIN;
static volatile int32_t t57 = -1;
int16_t x253 = -1;
volatile int32_t t64 = 37213266;
volatile int8_t x264 = -5;
uint32_t x268 = UINT32_MAX;
static uint32_t x269 = 3853825U;
volatile int16_t x272 = -362;
uint64_t x275 = 237367985LLU;
int32_t x279 = -1;
int32_t x285 = INT32_MIN;
static volatile uint64_t t73 = 33249LLU;
static volatile int32_t t75 = -8369400;
static int16_t x317 = INT16_MIN;
uint16_t x322 = 13U;
int16_t x325 = 2;
uint8_t x329 = 3U;
uint64_t t82 = 23LLU;
int16_t x333 = INT16_MAX;
int64_t x344 = INT64_MIN;
static int64_t x348 = INT64_MIN;
static volatile int64_t t86 = 11324729040481LL;
static int64_t t87 = -23585LL;
static uint64_t x355 = 7108803LLU;
int64_t x357 = 7081715622521LL;
uint64_t x359 = 123051770LLU;
uint64_t t89 = 126711LLU;
uint16_t x368 = UINT16_MAX;
uint64_t x370 = UINT64_MAX;
volatile uint64_t t93 = 888159457623LLU;
static int64_t x378 = -60409LL;
int32_t x392 = 7;
int8_t x393 = INT8_MIN;
uint8_t x394 = 30U;
uint16_t x398 = 355U;


void f0(void) {
	int8_t x1 = 10;
	static uint16_t x2 = UINT16_MAX;
	static uint16_t x3 = 41U;
	int32_t t0 = -3;

	t0 = (((x1<x2)|x3)&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = -1;
	static int64_t x6 = INT64_MIN;
	volatile int16_t x7 = 1011;
	int64_t x8 = 2237683254615LL;

	t1 = (((x5<x6)|x7)&x8);

	if (t1 != 339LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 6314;
	int64_t x10 = -1LL;
	uint32_t x11 = UINT32_MAX;
	static int8_t x12 = INT8_MIN;
	uint32_t t2 = 168373U;

	t2 = (((x9<x10)|x11)&x12);

	if (t2 != 4294967168U) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -1LL;
	uint32_t x14 = 296646U;
	int32_t x15 = INT32_MIN;
	static int8_t x16 = INT8_MAX;
	volatile int32_t t3 = 1268806;

	t3 = (((x13<x14)|x15)&x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int8_t x18 = -31;
	uint64_t x19 = 36LLU;
	uint64_t x20 = 79LLU;

	t4 = (((x17<x18)|x19)&x20);

	if (t4 != 4LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	static int16_t x23 = INT16_MIN;
	int8_t x24 = -5;
	int32_t t5 = 440;

	t5 = (((x21<x22)|x23)&x24);

	if (t5 != -32767) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = INT8_MIN;
	int16_t x26 = INT16_MAX;
	int64_t t6 = -380LL;

	t6 = (((x25<x26)|x27)&x28);

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -2400LL;
	int8_t x30 = INT8_MIN;
	volatile uint64_t x31 = 3139LLU;
	uint8_t x32 = 21U;
	uint64_t t7 = 18LLU;

	t7 = (((x29<x30)|x31)&x32);

	if (t7 != 1LLU) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 27U;
	int8_t x34 = INT8_MAX;
	int64_t x36 = INT64_MIN;
	int64_t t8 = 49279392LL;

	t8 = (((x33<x34)|x35)&x36);

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x38 = INT16_MAX;
	int16_t x39 = INT16_MAX;
	static uint64_t x40 = UINT64_MAX;
	uint64_t t9 = 2087543LLU;

	t9 = (((x37<x38)|x39)&x40);

	if (t9 != 32767LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -16;
	int16_t x42 = INT16_MIN;
	uint8_t x43 = UINT8_MAX;
	int64_t x44 = -7661LL;

	t10 = (((x41<x42)|x43)&x44);

	if (t10 != 19LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = -2264476660241LL;
	uint32_t x46 = UINT32_MAX;
	int8_t x48 = INT8_MAX;
	static volatile int32_t t11 = 208594260;

	t11 = (((x45<x46)|x47)&x48);

	if (t11 != 59) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x49 = 588947LLU;
	int64_t x50 = INT64_MIN;
	uint64_t x51 = 404403868254383328LLU;
	volatile int32_t x52 = INT32_MIN;

	t12 = (((x49<x50)|x51)&x52);

	if (t12 != 404403866356940800LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int64_t x53 = INT64_MIN;
	static uint64_t x54 = 1126339048067308LLU;
	static int64_t x55 = -1LL;
	int64_t x56 = INT64_MIN;

	t13 = (((x53<x54)|x55)&x56);

	if (t13 != INT64_MIN) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = INT8_MAX;
	volatile uint8_t x59 = 94U;
	static uint16_t x60 = UINT16_MAX;

	t14 = (((x57<x58)|x59)&x60);

	if (t14 != 94) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	uint8_t x63 = 1U;
	int8_t x64 = -1;

	t15 = (((x61<x62)|x63)&x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int32_t x65 = -1;
	int16_t x67 = INT16_MIN;
	static uint32_t x68 = 373423U;
	uint32_t t16 = 5661U;

	t16 = (((x65<x66)|x67)&x68);

	if (t16 != 360448U) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x69 = INT16_MIN;
	int64_t x71 = 12095796161565044LL;
	int64_t t17 = 2200217093898511278LL;

	t17 = (((x69<x70)|x71)&x72);

	if (t17 != 116LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = -1LL;
	int16_t x74 = -506;
	uint16_t x75 = 2470U;
	int8_t x76 = INT8_MIN;
	int32_t t18 = -38;

	t18 = (((x73<x74)|x75)&x76);

	if (t18 != 2432) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MIN;
	int8_t x78 = -1;
	static uint64_t x79 = 129700068617LLU;
	int16_t x80 = INT16_MIN;
	static volatile uint64_t t19 = 2062734347904479535LLU;

	t19 = (((x77<x78)|x79)&x80);

	if (t19 != 129700036608LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x81 = -44;
	volatile uint64_t x82 = 1890317855071305519LLU;
	uint32_t x83 = UINT32_MAX;
	int16_t x84 = INT16_MAX;
	volatile uint32_t t20 = 75U;

	t20 = (((x81<x82)|x83)&x84);

	if (t20 != 32767U) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x86 = INT64_MIN;
	int16_t x87 = 852;
	static int32_t x88 = INT32_MAX;
	int32_t t21 = -14;

	t21 = (((x85<x86)|x87)&x88);

	if (t21 != 852) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -1;
	int32_t x90 = 72;
	volatile int32_t x91 = INT32_MAX;
	int64_t x92 = -1LL;
	int64_t t22 = -15678142858638845LL;

	t22 = (((x89<x90)|x91)&x92);

	if (t22 != 2147483647LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 2019982231595LL;
	int64_t x94 = 93453217500373LL;
	static volatile int16_t x95 = INT16_MAX;
	int64_t x96 = 60LL;
	int64_t t23 = 3990833002003085LL;

	t23 = (((x93<x94)|x95)&x96);

	if (t23 != 60LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = -249456;
	static int32_t x99 = INT32_MAX;
	static uint64_t x100 = UINT64_MAX;
	uint64_t t24 = 65000LLU;

	t24 = (((x97<x98)|x99)&x100);

	if (t24 != 2147483647LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = INT32_MAX;
	int16_t x102 = INT16_MAX;
	uint64_t x103 = 737159781LLU;

	t25 = (((x101<x102)|x103)&x104);

	if (t25 != 737159781LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = 124;
	static int8_t x106 = INT8_MIN;
	int16_t x107 = INT16_MIN;
	static int64_t t26 = 97137002834LL;

	t26 = (((x105<x106)|x107)&x108);

	if (t26 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int32_t x111 = INT32_MIN;
	int64_t x112 = INT64_MAX;
	static volatile int64_t t27 = -97416341360165023LL;

	t27 = (((x109<x110)|x111)&x112);

	if (t27 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 8U;
	int16_t x114 = INT16_MIN;
	int16_t x115 = -1;
	uint32_t x116 = 2273311U;
	volatile uint32_t t28 = 298838U;

	t28 = (((x113<x114)|x115)&x116);

	if (t28 != 2273311U) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MIN;
	uint64_t x118 = 68LLU;
	static uint64_t x119 = UINT64_MAX;
	int16_t x120 = -1;
	static uint64_t t29 = UINT64_MAX;

	t29 = (((x117<x118)|x119)&x120);

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x121 = 102669826135708LLU;
	int16_t x122 = INT16_MAX;
	uint16_t x123 = UINT16_MAX;
	static uint16_t x124 = UINT16_MAX;
	int32_t t30 = 544973;

	t30 = (((x121<x122)|x123)&x124);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = INT16_MIN;
	int16_t x126 = INT16_MIN;
	int8_t x128 = -36;

	t31 = (((x125<x126)|x127)&x128);

	if (t31 != INT64_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = -1;
	volatile int32_t x130 = 34475;
	uint32_t x131 = 30226803U;
	uint16_t x132 = 2U;

	t32 = (((x129<x130)|x131)&x132);

	if (t32 != 2U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint32_t x133 = 513790U;
	static volatile int32_t x134 = INT32_MAX;
	static int16_t x135 = 30;
	static volatile int8_t x136 = 1;
	int32_t t33 = 210828;

	t33 = (((x133<x134)|x135)&x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = 7U;
	int16_t x138 = -1;
	uint16_t x139 = UINT16_MAX;
	static int64_t x140 = INT64_MIN;
	int64_t t34 = -1LL;

	t34 = (((x137<x138)|x139)&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = UINT64_MAX;
	static int32_t x142 = INT32_MIN;
	uint64_t x143 = UINT64_MAX;
	int32_t x144 = INT32_MAX;
	volatile uint64_t t35 = 883808049722471616LLU;

	t35 = (((x141<x142)|x143)&x144);

	if (t35 != 2147483647LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 5464649LLU;
	volatile uint16_t x146 = UINT16_MAX;
	int32_t x147 = INT32_MIN;
	volatile int32_t t36 = 187774;

	t36 = (((x145<x146)|x147)&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x150 = INT8_MIN;
	volatile uint32_t x151 = 267594791U;
	static uint32_t t37 = 15U;

	t37 = (((x149<x150)|x151)&x152);

	if (t37 != 3U) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = UINT32_MAX;
	int16_t x154 = INT16_MIN;
	static volatile uint64_t t38 = 469105LLU;

	t38 = (((x153<x154)|x155)&x156);

	if (t38 != 225083648LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x157 = INT32_MAX;
	int64_t x158 = INT64_MIN;
	int32_t t39 = -250776;

	t39 = (((x157<x158)|x159)&x160);

	if (t39 != 109) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -6415888311LL;
	uint32_t x162 = UINT32_MAX;
	uint8_t x163 = UINT8_MAX;
	uint32_t x164 = UINT32_MAX;
	volatile uint32_t t40 = 798661353U;

	t40 = (((x161<x162)|x163)&x164);

	if (t40 != 255U) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x166 = INT8_MIN;
	int64_t x168 = -1LL;
	volatile int64_t t41 = -6700LL;

	t41 = (((x165<x166)|x167)&x168);

	if (t41 != 4294967295LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint8_t x169 = 58U;
	int64_t x170 = INT64_MAX;
	static int16_t x171 = INT16_MIN;
	int64_t t42 = INT64_MIN;

	t42 = (((x169<x170)|x171)&x172);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	int16_t x174 = INT16_MAX;
	int32_t x176 = 34;

	t43 = (((x173<x174)|x175)&x176);

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = UINT64_MAX;
	uint8_t x178 = 0U;
	int16_t x180 = INT16_MAX;
	int64_t t44 = -1495991418669559129LL;

	t44 = (((x177<x178)|x179)&x180);

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int8_t x181 = INT8_MAX;
	int8_t x182 = INT8_MIN;
	int8_t x183 = -4;
	int32_t t45 = -2;

	t45 = (((x181<x182)|x183)&x184);

	if (t45 != -60) { NG(); } else { ; }
	
}

void f46(void) {
	static int32_t x185 = 1;
	int16_t x186 = INT16_MIN;
	static volatile int8_t x188 = -1;
	volatile int32_t t46 = 101051;

	t46 = (((x185<x186)|x187)&x188);

	if (t46 != -1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x190 = -25;
	uint16_t x191 = 12U;

	t47 = (((x189<x190)|x191)&x192);

	if (t47 != 8) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = 1U;
	int8_t x194 = INT8_MIN;
	int16_t x196 = -1;
	int64_t t48 = INT64_MAX;

	t48 = (((x193<x194)|x195)&x196);

	if (t48 != INT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	uint64_t x198 = UINT64_MAX;
	int8_t x199 = -1;
	int32_t x200 = -1;
	static volatile int32_t t49 = -1636;

	t49 = (((x197<x198)|x199)&x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint32_t x201 = 213430U;
	int8_t x203 = INT8_MIN;
	int32_t t50 = -65759450;

	t50 = (((x201<x202)|x203)&x204);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = INT32_MIN;
	static int64_t x206 = INT64_MIN;
	int64_t x207 = -4029LL;
	volatile int16_t x208 = INT16_MAX;
	volatile int64_t t51 = 4305644137212LL;

	t51 = (((x205<x206)|x207)&x208);

	if (t51 != 28739LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MAX;
	volatile int32_t x210 = -1;
	volatile int32_t x211 = INT32_MIN;
	int8_t x212 = INT8_MIN;

	t52 = (((x209<x210)|x211)&x212);

	if (t52 != INT32_MIN) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x213 = 56417U;
	volatile uint32_t x214 = UINT32_MAX;
	int64_t x216 = -15LL;
	static int64_t t53 = 9217501243315234LL;

	t53 = (((x213<x214)|x215)&x216);

	if (t53 != -2147483647LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x217 = INT16_MIN;
	uint8_t x218 = UINT8_MAX;
	int8_t x219 = -5;
	int32_t x220 = INT32_MIN;

	t54 = (((x217<x218)|x219)&x220);

	if (t54 != INT32_MIN) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -6;
	uint32_t x222 = 507U;
	static int64_t x223 = INT64_MAX;
	int64_t x224 = 3379323LL;
	int64_t t55 = 235466172605341LL;

	t55 = (((x221<x222)|x223)&x224);

	if (t55 != 3379323LL) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x225 = -1;
	int64_t x226 = -1LL;
	static uint8_t x227 = 4U;
	int32_t x228 = -1;
	int32_t t56 = 10888;

	t56 = (((x225<x226)|x227)&x228);

	if (t56 != 4) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MAX;
	int64_t x230 = 30358470391448LL;
	uint8_t x231 = 2U;
	volatile uint8_t x232 = UINT8_MAX;

	t57 = (((x229<x230)|x231)&x232);

	if (t57 != 3) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x233 = UINT64_MAX;
	uint64_t x234 = 241195687LLU;
	uint16_t x235 = 5U;
	int32_t x236 = 1;
	volatile int32_t t58 = -31635868;

	t58 = (((x233<x234)|x235)&x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x237 = UINT16_MAX;
	uint32_t x238 = 25356583U;
	int8_t x239 = 0;
	static int32_t x240 = INT32_MIN;
	volatile int32_t t59 = -38396920;

	t59 = (((x237<x238)|x239)&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x241 = 117LLU;
	volatile uint32_t x242 = UINT32_MAX;
	volatile int64_t x243 = INT64_MAX;
	int8_t x244 = INT8_MIN;
	volatile int64_t t60 = 1239550LL;

	t60 = (((x241<x242)|x243)&x244);

	if (t60 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MAX;
	uint32_t x246 = 169U;
	int8_t x247 = INT8_MIN;
	volatile int32_t x248 = INT32_MAX;
	volatile int32_t t61 = 12946513;

	t61 = (((x245<x246)|x247)&x248);

	if (t61 != 2147483521) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = INT8_MAX;
	volatile int8_t x250 = -5;
	int64_t x251 = -1LL;
	uint8_t x252 = UINT8_MAX;
	static int64_t t62 = 2039LL;

	t62 = (((x249<x250)|x251)&x252);

	if (t62 != 255LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x254 = -1LL;
	volatile int64_t x255 = INT64_MAX;
	int64_t x256 = INT64_MIN;
	static int64_t t63 = -1201167851LL;

	t63 = (((x253<x254)|x255)&x256);

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x257 = INT8_MIN;
	volatile uint64_t x258 = 4969478LLU;
	int16_t x259 = INT16_MIN;
	static uint8_t x260 = UINT8_MAX;

	t64 = (((x257<x258)|x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int32_t x261 = -25;
	uint8_t x262 = 0U;
	int8_t x263 = -1;
	static volatile int32_t t65 = -1;

	t65 = (((x261<x262)|x263)&x264);

	if (t65 != -5) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 261755494U;
	volatile int32_t x266 = INT32_MIN;
	volatile int64_t x267 = -162LL;
	volatile int64_t t66 = 3095903700LL;

	t66 = (((x265<x266)|x267)&x268);

	if (t66 != 4294967135LL) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile int8_t x270 = INT8_MAX;
	volatile int16_t x271 = INT16_MAX;
	int32_t t67 = -143;

	t67 = (((x269<x270)|x271)&x272);

	if (t67 != 32406) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = -1LL;
	int64_t x274 = INT64_MAX;
	uint32_t x276 = UINT32_MAX;
	uint64_t t68 = 2LLU;

	t68 = (((x273<x274)|x275)&x276);

	if (t68 != 237367985LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = -991;
	uint16_t x278 = 105U;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = -954055;

	t69 = (((x277<x278)|x279)&x280);

	if (t69 != -32768) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x281 = INT8_MAX;
	int16_t x282 = -1;
	static int32_t x283 = INT32_MAX;
	uint16_t x284 = 1U;
	int32_t t70 = 251;

	t70 = (((x281<x282)|x283)&x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int8_t x286 = -1;
	int16_t x287 = -1;
	int8_t x288 = INT8_MIN;
	int32_t t71 = 0;

	t71 = (((x285<x286)|x287)&x288);

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = INT8_MIN;
	uint16_t x290 = 2455U;
	int16_t x291 = INT16_MAX;
	int64_t x292 = INT64_MIN;
	static volatile int64_t t72 = -7907247282393LL;

	t72 = (((x289<x290)|x291)&x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	static uint16_t x294 = 28659U;
	volatile uint32_t x295 = 2044850U;
	volatile uint64_t x296 = 11414717696LLU;

	t73 = (((x293<x294)|x295)&x296);

	if (t73 != 1966336LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 148;
	volatile int8_t x298 = -16;
	int16_t x299 = INT16_MAX;
	int64_t x300 = -1LL;
	int64_t t74 = -355685150LL;

	t74 = (((x297<x298)|x299)&x300);

	if (t74 != 32767LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x301 = INT16_MIN;
	int16_t x302 = 21;
	volatile uint16_t x303 = UINT16_MAX;
	uint16_t x304 = 2U;

	t75 = (((x301<x302)|x303)&x304);

	if (t75 != 2) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	static int32_t x306 = 8;
	int64_t x307 = 86028850217647145LL;
	volatile uint8_t x308 = 0U;
	static int64_t t76 = -16204145982629LL;

	t76 = (((x305<x306)|x307)&x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x309 = INT8_MIN;
	int8_t x310 = 4;
	int32_t x311 = -7479;
	uint8_t x312 = 0U;
	int32_t t77 = 14815479;

	t77 = (((x309<x310)|x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int16_t x313 = 111;
	volatile uint16_t x314 = 31061U;
	uint16_t x315 = UINT16_MAX;
	uint32_t x316 = 449U;
	volatile uint32_t t78 = 364018702U;

	t78 = (((x313<x314)|x315)&x316);

	if (t78 != 449U) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x318 = 15913866;
	volatile uint8_t x319 = 4U;
	int16_t x320 = INT16_MAX;
	volatile int32_t t79 = 960014;

	t79 = (((x317<x318)|x319)&x320);

	if (t79 != 5) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 107U;
	uint32_t x323 = UINT32_MAX;
	static int64_t x324 = INT64_MIN;
	volatile int64_t t80 = 2165948LL;

	t80 = (((x321<x322)|x323)&x324);

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = 9690U;
	int32_t x327 = INT32_MIN;
	static volatile int32_t x328 = INT32_MIN;
	volatile int32_t t81 = INT32_MIN;

	t81 = (((x325<x326)|x327)&x328);

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x330 = UINT64_MAX;
	int64_t x331 = 2LL;
	uint64_t x332 = 4230400984LLU;

	t82 = (((x329<x330)|x331)&x332);

	if (t82 != 0LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x334 = INT32_MIN;
	int64_t x335 = -1LL;
	static int16_t x336 = -7824;
	volatile int64_t t83 = -22292513530LL;

	t83 = (((x333<x334)|x335)&x336);

	if (t83 != -7824LL) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -10;
	static int64_t x338 = INT64_MAX;
	int8_t x339 = -1;
	uint64_t x340 = 180756342LLU;
	uint64_t t84 = 28671993441921658LLU;

	t84 = (((x337<x338)|x339)&x340);

	if (t84 != 180756342LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	int16_t x342 = 951;
	static int8_t x343 = INT8_MIN;
	static volatile int64_t t85 = INT64_MIN;

	t85 = (((x341<x342)|x343)&x344);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 5U;
	int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MAX;

	t86 = (((x345<x346)|x347)&x348);

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	volatile int64_t x350 = INT64_MIN;
	int8_t x351 = -1;
	int64_t x352 = -16932233692118314LL;

	t87 = (((x349<x350)|x351)&x352);

	if (t87 != -16932233692118314LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = 186308126U;
	static int64_t x354 = INT64_MIN;
	int32_t x356 = INT32_MIN;
	volatile uint64_t t88 = 455702238756591146LLU;

	t88 = (((x353<x354)|x355)&x356);

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x358 = 110U;
	int32_t x360 = -1556952;

	t89 = (((x357<x358)|x359)&x360);

	if (t89 != 121642536LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MAX;
	volatile int64_t x362 = 1532640727236289660LL;
	volatile int64_t x363 = -885094494266LL;
	static uint64_t x364 = 2176LLU;
	volatile uint64_t t90 = 4141475886575LLU;

	t90 = (((x361<x362)|x363)&x364);

	if (t90 != 2176LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MAX;
	int32_t x366 = -1;
	volatile uint16_t x367 = 19184U;
	int32_t t91 = -909129268;

	t91 = (((x365<x366)|x367)&x368);

	if (t91 != 19184) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint16_t x369 = 0U;
	static int16_t x371 = -1;
	int64_t x372 = INT64_MIN;
	int64_t t92 = INT64_MIN;

	t92 = (((x369<x370)|x371)&x372);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = -1;
	int8_t x374 = INT8_MIN;
	int64_t x375 = INT64_MAX;
	uint64_t x376 = 891319178LLU;

	t93 = (((x373<x374)|x375)&x376);

	if (t93 != 891319178LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	static int64_t x379 = INT64_MAX;
	static uint32_t x380 = 1034039U;
	int64_t t94 = 41675LL;

	t94 = (((x377<x378)|x379)&x380);

	if (t94 != 1034039LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int32_t x381 = -15819384;
	int64_t x382 = -1LL;
	uint8_t x383 = 4U;
	volatile uint8_t x384 = UINT8_MAX;
	int32_t t95 = 29223;

	t95 = (((x381<x382)|x383)&x384);

	if (t95 != 5) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x385 = -1;
	int64_t x386 = INT64_MIN;
	int32_t x387 = INT32_MIN;
	uint16_t x388 = 124U;
	int32_t t96 = -43;

	t96 = (((x385<x386)|x387)&x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x389 = UINT16_MAX;
	static volatile int16_t x390 = INT16_MAX;
	uint64_t x391 = 79749330LLU;
	volatile uint64_t t97 = 1069LLU;

	t97 = (((x389<x390)|x391)&x392);

	if (t97 != 2LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x395 = INT8_MIN;
	volatile int8_t x396 = INT8_MIN;
	static int32_t t98 = -1297929;

	t98 = (((x393<x394)|x395)&x396);

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = UINT8_MAX;
	int8_t x399 = INT8_MAX;
	static int16_t x400 = INT16_MIN;
	static volatile int32_t t99 = 1195361;

	t99 = (((x397<x398)|x399)&x400);

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

