#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x4 = -355044874;
volatile uint16_t x8 = 9654U;
static int32_t x15 = INT32_MAX;
int32_t t2 = 453;
uint32_t x17 = 40U;
int8_t x19 = INT8_MAX;
uint64_t x21 = 168801878181LLU;
int16_t x25 = 0;
int32_t x26 = INT32_MIN;
int64_t x27 = -1LL;
uint8_t x28 = 36U;
int32_t x36 = -3;
volatile int32_t t7 = 198427470;
int64_t x40 = INT64_MIN;
int64_t t8 = INT64_MIN;
uint8_t x45 = 8U;
int8_t x47 = INT8_MAX;
int16_t x49 = -1;
volatile int32_t t12 = 18730586;
int8_t x64 = INT8_MIN;
static uint8_t x72 = 2U;
uint8_t x78 = UINT8_MAX;
int64_t t18 = -263275LL;
volatile uint16_t x87 = 9939U;
int64_t x95 = INT64_MIN;
int16_t x98 = -6462;
static volatile int16_t x100 = -1;
volatile int32_t t21 = 83995;
static int8_t x112 = INT8_MAX;
static int32_t x115 = -286532;
int64_t x120 = 139415835LL;
int64_t x138 = INT64_MIN;
int64_t x150 = -13782LL;
int16_t x152 = -1;
int16_t x153 = INT16_MAX;
int16_t x155 = INT16_MAX;
volatile int32_t x159 = -1304;
int64_t x164 = -278442776806435LL;
uint64_t x170 = UINT64_MAX;
static int32_t x181 = -86578118;
int32_t t41 = 1022;
static int64_t x201 = INT64_MIN;
int32_t x206 = INT32_MAX;
static volatile int32_t t43 = 261637079;
uint8_t x210 = 2U;
volatile int64_t t44 = 5840844LL;
volatile uint64_t t46 = UINT64_MAX;
int64_t x221 = INT64_MIN;
volatile int32_t t50 = 31;
static volatile int32_t x238 = INT32_MIN;
int64_t x241 = -1LL;
volatile uint64_t x246 = UINT64_MAX;
int32_t x253 = -751049448;
int8_t x254 = -1;
volatile int32_t t55 = -1;
volatile uint64_t x258 = 15143786LLU;
int32_t x260 = -82;
uint16_t x261 = 134U;
uint8_t x266 = 1U;
volatile int32_t t61 = -820051;
int32_t x288 = 10;
int8_t x289 = -1;
volatile int64_t x304 = 1383998364113LL;
int8_t x308 = -1;
volatile int32_t t67 = 609849;
int8_t x311 = INT8_MIN;
int8_t x320 = INT8_MIN;
static uint8_t x334 = UINT8_MAX;
volatile uint64_t t73 = 1068340428360076LLU;
volatile int64_t t74 = -9204898LL;
static int32_t t75 = INT32_MIN;
int8_t x354 = INT8_MIN;
int8_t x358 = INT8_MIN;
int64_t x360 = INT64_MIN;
int16_t x362 = INT16_MIN;
int64_t x366 = -1LL;
int8_t x376 = 47;
volatile int32_t t85 = -1729893;
int64_t x397 = 5422878092491003LL;
volatile int16_t x398 = INT16_MIN;
int16_t x401 = 9224;
static int8_t x402 = INT8_MAX;
static volatile int32_t t87 = -20746;
int32_t x408 = INT32_MAX;
static int8_t x410 = INT8_MAX;
int8_t x413 = -1;
static int16_t x415 = INT16_MIN;
int16_t x416 = 16;
volatile uint32_t x417 = UINT32_MAX;
int8_t x418 = INT8_MIN;
int32_t x421 = INT32_MAX;
volatile int8_t x438 = INT8_MIN;
static volatile int16_t x449 = INT16_MIN;
int8_t x450 = -30;


