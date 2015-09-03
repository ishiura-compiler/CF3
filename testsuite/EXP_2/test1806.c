#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint32_t x2 = 1114141U;
static uint16_t x3 = UINT16_MAX;
int16_t x6 = -1;
uint16_t x9 = 127U;
int64_t x10 = INT64_MIN;
int16_t x13 = -1;
int16_t x14 = INT16_MIN;
static uint32_t x16 = UINT32_MAX;
volatile uint32_t t3 = UINT32_MAX;
uint64_t x18 = 36LLU;
int64_t x21 = INT64_MAX;
uint8_t x23 = 107U;
uint64_t t5 = 45612431626LLU;
int64_t x27 = INT64_MIN;
int64_t x28 = INT64_MAX;
volatile uint32_t x35 = 1021319U;
volatile uint64_t t8 = 41009413LLU;
uint32_t x38 = 1066065U;
int32_t x43 = -1;
static int64_t x47 = -60262357648725LL;
int32_t x51 = 480;
uint64_t x52 = UINT64_MAX;
int8_t x56 = INT8_MIN;
uint64_t x59 = UINT64_MAX;
volatile uint16_t x62 = 2U;
int32_t x66 = INT32_MAX;
int8_t x69 = 1;
int16_t x72 = -1;
int32_t x77 = INT32_MIN;
int16_t x78 = INT16_MAX;
static int64_t x84 = INT64_MIN;
int64_t x91 = INT64_MIN;
static volatile int16_t x92 = INT16_MIN;
int32_t t22 = -1;
int32_t x99 = -18;
uint8_t x111 = 121U;
uint32_t x112 = UINT32_MAX;
volatile uint16_t x113 = 435U;
uint32_t x122 = 9057U;
volatile int32_t x134 = -1;
volatile uint32_t t33 = 1U;
int32_t x137 = -412580464;
uint32_t x141 = UINT32_MAX;
int64_t x147 = INT64_MIN;
uint16_t x150 = 1U;
volatile uint8_t x152 = 26U;
volatile int16_t x159 = INT16_MIN;
uint16_t x164 = 4U;
int8_t x165 = INT8_MAX;
int16_t x169 = INT16_MIN;
volatile int32_t t43 = 21368394;
static int32_t x178 = INT32_MAX;
int32_t t44 = -98;
int8_t x187 = INT8_MIN;
volatile int16_t x193 = INT16_MIN;
static uint64_t x202 = 996940968581522909LLU;
uint8_t x210 = UINT8_MAX;
volatile uint64_t x214 = 3954574260LLU;
volatile int16_t x218 = 944;
uint8_t x226 = UINT8_MAX;
uint32_t x229 = 2646U;
int16_t x235 = 9129;
volatile int32_t t59 = 7;
static volatile int32_t t60 = 25651;
static int32_t x247 = INT32_MAX;
int64_t x258 = INT64_MIN;
static volatile int64_t x265 = INT64_MAX;
int64_t x268 = INT64_MAX;
int64_t t66 = INT64_MAX;
int16_t x269 = -213;
volatile int64_t x275 = INT64_MIN;
uint16_t x276 = 3092U;
volatile int64_t t69 = -3844LL;
volatile uint8_t x286 = 52U;
int32_t t71 = 2096273;
uint64_t x292 = 29892LLU;
int32_t x299 = INT32_MAX;
int8_t x300 = 1;
static int32_t t74 = 0;
static uint64_t x301 = UINT64_MAX;
int8_t x303 = -2;
int64_t x304 = INT64_MAX;
volatile int32_t x308 = -5038;
int32_t t76 = 9481713;
static int8_t x309 = INT8_MAX;
int64_t x313 = 15628781164760957LL;
int16_t x315 = -1;
volatile uint32_t t79 = 261013U;
uint16_t x325 = 29U;
int32_t t81 = -636;
uint64_t x340 = 22567715375607988LLU;
uint64_t t84 = 25417LLU;
int32_t t87 = -1;
int8_t x354 = INT8_MIN;
volatile int32_t t88 = -5;
volatile int64_t x362 = -238457019394534LL;
volatile int16_t x364 = -1;
volatile int32_t x365 = INT32_MIN;
volatile int64_t x382 = INT64_MIN;
volatile uint32_t x389 = UINT32_MAX;
volatile uint8_t x393 = 10U;


