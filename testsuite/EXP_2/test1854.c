#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x5 = 65228497;
int64_t x6 = INT64_MAX;
int32_t x8 = -1;
int64_t x11 = -55632LL;
uint32_t x13 = UINT32_MAX;
uint64_t x17 = UINT64_MAX;
int16_t x19 = 132;
uint16_t x20 = UINT16_MAX;
uint16_t x21 = UINT16_MAX;
static int16_t x25 = INT16_MAX;
int8_t x29 = -1;
static int8_t x31 = 3;
int8_t x32 = INT8_MIN;
static int8_t x36 = INT8_MIN;
int32_t t10 = 3647736;
static int64_t x48 = INT64_MAX;
uint32_t x51 = UINT32_MAX;
static uint16_t x52 = 15U;
int32_t t12 = -21;
int32_t x54 = INT32_MIN;
static volatile int8_t x57 = INT8_MAX;
int64_t x63 = 70636497738797377LL;
int32_t t15 = 477802;
uint64_t x66 = 4014241015LLU;
volatile int8_t x72 = INT8_MIN;
int32_t x78 = INT32_MIN;
uint64_t x79 = 1360980355LLU;
volatile int32_t x80 = INT32_MIN;
uint8_t x83 = 3U;
uint32_t x85 = UINT32_MAX;
int32_t t21 = 447342459;
int32_t t22 = 18479493;
static uint8_t x97 = 1U;
int64_t x99 = INT64_MIN;
uint64_t x100 = 205LLU;
int64_t x107 = INT64_MIN;
int64_t x109 = INT64_MIN;
static int64_t x110 = -1986501225824988LL;
int32_t x120 = INT32_MIN;
volatile int32_t t29 = -8;
static int32_t t30 = 3;
int64_t x125 = INT64_MAX;
int16_t x144 = -1;
static int64_t x145 = 963906577LL;
int16_t x147 = INT16_MIN;
int32_t t36 = 82148;
int64_t x151 = 50306LL;
int32_t t37 = 4549236;
static volatile uint32_t x154 = UINT32_MAX;
int8_t x162 = INT8_MAX;
static volatile uint64_t x168 = 3905962769790036542LLU;
int32_t t41 = 14964;
volatile uint32_t x174 = UINT32_MAX;
volatile int32_t t43 = 65340;
int16_t x190 = -6;
int8_t x202 = -1;
int64_t x203 = INT64_MAX;
int16_t x217 = 7741;
uint64_t x218 = UINT64_MAX;
volatile int32_t t56 = -5579;
uint16_t x229 = UINT16_MAX;
volatile int32_t t58 = -10355091;
uint8_t x239 = 8U;
volatile int32_t t59 = -74072607;
int32_t x247 = INT32_MAX;
volatile int32_t t61 = 1963;
static uint32_t x249 = 2U;
uint8_t x251 = UINT8_MAX;
int16_t x252 = INT16_MIN;
static uint8_t x257 = 4U;
volatile int32_t x259 = INT32_MIN;
int16_t x261 = -1;
static uint16_t x262 = 1922U;
uint32_t x264 = 1180U;
int8_t x266 = INT8_MIN;
volatile int32_t t66 = -64758204;
static volatile int32_t t68 = -888279959;
int32_t x285 = INT32_MIN;
int8_t x294 = 1;
int64_t x298 = 1LL;
int16_t x313 = -1;
volatile int64_t x321 = -1LL;
uint32_t x333 = 632U;
int8_t x347 = 8;
volatile int32_t t89 = 0;
int8_t x361 = -1;
volatile int16_t x368 = -822;
int64_t x369 = INT64_MIN;
int64_t x372 = INT64_MAX;
volatile int32_t x386 = -95;
int16_t x388 = -1;
int32_t t96 = -1;


