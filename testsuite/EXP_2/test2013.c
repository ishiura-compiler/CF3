#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x2 = INT32_MIN;
uint64_t t0 = 131663466000803764LLU;
uint16_t x5 = UINT16_MAX;
volatile int64_t t1 = 2LL;
static uint32_t x12 = UINT32_MAX;
static int8_t x13 = INT8_MAX;
volatile int8_t x20 = INT8_MAX;
int64_t x21 = -1LL;
int8_t x22 = INT8_MIN;
int32_t x33 = -43797;
int64_t x34 = 3402LL;
int32_t x35 = INT32_MAX;
static uint8_t x37 = 6U;
uint64_t x40 = UINT64_MAX;
volatile int16_t x42 = 17;
int32_t x43 = 23611609;
volatile int32_t t10 = -17166;
int32_t x47 = INT32_MAX;
uint64_t x54 = 195LLU;
int16_t x57 = 10;
int16_t x69 = -1;
volatile int8_t x71 = -1;
int32_t t17 = 1;
uint16_t x75 = UINT16_MAX;
static int64_t t18 = INT64_MIN;
static volatile uint16_t x78 = 3897U;
int8_t x80 = 0;
static uint8_t x82 = 1U;
int16_t x83 = INT16_MIN;
static int64_t x93 = INT64_MIN;
volatile int16_t x94 = INT16_MIN;
int64_t x97 = -1LL;
uint16_t x99 = 1U;
uint64_t x101 = 326212329678LLU;
int8_t x104 = 0;
volatile uint64_t x110 = 613698836100662880LLU;
uint64_t x111 = UINT64_MAX;
uint64_t t27 = 6201LLU;
volatile uint32_t x116 = 856008U;
uint64_t x121 = 638LLU;
uint8_t x122 = 0U;
uint8_t x127 = 4U;
int32_t x128 = -695621;
int32_t t31 = 24;
volatile int8_t x132 = 21;
volatile int32_t t32 = -2;
volatile int8_t x133 = 1;
uint8_t x162 = 2U;
uint16_t x164 = 934U;
uint64_t x176 = 3LLU;
int16_t x177 = -1;
uint64_t x194 = 8LLU;
volatile uint32_t x195 = 157594U;
uint8_t x198 = 19U;
uint32_t x206 = 107542U;
volatile int8_t x207 = INT8_MIN;
static volatile int32_t t53 = 163969;
volatile uint16_t x222 = 4U;
static volatile int16_t x223 = INT16_MIN;
uint32_t x230 = 2U;
int32_t x231 = INT32_MIN;
int64_t x235 = 67736142009940LL;
uint16_t x241 = UINT16_MAX;
volatile int32_t x244 = -1;
volatile int32_t t60 = 55687;
int8_t x259 = -6;
int64_t t66 = 11593633503LL;
volatile int64_t x270 = INT64_MAX;
int64_t t67 = 13LL;
int32_t x283 = 118242;
int64_t x288 = -1432253840524005423LL;
int8_t x290 = INT8_MIN;
volatile int8_t x292 = INT8_MIN;
static uint16_t x297 = UINT16_MAX;
int32_t x300 = -1;
int64_t t74 = -11170LL;
int16_t x307 = -1;
uint32_t x310 = 11834U;
static volatile int64_t t77 = -43445413869615776LL;
int8_t x313 = 49;
static int64_t x325 = -51897LL;
uint64_t x327 = 150377340922LLU;
static int64_t x328 = INT64_MAX;
int8_t x331 = INT8_MIN;
int16_t x334 = INT16_MIN;
static int32_t x339 = INT32_MIN;
volatile int32_t t84 = 1360897;
int64_t x351 = 381LL;
static int32_t x366 = INT32_MIN;
uint64_t x367 = 121851477708LLU;
uint8_t x371 = 120U;
int64_t t92 = 996329994276146LL;
volatile int16_t x375 = -1;
static int32_t x377 = -1;
static uint8_t x382 = UINT8_MAX;
uint8_t x386 = 1U;
static int32_t x389 = 1159;
uint64_t t97 = 34565482LLU;
int32_t x397 = -1;


