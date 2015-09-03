#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x2 = 290U;
static int8_t x4 = 6;
uint8_t x15 = 6U;
uint32_t t3 = 802U;
int16_t x28 = -1;
static uint8_t x36 = 89U;
volatile int32_t t9 = 676701;
int32_t x48 = -2;
volatile uint16_t x52 = UINT16_MAX;
int16_t x67 = -567;
int16_t x69 = INT16_MIN;
static int64_t x70 = -200212265226LL;
int32_t t17 = -61377;
int16_t x73 = INT16_MAX;
volatile uint16_t x83 = 9U;
volatile int16_t x85 = INT16_MIN;
volatile uint8_t x87 = UINT8_MAX;
int16_t x88 = INT16_MIN;
static volatile int32_t t24 = -997748;
volatile uint32_t x103 = 35902836U;
volatile int32_t t28 = 63;
int16_t x118 = INT16_MIN;
int32_t x125 = INT32_MIN;
int8_t x126 = INT8_MAX;
volatile int8_t x130 = INT8_MIN;
volatile uint8_t x136 = 20U;
volatile uint64_t x140 = 163039LLU;
static volatile uint64_t t34 = 8662067848961380LLU;
volatile int16_t x141 = 1;
int8_t x146 = -1;
int32_t x148 = INT32_MIN;
int64_t x155 = INT64_MIN;
volatile int16_t x158 = INT16_MIN;
static volatile int64_t x161 = INT64_MIN;
int32_t x163 = INT32_MIN;
int32_t x164 = INT32_MIN;
static int32_t t40 = 1;
int16_t x165 = -95;
int32_t x176 = 42;
int32_t x179 = INT32_MIN;
static volatile uint8_t x185 = 21U;
int64_t x195 = INT64_MIN;
static volatile int32_t x201 = -13046;
int32_t x204 = 8;
volatile uint16_t x206 = UINT16_MAX;
int64_t x211 = INT64_MIN;
int8_t x214 = -21;
int32_t x215 = -119;
int8_t x218 = -11;
int16_t x223 = 0;
int64_t x225 = -1LL;
int8_t x226 = INT8_MIN;
volatile int8_t x228 = INT8_MAX;
int32_t x230 = INT32_MIN;
static volatile int32_t t57 = -3732;
uint64_t x235 = 107158633251246LLU;
volatile int8_t x238 = -1;
static int64_t x239 = INT64_MIN;
volatile int64_t x243 = INT64_MAX;
uint16_t x244 = 21063U;
int8_t x246 = 11;
static int32_t t61 = -24;
volatile int8_t x258 = INT8_MAX;
int32_t x264 = -1;
uint16_t x274 = 15392U;
static uint64_t x277 = 631LLU;
static int16_t x279 = INT16_MIN;
int32_t x280 = INT32_MAX;
int8_t x281 = INT8_MAX;
volatile uint8_t x304 = 0U;
uint16_t x305 = UINT16_MAX;
uint64_t t76 = 6LLU;
int16_t x314 = INT16_MIN;
volatile int32_t t78 = 138505;
int16_t x322 = -1;
int16_t x325 = -1;
volatile uint16_t x327 = 2U;
int32_t x330 = INT32_MAX;
volatile int64_t x334 = INT64_MIN;
static uint16_t x341 = 448U;
int64_t x342 = -1LL;
int32_t t86 = 3363;
int64_t x350 = INT64_MIN;
uint32_t t88 = 253U;
volatile int32_t t89 = 116902682;
int64_t x362 = 59192253LL;
static uint32_t x367 = 9148299U;
uint32_t x376 = UINT32_MAX;
volatile int16_t x378 = -7201;
int64_t x386 = INT64_MIN;
int64_t x388 = INT64_MAX;
int8_t x392 = -1;
static int32_t t97 = -1163;
volatile int32_t x393 = INT32_MAX;


