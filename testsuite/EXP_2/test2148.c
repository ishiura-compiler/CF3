#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = 2413005LL;
uint16_t x9 = 42U;
int32_t t2 = -156058404;
int16_t x33 = INT16_MIN;
uint8_t x34 = UINT8_MAX;
static int64_t x37 = -5524581LL;
uint16_t x39 = 166U;
uint64_t x40 = 8519496802839LLU;
static volatile uint64_t t9 = 1629036870730075LLU;
int8_t x47 = -1;
static uint64_t x48 = UINT64_MAX;
uint64_t t11 = 168933LLU;
int32_t x50 = -1;
uint32_t x54 = UINT32_MAX;
volatile int8_t x56 = INT8_MIN;
volatile int32_t x64 = INT32_MIN;
int32_t t15 = 1;
int32_t x67 = -4;
volatile int16_t x68 = 41;
volatile uint64_t x71 = UINT64_MAX;
uint8_t x75 = 0U;
int16_t x78 = -1;
static int16_t x80 = INT16_MIN;
uint16_t x87 = 1U;
static volatile int32_t x88 = -1;
static int16_t x90 = INT16_MIN;
static uint8_t x92 = 0U;
static int32_t t23 = 704568766;
volatile int8_t x98 = 3;
static int32_t x100 = INT32_MIN;
volatile uint32_t x101 = 25564335U;
int32_t t27 = 9676;
volatile int32_t x115 = 3;
volatile int32_t t28 = 10298;
uint8_t x121 = 24U;
static int16_t x125 = INT16_MIN;
volatile uint8_t x131 = UINT8_MAX;
int32_t x134 = -1;
volatile int32_t t34 = 0;
volatile int32_t t35 = INT32_MIN;
int8_t x145 = INT8_MAX;
volatile int64_t t36 = INT64_MIN;
volatile int32_t x152 = 64300000;
int16_t x154 = 616;
volatile uint16_t x158 = 7740U;
int16_t x163 = INT16_MAX;
volatile int32_t t40 = 172015;
static int32_t x173 = -1;
int32_t x177 = INT32_MIN;
volatile int32_t t44 = -837094095;
volatile int32_t t45 = INT32_MIN;
static int16_t x187 = -11765;
int16_t x193 = INT16_MIN;
volatile int64_t x194 = -1LL;
int32_t t49 = 0;
volatile uint32_t x213 = 151542U;
int8_t x214 = 0;
volatile uint64_t x215 = 9LLU;
int32_t t54 = INT32_MAX;
static int64_t x226 = -559692951974010LL;
int16_t x230 = -28;
volatile uint32_t x231 = 3U;
static uint16_t x232 = 508U;
int32_t x234 = -1;
int32_t x237 = -1;
volatile int64_t x241 = INT64_MAX;
int16_t x242 = INT16_MAX;
volatile int32_t t60 = -478116391;
int8_t x245 = 0;
uint32_t x246 = 1891198U;
static int8_t x247 = -1;
volatile int8_t x251 = -1;
static int64_t x252 = INT64_MAX;
volatile int64_t t62 = INT64_MAX;
static volatile uint16_t x253 = UINT16_MAX;
volatile int8_t x254 = INT8_MIN;
int64_t x255 = INT64_MIN;
static int32_t x264 = -1;
volatile int8_t x265 = INT8_MAX;
static volatile int64_t x269 = INT64_MIN;
int8_t x270 = INT8_MIN;
int8_t x273 = INT8_MIN;
static volatile uint8_t x275 = 16U;
volatile uint64_t t68 = 47005399943902550LLU;
uint8_t x279 = UINT8_MAX;
static volatile int64_t x280 = INT64_MIN;
volatile int32_t x285 = -343434;
int64_t x287 = INT64_MIN;
int8_t x288 = 0;
volatile int64_t x297 = INT64_MIN;
uint8_t x301 = 2U;
volatile int64_t t75 = -45165722985LL;
uint64_t x306 = UINT64_MAX;
volatile uint16_t x307 = UINT16_MAX;
int16_t x309 = INT16_MIN;
int32_t x317 = INT32_MIN;
static int16_t x320 = INT16_MAX;
int32_t t80 = -1772;
static int32_t t81 = -24;
static int32_t x329 = 20541;
uint64_t x331 = 11523500607099LLU;
int32_t x333 = -31300;
uint16_t x339 = 1349U;
int16_t x346 = INT16_MIN;
uint64_t x348 = UINT64_MAX;
int64_t x350 = INT64_MIN;
static int32_t x351 = INT32_MIN;
volatile uint32_t t87 = UINT32_MAX;
static int32_t x359 = -1;
static int16_t x363 = 251;
int16_t x364 = INT16_MAX;
volatile int32_t t90 = 67;
uint16_t x371 = 120U;
volatile int32_t t94 = -4023847;
int16_t x383 = INT16_MIN;
uint32_t t95 = 141148U;
static uint8_t x386 = 20U;
static volatile uint64_t t96 = 1LLU;
int8_t x394 = INT8_MAX;
int8_t x399 = -57;


