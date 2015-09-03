#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x2 = 477LLU;
int8_t x13 = 12;
volatile int32_t t1 = -97905;
int32_t x20 = INT32_MAX;
static int16_t x23 = INT16_MIN;
volatile uint32_t t3 = 121583U;
volatile int64_t x38 = -816650453516040424LL;
volatile int32_t t4 = 3373421;
uint32_t x46 = UINT32_MAX;
int8_t x48 = INT8_MAX;
int32_t t5 = -156514;
volatile uint64_t x64 = 1LLU;
int8_t x66 = INT8_MIN;
static volatile int16_t x74 = -115;
static uint8_t x89 = 3U;
int32_t x91 = INT32_MIN;
int32_t x93 = INT32_MAX;
static volatile int16_t x119 = INT16_MIN;
uint32_t t19 = 9455U;
int32_t t20 = -3555690;
int32_t x131 = -1;
int32_t t22 = 2;
int64_t x139 = -12717573735344230LL;
uint32_t x143 = UINT32_MAX;
int8_t x144 = -1;
volatile int32_t x146 = -1;
int64_t x151 = -1LL;
static int16_t x154 = INT16_MIN;
volatile int8_t x159 = INT8_MAX;
int32_t x178 = 4078637;
int16_t x180 = INT16_MIN;
static volatile int16_t x185 = INT16_MIN;
int8_t x194 = INT8_MIN;
uint32_t x198 = UINT32_MAX;
int8_t x201 = INT8_MIN;
int8_t x213 = INT8_MIN;
int64_t x223 = 6736LL;
uint32_t x227 = 106172127U;
uint8_t x233 = UINT8_MAX;
int32_t x241 = INT32_MAX;
uint64_t x242 = 127556293LLU;
volatile uint64_t x246 = UINT64_MAX;
int16_t x247 = INT16_MAX;
int64_t t46 = -7839LL;
int16_t x254 = -52;
uint32_t x256 = 5574U;
int8_t x260 = INT8_MAX;
uint16_t x264 = UINT16_MAX;
int16_t x270 = 0;
static int32_t t52 = 591519;
static int32_t x277 = INT32_MAX;
uint64_t x285 = 1602LLU;
uint64_t x288 = UINT64_MAX;
uint64_t t55 = 642LLU;
static int8_t x291 = INT8_MAX;
static int16_t x301 = -1;
uint32_t x306 = UINT32_MAX;
uint16_t x308 = UINT16_MAX;
int8_t x314 = -1;
int16_t x316 = -1;
static volatile int16_t x329 = INT16_MIN;
uint64_t x332 = 361558LLU;
volatile int16_t x333 = INT16_MIN;
int8_t x345 = INT8_MAX;
int16_t x355 = INT16_MIN;
volatile uint32_t x356 = 19803U;
uint32_t x358 = 3722U;
int32_t x368 = 7583;
int16_t x369 = 46;
uint32_t x371 = UINT32_MAX;
uint16_t x376 = UINT16_MAX;
static volatile int32_t t72 = 904977652;
static int32_t x379 = -1669;
int16_t x385 = 1429;
volatile int32_t t74 = -3384928;
int8_t x399 = 7;
int8_t x405 = INT8_MIN;
uint8_t x406 = UINT8_MAX;
int16_t x409 = INT16_MIN;
int32_t x411 = INT32_MIN;
static int8_t x421 = INT8_MIN;
static int64_t x423 = INT64_MIN;
int64_t x425 = 336LL;
static uint16_t x433 = 6063U;
int32_t t84 = 13;
int32_t x447 = -1;
int32_t t87 = -420235753;
uint32_t x470 = 5162053U;
int64_t x472 = -1LL;
volatile int32_t t91 = -38538;
static int64_t x477 = 1880029179682905LL;
uint64_t x478 = 46616536064176471LLU;
volatile int32_t t92 = -1831855;
int64_t x481 = -276153014707705LL;
int32_t t93 = -4489380;
int8_t x491 = INT8_MAX;
static int32_t x492 = -1;
int64_t x495 = INT64_MAX;
volatile uint32_t t95 = 9U;
volatile int32_t x498 = 1;
volatile int16_t x501 = INT16_MIN;
int64_t x505 = INT64_MIN;
int32_t t98 = -127567;
uint8_t x511 = 30U;


