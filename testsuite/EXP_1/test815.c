#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x1 = 2319U;
int16_t x4 = INT16_MIN;
uint64_t x7 = 202178423634459LLU;
uint8_t x8 = 2U;
uint64_t x11 = UINT64_MAX;
static int64_t x14 = -1LL;
uint64_t x26 = UINT64_MAX;
static int8_t x28 = -1;
int32_t t6 = -977455;
volatile int32_t t7 = -8072;
static int8_t x35 = 0;
volatile int64_t x36 = -2330575455463134535LL;
volatile int32_t t8 = -7159;
uint32_t x51 = UINT32_MAX;
uint8_t x70 = 22U;
static int64_t x80 = INT64_MIN;
int32_t x83 = INT32_MAX;
int32_t x85 = -1;
static int64_t x86 = -1LL;
volatile int32_t t19 = -4296964;
uint64_t x90 = 189929322871931LLU;
int8_t x92 = 4;
volatile int8_t x96 = -1;
volatile int8_t x98 = INT8_MIN;
int32_t x99 = INT32_MIN;
int64_t x100 = INT64_MAX;
static volatile int32_t t22 = 1183;
int16_t x102 = INT16_MAX;
static uint8_t x103 = 11U;
static int32_t t23 = -104;
int64_t x110 = INT64_MAX;
static int32_t t25 = 10634;
volatile uint8_t x119 = 14U;
static volatile int32_t t27 = -2076778;
uint8_t x126 = UINT8_MAX;
uint8_t x130 = 7U;
static int32_t t29 = 179322295;
volatile uint32_t x133 = UINT32_MAX;
static int16_t x137 = INT16_MAX;
int32_t x143 = -7291163;
volatile int32_t t32 = -1765;
static int8_t x147 = -32;
int16_t x149 = -1;
uint32_t x152 = 129216991U;
volatile int32_t x156 = INT32_MIN;
volatile int32_t t37 = 4;
volatile int16_t x167 = INT16_MIN;
uint64_t x180 = 146LLU;
volatile int8_t x188 = INT8_MIN;
int32_t t42 = 1;
static volatile uint64_t x192 = UINT64_MAX;
int16_t x195 = INT16_MAX;
int32_t t44 = -52;
static int16_t x203 = 1;
uint16_t x209 = UINT16_MAX;
uint16_t x214 = 20379U;
static volatile uint8_t x218 = UINT8_MAX;
int8_t x222 = -1;
volatile int64_t x223 = INT64_MIN;
uint8_t x229 = 15U;
volatile int8_t x230 = -1;
uint16_t x246 = 3271U;
int32_t t57 = -208;
int32_t t59 = 0;
int32_t x257 = -1;
uint32_t x259 = UINT32_MAX;
int32_t x260 = 8654;
int64_t x263 = INT64_MAX;
int16_t x268 = INT16_MIN;
int32_t t62 = -197906;
static uint64_t x274 = 5975195679504871LLU;
int32_t x282 = INT32_MIN;
int32_t x291 = INT32_MIN;
uint16_t x294 = 5U;
int8_t x308 = INT8_MIN;
uint8_t x317 = 0U;
int32_t x318 = INT32_MAX;
int64_t x320 = -160125242LL;
uint32_t x321 = 130005904U;
int16_t x331 = INT16_MAX;
uint32_t x334 = 1070U;
uint64_t x335 = 24075415308378LLU;
volatile int32_t t78 = 2;
int16_t x337 = -1;
static uint16_t x338 = UINT16_MAX;
uint32_t x341 = UINT32_MAX;
uint32_t x343 = UINT32_MAX;
volatile int16_t x344 = -1;
volatile int8_t x350 = INT8_MIN;
int32_t t82 = 1881510;
int64_t x357 = -1LL;
uint64_t x358 = 36566832LLU;
int32_t t87 = 28789665;
volatile int8_t x385 = 13;
uint64_t x391 = 3146967446LLU;
int32_t t92 = 34103314;
int8_t x397 = 1;
int8_t x401 = INT8_MIN;
static int16_t x403 = -1906;
int8_t x404 = INT8_MAX;
int16_t x407 = -3;
int32_t t96 = 370;
volatile int16_t x418 = INT16_MIN;


