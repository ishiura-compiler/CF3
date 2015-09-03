#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -156639102;
volatile uint16_t x25 = 923U;
static volatile int32_t x27 = INT32_MIN;
volatile int32_t t5 = -538035406;
uint8_t x35 = 30U;
uint16_t x36 = 210U;
int16_t x37 = -8;
int64_t x38 = INT64_MAX;
static int8_t x40 = INT8_MIN;
uint32_t x42 = UINT32_MAX;
uint16_t x50 = UINT16_MAX;
uint64_t x58 = 849450LLU;
volatile int16_t x61 = -1;
static volatile uint32_t x62 = 125U;
uint64_t x63 = UINT64_MAX;
static int32_t t14 = 0;
static uint8_t x68 = 8U;
static int16_t x82 = 8;
uint32_t x84 = 2750767U;
int16_t x85 = 367;
int32_t x87 = 828;
uint64_t x92 = 2221146LLU;
static volatile int32_t t21 = 361886647;
uint64_t x94 = 499862648319628LLU;
volatile int16_t x96 = -3;
static volatile int32_t t24 = -54446559;
uint64_t x109 = 8550LLU;
uint64_t x123 = 3LLU;
static volatile int8_t x129 = INT8_MIN;
static int32_t t30 = -16362;
int16_t x137 = -1;
uint32_t x138 = 1U;
volatile int16_t x142 = INT16_MAX;
volatile uint64_t x145 = UINT64_MAX;
volatile int64_t x146 = INT64_MIN;
int16_t x148 = 6;
uint8_t x158 = 51U;
volatile int32_t t37 = -30;
uint64_t x161 = UINT64_MAX;
int8_t x164 = -1;
static volatile int32_t t39 = -857983475;
static volatile int32_t t40 = -14;
int8_t x175 = -1;
int16_t x176 = -1;
uint16_t x178 = UINT16_MAX;
uint8_t x179 = 100U;
int64_t x183 = 23173700LL;
int32_t x187 = INT32_MIN;
int32_t x210 = INT32_MIN;
int32_t t53 = 52557901;
int16_t x233 = -1;
int64_t x238 = INT64_MIN;
int64_t x244 = -18491805LL;
uint32_t x250 = 574U;
static volatile int16_t x251 = -512;
int64_t x255 = -5LL;
int8_t x267 = INT8_MIN;
int8_t x281 = INT8_MAX;
uint64_t x285 = 152533396LLU;
uint16_t x297 = 94U;
int32_t t73 = 19;
uint32_t x309 = UINT32_MAX;
static volatile uint8_t x311 = UINT8_MAX;
volatile int32_t x314 = 2276443;
uint8_t x324 = 7U;
volatile uint64_t x328 = 37988LLU;
volatile uint64_t x331 = 408758274475799LLU;
volatile int32_t x335 = -1;
volatile int32_t t80 = 18;
volatile int16_t x339 = INT16_MIN;
static volatile int32_t t82 = -552865909;
int32_t x350 = INT32_MIN;
int16_t x351 = 51;
static volatile int16_t x358 = INT16_MAX;
uint64_t x363 = 219787945381172LLU;
static uint64_t x364 = UINT64_MAX;
int8_t x367 = -1;
static int16_t x381 = 1365;
int64_t x382 = -13335LL;
uint32_t x385 = 224485264U;
int64_t x388 = -134935LL;
int32_t x390 = INT32_MAX;
uint16_t x392 = 177U;
uint32_t x393 = 6263914U;
uint16_t x394 = 193U;
int64_t x402 = INT64_MIN;
volatile int32_t x403 = 1;
int8_t x407 = INT8_MIN;
volatile int32_t t98 = 440163;
int64_t x409 = INT64_MAX;
volatile int32_t t99 = -4;


