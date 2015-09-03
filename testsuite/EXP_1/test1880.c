#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x3 = INT16_MAX;
int32_t t0 = -1;
volatile int32_t t1 = 2473422;
int32_t t2 = 277301400;
int8_t x13 = INT8_MIN;
static int16_t x25 = INT16_MIN;
uint8_t x32 = 8U;
int32_t x33 = 43494;
static uint32_t x34 = 0U;
static int32_t t11 = 365;
uint16_t x55 = 2U;
volatile int32_t t12 = -11318995;
static int8_t x58 = INT8_MAX;
uint32_t x61 = 175715099U;
static int16_t x63 = 8;
volatile int64_t x66 = -1603624417LL;
uint32_t x68 = 54U;
volatile int32_t t15 = -50783916;
int64_t x70 = INT64_MIN;
volatile int32_t t16 = -2853463;
uint16_t x76 = 1U;
volatile int32_t t17 = 785393481;
int64_t x78 = -193221971LL;
int16_t x88 = 71;
volatile int32_t x89 = INT32_MIN;
static volatile uint32_t x90 = 1U;
volatile int32_t t21 = 14592549;
int16_t x98 = -1;
uint16_t x128 = 9U;
static volatile int32_t t27 = -864;
int32_t x129 = INT32_MAX;
static int64_t x130 = -1LL;
int16_t x136 = -88;
volatile uint64_t x138 = 964LLU;
static uint16_t x143 = 1U;
static int32_t t31 = -330689;
uint16_t x146 = 2443U;
uint8_t x150 = 3U;
int64_t x153 = -1LL;
int8_t x160 = INT8_MIN;
volatile int64_t x161 = INT64_MAX;
int64_t x164 = 11764LL;
uint64_t x167 = UINT64_MAX;
volatile int32_t x169 = -6776514;
volatile int64_t x176 = -1LL;
int32_t x181 = INT32_MIN;
uint16_t x182 = 1151U;
int32_t t41 = -2777;
int64_t x193 = -1LL;
volatile uint16_t x198 = UINT16_MAX;
volatile int32_t x212 = -1;
static int16_t x221 = INT16_MIN;
uint8_t x222 = UINT8_MAX;
int32_t x223 = 398752999;
volatile int32_t t51 = 30124;
int64_t x227 = -1LL;
int8_t x229 = INT8_MAX;
volatile uint8_t x230 = 47U;
int32_t t53 = -2276839;
int16_t x244 = INT16_MIN;
volatile int8_t x246 = INT8_MIN;
int8_t x251 = INT8_MAX;
int64_t x253 = INT64_MIN;
int64_t x254 = INT64_MAX;
int16_t x260 = 1;
int8_t x263 = INT8_MIN;
volatile int16_t x266 = INT16_MIN;
static int8_t x268 = INT8_MAX;
int16_t x269 = -13;
int64_t x270 = INT64_MAX;
int64_t x276 = INT64_MIN;
volatile int16_t x281 = INT16_MIN;
static int16_t x288 = INT16_MIN;
static int8_t x290 = INT8_MIN;
volatile int64_t x295 = INT64_MIN;
volatile int32_t t69 = 9;
int64_t x299 = -383553853821738421LL;
uint64_t x301 = 247856LLU;
static int32_t x307 = INT32_MAX;
volatile int64_t x311 = 29873032865513LL;
volatile int32_t t73 = -3797643;
int64_t x313 = -1LL;
static volatile int8_t x315 = INT8_MAX;
volatile int16_t x320 = -1;
int32_t t75 = 1984;
volatile int8_t x326 = -1;
static int16_t x328 = INT16_MIN;
int32_t t77 = -314524;
int16_t x335 = INT16_MIN;
volatile int32_t t82 = 19;
static int16_t x353 = INT16_MIN;
int8_t x354 = INT8_MIN;
uint32_t x358 = 438U;
uint32_t x360 = 115U;
static uint16_t x374 = 56U;
int16_t x381 = INT16_MIN;
int64_t x385 = INT64_MIN;
uint8_t x388 = 1U;
volatile int32_t t92 = 6370034;
int64_t x408 = 1526323820275LL;
uint16_t x410 = UINT16_MAX;
int32_t t98 = -1072096270;
uint64_t x417 = UINT64_MAX;