void f0(void) {
	static int16_t x1 = INT16_MAX;
	volatile int16_t x3 = INT16_MIN;
	uint64_t x4 = 1030303LLU;

	t0 = ((x1|(x2|x3))&x4);

	if (t0 != 1030303LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MAX;
	int16_t x7 = -68;
	static uint8_t x8 = 4U;

	t1 = ((x5|(x6|x7))&x8);

	if (t1 != 4LL) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	static int16_t x10 = INT16_MAX;
	uint32_t x11 = UINT32_MAX;
	uint32_t t2 = UINT32_MAX;

	t2 = ((x9|(x10|x11))&x12);

	if (t2 != UINT32_MAX) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x14 = -3;
	volatile uint32_t x15 = UINT32_MAX;
	int64_t x16 = INT64_MIN;
	int64_t t3 = 6LL;

	t3 = ((x13|(x14|x15))&x16);

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = UINT32_MAX;
	int16_t x18 = -1;
	int8_t x19 = -1;
	uint32_t t4 = 587158198U;

	t4 = ((x17|(x18|x19))&x20);

	if (t4 != 127U) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x23 = 991029704U;
	uint32_t x24 = UINT32_MAX;
	volatile int64_t t5 = 55LL;

	t5 = ((x21|(x22|x23))&x24);

	if (t5 != 4294967295LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MAX;
	int64_t x26 = INT64_MIN;
	int16_t x27 = 57;
	volatile int32_t x28 = 3630960;
	static int64_t t6 = -2097665307LL;

	t6 = ((x25|(x26|x27))&x28);

	if (t6 != 3630960LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -1;
	uint16_t x30 = 30355U;
	uint32_t x31 = UINT32_MAX;
	int16_t x32 = -26;
	volatile uint32_t t7 = 265U;

	t7 = ((x29|(x30|x31))&x32);

	if (t7 != 4294967270U) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x36 = 4029512825LLU;
	uint64_t t8 = 287LLU;

	t8 = ((x33|(x34|x35))&x36);

	if (t8 != 4029512825LLU) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x38 = INT64_MIN;
	uint32_t x39 = 1770179798U;
	volatile uint64_t t9 = 11596783LLU;

	t9 = ((x37|(x38|x39))&x40);

	if (t9 != 9223372038624955606LLU) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 0U;
	int8_t x44 = INT8_MIN;

	t10 = ((x41|(x42|x43))&x44);

	if (t10 != 23611520) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -3;
	uint32_t x46 = 9640502U;
	static uint16_t x48 = UINT16_MAX;
	uint32_t t11 = 417U;

	t11 = ((x45|(x46|x47))&x48);

	if (t11 != 65535U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = -1;
	static int8_t x50 = INT8_MIN;
	int64_t x51 = -566065625770874265LL;
	int8_t x52 = -1;
	volatile int64_t t12 = -3541379472635291LL;

	t12 = ((x49|(x50|x51))&x52);

	if (t12 != -1LL) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = INT32_MIN;
	uint8_t x55 = 3U;
	int8_t x56 = 3;
	static uint64_t t13 = 1751LLU;

	t13 = ((x53|(x54|x55))&x56);

	if (t13 != 3LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x58 = 6358U;
	int64_t x59 = -1LL;
	uint8_t x60 = 94U;
	int64_t t14 = -18190856LL;

	t14 = ((x57|(x58|x59))&x60);

	if (t14 != 94LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 43;
	int8_t x62 = INT8_MAX;
	uint64_t x63 = 476024LLU;
	uint64_t x64 = 3717855LLU;
	static volatile uint64_t t15 = 445676064573472012LLU;

	t15 = ((x61|(x62|x63))&x64);

	if (t15 != 607LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = -1;
	volatile int16_t x66 = -1;
	uint32_t x67 = 75U;
	int16_t x68 = INT16_MIN;
	uint32_t t16 = 10671099U;

	t16 = ((x65|(x66|x67))&x68);

	if (t16 != 4294934528U) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	int16_t x72 = -1;

	t17 = ((x69|(x70|x71))&x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MIN;
	volatile int32_t x74 = 267207;
	volatile int64_t x76 = INT64_MIN;

	t18 = ((x73|(x74|x75))&x76);

	if (t18 != INT64_MIN) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = -55;
	int32_t x79 = 607130;
	int32_t t19 = 3657;

	t19 = ((x77|(x78|x79))&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = INT32_MAX;
	int16_t x84 = INT16_MAX;
	int32_t t20 = -7;

	t20 = ((x81|(x82|x83))&x84);

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x85 = UINT8_MAX;
	static volatile int64_t x86 = -7883651LL;
	volatile uint64_t x87 = UINT64_MAX;
	volatile uint64_t x88 = UINT64_MAX;
	volatile uint64_t t21 = UINT64_MAX;

	t21 = ((x85|(x86|x87))&x88);

	if (t21 != UINT64_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int64_t x89 = INT64_MAX;
	static uint32_t x90 = 4870U;
	static int16_t x91 = INT16_MIN;
	volatile int16_t x92 = -1870;
	int64_t t22 = -4498674863381269LL;

	t22 = ((x89|(x90|x91))&x92);

	if (t22 != 9223372036854773938LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint32_t x95 = 207U;
	int64_t x96 = INT64_MAX;
	static int64_t t23 = -54985661733666LL;

	t23 = ((x93|(x94|x95))&x96);

	if (t23 != 4294934735LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x98 = 943257161580246LLU;
	int32_t x100 = -1;
	static volatile uint64_t t24 = UINT64_MAX;

	t24 = ((x97|(x98|x99))&x100);

	if (t24 != UINT64_MAX) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x102 = 1;
	static int16_t x103 = INT16_MIN;
	static volatile uint64_t t25 = 1LLU;

	t25 = ((x101|(x102|x103))&x104);

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MIN;
	uint64_t x106 = UINT64_MAX;
	static uint64_t x107 = 640762312LLU;
	int8_t x108 = INT8_MAX;
	static volatile uint64_t t26 = 9LLU;

	t26 = ((x105|(x106|x107))&x108);

	if (t26 != 127LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static uint16_t x109 = UINT16_MAX;
	int64_t x112 = INT64_MIN;

	t27 = ((x109|(x110|x111))&x112);

	if (t27 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x113 = -137071292990273LL;
	static int8_t x114 = -5;
	int16_t x115 = 9024;
	int64_t t28 = -768796270254LL;

	t28 = ((x113|(x114|x115))&x116);

	if (t28 != 856008LL) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	static int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MIN;
	static uint8_t x120 = UINT8_MAX;
	volatile int32_t t29 = 182797452;

	t29 = ((x117|(x118|x119))&x120);

	if (t29 != 255) { NG(); } else { ; }
	
}

void f30(void) {
	static uint32_t x123 = 1U;
	uint16_t x124 = UINT16_MAX;
	uint64_t t30 = 61LLU;

	t30 = ((x121|(x122|x123))&x124);

	if (t30 != 639LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = 36U;
	int8_t x126 = -14;

	t31 = ((x125|(x126|x127))&x128);

	if (t31 != -695630) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = 1;
	uint8_t x130 = UINT8_MAX;
	static int32_t x131 = -7;

	t32 = ((x129|(x130|x131))&x132);

	if (t32 != 21) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x134 = INT64_MIN;
	volatile uint16_t x135 = 3644U;
	int8_t x136 = -1;
	volatile int64_t t33 = -221657749144LL;

	t33 = ((x133|(x134|x135))&x136);

	if (t33 != -9223372036854772163LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = 2231U;
	int8_t x138 = INT8_MIN;
	int16_t x139 = 297;
	int8_t x140 = 1;
	volatile uint32_t t34 = 5022762U;

	t34 = ((x137|(x138|x139))&x140);

	if (t34 != 1U) { NG(); } else { ; }
	
}

void f35(void) {
	static int16_t x141 = INT16_MIN;
	int32_t x142 = INT32_MIN;
	uint16_t x143 = UINT16_MAX;
	int64_t x144 = INT64_MIN;
	int64_t t35 = INT64_MIN;

	t35 = ((x141|(x142|x143))&x144);

	if (t35 != INT64_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x145 = 440125975U;
	int8_t x146 = INT8_MIN;
	int8_t x147 = 17;
	int64_t x148 = 0LL;
	int64_t t36 = 13444070628673LL;

	t36 = ((x145|(x146|x147))&x148);

	if (t36 != 0LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = INT16_MAX;
	static int8_t x150 = INT8_MAX;
	int8_t x151 = 0;
	static int8_t x152 = INT8_MIN;
	static volatile int32_t t37 = 9056;

	t37 = ((x149|(x150|x151))&x152);

	if (t37 != 32640) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = -552604080318265LL;
	int8_t x154 = INT8_MIN;
	volatile int32_t x155 = -1;
	static volatile uint64_t x156 = UINT64_MAX;
	static uint64_t t38 = UINT64_MAX;

	t38 = ((x153|(x154|x155))&x156);

	if (t38 != UINT64_MAX) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x157 = INT8_MIN;
	uint32_t x158 = 373U;
	static int8_t x159 = INT8_MIN;
	static int16_t x160 = INT16_MAX;
	static uint32_t t39 = 304U;

	t39 = ((x157|(x158|x159))&x160);

	if (t39 != 32757U) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x161 = 2506972LL;
	uint16_t x163 = 164U;
	volatile int64_t t40 = 6333776664LL;

	t40 = ((x161|(x162|x163))&x164);

	if (t40 != 166LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MIN;
	int32_t x166 = INT32_MAX;
	volatile uint64_t x167 = 137032825LLU;
	static volatile int32_t x168 = INT32_MIN;
	static volatile uint64_t t41 = 6LLU;

	t41 = ((x165|(x166|x167))&x168);

	if (t41 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x169 = 863U;
	int8_t x170 = INT8_MIN;
	int8_t x171 = INT8_MIN;
	int32_t x172 = 435556132;
	static uint32_t t42 = 503U;

	t42 = ((x169|(x170|x171))&x172);

	if (t42 != 435556100U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 36U;
	uint64_t x174 = 2973180LLU;
	uint32_t x175 = UINT32_MAX;
	uint64_t t43 = 783056217076LLU;

	t43 = ((x173|(x174|x175))&x176);

	if (t43 != 3LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x178 = -1;
	volatile uint8_t x179 = UINT8_MAX;
	int16_t x180 = INT16_MIN;
	int32_t t44 = -25;

	t44 = ((x177|(x178|x179))&x180);

	if (t44 != -32768) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 28U;
	int16_t x182 = INT16_MAX;
	int32_t x183 = INT32_MIN;
	int64_t x184 = -44740260763LL;
	static volatile int64_t t45 = 716236857LL;

	t45 = ((x181|(x182|x183))&x184);

	if (t45 != -45097137051LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x185 = UINT8_MAX;
	static uint8_t x186 = 7U;
	int16_t x187 = 1;
	int8_t x188 = INT8_MIN;
	volatile int32_t t46 = -506;

	t46 = ((x185|(x186|x187))&x188);

	if (t46 != 128) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 3385920;
	uint32_t x190 = UINT32_MAX;
	static uint16_t x191 = 47U;
	int16_t x192 = INT16_MIN;
	static uint32_t t47 = 7175585U;

	t47 = ((x189|(x190|x191))&x192);

	if (t47 != 4294934528U) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x193 = UINT64_MAX;
	uint8_t x196 = UINT8_MAX;
	static uint64_t t48 = 6382485551476047LLU;

	t48 = ((x193|(x194|x195))&x196);

	if (t48 != 255LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MAX;
	static uint32_t x199 = 50139208U;
	static int8_t x200 = INT8_MIN;
	volatile uint32_t t49 = 2890742U;

	t49 = ((x197|(x198|x199))&x200);

	if (t49 != 2147483520U) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = UINT8_MAX;
	int8_t x202 = -1;
	uint8_t x203 = 3U;
	int8_t x204 = INT8_MIN;
	volatile int32_t t50 = -38;

	t50 = ((x201|(x202|x203))&x204);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x205 = -1823;
	int16_t x208 = INT16_MIN;
	uint32_t t51 = 3053097U;

	t51 = ((x205|(x206|x207))&x208);

	if (t51 != 4294934528U) { NG(); } else { ; }
	
}

void f52(void) {
	static int8_t x209 = INT8_MAX;
	uint8_t x210 = 1U;
	volatile int8_t x211 = -1;
	int8_t x212 = INT8_MIN;
	int32_t t52 = -40008860;

	t52 = ((x209|(x210|x211))&x212);

	if (t52 != -128) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	int16_t x214 = -1;
	int32_t x215 = INT32_MAX;
	volatile int16_t x216 = INT16_MAX;

	t53 = ((x213|(x214|x215))&x216);

	if (t53 != 32767) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int8_t x217 = -1;
	static int8_t x218 = -1;
	int8_t x219 = INT8_MIN;
	int32_t x220 = -40522;
	int32_t t54 = 3;

	t54 = ((x217|(x218|x219))&x220);

	if (t54 != -40522) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 3U;
	volatile int32_t x224 = INT32_MIN;
	static volatile uint32_t t55 = 61929299U;

	t55 = ((x221|(x222|x223))&x224);

	if (t55 != 2147483648U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x225 = -1;
	uint32_t x226 = 2291842U;
	static uint32_t x227 = 3U;
	uint8_t x228 = UINT8_MAX;
	uint32_t t56 = 208708U;

	t56 = ((x225|(x226|x227))&x228);

	if (t56 != 255U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	int8_t x232 = 7;
	int64_t t57 = 245123712814LL;

	t57 = ((x229|(x230|x231))&x232);

	if (t57 != 7LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x233 = INT8_MIN;
	static int16_t x234 = -1;
	uint8_t x236 = UINT8_MAX;
	volatile int64_t t58 = 28001630490847LL;

	t58 = ((x233|(x234|x235))&x236);

	if (t58 != 255LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int16_t x237 = INT16_MIN;
	int8_t x238 = INT8_MAX;
	static volatile uint8_t x239 = UINT8_MAX;
	volatile uint32_t x240 = UINT32_MAX;
	static volatile uint32_t t59 = 23815U;

	t59 = ((x237|(x238|x239))&x240);

	if (t59 != 4294934783U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x242 = 8;
	int32_t x243 = INT32_MIN;

	t60 = ((x241|(x242|x243))&x244);

	if (t60 != -2147418113) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	int64_t x246 = INT64_MAX;
	int32_t x247 = -1;
	static int32_t x248 = INT32_MIN;
	static int64_t t61 = 35802563200LL;

	t61 = ((x245|(x246|x247))&x248);

	if (t61 != -2147483648LL) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = INT64_MAX;
	int16_t x250 = INT16_MIN;
	uint32_t x251 = UINT32_MAX;
	int64_t x252 = -41842LL;
	static int64_t t62 = 242324373206777LL;

	t62 = ((x249|(x250|x251))&x252);

	if (t62 != 9223372036854733966LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	uint64_t x254 = 102450826737124LLU;
	static uint32_t x255 = UINT32_MAX;
	static int32_t x256 = -1;
	volatile uint64_t t63 = 2495639065710LLU;

	t63 = ((x253|(x254|x255))&x256);

	if (t63 != 9223474489004654591LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x257 = 57210223401LLU;
	volatile uint32_t x258 = UINT32_MAX;
	static int16_t x260 = -3385;
	uint64_t t64 = 2114LLU;

	t64 = ((x257|(x258|x259))&x260);

	if (t64 != 60129538759LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x261 = 1U;
	uint64_t x262 = UINT64_MAX;
	int64_t x263 = -22680496055LL;
	uint8_t x264 = 81U;
	volatile uint64_t t65 = 241453LLU;

	t65 = ((x261|(x262|x263))&x264);

	if (t65 != 81LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x265 = INT8_MAX;
	volatile int64_t x266 = 16LL;
	int32_t x267 = INT32_MIN;
	int32_t x268 = -1;

	t66 = ((x265|(x266|x267))&x268);

	if (t66 != -2147483521LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	int8_t x271 = -1;
	static volatile int8_t x272 = -1;

	t67 = ((x269|(x270|x271))&x272);

	if (t67 != -1LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x273 = UINT64_MAX;
	static uint16_t x274 = 1U;
	int16_t x275 = INT16_MIN;
	volatile int32_t x276 = -656;
	uint64_t t68 = 8909268293949320LLU;

	t68 = ((x273|(x274|x275))&x276);

	if (t68 != 18446744073709550960LLU) { NG(); } else { ; }
	
}

void f69(void) {
	static int16_t x277 = 232;
	int32_t x278 = -1;
	int64_t x279 = -1LL;
	uint64_t x280 = 494LLU;
	uint64_t t69 = 471918261968588LLU;

	t69 = ((x277|(x278|x279))&x280);

	if (t69 != 494LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 415U;
	uint8_t x282 = 22U;
	uint64_t x284 = 471496804LLU;
	uint64_t t70 = 1074095255274LLU;

	t70 = ((x281|(x282|x283))&x284);

	if (t70 != 18532LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static uint16_t x285 = UINT16_MAX;
	static int64_t x286 = 32298217LL;
	uint32_t x287 = 2774U;
	volatile int64_t t71 = 1705920365682465LL;

	t71 = ((x285|(x286|x287))&x288);

	if (t71 != 23113681LL) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x289 = INT16_MAX;
	int64_t x291 = -2765396LL;
	volatile int64_t t72 = 464235898953342LL;

	t72 = ((x289|(x290|x291))&x292);

	if (t72 != -128LL) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -2LL;
	volatile int8_t x294 = INT8_MIN;
	uint8_t x295 = 1U;
	int8_t x296 = -1;
	volatile int64_t t73 = 7672942LL;

	t73 = ((x293|(x294|x295))&x296);

	if (t73 != -1LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x298 = INT16_MAX;
	int64_t x299 = 165LL;

	t74 = ((x297|(x298|x299))&x300);

	if (t74 != 65535LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = INT8_MIN;
	volatile uint16_t x302 = 1U;
	int8_t x303 = -1;
	static int16_t x304 = -22;
	volatile int32_t t75 = -4;

	t75 = ((x301|(x302|x303))&x304);

	if (t75 != -22) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x305 = UINT64_MAX;
	uint16_t x306 = 316U;
	static uint64_t x308 = 43109232277386407LLU;
	volatile uint64_t t76 = 3LLU;

	t76 = ((x305|(x306|x307))&x308);

	if (t76 != 43109232277386407LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MIN;
	int64_t x311 = INT64_MIN;
	volatile uint8_t x312 = 26U;

	t77 = ((x309|(x310|x311))&x312);

	if (t77 != 26LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x314 = -69;
	int64_t x315 = INT64_MAX;
	static volatile uint64_t x316 = 13775LLU;
	volatile uint64_t t78 = 7515525763LLU;

	t78 = ((x313|(x314|x315))&x316);

	if (t78 != 13775LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 9U;
	int64_t x318 = 1340312751LL;
	int8_t x319 = INT8_MAX;
	int64_t x320 = INT64_MAX;
	volatile int64_t t79 = -165821LL;

	t79 = ((x317|(x318|x319))&x320);

	if (t79 != 1340312831LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x321 = UINT32_MAX;
	int8_t x322 = INT8_MIN;
	int32_t x323 = -1;
	uint8_t x324 = 0U;
	volatile uint32_t t80 = 1929056U;

	t80 = ((x321|(x322|x323))&x324);

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint8_t x326 = 22U;
	uint64_t t81 = 995LLU;

	t81 = ((x325|(x326|x327))&x328);

	if (t81 != 9223372036854726655LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = INT16_MAX;
	int64_t x330 = INT64_MIN;
	int16_t x332 = INT16_MAX;
	int64_t t82 = -2LL;

	t82 = ((x329|(x330|x331))&x332);

	if (t82 != 32767LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 0U;
	uint8_t x335 = 8U;
	int16_t x336 = INT16_MIN;
	volatile int32_t t83 = 10;

	t83 = ((x333|(x334|x335))&x336);

	if (t83 != -32768) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x337 = INT32_MAX;
	static int32_t x338 = -1;
	uint8_t x340 = 3U;

	t84 = ((x337|(x338|x339))&x340);

	if (t84 != 3) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x341 = INT16_MAX;
	int8_t x342 = INT8_MIN;
	uint8_t x343 = 10U;
	int64_t x344 = INT64_MIN;
	int64_t t85 = INT64_MIN;

	t85 = ((x341|(x342|x343))&x344);

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = INT32_MIN;
	volatile uint8_t x346 = UINT8_MAX;
	uint32_t x347 = 2U;
	uint64_t x348 = 427661977450333LLU;
	volatile uint64_t t86 = 17372045511983828LLU;

	t86 = ((x345|(x346|x347))&x348);

	if (t86 != 2147483741LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	int8_t x350 = INT8_MAX;
	int8_t x352 = INT8_MAX;
	volatile int64_t t87 = -11398387258LL;

	t87 = ((x349|(x350|x351))&x352);

	if (t87 != 127LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x353 = -920733243064LL;
	int8_t x354 = 10;
	int64_t x355 = -193744820215LL;
	volatile int16_t x356 = -1;
	volatile int64_t t88 = 61LL;

	t88 = ((x353|(x354|x355))&x356);

	if (t88 != -17650833077LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x357 = INT16_MIN;
	int8_t x358 = INT8_MIN;
	uint64_t x359 = 84524458298678LLU;
	uint64_t x360 = UINT64_MAX;
	volatile uint64_t t89 = 1970LLU;

	t89 = ((x357|(x358|x359))&x360);

	if (t89 != 18446744073709551542LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	int64_t x362 = -33LL;
	uint64_t x363 = 296257445697LLU;
	volatile int16_t x364 = -4063;
	static volatile uint64_t t90 = 27LLU;

	t90 = ((x361|(x362|x363))&x364);

	if (t90 != 18446744073709547553LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = INT64_MIN;
	static int8_t x368 = INT8_MIN;
	static volatile uint64_t t91 = 700LLU;

	t91 = ((x365|(x366|x367))&x368);

	if (t91 != 18446744073154461312LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x369 = 4LL;
	uint16_t x370 = 8481U;
	static volatile int8_t x372 = -1;

	t92 = ((x369|(x370|x371))&x372);

	if (t92 != 8573LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = 10;
	int32_t x374 = INT32_MIN;
	uint32_t x376 = UINT32_MAX;
	static volatile uint32_t t93 = UINT32_MAX;

	t93 = ((x373|(x374|x375))&x376);

	if (t93 != UINT32_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x378 = -1;
	volatile int16_t x379 = 25;
	int32_t x380 = INT32_MAX;
	volatile int32_t t94 = INT32_MAX;

	t94 = ((x377|(x378|x379))&x380);

	if (t94 != INT32_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x381 = INT8_MIN;
	uint32_t x383 = 60U;
	volatile uint8_t x384 = 0U;
	uint32_t t95 = 29168U;

	t95 = ((x381|(x382|x383))&x384);

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint8_t x385 = 12U;
	int16_t x387 = -1;
	uint8_t x388 = 23U;
	volatile int32_t t96 = -17385;

	t96 = ((x385|(x386|x387))&x388);

	if (t96 != 23) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x390 = -2963016343604LL;
	uint64_t x391 = 12793LLU;
	uint32_t x392 = UINT32_MAX;

	t97 = ((x389|(x390|x391))&x392);

	if (t97 != 511098879LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = INT64_MAX;
	uint16_t x394 = UINT16_MAX;
	volatile int64_t x395 = 94649616061357LL;
	int32_t x396 = 9;
	int64_t t98 = 103LL;

	t98 = ((x393|(x394|x395))&x396);

	if (t98 != 9LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x398 = -1;
	static uint64_t x399 = 926964332232LLU;
	uint16_t x400 = UINT16_MAX;
	volatile uint64_t t99 = 83LLU;

	t99 = ((x397|(x398|x399))&x400);

	if (t99 != 65535LLU) { NG(); } else { ; }
	
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

