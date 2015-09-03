#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x7 = 42U;
uint32_t x13 = 5827U;
uint32_t t3 = 1773U;
int16_t x18 = 1;
int32_t x19 = -793502338;
int8_t x20 = -9;
int8_t x21 = 13;
int64_t x35 = -256207093388LL;
uint64_t x39 = 28175LLU;
int16_t x40 = INT16_MIN;
volatile uint64_t t9 = 369588162343974127LLU;
int32_t x42 = -19559;
static int8_t x44 = INT8_MAX;
volatile int64_t t15 = 26031031263LL;
uint32_t x74 = 1994985724U;
uint16_t x76 = UINT16_MAX;
int64_t x81 = INT64_MIN;
static int8_t x84 = -1;
static uint64_t x88 = 29171475LLU;
volatile uint8_t x89 = UINT8_MAX;
volatile uint64_t t21 = 68751913828804LLU;
volatile uint64_t t22 = 292299842210115345LLU;
uint16_t x100 = UINT16_MAX;
static int32_t x104 = 131935416;
int64_t t24 = -232979LL;
int64_t x110 = -2090801400975LL;
int16_t x112 = -6191;
static uint32_t x113 = 14885U;
int64_t x114 = INT64_MAX;
uint8_t x119 = UINT8_MAX;
int32_t t28 = -39016978;
int8_t x124 = -49;
int8_t x137 = -1;
volatile int32_t x138 = -1;
static volatile int8_t x139 = INT8_MIN;
int64_t x141 = 3315404LL;
int32_t x157 = INT32_MAX;
volatile uint32_t x158 = 24U;
int16_t x163 = INT16_MIN;
int8_t x166 = INT8_MIN;
int8_t x168 = 1;
volatile uint16_t x170 = 12U;
volatile int64_t t41 = 26LL;
int32_t x175 = 16;
int64_t x176 = -26545119143385659LL;
static uint8_t x178 = 33U;
int64_t x181 = -1LL;
static uint8_t x183 = 4U;
int64_t t44 = -6342LL;
volatile int8_t x191 = 0;
volatile int32_t t46 = INT32_MIN;
volatile int8_t x195 = INT8_MIN;
int64_t x207 = -1LL;
int8_t x209 = -8;
volatile int64_t x215 = -1LL;
uint32_t x222 = 56435U;
static uint64_t x224 = 168287945LLU;
volatile uint8_t x226 = 9U;
volatile uint32_t x228 = 1373596U;
static int8_t x234 = -1;
int16_t x237 = INT16_MIN;
uint32_t x239 = 13467000U;
int64_t x240 = 18LL;
int64_t t58 = 2LL;
uint32_t x247 = UINT32_MAX;
uint32_t x250 = UINT32_MAX;
uint64_t x253 = UINT64_MAX;
int64_t x257 = -1LL;
int32_t x258 = INT32_MAX;
uint64_t t63 = UINT64_MAX;
int32_t x267 = -1;
int64_t x282 = INT64_MIN;
volatile int8_t x284 = INT8_MIN;
int16_t x287 = INT16_MIN;
volatile int32_t x289 = INT32_MIN;
int64_t x293 = -1LL;
int32_t x299 = INT32_MAX;
volatile uint64_t t71 = UINT64_MAX;
int32_t x309 = INT32_MIN;
uint16_t x312 = 29U;
static volatile uint8_t x313 = 14U;
int16_t x316 = INT16_MIN;
int64_t x326 = INT64_MIN;
volatile int64_t x329 = INT64_MIN;
volatile int64_t t78 = 478413869LL;
uint8_t x334 = 1U;
uint32_t x335 = UINT32_MAX;
static volatile int8_t x336 = INT8_MIN;
int32_t x345 = INT32_MIN;
static volatile int32_t t82 = -27746;
int64_t t83 = -1427660115933045LL;
uint64_t x360 = 17928667579200336LLU;
static uint32_t x370 = 1U;
uint32_t x374 = UINT32_MAX;
volatile int8_t x382 = 1;
static volatile int64_t t94 = INT64_MAX;
static int64_t x408 = INT64_MIN;
static uint8_t x414 = 48U;


