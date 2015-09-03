#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x4 = 80353LLU;
int64_t x15 = INT64_MIN;
volatile int64_t x18 = INT64_MIN;
static volatile int64_t x31 = -1LL;
int16_t x37 = INT16_MIN;
int64_t x38 = INT64_MIN;
int64_t x41 = -1LL;
uint64_t x47 = 9358149656LLU;
static volatile uint16_t x48 = 4U;
int64_t x56 = INT64_MIN;
int16_t x59 = INT16_MIN;
int32_t x65 = -1;
int8_t x66 = -1;
uint8_t x67 = 3U;
static int32_t t17 = -15338;
int16_t x74 = INT16_MIN;
volatile int16_t x76 = INT16_MIN;
int8_t x83 = -1;
int32_t x84 = -1;
int8_t x90 = -1;
static volatile int64_t x91 = INT64_MIN;
static int32_t x95 = -1;
uint32_t x100 = 8U;
static int8_t x103 = INT8_MIN;
volatile int16_t x104 = INT16_MAX;
static volatile int8_t x121 = INT8_MIN;
uint8_t x122 = 8U;
int64_t x125 = 5585001566809LL;
volatile uint64_t x127 = 15007468426746857LLU;
volatile int32_t t32 = 33;
int64_t x134 = INT64_MIN;
uint16_t x135 = 33U;
int32_t x137 = INT32_MIN;
static volatile int32_t t34 = 6424;
volatile int32_t x144 = INT32_MAX;
volatile int8_t x146 = INT8_MIN;
int8_t x163 = INT8_MIN;
volatile int32_t x172 = INT32_MAX;
volatile int32_t t42 = -695181;
static int32_t x179 = INT32_MAX;
volatile int32_t t45 = 4;
static volatile int32_t t48 = 0;
int32_t t51 = -21120;
int64_t x217 = -1LL;
uint32_t x232 = UINT32_MAX;
int32_t t57 = 408834;
uint16_t x233 = 2269U;
uint8_t x235 = 2U;
int8_t x238 = -1;
int64_t x242 = 22343LL;
uint64_t x243 = UINT64_MAX;
int16_t x252 = 30;
int64_t x260 = INT64_MAX;
int32_t t64 = 28;
uint64_t x261 = 40730881031LLU;
volatile int32_t t69 = 1;
static int16_t x281 = 668;
int32_t t70 = 0;
int32_t x293 = -1;
int32_t t73 = -1447;
static uint64_t x317 = 1038LLU;
int32_t x318 = INT32_MAX;
volatile int32_t t80 = -2436198;
volatile int64_t x326 = -1LL;
uint64_t x327 = 77190557608977255LLU;
volatile int8_t x330 = -1;
int16_t x332 = INT16_MIN;
uint8_t x335 = 51U;
int16_t x348 = -1;
int8_t x353 = INT8_MIN;
int32_t x354 = -1;
volatile int32_t x355 = INT32_MIN;
volatile int32_t t88 = -1029663713;
volatile int8_t x358 = -1;
static int32_t x359 = 259636;
int64_t x360 = INT64_MIN;
static int8_t x362 = INT8_MIN;
static volatile int16_t x364 = INT16_MIN;
static uint32_t x365 = UINT32_MAX;
int32_t x372 = INT32_MIN;
volatile uint32_t x373 = 447U;
static uint32_t x376 = 1U;
int32_t t93 = 2063547;
static int64_t x377 = -1LL;
uint8_t x378 = 68U;
volatile int32_t t94 = 1;
int64_t x384 = INT64_MIN;
volatile int16_t x385 = 3145;
int16_t x388 = INT16_MIN;
uint64_t x391 = 1964909LLU;


