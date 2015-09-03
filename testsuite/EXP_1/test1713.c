#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t1 = -163;
int32_t x9 = 271870;
uint8_t x11 = UINT8_MAX;
int32_t x20 = -426117;
volatile int32_t t3 = 0;
uint32_t x25 = 3876857U;
int32_t t5 = 1;
uint8_t x30 = UINT8_MAX;
static int32_t x32 = 0;
volatile int32_t t6 = 15713;
volatile int32_t x55 = INT32_MAX;
int16_t x66 = INT16_MAX;
uint16_t x79 = 1179U;
int64_t x81 = -24582192LL;
uint16_t x85 = 1U;
volatile int16_t x86 = INT16_MAX;
static volatile int32_t t17 = -502895;
volatile int64_t x98 = -20668765802821375LL;
uint64_t x107 = 7010496482602LLU;
volatile int32_t t21 = -5481;
static volatile int32_t t22 = -130836;
uint64_t x126 = 4733616715004913LLU;
int64_t x130 = INT64_MIN;
static int32_t x133 = -1;
uint16_t x134 = 43U;
static uint16_t x140 = UINT16_MAX;
uint16_t x141 = UINT16_MAX;
uint8_t x159 = 3U;
int32_t x172 = INT32_MAX;
static uint16_t x175 = UINT16_MAX;
volatile int32_t t36 = 2965788;
static volatile int32_t t37 = 41;
volatile int16_t x187 = INT16_MIN;
uint64_t x188 = 6781043896LLU;
int32_t x190 = -8683;
volatile int32_t x192 = -5472406;
int8_t x199 = -1;
volatile int8_t x200 = -45;
uint32_t x205 = 956530U;
volatile uint64_t x217 = UINT64_MAX;
volatile int32_t t46 = 3182;
uint8_t x233 = 15U;
uint64_t x234 = 45352543818729LLU;
volatile int32_t t48 = -18;
uint64_t x254 = 29389540LLU;
int32_t x266 = -1;
int16_t x267 = 19;
uint16_t x269 = 4402U;
uint64_t x270 = 316870861LLU;
int16_t x271 = INT16_MIN;
volatile int32_t t56 = 1;
static volatile uint16_t x277 = UINT16_MAX;
uint8_t x278 = UINT8_MAX;
static uint16_t x279 = UINT16_MAX;
volatile int32_t t58 = -56;
uint32_t x288 = 1799U;
int32_t t59 = -2546;
int16_t x295 = INT16_MAX;
int64_t x297 = -6846375724074LL;
volatile int32_t t61 = 77433;
int16_t x313 = -1;
int8_t x322 = INT8_MIN;
int8_t x323 = 1;
int16_t x326 = INT16_MIN;
uint8_t x328 = 72U;
int32_t x334 = 66295864;
volatile int32_t t71 = -3;
int32_t x346 = INT32_MIN;
volatile int32_t x352 = -1;
int32_t t73 = 258297236;
static int64_t x360 = 202384666576LL;
int8_t x365 = INT8_MAX;
uint16_t x366 = 6104U;
int64_t x375 = -1LL;
uint64_t x377 = 2648LLU;
int16_t x380 = INT16_MIN;
static uint32_t x382 = 4781333U;
static int8_t x386 = -1;
volatile uint8_t x387 = UINT8_MAX;
volatile uint64_t x390 = 23109809LLU;
static volatile uint16_t x396 = UINT16_MAX;
volatile int32_t t84 = 421607;
int32_t t85 = 352;
volatile int16_t x409 = -22;
uint64_t x412 = UINT64_MAX;
int32_t t88 = 259072;
int16_t x421 = 114;
int32_t x423 = 5999671;
int32_t t90 = -6408;
static int32_t x427 = -1;
static int16_t x432 = INT16_MIN;
volatile int64_t x433 = INT64_MIN;
int64_t x441 = -1LL;
int32_t x442 = 84;
int32_t t95 = 1;
int8_t x445 = 1;
int8_t x448 = INT8_MAX;
volatile int32_t x456 = INT32_MIN;
int8_t x457 = INT8_MIN;
int8_t x459 = -1;
int32_t t99 = -284079;