void f0(void) {
	int32_t x1 = INT32_MIN;
	int8_t x2 = INT8_MIN;
	int32_t x3 = INT32_MIN;
	uint8_t x4 = 12U;

	t0 = (((x1%x2)%x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 5363U;
	uint64_t x6 = 30106LLU;
	volatile uint32_t x7 = UINT32_MAX;
	uint32_t x8 = UINT32_MAX;
	volatile int32_t t1 = 153756;

	t1 = (((x5%x6)%x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1;
	int16_t x14 = INT16_MIN;
	uint16_t x15 = 65U;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t2 = 3;

	t2 = (((x13%x14)%x15)==x16);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x17 = 353782U;
	static int16_t x18 = INT16_MAX;
	int8_t x19 = INT8_MIN;
	int64_t x20 = INT64_MIN;
	int32_t t3 = -9050291;

	t3 = (((x17%x18)%x19)==x20);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	volatile int8_t x22 = INT8_MIN;
	volatile int8_t x23 = INT8_MIN;
	static int32_t x24 = -1;
	static int32_t t4 = 82678106;

	t4 = (((x21%x22)%x23)==x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x26 = -232;
	uint8_t x28 = 20U;

	t5 = (((x25%x26)%x27)==x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x29 = -1LL;
	volatile uint32_t x30 = 15U;
	uint8_t x31 = UINT8_MAX;
	static uint64_t x32 = 3126LLU;
	volatile int32_t t6 = 8103;

	t6 = (((x29%x30)%x31)==x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	uint64_t x34 = 17070890247LLU;
	int32_t t7 = 119165075;

	t7 = (((x33%x34)%x35)==x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x39 = -2949652LL;
	int32_t t8 = -1;

	t8 = (((x37%x38)%x39)==x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 43U;
	uint32_t x43 = 11456U;
	int16_t x44 = 0;
	int32_t t9 = 52073;

	t9 = (((x41%x42)%x43)==x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = INT16_MIN;
	static uint32_t x46 = 23050U;
	uint64_t x47 = UINT64_MAX;
	static uint64_t x48 = 167LLU;
	static int32_t t10 = -45;

	t10 = (((x45%x46)%x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = 16;
	static int64_t x51 = -14881863448LL;
	volatile uint32_t x52 = 21853U;
	static int32_t t11 = -1033;

	t11 = (((x49%x50)%x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x53 = INT32_MIN;
	static volatile uint8_t x54 = UINT8_MAX;
	int64_t x55 = INT64_MAX;
	volatile int16_t x56 = -1;
	volatile int32_t t12 = 3;

	t12 = (((x53%x54)%x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = 0;
	int16_t x59 = 488;
	static uint8_t x60 = UINT8_MAX;
	volatile int32_t t13 = 21;

	t13 = (((x57%x58)%x59)==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x64 = 17392357LLU;

	t14 = (((x61%x62)%x63)==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x65 = 10106215292LLU;
	int64_t x66 = -1LL;
	uint64_t x67 = 247295866270696335LLU;
	volatile int32_t t15 = 3068;

	t15 = (((x65%x66)%x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int32_t x69 = -294978239;
	uint16_t x70 = 56U;
	volatile int32_t x71 = INT32_MIN;
	volatile int8_t x72 = INT8_MIN;
	volatile int32_t t16 = 4074072;

	t16 = (((x69%x70)%x71)==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int64_t x74 = INT64_MIN;
	int64_t x75 = 1LL;
	int32_t x76 = -1;
	volatile int32_t t17 = 4972;

	t17 = (((x73%x74)%x75)==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = INT32_MIN;
	int32_t x78 = INT32_MIN;
	static int8_t x79 = INT8_MIN;
	int64_t x80 = -39739LL;
	int32_t t18 = 113418636;

	t18 = (((x77%x78)%x79)==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	int32_t x83 = INT32_MIN;
	int32_t t19 = 60219;

	t19 = (((x81%x82)%x83)==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x86 = INT8_MIN;
	uint64_t x88 = 61990476551406LLU;
	int32_t t20 = 2;

	t20 = (((x85%x86)%x87)==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = INT16_MAX;
	uint16_t x90 = 3U;
	static int64_t x91 = INT64_MIN;

	t21 = (((x89%x90)%x91)==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MIN;
	static int32_t x95 = INT32_MIN;
	volatile int32_t t22 = -44;

	t22 = (((x93%x94)%x95)==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x97 = INT32_MAX;
	int8_t x98 = INT8_MIN;
	static uint32_t x99 = UINT32_MAX;
	int8_t x100 = INT8_MIN;
	int32_t t23 = -622442;

	t23 = (((x97%x98)%x99)==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = INT64_MAX;
	int16_t x102 = INT16_MIN;
	uint32_t x103 = UINT32_MAX;
	int16_t x104 = INT16_MIN;

	t24 = (((x101%x102)%x103)==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x105 = 576;
	int64_t x106 = INT64_MIN;
	int8_t x107 = 1;
	uint64_t x108 = 1486415911946435LLU;
	volatile int32_t t25 = -5316;

	t25 = (((x105%x106)%x107)==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static uint32_t x110 = 2918U;
	uint64_t x111 = 11LLU;
	static uint16_t x112 = 32235U;
	int32_t t26 = 153;

	t26 = (((x109%x110)%x111)==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x113 = 12;
	static int32_t x114 = -1;
	static volatile int32_t x115 = -1;
	int32_t x116 = -1284;
	volatile int32_t t27 = -119;

	t27 = (((x113%x114)%x115)==x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x121 = UINT64_MAX;
	int8_t x122 = INT8_MAX;
	uint32_t x124 = 79954825U;
	static int32_t t28 = 39;

	t28 = (((x121%x122)%x123)==x124);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x125 = INT32_MAX;
	static int16_t x126 = INT16_MIN;
	volatile int16_t x127 = -1;
	static uint32_t x128 = 2259534U;
	int32_t t29 = 0;

	t29 = (((x125%x126)%x127)==x128);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x130 = -1388;
	uint16_t x131 = 1644U;
	uint16_t x132 = 4693U;

	t30 = (((x129%x130)%x131)==x132);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = 0;
	int16_t x134 = INT16_MIN;
	volatile int8_t x135 = INT8_MIN;
	volatile uint16_t x136 = 1U;
	int32_t t31 = -223932820;

	t31 = (((x133%x134)%x135)==x136);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x139 = 6021U;
	volatile uint64_t x140 = 2708462673610LLU;
	int32_t t32 = -153;

	t32 = (((x137%x138)%x139)==x140);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = -1LL;
	volatile uint64_t x143 = 5331991825472LLU;
	int16_t x144 = -5;
	static int32_t t33 = -7262;

	t33 = (((x141%x142)%x143)==x144);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint32_t x147 = UINT32_MAX;
	int32_t t34 = -21778;

	t34 = (((x145%x146)%x147)==x148);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x149 = -3;
	int8_t x150 = -9;
	int16_t x151 = INT16_MAX;
	int32_t x152 = -1;
	static int32_t t35 = -6054;

	t35 = (((x149%x150)%x151)==x152);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x153 = UINT32_MAX;
	volatile int32_t x154 = 13757;
	uint16_t x155 = UINT16_MAX;
	int64_t x156 = 2016270LL;
	volatile int32_t t36 = -57;

	t36 = (((x153%x154)%x155)==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int64_t x157 = -745288959532LL;
	int16_t x159 = -7;
	int32_t x160 = INT32_MIN;

	t37 = (((x157%x158)%x159)==x160);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	volatile int32_t t38 = 18116904;

	t38 = (((x161%x162)%x163)==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x165 = INT8_MIN;
	volatile int8_t x166 = INT8_MAX;
	static volatile int8_t x167 = INT8_MIN;
	int32_t x168 = 158738703;

	t39 = (((x165%x166)%x167)==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x169 = UINT8_MAX;
	static uint64_t x170 = UINT64_MAX;
	int64_t x171 = -1564254104715LL;
	int8_t x172 = INT8_MIN;

	t40 = (((x169%x170)%x171)==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MAX;
	uint64_t x174 = 8421450760LLU;
	volatile int32_t t41 = -1;

	t41 = (((x173%x174)%x175)==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x177 = 36U;
	static int8_t x180 = -1;
	int32_t t42 = 66235813;

	t42 = (((x177%x178)%x179)==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint64_t x181 = UINT64_MAX;
	static int16_t x182 = INT16_MAX;
	uint8_t x184 = 20U;
	volatile int32_t t43 = 2;

	t43 = (((x181%x182)%x183)==x184);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x185 = 9LLU;
	int64_t x186 = 7128LL;
	int32_t x188 = -619;
	int32_t t44 = -194;

	t44 = (((x185%x186)%x187)==x188);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x189 = 1182725699772656LLU;
	volatile int32_t x190 = INT32_MAX;
	int32_t x191 = INT32_MIN;
	int8_t x192 = INT8_MAX;
	int32_t t45 = 3021;

	t45 = (((x189%x190)%x191)==x192);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x197 = UINT64_MAX;
	int64_t x198 = 502710262491564652LL;
	uint64_t x199 = 4024110993743616805LLU;
	int16_t x200 = -25;
	static int32_t t46 = 1290;

	t46 = (((x197%x198)%x199)==x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x201 = -130996628;
	uint16_t x202 = 12357U;
	volatile int8_t x203 = -30;
	static volatile int8_t x204 = 1;
	int32_t t47 = 32246;

	t47 = (((x201%x202)%x203)==x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x205 = UINT8_MAX;
	int16_t x206 = INT16_MAX;
	int64_t x207 = INT64_MIN;
	static uint64_t x208 = UINT64_MAX;
	int32_t t48 = 13321806;

	t48 = (((x205%x206)%x207)==x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int8_t x209 = INT8_MAX;
	uint32_t x211 = 77984910U;
	uint16_t x212 = 636U;
	int32_t t49 = -935818574;

	t49 = (((x209%x210)%x211)==x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = INT16_MAX;
	uint8_t x214 = 104U;
	static uint16_t x215 = 1U;
	int16_t x216 = -9776;
	volatile int32_t t50 = 2911;

	t50 = (((x213%x214)%x215)==x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x217 = INT8_MAX;
	volatile int8_t x218 = 17;
	volatile int16_t x219 = INT16_MIN;
	int32_t x220 = -1;
	int32_t t51 = 1305176;

	t51 = (((x217%x218)%x219)==x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x221 = INT8_MAX;
	uint16_t x222 = 29286U;
	volatile uint64_t x223 = UINT64_MAX;
	int8_t x224 = -10;
	int32_t t52 = -33785;

	t52 = (((x221%x222)%x223)==x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x225 = UINT16_MAX;
	static uint8_t x226 = 6U;
	int32_t x227 = -4676;
	volatile uint64_t x228 = 1558821965LLU;

	t53 = (((x225%x226)%x227)==x228);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x229 = -126467LL;
	int16_t x230 = -1;
	int32_t x231 = INT32_MIN;
	int32_t x232 = 221;
	int32_t t54 = -3511956;

	t54 = (((x229%x230)%x231)==x232);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x234 = -51;
	int16_t x235 = -2;
	static int16_t x236 = INT16_MAX;
	volatile int32_t t55 = -1;

	t55 = (((x233%x234)%x235)==x236);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x237 = 480;
	volatile uint32_t x239 = 20684105U;
	static uint64_t x240 = 76666246228504LLU;
	static volatile int32_t t56 = 775123;

	t56 = (((x237%x238)%x239)==x240);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint32_t x241 = 246665U;
	int64_t x242 = INT64_MIN;
	static volatile uint16_t x243 = 2082U;
	int32_t t57 = 70934100;

	t57 = (((x241%x242)%x243)==x244);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x245 = -1;
	static int8_t x246 = -1;
	volatile int16_t x247 = INT16_MIN;
	static uint64_t x248 = UINT64_MAX;
	volatile int32_t t58 = -7;

	t58 = (((x245%x246)%x247)==x248);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = -1LL;
	int64_t x252 = INT64_MIN;
	volatile int32_t t59 = 3697;

	t59 = (((x249%x250)%x251)==x252);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x253 = -1;
	uint8_t x254 = 4U;
	uint16_t x256 = 604U;
	int32_t t60 = -19840308;

	t60 = (((x253%x254)%x255)==x256);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x257 = UINT32_MAX;
	uint8_t x258 = UINT8_MAX;
	uint64_t x259 = UINT64_MAX;
	uint8_t x260 = 0U;
	static int32_t t61 = 30235268;

	t61 = (((x257%x258)%x259)==x260);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x261 = INT8_MIN;
	static int64_t x262 = INT64_MIN;
	int16_t x263 = -1;
	volatile int16_t x264 = 4893;
	static volatile int32_t t62 = -606407786;

	t62 = (((x261%x262)%x263)==x264);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x265 = 153721896882167966LL;
	static volatile int32_t x266 = -1;
	int32_t x268 = INT32_MIN;
	int32_t t63 = 81329840;

	t63 = (((x265%x266)%x267)==x268);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x269 = -1;
	uint32_t x270 = 1757686U;
	static uint16_t x271 = 215U;
	int32_t x272 = -112;
	int32_t t64 = -12154;

	t64 = (((x269%x270)%x271)==x272);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x273 = UINT16_MAX;
	uint32_t x274 = 117U;
	uint8_t x275 = 31U;
	int16_t x276 = INT16_MIN;
	volatile int32_t t65 = -1;

	t65 = (((x273%x274)%x275)==x276);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x277 = 7872381836683924LLU;
	static volatile int32_t x278 = INT32_MIN;
	volatile int16_t x279 = 43;
	int16_t x280 = -23;
	static volatile int32_t t66 = -14570;

	t66 = (((x277%x278)%x279)==x280);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x282 = INT32_MAX;
	uint32_t x283 = 762481315U;
	static int32_t x284 = INT32_MIN;
	static int32_t t67 = -190863222;

	t67 = (((x281%x282)%x283)==x284);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x286 = 3943;
	uint64_t x287 = 19272LLU;
	static int8_t x288 = INT8_MAX;
	int32_t t68 = 13829849;

	t68 = (((x285%x286)%x287)==x288);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x289 = 49U;
	uint64_t x290 = 12085123531374421LLU;
	static int16_t x291 = INT16_MIN;
	static volatile int64_t x292 = -1LL;
	volatile int32_t t69 = 1;

	t69 = (((x289%x290)%x291)==x292);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x293 = -1LL;
	int64_t x294 = -4813367586LL;
	int16_t x295 = -2;
	static uint8_t x296 = UINT8_MAX;
	int32_t t70 = 1023;

	t70 = (((x293%x294)%x295)==x296);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x298 = 1777320242U;
	int16_t x299 = INT16_MIN;
	volatile int8_t x300 = 2;
	int32_t t71 = -3;

	t71 = (((x297%x298)%x299)==x300);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x301 = 3761;
	uint16_t x302 = 16U;
	volatile int32_t x303 = -1;
	int16_t x304 = INT16_MIN;
	int32_t t72 = -1624;

	t72 = (((x301%x302)%x303)==x304);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x305 = -5328686LL;
	int8_t x306 = 25;
	int64_t x307 = -1LL;
	static int64_t x308 = -1LL;

	t73 = (((x305%x306)%x307)==x308);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x310 = -1;
	int8_t x312 = -1;
	int32_t t74 = 0;

	t74 = (((x309%x310)%x311)==x312);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x313 = 1727;
	int16_t x315 = -1;
	int8_t x316 = 1;
	int32_t t75 = 104;

	t75 = (((x313%x314)%x315)==x316);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x317 = 3084U;
	uint8_t x318 = UINT8_MAX;
	volatile int64_t x319 = INT64_MIN;
	uint64_t x320 = UINT64_MAX;
	volatile int32_t t76 = 109;

	t76 = (((x317%x318)%x319)==x320);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x321 = INT8_MIN;
	int16_t x322 = INT16_MIN;
	static int16_t x323 = INT16_MAX;
	int32_t t77 = 3943128;

	t77 = (((x321%x322)%x323)==x324);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x325 = -1LL;
	int64_t x326 = INT64_MIN;
	volatile int64_t x327 = INT64_MAX;
	volatile int32_t t78 = -3852;

	t78 = (((x325%x326)%x327)==x328);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x329 = 2U;
	int16_t x330 = -1;
	int32_t x332 = -6;
	int32_t t79 = -54;

	t79 = (((x329%x330)%x331)==x332);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x333 = 1U;
	int8_t x334 = -56;
	int32_t x336 = INT32_MIN;

	t80 = (((x333%x334)%x335)==x336);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x337 = UINT32_MAX;
	static int16_t x338 = -3;
	volatile uint16_t x340 = 10925U;
	volatile int32_t t81 = 5050696;

	t81 = (((x337%x338)%x339)==x340);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x341 = 1;
	static int8_t x342 = INT8_MAX;
	int8_t x343 = -1;
	volatile uint8_t x344 = UINT8_MAX;

	t82 = (((x341%x342)%x343)==x344);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x345 = UINT16_MAX;
	int8_t x346 = INT8_MIN;
	int32_t x347 = INT32_MIN;
	int8_t x348 = INT8_MIN;
	volatile int32_t t83 = 3307;

	t83 = (((x345%x346)%x347)==x348);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x349 = INT64_MAX;
	int32_t x352 = INT32_MIN;
	volatile int32_t t84 = -13719904;

	t84 = (((x349%x350)%x351)==x352);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile uint64_t x353 = 1340184LLU;
	static int32_t x354 = INT32_MIN;
	int32_t x355 = INT32_MIN;
	int64_t x356 = INT64_MIN;
	volatile int32_t t85 = -1745;

	t85 = (((x353%x354)%x355)==x356);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = UINT16_MAX;
	uint64_t x359 = 22LLU;
	static volatile uint8_t x360 = 65U;
	int32_t t86 = -1022883;

	t86 = (((x357%x358)%x359)==x360);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = INT32_MIN;
	int64_t x362 = INT64_MIN;
	volatile int32_t t87 = 215;

	t87 = (((x361%x362)%x363)==x364);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x365 = 1U;
	uint64_t x366 = 77LLU;
	int8_t x368 = 32;
	volatile int32_t t88 = -6061;

	t88 = (((x365%x366)%x367)==x368);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x369 = -6;
	int16_t x370 = INT16_MAX;
	int8_t x371 = 3;
	static uint32_t x372 = UINT32_MAX;
	int32_t t89 = 46;

	t89 = (((x369%x370)%x371)==x372);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x373 = INT16_MIN;
	uint8_t x374 = 9U;
	int64_t x375 = INT64_MIN;
	int64_t x376 = -1LL;
	int32_t t90 = -401;

	t90 = (((x373%x374)%x375)==x376);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x377 = INT16_MIN;
	static uint16_t x378 = 1U;
	int8_t x379 = 1;
	uint64_t x380 = UINT64_MAX;
	int32_t t91 = 67074;

	t91 = (((x377%x378)%x379)==x380);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x383 = -1;
	volatile int16_t x384 = -693;
	static int32_t t92 = -5494258;

	t92 = (((x381%x382)%x383)==x384);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x386 = 583U;
	int64_t x387 = INT64_MIN;
	int32_t t93 = -778535;

	t93 = (((x385%x386)%x387)==x388);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x389 = 1U;
	static int64_t x391 = -1LL;
	volatile int32_t t94 = -5;

	t94 = (((x389%x390)%x391)==x392);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x395 = INT16_MIN;
	static volatile int8_t x396 = -1;
	volatile int32_t t95 = -12710200;

	t95 = (((x393%x394)%x395)==x396);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x397 = -1;
	static int16_t x398 = INT16_MIN;
	int8_t x399 = -1;
	static uint32_t x400 = 2015U;
	int32_t t96 = 31628;

	t96 = (((x397%x398)%x399)==x400);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x401 = -997476;
	uint64_t x404 = UINT64_MAX;
	volatile int32_t t97 = -13341;

	t97 = (((x401%x402)%x403)==x404);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x405 = INT64_MAX;
	uint32_t x406 = 1382901932U;
	int64_t x408 = -148202135LL;

	t98 = (((x405%x406)%x407)==x408);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x410 = 4991;
	volatile int16_t x411 = -5;
	uint32_t x412 = 872915267U;

	t99 = (((x409%x410)%x411)==x412);

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