void f0(void) {
	volatile uint32_t x1 = 360827U;
	uint64_t x2 = 192778583721LLU;
	uint32_t x3 = 641670237U;
	volatile int32_t t0 = 1031709112;

	t0 = ((x1&(x2<x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = INT16_MIN;
	static int8_t x6 = INT8_MIN;
	int8_t x7 = 28;
	int16_t x8 = 5399;
	int32_t t1 = -13112575;

	t1 = ((x5&(x6<x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = -90370;
	int8_t x10 = 0;
	int16_t x11 = INT16_MIN;
	volatile int16_t x12 = -1;
	int32_t t2 = -46;

	t2 = ((x9&(x10<x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -2;
	static int8_t x14 = 20;
	volatile int16_t x16 = 24;
	static volatile int32_t t3 = -4;

	t3 = ((x13&(x14<x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 778824U;
	int32_t x19 = -16;
	uint8_t x20 = 1U;
	volatile int32_t t4 = 1863;

	t4 = ((x17&(x18<x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x21 = INT32_MIN;
	volatile int16_t x22 = INT16_MIN;
	int64_t x23 = 363639LL;
	int64_t x24 = -1LL;
	int32_t t5 = 222686;

	t5 = ((x21&(x22<x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 2U;
	int32_t x26 = -473;
	uint8_t x27 = 23U;
	static volatile int32_t x28 = INT32_MIN;
	int32_t t6 = 115960666;

	t6 = ((x25&(x26<x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 6U;
	static uint16_t x30 = 48U;
	static volatile int8_t x32 = -27;
	int32_t t7 = -72;

	t7 = ((x29&(x30<x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x33 = 13U;
	uint32_t x34 = 91506619U;
	int16_t x35 = INT16_MIN;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -13789;

	t8 = ((x33&(x34<x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x39 = INT8_MIN;
	int16_t x40 = INT16_MAX;
	static int32_t t9 = 0;

	t9 = ((x37&(x38<x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x42 = 3U;
	uint8_t x43 = UINT8_MAX;
	static int32_t x44 = INT32_MAX;
	volatile int32_t t10 = 12;

	t10 = ((x41&(x42<x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x45 = UINT64_MAX;
	static uint64_t x46 = UINT64_MAX;
	volatile int32_t t11 = -175;

	t11 = ((x45&(x46<x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	uint16_t x50 = 5U;
	volatile uint8_t x51 = 80U;
	static uint32_t x52 = 16U;
	int32_t t12 = 36000;

	t12 = ((x49&(x50<x51))<x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = 344;
	uint8_t x54 = UINT8_MAX;
	int32_t x55 = INT32_MIN;
	volatile int32_t t13 = 1020680;

	t13 = ((x53&(x54<x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = 53U;
	uint64_t x58 = 1537055697454418793LLU;
	int16_t x60 = -1;
	static int32_t t14 = 553575659;

	t14 = ((x57&(x58<x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x61 = 2724U;
	int64_t x62 = INT64_MAX;
	int64_t x63 = 3060636LL;
	int8_t x64 = INT8_MIN;
	static int32_t t15 = 3140657;

	t15 = ((x61&(x62<x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = 208047582;

	t16 = ((x65&(x66<x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x69 = 190LL;
	volatile uint16_t x70 = 27U;
	volatile int16_t x71 = INT16_MAX;
	uint16_t x72 = 17347U;

	t17 = ((x69&(x70<x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int64_t x73 = INT64_MAX;
	uint16_t x75 = 171U;
	volatile int32_t t18 = -13;

	t18 = ((x73&(x74<x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x77 = INT64_MAX;
	int32_t x78 = INT32_MIN;
	uint8_t x79 = 22U;
	uint8_t x80 = 2U;
	static volatile int32_t t19 = 1;

	t19 = ((x77&(x78<x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = 2729003;
	static uint32_t x82 = 42694366U;
	static int32_t t20 = 14;

	t20 = ((x81&(x82<x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x85 = -1LL;
	volatile int64_t x86 = -153LL;
	int32_t x87 = INT32_MIN;
	int8_t x88 = INT8_MAX;
	int32_t t21 = -2573976;

	t21 = ((x85&(x86<x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x89 = 0U;
	int8_t x92 = INT8_MAX;
	int32_t t22 = 5838907;

	t22 = ((x89&(x90<x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 2U;
	int8_t x94 = 3;
	uint32_t x96 = UINT32_MAX;
	static int32_t t23 = 14296;

	t23 = ((x93&(x94<x95))<x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile uint8_t x97 = 122U;
	volatile int64_t x98 = -175LL;
	int32_t x99 = INT32_MAX;
	static int32_t t24 = -276691;

	t24 = ((x97&(x98<x99))<x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MIN;
	uint64_t x102 = UINT64_MAX;
	int32_t t25 = 10937;

	t25 = ((x101&(x102<x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = INT32_MIN;
	static int16_t x106 = INT16_MAX;
	int64_t x107 = -97273130LL;
	volatile uint32_t x108 = 351U;
	volatile int32_t t26 = -4;

	t26 = ((x105&(x106<x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MIN;
	int32_t x110 = 2522;
	uint32_t x111 = UINT32_MAX;
	int16_t x112 = -1;
	int32_t t27 = 0;

	t27 = ((x109&(x110<x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = INT8_MIN;
	uint64_t x114 = 566771752883844724LLU;
	int8_t x115 = -2;
	volatile uint32_t x116 = 608123702U;
	int32_t t28 = 5;

	t28 = ((x113&(x114<x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int32_t x118 = -1;
	volatile int64_t x119 = 1206219739LL;
	volatile int64_t x120 = -3625373047537824560LL;
	int32_t t29 = 4120649;

	t29 = ((x117&(x118<x119))<x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x123 = -80354;
	uint64_t x124 = 293374329585LLU;
	volatile int32_t t30 = 690835867;

	t30 = ((x121&(x122<x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x126 = INT16_MIN;
	int16_t x128 = INT16_MIN;
	volatile int32_t t31 = 0;

	t31 = ((x125&(x126<x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -448889358;
	static volatile int8_t x130 = 32;
	int32_t x131 = 11;
	static volatile uint8_t x132 = UINT8_MAX;

	t32 = ((x129&(x130<x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x133 = UINT8_MAX;
	int16_t x136 = -7;
	volatile int32_t t33 = -11704043;

	t33 = ((x133&(x134<x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x138 = 8;
	volatile int32_t x139 = -1;
	uint16_t x140 = 0U;

	t34 = ((x137&(x138<x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x141 = 127U;
	static int64_t x142 = INT64_MIN;
	int8_t x143 = INT8_MAX;
	int32_t t35 = -1205;

	t35 = ((x141&(x142<x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	uint16_t x147 = 2831U;
	int8_t x148 = INT8_MIN;
	volatile int32_t t36 = -27040855;

	t36 = ((x145&(x146<x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1136;
	static int8_t x150 = 3;
	uint8_t x151 = UINT8_MAX;
	int32_t x152 = -1;
	volatile int32_t t37 = 46;

	t37 = ((x149&(x150<x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x153 = 903027139;
	static int16_t x154 = INT16_MIN;
	uint32_t x155 = UINT32_MAX;
	uint32_t x156 = 6516719U;
	int32_t t38 = 401711288;

	t38 = ((x153&(x154<x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = 7054;
	int64_t x158 = INT64_MIN;
	uint16_t x159 = UINT16_MAX;
	int16_t x160 = INT16_MIN;
	static volatile int32_t t39 = 1836149;

	t39 = ((x157&(x158<x159))<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = 112U;
	int64_t x162 = INT64_MAX;
	static volatile uint32_t x164 = UINT32_MAX;
	int32_t t40 = -1292218;

	t40 = ((x161&(x162<x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	static int8_t x166 = INT8_MAX;
	uint8_t x167 = 8U;
	int32_t x168 = 0;
	volatile int32_t t41 = 278834663;

	t41 = ((x165&(x166<x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile uint16_t x169 = 2685U;
	static uint16_t x170 = 0U;
	volatile int32_t x171 = INT32_MIN;

	t42 = ((x169&(x170<x171))<x172);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 227117831U;
	int16_t x174 = INT16_MIN;
	static uint8_t x175 = 73U;
	volatile int64_t x176 = INT64_MAX;
	static volatile int32_t t43 = 760626460;

	t43 = ((x173&(x174<x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = -79901;
	int32_t x178 = INT32_MIN;
	int32_t x180 = -97635828;
	volatile int32_t t44 = -19;

	t44 = ((x177&(x178<x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 1U;
	int8_t x182 = 2;
	int64_t x183 = INT64_MIN;
	int64_t x184 = -1053814827363LL;

	t45 = ((x181&(x182<x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x185 = INT8_MAX;
	int32_t x186 = INT32_MIN;
	uint64_t x187 = UINT64_MAX;
	volatile uint64_t x188 = 2999221446468487LLU;
	static volatile int32_t t46 = -650039;

	t46 = ((x185&(x186<x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint8_t x189 = UINT8_MAX;
	int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MIN;
	static volatile int8_t x192 = INT8_MIN;
	int32_t t47 = -6729536;

	t47 = ((x189&(x190<x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x193 = INT64_MAX;
	int64_t x194 = INT64_MIN;
	static int8_t x195 = -1;
	int32_t x196 = -1;

	t48 = ((x193&(x194<x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 63U;
	static uint64_t x198 = 706939LLU;
	uint32_t x199 = 451492U;
	static volatile int64_t x200 = -1LL;
	int32_t t49 = -75893508;

	t49 = ((x197&(x198<x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = -1510432433411261915LL;
	uint8_t x202 = 4U;
	int32_t x203 = -1;
	int32_t x204 = INT32_MIN;
	volatile int32_t t50 = -101;

	t50 = ((x201&(x202<x203))<x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = -1;
	static int8_t x206 = -1;
	int32_t x207 = INT32_MIN;
	int64_t x208 = 13051968LL;

	t51 = ((x205&(x206<x207))<x208);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = -67;
	static int8_t x210 = INT8_MAX;
	volatile uint8_t x211 = 16U;
	uint32_t x212 = 28428U;
	int32_t t52 = -61444272;

	t52 = ((x209&(x210<x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	uint8_t x214 = 3U;
	int64_t x215 = INT64_MIN;
	static volatile uint32_t x216 = 200645U;
	int32_t t53 = 2833;

	t53 = ((x213&(x214<x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x218 = INT8_MAX;
	int16_t x219 = -4369;
	volatile int64_t x220 = INT64_MIN;
	volatile int32_t t54 = 0;

	t54 = ((x217&(x218<x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -1;
	int64_t x222 = INT64_MAX;
	int8_t x223 = INT8_MAX;
	volatile uint16_t x224 = 20U;
	volatile int32_t t55 = -7;

	t55 = ((x221&(x222<x223))<x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x225 = INT16_MAX;
	static volatile int8_t x226 = INT8_MAX;
	uint16_t x227 = 15889U;
	uint32_t x228 = 518110891U;
	int32_t t56 = -3550;

	t56 = ((x225&(x226<x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 2442U;
	uint64_t x230 = UINT64_MAX;
	int32_t x231 = INT32_MIN;

	t57 = ((x229&(x230<x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x234 = INT64_MAX;
	volatile int64_t x236 = 0LL;
	volatile int32_t t58 = 313943257;

	t58 = ((x233&(x234<x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint32_t x237 = 15905U;
	uint32_t x239 = 10235676U;
	static volatile int32_t x240 = -38850;
	int32_t t59 = -1876;

	t59 = ((x237&(x238<x239))<x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MIN;
	int64_t x244 = INT64_MAX;
	int32_t t60 = 32629505;

	t60 = ((x241&(x242<x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 1LL;
	volatile int8_t x246 = -1;
	volatile int64_t x247 = INT64_MAX;
	int64_t x248 = -1LL;
	volatile int32_t t61 = -115989442;

	t61 = ((x245&(x246<x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int32_t x249 = INT32_MIN;
	int64_t x250 = 76530886659688LL;
	volatile int64_t x251 = INT64_MIN;
	int32_t t62 = 0;

	t62 = ((x249&(x250<x251))<x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 425246892621LLU;
	static int64_t x254 = INT64_MAX;
	int32_t x255 = INT32_MIN;
	uint32_t x256 = 345631U;
	static volatile int32_t t63 = -233;

	t63 = ((x253&(x254<x255))<x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x257 = 57LLU;
	int8_t x258 = -1;
	static int8_t x259 = -1;

	t64 = ((x257&(x258<x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x262 = INT16_MIN;
	int8_t x263 = INT8_MAX;
	static uint16_t x264 = 6534U;
	static volatile int32_t t65 = 19972;

	t65 = ((x261&(x262<x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = 344338;
	volatile int8_t x266 = 5;
	static uint16_t x267 = 448U;
	static volatile uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = -2870553;

	t66 = ((x265&(x266<x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = 3;
	int64_t x270 = -1LL;
	static int64_t x271 = INT64_MIN;
	int64_t x272 = 676373529663998266LL;
	static int32_t t67 = -50;

	t67 = ((x269&(x270<x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x273 = 2556U;
	volatile int8_t x274 = INT8_MIN;
	static uint64_t x275 = 410487955LLU;
	static int8_t x276 = 5;
	volatile int32_t t68 = 277721;

	t68 = ((x273&(x274<x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int16_t x278 = -1;
	int64_t x279 = -1LL;
	int32_t x280 = INT32_MIN;

	t69 = ((x277&(x278<x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x282 = UINT16_MAX;
	static volatile int8_t x283 = INT8_MIN;
	static int32_t x284 = INT32_MIN;

	t70 = ((x281&(x282<x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x285 = 27U;
	volatile int8_t x286 = -7;
	volatile uint32_t x287 = 4036859U;
	int32_t x288 = INT32_MAX;
	int32_t t71 = 1115235;

	t71 = ((x285&(x286<x287))<x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 5U;
	static int32_t x290 = -1;
	uint64_t x291 = UINT64_MAX;
	uint32_t x292 = 23U;
	volatile int32_t t72 = 989;

	t72 = ((x289&(x290<x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x294 = 13U;
	int8_t x295 = INT8_MIN;
	uint16_t x296 = UINT16_MAX;

	t73 = ((x293&(x294<x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	int64_t x298 = -1LL;
	uint32_t x299 = UINT32_MAX;
	int16_t x300 = -7;
	volatile int32_t t74 = 74152507;

	t74 = ((x297&(x298<x299))<x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = 21LLU;
	volatile uint16_t x302 = UINT16_MAX;
	int8_t x303 = -1;
	static volatile uint64_t x304 = UINT64_MAX;
	volatile int32_t t75 = -25309862;

	t75 = ((x301&(x302<x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x305 = 11;
	int8_t x306 = INT8_MAX;
	static volatile int8_t x307 = -1;
	volatile int64_t x308 = -342990754039849LL;
	static volatile int32_t t76 = 2;

	t76 = ((x305&(x306<x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x309 = 833U;
	static int64_t x310 = INT64_MAX;
	uint16_t x311 = 3U;
	volatile int64_t x312 = INT64_MAX;
	volatile int32_t t77 = -10116806;

	t77 = ((x309&(x310<x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x313 = 1012595U;
	uint8_t x314 = 29U;
	int16_t x315 = INT16_MAX;
	int32_t x316 = 120;
	int32_t t78 = 478;

	t78 = ((x313&(x314<x315))<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x319 = 191816697146LL;
	uint64_t x320 = 42388354044LLU;
	static int32_t t79 = -30763508;

	t79 = ((x317&(x318<x319))<x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x321 = 135905LLU;
	int16_t x322 = 0;
	int32_t x323 = -1;
	volatile uint32_t x324 = 1913249024U;

	t80 = ((x321&(x322<x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = 21U;
	uint64_t x328 = UINT64_MAX;
	volatile int32_t t81 = -303526;

	t81 = ((x325&(x326<x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = -5338083LL;
	uint32_t x331 = 48923695U;
	volatile int32_t t82 = -23691578;

	t82 = ((x329&(x330<x331))<x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x333 = INT16_MIN;
	int8_t x334 = INT8_MIN;
	volatile int16_t x336 = INT16_MIN;
	int32_t t83 = 7;

	t83 = ((x333&(x334<x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x337 = UINT16_MAX;
	volatile uint32_t x338 = 50334U;
	int16_t x339 = -55;
	uint32_t x340 = UINT32_MAX;
	volatile int32_t t84 = 1;

	t84 = ((x337&(x338<x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = 17867166911LL;
	uint8_t x342 = 1U;
	volatile uint8_t x343 = 11U;
	int64_t x344 = 253LL;
	static int32_t t85 = -126160846;

	t85 = ((x341&(x342<x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MIN;
	int16_t x346 = INT16_MIN;
	int8_t x347 = -1;
	volatile int32_t t86 = -143656;

	t86 = ((x345&(x346<x347))<x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	int8_t x350 = INT8_MIN;
	int8_t x351 = 19;
	int64_t x352 = INT64_MIN;
	int32_t t87 = -255115;

	t87 = ((x349&(x350<x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static int16_t x356 = INT16_MIN;

	t88 = ((x353&(x354<x355))<x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = 51;
	int32_t t89 = 1;

	t89 = ((x357&(x358<x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x361 = -1;
	int64_t x363 = INT64_MAX;
	static volatile int32_t t90 = 964799183;

	t90 = ((x361&(x362<x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x366 = UINT16_MAX;
	static uint64_t x367 = UINT64_MAX;
	int8_t x368 = INT8_MIN;
	static int32_t t91 = 12;

	t91 = ((x365&(x366<x367))<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = INT16_MAX;
	int64_t x370 = INT64_MAX;
	int8_t x371 = INT8_MAX;
	int32_t t92 = -2;

	t92 = ((x369&(x370<x371))<x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x374 = 469094888LLU;
	static volatile int32_t x375 = INT32_MAX;

	t93 = ((x373&(x374<x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x379 = INT64_MIN;
	uint8_t x380 = UINT8_MAX;

	t94 = ((x377&(x378<x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint16_t x381 = 13U;
	int32_t x382 = -69;
	int8_t x383 = INT8_MIN;
	volatile int32_t t95 = 71927;

	t95 = ((x381&(x382<x383))<x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int16_t x386 = -791;
	uint32_t x387 = 44724U;
	volatile int32_t t96 = -1;

	t96 = ((x385&(x386<x387))<x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	uint64_t x390 = UINT64_MAX;
	int32_t x392 = -1;
	volatile int32_t t97 = 2;

	t97 = ((x389&(x390<x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x393 = 2U;
	uint64_t x394 = 895013720610284LLU;
	int32_t x395 = -1;
	volatile int16_t x396 = -13;
	int32_t t98 = 0;

	t98 = ((x393&(x394<x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x397 = 1074LLU;
	int16_t x398 = INT16_MIN;
	uint16_t x399 = 23964U;
	volatile int16_t x400 = INT16_MIN;
	static volatile int32_t t99 = -31720;

	t99 = ((x397&(x398<x399))<x400);

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

