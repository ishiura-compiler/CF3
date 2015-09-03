#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = UINT8_MAX;
static int64_t x8 = INT64_MAX;
int64_t x15 = -7178630952371LL;
static volatile int32_t t3 = -47094324;
uint8_t x19 = 1U;
volatile int8_t x39 = -11;
int16_t x43 = 0;
uint64_t x48 = 71LLU;
int32_t x51 = 101;
static int64_t x52 = INT64_MIN;
static int32_t t12 = -479154;
int64_t x59 = INT64_MIN;
int32_t x67 = 316016;
int32_t t16 = 89;
volatile int8_t x81 = INT8_MIN;
volatile int64_t x82 = INT64_MAX;
int64_t x83 = -120232086LL;
volatile int32_t x84 = -8;
int64_t x85 = -3337111LL;
int32_t x88 = INT32_MAX;
int32_t t21 = 115677225;
int16_t x89 = 0;
volatile uint64_t x90 = UINT64_MAX;
int32_t x94 = 557;
int8_t x100 = INT8_MIN;
volatile int16_t x105 = INT16_MIN;
int32_t t27 = -36;
volatile uint32_t x114 = 36843U;
static uint16_t x128 = UINT16_MAX;
uint16_t x133 = 52U;
static int8_t x134 = -1;
int16_t x135 = INT16_MIN;
static int16_t x141 = -224;
static volatile int32_t x142 = INT32_MAX;
uint32_t x145 = UINT32_MAX;
static int16_t x150 = -1;
int32_t t38 = -125;
static uint8_t x157 = 0U;
volatile int32_t t39 = 645292;
volatile int64_t x161 = -1LL;
int32_t t43 = 1;
volatile int32_t x178 = INT32_MAX;
int64_t x183 = INT64_MAX;
volatile uint16_t x188 = 39U;
uint64_t x204 = UINT64_MAX;
volatile int64_t x208 = -1347373222LL;
static volatile uint64_t x209 = UINT64_MAX;
uint32_t x219 = UINT32_MAX;
int8_t x238 = -2;
int8_t x244 = INT8_MIN;
volatile int32_t t61 = -238260;
int32_t t63 = 1;
static int8_t x258 = -36;
int32_t x262 = 41;
int8_t x263 = INT8_MIN;
int16_t x268 = -1;
int32_t t67 = -26153524;
static int16_t x278 = 1740;
uint64_t x285 = 379264LLU;
int8_t x290 = -3;
static uint64_t x294 = 113339209897LLU;
volatile int32_t t73 = 29941636;
uint64_t x301 = 25177758840987868LLU;
int32_t x308 = INT32_MAX;
int32_t t76 = -4789;
int16_t x310 = INT16_MIN;
volatile int32_t t77 = -1;
uint16_t x318 = 2U;
uint32_t x319 = UINT32_MAX;
int16_t x320 = -1;
int32_t t79 = 0;
uint32_t x326 = UINT32_MAX;
int32_t x328 = -1;
int32_t x330 = -1;
int8_t x331 = INT8_MIN;
static uint16_t x332 = UINT16_MAX;
uint8_t x349 = UINT8_MAX;
static volatile int64_t x350 = -87192642LL;
uint16_t x353 = UINT16_MAX;
int64_t x355 = -1LL;
int32_t t88 = -3;
int8_t x366 = INT8_MIN;
int16_t x368 = INT16_MAX;
static int32_t x371 = INT32_MIN;
volatile int8_t x375 = INT8_MIN;
volatile uint8_t x381 = 3U;
int64_t x382 = -160710836092171296LL;
uint8_t x392 = 58U;
int8_t x396 = -35;


