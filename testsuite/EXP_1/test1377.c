#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x2 = 3;
uint16_t x5 = UINT16_MAX;
uint8_t x21 = 29U;
static volatile uint8_t x24 = 2U;
uint8_t x27 = 7U;
int32_t x36 = INT32_MIN;
static uint8_t x37 = 5U;
volatile int8_t x39 = INT8_MAX;
static int32_t t7 = -40690;
volatile int8_t x41 = INT8_MIN;
int16_t x45 = INT16_MIN;
uint32_t x47 = 8U;
uint32_t t9 = 2093U;
int32_t x50 = -1;
volatile int32_t x54 = -1;
static volatile int64_t x58 = INT64_MIN;
uint16_t x59 = 4U;
static uint32_t t12 = 237453U;
volatile int32_t x71 = -25;
volatile int32_t t13 = 15065;
uint64_t t14 = UINT64_MAX;
static int64_t t15 = 28298236844LL;
int16_t x84 = INT16_MAX;
volatile int64_t t16 = -3169859276987LL;
volatile int64_t x85 = -1LL;
volatile uint16_t x91 = 0U;
int32_t t18 = 1072;
volatile int64_t x98 = -1LL;
int16_t x107 = INT16_MIN;
volatile int32_t t21 = -33;
volatile uint64_t t22 = 27870065875583435LLU;
int64_t x116 = -1LL;
int32_t x120 = -1;
static int32_t t24 = 28;
int8_t x121 = INT8_MIN;
static int8_t x124 = INT8_MIN;
volatile int32_t x127 = 535;
int32_t x128 = -1;
volatile uint64_t t28 = 21LLU;
static int32_t t30 = 8;
uint64_t t33 = UINT64_MAX;
volatile uint8_t x158 = 59U;
int8_t x162 = INT8_MIN;
uint16_t x167 = 2U;
int32_t t36 = -1;
int64_t x177 = INT64_MAX;
int8_t x180 = INT8_MIN;
int64_t t40 = -118131097935068LL;
static int16_t x193 = INT16_MIN;
volatile int32_t t41 = 2549909;
int32_t x202 = INT32_MIN;
int32_t t43 = 97688221;
uint8_t x215 = UINT8_MAX;
int64_t x220 = -1LL;
int64_t x226 = INT64_MIN;
int8_t x231 = INT8_MIN;
static int16_t x233 = INT16_MIN;
uint64_t x235 = 133374416619LLU;
volatile uint32_t t52 = 20584U;
uint16_t x253 = UINT16_MAX;
int8_t x254 = INT8_MAX;
int16_t x257 = INT16_MIN;
uint64_t x264 = 1666773646344LLU;
int8_t x267 = 0;
static uint16_t x285 = 16996U;
volatile uint16_t x296 = 0U;
int64_t x305 = INT64_MIN;
volatile int8_t x311 = INT8_MIN;
int8_t x312 = -2;
volatile int32_t t65 = 10415681;
static volatile int32_t t66 = 3;
int8_t x317 = -1;
static uint64_t x318 = 27LLU;
int32_t x320 = 12;
volatile uint64_t x321 = 183331048088117871LLU;
uint64_t x325 = 222496236529299LLU;
uint32_t t69 = 21U;
static int64_t x331 = INT64_MAX;
uint8_t x332 = 10U;
volatile int32_t x348 = INT32_MIN;
int32_t x349 = INT32_MIN;
volatile int16_t x357 = -1;
static volatile uint8_t x364 = 2U;
int32_t x368 = -1;
uint32_t t81 = 1790272U;
static int32_t x381 = INT32_MAX;
int16_t x390 = INT16_MIN;
static int32_t x392 = INT32_MAX;
static int64_t x395 = INT64_MAX;
int8_t x396 = INT8_MAX;
static uint8_t x405 = UINT8_MAX;
volatile int32_t x421 = INT32_MAX;
uint64_t x428 = 680LLU;
static uint16_t x432 = UINT16_MAX;
static volatile int32_t t94 = -246659251;
int8_t x433 = INT8_MIN;
uint32_t x439 = 6634U;
int8_t x442 = 31;
volatile int16_t x450 = -834;
static int64_t x451 = -1LL;
int64_t t98 = -445465833667538LL;