void f0(void) {
	static int64_t x1 = -264365006089928458LL;
	static int32_t x4 = INT32_MAX;
	volatile int32_t t0 = INT32_MAX;

	t0 = ((x1<(x2&x3))|x4);

	if (t0 != INT32_MAX) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x5 = INT8_MIN;
	int64_t x7 = INT64_MIN;
	volatile int16_t x8 = -3;
	int32_t t1 = 0;

	t1 = ((x5<(x6&x7))|x8);

	if (t1 != -3) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x11 = INT8_MIN;
	int16_t x12 = -1;
	static int32_t t2 = 5;

	t2 = ((x9<(x10&x11))|x12);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x15 = 70139997039850976LL;

	t3 = ((x13<(x14&x15))|x16);

	if (t3 != UINT32_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 7560780552088907LLU;
	uint16_t x19 = UINT16_MAX;
	int16_t x20 = INT16_MIN;
	static volatile int32_t t4 = 50;

	t4 = ((x17<(x18&x19))|x20);

	if (t4 != -32768) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MAX;
	uint64_t x24 = 47468662096819763LLU;

	t5 = ((x21<(x22&x23))|x24);

	if (t5 != 47468662096819763LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = 167U;
	static int64_t x26 = -2921246LL;
	int64_t t6 = INT64_MAX;

	t6 = ((x25<(x26&x27))|x28);

	if (t6 != INT64_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = 1525U;
	int64_t x30 = -9LL;
	uint16_t x31 = 1980U;
	int16_t x32 = INT16_MIN;
	volatile int32_t t7 = -11;

	t7 = ((x29<(x30&x31))|x32);

	if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x33 = UINT32_MAX;
	int16_t x34 = INT16_MIN;
	uint64_t x36 = 10230280266109617LLU;

	t8 = ((x33<(x34&x35))|x36);

	if (t8 != 10230280266109617LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MAX;
	int16_t x39 = -1;
	uint32_t x40 = UINT32_MAX;
	volatile uint32_t t9 = UINT32_MAX;

	t9 = ((x37<(x38&x39))|x40);

	if (t9 != UINT32_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x41 = 32125607U;
	int8_t x42 = INT8_MAX;
	volatile int32_t x44 = INT32_MIN;
	int32_t t10 = INT32_MIN;

	t10 = ((x41<(x42&x43))|x44);

	if (t10 != INT32_MIN) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x45 = 18U;
	int32_t x46 = 189863;
	static uint16_t x48 = 755U;
	static int32_t t11 = -8311;

	t11 = ((x45<(x46&x47))|x48);

	if (t11 != 755) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x49 = INT32_MAX;
	static int16_t x50 = INT16_MIN;
	uint64_t t12 = UINT64_MAX;

	t12 = ((x49<(x50&x51))|x52);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = 14816;
	uint64_t x54 = 16608215242853LLU;
	static int8_t x55 = INT8_MAX;
	static int32_t t13 = 3921;

	t13 = ((x53<(x54&x55))|x56);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 1U;
	int64_t x58 = -25222216684LL;
	static int32_t x60 = -103915574;
	int32_t t14 = -516326528;

	t14 = ((x57<(x58&x59))|x60);

	if (t14 != -103915573) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x61 = 343260232067536999LLU;
	static int32_t x63 = -225300464;
	static uint8_t x64 = 4U;
	int32_t t15 = -204;

	t15 = ((x61<(x62&x63))|x64);

	if (t15 != 4) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = 2462U;
	int64_t x67 = -1LL;
	volatile int64_t x68 = INT64_MAX;
	static volatile int64_t t16 = INT64_MAX;

	t16 = ((x65<(x66&x67))|x68);

	if (t16 != INT64_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = -1;
	static int8_t x71 = -1;
	int32_t t17 = 67106536;

	t17 = ((x69<(x70&x71))|x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = 2;
	int64_t x74 = INT64_MAX;
	uint32_t x75 = 4988795U;
	int64_t x76 = INT64_MAX;
	int64_t t18 = INT64_MAX;

	t18 = ((x73<(x74&x75))|x76);

	if (t18 != INT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x79 = -1;
	int64_t x80 = INT64_MIN;
	int64_t t19 = -2665069603LL;

	t19 = ((x77<(x78&x79))|x80);

	if (t19 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint64_t x81 = UINT64_MAX;
	int32_t x82 = INT32_MAX;
	volatile int16_t x83 = INT16_MIN;
	static int64_t t20 = INT64_MIN;

	t20 = ((x81<(x82&x83))|x84);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x85 = 23012749835514LLU;
	int16_t x86 = INT16_MAX;
	static int8_t x87 = -1;
	uint32_t x88 = UINT32_MAX;
	uint32_t t21 = UINT32_MAX;

	t21 = ((x85<(x86&x87))|x88);

	if (t21 != UINT32_MAX) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -64106361;
	int32_t x90 = 876;

	t22 = ((x89<(x90&x91))|x92);

	if (t22 != -32767) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	volatile uint16_t x94 = UINT16_MAX;
	static uint16_t x95 = 219U;
	int8_t x96 = 1;
	volatile int32_t t23 = 13;

	t23 = ((x93<(x94&x95))|x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	volatile uint8_t x97 = 7U;
	volatile int8_t x98 = INT8_MAX;
	static int16_t x100 = INT16_MIN;
	volatile int32_t t24 = 3199515;

	t24 = ((x97<(x98&x99))|x100);

	if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 26894841U;
	uint16_t x102 = 14724U;
	uint8_t x103 = 1U;
	int8_t x104 = INT8_MAX;
	int32_t t25 = -2150057;

	t25 = ((x101<(x102&x103))|x104);

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x105 = 33U;
	int8_t x106 = INT8_MIN;
	int8_t x107 = INT8_MIN;
	int16_t x108 = -1;
	int32_t t26 = -714534836;

	t26 = ((x105<(x106&x107))|x108);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 6U;
	int64_t x110 = INT64_MIN;
	volatile uint32_t t27 = UINT32_MAX;

	t27 = ((x109<(x110&x111))|x112);

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = 45U;
	int64_t x115 = INT64_MIN;
	static int32_t x116 = INT32_MIN;
	volatile int32_t t28 = INT32_MIN;

	t28 = ((x113<(x114&x115))|x116);

	if (t28 != INT32_MIN) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	volatile uint8_t x118 = 22U;
	int8_t x119 = INT8_MIN;
	volatile int8_t x120 = INT8_MAX;
	int32_t t29 = 24957688;

	t29 = ((x117<(x118&x119))|x120);

	if (t29 != 127) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	static volatile uint32_t x123 = UINT32_MAX;
	static int64_t x124 = -750859811672558122LL;
	int64_t t30 = 70140751284116LL;

	t30 = ((x121<(x122&x123))|x124);

	if (t30 != -750859811672558121LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int32_t x125 = INT32_MAX;
	static int16_t x126 = -1;
	int64_t x127 = -184966423LL;
	int32_t x128 = INT32_MAX;
	volatile int32_t t31 = INT32_MAX;

	t31 = ((x125<(x126&x127))|x128);

	if (t31 != INT32_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int8_t x130 = INT8_MIN;
	static volatile int8_t x131 = -1;
	int8_t x132 = 11;
	int32_t t32 = 0;

	t32 = ((x129<(x130&x131))|x132);

	if (t32 != 11) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = 15323;
	volatile int16_t x135 = -1;
	uint32_t x136 = 644U;

	t33 = ((x133<(x134&x135))|x136);

	if (t33 != 644U) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x138 = 16279552683825LLU;
	int16_t x139 = -587;
	uint64_t x140 = 489601965656986LLU;
	uint64_t t34 = 1183306151271989LLU;

	t34 = ((x137<(x138&x139))|x140);

	if (t34 != 489601965656986LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x142 = -140;
	volatile uint16_t x143 = 9642U;
	static int64_t x144 = 34180530LL;
	volatile int64_t t35 = 694306LL;

	t35 = ((x141<(x142&x143))|x144);

	if (t35 != 34180530LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 1365171708LLU;
	int16_t x146 = INT16_MIN;
	int16_t x148 = INT16_MAX;
	volatile int32_t t36 = 41;

	t36 = ((x145<(x146&x147))|x148);

	if (t36 != 32767) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int16_t x151 = -1;
	int32_t t37 = 430816;

	t37 = ((x149<(x150&x151))|x152);

	if (t37 != 27) { NG(); } else { ; }
	
}

void f38(void) {
	static int8_t x153 = INT8_MIN;
	static int16_t x154 = INT16_MIN;
	volatile uint8_t x155 = UINT8_MAX;
	uint16_t x156 = 25300U;
	static volatile int32_t t38 = 10;

	t38 = ((x153<(x154&x155))|x156);

	if (t38 != 25301) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x157 = INT16_MIN;
	uint32_t x158 = 99U;
	uint32_t x160 = 674088570U;
	static volatile uint32_t t39 = 880769064U;

	t39 = ((x157<(x158&x159))|x160);

	if (t39 != 674088570U) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x161 = 5;
	static int16_t x162 = INT16_MIN;
	static volatile int16_t x163 = INT16_MAX;
	static volatile int32_t t40 = 1402303;

	t40 = ((x161<(x162&x163))|x164);

	if (t40 != 4) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x166 = 86248675672LLU;
	int16_t x167 = INT16_MAX;
	int16_t x168 = 4;
	int32_t t41 = -1;

	t41 = ((x165<(x166&x167))|x168);

	if (t41 != 5) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x170 = INT64_MIN;
	volatile int64_t x171 = INT64_MIN;
	static uint16_t x172 = 6739U;
	static int32_t t42 = -24925;

	t42 = ((x169<(x170&x171))|x172);

	if (t42 != 6739) { NG(); } else { ; }
	
}

void f43(void) {
	static uint64_t x173 = 22257480381454LLU;
	volatile uint32_t x174 = UINT32_MAX;
	int8_t x175 = 3;
	int16_t x176 = INT16_MIN;

	t43 = ((x173<(x174&x175))|x176);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x177 = 7810730U;
	volatile uint64_t x179 = 5117012339LLU;
	uint16_t x180 = 0U;

	t44 = ((x177<(x178&x179))|x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x181 = 8123LLU;
	static int32_t x182 = 502018;
	int32_t x183 = -6449;
	int16_t x184 = INT16_MIN;
	int32_t t45 = 1;

	t45 = ((x181<(x182&x183))|x184);

	if (t45 != -32767) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x185 = UINT32_MAX;
	int32_t x186 = INT32_MIN;
	volatile uint8_t x188 = 53U;
	volatile int32_t t46 = -422;

	t46 = ((x185<(x186&x187))|x188);

	if (t46 != 53) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = -417145LL;
	int8_t x190 = 1;
	static uint16_t x191 = 332U;
	int64_t x192 = INT64_MIN;
	int64_t t47 = -9002LL;

	t47 = ((x189<(x190&x191))|x192);

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x194 = 121U;
	volatile int8_t x195 = INT8_MIN;
	int8_t x196 = 0;
	volatile int32_t t48 = 111;

	t48 = ((x193<(x194&x195))|x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x197 = INT8_MIN;
	int16_t x198 = INT16_MIN;
	volatile int32_t x199 = 0;
	int16_t x200 = INT16_MAX;
	int32_t t49 = -6;

	t49 = ((x197<(x198&x199))|x200);

	if (t49 != 32767) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x201 = INT32_MIN;
	volatile uint64_t x203 = UINT64_MAX;
	int64_t x204 = 28569262LL;
	volatile int64_t t50 = 35679440106288234LL;

	t50 = ((x201<(x202&x203))|x204);

	if (t50 != 28569262LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x205 = 106830604LLU;
	int32_t x206 = 856;
	uint8_t x207 = 30U;
	int16_t x208 = -11;
	int32_t t51 = 12;

	t51 = ((x205<(x206&x207))|x208);

	if (t51 != -11) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = -1;
	uint32_t x211 = 1510U;
	uint32_t x212 = 410511U;
	uint32_t t52 = 393289U;

	t52 = ((x209<(x210&x211))|x212);

	if (t52 != 410511U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = 59;
	static uint16_t x215 = 31804U;
	uint16_t x216 = 2U;
	volatile int32_t t53 = 474187673;

	t53 = ((x213<(x214&x215))|x216);

	if (t53 != 2) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x217 = 69U;
	volatile int32_t x219 = INT32_MIN;
	int16_t x220 = INT16_MIN;
	int32_t t54 = -1032747812;

	t54 = ((x217<(x218&x219))|x220);

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x221 = 1931966U;
	uint16_t x222 = 7U;
	int32_t x223 = INT32_MIN;
	volatile uint16_t x224 = UINT16_MAX;
	int32_t t55 = 5;

	t55 = ((x221<(x222&x223))|x224);

	if (t55 != 65535) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x225 = 190515U;
	int8_t x227 = INT8_MIN;
	int64_t x228 = INT64_MAX;
	int64_t t56 = INT64_MAX;

	t56 = ((x225<(x226&x227))|x228);

	if (t56 != INT64_MAX) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x230 = 4U;
	static int64_t x231 = -47117317LL;
	int8_t x232 = -2;
	int32_t t57 = 350;

	t57 = ((x229<(x230&x231))|x232);

	if (t57 != -2) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int8_t x233 = INT8_MAX;
	static int32_t x234 = -1;
	uint32_t x236 = 165125U;
	static uint32_t t58 = 1U;

	t58 = ((x233<(x234&x235))|x236);

	if (t58 != 165125U) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 44U;
	uint64_t x238 = 57285709453028635LLU;
	int32_t x239 = INT32_MIN;
	int8_t x240 = INT8_MIN;

	t59 = ((x237<(x238&x239))|x240);

	if (t59 != -127) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 604475268760LLU;
	volatile uint16_t x242 = UINT16_MAX;
	int8_t x243 = 2;
	int8_t x244 = 2;

	t60 = ((x241<(x242&x243))|x244);

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x245 = UINT32_MAX;
	static int64_t x246 = -1LL;
	volatile uint64_t x248 = 17240135701943LLU;
	volatile uint64_t t61 = 38372902943830710LLU;

	t61 = ((x245<(x246&x247))|x248);

	if (t61 != 17240135701943LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x249 = 10730749U;
	static volatile int8_t x250 = 1;
	static int8_t x251 = -1;
	uint8_t x252 = 18U;
	static int32_t t62 = 0;

	t62 = ((x249<(x250&x251))|x252);

	if (t62 != 18) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x253 = INT16_MAX;
	int32_t x254 = INT32_MIN;
	uint8_t x255 = UINT8_MAX;
	int8_t x256 = INT8_MAX;
	volatile int32_t t63 = -28;

	t63 = ((x253<(x254&x255))|x256);

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint8_t x257 = UINT8_MAX;
	int64_t x259 = INT64_MIN;
	static volatile int32_t x260 = INT32_MIN;
	volatile int32_t t64 = INT32_MIN;

	t64 = ((x257<(x258&x259))|x260);

	if (t64 != INT32_MIN) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x261 = 10LLU;
	int64_t x262 = -31319444472940462LL;
	uint64_t x263 = 252137377546LLU;
	static uint32_t x264 = 3840U;
	static volatile uint32_t t65 = 522442U;

	t65 = ((x261<(x262&x263))|x264);

	if (t65 != 3841U) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x266 = 18781153595114981LLU;
	volatile uint64_t x267 = 132764465740584LLU;

	t66 = ((x265<(x266&x267))|x268);

	if (t66 != INT64_MAX) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x270 = 61LL;
	volatile int8_t x271 = INT8_MIN;
	volatile int32_t x272 = 0;
	int32_t t67 = -61;

	t67 = ((x269<(x270&x271))|x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	uint32_t x274 = UINT32_MAX;
	int32_t t68 = 1;

	t68 = ((x273<(x274&x275))|x276);

	if (t68 != 3093) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MAX;
	int16_t x278 = 10714;
	static uint8_t x279 = 24U;
	volatile int64_t x280 = -18319668668666735LL;

	t69 = ((x277<(x278&x279))|x280);

	if (t69 != -18319668668666735LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x281 = INT64_MAX;
	static int16_t x282 = INT16_MIN;
	volatile int64_t x283 = INT64_MAX;
	int32_t x284 = INT32_MIN;
	int32_t t70 = INT32_MIN;

	t70 = ((x281<(x282&x283))|x284);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	int64_t x287 = INT64_MAX;
	int8_t x288 = INT8_MAX;

	t71 = ((x285<(x286&x287))|x288);

	if (t71 != 127) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -198952489;
	static int16_t x290 = INT16_MIN;
	int8_t x291 = -50;
	uint64_t t72 = 13878458434815LLU;

	t72 = ((x289<(x290&x291))|x292);

	if (t72 != 29893LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x293 = UINT8_MAX;
	static int64_t x294 = INT64_MIN;
	volatile int8_t x295 = -2;
	static int16_t x296 = INT16_MIN;
	static int32_t t73 = -15996172;

	t73 = ((x293<(x294&x295))|x296);

	if (t73 != -32768) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x297 = 476U;
	uint32_t x298 = UINT32_MAX;

	t74 = ((x297<(x298&x299))|x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x302 = 1461491146U;
	int64_t t75 = INT64_MAX;

	t75 = ((x301<(x302&x303))|x304);

	if (t75 != INT64_MAX) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	uint64_t x306 = UINT64_MAX;
	volatile int16_t x307 = INT16_MAX;

	t76 = ((x305<(x306&x307))|x308);

	if (t76 != -5038) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x310 = 250021183374LLU;
	static uint16_t x311 = UINT16_MAX;
	int8_t x312 = -1;
	static volatile int32_t t77 = -3884659;

	t77 = ((x309<(x310&x311))|x312);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x314 = 5652811LL;
	static uint32_t x316 = UINT32_MAX;
	volatile uint32_t t78 = UINT32_MAX;

	t78 = ((x313<(x314&x315))|x316);

	if (t78 != UINT32_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = INT16_MIN;
	volatile int32_t x318 = 218647805;
	uint32_t x319 = 677U;
	volatile uint32_t x320 = 1474876U;

	t79 = ((x317<(x318&x319))|x320);

	if (t79 != 1474876U) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 272U;
	int32_t x322 = -2363673;
	int8_t x323 = -52;
	uint16_t x324 = 4111U;
	static volatile int32_t t80 = 1846671;

	t80 = ((x321<(x322&x323))|x324);

	if (t80 != 4111) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x326 = INT16_MAX;
	int8_t x327 = INT8_MIN;
	int16_t x328 = INT16_MAX;

	t81 = ((x325<(x326&x327))|x328);

	if (t81 != 32767) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x329 = 163625LL;
	int64_t x330 = INT64_MIN;
	static int8_t x331 = INT8_MIN;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t82 = -1;

	t82 = ((x329<(x330&x331))|x332);

	if (t82 != 255) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x333 = INT8_MAX;
	uint32_t x334 = 1474216343U;
	static volatile uint16_t x335 = 115U;
	uint32_t x336 = 175484U;
	uint32_t t83 = 104U;

	t83 = ((x333<(x334&x335))|x336);

	if (t83 != 175484U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = 37629U;
	int64_t x338 = INT64_MIN;
	int32_t x339 = -1;

	t84 = ((x337<(x338&x339))|x340);

	if (t84 != 22567715375607988LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = -1;
	static int8_t x342 = INT8_MIN;
	uint16_t x343 = 0U;
	int8_t x344 = 45;
	static volatile int32_t t85 = 1;

	t85 = ((x341<(x342&x343))|x344);

	if (t85 != 45) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = 1560209980LL;
	int16_t x346 = 1;
	int8_t x347 = -1;
	volatile uint8_t x348 = 3U;
	volatile int32_t t86 = -15;

	t86 = ((x345<(x346&x347))|x348);

	if (t86 != 3) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = INT32_MIN;
	volatile uint16_t x350 = UINT16_MAX;
	volatile int32_t x351 = INT32_MIN;
	int16_t x352 = -2512;

	t87 = ((x349<(x350&x351))|x352);

	if (t87 != -2511) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MIN;
	int32_t x355 = INT32_MAX;
	int8_t x356 = INT8_MIN;

	t88 = ((x353<(x354&x355))|x356);

	if (t88 != -127) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x357 = 6LL;
	int32_t x358 = INT32_MIN;
	int64_t x359 = 29LL;
	int64_t x360 = -1LL;
	static volatile int64_t t89 = -17169083113390LL;

	t89 = ((x357<(x358&x359))|x360);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = INT32_MIN;
	int32_t x363 = -59191;
	static int32_t t90 = -878651;

	t90 = ((x361<(x362&x363))|x364);

	if (t90 != -1) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile int8_t x366 = INT8_MAX;
	int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MIN;
	int64_t t91 = -16780946449LL;

	t91 = ((x365<(x366&x367))|x368);

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x369 = INT32_MIN;
	int32_t x370 = -9623;
	volatile int64_t x371 = INT64_MIN;
	static int16_t x372 = INT16_MIN;
	static int32_t t92 = 571941;

	t92 = ((x369<(x370&x371))|x372);

	if (t92 != -32768) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = INT16_MIN;
	int64_t x374 = INT64_MAX;
	volatile int64_t x375 = -1LL;
	static int32_t x376 = -1;
	volatile int32_t t93 = 7838478;

	t93 = ((x373<(x374&x375))|x376);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x377 = INT64_MIN;
	int16_t x378 = -6;
	int8_t x379 = -31;
	volatile int32_t x380 = INT32_MIN;
	volatile int32_t t94 = -245;

	t94 = ((x377<(x378&x379))|x380);

	if (t94 != -2147483647) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x381 = INT64_MAX;
	volatile int64_t x383 = -1LL;
	int64_t x384 = -1LL;
	static int64_t t95 = -25868LL;

	t95 = ((x381<(x382&x383))|x384);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x385 = 3;
	int16_t x386 = INT16_MAX;
	int8_t x387 = INT8_MIN;
	volatile int8_t x388 = INT8_MIN;
	int32_t t96 = 78700781;

	t96 = ((x385<(x386&x387))|x388);

	if (t96 != -127) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x390 = -18;
	int16_t x391 = INT16_MIN;
	uint32_t x392 = 24226997U;
	uint32_t t97 = 14051785U;

	t97 = ((x389<(x390&x391))|x392);

	if (t97 != 24226997U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x394 = INT8_MIN;
	volatile int64_t x395 = 39679077398324LL;
	volatile int64_t x396 = INT64_MIN;
	volatile int64_t t98 = -25708368077836LL;

	t98 = ((x393<(x394&x395))|x396);

	if (t98 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x397 = -41LL;
	static int64_t x398 = INT64_MIN;
	static int16_t x399 = -1;
	static int16_t x400 = 1;
	static int32_t t99 = 1;

	t99 = ((x397<(x398&x399))|x400);

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

