#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x6 = INT8_MIN;
int32_t x7 = INT32_MIN;
volatile uint8_t x8 = 4U;
int16_t x12 = -4019;
volatile int8_t x17 = -1;
int32_t t5 = -6949;
uint64_t x26 = 14179304LLU;
int64_t x33 = INT64_MAX;
static int16_t x39 = 4;
int32_t t10 = 430428;
static volatile int16_t x45 = -1;
static int16_t x47 = -1;
volatile int32_t t13 = -4058349;
uint64_t x69 = 14489745LLU;
int16_t x78 = INT16_MAX;
int64_t x79 = -1LL;
int32_t x84 = 54;
int32_t t18 = 2627;
int16_t x88 = INT16_MIN;
static int64_t x98 = INT64_MAX;
static volatile int16_t x99 = INT16_MAX;
int32_t x100 = -3208;
static int32_t t23 = -11734;
int8_t x106 = INT8_MIN;
volatile int32_t t24 = -517;
uint64_t x119 = 4492903125336582LLU;
int32_t t27 = 0;
int8_t x121 = 0;
uint8_t x130 = 1U;
int8_t x131 = INT8_MIN;
uint8_t x139 = 1U;
static int8_t x147 = INT8_MAX;
int16_t x148 = INT16_MIN;
int16_t x158 = INT16_MIN;
static uint32_t x159 = 12200U;
int64_t x164 = INT64_MIN;
int32_t x168 = -1;
int16_t x169 = INT16_MIN;
uint32_t x170 = 6149901U;
int32_t t38 = 18215;
volatile int16_t x179 = INT16_MAX;
uint16_t x197 = 365U;
volatile int8_t x198 = INT8_MIN;
static volatile int8_t x211 = INT8_MIN;
int32_t t49 = -281928;
static volatile int32_t x221 = INT32_MIN;
uint32_t x222 = UINT32_MAX;
volatile int8_t x224 = 3;
static int8_t x228 = -14;
int32_t t54 = -229252072;
uint8_t x245 = 15U;
int16_t x247 = INT16_MIN;
uint32_t x255 = 19522U;
int64_t x259 = INT64_MIN;
int32_t x262 = INT32_MIN;
int64_t x271 = -8344643603LL;
uint8_t x278 = UINT8_MAX;
static int64_t x280 = -7LL;
int32_t t62 = -1;
int8_t x286 = 51;
uint16_t x288 = 1556U;
uint64_t x290 = 156360258376624LLU;
static int16_t x293 = 515;
uint32_t x296 = 1U;
int32_t t68 = 6;
uint64_t x305 = 897LLU;
static uint8_t x316 = UINT8_MAX;
volatile int8_t x325 = -23;
int8_t x328 = -20;
int64_t x332 = INT64_MIN;
uint16_t x340 = 3097U;
int32_t t76 = 742591;
int16_t x349 = -13562;
int16_t x352 = INT16_MIN;
static int16_t x353 = 906;
int32_t x362 = -1;
static volatile int16_t x367 = INT16_MIN;
volatile int16_t x372 = -1;
int32_t t84 = -4;
uint8_t x378 = 1U;
int16_t x386 = -4;
static volatile int32_t t87 = 1;
volatile uint8_t x389 = 1U;
int8_t x392 = 0;
int64_t x393 = INT64_MIN;
int32_t t89 = 3099;
int16_t x409 = INT16_MAX;
static uint16_t x414 = 697U;
uint8_t x415 = UINT8_MAX;
volatile int32_t x420 = INT32_MIN;
int8_t x427 = 24;
volatile uint8_t x432 = UINT8_MAX;
uint8_t x435 = UINT8_MAX;