void f0(void) {
	static int64_t x1 = 507438354LL;
	int32_t x2 = -1;
	static int16_t x3 = INT16_MIN;
	volatile int64_t x4 = -1LL;
	static int32_t t0 = 1769063;

	t0 = ((x1^(x2&x3))==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x7 = UINT16_MAX;
	int32_t t1 = 352067572;

	t1 = ((x5^(x6&x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	static uint64_t x10 = 62879LLU;
	static int16_t x12 = INT16_MAX;
	int32_t t2 = -502;

	t2 = ((x9^(x10&x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint32_t x14 = 1U;
	int32_t x15 = INT32_MIN;
	static int16_t x16 = INT16_MIN;
	volatile int32_t t3 = -89;

	t3 = ((x13^(x14&x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x18 = INT8_MIN;
	int32_t t4 = 62147989;

	t4 = ((x17^(x18&x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = 139967;
	uint8_t x23 = 3U;
	uint16_t x24 = 118U;
	volatile int32_t t5 = 43427;

	t5 = ((x21^(x22&x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x26 = -37155LL;
	int16_t x27 = INT16_MIN;
	static int8_t x28 = 4;
	int32_t t6 = -141;

	t6 = ((x25^(x26&x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint32_t x30 = 34U;
	volatile int32_t t7 = 7916;

	t7 = ((x29^(x30&x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 19U;
	static volatile int32_t x34 = INT32_MIN;
	static int64_t x35 = 4974763502LL;
	int32_t t8 = 7;

	t8 = ((x33^(x34&x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	static int16_t x38 = INT16_MAX;
	volatile int8_t x39 = -1;
	uint16_t x40 = UINT16_MAX;
	static volatile int32_t t9 = -308;

	t9 = ((x37^(x38&x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 1256U;
	static int16_t x42 = -5;
	uint16_t x43 = 7U;
	int64_t x44 = INT64_MIN;

	t10 = ((x41^(x42&x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 17U;
	uint32_t x46 = 12373U;
	uint32_t x47 = 404108U;
	static int32_t t11 = 1;

	t11 = ((x45^(x46&x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x49 = 119632;
	static int64_t x50 = 906282525011LL;

	t12 = ((x49^(x50&x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = UINT16_MAX;
	static uint16_t x55 = 21U;
	static uint64_t x56 = 2933538413785LLU;
	volatile int32_t t13 = -3;

	t13 = ((x53^(x54&x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x58 = INT16_MIN;
	int64_t x59 = 18540LL;
	int16_t x60 = INT16_MIN;
	volatile int32_t t14 = 17227933;

	t14 = ((x57^(x58&x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 116594368LLU;
	volatile int32_t x62 = INT32_MIN;
	int32_t x64 = INT32_MAX;

	t15 = ((x61^(x62&x63))==x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x65 = 8;
	int64_t x67 = -493LL;
	int64_t x68 = INT64_MAX;
	int32_t t16 = -212;

	t16 = ((x65^(x66&x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = -1LL;
	int8_t x70 = -1;
	int16_t x71 = 113;
	int32_t t17 = -392932843;

	t17 = ((x69^(x70&x71))==x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 319425302717807LLU;
	volatile uint32_t x74 = 341425U;
	uint64_t x75 = UINT64_MAX;
	int32_t x76 = INT32_MAX;
	int32_t t18 = -52;

	t18 = ((x73^(x74&x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x77 = UINT16_MAX;
	int32_t t19 = -10216325;

	t19 = ((x77^(x78&x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x81 = INT8_MAX;
	static int16_t x82 = INT16_MIN;
	int8_t x84 = -1;
	volatile int32_t t20 = 7819;

	t20 = ((x81^(x82&x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = 753LL;
	volatile uint16_t x87 = 253U;
	uint64_t x88 = 779292178LLU;

	t21 = ((x85^(x86&x87))==x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x89 = -1;
	static uint16_t x90 = UINT16_MAX;
	static int16_t x91 = -3226;
	uint64_t x92 = UINT64_MAX;

	t22 = ((x89^(x90&x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = -1;
	int16_t x94 = -1;
	int64_t x95 = 6447356LL;
	volatile int32_t x96 = INT32_MIN;
	volatile int32_t t23 = -254248459;

	t23 = ((x93^(x94&x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MIN;
	int32_t t24 = -1;

	t24 = ((x97^(x98&x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x101 = INT8_MIN;
	static uint64_t x102 = 34336019813642LLU;
	int64_t x103 = INT64_MIN;
	volatile int8_t x104 = INT8_MIN;
	static volatile int32_t t25 = 1911304;

	t25 = ((x101^(x102&x103))==x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x105 = UINT32_MAX;
	int16_t x106 = -1;
	int32_t x108 = 1;
	static volatile int32_t t26 = 5706002;

	t26 = ((x105^(x106&x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x111 = 1;
	uint16_t x112 = 1369U;
	static int32_t t27 = -393775480;

	t27 = ((x109^(x110&x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	volatile int32_t x114 = -1;
	int16_t x115 = -166;
	static volatile int32_t x116 = -1;
	int32_t t28 = 3126;

	t28 = ((x113^(x114&x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = -491404364335942LL;
	volatile int64_t x118 = INT64_MIN;
	static int16_t x119 = INT16_MIN;

	t29 = ((x117^(x118&x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x121 = INT64_MIN;
	int64_t x122 = INT64_MAX;
	int16_t x123 = 6460;
	int64_t x124 = 3182985652LL;

	t30 = ((x121^(x122&x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x126 = INT32_MIN;
	volatile int32_t x127 = -881;
	volatile uint64_t x128 = 69539544925306LLU;
	volatile int32_t t31 = -881;

	t31 = ((x125^(x126&x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	volatile int16_t x130 = INT16_MIN;
	static int16_t x131 = 402;
	int8_t x132 = -13;
	volatile int32_t t32 = 27900;

	t32 = ((x129^(x130&x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	int16_t x134 = -4370;
	int32_t x135 = -76172;
	volatile int64_t x136 = 5259800263956LL;
	volatile int32_t t33 = 107003101;

	t33 = ((x133^(x134&x135))==x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 1555LL;
	uint8_t x138 = UINT8_MAX;
	volatile int16_t x139 = -1;
	static uint64_t x140 = 3064289LLU;
	volatile int32_t t34 = -125000107;

	t34 = ((x137^(x138&x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = -2;
	uint64_t x142 = 17172213970824386LLU;
	static int64_t x143 = INT64_MAX;
	volatile int32_t t35 = 19;

	t35 = ((x141^(x142&x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x146 = 2510U;
	int16_t x148 = INT16_MIN;

	t36 = ((x145^(x146&x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static int16_t x149 = INT16_MIN;
	static int8_t x150 = -63;
	volatile int8_t x152 = -1;

	t37 = ((x149^(x150&x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x153 = 1596979U;
	int16_t x155 = INT16_MIN;
	static uint16_t x156 = UINT16_MAX;
	volatile int32_t t38 = -1494644;

	t38 = ((x153^(x154&x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	int16_t x158 = -12475;
	volatile int64_t x159 = -1LL;
	uint8_t x160 = UINT8_MAX;
	static volatile int32_t t39 = 2;

	t39 = ((x157^(x158&x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -1;
	uint8_t x163 = 39U;
	static int32_t x164 = INT32_MAX;
	static volatile int32_t t40 = 3861;

	t40 = ((x161^(x162&x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = 138771373289071LLU;
	static uint32_t x166 = UINT32_MAX;
	int16_t x167 = INT16_MIN;

	t41 = ((x165^(x166&x167))==x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MAX;
	volatile int16_t x170 = -1371;
	uint32_t x171 = UINT32_MAX;
	uint16_t x172 = UINT16_MAX;
	int32_t t42 = 1;

	t42 = ((x169^(x170&x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = INT16_MAX;
	int64_t x175 = -1LL;
	int16_t x176 = 16215;

	t43 = ((x173^(x174&x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 390U;
	volatile int8_t x178 = INT8_MIN;
	int32_t x179 = INT32_MIN;
	int32_t x180 = -564135517;
	int32_t t44 = -2;

	t44 = ((x177^(x178&x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x181 = 3344500U;
	int16_t x182 = INT16_MIN;
	uint32_t x183 = 880734208U;
	int64_t x184 = INT64_MIN;
	static volatile int32_t t45 = 5307;

	t45 = ((x181^(x182&x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	uint64_t x186 = 1892564LLU;
	static int32_t x187 = INT32_MAX;
	uint8_t x188 = UINT8_MAX;
	static int32_t t46 = -350255885;

	t46 = ((x185^(x186&x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MIN;
	int8_t x191 = INT8_MAX;
	int16_t x192 = INT16_MAX;
	int32_t t47 = -25508;

	t47 = ((x189^(x190&x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 9891908;
	static int16_t x194 = INT16_MIN;
	int32_t x195 = 50207143;
	int16_t x196 = -3409;
	volatile int32_t t48 = 389;

	t48 = ((x193^(x194&x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = INT16_MIN;
	volatile int8_t x198 = INT8_MAX;
	int32_t x199 = INT32_MIN;
	volatile uint16_t x200 = 34U;
	static int32_t t49 = -14326617;

	t49 = ((x197^(x198&x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = 3;
	int8_t x204 = 3;
	int32_t t50 = 122;

	t50 = ((x201^(x202&x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x205 = 2377U;
	int64_t x206 = INT64_MAX;
	int64_t x207 = INT64_MAX;
	int8_t x208 = INT8_MIN;
	volatile int32_t t51 = -255;

	t51 = ((x205^(x206&x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static int64_t x209 = 9228LL;
	uint32_t x210 = 46U;
	int32_t x211 = 7663;
	int16_t x212 = INT16_MIN;
	volatile int32_t t52 = 91;

	t52 = ((x209^(x210&x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static int8_t x214 = INT8_MIN;
	volatile uint32_t x215 = UINT32_MAX;
	int8_t x216 = INT8_MIN;
	volatile int32_t t53 = 7183254;

	t53 = ((x213^(x214&x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x219 = 2;
	int32_t x220 = 11400;
	int32_t t54 = -1232;

	t54 = ((x217^(x218&x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static uint64_t x221 = UINT64_MAX;
	volatile int8_t x222 = -1;
	static volatile int32_t x223 = INT32_MAX;
	uint16_t x224 = UINT16_MAX;
	int32_t t55 = 38548368;

	t55 = ((x221^(x222&x223))==x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -1;
	uint32_t x226 = 901U;
	uint16_t x227 = 4073U;
	uint16_t x228 = UINT16_MAX;

	t56 = ((x225^(x226&x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static int32_t x230 = INT32_MAX;
	int32_t x231 = -1;
	int32_t x232 = 762705;
	int32_t t57 = -18634421;

	t57 = ((x229^(x230&x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x233 = 1;
	uint16_t x234 = 3148U;
	static volatile uint32_t x235 = 7U;
	static volatile int64_t x236 = INT64_MIN;

	t58 = ((x233^(x234&x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	static uint16_t x237 = UINT16_MAX;
	int64_t x238 = 2532LL;
	volatile int64_t x240 = 934601615817217210LL;

	t59 = ((x237^(x238&x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = 429U;
	uint32_t x242 = 19495697U;
	volatile uint32_t x243 = 240427923U;
	uint8_t x244 = 1U;
	int32_t t60 = 80589;

	t60 = ((x241^(x242&x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x245 = INT64_MAX;
	uint64_t x246 = 20126LLU;
	uint32_t x248 = UINT32_MAX;

	t61 = ((x245^(x246&x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x250 = INT32_MIN;
	int32_t t62 = -1;

	t62 = ((x249^(x250&x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = 0;
	static volatile int64_t x254 = -1LL;
	static uint32_t x255 = 14U;
	volatile uint64_t x256 = 1735728866824450LLU;
	volatile int32_t t63 = 4138636;

	t63 = ((x253^(x254&x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = -22;
	int8_t x260 = -45;
	volatile int32_t t64 = 9757;

	t64 = ((x257^(x258&x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x263 = INT32_MIN;
	int32_t t65 = -67;

	t65 = ((x261^(x262&x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 9U;
	int16_t x267 = INT16_MIN;
	static uint64_t x268 = 470891105266LLU;

	t66 = ((x265^(x266&x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int8_t x270 = -3;
	int8_t x271 = INT8_MAX;
	int16_t x272 = INT16_MIN;
	volatile int32_t t67 = -98;

	t67 = ((x269^(x270&x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x273 = INT8_MAX;
	static int8_t x274 = INT8_MIN;
	volatile int64_t x275 = INT64_MIN;
	volatile int64_t x276 = -4247984LL;

	t68 = ((x273^(x274&x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = 0;
	int64_t x278 = INT64_MAX;
	int32_t x279 = -15556441;
	int32_t x280 = 43156;
	int32_t t69 = 310812591;

	t69 = ((x277^(x278&x279))==x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MAX;
	int64_t x282 = INT64_MIN;
	int64_t x283 = INT64_MIN;
	int64_t x284 = INT64_MIN;
	volatile int32_t t70 = 3441;

	t70 = ((x281^(x282&x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int32_t x286 = INT32_MAX;
	volatile int8_t x287 = 0;
	static int16_t x288 = -1;
	int32_t t71 = -40;

	t71 = ((x285^(x286&x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = -1903881434877LL;
	static volatile int64_t x290 = INT64_MIN;
	int16_t x291 = 92;
	int64_t x292 = 0LL;
	volatile int32_t t72 = 114564;

	t72 = ((x289^(x290&x291))==x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = -6673948;
	uint16_t x295 = 268U;
	int32_t x296 = INT32_MIN;
	volatile int32_t t73 = 16;

	t73 = ((x293^(x294&x295))==x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x297 = UINT8_MAX;
	static uint64_t x299 = UINT64_MAX;
	uint16_t x300 = 256U;
	static int32_t t74 = 35367548;

	t74 = ((x297^(x298&x299))==x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 138U;
	int8_t x302 = -3;
	int16_t x303 = 0;
	static int16_t x304 = INT16_MAX;
	volatile int32_t t75 = 3072684;

	t75 = ((x301^(x302&x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = 7053U;
	uint8_t x306 = 0U;
	static uint64_t x307 = 3881410858LLU;
	static volatile int8_t x308 = -1;
	int32_t t76 = 39;

	t76 = ((x305^(x306&x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = INT16_MAX;
	uint32_t x310 = 1977086729U;
	static uint16_t x311 = 15162U;
	uint32_t x312 = 13068U;
	static int32_t t77 = -112099;

	t77 = ((x309^(x310&x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x314 = 137432052024070423LLU;
	int32_t x315 = INT32_MIN;
	uint32_t x316 = UINT32_MAX;
	int32_t t78 = 50076;

	t78 = ((x313^(x314&x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = UINT16_MAX;
	volatile int8_t x318 = -1;
	int64_t x319 = 2348046582010208LL;
	int64_t x320 = INT64_MAX;
	static int32_t t79 = 3660;

	t79 = ((x317^(x318&x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x322 = -4938;
	volatile uint64_t x323 = 15LLU;
	volatile int8_t x324 = INT8_MIN;
	static volatile int32_t t80 = -155056768;

	t80 = ((x321^(x322&x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x325 = 117;
	int8_t x326 = -27;
	int16_t x327 = -122;
	int8_t x328 = INT8_MIN;
	static int32_t t81 = 143118088;

	t81 = ((x325^(x326&x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x329 = 3;
	static uint8_t x330 = UINT8_MAX;
	uint64_t x331 = 403LLU;
	static int32_t x332 = INT32_MIN;
	int32_t t82 = -25819;

	t82 = ((x329^(x330&x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int16_t x334 = -1;
	volatile int64_t x335 = INT64_MAX;
	volatile int16_t x336 = -1;
	int32_t t83 = -441141;

	t83 = ((x333^(x334&x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -1;
	uint64_t x338 = 4386482564838LLU;
	int8_t x339 = INT8_MIN;
	int64_t x340 = 63LL;
	volatile int32_t t84 = -59732375;

	t84 = ((x337^(x338&x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = 29U;
	volatile int32_t x342 = INT32_MAX;
	static uint32_t x343 = 1U;
	static uint16_t x344 = UINT16_MAX;
	volatile int32_t t85 = 1549513;

	t85 = ((x341^(x342&x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x345 = UINT16_MAX;
	uint64_t x346 = 967LLU;
	int16_t x348 = -10133;
	int32_t t86 = -6192367;

	t86 = ((x345^(x346&x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x349 = 81U;
	int8_t x350 = 6;
	volatile uint64_t x351 = 4883865479500506790LLU;
	int8_t x352 = INT8_MIN;
	int32_t t87 = -2091395;

	t87 = ((x349^(x350&x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x353 = 0;
	int8_t x354 = INT8_MIN;
	uint8_t x355 = 6U;
	volatile uint32_t x356 = 410252U;
	int32_t t88 = 334594;

	t88 = ((x353^(x354&x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = UINT64_MAX;
	volatile int64_t x358 = INT64_MIN;
	uint32_t x359 = 0U;
	int32_t x360 = -190611972;

	t89 = ((x357^(x358&x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = -2101;
	volatile int32_t x363 = INT32_MIN;
	static int64_t x364 = -35452064857089LL;
	static int32_t t90 = -4604;

	t90 = ((x361^(x362&x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 5U;
	int16_t x366 = 1;
	volatile uint16_t x367 = UINT16_MAX;
	int32_t t91 = -58746621;

	t91 = ((x365^(x366&x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x370 = INT8_MAX;
	uint8_t x371 = UINT8_MAX;
	volatile int32_t t92 = 28035;

	t92 = ((x369^(x370&x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x373 = 379685385U;
	static uint32_t x374 = 32209067U;
	int16_t x375 = -1;
	uint16_t x376 = 10U;
	volatile int32_t t93 = 675;

	t93 = ((x373^(x374&x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 345U;
	uint64_t x378 = UINT64_MAX;
	volatile uint64_t x379 = UINT64_MAX;
	int16_t x380 = INT16_MAX;
	volatile int32_t t94 = -13;

	t94 = ((x377^(x378&x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x381 = UINT64_MAX;
	uint16_t x382 = 1U;
	int8_t x383 = INT8_MAX;
	uint32_t x384 = UINT32_MAX;
	volatile int32_t t95 = 212316323;

	t95 = ((x381^(x382&x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = INT16_MIN;
	int16_t x387 = INT16_MAX;

	t96 = ((x385^(x386&x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = INT16_MIN;
	uint16_t x390 = UINT16_MAX;
	int32_t x391 = INT32_MAX;
	int32_t x392 = INT32_MIN;
	static int32_t t97 = 155;

	t97 = ((x389^(x390&x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 42315973U;
	uint16_t x394 = 27574U;
	int16_t x395 = -107;
	static uint64_t x396 = UINT64_MAX;
	int32_t t98 = -4418855;

	t98 = ((x393^(x394&x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x397 = 2U;
	volatile int8_t x398 = INT8_MIN;
	volatile int64_t x399 = -30627LL;
	int16_t x400 = 744;
	int32_t t99 = 0;

	t99 = ((x397^(x398&x399))==x400);

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

