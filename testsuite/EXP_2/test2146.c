#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x5 = 1;
volatile int64_t t1 = 170577384LL;
int8_t x11 = -18;
int8_t x40 = -28;
volatile int16_t x44 = INT16_MIN;
static int16_t x47 = INT16_MAX;
int64_t x51 = INT64_MAX;
int32_t t11 = INT32_MIN;
int32_t x66 = -435920;
static volatile int32_t t15 = -5525951;
volatile int32_t x69 = 676397705;
volatile uint32_t t16 = UINT32_MAX;
volatile int64_t x76 = 209LL;
int64_t x78 = INT64_MIN;
uint64_t x84 = UINT64_MAX;
static int8_t x85 = INT8_MIN;
uint8_t x94 = UINT8_MAX;
volatile int32_t t22 = 27;
volatile int64_t x104 = -14558404670LL;
volatile uint64_t x105 = UINT64_MAX;
volatile int8_t x112 = -11;
int8_t x117 = INT8_MIN;
static int64_t x123 = 288LL;
int64_t x135 = -1LL;
uint8_t x137 = UINT8_MAX;
int64_t x147 = -1LL;
int64_t x151 = 19LL;
int16_t x154 = INT16_MAX;
int64_t x156 = 9545792LL;
int64_t t37 = -16135099789645LL;
volatile int8_t x171 = 1;
int32_t x174 = -63;
int16_t x176 = -1;
uint32_t x180 = 7U;
volatile int8_t x184 = INT8_MAX;
volatile int16_t x185 = INT16_MIN;
uint32_t x187 = UINT32_MAX;
static uint64_t x194 = UINT64_MAX;
uint64_t x197 = 30LLU;
int32_t x198 = INT32_MAX;
int8_t x203 = 5;
int64_t x204 = INT64_MIN;
int16_t x206 = INT16_MIN;
int8_t x208 = INT8_MIN;
volatile uint16_t x214 = UINT16_MAX;
int8_t x220 = INT8_MAX;
int16_t x222 = -3265;
uint16_t x224 = 31067U;
int64_t x230 = INT64_MIN;
int8_t x232 = -13;
static volatile int16_t x233 = -1;
int8_t x236 = INT8_MIN;
int32_t x247 = INT32_MIN;
uint16_t x251 = UINT16_MAX;
static uint32_t x257 = 81582069U;
static int16_t x258 = INT16_MAX;
static int8_t x259 = -1;
static volatile int32_t t64 = 50883;
volatile uint64_t t65 = UINT64_MAX;
uint64_t x278 = UINT64_MAX;
int32_t t69 = -6330567;
volatile int16_t x297 = -21;
int16_t x301 = INT16_MIN;
volatile uint64_t x302 = UINT64_MAX;
uint16_t x307 = 1352U;
int64_t x315 = -1LL;
int8_t x317 = -1;
static int16_t x322 = -1;
uint16_t x324 = UINT16_MAX;
uint64_t x326 = 15196981LLU;
int32_t t79 = -14;
uint8_t x338 = UINT8_MAX;
int32_t t83 = -2;
static int32_t x346 = -2038;
int8_t x355 = 32;
int32_t t86 = -99470;
int32_t t87 = -4;
int16_t x364 = INT16_MIN;
int32_t x375 = INT32_MIN;
static volatile int32_t t91 = -616298403;
static uint32_t x379 = 78739268U;
int64_t x382 = INT64_MIN;
volatile uint64_t t95 = 271284939249530LLU;
uint16_t x401 = 4U;
uint8_t x405 = UINT8_MAX;
uint32_t x406 = UINT32_MAX;


