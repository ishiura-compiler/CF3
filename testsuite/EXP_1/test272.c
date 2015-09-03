#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x9 = 1276897U;
uint16_t x18 = 711U;
uint8_t x22 = 5U;
int32_t t4 = 272882;
volatile int64_t x25 = INT64_MIN;
static int16_t x27 = INT16_MIN;
volatile uint64_t x34 = UINT64_MAX;
static volatile int8_t x36 = INT8_MAX;
static volatile int32_t t7 = -27006907;
static int16_t x41 = -1;
int16_t x43 = -637;
int32_t t9 = -212;
uint8_t x49 = 15U;
int8_t x53 = INT8_MIN;
volatile uint16_t x56 = 14U;
volatile int64_t x57 = -388293623095459LL;
int32_t t13 = 233;
int32_t x61 = -1;
uint16_t x69 = UINT16_MAX;
uint32_t x70 = 10705U;
int32_t t15 = INT32_MIN;
int32_t x74 = INT32_MIN;
int32_t x76 = INT32_MAX;
volatile int64_t x81 = -19162976241594223LL;
static uint8_t x85 = UINT8_MAX;
volatile int32_t x86 = -1;
static int32_t x87 = -60;
int32_t x90 = -114968;
static int64_t x92 = INT64_MIN;
volatile int64_t t20 = INT64_MIN;
int32_t t21 = -111531541;
int8_t x98 = 14;
volatile int32_t t22 = -537;
int64_t x106 = INT64_MAX;
int64_t x115 = INT64_MIN;
int64_t x120 = -1LL;
static int64_t t26 = -1757615180366319LL;
volatile int32_t x127 = INT32_MAX;
volatile int64_t x137 = 89115534209LL;
uint32_t x144 = 12715193U;
int32_t x165 = INT32_MIN;
int8_t x166 = -12;
static volatile int32_t x174 = -5;
int32_t x182 = 10967705;
int32_t x187 = -1;
volatile int64_t t42 = -30608965LL;
int16_t x196 = INT16_MIN;
int64_t x204 = INT64_MIN;
int8_t x206 = -1;
volatile int8_t x208 = INT8_MIN;
int64_t x216 = INT64_MIN;
int32_t t47 = 1;
static int8_t x224 = -1;
static uint32_t x233 = 4102263U;
int16_t x237 = INT16_MIN;
volatile int8_t x241 = INT8_MIN;
static int32_t t53 = 158443;
int8_t x246 = INT8_MAX;
volatile uint64_t x254 = UINT64_MAX;
int32_t x255 = INT32_MIN;
static int64_t x256 = 8488LL;
volatile int16_t x257 = INT16_MIN;
uint8_t x260 = 9U;
int32_t x263 = 17691279;
int16_t x264 = INT16_MAX;
static int32_t x265 = 7023;
static int8_t x271 = INT8_MIN;
volatile int32_t t60 = -763;
int64_t x276 = INT64_MIN;
uint16_t x282 = 134U;
int64_t x285 = -10007507379LL;
static uint32_t x289 = 61164777U;
volatile int64_t x294 = INT64_MAX;
int32_t t66 = -1;
uint64_t x298 = 1LLU;
volatile uint32_t t67 = 184004U;
uint64_t t69 = 576938331364655049LLU;
static int32_t x318 = INT32_MAX;
volatile int32_t t70 = 53;
volatile int8_t x323 = -1;
int32_t t71 = 2129449;
int16_t x329 = -110;
volatile int64_t t76 = INT64_MAX;
int32_t t77 = 6648984;
static int8_t x350 = INT8_MIN;
static volatile uint64_t t79 = 108LLU;
int16_t x358 = INT16_MIN;
int32_t x363 = -1;
static uint32_t x372 = 580793433U;
int8_t x375 = 3;
volatile int64_t x376 = INT64_MIN;
volatile int16_t x377 = INT16_MIN;
int8_t x382 = -1;
int32_t x399 = 4896516;
int32_t t91 = INT32_MIN;
int64_t x411 = -1LL;
static volatile int32_t t94 = 170511;
int8_t x424 = 0;
int16_t x438 = -1;