void f0(void) {
	uint32_t x1 = 227U;
	uint32_t x2 = 20U;
	uint8_t x3 = 1U;
	volatile uint8_t x4 = 14U;
	volatile int32_t t0 = 1310905;

	t0 = ((x1<=(x2^x3))*x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = 5;
	int16_t x6 = -1;
	static uint16_t x7 = 150U;
	volatile int64_t t1 = 67LL;

	t1 = ((x5<=(x6^x7))*x8);

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x10 = INT32_MIN;
	int16_t x11 = INT16_MIN;
	int16_t x12 = -12;

	t2 = ((x9<=(x10^x11))*x12);

	if (t2 != -12) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = 1394661991808563LL;
	volatile int8_t x14 = INT8_MIN;
	uint32_t x15 = UINT32_MAX;
	int64_t x16 = INT64_MIN;
	int64_t t3 = 7097065LL;

	t3 = ((x13<=(x14^x15))*x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = 16632;
	int8_t x18 = INT8_MIN;
	static int8_t x19 = -3;
	int8_t x20 = INT8_MIN;
	volatile int32_t t4 = -83;

	t4 = ((x17<=(x18^x19))*x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 15U;
	volatile int8_t x22 = 0;
	uint32_t x23 = UINT32_MAX;
	int16_t x24 = INT16_MAX;
	static volatile int32_t t5 = -5;

	t5 = ((x21<=(x22^x23))*x24);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x25 = INT8_MIN;
	uint64_t x26 = UINT64_MAX;
	static int8_t x27 = INT8_MIN;
	static volatile int16_t x28 = INT16_MIN;
	static volatile int32_t t6 = -250584;

	t6 = ((x25<=(x26^x27))*x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MIN;
	volatile uint32_t x30 = 664007U;
	volatile int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MIN;
	static int32_t t7 = 125125;

	t7 = ((x29<=(x30^x31))*x32);

	if (t7 != -128) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x35 = 70U;
	volatile uint64_t x36 = 11842373776360020LLU;
	uint64_t t8 = 8147461LLU;

	t8 = ((x33<=(x34^x35))*x36);

	if (t8 != 11842373776360020LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x38 = UINT16_MAX;

	t9 = ((x37<=(x38^x39))*x40);

	if (t9 != 8519496802839LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -932;
	int32_t x42 = INT32_MAX;
	int64_t x43 = INT64_MIN;
	uint64_t x44 = UINT64_MAX;
	volatile uint64_t t10 = 0LLU;

	t10 = ((x41<=(x42^x43))*x44);

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MAX;
	int16_t x46 = -10;

	t11 = ((x45<=(x46^x47))*x48);

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MAX;
	volatile int64_t x51 = 59724710981LL;
	uint16_t x52 = 341U;
	static int32_t t12 = -155629;

	t12 = ((x49<=(x50^x51))*x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x53 = INT16_MIN;
	int32_t x55 = 734;
	int32_t t13 = -224699836;

	t13 = ((x53<=(x54^x55))*x56);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	int64_t x58 = -154253064549088277LL;
	uint16_t x59 = 202U;
	static volatile uint32_t x60 = UINT32_MAX;
	volatile uint32_t t14 = 13003U;

	t14 = ((x57<=(x58^x59))*x60);

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = 15;
	static uint8_t x62 = 22U;
	int32_t x63 = INT32_MIN;

	t15 = ((x61<=(x62^x63))*x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x65 = 4748017;
	int32_t x66 = INT32_MIN;
	static int32_t t16 = 57012231;

	t16 = ((x65<=(x66^x67))*x68);

	if (t16 != 41) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = 397322136;
	static int8_t x70 = 5;
	static volatile int8_t x72 = -1;
	static volatile int32_t t17 = 995;

	t17 = ((x69<=(x70^x71))*x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x73 = -1;
	static uint16_t x74 = UINT16_MAX;
	static uint32_t x76 = 7009017U;
	uint32_t t18 = 53999U;

	t18 = ((x73<=(x74^x75))*x76);

	if (t18 != 7009017U) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -14193609732433582LL;
	volatile uint8_t x79 = UINT8_MAX;
	static int32_t t19 = -65689961;

	t19 = ((x77<=(x78^x79))*x80);

	if (t19 != -32768) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = 203742LLU;
	int32_t x82 = -1;
	int8_t x83 = INT8_MAX;
	uint16_t x84 = 11U;
	volatile int32_t t20 = 30747691;

	t20 = ((x81<=(x82^x83))*x84);

	if (t20 != 11) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	static int16_t x86 = INT16_MIN;
	volatile int32_t t21 = -8;

	t21 = ((x85<=(x86^x87))*x88);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x89 = 614;
	static int32_t x91 = INT32_MIN;
	volatile int32_t t22 = 82020;

	t22 = ((x89<=(x90^x91))*x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint32_t x93 = UINT32_MAX;
	static uint8_t x94 = UINT8_MAX;
	uint64_t x95 = UINT64_MAX;
	volatile int8_t x96 = INT8_MAX;

	t23 = ((x93<=(x94^x95))*x96);

	if (t23 != 127) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	uint8_t x99 = 0U;
	volatile int32_t t24 = INT32_MIN;

	t24 = ((x97<=(x98^x99))*x100);

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x102 = 57951131238LLU;
	static int16_t x103 = INT16_MAX;
	int16_t x104 = INT16_MIN;
	volatile int32_t t25 = -70470;

	t25 = ((x101<=(x102^x103))*x104);

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int8_t x105 = INT8_MIN;
	volatile int16_t x106 = -1;
	volatile int64_t x107 = -1036LL;
	uint64_t x108 = 64666122694065984LLU;
	uint64_t t26 = 4LLU;

	t26 = ((x105<=(x106^x107))*x108);

	if (t26 != 64666122694065984LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x109 = 88LL;
	uint16_t x110 = 336U;
	static int32_t x111 = INT32_MAX;
	static uint8_t x112 = UINT8_MAX;

	t27 = ((x109<=(x110^x111))*x112);

	if (t27 != 255) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x113 = 2652U;
	int64_t x114 = -1LL;
	int16_t x116 = -282;

	t28 = ((x113<=(x114^x115))*x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	volatile uint8_t x118 = 117U;
	volatile int8_t x119 = 2;
	int32_t x120 = -1;
	volatile int32_t t29 = 3233;

	t29 = ((x117<=(x118^x119))*x120);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x122 = 24U;
	int8_t x123 = INT8_MAX;
	static int16_t x124 = -7;
	int32_t t30 = 0;

	t30 = ((x121<=(x122^x123))*x124);

	if (t30 != -7) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x126 = INT8_MIN;
	volatile int32_t x127 = INT32_MIN;
	uint64_t x128 = 6431117LLU;
	volatile uint64_t t31 = 172LLU;

	t31 = ((x125<=(x126^x127))*x128);

	if (t31 != 6431117LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = 3379662U;
	int32_t x130 = -1;
	int64_t x132 = -1LL;
	static volatile int64_t t32 = -1107LL;

	t32 = ((x129<=(x130^x131))*x132);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = -4LL;
	int32_t x135 = 3444020;
	int8_t x136 = 0;
	static int32_t t33 = 1;

	t33 = ((x133<=(x134^x135))*x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	volatile int16_t x138 = -1;
	static int8_t x139 = INT8_MAX;
	int16_t x140 = -1;

	t34 = ((x137<=(x138^x139))*x140);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x141 = 4;
	uint64_t x142 = UINT64_MAX;
	uint8_t x143 = 35U;
	int32_t x144 = INT32_MIN;

	t35 = ((x141<=(x142^x143))*x144);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x146 = 603266309U;
	volatile int8_t x147 = INT8_MIN;
	int64_t x148 = INT64_MIN;

	t36 = ((x145<=(x146^x147))*x148);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = 126U;
	int32_t x150 = INT32_MIN;
	volatile int64_t x151 = INT64_MIN;
	static int32_t t37 = 402417;

	t37 = ((x149<=(x150^x151))*x152);

	if (t37 != 64300000) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x153 = 4;
	int8_t x155 = INT8_MAX;
	int8_t x156 = INT8_MIN;
	static int32_t t38 = -10510600;

	t38 = ((x153<=(x154^x155))*x156);

	if (t38 != -128) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x157 = INT8_MIN;
	int8_t x159 = -1;
	uint8_t x160 = 78U;
	static volatile int32_t t39 = -103;

	t39 = ((x157<=(x158^x159))*x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x161 = 84466594503146LLU;
	int32_t x162 = INT32_MAX;
	static int32_t x164 = INT32_MAX;

	t40 = ((x161<=(x162^x163))*x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = 7140;
	int32_t x166 = -1;
	int8_t x167 = -47;
	volatile uint16_t x168 = UINT16_MAX;
	volatile int32_t t41 = 388387464;

	t41 = ((x165<=(x166^x167))*x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int64_t x170 = 359505927LL;
	int32_t x171 = -719020179;
	static uint32_t x172 = 53288646U;
	volatile uint32_t t42 = 263815091U;

	t42 = ((x169<=(x170^x171))*x172);

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x174 = UINT8_MAX;
	int32_t x175 = INT32_MIN;
	int32_t x176 = 0;
	static volatile int32_t t43 = 202;

	t43 = ((x173<=(x174^x175))*x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x178 = 0;
	volatile int8_t x179 = INT8_MIN;
	uint8_t x180 = UINT8_MAX;

	t44 = ((x177<=(x178^x179))*x180);

	if (t44 != 255) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = 2448LLU;
	int16_t x182 = INT16_MAX;
	int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MIN;

	t45 = ((x181<=(x182^x183))*x184);

	if (t45 != INT32_MIN) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 0U;
	int64_t x186 = INT64_MIN;
	int16_t x188 = 1;
	int32_t t46 = 1;

	t46 = ((x185<=(x186^x187))*x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MIN;
	volatile int32_t x192 = INT32_MAX;
	int32_t t47 = INT32_MAX;

	t47 = ((x189<=(x190^x191))*x192);

	if (t47 != INT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int64_t x195 = INT64_MIN;
	int16_t x196 = -288;
	int32_t t48 = -923288008;

	t48 = ((x193<=(x194^x195))*x196);

	if (t48 != -288) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = 1732248442U;
	static int16_t x198 = 5;
	int16_t x199 = INT16_MIN;
	int8_t x200 = -1;

	t49 = ((x197<=(x198^x199))*x200);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	uint32_t x201 = 127U;
	int32_t x202 = INT32_MAX;
	uint64_t x203 = UINT64_MAX;
	static int64_t x204 = INT64_MAX;
	int64_t t50 = INT64_MAX;

	t50 = ((x201<=(x202^x203))*x204);

	if (t50 != INT64_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = -1;
	volatile int8_t x206 = 26;
	uint64_t x207 = UINT64_MAX;
	uint8_t x208 = UINT8_MAX;
	static volatile int32_t t51 = -28122;

	t51 = ((x205<=(x206^x207))*x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x209 = INT16_MIN;
	int32_t x210 = INT32_MIN;
	uint8_t x211 = 1U;
	int8_t x212 = 56;
	static volatile int32_t t52 = 866;

	t52 = ((x209<=(x210^x211))*x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x216 = UINT16_MAX;
	volatile int32_t t53 = -9972;

	t53 = ((x213<=(x214^x215))*x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = -1;
	volatile int64_t x218 = INT64_MAX;
	static volatile uint8_t x219 = UINT8_MAX;
	int32_t x220 = INT32_MAX;

	t54 = ((x217<=(x218^x219))*x220);

	if (t54 != INT32_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x221 = 63379788334LLU;
	int16_t x222 = INT16_MIN;
	uint16_t x223 = 0U;
	uint8_t x224 = 13U;
	static int32_t t55 = -1071957059;

	t55 = ((x221<=(x222^x223))*x224);

	if (t55 != 13) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = -42143LL;
	uint64_t x227 = 81338282064241LLU;
	static int32_t x228 = 3724;
	int32_t t56 = 43704062;

	t56 = ((x225<=(x226^x227))*x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -8039894342277909LL;
	volatile int32_t t57 = -123214;

	t57 = ((x229<=(x230^x231))*x232);

	if (t57 != 508) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x233 = 5393U;
	uint16_t x235 = 13U;
	uint32_t x236 = 1592347U;
	uint32_t t58 = 22453U;

	t58 = ((x233<=(x234^x235))*x236);

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x238 = INT8_MAX;
	static int64_t x239 = -61004065316692LL;
	static uint8_t x240 = 1U;
	int32_t t59 = 60821821;

	t59 = ((x237<=(x238^x239))*x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x243 = 249;
	int16_t x244 = -854;

	t60 = ((x241<=(x242^x243))*x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x248 = 532;
	static int32_t t61 = 1100;

	t61 = ((x245<=(x246^x247))*x248);

	if (t61 != 532) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x249 = UINT8_MAX;
	uint64_t x250 = 1453392LLU;

	t62 = ((x249<=(x250^x251))*x252);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x256 = 55500609416LLU;
	volatile uint64_t t63 = 125425800LLU;

	t63 = ((x253<=(x254^x255))*x256);

	if (t63 != 55500609416LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x257 = UINT32_MAX;
	static int8_t x258 = INT8_MIN;
	static volatile int64_t x259 = -2990015546374923LL;
	volatile int16_t x260 = INT16_MIN;
	static int32_t t64 = 815472073;

	t64 = ((x257<=(x258^x259))*x260);

	if (t64 != -32768) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	uint32_t x262 = 6826023U;
	uint32_t x263 = 810U;
	volatile int32_t t65 = -40;

	t65 = ((x261<=(x262^x263))*x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x266 = -2;
	int16_t x267 = 3808;
	volatile int8_t x268 = INT8_MAX;
	static int32_t t66 = 14;

	t66 = ((x265<=(x266^x267))*x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x271 = -1;
	int64_t x272 = -1LL;
	static int64_t t67 = -15517LL;

	t67 = ((x269<=(x270^x271))*x272);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x274 = INT64_MIN;
	uint64_t x276 = UINT64_MAX;

	t68 = ((x273<=(x274^x275))*x276);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = INT32_MAX;
	volatile int8_t x278 = INT8_MIN;
	int64_t t69 = 50LL;

	t69 = ((x277<=(x278^x279))*x280);

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile uint8_t x281 = UINT8_MAX;
	static uint16_t x282 = 10U;
	volatile uint64_t x283 = 3839237490913LLU;
	volatile uint8_t x284 = 58U;
	volatile int32_t t70 = -696126;

	t70 = ((x281<=(x282^x283))*x284);

	if (t70 != 58) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = INT16_MIN;
	int32_t t71 = -1496;

	t71 = ((x285<=(x286^x287))*x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 5U;
	static int16_t x290 = 1022;
	static int16_t x291 = -1;
	volatile uint64_t x292 = 2327236LLU;
	volatile uint64_t t72 = 2866964163854LLU;

	t72 = ((x289<=(x290^x291))*x292);

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x293 = -1;
	volatile int16_t x294 = INT16_MIN;
	volatile uint8_t x295 = 17U;
	static int32_t x296 = -1;
	volatile int32_t t73 = 1019448;

	t73 = ((x293<=(x294^x295))*x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x298 = UINT16_MAX;
	static uint64_t x299 = UINT64_MAX;
	int16_t x300 = INT16_MAX;
	static int32_t t74 = 1886890;

	t74 = ((x297<=(x298^x299))*x300);

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x302 = INT64_MIN;
	int8_t x303 = 58;
	volatile int64_t x304 = INT64_MIN;

	t75 = ((x301<=(x302^x303))*x304);

	if (t75 != 0LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x305 = -1;
	uint32_t x308 = 1370968874U;
	volatile uint32_t t76 = 2021435U;

	t76 = ((x305<=(x306^x307))*x308);

	if (t76 != 0U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint16_t x310 = 5U;
	volatile int16_t x311 = INT16_MAX;
	int64_t x312 = INT64_MIN;
	static volatile int64_t t77 = INT64_MIN;

	t77 = ((x309<=(x310^x311))*x312);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = UINT64_MAX;
	static int32_t x314 = -1;
	int64_t x315 = -1LL;
	uint8_t x316 = 47U;
	int32_t t78 = 4321;

	t78 = ((x313<=(x314^x315))*x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x318 = 40U;
	int16_t x319 = 7767;
	int32_t t79 = -155855374;

	t79 = ((x317<=(x318^x319))*x320);

	if (t79 != 32767) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int8_t x322 = -1;
	static volatile int16_t x323 = 26;
	uint16_t x324 = UINT16_MAX;

	t80 = ((x321<=(x322^x323))*x324);

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x325 = -66312813;
	uint8_t x326 = 0U;
	static uint8_t x327 = UINT8_MAX;
	static int16_t x328 = -1;

	t81 = ((x325<=(x326^x327))*x328);

	if (t81 != -1) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x330 = UINT8_MAX;
	uint64_t x332 = 232928236201583LLU;
	uint64_t t82 = 745182LLU;

	t82 = ((x329<=(x330^x331))*x332);

	if (t82 != 232928236201583LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int8_t x334 = 0;
	uint8_t x335 = 1U;
	int8_t x336 = -3;
	volatile int32_t t83 = 4309089;

	t83 = ((x333<=(x334^x335))*x336);

	if (t83 != -3) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x337 = INT32_MIN;
	int32_t x338 = INT32_MAX;
	int32_t x340 = INT32_MAX;
	static volatile int32_t t84 = INT32_MAX;

	t84 = ((x337<=(x338^x339))*x340);

	if (t84 != INT32_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = 896309LL;
	int8_t x342 = INT8_MIN;
	volatile int32_t x343 = INT32_MAX;
	int64_t x344 = -1LL;
	volatile int64_t t85 = -2850643775583062LL;

	t85 = ((x341<=(x342^x343))*x344);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = 3974LL;
	volatile uint64_t x347 = 487174440923LLU;
	uint64_t t86 = UINT64_MAX;

	t86 = ((x345<=(x346^x347))*x348);

	if (t86 != UINT64_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = 203885;
	static volatile uint32_t x352 = UINT32_MAX;

	t87 = ((x349<=(x350^x351))*x352);

	if (t87 != UINT32_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint64_t x353 = 844964998822204842LLU;
	volatile uint64_t x354 = 140835LLU;
	int16_t x355 = INT16_MIN;
	volatile int8_t x356 = INT8_MIN;
	volatile int32_t t88 = -60180726;

	t88 = ((x353<=(x354^x355))*x356);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = -1;
	static int32_t x358 = INT32_MIN;
	volatile uint32_t x360 = 42656U;
	static uint32_t t89 = 18341U;

	t89 = ((x357<=(x358^x359))*x360);

	if (t89 != 42656U) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MIN;
	int64_t x362 = 259LL;

	t90 = ((x361<=(x362^x363))*x364);

	if (t90 != 32767) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -28;
	static uint8_t x366 = UINT8_MAX;
	int64_t x367 = INT64_MIN;
	uint32_t x368 = 10757335U;
	uint32_t t91 = 15438850U;

	t91 = ((x365<=(x366^x367))*x368);

	if (t91 != 0U) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x369 = 26U;
	volatile uint64_t x370 = UINT64_MAX;
	static volatile uint8_t x372 = 0U;
	int32_t t92 = -13474;

	t92 = ((x369<=(x370^x371))*x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 45403049LLU;
	uint64_t x374 = 465782601972175777LLU;
	uint8_t x375 = 0U;
	int64_t x376 = 191900215763LL;
	int64_t t93 = 309346779419LL;

	t93 = ((x373<=(x374^x375))*x376);

	if (t93 != 191900215763LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = -1LL;
	uint8_t x378 = 1U;
	int16_t x379 = 10;
	int8_t x380 = INT8_MAX;

	t94 = ((x377<=(x378^x379))*x380);

	if (t94 != 127) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = 0;
	uint32_t x382 = 5732659U;
	uint32_t x384 = 284U;

	t95 = ((x381<=(x382^x383))*x384);

	if (t95 != 284U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x385 = 3U;
	volatile uint16_t x387 = UINT16_MAX;
	static uint64_t x388 = 5727138403873324LLU;

	t96 = ((x385<=(x386^x387))*x388);

	if (t96 != 5727138403873324LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int16_t x389 = INT16_MAX;
	uint64_t x390 = UINT64_MAX;
	int64_t x391 = INT64_MIN;
	volatile uint16_t x392 = UINT16_MAX;
	int32_t t97 = 15;

	t97 = ((x389<=(x390^x391))*x392);

	if (t97 != 65535) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 57U;
	static int8_t x395 = INT8_MIN;
	int8_t x396 = -1;
	volatile int32_t t98 = -60;

	t98 = ((x393<=(x394^x395))*x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = INT32_MIN;
	uint32_t x398 = UINT32_MAX;
	static int16_t x400 = -1;
	volatile int32_t t99 = 0;

	t99 = ((x397<=(x398^x399))*x400);

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

