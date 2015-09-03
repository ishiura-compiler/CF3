#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x6 = INT32_MAX;
int8_t x15 = INT8_MIN;
int64_t x16 = -17987307726302375LL;
int8_t x18 = 0;
uint64_t x19 = UINT64_MAX;
uint32_t x23 = 869U;
static volatile int8_t x24 = -2;
int32_t t5 = -1;
volatile int32_t x30 = 1779699;
int32_t x34 = 67;
uint64_t x36 = 3990314LLU;
volatile int16_t x47 = -2;
uint8_t x48 = 68U;
uint16_t x53 = 2753U;
volatile uint32_t x54 = 5U;
volatile int32_t t12 = 519644561;
int32_t t14 = 60981419;
uint8_t x66 = 0U;
static int32_t x69 = INT32_MIN;
uint64_t x71 = 15873039LLU;
volatile uint8_t x78 = 0U;
int32_t t19 = -206963;
int32_t x90 = INT32_MIN;
volatile int32_t x92 = -1;
int8_t x94 = INT8_MIN;
uint8_t x95 = UINT8_MAX;
int32_t x96 = -393;
uint32_t x98 = UINT32_MAX;
volatile int16_t x100 = INT16_MIN;
static volatile uint32_t x102 = 73784U;
volatile int8_t x105 = 47;
static uint16_t x106 = 3U;
static volatile int32_t x110 = -1;
uint8_t x112 = 6U;
static volatile uint64_t x124 = 890645242697624319LLU;
int8_t x130 = -1;
static volatile int32_t t30 = -57;
int32_t x133 = 55;
static int16_t x134 = INT16_MIN;
uint64_t x147 = 50823847132LLU;
int32_t t34 = -34350661;
static int16_t x150 = INT16_MIN;
uint64_t x152 = UINT64_MAX;
static int32_t t35 = -12;
int32_t x153 = -3359;
uint8_t x154 = 7U;
static uint8_t x155 = UINT8_MAX;
uint64_t x160 = 61553647169271LLU;
static int8_t x164 = INT8_MIN;
int8_t x167 = -25;
static volatile int16_t x171 = INT16_MAX;
volatile int16_t x187 = 26;
volatile int32_t t44 = 29778;
int32_t t45 = 26875;
volatile int32_t x195 = 5;
static int32_t x201 = -1;
uint16_t x204 = 3111U;
static int32_t t48 = -2668850;
volatile uint16_t x205 = 24U;
int16_t x206 = INT16_MIN;
volatile uint64_t x207 = 109275600343716LLU;
uint16_t x208 = 0U;
static int8_t x212 = INT8_MIN;
int16_t x213 = INT16_MIN;
int64_t x216 = INT64_MAX;
uint64_t x219 = 29LLU;
volatile int32_t x223 = 6;
static int16_t x231 = INT16_MAX;
uint8_t x233 = 13U;
int8_t x236 = INT8_MIN;
uint64_t x240 = UINT64_MAX;
int64_t x245 = INT64_MIN;
int8_t x246 = INT8_MIN;
static int16_t x248 = INT16_MIN;
volatile uint32_t x252 = 31U;
uint32_t x262 = UINT32_MAX;
int8_t x265 = -1;
int8_t x266 = INT8_MIN;
int64_t x268 = INT64_MAX;
static volatile int8_t x269 = INT8_MAX;
static uint64_t x270 = UINT64_MAX;
static int32_t t64 = 373242;
int64_t x273 = INT64_MIN;
int16_t x274 = -1;
int16_t x275 = INT16_MAX;
int8_t x282 = -1;
int16_t x283 = INT16_MIN;
volatile int32_t t67 = -2963;
static int64_t x296 = INT64_MIN;
int32_t t69 = -1195;
uint8_t x301 = 3U;
uint16_t x304 = UINT16_MAX;
static uint64_t x307 = 880237244936LLU;
volatile uint16_t x313 = 0U;
int64_t x319 = INT64_MIN;
static int32_t x323 = INT32_MIN;
uint8_t x330 = 0U;
int32_t t78 = -17272;
volatile uint32_t x339 = UINT32_MAX;
int32_t t81 = 980367;
static volatile int32_t t83 = 16601186;
int16_t x358 = -1;
uint8_t x361 = 2U;
int8_t x363 = INT8_MIN;
volatile int32_t x382 = INT32_MAX;
uint8_t x384 = 0U;
volatile int32_t t91 = -29410;
static uint64_t x403 = 29850LLU;
int32_t t94 = 13;
int16_t x416 = INT16_MAX;
int32_t t97 = 3;
int16_t x417 = -1;
static int64_t x419 = INT64_MIN;


