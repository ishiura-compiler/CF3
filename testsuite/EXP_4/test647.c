#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x11 = 127U;
uint16_t x12 = 478U;
volatile int64_t x20 = INT64_MIN;
int16_t x29 = INT16_MIN;
int32_t x39 = -1;
int8_t x43 = INT8_MAX;
int8_t x50 = INT8_MAX;
int64_t x58 = INT64_MIN;
static uint8_t x59 = 6U;
int32_t x64 = INT32_MIN;
int32_t t15 = 11010;
int32_t t18 = -648189409;
int16_t x85 = -1099;
volatile int32_t t19 = -323679562;
int8_t x90 = -1;
int32_t t20 = 26769419;
int64_t x95 = INT64_MIN;
uint8_t x100 = 48U;
int16_t x104 = INT16_MIN;
static volatile int64_t x108 = INT64_MIN;
static uint32_t x116 = 5U;
static int64_t x127 = INT64_MIN;
static int64_t x133 = INT64_MIN;
static uint64_t x141 = 52087619051LLU;
int8_t x145 = 13;
static volatile int32_t t35 = -549;
uint16_t x157 = UINT16_MAX;
uint8_t x158 = UINT8_MAX;
uint64_t x160 = 409020LLU;
int64_t x161 = 4LL;
int32_t x164 = INT32_MAX;
uint8_t x166 = 1U;
static uint32_t x173 = UINT32_MAX;
uint8_t x174 = 12U;
volatile int64_t x175 = INT64_MAX;
volatile int32_t t41 = -234;
int16_t x191 = INT16_MIN;
uint8_t x192 = 96U;
volatile int32_t t43 = -515558;
int32_t t44 = -840733;
uint8_t x207 = 0U;
static volatile int64_t x213 = -976384LL;
static volatile int32_t t49 = -12562288;
int16_t x234 = -255;
int32_t x237 = INT32_MIN;
uint8_t x242 = UINT8_MAX;
int8_t x245 = -1;
static uint64_t x246 = 2030435369LLU;
static volatile uint16_t x247 = 326U;
volatile uint32_t x248 = 2U;
uint32_t x266 = 24838644U;
uint32_t x270 = UINT32_MAX;
volatile int16_t x272 = 1;
int8_t x275 = -1;
int32_t x278 = INT32_MAX;
int8_t x283 = INT8_MAX;
uint64_t x284 = UINT64_MAX;
volatile uint16_t x288 = 752U;
int32_t t66 = -22315;
static uint32_t x293 = 221U;
uint32_t x294 = 7246656U;
int16_t x307 = 1603;
uint32_t x310 = 7U;
uint16_t x314 = UINT16_MAX;
static volatile uint32_t x323 = 1965271320U;
int32_t x324 = -1;
int32_t x340 = INT32_MAX;
int32_t t77 = -511;
int64_t x345 = 3905355921LL;
volatile int32_t t79 = -1;
static uint64_t x351 = 758327256081997056LLU;
uint32_t x354 = 1U;
volatile int8_t x371 = -1;
uint16_t x379 = UINT16_MAX;
volatile int32_t t87 = 4335224;
uint8_t x391 = UINT8_MAX;
uint64_t x395 = UINT64_MAX;
volatile int32_t t91 = 174;
int64_t x401 = 478LL;
volatile int32_t t95 = -589176;
int32_t t98 = -8;
int8_t x429 = INT8_MAX;