void f0(void) {
	static uint8_t x1 = 1U;
	int64_t x2 = INT64_MIN;
	volatile uint32_t x3 = 393207706U;
	int32_t t0 = -57744998;

	t0 = (((x1+x2)==x3)+x4);

	if (t0 != -355044874) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = -1;
	static int8_t x6 = INT8_MIN;
	static int16_t x7 = -97;
	static volatile int32_t t1 = 3;

	t1 = (((x5+x6)==x7)+x8);

	if (t1 != 9654) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	uint32_t x14 = UINT32_MAX;
	volatile int32_t x16 = -1;

	t2 = (((x13+x14)==x15)+x16);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x18 = 9576181U;
	uint8_t x20 = 1U;
	volatile int32_t t3 = -619251;

	t3 = (((x17+x18)==x19)+x20);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint64_t x22 = 117550426587887LLU;
	static int64_t x23 = 23LL;
	static int32_t x24 = -241752;
	volatile int32_t t4 = -146;

	t4 = (((x21+x22)==x23)+x24);

	if (t4 != -241752) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t t5 = 212;

	t5 = (((x25+x26)==x27)+x28);

	if (t5 != 36) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x29 = 25U;
	int16_t x30 = INT16_MAX;
	uint32_t x31 = 459534555U;
	int64_t x32 = -1LL;
	int64_t t6 = 140788405750069092LL;

	t6 = (((x29+x30)==x31)+x32);

	if (t6 != -1LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x33 = 10048630014067LLU;
	uint8_t x34 = 94U;
	int64_t x35 = INT64_MIN;

	t7 = (((x33+x34)==x35)+x36);

	if (t7 != -3) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = INT32_MAX;
	int64_t x38 = -3LL;
	int8_t x39 = INT8_MAX;

	t8 = (((x37+x38)==x39)+x40);

	if (t8 != INT64_MIN) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int16_t x41 = INT16_MAX;
	static volatile int64_t x42 = INT64_MIN;
	static uint8_t x43 = 124U;
	static int8_t x44 = -1;
	int32_t t9 = 1644797;

	t9 = (((x41+x42)==x43)+x44);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = -5;
	volatile int16_t x48 = 2;
	int32_t t10 = -370294;

	t10 = (((x45+x46)==x47)+x48);

	if (t10 != 2) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x50 = 52;
	int8_t x51 = -1;
	static int8_t x52 = INT8_MIN;
	volatile int32_t t11 = 436;

	t11 = (((x49+x50)==x51)+x52);

	if (t11 != -128) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x57 = INT32_MIN;
	uint64_t x58 = UINT64_MAX;
	int32_t x59 = INT32_MAX;
	int8_t x60 = -1;

	t12 = (((x57+x58)==x59)+x60);

	if (t12 != -1) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x61 = UINT8_MAX;
	uint8_t x62 = 2U;
	static uint32_t x63 = 46U;
	volatile int32_t t13 = 12268;

	t13 = (((x61+x62)==x63)+x64);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x65 = UINT64_MAX;
	static int32_t x66 = -1;
	int16_t x67 = -67;
	int8_t x68 = INT8_MIN;
	volatile int32_t t14 = -1;

	t14 = (((x65+x66)==x67)+x68);

	if (t14 != -128) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x69 = UINT32_MAX;
	uint8_t x70 = 15U;
	int64_t x71 = 119176243LL;
	volatile int32_t t15 = -6341;

	t15 = (((x69+x70)==x71)+x72);

	if (t15 != 2) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x73 = 1U;
	int64_t x74 = -7955833421083LL;
	uint64_t x75 = 63979094965479LLU;
	uint32_t x76 = 254929U;
	uint32_t t16 = 850886902U;

	t16 = (((x73+x74)==x75)+x76);

	if (t16 != 254929U) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = 0;
	int8_t x79 = INT8_MAX;
	uint64_t x80 = 903457997744422310LLU;
	uint64_t t17 = 231263LLU;

	t17 = (((x77+x78)==x79)+x80);

	if (t17 != 903457997744422310LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x81 = INT16_MIN;
	int32_t x82 = -1;
	static int16_t x83 = -1;
	int64_t x84 = 229275389LL;

	t18 = (((x81+x82)==x83)+x84);

	if (t18 != 229275389LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint8_t x85 = UINT8_MAX;
	int64_t x86 = -1LL;
	static int32_t x88 = INT32_MAX;
	static int32_t t19 = INT32_MAX;

	t19 = (((x85+x86)==x87)+x88);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x93 = -30834621480LL;
	int64_t x94 = -30156LL;
	static int16_t x96 = -1;
	int32_t t20 = -17350025;

	t20 = (((x93+x94)==x95)+x96);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	static int8_t x97 = INT8_MIN;
	static uint64_t x99 = 1426LLU;

	t21 = (((x97+x98)==x99)+x100);

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x101 = 28U;
	int16_t x102 = -1365;
	volatile int32_t x103 = 1;
	volatile int64_t x104 = INT64_MAX;
	volatile int64_t t22 = INT64_MAX;

	t22 = (((x101+x102)==x103)+x104);

	if (t22 != INT64_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	static int8_t x105 = 0;
	volatile int32_t x106 = 12;
	static volatile int64_t x107 = -8251884046030752LL;
	static volatile uint64_t x108 = 1LLU;
	uint64_t t23 = 9936LLU;

	t23 = (((x105+x106)==x107)+x108);

	if (t23 != 1LLU) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x109 = 63U;
	int32_t x110 = -209;
	static int64_t x111 = INT64_MIN;
	int32_t t24 = -164352;

	t24 = (((x109+x110)==x111)+x112);

	if (t24 != 127) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x113 = UINT32_MAX;
	int64_t x114 = INT64_MIN;
	int8_t x116 = INT8_MAX;
	volatile int32_t t25 = 1;

	t25 = (((x113+x114)==x115)+x116);

	if (t25 != 127) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 52U;
	int32_t x118 = INT32_MAX;
	int16_t x119 = 208;
	volatile int64_t t26 = 2163536011646015618LL;

	t26 = (((x117+x118)==x119)+x120);

	if (t26 != 139415835LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint8_t x129 = UINT8_MAX;
	int32_t x130 = INT32_MIN;
	static int32_t x131 = INT32_MAX;
	int32_t x132 = -855;
	int32_t t27 = 31870161;

	t27 = (((x129+x130)==x131)+x132);

	if (t27 != -855) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x133 = INT64_MIN;
	uint16_t x134 = 194U;
	volatile uint64_t x135 = 3901191819257086LLU;
	static int64_t x136 = 718075982LL;
	volatile int64_t t28 = -7670LL;

	t28 = (((x133+x134)==x135)+x136);

	if (t28 != 718075982LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint32_t x137 = 1832101629U;
	static uint32_t x139 = 1303294U;
	int32_t x140 = -1;
	volatile int32_t t29 = -93217;

	t29 = (((x137+x138)==x139)+x140);

	if (t29 != -1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x141 = 9909U;
	int8_t x142 = INT8_MAX;
	static int16_t x143 = -33;
	static volatile int16_t x144 = INT16_MAX;
	volatile int32_t t30 = 113;

	t30 = (((x141+x142)==x143)+x144);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x145 = INT16_MIN;
	int32_t x146 = -1;
	uint16_t x147 = 1405U;
	static uint64_t x148 = UINT64_MAX;
	uint64_t t31 = UINT64_MAX;

	t31 = (((x145+x146)==x147)+x148);

	if (t31 != UINT64_MAX) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x149 = 102U;
	static int16_t x151 = INT16_MIN;
	volatile int32_t t32 = -5;

	t32 = (((x149+x150)==x151)+x152);

	if (t32 != -1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x154 = INT8_MAX;
	static int32_t x156 = 32541608;
	int32_t t33 = 595866;

	t33 = (((x153+x154)==x155)+x156);

	if (t33 != 32541608) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x157 = 52U;
	int8_t x158 = 7;
	int64_t x160 = -1LL;
	static int64_t t34 = -2312928630LL;

	t34 = (((x157+x158)==x159)+x160);

	if (t34 != -1LL) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int16_t x161 = INT16_MAX;
	int64_t x162 = 57863278LL;
	uint8_t x163 = 31U;
	int64_t t35 = 469887142LL;

	t35 = (((x161+x162)==x163)+x164);

	if (t35 != -278442776806435LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x169 = INT64_MIN;
	int32_t x171 = -37;
	volatile int8_t x172 = INT8_MIN;
	volatile int32_t t36 = 3462494;

	t36 = (((x169+x170)==x171)+x172);

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = INT32_MIN;
	static int8_t x174 = 1;
	int8_t x175 = 6;
	uint16_t x176 = 6563U;
	int32_t t37 = 0;

	t37 = (((x173+x174)==x175)+x176);

	if (t37 != 6563) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x177 = -1;
	int16_t x178 = -1;
	int8_t x179 = INT8_MAX;
	int32_t x180 = INT32_MIN;
	static int32_t t38 = INT32_MIN;

	t38 = (((x177+x178)==x179)+x180);

	if (t38 != INT32_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x182 = INT8_MAX;
	int16_t x183 = 45;
	static int32_t x184 = INT32_MIN;
	volatile int32_t t39 = INT32_MIN;

	t39 = (((x181+x182)==x183)+x184);

	if (t39 != INT32_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int32_t x185 = -1;
	static int64_t x186 = -36954472811LL;
	static int32_t x187 = 1;
	uint64_t x188 = 18LLU;
	volatile uint64_t t40 = 3842476363LLU;

	t40 = (((x185+x186)==x187)+x188);

	if (t40 != 18LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x197 = INT32_MIN;
	uint32_t x198 = 31U;
	volatile int16_t x199 = INT16_MIN;
	int32_t x200 = 721;

	t41 = (((x197+x198)==x199)+x200);

	if (t41 != 721) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x202 = 25U;
	volatile int8_t x203 = INT8_MIN;
	uint16_t x204 = 16260U;
	volatile int32_t t42 = -93640352;

	t42 = (((x201+x202)==x203)+x204);

	if (t42 != 16260) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x205 = -21869357634LL;
	uint16_t x207 = UINT16_MAX;
	uint16_t x208 = 8798U;

	t43 = (((x205+x206)==x207)+x208);

	if (t43 != 8798) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int8_t x209 = INT8_MAX;
	static volatile uint32_t x211 = 4U;
	int64_t x212 = -2821601256LL;

	t44 = (((x209+x210)==x211)+x212);

	if (t44 != -2821601256LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x213 = 3236U;
	volatile int8_t x214 = -1;
	uint8_t x215 = UINT8_MAX;
	static int64_t x216 = -2549845490829079LL;
	volatile int64_t t45 = 221413663198333744LL;

	t45 = (((x213+x214)==x215)+x216);

	if (t45 != -2549845490829079LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x217 = -3972LL;
	static int16_t x218 = -1;
	volatile int64_t x219 = 19LL;
	volatile uint64_t x220 = UINT64_MAX;

	t46 = (((x217+x218)==x219)+x220);

	if (t46 != UINT64_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	static uint32_t x222 = 11653U;
	static int32_t x223 = INT32_MIN;
	static volatile int16_t x224 = INT16_MAX;
	volatile int32_t t47 = 200638232;

	t47 = (((x221+x222)==x223)+x224);

	if (t47 != 32767) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x225 = 0U;
	int8_t x226 = -29;
	uint64_t x227 = UINT64_MAX;
	uint16_t x228 = 794U;
	volatile int32_t t48 = -59;

	t48 = (((x225+x226)==x227)+x228);

	if (t48 != 794) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x229 = 600006;
	int64_t x230 = -6983211LL;
	int32_t x231 = INT32_MAX;
	uint64_t x232 = 328LLU;
	volatile uint64_t t49 = 15637856LLU;

	t49 = (((x229+x230)==x231)+x232);

	if (t49 != 328LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x233 = 1U;
	int32_t x234 = INT32_MIN;
	volatile uint16_t x235 = 821U;
	static int16_t x236 = 0;

	t50 = (((x233+x234)==x235)+x236);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x237 = -1LL;
	volatile uint8_t x239 = 0U;
	int64_t x240 = INT64_MAX;
	int64_t t51 = INT64_MAX;

	t51 = (((x237+x238)==x239)+x240);

	if (t51 != INT64_MAX) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x242 = INT64_MAX;
	static int8_t x243 = -48;
	uint64_t x244 = 72258758161LLU;
	volatile uint64_t t52 = 0LLU;

	t52 = (((x241+x242)==x243)+x244);

	if (t52 != 72258758161LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint64_t x245 = 698843108983518322LLU;
	int64_t x247 = INT64_MIN;
	int64_t x248 = 11404LL;
	int64_t t53 = 2338777LL;

	t53 = (((x245+x246)==x247)+x248);

	if (t53 != 11404LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x249 = 16;
	static int8_t x250 = -1;
	uint64_t x251 = 53073464585870LLU;
	uint32_t x252 = 38U;
	static volatile uint32_t t54 = 1U;

	t54 = (((x249+x250)==x251)+x252);

	if (t54 != 38U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x255 = 13;
	int8_t x256 = INT8_MAX;

	t55 = (((x253+x254)==x255)+x256);

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x257 = INT64_MIN;
	int64_t x259 = -233LL;
	volatile int32_t t56 = -1;

	t56 = (((x257+x258)==x259)+x260);

	if (t56 != -82) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x262 = INT16_MIN;
	static uint64_t x263 = 63LLU;
	volatile uint16_t x264 = 1U;
	static volatile int32_t t57 = 128;

	t57 = (((x261+x262)==x263)+x264);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x265 = 0LL;
	static int16_t x267 = 1;
	int64_t x268 = -1LL;
	volatile int64_t t58 = 173842377032073LL;

	t58 = (((x265+x266)==x267)+x268);

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x269 = -1LL;
	static uint8_t x270 = 98U;
	uint8_t x271 = 13U;
	int16_t x272 = -1;
	int32_t t59 = -4749;

	t59 = (((x269+x270)==x271)+x272);

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x273 = 7;
	volatile uint8_t x274 = 2U;
	uint16_t x275 = UINT16_MAX;
	volatile uint16_t x276 = 184U;
	int32_t t60 = 109256992;

	t60 = (((x273+x274)==x275)+x276);

	if (t60 != 184) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = -245;
	int64_t x278 = 202624433357954169LL;
	int16_t x279 = -1;
	int16_t x280 = -1;

	t61 = (((x277+x278)==x279)+x280);

	if (t61 != -1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = -1;
	static int8_t x282 = 14;
	int32_t x283 = INT32_MAX;
	volatile int64_t x284 = INT64_MIN;
	int64_t t62 = INT64_MIN;

	t62 = (((x281+x282)==x283)+x284);

	if (t62 != INT64_MIN) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = 454;
	uint16_t x286 = UINT16_MAX;
	static uint64_t x287 = 68LLU;
	int32_t t63 = -26;

	t63 = (((x285+x286)==x287)+x288);

	if (t63 != 10) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x290 = INT16_MIN;
	static int32_t x291 = -1768699;
	int8_t x292 = INT8_MAX;
	int32_t t64 = -496;

	t64 = (((x289+x290)==x291)+x292);

	if (t64 != 127) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = 2108LLU;
	int16_t x298 = INT16_MIN;
	int64_t x299 = INT64_MIN;
	volatile int16_t x300 = INT16_MIN;
	int32_t t65 = -16799442;

	t65 = (((x297+x298)==x299)+x300);

	if (t65 != -32768) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x301 = UINT8_MAX;
	volatile int16_t x302 = INT16_MIN;
	uint8_t x303 = 10U;
	volatile int64_t t66 = 128680251243579944LL;

	t66 = (((x301+x302)==x303)+x304);

	if (t66 != 1383998364113LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x305 = -1LL;
	uint64_t x306 = 215539424LLU;
	uint8_t x307 = 1U;

	t67 = (((x305+x306)==x307)+x308);

	if (t67 != -1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x309 = -1;
	uint32_t x310 = 16718U;
	static int32_t x312 = INT32_MIN;
	int32_t t68 = INT32_MIN;

	t68 = (((x309+x310)==x311)+x312);

	if (t68 != INT32_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int16_t x313 = INT16_MIN;
	static volatile int8_t x314 = -3;
	volatile int8_t x315 = -53;
	int16_t x316 = -1;
	int32_t t69 = -3464;

	t69 = (((x313+x314)==x315)+x316);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x317 = 3U;
	static int16_t x318 = INT16_MAX;
	int16_t x319 = -1;
	volatile int32_t t70 = -13855;

	t70 = (((x317+x318)==x319)+x320);

	if (t70 != -128) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x325 = INT16_MIN;
	volatile int32_t x326 = 372;
	int64_t x327 = 7572390757383051LL;
	int32_t x328 = INT32_MIN;
	volatile int32_t t71 = INT32_MIN;

	t71 = (((x325+x326)==x327)+x328);

	if (t71 != INT32_MIN) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x329 = INT16_MAX;
	int16_t x330 = INT16_MIN;
	uint16_t x331 = UINT16_MAX;
	int8_t x332 = INT8_MAX;
	int32_t t72 = 470;

	t72 = (((x329+x330)==x331)+x332);

	if (t72 != 127) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x333 = INT32_MIN;
	int8_t x335 = -27;
	static uint64_t x336 = 7937713136532LLU;

	t73 = (((x333+x334)==x335)+x336);

	if (t73 != 7937713136532LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x337 = INT64_MIN;
	volatile uint16_t x338 = 4062U;
	int64_t x339 = INT64_MAX;
	volatile int64_t x340 = -1798421LL;

	t74 = (((x337+x338)==x339)+x340);

	if (t74 != -1798421LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x341 = 7059U;
	static volatile int64_t x342 = 7104246LL;
	volatile int8_t x343 = INT8_MAX;
	int32_t x344 = INT32_MIN;

	t75 = (((x341+x342)==x343)+x344);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	static uint8_t x349 = 8U;
	static uint8_t x350 = 1U;
	int16_t x351 = 360;
	int32_t x352 = INT32_MIN;
	static volatile int32_t t76 = INT32_MIN;

	t76 = (((x349+x350)==x351)+x352);

	if (t76 != INT32_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = INT8_MIN;
	static int64_t x355 = INT64_MAX;
	int64_t x356 = INT64_MIN;
	volatile int64_t t77 = INT64_MIN;

	t77 = (((x353+x354)==x355)+x356);

	if (t77 != INT64_MIN) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x357 = INT16_MAX;
	int32_t x359 = INT32_MIN;
	int64_t t78 = INT64_MIN;

	t78 = (((x357+x358)==x359)+x360);

	if (t78 != INT64_MIN) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int8_t x361 = INT8_MIN;
	volatile int32_t x363 = 12763;
	int32_t x364 = INT32_MAX;
	int32_t t79 = INT32_MAX;

	t79 = (((x361+x362)==x363)+x364);

	if (t79 != INT32_MAX) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x365 = -2;
	int16_t x367 = -1;
	volatile int8_t x368 = -1;
	int32_t t80 = -243;

	t80 = (((x365+x366)==x367)+x368);

	if (t80 != -1) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x369 = -1;
	uint32_t x370 = 488039U;
	uint8_t x371 = 0U;
	volatile uint16_t x372 = 3U;
	volatile int32_t t81 = -229323;

	t81 = (((x369+x370)==x371)+x372);

	if (t81 != 3) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x373 = -1;
	int64_t x374 = INT64_MAX;
	int16_t x375 = -1;
	static volatile int32_t t82 = 53;

	t82 = (((x373+x374)==x375)+x376);

	if (t82 != 47) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x381 = 0;
	int16_t x382 = INT16_MAX;
	int16_t x383 = INT16_MAX;
	int32_t x384 = -1;
	int32_t t83 = -253;

	t83 = (((x381+x382)==x383)+x384);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x385 = -11284302LL;
	int8_t x386 = -2;
	static int16_t x387 = INT16_MIN;
	int64_t x388 = -1LL;
	volatile int64_t t84 = -9272962439252452LL;

	t84 = (((x385+x386)==x387)+x388);

	if (t84 != -1LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x389 = 5LLU;
	int16_t x390 = INT16_MIN;
	uint32_t x391 = 105598619U;
	int16_t x392 = INT16_MIN;

	t85 = (((x389+x390)==x391)+x392);

	if (t85 != -32768) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x399 = INT16_MAX;
	uint32_t x400 = 16U;
	volatile uint32_t t86 = 63U;

	t86 = (((x397+x398)==x399)+x400);

	if (t86 != 16U) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x403 = -1;
	int32_t x404 = -1646356;

	t87 = (((x401+x402)==x403)+x404);

	if (t87 != -1646356) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int64_t x405 = -1LL;
	int16_t x406 = 1640;
	volatile uint64_t x407 = 27LLU;
	static int32_t t88 = INT32_MAX;

	t88 = (((x405+x406)==x407)+x408);

	if (t88 != INT32_MAX) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x409 = 430U;
	int64_t x411 = -1LL;
	uint64_t x412 = UINT64_MAX;
	volatile uint64_t t89 = UINT64_MAX;

	t89 = (((x409+x410)==x411)+x412);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	static uint32_t x414 = UINT32_MAX;
	int32_t t90 = -2056120;

	t90 = (((x413+x414)==x415)+x416);

	if (t90 != 16) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x419 = 61322424U;
	int64_t x420 = -1LL;
	int64_t t91 = -2293733502398611LL;

	t91 = (((x417+x418)==x419)+x420);

	if (t91 != -1LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x422 = 7495LLU;
	volatile uint8_t x423 = 14U;
	volatile int64_t x424 = INT64_MIN;
	int64_t t92 = INT64_MIN;

	t92 = (((x421+x422)==x423)+x424);

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x425 = INT8_MIN;
	uint32_t x426 = 488U;
	int64_t x427 = INT64_MAX;
	volatile int64_t x428 = INT64_MIN;
	static int64_t t93 = INT64_MIN;

	t93 = (((x425+x426)==x427)+x428);

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x429 = -3;
	uint16_t x430 = 123U;
	uint64_t x431 = 18108902845854637LLU;
	int16_t x432 = -208;
	int32_t t94 = 182774;

	t94 = (((x429+x430)==x431)+x432);

	if (t94 != -208) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x437 = 1;
	uint64_t x439 = 1393970588287LLU;
	uint32_t x440 = 2567U;
	uint32_t t95 = 20U;

	t95 = (((x437+x438)==x439)+x440);

	if (t95 != 2567U) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x441 = 3U;
	int8_t x442 = INT8_MAX;
	uint16_t x443 = UINT16_MAX;
	uint8_t x444 = 27U;
	int32_t t96 = 261;

	t96 = (((x441+x442)==x443)+x444);

	if (t96 != 27) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x445 = INT16_MIN;
	static int16_t x446 = 3;
	uint16_t x447 = 6U;
	volatile uint8_t x448 = 5U;
	int32_t t97 = 1;

	t97 = (((x445+x446)==x447)+x448);

	if (t97 != 5) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x451 = -1LL;
	uint16_t x452 = 3U;
	int32_t t98 = -436228;

	t98 = (((x449+x450)==x451)+x452);

	if (t98 != 3) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x453 = UINT8_MAX;
	volatile int16_t x454 = -73;
	uint8_t x455 = 1U;
	uint8_t x456 = UINT8_MAX;
	static int32_t t99 = -502869;

	t99 = (((x453+x454)==x455)+x456);

	if (t99 != 255) { NG(); } else { ; }
	
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