void f0(void) {
	uint16_t x1 = UINT16_MAX;
	int16_t x2 = INT16_MIN;
	uint8_t x4 = 0U;
	volatile int32_t t0 = -33131;

	t0 = ((x1<=(x2<x3))<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 15810;
	int32_t x6 = 253835921;
	static int64_t x7 = -1794086603607041LL;
	static volatile int32_t t1 = -1277;

	t1 = ((x5<=(x6<x7))<x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = -1;
	int16_t x10 = -384;
	int64_t x11 = -1LL;
	int64_t x12 = -1LL;
	int32_t t2 = -3786701;

	t2 = ((x9<=(x10<x11))<x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 1U;
	int16_t x14 = INT16_MIN;
	int64_t x16 = 34958840692725967LL;

	t3 = ((x13<=(x14<x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint8_t x17 = 3U;
	uint8_t x18 = 40U;
	volatile uint32_t x20 = 54673034U;
	volatile int32_t t4 = 16304306;

	t4 = ((x17<=(x18<x19))<x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x21 = INT8_MIN;
	int8_t x22 = INT8_MIN;
	uint32_t x23 = 115082835U;
	int8_t x24 = INT8_MAX;
	volatile int32_t t5 = -29380;

	t5 = ((x21<=(x22<x23))<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	volatile uint16_t x26 = UINT16_MAX;
	int32_t x27 = 139111700;
	int32_t x28 = INT32_MAX;
	volatile int32_t t6 = 14;

	t6 = ((x25<=(x26<x27))<x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = -3;
	volatile uint16_t x30 = 15574U;
	volatile int32_t x31 = -2;
	int32_t x32 = 15002;
	int32_t t7 = -242386306;

	t7 = ((x29<=(x30<x31))<x32);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = INT8_MIN;
	uint16_t x34 = 24U;
	static int16_t x35 = 0;
	uint32_t x36 = UINT32_MAX;
	int32_t t8 = 12897629;

	t8 = ((x33<=(x34<x35))<x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = -126584794;
	volatile int32_t x38 = -1;
	volatile int32_t x40 = 20;
	static int32_t t9 = -114879246;

	t9 = ((x37<=(x38<x39))<x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -112680LL;
	int16_t x42 = INT16_MIN;
	uint8_t x44 = UINT8_MAX;
	static int32_t t10 = 3679449;

	t10 = ((x41<=(x42<x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MIN;
	static uint8_t x46 = UINT8_MAX;
	static int64_t x47 = INT64_MAX;
	static volatile int32_t t11 = 101045483;

	t11 = ((x45<=(x46<x47))<x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x49 = UINT64_MAX;
	int8_t x50 = INT8_MIN;

	t12 = ((x49<=(x50<x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int16_t x53 = INT16_MIN;
	int16_t x54 = 1;
	static uint8_t x55 = 6U;
	int8_t x56 = 0;
	volatile int32_t t13 = -1314;

	t13 = ((x53<=(x54<x55))<x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x57 = 2678LL;
	uint32_t x58 = UINT32_MAX;
	static uint32_t x60 = UINT32_MAX;
	volatile int32_t t14 = 1481;

	t14 = ((x57<=(x58<x59))<x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	int32_t x62 = INT32_MIN;
	int8_t x63 = INT8_MAX;
	uint16_t x64 = 24U;
	static volatile int32_t t15 = 139;

	t15 = ((x61<=(x62<x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MAX;
	uint8_t x66 = 4U;
	int8_t x68 = -1;

	t16 = ((x65<=(x66<x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x69 = INT32_MIN;
	int32_t x70 = -1;
	int16_t x71 = INT16_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t17 = -299435;

	t17 = ((x69<=(x70<x71))<x72);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = INT8_MIN;
	static int64_t x74 = -1LL;
	static int64_t x75 = -1803LL;
	int64_t x76 = -1LL;
	volatile int32_t t18 = -126167;

	t18 = ((x73<=(x74<x75))<x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MIN;
	int64_t x78 = INT64_MAX;
	int8_t x79 = -1;
	static int64_t x80 = -458927860966056LL;
	int32_t t19 = -44;

	t19 = ((x77<=(x78<x79))<x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int32_t t20 = -96;

	t20 = ((x81<=(x82<x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = -663389;
	int16_t x87 = INT16_MIN;

	t21 = ((x85<=(x86<x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x91 = -3;
	int32_t x92 = INT32_MIN;
	int32_t t22 = 407943;

	t22 = ((x89<=(x90<x91))<x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint64_t x93 = UINT64_MAX;
	uint16_t x95 = 7U;
	volatile int64_t x96 = -1LL;
	volatile int32_t t23 = 44;

	t23 = ((x93<=(x94<x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = UINT64_MAX;
	uint8_t x98 = 1U;
	uint16_t x99 = 254U;
	int32_t t24 = 211;

	t24 = ((x97<=(x98<x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x101 = 594U;
	volatile uint16_t x102 = UINT16_MAX;
	int32_t x103 = -704;
	uint32_t x104 = 6062196U;
	volatile int32_t t25 = -74;

	t25 = ((x101<=(x102<x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x106 = -1;
	static int16_t x107 = 8030;
	uint8_t x108 = 5U;
	static volatile int32_t t26 = 11851654;

	t26 = ((x105<=(x106<x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile int32_t x109 = INT32_MIN;
	uint8_t x110 = 3U;
	volatile uint8_t x111 = 0U;
	uint16_t x112 = UINT16_MAX;

	t27 = ((x109<=(x110<x111))<x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	static int32_t x115 = 25;
	uint64_t x116 = 92121572442747LLU;
	static int32_t t28 = -27203844;

	t28 = ((x113<=(x114<x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	int32_t x118 = -1;
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = 2876977;
	volatile int32_t t29 = 99692449;

	t29 = ((x117<=(x118<x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x121 = -90017;
	int32_t x122 = INT32_MIN;
	int32_t x123 = INT32_MIN;
	uint16_t x124 = 6171U;
	int32_t t30 = 145;

	t30 = ((x121<=(x122<x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint8_t x125 = UINT8_MAX;
	static uint8_t x126 = UINT8_MAX;
	int64_t x127 = INT64_MAX;
	static int32_t t31 = 597102;

	t31 = ((x125<=(x126<x127))<x128);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = 291U;
	int8_t x130 = INT8_MAX;
	int64_t x131 = INT64_MIN;
	int8_t x132 = INT8_MIN;
	volatile int32_t t32 = 84;

	t32 = ((x129<=(x130<x131))<x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x136 = 20;
	int32_t t33 = 5856;

	t33 = ((x133<=(x134<x135))<x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x137 = -50780752;
	int16_t x138 = INT16_MAX;
	volatile uint8_t x139 = UINT8_MAX;
	int16_t x140 = -60;
	volatile int32_t t34 = 1639751;

	t34 = ((x137<=(x138<x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int64_t x143 = -1LL;
	int64_t x144 = INT64_MAX;
	int32_t t35 = -558;

	t35 = ((x141<=(x142<x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = INT16_MIN;
	volatile int16_t x147 = INT16_MIN;
	int16_t x148 = -1;
	int32_t t36 = 56339633;

	t36 = ((x145<=(x146<x147))<x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = -128887637;
	int8_t x151 = INT8_MIN;
	static int8_t x152 = -1;
	int32_t t37 = -127597;

	t37 = ((x149<=(x150<x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x153 = INT64_MAX;
	uint16_t x154 = 7U;
	volatile int64_t x155 = -1LL;
	static uint64_t x156 = 2871797827566940LLU;

	t38 = ((x153<=(x154<x155))<x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x158 = INT16_MIN;
	static int64_t x159 = INT64_MAX;
	volatile uint32_t x160 = UINT32_MAX;

	t39 = ((x157<=(x158<x159))<x160);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x162 = UINT16_MAX;
	volatile int32_t x163 = 301;
	uint16_t x164 = 14U;
	volatile int32_t t40 = -229;

	t40 = ((x161<=(x162<x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint16_t x165 = UINT16_MAX;
	int16_t x166 = INT16_MAX;
	uint16_t x167 = UINT16_MAX;
	volatile int64_t x168 = -1LL;
	int32_t t41 = -14;

	t41 = ((x165<=(x166<x167))<x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = INT8_MIN;
	int32_t x170 = INT32_MAX;
	int64_t x171 = INT64_MAX;
	static volatile int64_t x172 = -1LL;
	int32_t t42 = -51244609;

	t42 = ((x169<=(x170<x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x173 = -1;
	int32_t x174 = INT32_MIN;
	int8_t x175 = INT8_MIN;
	volatile int8_t x176 = -7;

	t43 = ((x173<=(x174<x175))<x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MAX;
	static int16_t x179 = 4;
	int64_t x180 = INT64_MIN;
	static volatile int32_t t44 = 5;

	t44 = ((x177<=(x178<x179))<x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = INT8_MIN;
	static int32_t x182 = -1;
	static int8_t x184 = -42;
	int32_t t45 = 132077127;

	t45 = ((x181<=(x182<x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = 10734630787LL;
	uint64_t x186 = 380LLU;
	uint64_t x187 = 1154LLU;
	volatile int32_t t46 = -10816672;

	t46 = ((x185<=(x186<x187))<x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MIN;
	int64_t x190 = 1381321589LL;
	uint8_t x191 = 9U;
	volatile int64_t x192 = INT64_MIN;
	static int32_t t47 = -495;

	t47 = ((x189<=(x190<x191))<x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static volatile uint32_t x193 = 3U;
	int8_t x194 = -1;
	int32_t x195 = INT32_MAX;
	int16_t x196 = -1;
	volatile int32_t t48 = -2;

	t48 = ((x193<=(x194<x195))<x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x197 = UINT32_MAX;
	static int8_t x198 = INT8_MIN;
	int32_t x199 = 134631;
	volatile int8_t x200 = -1;
	int32_t t49 = 2859235;

	t49 = ((x197<=(x198<x199))<x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	int16_t x202 = -1;
	int16_t x203 = INT16_MIN;
	int32_t t50 = -52601780;

	t50 = ((x201<=(x202<x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = -1;
	static uint64_t x206 = UINT64_MAX;
	uint16_t x207 = 8U;
	static volatile int32_t t51 = -5;

	t51 = ((x205<=(x206<x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x210 = 494205543772416657LLU;
	uint64_t x211 = 2103050768711927LLU;
	static uint8_t x212 = 93U;
	volatile int32_t t52 = 24764;

	t52 = ((x209<=(x210<x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	uint16_t x214 = 11225U;
	volatile int64_t x215 = 1766261513LL;
	int16_t x216 = -1;
	int32_t t53 = 683442313;

	t53 = ((x213<=(x214<x215))<x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MAX;
	static int64_t x218 = -1LL;
	int16_t x220 = INT16_MIN;
	static volatile int32_t t54 = 1978;

	t54 = ((x217<=(x218<x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = UINT8_MAX;
	int8_t x222 = -1;
	uint8_t x223 = 26U;
	int8_t x224 = INT8_MIN;
	int32_t t55 = 8220401;

	t55 = ((x221<=(x222<x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	volatile int64_t x226 = INT64_MAX;
	volatile uint16_t x227 = UINT16_MAX;
	int16_t x228 = INT16_MAX;
	volatile int32_t t56 = -164;

	t56 = ((x225<=(x226<x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x229 = 16U;
	int16_t x230 = INT16_MIN;
	uint8_t x231 = UINT8_MAX;
	int32_t x232 = INT32_MAX;
	int32_t t57 = 20;

	t57 = ((x229<=(x230<x231))<x232);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x233 = INT32_MAX;
	int8_t x234 = -5;
	static int8_t x235 = INT8_MAX;
	uint16_t x236 = 407U;
	int32_t t58 = 5321988;

	t58 = ((x233<=(x234<x235))<x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x237 = UINT64_MAX;
	uint64_t x239 = 3831581323LLU;
	int8_t x240 = INT8_MIN;
	static volatile int32_t t59 = -1;

	t59 = ((x237<=(x238<x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = INT16_MIN;
	int16_t x242 = INT16_MIN;
	int32_t x243 = INT32_MIN;
	int32_t t60 = -678966;

	t60 = ((x241<=(x242<x243))<x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	int64_t x246 = -3632480870939LL;
	int8_t x247 = -2;
	uint16_t x248 = 2U;

	t61 = ((x245<=(x246<x247))<x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x249 = INT8_MIN;
	uint8_t x250 = 3U;
	int8_t x251 = -1;
	int16_t x252 = INT16_MIN;
	int32_t t62 = -2850575;

	t62 = ((x249<=(x250<x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int8_t x254 = -1;
	int8_t x255 = -1;
	volatile int64_t x256 = INT64_MIN;

	t63 = ((x253<=(x254<x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MAX;
	int32_t x259 = INT32_MIN;
	static int32_t x260 = INT32_MAX;
	int32_t t64 = -1480672;

	t64 = ((x257<=(x258<x259))<x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = INT8_MIN;
	uint64_t x264 = 5567LLU;
	volatile int32_t t65 = -50;

	t65 = ((x261<=(x262<x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = 1010763U;
	static uint64_t x266 = UINT64_MAX;
	int64_t x267 = -572332623011627339LL;
	volatile int32_t t66 = -11358;

	t66 = ((x265<=(x266<x267))<x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MIN;
	int32_t x270 = INT32_MIN;
	int8_t x271 = INT8_MIN;
	uint16_t x272 = 392U;

	t67 = ((x269<=(x270<x271))<x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	uint16_t x274 = 21717U;
	static int32_t x275 = INT32_MIN;
	uint16_t x276 = UINT16_MAX;
	static int32_t t68 = -3083;

	t68 = ((x273<=(x274<x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = 2516101;
	int32_t x279 = -1;
	int32_t x280 = -1;
	volatile int32_t t69 = -5719;

	t69 = ((x277<=(x278<x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x281 = 15U;
	int64_t x282 = -1LL;
	int64_t x283 = INT64_MAX;
	uint16_t x284 = 4U;
	int32_t t70 = 1;

	t70 = ((x281<=(x282<x283))<x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x286 = -778;
	int16_t x287 = INT16_MIN;
	int16_t x288 = -737;
	static volatile int32_t t71 = 2872;

	t71 = ((x285<=(x286<x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x289 = -8372;
	int64_t x291 = INT64_MIN;
	static int8_t x292 = INT8_MAX;
	int32_t t72 = -278;

	t72 = ((x289<=(x290<x291))<x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = -288;
	volatile int16_t x295 = -1;
	int64_t x296 = INT64_MAX;

	t73 = ((x293<=(x294<x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int64_t x297 = INT64_MIN;
	static int32_t x298 = INT32_MIN;
	static int16_t x299 = INT16_MIN;
	uint64_t x300 = 28LLU;
	int32_t t74 = -437;

	t74 = ((x297<=(x298<x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = -1;
	int64_t x303 = INT64_MIN;
	static uint32_t x304 = 684816710U;
	volatile int32_t t75 = 11290;

	t75 = ((x301<=(x302<x303))<x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x305 = 5694;
	uint32_t x306 = 1357373U;
	uint32_t x307 = 13U;

	t76 = ((x305<=(x306<x307))<x308);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x309 = UINT8_MAX;
	volatile uint64_t x311 = 1959603LLU;
	int8_t x312 = -1;

	t77 = ((x309<=(x310<x311))<x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 36546515264139510LLU;
	int64_t x314 = -1LL;
	static int32_t x315 = 4;
	static int8_t x316 = INT8_MIN;
	int32_t t78 = -375;

	t78 = ((x313<=(x314<x315))<x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x317 = INT16_MAX;

	t79 = ((x317<=(x318<x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x321 = 0U;
	uint16_t x322 = 30U;
	uint8_t x323 = 77U;
	int64_t x324 = -1LL;
	int32_t t80 = 2531837;

	t80 = ((x321<=(x322<x323))<x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static uint16_t x325 = 28616U;
	int16_t x327 = -1;
	static int32_t t81 = -775915002;

	t81 = ((x325<=(x326<x327))<x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint16_t x329 = 39U;
	volatile int32_t t82 = 183;

	t82 = ((x329<=(x330<x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x333 = 126U;
	int16_t x334 = INT16_MIN;
	volatile uint16_t x335 = 15U;
	int16_t x336 = INT16_MIN;
	volatile int32_t t83 = 178;

	t83 = ((x333<=(x334<x335))<x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x337 = INT64_MIN;
	int32_t x338 = -1;
	int64_t x339 = INT64_MAX;
	int16_t x340 = INT16_MAX;
	volatile int32_t t84 = 2825;

	t84 = ((x337<=(x338<x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = -1LL;
	int32_t x342 = INT32_MAX;
	static uint32_t x343 = UINT32_MAX;
	volatile int64_t x344 = -1LL;
	volatile int32_t t85 = 339;

	t85 = ((x341<=(x342<x343))<x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x345 = 132068997U;
	volatile uint32_t x346 = UINT32_MAX;
	int8_t x347 = INT8_MIN;
	int64_t x348 = 32483LL;
	static int32_t t86 = -50377271;

	t86 = ((x345<=(x346<x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x351 = INT32_MIN;
	int16_t x352 = INT16_MIN;
	int32_t t87 = 244;

	t87 = ((x349<=(x350<x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x354 = 148;
	uint16_t x356 = UINT16_MAX;

	t88 = ((x353<=(x354<x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int64_t x357 = -1LL;
	int64_t x358 = -1LL;
	uint8_t x359 = 1U;
	int8_t x360 = -1;
	int32_t t89 = 1;

	t89 = ((x357<=(x358<x359))<x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = INT8_MAX;
	int32_t x362 = -1;
	int8_t x363 = INT8_MIN;
	static int64_t x364 = -1LL;
	int32_t t90 = 478;

	t90 = ((x361<=(x362<x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = 30128263614LL;
	int64_t x367 = 1LL;
	static int32_t t91 = 1939;

	t91 = ((x365<=(x366<x367))<x368);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	static uint32_t x370 = 1188481U;
	int16_t x372 = 296;
	int32_t t92 = -15123;

	t92 = ((x369<=(x370<x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x373 = -15;
	int16_t x374 = -89;
	int32_t x376 = 8;
	volatile int32_t t93 = -44665;

	t93 = ((x373<=(x374<x375))<x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = UINT32_MAX;
	volatile int16_t x378 = -1;
	int8_t x379 = INT8_MIN;
	uint64_t x380 = 7700316LLU;
	int32_t t94 = 1;

	t94 = ((x377<=(x378<x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x383 = -1;
	static uint16_t x384 = 12440U;
	int32_t t95 = -3888;

	t95 = ((x381<=(x382<x383))<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	int16_t x386 = INT16_MIN;
	static uint32_t x387 = 1397U;
	uint8_t x388 = 19U;
	static volatile int32_t t96 = 783075539;

	t96 = ((x385<=(x386<x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint32_t x389 = 515923U;
	uint16_t x390 = 1797U;
	volatile uint16_t x391 = 2U;
	volatile int32_t t97 = -10010;

	t97 = ((x389<=(x390<x391))<x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint32_t x393 = 124U;
	volatile int32_t x394 = INT32_MAX;
	int32_t x395 = 22895;
	static volatile int32_t t98 = 30286;

	t98 = ((x393<=(x394<x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = 1;
	int8_t x398 = 7;
	volatile uint32_t x399 = 109194U;
	static int32_t x400 = INT32_MAX;
	int32_t t99 = -13622179;

	t99 = ((x397<=(x398<x399))<x400);

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

