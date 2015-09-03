#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MAX;
static uint8_t x4 = 1U;
static int32_t x5 = -1;
int64_t x16 = -1LL;
int32_t t3 = -18250;
static int32_t x18 = INT32_MIN;
int64_t x21 = INT64_MIN;
volatile int8_t x24 = INT8_MIN;
static volatile int32_t t5 = -1;
int32_t t10 = 596;
int32_t t13 = 603435;
int32_t x57 = -225;
uint16_t x58 = UINT16_MAX;
int64_t x59 = -16721774871020LL;
static int64_t x72 = INT64_MAX;
volatile int32_t t19 = -1;
uint16_t x85 = 4680U;
volatile int64_t x88 = INT64_MAX;
int16_t x89 = INT16_MAX;
volatile int16_t x100 = -1;
volatile int32_t t24 = 130472;
volatile uint8_t x104 = 0U;
int16_t x108 = INT16_MIN;
int32_t x117 = INT32_MIN;
uint64_t x122 = 747803326766610403LLU;
volatile int32_t t30 = 432718954;
int8_t x126 = 0;
static uint16_t x130 = UINT16_MAX;
volatile int16_t x131 = -509;
static volatile int8_t x132 = -1;
uint8_t x144 = UINT8_MAX;
static int32_t t36 = -359290;
int16_t x151 = INT16_MAX;
static uint16_t x153 = 2026U;
int16_t x156 = INT16_MIN;
int32_t t38 = -4320543;
int32_t x160 = -1;
int32_t x163 = -1;
uint8_t x166 = UINT8_MAX;
int64_t x167 = INT64_MIN;
int32_t t41 = -30856732;
static uint16_t x170 = 0U;
int8_t x174 = -11;
int32_t t46 = 2429162;
static int16_t x200 = INT16_MIN;
int32_t t50 = -270;
int16_t x209 = INT16_MIN;
int64_t x219 = INT64_MAX;
int32_t t54 = 2;
int8_t x221 = -27;
volatile uint32_t x222 = 53U;
static int32_t t56 = 1;
int64_t x230 = 1782960070685463LL;
int8_t x234 = INT8_MIN;
int16_t x245 = INT16_MAX;
volatile int64_t x246 = 1088078166282372541LL;
int32_t x248 = -222973;
volatile int32_t t62 = 7;
static int8_t x259 = -1;
static volatile uint64_t x260 = 50LLU;
int16_t x267 = INT16_MIN;
static volatile int32_t t66 = -7812;
int8_t x272 = 40;
volatile int8_t x281 = -1;
int64_t x283 = INT64_MIN;
volatile int32_t x284 = INT32_MIN;
volatile int32_t t70 = 104;
static int16_t x288 = 0;
int64_t x291 = -1335004623079998LL;
int16_t x298 = 25;
static int8_t x300 = -1;
int32_t t74 = -200712;
volatile int8_t x301 = INT8_MIN;
int32_t x303 = INT32_MIN;
volatile int8_t x304 = -1;
int16_t x310 = INT16_MIN;
volatile int32_t t77 = -173398;
static uint32_t x317 = 1232U;
uint64_t x320 = 297138438708424LLU;
int32_t t80 = 1643;
uint16_t x325 = 71U;
int16_t x326 = INT16_MAX;
uint64_t x327 = 116812620619034554LLU;
uint8_t x330 = 3U;
static int64_t x331 = -1LL;
int16_t x338 = INT16_MIN;
int8_t x341 = -2;
int64_t x342 = INT64_MAX;
static int32_t x344 = INT32_MIN;
volatile int32_t t85 = 54;
volatile int32_t x346 = INT32_MIN;
uint32_t x347 = 22672U;
int32_t t87 = 82402549;
static volatile int8_t x353 = 0;
int32_t x360 = -1;
static uint16_t x361 = UINT16_MAX;
static uint64_t x363 = 92693942LLU;
int8_t x366 = INT8_MIN;
int32_t x367 = INT32_MIN;
int64_t x376 = INT64_MIN;
uint64_t x379 = 9984531939134600LLU;
volatile int64_t x380 = -37835653289LL;
int32_t t94 = -942;
int16_t x381 = 714;
int32_t x382 = INT32_MIN;
uint64_t x384 = UINT64_MAX;
int8_t x388 = -1;
uint32_t x395 = UINT32_MAX;
int8_t x398 = 1;
int32_t t99 = 0;