void f0(void) {
	int16_t x2 = -1;
	int16_t x3 = -1;
	volatile int32_t t0 = -5;

	t0 = (((x1%x2)&x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -501;
	uint64_t x6 = 151186589907LLU;
	int32_t t1 = -1878748;

	t1 = (((x5%x6)&x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 116;
	volatile int64_t x10 = INT64_MIN;
	int16_t x12 = INT16_MAX;
	static volatile int32_t t2 = -2;

	t2 = (((x9%x10)&x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile int16_t x13 = 6;
	uint32_t x15 = 3196U;
	uint16_t x16 = 7611U;
	int32_t t3 = 6;

	t3 = (((x13%x14)&x15)<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 537U;
	int8_t x18 = INT8_MIN;
	int8_t x19 = INT8_MIN;
	uint16_t x20 = 28202U;
	static volatile int32_t t4 = 61;

	t4 = (((x17%x18)&x19)<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x21 = UINT8_MAX;
	int32_t x22 = -10728998;
	uint32_t x23 = UINT32_MAX;
	static int64_t x24 = INT64_MAX;
	volatile int32_t t5 = 2;

	t5 = (((x21%x22)&x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = UINT8_MAX;
	uint32_t x27 = 4012U;

	t6 = (((x25%x26)&x27)<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 6657556503631277LL;
	uint16_t x30 = 3U;
	volatile uint32_t x31 = 8U;
	static volatile int8_t x32 = INT8_MAX;

	t7 = (((x29%x30)&x31)<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	volatile int8_t x34 = INT8_MIN;

	t8 = (((x33%x34)&x35)<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint32_t x41 = 196992U;
	static int64_t x42 = -3LL;
	static int32_t x43 = -1;
	uint16_t x44 = 1U;
	int32_t t9 = -198;

	t9 = (((x41%x42)&x43)<x44);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = -41;
	int64_t x50 = -129427045661LL;
	static volatile int16_t x52 = INT16_MIN;
	static volatile int32_t t10 = 24131;

	t10 = (((x49%x50)&x51)<x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x53 = INT32_MAX;
	int16_t x54 = -1;
	uint8_t x55 = 5U;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t11 = -2546495;

	t11 = (((x53%x54)&x55)<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	volatile uint32_t x58 = 8U;
	int64_t x59 = INT64_MIN;
	uint8_t x60 = UINT8_MAX;
	int32_t t12 = 995701867;

	t12 = (((x57%x58)&x59)<x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x61 = INT64_MIN;
	static int16_t x62 = -1;
	static int32_t x63 = INT32_MIN;
	volatile int64_t x64 = INT64_MIN;
	volatile int32_t t13 = 2981842;

	t13 = (((x61%x62)&x63)<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x65 = -168391;
	uint16_t x66 = 638U;
	int32_t x67 = -22964105;
	uint16_t x68 = 49U;
	int32_t t14 = -1;

	t14 = (((x65%x66)&x67)<x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x69 = 8905191549820LLU;
	volatile int16_t x71 = INT16_MIN;
	static int64_t x72 = INT64_MIN;
	volatile int32_t t15 = 11406;

	t15 = (((x69%x70)&x71)<x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x73 = -1000901641646190LL;
	static uint8_t x74 = UINT8_MAX;
	uint8_t x75 = 0U;
	uint8_t x76 = 113U;
	volatile int32_t t16 = 174866494;

	t16 = (((x73%x74)&x75)<x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = -1;
	int64_t x78 = 1LL;
	int8_t x79 = INT8_MAX;
	volatile int32_t t17 = 2814;

	t17 = (((x77%x78)&x79)<x80);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static int8_t x81 = INT8_MAX;
	int16_t x82 = -59;
	int16_t x84 = 1;
	static int32_t t18 = -4;

	t18 = (((x81%x82)&x83)<x84);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x87 = UINT64_MAX;
	uint8_t x88 = UINT8_MAX;

	t19 = (((x85%x86)&x87)<x88);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = -1;
	int16_t x91 = 608;
	int32_t t20 = 13901166;

	t20 = (((x89%x90)&x91)<x92);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MIN;
	volatile uint32_t x94 = 7U;
	uint8_t x95 = UINT8_MAX;
	int32_t t21 = 86326;

	t21 = (((x93%x94)&x95)<x96);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = UINT32_MAX;

	t22 = (((x97%x98)&x99)<x100);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint8_t x101 = UINT8_MAX;
	int32_t x104 = 0;

	t23 = (((x101%x102)&x103)<x104);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint64_t x109 = UINT64_MAX;
	int32_t x111 = INT32_MIN;
	uint64_t x112 = 43742316653337LLU;
	static int32_t t24 = 55;

	t24 = (((x109%x110)&x111)<x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x113 = 1643974405417999554LLU;
	static uint32_t x114 = UINT32_MAX;
	int16_t x115 = INT16_MAX;
	int8_t x116 = INT8_MIN;

	t25 = (((x113%x114)&x115)<x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x117 = 141U;
	int64_t x118 = -169476069409LL;
	volatile int16_t x120 = -1;
	volatile int32_t t26 = 7;

	t26 = (((x117%x118)&x119)<x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x121 = INT8_MIN;
	uint8_t x122 = 2U;
	static volatile int8_t x123 = INT8_MAX;
	int16_t x124 = INT16_MIN;

	t27 = (((x121%x122)&x123)<x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x125 = INT32_MAX;
	volatile int32_t x127 = -1;
	int32_t x128 = INT32_MAX;
	volatile int32_t t28 = -51110228;

	t28 = (((x125%x126)&x127)<x128);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x129 = INT64_MIN;
	uint16_t x131 = UINT16_MAX;
	volatile int8_t x132 = -1;

	t29 = (((x129%x130)&x131)<x132);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x134 = INT32_MIN;
	int8_t x135 = -1;
	int8_t x136 = 1;
	volatile int32_t t30 = 214387258;

	t30 = (((x133%x134)&x135)<x136);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint8_t x138 = 56U;
	int64_t x139 = 2096251574257834581LL;
	uint32_t x140 = UINT32_MAX;
	static int32_t t31 = -212297;

	t31 = (((x137%x138)&x139)<x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = UINT32_MAX;
	int32_t x142 = INT32_MAX;
	static int16_t x144 = -1;

	t32 = (((x141%x142)&x143)<x144);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x145 = UINT64_MAX;
	int8_t x146 = -1;
	int16_t x148 = 0;
	int32_t t33 = -7;

	t33 = (((x145%x146)&x147)<x148);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x150 = 24561U;
	int64_t x151 = 1522181417883026518LL;
	int32_t t34 = -164;

	t34 = (((x149%x150)&x151)<x152);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x153 = UINT32_MAX;
	volatile int64_t x154 = INT64_MAX;
	uint64_t x155 = UINT64_MAX;
	volatile int32_t t35 = 3260;

	t35 = (((x153%x154)&x155)<x156);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x157 = INT32_MAX;
	uint32_t x158 = 3127U;
	static uint64_t x159 = 1055LLU;
	int8_t x160 = INT8_MIN;
	volatile int32_t t36 = -215973;

	t36 = (((x157%x158)&x159)<x160);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x161 = 5U;
	volatile uint32_t x162 = UINT32_MAX;
	static uint64_t x163 = 1122447840706992414LLU;
	uint32_t x164 = UINT32_MAX;

	t37 = (((x161%x162)&x163)<x164);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x165 = 9062LLU;
	int8_t x166 = 29;
	static uint8_t x168 = UINT8_MAX;
	int32_t t38 = 216725;

	t38 = (((x165%x166)&x167)<x168);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x173 = 18522U;
	int8_t x174 = INT8_MIN;
	uint8_t x175 = 100U;
	int32_t x176 = INT32_MAX;
	static volatile int32_t t39 = 6993;

	t39 = (((x173%x174)&x175)<x176);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x177 = INT8_MAX;
	uint32_t x178 = 1005182U;
	int32_t x179 = INT32_MIN;
	static volatile int32_t t40 = -207798;

	t40 = (((x177%x178)&x179)<x180);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x181 = -9;
	uint64_t x182 = UINT64_MAX;
	uint64_t x183 = 348LLU;
	static int64_t x184 = INT64_MIN;
	int32_t t41 = 30052;

	t41 = (((x181%x182)&x183)<x184);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x185 = 5U;
	int16_t x186 = INT16_MIN;
	uint16_t x187 = 291U;

	t42 = (((x185%x186)&x187)<x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x189 = INT32_MIN;
	volatile int64_t x190 = INT64_MAX;
	int32_t x191 = INT32_MIN;
	static volatile int32_t t43 = 17;

	t43 = (((x189%x190)&x191)<x192);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x193 = -15;
	uint64_t x194 = 45772827678861LLU;
	uint8_t x196 = UINT8_MAX;

	t44 = (((x193%x194)&x195)<x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x197 = 55U;
	static int64_t x198 = -93231LL;
	int32_t x199 = INT32_MIN;
	static uint32_t x200 = 3620531U;
	static volatile int32_t t45 = -92879883;

	t45 = (((x197%x198)&x199)<x200);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x201 = INT32_MIN;
	int16_t x202 = 5;
	uint8_t x204 = 2U;
	int32_t t46 = 32759451;

	t46 = (((x201%x202)&x203)<x204);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x205 = 27925147882873LLU;
	int16_t x206 = INT16_MIN;
	int64_t x207 = -347263458391648551LL;
	int64_t x208 = -63316778815785LL;
	volatile int32_t t47 = -4479139;

	t47 = (((x205%x206)&x207)<x208);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x210 = INT64_MIN;
	static volatile uint64_t x211 = UINT64_MAX;
	static volatile int64_t x212 = -7215LL;
	static int32_t t48 = -3019712;

	t48 = (((x209%x210)&x211)<x212);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x213 = -1;
	volatile uint32_t x215 = UINT32_MAX;
	int64_t x216 = INT64_MAX;
	static volatile int32_t t49 = 251;

	t49 = (((x213%x214)&x215)<x216);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x217 = -7;
	volatile int16_t x219 = 3574;
	static int8_t x220 = INT8_MIN;
	int32_t t50 = -175;

	t50 = (((x217%x218)&x219)<x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x221 = INT16_MIN;
	static int64_t x224 = INT64_MAX;
	int32_t t51 = -1;

	t51 = (((x221%x222)&x223)<x224);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x225 = 174802LLU;
	static int32_t x226 = INT32_MIN;
	uint16_t x227 = UINT16_MAX;
	int8_t x228 = -6;
	int32_t t52 = 334;

	t52 = (((x225%x226)&x227)<x228);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int8_t x231 = 2;
	int64_t x232 = INT64_MAX;
	volatile int32_t t53 = -5234298;

	t53 = (((x229%x230)&x231)<x232);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x233 = -38996553167757LL;
	int64_t x234 = -1649843666880275LL;
	static int8_t x235 = INT8_MAX;
	int8_t x236 = INT8_MAX;
	int32_t t54 = -9;

	t54 = (((x233%x234)&x235)<x236);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x237 = -1;
	volatile int64_t x238 = -1LL;
	volatile int8_t x239 = INT8_MAX;
	int64_t x240 = -1LL;
	int32_t t55 = 1;

	t55 = (((x237%x238)&x239)<x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x241 = 79563U;
	int64_t x242 = 21293575801439795LL;
	int64_t x243 = INT64_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t56 = -39827;

	t56 = (((x241%x242)&x243)<x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x245 = 417U;
	int8_t x247 = -1;
	static uint8_t x248 = 7U;

	t57 = (((x245%x246)&x247)<x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint64_t x249 = 3535LLU;
	int8_t x250 = INT8_MIN;
	int16_t x251 = -3;
	uint8_t x252 = UINT8_MAX;
	int32_t t58 = -59179;

	t58 = (((x249%x250)&x251)<x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x253 = INT8_MIN;
	uint8_t x254 = 7U;
	int32_t x255 = -735741038;
	volatile uint16_t x256 = 604U;

	t59 = (((x253%x254)&x255)<x256);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x258 = -1LL;
	static volatile int32_t t60 = -95072;

	t60 = (((x257%x258)&x259)<x260);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = -39LL;
	volatile uint64_t x262 = UINT64_MAX;
	volatile int8_t x264 = INT8_MAX;
	volatile int32_t t61 = -13;

	t61 = (((x261%x262)&x263)<x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int16_t x265 = -1;
	uint64_t x266 = UINT64_MAX;
	int16_t x267 = INT16_MIN;

	t62 = (((x265%x266)&x267)<x268);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x269 = -1LL;
	static int16_t x270 = INT16_MAX;
	uint64_t x271 = 46117834542926LLU;
	static int32_t x272 = INT32_MIN;
	int32_t t63 = -1502;

	t63 = (((x269%x270)&x271)<x272);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x273 = 2062U;
	int32_t x275 = 323;
	uint32_t x276 = 467893U;
	volatile int32_t t64 = 1644;

	t64 = (((x273%x274)&x275)<x276);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x277 = INT64_MAX;
	volatile int32_t x278 = INT32_MAX;
	static volatile int16_t x279 = 1263;
	int64_t x280 = INT64_MIN;
	int32_t t65 = -7291164;

	t65 = (((x277%x278)&x279)<x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x281 = INT64_MIN;
	uint8_t x283 = 5U;
	int32_t x284 = -1;
	volatile int32_t t66 = 392;

	t66 = (((x281%x282)&x283)<x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x285 = UINT32_MAX;
	uint16_t x286 = 1385U;
	static volatile int8_t x287 = INT8_MIN;
	static int64_t x288 = 95480364LL;
	static int32_t t67 = -1;

	t67 = (((x285%x286)&x287)<x288);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x289 = INT64_MIN;
	static uint8_t x290 = 97U;
	int64_t x292 = -47LL;
	volatile int32_t t68 = 52126;

	t68 = (((x289%x290)&x291)<x292);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x293 = -1LL;
	int64_t x295 = -1LL;
	volatile uint32_t x296 = 1022399309U;
	int32_t t69 = 2;

	t69 = (((x293%x294)&x295)<x296);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x297 = -1;
	int8_t x298 = INT8_MAX;
	uint64_t x299 = UINT64_MAX;
	int64_t x300 = INT64_MIN;
	volatile int32_t t70 = -5739581;

	t70 = (((x297%x298)&x299)<x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x301 = INT16_MIN;
	uint16_t x302 = UINT16_MAX;
	static int64_t x303 = INT64_MIN;
	int32_t x304 = INT32_MAX;
	volatile int32_t t71 = 4244901;

	t71 = (((x301%x302)&x303)<x304);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x305 = 664509807857117LLU;
	static volatile int16_t x306 = INT16_MIN;
	static int16_t x307 = -16;
	int32_t t72 = 2537317;

	t72 = (((x305%x306)&x307)<x308);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int8_t x309 = INT8_MAX;
	volatile uint32_t x310 = 39038U;
	uint16_t x311 = UINT16_MAX;
	int32_t x312 = INT32_MAX;
	int32_t t73 = -57291343;

	t73 = (((x309%x310)&x311)<x312);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x319 = 3031544909822538107LL;
	static volatile int32_t t74 = 67884960;

	t74 = (((x317%x318)&x319)<x320);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int8_t x322 = INT8_MAX;
	int16_t x323 = -6;
	int64_t x324 = INT64_MIN;
	static volatile int32_t t75 = -9068078;

	t75 = (((x321%x322)&x323)<x324);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x325 = -1;
	int32_t x326 = -705;
	uint8_t x327 = 46U;
	static int8_t x328 = INT8_MAX;
	volatile int32_t t76 = -10915;

	t76 = (((x325%x326)&x327)<x328);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x329 = -8247627574LL;
	uint16_t x330 = UINT16_MAX;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t77 = 870491865;

	t77 = (((x329%x330)&x331)<x332);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x333 = INT16_MIN;
	static volatile int32_t x336 = -16243756;

	t78 = (((x333%x334)&x335)<x336);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x339 = 60579;
	int32_t x340 = -427;
	int32_t t79 = -166600;

	t79 = (((x337%x338)&x339)<x340);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x342 = INT32_MIN;
	int32_t t80 = 1;

	t80 = (((x341%x342)&x343)<x344);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x345 = 567U;
	volatile int8_t x346 = INT8_MAX;
	int64_t x347 = -1LL;
	int64_t x348 = -476429550643LL;
	static int32_t t81 = -1;

	t81 = (((x345%x346)&x347)<x348);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x349 = UINT64_MAX;
	volatile uint8_t x351 = 25U;
	volatile int32_t x352 = INT32_MIN;

	t82 = (((x349%x350)&x351)<x352);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x353 = INT8_MIN;
	int64_t x354 = INT64_MIN;
	static volatile uint8_t x355 = 0U;
	volatile int64_t x356 = INT64_MIN;
	static int32_t t83 = 2459;

	t83 = (((x353%x354)&x355)<x356);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x359 = -644;
	static int16_t x360 = -1;
	volatile int32_t t84 = -8696828;

	t84 = (((x357%x358)&x359)<x360);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x361 = INT16_MIN;
	static int64_t x362 = 79482553013281945LL;
	int64_t x363 = 11836LL;
	int32_t x364 = INT32_MAX;
	int32_t t85 = -449;

	t85 = (((x361%x362)&x363)<x364);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static uint64_t x365 = 420312401992944LLU;
	int32_t x366 = 661367;
	int64_t x367 = INT64_MIN;
	uint32_t x368 = 12838U;
	volatile int32_t t86 = -780;

	t86 = (((x365%x366)&x367)<x368);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int8_t x369 = 27;
	static int16_t x370 = INT16_MAX;
	static int8_t x371 = 32;
	int8_t x372 = 0;

	t87 = (((x369%x370)&x371)<x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x373 = INT16_MAX;
	volatile int64_t x374 = -1LL;
	int8_t x375 = INT8_MAX;
	uint16_t x376 = 1U;
	volatile int32_t t88 = 3;

	t88 = (((x373%x374)&x375)<x376);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = -30LL;
	int64_t x378 = INT64_MIN;
	static uint64_t x379 = UINT64_MAX;
	int32_t x380 = INT32_MAX;
	int32_t t89 = 1839;

	t89 = (((x377%x378)&x379)<x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x381 = UINT16_MAX;
	int8_t x382 = INT8_MIN;
	int16_t x383 = -2183;
	uint8_t x384 = 2U;
	volatile int32_t t90 = -1935;

	t90 = (((x381%x382)&x383)<x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x386 = INT64_MAX;
	uint8_t x387 = UINT8_MAX;
	int32_t x388 = -1;
	int32_t t91 = -2128;

	t91 = (((x385%x386)&x387)<x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x389 = INT8_MAX;
	volatile int8_t x390 = INT8_MIN;
	int32_t x392 = 744551860;

	t92 = (((x389%x390)&x391)<x392);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = INT64_MIN;
	volatile uint64_t x394 = 21636202565LLU;
	uint8_t x395 = UINT8_MAX;
	int64_t x396 = INT64_MIN;
	volatile int32_t t93 = 72411;

	t93 = (((x393%x394)&x395)<x396);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint8_t x398 = UINT8_MAX;
	int8_t x399 = INT8_MAX;
	uint16_t x400 = 6U;
	int32_t t94 = 1;

	t94 = (((x397%x398)&x399)<x400);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x402 = 453;
	static volatile int32_t t95 = -943;

	t95 = (((x401%x402)&x403)<x404);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x405 = 8848;
	volatile uint8_t x406 = UINT8_MAX;
	int16_t x408 = INT16_MIN;

	t96 = (((x405%x406)&x407)<x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x409 = UINT16_MAX;
	static volatile uint8_t x410 = 3U;
	int32_t x411 = INT32_MAX;
	static int8_t x412 = -23;
	int32_t t97 = -13;

	t97 = (((x409%x410)&x411)<x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x413 = 1;
	int32_t x414 = INT32_MIN;
	int32_t x415 = INT32_MIN;
	int16_t x416 = -2959;
	volatile int32_t t98 = -3736901;

	t98 = (((x413%x414)&x415)<x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x417 = 139594391U;
	volatile int8_t x419 = -1;
	uint64_t x420 = 82973452732LLU;
	volatile int32_t t99 = -22862;

	t99 = (((x417%x418)&x419)<x420);

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

