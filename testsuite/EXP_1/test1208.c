#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int8_t x6 = INT8_MIN;
int8_t x15 = -1;
uint16_t x16 = UINT16_MAX;
int32_t x17 = INT32_MIN;
volatile int32_t t3 = 879;
uint64_t x22 = UINT64_MAX;
static volatile int64_t x25 = 852628LL;
int32_t x31 = -263803;
static int32_t x32 = INT32_MAX;
static int16_t x46 = INT16_MIN;
static int32_t x53 = 6052;
volatile int32_t t10 = 331;
int32_t t11 = -2746;
uint64_t t12 = UINT64_MAX;
int8_t x72 = INT8_MIN;
static volatile int32_t t13 = -27116052;
uint8_t x73 = 0U;
uint16_t x78 = 5U;
volatile int16_t x88 = -1;
volatile uint64_t t17 = UINT64_MAX;
int32_t x104 = INT32_MIN;
uint64_t t22 = 16227604LLU;
uint32_t x118 = 9U;
int16_t x120 = -14938;
int16_t x126 = INT16_MAX;
int16_t x127 = -1;
static int32_t x129 = -10393;
int8_t x135 = -1;
volatile int8_t x138 = INT8_MIN;
uint16_t x140 = UINT16_MAX;
int16_t x141 = INT16_MIN;
volatile int32_t t31 = -1;
volatile int32_t x150 = INT32_MIN;
volatile int32_t t33 = 62438;
int32_t x158 = INT32_MAX;
int16_t x163 = 9;
static int64_t x165 = INT64_MAX;
static volatile uint16_t x167 = 14U;
int16_t x169 = INT16_MAX;
static uint8_t x170 = 114U;
int32_t x184 = INT32_MAX;
static volatile uint8_t x186 = 1U;
int16_t x187 = 68;
int8_t x192 = INT8_MIN;
volatile int16_t x193 = -2023;
int8_t x195 = INT8_MAX;
uint32_t x196 = 13691563U;
static uint64_t x204 = 10424581472LLU;
volatile int64_t t47 = -265310LL;
static volatile uint8_t x212 = UINT8_MAX;
uint32_t t48 = 3297U;
static volatile uint16_t x217 = UINT16_MAX;
static volatile uint32_t x220 = 44235U;
int32_t x223 = -4006;
volatile int32_t x225 = INT32_MIN;
int64_t x227 = INT64_MAX;
uint64_t x232 = UINT64_MAX;
int8_t x233 = -1;
int64_t x235 = -3865223765459LL;
volatile int64_t t54 = 8336656643515634LL;
int8_t x258 = INT8_MIN;
int16_t x260 = INT16_MIN;
int32_t x261 = INT32_MIN;
static volatile int64_t t60 = -2728723LL;
uint64_t x267 = 679770LLU;
int64_t x268 = INT64_MIN;
uint64_t t61 = 888609LLU;
int16_t x270 = INT16_MAX;
int64_t x289 = 1804493484124037LL;
int32_t x290 = INT32_MIN;
int8_t x291 = 19;
volatile int16_t x307 = -1;
static int8_t x313 = INT8_MAX;
int8_t x319 = -35;
volatile int8_t x322 = INT8_MIN;
static int64_t x330 = INT64_MIN;
int16_t x339 = 1;
static int8_t x343 = -4;
static volatile int16_t x345 = -1;
uint16_t x348 = 0U;
static volatile int16_t x355 = INT16_MIN;
int8_t x361 = INT8_MIN;
int16_t x371 = INT16_MIN;
uint8_t x373 = 18U;
int16_t x375 = -3356;
int16_t x376 = 0;
uint32_t x383 = 79609U;
static int8_t x384 = -1;
static uint8_t x388 = 15U;
volatile int32_t t87 = -425095525;
uint16_t x391 = UINT16_MAX;
static int16_t x395 = -1;
volatile uint8_t x399 = 29U;
int8_t x401 = INT8_MIN;
static uint64_t x403 = 230123945830423LLU;
static volatile uint64_t t91 = 44LLU;
volatile int32_t x406 = INT32_MIN;
volatile int32_t t93 = 6429;
int32_t t94 = 368730373;
uint64_t x418 = 46LLU;
int16_t x419 = -1;
int32_t t95 = 29652160;
volatile uint32_t t97 = UINT32_MAX;
int32_t x436 = 2142;