void f0(void) {
	int8_t x1 = 62;
	int32_t x3 = INT32_MAX;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -20866;

	t0 = (((x1<x2)-x3)|x4);

	if (t0 != -32767) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x6 = 199860744977987640LLU;
	uint16_t x7 = UINT16_MAX;
	volatile int8_t x8 = 37;
	volatile int32_t t1 = -988212380;

	t1 = (((x5<x6)-x7)|x8);

	if (t1 != -65497) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x13 = 94U;
	uint16_t x14 = UINT16_MAX;
	volatile uint64_t x15 = UINT64_MAX;
	int8_t x16 = INT8_MIN;
	static uint64_t t2 = 130366041LLU;

	t2 = (((x13<x14)-x15)|x16);

	if (t2 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x22 = 1;
	int16_t x23 = 0;
	int32_t t3 = 1962403;

	t3 = (((x21<x22)-x23)|x24);

	if (t3 != 2) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x25 = INT16_MIN;
	int16_t x26 = INT16_MIN;
	int64_t x28 = -259866411LL;
	int64_t t4 = -14572547168426LL;

	t4 = (((x25<x26)-x27)|x28);

	if (t4 != -3LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint16_t x29 = 1U;
	int64_t x30 = -20591863006634LL;
	uint64_t x31 = 376715LLU;
	uint32_t x32 = 5465U;
	uint64_t t5 = 20127634LLU;

	t5 = (((x29<x30)-x31)|x32);

	if (t5 != 18446744073709180285LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x33 = 5U;
	uint64_t x34 = UINT64_MAX;
	static int32_t x35 = -512464369;
	int32_t t6 = 1402;

	t6 = (((x33<x34)-x35)|x36);

	if (t6 != -1635019278) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x38 = INT16_MIN;
	static int16_t x40 = -24;

	t7 = (((x37<x38)-x39)|x40);

	if (t7 != -23) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x42 = INT8_MAX;
	int32_t x43 = -957967588;
	int16_t x44 = INT16_MAX;
	int32_t t8 = 5800;

	t8 = (((x41<x42)-x43)|x44);

	if (t8 != 957972479) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x46 = INT16_MIN;
	uint32_t x48 = 196769U;

	t9 = (((x45<x46)-x47)|x48);

	if (t9 != 4294967289U) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x49 = -1;
	volatile int8_t x51 = 62;
	static int16_t x52 = 868;
	volatile int32_t t10 = -60548;

	t10 = (((x49<x50)-x51)|x52);

	if (t10 != -26) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int64_t x53 = 1782024LL;
	int8_t x55 = -1;
	static int32_t x56 = INT32_MIN;
	int32_t t11 = 26771969;

	t11 = (((x53<x54)-x55)|x56);

	if (t11 != -2147483647) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x57 = INT32_MIN;
	volatile uint32_t x60 = 1694U;

	t12 = (((x57<x58)-x59)|x60);

	if (t12 != 4294967294U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x69 = INT32_MAX;
	volatile uint64_t x70 = 1216264320LLU;
	static int16_t x72 = -1;

	t13 = (((x69<x70)-x71)|x72);

	if (t13 != -1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = INT16_MIN;
	int8_t x74 = INT8_MAX;
	uint64_t x75 = 55LLU;
	static uint16_t x76 = UINT16_MAX;

	t14 = (((x73<x74)-x75)|x76);

	if (t14 != UINT64_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x77 = INT32_MAX;
	int32_t x78 = -1;
	uint32_t x79 = 27120036U;
	int64_t x80 = -1LL;

	t15 = (((x77<x78)-x79)|x80);

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x81 = INT8_MIN;
	volatile int64_t x82 = INT64_MAX;
	int64_t x83 = 4615106665643LL;

	t16 = (((x81<x82)-x83)|x84);

	if (t16 != -4615106658305LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x86 = INT8_MIN;
	static int64_t x87 = -1LL;
	volatile uint8_t x88 = 8U;
	volatile int64_t t17 = 428LL;

	t17 = (((x85<x86)-x87)|x88);

	if (t17 != 9LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = 61;
	volatile int16_t x90 = -1373;
	static int8_t x92 = 1;

	t18 = (((x89<x90)-x91)|x92);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x93 = -1;
	int64_t x94 = -1LL;
	volatile int16_t x95 = INT16_MIN;
	volatile uint32_t x96 = 46900110U;
	volatile uint32_t t19 = 2874U;

	t19 = (((x93<x94)-x95)|x96);

	if (t19 != 46900110U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x97 = 891827LL;
	int8_t x99 = -4;
	int8_t x100 = -9;
	int32_t t20 = 761;

	t20 = (((x97<x98)-x99)|x100);

	if (t20 != -9) { NG(); } else { ; }
	
}

void f21(void) {
	static uint16_t x105 = 1U;
	int64_t x106 = INT64_MIN;
	uint16_t x108 = UINT16_MAX;

	t21 = (((x105<x106)-x107)|x108);

	if (t21 != 65535) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x109 = INT16_MIN;
	int32_t x110 = INT32_MIN;
	uint64_t x111 = UINT64_MAX;
	uint32_t x112 = 1U;

	t22 = (((x109<x110)-x111)|x112);

	if (t22 != 1LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x113 = 9U;
	int16_t x114 = -1;
	uint32_t x115 = 9015U;
	static int64_t t23 = -1LL;

	t23 = (((x113<x114)-x115)|x116);

	if (t23 != -1LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x117 = 55U;
	int64_t x118 = 24875620LL;
	static uint8_t x119 = UINT8_MAX;

	t24 = (((x117<x118)-x119)|x120);

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x122 = UINT32_MAX;
	int8_t x123 = -1;
	static volatile int32_t t25 = 18696589;

	t25 = (((x121<x122)-x123)|x124);

	if (t25 != -126) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x125 = INT16_MIN;
	uint8_t x126 = 10U;
	int32_t t26 = -198330150;

	t26 = (((x125<x126)-x127)|x128);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x129 = INT64_MIN;
	uint64_t x130 = 29170530731891LLU;
	int64_t x131 = -337072500414621LL;
	int64_t x132 = INT64_MAX;
	static volatile int64_t t27 = INT64_MAX;

	t27 = (((x129<x130)-x131)|x132);

	if (t27 != INT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x133 = INT8_MAX;
	uint8_t x134 = 0U;
	volatile int8_t x135 = -2;
	uint64_t x136 = 0LLU;

	t28 = (((x133<x134)-x135)|x136);

	if (t28 != 2LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int64_t x137 = -1LL;
	uint32_t x138 = UINT32_MAX;
	int64_t x139 = -118068512039LL;
	int8_t x140 = -3;
	int64_t t29 = 525722525570017861LL;

	t29 = (((x137<x138)-x139)|x140);

	if (t29 != -3LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x141 = -1;
	static int8_t x142 = INT8_MIN;
	int8_t x143 = -1;
	uint16_t x144 = 1U;

	t30 = (((x141<x142)-x143)|x144);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x145 = -1;
	uint8_t x146 = 6U;
	int64_t x147 = INT64_MAX;
	int32_t x148 = INT32_MIN;
	int64_t t31 = 10521169LL;

	t31 = (((x145<x146)-x147)|x148);

	if (t31 != -2147483646LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x149 = UINT8_MAX;
	volatile uint64_t x150 = 702212299350107LLU;
	int16_t x151 = INT16_MAX;
	int64_t x152 = INT64_MAX;
	int64_t t32 = -4309668606LL;

	t32 = (((x149<x150)-x151)|x152);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x153 = 186139016442877LL;
	uint32_t x154 = UINT32_MAX;
	static volatile int32_t x155 = -584725;
	volatile uint64_t x156 = UINT64_MAX;

	t33 = (((x153<x154)-x155)|x156);

	if (t33 != UINT64_MAX) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x157 = 2949U;
	uint16_t x159 = 13U;
	int16_t x160 = INT16_MAX;
	int32_t t34 = -2269;

	t34 = (((x157<x158)-x159)|x160);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x161 = 1000370LLU;
	int32_t x163 = -473;
	int32_t x164 = -1;
	static int32_t t35 = 960574;

	t35 = (((x161<x162)-x163)|x164);

	if (t35 != -1) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x165 = -1;
	int8_t x166 = 9;
	int8_t x168 = INT8_MAX;

	t36 = (((x165<x166)-x167)|x168);

	if (t36 != -1) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x173 = UINT32_MAX;
	uint16_t x174 = UINT16_MAX;
	int8_t x175 = 1;
	int16_t x176 = INT16_MAX;
	int32_t t37 = 2;

	t37 = (((x173<x174)-x175)|x176);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x178 = 1;
	uint64_t x179 = UINT64_MAX;
	volatile uint64_t t38 = 558223677755699309LLU;

	t38 = (((x177<x178)-x179)|x180);

	if (t38 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x181 = INT16_MIN;
	int16_t x182 = -1;
	uint8_t x183 = UINT8_MAX;
	static int32_t x184 = 0;
	volatile int32_t t39 = 2;

	t39 = (((x181<x182)-x183)|x184);

	if (t39 != -254) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x185 = INT64_MIN;
	uint8_t x186 = UINT8_MAX;
	int32_t x187 = -55366;
	static int64_t x188 = -2351075LL;

	t40 = (((x185<x186)-x187)|x188);

	if (t40 != -2295713LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x194 = -1LL;
	volatile int8_t x195 = INT8_MAX;
	int32_t x196 = INT32_MIN;

	t41 = (((x193<x194)-x195)|x196);

	if (t41 != -126) { NG(); } else { ; }
	
}

void f42(void) {
	static uint64_t x197 = 891683LLU;
	int8_t x198 = -1;
	volatile int16_t x199 = 270;
	int8_t x200 = -4;
	int32_t t42 = 5490059;

	t42 = (((x197<x198)-x199)|x200);

	if (t42 != -1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x201 = INT64_MAX;
	static int16_t x203 = 163;
	int32_t x204 = 58;

	t43 = (((x201<x202)-x203)|x204);

	if (t43 != -129) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = 1472U;
	int8_t x210 = INT8_MIN;
	uint16_t x211 = 954U;
	int8_t x212 = -1;
	int32_t t44 = -199483;

	t44 = (((x209<x210)-x211)|x212);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int8_t x213 = -11;
	int32_t x214 = 62;
	uint8_t x216 = UINT8_MAX;
	static volatile int32_t t45 = 7324986;

	t45 = (((x213<x214)-x215)|x216);

	if (t45 != -1) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = INT32_MAX;
	int64_t x218 = -1LL;
	int16_t x219 = -108;
	volatile int64_t t46 = -109423408LL;

	t46 = (((x217<x218)-x219)|x220);

	if (t46 != -1LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x221 = -161998342;
	volatile int32_t x222 = INT32_MIN;
	int32_t x223 = 1;
	uint32_t x224 = 183392915U;
	static uint32_t t47 = UINT32_MAX;

	t47 = (((x221<x222)-x223)|x224);

	if (t47 != UINT32_MAX) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x225 = 44522LLU;
	int64_t x227 = -1LL;
	int32_t x228 = 72771;
	static volatile int64_t t48 = -23149249314LL;

	t48 = (((x225<x226)-x227)|x228);

	if (t48 != 72771LL) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x229 = 7209454395357422730LLU;
	uint16_t x230 = UINT16_MAX;
	uint16_t x232 = UINT16_MAX;
	int32_t t49 = 1;

	t49 = (((x229<x230)-x231)|x232);

	if (t49 != 65535) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x234 = INT16_MAX;
	volatile uint32_t x236 = 861345U;
	static uint64_t t50 = 1368715449152400LLU;

	t50 = (((x233<x234)-x235)|x236);

	if (t50 != 18446743940335922615LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x241 = 0;
	uint32_t x242 = UINT32_MAX;
	static volatile uint16_t x243 = UINT16_MAX;
	int32_t x244 = INT32_MIN;
	int32_t t51 = -243828;

	t51 = (((x241<x242)-x243)|x244);

	if (t51 != -65534) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x245 = UINT64_MAX;
	int64_t x246 = 63LL;
	static uint32_t x247 = 60585U;
	int8_t x248 = INT8_MIN;

	t52 = (((x245<x246)-x247)|x248);

	if (t52 != 4294967255U) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x249 = INT16_MIN;
	uint16_t x250 = 2726U;
	volatile uint8_t x251 = UINT8_MAX;
	int32_t x252 = INT32_MIN;
	volatile int32_t t53 = 0;

	t53 = (((x249<x250)-x251)|x252);

	if (t53 != -254) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x255 = 2U;
	volatile uint16_t x256 = 79U;
	int32_t t54 = -67928364;

	t54 = (((x253<x254)-x255)|x256);

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint8_t x258 = 0U;
	volatile uint16_t x259 = 509U;
	int32_t x260 = 373678727;
	int32_t t55 = -64203;

	t55 = (((x257<x258)-x259)|x260);

	if (t55 != -377) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x261 = UINT64_MAX;
	static int32_t x262 = INT32_MAX;
	volatile int64_t x263 = -1LL;
	volatile uint64_t t56 = 3091259479539LLU;

	t56 = (((x261<x262)-x263)|x264);

	if (t56 != 1666773646345LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x265 = UINT8_MAX;
	int32_t x266 = INT32_MIN;
	uint16_t x268 = UINT16_MAX;
	int32_t t57 = 6832;

	t57 = (((x265<x266)-x267)|x268);

	if (t57 != 65535) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x269 = UINT8_MAX;
	volatile uint64_t x270 = UINT64_MAX;
	int16_t x271 = 0;
	int16_t x272 = INT16_MIN;
	static int32_t t58 = 2;

	t58 = (((x269<x270)-x271)|x272);

	if (t58 != -32767) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = INT32_MIN;
	uint32_t x274 = 158147367U;
	int8_t x275 = INT8_MIN;
	int16_t x276 = -1;
	int32_t t59 = -12530916;

	t59 = (((x273<x274)-x275)|x276);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x277 = 14498U;
	uint16_t x278 = 226U;
	static uint32_t x279 = 16402724U;
	volatile int32_t x280 = 1;
	volatile uint32_t t60 = 202U;

	t60 = (((x277<x278)-x279)|x280);

	if (t60 != 4278564573U) { NG(); } else { ; }
	
}

void f61(void) {
	uint64_t x286 = 441976500136LLU;
	int32_t x287 = -3;
	static int32_t x288 = 11887533;
	volatile int32_t t61 = 31;

	t61 = (((x285<x286)-x287)|x288);

	if (t61 != 11887533) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x289 = 26;
	static uint8_t x290 = 2U;
	uint16_t x291 = 2554U;
	volatile int8_t x292 = INT8_MIN;
	int32_t t62 = -3010;

	t62 = (((x289<x290)-x291)|x292);

	if (t62 != -122) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x293 = 71243618317LLU;
	uint64_t x294 = 10760093LLU;
	int32_t x295 = INT32_MAX;
	volatile int32_t t63 = 0;

	t63 = (((x293<x294)-x295)|x296);

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x306 = INT64_MIN;
	uint8_t x307 = UINT8_MAX;
	volatile int32_t x308 = -1;
	int32_t t64 = -15716509;

	t64 = (((x305<x306)-x307)|x308);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x309 = INT8_MAX;
	volatile uint32_t x310 = 47182U;

	t65 = (((x309<x310)-x311)|x312);

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x313 = INT32_MIN;
	int64_t x314 = -1LL;
	int8_t x315 = INT8_MIN;
	static int16_t x316 = INT16_MAX;

	t66 = (((x313<x314)-x315)|x316);

	if (t66 != 32767) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x319 = 6683986907LL;
	int64_t t67 = 4LL;

	t67 = (((x317<x318)-x319)|x320);

	if (t67 != -6683986899LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x322 = -1;
	uint8_t x323 = UINT8_MAX;
	uint16_t x324 = 591U;
	volatile int32_t t68 = 2936342;

	t68 = (((x321<x322)-x323)|x324);

	if (t68 != -177) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x326 = 68U;
	uint32_t x327 = UINT32_MAX;
	uint16_t x328 = UINT16_MAX;

	t69 = (((x325<x326)-x327)|x328);

	if (t69 != 65535U) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x329 = 331828230;
	int16_t x330 = INT16_MIN;
	static int64_t t70 = 26965950293890882LL;

	t70 = (((x329<x330)-x331)|x332);

	if (t70 != -9223372036854775797LL) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x333 = UINT64_MAX;
	static int32_t x334 = INT32_MIN;
	volatile uint16_t x335 = UINT16_MAX;
	int32_t x336 = INT32_MIN;
	int32_t t71 = 639;

	t71 = (((x333<x334)-x335)|x336);

	if (t71 != -65535) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x337 = -1;
	int32_t x338 = 21;
	volatile int16_t x339 = INT16_MIN;
	static uint8_t x340 = UINT8_MAX;
	int32_t t72 = -2714;

	t72 = (((x337<x338)-x339)|x340);

	if (t72 != 33023) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x341 = 437752U;
	volatile uint32_t x342 = 1019206U;
	int64_t x343 = 9LL;
	int64_t x344 = INT64_MIN;
	int64_t t73 = 16779167697556906LL;

	t73 = (((x341<x342)-x343)|x344);

	if (t73 != -8LL) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x345 = UINT8_MAX;
	volatile int32_t x346 = -1;
	int64_t x347 = INT64_MAX;
	static volatile int64_t t74 = 1771008866LL;

	t74 = (((x345<x346)-x347)|x348);

	if (t74 != -2147483647LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x350 = 1U;
	int32_t x351 = -5745634;
	int64_t x352 = -1LL;
	int64_t t75 = -4406289883150416LL;

	t75 = (((x349<x350)-x351)|x352);

	if (t75 != -1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x353 = -16;
	volatile int64_t x354 = INT64_MAX;
	static int64_t x355 = -185442648LL;
	int64_t x356 = INT64_MAX;
	int64_t t76 = INT64_MAX;

	t76 = (((x353<x354)-x355)|x356);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x358 = INT8_MAX;
	int8_t x359 = INT8_MAX;
	uint32_t x360 = UINT32_MAX;
	uint32_t t77 = UINT32_MAX;

	t77 = (((x357<x358)-x359)|x360);

	if (t77 != UINT32_MAX) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x361 = INT16_MAX;
	uint64_t x362 = 3161363284LLU;
	volatile uint16_t x363 = UINT16_MAX;
	int32_t t78 = 4639;

	t78 = (((x361<x362)-x363)|x364);

	if (t78 != -65534) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x365 = INT64_MIN;
	uint16_t x366 = UINT16_MAX;
	uint8_t x367 = UINT8_MAX;
	int32_t t79 = 915657527;

	t79 = (((x365<x366)-x367)|x368);

	if (t79 != -1) { NG(); } else { ; }
	
}

void f80(void) {
	static int64_t x369 = -1LL;
	uint64_t x370 = UINT64_MAX;
	int64_t x371 = 108075LL;
	static volatile int32_t x372 = INT32_MIN;
	int64_t t80 = -855LL;

	t80 = (((x369<x370)-x371)|x372);

	if (t80 != -108075LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x373 = -56LL;
	uint64_t x374 = 6413892757711546561LLU;
	uint32_t x375 = 1259242U;
	int32_t x376 = 732240283;

	t81 = (((x373<x374)-x375)|x376);

	if (t81 != 4293777823U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x377 = 166167;
	int32_t x378 = INT32_MAX;
	int16_t x379 = 31;
	volatile uint8_t x380 = 0U;
	int32_t t82 = 90110023;

	t82 = (((x377<x378)-x379)|x380);

	if (t82 != -30) { NG(); } else { ; }
	
}

void f83(void) {
	uint32_t x382 = 50073U;
	int16_t x383 = INT16_MIN;
	int64_t x384 = INT64_MIN;
	volatile int64_t t83 = 129046867782967762LL;

	t83 = (((x381<x382)-x383)|x384);

	if (t83 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x385 = UINT32_MAX;
	static int8_t x386 = -1;
	int16_t x387 = INT16_MIN;
	int32_t x388 = INT32_MIN;
	volatile int32_t t84 = 735278058;

	t84 = (((x385<x386)-x387)|x388);

	if (t84 != -2147450880) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x389 = UINT32_MAX;
	int16_t x391 = -1011;
	int32_t t85 = INT32_MAX;

	t85 = (((x389<x390)-x391)|x392);

	if (t85 != INT32_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x393 = INT16_MAX;
	static int32_t x394 = INT32_MAX;
	int64_t t86 = -85LL;

	t86 = (((x393<x394)-x395)|x396);

	if (t86 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x397 = INT8_MIN;
	int16_t x398 = INT16_MIN;
	static int8_t x399 = -16;
	int16_t x400 = -5;
	volatile int32_t t87 = 170;

	t87 = (((x397<x398)-x399)|x400);

	if (t87 != -5) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x401 = -17494830521338650LL;
	uint8_t x402 = 2U;
	static int32_t x403 = 7449;
	int32_t x404 = INT32_MAX;
	volatile int32_t t88 = -94;

	t88 = (((x401<x402)-x403)|x404);

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x406 = 30U;
	volatile int16_t x407 = -1;
	int8_t x408 = INT8_MIN;
	static int32_t t89 = -6;

	t89 = (((x405<x406)-x407)|x408);

	if (t89 != -127) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x409 = 7331;
	static int64_t x410 = -1LL;
	int32_t x411 = INT32_MAX;
	static uint64_t x412 = 342112772LLU;
	uint64_t t90 = 30647LLU;

	t90 = (((x409<x410)-x411)|x412);

	if (t90 != 18446744071904180741LLU) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x413 = 78;
	static int16_t x414 = -1;
	volatile int64_t x415 = -1LL;
	int64_t x416 = INT64_MIN;
	volatile int64_t t91 = -195247950595017810LL;

	t91 = (((x413<x414)-x415)|x416);

	if (t91 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x422 = INT8_MIN;
	int32_t x423 = 330719;
	int16_t x424 = INT16_MAX;
	volatile int32_t t92 = -1259019;

	t92 = (((x421<x422)-x423)|x424);

	if (t92 != -327681) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x425 = 0U;
	static int32_t x426 = INT32_MIN;
	int16_t x427 = INT16_MIN;
	volatile uint64_t t93 = 672534889900838376LLU;

	t93 = (((x425<x426)-x427)|x428);

	if (t93 != 33448LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = INT8_MIN;
	volatile int32_t x430 = INT32_MAX;
	int8_t x431 = 3;

	t94 = (((x429<x430)-x431)|x432);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x434 = INT16_MAX;
	int16_t x435 = 434;
	uint16_t x436 = UINT16_MAX;
	int32_t t95 = -20231;

	t95 = (((x433<x434)-x435)|x436);

	if (t95 != -1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x437 = 45425388862LL;
	static int16_t x438 = -1;
	uint64_t x440 = 118179435323LLU;
	volatile uint64_t t96 = 58462LLU;

	t96 = (((x437<x438)-x439)|x440);

	if (t96 != 120259082047LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x441 = INT8_MAX;
	int64_t x443 = INT64_MAX;
	int32_t x444 = INT32_MAX;
	volatile int64_t t97 = 644604240282024548LL;

	t97 = (((x441<x442)-x443)|x444);

	if (t97 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x449 = INT64_MIN;
	int64_t x452 = -2975455812033LL;

	t98 = (((x449<x450)-x451)|x452);

	if (t98 != -2975455812033LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = -1LL;
	static uint16_t x454 = 432U;
	volatile int64_t x455 = 183587873661972LL;
	uint16_t x456 = 9U;
	volatile int64_t t99 = -215LL;

	t99 = (((x453<x454)-x455)|x456);

	if (t99 != -183587873661971LL) { NG(); } else { ; }
	
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

