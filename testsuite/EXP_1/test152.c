#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = 48528;
int32_t t2 = 378554;
static volatile int64_t x14 = INT64_MIN;
uint64_t x26 = 771592LLU;
volatile int32_t x39 = -1;
int64_t x45 = INT64_MIN;
uint64_t x49 = UINT64_MAX;
volatile uint32_t x51 = 116015922U;
static volatile int8_t x53 = INT8_MIN;
uint8_t x60 = 4U;
uint32_t x67 = UINT32_MAX;
static uint32_t x68 = UINT32_MAX;
volatile uint8_t x69 = 4U;
static int64_t x71 = 9380LL;
uint8_t x73 = 13U;
int32_t x75 = INT32_MIN;
uint16_t x80 = 0U;
uint16_t x84 = 146U;
int16_t x91 = INT16_MAX;
static int8_t x95 = -31;
int64_t x96 = INT64_MIN;
uint8_t x107 = 17U;
uint32_t x108 = UINT32_MAX;
int16_t x118 = 0;
int32_t x119 = INT32_MIN;
volatile int64_t x125 = 894312276448467LL;
int16_t x130 = INT16_MIN;
static int16_t x138 = -1;
int32_t t28 = -2;
int16_t x153 = -1;
int32_t t32 = -17;
uint16_t x170 = 235U;
int64_t x171 = INT64_MIN;
volatile uint8_t x174 = 15U;
static volatile uint16_t x184 = 14U;
volatile int32_t t37 = 7851;
int64_t x201 = -1LL;
static volatile uint32_t x204 = 17U;
int8_t x206 = -1;
int16_t x212 = -1;
volatile int16_t x213 = -1;
int64_t x215 = INT64_MAX;
uint64_t x217 = 471LLU;
volatile int32_t t45 = -66912568;
int8_t x226 = 13;
int32_t x228 = -5;
static int32_t t46 = -309;
int64_t x232 = -830652858080170LL;
int16_t x235 = -1;
volatile int32_t t48 = -146526144;
int16_t x237 = INT16_MIN;
volatile int32_t t49 = 100319723;
volatile int32_t x244 = -1;
volatile int16_t x254 = INT16_MIN;
int32_t x256 = INT32_MIN;
int32_t t53 = -1;
uint8_t x261 = UINT8_MAX;
static int8_t x263 = INT8_MIN;
int32_t t56 = 11201394;
uint32_t x269 = UINT32_MAX;
uint32_t x272 = UINT32_MAX;
int8_t x273 = INT8_MIN;
int32_t x275 = INT32_MAX;
volatile int16_t x278 = INT16_MAX;
int8_t x281 = 2;
static int32_t t61 = -4003;
static int32_t t63 = -47;
static int32_t x301 = 25;
uint32_t x303 = 2836U;
volatile int16_t x307 = -30;
int8_t x318 = INT8_MIN;
static volatile int32_t t67 = -2;
volatile int32_t t68 = 44481177;
int32_t x328 = INT32_MIN;
int32_t x329 = INT32_MIN;
int16_t x332 = INT16_MIN;
static uint32_t x336 = 1695U;
volatile int32_t t71 = 83;
int32_t t73 = 366;
int8_t x350 = INT8_MAX;
volatile int32_t t74 = -432235668;
volatile int32_t x356 = -31;
static int32_t x372 = INT32_MIN;
int32_t x381 = INT32_MIN;
uint64_t x382 = 257249488526187LLU;
volatile int32_t t80 = -735203;
int8_t x386 = INT8_MIN;
uint16_t x387 = 5097U;
uint16_t x388 = 0U;
int64_t x389 = 21297766704LL;
volatile int16_t x391 = -2;
int32_t x392 = -1;
uint16_t x403 = UINT16_MAX;
volatile int32_t x404 = 11;
int64_t x405 = INT64_MIN;
int32_t t85 = -968812;
volatile int16_t x412 = 1;
volatile int32_t t86 = 2;
static int32_t x413 = INT32_MIN;
int32_t x414 = 2939192;
volatile uint8_t x421 = UINT8_MAX;
int8_t x424 = -1;
int32_t x429 = INT32_MAX;
volatile int8_t x430 = -1;
int64_t x438 = 116309205559308603LL;
int8_t x441 = INT8_MIN;
int16_t x442 = INT16_MIN;
volatile int8_t x443 = INT8_MAX;
int64_t x471 = INT64_MAX;
int8_t x475 = 3;
static volatile int16_t x476 = -1;
int32_t t97 = 160467591;
static int16_t x484 = INT16_MAX;