void f0(void) {
	static int32_t x1 = INT32_MAX;
	int64_t x2 = 14799380LL;
	int32_t x3 = INT32_MIN;
	int64_t x4 = 4LL;
	volatile int64_t t0 = -1047LL;

	t0 = ((x1<=(x2^x3))+x4);

	if (t0 != 4LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MIN;
	volatile uint16_t x7 = 265U;
	int64_t x8 = 53282190927215925LL;

	t1 = ((x5<=(x6^x7))+x8);

	if (t1 != 53282190927215925LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MAX;
	static int32_t x10 = INT32_MAX;
	int64_t x12 = INT64_MIN;
	volatile int64_t t2 = INT64_MIN;

	t2 = ((x9<=(x10^x11))+x12);

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = -1;
	int32_t x14 = INT32_MIN;
	int32_t x15 = -790;
	uint8_t x16 = 37U;
	int32_t t3 = -1224525;

	t3 = ((x13<=(x14^x15))+x16);

	if (t3 != 38) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = INT32_MIN;
	int32_t x18 = -1;
	int16_t x19 = -1;
	static volatile int32_t x20 = INT32_MIN;
	int32_t t4 = -17;

	t4 = ((x17<=(x18^x19))+x20);

	if (t4 != -2147483647) { NG(); } else { ; }
	
}

void f5(void) {
	static int32_t x25 = -1;
	int8_t x26 = 29;
	int8_t x27 = -1;
	int64_t x28 = -1LL;
	int64_t t5 = 0LL;

	t5 = ((x25<=(x26^x27))+x28);

	if (t5 != -1LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MAX;
	int32_t x30 = -1;
	uint16_t x31 = UINT16_MAX;
	int8_t x32 = -57;
	volatile int32_t t6 = 0;

	t6 = ((x29<=(x30^x31))+x32);

	if (t6 != -57) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x33 = 1LL;
	uint32_t x34 = UINT32_MAX;
	uint64_t x35 = UINT64_MAX;
	int8_t x36 = 1;
	int32_t t7 = 2167;

	t7 = ((x33<=(x34^x35))+x36);

	if (t7 != 2) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x37 = 13947248927585LLU;
	volatile uint32_t x38 = UINT32_MAX;
	uint16_t x39 = 948U;
	int32_t t8 = -9898342;

	t8 = ((x37<=(x38^x39))+x40);

	if (t8 != -28) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x41 = -816022636984LL;
	volatile uint16_t x42 = UINT16_MAX;
	int32_t x43 = INT32_MIN;
	volatile int32_t t9 = 537824;

	t9 = ((x41<=(x42^x43))+x44);

	if (t9 != -32767) { NG(); } else { ; }
	
}

void f10(void) {
	uint32_t x45 = 19527U;
	static volatile uint16_t x46 = UINT16_MAX;
	volatile int64_t x48 = -1LL;
	int64_t t10 = -551755998621LL;

	t10 = ((x45<=(x46^x47))+x48);

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 1U;
	int32_t x50 = INT32_MIN;
	int32_t x52 = INT32_MIN;

	t11 = ((x49<=(x50^x51))+x52);

	if (t11 != INT32_MIN) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x53 = INT64_MIN;
	int8_t x54 = -4;
	uint16_t x55 = 10957U;
	volatile int32_t x56 = 1;
	int32_t t12 = -4385;

	t12 = ((x53<=(x54^x55))+x56);

	if (t12 != 2) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = INT8_MAX;
	static volatile int16_t x58 = INT16_MAX;
	static int16_t x59 = INT16_MIN;
	static int32_t x60 = -1;
	volatile int32_t t13 = -126;

	t13 = ((x57<=(x58^x59))+x60);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x61 = 1186907778126725019LLU;
	int64_t x62 = -123704LL;
	int16_t x63 = INT16_MIN;
	static uint64_t x64 = UINT64_MAX;
	volatile uint64_t t14 = UINT64_MAX;

	t14 = ((x61<=(x62^x63))+x64);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x65 = 22010U;
	int64_t x67 = -15186831LL;
	static int32_t x68 = INT32_MIN;

	t15 = ((x65<=(x66^x67))+x68);

	if (t15 != -2147483647) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x70 = INT64_MIN;
	uint32_t x71 = UINT32_MAX;
	uint32_t x72 = UINT32_MAX;

	t16 = ((x69<=(x70^x71))+x72);

	if (t16 != UINT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x73 = 3106U;
	int64_t x74 = 4093553483652261141LL;
	static int32_t x75 = INT32_MIN;
	int64_t t17 = 186054447828LL;

	t17 = ((x73<=(x74^x75))+x76);

	if (t17 != 209LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x77 = -246528;
	uint16_t x79 = 0U;
	static volatile int8_t x80 = INT8_MIN;
	int32_t t18 = -27664;

	t18 = ((x77<=(x78^x79))+x80);

	if (t18 != -128) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x81 = UINT8_MAX;
	int16_t x82 = INT16_MAX;
	volatile uint64_t x83 = UINT64_MAX;
	volatile uint64_t t19 = 32LLU;

	t19 = ((x81<=(x82^x83))+x84);

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static uint64_t x86 = 8119658LLU;
	int8_t x87 = INT8_MAX;
	static uint32_t x88 = UINT32_MAX;
	volatile uint32_t t20 = UINT32_MAX;

	t20 = ((x85<=(x86^x87))+x88);

	if (t20 != UINT32_MAX) { NG(); } else { ; }
	
}

void f21(void) {
	static int16_t x89 = INT16_MIN;
	volatile int16_t x90 = -246;
	int16_t x91 = INT16_MAX;
	uint64_t x92 = 3354035LLU;
	static volatile uint64_t t21 = 254731LLU;

	t21 = ((x89<=(x90^x91))+x92);

	if (t21 != 3354036LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x93 = 17178U;
	uint8_t x95 = UINT8_MAX;
	static int32_t x96 = -1;

	t22 = ((x93<=(x94^x95))+x96);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = 986LL;
	static uint64_t x98 = 3772LLU;
	volatile uint16_t x99 = 3U;
	static volatile uint8_t x100 = 3U;
	static int32_t t23 = -29986;

	t23 = ((x97<=(x98^x99))+x100);

	if (t23 != 4) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x101 = 1139U;
	int16_t x102 = -1;
	int64_t x103 = -1LL;
	volatile int64_t t24 = 10110902136LL;

	t24 = ((x101<=(x102^x103))+x104);

	if (t24 != -14558404670LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x106 = UINT8_MAX;
	uint16_t x107 = 111U;
	int16_t x108 = INT16_MIN;
	volatile int32_t t25 = -24;

	t25 = ((x105<=(x106^x107))+x108);

	if (t25 != -32768) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x109 = INT16_MIN;
	uint32_t x110 = 958515U;
	int64_t x111 = INT64_MAX;
	volatile int32_t t26 = -15396;

	t26 = ((x109<=(x110^x111))+x112);

	if (t26 != -10) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x113 = 63LL;
	int32_t x114 = INT32_MAX;
	int8_t x115 = 4;
	int32_t x116 = -1;
	volatile int32_t t27 = 179143;

	t27 = ((x113<=(x114^x115))+x116);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x118 = INT64_MIN;
	uint16_t x119 = 11545U;
	uint64_t x120 = UINT64_MAX;
	static volatile uint64_t t28 = UINT64_MAX;

	t28 = ((x117<=(x118^x119))+x120);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = -15914785108105483LL;
	int8_t x122 = INT8_MIN;
	volatile int32_t x124 = INT32_MIN;
	volatile int32_t t29 = 587953437;

	t29 = ((x121<=(x122^x123))+x124);

	if (t29 != -2147483647) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x125 = INT64_MAX;
	volatile int16_t x126 = INT16_MAX;
	static int8_t x127 = -1;
	int16_t x128 = INT16_MIN;
	int32_t t30 = 51043363;

	t30 = ((x125<=(x126^x127))+x128);

	if (t30 != -32768) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x129 = UINT16_MAX;
	static int16_t x130 = -7;
	uint8_t x131 = UINT8_MAX;
	int8_t x132 = INT8_MIN;
	int32_t t31 = -90;

	t31 = ((x129<=(x130^x131))+x132);

	if (t31 != -128) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = UINT8_MAX;
	static int16_t x134 = INT16_MAX;
	int32_t x136 = 5638593;
	int32_t t32 = -10;

	t32 = ((x133<=(x134^x135))+x136);

	if (t32 != 5638593) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x138 = 0;
	uint8_t x139 = 0U;
	int32_t x140 = 1878;
	volatile int32_t t33 = -121561;

	t33 = ((x137<=(x138^x139))+x140);

	if (t33 != 1878) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = INT64_MAX;
	uint16_t x142 = 235U;
	static int16_t x143 = -1;
	int8_t x144 = -26;
	volatile int32_t t34 = -190;

	t34 = ((x141<=(x142^x143))+x144);

	if (t34 != -26) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x145 = 5;
	int16_t x146 = INT16_MIN;
	int8_t x148 = 2;
	int32_t t35 = -18;

	t35 = ((x145<=(x146^x147))+x148);

	if (t35 != 3) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	uint64_t x150 = 1LLU;
	int32_t x152 = 6;
	volatile int32_t t36 = 435376739;

	t36 = ((x149<=(x150^x151))+x152);

	if (t36 != 6) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x153 = 13;
	uint64_t x155 = 404LLU;

	t37 = ((x153<=(x154^x155))+x156);

	if (t37 != 9545793LL) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x157 = -1;
	int64_t x158 = -3LL;
	uint16_t x159 = 0U;
	int32_t x160 = 1;
	int32_t t38 = 3806311;

	t38 = ((x157<=(x158^x159))+x160);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x161 = UINT8_MAX;
	int32_t x162 = INT32_MIN;
	volatile uint16_t x163 = UINT16_MAX;
	static uint64_t x164 = 1939673005183473037LLU;
	uint64_t t39 = 767601514LLU;

	t39 = ((x161<=(x162^x163))+x164);

	if (t39 != 1939673005183473037LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x165 = 840602498004794LLU;
	int8_t x166 = INT8_MIN;
	uint32_t x167 = 10682U;
	uint8_t x168 = UINT8_MAX;
	int32_t t40 = -6;

	t40 = ((x165<=(x166^x167))+x168);

	if (t40 != 255) { NG(); } else { ; }
	
}

void f41(void) {
	volatile uint64_t x169 = 17376555951296LLU;
	int32_t x170 = INT32_MAX;
	uint32_t x172 = UINT32_MAX;
	volatile uint32_t t41 = UINT32_MAX;

	t41 = ((x169<=(x170^x171))+x172);

	if (t41 != UINT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x173 = 22U;
	static uint64_t x175 = 14267590LLU;
	int32_t t42 = -23268;

	t42 = ((x173<=(x174^x175))+x176);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x177 = UINT8_MAX;
	uint16_t x178 = UINT16_MAX;
	volatile int64_t x179 = INT64_MAX;
	uint32_t t43 = 7U;

	t43 = ((x177<=(x178^x179))+x180);

	if (t43 != 8U) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x181 = 0U;
	volatile int64_t x182 = INT64_MAX;
	static int8_t x183 = -1;
	volatile int32_t t44 = 10634;

	t44 = ((x181<=(x182^x183))+x184);

	if (t44 != 127) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x186 = 1U;
	int16_t x188 = -1;
	int32_t t45 = -10733965;

	t45 = ((x185<=(x186^x187))+x188);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x189 = 1LL;
	uint16_t x190 = 5657U;
	int64_t x191 = -8920510771LL;
	uint32_t x192 = 329083124U;
	static uint32_t t46 = 1730370U;

	t46 = ((x189<=(x190^x191))+x192);

	if (t46 != 329083124U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -1;
	int64_t x195 = INT64_MIN;
	uint16_t x196 = UINT16_MAX;
	int32_t t47 = 360;

	t47 = ((x193<=(x194^x195))+x196);

	if (t47 != 65535) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x199 = 1243932LL;
	volatile int32_t x200 = -1;
	int32_t t48 = -11840575;

	t48 = ((x197<=(x198^x199))+x200);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x201 = INT16_MAX;
	int16_t x202 = INT16_MIN;
	int64_t t49 = INT64_MIN;

	t49 = ((x201<=(x202^x203))+x204);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x205 = 12;
	volatile int64_t x207 = INT64_MIN;
	volatile int32_t t50 = 24675;

	t50 = ((x205<=(x206^x207))+x208);

	if (t50 != -127) { NG(); } else { ; }
	
}

void f51(void) {
	static int16_t x209 = INT16_MIN;
	int16_t x210 = -9822;
	uint64_t x211 = 33178312625292638LLU;
	volatile int16_t x212 = -1;
	int32_t t51 = -123893;

	t51 = ((x209<=(x210^x211))+x212);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x213 = UINT64_MAX;
	int8_t x215 = INT8_MIN;
	static uint32_t x216 = 215246U;
	uint32_t t52 = 73576853U;

	t52 = ((x213<=(x214^x215))+x216);

	if (t52 != 215246U) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x217 = INT32_MIN;
	int8_t x218 = -1;
	volatile uint16_t x219 = 1208U;
	volatile int32_t t53 = 1;

	t53 = ((x217<=(x218^x219))+x220);

	if (t53 != 128) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = 0U;
	uint32_t x223 = UINT32_MAX;
	volatile int32_t t54 = 3;

	t54 = ((x221<=(x222^x223))+x224);

	if (t54 != 31068) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MIN;
	volatile uint32_t x226 = 1U;
	int64_t x227 = 2120924038883LL;
	int32_t x228 = 4242;
	static volatile int32_t t55 = 1;

	t55 = ((x225<=(x226^x227))+x228);

	if (t55 != 4243) { NG(); } else { ; }
	
}

void f56(void) {
	static int16_t x229 = -172;
	uint64_t x231 = UINT64_MAX;
	volatile int32_t t56 = 79;

	t56 = ((x229<=(x230^x231))+x232);

	if (t56 != -13) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x234 = INT64_MIN;
	uint64_t x235 = 126LLU;
	int32_t t57 = -41352365;

	t57 = ((x233<=(x234^x235))+x236);

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile int32_t x237 = INT32_MIN;
	int32_t x238 = -1;
	uint32_t x239 = UINT32_MAX;
	int32_t x240 = INT32_MIN;
	int32_t t58 = INT32_MIN;

	t58 = ((x237<=(x238^x239))+x240);

	if (t58 != INT32_MIN) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x241 = INT8_MIN;
	volatile uint64_t x242 = 1LLU;
	int16_t x243 = INT16_MIN;
	int8_t x244 = INT8_MIN;
	int32_t t59 = 11954;

	t59 = ((x241<=(x242^x243))+x244);

	if (t59 != -128) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x245 = 50376315216LL;
	static int64_t x246 = -1LL;
	uint16_t x248 = 570U;
	volatile int32_t t60 = -72;

	t60 = ((x245<=(x246^x247))+x248);

	if (t60 != 570) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = -1;
	int64_t x250 = -1LL;
	int8_t x252 = INT8_MIN;
	static volatile int32_t t61 = -11;

	t61 = ((x249<=(x250^x251))+x252);

	if (t61 != -128) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x253 = -13487;
	int64_t x254 = -201973LL;
	static int32_t x255 = -1;
	volatile int64_t x256 = -1LL;
	int64_t t62 = 191404478786744941LL;

	t62 = ((x253<=(x254^x255))+x256);

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x260 = -1;
	static volatile int32_t t63 = -103;

	t63 = ((x257<=(x258^x259))+x260);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x261 = 169168U;
	uint32_t x262 = UINT32_MAX;
	static int32_t x263 = 609455;
	volatile uint8_t x264 = 114U;

	t64 = ((x261<=(x262^x263))+x264);

	if (t64 != 115) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = INT64_MAX;
	int64_t x266 = INT64_MIN;
	volatile uint8_t x267 = 92U;
	static uint64_t x268 = UINT64_MAX;

	t65 = ((x265<=(x266^x267))+x268);

	if (t65 != UINT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x269 = INT16_MIN;
	static int8_t x270 = -1;
	volatile uint32_t x271 = 26749U;
	volatile int64_t x272 = 1613078712LL;
	int64_t t66 = -6LL;

	t66 = ((x269<=(x270^x271))+x272);

	if (t66 != 1613078713LL) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x273 = -65;
	int16_t x274 = INT16_MIN;
	static int64_t x275 = -1LL;
	int8_t x276 = 0;
	static int32_t t67 = 3325962;

	t67 = ((x273<=(x274^x275))+x276);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static uint64_t x277 = 549571485505237902LLU;
	int8_t x279 = -26;
	int8_t x280 = -2;
	int32_t t68 = 3;

	t68 = ((x277<=(x278^x279))+x280);

	if (t68 != -2) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = INT16_MAX;
	int64_t x282 = INT64_MIN;
	int64_t x283 = 232003642119746781LL;
	int8_t x284 = -1;

	t69 = ((x281<=(x282^x283))+x284);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint64_t x289 = UINT64_MAX;
	uint32_t x290 = 362301778U;
	static int32_t x291 = -1;
	uint8_t x292 = UINT8_MAX;
	int32_t t70 = 3838;

	t70 = ((x289<=(x290^x291))+x292);

	if (t70 != 255) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x293 = 14U;
	int64_t x294 = -1LL;
	volatile int32_t x295 = INT32_MIN;
	uint8_t x296 = 22U;
	volatile int32_t t71 = -3070;

	t71 = ((x293<=(x294^x295))+x296);

	if (t71 != 23) { NG(); } else { ; }
	
}

void f72(void) {
	static int16_t x298 = INT16_MAX;
	int8_t x299 = -1;
	uint16_t x300 = 5241U;
	int32_t t72 = 48063258;

	t72 = ((x297<=(x298^x299))+x300);

	if (t72 != 5241) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x303 = 1;
	int16_t x304 = INT16_MIN;
	volatile int32_t t73 = -241453;

	t73 = ((x301<=(x302^x303))+x304);

	if (t73 != -32767) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x305 = 416549301030908127LLU;
	int64_t x306 = INT64_MIN;
	int8_t x308 = -15;
	volatile int32_t t74 = -3;

	t74 = ((x305<=(x306^x307))+x308);

	if (t74 != -14) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x309 = -1;
	uint32_t x310 = 141859851U;
	uint8_t x311 = 12U;
	uint8_t x312 = 3U;
	int32_t t75 = -22;

	t75 = ((x309<=(x310^x311))+x312);

	if (t75 != 3) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x313 = 323503071553672723LLU;
	int64_t x314 = INT64_MIN;
	static int64_t x316 = -1367667827092LL;
	volatile int64_t t76 = 464784967167372409LL;

	t76 = ((x313<=(x314^x315))+x316);

	if (t76 != -1367667827091LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x318 = 1;
	volatile uint64_t x319 = 39175020567454014LLU;
	static uint64_t x320 = 331774181LLU;
	uint64_t t77 = 164938465748956LLU;

	t77 = ((x317<=(x318^x319))+x320);

	if (t77 != 331774181LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x321 = INT32_MAX;
	uint8_t x323 = 0U;
	volatile int32_t t78 = 479308933;

	t78 = ((x321<=(x322^x323))+x324);

	if (t78 != 65535) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x325 = 12483050795407LL;
	int8_t x327 = INT8_MAX;
	int16_t x328 = -1;

	t79 = ((x325<=(x326^x327))+x328);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x329 = INT32_MAX;
	static int32_t x330 = 392060;
	int8_t x331 = -9;
	int8_t x332 = 60;
	volatile int32_t t80 = 133314;

	t80 = ((x329<=(x330^x331))+x332);

	if (t80 != 60) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint64_t x333 = 7LLU;
	volatile int32_t x334 = INT32_MIN;
	int64_t x335 = -2LL;
	int64_t x336 = 4LL;
	int64_t t81 = -1924745329767018LL;

	t81 = ((x333<=(x334^x335))+x336);

	if (t81 != 5LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x337 = -1;
	int16_t x339 = INT16_MAX;
	int8_t x340 = INT8_MIN;
	int32_t t82 = 1;

	t82 = ((x337<=(x338^x339))+x340);

	if (t82 != -127) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x341 = INT16_MIN;
	int8_t x342 = -1;
	uint8_t x343 = UINT8_MAX;
	int8_t x344 = INT8_MIN;

	t83 = ((x341<=(x342^x343))+x344);

	if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x345 = INT64_MIN;
	uint64_t x347 = UINT64_MAX;
	static int32_t x348 = INT32_MIN;
	int32_t t84 = INT32_MIN;

	t84 = ((x345<=(x346^x347))+x348);

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	static volatile int16_t x349 = 2045;
	uint8_t x350 = UINT8_MAX;
	static uint64_t x351 = UINT64_MAX;
	int64_t x352 = -1LL;
	volatile int64_t t85 = 1193278897LL;

	t85 = ((x349<=(x350^x351))+x352);

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x353 = INT16_MAX;
	static int64_t x354 = INT64_MAX;
	volatile int16_t x356 = 64;

	t86 = ((x353<=(x354^x355))+x356);

	if (t86 != 65) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x357 = INT8_MAX;
	volatile int16_t x358 = INT16_MIN;
	int32_t x359 = 175092416;
	volatile uint8_t x360 = 82U;

	t87 = ((x357<=(x358^x359))+x360);

	if (t87 != 82) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x361 = 2591U;
	volatile int8_t x362 = INT8_MAX;
	int32_t x363 = INT32_MIN;
	int32_t t88 = -200400;

	t88 = ((x361<=(x362^x363))+x364);

	if (t88 != -32767) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x365 = 223;
	static int8_t x366 = INT8_MAX;
	uint8_t x367 = UINT8_MAX;
	uint8_t x368 = 4U;
	volatile int32_t t89 = -3038;

	t89 = ((x365<=(x366^x367))+x368);

	if (t89 != 4) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x369 = INT16_MAX;
	int32_t x370 = -1;
	static uint64_t x371 = UINT64_MAX;
	int64_t x372 = INT64_MIN;
	volatile int64_t t90 = INT64_MIN;

	t90 = ((x369<=(x370^x371))+x372);

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MIN;
	uint16_t x374 = 258U;
	static uint8_t x376 = 2U;

	t91 = ((x373<=(x374^x375))+x376);

	if (t91 != 3) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x377 = UINT64_MAX;
	volatile uint64_t x378 = 1874707673LLU;
	int8_t x380 = INT8_MIN;
	volatile int32_t t92 = 3;

	t92 = ((x377<=(x378^x379))+x380);

	if (t92 != -128) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x381 = INT64_MIN;
	int8_t x383 = -1;
	uint8_t x384 = UINT8_MAX;
	volatile int32_t t93 = -491;

	t93 = ((x381<=(x382^x383))+x384);

	if (t93 != 256) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = INT64_MIN;
	static int16_t x386 = 0;
	volatile uint8_t x387 = 1U;
	static volatile int16_t x388 = INT16_MAX;
	volatile int32_t t94 = 22;

	t94 = ((x385<=(x386^x387))+x388);

	if (t94 != 32768) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x389 = INT64_MIN;
	static int16_t x390 = INT16_MIN;
	uint32_t x391 = 1801150U;
	uint64_t x392 = 30LLU;

	t95 = ((x389<=(x390^x391))+x392);

	if (t95 != 31LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x393 = -1LL;
	int64_t x394 = -428521290640339653LL;
	static uint16_t x395 = 32509U;
	int64_t x396 = INT64_MAX;
	static int64_t t96 = INT64_MAX;

	t96 = ((x393<=(x394^x395))+x396);

	if (t96 != INT64_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x397 = 992606U;
	int32_t x398 = INT32_MIN;
	int32_t x399 = 3144;
	uint32_t x400 = 26U;
	uint32_t t97 = 350977U;

	t97 = ((x397<=(x398^x399))+x400);

	if (t97 != 27U) { NG(); } else { ; }
	
}

void f98(void) {
	static int8_t x402 = INT8_MAX;
	uint32_t x403 = UINT32_MAX;
	volatile int64_t x404 = -859890793326594314LL;
	int64_t t98 = -1936312539LL;

	t98 = ((x401<=(x402^x403))+x404);

	if (t98 != -859890793326594313LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x407 = 22LL;
	uint32_t x408 = 961U;
	volatile uint32_t t99 = 27690874U;

	t99 = ((x405<=(x406^x407))+x408);

	if (t99 != 962U) { NG(); } else { ; }
	
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