void f0(void) {
	uint8_t x1 = 33U;
	int32_t x2 = INT32_MIN;
	int64_t x3 = -1LL;
	uint64_t x4 = 32123LLU;
	volatile int32_t t0 = 895;

	t0 = (((x1&x2)-x3)<=x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint32_t x6 = UINT32_MAX;
	volatile int8_t x7 = -1;
	int32_t x8 = -1;

	t1 = (((x5&x6)-x7)<=x8);

	if (t1 != 1) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x10 = UINT8_MAX;
	static uint64_t x12 = 3531963LLU;
	int32_t t2 = -3080478;

	t2 = (((x9&x10)-x11)<=x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x17 = UINT16_MAX;
	int16_t x18 = -82;
	uint32_t x19 = 153U;

	t3 = (((x17&x18)-x19)<=x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x21 = 2LLU;
	uint64_t x22 = UINT64_MAX;
	volatile int16_t x23 = INT16_MIN;
	uint8_t x24 = 1U;
	volatile int32_t t4 = 34780401;

	t4 = (((x21&x22)-x23)<=x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x26 = 21404706509LLU;
	int64_t x27 = INT64_MIN;
	uint32_t x28 = UINT32_MAX;

	t5 = (((x25&x26)-x27)<=x28);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = -37;
	static uint64_t x31 = 57LLU;

	t6 = (((x29&x30)-x31)<=x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	int16_t x34 = -1008;
	int64_t x35 = INT64_MIN;
	int8_t x36 = INT8_MIN;
	volatile int32_t t7 = -646103;

	t7 = (((x33&x34)-x35)<=x36);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x37 = 40;
	int8_t x38 = INT8_MIN;
	uint64_t x39 = 321LLU;
	uint64_t x40 = 1072909LLU;
	static int32_t t8 = 6;

	t8 = (((x37&x38)-x39)<=x40);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x41 = -1LL;
	static int16_t x42 = -2862;
	static volatile int16_t x43 = 5;
	volatile uint64_t x44 = 17260243616235LLU;
	int32_t t9 = -1789;

	t9 = (((x41&x42)-x43)<=x44);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint8_t x49 = 13U;
	uint64_t x50 = UINT64_MAX;
	static int64_t x51 = INT64_MIN;
	static volatile int64_t x52 = INT64_MIN;
	volatile int32_t t10 = -3415506;

	t10 = (((x49&x50)-x51)<=x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x53 = 0U;
	volatile int8_t x54 = 33;
	uint64_t x56 = UINT64_MAX;
	volatile int32_t t11 = -31558;

	t11 = (((x53&x54)-x55)<=x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x61 = INT64_MAX;
	static uint64_t x62 = 118LLU;
	uint32_t x63 = UINT32_MAX;
	uint64_t x64 = 2434LLU;
	volatile int32_t t12 = 11779646;

	t12 = (((x61&x62)-x63)<=x64);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x65 = -109704947;
	int8_t x67 = INT8_MIN;
	int16_t x68 = INT16_MAX;
	volatile int32_t t13 = 1198677;

	t13 = (((x65&x66)-x67)<=x68);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x77 = -1;
	int16_t x78 = 1;
	int32_t x80 = INT32_MAX;
	volatile int32_t t14 = -649;

	t14 = (((x77&x78)-x79)<=x80);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x82 = INT8_MIN;
	int16_t x83 = 627;
	volatile uint32_t x84 = 57U;
	volatile int32_t t15 = 1898334;

	t15 = (((x81&x82)-x83)<=x84);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x87 = INT64_MAX;
	uint16_t x88 = 2007U;
	volatile int32_t t16 = -2696528;

	t16 = (((x85&x86)-x87)<=x88);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x89 = 2U;
	uint32_t x90 = UINT32_MAX;
	int16_t x91 = INT16_MIN;
	static int8_t x92 = INT8_MIN;

	t17 = (((x89&x90)-x91)<=x92);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x97 = -1;
	int32_t x99 = 2146981;
	static volatile int32_t x100 = -1;
	static volatile int32_t t18 = -611;

	t18 = (((x97&x98)-x99)<=x100);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x101 = 20U;
	uint8_t x102 = UINT8_MAX;
	int32_t x103 = 11774;
	uint16_t x104 = 6U;
	volatile int32_t t19 = -10791;

	t19 = (((x101&x102)-x103)<=x104);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x105 = 0U;
	uint64_t x106 = 7084LLU;
	static int32_t x108 = INT32_MIN;
	volatile int32_t t20 = -413180602;

	t20 = (((x105&x106)-x107)<=x108);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int16_t x109 = INT16_MIN;
	int32_t x110 = -1;
	int16_t x111 = INT16_MAX;
	int32_t x112 = INT32_MAX;

	t21 = (((x109&x110)-x111)<=x112);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x113 = 111191794;
	uint64_t x114 = 19210817373LLU;
	int16_t x115 = INT16_MIN;
	volatile int8_t x116 = INT8_MIN;

	t22 = (((x113&x114)-x115)<=x116);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x121 = -1;
	int32_t x122 = -527;
	int8_t x123 = 5;
	uint32_t x124 = 0U;
	volatile int32_t t23 = -1459158;

	t23 = (((x121&x122)-x123)<=x124);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x125 = 28695499LL;
	int16_t x127 = 1;
	static int16_t x128 = INT16_MIN;
	volatile int32_t t24 = 583243196;

	t24 = (((x125&x126)-x127)<=x128);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x129 = INT16_MAX;
	uint8_t x131 = UINT8_MAX;
	uint8_t x132 = 1U;
	static volatile int32_t t25 = 228;

	t25 = (((x129&x130)-x131)<=x132);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x135 = -7249665460LL;
	int8_t x136 = -1;
	volatile int32_t t26 = 72;

	t26 = (((x133&x134)-x135)<=x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x137 = -383682058;
	static volatile uint16_t x138 = 29U;
	int64_t x139 = 32265405LL;
	int32_t t27 = 820;

	t27 = (((x137&x138)-x139)<=x140);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x142 = INT32_MAX;
	static volatile int32_t x143 = 15966408;
	int8_t x144 = INT8_MIN;
	volatile int32_t t28 = -47403;

	t28 = (((x141&x142)-x143)<=x144);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x149 = 14U;
	static int64_t x150 = 37LL;
	int32_t x151 = INT32_MAX;
	uint16_t x152 = 485U;
	volatile int32_t t29 = -1;

	t29 = (((x149&x150)-x151)<=x152);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x153 = 83973U;
	static uint16_t x154 = 20602U;
	int64_t x155 = INT64_MAX;
	volatile uint32_t x156 = 77340U;
	static int32_t t30 = 80;

	t30 = (((x153&x154)-x155)<=x156);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x157 = 23U;
	int16_t x158 = INT16_MIN;
	static uint16_t x160 = 1267U;
	volatile int32_t t31 = -406869;

	t31 = (((x157&x158)-x159)<=x160);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x161 = INT64_MAX;
	uint8_t x162 = 12U;
	volatile uint8_t x163 = UINT8_MAX;
	uint16_t x164 = 120U;
	static volatile int32_t t32 = 27594;

	t32 = (((x161&x162)-x163)<=x164);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x165 = INT16_MAX;
	volatile int8_t x166 = INT8_MAX;
	static int32_t x167 = 608;
	uint8_t x168 = 62U;
	volatile int32_t t33 = 7;

	t33 = (((x165&x166)-x167)<=x168);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x169 = 926U;
	int64_t x170 = INT64_MIN;
	int16_t x171 = INT16_MIN;
	int32_t t34 = -4124;

	t34 = (((x169&x170)-x171)<=x172);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x173 = 61U;
	uint16_t x174 = 18U;
	volatile int8_t x176 = INT8_MIN;
	volatile int32_t t35 = -1;

	t35 = (((x173&x174)-x175)<=x176);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x177 = -1114;
	uint32_t x178 = 35U;
	int8_t x179 = -3;
	int8_t x180 = INT8_MAX;

	t36 = (((x177&x178)-x179)<=x180);

	if (t36 != 1) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x181 = 13099U;
	int32_t x182 = -1;
	int64_t x183 = INT64_MAX;
	static int64_t x184 = -1LL;

	t37 = (((x181&x182)-x183)<=x184);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x185 = INT16_MAX;
	int16_t x186 = -1;
	int32_t t38 = 69347;

	t38 = (((x185&x186)-x187)<=x188);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x189 = INT32_MIN;
	static int64_t x191 = -1LL;
	int32_t t39 = 9;

	t39 = (((x189&x190)-x191)<=x192);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x193 = -1;
	volatile int16_t x194 = INT16_MIN;
	static int8_t x195 = INT8_MIN;
	uint8_t x196 = 2U;
	int32_t t40 = -7504;

	t40 = (((x193&x194)-x195)<=x196);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x197 = INT32_MAX;
	static uint8_t x198 = 12U;
	int32_t t41 = 8776680;

	t41 = (((x197&x198)-x199)<=x200);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x206 = INT64_MIN;
	uint8_t x207 = UINT8_MAX;
	int64_t x208 = INT64_MIN;
	static int32_t t42 = -885517582;

	t42 = (((x205&x206)-x207)<=x208);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x209 = 6;
	static volatile int64_t x210 = -119LL;
	uint64_t x211 = 15LLU;
	int32_t x212 = INT32_MIN;
	int32_t t43 = 25340;

	t43 = (((x209&x210)-x211)<=x212);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x218 = 59144;
	int16_t x219 = 1;
	int8_t x220 = INT8_MIN;
	volatile int32_t t44 = 2148;

	t44 = (((x217&x218)-x219)<=x220);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x221 = 12671LLU;
	static int32_t x222 = 1;
	int16_t x223 = -1;
	int32_t x224 = -1;
	volatile int32_t t45 = 19;

	t45 = (((x221&x222)-x223)<=x224);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x225 = UINT32_MAX;
	int8_t x226 = -12;
	int32_t x227 = -18322;
	int32_t x228 = -141463;

	t46 = (((x225&x226)-x227)<=x228);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x229 = -26;
	uint32_t x230 = 3U;
	uint64_t x231 = UINT64_MAX;
	volatile int8_t x232 = INT8_MIN;
	volatile int32_t t47 = -82906;

	t47 = (((x229&x230)-x231)<=x232);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MAX;

	t48 = (((x233&x234)-x235)<=x236);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x241 = INT64_MIN;
	static int64_t x242 = INT64_MAX;
	int64_t x243 = -1LL;
	uint32_t x244 = 0U;
	volatile int32_t t49 = 173;

	t49 = (((x241&x242)-x243)<=x244);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x245 = 0;
	int64_t x246 = INT64_MIN;
	uint32_t x247 = 5U;
	static volatile int32_t x248 = INT32_MIN;
	volatile int32_t t50 = -484881;

	t50 = (((x245&x246)-x247)<=x248);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static int32_t x249 = -20040;
	static int64_t x250 = 248811LL;
	volatile uint16_t x251 = 3648U;
	int8_t x252 = INT8_MAX;
	static volatile int32_t t51 = 314;

	t51 = (((x249&x250)-x251)<=x252);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x253 = 4281U;
	int32_t x255 = INT32_MIN;
	int8_t x256 = INT8_MAX;
	static int32_t t52 = 8;

	t52 = (((x253&x254)-x255)<=x256);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x257 = INT16_MAX;
	int64_t x258 = INT64_MIN;
	int32_t x259 = -1;
	int64_t x260 = -47060229LL;
	int32_t t53 = -13536;

	t53 = (((x257&x258)-x259)<=x260);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x261 = -1;
	int64_t x262 = -6312631892553LL;
	volatile int16_t x263 = INT16_MAX;
	int16_t x264 = -1;
	static int32_t t54 = -5894611;

	t54 = (((x261&x262)-x263)<=x264);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x265 = 88U;
	static volatile uint8_t x268 = 3U;
	int32_t t55 = 1241613;

	t55 = (((x265&x266)-x267)<=x268);

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x272 = UINT32_MAX;

	t56 = (((x269&x270)-x271)<=x272);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x280 = 528962;
	int32_t t57 = -6891;

	t57 = (((x277&x278)-x279)<=x280);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint64_t x281 = 7388672627461422LLU;
	uint8_t x282 = 1U;
	int16_t x283 = INT16_MIN;
	static int8_t x284 = -1;

	t58 = (((x281&x282)-x283)<=x284);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x285 = -1LL;
	static uint8_t x286 = 1U;
	static volatile uint32_t x287 = 9U;

	t59 = (((x285&x286)-x287)<=x288);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x293 = 27652664799781638LLU;
	int8_t x294 = INT8_MIN;
	int16_t x296 = -182;
	int32_t t60 = 13;

	t60 = (((x293&x294)-x295)<=x296);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x298 = 30U;
	int8_t x299 = -1;
	volatile int32_t x300 = INT32_MIN;

	t61 = (((x297&x298)-x299)<=x300);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x301 = 10769480123LLU;
	uint64_t x302 = 135555283LLU;
	int32_t x303 = INT32_MAX;
	volatile uint32_t x304 = 3453U;
	int32_t t62 = 314130531;

	t62 = (((x301&x302)-x303)<=x304);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x309 = INT32_MAX;
	int16_t x310 = INT16_MAX;
	int16_t x311 = INT16_MIN;
	volatile uint8_t x312 = 0U;
	volatile int32_t t63 = -2067;

	t63 = (((x309&x310)-x311)<=x312);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x314 = 69091976905432LLU;
	static volatile int8_t x315 = -8;
	volatile uint8_t x316 = 47U;
	volatile int32_t t64 = 55;

	t64 = (((x313&x314)-x315)<=x316);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int8_t x317 = -1;
	int32_t x318 = -161;
	static int8_t x319 = -1;
	uint8_t x320 = UINT8_MAX;
	int32_t t65 = -9969;

	t65 = (((x317&x318)-x319)<=x320);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x321 = INT16_MAX;
	volatile int64_t x324 = INT64_MAX;
	int32_t t66 = 9;

	t66 = (((x321&x322)-x323)<=x324);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x325 = INT64_MIN;
	static int16_t x327 = INT16_MIN;
	int32_t t67 = -329975;

	t67 = (((x325&x326)-x327)<=x328);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x329 = 13;
	int8_t x330 = INT8_MAX;
	int64_t x331 = 280963938853LL;
	int8_t x332 = INT8_MAX;
	volatile int32_t t68 = 6;

	t68 = (((x329&x330)-x331)<=x332);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x333 = INT64_MIN;
	int32_t x335 = -1427;
	volatile int16_t x336 = INT16_MIN;
	int32_t t69 = -172;

	t69 = (((x333&x334)-x335)<=x336);

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x337 = 543U;
	static int64_t x338 = 1761183105339231LL;
	volatile int64_t x339 = 814953709LL;
	volatile int8_t x340 = INT8_MIN;
	int32_t t70 = 6;

	t70 = (((x337&x338)-x339)<=x340);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x341 = INT64_MIN;
	int16_t x342 = INT16_MIN;
	int16_t x343 = -1;
	int8_t x344 = INT8_MIN;

	t71 = (((x341&x342)-x343)<=x344);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x345 = UINT8_MAX;
	int8_t x347 = INT8_MIN;
	int64_t x348 = INT64_MIN;
	volatile int32_t t72 = -13;

	t72 = (((x345&x346)-x347)<=x348);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x349 = INT32_MIN;
	static uint8_t x350 = 0U;
	int8_t x351 = INT8_MIN;

	t73 = (((x349&x350)-x351)<=x352);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x353 = -1;
	static uint8_t x354 = UINT8_MAX;
	int16_t x355 = 12;
	uint8_t x356 = 1U;
	int32_t t74 = 874;

	t74 = (((x353&x354)-x355)<=x356);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x357 = 46362;
	uint64_t x358 = 218068529223LLU;
	static int8_t x359 = INT8_MIN;
	int32_t t75 = 81;

	t75 = (((x357&x358)-x359)<=x360);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x361 = 339789032;
	int16_t x362 = INT16_MAX;
	static volatile int8_t x363 = INT8_MIN;
	uint32_t x364 = UINT32_MAX;
	volatile int32_t t76 = 181;

	t76 = (((x361&x362)-x363)<=x364);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int8_t x367 = INT8_MIN;
	static int16_t x368 = 0;
	int32_t t77 = 16530830;

	t77 = (((x365&x366)-x367)<=x368);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x369 = INT64_MAX;
	int8_t x370 = INT8_MAX;
	int16_t x371 = -1;
	int64_t x372 = 62957LL;
	int32_t t78 = 10561;

	t78 = (((x369&x370)-x371)<=x372);

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x373 = UINT64_MAX;
	volatile int16_t x374 = INT16_MIN;
	static volatile int64_t x376 = 809091575175828848LL;
	volatile int32_t t79 = 226877;

	t79 = (((x373&x374)-x375)<=x376);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x378 = INT8_MIN;
	uint64_t x379 = 2707157LLU;
	int32_t t80 = -10;

	t80 = (((x377&x378)-x379)<=x380);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x381 = INT8_MIN;
	uint8_t x383 = 3U;
	int8_t x384 = INT8_MIN;
	int32_t t81 = 1;

	t81 = (((x381&x382)-x383)<=x384);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x385 = 0;
	static uint32_t x388 = 41893304U;
	volatile int32_t t82 = 70609;

	t82 = (((x385&x386)-x387)<=x388);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x389 = 149741LL;
	static uint64_t x391 = 2581047LLU;
	int64_t x392 = INT64_MAX;
	volatile int32_t t83 = -19;

	t83 = (((x389&x390)-x391)<=x392);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x393 = -33;
	static uint16_t x394 = 159U;
	uint64_t x395 = UINT64_MAX;

	t84 = (((x393&x394)-x395)<=x396);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x397 = 5252;
	uint64_t x398 = 1417579594781868LLU;
	uint8_t x399 = 80U;
	static volatile uint32_t x400 = 28922U;

	t85 = (((x397&x398)-x399)<=x400);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x405 = -664;
	static int64_t x406 = -19202LL;
	volatile int8_t x407 = INT8_MAX;
	static int16_t x408 = INT16_MIN;
	int32_t t86 = 7598;

	t86 = (((x405&x406)-x407)<=x408);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x410 = -36227279LL;
	static volatile int32_t x411 = -3;
	static int32_t t87 = 2661;

	t87 = (((x409&x410)-x411)<=x412);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x413 = -1;
	int16_t x414 = INT16_MIN;
	static uint32_t x415 = 6U;
	int8_t x416 = INT8_MIN;

	t88 = (((x413&x414)-x415)<=x416);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x417 = -406;
	volatile int16_t x418 = INT16_MAX;
	uint16_t x419 = 23120U;
	int64_t x420 = -1LL;
	volatile int32_t t89 = 54;

	t89 = (((x417&x418)-x419)<=x420);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x422 = 11U;
	volatile int16_t x424 = INT16_MIN;

	t90 = (((x421&x422)-x423)<=x424);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x425 = 27;
	int8_t x426 = INT8_MIN;
	int64_t x428 = INT64_MAX;
	int32_t t91 = -12312;

	t91 = (((x425&x426)-x427)<=x428);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x429 = INT8_MAX;
	uint32_t x430 = UINT32_MAX;
	static volatile uint64_t x431 = UINT64_MAX;
	int32_t t92 = -1;

	t92 = (((x429&x430)-x431)<=x432);

	if (t92 != 1) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x434 = 15;
	int8_t x435 = INT8_MAX;
	int16_t x436 = -1;
	volatile int32_t t93 = -1;

	t93 = (((x433&x434)-x435)<=x436);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x437 = INT32_MIN;
	int8_t x438 = 0;
	uint32_t x439 = 9U;
	int32_t x440 = 2;
	int32_t t94 = -54340882;

	t94 = (((x437&x438)-x439)<=x440);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x443 = INT8_MIN;
	int32_t x444 = -384709;

	t95 = (((x441&x442)-x443)<=x444);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x446 = 4921U;
	uint16_t x447 = 7041U;
	static int32_t t96 = 26734856;

	t96 = (((x445&x446)-x447)<=x448);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x449 = 45642LLU;
	volatile uint16_t x450 = 5U;
	static int32_t x451 = -1;
	static uint16_t x452 = UINT16_MAX;
	int32_t t97 = 579208240;

	t97 = (((x449&x450)-x451)<=x452);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x453 = INT32_MAX;
	uint8_t x454 = UINT8_MAX;
	volatile int8_t x455 = 3;
	static int32_t t98 = 0;

	t98 = (((x453&x454)-x455)<=x456);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x458 = -60;
	static int16_t x460 = INT16_MIN;

	t99 = (((x457&x458)-x459)<=x460);

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