void f0(void) {
	uint64_t x1 = 11LLU;
	int16_t x2 = INT16_MIN;
	static volatile uint8_t x3 = 28U;
	int64_t x4 = INT64_MAX;
	int32_t t0 = 94486446;

	t0 = (x1<=(x2&(x3/x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x5 = 3;
	int16_t x6 = INT16_MIN;
	int8_t x7 = -1;
	uint16_t x8 = 2U;
	int32_t t1 = -2267992;

	t1 = (x5<=(x6&(x7/x8)));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = 4065U;
	int8_t x10 = INT8_MAX;
	volatile int32_t t2 = 117046970;

	t2 = (x9<=(x10&(x11/x12)));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x17 = -1LL;
	uint16_t x18 = 1U;
	int64_t x19 = -3130891380756340830LL;
	static int32_t t3 = -332;

	t3 = (x17<=(x18&(x19/x20)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x25 = INT8_MIN;
	volatile int8_t x26 = -1;
	int16_t x27 = INT16_MIN;
	uint64_t x28 = 2695LLU;
	static volatile int32_t t4 = 247;

	t4 = (x25<=(x26&(x27/x28)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x30 = INT64_MIN;
	static int32_t x31 = -1;
	volatile int32_t x32 = -17806;
	volatile int32_t t5 = 103;

	t5 = (x29<=(x30&(x31/x32)));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x33 = INT64_MIN;
	volatile uint8_t x34 = 21U;
	volatile int8_t x35 = INT8_MIN;
	static uint64_t x36 = UINT64_MAX;
	int32_t t6 = 174847949;

	t6 = (x33<=(x34&(x35/x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x37 = 15191402900973504LLU;
	static volatile int64_t x38 = INT64_MAX;
	int32_t x40 = INT32_MIN;
	int32_t t7 = -2720;

	t7 = (x37<=(x38&(x39/x40)));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x41 = UINT16_MAX;
	uint64_t x42 = 49477036LLU;
	volatile uint16_t x44 = UINT16_MAX;
	volatile int32_t t8 = 311060;

	t8 = (x41<=(x42&(x43/x44)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x45 = 28974;
	uint16_t x46 = 10U;
	int64_t x47 = INT64_MIN;
	volatile uint8_t x48 = 22U;
	volatile int32_t t9 = 184232394;

	t9 = (x45<=(x46&(x47/x48)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x49 = -40560025135333LL;
	static int8_t x51 = -1;
	uint32_t x52 = UINT32_MAX;
	int32_t t10 = -31082309;

	t10 = (x49<=(x50&(x51/x52)));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint16_t x53 = 16U;
	static uint32_t x54 = 1U;
	uint16_t x55 = 28276U;
	volatile uint64_t x56 = 100352489LLU;
	volatile int32_t t11 = 129;

	t11 = (x53<=(x54&(x55/x56)));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	uint64_t x60 = UINT64_MAX;
	volatile int32_t t12 = 98022;

	t12 = (x57<=(x58&(x59/x60)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static uint8_t x61 = 0U;
	int16_t x62 = INT16_MIN;
	uint64_t x63 = 51045LLU;
	volatile int32_t t13 = -851;

	t13 = (x61<=(x62&(x63/x64)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x65 = UINT8_MAX;
	int32_t x66 = 5283317;
	uint16_t x67 = 5184U;
	int16_t x68 = INT16_MIN;
	int32_t t14 = 498;

	t14 = (x65<=(x66&(x67/x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x69 = 45;
	static int8_t x70 = INT8_MIN;
	uint8_t x71 = 5U;
	static uint8_t x72 = UINT8_MAX;

	t15 = (x69<=(x70&(x71/x72)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = INT64_MAX;
	static volatile int32_t x74 = -3;
	int8_t x75 = -13;
	static int8_t x76 = INT8_MAX;
	volatile int32_t t16 = -19985;

	t16 = (x73<=(x74&(x75/x76)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x77 = INT16_MIN;
	volatile int64_t x78 = INT64_MAX;
	volatile int32_t x79 = INT32_MIN;
	int64_t x80 = INT64_MAX;
	int32_t t17 = 1;

	t17 = (x77<=(x78&(x79/x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MAX;
	volatile int32_t x82 = -1;
	int16_t x83 = -1;
	int16_t x84 = INT16_MIN;

	t18 = (x81<=(x82&(x83/x84)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x86 = -1;
	volatile uint64_t x87 = 28487374LLU;
	static int64_t x88 = INT64_MIN;

	t19 = (x85<=(x86&(x87/x88)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 973013684434221LLU;
	int64_t x91 = INT64_MAX;
	int16_t x92 = -6948;

	t20 = (x89<=(x90&(x91/x92)));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x93 = 2;
	volatile int16_t x94 = -1;
	int64_t x96 = -118562902LL;
	volatile int32_t t21 = -4;

	t21 = (x93<=(x94&(x95/x96)));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static int16_t x97 = -1;
	int64_t x98 = 247LL;
	uint32_t x99 = 879142560U;
	volatile int32_t t22 = 21730;

	t22 = (x97<=(x98&(x99/x100)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x101 = 213035016LLU;
	static int16_t x102 = -1;
	uint64_t x103 = 1317193709481LLU;
	int32_t t23 = 31696093;

	t23 = (x101<=(x102&(x103/x104)));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x105 = UINT8_MAX;
	uint8_t x106 = 6U;
	volatile int64_t x107 = 3495LL;
	volatile int32_t t24 = -3105213;

	t24 = (x105<=(x106&(x107/x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x109 = -1;
	int64_t x110 = INT64_MIN;
	static volatile int16_t x111 = -4061;
	int64_t x112 = -1LL;
	volatile int32_t t25 = -269;

	t25 = (x109<=(x110&(x111/x112)));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x113 = 491503LLU;
	static int32_t x114 = 0;
	int64_t x115 = INT64_MIN;
	volatile int32_t t26 = 159324678;

	t26 = (x113<=(x114&(x115/x116)));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int32_t x117 = -5143;
	int64_t x118 = INT64_MAX;
	int16_t x119 = INT16_MIN;
	uint16_t x120 = 3U;
	int32_t t27 = 1869;

	t27 = (x117<=(x118&(x119/x120)));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x121 = 1;
	int32_t x122 = INT32_MAX;
	static uint32_t x123 = 134U;
	int32_t x124 = INT32_MIN;
	volatile int32_t t28 = -59;

	t28 = (x121<=(x122&(x123/x124)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x125 = -1;
	uint64_t x126 = 226305374945788LLU;
	uint8_t x128 = 52U;
	volatile int32_t t29 = 128181;

	t29 = (x125<=(x126&(x127/x128)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x129 = INT8_MIN;
	uint64_t x130 = 546454689240LLU;
	int8_t x131 = INT8_MAX;
	static int64_t x132 = -1LL;
	volatile int32_t t30 = 193942;

	t30 = (x129<=(x130&(x131/x132)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x134 = INT8_MIN;
	uint16_t x135 = 49U;
	volatile int32_t x136 = -1;
	static int32_t t31 = -4;

	t31 = (x133<=(x134&(x135/x136)));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x137 = INT32_MIN;
	volatile uint8_t x138 = UINT8_MAX;
	int32_t x139 = INT32_MAX;
	int8_t x140 = INT8_MIN;
	volatile int32_t t32 = -412;

	t32 = (x137<=(x138&(x139/x140)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x142 = 5U;
	volatile int32_t x143 = INT32_MAX;
	int32_t x144 = INT32_MIN;
	static int32_t t33 = 1;

	t33 = (x141<=(x142&(x143/x144)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x146 = INT64_MIN;
	int64_t x147 = INT64_MIN;
	int32_t x148 = INT32_MIN;
	static int32_t t34 = 90443102;

	t34 = (x145<=(x146&(x147/x148)));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x149 = UINT8_MAX;
	volatile int16_t x150 = INT16_MAX;
	uint8_t x151 = UINT8_MAX;
	static int16_t x152 = INT16_MIN;

	t35 = (x149<=(x150&(x151/x152)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x153 = UINT8_MAX;
	int32_t x154 = 0;
	int64_t x155 = INT64_MAX;
	int16_t x156 = 1514;
	int32_t t36 = 737184270;

	t36 = (x153<=(x154&(x155/x156)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x159 = -524982324973720LL;
	int32_t t37 = -24433157;

	t37 = (x157<=(x158&(x159/x160)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x162 = UINT16_MAX;
	static volatile int16_t x163 = 8;
	volatile int32_t t38 = -169;

	t38 = (x161<=(x162&(x163/x164)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x165 = INT8_MAX;
	uint8_t x167 = 2U;
	static int32_t x168 = -7318;
	volatile int32_t t39 = -8559866;

	t39 = (x165<=(x166&(x167/x168)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x176 = -62;
	volatile int32_t t40 = 6588286;

	t40 = (x173<=(x174&(x175/x176)));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = UINT8_MAX;
	int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MAX;
	uint8_t x180 = UINT8_MAX;

	t41 = (x177<=(x178&(x179/x180)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x185 = -1;
	uint64_t x186 = UINT64_MAX;
	volatile int16_t x187 = INT16_MAX;
	uint8_t x188 = UINT8_MAX;
	int32_t t42 = -892250614;

	t42 = (x185<=(x186&(x187/x188)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x189 = INT16_MIN;
	int64_t x190 = INT64_MAX;

	t43 = (x189<=(x190&(x191/x192)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x193 = 311U;
	static uint8_t x194 = 1U;
	int8_t x195 = 3;
	static uint32_t x196 = UINT32_MAX;

	t44 = (x193<=(x194&(x195/x196)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = -119761200072137LL;
	int8_t x198 = INT8_MIN;
	int64_t x199 = INT64_MIN;
	int16_t x200 = -379;
	static int32_t t45 = -49;

	t45 = (x197<=(x198&(x199/x200)));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x201 = 14;
	volatile int64_t x202 = -23275281932576LL;
	int32_t x203 = INT32_MAX;
	int8_t x204 = -1;
	int32_t t46 = 56473281;

	t46 = (x201<=(x202&(x203/x204)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x205 = 361U;
	static uint64_t x206 = UINT64_MAX;
	volatile int32_t x208 = 2218146;
	volatile int32_t t47 = -4;

	t47 = (x205<=(x206&(x207/x208)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int8_t x209 = -1;
	int64_t x210 = 2012406472LL;
	int16_t x211 = INT16_MAX;
	int16_t x212 = 3492;
	volatile int32_t t48 = -23504;

	t48 = (x209<=(x210&(x211/x212)));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int32_t x214 = -6801187;
	int8_t x215 = 0;
	static uint32_t x216 = 1009337U;

	t49 = (x213<=(x214&(x215/x216)));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x217 = INT64_MAX;
	uint32_t x218 = 3U;
	static int8_t x219 = 1;
	uint16_t x220 = UINT16_MAX;
	static volatile int32_t t50 = 1657381;

	t50 = (x217<=(x218&(x219/x220)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x221 = 0;
	int32_t x222 = 44;
	static volatile uint16_t x223 = 0U;
	int16_t x224 = 5;
	int32_t t51 = -2118562;

	t51 = (x221<=(x222&(x223/x224)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x225 = UINT8_MAX;
	int32_t x226 = 1273;
	int64_t x227 = 11894741228974LL;
	static uint16_t x228 = UINT16_MAX;
	volatile int32_t t52 = -34461;

	t52 = (x225<=(x226&(x227/x228)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x229 = 15402160699676711LLU;
	volatile int8_t x230 = -1;
	volatile int32_t x231 = INT32_MIN;
	int8_t x232 = 4;
	int32_t t53 = -1897;

	t53 = (x229<=(x230&(x231/x232)));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile uint16_t x233 = 14U;
	volatile int32_t x235 = 3259;
	int16_t x236 = -1;
	int32_t t54 = 32380291;

	t54 = (x233<=(x234&(x235/x236)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x238 = -1;
	uint32_t x239 = 293540U;
	int16_t x240 = INT16_MAX;
	volatile int32_t t55 = 75123;

	t55 = (x237<=(x238&(x239/x240)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x241 = 35U;
	uint32_t x243 = 174U;
	uint32_t x244 = 3632U;
	volatile int32_t t56 = -4143;

	t56 = (x241<=(x242&(x243/x244)));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t t57 = 7469681;

	t57 = (x245<=(x246&(x247/x248)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x249 = -1;
	int8_t x250 = INT8_MIN;
	uint32_t x251 = 4015825U;
	volatile int64_t x252 = 7LL;
	static int32_t t58 = 558085;

	t58 = (x249<=(x250&(x251/x252)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x257 = 3;
	volatile uint16_t x258 = UINT16_MAX;
	int8_t x259 = -1;
	volatile int16_t x260 = INT16_MIN;
	int32_t t59 = -1;

	t59 = (x257<=(x258&(x259/x260)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x261 = UINT8_MAX;
	volatile int8_t x262 = -1;
	int16_t x263 = -1;
	volatile int32_t x264 = INT32_MIN;
	int32_t t60 = 305013861;

	t60 = (x261<=(x262&(x263/x264)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x265 = -1LL;
	volatile int16_t x267 = INT16_MIN;
	int64_t x268 = 874241564765786LL;
	volatile int32_t t61 = -5966991;

	t61 = (x265<=(x266&(x267/x268)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint32_t x269 = 70U;
	uint8_t x271 = UINT8_MAX;
	volatile int32_t t62 = -100;

	t62 = (x269<=(x270&(x271/x272)));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x273 = 12U;
	int64_t x274 = INT64_MIN;
	uint32_t x276 = 580416828U;
	static int32_t t63 = 135;

	t63 = (x273<=(x274&(x275/x276)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x277 = 1365098766LLU;
	int64_t x279 = INT64_MIN;
	static int64_t x280 = INT64_MIN;
	volatile int32_t t64 = 206;

	t64 = (x277<=(x278&(x279/x280)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x281 = INT16_MIN;
	int8_t x282 = 1;
	volatile int32_t t65 = -523443;

	t65 = (x281<=(x282&(x283/x284)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x285 = 526036772074713LL;
	uint64_t x286 = 7281LLU;
	static volatile int16_t x287 = -1;

	t66 = (x285<=(x286&(x287/x288)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x289 = 363613875707368LL;
	int8_t x290 = INT8_MAX;
	static int64_t x291 = -19LL;
	uint32_t x292 = UINT32_MAX;
	static int32_t t67 = -47;

	t67 = (x289<=(x290&(x291/x292)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x295 = INT8_MAX;
	int8_t x296 = INT8_MAX;
	static volatile int32_t t68 = -12;

	t68 = (x293<=(x294&(x295/x296)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int8_t x301 = 0;
	int32_t x302 = -457196;
	volatile uint64_t x303 = 1093687LLU;
	int8_t x304 = INT8_MIN;
	int32_t t69 = -102790870;

	t69 = (x301<=(x302&(x303/x304)));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int16_t x305 = INT16_MAX;
	int8_t x306 = 20;
	uint32_t x308 = 6871U;
	static int32_t t70 = -19582;

	t70 = (x305<=(x306&(x307/x308)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x309 = -1614;
	int64_t x311 = INT64_MAX;
	uint16_t x312 = UINT16_MAX;
	int32_t t71 = 869153673;

	t71 = (x309<=(x310&(x311/x312)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x313 = INT64_MAX;
	int16_t x315 = INT16_MIN;
	int32_t x316 = -1;
	volatile int32_t t72 = 1600;

	t72 = (x313<=(x314&(x315/x316)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x317 = INT32_MIN;
	int32_t x318 = INT32_MIN;
	uint16_t x319 = UINT16_MAX;
	static uint8_t x320 = 33U;
	int32_t t73 = -2;

	t73 = (x317<=(x318&(x319/x320)));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x321 = -1;
	static uint32_t x322 = UINT32_MAX;
	int32_t t74 = -109697;

	t74 = (x321<=(x322&(x323/x324)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x325 = INT16_MIN;
	uint16_t x326 = UINT16_MAX;
	static int8_t x327 = INT8_MAX;
	int32_t x328 = INT32_MIN;
	int32_t t75 = 5068;

	t75 = (x325<=(x326&(x327/x328)));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x333 = -1;
	int32_t x334 = 1;
	int16_t x335 = INT16_MAX;
	int64_t x336 = -1LL;
	int32_t t76 = -1;

	t76 = (x333<=(x334&(x335/x336)));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x337 = INT32_MIN;
	uint8_t x338 = UINT8_MAX;
	int16_t x339 = 659;

	t77 = (x337<=(x338&(x339/x340)));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int64_t x341 = -1LL;
	int16_t x342 = -1;
	uint32_t x343 = 1U;
	uint32_t x344 = UINT32_MAX;
	volatile int32_t t78 = -796;

	t78 = (x341<=(x342&(x343/x344)));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x346 = 1U;
	uint16_t x347 = 899U;
	volatile uint8_t x348 = 2U;

	t79 = (x345<=(x346&(x347/x348)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint8_t x349 = 27U;
	int8_t x350 = -6;
	int64_t x352 = INT64_MIN;
	int32_t t80 = -1147013;

	t80 = (x349<=(x350&(x351/x352)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x353 = -37;
	int32_t x355 = INT32_MIN;
	int16_t x356 = INT16_MIN;
	static volatile int32_t t81 = -54764;

	t81 = (x353<=(x354&(x355/x356)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x357 = INT64_MIN;
	volatile int64_t x358 = INT64_MIN;
	volatile int64_t x359 = INT64_MIN;
	uint32_t x360 = 674250881U;
	volatile int32_t t82 = -1143502;

	t82 = (x357<=(x358&(x359/x360)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x361 = UINT64_MAX;
	int16_t x362 = INT16_MAX;
	uint8_t x363 = UINT8_MAX;
	int16_t x364 = 1;
	volatile int32_t t83 = -3;

	t83 = (x361<=(x362&(x363/x364)));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x365 = 3778410LL;
	int8_t x366 = INT8_MIN;
	volatile int32_t x367 = INT32_MIN;
	int64_t x368 = -2LL;
	int32_t t84 = 242913835;

	t84 = (x365<=(x366&(x367/x368)));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x369 = 3410098LLU;
	volatile int16_t x370 = -1;
	static uint8_t x372 = 1U;
	int32_t t85 = 0;

	t85 = (x369<=(x370&(x371/x372)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x373 = -262044LL;
	static volatile uint8_t x374 = 4U;
	int16_t x375 = INT16_MIN;
	int64_t x376 = -56767425062917LL;
	int32_t t86 = -7;

	t86 = (x373<=(x374&(x375/x376)));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x377 = 5LLU;
	int64_t x378 = INT64_MIN;
	volatile uint64_t x380 = UINT64_MAX;

	t87 = (x377<=(x378&(x379/x380)));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x381 = INT8_MIN;
	int64_t x382 = -1LL;
	uint64_t x383 = 1LLU;
	static uint8_t x384 = 49U;
	int32_t t88 = -143645;

	t88 = (x381<=(x382&(x383/x384)));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x385 = -1;
	static int8_t x386 = -1;
	static int32_t x387 = -81;
	int64_t x388 = INT64_MAX;
	volatile int32_t t89 = -1019178;

	t89 = (x385<=(x386&(x387/x388)));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x389 = 1240U;
	static int32_t x390 = -81664;
	static int32_t x392 = -1;
	static volatile int32_t t90 = -140358877;

	t90 = (x389<=(x390&(x391/x392)));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x393 = INT32_MIN;
	volatile int32_t x394 = INT32_MAX;
	int8_t x396 = INT8_MIN;

	t91 = (x393<=(x394&(x395/x396)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x402 = UINT16_MAX;
	int64_t x403 = -1LL;
	int32_t x404 = INT32_MAX;
	volatile int32_t t92 = 105784;

	t92 = (x401<=(x402&(x403/x404)));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x405 = UINT64_MAX;
	int32_t x406 = INT32_MAX;
	int8_t x407 = INT8_MIN;
	int16_t x408 = -1;
	static int32_t t93 = 931484279;

	t93 = (x405<=(x406&(x407/x408)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x409 = 2283887LL;
	static int16_t x410 = INT16_MAX;
	int64_t x411 = -1LL;
	int16_t x412 = INT16_MIN;
	volatile int32_t t94 = 206266227;

	t94 = (x409<=(x410&(x411/x412)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x413 = 413883689953244LL;
	int16_t x414 = INT16_MIN;
	static int16_t x415 = 0;
	int64_t x416 = INT64_MIN;

	t95 = (x413<=(x414&(x415/x416)));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x417 = 63U;
	int32_t x418 = 3;
	static int64_t x419 = INT64_MIN;
	int32_t x420 = INT32_MIN;
	volatile int32_t t96 = -6928632;

	t96 = (x417<=(x418&(x419/x420)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x421 = INT16_MIN;
	int8_t x422 = -1;
	static uint16_t x423 = UINT16_MAX;
	volatile int32_t x424 = -1;
	int32_t t97 = 1624977;

	t97 = (x421<=(x422&(x423/x424)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x425 = UINT32_MAX;
	int8_t x426 = -7;
	uint8_t x427 = 68U;
	int32_t x428 = INT32_MAX;

	t98 = (x425<=(x426&(x427/x428)));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x430 = UINT8_MAX;
	volatile int64_t x431 = -1LL;
	volatile uint64_t x432 = UINT64_MAX;
	int32_t t99 = -1743730;

	t99 = (x429<=(x430&(x431/x432)));

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

