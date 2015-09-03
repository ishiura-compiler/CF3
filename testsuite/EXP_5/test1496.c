#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint32_t t0 = 30900511U;
volatile int32_t x7 = INT32_MIN;
int64_t x14 = INT64_MIN;
static int16_t x15 = 1;
int16_t x17 = INT16_MAX;
int8_t x27 = 38;
int8_t x33 = INT8_MIN;
volatile int16_t x38 = INT16_MAX;
int32_t x43 = INT32_MIN;
volatile int32_t t9 = 6825012;
int8_t x46 = -63;
static uint32_t x47 = 17297948U;
int32_t t10 = -319514383;
int64_t x50 = INT64_MIN;
uint16_t x53 = 29967U;
int32_t t12 = 64036;
static int16_t x60 = INT16_MIN;
static int32_t x65 = INT32_MIN;
uint16_t x68 = 967U;
static int64_t x78 = INT64_MAX;
volatile int32_t t17 = 12127;
uint32_t x89 = 56982881U;
int16_t x90 = INT16_MIN;
static volatile int8_t x95 = INT8_MAX;
volatile int32_t t20 = 17384;
int32_t x105 = INT32_MAX;
int16_t x111 = -1;
static int32_t t24 = 17;
volatile uint8_t x122 = 0U;
volatile uint64_t t26 = 206LLU;
static volatile int32_t x129 = INT32_MAX;
int32_t x132 = INT32_MIN;
int32_t x136 = 331319326;
int32_t t29 = 59;
volatile uint8_t x146 = 1U;
uint64_t x149 = 25703894199LLU;
int32_t x155 = INT32_MIN;
int64_t x160 = -160336340LL;
uint8_t x161 = 16U;
uint64_t x163 = 4047707LLU;
static int16_t x164 = INT16_MIN;
volatile int32_t t35 = 1954584;
volatile uint32_t x175 = 96552U;
static volatile int16_t x181 = INT16_MIN;
uint8_t x188 = 11U;
volatile int32_t t41 = 10048937;
int64_t x199 = -1LL;
int8_t x203 = -1;
int16_t x210 = 1;
volatile uint32_t t46 = 7201117U;
static int8_t x214 = -1;
volatile int32_t t47 = 0;
volatile uint16_t x219 = 41U;
volatile int64_t t49 = -105667238260LL;
int32_t x232 = -1872;
uint64_t x235 = 1989206022577292LLU;
uint64_t x237 = 185LLU;
volatile uint16_t x240 = 1396U;
static int32_t x249 = -105935;
int32_t x258 = -2887;
int64_t x265 = -1LL;
uint16_t x266 = 3U;
volatile int64_t t59 = 43029668859433123LL;
int32_t x269 = -186046252;
int64_t t60 = -1447178945575159LL;
static volatile int64_t x274 = INT64_MIN;
static int64_t x278 = -324233LL;
int64_t x282 = INT64_MAX;
volatile int32_t t63 = -2;
int16_t x286 = INT16_MIN;
static uint64_t t64 = 35437716860LLU;
static int32_t x293 = INT32_MAX;
volatile int32_t t66 = -13;
int64_t x309 = INT64_MIN;
int8_t x310 = -1;
static int8_t x311 = 13;
uint64_t t68 = 729859527053LLU;
uint16_t x318 = 1U;
int64_t t69 = -8422819LL;
volatile int64_t t72 = 289240859831373LL;
int16_t x333 = INT16_MIN;
volatile int8_t x340 = INT8_MIN;
int8_t x352 = -9;
volatile int32_t t77 = 185337909;
uint16_t x355 = 239U;
uint8_t x361 = 67U;
uint16_t x363 = UINT16_MAX;
uint32_t t82 = 5U;
int8_t x389 = 44;
int64_t x392 = -150373866811875550LL;
volatile uint64_t t87 = 50990895245LLU;
uint32_t x399 = 313690706U;
uint16_t x401 = 7288U;
int64_t x432 = INT64_MIN;
volatile int32_t x435 = INT32_MIN;
volatile uint64_t x436 = UINT64_MAX;
volatile uint16_t x442 = 4U;
volatile int64_t x443 = INT64_MAX;
int8_t x449 = -1;
int64_t x459 = 46813171353490LL;
volatile int32_t t98 = -352;


