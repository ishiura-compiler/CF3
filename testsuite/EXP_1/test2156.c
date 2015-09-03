#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x4 = -1;
volatile uint8_t x8 = 8U;
int16_t x12 = INT16_MIN;
int64_t x22 = INT64_MAX;
int64_t x25 = INT64_MAX;
volatile int32_t x28 = INT32_MIN;
int32_t t8 = 17108200;
static volatile int8_t x38 = INT8_MIN;
static int32_t x44 = INT32_MIN;
volatile int32_t t10 = 0;
static uint8_t x47 = 3U;
int32_t t11 = 2061296;
static uint32_t x49 = 30575U;
volatile uint64_t x60 = 91102753726119977LLU;
volatile uint64_t t15 = 269107696439655LLU;
static int16_t x67 = 0;
int32_t x69 = 472130;
volatile int16_t x73 = 14781;
uint16_t x81 = 6902U;
uint8_t x82 = 60U;
int16_t x89 = -1;
int64_t x90 = INT64_MIN;
int32_t x92 = INT32_MIN;
static int8_t x108 = INT8_MIN;
int32_t t26 = 17;
int8_t x112 = INT8_MIN;
int32_t t27 = 627038754;
int32_t x116 = -14258891;
static uint32_t x138 = 317U;
int64_t x145 = -1LL;
volatile int64_t x147 = 79066LL;
int16_t x148 = INT16_MAX;
volatile int32_t x151 = 64618;
int32_t t37 = -14460;
static int16_t x153 = -1;
int32_t x157 = -1;
int16_t x161 = 456;
volatile int32_t x162 = 3735;
int16_t x164 = INT16_MIN;
static int8_t x172 = -26;
int32_t t42 = 114;
int64_t x177 = -7LL;
int32_t t44 = 3095692;
uint32_t t45 = 0U;
int8_t x186 = -1;
static int32_t t47 = -20;
uint32_t x195 = 63111630U;
static int32_t t49 = -3289889;
static int16_t x203 = -167;
uint16_t x204 = UINT16_MAX;
uint16_t x218 = UINT16_MAX;
uint32_t x222 = 111626U;
int32_t x225 = INT32_MIN;
int8_t x231 = -1;
int16_t x235 = INT16_MIN;
volatile uint32_t x237 = 196047U;
int32_t x238 = 2382;
int64_t x239 = INT64_MIN;
int16_t x246 = 1;
int32_t t62 = -184;
static int16_t x254 = -1;
int32_t x255 = -1;
int32_t x262 = 109849;
volatile int64_t x264 = INT64_MIN;
int16_t x265 = INT16_MAX;
uint16_t x271 = 7739U;
uint64_t t68 = 7767930226298LLU;
volatile int8_t x278 = INT8_MAX;
int32_t x279 = 3;
int16_t x281 = INT16_MIN;
int64_t x282 = -1LL;
static int8_t x283 = 1;
int32_t x291 = -1;
int16_t x298 = INT16_MAX;
int64_t x300 = 8980776123226402LL;
int32_t x302 = -3;
int32_t x304 = INT32_MAX;
int16_t x305 = 50;
static int64_t x306 = -1LL;
int16_t x311 = INT16_MIN;
int32_t x314 = -1;
volatile uint8_t x325 = UINT8_MAX;
volatile uint64_t x327 = UINT64_MAX;
volatile int64_t t82 = -3LL;
int64_t x349 = -1LL;
static uint32_t t87 = 82548393U;
static int32_t x355 = -1;
static uint64_t x359 = 15692520LLU;
static volatile int32_t t89 = 2;
int32_t x365 = INT32_MIN;
static int8_t x367 = -1;
uint8_t x378 = 97U;
uint8_t x381 = 2U;
volatile int32_t x382 = INT32_MAX;
uint8_t x388 = UINT8_MAX;
volatile int32_t t96 = 319;
int32_t t97 = -884;
int8_t x395 = INT8_MIN;
static volatile int32_t t98 = -260907882;