void f0(void) {
	uint8_t x2 = 50U;
	static int16_t x3 = INT16_MIN;
	int32_t t0 = 93537400;

	t0 = ((x1^(x2^x3))<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x6 = INT64_MIN;
	int32_t x7 = -1424;
	int64_t x8 = INT64_MIN;
	volatile int32_t t1 = -17268;

	t1 = ((x5^(x6^x7))<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint16_t x10 = 5654U;
	int32_t x11 = -1;
	volatile int32_t x12 = INT32_MAX;
	static volatile int32_t t2 = 13739218;

	t2 = ((x9^(x10^x11))<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x13 = 4LLU;
	static volatile uint16_t x14 = 0U;
	uint32_t x15 = 1530903U;

	t3 = ((x13^(x14^x15))<x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x17 = UINT64_MAX;
	int8_t x19 = INT8_MIN;
	uint64_t x20 = 828117307938LLU;
	int32_t t4 = -817;

	t4 = ((x17^(x18^x19))<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MAX;

	t5 = ((x21^(x22^x23))<x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -1;
	int8_t x26 = INT8_MIN;
	volatile uint8_t x27 = 4U;
	volatile int8_t x28 = 0;
	static volatile int32_t t6 = -3;

	t6 = ((x25^(x26^x27))<x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = 7055896728684592LL;
	uint64_t x30 = 37164971405188984LLU;
	int64_t x31 = -267115877289LL;
	uint8_t x32 = 1U;
	volatile int32_t t7 = -1;

	t7 = ((x29^(x30^x31))<x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -5;
	uint16_t x34 = 3605U;
	volatile int64_t x35 = INT64_MIN;
	static int32_t x36 = -1;
	volatile int32_t t8 = 186070307;

	t8 = ((x33^(x34^x35))<x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	static uint64_t x37 = UINT64_MAX;
	uint32_t x38 = 50759854U;
	int8_t x39 = INT8_MAX;
	static uint32_t x40 = 18958U;
	volatile int32_t t9 = -578;

	t9 = ((x37^(x38^x39))<x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x41 = INT32_MIN;
	int8_t x42 = INT8_MAX;
	uint32_t x43 = 14493U;
	volatile int32_t x44 = -1;

	t10 = ((x41^(x42^x43))<x44);

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = 4U;
	static int64_t x46 = 131171084084LL;
	int8_t x47 = INT8_MAX;
	int32_t x48 = INT32_MIN;
	static int32_t t11 = 89243;

	t11 = ((x45^(x46^x47))<x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MAX;
	static int32_t x50 = INT32_MIN;
	int32_t x51 = INT32_MIN;
	volatile int64_t x52 = INT64_MAX;
	int32_t t12 = -248471679;

	t12 = ((x49^(x50^x51))<x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x53 = INT8_MIN;
	volatile uint8_t x54 = 57U;
	int32_t x55 = -11;
	uint64_t x56 = 8836619204110325LLU;

	t13 = ((x53^(x54^x55))<x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x60 = INT64_MIN;
	volatile int32_t t14 = -11;

	t14 = ((x57^(x58^x59))<x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MIN;
	static volatile int32_t x62 = -1;
	int16_t x63 = -1;
	int8_t x64 = -1;
	volatile int32_t t15 = 6;

	t15 = ((x61^(x62^x63))<x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	uint16_t x66 = UINT16_MAX;
	int16_t x67 = -1;
	static int64_t x68 = 0LL;
	int32_t t16 = -1;

	t16 = ((x65^(x66^x67))<x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = INT8_MAX;
	int32_t x70 = -1;
	volatile uint32_t x71 = UINT32_MAX;
	int32_t t17 = 1;

	t17 = ((x69^(x70^x71))<x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x73 = INT8_MIN;
	uint16_t x74 = 260U;
	volatile int64_t x75 = 118LL;
	static uint32_t x76 = UINT32_MAX;
	int32_t t18 = 26;

	t18 = ((x73^(x74^x75))<x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = INT64_MIN;
	int32_t x78 = INT32_MAX;
	uint8_t x79 = UINT8_MAX;
	int16_t x80 = INT16_MAX;

	t19 = ((x77^(x78^x79))<x80);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x81 = -82606LL;
	static volatile uint16_t x82 = UINT16_MAX;
	int8_t x83 = INT8_MIN;
	volatile int64_t x84 = -50265233LL;
	volatile int32_t t20 = -174505;

	t20 = ((x81^(x82^x83))<x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x86 = -1;
	uint32_t x87 = 21U;
	int32_t t21 = -3865;

	t21 = ((x85^(x86^x87))<x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x90 = UINT8_MAX;
	uint32_t x91 = UINT32_MAX;
	volatile int32_t x92 = -14;
	int32_t t22 = 12;

	t22 = ((x89^(x90^x91))<x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int32_t x93 = INT32_MIN;
	uint8_t x94 = 35U;
	int16_t x95 = -1;
	volatile uint16_t x96 = UINT16_MAX;
	volatile int32_t t23 = -1016824756;

	t23 = ((x93^(x94^x95))<x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	uint8_t x98 = 2U;
	int32_t x99 = INT32_MIN;

	t24 = ((x97^(x98^x99))<x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -8;
	int8_t x102 = INT8_MAX;
	uint8_t x103 = UINT8_MAX;
	volatile int32_t t25 = -614509920;

	t25 = ((x101^(x102^x103))<x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = INT64_MIN;
	uint32_t x106 = 532U;
	int32_t x107 = 1;
	volatile int32_t t26 = 2929;

	t26 = ((x105^(x106^x107))<x108);

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 3U;
	int16_t x110 = 6;
	int64_t x111 = INT64_MAX;
	int64_t x112 = INT64_MIN;
	int32_t t27 = 2383231;

	t27 = ((x109^(x110^x111))<x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint8_t x113 = 21U;
	static uint16_t x114 = 4U;
	int8_t x115 = -10;
	volatile uint8_t x116 = 63U;
	volatile int32_t t28 = -300;

	t28 = ((x113^(x114^x115))<x116);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x118 = -27;
	int32_t x119 = -61141996;
	static int16_t x120 = 6;
	static volatile int32_t t29 = -1;

	t29 = ((x117^(x118^x119))<x120);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint32_t x121 = UINT32_MAX;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = -1;

	t30 = ((x121^(x122^x123))<x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = INT32_MAX;
	static int64_t x127 = INT64_MAX;
	static int64_t x128 = -1LL;
	int32_t t31 = -968604590;

	t31 = ((x125^(x126^x127))<x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MAX;
	int32_t t32 = -97471257;

	t32 = ((x129^(x130^x131))<x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = INT32_MAX;
	int32_t x134 = INT32_MAX;
	int16_t x135 = -1359;
	static volatile int64_t x136 = -1093524911856LL;
	static int32_t t33 = -2;

	t33 = ((x133^(x134^x135))<x136);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile uint16_t x137 = 22U;
	uint8_t x138 = 24U;
	static int8_t x139 = -1;
	uint32_t x140 = 7U;
	static int32_t t34 = 36;

	t34 = ((x137^(x138^x139))<x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	volatile int32_t x142 = -1;
	int64_t x143 = 130LL;
	static volatile int32_t t35 = -3263;

	t35 = ((x141^(x142^x143))<x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x145 = 3;
	int64_t x146 = INT64_MIN;
	volatile uint64_t x147 = 441666LLU;
	int64_t x148 = -12LL;

	t36 = ((x145^(x146^x147))<x148);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x149 = -1;
	uint16_t x150 = UINT16_MAX;
	static uint64_t x152 = 1719462LLU;
	volatile int32_t t37 = 17414180;

	t37 = ((x149^(x150^x151))<x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x154 = 20U;
	volatile int8_t x155 = INT8_MIN;

	t38 = ((x153^(x154^x155))<x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x157 = -1;
	volatile int32_t x158 = -1;
	static int8_t x159 = 1;
	volatile int32_t t39 = 87534;

	t39 = ((x157^(x158^x159))<x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint8_t x161 = UINT8_MAX;
	uint32_t x162 = 11430U;
	uint64_t x164 = 3839914709761LLU;
	static volatile int32_t t40 = 4055;

	t40 = ((x161^(x162^x163))<x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int16_t x165 = INT16_MAX;
	uint16_t x168 = 415U;

	t41 = ((x165^(x166^x167))<x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 20LLU;
	static uint64_t x171 = UINT64_MAX;
	static int64_t x172 = 5685LL;
	static int32_t t42 = 587882;

	t42 = ((x169^(x170^x171))<x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	volatile uint16_t x175 = 4U;
	static int64_t x176 = INT64_MAX;
	int32_t t43 = 109485961;

	t43 = ((x173^(x174^x175))<x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 174835LLU;
	int32_t x178 = INT32_MIN;
	int8_t x179 = -1;
	static int32_t x180 = INT32_MIN;
	static volatile int32_t t44 = 1;

	t44 = ((x177^(x178^x179))<x180);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int16_t x181 = INT16_MIN;
	int32_t x182 = INT32_MIN;
	uint32_t x183 = 14U;
	uint8_t x184 = 1U;
	int32_t t45 = -129804940;

	t45 = ((x181^(x182^x183))<x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = UINT16_MAX;
	static volatile uint32_t x186 = 64417U;
	volatile int64_t x187 = 264LL;
	volatile int16_t x188 = INT16_MIN;

	t46 = ((x185^(x186^x187))<x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MAX;
	static int64_t x190 = INT64_MIN;
	volatile int16_t x191 = 1245;
	static uint16_t x192 = 121U;
	int32_t t47 = -396623;

	t47 = ((x189^(x190^x191))<x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x193 = UINT16_MAX;
	int8_t x194 = INT8_MIN;
	static uint32_t x195 = 301U;
	uint64_t x196 = UINT64_MAX;
	static volatile int32_t t48 = 117;

	t48 = ((x193^(x194^x195))<x196);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int64_t x197 = INT64_MAX;
	volatile uint16_t x198 = UINT16_MAX;
	int64_t x199 = INT64_MIN;
	volatile int32_t t49 = -15294;

	t49 = ((x197^(x198^x199))<x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 24031U;
	static int8_t x202 = INT8_MAX;
	static int16_t x203 = -1;
	uint64_t x204 = UINT64_MAX;

	t50 = ((x201^(x202^x203))<x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x205 = 26U;
	volatile int16_t x206 = 0;
	int64_t x207 = INT64_MIN;
	int64_t x208 = INT64_MIN;
	static volatile int32_t t51 = 4892567;

	t51 = ((x205^(x206^x207))<x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = INT16_MIN;
	static uint64_t x211 = 946050483106LLU;
	int32_t x212 = -1;
	int32_t t52 = -209931418;

	t52 = ((x209^(x210^x211))<x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x213 = INT8_MIN;
	static int32_t x214 = INT32_MIN;
	int8_t x215 = -42;
	uint8_t x216 = 1U;
	volatile int32_t t53 = -52343705;

	t53 = ((x213^(x214^x215))<x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = INT32_MIN;
	int64_t x218 = -1LL;
	int8_t x220 = 42;

	t54 = ((x217^(x218^x219))<x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint16_t x223 = UINT16_MAX;
	int8_t x224 = INT8_MAX;
	int32_t t55 = -6778780;

	t55 = ((x221^(x222^x223))<x224);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x225 = -12;
	static uint32_t x226 = 3885901U;
	int8_t x227 = -1;
	int8_t x228 = -40;

	t56 = ((x225^(x226^x227))<x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = 10;
	int16_t x231 = INT16_MIN;
	int64_t x232 = INT64_MIN;
	volatile int32_t t57 = -807492426;

	t57 = ((x229^(x230^x231))<x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x233 = UINT64_MAX;
	volatile int64_t x235 = -1LL;
	int8_t x236 = 10;
	static int32_t t58 = -36736430;

	t58 = ((x233^(x234^x235))<x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MAX;
	int32_t x238 = INT32_MAX;
	uint32_t x239 = 0U;
	volatile uint16_t x240 = 39U;
	volatile int32_t t59 = -1;

	t59 = ((x237^(x238^x239))<x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x241 = UINT32_MAX;
	int16_t x242 = -267;
	static uint8_t x243 = UINT8_MAX;
	static int32_t x244 = INT32_MIN;
	int32_t t60 = 0;

	t60 = ((x241^(x242^x243))<x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x247 = 14U;
	int32_t t61 = -335431;

	t61 = ((x245^(x246^x247))<x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = INT32_MIN;
	volatile int64_t x250 = INT64_MAX;
	static int8_t x251 = INT8_MIN;
	int8_t x252 = INT8_MIN;

	t62 = ((x249^(x250^x251))<x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	static volatile int16_t x254 = -54;
	int8_t x255 = INT8_MIN;
	int64_t x256 = INT64_MIN;
	int32_t t63 = 0;

	t63 = ((x253^(x254^x255))<x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x257 = INT16_MIN;
	uint8_t x258 = UINT8_MAX;
	int32_t t64 = -7;

	t64 = ((x257^(x258^x259))<x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x261 = -1;
	uint64_t x262 = UINT64_MAX;
	static uint8_t x263 = 68U;
	int8_t x264 = INT8_MIN;
	int32_t t65 = 24;

	t65 = ((x261^(x262^x263))<x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x265 = -1LL;
	int64_t x266 = INT64_MIN;
	int64_t x268 = 8LL;

	t66 = ((x265^(x266^x267))<x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x269 = UINT16_MAX;
	int8_t x270 = INT8_MIN;
	int16_t x271 = INT16_MIN;
	int32_t t67 = -14263;

	t67 = ((x269^(x270^x271))<x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static int64_t x273 = -1LL;
	static int32_t x274 = INT32_MIN;
	static int16_t x275 = -48;
	volatile int8_t x276 = -1;
	int32_t t68 = 11999662;

	t68 = ((x273^(x274^x275))<x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x277 = -1;
	int8_t x278 = INT8_MAX;
	int8_t x279 = -1;
	static int32_t x280 = -1458;
	int32_t t69 = 16;

	t69 = ((x277^(x278^x279))<x280);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static int64_t x282 = 16756171LL;

	t70 = ((x281^(x282^x283))<x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x285 = UINT8_MAX;
	int8_t x286 = -1;
	volatile uint32_t x287 = 30026U;
	volatile int32_t t71 = -805;

	t71 = ((x285^(x286^x287))<x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 406U;
	volatile int8_t x290 = INT8_MIN;
	uint8_t x292 = UINT8_MAX;
	volatile int32_t t72 = 13167531;

	t72 = ((x289^(x290^x291))<x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x293 = -2843;
	static volatile int64_t x294 = 288724332LL;
	int16_t x295 = INT16_MIN;
	uint32_t x296 = 359484969U;
	volatile int32_t t73 = -206;

	t73 = ((x293^(x294^x295))<x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x297 = INT64_MIN;
	int8_t x299 = 6;

	t74 = ((x297^(x298^x299))<x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static uint8_t x302 = 27U;
	static volatile int32_t t75 = 0;

	t75 = ((x301^(x302^x303))<x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = INT64_MIN;
	static int16_t x306 = INT16_MIN;
	static int16_t x307 = -1;
	uint64_t x308 = 4LLU;
	int32_t t76 = -17182394;

	t76 = ((x305^(x306^x307))<x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	static int16_t x309 = INT16_MIN;
	int16_t x311 = -1;
	static volatile int8_t x312 = 6;

	t77 = ((x309^(x310^x311))<x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x313 = 0U;
	int64_t x314 = 46729928LL;
	int16_t x315 = INT16_MIN;
	int16_t x316 = INT16_MIN;
	int32_t t78 = -18;

	t78 = ((x313^(x314^x315))<x316);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x318 = 68U;
	int64_t x319 = INT64_MIN;
	volatile int32_t t79 = -1064089;

	t79 = ((x317^(x318^x319))<x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = INT8_MIN;
	int8_t x322 = 0;
	int16_t x323 = 1593;
	int32_t x324 = INT32_MAX;

	t80 = ((x321^(x322^x323))<x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x328 = -1;
	volatile int32_t t81 = -13;

	t81 = ((x325^(x326^x327))<x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x329 = UINT32_MAX;
	int32_t x332 = INT32_MAX;
	int32_t t82 = 39166;

	t82 = ((x329^(x330^x331))<x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x333 = 1U;
	int64_t x334 = INT64_MIN;
	uint8_t x335 = UINT8_MAX;
	static volatile uint32_t x336 = 51U;
	int32_t t83 = 4032423;

	t83 = ((x333^(x334^x335))<x336);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x337 = 1352U;
	int16_t x339 = INT16_MIN;
	uint64_t x340 = 3235441510657LLU;
	volatile int32_t t84 = -5;

	t84 = ((x337^(x338^x339))<x340);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint16_t x343 = 31418U;

	t85 = ((x341^(x342^x343))<x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile int64_t x345 = INT64_MIN;
	int16_t x348 = INT16_MIN;
	volatile int32_t t86 = -52750222;

	t86 = ((x345^(x346^x347))<x348);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x349 = -1;
	uint64_t x350 = 7199397LLU;
	int32_t x351 = INT32_MAX;
	int8_t x352 = 4;

	t87 = ((x349^(x350^x351))<x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x354 = INT32_MIN;
	int32_t x355 = 7011906;
	int64_t x356 = -1LL;
	int32_t t88 = 1957;

	t88 = ((x353^(x354^x355))<x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = -15;
	int8_t x358 = INT8_MIN;
	static volatile uint64_t x359 = 139501516LLU;
	volatile int32_t t89 = -54126;

	t89 = ((x357^(x358^x359))<x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int64_t x362 = -4141966658268200LL;
	int8_t x364 = 37;
	static volatile int32_t t90 = -884906680;

	t90 = ((x361^(x362^x363))<x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 4U;
	int64_t x368 = -1LL;
	volatile int32_t t91 = -116145638;

	t91 = ((x365^(x366^x367))<x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = INT32_MAX;
	static uint32_t x370 = UINT32_MAX;
	static int32_t x371 = -49;
	int64_t x372 = INT64_MAX;
	int32_t t92 = -247412284;

	t92 = ((x369^(x370^x371))<x372);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	static int16_t x373 = INT16_MAX;
	uint32_t x374 = 122980U;
	int8_t x375 = -1;
	int32_t t93 = -27152561;

	t93 = ((x373^(x374^x375))<x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = INT32_MIN;
	volatile int64_t x378 = INT64_MIN;

	t94 = ((x377^(x378^x379))<x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x383 = -1;
	int32_t t95 = 58365;

	t95 = ((x381^(x382^x383))<x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x385 = INT64_MAX;
	int32_t x386 = -243;
	uint16_t x387 = 24U;
	volatile int32_t t96 = -1559;

	t96 = ((x385^(x386^x387))<x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x389 = 15U;
	volatile uint16_t x390 = UINT16_MAX;
	static uint8_t x391 = 49U;
	int16_t x392 = INT16_MAX;
	int32_t t97 = -366162826;

	t97 = ((x389^(x390^x391))<x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = 680U;
	static uint64_t x394 = UINT64_MAX;
	int16_t x396 = 990;
	volatile int32_t t98 = 71954;

	t98 = ((x393^(x394^x395))<x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 9U;
	int8_t x399 = 41;
	uint32_t x400 = 24U;

	t99 = ((x397^(x398^x399))<x400);

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

