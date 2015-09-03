#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint8_t x12 = 104U;
int32_t x31 = INT32_MIN;
volatile uint8_t x35 = 55U;
int64_t t8 = 20847555380LL;
volatile int8_t x43 = -1;
int16_t x44 = INT16_MIN;
volatile int8_t x47 = INT8_MIN;
static volatile uint64_t t10 = 5LLU;
volatile int32_t x50 = -27;
volatile int32_t t11 = 21;
volatile uint64_t x54 = UINT64_MAX;
uint64_t x57 = UINT64_MAX;
int8_t x60 = 2;
static int32_t t13 = -172;
volatile int32_t x65 = INT32_MIN;
int8_t x70 = INT8_MAX;
int16_t x76 = INT16_MIN;
static int16_t x89 = INT16_MIN;
volatile uint32_t t19 = 4668U;
uint32_t x94 = UINT32_MAX;
volatile int32_t t21 = 1574017;
int64_t x110 = 27973409293LL;
volatile int32_t t23 = 14734;
uint32_t x115 = UINT32_MAX;
volatile int32_t x119 = -2092134;
volatile int8_t x122 = -37;
int16_t x128 = -1;
uint16_t x136 = 11U;
uint8_t x140 = UINT8_MAX;
volatile uint32_t t30 = 1U;
static uint64_t x157 = 92362817LLU;
int32_t x161 = INT32_MAX;
volatile int64_t x163 = INT64_MIN;
volatile int64_t x167 = INT64_MAX;
static volatile int32_t t36 = 4;
int64_t x173 = -9LL;
int16_t x175 = -3;
uint64_t x176 = 1237747385286LLU;
int8_t x177 = -3;
uint8_t x186 = 15U;
int8_t x187 = INT8_MIN;
int64_t t40 = -520859502287029044LL;
int32_t x199 = INT32_MIN;
static uint64_t x203 = 960LLU;
int16_t x218 = INT16_MIN;
volatile int8_t x225 = INT8_MIN;
volatile int8_t x232 = 0;
int8_t x236 = -1;
int16_t x237 = -1;
volatile uint64_t x241 = 2153243467248LLU;
volatile int32_t t52 = 624547;
int64_t x249 = -1LL;
int16_t x254 = INT16_MAX;
int8_t x256 = INT8_MIN;
volatile int16_t x262 = -10316;
int8_t x263 = 27;
int8_t x264 = INT8_MIN;
volatile uint64_t x267 = 4362513076803LLU;
uint64_t x273 = UINT64_MAX;
int16_t x275 = -4;
static int16_t x284 = 11;
volatile int16_t x288 = INT16_MAX;
uint64_t x292 = 677LLU;
int16_t x296 = 0;
int16_t x299 = INT16_MIN;
uint16_t x305 = 5U;
int64_t x316 = -1LL;
static int16_t x319 = 0;
volatile uint64_t t70 = 36LLU;
static int8_t x326 = INT8_MAX;
int64_t x328 = INT64_MAX;
int8_t x340 = 0;
volatile int32_t t74 = -259375717;
int16_t x347 = 0;
static int64_t x353 = INT64_MAX;
int16_t x355 = -1;
int8_t x358 = -1;
uint16_t x364 = 25U;
int32_t t80 = 1;
int16_t x366 = INT16_MIN;
static uint16_t x367 = UINT16_MAX;
volatile int32_t x370 = -12537;
static int64_t x372 = 41729840LL;
uint64_t x380 = 5LLU;
uint64_t t84 = 6137LLU;
uint32_t x392 = UINT32_MAX;
uint16_t x393 = UINT16_MAX;
static volatile uint32_t x397 = 578173U;
volatile int64_t x401 = INT64_MIN;
int16_t x409 = -1;
int8_t x411 = INT8_MIN;
static int32_t x417 = -177936;
volatile uint8_t x431 = UINT8_MAX;
volatile int16_t x434 = INT16_MIN;
int16_t x436 = INT16_MAX;
static int16_t x440 = INT16_MIN;
static uint8_t x445 = 2U;
volatile uint32_t x448 = UINT32_MAX;
int64_t x449 = -1LL;