void f0(void) {
	uint16_t x1 = 3444U;
	int64_t x3 = -24480677335075057LL;
	volatile int32_t t0 = 223749;

	t0 = ((x1<(x2&x3))&x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 24U;
	int64_t x6 = INT64_MIN;
	uint32_t x7 = 12614851U;
	static uint16_t x8 = 0U;
	static volatile int32_t t1 = 1993659;

	t1 = ((x5<(x6&x7))&x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 0U;
	int8_t x10 = INT8_MAX;
	int8_t x11 = 1;
	volatile int16_t x12 = INT16_MIN;
	volatile int32_t t2 = -15;

	t2 = ((x9<(x10&x11))&x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = -3640649LL;
	volatile int8_t x14 = 13;
	uint32_t x16 = UINT32_MAX;

	t3 = ((x13<(x14&x15))&x16);

	if (t3 != 1U) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = -54;
	int32_t x18 = INT32_MAX;
	volatile int64_t x19 = INT64_MIN;
	uint64_t x20 = 157420LLU;
	uint64_t t4 = 260LLU;

	t4 = ((x17<(x18&x19))&x20);

	if (t4 != 0LLU) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x21 = 32U;
	int8_t x22 = 2;
	volatile uint32_t x23 = UINT32_MAX;
	int8_t x24 = -13;
	int32_t t5 = -1;

	t5 = ((x21<(x22&x23))&x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -1;
	volatile int32_t x26 = 54411;
	volatile uint16_t x27 = 14156U;
	volatile int32_t t6 = 3775;

	t6 = ((x25<(x26&x27))&x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 112U;
	static int16_t x30 = 7;
	static uint64_t x31 = 166LLU;
	static uint8_t x32 = 0U;
	int32_t t7 = 1151426;

	t7 = ((x29<(x30&x31))&x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = 18U;
	uint16_t x34 = 252U;
	int64_t x35 = -1LL;
	volatile int32_t t8 = -58886906;

	t8 = ((x33<(x34&x35))&x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = 12864495936LLU;
	int32_t x38 = 16714769;
	uint64_t x39 = 15479166LLU;
	int16_t x40 = -1;

	t9 = ((x37<(x38&x39))&x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x41 = INT32_MIN;
	uint8_t x42 = UINT8_MAX;
	int32_t x43 = -1;
	int64_t x44 = INT64_MAX;
	int64_t t10 = -57853956LL;

	t10 = ((x41<(x42&x43))&x44);

	if (t10 != 1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	int8_t x46 = INT8_MIN;
	int16_t x47 = INT16_MIN;
	static int32_t t11 = 1071;

	t11 = ((x45<(x46&x47))&x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int16_t x49 = 1319;
	static int64_t x50 = -6LL;
	int16_t x51 = INT16_MIN;
	int32_t t12 = -519305;

	t12 = ((x49<(x50&x51))&x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 5615LLU;
	int16_t x54 = INT16_MIN;
	static int64_t x55 = INT64_MIN;
	volatile int32_t x56 = INT32_MAX;
	int32_t t13 = 3973504;

	t13 = ((x53<(x54&x55))&x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = 647233U;
	static volatile int8_t x58 = INT8_MIN;
	int64_t x59 = -3659296126492LL;
	static int64_t x60 = INT64_MIN;
	volatile int64_t t14 = -3LL;

	t14 = ((x57<(x58&x59))&x60);

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint64_t x61 = 7188274495332LLU;
	volatile uint8_t x62 = UINT8_MAX;
	static int8_t x63 = -1;
	static uint8_t x64 = UINT8_MAX;
	int32_t t15 = -12628164;

	t15 = ((x61<(x62&x63))&x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x65 = -144;
	int32_t x66 = INT32_MIN;
	int16_t x68 = INT16_MIN;
	int32_t t16 = 15056355;

	t16 = ((x65<(x66&x67))&x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x71 = 45418031817000598LL;
	int8_t x72 = -63;

	t17 = ((x69<(x70&x71))&x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x74 = 90U;
	static int64_t x75 = INT64_MIN;
	volatile int8_t x76 = INT8_MIN;
	int32_t t18 = -2819;

	t18 = ((x73<(x74&x75))&x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	static int32_t x78 = 36532;
	static int16_t x79 = INT16_MIN;
	static int16_t x80 = -3;
	int32_t t19 = -35438;

	t19 = ((x77<(x78&x79))&x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = INT16_MAX;
	int8_t x82 = 0;
	int64_t x84 = -1LL;
	volatile int64_t t20 = -63777036238LL;

	t20 = ((x81<(x82&x83))&x84);

	if (t20 != 0LL) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x86 = 117961223417557329LLU;
	static volatile int32_t t21 = -2;

	t21 = ((x85<(x86&x87))&x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -7LL;
	static int32_t x90 = INT32_MIN;
	volatile int16_t x91 = 30;
	volatile int8_t x92 = INT8_MIN;
	volatile int32_t t22 = -2881743;

	t22 = ((x89<(x90&x91))&x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = -1;
	static int64_t x94 = INT64_MIN;
	uint32_t x95 = 21661630U;
	static uint16_t x96 = 4U;
	static volatile int32_t t23 = 130;

	t23 = ((x93<(x94&x95))&x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	int32_t x98 = INT32_MIN;
	volatile int64_t x99 = -1068003186618581239LL;
	int8_t x100 = -1;

	t24 = ((x97<(x98&x99))&x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = 0;
	int8_t x102 = -43;
	int64_t x104 = -1LL;
	volatile int64_t t25 = -338868989831362889LL;

	t25 = ((x101<(x102&x103))&x104);

	if (t25 != 1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x105 = UINT64_MAX;
	volatile int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MIN;
	uint8_t x108 = 0U;
	volatile int32_t t26 = -28;

	t26 = ((x105<(x106&x107))&x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x109 = -4;
	volatile uint8_t x110 = 0U;
	static volatile uint64_t x111 = 12LLU;
	int32_t x112 = -1;
	int32_t t27 = -4655468;

	t27 = ((x109<(x110&x111))&x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int16_t x113 = INT16_MIN;
	int16_t x114 = INT16_MIN;
	int16_t x115 = 17;
	volatile int16_t x116 = 6;

	t28 = ((x113<(x114&x115))&x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x117 = INT32_MIN;
	int16_t x119 = INT16_MAX;
	int8_t x120 = INT8_MIN;
	volatile int32_t t29 = -341824131;

	t29 = ((x117<(x118&x119))&x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MAX;
	int32_t x122 = 2093;
	static int16_t x123 = -1;
	volatile int32_t x124 = -1;
	volatile int32_t t30 = 699211;

	t30 = ((x121<(x122&x123))&x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x127 = 65070LLU;
	volatile int32_t x128 = -1685499;
	static int32_t t31 = -9094;

	t31 = ((x125<(x126&x127))&x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	int64_t x131 = -1LL;
	volatile int16_t x132 = -1;
	int32_t t32 = -28990835;

	t32 = ((x129<(x130&x131))&x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x133 = UINT16_MAX;
	static int8_t x134 = -1;
	int64_t x135 = -1LL;
	static volatile int32_t t33 = 76394;

	t33 = ((x133<(x134&x135))&x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = UINT16_MAX;
	int8_t x138 = 46;
	int32_t x139 = -1;

	t34 = ((x137<(x138&x139))&x140);

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x142 = -4139676851988LL;
	int64_t x143 = INT64_MAX;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = 269428814;

	t35 = ((x141<(x142&x143))&x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = INT16_MIN;
	uint32_t x147 = 306U;
	volatile int32_t t36 = -1562710;

	t36 = ((x145<(x146&x147))&x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint8_t x149 = UINT8_MAX;
	int64_t x150 = 0LL;
	int64_t x151 = -1LL;
	volatile uint8_t x152 = 2U;
	static volatile int32_t t37 = -394417;

	t37 = ((x149<(x150&x151))&x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = UINT16_MAX;
	int16_t x154 = INT16_MIN;
	int64_t x156 = 261869334616290LL;
	static int64_t t38 = 1250LL;

	t38 = ((x153<(x154&x155))&x156);

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint8_t x157 = 1U;
	static int32_t x159 = INT32_MIN;
	int16_t x160 = -1;
	static int32_t t39 = 1068834931;

	t39 = ((x157<(x158&x159))&x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x162 = -2;

	t40 = ((x161<(x162&x163))&x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x166 = INT8_MAX;
	static uint64_t x167 = 575LLU;
	int32_t x168 = INT32_MIN;
	static volatile int32_t t41 = 266515;

	t41 = ((x165<(x166&x167))&x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x169 = -1LL;
	static int16_t x170 = INT16_MIN;
	volatile uint64_t x171 = 21362LLU;
	int16_t x172 = 30;
	volatile int32_t t42 = 2;

	t42 = ((x169<(x170&x171))&x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	static int16_t x174 = -1;
	int8_t x175 = 1;
	volatile int32_t t43 = -39622216;

	t43 = ((x173<(x174&x175))&x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = INT64_MAX;
	volatile int32_t x178 = -1;
	uint32_t x180 = UINT32_MAX;
	volatile uint32_t t44 = 23591725U;

	t44 = ((x177<(x178&x179))&x180);

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x181 = INT8_MIN;
	volatile int8_t x182 = -1;
	static uint32_t x183 = UINT32_MAX;
	volatile uint16_t x184 = 7175U;
	int32_t t45 = -3414449;

	t45 = ((x181<(x182&x183))&x184);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint16_t x186 = UINT16_MAX;
	int64_t x187 = -123169255174552LL;
	static int64_t x188 = 3961591669983165LL;
	int64_t t46 = -700650708LL;

	t46 = ((x185<(x186&x187))&x188);

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = UINT64_MAX;
	int8_t x190 = 0;
	int16_t x191 = 6797;
	int8_t x192 = INT8_MAX;
	volatile int32_t t47 = -94643191;

	t47 = ((x189<(x190&x191))&x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x193 = INT16_MIN;
	int8_t x194 = -1;
	static int64_t x196 = INT64_MAX;
	int64_t t48 = 133162414335LL;

	t48 = ((x193<(x194&x195))&x196);

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MAX;
	uint64_t x198 = 7LLU;
	uint16_t x199 = 0U;
	static volatile int64_t x200 = INT64_MIN;
	volatile int64_t t49 = -363225914LL;

	t49 = ((x197<(x198&x199))&x200);

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = -3;
	int8_t x203 = INT8_MIN;
	int32_t t50 = 1;

	t50 = ((x201<(x202&x203))&x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = -1LL;
	int64_t x207 = -109152793402470LL;
	int16_t x208 = 180;
	volatile int32_t t51 = 7;

	t51 = ((x205<(x206&x207))&x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -337;
	static int32_t x210 = INT32_MIN;
	volatile int8_t x212 = -1;
	int32_t t52 = 986884;

	t52 = ((x209<(x210&x211))&x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = -1;
	int8_t x216 = -1;
	int32_t t53 = -1631041;

	t53 = ((x213<(x214&x215))&x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 12428361U;
	int64_t x219 = INT64_MAX;
	uint16_t x220 = 0U;
	volatile int32_t t54 = -14142963;

	t54 = ((x217<(x218&x219))&x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = INT8_MIN;
	static uint8_t x222 = 123U;
	static volatile uint64_t x224 = 998042418LLU;
	uint64_t t55 = 7663LLU;

	t55 = ((x221<(x222&x223))&x224);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint16_t x227 = UINT16_MAX;
	int32_t t56 = -3065197;

	t56 = ((x225<(x226&x227))&x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x229 = INT8_MAX;
	int64_t x231 = -3852867LL;
	static volatile uint8_t x232 = 13U;

	t57 = ((x229<(x230&x231))&x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = INT32_MIN;
	int32_t x234 = INT32_MIN;
	volatile int16_t x236 = INT16_MAX;
	volatile int32_t t58 = 6845013;

	t58 = ((x233<(x234&x235))&x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x237 = INT8_MAX;
	static int16_t x240 = INT16_MAX;
	volatile int32_t t59 = 0;

	t59 = ((x237<(x238&x239))&x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = -827071;
	int16_t x242 = INT16_MIN;
	volatile int32_t t60 = -3103;

	t60 = ((x241<(x242&x243))&x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x245 = INT8_MIN;
	uint32_t x247 = UINT32_MAX;
	int8_t x248 = INT8_MAX;

	t61 = ((x245<(x246&x247))&x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -409371;
	uint16_t x250 = 80U;
	uint16_t x251 = 32U;
	int32_t x252 = INT32_MAX;
	volatile int32_t t62 = -3893214;

	t62 = ((x249<(x250&x251))&x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x253 = -1;
	uint32_t x254 = 66U;
	int64_t x255 = INT64_MIN;
	int8_t x256 = -1;
	int32_t t63 = 62651;

	t63 = ((x253<(x254&x255))&x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x257 = UINT64_MAX;
	static int8_t x259 = 0;
	volatile int64_t x260 = -1LL;
	int64_t t64 = 430785275500LL;

	t64 = ((x257<(x258&x259))&x260);

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = -1;
	int32_t x262 = INT32_MIN;
	static int16_t x263 = INT16_MIN;
	static int32_t t65 = -26704;

	t65 = ((x261<(x262&x263))&x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -6LL;
	int64_t x266 = -4932573189LL;
	uint64_t x267 = 989560137459LLU;
	int16_t x268 = -94;
	static int32_t t66 = 705472828;

	t66 = ((x265<(x266&x267))&x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x269 = INT8_MIN;
	static int8_t x270 = -1;
	int64_t x271 = -1LL;
	int16_t x272 = 2;
	int32_t t67 = -144282066;

	t67 = ((x269<(x270&x271))&x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = INT8_MAX;
	uint64_t x275 = 22110060917794LLU;
	int64_t x276 = INT64_MAX;
	static volatile int64_t t68 = 0LL;

	t68 = ((x273<(x274&x275))&x276);

	if (t68 != 1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint16_t x278 = 182U;
	int32_t t69 = -234;

	t69 = ((x277<(x278&x279))&x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x282 = UINT32_MAX;
	uint64_t x283 = 398429326168540LLU;
	uint8_t x284 = 28U;
	int32_t t70 = -87;

	t70 = ((x281<(x282&x283))&x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x285 = INT64_MIN;
	static volatile int32_t x286 = 35569;
	int32_t x287 = INT32_MIN;
	volatile int32_t x288 = INT32_MAX;
	volatile int32_t t71 = -129045;

	t71 = ((x285<(x286&x287))&x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = UINT16_MAX;
	uint8_t x290 = 13U;
	uint64_t x291 = UINT64_MAX;
	static volatile int8_t x292 = INT8_MIN;
	volatile int32_t t72 = 38;

	t72 = ((x289<(x290&x291))&x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x293 = 3748454309LLU;
	int8_t x294 = INT8_MIN;
	volatile int8_t x295 = -1;
	static uint16_t x296 = UINT16_MAX;
	static volatile int32_t t73 = 1;

	t73 = ((x293<(x294&x295))&x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = UINT64_MAX;
	static volatile int64_t x298 = -2813LL;
	int16_t x299 = -44;
	static uint16_t x300 = 1779U;
	int32_t t74 = 1;

	t74 = ((x297<(x298&x299))&x300);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x301 = 0U;
	uint8_t x302 = 82U;
	static int16_t x303 = INT16_MAX;
	volatile int32_t t75 = -31;

	t75 = ((x301<(x302&x303))&x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int8_t x306 = -1;
	int8_t x307 = 1;
	static volatile uint64_t x308 = UINT64_MAX;

	t76 = ((x305<(x306&x307))&x308);

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x309 = 1530;
	int32_t x310 = -1;
	static int8_t x311 = 0;
	uint64_t x312 = 1460511LLU;
	static volatile uint64_t t77 = 734LLU;

	t77 = ((x309<(x310&x311))&x312);

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile int8_t x313 = INT8_MIN;
	static int8_t x315 = 24;
	int16_t x316 = 0;

	t78 = ((x313<(x314&x315))&x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 0LLU;
	volatile int32_t x318 = -1;
	volatile int8_t x319 = INT8_MIN;
	uint64_t x320 = 126095LLU;
	volatile uint64_t t79 = 29507494627590425LLU;

	t79 = ((x317<(x318&x319))&x320);

	if (t79 != 1LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = INT32_MIN;
	static uint64_t x323 = UINT64_MAX;
	uint8_t x324 = UINT8_MAX;
	int32_t t80 = 39;

	t80 = ((x321<(x322&x323))&x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x326 = UINT16_MAX;
	static uint8_t x328 = 62U;
	volatile int32_t t81 = 4876334;

	t81 = ((x325<(x326&x327))&x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x329 = -1;
	static int16_t x331 = INT16_MIN;
	int64_t x332 = INT64_MIN;
	volatile int64_t t82 = 7616042286902556LL;

	t82 = ((x329<(x330&x331))&x332);

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = 5;
	uint32_t x335 = 25U;
	int8_t x336 = 23;
	volatile int32_t t83 = 214;

	t83 = ((x333<(x334&x335))&x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = INT16_MAX;
	static volatile int32_t x338 = -1;
	int8_t x339 = INT8_MAX;
	int16_t x340 = 2106;
	static volatile int32_t t84 = -223243;

	t84 = ((x337<(x338&x339))&x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x343 = -1;
	int16_t x344 = -1;
	static volatile int32_t t85 = 40;

	t85 = ((x341<(x342&x343))&x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x345 = INT64_MAX;
	static int32_t x346 = -1;
	uint64_t x347 = 3002559381116676699LLU;
	static int8_t x348 = -9;

	t86 = ((x345<(x346&x347))&x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	static int8_t x351 = INT8_MIN;
	volatile int16_t x352 = 421;
	volatile int32_t t87 = 56439630;

	t87 = ((x349<(x350&x351))&x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	static uint8_t x353 = 1U;
	static int32_t x354 = -49;
	uint8_t x355 = UINT8_MAX;
	uint32_t x356 = 10477U;

	t88 = ((x353<(x354&x355))&x356);

	if (t88 != 1U) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x357 = 43U;
	static volatile int64_t x358 = -117LL;
	int8_t x359 = -1;
	int16_t x360 = 259;

	t89 = ((x357<(x358&x359))&x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 53U;
	volatile int16_t x363 = INT16_MIN;
	uint8_t x364 = 8U;
	int32_t t90 = 12;

	t90 = ((x361<(x362&x363))&x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x365 = UINT64_MAX;
	static int32_t x366 = INT32_MIN;
	int16_t x368 = -1;
	static int32_t t91 = -4962;

	t91 = ((x365<(x366&x367))&x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = 12;
	int16_t x371 = INT16_MIN;
	uint16_t x372 = 41U;
	int32_t t92 = 9759877;

	t92 = ((x369<(x370&x371))&x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x373 = 14U;
	int64_t x374 = INT64_MAX;
	int64_t x375 = 335235314675638LL;
	uint32_t t93 = 83962581U;

	t93 = ((x373<(x374&x375))&x376);

	if (t93 != 1U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = -464795094;
	static uint32_t x379 = UINT32_MAX;
	uint16_t x380 = UINT16_MAX;
	volatile int32_t t94 = -3304;

	t94 = ((x377<(x378&x379))&x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x381 = INT32_MIN;
	static int64_t x382 = 72095301LL;
	uint16_t x383 = UINT16_MAX;
	int64_t x384 = INT64_MAX;
	volatile int64_t t95 = -542545145493LL;

	t95 = ((x381<(x382&x383))&x384);

	if (t95 != 1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MAX;
	volatile uint64_t x387 = 8LLU;
	static int64_t t96 = -41607728204961925LL;

	t96 = ((x385<(x386&x387))&x388);

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -89;
	volatile int8_t x390 = INT8_MAX;
	int32_t x391 = 425;

	t97 = ((x389<(x390&x391))&x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x394 = -4;
	uint64_t x395 = 730259415753485LLU;
	int64_t x396 = -1LL;
	int64_t t98 = 505741LL;

	t98 = ((x393<(x394&x395))&x396);

	if (t98 != 1LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x397 = INT64_MIN;
	static volatile uint32_t x398 = 259352U;
	volatile uint8_t x399 = 58U;
	uint8_t x400 = 32U;
	int32_t t99 = -1;

	t99 = ((x397<(x398&x399))&x400);

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

