#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t t0 = -28103;
uint32_t x6 = 1940094U;
static int8_t x7 = INT8_MIN;
static uint32_t x9 = 131387065U;
uint64_t x11 = 6639LLU;
uint8_t x24 = UINT8_MAX;
uint16_t x33 = 14181U;
uint64_t x34 = 4LLU;
static volatile uint64_t x40 = 4289705150LLU;
static uint64_t x48 = UINT64_MAX;
volatile int32_t t9 = 1277445;
int16_t x49 = INT16_MIN;
int32_t x50 = -245974791;
int16_t x51 = INT16_MIN;
uint32_t x56 = 1462U;
static volatile int32_t t11 = 138626095;
static int8_t x61 = INT8_MAX;
int32_t x67 = -1;
int8_t x69 = INT8_MAX;
int64_t x75 = 31650760688229LL;
uint32_t x81 = UINT32_MAX;
int64_t x87 = INT64_MIN;
int16_t x93 = INT16_MAX;
int32_t x94 = 1904;
int32_t t20 = -1;
uint8_t x98 = 8U;
static int16_t x99 = 3964;
uint32_t x103 = UINT32_MAX;
int32_t t22 = 59;
volatile int8_t x119 = INT8_MIN;
volatile int32_t x121 = INT32_MIN;
volatile uint64_t x122 = UINT64_MAX;
int64_t x123 = INT64_MIN;
volatile int64_t x128 = -1LL;
int8_t x137 = INT8_MIN;
int32_t x140 = INT32_MAX;
int16_t x149 = INT16_MIN;
uint32_t x150 = UINT32_MAX;
int64_t x156 = 1812906129LL;
uint32_t x161 = UINT32_MAX;
static int32_t t37 = -24352267;
uint32_t x173 = UINT32_MAX;
static int8_t x175 = INT8_MAX;
int64_t x176 = 1368296727LL;
uint16_t x183 = UINT16_MAX;
uint64_t x184 = 10551LLU;
volatile int32_t t39 = 4328702;
volatile int32_t t41 = -6783;
int64_t x195 = INT64_MIN;
int32_t x196 = INT32_MIN;
volatile int32_t t42 = -59681;
int64_t x200 = 1624143986448422370LL;
int8_t x205 = INT8_MIN;
int64_t x206 = -1LL;
volatile uint8_t x209 = 1U;
int8_t x211 = INT8_MIN;
uint32_t x214 = UINT32_MAX;
int32_t x217 = 0;
uint32_t x218 = 14611473U;
int16_t x223 = -15;
uint16_t x225 = 2759U;
volatile int32_t t52 = -57913;
static int64_t x238 = -1LL;
static int16_t x240 = -1;
int32_t x243 = INT32_MIN;
int32_t x244 = 4;
volatile int16_t x245 = INT16_MIN;
uint64_t x252 = 45LLU;
static int8_t x256 = -1;
uint32_t x259 = UINT32_MAX;
static volatile int32_t t60 = -27;
volatile uint16_t x280 = 102U;
int16_t x281 = INT16_MAX;
volatile int16_t x293 = -1;
int32_t t65 = -7512;
static int32_t x308 = -1;
uint16_t x315 = UINT16_MAX;
int16_t x322 = -4;
uint32_t x325 = UINT32_MAX;
int32_t x339 = 20171;
int32_t x342 = 3493772;
uint8_t x343 = 58U;
int32_t t78 = 110;
int32_t t81 = -23187903;
volatile int32_t t84 = 3346;
int32_t x382 = 29430;
int64_t x384 = 25985359566LL;
volatile int8_t x392 = INT8_MIN;
int16_t x394 = -1;
uint32_t x397 = 2304957U;
static int64_t x405 = INT64_MIN;
int8_t x413 = 1;
int32_t t93 = 872625;
uint16_t x422 = UINT16_MAX;
static volatile uint64_t x425 = 30204789867LLU;
int16_t x430 = INT16_MIN;
volatile int32_t t96 = 1;
uint32_t x437 = 199U;
int32_t t98 = 23;