void f0(void) {
	volatile uint64_t x1 = 88234LLU;
	int16_t x2 = 10;
	int32_t x3 = 3643;
	static volatile uint16_t x4 = 420U;
	int32_t t0 = 3;

	t0 = (((x1<x2)<=x3)-x4);

	if (t0 != -419) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 56;
	int64_t x6 = -6LL;
	volatile uint8_t x7 = UINT8_MAX;
	int16_t x8 = -986;
	static int32_t t1 = 13661816;

	t1 = (((x5<x6)<=x7)-x8);

	if (t1 != 987) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint16_t x9 = 7287U;
	volatile int64_t x10 = INT64_MAX;
	static int16_t x11 = 1;
	static volatile int32_t t2 = 5558487;

	t2 = (((x9<x10)<=x11)-x12);

	if (t2 != -103) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = UINT64_MAX;
	static uint64_t x18 = 321945556074LLU;
	volatile int64_t x19 = INT64_MAX;
	int32_t x20 = -43009294;
	int32_t t3 = 12;

	t3 = (((x17<x18)<=x19)-x20);

	if (t3 != 43009295) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x21 = UINT32_MAX;
	volatile int16_t x22 = INT16_MIN;
	int16_t x23 = INT16_MIN;
	int64_t x24 = INT64_MAX;
	volatile int64_t t4 = -19185077322155689LL;

	t4 = (((x21<x22)<=x23)-x24);

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x25 = 22U;
	int16_t x26 = INT16_MAX;
	int8_t x27 = -14;
	int8_t x28 = INT8_MAX;
	volatile int32_t t5 = 80195;

	t5 = (((x25<x26)<=x27)-x28);

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = -34;
	uint16_t x30 = 836U;
	uint8_t x32 = UINT8_MAX;
	int32_t t6 = 3;

	t6 = (((x29<x30)<=x31)-x32);

	if (t6 != -255) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = -13;
	int64_t x34 = INT64_MAX;
	volatile int16_t x36 = INT16_MIN;
	int32_t t7 = 925;

	t7 = (((x33<x34)<=x35)-x36);

	if (t7 != 32769) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x37 = -1;
	static uint16_t x38 = 5354U;
	int32_t x39 = INT32_MAX;
	volatile int64_t x40 = -1LL;

	t8 = (((x37<x38)<=x39)-x40);

	if (t8 != 2LL) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile uint32_t x41 = 1223010U;
	uint32_t x42 = 3U;
	volatile int32_t t9 = -7;

	t9 = (((x41<x42)<=x43)-x44);

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	static int64_t x45 = 1368093151LL;
	uint32_t x46 = 1883U;
	uint64_t x48 = UINT64_MAX;

	t10 = (((x45<x46)<=x47)-x48);

	if (t10 != 1LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = INT16_MAX;
	volatile uint8_t x51 = 103U;
	int32_t x52 = -4997;

	t11 = (((x49<x50)<=x51)-x52);

	if (t11 != 4998) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x53 = UINT32_MAX;
	uint8_t x55 = 0U;
	uint64_t x56 = 82296675234414967LLU;
	uint64_t t12 = 7088902885809527LLU;

	t12 = (((x53<x54)<=x55)-x56);

	if (t12 != 18364447398475136649LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x58 = INT64_MAX;
	static int64_t x59 = INT64_MAX;

	t13 = (((x57<x58)<=x59)-x60);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	int16_t x62 = INT16_MIN;
	uint16_t x63 = UINT16_MAX;
	static volatile int16_t x64 = -1;
	int32_t t14 = -2977009;

	t14 = (((x61<x62)<=x63)-x64);

	if (t14 != 2) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x66 = 2477921U;
	int16_t x67 = INT16_MIN;
	volatile int16_t x68 = -1;
	volatile int32_t t15 = -2062231;

	t15 = (((x65<x66)<=x67)-x68);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x69 = 2U;
	int32_t x71 = 4;
	uint64_t x72 = 7982440153LLU;
	static volatile uint64_t t16 = 31531115478LLU;

	t16 = (((x69<x70)<=x71)-x72);

	if (t16 != 18446744065727111464LLU) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x73 = -1;
	int8_t x74 = INT8_MIN;
	static volatile int8_t x75 = -1;
	static int32_t t17 = -526087376;

	t17 = (((x73<x74)<=x75)-x76);

	if (t17 != 32768) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x85 = INT8_MIN;
	static int16_t x86 = INT16_MIN;
	volatile uint16_t x87 = 2U;
	uint16_t x88 = 11716U;
	volatile int32_t t18 = 508625;

	t18 = (((x85<x86)<=x87)-x88);

	if (t18 != -11715) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x90 = INT16_MIN;
	int8_t x91 = 0;
	uint32_t x92 = UINT32_MAX;

	t19 = (((x89<x90)<=x91)-x92);

	if (t19 != 2U) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x93 = 4U;
	static int32_t x95 = 717;
	int64_t x96 = -204936946LL;
	volatile int64_t t20 = -1LL;

	t20 = (((x93<x94)<=x95)-x96);

	if (t20 != 204936947LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x101 = INT32_MIN;
	int16_t x102 = -1;
	uint64_t x103 = 335520476565023LLU;
	int16_t x104 = -3;

	t21 = (((x101<x102)<=x103)-x104);

	if (t21 != 4) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = INT16_MIN;
	static int16_t x106 = 0;
	int64_t x107 = -667LL;
	uint64_t x108 = 122LLU;
	uint64_t t22 = 56770280475203LLU;

	t22 = (((x105<x106)<=x107)-x108);

	if (t22 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile uint16_t x109 = UINT16_MAX;
	int64_t x111 = INT64_MIN;
	int8_t x112 = INT8_MAX;

	t23 = (((x109<x110)<=x111)-x112);

	if (t23 != -127) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = -1LL;
	uint16_t x114 = 2817U;
	static int16_t x116 = -1;
	static volatile int32_t t24 = -367951;

	t24 = (((x113<x114)<=x115)-x116);

	if (t24 != 2) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x117 = 0;
	static uint16_t x118 = 7130U;
	int8_t x120 = INT8_MIN;
	volatile int32_t t25 = -6555;

	t25 = (((x117<x118)<=x119)-x120);

	if (t25 != 128) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 1U;
	uint64_t x123 = 32066LLU;
	int16_t x124 = 3;
	int32_t t26 = 1;

	t26 = (((x121<x122)<=x123)-x124);

	if (t26 != -2) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x125 = INT16_MIN;
	static volatile int64_t x126 = INT64_MIN;
	volatile uint8_t x127 = 12U;
	volatile int32_t t27 = 85684889;

	t27 = (((x125<x126)<=x127)-x128);

	if (t27 != 2) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x133 = UINT32_MAX;
	int16_t x134 = -1;
	int8_t x135 = -58;
	int32_t t28 = 1;

	t28 = (((x133<x134)<=x135)-x136);

	if (t28 != -11) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x137 = UINT32_MAX;
	volatile int32_t x138 = INT32_MIN;
	volatile uint8_t x139 = 0U;
	volatile int32_t t29 = -1287;

	t29 = (((x137<x138)<=x139)-x140);

	if (t29 != -254) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x141 = -25125;
	volatile int64_t x142 = -13155662339464LL;
	int8_t x143 = -40;
	volatile uint32_t x144 = UINT32_MAX;

	t30 = (((x141<x142)<=x143)-x144);

	if (t30 != 1U) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint16_t x145 = 54U;
	int8_t x146 = 1;
	volatile int8_t x147 = INT8_MIN;
	int64_t x148 = INT64_MAX;
	static volatile int64_t t31 = 336357268LL;

	t31 = (((x145<x146)<=x147)-x148);

	if (t31 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x149 = UINT64_MAX;
	int8_t x150 = -1;
	volatile uint32_t x151 = 140499U;
	static uint8_t x152 = 0U;
	int32_t t32 = -6696;

	t32 = (((x149<x150)<=x151)-x152);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x158 = 1U;
	int32_t x159 = -21;
	int32_t x160 = INT32_MAX;
	int32_t t33 = 0;

	t33 = (((x157<x158)<=x159)-x160);

	if (t33 != -2147483647) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x162 = -1;
	static uint16_t x164 = 1U;
	int32_t t34 = -313;

	t34 = (((x161<x162)<=x163)-x164);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x165 = 11U;
	static int8_t x166 = -12;
	uint8_t x168 = 10U;
	int32_t t35 = 1237272;

	t35 = (((x165<x166)<=x167)-x168);

	if (t35 != -9) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x169 = 12494069646500LL;
	static int8_t x170 = INT8_MIN;
	int32_t x171 = INT32_MIN;
	static uint16_t x172 = UINT16_MAX;

	t36 = (((x169<x170)<=x171)-x172);

	if (t36 != -65535) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x174 = INT16_MIN;
	volatile uint64_t t37 = 88783128559LLU;

	t37 = (((x173<x174)<=x175)-x176);

	if (t37 != 18446742835962166330LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint64_t x178 = 1449753272353LLU;
	int64_t x179 = -1LL;
	static uint16_t x180 = UINT16_MAX;
	int32_t t38 = -162405;

	t38 = (((x177<x178)<=x179)-x180);

	if (t38 != -65535) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x181 = -1;
	volatile int64_t x182 = INT64_MIN;
	int64_t x183 = -1LL;
	int64_t x184 = INT64_MAX;
	int64_t t39 = 570585268569LL;

	t39 = (((x181<x182)<=x183)-x184);

	if (t39 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x185 = -13;
	int64_t x188 = INT64_MAX;

	t40 = (((x185<x186)<=x187)-x188);

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = 600U;
	static uint8_t x190 = 1U;
	static int32_t x191 = -1;
	uint32_t x192 = UINT32_MAX;
	static uint32_t t41 = 92286895U;

	t41 = (((x189<x190)<=x191)-x192);

	if (t41 != 1U) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x193 = 474104U;
	int64_t x194 = INT64_MIN;
	int32_t x195 = 15;
	uint8_t x196 = 97U;
	volatile int32_t t42 = 0;

	t42 = (((x193<x194)<=x195)-x196);

	if (t42 != -96) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = 138401LLU;
	uint16_t x198 = UINT16_MAX;
	static uint32_t x200 = UINT32_MAX;
	volatile uint32_t t43 = 23U;

	t43 = (((x197<x198)<=x199)-x200);

	if (t43 != 1U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x201 = INT8_MAX;
	uint32_t x202 = 107074080U;
	static uint32_t x204 = UINT32_MAX;
	volatile uint32_t t44 = 98155U;

	t44 = (((x201<x202)<=x203)-x204);

	if (t44 != 2U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x205 = 0LL;
	int32_t x206 = INT32_MIN;
	static int32_t x207 = INT32_MIN;
	static volatile int64_t x208 = INT64_MAX;
	static int64_t t45 = -790821935770060130LL;

	t45 = (((x205<x206)<=x207)-x208);

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x213 = UINT8_MAX;
	static int16_t x214 = INT16_MIN;
	static int8_t x215 = -3;
	int16_t x216 = -3550;
	volatile int32_t t46 = 10538731;

	t46 = (((x213<x214)<=x215)-x216);

	if (t46 != 3550) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x217 = UINT64_MAX;
	int16_t x219 = -2406;
	static int8_t x220 = 31;
	volatile int32_t t47 = 20559669;

	t47 = (((x217<x218)<=x219)-x220);

	if (t47 != -31) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x226 = INT8_MIN;
	uint8_t x227 = UINT8_MAX;
	int16_t x228 = INT16_MIN;
	volatile int32_t t48 = 50;

	t48 = (((x225<x226)<=x227)-x228);

	if (t48 != 32769) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x229 = 31070U;
	int64_t x230 = 4071871833672057LL;
	static int64_t x231 = INT64_MAX;
	static int32_t t49 = -96;

	t49 = (((x229<x230)<=x231)-x232);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x233 = INT16_MIN;
	static uint16_t x234 = UINT16_MAX;
	int32_t x235 = INT32_MAX;
	int32_t t50 = 8;

	t50 = (((x233<x234)<=x235)-x236);

	if (t50 != 2) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x238 = INT16_MIN;
	int16_t x239 = -1;
	uint64_t x240 = 826260050040LLU;
	volatile uint64_t t51 = 181583LLU;

	t51 = (((x237<x238)<=x239)-x240);

	if (t51 != 18446743247449501576LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x242 = INT64_MAX;
	int32_t x243 = 13866780;
	int8_t x244 = INT8_MAX;

	t52 = (((x241<x242)<=x243)-x244);

	if (t52 != -126) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x245 = 48665825LLU;
	uint16_t x246 = 0U;
	uint32_t x247 = 210U;
	static int64_t x248 = -21892LL;
	static int64_t t53 = 3593343916LL;

	t53 = (((x245<x246)<=x247)-x248);

	if (t53 != 21893LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x250 = -11;
	int32_t x251 = -2973616;
	int16_t x252 = -1;
	int32_t t54 = -12;

	t54 = (((x249<x250)<=x251)-x252);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x253 = -1;
	uint8_t x255 = 101U;
	volatile int32_t t55 = 4;

	t55 = (((x253<x254)<=x255)-x256);

	if (t55 != 129) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x257 = 46U;
	static uint64_t x258 = 69242860816LLU;
	uint32_t x259 = 763610707U;
	int16_t x260 = -1;
	int32_t t56 = -87;

	t56 = (((x257<x258)<=x259)-x260);

	if (t56 != 2) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x261 = -1;
	int32_t t57 = -283960;

	t57 = (((x261<x262)<=x263)-x264);

	if (t57 != 129) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x265 = INT8_MIN;
	static int64_t x266 = INT64_MIN;
	volatile uint16_t x268 = UINT16_MAX;
	static volatile int32_t t58 = 7;

	t58 = (((x265<x266)<=x267)-x268);

	if (t58 != -65534) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int16_t x274 = INT16_MIN;
	int64_t x276 = INT64_MAX;
	int64_t t59 = 1LL;

	t59 = (((x273<x274)<=x275)-x276);

	if (t59 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x277 = INT8_MIN;
	static int16_t x278 = -1;
	static int32_t x279 = -1;
	volatile int16_t x280 = -1;
	static volatile int32_t t60 = -11627;

	t60 = (((x277<x278)<=x279)-x280);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x281 = -1;
	static int8_t x282 = INT8_MIN;
	int8_t x283 = INT8_MAX;
	static volatile int32_t t61 = 150081401;

	t61 = (((x281<x282)<=x283)-x284);

	if (t61 != -10) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x285 = -1LL;
	volatile uint32_t x286 = 63U;
	int16_t x287 = -31;
	int32_t t62 = -414764009;

	t62 = (((x285<x286)<=x287)-x288);

	if (t62 != -32767) { NG(); } else { ; }
	
}

void f63(void) {
	static int32_t x289 = INT32_MIN;
	int8_t x290 = 14;
	uint16_t x291 = 31U;
	volatile uint64_t t63 = 79658137LLU;

	t63 = (((x289<x290)<=x291)-x292);

	if (t63 != 18446744073709550940LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x293 = UINT64_MAX;
	static uint32_t x294 = UINT32_MAX;
	int32_t x295 = -240022637;
	volatile int32_t t64 = 249307;

	t64 = (((x293<x294)<=x295)-x296);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x297 = INT8_MAX;
	int32_t x298 = INT32_MIN;
	uint8_t x300 = 2U;
	volatile int32_t t65 = 98;

	t65 = (((x297<x298)<=x299)-x300);

	if (t65 != -2) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x306 = -855680346822164405LL;
	int8_t x307 = 9;
	int16_t x308 = 5;
	int32_t t66 = -4029;

	t66 = (((x305<x306)<=x307)-x308);

	if (t66 != -4) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x309 = -1LL;
	uint64_t x310 = UINT64_MAX;
	int8_t x311 = INT8_MAX;
	int16_t x312 = INT16_MIN;
	int32_t t67 = 0;

	t67 = (((x309<x310)<=x311)-x312);

	if (t67 != 32769) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = INT16_MIN;
	static int32_t x314 = INT32_MIN;
	volatile int64_t x315 = INT64_MAX;
	int64_t t68 = -50LL;

	t68 = (((x313<x314)<=x315)-x316);

	if (t68 != 2LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x317 = 59U;
	int8_t x318 = 1;
	uint8_t x320 = 0U;
	volatile int32_t t69 = -15477280;

	t69 = (((x317<x318)<=x319)-x320);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = INT64_MIN;
	uint16_t x322 = 5187U;
	volatile int64_t x323 = INT64_MIN;
	uint64_t x324 = UINT64_MAX;

	t70 = (((x321<x322)<=x323)-x324);

	if (t70 != 1LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x325 = INT8_MIN;
	static int64_t x327 = INT64_MIN;
	volatile int64_t t71 = 403LL;

	t71 = (((x325<x326)<=x327)-x328);

	if (t71 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x329 = INT16_MIN;
	int32_t x330 = -1;
	int32_t x331 = 283;
	uint32_t x332 = UINT32_MAX;
	static volatile uint32_t t72 = 461249U;

	t72 = (((x329<x330)<=x331)-x332);

	if (t72 != 2U) { NG(); } else { ; }
	
}

void f73(void) {
	static int64_t x333 = INT64_MIN;
	volatile uint64_t x334 = 99813359210LLU;
	uint16_t x335 = 2254U;
	int64_t x336 = INT64_MAX;
	static volatile int64_t t73 = -3817147409840LL;

	t73 = (((x333<x334)<=x335)-x336);

	if (t73 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = INT8_MAX;
	uint8_t x338 = 0U;
	volatile int32_t x339 = INT32_MAX;

	t74 = (((x337<x338)<=x339)-x340);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x341 = INT64_MIN;
	int64_t x342 = -1LL;
	volatile int64_t x343 = INT64_MIN;
	volatile int64_t x344 = INT64_MAX;
	volatile int64_t t75 = -1369LL;

	t75 = (((x341<x342)<=x343)-x344);

	if (t75 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x345 = INT8_MIN;
	int16_t x346 = INT16_MIN;
	volatile int16_t x348 = INT16_MAX;
	static int32_t t76 = 1;

	t76 = (((x345<x346)<=x347)-x348);

	if (t76 != -32766) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x349 = UINT64_MAX;
	int8_t x350 = INT8_MIN;
	uint32_t x351 = UINT32_MAX;
	int8_t x352 = INT8_MIN;
	int32_t t77 = -15;

	t77 = (((x349<x350)<=x351)-x352);

	if (t77 != 129) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x354 = INT16_MIN;
	int64_t x356 = 6571593554406666LL;
	static int64_t t78 = 509171857236841000LL;

	t78 = (((x353<x354)<=x355)-x356);

	if (t78 != -6571593554406666LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x357 = 91;
	static uint64_t x359 = UINT64_MAX;
	uint64_t x360 = 2011193999943580482LLU;
	static volatile uint64_t t79 = 34314700192964LLU;

	t79 = (((x357<x358)<=x359)-x360);

	if (t79 != 16435550073765971135LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint16_t x361 = UINT16_MAX;
	uint64_t x362 = 11956126LLU;
	static uint16_t x363 = 12U;

	t80 = (((x361<x362)<=x363)-x364);

	if (t80 != -24) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = INT16_MIN;
	uint8_t x368 = 0U;
	static volatile int32_t t81 = 467426319;

	t81 = (((x365<x366)<=x367)-x368);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static uint8_t x369 = UINT8_MAX;
	int8_t x371 = INT8_MIN;
	volatile int64_t t82 = 2065727LL;

	t82 = (((x369<x370)<=x371)-x372);

	if (t82 != -41729840LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x373 = UINT8_MAX;
	static uint64_t x374 = 3702LLU;
	int16_t x375 = INT16_MIN;
	static int16_t x376 = -1;
	volatile int32_t t83 = 53128943;

	t83 = (((x373<x374)<=x375)-x376);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x377 = UINT64_MAX;
	static int16_t x378 = -1;
	volatile int64_t x379 = INT64_MIN;

	t84 = (((x377<x378)<=x379)-x380);

	if (t84 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = INT16_MIN;
	int64_t x386 = -1LL;
	uint8_t x387 = 7U;
	static uint32_t x388 = UINT32_MAX;
	static uint32_t t85 = 711424304U;

	t85 = (((x385<x386)<=x387)-x388);

	if (t85 != 2U) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x389 = UINT32_MAX;
	uint32_t x390 = 675U;
	int32_t x391 = -1;
	uint32_t t86 = 64045U;

	t86 = (((x389<x390)<=x391)-x392);

	if (t86 != 1U) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x394 = 258539U;
	static int16_t x395 = INT16_MIN;
	int64_t x396 = 40363941433722LL;
	int64_t t87 = -274089298411496LL;

	t87 = (((x393<x394)<=x395)-x396);

	if (t87 != -40363941433722LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x398 = INT32_MIN;
	static volatile uint32_t x399 = 803348257U;
	uint16_t x400 = 16882U;
	static int32_t t88 = -1;

	t88 = (((x397<x398)<=x399)-x400);

	if (t88 != -16881) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x402 = 34809769;
	volatile uint8_t x403 = UINT8_MAX;
	int16_t x404 = 360;
	int32_t t89 = 0;

	t89 = (((x401<x402)<=x403)-x404);

	if (t89 != -359) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x405 = UINT16_MAX;
	static uint64_t x406 = UINT64_MAX;
	int8_t x407 = 18;
	static int8_t x408 = INT8_MIN;
	int32_t t90 = -900;

	t90 = (((x405<x406)<=x407)-x408);

	if (t90 != 129) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x410 = INT64_MAX;
	static int8_t x412 = 29;
	int32_t t91 = 110079142;

	t91 = (((x409<x410)<=x411)-x412);

	if (t91 != -29) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x418 = UINT16_MAX;
	int16_t x419 = INT16_MIN;
	int64_t x420 = 635547985LL;
	static int64_t t92 = -414596373LL;

	t92 = (((x417<x418)<=x419)-x420);

	if (t92 != -635547985LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x421 = -1;
	volatile uint8_t x422 = 2U;
	static uint8_t x423 = UINT8_MAX;
	static volatile int8_t x424 = -3;
	volatile int32_t t93 = -1;

	t93 = (((x421<x422)<=x423)-x424);

	if (t93 != 4) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = -1;
	volatile int32_t x430 = -1;
	int8_t x432 = INT8_MAX;
	static int32_t t94 = -38270894;

	t94 = (((x429<x430)<=x431)-x432);

	if (t94 != -126) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x433 = 50U;
	uint32_t x435 = 161234U;
	volatile int32_t t95 = 66;

	t95 = (((x433<x434)<=x435)-x436);

	if (t95 != -32766) { NG(); } else { ; }
	
}

void f96(void) {
	static int8_t x437 = INT8_MIN;
	int8_t x438 = -1;
	int32_t x439 = INT32_MIN;
	volatile int32_t t96 = 1;

	t96 = (((x437<x438)<=x439)-x440);

	if (t96 != 32768) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x441 = -1;
	uint8_t x442 = 3U;
	int64_t x443 = -1LL;
	int32_t x444 = -7723;
	int32_t t97 = 7686;

	t97 = (((x441<x442)<=x443)-x444);

	if (t97 != 7723) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x446 = -1LL;
	int64_t x447 = INT64_MAX;
	volatile uint32_t t98 = 4U;

	t98 = (((x445<x446)<=x447)-x448);

	if (t98 != 2U) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x450 = UINT8_MAX;
	int8_t x451 = INT8_MIN;
	uint32_t x452 = 206U;
	volatile uint32_t t99 = 4046336U;

	t99 = (((x449<x450)<=x451)-x452);

	if (t99 != 4294967090U) { NG(); } else { ; }
	
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

