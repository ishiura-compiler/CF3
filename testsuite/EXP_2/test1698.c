#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 113U;
uint32_t x5 = 2840U;
int8_t x6 = INT8_MIN;
uint64_t x10 = UINT64_MAX;
static volatile int32_t t4 = -30;
static volatile int32_t t6 = -7012529;
int8_t x33 = INT8_MIN;
static uint16_t x34 = 45U;
int32_t x41 = -1;
volatile int32_t x42 = -407;
uint64_t x51 = 5652408091395682180LLU;
int8_t x53 = 0;
uint16_t x58 = 7U;
volatile uint8_t x62 = 1U;
int16_t x65 = -1;
volatile int8_t x66 = -1;
static int16_t x72 = -7244;
uint16_t x82 = 1U;
int16_t x90 = INT16_MIN;
static int32_t x91 = INT32_MAX;
static uint64_t x95 = 2909487994282179215LLU;
volatile int16_t x99 = -1;
int32_t t23 = -60597;
int16_t x101 = INT16_MIN;
uint8_t x102 = 26U;
uint16_t x103 = 399U;
int64_t x104 = INT64_MIN;
volatile uint8_t x108 = 2U;
int32_t t25 = 5;
uint8_t x110 = 9U;
volatile int32_t t26 = 1;
uint32_t x116 = UINT32_MAX;
int8_t x124 = INT8_MIN;
int8_t x125 = -1;
uint16_t x130 = UINT16_MAX;
volatile uint64_t x132 = UINT64_MAX;
static uint64_t x136 = 63800987213LLU;
int32_t t32 = 5;
uint64_t x140 = 51730LLU;
int32_t t34 = -519547;
volatile int64_t x146 = -780189112698056LL;
uint32_t x167 = UINT32_MAX;
static volatile int32_t t39 = -566108762;
int32_t t41 = -158749837;
int32_t x179 = INT32_MAX;
volatile int32_t t43 = -732512;
static volatile uint8_t x189 = 2U;
int64_t x200 = -1LL;
static int64_t x205 = -1LL;
int16_t x207 = INT16_MIN;
volatile int32_t t51 = 934118;
volatile uint8_t x234 = UINT8_MAX;
uint8_t x235 = 30U;
int32_t t54 = -41332175;
volatile int64_t x247 = 47498017453LL;
static int8_t x248 = -1;
int32_t t56 = 93;
volatile int32_t x249 = INT32_MAX;
int64_t x253 = -384031608394355LL;
int32_t x255 = -1;
uint16_t x256 = UINT16_MAX;
static int64_t x263 = 22162247584LL;
static int8_t x264 = INT8_MIN;
volatile int32_t x266 = INT32_MIN;
int32_t x269 = INT32_MIN;
int32_t x279 = -1;
int64_t x287 = 98267LL;
int16_t x289 = -1;
static int8_t x292 = INT8_MIN;
int32_t t67 = 0;
static uint8_t x311 = 9U;
uint16_t x312 = 1460U;
int64_t x315 = -1LL;
int8_t x318 = 1;
int8_t x320 = -4;
int16_t x322 = -21;
int32_t t74 = 126;
int64_t x336 = INT64_MAX;
uint8_t x341 = 3U;
static int32_t x344 = 5;
uint16_t x346 = 113U;
int32_t x347 = INT32_MIN;
int16_t x348 = INT16_MIN;
int16_t x358 = INT16_MIN;
volatile int16_t x377 = INT16_MIN;
volatile int16_t x379 = INT16_MAX;
int8_t x382 = INT8_MAX;
int32_t t88 = -1;
uint8_t x392 = 5U;
int32_t x407 = INT32_MIN;
static int32_t x410 = INT32_MIN;
int16_t x412 = -1;
uint64_t x417 = UINT64_MAX;
int32_t t96 = -9978141;
int32_t x423 = -913665293;
static int8_t x425 = 57;
volatile int32_t x426 = -57454;
uint16_t x427 = 138U;