void f0(void) {
	uint32_t x1 = 392774731U;
	volatile int32_t x2 = INT32_MAX;
	volatile int16_t x3 = INT16_MAX;
	int8_t x4 = INT8_MIN;
	uint32_t t0 = 82364U;

	t0 = (((x1%x2)&x3)|x4);

	if (t0 != 4294967243U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 0LLU;
	volatile uint16_t x6 = UINT16_MAX;
	uint8_t x8 = 23U;
	static volatile uint64_t t1 = 87LLU;

	t1 = (((x5%x6)&x7)|x8);

	if (t1 != 23LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 3;
	uint16_t x10 = 1093U;
	int16_t x11 = -7445;
	uint32_t x12 = UINT32_MAX;
	volatile uint32_t t2 = UINT32_MAX;

	t2 = (((x9%x10)&x11)|x12);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x14 = INT8_MIN;
	static int32_t x15 = -1;
	uint8_t x16 = UINT8_MAX;

	t3 = (((x13%x14)&x15)|x16);

	if (t3 != 5887U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int64_t t4 = 16622403LL;

	t4 = (((x17%x18)&x19)|x20);

	if (t4 != -9LL) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x22 = -30723;
	uint64_t x23 = 4473135537529613466LLU;
	static int8_t x24 = INT8_MIN;
	static volatile uint64_t t5 = 119787808388LLU;

	t5 = (((x21%x22)&x23)|x24);

	if (t5 != 18446744073709551496LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = 959;
	int64_t x26 = -1LL;
	int16_t x27 = -442;
	volatile int16_t x28 = INT16_MIN;
	volatile int64_t t6 = 1LL;

	t6 = (((x25%x26)&x27)|x28);

	if (t6 != -32768LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 5250U;
	int32_t x30 = INT32_MIN;
	uint8_t x31 = 24U;
	volatile int16_t x32 = -1;
	static volatile int32_t t7 = -49255;

	t7 = (((x29%x30)&x31)|x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 10653764LLU;
	static volatile uint16_t x34 = UINT16_MAX;
	uint32_t x36 = 247169U;
	uint64_t t8 = 28LLU;

	t8 = (((x33%x34)&x35)|x36);

	if (t8 != 247269LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = 66;
	int8_t x38 = INT8_MAX;

	t9 = (((x37%x38)&x39)|x40);

	if (t9 != 18446744073709518850LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = INT8_MIN;
	int64_t x43 = -49641246180254348LL;
	volatile int64_t t10 = 327617132183068LL;

	t10 = (((x41%x42)&x43)|x44);

	if (t10 != -49641246180254337LL) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = INT16_MIN;
	int8_t x46 = -3;
	int32_t x47 = INT32_MIN;
	int16_t x48 = INT16_MAX;
	int32_t t11 = 21;

	t11 = (((x45%x46)&x47)|x48);

	if (t11 != -2147450881) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x49 = INT64_MAX;
	int32_t x50 = INT32_MAX;
	static uint16_t x51 = 9760U;
	int32_t x52 = INT32_MIN;
	int64_t t12 = 319118LL;

	t12 = (((x49%x50)&x51)|x52);

	if (t12 != -2147483648LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int8_t x54 = -1;
	int32_t x55 = INT32_MAX;
	volatile int16_t x56 = -1;
	static int32_t t13 = 7586;

	t13 = (((x53%x54)&x55)|x56);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = 190968359;
	static int16_t x58 = -248;
	uint32_t x59 = 66614426U;
	uint16_t x60 = 68U;
	volatile uint32_t t14 = 221U;

	t14 = (((x57%x58)&x59)|x60);

	if (t14 != 206U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int32_t x61 = INT32_MIN;
	uint8_t x62 = UINT8_MAX;
	static volatile int64_t x63 = INT64_MIN;
	int16_t x64 = INT16_MAX;

	t15 = (((x61%x62)&x63)|x64);

	if (t15 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x65 = 985U;
	uint32_t x66 = UINT32_MAX;
	uint16_t x67 = 2961U;
	int16_t x68 = -1;
	uint32_t t16 = UINT32_MAX;

	t16 = (((x65%x66)&x67)|x68);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	static uint64_t x70 = UINT64_MAX;
	volatile uint16_t x71 = 1U;
	int64_t x72 = -2031506892579286LL;
	volatile uint64_t t17 = 24370LLU;

	t17 = (((x69%x70)&x71)|x72);

	if (t17 != 18444712566816972330LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = -13;
	static int16_t x75 = INT16_MIN;
	static uint32_t t18 = 490U;

	t18 = (((x73%x74)&x75)|x76);

	if (t18 != 305004543U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x82 = UINT16_MAX;
	uint16_t x83 = 0U;
	static volatile int64_t t19 = 319256129434344162LL;

	t19 = (((x81%x82)&x83)|x84);

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x85 = -222398104752316LL;
	int8_t x86 = -1;
	int64_t x87 = -1LL;
	uint64_t t20 = 261188256LLU;

	t20 = (((x85%x86)&x87)|x88);

	if (t20 != 29171475LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x90 = 1430763LLU;
	static uint8_t x91 = UINT8_MAX;
	uint64_t x92 = 1LLU;

	t21 = (((x89%x90)&x91)|x92);

	if (t21 != 255LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x93 = -16647558LL;
	volatile int16_t x94 = INT16_MAX;
	uint64_t x95 = 5270081989364289LLU;
	uint64_t x96 = 2191265443002509594LLU;

	t22 = (((x93%x94)&x95)|x96);

	if (t22 != 2196341957245659482LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = -6806;
	volatile int16_t x98 = INT16_MIN;
	volatile uint64_t x99 = UINT64_MAX;
	uint64_t t23 = UINT64_MAX;

	t23 = (((x97%x98)&x99)|x100);

	if (t23 != UINT64_MAX) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = -4199;
	int32_t x102 = 14774;
	volatile int64_t x103 = INT64_MAX;

	t24 = (((x101%x102)&x103)|x104);

	if (t24 != 9223372036854771641LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x105 = 31U;
	volatile int32_t x106 = INT32_MIN;
	static int8_t x107 = -1;
	volatile int32_t x108 = 1880;
	static int32_t t25 = -67;

	t25 = (((x105%x106)&x107)|x108);

	if (t25 != 1887) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = 1063;
	int32_t x111 = INT32_MIN;
	volatile int64_t t26 = -585646031938290LL;

	t26 = (((x109%x110)&x111)|x112);

	if (t26 != -6191LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x115 = 115355LLU;
	volatile uint32_t x116 = 16514579U;
	uint64_t t27 = 217629289572040877LLU;

	t27 = (((x113%x114)&x115)|x116);

	if (t27 != 16514579LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static volatile int16_t x117 = INT16_MAX;
	int16_t x118 = INT16_MAX;
	int8_t x120 = INT8_MAX;

	t28 = (((x117%x118)&x119)|x120);

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x121 = -1;
	int64_t x122 = 1LL;
	int64_t x123 = INT64_MIN;
	int64_t t29 = 1LL;

	t29 = (((x121%x122)&x123)|x124);

	if (t29 != -49LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x125 = 11U;
	int64_t x126 = 25248769547136LL;
	static uint16_t x127 = 9130U;
	volatile uint64_t x128 = UINT64_MAX;
	uint64_t t30 = UINT64_MAX;

	t30 = (((x125%x126)&x127)|x128);

	if (t30 != UINT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x129 = UINT32_MAX;
	volatile int8_t x130 = -1;
	int8_t x131 = INT8_MAX;
	volatile int8_t x132 = -1;
	volatile uint32_t t31 = UINT32_MAX;

	t31 = (((x129%x130)&x131)|x132);

	if (t31 != UINT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x133 = INT16_MIN;
	volatile int64_t x134 = 4231124274868423256LL;
	uint32_t x135 = 11443856U;
	static int64_t x136 = INT64_MIN;
	static volatile int64_t t32 = -71871119026298359LL;

	t32 = (((x133%x134)&x135)|x136);

	if (t32 != -9223372036843339776LL) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x140 = INT16_MAX;
	int32_t t33 = -332029;

	t33 = (((x137%x138)&x139)|x140);

	if (t33 != 32767) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x142 = -5;
	static uint8_t x143 = 5U;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t34 = UINT64_MAX;

	t34 = (((x141%x142)&x143)|x144);

	if (t34 != UINT64_MAX) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x145 = UINT8_MAX;
	int64_t x146 = -3805070LL;
	int16_t x147 = 3;
	int64_t x148 = -14454LL;
	volatile int64_t t35 = 134990903317002LL;

	t35 = (((x145%x146)&x147)|x148);

	if (t35 != -14453LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = -1LL;
	int32_t x150 = -1;
	static uint8_t x151 = 59U;
	int64_t x152 = -959LL;
	volatile int64_t t36 = -5897LL;

	t36 = (((x149%x150)&x151)|x152);

	if (t36 != -959LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x153 = UINT32_MAX;
	static volatile int16_t x154 = -1;
	volatile uint8_t x155 = 17U;
	int32_t x156 = INT32_MIN;
	volatile uint32_t t37 = 955U;

	t37 = (((x153%x154)&x155)|x156);

	if (t37 != 2147483648U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x159 = INT16_MAX;
	static volatile uint64_t x160 = 989515311LLU;
	uint64_t t38 = 462514706308394055LLU;

	t38 = (((x157%x158)&x159)|x160);

	if (t38 != 989515311LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = 3231;
	uint16_t x162 = 3U;
	int16_t x164 = -1;
	static int32_t t39 = -10918091;

	t39 = (((x161%x162)&x163)|x164);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x165 = UINT32_MAX;
	int32_t x167 = -1;
	volatile uint32_t t40 = 7U;

	t40 = (((x165%x166)&x167)|x168);

	if (t40 != 127U) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 5612U;
	static int64_t x171 = 2LL;
	uint16_t x172 = 0U;

	t41 = (((x169%x170)&x171)|x172);

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int32_t x173 = INT32_MIN;
	int8_t x174 = 3;
	volatile int64_t t42 = -1234772LL;

	t42 = (((x173%x174)&x175)|x176);

	if (t42 != -26545119143385643LL) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x177 = -1LL;
	static int16_t x179 = INT16_MIN;
	volatile uint8_t x180 = 24U;
	int64_t t43 = -3463398192807402527LL;

	t43 = (((x177%x178)&x179)|x180);

	if (t43 != -32744LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x182 = -857;
	int32_t x184 = -1;

	t44 = (((x181%x182)&x183)|x184);

	if (t44 != -1LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = INT16_MIN;
	static int32_t x186 = INT32_MAX;
	uint32_t x187 = 14098373U;
	int8_t x188 = -1;
	volatile uint32_t t45 = UINT32_MAX;

	t45 = (((x185%x186)&x187)|x188);

	if (t45 != UINT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x189 = INT32_MIN;
	uint16_t x190 = 27624U;
	static volatile int32_t x192 = INT32_MIN;

	t46 = (((x189%x190)&x191)|x192);

	if (t46 != INT32_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x193 = INT32_MAX;
	int32_t x194 = -58530;
	uint8_t x196 = 15U;
	volatile int32_t t47 = -826580447;

	t47 = (((x193%x194)&x195)|x196);

	if (t47 != 17935) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x197 = UINT8_MAX;
	int32_t x198 = -1;
	int32_t x199 = INT32_MAX;
	volatile int32_t x200 = -1;
	volatile int32_t t48 = -54073508;

	t48 = (((x197%x198)&x199)|x200);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x201 = INT32_MIN;
	volatile int32_t x202 = INT32_MIN;
	volatile int8_t x203 = INT8_MAX;
	volatile int8_t x204 = -1;
	volatile int32_t t49 = 2;

	t49 = (((x201%x202)&x203)|x204);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x205 = 0U;
	static uint16_t x206 = 12U;
	int64_t x208 = INT64_MIN;
	int64_t t50 = INT64_MIN;

	t50 = (((x205%x206)&x207)|x208);

	if (t50 != INT64_MIN) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x210 = INT8_MIN;
	int32_t x211 = INT32_MAX;
	int32_t x212 = INT32_MIN;
	int32_t t51 = 107;

	t51 = (((x209%x210)&x211)|x212);

	if (t51 != -8) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x213 = -1LL;
	int64_t x214 = -1LL;
	uint16_t x216 = 3723U;
	volatile int64_t t52 = -41146914LL;

	t52 = (((x213%x214)&x215)|x216);

	if (t52 != 3723LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x217 = 68853LLU;
	int8_t x218 = -1;
	int64_t x219 = INT64_MIN;
	int16_t x220 = INT16_MIN;
	uint64_t t53 = 1033409787LLU;

	t53 = (((x217%x218)&x219)|x220);

	if (t53 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x221 = -1;
	static int16_t x223 = INT16_MIN;
	uint64_t t54 = 447LLU;

	t54 = (((x221%x222)&x223)|x224);

	if (t54 != 168287945LLU) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x225 = UINT64_MAX;
	int32_t x227 = INT32_MAX;
	static volatile uint64_t t55 = 382450073461LLU;

	t55 = (((x225%x226)&x227)|x228);

	if (t55 != 1373598LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x229 = INT64_MAX;
	int8_t x230 = -1;
	uint8_t x231 = 44U;
	uint32_t x232 = 8U;
	static int64_t t56 = 1097998LL;

	t56 = (((x229%x230)&x231)|x232);

	if (t56 != 8LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint8_t x233 = 0U;
	int16_t x235 = -1;
	static uint32_t x236 = 140U;
	uint32_t t57 = 76122U;

	t57 = (((x233%x234)&x235)|x236);

	if (t57 != 140U) { NG(); } else { ; }
	
}

void f58(void) {
	static uint16_t x238 = 253U;

	t58 = (((x237%x238)&x239)|x240);

	if (t58 != 13467002LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile int32_t x241 = INT32_MAX;
	volatile int64_t x242 = INT64_MIN;
	volatile int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MIN;
	volatile int64_t t59 = -65136026102861962LL;

	t59 = (((x241%x242)&x243)|x244);

	if (t59 != -128LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = 0U;
	static int64_t x246 = INT64_MIN;
	int32_t x248 = -1;
	volatile int64_t t60 = -102LL;

	t60 = (((x245%x246)&x247)|x248);

	if (t60 != -1LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x249 = -1;
	uint32_t x251 = UINT32_MAX;
	int16_t x252 = -639;
	volatile uint32_t t61 = 58U;

	t61 = (((x249%x250)&x251)|x252);

	if (t61 != 4294966657U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x254 = UINT8_MAX;
	volatile uint32_t x255 = UINT32_MAX;
	static int64_t x256 = INT64_MIN;
	uint64_t t62 = 44335LLU;

	t62 = (((x253%x254)&x255)|x256);

	if (t62 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x259 = UINT64_MAX;
	volatile int64_t x260 = INT64_MAX;

	t63 = (((x257%x258)&x259)|x260);

	if (t63 != UINT64_MAX) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x265 = 0;
	static int8_t x266 = INT8_MIN;
	int8_t x268 = -1;
	int32_t t64 = -92230;

	t64 = (((x265%x266)&x267)|x268);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x273 = INT32_MAX;
	int8_t x274 = 40;
	volatile int32_t x275 = INT32_MIN;
	int64_t x276 = -11975681LL;
	volatile int64_t t65 = -11187263LL;

	t65 = (((x273%x274)&x275)|x276);

	if (t65 != -11975681LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x277 = UINT8_MAX;
	int32_t x278 = INT32_MIN;
	static uint16_t x279 = UINT16_MAX;
	static int16_t x280 = INT16_MIN;
	static volatile int32_t t66 = -57598862;

	t66 = (((x277%x278)&x279)|x280);

	if (t66 != -32513) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x281 = INT32_MIN;
	int32_t x283 = INT32_MIN;
	volatile int64_t t67 = 5374LL;

	t67 = (((x281%x282)&x283)|x284);

	if (t67 != -128LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x285 = UINT8_MAX;
	volatile int32_t x286 = -1;
	int8_t x288 = INT8_MIN;
	static int32_t t68 = 214235;

	t68 = (((x285%x286)&x287)|x288);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x290 = INT8_MAX;
	volatile int16_t x291 = -1;
	int8_t x292 = 1;
	static volatile int32_t t69 = -8154;

	t69 = (((x289%x290)&x291)|x292);

	if (t69 != -7) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x294 = UINT16_MAX;
	int32_t x295 = -1;
	int64_t x296 = INT64_MIN;
	volatile int64_t t70 = -738LL;

	t70 = (((x293%x294)&x295)|x296);

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x297 = INT64_MIN;
	uint64_t x298 = 1861019494443555LLU;
	int64_t x300 = -1LL;

	t71 = (((x297%x298)&x299)|x300);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x301 = 206;
	static volatile uint64_t x302 = 7079790LLU;
	int64_t x303 = -1LL;
	uint16_t x304 = 3U;
	uint64_t t72 = 6841343163600277LLU;

	t72 = (((x301%x302)&x303)|x304);

	if (t72 != 207LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x305 = INT8_MAX;
	uint64_t x306 = 317LLU;
	int16_t x307 = -1;
	uint8_t x308 = 7U;
	uint64_t t73 = 289185085LLU;

	t73 = (((x305%x306)&x307)|x308);

	if (t73 != 127LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x310 = INT64_MIN;
	int16_t x311 = -319;
	int64_t t74 = 10386LL;

	t74 = (((x309%x310)&x311)|x312);

	if (t74 != -2147483619LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x314 = 1U;
	int64_t x315 = 562013947933298454LL;
	volatile int64_t t75 = 213LL;

	t75 = (((x313%x314)&x315)|x316);

	if (t75 != -32768LL) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x317 = 3U;
	int8_t x318 = 14;
	int32_t x319 = -1;
	uint32_t x320 = 23556876U;
	volatile uint32_t t76 = 47U;

	t76 = (((x317%x318)&x319)|x320);

	if (t76 != 23556879U) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = 286;
	int32_t x327 = INT32_MIN;
	uint32_t x328 = UINT32_MAX;
	int64_t t77 = -7094101LL;

	t77 = (((x325%x326)&x327)|x328);

	if (t77 != 4294967295LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x330 = INT32_MIN;
	int8_t x331 = -13;
	volatile int64_t x332 = -480275204940LL;

	t78 = (((x329%x330)&x331)|x332);

	if (t78 != -480275204940LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x333 = INT8_MAX;
	volatile uint32_t t79 = 28993U;

	t79 = (((x333%x334)&x335)|x336);

	if (t79 != 4294967168U) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x337 = 1513894548358LLU;
	int16_t x338 = INT16_MIN;
	volatile uint16_t x339 = 42U;
	int32_t x340 = INT32_MIN;
	uint64_t t80 = 4216326554757936LLU;

	t80 = (((x337%x338)&x339)|x340);

	if (t80 != 18446744071562067970LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = 1U;
	int32_t x342 = INT32_MIN;
	int16_t x343 = -1;
	volatile uint8_t x344 = 49U;
	static volatile int32_t t81 = -226;

	t81 = (((x341%x342)&x343)|x344);

	if (t81 != 49) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x346 = 7;
	int16_t x347 = INT16_MAX;
	int16_t x348 = INT16_MIN;

	t82 = (((x345%x346)&x347)|x348);

	if (t82 != -2) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = INT32_MIN;
	int32_t x350 = INT32_MIN;
	int8_t x351 = -4;
	int64_t x352 = 6LL;

	t83 = (((x349%x350)&x351)|x352);

	if (t83 != 6LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x353 = 2U;
	uint64_t x354 = UINT64_MAX;
	int8_t x355 = INT8_MIN;
	int32_t x356 = 0;
	volatile uint64_t t84 = 2127338018879LLU;

	t84 = (((x353%x354)&x355)|x356);

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x357 = 1;
	int64_t x358 = -1LL;
	uint8_t x359 = 63U;
	volatile uint64_t t85 = 22418417LLU;

	t85 = (((x357%x358)&x359)|x360);

	if (t85 != 17928667579200336LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x361 = -1;
	static int16_t x362 = INT16_MIN;
	int8_t x363 = INT8_MIN;
	int32_t x364 = INT32_MIN;
	volatile int32_t t86 = 1;

	t86 = (((x361%x362)&x363)|x364);

	if (t86 != -128) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = INT64_MAX;
	volatile uint16_t x366 = 27596U;
	int16_t x367 = INT16_MAX;
	int8_t x368 = INT8_MIN;
	volatile int64_t t87 = 1325851711634988255LL;

	t87 = (((x365%x366)&x367)|x368);

	if (t87 != -37LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x369 = -1;
	volatile uint64_t x371 = UINT64_MAX;
	static uint8_t x372 = 18U;
	volatile uint64_t t88 = 5935822LLU;

	t88 = (((x369%x370)&x371)|x372);

	if (t88 != 18LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int8_t x373 = -26;
	uint8_t x375 = UINT8_MAX;
	int32_t x376 = -88053;
	uint32_t t89 = 6U;

	t89 = (((x373%x374)&x375)|x376);

	if (t89 != 4294879471U) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x377 = 1712901176LLU;
	int32_t x378 = INT32_MAX;
	int32_t x379 = INT32_MIN;
	volatile int64_t x380 = INT64_MAX;
	uint64_t t90 = 128904LLU;

	t90 = (((x377%x378)&x379)|x380);

	if (t90 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x381 = 1U;
	volatile int16_t x383 = INT16_MIN;
	int16_t x384 = -1;
	volatile int32_t t91 = -3105348;

	t91 = (((x381%x382)&x383)|x384);

	if (t91 != -1) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x385 = 1159LLU;
	int32_t x386 = -13;
	uint32_t x387 = 498U;
	static volatile int32_t x388 = 213109983;
	uint64_t t92 = 1217364LLU;

	t92 = (((x385%x386)&x387)|x388);

	if (t92 != 213109983LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x389 = INT32_MIN;
	static uint16_t x390 = 4371U;
	int16_t x391 = -988;
	uint16_t x392 = 2858U;
	volatile int32_t t93 = 2921;

	t93 = (((x389%x390)&x391)|x392);

	if (t93 != -214) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x393 = 3U;
	int16_t x394 = 167;
	static int64_t x395 = INT64_MIN;
	int64_t x396 = INT64_MAX;

	t94 = (((x393%x394)&x395)|x396);

	if (t94 != INT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = INT32_MIN;
	int16_t x398 = INT16_MIN;
	uint64_t x399 = 3459706571LLU;
	static int16_t x400 = 351;
	uint64_t t95 = 37672527LLU;

	t95 = (((x397%x398)&x399)|x400);

	if (t95 != 351LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x401 = INT8_MIN;
	uint16_t x402 = 9U;
	uint8_t x403 = UINT8_MAX;
	volatile int32_t x404 = INT32_MIN;
	static volatile int32_t t96 = -72105;

	t96 = (((x401%x402)&x403)|x404);

	if (t96 != -2147483394) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x405 = 7U;
	int8_t x406 = INT8_MIN;
	volatile int8_t x407 = INT8_MAX;
	int64_t t97 = 122485106LL;

	t97 = (((x405%x406)&x407)|x408);

	if (t97 != -9223372036854775801LL) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = 948;
	static int8_t x410 = INT8_MAX;
	volatile int8_t x411 = 54;
	int8_t x412 = 1;
	int32_t t98 = -1037425;

	t98 = (((x409%x410)&x411)|x412);

	if (t98 != 51) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x413 = -1LL;
	int64_t x415 = INT64_MAX;
	int64_t x416 = 0LL;
	static volatile int64_t t99 = INT64_MAX;

	t99 = (((x413%x414)&x415)|x416);

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