void f0(void) {
	int32_t x1 = INT32_MAX;
	static uint16_t x2 = 251U;
	int8_t x3 = -1;
	static int64_t x4 = INT64_MIN;

	t0 = (((x1-x2)&x3)<x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = -5875420;
	uint16_t x8 = 16531U;
	static volatile int32_t t1 = -2882;

	t1 = (((x5-x6)&x7)<x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x10 = UINT16_MAX;
	volatile int16_t x12 = INT16_MIN;
	static volatile int32_t t2 = -674623538;

	t2 = (((x9-x10)&x11)<x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	int32_t x14 = INT32_MAX;
	uint8_t x15 = UINT8_MAX;
	int64_t x16 = INT64_MIN;
	int32_t t3 = -4412;

	t3 = (((x13-x14)&x15)<x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MAX;
	uint32_t x18 = 232800785U;
	static uint16_t x19 = UINT16_MAX;
	static int8_t x20 = -10;
	volatile int32_t t4 = 13730;

	t4 = (((x17-x18)&x19)<x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	uint64_t x22 = UINT64_MAX;
	int32_t x23 = 1;
	static int32_t t5 = -108448332;

	t5 = (((x21-x22)&x23)<x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int32_t x29 = -1;
	int64_t x30 = INT64_MIN;
	int8_t x31 = INT8_MIN;
	int64_t x32 = -1LL;
	int32_t t6 = 806;

	t6 = (((x29-x30)&x31)<x32);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x35 = 0U;
	uint32_t x36 = UINT32_MAX;
	static int32_t t7 = 16461171;

	t7 = (((x33-x34)&x35)<x36);

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x37 = 16253733826LLU;
	int32_t x38 = INT32_MIN;
	int16_t x39 = 15;
	int32_t t8 = -2246743;

	t8 = (((x37-x38)&x39)<x40);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x45 = 0U;
	int8_t x46 = -3;
	uint8_t x47 = 7U;

	t9 = (((x45-x46)&x47)<x48);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x52 = INT32_MIN;
	volatile int32_t t10 = 13;

	t10 = (((x49-x50)&x51)<x52);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint32_t x53 = 218U;
	static int8_t x54 = INT8_MIN;
	volatile int16_t x55 = -1;

	t11 = (((x53-x54)&x55)<x56);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x57 = UINT32_MAX;
	uint8_t x58 = 48U;
	uint64_t x59 = 11159LLU;
	int32_t x60 = -25308751;
	static int32_t t12 = 1444308;

	t12 = (((x57-x58)&x59)<x60);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x62 = 2LL;
	static volatile int8_t x63 = INT8_MAX;
	volatile int16_t x64 = INT16_MIN;
	static volatile int32_t t13 = -10404;

	t13 = (((x61-x62)&x63)<x64);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x65 = -1LL;
	static uint32_t x66 = UINT32_MAX;
	volatile int16_t x68 = 1;
	static volatile int32_t t14 = -30721778;

	t14 = (((x65-x66)&x67)<x68);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x70 = INT8_MIN;
	int16_t x71 = -1;
	int16_t x72 = INT16_MAX;
	static volatile int32_t t15 = 422856871;

	t15 = (((x69-x70)&x71)<x72);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x73 = -1;
	static volatile int64_t x74 = -1LL;
	int32_t x76 = INT32_MAX;
	volatile int32_t t16 = 543213;

	t16 = (((x73-x74)&x75)<x76);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x82 = 24208595LL;
	uint16_t x83 = 2709U;
	volatile int64_t x84 = INT64_MIN;
	volatile int32_t t17 = 466468;

	t17 = (((x81-x82)&x83)<x84);

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x85 = 2U;
	int64_t x86 = 0LL;
	int32_t x88 = INT32_MIN;
	int32_t t18 = -14;

	t18 = (((x85-x86)&x87)<x88);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x89 = INT16_MIN;
	static volatile uint32_t x90 = UINT32_MAX;
	uint16_t x91 = 10U;
	uint16_t x92 = UINT16_MAX;
	volatile int32_t t19 = 164809244;

	t19 = (((x89-x90)&x91)<x92);

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x95 = -1;
	int8_t x96 = INT8_MIN;

	t20 = (((x93-x94)&x95)<x96);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x97 = INT32_MAX;
	int16_t x100 = -1896;
	int32_t t21 = -4184;

	t21 = (((x97-x98)&x99)<x100);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x101 = 1746174329587024LLU;
	uint64_t x102 = UINT64_MAX;
	uint32_t x104 = 26432U;

	t22 = (((x101-x102)&x103)<x104);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x105 = UINT8_MAX;
	int32_t x106 = -1;
	int64_t x107 = -3490262LL;
	int16_t x108 = INT16_MIN;
	static volatile int32_t t23 = 68584634;

	t23 = (((x105-x106)&x107)<x108);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int8_t x109 = -1;
	int16_t x110 = -226;
	int32_t x111 = INT32_MIN;
	volatile int8_t x112 = INT8_MAX;
	static volatile int32_t t24 = 4216;

	t24 = (((x109-x110)&x111)<x112);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x113 = 0U;
	uint32_t x114 = UINT32_MAX;
	static volatile uint32_t x115 = UINT32_MAX;
	volatile int16_t x116 = INT16_MAX;
	int32_t t25 = 1025;

	t25 = (((x113-x114)&x115)<x116);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x117 = 350553U;
	uint16_t x118 = UINT16_MAX;
	int8_t x120 = 21;
	int32_t t26 = 34586;

	t26 = (((x117-x118)&x119)<x120);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x124 = 72U;
	static volatile int32_t t27 = -805306;

	t27 = (((x121-x122)&x123)<x124);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x125 = -89;
	int64_t x126 = INT64_MIN;
	uint16_t x127 = UINT16_MAX;
	static int32_t t28 = -1083451;

	t28 = (((x125-x126)&x127)<x128);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x129 = INT16_MIN;
	int8_t x130 = -1;
	static uint64_t x131 = UINT64_MAX;
	int8_t x132 = -1;
	int32_t t29 = 0;

	t29 = (((x129-x130)&x131)<x132);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x133 = 575990749593702LLU;
	static int8_t x134 = INT8_MIN;
	volatile int8_t x135 = 1;
	static int8_t x136 = INT8_MIN;
	volatile int32_t t30 = 192;

	t30 = (((x133-x134)&x135)<x136);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x138 = INT8_MAX;
	int8_t x139 = INT8_MIN;
	int32_t t31 = -77118;

	t31 = (((x137-x138)&x139)<x140);

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint16_t x141 = UINT16_MAX;
	static int64_t x142 = INT64_MAX;
	uint8_t x143 = 32U;
	int8_t x144 = -1;
	static int32_t t32 = 3182359;

	t32 = (((x141-x142)&x143)<x144);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x151 = INT8_MAX;
	int8_t x152 = 27;
	volatile int32_t t33 = 416;

	t33 = (((x149-x150)&x151)<x152);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x153 = INT32_MIN;
	static uint16_t x154 = 0U;
	volatile int8_t x155 = INT8_MIN;
	volatile int32_t t34 = 6;

	t34 = (((x153-x154)&x155)<x156);

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x162 = 10;
	static uint64_t x163 = 32354575LLU;
	int8_t x164 = 1;
	volatile int32_t t35 = -9867362;

	t35 = (((x161-x162)&x163)<x164);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = -1;
	int64_t x166 = -1LL;
	uint8_t x167 = 10U;
	volatile int32_t x168 = -1;
	static int32_t t36 = 0;

	t36 = (((x165-x166)&x167)<x168);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x169 = -1;
	uint32_t x170 = UINT32_MAX;
	volatile uint8_t x171 = 89U;
	int64_t x172 = INT64_MAX;

	t37 = (((x169-x170)&x171)<x172);

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x174 = INT16_MIN;
	int32_t t38 = 19013150;

	t38 = (((x173-x174)&x175)<x176);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x181 = -9;
	uint64_t x182 = 4268LLU;

	t39 = (((x181-x182)&x183)<x184);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x185 = INT16_MAX;
	int32_t x186 = -2074221;
	int16_t x187 = INT16_MAX;
	static int64_t x188 = INT64_MAX;
	volatile int32_t t40 = 30388335;

	t40 = (((x185-x186)&x187)<x188);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x189 = INT8_MAX;
	uint8_t x190 = UINT8_MAX;
	int64_t x191 = INT64_MIN;
	int8_t x192 = 7;

	t41 = (((x189-x190)&x191)<x192);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x193 = 3;
	static volatile int16_t x194 = 262;

	t42 = (((x193-x194)&x195)<x196);

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x197 = UINT64_MAX;
	static volatile int64_t x198 = -73188377827257385LL;
	int8_t x199 = INT8_MAX;
	int32_t t43 = 418744601;

	t43 = (((x197-x198)&x199)<x200);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x201 = UINT32_MAX;
	static uint32_t x202 = 37034580U;
	int64_t x203 = INT64_MIN;
	static uint8_t x204 = UINT8_MAX;
	static int32_t t44 = -2572;

	t44 = (((x201-x202)&x203)<x204);

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x207 = UINT32_MAX;
	static int32_t x208 = INT32_MIN;
	int32_t t45 = -514031;

	t45 = (((x205-x206)&x207)<x208);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x210 = INT8_MIN;
	uint32_t x212 = 248U;
	volatile int32_t t46 = 23373542;

	t46 = (((x209-x210)&x211)<x212);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x213 = -1;
	int16_t x215 = INT16_MIN;
	int32_t x216 = 2;
	int32_t t47 = -16;

	t47 = (((x213-x214)&x215)<x216);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x219 = INT32_MIN;
	int32_t x220 = INT32_MIN;
	static volatile int32_t t48 = -503;

	t48 = (((x217-x218)&x219)<x220);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x221 = INT64_MIN;
	uint64_t x222 = UINT64_MAX;
	static int64_t x224 = 911LL;
	volatile int32_t t49 = -218328;

	t49 = (((x221-x222)&x223)<x224);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int64_t x226 = -1749LL;
	uint64_t x227 = UINT64_MAX;
	static int16_t x228 = INT16_MIN;
	static volatile int32_t t50 = -13;

	t50 = (((x225-x226)&x227)<x228);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = 2557;
	int8_t x230 = -1;
	uint8_t x231 = 20U;
	int32_t x232 = -13287;
	int32_t t51 = 323;

	t51 = (((x229-x230)&x231)<x232);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint64_t x233 = 11853647787771LLU;
	uint64_t x234 = 118LLU;
	volatile int16_t x235 = INT16_MAX;
	int32_t x236 = 102590458;

	t52 = (((x233-x234)&x235)<x236);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	static int64_t x237 = -1LL;
	static uint16_t x239 = 4104U;
	int32_t t53 = 30;

	t53 = (((x237-x238)&x239)<x240);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static volatile int64_t x241 = INT64_MAX;
	uint64_t x242 = 151183831LLU;
	int32_t t54 = -23329131;

	t54 = (((x241-x242)&x243)<x244);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x246 = INT8_MIN;
	static int16_t x247 = 40;
	uint32_t x248 = UINT32_MAX;
	int32_t t55 = -230203;

	t55 = (((x245-x246)&x247)<x248);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = 281276165U;
	volatile uint16_t x250 = 4U;
	uint32_t x251 = 670U;
	int32_t t56 = -3;

	t56 = (((x249-x250)&x251)<x252);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x253 = INT16_MIN;
	uint64_t x254 = 7138155387582LLU;
	static volatile int8_t x255 = -1;
	int32_t t57 = -9633;

	t57 = (((x253-x254)&x255)<x256);

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x257 = 83U;
	int32_t x258 = -2390682;
	int8_t x260 = INT8_MIN;
	int32_t t58 = 31705;

	t58 = (((x257-x258)&x259)<x260);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x265 = -1;
	uint16_t x266 = UINT16_MAX;
	uint8_t x267 = 30U;
	volatile int8_t x268 = -1;
	volatile int32_t t59 = -22908;

	t59 = (((x265-x266)&x267)<x268);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x269 = INT16_MIN;
	int16_t x270 = -1;
	uint32_t x271 = 70U;
	int16_t x272 = INT16_MIN;

	t60 = (((x269-x270)&x271)<x272);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x277 = INT16_MIN;
	int32_t x278 = INT32_MIN;
	volatile uint32_t x279 = UINT32_MAX;
	int32_t t61 = -2632148;

	t61 = (((x277-x278)&x279)<x280);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x282 = 0;
	static int32_t x283 = -1;
	uint8_t x284 = 0U;
	volatile int32_t t62 = 1;

	t62 = (((x281-x282)&x283)<x284);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = 917;
	static int64_t x286 = 32324591808LL;
	int8_t x287 = -1;
	int64_t x288 = INT64_MAX;
	volatile int32_t t63 = 53;

	t63 = (((x285-x286)&x287)<x288);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = -12;
	int64_t x290 = -1LL;
	static volatile int64_t x291 = 697830817226804LL;
	int8_t x292 = INT8_MAX;
	volatile int32_t t64 = 8741408;

	t64 = (((x289-x290)&x291)<x292);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x294 = -71585303668LL;
	int64_t x295 = -1LL;
	int32_t x296 = INT32_MIN;

	t65 = (((x293-x294)&x295)<x296);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x297 = -1;
	volatile int8_t x298 = INT8_MAX;
	int16_t x299 = -13656;
	volatile uint8_t x300 = 2U;
	volatile int32_t t66 = 87165;

	t66 = (((x297-x298)&x299)<x300);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x301 = 2733U;
	static int64_t x302 = INT64_MAX;
	uint64_t x303 = 4487964723989283481LLU;
	int64_t x304 = INT64_MAX;
	int32_t t67 = -125;

	t67 = (((x301-x302)&x303)<x304);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x305 = INT8_MIN;
	static int32_t x306 = INT32_MIN;
	int8_t x307 = INT8_MIN;
	volatile int32_t t68 = 1596317;

	t68 = (((x305-x306)&x307)<x308);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x309 = 13LL;
	volatile int8_t x310 = INT8_MIN;
	uint32_t x311 = UINT32_MAX;
	uint16_t x312 = UINT16_MAX;
	int32_t t69 = 816320143;

	t69 = (((x309-x310)&x311)<x312);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x313 = -1;
	int64_t x314 = INT64_MIN;
	int64_t x316 = INT64_MIN;
	static volatile int32_t t70 = -104993;

	t70 = (((x313-x314)&x315)<x316);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = INT64_MAX;
	int32_t x318 = 1;
	static int16_t x319 = INT16_MIN;
	uint32_t x320 = 1404116049U;
	volatile int32_t t71 = 1;

	t71 = (((x317-x318)&x319)<x320);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x321 = 1U;
	uint64_t x323 = 437699220044259LLU;
	volatile int8_t x324 = -1;
	volatile int32_t t72 = 26487185;

	t72 = (((x321-x322)&x323)<x324);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x326 = 1308U;
	uint64_t x327 = UINT64_MAX;
	volatile int32_t x328 = -335;
	int32_t t73 = -216282;

	t73 = (((x325-x326)&x327)<x328);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x329 = 441U;
	int32_t x330 = -1;
	uint16_t x331 = UINT16_MAX;
	int32_t x332 = INT32_MIN;
	int32_t t74 = 51695;

	t74 = (((x329-x330)&x331)<x332);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x333 = 1028;
	int64_t x334 = INT64_MAX;
	static int32_t x335 = -1;
	int8_t x336 = INT8_MAX;
	int32_t t75 = 1;

	t75 = (((x333-x334)&x335)<x336);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = -1LL;
	int8_t x338 = -26;
	int8_t x340 = INT8_MAX;
	volatile int32_t t76 = 7551;

	t76 = (((x337-x338)&x339)<x340);

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x341 = 58;
	volatile uint16_t x344 = 399U;
	volatile int32_t t77 = -1;

	t77 = (((x341-x342)&x343)<x344);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = INT32_MIN;
	volatile int8_t x346 = -1;
	static uint64_t x347 = UINT64_MAX;
	uint64_t x348 = 883725899LLU;

	t78 = (((x345-x346)&x347)<x348);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x353 = INT32_MIN;
	static int16_t x354 = INT16_MIN;
	int64_t x355 = INT64_MAX;
	uint32_t x356 = UINT32_MAX;
	int32_t t79 = -8165004;

	t79 = (((x353-x354)&x355)<x356);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static uint16_t x357 = 816U;
	uint64_t x358 = 51610272239570LLU;
	int32_t x359 = INT32_MAX;
	int8_t x360 = -12;
	volatile int32_t t80 = -5403446;

	t80 = (((x357-x358)&x359)<x360);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static uint64_t x361 = 116971395964590LLU;
	uint16_t x362 = 27061U;
	uint16_t x363 = 10480U;
	int32_t x364 = -1;

	t81 = (((x361-x362)&x363)<x364);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x369 = INT64_MIN;
	volatile int8_t x370 = -1;
	uint16_t x371 = UINT16_MAX;
	int64_t x372 = 257057LL;
	volatile int32_t t82 = 111301014;

	t82 = (((x369-x370)&x371)<x372);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x373 = INT16_MIN;
	int16_t x374 = 1970;
	int16_t x375 = -1;
	static volatile int16_t x376 = -82;
	volatile int32_t t83 = 4175690;

	t83 = (((x373-x374)&x375)<x376);

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int16_t x377 = 1847;
	volatile int16_t x378 = -1;
	uint32_t x379 = 3U;
	volatile int32_t x380 = INT32_MAX;

	t84 = (((x377-x378)&x379)<x380);

	if (t84 != 1) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x381 = 10923691U;
	volatile int16_t x383 = 11;
	volatile int32_t t85 = 170;

	t85 = (((x381-x382)&x383)<x384);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x385 = UINT16_MAX;
	uint32_t x386 = UINT32_MAX;
	int16_t x387 = INT16_MIN;
	static uint64_t x388 = 7941008763518981LLU;
	volatile int32_t t86 = -4;

	t86 = (((x385-x386)&x387)<x388);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x389 = INT16_MIN;
	int64_t x390 = INT64_MIN;
	int8_t x391 = INT8_MIN;
	static int32_t t87 = -4;

	t87 = (((x389-x390)&x391)<x392);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x393 = UINT8_MAX;
	static int32_t x395 = INT32_MIN;
	int32_t x396 = INT32_MAX;
	volatile int32_t t88 = 1;

	t88 = (((x393-x394)&x395)<x396);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x398 = INT8_MAX;
	static int64_t x399 = INT64_MAX;
	uint8_t x400 = 1U;
	int32_t t89 = 11581717;

	t89 = (((x397-x398)&x399)<x400);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x401 = INT32_MAX;
	int32_t x402 = 4087382;
	int8_t x403 = -1;
	int8_t x404 = INT8_MAX;
	int32_t t90 = -10;

	t90 = (((x401-x402)&x403)<x404);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x406 = INT64_MIN;
	static volatile uint64_t x407 = 22LLU;
	int8_t x408 = INT8_MIN;
	volatile int32_t t91 = -59;

	t91 = (((x405-x406)&x407)<x408);

	if (t91 != 1) { NG(); } else { ; }
	
}

void f92(void) {
	uint32_t x409 = UINT32_MAX;
	int8_t x410 = -3;
	int32_t x411 = -66616;
	int64_t x412 = INT64_MIN;
	int32_t t92 = 1;

	t92 = (((x409-x410)&x411)<x412);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x414 = INT8_MAX;
	int64_t x415 = INT64_MIN;
	static volatile int8_t x416 = INT8_MAX;

	t93 = (((x413-x414)&x415)<x416);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x421 = 977209251516800407LL;
	int16_t x423 = -1;
	uint32_t x424 = 4573426U;
	int32_t t94 = 2;

	t94 = (((x421-x422)&x423)<x424);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x426 = -1;
	volatile uint64_t x427 = 112LLU;
	static volatile int32_t x428 = INT32_MAX;
	int32_t t95 = -1059390;

	t95 = (((x425-x426)&x427)<x428);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x429 = -1LL;
	volatile uint8_t x431 = 11U;
	uint64_t x432 = 14515985709LLU;

	t96 = (((x429-x430)&x431)<x432);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x433 = 437089368623392LL;
	int16_t x434 = INT16_MAX;
	volatile int64_t x435 = INT64_MAX;
	volatile int16_t x436 = -1;
	int32_t t97 = -43;

	t97 = (((x433-x434)&x435)<x436);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x438 = 110708811;
	int16_t x439 = INT16_MAX;
	int32_t x440 = INT32_MIN;

	t98 = (((x437-x438)&x439)<x440);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x441 = 2;
	int8_t x442 = INT8_MAX;
	int64_t x443 = INT64_MIN;
	uint8_t x444 = 0U;
	static int32_t t99 = -6388690;

	t99 = (((x441-x442)&x443)<x444);

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

