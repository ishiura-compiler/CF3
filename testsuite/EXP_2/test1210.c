#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x3 = 1497U;
uint32_t x5 = 421903281U;
uint16_t x8 = 232U;
static uint32_t t1 = 72U;
volatile uint32_t x12 = 13U;
uint8_t x15 = UINT8_MAX;
int8_t x16 = INT8_MIN;
static int32_t x21 = INT32_MAX;
volatile uint32_t t5 = 2033609089U;
volatile uint64_t x28 = UINT64_MAX;
uint64_t t6 = UINT64_MAX;
uint64_t x33 = 2909930LLU;
static uint64_t t8 = UINT64_MAX;
int32_t x39 = INT32_MIN;
uint32_t x55 = 1947305058U;
uint16_t x60 = 1538U;
volatile int8_t x61 = INT8_MIN;
volatile uint16_t x62 = 19463U;
int16_t x63 = INT16_MIN;
int64_t x67 = INT64_MIN;
static int16_t x69 = -1192;
uint64_t x70 = 98602780275519071LLU;
int8_t x72 = 0;
int32_t x73 = -1;
uint64_t x79 = 35LLU;
volatile int16_t x84 = 8612;
static volatile int32_t t21 = INT32_MIN;
static int8_t x89 = -1;
static uint64_t x103 = 0LLU;
volatile uint32_t t25 = 12U;
volatile int32_t x105 = INT32_MIN;
static uint8_t x106 = 0U;
volatile int32_t t26 = -6;
int64_t x111 = 872LL;
uint32_t x112 = UINT32_MAX;
volatile int32_t t28 = -30750224;
static uint32_t x117 = UINT32_MAX;
volatile int64_t x123 = -1LL;
int32_t x138 = -42585728;
volatile uint8_t x141 = UINT8_MAX;
volatile int32_t t36 = -162160857;
int32_t t38 = 4;
int32_t x158 = INT32_MIN;
static int32_t x161 = INT32_MIN;
int64_t x162 = -198LL;
static uint16_t x169 = UINT16_MAX;
int8_t x171 = -1;
int16_t x174 = INT16_MIN;
uint64_t x177 = UINT64_MAX;
volatile int64_t x178 = INT64_MAX;
uint16_t x180 = 13U;
volatile int32_t t45 = 375392;
uint64_t x189 = 286309LLU;
int64_t x201 = INT64_MIN;
uint64_t x212 = UINT64_MAX;
volatile uint64_t t52 = UINT64_MAX;
static int32_t t53 = INT32_MIN;
static int64_t x218 = INT64_MAX;
uint32_t x220 = 741363U;
volatile uint64_t t56 = 1070LLU;
volatile int32_t x230 = 21655422;
int16_t x234 = INT16_MIN;
static volatile uint8_t x239 = 8U;
static int32_t x249 = INT32_MAX;
volatile int64_t x250 = INT64_MAX;
static uint16_t x257 = UINT16_MAX;
int64_t x258 = -1LL;
volatile int64_t x261 = INT64_MIN;
volatile int64_t t65 = -221399LL;
volatile int32_t x267 = INT32_MIN;
int16_t x269 = INT16_MAX;
int8_t x276 = -1;
int16_t x282 = INT16_MAX;
static int64_t x295 = INT64_MIN;
int8_t x300 = INT8_MAX;
int32_t t74 = 22806257;
volatile uint64_t x303 = 35107421591511465LLU;
volatile int32_t t75 = -79496705;
uint32_t x312 = 33711888U;
int64_t x316 = INT64_MAX;
int64_t x330 = INT64_MIN;
static volatile uint64_t t82 = 97928060LLU;
int8_t x336 = INT8_MAX;
volatile uint32_t x339 = 14U;
int32_t t84 = -2;
volatile int64_t t85 = -10036626145LL;
volatile int32_t x348 = INT32_MIN;
int32_t x355 = INT32_MIN;
int64_t x358 = -1LL;
volatile int16_t x361 = INT16_MIN;
int16_t x365 = -1456;
int32_t t91 = -25;
int64_t x370 = INT64_MAX;
int16_t x373 = INT16_MIN;
int64_t x380 = -1LL;
int64_t x387 = -36233336LL;
uint64_t t96 = UINT64_MAX;
static int8_t x394 = INT8_MAX;
static int32_t x398 = INT32_MAX;
uint32_t x399 = 197746U;