void f0(void) {
	int32_t x1 = INT32_MIN;
	volatile int8_t x2 = INT8_MAX;
	int16_t x3 = -1;
	uint16_t x4 = UINT16_MAX;

	t0 = (((x1+x2)|x3)<x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 3023757776LLU;
	uint64_t x6 = 4964769LLU;
	volatile int64_t x7 = -5605800097LL;
	uint16_t x8 = 1U;
	int32_t t1 = -884504291;

	t1 = (((x5+x6)|x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -15LL;
	volatile uint64_t x10 = 231LLU;
	volatile int16_t x11 = 203;
	int32_t x12 = 362169022;

	t2 = (((x9+x10)|x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = INT64_MAX;
	int8_t x15 = -1;
	int64_t x16 = INT64_MIN;
	volatile int32_t t3 = -5987;

	t3 = (((x13+x14)|x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	static int16_t x21 = 8952;
	int8_t x22 = INT8_MAX;
	int16_t x23 = 1;
	int8_t x24 = INT8_MIN;
	volatile int32_t t4 = 0;

	t4 = (((x21+x22)|x23)<x24);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x25 = -491;
	int64_t x27 = INT64_MIN;
	volatile int64_t x28 = -26LL;
	volatile int32_t t5 = 39;

	t5 = (((x25+x26)|x27)<x28);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = INT8_MIN;
	int8_t x30 = -48;
	static int64_t x31 = INT64_MIN;
	volatile int16_t x32 = -1;
	static volatile int32_t t6 = -431906658;

	t6 = (((x29+x30)|x31)<x32);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = 2U;
	uint8_t x38 = UINT8_MAX;
	static volatile int64_t x40 = INT64_MIN;
	volatile int32_t t7 = -1;

	t7 = (((x37+x38)|x39)<x40);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x46 = 1;
	static int64_t x47 = 127307127239LL;
	int32_t x48 = -1;
	int32_t t8 = -52348;

	t8 = (((x45+x46)|x47)<x48);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x50 = 34U;
	int32_t x52 = INT32_MIN;
	volatile int32_t t9 = -3172;

	t9 = (((x49+x50)|x51)<x52);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x54 = INT16_MAX;
	volatile int16_t x55 = INT16_MIN;
	volatile int32_t x56 = -18887145;
	volatile int32_t t10 = -18782292;

	t10 = (((x53+x54)|x55)<x56);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x57 = 64663U;
	int16_t x58 = INT16_MIN;
	int8_t x59 = INT8_MAX;
	int32_t t11 = 2334;

	t11 = (((x57+x58)|x59)<x60);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x65 = UINT32_MAX;
	volatile uint32_t x66 = 111431082U;
	static volatile int32_t t12 = -1;

	t12 = (((x65+x66)|x67)<x68);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x70 = 1U;
	int64_t x72 = INT64_MAX;
	volatile int32_t t13 = 438;

	t13 = (((x69+x70)|x71)<x72);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x74 = 1015920;
	static int8_t x76 = INT8_MAX;
	int32_t t14 = -11101;

	t14 = (((x73+x74)|x75)<x76);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = 26;
	volatile uint64_t x79 = 2362429651109599033LLU;
	int32_t t15 = 467076552;

	t15 = (((x77+x78)|x79)<x80);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = -1;
	int8_t x82 = 0;
	static int8_t x83 = INT8_MIN;
	static int32_t t16 = 27656;

	t16 = (((x81+x82)|x83)<x84);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x89 = INT16_MIN;
	static int16_t x90 = 125;
	int32_t x92 = 1005520;
	volatile int32_t t17 = -1506654;

	t17 = (((x89+x90)|x91)<x92);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x93 = 547025406;
	uint32_t x94 = 441852U;
	int32_t t18 = -1444;

	t18 = (((x93+x94)|x95)<x96);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x97 = UINT16_MAX;
	uint16_t x98 = 45U;
	int64_t x99 = -1LL;
	volatile int16_t x100 = INT16_MIN;
	int32_t t19 = 2812;

	t19 = (((x97+x98)|x99)<x100);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x101 = UINT8_MAX;
	uint32_t x102 = 4U;
	int64_t x103 = -132931LL;
	uint16_t x104 = 16208U;
	int32_t t20 = 5545888;

	t20 = (((x101+x102)|x103)<x104);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x105 = -1;
	static uint8_t x106 = 3U;
	int32_t t21 = 1694570;

	t21 = (((x105+x106)|x107)<x108);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x113 = INT8_MIN;
	static volatile int32_t x114 = -10547;
	int16_t x115 = INT16_MIN;
	int8_t x116 = -9;
	volatile int32_t t22 = -147077265;

	t22 = (((x113+x114)|x115)<x116);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x117 = -1;
	int8_t x120 = 0;
	volatile int32_t t23 = -5174;

	t23 = (((x117+x118)|x119)<x120);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x126 = INT8_MAX;
	uint32_t x127 = 53735U;
	volatile int32_t x128 = -1;
	volatile int32_t t24 = 132781656;

	t24 = (((x125+x126)|x127)<x128);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = 4;
	uint32_t x131 = 4762U;
	volatile int64_t x132 = -1263277673LL;
	int32_t t25 = 133149;

	t25 = (((x129+x130)|x131)<x132);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x133 = INT16_MAX;
	static int32_t x134 = INT32_MIN;
	volatile int8_t x135 = -4;
	int8_t x136 = INT8_MIN;
	static volatile int32_t t26 = 14;

	t26 = (((x133+x134)|x135)<x136);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x137 = 17U;
	static int64_t x139 = -1LL;
	int8_t x140 = -10;
	volatile int32_t t27 = -1723002;

	t27 = (((x137+x138)|x139)<x140);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x141 = 16208U;
	volatile int64_t x142 = -4465LL;
	volatile uint16_t x143 = 3U;
	uint8_t x144 = 6U;

	t28 = (((x141+x142)|x143)<x144);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x149 = INT8_MAX;
	int8_t x150 = INT8_MAX;
	int16_t x151 = -1;
	static int32_t x152 = INT32_MIN;
	volatile int32_t t29 = -465537;

	t29 = (((x149+x150)|x151)<x152);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x154 = 55;
	uint64_t x155 = UINT64_MAX;
	int32_t x156 = INT32_MAX;
	int32_t t30 = -61856;

	t30 = (((x153+x154)|x155)<x156);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int64_t x158 = INT64_MIN;
	int16_t x159 = -204;
	uint64_t x160 = UINT64_MAX;
	int32_t t31 = -427495154;

	t31 = (((x157+x158)|x159)<x160);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x161 = -1;
	static uint32_t x162 = 985U;
	uint32_t x163 = UINT32_MAX;
	int64_t x164 = INT64_MIN;

	t32 = (((x161+x162)|x163)<x164);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x169 = 570934383U;
	static int8_t x172 = INT8_MIN;
	volatile int32_t t33 = 1622314;

	t33 = (((x169+x170)|x171)<x172);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x173 = 48LLU;
	static volatile uint8_t x175 = 56U;
	uint8_t x176 = 1U;
	int32_t t34 = 0;

	t34 = (((x173+x174)|x175)<x176);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x177 = -1;
	static uint32_t x178 = 3768153U;
	int32_t x179 = -696133;
	uint16_t x180 = UINT16_MAX;
	volatile int32_t t35 = 11;

	t35 = (((x177+x178)|x179)<x180);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint64_t x181 = UINT64_MAX;
	static int32_t x182 = INT32_MAX;
	static int64_t x183 = INT64_MIN;
	int32_t t36 = -29;

	t36 = (((x181+x182)|x183)<x184);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int16_t x186 = INT16_MIN;
	volatile int32_t x187 = INT32_MAX;
	int32_t x188 = INT32_MIN;

	t37 = (((x185+x186)|x187)<x188);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile uint16_t x189 = 19U;
	static int32_t x190 = 7601;
	static int8_t x191 = -1;
	uint32_t x192 = 1412U;
	volatile int32_t t38 = -992641;

	t38 = (((x189+x190)|x191)<x192);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x193 = 0;
	int16_t x194 = -1;
	static int32_t x195 = -35;
	volatile int32_t x196 = INT32_MIN;
	int32_t t39 = 1037605;

	t39 = (((x193+x194)|x195)<x196);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x197 = 26660820810114LLU;
	uint64_t x198 = 104833027524339LLU;
	static uint8_t x199 = 56U;
	static uint8_t x200 = 34U;
	int32_t t40 = 0;

	t40 = (((x197+x198)|x199)<x200);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x202 = 8289521U;
	static uint64_t x203 = 1344584970229LLU;
	int32_t t41 = -56;

	t41 = (((x201+x202)|x203)<x204);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x205 = 1721141614U;
	static uint16_t x207 = UINT16_MAX;
	volatile int32_t x208 = INT32_MAX;
	static int32_t t42 = 45;

	t42 = (((x205+x206)|x207)<x208);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x209 = -3358;
	int32_t x210 = -83;
	volatile int8_t x211 = 16;
	static volatile int32_t t43 = 35101071;

	t43 = (((x209+x210)|x211)<x212);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x214 = UINT8_MAX;
	static uint64_t x216 = 4053334LLU;
	volatile int32_t t44 = 96316666;

	t44 = (((x213+x214)|x215)<x216);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x218 = INT8_MAX;
	volatile int16_t x219 = INT16_MAX;
	volatile uint32_t x220 = 16183642U;

	t45 = (((x217+x218)|x219)<x220);

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x225 = -1LL;
	static int16_t x227 = INT16_MAX;

	t46 = (((x225+x226)|x227)<x228);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x229 = INT8_MIN;
	uint16_t x230 = 11181U;
	static int32_t x231 = INT32_MIN;
	volatile int32_t t47 = -21095;

	t47 = (((x229+x230)|x231)<x232);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x233 = 223;
	uint16_t x234 = 782U;
	int8_t x236 = 16;

	t48 = (((x233+x234)|x235)<x236);

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x238 = INT8_MIN;
	static int16_t x239 = -10586;
	static uint8_t x240 = UINT8_MAX;

	t49 = (((x237+x238)|x239)<x240);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static int64_t x241 = 2603141637359LL;
	volatile int64_t x242 = -2071996LL;
	volatile int16_t x243 = 64;
	volatile int32_t t50 = -1;

	t50 = (((x241+x242)|x243)<x244);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x245 = INT64_MIN;
	int8_t x246 = 2;
	static volatile int8_t x247 = INT8_MIN;
	int32_t x248 = INT32_MIN;
	static volatile int32_t t51 = 3577725;

	t51 = (((x245+x246)|x247)<x248);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x249 = INT64_MIN;
	static volatile uint64_t x250 = UINT64_MAX;
	int32_t x251 = INT32_MAX;
	int64_t x252 = INT64_MAX;
	int32_t t52 = 704233;

	t52 = (((x249+x250)|x251)<x252);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x253 = 37;
	int64_t x255 = INT64_MIN;

	t53 = (((x253+x254)|x255)<x256);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x257 = -122612311461LL;
	uint32_t x258 = 1919981U;
	uint64_t x259 = 1LLU;
	static uint16_t x260 = 0U;
	volatile int32_t t54 = 2822;

	t54 = (((x257+x258)|x259)<x260);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x262 = 19LL;
	int16_t x264 = -1;
	int32_t t55 = 516;

	t55 = (((x261+x262)|x263)<x264);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x265 = INT16_MAX;
	int16_t x266 = 150;
	int8_t x267 = INT8_MAX;
	uint16_t x268 = 253U;

	t56 = (((x265+x266)|x267)<x268);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x270 = -1;
	uint16_t x271 = 607U;
	int32_t t57 = 0;

	t57 = (((x269+x270)|x271)<x272);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x274 = 1;
	int8_t x276 = 43;
	static int32_t t58 = 1;

	t58 = (((x273+x274)|x275)<x276);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x277 = 103152325LL;
	static int64_t x279 = INT64_MIN;
	static uint16_t x280 = UINT16_MAX;
	volatile int32_t t59 = 42720549;

	t59 = (((x277+x278)|x279)<x280);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x282 = -1;
	int64_t x283 = INT64_MIN;
	volatile int32_t x284 = -1;
	volatile int32_t t60 = -24;

	t60 = (((x281+x282)|x283)<x284);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x289 = UINT64_MAX;
	volatile int8_t x290 = INT8_MIN;
	static int8_t x291 = INT8_MIN;
	int8_t x292 = INT8_MIN;

	t61 = (((x289+x290)|x291)<x292);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x293 = 1037712423644657LLU;
	int16_t x294 = 0;
	uint32_t x295 = 770393U;
	volatile int16_t x296 = 11147;
	int32_t t62 = -7454656;

	t62 = (((x293+x294)|x295)<x296);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x297 = 21861U;
	uint32_t x298 = 351U;
	volatile int64_t x299 = INT64_MAX;
	uint8_t x300 = 3U;

	t63 = (((x297+x298)|x299)<x300);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x302 = INT8_MAX;
	int64_t x304 = INT64_MAX;
	static volatile int32_t t64 = 5386952;

	t64 = (((x301+x302)|x303)<x304);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x305 = -1;
	volatile uint8_t x306 = 126U;
	volatile int64_t x308 = 7953366654LL;
	int32_t t65 = 15637;

	t65 = (((x305+x306)|x307)<x308);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x309 = -43572239;
	uint16_t x310 = UINT16_MAX;
	static int32_t x311 = -1;
	static int16_t x312 = INT16_MAX;
	volatile int32_t t66 = -1625;

	t66 = (((x309+x310)|x311)<x312);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static int32_t x317 = 1044318765;
	volatile uint32_t x319 = 3762772U;
	int64_t x320 = INT64_MIN;

	t67 = (((x317+x318)|x319)<x320);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x321 = 627U;
	int64_t x322 = -3352891LL;
	static uint32_t x323 = 139U;
	volatile int64_t x324 = 438076673211498584LL;

	t68 = (((x321+x322)|x323)<x324);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int64_t x325 = -968280003137259LL;
	static int32_t x326 = INT32_MIN;
	int8_t x327 = 0;
	int32_t t69 = 0;

	t69 = (((x325+x326)|x327)<x328);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x330 = 265686029U;
	int64_t x331 = INT64_MIN;
	int32_t t70 = -112;

	t70 = (((x329+x330)|x331)<x332);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x333 = -475284375LL;
	int32_t x334 = INT32_MIN;
	static int64_t x335 = INT64_MIN;

	t71 = (((x333+x334)|x335)<x336);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x341 = 113230079551LL;
	uint64_t x342 = 2LLU;
	uint32_t x343 = 10309U;
	int16_t x344 = 77;
	static int32_t t72 = 430;

	t72 = (((x341+x342)|x343)<x344);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x345 = INT32_MAX;
	int16_t x346 = -1;
	uint16_t x347 = 1U;
	int16_t x348 = -2;

	t73 = (((x345+x346)|x347)<x348);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x349 = 1852940U;
	static uint64_t x351 = UINT64_MAX;
	static uint16_t x352 = 0U;

	t74 = (((x349+x350)|x351)<x352);

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x353 = -1;
	volatile uint64_t x354 = UINT64_MAX;
	static int64_t x355 = INT64_MIN;
	volatile int32_t t75 = -1831;

	t75 = (((x353+x354)|x355)<x356);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x357 = INT16_MIN;
	uint8_t x358 = 9U;
	uint32_t x359 = 296495288U;
	int64_t x360 = 475657690800068845LL;
	int32_t t76 = 130;

	t76 = (((x357+x358)|x359)<x360);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	static int8_t x361 = -5;
	uint64_t x362 = UINT64_MAX;
	int8_t x363 = 0;
	volatile int64_t x364 = INT64_MAX;
	int32_t t77 = -80;

	t77 = (((x361+x362)|x363)<x364);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x365 = UINT64_MAX;
	int8_t x366 = INT8_MIN;
	int32_t x367 = -1;
	volatile int32_t x368 = INT32_MAX;
	volatile int32_t t78 = 349858;

	t78 = (((x365+x366)|x367)<x368);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x369 = 5161554699121LLU;
	static uint16_t x370 = 0U;
	volatile uint64_t x371 = UINT64_MAX;
	static volatile int32_t t79 = -468;

	t79 = (((x369+x370)|x371)<x372);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile uint8_t x383 = 2U;
	int32_t x384 = -1033780;

	t80 = (((x381+x382)|x383)<x384);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x385 = -6667354;
	int32_t t81 = 862209527;

	t81 = (((x385+x386)|x387)<x388);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x390 = 38036U;
	volatile int32_t t82 = 361821;

	t82 = (((x389+x390)|x391)<x392);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint16_t x397 = UINT16_MAX;
	uint64_t x398 = 422207871925863841LLU;
	static int8_t x399 = INT8_MAX;
	static volatile uint8_t x400 = 14U;
	int32_t t83 = 234;

	t83 = (((x397+x398)|x399)<x400);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x401 = INT64_MIN;
	static uint32_t x402 = 61U;
	int32_t t84 = 1;

	t84 = (((x401+x402)|x403)<x404);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x406 = UINT8_MAX;
	uint8_t x407 = 4U;
	volatile int32_t x408 = INT32_MIN;

	t85 = (((x405+x406)|x407)<x408);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x409 = -2930;
	uint8_t x410 = UINT8_MAX;
	int8_t x411 = INT8_MAX;

	t86 = (((x409+x410)|x411)<x412);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x415 = 4261031LLU;
	int16_t x416 = -1;
	volatile int32_t t87 = -44915760;

	t87 = (((x413+x414)|x415)<x416);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x422 = INT64_MIN;
	uint64_t x423 = UINT64_MAX;
	int32_t t88 = 230361856;

	t88 = (((x421+x422)|x423)<x424);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x431 = -54;
	static int8_t x432 = INT8_MIN;
	int32_t t89 = -388486020;

	t89 = (((x429+x430)|x431)<x432);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint64_t x437 = 2032035745LLU;
	uint64_t x439 = UINT64_MAX;
	uint32_t x440 = 31835282U;
	volatile int32_t t90 = -138711477;

	t90 = (((x437+x438)|x439)<x440);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static int8_t x444 = INT8_MIN;
	volatile int32_t t91 = -450255973;

	t91 = (((x441+x442)|x443)<x444);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x445 = INT16_MAX;
	uint64_t x446 = 42647512LLU;
	static int8_t x447 = INT8_MIN;
	int32_t x448 = INT32_MAX;
	volatile int32_t t92 = -55727779;

	t92 = (((x445+x446)|x447)<x448);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x449 = 711943U;
	volatile int16_t x450 = INT16_MIN;
	int16_t x451 = -1;
	static uint64_t x452 = UINT64_MAX;
	volatile int32_t t93 = 397621835;

	t93 = (((x449+x450)|x451)<x452);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x457 = INT16_MIN;
	int8_t x458 = INT8_MIN;
	int16_t x459 = INT16_MIN;
	uint32_t x460 = 57255U;
	int32_t t94 = 9;

	t94 = (((x457+x458)|x459)<x460);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x461 = -1;
	uint8_t x462 = UINT8_MAX;
	volatile uint32_t x463 = 5574U;
	volatile int16_t x464 = INT16_MIN;
	volatile int32_t t95 = -435115;

	t95 = (((x461+x462)|x463)<x464);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x469 = -1;
	int16_t x470 = -1;
	uint8_t x472 = UINT8_MAX;
	int32_t t96 = 5591;

	t96 = (((x469+x470)|x471)<x472);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x473 = INT64_MIN;
	static uint64_t x474 = 1064145767LLU;

	t97 = (((x473+x474)|x475)<x476);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x477 = 1U;
	int64_t x478 = -1LL;
	int8_t x479 = INT8_MAX;
	uint16_t x480 = 98U;
	int32_t t98 = 5191412;

	t98 = (((x477+x478)|x479)<x480);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int8_t x481 = 16;
	static int64_t x482 = INT64_MIN;
	uint32_t x483 = UINT32_MAX;
	int32_t t99 = 32657228;

	t99 = (((x481+x482)|x483)<x484);

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