void f0(void) {
	int64_t x1 = 209337196LL;
	volatile int16_t x3 = -1;
	volatile int32_t x4 = -3971;
	static int32_t t0 = -1767433;

	t0 = ((x1+(x2&x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = INT16_MAX;
	int32_t x8 = INT32_MIN;
	int32_t t1 = 192534572;

	t1 = ((x5+(x6&x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = 853219408404585LL;
	static int32_t x11 = 0;
	volatile int32_t x12 = INT32_MAX;
	volatile int32_t t2 = 422862866;

	t2 = ((x9+(x10&x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = 16400452;
	int64_t x14 = 6990786862628LL;
	uint16_t x15 = UINT16_MAX;
	int32_t x16 = INT32_MAX;
	int32_t t3 = -482072988;

	t3 = ((x13+(x14&x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = -258;
	uint64_t x18 = 979356815LLU;
	volatile int64_t x19 = INT64_MIN;
	int8_t x20 = INT8_MAX;

	t4 = ((x17+(x18&x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	static int16_t x22 = 422;
	int64_t x23 = INT64_MIN;
	volatile uint32_t x24 = UINT32_MAX;
	int32_t t5 = 5297;

	t5 = ((x21+(x22&x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint8_t x25 = 80U;
	uint32_t x26 = 53245U;
	static int64_t x27 = -299449359887601543LL;
	static uint32_t x28 = 975147985U;

	t6 = ((x25+(x26&x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x29 = 52U;
	uint64_t x30 = 382278151786157LLU;
	uint64_t x31 = 388196584412525LLU;
	int32_t x32 = -17;
	volatile int32_t t7 = 0;

	t7 = ((x29+(x30&x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x35 = -28900957LL;
	int8_t x36 = INT8_MIN;
	int32_t t8 = -1;

	t8 = ((x33+(x34&x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -1905;
	uint32_t x38 = 41U;
	int64_t x39 = INT64_MIN;
	int16_t x40 = INT16_MIN;
	static volatile int32_t t9 = 5904;

	t9 = ((x37+(x38&x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x43 = INT16_MAX;
	int16_t x44 = -228;
	int32_t t10 = 233885366;

	t10 = ((x41+(x42&x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 1U;
	int16_t x50 = -22;
	int8_t x52 = INT8_MIN;
	volatile int32_t t11 = -1448338;

	t11 = ((x49+(x50&x51))==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x54 = 1LL;
	int32_t x55 = INT32_MAX;
	static int16_t x56 = INT16_MIN;
	volatile int32_t t12 = -90431;

	t12 = ((x53+(x54&x55))==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x57 = 37U;
	int8_t x59 = INT8_MIN;
	static int32_t x60 = 25810;
	int32_t t13 = -49687602;

	t13 = ((x57+(x58&x59))==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = 23839;
	int16_t x63 = INT16_MAX;
	uint64_t x64 = 3089751346511747LLU;
	int32_t t14 = 1038745;

	t14 = ((x61+(x62&x63))==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x67 = INT16_MIN;
	int32_t x68 = -536;
	volatile int32_t t15 = 13163062;

	t15 = ((x65+(x66&x67))==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x69 = -32;
	int8_t x70 = INT8_MIN;
	int64_t x71 = -37455LL;
	int32_t t16 = -1;

	t16 = ((x69+(x70&x71))==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x73 = 94120083LL;
	int32_t x74 = INT32_MIN;
	static int16_t x75 = 0;
	int64_t x76 = -1LL;
	volatile int32_t t17 = 11;

	t17 = ((x73+(x74&x75))==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -8LL;
	int32_t x78 = 113516631;
	uint64_t x79 = 1988446609901557649LLU;
	uint16_t x80 = 0U;
	int32_t t18 = -331574;

	t18 = ((x77+(x78&x79))==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = 1U;
	int32_t x83 = INT32_MAX;
	volatile int32_t x84 = -1;
	int32_t t19 = -3885;

	t19 = ((x81+(x82&x83))==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int8_t x85 = 3;
	int64_t x86 = INT64_MAX;
	int8_t x87 = -16;
	volatile int32_t x88 = INT32_MIN;
	static volatile int32_t t20 = 423916787;

	t20 = ((x85+(x86&x87))==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x89 = 4318U;
	int8_t x92 = INT8_MIN;
	static volatile int32_t t21 = -6760;

	t21 = ((x89+(x90&x91))==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x93 = UINT32_MAX;
	int8_t x94 = INT8_MIN;
	volatile uint32_t x96 = UINT32_MAX;
	int32_t t22 = 1128;

	t22 = ((x93+(x94&x95))==x96);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x97 = -31082922150296564LL;
	uint16_t x98 = UINT16_MAX;
	int64_t x100 = INT64_MIN;

	t23 = ((x97+(x98&x99))==x100);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int32_t t24 = 2387260;

	t24 = ((x101+(x102&x103))==x104);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MAX;
	int32_t x106 = -1;
	uint64_t x107 = 757523775359LLU;

	t25 = ((x105+(x106&x107))==x108);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x109 = 320834LLU;
	int64_t x111 = -7789005460942LL;
	static uint16_t x112 = 6U;

	t26 = ((x109+(x110&x111))==x112);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = -1;
	static uint8_t x114 = 0U;
	int8_t x115 = 23;
	int32_t t27 = -6169;

	t27 = ((x113+(x114&x115))==x116);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x117 = 25544U;
	uint64_t x118 = 366075894265LLU;
	uint16_t x119 = 16U;
	uint64_t x120 = UINT64_MAX;
	static volatile int32_t t28 = 257793;

	t28 = ((x117+(x118&x119))==x120);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint8_t x121 = 0U;
	volatile int8_t x122 = -3;
	uint16_t x123 = 20022U;
	int32_t t29 = -1044278;

	t29 = ((x121+(x122&x123))==x124);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x126 = 28706746403LLU;
	volatile uint8_t x127 = UINT8_MAX;
	volatile uint64_t x128 = UINT64_MAX;
	int32_t t30 = -12458032;

	t30 = ((x125+(x126&x127))==x128);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x129 = INT8_MIN;
	static int64_t x131 = -132024578637799LL;
	static int32_t t31 = 4590799;

	t31 = ((x129+(x130&x131))==x132);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x133 = 13588U;
	int8_t x134 = -1;
	int32_t x135 = INT32_MIN;

	t32 = ((x133+(x134&x135))==x136);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x137 = UINT32_MAX;
	int64_t x138 = INT64_MIN;
	int32_t x139 = -1;
	int32_t t33 = 76657;

	t33 = ((x137+(x138&x139))==x140);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x141 = 15695U;
	volatile uint16_t x142 = 1835U;
	int16_t x143 = 537;
	uint64_t x144 = UINT64_MAX;

	t34 = ((x141+(x142&x143))==x144);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x145 = 8537779LLU;
	int32_t x147 = INT32_MAX;
	uint64_t x148 = 2094486186LLU;
	int32_t t35 = 50;

	t35 = ((x145+(x146&x147))==x148);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x153 = 57;
	int16_t x154 = -3;
	static int8_t x155 = 0;
	static volatile int64_t x156 = INT64_MIN;
	volatile int32_t t36 = -177;

	t36 = ((x153+(x154&x155))==x156);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = -1;
	uint8_t x158 = 0U;
	int32_t x159 = INT32_MAX;
	int8_t x160 = -1;
	int32_t t37 = 373262893;

	t37 = ((x157+(x158&x159))==x160);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x161 = UINT64_MAX;
	uint64_t x162 = 1512435LLU;
	uint8_t x163 = UINT8_MAX;
	int8_t x164 = -1;
	volatile int32_t t38 = 77072;

	t38 = ((x161+(x162&x163))==x164);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x165 = INT32_MIN;
	uint16_t x166 = 48U;
	static int16_t x168 = INT16_MIN;

	t39 = ((x165+(x166&x167))==x168);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x169 = -12128;
	uint64_t x170 = 515612599LLU;
	static volatile int16_t x171 = -1;
	int16_t x172 = 15884;
	int32_t t40 = 4;

	t40 = ((x169+(x170&x171))==x172);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = INT16_MAX;
	uint64_t x174 = 28062685868LLU;
	int16_t x175 = 51;
	uint64_t x176 = UINT64_MAX;

	t41 = ((x173+(x174&x175))==x176);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x177 = -1;
	int32_t x178 = INT32_MAX;
	int32_t x180 = INT32_MIN;
	int32_t t42 = 3;

	t42 = ((x177+(x178&x179))==x180);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x185 = UINT32_MAX;
	uint8_t x186 = UINT8_MAX;
	uint8_t x187 = 21U;
	static int8_t x188 = -27;

	t43 = ((x185+(x186&x187))==x188);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile int64_t x190 = 1756LL;
	int16_t x191 = -1;
	int32_t x192 = INT32_MAX;
	int32_t t44 = 1;

	t44 = ((x189+(x190&x191))==x192);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = UINT64_MAX;
	volatile uint32_t x194 = UINT32_MAX;
	uint64_t x195 = 3684059762701171506LLU;
	int8_t x196 = -50;
	int32_t t45 = 1650246;

	t45 = ((x193+(x194&x195))==x196);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x197 = INT32_MIN;
	uint8_t x198 = UINT8_MAX;
	uint64_t x199 = 0LLU;
	int32_t t46 = 1701;

	t46 = ((x197+(x198&x199))==x200);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x201 = 2U;
	static int32_t x202 = INT32_MIN;
	int32_t x203 = INT32_MAX;
	uint8_t x204 = 17U;
	volatile int32_t t47 = 115798;

	t47 = ((x201+(x202&x203))==x204);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x206 = -13;
	static uint32_t x208 = UINT32_MAX;
	volatile int32_t t48 = -9;

	t48 = ((x205+(x206&x207))==x208);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x209 = 49U;
	int32_t x210 = INT32_MIN;
	int16_t x211 = INT16_MIN;
	int16_t x212 = 8;
	volatile int32_t t49 = 4;

	t49 = ((x209+(x210&x211))==x212);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x213 = INT8_MIN;
	uint16_t x214 = 1216U;
	int32_t x215 = -7;
	uint8_t x216 = UINT8_MAX;
	int32_t t50 = 44188749;

	t50 = ((x213+(x214&x215))==x216);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int16_t x217 = INT16_MAX;
	uint32_t x218 = 1U;
	int16_t x219 = -1;
	int16_t x220 = INT16_MAX;

	t51 = ((x217+(x218&x219))==x220);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x221 = 2U;
	static int16_t x222 = INT16_MIN;
	int32_t x223 = INT32_MIN;
	uint16_t x224 = 36U;
	int32_t t52 = -434;

	t52 = ((x221+(x222&x223))==x224);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x229 = -1;
	uint8_t x230 = 7U;
	static int8_t x231 = INT8_MIN;
	uint16_t x232 = 205U;
	static volatile int32_t t53 = 4427494;

	t53 = ((x229+(x230&x231))==x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = -246;
	uint64_t x236 = UINT64_MAX;

	t54 = ((x233+(x234&x235))==x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x241 = 1;
	int32_t x242 = INT32_MAX;
	int8_t x243 = INT8_MIN;
	int16_t x244 = -1;
	volatile int32_t t55 = -1189244;

	t55 = ((x241+(x242&x243))==x244);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x245 = 11973U;
	uint64_t x246 = UINT64_MAX;

	t56 = ((x245+(x246&x247))==x248);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x250 = INT16_MIN;
	volatile int16_t x251 = -6;
	int64_t x252 = 20530823939351423LL;
	int32_t t57 = 523752;

	t57 = ((x249+(x250&x251))==x252);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x254 = INT8_MIN;
	volatile int32_t t58 = 0;

	t58 = ((x253+(x254&x255))==x256);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x257 = UINT16_MAX;
	int64_t x258 = -983037009217885920LL;
	int64_t x259 = 20LL;
	int32_t x260 = -16163;
	volatile int32_t t59 = 11233;

	t59 = ((x257+(x258&x259))==x260);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x261 = UINT8_MAX;
	uint8_t x262 = 0U;
	int32_t t60 = 1503;

	t60 = ((x261+(x262&x263))==x264);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x265 = INT32_MIN;
	volatile uint8_t x267 = 5U;
	uint8_t x268 = UINT8_MAX;
	int32_t t61 = -13242;

	t61 = ((x265+(x266&x267))==x268);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x270 = INT16_MIN;
	int8_t x271 = INT8_MAX;
	uint8_t x272 = UINT8_MAX;
	static int32_t t62 = -25348953;

	t62 = ((x269+(x270&x271))==x272);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x277 = INT16_MAX;
	int16_t x278 = INT16_MIN;
	int32_t x280 = INT32_MAX;
	int32_t t63 = -11099402;

	t63 = ((x277+(x278&x279))==x280);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x281 = 327807U;
	static int32_t x282 = INT32_MIN;
	int64_t x283 = 0LL;
	uint32_t x284 = 221U;
	static volatile int32_t t64 = -5;

	t64 = ((x281+(x282&x283))==x284);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile uint32_t x285 = UINT32_MAX;
	uint8_t x286 = 1U;
	volatile int64_t x288 = INT64_MIN;
	volatile int32_t t65 = 0;

	t65 = ((x285+(x286&x287))==x288);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x290 = 2U;
	static uint16_t x291 = UINT16_MAX;
	int32_t t66 = -1;

	t66 = ((x289+(x290&x291))==x292);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x293 = -1;
	int8_t x294 = -1;
	int16_t x295 = -1;
	int32_t x296 = INT32_MIN;

	t67 = ((x293+(x294&x295))==x296);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x301 = INT64_MIN;
	int16_t x302 = INT16_MIN;
	static volatile uint32_t x303 = 3765425U;
	int64_t x304 = INT64_MAX;
	static int32_t t68 = -176;

	t68 = ((x301+(x302&x303))==x304);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x305 = INT8_MAX;
	int8_t x306 = -1;
	static uint64_t x307 = UINT64_MAX;
	int32_t x308 = INT32_MAX;
	static int32_t t69 = -13057;

	t69 = ((x305+(x306&x307))==x308);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x309 = 486LLU;
	uint64_t x310 = 8329LLU;
	volatile int32_t t70 = -288990041;

	t70 = ((x309+(x310&x311))==x312);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint32_t x313 = 129213U;
	static int32_t x314 = -1148;
	volatile int8_t x316 = 0;
	volatile int32_t t71 = -94;

	t71 = ((x313+(x314&x315))==x316);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x317 = 6716U;
	static int32_t x319 = INT32_MIN;
	int32_t t72 = 11;

	t72 = ((x317+(x318&x319))==x320);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x321 = 695557U;
	static int64_t x323 = INT64_MIN;
	int64_t x324 = 6478LL;
	static int32_t t73 = -7;

	t73 = ((x321+(x322&x323))==x324);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x325 = 1309196699785LLU;
	int16_t x326 = -742;
	int16_t x327 = -22;
	static volatile int8_t x328 = INT8_MIN;

	t74 = ((x325+(x326&x327))==x328);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x329 = INT32_MAX;
	int64_t x330 = INT64_MIN;
	static int8_t x331 = INT8_MAX;
	int8_t x332 = 5;
	int32_t t75 = 6474548;

	t75 = ((x329+(x330&x331))==x332);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x333 = INT64_MIN;
	volatile int8_t x334 = INT8_MAX;
	int64_t x335 = 1341534LL;
	int32_t t76 = 459042342;

	t76 = ((x333+(x334&x335))==x336);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x337 = 0U;
	uint64_t x338 = UINT64_MAX;
	int16_t x339 = INT16_MIN;
	int8_t x340 = -14;
	static volatile int32_t t77 = 1;

	t77 = ((x337+(x338&x339))==x340);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x342 = -1;
	int64_t x343 = -116296LL;
	int32_t t78 = -558;

	t78 = ((x341+(x342&x343))==x344);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint8_t x345 = 0U;
	static int32_t t79 = -402784;

	t79 = ((x345+(x346&x347))==x348);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x353 = 414462566449191203LLU;
	static int32_t x354 = -1;
	int8_t x355 = -1;
	int32_t x356 = -1;
	int32_t t80 = 951038;

	t80 = ((x353+(x354&x355))==x356);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x357 = -57990140;
	int16_t x359 = -3;
	static uint64_t x360 = 133517346662207044LLU;
	int32_t t81 = -2;

	t81 = ((x357+(x358&x359))==x360);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x361 = INT16_MAX;
	volatile uint64_t x362 = 121076776845221LLU;
	volatile int16_t x363 = -1;
	int64_t x364 = -84LL;
	volatile int32_t t82 = -972;

	t82 = ((x361+(x362&x363))==x364);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x365 = 1401270U;
	static volatile int16_t x366 = INT16_MAX;
	int64_t x367 = -72LL;
	volatile int32_t x368 = INT32_MAX;
	int32_t t83 = 12177142;

	t83 = ((x365+(x366&x367))==x368);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x369 = 194U;
	volatile int64_t x370 = -1779386533LL;
	uint8_t x371 = UINT8_MAX;
	int8_t x372 = INT8_MAX;
	volatile int32_t t84 = -1;

	t84 = ((x369+(x370&x371))==x372);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x373 = INT64_MAX;
	int32_t x374 = INT32_MIN;
	static uint64_t x375 = 27916LLU;
	uint8_t x376 = 1U;
	int32_t t85 = -6472206;

	t85 = ((x373+(x374&x375))==x376);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x378 = INT16_MIN;
	uint16_t x380 = 8130U;
	static volatile int32_t t86 = -19422;

	t86 = ((x377+(x378&x379))==x380);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x381 = 30704U;
	int8_t x383 = -1;
	int16_t x384 = INT16_MAX;
	volatile int32_t t87 = 103;

	t87 = ((x381+(x382&x383))==x384);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x385 = 212U;
	static volatile uint16_t x386 = UINT16_MAX;
	uint8_t x387 = 5U;
	uint32_t x388 = 97236024U;

	t88 = ((x385+(x386&x387))==x388);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x389 = 1;
	int64_t x390 = INT64_MAX;
	int32_t x391 = INT32_MAX;
	volatile int32_t t89 = -6;

	t89 = ((x389+(x390&x391))==x392);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x393 = 0U;
	int16_t x394 = INT16_MAX;
	static int16_t x395 = -43;
	static uint8_t x396 = UINT8_MAX;
	volatile int32_t t90 = 732;

	t90 = ((x393+(x394&x395))==x396);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x397 = INT16_MIN;
	volatile uint64_t x398 = 98871104LLU;
	int16_t x399 = 3;
	uint32_t x400 = UINT32_MAX;
	volatile int32_t t91 = 0;

	t91 = ((x397+(x398&x399))==x400);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x401 = 25281U;
	static uint16_t x402 = 161U;
	int8_t x403 = INT8_MIN;
	int64_t x404 = INT64_MAX;
	int32_t t92 = 21;

	t92 = ((x401+(x402&x403))==x404);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x405 = 110U;
	volatile int8_t x406 = -12;
	int16_t x408 = -1;
	volatile int32_t t93 = 215007;

	t93 = ((x405+(x406&x407))==x408);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x409 = INT32_MIN;
	uint32_t x411 = UINT32_MAX;
	int32_t t94 = -33204313;

	t94 = ((x409+(x410&x411))==x412);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x413 = INT64_MIN;
	volatile int16_t x414 = INT16_MIN;
	volatile int64_t x415 = INT64_MAX;
	int64_t x416 = INT64_MAX;
	volatile int32_t t95 = 100;

	t95 = ((x413+(x414&x415))==x416);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x418 = -1;
	volatile uint8_t x419 = 9U;
	uint64_t x420 = UINT64_MAX;

	t96 = ((x417+(x418&x419))==x420);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int8_t x421 = INT8_MIN;
	volatile uint16_t x422 = 1027U;
	int16_t x424 = INT16_MIN;
	volatile int32_t t97 = -1;

	t97 = ((x421+(x422&x423))==x424);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x428 = 41U;
	static int32_t t98 = -12225068;

	t98 = ((x425+(x426&x427))==x428);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint8_t x429 = UINT8_MAX;
	int32_t x430 = -663;
	int64_t x431 = INT64_MIN;
	int64_t x432 = INT64_MAX;
	int32_t t99 = 86199974;

	t99 = ((x429+(x430&x431))==x432);

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