void f0(void) {
	static uint16_t x1 = 4725U;
	int64_t x2 = INT64_MIN;
	uint64_t x4 = UINT64_MAX;
	uint64_t t0 = UINT64_MAX;

	t0 = ((x1*(x2==x3))+x4);

	if (t0 != UINT64_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	uint32_t x7 = 420U;

	t1 = ((x5*(x6==x7))+x8);

	if (t1 != 232U) { NG(); } else { ; }
	
}

void f2(void) {
	static uint32_t x9 = 0U;
	uint32_t x10 = UINT32_MAX;
	volatile uint64_t x11 = 16533495708018333LLU;
	static volatile uint32_t t2 = 206U;

	t2 = ((x9*(x10==x11))+x12);

	if (t2 != 13U) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x13 = -1;
	int8_t x14 = INT8_MIN;
	int32_t t3 = -19;

	t3 = ((x13*(x14==x15))+x16);

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = 14U;
	int32_t x18 = INT32_MIN;
	uint32_t x19 = 15868939U;
	volatile int32_t x20 = INT32_MIN;
	volatile int32_t t4 = INT32_MIN;

	t4 = ((x17*(x18==x19))+x20);

	if (t4 != INT32_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x22 = 1;
	volatile int16_t x23 = 1;
	uint32_t x24 = 41568336U;

	t5 = ((x21*(x22==x23))+x24);

	if (t5 != 2189051983U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	static int8_t x26 = INT8_MAX;
	volatile uint8_t x27 = 11U;

	t6 = ((x25*(x26==x27))+x28);

	if (t6 != UINT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = INT32_MIN;
	int32_t x30 = -78197084;
	int64_t x31 = INT64_MIN;
	int16_t x32 = -1;
	static int32_t t7 = 662571744;

	t7 = ((x29*(x30==x31))+x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -202782;
	int32_t x35 = 428867;
	static volatile uint64_t x36 = UINT64_MAX;

	t8 = ((x33*(x34==x35))+x36);

	if (t8 != UINT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int8_t x37 = -1;
	int32_t x38 = INT32_MIN;
	volatile uint8_t x40 = 5U;
	volatile int32_t t9 = -1209332;

	t9 = ((x37*(x38==x39))+x40);

	if (t9 != 4) { NG(); } else { ; }
	
}

void f10(void) {
	volatile uint16_t x41 = 0U;
	static int16_t x42 = INT16_MAX;
	int32_t x43 = INT32_MAX;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t10 = UINT64_MAX;

	t10 = ((x41*(x42==x43))+x44);

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -21;
	volatile int64_t x46 = INT64_MIN;
	int64_t x47 = INT64_MIN;
	uint16_t x48 = UINT16_MAX;
	int32_t t11 = 1;

	t11 = ((x45*(x46==x47))+x48);

	if (t11 != 65514) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x49 = 59870713521674234LL;
	int64_t x50 = -1LL;
	uint8_t x51 = 50U;
	int32_t x52 = INT32_MIN;
	int64_t t12 = -125985LL;

	t12 = ((x49*(x50==x51))+x52);

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int8_t x53 = INT8_MAX;
	static int64_t x54 = -1LL;
	static uint8_t x56 = UINT8_MAX;
	volatile int32_t t13 = -1;

	t13 = ((x53*(x54==x55))+x56);

	if (t13 != 255) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	volatile int8_t x58 = 11;
	uint64_t x59 = 267471514LLU;
	static volatile int32_t t14 = 459;

	t14 = ((x57*(x58==x59))+x60);

	if (t14 != 1538) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint16_t x64 = UINT16_MAX;
	static int32_t t15 = -191;

	t15 = ((x61*(x62==x63))+x64);

	if (t15 != 65535) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 1199158U;
	int16_t x66 = -1;
	uint64_t x68 = 43217066650LLU;
	volatile uint64_t t16 = 948LLU;

	t16 = ((x65*(x66==x67))+x68);

	if (t16 != 43217066650LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x71 = 21;
	static int32_t t17 = -150;

	t17 = ((x69*(x70==x71))+x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x74 = -26;
	int16_t x75 = INT16_MIN;
	int8_t x76 = 14;
	volatile int32_t t18 = 531344395;

	t18 = ((x73*(x74==x75))+x76);

	if (t18 != 14) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -1;
	int64_t x78 = -66LL;
	uint32_t x80 = 196U;
	volatile uint32_t t19 = 86419077U;

	t19 = ((x77*(x78==x79))+x80);

	if (t19 != 196U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MIN;
	volatile uint64_t x82 = 11779077892LLU;
	int64_t x83 = INT64_MAX;
	volatile int32_t t20 = 1;

	t20 = ((x81*(x82==x83))+x84);

	if (t20 != 8612) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 19092U;
	uint16_t x86 = UINT16_MAX;
	int16_t x87 = INT16_MAX;
	volatile int32_t x88 = INT32_MIN;

	t21 = ((x85*(x86==x87))+x88);

	if (t21 != INT32_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x90 = UINT32_MAX;
	static volatile int32_t x91 = INT32_MIN;
	int32_t x92 = INT32_MAX;
	int32_t t22 = INT32_MAX;

	t22 = ((x89*(x90==x91))+x92);

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 15U;
	static int16_t x94 = -6715;
	uint64_t x95 = 1997LLU;
	uint32_t x96 = UINT32_MAX;
	uint32_t t23 = UINT32_MAX;

	t23 = ((x93*(x94==x95))+x96);

	if (t23 != UINT32_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	uint8_t x98 = 35U;
	static uint16_t x99 = 3U;
	uint64_t x100 = 13963201253836LLU;
	volatile uint64_t t24 = 770LLU;

	t24 = ((x97*(x98==x99))+x100);

	if (t24 != 13963201253836LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 1U;
	uint32_t x102 = 110U;
	int8_t x104 = INT8_MIN;

	t25 = ((x101*(x102==x103))+x104);

	if (t25 != 4294967168U) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int32_t x107 = INT32_MIN;
	uint8_t x108 = 13U;

	t26 = ((x105*(x106==x107))+x108);

	if (t26 != 13) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = -164;
	int8_t x110 = -13;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = ((x109*(x110==x111))+x112);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MIN;
	static volatile uint8_t x114 = UINT8_MAX;
	uint32_t x115 = 51278U;
	static int8_t x116 = INT8_MIN;

	t28 = ((x113*(x114==x115))+x116);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x118 = INT8_MIN;
	int16_t x119 = INT16_MIN;
	int16_t x120 = 66;
	uint32_t t29 = 10U;

	t29 = ((x117*(x118==x119))+x120);

	if (t29 != 66U) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int32_t x121 = -81931645;
	int32_t x122 = 11;
	static uint64_t x124 = 377239422650919LLU;
	uint64_t t30 = 413716875LLU;

	t30 = ((x121*(x122==x123))+x124);

	if (t30 != 377239422650919LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x125 = 1;
	int16_t x126 = INT16_MAX;
	int64_t x127 = INT64_MAX;
	uint16_t x128 = 1U;
	volatile int32_t t31 = -432;

	t31 = ((x125*(x126==x127))+x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	volatile int64_t x130 = INT64_MAX;
	int16_t x131 = INT16_MAX;
	static uint8_t x132 = 109U;
	int32_t t32 = -17375;

	t32 = ((x129*(x130==x131))+x132);

	if (t32 != 109) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x133 = 0LLU;
	static int64_t x134 = INT64_MIN;
	int32_t x135 = INT32_MIN;
	int32_t x136 = -1;
	volatile uint64_t t33 = UINT64_MAX;

	t33 = ((x133*(x134==x135))+x136);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = 1026;
	volatile int32_t x139 = -782746919;
	uint8_t x140 = 7U;
	volatile int32_t t34 = 1697957;

	t34 = ((x137*(x138==x139))+x140);

	if (t34 != 7) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = INT32_MIN;
	static uint8_t x143 = UINT8_MAX;
	static volatile uint8_t x144 = 0U;
	int32_t t35 = 18201726;

	t35 = ((x141*(x142==x143))+x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x145 = UINT16_MAX;
	uint16_t x146 = 26U;
	static int32_t x147 = INT32_MIN;
	uint8_t x148 = 11U;

	t36 = ((x145*(x146==x147))+x148);

	if (t36 != 11) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = -10;
	int32_t x150 = 41247054;
	int8_t x151 = INT8_MIN;
	static volatile uint64_t x152 = 9986958LLU;
	static volatile uint64_t t37 = 7996113744514LLU;

	t37 = ((x149*(x150==x151))+x152);

	if (t37 != 9986958LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = 1;
	static int16_t x154 = -2039;
	static int32_t x155 = -1;
	uint8_t x156 = UINT8_MAX;

	t38 = ((x153*(x154==x155))+x156);

	if (t38 != 255) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	uint16_t x159 = 1015U;
	uint64_t x160 = UINT64_MAX;
	static volatile uint64_t t39 = UINT64_MAX;

	t39 = ((x157*(x158==x159))+x160);

	if (t39 != UINT64_MAX) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x163 = 4U;
	uint64_t x164 = 1500194LLU;
	static uint64_t t40 = 28287004LLU;

	t40 = ((x161*(x162==x163))+x164);

	if (t40 != 1500194LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x165 = 1857U;
	int16_t x166 = INT16_MIN;
	int8_t x167 = INT8_MIN;
	int64_t x168 = -1LL;
	volatile int64_t t41 = 1777079647203LL;

	t41 = ((x165*(x166==x167))+x168);

	if (t41 != -1LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x170 = UINT64_MAX;
	volatile uint8_t x172 = 10U;
	static int32_t t42 = -49806520;

	t42 = ((x169*(x170==x171))+x172);

	if (t42 != 65545) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int8_t x175 = INT8_MIN;
	int32_t x176 = INT32_MAX;
	static volatile int32_t t43 = INT32_MAX;

	t43 = ((x173*(x174==x175))+x176);

	if (t43 != INT32_MAX) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint64_t x179 = 54453301227342LLU;
	static volatile uint64_t t44 = 15LLU;

	t44 = ((x177*(x178==x179))+x180);

	if (t44 != 13LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint8_t x181 = 13U;
	int8_t x182 = INT8_MIN;
	int8_t x183 = INT8_MIN;
	int8_t x184 = -1;

	t45 = ((x181*(x182==x183))+x184);

	if (t45 != 12) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 18U;
	int32_t x186 = 4815;
	volatile uint8_t x187 = UINT8_MAX;
	uint64_t x188 = UINT64_MAX;
	volatile uint64_t t46 = UINT64_MAX;

	t46 = ((x185*(x186==x187))+x188);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x190 = 2;
	volatile uint16_t x191 = UINT16_MAX;
	uint16_t x192 = UINT16_MAX;
	volatile uint64_t t47 = 325206LLU;

	t47 = ((x189*(x190==x191))+x192);

	if (t47 != 65535LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x193 = -55;
	int16_t x194 = INT16_MAX;
	uint32_t x195 = 13211288U;
	uint64_t x196 = UINT64_MAX;
	uint64_t t48 = UINT64_MAX;

	t48 = ((x193*(x194==x195))+x196);

	if (t48 != UINT64_MAX) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = -1;
	int64_t x198 = INT64_MIN;
	uint32_t x199 = 0U;
	int8_t x200 = 63;
	int32_t t49 = -8022;

	t49 = ((x197*(x198==x199))+x200);

	if (t49 != 63) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x202 = -1;
	uint16_t x203 = 1U;
	int64_t x204 = -1LL;
	static volatile int64_t t50 = 56313712659LL;

	t50 = ((x201*(x202==x203))+x204);

	if (t50 != -1LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = -1606;
	int8_t x206 = INT8_MIN;
	int8_t x207 = 46;
	volatile int32_t x208 = -1;
	int32_t t51 = 8012;

	t51 = ((x205*(x206==x207))+x208);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x209 = 0;
	int8_t x210 = INT8_MAX;
	int16_t x211 = INT16_MIN;

	t52 = ((x209*(x210==x211))+x212);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 7U;
	int8_t x214 = 0;
	uint16_t x215 = 212U;
	int32_t x216 = INT32_MIN;

	t53 = ((x213*(x214==x215))+x216);

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x217 = 6U;
	volatile int64_t x219 = -1LL;
	static volatile uint32_t t54 = 24286U;

	t54 = ((x217*(x218==x219))+x220);

	if (t54 != 741363U) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 142809LLU;
	static int64_t x222 = 60272084LL;
	volatile int16_t x223 = INT16_MAX;
	int32_t x224 = -1;
	volatile uint64_t t55 = UINT64_MAX;

	t55 = ((x221*(x222==x223))+x224);

	if (t55 != UINT64_MAX) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MAX;
	static int32_t x226 = INT32_MIN;
	int64_t x227 = INT64_MIN;
	static uint64_t x228 = 625246848880703LLU;

	t56 = ((x225*(x226==x227))+x228);

	if (t56 != 625246848880703LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	int32_t x231 = 679176422;
	int16_t x232 = INT16_MIN;
	static volatile int64_t t57 = -267172532LL;

	t57 = ((x229*(x230==x231))+x232);

	if (t57 != -32768LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x233 = 27787LL;
	volatile int32_t x235 = INT32_MAX;
	static volatile int32_t x236 = INT32_MIN;
	volatile int64_t t58 = -933LL;

	t58 = ((x233*(x234==x235))+x236);

	if (t58 != -2147483648LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = -1;
	int64_t x238 = -7035867588LL;
	int16_t x240 = 2861;
	int32_t t59 = 1911590;

	t59 = ((x237*(x238==x239))+x240);

	if (t59 != 2861) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x241 = INT16_MIN;
	int8_t x242 = -1;
	int64_t x243 = -1LL;
	static uint64_t x244 = UINT64_MAX;
	volatile uint64_t t60 = 2214823486LLU;

	t60 = ((x241*(x242==x243))+x244);

	if (t60 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint8_t x245 = 2U;
	int32_t x246 = 2821;
	int8_t x247 = 0;
	int16_t x248 = -813;
	volatile int32_t t61 = 0;

	t61 = ((x245*(x246==x247))+x248);

	if (t61 != -813) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x251 = 8006U;
	static int8_t x252 = INT8_MIN;
	volatile int32_t t62 = -239760;

	t62 = ((x249*(x250==x251))+x252);

	if (t62 != -128) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	volatile uint8_t x254 = 31U;
	uint64_t x255 = 3453137274236662LLU;
	uint32_t x256 = 6819U;
	volatile uint32_t t63 = 7728U;

	t63 = ((x253*(x254==x255))+x256);

	if (t63 != 6819U) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x259 = INT8_MIN;
	int16_t x260 = INT16_MAX;
	int32_t t64 = 391;

	t64 = ((x257*(x258==x259))+x260);

	if (t64 != 32767) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x262 = INT8_MIN;
	int64_t x263 = INT64_MIN;
	int32_t x264 = INT32_MIN;

	t65 = ((x261*(x262==x263))+x264);

	if (t65 != -2147483648LL) { NG(); } else { ; }
	
}

void f66(void) {
	static uint64_t x265 = 15047573684LLU;
	volatile uint8_t x266 = 6U;
	static volatile int16_t x268 = -1;
	static volatile uint64_t t66 = UINT64_MAX;

	t66 = ((x265*(x266==x267))+x268);

	if (t66 != UINT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x270 = 20U;
	int8_t x271 = INT8_MAX;
	int8_t x272 = INT8_MIN;
	volatile int32_t t67 = 162451058;

	t67 = ((x269*(x270==x271))+x272);

	if (t67 != -128) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x273 = INT16_MIN;
	static uint64_t x274 = 123373315494358LLU;
	int8_t x275 = INT8_MAX;
	int32_t t68 = -66047308;

	t68 = ((x273*(x274==x275))+x276);

	if (t68 != -1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int16_t x278 = INT16_MAX;
	volatile uint32_t x279 = 20579U;
	uint32_t x280 = 93841U;
	volatile uint32_t t69 = 27U;

	t69 = ((x277*(x278==x279))+x280);

	if (t69 != 93841U) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x281 = 1;
	int32_t x283 = -3081488;
	static uint16_t x284 = UINT16_MAX;
	int32_t t70 = -420188;

	t70 = ((x281*(x282==x283))+x284);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = UINT32_MAX;
	int16_t x286 = INT16_MIN;
	int64_t x287 = -248758688593020009LL;
	uint16_t x288 = 23U;
	uint32_t t71 = 0U;

	t71 = ((x285*(x286==x287))+x288);

	if (t71 != 23U) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	int8_t x290 = INT8_MIN;
	int64_t x291 = INT64_MIN;
	int16_t x292 = -993;
	volatile int64_t t72 = -1900566795LL;

	t72 = ((x289*(x290==x291))+x292);

	if (t72 != -993LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MAX;
	volatile int8_t x294 = -7;
	uint64_t x296 = UINT64_MAX;
	static volatile uint64_t t73 = UINT64_MAX;

	t73 = ((x293*(x294==x295))+x296);

	if (t73 != UINT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = UINT16_MAX;
	uint64_t x298 = 8657684022366LLU;
	volatile uint64_t x299 = 528329020990LLU;

	t74 = ((x297*(x298==x299))+x300);

	if (t74 != 127) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x301 = -1;
	int16_t x302 = INT16_MIN;
	uint16_t x304 = 1900U;

	t75 = ((x301*(x302==x303))+x304);

	if (t75 != 1900) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x305 = UINT32_MAX;
	volatile uint32_t x306 = UINT32_MAX;
	int32_t x307 = 889890;
	int8_t x308 = INT8_MIN;
	volatile uint32_t t76 = 0U;

	t76 = ((x305*(x306==x307))+x308);

	if (t76 != 4294967168U) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MIN;
	static uint16_t x310 = UINT16_MAX;
	uint16_t x311 = 0U;
	static uint32_t t77 = 2U;

	t77 = ((x309*(x310==x311))+x312);

	if (t77 != 33711888U) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 1U;
	int64_t x314 = INT64_MIN;
	int32_t x315 = INT32_MIN;
	volatile int64_t t78 = INT64_MAX;

	t78 = ((x313*(x314==x315))+x316);

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = UINT8_MAX;
	uint32_t x318 = UINT32_MAX;
	uint16_t x319 = 58U;
	int32_t x320 = INT32_MIN;
	int32_t t79 = INT32_MIN;

	t79 = ((x317*(x318==x319))+x320);

	if (t79 != INT32_MIN) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 13U;
	int32_t x322 = INT32_MAX;
	int64_t x323 = -24473015675LL;
	volatile int8_t x324 = INT8_MAX;
	volatile int32_t t80 = 222106567;

	t80 = ((x321*(x322==x323))+x324);

	if (t80 != 127) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int32_t x325 = 109;
	uint32_t x326 = 1553613548U;
	int64_t x327 = INT64_MAX;
	int8_t x328 = 61;
	static int32_t t81 = -55293891;

	t81 = ((x325*(x326==x327))+x328);

	if (t81 != 61) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x329 = 9U;
	int16_t x331 = 1;
	uint64_t x332 = 259805926803LLU;

	t82 = ((x329*(x330==x331))+x332);

	if (t82 != 259805926803LLU) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = -1;
	volatile int16_t x334 = -1;
	int8_t x335 = INT8_MIN;
	int32_t t83 = -11973;

	t83 = ((x333*(x334==x335))+x336);

	if (t83 != 127) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	uint64_t x338 = 161093019326LLU;
	volatile int32_t x340 = 298929686;

	t84 = ((x337*(x338==x339))+x340);

	if (t84 != 298929686) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	uint16_t x342 = 21125U;
	static int64_t x343 = 37759455LL;
	uint8_t x344 = UINT8_MAX;

	t85 = ((x341*(x342==x343))+x344);

	if (t85 != 255LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint8_t x345 = 6U;
	volatile int8_t x346 = INT8_MIN;
	static volatile int16_t x347 = INT16_MIN;
	int32_t t86 = INT32_MIN;

	t86 = ((x345*(x346==x347))+x348);

	if (t86 != INT32_MIN) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = 749470258;
	int32_t x350 = -29614;
	int32_t x351 = -1;
	int16_t x352 = -1;
	int32_t t87 = -851;

	t87 = ((x349*(x350==x351))+x352);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = 15U;
	int32_t x354 = INT32_MIN;
	static uint8_t x356 = UINT8_MAX;
	int32_t t88 = -623809731;

	t88 = ((x353*(x354==x355))+x356);

	if (t88 != 270) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MAX;
	uint8_t x359 = 42U;
	int64_t x360 = INT64_MIN;
	int64_t t89 = INT64_MIN;

	t89 = ((x357*(x358==x359))+x360);

	if (t89 != INT64_MIN) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = INT64_MAX;
	volatile int8_t x363 = INT8_MAX;
	volatile uint64_t x364 = 516263004LLU;
	volatile uint64_t t90 = 4416564984LLU;

	t90 = ((x361*(x362==x363))+x364);

	if (t90 != 516263004LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x366 = INT32_MIN;
	static int16_t x367 = -34;
	static int8_t x368 = INT8_MIN;

	t91 = ((x365*(x366==x367))+x368);

	if (t91 != -128) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int8_t x369 = -1;
	int64_t x371 = INT64_MIN;
	int32_t x372 = INT32_MAX;
	volatile int32_t t92 = INT32_MAX;

	t92 = ((x369*(x370==x371))+x372);

	if (t92 != INT32_MAX) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x374 = 1702030LLU;
	int8_t x375 = -1;
	static volatile int64_t x376 = 7004098494181162LL;
	int64_t t93 = -20762689574LL;

	t93 = ((x373*(x374==x375))+x376);

	if (t93 != 7004098494181162LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 754U;
	uint16_t x378 = 14786U;
	int32_t x379 = 1;
	volatile int64_t t94 = -723233556LL;

	t94 = ((x377*(x378==x379))+x380);

	if (t94 != -1LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 246691U;
	uint16_t x382 = 89U;
	int16_t x383 = INT16_MIN;
	int64_t x384 = -223397299LL;
	int64_t t95 = -7335231810185LL;

	t95 = ((x381*(x382==x383))+x384);

	if (t95 != -223397299LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 246LLU;
	volatile int32_t x386 = INT32_MIN;
	int64_t x388 = -1LL;

	t96 = ((x385*(x386==x387))+x388);

	if (t96 != UINT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x389 = 138U;
	uint64_t x390 = 9730501LLU;
	static uint32_t x391 = UINT32_MAX;
	volatile int32_t x392 = -1;
	volatile int32_t t97 = 0;

	t97 = ((x389*(x390==x391))+x392);

	if (t97 != -1) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 46U;
	volatile int32_t x395 = INT32_MIN;
	uint64_t x396 = UINT64_MAX;
	volatile uint64_t t98 = UINT64_MAX;

	t98 = ((x393*(x394==x395))+x396);

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = 662196309;
	int64_t x400 = INT64_MAX;
	int64_t t99 = INT64_MAX;

	t99 = ((x397*(x398==x399))+x400);

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