void f0(void) {
	int8_t x1 = -1;
	int8_t x3 = -1;
	uint32_t x4 = UINT32_MAX;
	volatile uint32_t t0 = 46495U;

	t0 = (((x1-x2)==x3)-x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int16_t x14 = INT16_MIN;
	static int32_t x15 = INT32_MIN;
	uint8_t x16 = 3U;

	t1 = (((x13-x14)==x15)-x16);

	if (t1 != -3) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x17 = UINT64_MAX;
	static int64_t x18 = INT64_MIN;
	volatile uint64_t x19 = 86980345030753902LLU;
	int32_t t2 = 2371;

	t2 = (((x17-x18)==x19)-x20);

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x21 = 1;
	volatile uint8_t x22 = 7U;
	uint32_t x24 = 26U;

	t3 = (((x21-x22)==x23)-x24);

	if (t3 != 4294967270U) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x37 = 370994629U;
	int8_t x39 = 29;
	int8_t x40 = 0;

	t4 = (((x37-x38)==x39)-x40);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x45 = 2;
	int32_t x47 = -16;

	t5 = (((x45-x46)==x47)-x48);

	if (t5 != -127) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x57 = INT16_MIN;
	int8_t x58 = -1;
	int32_t x59 = INT32_MIN;
	int8_t x60 = INT8_MAX;
	volatile int32_t t6 = 7907;

	t6 = (((x57-x58)==x59)-x60);

	if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x61 = 6LL;
	static int32_t x62 = INT32_MAX;
	int64_t x63 = INT64_MIN;
	uint64_t t7 = UINT64_MAX;

	t7 = (((x61-x62)==x63)-x64);

	if (t7 != UINT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x65 = -1LL;
	volatile int64_t x67 = INT64_MIN;
	uint16_t x68 = UINT16_MAX;
	static int32_t t8 = 2123;

	t8 = (((x65-x66)==x67)-x68);

	if (t8 != -65535) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x69 = INT64_MAX;
	uint64_t x70 = UINT64_MAX;
	int16_t x71 = INT16_MAX;
	int16_t x72 = INT16_MIN;
	volatile int32_t t9 = -1377508;

	t9 = (((x69-x70)==x71)-x72);

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x73 = INT8_MIN;
	static volatile int8_t x75 = -1;
	int32_t x76 = -1007;
	volatile int32_t t10 = -320;

	t10 = (((x73-x74)==x75)-x76);

	if (t10 != 1007) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x77 = 1;
	volatile int16_t x78 = INT16_MAX;
	uint32_t x79 = 994206U;
	int16_t x80 = -247;
	volatile int32_t t11 = 3469;

	t11 = (((x77-x78)==x79)-x80);

	if (t11 != 247) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x85 = INT64_MIN;
	uint64_t x86 = UINT64_MAX;
	int32_t x87 = INT32_MAX;
	static int32_t x88 = -1;
	volatile int32_t t12 = -2057;

	t12 = (((x85-x86)==x87)-x88);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x90 = 3990847U;
	volatile int64_t x92 = INT64_MAX;
	volatile int64_t t13 = 13960LL;

	t13 = (((x89-x90)==x91)-x92);

	if (t13 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x94 = 0U;
	int16_t x95 = 38;
	uint32_t x96 = UINT32_MAX;
	uint32_t t14 = 26675U;

	t14 = (((x93-x94)==x95)-x96);

	if (t14 != 1U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x97 = 13;
	volatile int8_t x98 = INT8_MIN;
	volatile int16_t x99 = 2043;
	uint64_t x100 = 32809941247147LLU;
	volatile uint64_t t15 = 142LLU;

	t15 = (((x97-x98)==x99)-x100);

	if (t15 != 18446711263768304469LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x101 = -724141970467LL;
	int64_t x102 = INT64_MIN;
	uint64_t x103 = 4134279LLU;
	uint16_t x104 = UINT16_MAX;
	volatile int32_t t16 = -5;

	t16 = (((x101-x102)==x103)-x104);

	if (t16 != -65535) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint16_t x105 = UINT16_MAX;
	int32_t x106 = 112263668;
	int32_t x107 = -8;
	uint16_t x108 = 2U;
	static int32_t t17 = -1;

	t17 = (((x105-x106)==x107)-x108);

	if (t17 != -2) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x113 = UINT64_MAX;
	uint8_t x114 = 10U;
	uint64_t x115 = UINT64_MAX;
	uint64_t x116 = 1218448134962800LLU;
	volatile uint64_t t18 = 418674886094010296LLU;

	t18 = (((x113-x114)==x115)-x116);

	if (t18 != 18445525625574588816LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x117 = INT64_MIN;
	volatile int64_t x118 = INT64_MIN;
	uint32_t x120 = 1803658U;

	t19 = (((x117-x118)==x119)-x120);

	if (t19 != 4293163638U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x121 = 2;
	int64_t x122 = 99LL;
	uint8_t x123 = 0U;
	int32_t x124 = 3376248;

	t20 = (((x121-x122)==x123)-x124);

	if (t20 != -3376248) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x125 = -3910;
	uint64_t x126 = 488691642192374491LLU;
	uint32_t x127 = UINT32_MAX;
	volatile uint32_t x128 = 3673U;
	static volatile uint32_t t21 = 9507513U;

	t21 = (((x125-x126)==x127)-x128);

	if (t21 != 4294963623U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x129 = 27169785;
	volatile uint64_t x130 = 213793981LLU;
	int32_t x132 = 3233;

	t22 = (((x129-x130)==x131)-x132);

	if (t22 != -3233) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x133 = -1;
	int32_t x134 = -1;
	uint8_t x135 = UINT8_MAX;
	uint8_t x136 = 104U;
	volatile int32_t t23 = -810334;

	t23 = (((x133-x134)==x135)-x136);

	if (t23 != -104) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x137 = 5498387U;
	int16_t x138 = -1;
	int16_t x140 = INT16_MIN;
	int32_t t24 = -753;

	t24 = (((x137-x138)==x139)-x140);

	if (t24 != 32768) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x141 = 18U;
	volatile uint8_t x142 = UINT8_MAX;
	static int32_t t25 = 9;

	t25 = (((x141-x142)==x143)-x144);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x145 = -1LL;
	int32_t x147 = -1;
	int32_t x148 = 16054229;
	volatile int32_t t26 = 7275941;

	t26 = (((x145-x146)==x147)-x148);

	if (t26 != -16054229) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x149 = 3U;
	int16_t x150 = INT16_MAX;
	int8_t x152 = 12;
	static int32_t t27 = -2;

	t27 = (((x149-x150)==x151)-x152);

	if (t27 != -12) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x153 = INT16_MIN;
	volatile uint8_t x155 = 3U;
	uint64_t x156 = 9730769775054LLU;
	uint64_t t28 = 8LLU;

	t28 = (((x153-x154)==x155)-x156);

	if (t28 != 18446734342939776562LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x157 = -1;
	uint64_t x158 = UINT64_MAX;
	static uint32_t x160 = 410353757U;
	uint32_t t29 = 1657149U;

	t29 = (((x157-x158)==x159)-x160);

	if (t29 != 3884613539U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x161 = -1LL;
	static volatile uint16_t x162 = 17883U;
	static int16_t x163 = 4;
	int8_t x164 = INT8_MIN;
	int32_t t30 = -26;

	t30 = (((x161-x162)==x163)-x164);

	if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile uint16_t x165 = 8024U;
	uint32_t x166 = UINT32_MAX;
	static uint32_t x167 = 129541U;
	static int32_t x168 = -231212;
	volatile int32_t t31 = -105145286;

	t31 = (((x165-x166)==x167)-x168);

	if (t31 != 231212) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x177 = 162;
	int64_t x179 = -1LL;
	volatile int32_t t32 = -6304;

	t32 = (((x177-x178)==x179)-x180);

	if (t32 != 32768) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x186 = -1;
	uint32_t x187 = 127U;
	volatile int64_t x188 = 8192462601LL;
	volatile int64_t t33 = -1LL;

	t33 = (((x185-x186)==x187)-x188);

	if (t33 != -8192462601LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x193 = UINT64_MAX;
	int32_t x195 = INT32_MIN;
	static volatile int16_t x196 = -1;
	volatile int32_t t34 = -97;

	t34 = (((x193-x194)==x195)-x196);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x197 = -3043407097008LL;
	int32_t x199 = INT32_MIN;
	uint32_t x200 = 35U;
	uint32_t t35 = 25U;

	t35 = (((x197-x198)==x199)-x200);

	if (t35 != 4294967261U) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x202 = -1;
	int32_t x203 = -1;
	int8_t x204 = INT8_MAX;
	volatile int32_t t36 = 248;

	t36 = (((x201-x202)==x203)-x204);

	if (t36 != -127) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x205 = INT32_MIN;
	static int16_t x206 = -1;
	static int16_t x207 = INT16_MIN;
	static int8_t x208 = 11;
	volatile int32_t t37 = 198930567;

	t37 = (((x205-x206)==x207)-x208);

	if (t37 != -11) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x209 = INT16_MIN;
	int32_t x210 = 51111603;
	uint32_t x211 = 112954104U;
	int8_t x212 = 1;
	volatile int32_t t38 = -301816112;

	t38 = (((x209-x210)==x211)-x212);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x214 = 5;
	int64_t x215 = 25040674094779665LL;
	uint8_t x216 = 2U;
	int32_t t39 = -236;

	t39 = (((x213-x214)==x215)-x216);

	if (t39 != -2) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x217 = 312U;
	int16_t x218 = 606;
	uint64_t x219 = 890504394LLU;
	int64_t x220 = -12452276718LL;
	volatile int64_t t40 = -48512007435558LL;

	t40 = (((x217-x218)==x219)-x220);

	if (t40 != 12452276718LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x221 = 8439LLU;
	volatile int8_t x222 = -45;
	uint64_t x224 = UINT64_MAX;
	volatile uint64_t t41 = 11LLU;

	t41 = (((x221-x222)==x223)-x224);

	if (t41 != 1LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x225 = -2643225663133LL;
	static uint8_t x226 = 2U;
	volatile int64_t x228 = -1LL;
	volatile int64_t t42 = -1LL;

	t42 = (((x225-x226)==x227)-x228);

	if (t42 != 1LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int8_t x234 = 6;
	int8_t x235 = 18;
	int16_t x236 = INT16_MIN;
	int32_t t43 = -431827;

	t43 = (((x233-x234)==x235)-x236);

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x237 = INT16_MIN;
	int8_t x238 = INT8_MAX;
	uint64_t x239 = 1241266719855702726LLU;
	int8_t x240 = INT8_MAX;
	static volatile int32_t t44 = -2426449;

	t44 = (((x237-x238)==x239)-x240);

	if (t44 != -127) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x243 = 5U;
	int32_t x244 = -5589313;
	volatile int32_t t45 = -16;

	t45 = (((x241-x242)==x243)-x244);

	if (t45 != 5589313) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x245 = 42298LLU;
	int64_t x248 = 70054190LL;

	t46 = (((x245-x246)==x247)-x248);

	if (t46 != -70054190LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x249 = -1LL;
	volatile int32_t x250 = -41851;
	static uint8_t x251 = 10U;
	int16_t x252 = -1;
	volatile int32_t t47 = -229;

	t47 = (((x249-x250)==x251)-x252);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x253 = -1LL;
	volatile int64_t x255 = -1LL;
	uint32_t t48 = 265620U;

	t48 = (((x253-x254)==x255)-x256);

	if (t48 != 4294961722U) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x257 = -1384LL;
	int16_t x258 = -1;
	uint32_t x259 = UINT32_MAX;
	static volatile int32_t t49 = 1626617;

	t49 = (((x257-x258)==x259)-x260);

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x261 = 412373549005LLU;
	int8_t x262 = INT8_MIN;
	volatile int8_t x263 = INT8_MIN;
	int32_t t50 = -4;

	t50 = (((x261-x262)==x263)-x264);

	if (t50 != -65535) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x265 = INT8_MIN;
	uint8_t x266 = 29U;
	int16_t x267 = INT16_MIN;
	static int32_t x268 = -1;
	volatile int32_t t51 = -165873;

	t51 = (((x265-x266)==x267)-x268);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x269 = INT64_MIN;
	uint32_t x271 = 25366670U;
	int8_t x272 = -1;

	t52 = (((x269-x270)==x271)-x272);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x278 = -240LL;
	static volatile int32_t x279 = -1;
	int8_t x280 = -1;
	int32_t t53 = -1070;

	t53 = (((x277-x278)==x279)-x280);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x281 = -1;
	int16_t x282 = INT16_MIN;
	uint8_t x283 = 78U;
	uint32_t x284 = UINT32_MAX;
	static uint32_t t54 = 41U;

	t54 = (((x281-x282)==x283)-x284);

	if (t54 != 1U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x286 = -1;
	int64_t x287 = -1LL;

	t55 = (((x285-x286)==x287)-x288);

	if (t55 != 1LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x289 = 4860085449543LLU;
	int64_t x290 = INT64_MIN;
	volatile int16_t x292 = INT16_MIN;
	volatile int32_t t56 = -1;

	t56 = (((x289-x290)==x291)-x292);

	if (t56 != 32768) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x293 = INT32_MIN;
	int64_t x294 = INT64_MIN;
	static uint8_t x295 = 0U;
	uint8_t x296 = UINT8_MAX;
	int32_t t57 = -23414;

	t57 = (((x293-x294)==x295)-x296);

	if (t57 != -255) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x302 = 7046LL;
	int8_t x303 = 43;
	volatile uint64_t x304 = 247944432LLU;
	uint64_t t58 = 4085828719LLU;

	t58 = (((x301-x302)==x303)-x304);

	if (t58 != 18446744073461607184LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x305 = INT8_MIN;
	int16_t x307 = INT16_MAX;
	volatile int32_t t59 = 2181;

	t59 = (((x305-x306)==x307)-x308);

	if (t59 != -65535) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x309 = -1;
	int8_t x310 = INT8_MAX;
	volatile int32_t x311 = INT32_MAX;
	int16_t x312 = INT16_MAX;
	volatile int32_t t60 = 37841;

	t60 = (((x309-x310)==x311)-x312);

	if (t60 != -32767) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x313 = 1;
	volatile int16_t x315 = -5432;
	int32_t t61 = 88697918;

	t61 = (((x313-x314)==x315)-x316);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x321 = INT8_MIN;
	static int64_t x322 = INT64_MIN;
	int64_t x323 = INT64_MAX;
	static uint16_t x324 = UINT16_MAX;
	int32_t t62 = 0;

	t62 = (((x321-x322)==x323)-x324);

	if (t62 != -65535) { NG(); } else { ; }
	
}

void f63(void) {
	static uint32_t x330 = UINT32_MAX;
	volatile uint32_t x331 = 1768292877U;
	uint64_t t63 = 280580268LLU;

	t63 = (((x329-x330)==x331)-x332);

	if (t63 != 18446744073709190058LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x334 = UINT8_MAX;
	volatile uint64_t x335 = 12217123931009LLU;
	int64_t x336 = 149103863998954140LL;
	int64_t t64 = -302LL;

	t64 = (((x333-x334)==x335)-x336);

	if (t64 != -149103863998954140LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int16_t x341 = INT16_MIN;
	uint32_t x342 = UINT32_MAX;
	volatile int32_t x343 = INT32_MIN;
	uint64_t x344 = UINT64_MAX;
	uint64_t t65 = 7949473823624160463LLU;

	t65 = (((x341-x342)==x343)-x344);

	if (t65 != 1LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x346 = 6U;
	uint64_t x347 = 10LLU;
	static volatile uint16_t x348 = UINT16_MAX;
	int32_t t66 = -524398359;

	t66 = (((x345-x346)==x347)-x348);

	if (t66 != -65535) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x349 = UINT8_MAX;
	static int16_t x350 = 1;
	static uint32_t x351 = 1256045454U;
	static uint16_t x352 = 91U;
	volatile int32_t t67 = 478171;

	t67 = (((x349-x350)==x351)-x352);

	if (t67 != -91) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x353 = INT32_MIN;
	int64_t x354 = INT64_MIN;
	volatile uint32_t t68 = 253025835U;

	t68 = (((x353-x354)==x355)-x356);

	if (t68 != 4294947493U) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x357 = INT8_MIN;
	int32_t x359 = 15629364;
	volatile uint32_t x360 = 264775116U;
	uint32_t t69 = 15591U;

	t69 = (((x357-x358)==x359)-x360);

	if (t69 != 4030192180U) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x365 = 7U;
	static uint16_t x366 = 18122U;
	int16_t x367 = -1;
	int32_t t70 = 186234;

	t70 = (((x365-x366)==x367)-x368);

	if (t70 != -7583) { NG(); } else { ; }
	
}

void f71(void) {
	uint16_t x370 = UINT16_MAX;
	int8_t x372 = -4;
	static int32_t t71 = 4;

	t71 = (((x369-x370)==x371)-x372);

	if (t71 != 4) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x373 = 53;
	uint32_t x374 = UINT32_MAX;
	static volatile int8_t x375 = INT8_MAX;

	t72 = (((x373-x374)==x375)-x376);

	if (t72 != -65535) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x377 = INT8_MAX;
	volatile int8_t x378 = INT8_MIN;
	int32_t x380 = -66893167;
	int32_t t73 = 163413;

	t73 = (((x377-x378)==x379)-x380);

	if (t73 != 66893167) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x386 = 4211912;
	int16_t x387 = -1;
	int16_t x388 = INT16_MAX;

	t74 = (((x385-x386)==x387)-x388);

	if (t74 != -32767) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x393 = INT16_MAX;
	int64_t x394 = -1LL;
	int64_t x395 = -82154530LL;
	int16_t x396 = -95;
	volatile int32_t t75 = -410578;

	t75 = (((x393-x394)==x395)-x396);

	if (t75 != 95) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x397 = 2U;
	int32_t x398 = INT32_MAX;
	static int64_t x400 = 0LL;
	int64_t t76 = -141LL;

	t76 = (((x397-x398)==x399)-x400);

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x401 = INT8_MAX;
	volatile int32_t x402 = 893256;
	uint32_t x403 = 15U;
	int32_t x404 = INT32_MAX;
	int32_t t77 = 0;

	t77 = (((x401-x402)==x403)-x404);

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x407 = -1;
	uint8_t x408 = UINT8_MAX;
	volatile int32_t t78 = 2286;

	t78 = (((x405-x406)==x407)-x408);

	if (t78 != -255) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile uint16_t x410 = UINT16_MAX;
	volatile int8_t x412 = INT8_MAX;
	int32_t t79 = 124814574;

	t79 = (((x409-x410)==x411)-x412);

	if (t79 != -127) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x417 = -1;
	volatile uint32_t x418 = UINT32_MAX;
	int32_t x419 = 2455100;
	volatile uint8_t x420 = UINT8_MAX;
	int32_t t80 = -123355;

	t80 = (((x417-x418)==x419)-x420);

	if (t80 != -255) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x422 = 478932897U;
	uint32_t x424 = 61866U;
	volatile uint32_t t81 = 801693U;

	t81 = (((x421-x422)==x423)-x424);

	if (t81 != 4294905430U) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x426 = UINT32_MAX;
	int32_t x427 = 314125;
	uint16_t x428 = 10U;
	volatile int32_t t82 = 224271;

	t82 = (((x425-x426)==x427)-x428);

	if (t82 != -10) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x434 = 1U;
	int64_t x435 = INT64_MIN;
	int16_t x436 = INT16_MIN;
	volatile int32_t t83 = -7774;

	t83 = (((x433-x434)==x435)-x436);

	if (t83 != 32768) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x437 = 1821521405093LLU;
	uint16_t x438 = 466U;
	static uint16_t x439 = UINT16_MAX;
	uint16_t x440 = UINT16_MAX;

	t84 = (((x437-x438)==x439)-x440);

	if (t84 != -65535) { NG(); } else { ; }
	
}

void f85(void) {
	static int8_t x441 = INT8_MIN;
	int16_t x442 = INT16_MIN;
	int16_t x443 = INT16_MIN;
	int32_t x444 = -1029;
	volatile int32_t t85 = 828521622;

	t85 = (((x441-x442)==x443)-x444);

	if (t85 != 1029) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x445 = INT64_MIN;
	uint64_t x446 = UINT64_MAX;
	uint32_t x448 = 1U;
	volatile uint32_t t86 = UINT32_MAX;

	t86 = (((x445-x446)==x447)-x448);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x449 = 6781113U;
	static int64_t x450 = -826886054LL;
	int32_t x451 = -1;
	static int8_t x452 = -1;

	t87 = (((x449-x450)==x451)-x452);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x453 = 9U;
	uint32_t x454 = 851483059U;
	volatile int16_t x455 = -4;
	uint8_t x456 = 65U;
	static volatile int32_t t88 = 1023829;

	t88 = (((x453-x454)==x455)-x456);

	if (t88 != -65) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x457 = 10U;
	uint8_t x458 = UINT8_MAX;
	static int32_t x459 = -954;
	uint64_t x460 = 1522373951271101LLU;
	static volatile uint64_t t89 = 22186216630222LLU;

	t89 = (((x457-x458)==x459)-x460);

	if (t89 != 18445221699758280515LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x469 = -1;
	volatile int32_t x471 = INT32_MAX;
	volatile int64_t t90 = -121171066788698803LL;

	t90 = (((x469-x470)==x471)-x472);

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x473 = UINT64_MAX;
	uint64_t x474 = 2886890314LLU;
	int32_t x475 = -1;
	volatile int8_t x476 = INT8_MIN;

	t91 = (((x473-x474)==x475)-x476);

	if (t91 != 128) { NG(); } else { ; }
	
}

void f92(void) {
	static int32_t x479 = INT32_MAX;
	int16_t x480 = 333;

	t92 = (((x477-x478)==x479)-x480);

	if (t92 != -333) { NG(); } else { ; }
	
}

void f93(void) {
	static uint16_t x482 = 1437U;
	uint32_t x483 = 530128721U;
	int16_t x484 = INT16_MAX;

	t93 = (((x481-x482)==x483)-x484);

	if (t93 != -32767) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x489 = -1;
	int16_t x490 = -7;
	volatile int32_t t94 = 256979;

	t94 = (((x489-x490)==x491)-x492);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x493 = -1;
	static uint16_t x494 = 26442U;
	uint32_t x496 = UINT32_MAX;

	t95 = (((x493-x494)==x495)-x496);

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x497 = INT64_MAX;
	volatile int32_t x499 = INT32_MIN;
	int8_t x500 = INT8_MIN;
	static volatile int32_t t96 = 4;

	t96 = (((x497-x498)==x499)-x500);

	if (t96 != 128) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x502 = -6;
	int64_t x503 = INT64_MAX;
	uint16_t x504 = 52U;
	static volatile int32_t t97 = 8079;

	t97 = (((x501-x502)==x503)-x504);

	if (t97 != -52) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x506 = INT64_MIN;
	static volatile uint64_t x507 = 3732708665159313532LLU;
	int16_t x508 = -1;

	t98 = (((x505-x506)==x507)-x508);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int16_t x509 = -1;
	static uint8_t x510 = 62U;
	uint16_t x512 = UINT16_MAX;
	static volatile int32_t t99 = 1;

	t99 = (((x509-x510)==x511)-x512);

	if (t99 != -65535) { NG(); } else { ; }
	
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