void f0(void) {
	static volatile int64_t x1 = INT64_MIN;
	int16_t x2 = -832;
	static int64_t x3 = -7810768382670919LL;
	int8_t x4 = INT8_MIN;
	volatile int64_t t0 = -716509LL;

	t0 = (((x1==x2)-x3)|x4);

	if (t0 != -57LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = UINT16_MAX;
	static int8_t x7 = INT8_MIN;
	static uint16_t x8 = UINT16_MAX;
	int32_t t1 = 818;

	t1 = (((x5==x6)-x7)|x8);

	if (t1 != 65535) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	static volatile int64_t x14 = 16662186858128LL;
	volatile int32_t t2 = 27405291;

	t2 = (((x13==x14)-x15)|x16);

	if (t2 != 65535) { NG(); } else { ; }
	
}

void f3(void) {
	static uint64_t x18 = UINT64_MAX;
	int8_t x19 = -1;
	uint8_t x20 = 60U;

	t3 = (((x17==x18)-x19)|x20);

	if (t3 != 61) { NG(); } else { ; }
	
}

void f4(void) {
	static int32_t x21 = INT32_MIN;
	int32_t x23 = -1;
	int32_t x24 = 5;
	volatile int32_t t4 = 0;

	t4 = (((x21==x22)-x23)|x24);

	if (t4 != 5) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = 50698LL;
	int16_t x27 = -1;
	int32_t x28 = -1;
	static int32_t t5 = 803769513;

	t5 = (((x25==x26)-x27)|x28);

	if (t5 != -1) { NG(); } else { ; }
	
}

void f6(void) {
	static int16_t x29 = INT16_MAX;
	static int8_t x30 = 7;
	int32_t t6 = INT32_MAX;

	t6 = (((x29==x30)-x31)|x32);

	if (t6 != INT32_MAX) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x37 = UINT16_MAX;
	uint16_t x38 = 11U;
	uint8_t x39 = 0U;
	int64_t x40 = 893389LL;
	volatile int64_t t7 = 135386LL;

	t7 = (((x37==x38)-x39)|x40);

	if (t7 != 893389LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = 31035961LL;
	int64_t x42 = -24452540863809LL;
	int8_t x43 = 0;
	uint32_t x44 = 2U;
	static uint32_t t8 = 433976441U;

	t8 = (((x41==x42)-x43)|x44);

	if (t8 != 2U) { NG(); } else { ; }
	
}

void f9(void) {
	static int64_t x45 = 2994528470LL;
	uint8_t x47 = 3U;
	volatile int8_t x48 = INT8_MAX;
	static int32_t t9 = -24;

	t9 = (((x45==x46)-x47)|x48);

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x54 = 877;
	volatile int16_t x55 = -3;
	int8_t x56 = -1;

	t10 = (((x53==x54)-x55)|x56);

	if (t10 != -1) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = INT64_MAX;
	static volatile uint16_t x62 = 12U;
	int16_t x63 = -1730;
	static uint16_t x64 = UINT16_MAX;

	t11 = (((x61==x62)-x63)|x64);

	if (t11 != 65535) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x65 = -65LL;
	int64_t x66 = -41322982LL;
	int64_t x67 = -1LL;
	uint64_t x68 = UINT64_MAX;

	t12 = (((x65==x66)-x67)|x68);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x69 = 3U;
	uint16_t x70 = 3249U;
	int8_t x71 = 0;

	t13 = (((x69==x70)-x71)|x72);

	if (t13 != -128) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x74 = INT32_MIN;
	int16_t x75 = INT16_MIN;
	static int16_t x76 = INT16_MIN;
	int32_t t14 = 52;

	t14 = (((x73==x74)-x75)|x76);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x77 = -1;
	static int16_t x79 = -1;
	int32_t x80 = -1;
	int32_t t15 = -6464;

	t15 = (((x77==x78)-x79)|x80);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x81 = -1;
	static uint64_t x82 = 29014807902394LLU;
	static uint16_t x83 = 2U;
	uint16_t x84 = UINT16_MAX;
	int32_t t16 = 17655;

	t16 = (((x81==x82)-x83)|x84);

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = 29LL;
	int8_t x86 = INT8_MAX;
	uint64_t x87 = UINT64_MAX;

	t17 = (((x85==x86)-x87)|x88);

	if (t17 != UINT64_MAX) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x89 = 14750LL;
	uint64_t x90 = UINT64_MAX;
	uint8_t x91 = UINT8_MAX;
	int16_t x92 = INT16_MIN;
	volatile int32_t t18 = -547106;

	t18 = (((x89==x90)-x91)|x92);

	if (t18 != -255) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = UINT16_MAX;
	int32_t x94 = INT32_MAX;
	static uint64_t x95 = 2LLU;
	static uint8_t x96 = 22U;
	uint64_t t19 = 41LLU;

	t19 = (((x93==x94)-x95)|x96);

	if (t19 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x97 = INT16_MIN;
	int32_t x98 = INT32_MAX;
	static volatile uint64_t x99 = 14LLU;
	int64_t x100 = 1LL;
	uint64_t t20 = 944LLU;

	t20 = (((x97==x98)-x99)|x100);

	if (t20 != 18446744073709551603LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x101 = INT16_MAX;
	static volatile int16_t x102 = INT16_MIN;
	int32_t x103 = -1;
	int32_t t21 = -1;

	t21 = (((x101==x102)-x103)|x104);

	if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x105 = 1U;
	uint16_t x106 = 62U;
	uint64_t x107 = 322730LLU;
	uint32_t x108 = 1424778904U;

	t22 = (((x105==x106)-x107)|x108);

	if (t22 != 18446744073709516766LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x109 = 1897357845298390956LLU;
	int32_t x110 = INT32_MIN;
	static volatile int16_t x111 = INT16_MIN;
	static int32_t x112 = INT32_MIN;
	volatile int32_t t23 = 12308;

	t23 = (((x109==x110)-x111)|x112);

	if (t23 != -2147450880) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MAX;
	static int32_t x114 = INT32_MIN;
	volatile uint16_t x115 = 14U;
	int64_t x116 = -1LL;
	int64_t t24 = 48343020694642LL;

	t24 = (((x113==x114)-x115)|x116);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x117 = -99;
	uint8_t x119 = UINT8_MAX;
	int32_t t25 = 584564441;

	t25 = (((x117==x118)-x119)|x120);

	if (t25 != -89) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = UINT64_MAX;
	volatile int8_t x122 = INT8_MAX;
	static int16_t x123 = -1;
	static int16_t x124 = 210;
	int32_t t26 = -1;

	t26 = (((x121==x122)-x123)|x124);

	if (t26 != 211) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x125 = UINT32_MAX;
	uint8_t x128 = 20U;
	int32_t t27 = 48;

	t27 = (((x125==x126)-x127)|x128);

	if (t27 != 21) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int64_t x130 = -30587540441285293LL;
	uint8_t x131 = 31U;
	int16_t x132 = INT16_MIN;
	static int32_t t28 = -1;

	t28 = (((x129==x130)-x131)|x132);

	if (t28 != -31) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x133 = INT32_MIN;
	int32_t x134 = INT32_MIN;
	uint16_t x136 = UINT16_MAX;
	volatile int32_t t29 = -1;

	t29 = (((x133==x134)-x135)|x136);

	if (t29 != 65535) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x137 = UINT64_MAX;
	int16_t x139 = INT16_MIN;
	static volatile int32_t t30 = 31909206;

	t30 = (((x137==x138)-x139)|x140);

	if (t30 != 65535) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x142 = -1;
	int8_t x143 = INT8_MAX;
	int16_t x144 = INT16_MIN;

	t31 = (((x141==x142)-x143)|x144);

	if (t31 != -127) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x145 = 162;
	int32_t x146 = -1;
	static int32_t x147 = INT32_MAX;
	static volatile uint16_t x148 = 10827U;
	int32_t t32 = 697418059;

	t32 = (((x145==x146)-x147)|x148);

	if (t32 != -2147472821) { NG(); } else { ; }
	
}

void f33(void) {
	static uint64_t x149 = UINT64_MAX;
	uint8_t x151 = 7U;
	int16_t x152 = INT16_MIN;

	t33 = (((x149==x150)-x151)|x152);

	if (t33 != -7) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x153 = INT32_MAX;
	int32_t x154 = -2;
	int16_t x155 = -1;
	uint8_t x156 = 4U;
	static volatile int32_t t34 = 7;

	t34 = (((x153==x154)-x155)|x156);

	if (t34 != 5) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x157 = UINT64_MAX;
	static int16_t x159 = INT16_MIN;
	static volatile int64_t x160 = -1LL;
	static volatile int64_t t35 = 1LL;

	t35 = (((x157==x158)-x159)|x160);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = INT32_MIN;
	int32_t x162 = -1579;
	int32_t x164 = INT32_MIN;
	int32_t t36 = -4176993;

	t36 = (((x161==x162)-x163)|x164);

	if (t36 != -9) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x166 = 95U;
	int16_t x168 = -7;
	int32_t t37 = 28;

	t37 = (((x165==x166)-x167)|x168);

	if (t37 != -5) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x171 = UINT8_MAX;
	int16_t x172 = INT16_MAX;
	int32_t t38 = -695;

	t38 = (((x169==x170)-x171)|x172);

	if (t38 != -1) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x173 = INT8_MIN;
	uint64_t x174 = 40129678LLU;
	static uint16_t x175 = 334U;
	static int16_t x176 = 416;
	static volatile int32_t t39 = -559952552;

	t39 = (((x173==x174)-x175)|x176);

	if (t39 != -78) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x177 = 7;
	int32_t x178 = -94723288;
	int8_t x179 = INT8_MIN;
	static int16_t x180 = -10494;
	volatile int32_t t40 = -4088;

	t40 = (((x177==x178)-x179)|x180);

	if (t40 != -10366) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x181 = -692043157;
	int8_t x182 = INT8_MIN;
	int64_t x183 = 60849383916420658LL;
	int64_t t41 = -66213083LL;

	t41 = (((x181==x182)-x183)|x184);

	if (t41 != -60849382957776897LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x185 = INT8_MAX;
	int32_t x188 = 189;
	volatile int32_t t42 = 128045;

	t42 = (((x185==x186)-x187)|x188);

	if (t42 != -67) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x189 = 116LL;
	uint64_t x190 = 952361LLU;
	volatile int8_t x191 = INT8_MAX;
	volatile int32_t t43 = -14;

	t43 = (((x189==x190)-x191)|x192);

	if (t43 != -127) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x194 = 188601LL;
	static uint32_t t44 = 15575623U;

	t44 = (((x193==x194)-x195)|x196);

	if (t44 != 4294967211U) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x197 = INT16_MIN;
	static int8_t x198 = 57;
	static volatile int8_t x199 = INT8_MIN;
	volatile int32_t x200 = INT32_MAX;
	volatile int32_t t45 = INT32_MAX;

	t45 = (((x197==x198)-x199)|x200);

	if (t45 != INT32_MAX) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x201 = INT8_MAX;
	volatile int64_t x202 = 154535037745097LL;
	uint16_t x203 = UINT16_MAX;
	uint64_t t46 = 110413LLU;

	t46 = (((x201==x202)-x203)|x204);

	if (t46 != 18446744073709518177LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int32_t x205 = INT32_MAX;
	int32_t x206 = 469;
	int8_t x207 = INT8_MAX;
	int64_t x208 = INT64_MAX;

	t47 = (((x205==x206)-x207)|x208);

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x209 = 1U;
	static int64_t x210 = INT64_MIN;
	uint32_t x211 = 425U;

	t48 = (((x209==x210)-x211)|x212);

	if (t48 != 4294967039U) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x213 = 24;
	static volatile int16_t x214 = -1;
	volatile int16_t x215 = -1;
	volatile int8_t x216 = -45;
	int32_t t49 = 640133152;

	t49 = (((x213==x214)-x215)|x216);

	if (t49 != -45) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x218 = -13391;
	volatile int16_t x219 = INT16_MIN;
	volatile uint32_t t50 = 26U;

	t50 = (((x217==x218)-x219)|x220);

	if (t50 != 44235U) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = 1068059LLU;
	int64_t x222 = INT64_MIN;
	int16_t x224 = -1;
	volatile int32_t t51 = -1;

	t51 = (((x221==x222)-x223)|x224);

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x226 = -1LL;
	int8_t x228 = INT8_MIN;
	volatile int64_t t52 = -3884745575244744354LL;

	t52 = (((x225==x226)-x227)|x228);

	if (t52 != -127LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x229 = -1;
	uint8_t x230 = 1U;
	int64_t x231 = INT64_MAX;
	uint64_t t53 = UINT64_MAX;

	t53 = (((x229==x230)-x231)|x232);

	if (t53 != UINT64_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x234 = -1;
	static volatile int8_t x236 = INT8_MIN;

	t54 = (((x233==x234)-x235)|x236);

	if (t54 != -44LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x237 = -2342;
	int16_t x238 = -3767;
	int8_t x239 = -10;
	static uint32_t x240 = 1526163324U;
	uint32_t t55 = 122U;

	t55 = (((x237==x238)-x239)|x240);

	if (t55 != 1526163326U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x241 = -1;
	int32_t x242 = INT32_MAX;
	volatile uint32_t x243 = 185U;
	int16_t x244 = INT16_MIN;
	static uint32_t t56 = 15254396U;

	t56 = (((x241==x242)-x243)|x244);

	if (t56 != 4294967111U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x249 = -1;
	volatile int32_t x250 = 28;
	static uint32_t x251 = UINT32_MAX;
	volatile int32_t x252 = INT32_MIN;
	uint32_t t57 = 431732895U;

	t57 = (((x249==x250)-x251)|x252);

	if (t57 != 2147483649U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int8_t x253 = INT8_MIN;
	int32_t x254 = INT32_MIN;
	volatile uint8_t x255 = 66U;
	uint8_t x256 = UINT8_MAX;
	static volatile int32_t t58 = -8;

	t58 = (((x253==x254)-x255)|x256);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint8_t x257 = 11U;
	int8_t x259 = INT8_MIN;
	int32_t t59 = -3965;

	t59 = (((x257==x258)-x259)|x260);

	if (t59 != -32640) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x262 = 35U;
	int64_t x263 = -148460530LL;
	int16_t x264 = INT16_MAX;

	t60 = (((x261==x262)-x263)|x264);

	if (t60 != 148471807LL) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x265 = 34U;
	uint8_t x266 = UINT8_MAX;

	t61 = (((x265==x266)-x267)|x268);

	if (t61 != 18446744073708871846LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x269 = -1;
	int32_t x271 = -6756;
	int8_t x272 = INT8_MIN;
	int32_t t62 = 24;

	t62 = (((x269==x270)-x271)|x272);

	if (t62 != -28) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x273 = -1056626LL;
	int16_t x274 = INT16_MAX;
	int32_t x275 = -12727;
	uint8_t x276 = 3U;
	static int32_t t63 = 1;

	t63 = (((x273==x274)-x275)|x276);

	if (t63 != 12727) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = 5;
	int8_t x278 = -1;
	int8_t x279 = INT8_MAX;
	volatile uint64_t x280 = 28982589124784408LLU;
	volatile uint64_t t64 = 48959LLU;

	t64 = (((x277==x278)-x279)|x280);

	if (t64 != 18446744073709551513LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x285 = INT16_MAX;
	int8_t x286 = INT8_MIN;
	uint64_t x287 = UINT64_MAX;
	static uint8_t x288 = UINT8_MAX;
	volatile uint64_t t65 = 217630011LLU;

	t65 = (((x285==x286)-x287)|x288);

	if (t65 != 255LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x292 = 15961;
	volatile int32_t t66 = -23046174;

	t66 = (((x289==x290)-x291)|x292);

	if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x293 = 18U;
	static int16_t x294 = -1;
	int64_t x295 = 126LL;
	static uint32_t x296 = 48341U;
	int64_t t67 = -42679962943721012LL;

	t67 = (((x293==x294)-x295)|x296);

	if (t67 != -41LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x297 = INT64_MIN;
	volatile int8_t x298 = INT8_MIN;
	uint32_t x299 = 1564189U;
	int16_t x300 = -11;
	uint32_t t68 = 120U;

	t68 = (((x297==x298)-x299)|x300);

	if (t68 != 4294967287U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x305 = INT16_MIN;
	static int64_t x306 = -1LL;
	uint64_t x308 = UINT64_MAX;
	volatile uint64_t t69 = UINT64_MAX;

	t69 = (((x305==x306)-x307)|x308);

	if (t69 != UINT64_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x309 = INT64_MIN;
	uint16_t x310 = 14U;
	int16_t x311 = -835;
	uint64_t x312 = 128032029984309420LLU;
	volatile uint64_t t70 = 2347731LLU;

	t70 = (((x309==x310)-x311)|x312);

	if (t70 != 128032029984310255LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x314 = INT64_MIN;
	volatile int8_t x315 = INT8_MAX;
	int32_t x316 = INT32_MIN;
	volatile int32_t t71 = -15;

	t71 = (((x313==x314)-x315)|x316);

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x317 = 330U;
	int32_t x318 = INT32_MAX;
	int16_t x320 = -1;
	static int32_t t72 = -884690220;

	t72 = (((x317==x318)-x319)|x320);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x321 = INT64_MAX;
	volatile uint8_t x323 = 0U;
	int64_t x324 = 878417175556631495LL;
	volatile int64_t t73 = -61701LL;

	t73 = (((x321==x322)-x323)|x324);

	if (t73 != 878417175556631495LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x325 = -3;
	static int16_t x326 = -119;
	int8_t x327 = INT8_MIN;
	int64_t x328 = -1LL;
	static volatile int64_t t74 = -127079LL;

	t74 = (((x325==x326)-x327)|x328);

	if (t74 != -1LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x329 = UINT8_MAX;
	uint64_t x331 = UINT64_MAX;
	int32_t x332 = INT32_MAX;
	volatile uint64_t t75 = 7012LLU;

	t75 = (((x329==x330)-x331)|x332);

	if (t75 != 2147483647LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x333 = UINT64_MAX;
	volatile int8_t x334 = INT8_MIN;
	volatile int8_t x335 = -10;
	int32_t x336 = -32;
	static volatile int32_t t76 = -489610802;

	t76 = (((x333==x334)-x335)|x336);

	if (t76 != -22) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x337 = -1LL;
	int16_t x338 = 10836;
	volatile int16_t x340 = INT16_MIN;
	volatile int32_t t77 = -595122673;

	t77 = (((x337==x338)-x339)|x340);

	if (t77 != -1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint64_t x341 = UINT64_MAX;
	int64_t x342 = -485997618459795LL;
	int32_t x344 = -1;
	int32_t t78 = -171;

	t78 = (((x341==x342)-x343)|x344);

	if (t78 != -1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int64_t x346 = -1359702950215768LL;
	int8_t x347 = INT8_MIN;
	int32_t t79 = -1;

	t79 = (((x345==x346)-x347)|x348);

	if (t79 != 128) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x349 = 2754;
	int32_t x350 = INT32_MIN;
	static uint16_t x351 = 3U;
	uint64_t x352 = 319LLU;
	volatile uint64_t t80 = UINT64_MAX;

	t80 = (((x349==x350)-x351)|x352);

	if (t80 != UINT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x353 = INT16_MAX;
	int64_t x354 = INT64_MIN;
	static int32_t x356 = -307;
	volatile int32_t t81 = 175;

	t81 = (((x353==x354)-x355)|x356);

	if (t81 != -307) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint16_t x357 = UINT16_MAX;
	volatile uint16_t x358 = 620U;
	static volatile int16_t x359 = INT16_MIN;
	int64_t x360 = 1160570607440931LL;
	static volatile int64_t t82 = -2567652693688305385LL;

	t82 = (((x357==x358)-x359)|x360);

	if (t82 != 1160570607473699LL) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x362 = INT32_MAX;
	volatile uint32_t x363 = 1U;
	uint8_t x364 = UINT8_MAX;
	uint32_t t83 = UINT32_MAX;

	t83 = (((x361==x362)-x363)|x364);

	if (t83 != UINT32_MAX) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x369 = UINT32_MAX;
	int32_t x370 = -59534;
	int32_t x372 = -1;
	int32_t t84 = 0;

	t84 = (((x369==x370)-x371)|x372);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x374 = INT64_MIN;
	volatile int32_t t85 = 19;

	t85 = (((x373==x374)-x375)|x376);

	if (t85 != 3356) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x381 = -878;
	static volatile uint32_t x382 = 484549089U;
	static volatile uint32_t t86 = UINT32_MAX;

	t86 = (((x381==x382)-x383)|x384);

	if (t86 != UINT32_MAX) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x385 = -1LL;
	int8_t x386 = INT8_MIN;
	uint8_t x387 = 6U;

	t87 = (((x385==x386)-x387)|x388);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x389 = -1;
	volatile uint32_t x390 = 12743U;
	volatile int8_t x392 = 1;
	int32_t t88 = 3976;

	t88 = (((x389==x390)-x391)|x392);

	if (t88 != -65535) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x393 = INT64_MIN;
	uint8_t x394 = 12U;
	uint8_t x396 = 15U;
	volatile int32_t t89 = 7001;

	t89 = (((x393==x394)-x395)|x396);

	if (t89 != 15) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x397 = -1;
	int16_t x398 = INT16_MIN;
	uint8_t x400 = 2U;
	static volatile int32_t t90 = -256936870;

	t90 = (((x397==x398)-x399)|x400);

	if (t90 != -29) { NG(); } else { ; }
	
}

void f91(void) {
	static int64_t x402 = INT64_MIN;
	int32_t x404 = 1916041;

	t91 = (((x401==x402)-x403)|x404);

	if (t91 != 18446513949764321257LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x405 = 571553U;
	int8_t x407 = INT8_MAX;
	uint8_t x408 = 17U;
	static int32_t t92 = 12654568;

	t92 = (((x405==x406)-x407)|x408);

	if (t92 != -111) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x409 = INT64_MAX;
	int8_t x410 = -1;
	static int32_t x411 = INT32_MAX;
	static int32_t x412 = INT32_MAX;

	t93 = (((x409==x410)-x411)|x412);

	if (t93 != -1) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile uint64_t x413 = 1LLU;
	uint16_t x414 = 11967U;
	static int32_t x415 = -1;
	static int8_t x416 = -46;

	t94 = (((x413==x414)-x415)|x416);

	if (t94 != -45) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x417 = INT64_MAX;
	int16_t x420 = INT16_MIN;

	t95 = (((x417==x418)-x419)|x420);

	if (t95 != -32767) { NG(); } else { ; }
	
}

void f96(void) {
	static int16_t x421 = -1;
	static int8_t x422 = -1;
	volatile int64_t x423 = 215131830LL;
	static uint64_t x424 = 40489LLU;
	uint64_t t96 = 64208214059745666LLU;

	t96 = (((x421==x422)-x423)|x424);

	if (t96 != 18446744073494454123LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x425 = UINT16_MAX;
	int32_t x426 = -1;
	int16_t x427 = -1;
	uint32_t x428 = UINT32_MAX;

	t97 = (((x425==x426)-x427)|x428);

	if (t97 != UINT32_MAX) { NG(); } else { ; }
	
}

void f98(void) {
	static int16_t x433 = INT16_MIN;
	int16_t x434 = INT16_MIN;
	int8_t x435 = INT8_MIN;
	volatile int32_t t98 = 726426;

	t98 = (((x433==x434)-x435)|x436);

	if (t98 != 2271) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x437 = -1;
	volatile uint64_t x438 = 14LLU;
	static int8_t x439 = INT8_MIN;
	int8_t x440 = INT8_MAX;
	int32_t t99 = -34594;

	t99 = (((x437==x438)-x439)|x440);

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