void f0(void) {
	static int64_t x5 = 194814744LL;
	static uint16_t x6 = 1U;
	int64_t x7 = INT64_MAX;
	uint8_t x8 = 11U;
	int32_t t0 = -57794;

	t0 = (((x5-x6)==x7)|x8);

	if (t0 != 11) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x10 = INT16_MIN;
	static int32_t x11 = -1118813;
	int8_t x12 = -1;
	volatile int32_t t1 = 4682751;

	t1 = (((x9-x10)==x11)|x12);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = INT16_MIN;
	int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MAX;
	int32_t x16 = -1;
	static volatile int32_t t2 = -15761695;

	t2 = (((x13-x14)==x15)|x16);

	if (t2 != -1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x17 = 29384LLU;
	int64_t x19 = 1844601LL;
	int64_t x20 = -25686378219371LL;
	static int64_t t3 = 17451069936689LL;

	t3 = (((x17-x18)==x19)|x20);

	if (t3 != -25686378219371LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	int8_t x23 = 1;
	static int8_t x24 = INT8_MIN;

	t4 = (((x21-x22)==x23)|x24);

	if (t4 != -128) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = -311LL;
	int16_t x28 = INT16_MAX;
	volatile int32_t t5 = 15;

	t5 = (((x25-x26)==x27)|x28);

	if (t5 != 32767) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MAX;
	uint64_t x30 = UINT64_MAX;
	int64_t x31 = INT64_MAX;
	uint32_t x32 = 3195U;
	volatile uint32_t t6 = 1540U;

	t6 = (((x29-x30)==x31)|x32);

	if (t6 != 3195U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x33 = UINT32_MAX;
	int16_t x35 = INT16_MIN;

	t7 = (((x33-x34)==x35)|x36);

	if (t7 != 127) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x37 = UINT8_MAX;
	uint64_t x38 = 6277910840177LLU;
	int8_t x39 = -1;
	int64_t x40 = -1LL;
	static volatile int64_t t8 = 11265488384LL;

	t8 = (((x37-x38)==x39)|x40);

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x42 = INT64_MIN;
	static int16_t x44 = INT16_MAX;

	t9 = (((x41-x42)==x43)|x44);

	if (t9 != 32767) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -1;
	int8_t x46 = -1;
	int64_t x47 = -545LL;
	uint32_t x48 = 389U;
	volatile uint32_t t10 = 130236U;

	t10 = (((x45-x46)==x47)|x48);

	if (t10 != 389U) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x50 = 1;
	static int64_t x51 = -21LL;
	uint64_t x52 = 253150566LLU;
	volatile uint64_t t11 = 139LLU;

	t11 = (((x49-x50)==x51)|x52);

	if (t11 != 253150566LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x54 = INT64_MIN;
	volatile uint32_t x55 = UINT32_MAX;
	volatile int32_t t12 = -36762;

	t12 = (((x53-x54)==x55)|x56);

	if (t12 != 14) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x58 = INT8_MIN;
	uint8_t x59 = 51U;
	int16_t x60 = 413;

	t13 = (((x57-x58)==x59)|x60);

	if (t13 != 413) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x62 = INT8_MAX;
	static int64_t x63 = INT64_MAX;
	int8_t x64 = -1;
	volatile int32_t t14 = 0;

	t14 = (((x61-x62)==x63)|x64);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint32_t x71 = 833435U;
	volatile int32_t x72 = INT32_MIN;

	t15 = (((x69-x70)==x71)|x72);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x73 = 60266378U;
	int16_t x75 = -1;
	static int32_t t16 = INT32_MAX;

	t16 = (((x73-x74)==x75)|x76);

	if (t16 != INT32_MAX) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x77 = INT16_MIN;
	static uint8_t x78 = 0U;
	volatile int8_t x79 = 1;
	volatile int16_t x80 = -1;
	int32_t t17 = -2355352;

	t17 = (((x77-x78)==x79)|x80);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x82 = 307LLU;
	static uint32_t x83 = 836391921U;
	uint32_t x84 = 104695U;
	uint32_t t18 = 1800639488U;

	t18 = (((x81-x82)==x83)|x84);

	if (t18 != 104695U) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x88 = INT8_MIN;
	static int32_t t19 = -94622;

	t19 = (((x85-x86)==x87)|x88);

	if (t19 != -128) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = 9;
	static int8_t x91 = INT8_MIN;

	t20 = (((x89-x90)==x91)|x92);

	if (t20 != INT64_MIN) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x93 = INT32_MIN;
	int16_t x94 = INT16_MIN;
	volatile int8_t x95 = -1;
	int32_t x96 = 131254600;

	t21 = (((x93-x94)==x95)|x96);

	if (t21 != 131254600) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x97 = 58;
	int32_t x99 = INT32_MIN;
	int8_t x100 = -1;

	t22 = (((x97-x98)==x99)|x100);

	if (t22 != -1) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = INT8_MIN;
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = INT8_MIN;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t23 = 431267;

	t23 = (((x101-x102)==x103)|x104);

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x105 = 854313996LLU;
	int32_t x107 = -1;
	uint8_t x108 = 26U;
	volatile int32_t t24 = 1865;

	t24 = (((x105-x106)==x107)|x108);

	if (t24 != 26) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x113 = INT8_MIN;
	volatile uint8_t x114 = UINT8_MAX;
	int32_t x116 = -1;
	int32_t t25 = 20003401;

	t25 = (((x113-x114)==x115)|x116);

	if (t25 != -1) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = INT32_MAX;
	uint8_t x118 = 8U;
	volatile int8_t x119 = INT8_MIN;

	t26 = (((x117-x118)==x119)|x120);

	if (t26 != -1LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x121 = 2U;
	int32_t x122 = 28;
	int8_t x123 = 0;
	int64_t x124 = 5LL;
	volatile int64_t t27 = 101991638LL;

	t27 = (((x121-x122)==x123)|x124);

	if (t27 != 5LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x125 = 270U;
	static uint16_t x126 = 567U;
	int8_t x128 = INT8_MAX;
	volatile int32_t t28 = 94;

	t28 = (((x125-x126)==x127)|x128);

	if (t28 != 127) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x129 = -1;
	int8_t x130 = 5;
	int32_t x131 = INT32_MAX;
	int64_t x132 = INT64_MAX;
	int64_t t29 = INT64_MAX;

	t29 = (((x129-x130)==x131)|x132);

	if (t29 != INT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x138 = INT16_MIN;
	int8_t x139 = 0;
	int32_t x140 = INT32_MIN;
	volatile int32_t t30 = INT32_MIN;

	t30 = (((x137-x138)==x139)|x140);

	if (t30 != INT32_MIN) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = UINT32_MAX;
	uint32_t x142 = 5333U;
	static uint8_t x143 = 15U;
	volatile uint32_t t31 = 93236U;

	t31 = (((x141-x142)==x143)|x144);

	if (t31 != 12715193U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x145 = -1;
	int32_t x146 = INT32_MAX;
	int16_t x147 = INT16_MAX;
	static uint16_t x148 = 166U;
	int32_t t32 = -1094030;

	t32 = (((x145-x146)==x147)|x148);

	if (t32 != 166) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x153 = 1U;
	volatile uint8_t x154 = 0U;
	int64_t x155 = INT64_MIN;
	uint64_t x156 = 21066384LLU;
	volatile uint64_t t33 = 1LLU;

	t33 = (((x153-x154)==x155)|x156);

	if (t33 != 21066384LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x157 = -13095LL;
	static int8_t x158 = -1;
	volatile int32_t x159 = 11300513;
	int8_t x160 = -1;
	volatile int32_t t34 = -994;

	t34 = (((x157-x158)==x159)|x160);

	if (t34 != -1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x161 = INT8_MAX;
	int32_t x162 = INT32_MAX;
	uint64_t x163 = 0LLU;
	int64_t x164 = 128688463087LL;
	volatile int64_t t35 = -1942564221569278968LL;

	t35 = (((x161-x162)==x163)|x164);

	if (t35 != 128688463087LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x167 = UINT16_MAX;
	volatile int64_t x168 = INT64_MIN;
	int64_t t36 = INT64_MIN;

	t36 = (((x165-x166)==x167)|x168);

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x169 = INT64_MIN;
	volatile int8_t x170 = 0;
	uint32_t x171 = UINT32_MAX;
	uint16_t x172 = UINT16_MAX;
	static int32_t t37 = 5009655;

	t37 = (((x169-x170)==x171)|x172);

	if (t37 != 65535) { NG(); } else { ; }
	
}

void f38(void) {
	static int32_t x173 = 14558;
	uint32_t x175 = 112U;
	int16_t x176 = -6742;
	volatile int32_t t38 = 658319;

	t38 = (((x173-x174)==x175)|x176);

	if (t38 != -6742) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x177 = 633LL;
	static int8_t x178 = -2;
	volatile int64_t x179 = INT64_MIN;
	uint16_t x180 = 1U;
	volatile int32_t t39 = 15103169;

	t39 = (((x177-x178)==x179)|x180);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	uint64_t x181 = 3255LLU;
	static int16_t x183 = 1;
	int16_t x184 = INT16_MAX;
	static int32_t t40 = 3743454;

	t40 = (((x181-x182)==x183)|x184);

	if (t40 != 32767) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x185 = 1922U;
	int8_t x186 = -1;
	int64_t x188 = -55LL;
	volatile int64_t t41 = -5225174511LL;

	t41 = (((x185-x186)==x187)|x188);

	if (t41 != -55LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x189 = -1;
	static uint64_t x190 = UINT64_MAX;
	volatile int16_t x191 = -1;
	volatile int64_t x192 = -7830LL;

	t42 = (((x189-x190)==x191)|x192);

	if (t42 != -7830LL) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = 114838429;
	int16_t x194 = INT16_MIN;
	int8_t x195 = -1;
	volatile int32_t t43 = 0;

	t43 = (((x193-x194)==x195)|x196);

	if (t43 != -32768) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x201 = -21;
	int32_t x202 = 4;
	static uint8_t x203 = 14U;
	static volatile int64_t t44 = INT64_MIN;

	t44 = (((x201-x202)==x203)|x204);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x205 = INT32_MIN;
	uint8_t x207 = UINT8_MAX;
	int32_t t45 = -35593;

	t45 = (((x205-x206)==x207)|x208);

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x213 = 9LLU;
	static volatile int64_t x214 = INT64_MIN;
	int8_t x215 = -1;
	volatile int64_t t46 = INT64_MIN;

	t46 = (((x213-x214)==x215)|x216);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x217 = INT64_MAX;
	uint8_t x218 = UINT8_MAX;
	int8_t x219 = 4;
	static int16_t x220 = INT16_MIN;

	t47 = (((x217-x218)==x219)|x220);

	if (t47 != -32768) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x221 = -21251234LL;
	int16_t x222 = -1;
	uint16_t x223 = UINT16_MAX;
	int32_t t48 = -85176;

	t48 = (((x221-x222)==x223)|x224);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x225 = INT32_MIN;
	int8_t x226 = -31;
	uint8_t x227 = 80U;
	volatile int64_t x228 = -1LL;
	volatile int64_t t49 = -6286329LL;

	t49 = (((x225-x226)==x227)|x228);

	if (t49 != -1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x229 = -1;
	int64_t x230 = -1LL;
	uint16_t x231 = 1U;
	static volatile uint32_t x232 = UINT32_MAX;
	static uint32_t t50 = UINT32_MAX;

	t50 = (((x229-x230)==x231)|x232);

	if (t50 != UINT32_MAX) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x234 = INT8_MIN;
	int64_t x235 = -2867495121LL;
	volatile int8_t x236 = -1;
	static volatile int32_t t51 = 0;

	t51 = (((x233-x234)==x235)|x236);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x238 = INT32_MIN;
	volatile int64_t x239 = 180LL;
	int16_t x240 = -1;
	int32_t t52 = 100931726;

	t52 = (((x237-x238)==x239)|x240);

	if (t52 != -1) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x242 = -2;
	volatile int8_t x243 = -1;
	int16_t x244 = INT16_MIN;

	t53 = (((x241-x242)==x243)|x244);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x245 = 0;
	int32_t x247 = INT32_MIN;
	volatile uint32_t x248 = 29422U;
	volatile uint32_t t54 = 56U;

	t54 = (((x245-x246)==x247)|x248);

	if (t54 != 29422U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x249 = -8LL;
	int16_t x250 = 17;
	uint16_t x251 = 15764U;
	volatile int32_t x252 = -1;
	int32_t t55 = 3614740;

	t55 = (((x249-x250)==x251)|x252);

	if (t55 != -1) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x253 = -1;
	int64_t t56 = 99LL;

	t56 = (((x253-x254)==x255)|x256);

	if (t56 != 8488LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x258 = -1;
	int64_t x259 = -8628LL;
	volatile int32_t t57 = 32924584;

	t57 = (((x257-x258)==x259)|x260);

	if (t57 != 9) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x261 = 71U;
	volatile uint8_t x262 = 26U;
	volatile int32_t t58 = -39;

	t58 = (((x261-x262)==x263)|x264);

	if (t58 != 32767) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x266 = -1;
	volatile int16_t x267 = INT16_MAX;
	uint16_t x268 = 12890U;
	static int32_t t59 = -3444;

	t59 = (((x265-x266)==x267)|x268);

	if (t59 != 12890) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x269 = -1;
	int8_t x270 = -1;
	int16_t x272 = -7936;

	t60 = (((x269-x270)==x271)|x272);

	if (t60 != -7936) { NG(); } else { ; }
	
}

void f61(void) {
	static int8_t x273 = 18;
	int32_t x274 = -1;
	int64_t x275 = INT64_MIN;
	int64_t t61 = INT64_MIN;

	t61 = (((x273-x274)==x275)|x276);

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x277 = -1356;
	uint64_t x278 = 574672498351LLU;
	volatile int64_t x279 = INT64_MIN;
	int16_t x280 = 1;
	static volatile int32_t t62 = -8176647;

	t62 = (((x277-x278)==x279)|x280);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = INT16_MAX;
	static uint8_t x283 = UINT8_MAX;
	int8_t x284 = INT8_MAX;
	int32_t t63 = 269190;

	t63 = (((x281-x282)==x283)|x284);

	if (t63 != 127) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x286 = -1;
	int64_t x287 = INT64_MAX;
	uint64_t x288 = 7705245092LLU;
	uint64_t t64 = 503600015868888659LLU;

	t64 = (((x285-x286)==x287)|x288);

	if (t64 != 7705245092LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x290 = INT32_MIN;
	volatile int16_t x291 = INT16_MAX;
	int64_t x292 = INT64_MAX;
	volatile int64_t t65 = INT64_MAX;

	t65 = (((x289-x290)==x291)|x292);

	if (t65 != INT64_MAX) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x293 = -1;
	static int64_t x295 = -2574946464743604136LL;
	uint16_t x296 = UINT16_MAX;

	t66 = (((x293-x294)==x295)|x296);

	if (t66 != 65535) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x297 = INT16_MIN;
	int32_t x299 = INT32_MIN;
	volatile uint32_t x300 = 15903040U;

	t67 = (((x297-x298)==x299)|x300);

	if (t67 != 15903040U) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x301 = INT16_MIN;
	static uint16_t x302 = 128U;
	uint16_t x303 = 80U;
	uint64_t x304 = 16114LLU;
	uint64_t t68 = 7243614916LLU;

	t68 = (((x301-x302)==x303)|x304);

	if (t68 != 16114LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x309 = 45494U;
	int32_t x310 = INT32_MIN;
	int32_t x311 = INT32_MIN;
	uint64_t x312 = 0LLU;

	t69 = (((x309-x310)==x311)|x312);

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x317 = 770543;
	int64_t x319 = INT64_MIN;
	static volatile int16_t x320 = -1;

	t70 = (((x317-x318)==x319)|x320);

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x321 = -1;
	int8_t x322 = INT8_MIN;
	int16_t x324 = -357;

	t71 = (((x321-x322)==x323)|x324);

	if (t71 != -357) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x325 = 22274868502LL;
	volatile int8_t x326 = INT8_MAX;
	int16_t x327 = INT16_MIN;
	volatile int32_t x328 = INT32_MAX;
	volatile int32_t t72 = INT32_MAX;

	t72 = (((x325-x326)==x327)|x328);

	if (t72 != INT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x330 = INT8_MIN;
	uint8_t x331 = 1U;
	int64_t x332 = INT64_MIN;
	int64_t t73 = INT64_MIN;

	t73 = (((x329-x330)==x331)|x332);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x333 = INT32_MAX;
	int32_t x334 = 865823;
	volatile int16_t x335 = INT16_MIN;
	uint16_t x336 = 1U;
	static volatile int32_t t74 = 20194704;

	t74 = (((x333-x334)==x335)|x336);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x337 = 32;
	uint32_t x338 = UINT32_MAX;
	int16_t x339 = 0;
	static int32_t x340 = -433980839;
	int32_t t75 = 1;

	t75 = (((x337-x338)==x339)|x340);

	if (t75 != -433980839) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x341 = -31;
	int32_t x342 = INT32_MIN;
	volatile int16_t x343 = -7065;
	volatile int64_t x344 = INT64_MAX;

	t76 = (((x341-x342)==x343)|x344);

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = 404631319;
	uint8_t x346 = UINT8_MAX;
	uint8_t x347 = UINT8_MAX;
	uint16_t x348 = 11U;

	t77 = (((x345-x346)==x347)|x348);

	if (t77 != 11) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x349 = INT16_MAX;
	volatile uint16_t x351 = UINT16_MAX;
	int8_t x352 = -1;
	int32_t t78 = -5;

	t78 = (((x349-x350)==x351)|x352);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x353 = UINT32_MAX;
	int8_t x354 = INT8_MIN;
	int32_t x355 = 1;
	static uint64_t x356 = 6943663260950LLU;

	t79 = (((x353-x354)==x355)|x356);

	if (t79 != 6943663260950LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x357 = INT64_MIN;
	int64_t x359 = INT64_MIN;
	static volatile uint64_t x360 = UINT64_MAX;
	uint64_t t80 = UINT64_MAX;

	t80 = (((x357-x358)==x359)|x360);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x361 = INT8_MAX;
	static int8_t x362 = 0;
	int16_t x364 = -1717;
	volatile int32_t t81 = 117;

	t81 = (((x361-x362)==x363)|x364);

	if (t81 != -1717) { NG(); } else { ; }
	
}

void f82(void) {
	static int32_t x365 = INT32_MIN;
	int64_t x366 = -14449680498986LL;
	int16_t x367 = INT16_MAX;
	volatile int16_t x368 = INT16_MIN;
	int32_t t82 = 608446893;

	t82 = (((x365-x366)==x367)|x368);

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x369 = 100U;
	int64_t x370 = -1LL;
	int32_t x371 = -11;
	uint32_t t83 = 27073U;

	t83 = (((x369-x370)==x371)|x372);

	if (t83 != 580793433U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x373 = 4755U;
	int8_t x374 = INT8_MIN;
	int64_t t84 = INT64_MIN;

	t84 = (((x373-x374)==x375)|x376);

	if (t84 != INT64_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	static uint16_t x378 = 483U;
	int32_t x379 = 997299844;
	int64_t x380 = INT64_MAX;
	volatile int64_t t85 = INT64_MAX;

	t85 = (((x377-x378)==x379)|x380);

	if (t85 != INT64_MAX) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = -6908448;
	volatile uint64_t x383 = UINT64_MAX;
	int16_t x384 = -100;
	int32_t t86 = -1;

	t86 = (((x381-x382)==x383)|x384);

	if (t86 != -100) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x385 = 12;
	int32_t x386 = -1;
	uint16_t x387 = UINT16_MAX;
	volatile uint64_t x388 = 35973162654247LLU;
	static uint64_t t87 = 58706LLU;

	t87 = (((x385-x386)==x387)|x388);

	if (t87 != 35973162654247LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x389 = -119;
	int16_t x390 = -1;
	volatile uint32_t x391 = 5U;
	volatile int32_t x392 = INT32_MIN;
	int32_t t88 = INT32_MIN;

	t88 = (((x389-x390)==x391)|x392);

	if (t88 != INT32_MIN) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x393 = 195607U;
	static int8_t x394 = 4;
	uint64_t x395 = 13982397593774LLU;
	volatile int64_t x396 = -1LL;
	int64_t t89 = -1773297880421244148LL;

	t89 = (((x393-x394)==x395)|x396);

	if (t89 != -1LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x397 = -12721680613185904LL;
	static int8_t x398 = INT8_MIN;
	static uint32_t x400 = 229U;
	uint32_t t90 = 1U;

	t90 = (((x397-x398)==x399)|x400);

	if (t90 != 229U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x401 = 13U;
	int64_t x402 = 115LL;
	static int32_t x403 = INT32_MIN;
	volatile int32_t x404 = INT32_MIN;

	t91 = (((x401-x402)==x403)|x404);

	if (t91 != INT32_MIN) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x405 = -6681;
	int16_t x406 = -1;
	int32_t x407 = INT32_MAX;
	int16_t x408 = 1545;
	volatile int32_t t92 = -353322;

	t92 = (((x405-x406)==x407)|x408);

	if (t92 != 1545) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x409 = 26U;
	int64_t x410 = -5781564460LL;
	int16_t x412 = INT16_MAX;
	int32_t t93 = 114966;

	t93 = (((x409-x410)==x411)|x412);

	if (t93 != 32767) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x413 = -1;
	int16_t x414 = INT16_MIN;
	int64_t x415 = INT64_MAX;
	static int16_t x416 = INT16_MIN;

	t94 = (((x413-x414)==x415)|x416);

	if (t94 != -32768) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x421 = INT16_MAX;
	int16_t x422 = 7;
	volatile int32_t x423 = -127706198;
	volatile int32_t t95 = 10;

	t95 = (((x421-x422)==x423)|x424);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int64_t x425 = INT64_MIN;
	int8_t x426 = -1;
	int64_t x427 = INT64_MAX;
	volatile int64_t x428 = -743842LL;
	static volatile int64_t t96 = 1338552471LL;

	t96 = (((x425-x426)==x427)|x428);

	if (t96 != -743842LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x433 = 45764807019LLU;
	volatile int64_t x434 = INT64_MIN;
	int64_t x435 = INT64_MIN;
	int8_t x436 = INT8_MAX;
	volatile int32_t t97 = 11030;

	t97 = (((x433-x434)==x435)|x436);

	if (t97 != 127) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x437 = 43297046LL;
	uint8_t x439 = 6U;
	int16_t x440 = -1;
	static volatile int32_t t98 = -6296;

	t98 = (((x437-x438)==x439)|x440);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int8_t x441 = INT8_MIN;
	int16_t x442 = -1;
	int64_t x443 = INT64_MIN;
	static int32_t x444 = INT32_MAX;
	int32_t t99 = INT32_MAX;

	t99 = (((x441-x442)==x443)|x444);

	if (t99 != INT32_MAX) { NG(); } else { ; }
	
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