void f0(void) {
	volatile int32_t x1 = -1;
	int8_t x2 = -2;
	static int16_t x3 = INT16_MAX;
	int64_t x4 = -1LL;
	int32_t t0 = 18;

	t0 = (x1==((x2-x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int32_t x5 = INT32_MAX;
	volatile int32_t t1 = -21;

	t1 = (x5==((x6-x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 9059U;
	uint8_t x10 = UINT8_MAX;
	uint32_t x11 = 5327U;
	int32_t t2 = 14213;

	t2 = (x9==((x10-x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 63345377U;
	uint16_t x14 = 1634U;
	uint32_t x15 = 103U;
	volatile int32_t x16 = 5;
	volatile int32_t t3 = -778;

	t3 = (x13==((x14-x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint32_t x18 = UINT32_MAX;
	uint8_t x19 = UINT8_MAX;
	volatile int64_t x20 = INT64_MIN;
	int32_t t4 = 748727;

	t4 = (x17==((x18-x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	static int64_t x22 = -18281083LL;
	int16_t x23 = INT16_MAX;
	int64_t x24 = INT64_MIN;

	t5 = (x21==((x22-x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = INT32_MIN;
	int32_t x27 = 1;
	int64_t x28 = INT64_MIN;
	volatile int32_t t6 = -210;

	t6 = (x25==((x26-x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 56;
	uint16_t x30 = UINT16_MAX;
	volatile int32_t x31 = INT32_MAX;
	volatile uint16_t x32 = 3U;
	volatile int32_t t7 = 0;

	t7 = (x29==((x30-x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x34 = INT8_MAX;
	int8_t x35 = INT8_MIN;
	int8_t x36 = INT8_MIN;
	volatile int32_t t8 = -404365034;

	t8 = (x33==((x34-x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = 1304;
	static int8_t x38 = -1;
	int64_t x40 = INT64_MIN;
	int32_t t9 = -29614;

	t9 = (x37==((x38-x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = 1540290757765865LL;
	int16_t x42 = 3541;
	static volatile int32_t x43 = 8457;
	int32_t x44 = INT32_MAX;

	t10 = (x41==((x42-x43)==x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	static int8_t x46 = INT8_MIN;
	uint64_t x48 = 245090LLU;
	int32_t t11 = 208866;

	t11 = (x45==((x46-x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = INT8_MIN;
	int64_t x50 = INT64_MAX;
	uint16_t x51 = 1U;
	int32_t x52 = -1;
	int32_t t12 = -1;

	t12 = (x49==((x50-x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint16_t x53 = 1U;
	volatile int16_t x54 = -153;
	int32_t x55 = 3205306;
	int16_t x56 = INT16_MAX;

	t13 = (x53==((x54-x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x57 = UINT64_MAX;
	volatile int16_t x58 = INT16_MAX;
	int32_t x59 = -5;
	uint64_t x60 = UINT64_MAX;
	int32_t t14 = -2570721;

	t14 = (x57==((x58-x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x61 = INT8_MAX;
	static int32_t x62 = -14548;
	static volatile int64_t x63 = -1LL;
	uint16_t x64 = 13U;
	int32_t t15 = 1;

	t15 = (x61==((x62-x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int16_t x70 = -1;
	static uint32_t x71 = 994430U;
	uint8_t x72 = 3U;
	volatile int32_t t16 = -3255;

	t16 = (x69==((x70-x71)==x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x77 = 1068567348525924425LL;
	uint64_t x80 = UINT64_MAX;
	volatile int32_t t17 = 4352;

	t17 = (x77==((x78-x79)==x80));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x81 = INT32_MAX;
	static int64_t x82 = INT64_MIN;
	uint64_t x83 = UINT64_MAX;

	t18 = (x81==((x82-x83)==x84));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x85 = 3;
	int8_t x86 = INT8_MAX;
	volatile int8_t x87 = -5;
	volatile int32_t t19 = -229;

	t19 = (x85==((x86-x87)==x88));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile int8_t x89 = INT8_MIN;
	int16_t x90 = INT16_MAX;
	static int16_t x91 = INT16_MAX;
	volatile int32_t x92 = 2;
	int32_t t20 = 65;

	t20 = (x89==((x90-x91)==x92));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x93 = INT8_MAX;
	int32_t x94 = 56;
	static volatile uint16_t x95 = 18U;
	int8_t x96 = INT8_MIN;
	volatile int32_t t21 = -24575925;

	t21 = (x93==((x94-x95)==x96));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x97 = INT32_MIN;
	volatile int32_t t22 = 56583;

	t22 = (x97==((x98-x99)==x100));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x101 = 0;
	uint64_t x102 = 249571LLU;
	int64_t x103 = INT64_MIN;
	static int8_t x104 = INT8_MIN;

	t23 = (x101==((x102-x103)==x104));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x105 = 178U;
	volatile uint64_t x107 = UINT64_MAX;
	volatile int8_t x108 = 0;

	t24 = (x105==((x106-x107)==x108));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int8_t x109 = -1;
	volatile int16_t x110 = -1;
	int32_t x111 = 40;
	uint8_t x112 = UINT8_MAX;
	int32_t t25 = 50;

	t25 = (x109==((x110-x111)==x112));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x113 = 21;
	int8_t x114 = INT8_MIN;
	int16_t x115 = -1;
	int64_t x116 = -1LL;
	static int32_t t26 = 1928567;

	t26 = (x113==((x114-x115)==x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x117 = 1963399LLU;
	int16_t x118 = INT16_MIN;
	uint8_t x120 = UINT8_MAX;

	t27 = (x117==((x118-x119)==x120));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x122 = 25399U;
	static int32_t x123 = INT32_MAX;
	int8_t x124 = 43;
	int32_t t28 = -10655929;

	t28 = (x121==((x122-x123)==x124));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x125 = UINT8_MAX;
	int64_t x126 = INT64_MIN;
	int32_t x127 = -1;
	uint32_t x128 = UINT32_MAX;
	volatile int32_t t29 = -45814;

	t29 = (x125==((x126-x127)==x128));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static uint64_t x129 = 2544706959781830LLU;
	volatile int16_t x132 = INT16_MIN;
	volatile int32_t t30 = -6;

	t30 = (x129==((x130-x131)==x132));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x137 = UINT64_MAX;
	int8_t x138 = -1;
	volatile int32_t x140 = 362;
	int32_t t31 = -248646047;

	t31 = (x137==((x138-x139)==x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x141 = INT64_MIN;
	volatile int32_t x142 = -1;
	int16_t x143 = INT16_MAX;
	int8_t x144 = INT8_MIN;
	int32_t t32 = 1011768;

	t32 = (x141==((x142-x143)==x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = -1;
	int16_t x146 = -1;
	int32_t t33 = -674367562;

	t33 = (x145==((x146-x147)==x148));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x149 = -1;
	int32_t x150 = 109;
	int16_t x151 = 426;
	static uint8_t x152 = UINT8_MAX;
	int32_t t34 = 366;

	t34 = (x149==((x150-x151)==x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x157 = INT16_MIN;
	uint16_t x160 = UINT16_MAX;
	int32_t t35 = -21589045;

	t35 = (x157==((x158-x159)==x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x161 = 66824273U;
	int8_t x162 = INT8_MIN;
	int8_t x163 = INT8_MIN;
	volatile int32_t t36 = 175;

	t36 = (x161==((x162-x163)==x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x165 = 4U;
	int32_t x166 = -1;
	int16_t x167 = INT16_MIN;
	int32_t t37 = 753;

	t37 = (x165==((x166-x167)==x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x171 = INT16_MAX;
	uint16_t x172 = UINT16_MAX;

	t38 = (x169==((x170-x171)==x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x177 = 14927U;
	int8_t x178 = INT8_MIN;
	int64_t x180 = INT64_MAX;
	int32_t t39 = -14959;

	t39 = (x177==((x178-x179)==x180));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x181 = 0;
	uint64_t x182 = UINT64_MAX;
	int16_t x183 = INT16_MIN;
	int32_t x184 = INT32_MIN;
	int32_t t40 = 1857;

	t40 = (x181==((x182-x183)==x184));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x185 = INT32_MAX;
	int32_t x186 = 82;
	static volatile int16_t x187 = INT16_MIN;
	int64_t x188 = INT64_MIN;
	static volatile int32_t t41 = -8483683;

	t41 = (x185==((x186-x187)==x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x189 = 0;
	int64_t x190 = 56471063959LL;
	int8_t x191 = -1;
	volatile int32_t x192 = INT32_MAX;
	volatile int32_t t42 = -6;

	t42 = (x189==((x190-x191)==x192));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x193 = INT64_MAX;
	uint16_t x194 = 3U;
	uint32_t x195 = 43483658U;
	volatile int32_t x196 = -1;
	int32_t t43 = -162;

	t43 = (x193==((x194-x195)==x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x199 = INT16_MIN;
	static int8_t x200 = 1;
	int32_t t44 = 1;

	t44 = (x197==((x198-x199)==x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x201 = INT8_MIN;
	int8_t x202 = -1;
	uint8_t x203 = UINT8_MAX;
	volatile uint64_t x204 = 7338LLU;
	volatile int32_t t45 = -1;

	t45 = (x201==((x202-x203)==x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x205 = INT64_MIN;
	int16_t x206 = INT16_MIN;
	static int64_t x207 = INT64_MIN;
	volatile int8_t x208 = INT8_MIN;
	static int32_t t46 = 19055035;

	t46 = (x205==((x206-x207)==x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x209 = INT64_MIN;
	int64_t x210 = -1LL;
	int16_t x212 = -206;
	static int32_t t47 = -54461;

	t47 = (x209==((x210-x211)==x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x213 = 70U;
	int32_t x214 = -1;
	static uint16_t x215 = UINT16_MAX;
	volatile uint16_t x216 = UINT16_MAX;
	int32_t t48 = -814400878;

	t48 = (x213==((x214-x215)==x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int8_t x217 = INT8_MAX;
	uint32_t x218 = 12345703U;
	volatile int32_t x219 = 920815603;
	int16_t x220 = 1213;

	t49 = (x217==((x218-x219)==x220));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x223 = INT16_MIN;
	int32_t t50 = -254;

	t50 = (x221==((x222-x223)==x224));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x225 = 6;
	uint32_t x226 = 182210309U;
	volatile uint32_t x227 = 2017972U;
	int32_t t51 = 0;

	t51 = (x225==((x226-x227)==x228));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x233 = 393621444595LLU;
	uint8_t x234 = 15U;
	volatile int16_t x235 = INT16_MIN;
	int32_t x236 = 13952;
	int32_t t52 = 924934946;

	t52 = (x233==((x234-x235)==x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x237 = UINT8_MAX;
	static int32_t x238 = -1;
	int8_t x239 = 2;
	volatile int8_t x240 = 0;
	static volatile int32_t t53 = 1;

	t53 = (x237==((x238-x239)==x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x241 = -1;
	int8_t x242 = INT8_MAX;
	int16_t x243 = -1;
	int32_t x244 = INT32_MIN;

	t54 = (x241==((x242-x243)==x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x246 = INT8_MIN;
	volatile uint32_t x248 = 2704U;
	static volatile int32_t t55 = -5337;

	t55 = (x245==((x246-x247)==x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x249 = INT64_MAX;
	static int8_t x250 = -1;
	uint32_t x251 = 397232U;
	volatile int16_t x252 = 284;
	volatile int32_t t56 = -18339;

	t56 = (x249==((x250-x251)==x252));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	static uint16_t x253 = 360U;
	int16_t x254 = INT16_MIN;
	int64_t x256 = INT64_MIN;
	volatile int32_t t57 = -26;

	t57 = (x253==((x254-x255)==x256));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint16_t x257 = 1009U;
	int16_t x258 = -5245;
	volatile uint32_t x260 = 2U;
	volatile int32_t t58 = -34;

	t58 = (x257==((x258-x259)==x260));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x261 = UINT8_MAX;
	static volatile int32_t x263 = -1;
	int8_t x264 = -1;
	int32_t t59 = 35678;

	t59 = (x261==((x262-x263)==x264));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint8_t x265 = UINT8_MAX;
	int32_t x266 = 3979;
	uint32_t x267 = UINT32_MAX;
	static int8_t x268 = -3;
	volatile int32_t t60 = -190079;

	t60 = (x265==((x266-x267)==x268));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x269 = UINT16_MAX;
	int8_t x270 = INT8_MIN;
	int64_t x272 = -1LL;
	static int32_t t61 = 2332865;

	t61 = (x269==((x270-x271)==x272));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x277 = -1;
	int8_t x279 = -25;

	t62 = (x277==((x278-x279)==x280));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x281 = INT16_MIN;
	uint64_t x282 = 433175165487156LLU;
	int16_t x283 = -2;
	int32_t x284 = 208;
	volatile int32_t t63 = 4406;

	t63 = (x281==((x282-x283)==x284));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x285 = 6;
	volatile int32_t x287 = -1;
	int32_t t64 = -18029074;

	t64 = (x285==((x286-x287)==x288));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x289 = INT64_MAX;
	int16_t x291 = -4;
	static int64_t x292 = INT64_MIN;
	volatile int32_t t65 = -59778663;

	t65 = (x289==((x290-x291)==x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x294 = INT32_MIN;
	static volatile int32_t x295 = -6;
	int32_t t66 = 60113940;

	t66 = (x293==((x294-x295)==x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x297 = -3;
	volatile int8_t x298 = INT8_MAX;
	int8_t x299 = -44;
	int8_t x300 = INT8_MIN;
	volatile int32_t t67 = 5514;

	t67 = (x297==((x298-x299)==x300));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x301 = UINT64_MAX;
	static int32_t x302 = 3881;
	int16_t x303 = INT16_MIN;
	volatile int32_t x304 = INT32_MAX;

	t68 = (x301==((x302-x303)==x304));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x306 = -1;
	static int64_t x307 = INT64_MAX;
	int64_t x308 = -1LL;
	int32_t t69 = 6;

	t69 = (x305==((x306-x307)==x308));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x309 = 1305799818LL;
	int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MIN;
	static int64_t x312 = -1LL;
	volatile int32_t t70 = -111;

	t70 = (x309==((x310-x311)==x312));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint64_t x313 = UINT64_MAX;
	volatile uint64_t x314 = 1370868520388251525LLU;
	uint16_t x315 = 13U;
	volatile int32_t t71 = -974;

	t71 = (x313==((x314-x315)==x316));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x317 = UINT32_MAX;
	uint64_t x318 = 45073LLU;
	int32_t x319 = 15;
	int32_t x320 = 7;
	static volatile int32_t t72 = 137588;

	t72 = (x317==((x318-x319)==x320));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint64_t x326 = 943LLU;
	int32_t x327 = INT32_MAX;
	volatile int32_t t73 = -111757624;

	t73 = (x325==((x326-x327)==x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static int8_t x329 = -1;
	static int16_t x330 = -1;
	static int32_t x331 = -1;
	int32_t t74 = 587759;

	t74 = (x329==((x330-x331)==x332));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x333 = 316019525165LLU;
	int8_t x334 = -2;
	int16_t x335 = INT16_MIN;
	int16_t x336 = -1;
	static int32_t t75 = 923023;

	t75 = (x333==((x334-x335)==x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x337 = INT32_MIN;
	volatile uint64_t x338 = 119010319617362LLU;
	volatile int8_t x339 = INT8_MIN;

	t76 = (x337==((x338-x339)==x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x341 = INT64_MIN;
	int16_t x342 = 0;
	static int32_t x343 = 0;
	uint32_t x344 = UINT32_MAX;
	int32_t t77 = -2339769;

	t77 = (x341==((x342-x343)==x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x345 = INT8_MIN;
	volatile int64_t x346 = INT64_MIN;
	static int8_t x347 = -1;
	int16_t x348 = INT16_MIN;
	int32_t t78 = 730892;

	t78 = (x345==((x346-x347)==x348));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint16_t x350 = 0U;
	static volatile uint32_t x351 = 1U;
	volatile int32_t t79 = -58248784;

	t79 = (x349==((x350-x351)==x352));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int64_t x354 = -1LL;
	uint16_t x355 = 2239U;
	static uint32_t x356 = 22412150U;
	volatile int32_t t80 = -692;

	t80 = (x353==((x354-x355)==x356));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x357 = 50;
	static uint64_t x358 = 103815526504931171LLU;
	static uint32_t x359 = 2U;
	static int64_t x360 = INT64_MIN;
	int32_t t81 = -1417;

	t81 = (x357==((x358-x359)==x360));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x361 = 62976716LLU;
	int32_t x363 = INT32_MAX;
	uint32_t x364 = UINT32_MAX;
	int32_t t82 = 1;

	t82 = (x361==((x362-x363)==x364));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x365 = INT16_MAX;
	uint32_t x366 = 3604613U;
	uint64_t x368 = 13LLU;
	volatile int32_t t83 = -22319479;

	t83 = (x365==((x366-x367)==x368));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x369 = UINT64_MAX;
	uint16_t x370 = UINT16_MAX;
	static volatile int16_t x371 = INT16_MAX;

	t84 = (x369==((x370-x371)==x372));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x377 = INT16_MAX;
	int8_t x379 = 35;
	int32_t x380 = INT32_MIN;
	volatile int32_t t85 = -36;

	t85 = (x377==((x378-x379)==x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x381 = INT8_MIN;
	static volatile uint8_t x382 = UINT8_MAX;
	volatile int32_t x383 = -670437000;
	static int8_t x384 = INT8_MIN;
	volatile int32_t t86 = -1616133;

	t86 = (x381==((x382-x383)==x384));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x385 = UINT32_MAX;
	int16_t x387 = -5310;
	uint8_t x388 = UINT8_MAX;

	t87 = (x385==((x386-x387)==x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x390 = 433U;
	static int8_t x391 = 5;
	volatile int32_t t88 = 0;

	t88 = (x389==((x390-x391)==x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x394 = INT32_MIN;
	volatile int16_t x395 = INT16_MIN;
	volatile int32_t x396 = INT32_MIN;

	t89 = (x393==((x394-x395)==x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x397 = 3U;
	static int16_t x398 = INT16_MAX;
	volatile uint32_t x399 = 3U;
	int16_t x400 = INT16_MIN;
	volatile int32_t t90 = -524965855;

	t90 = (x397==((x398-x399)==x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x401 = INT8_MIN;
	int64_t x402 = INT64_MAX;
	int64_t x403 = 1624092106598984LL;
	uint16_t x404 = 4U;
	int32_t t91 = -2;

	t91 = (x401==((x402-x403)==x404));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x405 = 562141531660848LLU;
	static uint32_t x406 = 1U;
	uint64_t x407 = 2891LLU;
	static volatile int64_t x408 = INT64_MAX;
	int32_t t92 = 486;

	t92 = (x405==((x406-x407)==x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x410 = INT64_MIN;
	uint64_t x411 = 25309735409104170LLU;
	int64_t x412 = -1LL;
	static volatile int32_t t93 = 57;

	t93 = (x409==((x410-x411)==x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x413 = 186;
	static int64_t x416 = INT64_MIN;
	volatile int32_t t94 = 16083;

	t94 = (x413==((x414-x415)==x416));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x417 = 59;
	int8_t x418 = 0;
	int64_t x419 = 37421286LL;
	int32_t t95 = 33;

	t95 = (x417==((x418-x419)==x420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x421 = -87212;
	static volatile int16_t x422 = INT16_MAX;
	static int8_t x423 = INT8_MIN;
	uint64_t x424 = 251422357LLU;
	int32_t t96 = 377059339;

	t96 = (x421==((x422-x423)==x424));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x425 = -3860;
	uint8_t x426 = 3U;
	uint64_t x428 = 15229LLU;
	volatile int32_t t97 = 1280;

	t97 = (x425==((x426-x427)==x428));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static uint32_t x429 = 532U;
	uint16_t x430 = 3U;
	uint16_t x431 = 78U;
	static volatile int32_t t98 = -3315;

	t98 = (x429==((x430-x431)==x432));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static uint16_t x433 = UINT16_MAX;
	int8_t x434 = -1;
	int16_t x436 = INT16_MIN;
	volatile int32_t t99 = 2;

	t99 = (x433==((x434-x435)==x436));

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