void f0(void) {
	static volatile uint64_t x1 = UINT64_MAX;
	int16_t x2 = INT16_MIN;
	static volatile int8_t x3 = INT8_MAX;
	static int16_t x4 = -1;
	volatile int32_t t0 = -23070547;

	t0 = (x1<=((x2/x3)&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int8_t x5 = -30;
	int8_t x7 = INT8_MIN;
	int64_t x8 = -232LL;
	volatile int32_t t1 = 3354;

	t1 = (x5<=((x6/x7)&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile int64_t x10 = INT64_MAX;
	int32_t x11 = -2;
	static int64_t x12 = -101LL;
	int32_t t2 = -190767;

	t2 = (x9<=((x10/x11)&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = 19LL;
	int32_t x14 = -1;
	volatile int32_t t3 = 927175;

	t3 = (x13<=((x14/x15)&x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x17 = INT32_MIN;
	static int16_t x20 = -1;
	volatile int32_t t4 = 27;

	t4 = (x17<=((x18/x19)&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 229805069U;
	static int8_t x22 = INT8_MIN;

	t5 = (x21<=((x22/x23)&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 699479205270LLU;
	int32_t x26 = -1;
	int16_t x27 = INT16_MAX;
	uint32_t x28 = UINT32_MAX;
	int32_t t6 = 6277795;

	t6 = (x25<=((x26/x27)&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -1LL;
	int64_t x31 = 111257LL;
	int32_t x32 = INT32_MIN;
	static int32_t t7 = -542319;

	t7 = (x29<=((x30/x31)&x32));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	uint16_t x35 = 21136U;
	volatile int32_t t8 = -6461903;

	t8 = (x33<=((x34/x35)&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	volatile int16_t x38 = INT16_MAX;
	int32_t x39 = INT32_MAX;
	int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 69;

	t9 = (x37<=((x38/x39)&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -91;
	int16_t x46 = -1;
	volatile int32_t t10 = 6642;

	t10 = (x45<=((x46/x47)&x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x49 = INT8_MIN;
	volatile int32_t x50 = -13388;
	volatile int64_t x51 = INT64_MIN;
	volatile uint8_t x52 = 36U;
	int32_t t11 = 14648;

	t11 = (x49<=((x50/x51)&x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x55 = 2117;
	uint32_t x56 = UINT32_MAX;

	t12 = (x53<=((x54/x55)&x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int8_t x57 = -1;
	uint8_t x58 = 24U;
	int16_t x59 = INT16_MIN;
	int64_t x60 = -1LL;
	int32_t t13 = -22;

	t13 = (x57<=((x58/x59)&x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static int32_t x61 = INT32_MIN;
	int16_t x62 = INT16_MAX;
	static int8_t x63 = INT8_MIN;
	int16_t x64 = INT16_MIN;

	t14 = (x61<=((x62/x63)&x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = -1LL;
	int32_t x67 = 96052919;
	int16_t x68 = 0;
	int32_t t15 = 64737799;

	t15 = (x65<=((x66/x67)&x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x70 = 21991233420498279LL;
	int32_t x72 = INT32_MAX;
	volatile int32_t t16 = 2588490;

	t16 = (x69<=((x70/x71)&x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = 303539977U;
	int64_t x74 = INT64_MAX;
	int8_t x75 = -1;
	uint16_t x76 = 23240U;
	static volatile int32_t t17 = 2321186;

	t17 = (x73<=((x74/x75)&x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -1;
	int32_t x79 = INT32_MIN;
	static volatile int64_t x80 = INT64_MIN;
	int32_t t18 = -262351;

	t18 = (x77<=((x78/x79)&x80));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MAX;
	int64_t x83 = 4LL;
	static uint32_t x84 = 924524U;

	t19 = (x81<=((x82/x83)&x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x85 = INT16_MIN;
	uint16_t x86 = 87U;
	int8_t x87 = 10;
	int32_t x88 = INT32_MAX;
	int32_t t20 = -5;

	t20 = (x85<=((x86/x87)&x88));

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x89 = -13687;
	int64_t x91 = INT64_MIN;
	int32_t t21 = -988490829;

	t21 = (x89<=((x90/x91)&x92));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x93 = -71;
	static volatile int32_t t22 = -96;

	t22 = (x93<=((x94/x95)&x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x97 = -1;
	static int8_t x99 = -13;
	int32_t t23 = -101403;

	t23 = (x97<=((x98/x99)&x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MIN;
	volatile uint32_t x103 = 2186662U;
	volatile uint16_t x104 = 6508U;
	static volatile int32_t t24 = 26959;

	t24 = (x101<=((x102/x103)&x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int16_t x107 = INT16_MIN;
	int64_t x108 = 1684218016734840409LL;
	volatile int32_t t25 = -15;

	t25 = (x105<=((x106/x107)&x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x109 = -1;
	int8_t x111 = INT8_MAX;
	volatile int32_t t26 = 10366;

	t26 = (x109<=((x110/x111)&x112));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x113 = 1U;
	int64_t x114 = INT64_MIN;
	int64_t x115 = INT64_MAX;
	static volatile int8_t x116 = 44;
	static volatile int32_t t27 = -3;

	t27 = (x113<=((x114/x115)&x116));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint16_t x121 = 17U;
	int8_t x122 = 1;
	uint32_t x123 = 60898845U;
	int32_t t28 = 947863908;

	t28 = (x121<=((x122/x123)&x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int64_t x125 = -1LL;
	uint32_t x126 = UINT32_MAX;
	uint32_t x127 = 572393U;
	uint64_t x128 = 2674621742049237700LLU;
	int32_t t29 = 0;

	t29 = (x125<=((x126/x127)&x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x129 = 22;
	volatile int32_t x131 = 292237;
	volatile int32_t x132 = INT32_MAX;

	t30 = (x129<=((x130/x131)&x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x135 = -1LL;
	uint8_t x136 = 11U;
	int32_t t31 = -125304210;

	t31 = (x133<=((x134/x135)&x136));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x137 = INT64_MIN;
	int8_t x138 = INT8_MIN;
	volatile int16_t x139 = -1;
	uint64_t x140 = 30375LLU;
	int32_t t32 = 51467;

	t32 = (x137<=((x138/x139)&x140));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x141 = -1;
	int32_t x142 = -1;
	int16_t x143 = INT16_MIN;
	volatile uint64_t x144 = 145LLU;
	int32_t t33 = -27;

	t33 = (x141<=((x142/x143)&x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x145 = INT32_MIN;
	uint32_t x146 = UINT32_MAX;
	volatile uint16_t x148 = 393U;

	t34 = (x145<=((x146/x147)&x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x149 = 0;
	int16_t x151 = -1;

	t35 = (x149<=((x150/x151)&x152));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x156 = INT32_MAX;
	static volatile int32_t t36 = 7735692;

	t36 = (x153<=((x154/x155)&x156));

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x157 = INT32_MIN;
	volatile int32_t x158 = 5463;
	static int64_t x159 = INT64_MIN;
	volatile int32_t t37 = -1;

	t37 = (x157<=((x158/x159)&x160));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x161 = UINT8_MAX;
	int8_t x162 = INT8_MIN;
	uint8_t x163 = 25U;
	int32_t t38 = -37574;

	t38 = (x161<=((x162/x163)&x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint32_t x165 = 4U;
	static int32_t x166 = INT32_MIN;
	volatile int16_t x168 = 255;
	int32_t t39 = -1;

	t39 = (x165<=((x166/x167)&x168));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x169 = -49729;
	int8_t x170 = -1;
	int32_t x172 = -1;
	int32_t t40 = 13;

	t40 = (x169<=((x170/x171)&x172));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x173 = INT64_MIN;
	uint64_t x174 = UINT64_MAX;
	uint32_t x175 = 38U;
	int64_t x176 = -127773461137452298LL;
	int32_t t41 = 741478;

	t41 = (x173<=((x174/x175)&x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x177 = INT64_MIN;
	int8_t x178 = INT8_MIN;
	int32_t x179 = -1145709;
	volatile int16_t x180 = INT16_MIN;
	static volatile int32_t t42 = 1;

	t42 = (x177<=((x178/x179)&x180));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x181 = -1;
	int32_t x182 = 65250432;
	static int32_t x183 = INT32_MIN;
	int16_t x184 = INT16_MIN;
	int32_t t43 = 32;

	t43 = (x181<=((x182/x183)&x184));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x185 = UINT16_MAX;
	uint32_t x186 = 37337691U;
	volatile int8_t x188 = -1;

	t44 = (x185<=((x186/x187)&x188));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint64_t x189 = 8655291LLU;
	int32_t x190 = INT32_MIN;
	int64_t x191 = 230069174385922162LL;
	int8_t x192 = -2;

	t45 = (x189<=((x190/x191)&x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x193 = INT32_MIN;
	uint64_t x194 = UINT64_MAX;
	int64_t x196 = INT64_MAX;
	static volatile int32_t t46 = 3;

	t46 = (x193<=((x194/x195)&x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x197 = 48U;
	int64_t x198 = -3394LL;
	int64_t x199 = INT64_MIN;
	uint32_t x200 = UINT32_MAX;
	volatile int32_t t47 = 3;

	t47 = (x197<=((x198/x199)&x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x202 = 78U;
	static int64_t x203 = INT64_MIN;

	t48 = (x201<=((x202/x203)&x204));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t t49 = -323571;

	t49 = (x205<=((x206/x207)&x208));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	static int16_t x209 = 94;
	static int16_t x210 = INT16_MIN;
	static int8_t x211 = INT8_MAX;
	volatile int32_t t50 = 210;

	t50 = (x209<=((x210/x211)&x212));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x214 = UINT32_MAX;
	int8_t x215 = -1;
	int32_t t51 = -1025031010;

	t51 = (x213<=((x214/x215)&x216));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	static int16_t x217 = INT16_MAX;
	uint32_t x218 = 15U;
	volatile uint32_t x220 = 2107893U;
	volatile int32_t t52 = 187;

	t52 = (x217<=((x218/x219)&x220));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x221 = 127945U;
	volatile int8_t x222 = INT8_MIN;
	int16_t x224 = -1;
	static int32_t t53 = -449;

	t53 = (x221<=((x222/x223)&x224));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x229 = UINT16_MAX;
	volatile int16_t x230 = INT16_MIN;
	static int64_t x232 = -1274LL;
	static volatile int32_t t54 = -29891;

	t54 = (x229<=((x230/x231)&x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x234 = INT8_MIN;
	int32_t x235 = -1;
	int32_t t55 = -15897;

	t55 = (x233<=((x234/x235)&x236));

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x237 = 598482531436534406LLU;
	uint8_t x238 = 0U;
	volatile int32_t x239 = INT32_MIN;
	int32_t t56 = 412;

	t56 = (x237<=((x238/x239)&x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int64_t x241 = INT64_MAX;
	int16_t x242 = INT16_MAX;
	int32_t x243 = -244887;
	uint32_t x244 = UINT32_MAX;
	volatile int32_t t57 = 2973761;

	t57 = (x241<=((x242/x243)&x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x247 = 60;
	int32_t t58 = 96050373;

	t58 = (x245<=((x246/x247)&x248));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint32_t x249 = UINT32_MAX;
	int8_t x250 = 38;
	static int16_t x251 = -1;
	volatile int32_t t59 = 0;

	t59 = (x249<=((x250/x251)&x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x253 = INT32_MIN;
	static int8_t x254 = 0;
	static int64_t x255 = INT64_MIN;
	static int16_t x256 = -1;
	volatile int32_t t60 = -1;

	t60 = (x253<=((x254/x255)&x256));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = INT64_MIN;
	static volatile int32_t x258 = 1;
	int64_t x259 = -1LL;
	volatile uint16_t x260 = UINT16_MAX;
	int32_t t61 = -6;

	t61 = (x257<=((x258/x259)&x260));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x261 = 4U;
	static int64_t x263 = INT64_MIN;
	int32_t x264 = 7610327;
	volatile int32_t t62 = -1522521;

	t62 = (x261<=((x262/x263)&x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	static uint16_t x267 = UINT16_MAX;
	int32_t t63 = -1130090;

	t63 = (x265<=((x266/x267)&x268));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x271 = 11LLU;
	uint64_t x272 = 40119LLU;

	t64 = (x269<=((x270/x271)&x272));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x276 = INT64_MIN;
	volatile int32_t t65 = -1799204;

	t65 = (x273<=((x274/x275)&x276));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x277 = -1;
	uint64_t x278 = 2208325LLU;
	volatile int8_t x279 = 16;
	static uint8_t x280 = UINT8_MAX;
	int32_t t66 = -92;

	t66 = (x277<=((x278/x279)&x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x281 = -1;
	int32_t x284 = -9041;

	t67 = (x281<=((x282/x283)&x284));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x289 = INT64_MIN;
	int64_t x290 = INT64_MAX;
	volatile uint32_t x291 = UINT32_MAX;
	int64_t x292 = INT64_MIN;
	int32_t t68 = 2;

	t68 = (x289<=((x290/x291)&x292));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = INT8_MIN;
	uint8_t x294 = 19U;
	int32_t x295 = 105989;

	t69 = (x293<=((x294/x295)&x296));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x297 = INT16_MIN;
	int8_t x298 = 1;
	uint8_t x299 = UINT8_MAX;
	uint64_t x300 = UINT64_MAX;
	volatile int32_t t70 = -46190;

	t70 = (x297<=((x298/x299)&x300));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x302 = -1;
	uint8_t x303 = 41U;
	int32_t t71 = -35901076;

	t71 = (x301<=((x302/x303)&x304));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static int8_t x305 = -1;
	int32_t x306 = -260692;
	static int16_t x308 = 472;
	volatile int32_t t72 = -4966;

	t72 = (x305<=((x306/x307)&x308));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x309 = 12177348863944LL;
	int16_t x310 = INT16_MAX;
	static int8_t x311 = INT8_MAX;
	uint16_t x312 = 3397U;
	int32_t t73 = -99;

	t73 = (x309<=((x310/x311)&x312));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x314 = 18;
	int64_t x315 = INT64_MAX;
	int64_t x316 = INT64_MIN;
	int32_t t74 = 71443491;

	t74 = (x313<=((x314/x315)&x316));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x317 = -1LL;
	int8_t x318 = INT8_MIN;
	volatile uint32_t x320 = UINT32_MAX;
	volatile int32_t t75 = -560511;

	t75 = (x317<=((x318/x319)&x320));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x321 = 1;
	uint32_t x322 = 1137U;
	uint64_t x324 = UINT64_MAX;
	int32_t t76 = 1584;

	t76 = (x321<=((x322/x323)&x324));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x325 = INT64_MAX;
	int64_t x326 = INT64_MIN;
	volatile uint16_t x327 = UINT16_MAX;
	static uint64_t x328 = 0LLU;
	int32_t t77 = -331;

	t77 = (x325<=((x326/x327)&x328));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x329 = 6276U;
	int16_t x331 = -1;
	static volatile uint32_t x332 = 9114U;

	t78 = (x329<=((x330/x331)&x332));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint8_t x333 = 106U;
	int16_t x334 = -1;
	int16_t x335 = -1;
	static int16_t x336 = 0;
	static int32_t t79 = 8;

	t79 = (x333<=((x334/x335)&x336));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x337 = INT64_MIN;
	int8_t x338 = -1;
	volatile uint8_t x340 = 27U;
	int32_t t80 = 139;

	t80 = (x337<=((x338/x339)&x340));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x341 = INT32_MIN;
	uint8_t x342 = 18U;
	int64_t x343 = 1928471033148205959LL;
	int8_t x344 = INT8_MIN;

	t81 = (x341<=((x342/x343)&x344));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x345 = INT32_MIN;
	int64_t x346 = INT64_MAX;
	int64_t x347 = -1LL;
	int8_t x348 = INT8_MAX;
	volatile int32_t t82 = -48422;

	t82 = (x345<=((x346/x347)&x348));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x349 = -1LL;
	volatile int16_t x350 = INT16_MIN;
	uint16_t x351 = UINT16_MAX;
	uint8_t x352 = 6U;

	t83 = (x349<=((x350/x351)&x352));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x353 = INT32_MIN;
	uint16_t x354 = 17421U;
	volatile uint16_t x355 = 4U;
	int32_t x356 = INT32_MIN;
	int32_t t84 = 0;

	t84 = (x353<=((x354/x355)&x356));

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x357 = 69;
	int64_t x359 = 58687419LL;
	int64_t x360 = INT64_MAX;
	volatile int32_t t85 = 7552326;

	t85 = (x357<=((x358/x359)&x360));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int32_t x362 = -26;
	int16_t x364 = -1;
	volatile int32_t t86 = -44773;

	t86 = (x361<=((x362/x363)&x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int8_t x373 = 0;
	volatile uint64_t x374 = 1040419225LLU;
	int8_t x375 = -1;
	uint64_t x376 = UINT64_MAX;
	volatile int32_t t87 = 2072;

	t87 = (x373<=((x374/x375)&x376));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x377 = INT32_MAX;
	int32_t x378 = INT32_MIN;
	volatile int64_t x379 = -1LL;
	static int32_t x380 = INT32_MIN;
	int32_t t88 = -24238;

	t88 = (x377<=((x378/x379)&x380));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x381 = INT32_MIN;
	static int64_t x383 = -34204204362LL;
	int32_t t89 = 3894461;

	t89 = (x381<=((x382/x383)&x384));

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x385 = UINT16_MAX;
	uint8_t x386 = 33U;
	uint16_t x387 = 73U;
	int8_t x388 = INT8_MAX;
	int32_t t90 = -1;

	t90 = (x385<=((x386/x387)&x388));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x389 = -14591;
	volatile int8_t x390 = 1;
	static int8_t x391 = INT8_MAX;
	static int16_t x392 = -25;

	t91 = (x389<=((x390/x391)&x392));

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = INT16_MIN;
	int32_t x394 = -13093391;
	int32_t x395 = -1808;
	static int64_t x396 = INT64_MIN;
	int32_t t92 = 500220;

	t92 = (x393<=((x394/x395)&x396));

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x397 = -2039;
	volatile uint16_t x398 = 411U;
	uint64_t x399 = UINT64_MAX;
	uint16_t x400 = UINT16_MAX;
	volatile int32_t t93 = -515160;

	t93 = (x397<=((x398/x399)&x400));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int8_t x401 = -1;
	static int16_t x402 = 50;
	int16_t x404 = -1;

	t94 = (x401<=((x402/x403)&x404));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x405 = UINT32_MAX;
	int8_t x406 = 3;
	volatile uint8_t x407 = UINT8_MAX;
	static int32_t x408 = -1;
	volatile int32_t t95 = 15912;

	t95 = (x405<=((x406/x407)&x408));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x409 = UINT16_MAX;
	uint32_t x410 = 310U;
	int8_t x411 = INT8_MIN;
	int32_t x412 = 1;
	static int32_t t96 = 140934242;

	t96 = (x409<=((x410/x411)&x412));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int64_t x413 = -2264233604505213688LL;
	static uint8_t x414 = UINT8_MAX;
	static int16_t x415 = INT16_MIN;

	t97 = (x413<=((x414/x415)&x416));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x418 = 2543140800920179LL;
	uint8_t x420 = 13U;
	static int32_t t98 = 141;

	t98 = (x417<=((x418/x419)&x420));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static uint8_t x421 = 85U;
	volatile uint16_t x422 = 1U;
	static int8_t x423 = 3;
	static uint64_t x424 = 3878LLU;
	int32_t t99 = 0;

	t99 = (x421<=((x422/x423)&x424));

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