void f0(void) {
	int64_t x1 = -27000383498703385LL;
	int32_t x2 = -1;
	static volatile uint8_t x4 = UINT8_MAX;

	t0 = (((x1|x2)-x3)==x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 481LLU;
	static volatile int8_t x6 = -1;
	int64_t x7 = INT64_MIN;
	uint8_t x8 = 4U;

	t1 = (((x5|x6)-x7)==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	uint64_t x10 = 1342220LLU;
	int8_t x11 = INT8_MIN;
	uint8_t x12 = 56U;

	t2 = (((x9|x10)-x11)==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x14 = 106U;
	int64_t x15 = INT64_MIN;
	volatile int64_t x16 = -32553211364787788LL;
	volatile int32_t t3 = -418179855;

	t3 = (((x13|x14)-x15)==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int16_t x17 = 28;
	volatile int32_t x18 = -1;
	int32_t x19 = 5;
	int8_t x20 = INT8_MIN;
	int32_t t4 = 2255541;

	t4 = (((x17|x18)-x19)==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint32_t x21 = 403U;
	static int16_t x22 = -1;
	static uint16_t x23 = 88U;
	volatile int32_t x24 = -1;
	static int32_t t5 = -56024;

	t5 = (((x21|x22)-x23)==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int8_t x26 = INT8_MAX;
	volatile int32_t x27 = -1;
	static int32_t x28 = -59865720;
	int32_t t6 = -403;

	t6 = (((x25|x26)-x27)==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MAX;
	static int16_t x30 = -1;
	static uint16_t x31 = 1U;
	volatile int32_t t7 = 1034295;

	t7 = (((x29|x30)-x31)==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x35 = UINT16_MAX;
	static int8_t x36 = -1;
	volatile int32_t t8 = 65;

	t8 = (((x33|x34)-x35)==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	volatile uint16_t x38 = 16551U;
	uint16_t x39 = 6212U;
	int16_t x40 = INT16_MIN;
	static volatile int32_t t9 = -115;

	t9 = (((x37|x38)-x39)==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = 0U;
	int16_t x46 = 25;
	volatile int64_t x47 = -1LL;
	int8_t x48 = -1;
	int32_t t10 = 193608;

	t10 = (((x45|x46)-x47)==x48);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = UINT16_MAX;
	uint8_t x50 = 1U;
	static int16_t x51 = -10;
	int64_t x52 = INT64_MAX;

	t11 = (((x49|x50)-x51)==x52);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = -1;
	int8_t x54 = INT8_MIN;
	volatile int64_t x56 = 1510473112LL;

	t12 = (((x53|x54)-x55)==x56);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = 2;
	int16_t x59 = INT16_MIN;
	int16_t x60 = 0;
	int32_t t13 = -66317338;

	t13 = (((x57|x58)-x59)==x60);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = INT8_MIN;
	uint64_t x64 = 17019543848025LLU;
	volatile int32_t t14 = -31;

	t14 = (((x61|x62)-x63)==x64);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = INT64_MAX;
	volatile int32_t x67 = INT32_MIN;

	t15 = (((x65|x66)-x67)==x68);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MAX;
	int32_t x71 = INT32_MIN;
	int32_t x72 = -20;

	t16 = (((x69|x70)-x71)==x72);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int16_t x73 = 58;
	static uint16_t x74 = 1994U;
	static int8_t x75 = INT8_MIN;

	t17 = (((x73|x74)-x75)==x76);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x77 = INT16_MIN;
	uint64_t x79 = 124223419701649404LLU;
	static uint8_t x80 = 20U;
	volatile int32_t t18 = 180175664;

	t18 = (((x77|x78)-x79)==x80);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x81 = -1;
	volatile int64_t x82 = INT64_MIN;
	static volatile int64_t x83 = INT64_MIN;
	int32_t x84 = INT32_MIN;
	volatile int32_t t19 = -1;

	t19 = (((x81|x82)-x83)==x84);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 9LLU;
	uint16_t x86 = 0U;
	static uint16_t x87 = 1U;
	int32_t t20 = 5801592;

	t20 = (((x85|x86)-x87)==x88);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x91 = INT8_MIN;
	int32_t x92 = 62636916;

	t21 = (((x89|x90)-x91)==x92);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x97 = 325479U;
	int32_t x99 = -2474;
	static int16_t x100 = INT16_MAX;
	static volatile int32_t t22 = -62;

	t22 = (((x97|x98)-x99)==x100);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = INT16_MAX;
	volatile int8_t x106 = -1;
	static int16_t x107 = 361;
	static int8_t x108 = INT8_MIN;
	volatile int32_t t23 = 10;

	t23 = (((x105|x106)-x107)==x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = -308;
	int64_t x114 = INT64_MIN;
	int16_t x115 = -25;
	uint16_t x116 = 12614U;
	int32_t t24 = 1;

	t24 = (((x113|x114)-x115)==x116);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x117 = -1LL;
	int8_t x118 = INT8_MIN;
	int8_t x119 = INT8_MIN;
	int16_t x120 = INT16_MIN;
	volatile int32_t t25 = -37314;

	t25 = (((x117|x118)-x119)==x120);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x121 = 0U;
	uint8_t x122 = UINT8_MAX;
	volatile int8_t x123 = 0;
	int16_t x124 = -1;
	static int32_t t26 = -4;

	t26 = (((x121|x122)-x123)==x124);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = INT8_MIN;
	int64_t x126 = 1902382LL;
	int16_t x127 = -1;

	t27 = (((x125|x126)-x127)==x128);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x131 = INT32_MAX;
	int32_t x132 = -1;
	volatile int32_t t28 = -13;

	t28 = (((x129|x130)-x131)==x132);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x133 = UINT64_MAX;
	uint64_t x134 = 7786347916922LLU;
	int16_t x135 = -29;
	int32_t t29 = -12650;

	t29 = (((x133|x134)-x135)==x136);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x137 = INT16_MIN;
	int16_t x139 = 751;
	int32_t x140 = INT32_MIN;
	volatile int32_t t30 = -1424;

	t30 = (((x137|x138)-x139)==x140);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x141 = INT32_MIN;
	static int8_t x142 = -5;
	volatile int16_t x144 = INT16_MIN;

	t31 = (((x141|x142)-x143)==x144);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile int32_t x145 = 5943484;
	uint8_t x147 = UINT8_MAX;
	int32_t x148 = -164231;
	int32_t t32 = 243835936;

	t32 = (((x145|x146)-x147)==x148);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = -41;
	uint8_t x151 = UINT8_MAX;
	int32_t x152 = -3000691;
	int32_t t33 = 100983297;

	t33 = (((x149|x150)-x151)==x152);

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x154 = -294083970640445160LL;
	int64_t x155 = -650LL;
	static volatile uint8_t x156 = UINT8_MAX;
	int32_t t34 = -3;

	t34 = (((x153|x154)-x155)==x156);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = 4543755U;
	volatile int16_t x158 = -1;
	int16_t x159 = -1;
	volatile int32_t t35 = 1069;

	t35 = (((x157|x158)-x159)==x160);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x162 = UINT64_MAX;
	int8_t x163 = INT8_MIN;
	volatile int32_t t36 = -13508;

	t36 = (((x161|x162)-x163)==x164);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = 0;
	static int32_t x166 = 50407037;
	static int32_t x168 = INT32_MIN;
	static volatile int32_t t37 = -9034422;

	t37 = (((x165|x166)-x167)==x168);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x170 = 30757561;
	uint8_t x171 = 4U;
	static uint16_t x172 = UINT16_MAX;
	int32_t t38 = 26651830;

	t38 = (((x169|x170)-x171)==x172);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x173 = 1;
	uint16_t x174 = UINT16_MAX;
	int16_t x175 = 25;
	static int32_t t39 = 6;

	t39 = (((x173|x174)-x175)==x176);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x177 = 26;
	uint32_t x178 = 318053805U;
	uint32_t x179 = 9523U;
	static int8_t x180 = INT8_MAX;
	int32_t t40 = -273830487;

	t40 = (((x177|x178)-x179)==x180);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x183 = -1;
	uint16_t x184 = 1U;

	t41 = (((x181|x182)-x183)==x184);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x185 = INT16_MAX;
	uint32_t x186 = 5655U;
	int32_t x187 = 7;
	volatile int16_t x188 = INT16_MIN;
	volatile int32_t t42 = 20488287;

	t42 = (((x185|x186)-x187)==x188);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x189 = -96330;
	static int16_t x190 = 0;
	uint16_t x191 = 251U;
	static uint64_t x192 = UINT64_MAX;
	int32_t t43 = 11;

	t43 = (((x189|x190)-x191)==x192);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x194 = -3;
	uint32_t x195 = 10U;
	volatile int64_t x196 = INT64_MIN;
	volatile int32_t t44 = -7883113;

	t44 = (((x193|x194)-x195)==x196);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x197 = INT32_MIN;
	volatile int16_t x199 = INT16_MIN;
	uint8_t x200 = UINT8_MAX;
	int32_t t45 = 915279304;

	t45 = (((x197|x198)-x199)==x200);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x201 = INT8_MAX;
	static volatile int32_t x202 = -484300;
	uint64_t x203 = 17274922948LLU;
	uint16_t x204 = 95U;
	static int32_t t46 = 45068142;

	t46 = (((x201|x202)-x203)==x204);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x205 = -1;
	int64_t x206 = INT64_MAX;
	int32_t x207 = -1;
	uint32_t x208 = 287273837U;
	static volatile int32_t t47 = 54477385;

	t47 = (((x205|x206)-x207)==x208);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x209 = INT8_MAX;
	volatile uint32_t x210 = UINT32_MAX;
	int16_t x211 = INT16_MAX;
	volatile int32_t t48 = -2880009;

	t48 = (((x209|x210)-x211)==x212);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x213 = -10105024;
	uint64_t x214 = 162LLU;
	static volatile int64_t x215 = INT64_MIN;
	int16_t x216 = INT16_MAX;
	int32_t t49 = -31535;

	t49 = (((x213|x214)-x215)==x216);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x217 = 76U;
	uint8_t x218 = 58U;
	uint32_t x219 = UINT32_MAX;
	static int8_t x220 = INT8_MIN;
	static int32_t t50 = -5240;

	t50 = (((x217|x218)-x219)==x220);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x224 = INT32_MIN;

	t51 = (((x221|x222)-x223)==x224);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x225 = -1;
	int32_t x226 = INT32_MAX;
	int32_t x228 = INT32_MIN;
	int32_t t52 = -12386820;

	t52 = (((x225|x226)-x227)==x228);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x231 = INT8_MIN;
	uint16_t x232 = 587U;

	t53 = (((x229|x230)-x231)==x232);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = INT32_MIN;
	static uint8_t x234 = 21U;
	uint8_t x235 = 0U;
	static int32_t x236 = 22;
	int32_t t54 = -2;

	t54 = (((x233|x234)-x235)==x236);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = -17983066826402835LL;
	uint8_t x238 = UINT8_MAX;
	volatile uint16_t x239 = 0U;
	int64_t x240 = INT64_MAX;
	int32_t t55 = 14657002;

	t55 = (((x237|x238)-x239)==x240);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x241 = -151;
	int16_t x242 = 1;
	uint16_t x243 = 0U;
	int32_t t56 = 3308055;

	t56 = (((x241|x242)-x243)==x244);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = 863663720U;
	static int8_t x247 = INT8_MIN;
	volatile uint16_t x248 = 110U;
	volatile int32_t t57 = -7332066;

	t57 = (((x245|x246)-x247)==x248);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x249 = -1;
	static int64_t x250 = -1LL;
	int8_t x252 = -6;
	int32_t t58 = 3332;

	t58 = (((x249|x250)-x251)==x252);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x255 = INT8_MAX;
	int64_t x256 = INT64_MAX;
	int32_t t59 = -466680873;

	t59 = (((x253|x254)-x255)==x256);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x257 = -1;
	static uint64_t x258 = 52985143276LLU;
	static int32_t x259 = 356350;
	int32_t t60 = -5981;

	t60 = (((x257|x258)-x259)==x260);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint32_t x261 = 1727U;
	volatile int16_t x262 = 80;
	int16_t x264 = INT16_MIN;
	volatile int32_t t61 = -5129754;

	t61 = (((x261|x262)-x263)==x264);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x265 = INT32_MAX;
	int16_t x267 = 0;
	static int32_t t62 = 227;

	t62 = (((x265|x266)-x267)==x268);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x271 = 60U;
	int8_t x272 = -13;
	volatile int32_t t63 = 271305;

	t63 = (((x269|x270)-x271)==x272);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int16_t x273 = -1;
	int16_t x274 = -1;
	int32_t x275 = INT32_MIN;
	int32_t t64 = -3;

	t64 = (((x273|x274)-x275)==x276);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x277 = INT8_MIN;
	static uint8_t x278 = 2U;
	volatile uint16_t x279 = 149U;
	int64_t x280 = -1LL;
	static int32_t t65 = -339;

	t65 = (((x277|x278)-x279)==x280);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x282 = 34098551U;
	uint16_t x283 = 256U;
	volatile int32_t x284 = -1;
	int32_t t66 = 1633050;

	t66 = (((x281|x282)-x283)==x284);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x285 = 125007285LL;
	int32_t x286 = INT32_MIN;
	int32_t x287 = -1;
	int32_t t67 = 3149;

	t67 = (((x285|x286)-x287)==x288);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x289 = 49287301839114LLU;
	int8_t x291 = INT8_MIN;
	uint64_t x292 = 1887754636195LLU;
	volatile int32_t t68 = 54848;

	t68 = (((x289|x290)-x291)==x292);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x293 = -1;
	static uint16_t x294 = UINT16_MAX;
	volatile uint16_t x296 = 210U;

	t69 = (((x293|x294)-x295)==x296);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x297 = UINT8_MAX;
	int8_t x298 = 1;
	uint32_t x300 = UINT32_MAX;
	int32_t t70 = -479;

	t70 = (((x297|x298)-x299)==x300);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static uint8_t x302 = UINT8_MAX;
	uint16_t x303 = 4U;
	volatile int64_t x304 = INT64_MIN;
	volatile int32_t t71 = 370744781;

	t71 = (((x301|x302)-x303)==x304);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x305 = INT32_MAX;
	volatile int32_t x306 = 6614;
	int64_t x308 = -1LL;
	static int32_t t72 = -31703;

	t72 = (((x305|x306)-x307)==x308);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x309 = INT32_MIN;
	int32_t x310 = 5307;
	static uint64_t x312 = UINT64_MAX;

	t73 = (((x309|x310)-x311)==x312);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x314 = UINT32_MAX;
	static volatile uint16_t x316 = 1U;
	int32_t t74 = -55038;

	t74 = (((x313|x314)-x315)==x316);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x317 = -20688;
	uint8_t x318 = 0U;
	volatile int8_t x319 = 7;

	t75 = (((x317|x318)-x319)==x320);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x321 = -159;
	int32_t x322 = -13097;
	int64_t x323 = INT64_MIN;
	uint64_t x324 = 18274282305LLU;
	int32_t t76 = -11782;

	t76 = (((x321|x322)-x323)==x324);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint64_t x325 = UINT64_MAX;
	int64_t x327 = INT64_MIN;

	t77 = (((x325|x326)-x327)==x328);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x329 = INT8_MIN;
	int8_t x330 = 3;
	static int8_t x331 = INT8_MIN;
	volatile int8_t x332 = INT8_MIN;
	static volatile int32_t t78 = -105200;

	t78 = (((x329|x330)-x331)==x332);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x333 = -1;
	static int16_t x334 = INT16_MIN;
	static uint32_t x336 = 2899919U;
	int32_t t79 = 125832591;

	t79 = (((x333|x334)-x335)==x336);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x337 = 1242;
	static int16_t x338 = INT16_MAX;
	static uint64_t x339 = 3330778LLU;
	int32_t x340 = -1;
	static int32_t t80 = -1698;

	t80 = (((x337|x338)-x339)==x340);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = INT8_MAX;
	uint32_t x342 = UINT32_MAX;
	static int64_t x343 = 7776553048179388LL;
	static uint8_t x344 = 7U;
	volatile int32_t t81 = 3084;

	t81 = (((x341|x342)-x343)==x344);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x345 = INT16_MIN;
	int32_t x346 = INT32_MIN;
	volatile int32_t x347 = -1;
	volatile int16_t x348 = -1;

	t82 = (((x345|x346)-x347)==x348);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x349 = 65182LLU;
	uint8_t x350 = 63U;
	static int8_t x351 = INT8_MIN;
	int16_t x352 = INT16_MIN;
	int32_t t83 = 108;

	t83 = (((x349|x350)-x351)==x352);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x355 = 11480U;
	int32_t x356 = -721;
	int32_t t84 = -226205;

	t84 = (((x353|x354)-x355)==x356);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x357 = 1041225LLU;
	int64_t x359 = -147982662LL;
	volatile int32_t t85 = 1114;

	t85 = (((x357|x358)-x359)==x360);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x365 = INT16_MIN;
	volatile uint32_t x366 = 366398638U;
	uint16_t x367 = UINT16_MAX;
	int16_t x368 = -1;
	int32_t t86 = -5512479;

	t86 = (((x365|x366)-x367)==x368);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x369 = -1LL;
	int16_t x370 = 1;
	int16_t x371 = -1;
	int16_t x372 = 3922;
	volatile int32_t t87 = -766105656;

	t87 = (((x369|x370)-x371)==x372);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x373 = -1LL;
	int8_t x375 = INT8_MIN;
	int16_t x376 = -1;
	volatile int32_t t88 = 33260;

	t88 = (((x373|x374)-x375)==x376);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x377 = -1LL;
	int32_t x378 = -4543217;
	int8_t x379 = -19;
	int16_t x380 = INT16_MIN;
	static int32_t t89 = -1784;

	t89 = (((x377|x378)-x379)==x380);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile uint8_t x382 = 27U;
	static volatile int32_t x383 = -1;
	int64_t x384 = INT64_MIN;
	int32_t t90 = 16;

	t90 = (((x381|x382)-x383)==x384);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x386 = -1;
	volatile uint8_t x387 = UINT8_MAX;
	int32_t t91 = 2089984;

	t91 = (((x385|x386)-x387)==x388);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x389 = 20U;
	int32_t x390 = INT32_MIN;
	uint32_t x391 = 3U;
	uint64_t x392 = 236710727972LLU;

	t92 = (((x389|x390)-x391)==x392);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x393 = 45U;
	int64_t x394 = INT64_MIN;
	int32_t x395 = INT32_MIN;
	volatile int16_t x396 = INT16_MAX;
	int32_t t93 = 112;

	t93 = (((x393|x394)-x395)==x396);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x397 = -1LL;
	int16_t x398 = INT16_MAX;
	int8_t x399 = -1;
	int8_t x400 = 0;
	volatile int32_t t94 = -25;

	t94 = (((x397|x398)-x399)==x400);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x401 = 102U;
	int16_t x402 = -473;
	static volatile uint64_t x403 = UINT64_MAX;
	int16_t x404 = INT16_MIN;
	int32_t t95 = 617762415;

	t95 = (((x401|x402)-x403)==x404);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x405 = 24506U;
	volatile int16_t x406 = INT16_MIN;
	uint8_t x407 = UINT8_MAX;
	int32_t t96 = -121016534;

	t96 = (((x405|x406)-x407)==x408);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x409 = 4472149LLU;
	uint32_t x411 = 1216366U;
	int8_t x412 = INT8_MIN;
	int32_t t97 = -2897985;

	t97 = (((x409|x410)-x411)==x412);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x413 = INT64_MIN;
	uint32_t x414 = 213U;
	static int16_t x415 = -1;
	static int64_t x416 = -1LL;

	t98 = (((x413|x414)-x415)==x416);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x418 = INT8_MIN;
	int16_t x419 = INT16_MIN;
	static int64_t x420 = INT64_MIN;
	volatile int32_t t99 = 4371498;

	t99 = (((x417|x418)-x419)==x420);

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