void f0(void) {
	volatile int32_t x1 = INT32_MAX;
	uint64_t x2 = UINT64_MAX;
	int8_t x3 = INT8_MIN;
	int32_t t0 = 7;

	t0 = (((x1^x2)<=x3)&x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint32_t x6 = 233597382U;
	int64_t x7 = -237795LL;
	int32_t t1 = -1800;

	t1 = (((x5^x6)<=x7)&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = 4661;
	int8_t x10 = -14;
	volatile int64_t x11 = -293711288187LL;
	int32_t t2 = 3294;

	t2 = (((x9^x10)<=x11)&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 6U;
	uint32_t x14 = 255866053U;
	uint32_t x15 = 6U;
	int16_t x16 = INT16_MIN;
	volatile int32_t t3 = 481986;

	t3 = (((x13^x14)<=x15)&x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = -1;
	int16_t x18 = -536;
	int16_t x19 = -6;
	int16_t x20 = 29;
	int32_t t4 = 190880;

	t4 = (((x17^x18)<=x19)&x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	int16_t x23 = -165;
	int16_t x24 = INT16_MIN;
	static volatile int32_t t5 = 1794;

	t5 = (((x21^x22)<=x23)&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x26 = -1;
	int32_t x27 = -1;
	static volatile int32_t t6 = 4082;

	t6 = (((x25^x26)<=x27)&x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = 8912861677676853LL;
	int64_t x30 = INT64_MAX;
	static int32_t x31 = 469;
	int64_t x32 = INT64_MAX;
	int64_t t7 = -12LL;

	t7 = (((x29^x30)<=x31)&x32);

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MIN;
	uint32_t x34 = 171584912U;
	volatile int32_t x35 = INT32_MAX;
	static int8_t x36 = 43;

	t8 = (((x33^x34)<=x35)&x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int8_t x39 = -43;
	volatile int8_t x40 = 14;
	int32_t t9 = 70997;

	t9 = (((x37^x38)<=x39)&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 22U;
	uint32_t x42 = 482U;
	int8_t x43 = 1;

	t10 = (((x41^x42)<=x43)&x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -111;
	int16_t x46 = -107;
	int8_t x48 = 1;

	t11 = (((x45^x46)<=x47)&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x50 = 3U;
	volatile int64_t x51 = INT64_MAX;
	uint16_t x52 = 501U;
	volatile int32_t t12 = 1350;

	t12 = (((x49^x50)<=x51)&x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x53 = UINT8_MAX;
	static int16_t x54 = -1;
	uint8_t x55 = 17U;
	static int64_t x56 = 436526974576LL;
	static int64_t t13 = 10218LL;

	t13 = (((x53^x54)<=x55)&x56);

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	static uint8_t x58 = 110U;
	volatile int16_t x59 = 9;
	volatile uint64_t t14 = 102848LLU;

	t14 = (((x57^x58)<=x59)&x60);

	if (t14 != 1LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	static volatile int64_t x62 = INT64_MIN;
	int32_t x63 = INT32_MAX;
	static uint64_t x64 = UINT64_MAX;

	t15 = (((x61^x62)<=x63)&x64);

	if (t15 != 1LLU) { NG(); } else { ; }
	
}

void f16(void) {
	static uint32_t x65 = 69U;
	int16_t x66 = INT16_MAX;
	volatile uint64_t x68 = UINT64_MAX;
	volatile uint64_t t16 = 16891LLU;

	t16 = (((x65^x66)<=x67)&x68);

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x70 = 6U;
	volatile int8_t x71 = -1;
	volatile uint32_t x72 = UINT32_MAX;
	volatile uint32_t t17 = 1U;

	t17 = (((x69^x70)<=x71)&x72);

	if (t17 != 0U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MIN;
	static volatile uint8_t x75 = 115U;
	static int64_t x76 = -1LL;
	static int64_t t18 = 4136698232LL;

	t18 = (((x73^x74)<=x75)&x76);

	if (t18 != 1LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = 911;
	uint64_t x78 = UINT64_MAX;
	volatile int32_t x79 = INT32_MIN;
	volatile int8_t x80 = INT8_MIN;
	volatile int32_t t19 = 633606056;

	t19 = (((x77^x78)<=x79)&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x83 = -1;
	uint16_t x84 = UINT16_MAX;
	int32_t t20 = 6972502;

	t20 = (((x81^x82)<=x83)&x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = 254247U;
	static int32_t x86 = INT32_MAX;
	volatile uint64_t x87 = 393850606LLU;
	static uint32_t x88 = 219U;
	volatile uint32_t t21 = 466925387U;

	t21 = (((x85^x86)<=x87)&x88);

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x91 = -11318;
	int32_t t22 = -3071;

	t22 = (((x89^x90)<=x91)&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -1LL;
	int8_t x94 = -1;
	int8_t x95 = -33;
	uint8_t x96 = 0U;
	static int32_t t23 = 2788;

	t23 = (((x93^x94)<=x95)&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -934;
	uint64_t x98 = 19620465655804197LLU;
	static uint64_t x99 = 368624109917651LLU;
	uint16_t x100 = 18330U;
	volatile int32_t t24 = 57004728;

	t24 = (((x97^x98)<=x99)&x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 9965U;
	int16_t x102 = INT16_MIN;
	static uint8_t x103 = UINT8_MAX;
	uint64_t x104 = 2LLU;
	uint64_t t25 = 6904021279968LLU;

	t25 = (((x101^x102)<=x103)&x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x105 = 252859393164652LLU;
	static uint64_t x106 = 14803753570298LLU;
	static volatile int8_t x107 = 46;

	t26 = (((x105^x106)<=x107)&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -1;
	int32_t x110 = -1;
	volatile uint64_t x111 = 809LLU;

	t27 = (((x109^x110)<=x111)&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 3U;
	static int8_t x114 = -1;
	int8_t x115 = 24;
	static volatile int32_t t28 = 0;

	t28 = (((x113^x114)<=x115)&x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int64_t x118 = INT64_MIN;
	uint64_t x119 = UINT64_MAX;
	static uint32_t x120 = 4260U;
	uint32_t t29 = 297361929U;

	t29 = (((x117^x118)<=x119)&x120);

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = INT16_MIN;
	int16_t x122 = INT16_MIN;
	int16_t x123 = -1;
	static uint64_t x124 = 609166425490196628LLU;
	static volatile uint64_t t30 = 34339827605LLU;

	t30 = (((x121^x122)<=x123)&x124);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = 2U;
	uint8_t x126 = UINT8_MAX;
	static int64_t x127 = INT64_MIN;
	int8_t x128 = 1;
	int32_t t31 = -586088560;

	t31 = (((x125^x126)<=x127)&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MIN;
	int32_t x131 = INT32_MIN;
	int32_t x132 = -1;
	int32_t t32 = 14;

	t32 = (((x129^x130)<=x131)&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint16_t x133 = UINT16_MAX;
	uint64_t x134 = 38754844123513107LLU;
	static int8_t x135 = INT8_MAX;
	int8_t x136 = INT8_MIN;
	static int32_t t33 = -18655950;

	t33 = (((x133^x134)<=x135)&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = -10;
	static int32_t x139 = INT32_MIN;
	int64_t x140 = -1LL;
	static int64_t t34 = 6998973277103056LL;

	t34 = (((x137^x138)<=x139)&x140);

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	int64_t x142 = -1LL;
	int64_t x143 = -15077335161184677LL;
	volatile int32_t x144 = -1;
	int32_t t35 = 44796500;

	t35 = (((x141^x142)<=x143)&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x146 = INT32_MAX;
	int32_t t36 = -584532;

	t36 = (((x145^x146)<=x147)&x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	uint16_t x150 = UINT16_MAX;
	int16_t x152 = INT16_MIN;

	t37 = (((x149^x150)<=x151)&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x154 = -1;
	volatile int32_t x155 = INT32_MIN;
	int16_t x156 = -1;
	static volatile int32_t t38 = 6;

	t38 = (((x153^x154)<=x155)&x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint16_t x158 = 223U;
	static int16_t x159 = -1;
	volatile int32_t x160 = -1;
	static int32_t t39 = 344405;

	t39 = (((x157^x158)<=x159)&x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x163 = 5U;
	int32_t t40 = 15;

	t40 = (((x161^x162)<=x163)&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int8_t x165 = -1;
	volatile uint32_t x166 = 15321088U;
	static int16_t x167 = -1;
	volatile int32_t x168 = INT32_MIN;
	static volatile int32_t t41 = -20923;

	t41 = (((x165^x166)<=x167)&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 2730583LLU;
	uint16_t x170 = UINT16_MAX;
	uint8_t x171 = 15U;

	t42 = (((x169^x170)<=x171)&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = INT8_MIN;
	int64_t x174 = INT64_MAX;
	static uint16_t x175 = 2013U;
	int16_t x176 = 44;
	volatile int32_t t43 = -7;

	t43 = (((x173^x174)<=x175)&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint32_t x178 = 0U;
	int16_t x179 = INT16_MAX;
	int32_t x180 = INT32_MIN;

	t44 = (((x177^x178)<=x179)&x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x181 = -1;
	int64_t x182 = -8749905LL;
	volatile int16_t x183 = 0;
	volatile uint32_t x184 = UINT32_MAX;

	t45 = (((x181^x182)<=x183)&x184);

	if (t45 != 0U) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 1231483741644300LL;
	uint8_t x187 = 34U;
	int8_t x188 = -15;
	static int32_t t46 = 507526;

	t46 = (((x185^x186)<=x187)&x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x189 = INT64_MAX;
	uint64_t x190 = 230856693LLU;
	uint64_t x191 = 28LLU;
	static int32_t x192 = -111272;

	t47 = (((x189^x190)<=x191)&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint8_t x193 = 1U;
	static uint8_t x194 = UINT8_MAX;
	volatile int32_t x196 = INT32_MIN;
	static volatile int32_t t48 = 305791;

	t48 = (((x193^x194)<=x195)&x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x197 = 51U;
	static int32_t x198 = INT32_MAX;
	uint16_t x199 = 0U;
	uint8_t x200 = 15U;

	t49 = (((x197^x198)<=x199)&x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x201 = INT64_MIN;
	static uint8_t x202 = 0U;
	volatile int32_t t50 = -1;

	t50 = (((x201^x202)<=x203)&x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x205 = 117;
	volatile int32_t x206 = INT32_MIN;
	int16_t x207 = -6;
	uint64_t x208 = 1976079061533717LLU;
	uint64_t t51 = 258041640LLU;

	t51 = (((x205^x206)<=x207)&x208);

	if (t51 != 1LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x209 = 32638947;
	int64_t x210 = INT64_MAX;
	static volatile uint32_t x211 = UINT32_MAX;
	int32_t x212 = INT32_MAX;
	static int32_t t52 = 166993605;

	t52 = (((x209^x210)<=x211)&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	volatile int32_t x214 = INT32_MAX;
	uint32_t x215 = 4U;
	static int8_t x216 = INT8_MAX;
	int32_t t53 = 239;

	t53 = (((x213^x214)<=x215)&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x217 = 6U;
	int16_t x219 = INT16_MIN;
	static int32_t x220 = 8340;
	volatile int32_t t54 = 9;

	t54 = (((x217^x218)<=x219)&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x221 = 290;
	volatile int8_t x223 = 14;
	int16_t x224 = -1;
	int32_t t55 = 1;

	t55 = (((x221^x222)<=x223)&x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x226 = -1;
	uint16_t x227 = UINT16_MAX;
	int64_t x228 = -1LL;
	int64_t t56 = 443LL;

	t56 = (((x225^x226)<=x227)&x228);

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x229 = INT16_MIN;
	static int8_t x230 = -1;
	static volatile int64_t x232 = INT64_MIN;
	int64_t t57 = -5LL;

	t57 = (((x229^x230)<=x231)&x232);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MAX;
	int32_t x234 = 26316806;
	uint64_t x236 = UINT64_MAX;
	static volatile uint64_t t58 = 9322017253571LLU;

	t58 = (((x233^x234)<=x235)&x236);

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x240 = 67U;
	uint32_t t59 = 433586117U;

	t59 = (((x237^x238)<=x239)&x240);

	if (t59 != 0U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint32_t x241 = 121389U;
	static int16_t x242 = -1;
	int64_t x243 = INT64_MIN;
	uint16_t x244 = 73U;
	volatile int32_t t60 = 644;

	t60 = (((x241^x242)<=x243)&x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	static int16_t x247 = -2;
	static int8_t x248 = -1;
	int32_t t61 = 1050;

	t61 = (((x245^x246)<=x247)&x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -1;
	uint32_t x250 = 29276U;
	volatile int16_t x251 = -2305;
	int32_t x252 = INT32_MIN;

	t62 = (((x249^x250)<=x251)&x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x253 = 7LLU;
	volatile uint16_t x256 = 1534U;
	int32_t t63 = 27497590;

	t63 = (((x253^x254)<=x255)&x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	volatile int16_t x258 = INT16_MIN;
	static uint16_t x259 = 6U;
	int32_t x260 = INT32_MAX;
	int32_t t64 = 217187855;

	t64 = (((x257^x258)<=x259)&x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = INT32_MAX;
	int16_t x263 = INT16_MIN;
	int64_t t65 = -84891595151469LL;

	t65 = (((x261^x262)<=x263)&x264);

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x266 = INT8_MIN;
	int16_t x267 = INT16_MIN;
	volatile int64_t x268 = -1LL;
	int64_t t66 = 73901369731083597LL;

	t66 = (((x265^x266)<=x267)&x268);

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = UINT16_MAX;
	volatile int8_t x270 = -1;
	volatile int16_t x272 = INT16_MIN;
	static volatile int32_t t67 = 0;

	t67 = (((x269^x270)<=x271)&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = INT32_MIN;
	volatile int32_t x274 = INT32_MIN;
	int8_t x275 = INT8_MIN;
	uint64_t x276 = 2418766118433LLU;

	t68 = (((x273^x274)<=x275)&x276);

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile int32_t x277 = -6922091;
	int8_t x280 = 1;
	volatile int32_t t69 = 8145;

	t69 = (((x277^x278)<=x279)&x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x284 = 1;
	volatile int32_t t70 = 239;

	t70 = (((x281^x282)<=x283)&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	static int16_t x286 = INT16_MIN;
	int32_t x287 = INT32_MIN;
	volatile int64_t x288 = -1LL;
	volatile int64_t t71 = 4310511809LL;

	t71 = (((x285^x286)<=x287)&x288);

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x289 = INT32_MAX;
	int32_t x290 = -1356959;
	int64_t x292 = INT64_MIN;
	static int64_t t72 = -10470755213423684LL;

	t72 = (((x289^x290)<=x291)&x292);

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1257971LL;
	uint32_t x294 = UINT32_MAX;
	int8_t x295 = INT8_MIN;
	int16_t x296 = INT16_MIN;
	int32_t t73 = -972867755;

	t73 = (((x293^x294)<=x295)&x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x297 = 49U;
	static volatile int8_t x299 = INT8_MIN;
	volatile int64_t t74 = 1257LL;

	t74 = (((x297^x298)<=x299)&x300);

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x301 = INT16_MIN;
	int16_t x303 = INT16_MAX;
	int32_t t75 = 45977558;

	t75 = (((x301^x302)<=x303)&x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x307 = -1;
	int64_t x308 = INT64_MIN;
	int64_t t76 = -398020059379954LL;

	t76 = (((x305^x306)<=x307)&x308);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint16_t x309 = 1U;
	static uint32_t x310 = UINT32_MAX;
	uint8_t x312 = 1U;
	static volatile int32_t t77 = -100;

	t77 = (((x309^x310)<=x311)&x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x313 = UINT32_MAX;
	static uint8_t x315 = 15U;
	uint64_t x316 = UINT64_MAX;
	uint64_t t78 = 437971040453868LLU;

	t78 = (((x313^x314)<=x315)&x316);

	if (t78 != 1LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x317 = 3U;
	int16_t x318 = INT16_MIN;
	int64_t x319 = -272004374LL;
	uint8_t x320 = 65U;
	volatile int32_t t79 = 186;

	t79 = (((x317^x318)<=x319)&x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = INT64_MIN;
	int32_t x322 = INT32_MIN;
	int8_t x323 = INT8_MIN;
	uint8_t x324 = 15U;
	static volatile int32_t t80 = -50785092;

	t80 = (((x321^x322)<=x323)&x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x326 = INT64_MAX;
	volatile uint16_t x328 = UINT16_MAX;
	volatile int32_t t81 = 9949;

	t81 = (((x325^x326)<=x327)&x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MIN;
	int8_t x330 = -1;
	int64_t x331 = INT64_MIN;
	volatile int64_t x332 = INT64_MAX;

	t82 = (((x329^x330)<=x331)&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x333 = -232;
	volatile int32_t x334 = -300432801;
	int8_t x335 = INT8_MIN;
	int64_t x336 = 103243199LL;
	volatile int64_t t83 = -9188428LL;

	t83 = (((x333^x334)<=x335)&x336);

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = 12;
	uint64_t x338 = 5859764088281752LLU;
	int8_t x339 = 2;
	uint8_t x340 = 2U;
	int32_t t84 = 247600;

	t84 = (((x337^x338)<=x339)&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x341 = UINT16_MAX;
	uint16_t x342 = 5797U;
	volatile uint32_t x343 = 464131U;
	int8_t x344 = INT8_MIN;
	static volatile int32_t t85 = 3;

	t85 = (((x341^x342)<=x343)&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = INT64_MIN;
	int32_t x346 = -202280;
	int64_t x347 = -1LL;
	volatile uint16_t x348 = 223U;
	volatile int32_t t86 = -710679;

	t86 = (((x345^x346)<=x347)&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x350 = 30556LLU;
	static int16_t x351 = INT16_MIN;
	static volatile uint32_t x352 = 3927U;

	t87 = (((x349^x350)<=x351)&x352);

	if (t87 != 0U) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = 412652856U;
	static volatile int8_t x354 = INT8_MAX;
	uint64_t x356 = UINT64_MAX;
	volatile uint64_t t88 = 1983577505LLU;

	t88 = (((x353^x354)<=x355)&x356);

	if (t88 != 1LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = INT64_MIN;
	uint8_t x358 = 1U;
	int8_t x360 = INT8_MIN;

	t89 = (((x357^x358)<=x359)&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x361 = UINT16_MAX;
	int8_t x362 = INT8_MIN;
	int32_t x363 = INT32_MIN;
	volatile int8_t x364 = INT8_MIN;
	static int32_t t90 = -11572276;

	t90 = (((x361^x362)<=x363)&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x366 = -1;
	int16_t x368 = -262;
	volatile int32_t t91 = 1;

	t91 = (((x365^x366)<=x367)&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int64_t x369 = INT64_MAX;
	int16_t x370 = 154;
	volatile uint32_t x371 = 58639908U;
	int32_t x372 = -1;
	int32_t t92 = 1;

	t92 = (((x369^x370)<=x371)&x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x373 = INT64_MAX;
	uint16_t x374 = UINT16_MAX;
	volatile int8_t x375 = INT8_MAX;
	uint64_t x376 = UINT64_MAX;
	volatile uint64_t t93 = 3492079191215359077LLU;

	t93 = (((x373^x374)<=x375)&x376);

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x377 = 0;
	uint32_t x379 = UINT32_MAX;
	int32_t x380 = INT32_MIN;
	volatile int32_t t94 = 2;

	t94 = (((x377^x378)<=x379)&x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x383 = -12903066772793643LL;
	static int16_t x384 = 4;
	volatile int32_t t95 = -1;

	t95 = (((x381^x382)<=x383)&x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = -94LL;
	static volatile int64_t x386 = 366624955LL;
	volatile int8_t x387 = 18;

	t96 = (((x385^x386)<=x387)&x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x389 = -1938212284902061LL;
	int16_t x390 = -1;
	uint8_t x391 = 1U;
	uint8_t x392 = 101U;

	t97 = (((x389^x390)<=x391)&x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x393 = 27U;
	int16_t x394 = 1;
	uint8_t x396 = 2U;

	t98 = (((x393^x394)<=x395)&x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x397 = 1;
	uint32_t x398 = 81089112U;
	static uint16_t x399 = UINT16_MAX;
	uint16_t x400 = 9U;
	int32_t t99 = -1;

	t99 = (((x397^x398)<=x399)&x400);

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