void f0(void) {
	uint32_t x1 = UINT32_MAX;
	int32_t x2 = -1;
	uint32_t x3 = 0U;
	int8_t x4 = INT8_MAX;

	t0 = (x1+((x2<x3)|x4));

	if (t0 != 126U) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static int8_t x6 = INT8_MIN;
	static int64_t x8 = INT64_MIN;
	int64_t t1 = -6791828LL;

	t1 = (x5+((x6<x7)|x8));

	if (t1 != -9223372036854710273LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x13 = -32870;
	uint64_t x16 = 706LLU;
	volatile uint64_t t2 = 31106853186LLU;

	t2 = (x13+((x14<x15)|x16));

	if (t2 != 18446744073709519453LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x18 = 1U;
	int64_t x19 = INT64_MIN;
	int32_t x20 = 5;
	volatile int32_t t3 = 61731;

	t3 = (x17+((x18<x19)|x20));

	if (t3 != 32772) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x21 = 210675468;
	uint16_t x22 = 7U;
	uint32_t x23 = 1556U;
	int8_t x24 = INT8_MAX;
	volatile int32_t t4 = -8280788;

	t4 = (x21+((x22<x23)|x24));

	if (t4 != 210675595) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x25 = INT32_MIN;
	volatile int16_t x26 = -1;
	volatile int32_t x28 = 770094;
	static volatile int32_t t5 = 784498;

	t5 = (x25+((x26<x27)|x28));

	if (t5 != -2146713553) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x29 = 853512U;
	int16_t x30 = 842;
	uint8_t x31 = UINT8_MAX;
	volatile uint16_t x32 = 0U;
	volatile uint32_t t6 = 3709U;

	t6 = (x29+((x30<x31)|x32));

	if (t6 != 853512U) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x34 = 524U;
	int8_t x35 = -1;
	uint64_t x36 = 364509287LLU;
	volatile uint64_t t7 = 4081437341547975322LLU;

	t7 = (x33+((x34<x35)|x36));

	if (t7 != 364509159LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x37 = INT64_MIN;
	uint32_t x39 = UINT32_MAX;
	static int16_t x40 = 29;
	int64_t t8 = -9695850LL;

	t8 = (x37+((x38<x39)|x40));

	if (t8 != -9223372036854775779LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x41 = 1U;
	int64_t x42 = INT64_MAX;
	volatile int32_t x44 = -1;

	t9 = (x41+((x42<x43)|x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x45 = UINT16_MAX;
	uint16_t x48 = UINT16_MAX;

	t10 = (x45+((x46<x47)|x48));

	if (t10 != 131070) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = 17U;
	int64_t x51 = -1LL;
	uint64_t x52 = 0LLU;
	uint64_t t11 = 14LLU;

	t11 = (x49+((x50<x51)|x52));

	if (t11 != 18LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint8_t x54 = UINT8_MAX;
	uint16_t x55 = 5682U;
	static volatile int16_t x56 = INT16_MIN;

	t12 = (x53+((x54<x55)|x56));

	if (t12 != -2800) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x57 = UINT32_MAX;
	int64_t x58 = -1483958239LL;
	uint32_t x59 = UINT32_MAX;
	volatile uint32_t t13 = 62009866U;

	t13 = (x57+((x58<x59)|x60));

	if (t13 != 4294934528U) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x61 = -1;
	int8_t x62 = -1;
	int8_t x63 = INT8_MAX;
	int32_t x64 = -1;
	int32_t t14 = -18826292;

	t14 = (x61+((x62<x63)|x64));

	if (t14 != -2) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x66 = INT16_MIN;
	static uint32_t x67 = 238495516U;
	int32_t t15 = 10;

	t15 = (x65+((x66<x67)|x68));

	if (t15 != -2147482681) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x73 = INT8_MIN;
	uint8_t x74 = 3U;
	uint8_t x75 = UINT8_MAX;
	volatile int64_t x76 = -1728LL;
	volatile int64_t t16 = 275495LL;

	t16 = (x73+((x74<x75)|x76));

	if (t16 != -1855LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = INT8_MAX;
	volatile int16_t x79 = INT16_MIN;
	uint8_t x80 = 2U;

	t17 = (x77+((x78<x79)|x80));

	if (t17 != 129) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int32_t x85 = INT32_MAX;
	uint16_t x86 = UINT16_MAX;
	int8_t x87 = INT8_MIN;
	static uint64_t x88 = UINT64_MAX;
	uint64_t t18 = 336LLU;

	t18 = (x85+((x86<x87)|x88));

	if (t18 != 2147483646LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x91 = INT16_MIN;
	int32_t x92 = -1;
	volatile uint32_t t19 = 45251U;

	t19 = (x89+((x90<x91)|x92));

	if (t19 != 56982880U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x93 = 4;
	static uint16_t x94 = 24U;
	uint16_t x96 = 7U;

	t20 = (x93+((x94<x95)|x96));

	if (t20 != 11) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x97 = 13604;
	int32_t x98 = -119;
	int16_t x99 = -1;
	uint16_t x100 = 12U;
	int32_t t21 = 6527905;

	t21 = (x97+((x98<x99)|x100));

	if (t21 != 13617) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x106 = -1;
	int16_t x107 = INT16_MIN;
	static int8_t x108 = INT8_MIN;
	static volatile int32_t t22 = 10;

	t22 = (x105+((x106<x107)|x108));

	if (t22 != 2147483519) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x109 = 43U;
	int64_t x110 = -43LL;
	int16_t x112 = INT16_MIN;
	int32_t t23 = -64178;

	t23 = (x109+((x110<x111)|x112));

	if (t23 != -32724) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x113 = -1;
	uint32_t x114 = UINT32_MAX;
	volatile int64_t x115 = INT64_MAX;
	int8_t x116 = -1;

	t24 = (x113+((x114<x115)|x116));

	if (t24 != -2) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x121 = 6U;
	int8_t x123 = INT8_MIN;
	int16_t x124 = -12;
	volatile int32_t t25 = -188486124;

	t25 = (x121+((x122<x123)|x124));

	if (t25 != -6) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x125 = 4152658183074551198LLU;
	int64_t x126 = INT64_MIN;
	static uint32_t x127 = 248U;
	volatile int16_t x128 = INT16_MIN;

	t26 = (x125+((x126<x127)|x128));

	if (t26 != 4152658183074518431LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x130 = -1;
	int32_t x131 = INT32_MIN;
	int32_t t27 = -28143;

	t27 = (x129+((x130<x131)|x132));

	if (t27 != -1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x133 = UINT16_MAX;
	volatile int64_t x134 = 204167LL;
	int16_t x135 = -1;
	int32_t t28 = 217661306;

	t28 = (x133+((x134<x135)|x136));

	if (t28 != 331384861) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile int8_t x138 = INT8_MIN;
	int16_t x139 = INT16_MIN;
	int8_t x140 = 1;

	t29 = (x137+((x138<x139)|x140));

	if (t29 != -127) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x141 = -1LL;
	int32_t x142 = INT32_MAX;
	int32_t x143 = 8397;
	int8_t x144 = 0;
	static int64_t t30 = -2024534956LL;

	t30 = (x141+((x142<x143)|x144));

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x145 = INT8_MAX;
	uint32_t x147 = 404588U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t31 = -197;

	t31 = (x145+((x146<x147)|x148));

	if (t31 != -32640) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x150 = -1;
	volatile int32_t x151 = INT32_MIN;
	int16_t x152 = -1;
	static uint64_t t32 = 1446505759912LLU;

	t32 = (x149+((x150<x151)|x152));

	if (t32 != 25703894198LLU) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint64_t x153 = 7LLU;
	int16_t x154 = -1;
	int64_t x156 = -1LL;
	volatile uint64_t t33 = 428079179366891LLU;

	t33 = (x153+((x154<x155)|x156));

	if (t33 != 6LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x157 = INT8_MAX;
	uint32_t x158 = UINT32_MAX;
	int16_t x159 = -1;
	volatile int64_t t34 = 16138231925689LL;

	t34 = (x157+((x158<x159)|x160));

	if (t34 != -160336213LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x162 = 0;

	t35 = (x161+((x162<x163)|x164));

	if (t35 != -32751) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x165 = -1;
	int16_t x166 = -1;
	int16_t x167 = -1;
	int32_t x168 = INT32_MAX;
	volatile int32_t t36 = 283141776;

	t36 = (x165+((x166<x167)|x168));

	if (t36 != 2147483646) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile int16_t x169 = INT16_MIN;
	int64_t x170 = INT64_MAX;
	int32_t x171 = INT32_MAX;
	int64_t x172 = INT64_MAX;
	volatile int64_t t37 = 610047038645LL;

	t37 = (x169+((x170<x171)|x172));

	if (t37 != 9223372036854743039LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x173 = 1U;
	int64_t x174 = INT64_MIN;
	volatile uint8_t x176 = UINT8_MAX;
	int32_t t38 = 41;

	t38 = (x173+((x174<x175)|x176));

	if (t38 != 256) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x177 = INT8_MIN;
	volatile uint16_t x178 = 0U;
	int16_t x179 = INT16_MIN;
	uint8_t x180 = 25U;
	int32_t t39 = -98;

	t39 = (x177+((x178<x179)|x180));

	if (t39 != -103) { NG(); } else { ; }
	
}

void f40(void) {
	static volatile int64_t x182 = INT64_MIN;
	static uint16_t x183 = 31057U;
	int8_t x184 = INT8_MAX;
	volatile int32_t t40 = -9071709;

	t40 = (x181+((x182<x183)|x184));

	if (t40 != -32641) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x185 = 2U;
	int32_t x186 = INT32_MAX;
	static uint32_t x187 = 1U;

	t41 = (x185+((x186<x187)|x188));

	if (t41 != 13) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x189 = -487408560300LL;
	volatile int32_t x190 = -264798911;
	volatile uint64_t x191 = 35446LLU;
	uint64_t x192 = 122904932096814LLU;
	uint64_t t42 = 22197227149236LLU;

	t42 = (x189+((x190<x191)|x192));

	if (t42 != 122417523536514LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x193 = INT64_MIN;
	int32_t x194 = INT32_MIN;
	static int32_t x195 = INT32_MIN;
	uint64_t x196 = 7420328528552966LLU;
	volatile uint64_t t43 = 2107270093385LLU;

	t43 = (x193+((x194<x195)|x196));

	if (t43 != 9230792365383328774LLU) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x197 = INT64_MIN;
	int64_t x198 = INT64_MIN;
	uint64_t x200 = 72LLU;
	volatile uint64_t t44 = 41287027353LLU;

	t44 = (x197+((x198<x199)|x200));

	if (t44 != 9223372036854775881LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint16_t x201 = 1744U;
	int32_t x202 = -1;
	static int16_t x204 = INT16_MAX;
	volatile int32_t t45 = -116847957;

	t45 = (x201+((x202<x203)|x204));

	if (t45 != 34511) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x209 = UINT32_MAX;
	int32_t x211 = INT32_MAX;
	volatile int32_t x212 = -58;

	t46 = (x209+((x210<x211)|x212));

	if (t46 != 4294967238U) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = -1;
	uint16_t x215 = 1800U;
	static int8_t x216 = 0;

	t47 = (x213+((x214<x215)|x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = -1;
	int32_t x218 = -1;
	int16_t x220 = INT16_MAX;
	int32_t t48 = 1226;

	t48 = (x217+((x218<x219)|x220));

	if (t48 != 32766) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x221 = -1LL;
	int16_t x222 = 1572;
	uint16_t x223 = 12437U;
	int16_t x224 = -1;

	t49 = (x221+((x222<x223)|x224));

	if (t49 != -2LL) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x229 = 1449518LL;
	int64_t x230 = -1LL;
	int32_t x231 = -1;
	volatile int64_t t50 = -237607LL;

	t50 = (x229+((x230<x231)|x232));

	if (t50 != 1447646LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x233 = INT8_MIN;
	int16_t x234 = -1840;
	volatile uint32_t x236 = 45U;
	uint32_t t51 = 920595U;

	t51 = (x233+((x234<x235)|x236));

	if (t51 != 4294967213U) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x238 = INT32_MAX;
	static int32_t x239 = 8921676;
	volatile uint64_t t52 = 1586580696302LLU;

	t52 = (x237+((x238<x239)|x240));

	if (t52 != 1581LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static uint8_t x241 = 0U;
	uint64_t x242 = UINT64_MAX;
	int8_t x243 = 1;
	uint8_t x244 = 1U;
	volatile int32_t t53 = -14960074;

	t53 = (x241+((x242<x243)|x244));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x245 = INT16_MAX;
	volatile int8_t x246 = INT8_MIN;
	static uint8_t x247 = 14U;
	volatile uint64_t x248 = UINT64_MAX;
	volatile uint64_t t54 = 0LLU;

	t54 = (x245+((x246<x247)|x248));

	if (t54 != 32766LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x250 = INT16_MIN;
	volatile uint8_t x251 = 1U;
	uint64_t x252 = UINT64_MAX;
	static volatile uint64_t t55 = 62815405830082LLU;

	t55 = (x249+((x250<x251)|x252));

	if (t55 != 18446744073709445680LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x253 = 3259680;
	volatile uint64_t x254 = UINT64_MAX;
	int32_t x255 = INT32_MIN;
	int64_t x256 = INT64_MIN;
	int64_t t56 = 1LL;

	t56 = (x253+((x254<x255)|x256));

	if (t56 != -9223372036851516128LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x257 = UINT16_MAX;
	int8_t x259 = INT8_MAX;
	uint16_t x260 = 254U;
	volatile int32_t t57 = 47;

	t57 = (x257+((x258<x259)|x260));

	if (t57 != 65790) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x261 = -1;
	uint16_t x262 = 1973U;
	volatile int32_t x263 = -1;
	uint32_t x264 = UINT32_MAX;
	volatile uint32_t t58 = 161U;

	t58 = (x261+((x262<x263)|x264));

	if (t58 != 4294967294U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x267 = 295;
	int16_t x268 = INT16_MIN;

	t59 = (x265+((x266<x267)|x268));

	if (t59 != -32768LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x270 = UINT64_MAX;
	static int8_t x271 = -1;
	int64_t x272 = INT64_MAX;

	t60 = (x269+((x270<x271)|x272));

	if (t60 != 9223372036668729555LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x273 = -11423;
	volatile int16_t x275 = -2427;
	int8_t x276 = INT8_MAX;
	int32_t t61 = 61102;

	t61 = (x273+((x274<x275)|x276));

	if (t61 != -11296) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x277 = -1;
	static uint64_t x279 = 2212112429LLU;
	int32_t x280 = INT32_MAX;
	int32_t t62 = -223625797;

	t62 = (x277+((x278<x279)|x280));

	if (t62 != 2147483646) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x281 = INT16_MAX;
	int32_t x283 = -1;
	uint16_t x284 = 22U;

	t63 = (x281+((x282<x283)|x284));

	if (t63 != 32789) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x285 = 22176LLU;
	uint32_t x287 = 64232U;
	int32_t x288 = INT32_MIN;

	t64 = (x285+((x286<x287)|x288));

	if (t64 != 18446744071562090144LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x294 = INT16_MAX;
	int8_t x295 = 0;
	volatile uint64_t x296 = UINT64_MAX;
	static uint64_t t65 = 14368437121018648LLU;

	t65 = (x293+((x294<x295)|x296));

	if (t65 != 2147483646LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int32_t x301 = -14942351;
	uint64_t x302 = 15456LLU;
	static int16_t x303 = INT16_MAX;
	int16_t x304 = INT16_MAX;

	t66 = (x301+((x302<x303)|x304));

	if (t66 != -14909584) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x312 = 1U;
	int64_t t67 = -7218352061876990LL;

	t67 = (x309+((x310<x311)|x312));

	if (t67 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x313 = -1;
	int16_t x314 = -1;
	int64_t x315 = INT64_MIN;
	uint64_t x316 = 366232697LLU;

	t68 = (x313+((x314<x315)|x316));

	if (t68 != 366232696LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x317 = -1;
	uint8_t x319 = 3U;
	static int64_t x320 = 2206LL;

	t69 = (x317+((x318<x319)|x320));

	if (t69 != 2206LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int8_t x321 = -1;
	volatile int32_t x322 = -205117295;
	volatile int64_t x323 = INT64_MIN;
	int64_t x324 = -1LL;
	static volatile int64_t t70 = -1773623512LL;

	t70 = (x321+((x322<x323)|x324));

	if (t70 != -2LL) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x325 = INT8_MAX;
	static volatile int32_t x326 = INT32_MIN;
	uint32_t x327 = 105U;
	uint16_t x328 = 2U;
	volatile int32_t t71 = -46921716;

	t71 = (x325+((x326<x327)|x328));

	if (t71 != 129) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x329 = INT64_MIN;
	int64_t x330 = INT64_MIN;
	int32_t x331 = 50;
	static volatile int32_t x332 = INT32_MAX;

	t72 = (x329+((x330<x331)|x332));

	if (t72 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x334 = 26200U;
	int8_t x335 = 0;
	int8_t x336 = -1;
	static volatile int32_t t73 = -16145169;

	t73 = (x333+((x334<x335)|x336));

	if (t73 != -32769) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = INT8_MAX;
	int8_t x338 = INT8_MAX;
	volatile int16_t x339 = -1;
	volatile int32_t t74 = 380;

	t74 = (x337+((x338<x339)|x340));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x341 = INT8_MIN;
	int64_t x342 = INT64_MAX;
	uint16_t x343 = UINT16_MAX;
	int16_t x344 = -6;
	volatile int32_t t75 = -1;

	t75 = (x341+((x342<x343)|x344));

	if (t75 != -134) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x345 = 86494742U;
	int32_t x346 = INT32_MIN;
	int64_t x347 = INT64_MAX;
	int64_t x348 = INT64_MIN;
	int64_t t76 = -5545959LL;

	t76 = (x345+((x346<x347)|x348));

	if (t76 != -9223372036768281065LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x349 = INT8_MIN;
	int16_t x350 = -3152;
	volatile uint8_t x351 = 0U;

	t77 = (x349+((x350<x351)|x352));

	if (t77 != -137) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x353 = 1LL;
	static uint32_t x354 = 31511U;
	int8_t x356 = INT8_MIN;
	int64_t t78 = -102987124499LL;

	t78 = (x353+((x354<x355)|x356));

	if (t78 != -127LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x357 = 14;
	volatile uint16_t x358 = 3U;
	int16_t x359 = INT16_MAX;
	uint8_t x360 = 0U;
	static volatile int32_t t79 = -28;

	t79 = (x357+((x358<x359)|x360));

	if (t79 != 15) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x362 = INT16_MAX;
	static volatile uint32_t x364 = 218501873U;
	uint32_t t80 = 1U;

	t80 = (x361+((x362<x363)|x364));

	if (t80 != 218501940U) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x365 = INT16_MIN;
	uint32_t x366 = UINT32_MAX;
	int32_t x367 = INT32_MAX;
	static int16_t x368 = -4;
	static volatile int32_t t81 = -8855062;

	t81 = (x365+((x366<x367)|x368));

	if (t81 != -32772) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x369 = 0U;
	static int16_t x370 = -1;
	static volatile int16_t x371 = -1;
	volatile int32_t x372 = 0;

	t82 = (x369+((x370<x371)|x372));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x377 = 892007834837951LLU;
	volatile uint16_t x378 = UINT16_MAX;
	uint64_t x379 = 7160724LLU;
	int16_t x380 = 354;
	uint64_t t83 = 136459016436LLU;

	t83 = (x377+((x378<x379)|x380));

	if (t83 != 892007834838306LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x381 = INT16_MAX;
	volatile int32_t x382 = 1;
	int32_t x383 = -1;
	int64_t x384 = INT64_MIN;
	static volatile int64_t t84 = 100LL;

	t84 = (x381+((x382<x383)|x384));

	if (t84 != -9223372036854743041LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x385 = INT16_MIN;
	volatile uint8_t x386 = UINT8_MAX;
	int64_t x387 = -578640935309188LL;
	int8_t x388 = -1;
	int32_t t85 = 212895140;

	t85 = (x385+((x386<x387)|x388));

	if (t85 != -32769) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x390 = 2362150963516413LL;
	int16_t x391 = INT16_MAX;
	int64_t t86 = 4348139205164813158LL;

	t86 = (x389+((x390<x391)|x392));

	if (t86 != -150373866811875506LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int16_t x393 = INT16_MIN;
	uint8_t x394 = 7U;
	volatile int32_t x395 = INT32_MIN;
	uint64_t x396 = 1064193347954LLU;

	t87 = (x393+((x394<x395)|x396));

	if (t87 != 1064193315186LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x397 = -14LL;
	int32_t x398 = -1;
	int16_t x400 = -22;
	int64_t t88 = -257382706LL;

	t88 = (x397+((x398<x399)|x400));

	if (t88 != -36LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x402 = -2;
	volatile int16_t x403 = 12;
	volatile int32_t x404 = 430;
	volatile int32_t t89 = 1683041;

	t89 = (x401+((x402<x403)|x404));

	if (t89 != 7719) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x405 = UINT8_MAX;
	volatile int32_t x406 = INT32_MIN;
	int64_t x407 = -121059908508913372LL;
	static int16_t x408 = INT16_MAX;
	int32_t t90 = 14321;

	t90 = (x405+((x406<x407)|x408));

	if (t90 != 33022) { NG(); } else { ; }
	
}

void f91(void) {
	uint64_t x429 = UINT64_MAX;
	int64_t x430 = -1261527324140378976LL;
	volatile uint32_t x431 = 2U;
	uint64_t t91 = 3351671528LLU;

	t91 = (x429+((x430<x431)|x432));

	if (t91 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x433 = 227;
	static uint8_t x434 = UINT8_MAX;
	static volatile uint64_t t92 = 46890124087LLU;

	t92 = (x433+((x434<x435)|x436));

	if (t92 != 226LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint64_t x437 = UINT64_MAX;
	int16_t x438 = INT16_MAX;
	int64_t x439 = -441216872914487207LL;
	int8_t x440 = INT8_MIN;
	static uint64_t t93 = 141129856LLU;

	t93 = (x437+((x438<x439)|x440));

	if (t93 != 18446744073709551487LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x441 = -1LL;
	uint64_t x444 = 380697707738233576LLU;
	uint64_t t94 = 7557695622741488LLU;

	t94 = (x441+((x442<x443)|x444));

	if (t94 != 380697707738233576LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x445 = 1U;
	volatile int32_t x446 = INT32_MAX;
	int8_t x447 = -26;
	volatile uint16_t x448 = 174U;
	int32_t t95 = 38383;

	t95 = (x445+((x446<x447)|x448));

	if (t95 != 175) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x450 = UINT32_MAX;
	uint16_t x451 = 14U;
	uint64_t x452 = 23244722858LLU;
	volatile uint64_t t96 = 57236259310389LLU;

	t96 = (x449+((x450<x451)|x452));

	if (t96 != 23244722857LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x453 = -1LL;
	static int16_t x454 = -1;
	static volatile int16_t x455 = -1;
	int8_t x456 = INT8_MIN;
	volatile int64_t t97 = -2235916LL;

	t97 = (x453+((x454<x455)|x456));

	if (t97 != -129LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x457 = -6;
	uint32_t x458 = 28983367U;
	volatile int32_t x460 = INT32_MAX;

	t98 = (x457+((x458<x459)|x460));

	if (t98 != 2147483641) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x465 = INT8_MIN;
	uint16_t x466 = 11U;
	volatile uint64_t x467 = 603110984650953LLU;
	volatile int16_t x468 = 31;
	volatile int32_t t99 = 852;

	t99 = (x465+((x466<x467)|x468));

	if (t99 != -97) { NG(); } else { ; }
	
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

