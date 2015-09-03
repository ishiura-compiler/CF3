#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x4 = 80U;
volatile int64_t x7 = -1LL;
uint8_t x17 = UINT8_MAX;
int16_t x19 = INT16_MAX;
int8_t x23 = INT8_MAX;
int32_t x32 = 28;
int32_t t7 = -11;
int8_t x38 = 1;
uint32_t x45 = UINT32_MAX;
static int16_t x48 = INT16_MIN;
static uint64_t x49 = 75LLU;
uint64_t x51 = UINT64_MAX;
uint8_t x53 = 0U;
uint8_t x56 = 88U;
volatile uint64_t x58 = 1832468307832345LLU;
uint8_t x62 = UINT8_MAX;
uint16_t x63 = UINT16_MAX;
int32_t x64 = INT32_MIN;
int16_t x68 = -227;
uint8_t x69 = 1U;
uint16_t x71 = UINT16_MAX;
int64_t x72 = 53343952LL;
int32_t x76 = 250;
volatile int64_t t18 = -54958LL;
int32_t x77 = INT32_MIN;
uint16_t x78 = 15U;
int32_t x83 = 396178;
int32_t t20 = 66;
uint16_t x90 = 27U;
volatile uint8_t x96 = 0U;
static int8_t x100 = INT8_MIN;
uint8_t x101 = 12U;
static uint64_t x104 = 919LLU;
int8_t x107 = INT8_MAX;
int64_t x108 = INT64_MIN;
int64_t x114 = -16756991205LL;
static volatile int16_t x121 = INT16_MAX;
uint8_t x123 = UINT8_MAX;
static int32_t x128 = -7629148;
volatile int32_t t31 = -24475230;
static uint64_t x137 = UINT64_MAX;
volatile int8_t x140 = INT8_MIN;
int32_t t34 = 0;
int32_t t35 = INT32_MIN;
int64_t x154 = 28896LL;
static uint32_t x155 = 3U;
volatile int16_t x156 = INT16_MAX;
static uint16_t x162 = UINT16_MAX;
int64_t x170 = INT64_MAX;
uint64_t x174 = UINT64_MAX;
uint64_t t43 = 968094077125857205LLU;
volatile int16_t x185 = 27;
uint64_t t46 = 214LLU;
uint16_t x191 = 9587U;
volatile int32_t t47 = -251591;
volatile uint8_t x218 = 4U;
int8_t x219 = -1;
static volatile int32_t x222 = -1;
int32_t x223 = INT32_MIN;
int32_t x227 = 204138798;
static uint8_t x228 = 123U;
volatile int32_t t56 = 204361578;
int16_t x230 = 11;
int8_t x233 = -1;
int8_t x236 = INT8_MAX;
uint32_t t60 = 3120050U;
int64_t x246 = 8095460408878065LL;
int32_t x252 = -1;
static volatile int64_t t62 = -266LL;
int8_t x253 = INT8_MIN;
int16_t x256 = -3;
volatile int64_t x257 = 102805272365LL;
uint64_t x260 = UINT64_MAX;
int32_t x263 = -1;
uint64_t x266 = 17079319577278778LLU;
int32_t x267 = -1;
volatile int32_t t67 = INT32_MIN;
int64_t x276 = INT64_MIN;
volatile int16_t x278 = -12197;
volatile int32_t x281 = 69250182;
volatile int16_t x282 = 47;
uint16_t x283 = 27812U;
uint16_t x284 = UINT16_MAX;
static uint16_t x287 = 3U;
int64_t x291 = -1LL;
int32_t x292 = INT32_MIN;
uint16_t x293 = UINT16_MAX;
volatile uint8_t x296 = UINT8_MAX;
int32_t x298 = INT32_MIN;
int8_t x301 = -1;
int8_t x302 = INT8_MIN;
uint64_t x309 = 46994105278170657LLU;
int8_t x316 = INT8_MIN;
static volatile int32_t t78 = 334;
static volatile int16_t x318 = 345;
volatile uint32_t x320 = 0U;
int32_t x325 = 1001;
uint16_t x326 = 224U;
int32_t x328 = 2686716;
int32_t x330 = INT32_MIN;
int16_t x337 = 1;
static int64_t x338 = INT64_MIN;
uint16_t x339 = 12U;
uint8_t x341 = 2U;
volatile int32_t t85 = -5616577;
int8_t x349 = 0;
volatile int32_t t87 = -2130697;
int64_t x354 = INT64_MIN;
int64_t t88 = 63118841LL;
static volatile int8_t x362 = INT8_MAX;
static uint32_t x363 = UINT32_MAX;
volatile uint16_t x372 = UINT16_MAX;
volatile int32_t t92 = 62;
int32_t x375 = INT32_MIN;
int64_t x376 = -8038866428136554LL;
int16_t x377 = 43;
int32_t t96 = 2;
int32_t t98 = 10;
uint64_t x398 = UINT64_MAX;
uint32_t x400 = UINT32_MAX;


void f0(void) {
	int64_t x1 = -1LL;
	static int16_t x2 = INT16_MIN;
	static uint64_t x3 = UINT64_MAX;
	static volatile uint64_t t0 = 420429416770LLU;

	t0 = (((x1==x2)&x3)|x4);

	if (t0 != 80LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int8_t x5 = INT8_MIN;
	uint16_t x6 = UINT16_MAX;
	int32_t x8 = 756414438;
	volatile int64_t t1 = -700LL;

	t1 = (((x5==x6)&x7)|x8);

	if (t1 != 756414438LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MIN;
	uint64_t x10 = UINT64_MAX;
	int16_t x11 = INT16_MIN;
	volatile int8_t x12 = INT8_MAX;
	static volatile int32_t t2 = 65063043;

	t2 = (((x9==x10)&x11)|x12);

	if (t2 != 127) { NG(); } else { ; }
	
}

void f3(void) {
	int64_t x13 = INT64_MIN;
	uint64_t x14 = UINT64_MAX;
	uint32_t x15 = 95714U;
	int32_t x16 = INT32_MAX;
	static volatile uint32_t t3 = 83U;

	t3 = (((x13==x14)&x15)|x16);

	if (t3 != 2147483647U) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = INT64_MIN;
	int64_t x20 = INT64_MIN;
	int64_t t4 = INT64_MIN;

	t4 = (((x17==x18)&x19)|x20);

	if (t4 != INT64_MIN) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	int8_t x22 = 0;
	static uint8_t x24 = 0U;
	int32_t t5 = -7423;

	t5 = (((x21==x22)&x23)|x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x25 = -1;
	int16_t x26 = -1;
	static int16_t x27 = INT16_MIN;
	uint64_t x28 = 132433131182103863LLU;
	volatile uint64_t t6 = 16453502LLU;

	t6 = (((x25==x26)&x27)|x28);

	if (t6 != 132433131182103863LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 455;
	int8_t x30 = INT8_MAX;
	uint16_t x31 = 34U;

	t7 = (((x29==x30)&x31)|x32);

	if (t7 != 28) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = INT64_MIN;
	int8_t x34 = INT8_MAX;
	int32_t x35 = -1;
	static int64_t x36 = INT64_MAX;
	volatile int64_t t8 = INT64_MAX;

	t8 = (((x33==x34)&x35)|x36);

	if (t8 != INT64_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint16_t x37 = 5635U;
	int32_t x39 = INT32_MIN;
	volatile uint64_t x40 = 65259327414476402LLU;
	uint64_t t9 = 1159771924LLU;

	t9 = (((x37==x38)&x39)|x40);

	if (t9 != 65259327414476402LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -1LL;
	uint64_t x42 = UINT64_MAX;
	int8_t x43 = 14;
	volatile uint16_t x44 = 801U;
	volatile int32_t t10 = -1;

	t10 = (((x41==x42)&x43)|x44);

	if (t10 != 801) { NG(); } else { ; }
	
}

void f11(void) {
	static uint16_t x46 = UINT16_MAX;
	static int32_t x47 = -1;
	static volatile int32_t t11 = 629;

	t11 = (((x45==x46)&x47)|x48);

	if (t11 != -32768) { NG(); } else { ; }
	
}

void f12(void) {
	uint64_t x50 = 11242642LLU;
	uint64_t x52 = UINT64_MAX;
	uint64_t t12 = UINT64_MAX;

	t12 = (((x49==x50)&x51)|x52);

	if (t12 != UINT64_MAX) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x54 = 0;
	static int8_t x55 = 0;
	volatile int32_t t13 = 816;

	t13 = (((x53==x54)&x55)|x56);

	if (t13 != 88) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	volatile uint32_t x59 = 1378590136U;
	static uint16_t x60 = 64U;
	volatile uint32_t t14 = 53909965U;

	t14 = (((x57==x58)&x59)|x60);

	if (t14 != 64U) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint32_t x61 = 226U;
	volatile int32_t t15 = INT32_MIN;

	t15 = (((x61==x62)&x63)|x64);

	if (t15 != INT32_MIN) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int64_t x65 = INT64_MIN;
	static int16_t x66 = INT16_MIN;
	int8_t x67 = -25;
	volatile int32_t t16 = -1;

	t16 = (((x65==x66)&x67)|x68);

	if (t16 != -227) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -113437;
	int64_t t17 = 1LL;

	t17 = (((x69==x70)&x71)|x72);

	if (t17 != 53343952LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MAX;
	uint8_t x74 = 5U;
	int64_t x75 = INT64_MIN;

	t18 = (((x73==x74)&x75)|x76);

	if (t18 != 250LL) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x79 = -1LL;
	int16_t x80 = 2698;
	volatile int64_t t19 = -195272957307658079LL;

	t19 = (((x77==x78)&x79)|x80);

	if (t19 != 2698LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = -1;
	volatile int64_t x82 = -1LL;
	int16_t x84 = INT16_MIN;

	t20 = (((x81==x82)&x83)|x84);

	if (t20 != -32768) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x85 = 1789361U;
	uint16_t x86 = 25886U;
	int16_t x87 = INT16_MIN;
	int8_t x88 = INT8_MAX;
	int32_t t21 = 150;

	t21 = (((x85==x86)&x87)|x88);

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 6U;
	uint64_t x91 = UINT64_MAX;
	uint16_t x92 = 0U;
	static uint64_t t22 = 3650364917671218547LLU;

	t22 = (((x89==x90)&x91)|x92);

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	static int64_t x94 = -1LL;
	int8_t x95 = INT8_MIN;
	static int32_t t23 = 10535935;

	t23 = (((x93==x94)&x95)|x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = INT32_MIN;
	static volatile int64_t x98 = INT64_MAX;
	int8_t x99 = -3;
	int32_t t24 = 32661566;

	t24 = (((x97==x98)&x99)|x100);

	if (t24 != -128) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x102 = -1;
	int32_t x103 = -4;
	static uint64_t t25 = 499400308762LLU;

	t25 = (((x101==x102)&x103)|x104);

	if (t25 != 919LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x105 = 1;
	uint8_t x106 = UINT8_MAX;
	int64_t t26 = INT64_MIN;

	t26 = (((x105==x106)&x107)|x108);

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x109 = -20;
	static uint16_t x110 = UINT16_MAX;
	int16_t x111 = -1;
	static volatile int64_t x112 = INT64_MIN;
	volatile int64_t t27 = INT64_MIN;

	t27 = (((x109==x110)&x111)|x112);

	if (t27 != INT64_MIN) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = 27U;
	uint32_t x115 = 59357032U;
	uint32_t x116 = UINT32_MAX;
	volatile uint32_t t28 = UINT32_MAX;

	t28 = (((x113==x114)&x115)|x116);

	if (t28 != UINT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	uint8_t x118 = 29U;
	static volatile uint16_t x119 = UINT16_MAX;
	int16_t x120 = -8;
	int32_t t29 = -6;

	t29 = (((x117==x118)&x119)|x120);

	if (t29 != -8) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = INT8_MIN;
	volatile int64_t x124 = -6520431LL;
	int64_t t30 = 51470209601535LL;

	t30 = (((x121==x122)&x123)|x124);

	if (t30 != -6520431LL) { NG(); } else { ; }
	
}

void f31(void) {
	static uint16_t x125 = 7697U;
	uint32_t x126 = 4108U;
	static int16_t x127 = -1;

	t31 = (((x125==x126)&x127)|x128);

	if (t31 != -7629148) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int16_t x129 = INT16_MIN;
	static int16_t x130 = INT16_MAX;
	static uint8_t x131 = 60U;
	int32_t x132 = INT32_MAX;
	int32_t t32 = INT32_MAX;

	t32 = (((x129==x130)&x131)|x132);

	if (t32 != INT32_MAX) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = 0;
	static int32_t x134 = -498247;
	static int8_t x135 = INT8_MIN;
	static uint32_t x136 = 13U;
	volatile uint32_t t33 = 5U;

	t33 = (((x133==x134)&x135)|x136);

	if (t33 != 13U) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x138 = 512363739507808LL;
	uint16_t x139 = 0U;

	t34 = (((x137==x138)&x139)|x140);

	if (t34 != -128) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x141 = 32766750266861398LLU;
	int16_t x142 = INT16_MIN;
	volatile int16_t x143 = INT16_MAX;
	volatile int32_t x144 = INT32_MIN;

	t35 = (((x141==x142)&x143)|x144);

	if (t35 != INT32_MIN) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	int16_t x146 = INT16_MIN;
	int32_t x147 = 112386400;
	uint8_t x148 = UINT8_MAX;
	volatile int32_t t36 = 50533;

	t36 = (((x145==x146)&x147)|x148);

	if (t36 != 255) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = UINT16_MAX;
	volatile int64_t x150 = INT64_MIN;
	int16_t x151 = -210;
	uint64_t x152 = 740486801LLU;
	uint64_t t37 = 780514LLU;

	t37 = (((x149==x150)&x151)|x152);

	if (t37 != 740486801LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = -1;
	volatile uint32_t t38 = 57U;

	t38 = (((x153==x154)&x155)|x156);

	if (t38 != 32767U) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x157 = UINT8_MAX;
	uint32_t x158 = 6U;
	int32_t x159 = -30752;
	int32_t x160 = 20106;
	int32_t t39 = 2950635;

	t39 = (((x157==x158)&x159)|x160);

	if (t39 != 20106) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int32_t x161 = INT32_MIN;
	static int64_t x163 = -1LL;
	static int8_t x164 = INT8_MIN;
	int64_t t40 = -9263722989LL;

	t40 = (((x161==x162)&x163)|x164);

	if (t40 != -128LL) { NG(); } else { ; }
	
}

void f41(void) {
	static volatile int32_t x165 = INT32_MIN;
	static int8_t x166 = INT8_MIN;
	uint64_t x167 = 1330484LLU;
	static uint16_t x168 = 14208U;
	static uint64_t t41 = 2LLU;

	t41 = (((x165==x166)&x167)|x168);

	if (t41 != 14208LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 9013523606LLU;
	uint16_t x171 = 313U;
	uint32_t x172 = 15276U;
	volatile uint32_t t42 = 6298U;

	t42 = (((x169==x170)&x171)|x172);

	if (t42 != 15276U) { NG(); } else { ; }
	
}

void f43(void) {
	static int8_t x173 = INT8_MAX;
	int16_t x175 = -1;
	uint64_t x176 = 129651009080638084LLU;

	t43 = (((x173==x174)&x175)|x176);

	if (t43 != 129651009080638084LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x177 = 4126208912512232022LLU;
	int64_t x178 = INT64_MAX;
	int8_t x179 = -1;
	uint32_t x180 = UINT32_MAX;
	uint32_t t44 = UINT32_MAX;

	t44 = (((x177==x178)&x179)|x180);

	if (t44 != UINT32_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x181 = 60U;
	int64_t x182 = -1LL;
	uint8_t x183 = UINT8_MAX;
	int64_t x184 = -3299LL;
	static volatile int64_t t45 = 17144LL;

	t45 = (((x181==x182)&x183)|x184);

	if (t45 != -3299LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int8_t x186 = INT8_MAX;
	uint64_t x187 = UINT64_MAX;
	uint16_t x188 = 0U;

	t46 = (((x185==x186)&x187)|x188);

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int8_t x189 = -2;
	uint16_t x190 = 5U;
	int8_t x192 = INT8_MIN;

	t47 = (((x189==x190)&x191)|x192);

	if (t47 != -128) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = INT8_MIN;
	volatile int32_t x194 = 1;
	int8_t x195 = INT8_MIN;
	int8_t x196 = INT8_MIN;
	int32_t t48 = -1476;

	t48 = (((x193==x194)&x195)|x196);

	if (t48 != -128) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = -23690302392330271LL;
	int32_t x198 = INT32_MIN;
	int16_t x199 = -957;
	int64_t x200 = INT64_MIN;
	int64_t t49 = INT64_MIN;

	t49 = (((x197==x198)&x199)|x200);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	static uint8_t x201 = 1U;
	int16_t x202 = -1;
	int16_t x203 = -11;
	int8_t x204 = INT8_MAX;
	static int32_t t50 = 1;

	t50 = (((x201==x202)&x203)|x204);

	if (t50 != 127) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 106;
	int8_t x206 = -1;
	uint32_t x207 = 20536U;
	uint16_t x208 = UINT16_MAX;
	uint32_t t51 = 1U;

	t51 = (((x205==x206)&x207)|x208);

	if (t51 != 65535U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x209 = INT16_MIN;
	int8_t x210 = -1;
	int32_t x211 = INT32_MIN;
	volatile uint64_t x212 = 26783684444217LLU;
	uint64_t t52 = 470LLU;

	t52 = (((x209==x210)&x211)|x212);

	if (t52 != 26783684444217LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = INT32_MIN;
	uint16_t x214 = 24U;
	int8_t x215 = -1;
	int16_t x216 = INT16_MIN;
	static int32_t t53 = 46;

	t53 = (((x213==x214)&x215)|x216);

	if (t53 != -32768) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MAX;
	static volatile int16_t x220 = INT16_MIN;
	int32_t t54 = -3400;

	t54 = (((x217==x218)&x219)|x220);

	if (t54 != -32768) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	uint64_t x224 = 583587512LLU;
	uint64_t t55 = 181246057733928493LLU;

	t55 = (((x221==x222)&x223)|x224);

	if (t55 != 583587512LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x225 = INT64_MIN;
	static volatile int32_t x226 = INT32_MIN;

	t56 = (((x225==x226)&x227)|x228);

	if (t56 != 123) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x229 = 152U;
	int16_t x231 = 2;
	static uint32_t x232 = 105723877U;
	uint32_t t57 = 221660U;

	t57 = (((x229==x230)&x231)|x232);

	if (t57 != 105723877U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x234 = -1;
	int16_t x235 = INT16_MIN;
	int32_t t58 = 216941573;

	t58 = (((x233==x234)&x235)|x236);

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = INT64_MIN;
	uint8_t x238 = 1U;
	int16_t x239 = 1;
	int64_t x240 = INT64_MIN;
	static volatile int64_t t59 = INT64_MIN;

	t59 = (((x237==x238)&x239)|x240);

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x241 = -1;
	int16_t x242 = INT16_MIN;
	int8_t x243 = INT8_MAX;
	uint32_t x244 = 1719304U;

	t60 = (((x241==x242)&x243)|x244);

	if (t60 != 1719304U) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x245 = INT16_MIN;
	uint8_t x247 = UINT8_MAX;
	static int8_t x248 = 1;
	volatile int32_t t61 = 128948535;

	t61 = (((x245==x246)&x247)|x248);

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x249 = -29;
	static uint8_t x250 = 1U;
	int64_t x251 = INT64_MAX;

	t62 = (((x249==x250)&x251)|x252);

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x254 = -1;
	uint16_t x255 = UINT16_MAX;
	int32_t t63 = 181351;

	t63 = (((x253==x254)&x255)|x256);

	if (t63 != -3) { NG(); } else { ; }
	
}

void f64(void) {
	static uint64_t x258 = 2LLU;
	int8_t x259 = INT8_MIN;
	volatile uint64_t t64 = UINT64_MAX;

	t64 = (((x257==x258)&x259)|x260);

	if (t64 != UINT64_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x261 = 1;
	int32_t x262 = -3;
	int64_t x264 = -1LL;
	int64_t t65 = -15443042724425168LL;

	t65 = (((x261==x262)&x263)|x264);

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x265 = INT32_MIN;
	int8_t x268 = INT8_MAX;
	int32_t t66 = -453;

	t66 = (((x265==x266)&x267)|x268);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = 7U;
	uint8_t x270 = 3U;
	int8_t x271 = -10;
	static int32_t x272 = INT32_MIN;

	t67 = (((x269==x270)&x271)|x272);

	if (t67 != INT32_MIN) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x273 = INT16_MIN;
	int16_t x274 = INT16_MIN;
	volatile int16_t x275 = INT16_MIN;
	static int64_t t68 = INT64_MIN;

	t68 = (((x273==x274)&x275)|x276);

	if (t68 != INT64_MIN) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x277 = INT8_MIN;
	int32_t x279 = INT32_MIN;
	static uint32_t x280 = UINT32_MAX;
	volatile uint32_t t69 = UINT32_MAX;

	t69 = (((x277==x278)&x279)|x280);

	if (t69 != UINT32_MAX) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t t70 = -8844;

	t70 = (((x281==x282)&x283)|x284);

	if (t70 != 65535) { NG(); } else { ; }
	
}

void f71(void) {
	static uint64_t x285 = 3LLU;
	static int8_t x286 = INT8_MIN;
	uint32_t x288 = 272U;
	volatile uint32_t t71 = 130262U;

	t71 = (((x285==x286)&x287)|x288);

	if (t71 != 272U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = -14710;
	int8_t x290 = 0;
	int64_t t72 = 2687610LL;

	t72 = (((x289==x290)&x291)|x292);

	if (t72 != -2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x294 = 1;
	uint32_t x295 = UINT32_MAX;
	volatile uint32_t t73 = 13236670U;

	t73 = (((x293==x294)&x295)|x296);

	if (t73 != 255U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x297 = 165U;
	uint32_t x299 = 2244335U;
	volatile int32_t x300 = -26234;
	uint32_t t74 = 208U;

	t74 = (((x297==x298)&x299)|x300);

	if (t74 != 4294941062U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x303 = INT32_MIN;
	uint64_t x304 = 30128331892538LLU;
	uint64_t t75 = 0LLU;

	t75 = (((x301==x302)&x303)|x304);

	if (t75 != 30128331892538LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = INT32_MIN;
	static int64_t x306 = INT64_MIN;
	uint32_t x307 = UINT32_MAX;
	static int64_t x308 = 207342337005637146LL;
	int64_t t76 = -6LL;

	t76 = (((x305==x306)&x307)|x308);

	if (t76 != 207342337005637146LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x310 = 502U;
	uint64_t x311 = 1083197059254636085LLU;
	int64_t x312 = -257493478539746991LL;
	static uint64_t t77 = 1068018431256LLU;

	t77 = (((x309==x310)&x311)|x312);

	if (t77 != 18189250595169804625LLU) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int8_t x313 = 26;
	int8_t x314 = INT8_MIN;
	int16_t x315 = -21;

	t78 = (((x313==x314)&x315)|x316);

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	uint32_t x317 = 930528U;
	uint16_t x319 = 295U;
	volatile uint32_t t79 = 387453U;

	t79 = (((x317==x318)&x319)|x320);

	if (t79 != 0U) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x321 = INT16_MIN;
	int64_t x322 = 17LL;
	uint16_t x323 = UINT16_MAX;
	int64_t x324 = INT64_MIN;
	static int64_t t80 = INT64_MIN;

	t80 = (((x321==x322)&x323)|x324);

	if (t80 != INT64_MIN) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x327 = -10345388LL;
	volatile int64_t t81 = 231300061688432459LL;

	t81 = (((x325==x326)&x327)|x328);

	if (t81 != 2686716LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint64_t x329 = 729LLU;
	int32_t x331 = INT32_MIN;
	volatile uint64_t x332 = UINT64_MAX;
	volatile uint64_t t82 = UINT64_MAX;

	t82 = (((x329==x330)&x331)|x332);

	if (t82 != UINT64_MAX) { NG(); } else { ; }
	
}

void f83(void) {
	static uint64_t x333 = UINT64_MAX;
	uint8_t x334 = 0U;
	uint32_t x335 = UINT32_MAX;
	uint32_t x336 = 23790167U;
	volatile uint32_t t83 = 3U;

	t83 = (((x333==x334)&x335)|x336);

	if (t83 != 23790167U) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x340 = -1;
	int32_t t84 = 34157675;

	t84 = (((x337==x338)&x339)|x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x342 = 0LL;
	int16_t x343 = 7790;
	int16_t x344 = -1;

	t85 = (((x341==x342)&x343)|x344);

	if (t85 != -1) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 1U;
	volatile int64_t x346 = -1LL;
	static uint32_t x347 = UINT32_MAX;
	int32_t x348 = INT32_MIN;
	uint32_t t86 = 1123U;

	t86 = (((x345==x346)&x347)|x348);

	if (t86 != 2147483648U) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x350 = -1LL;
	uint16_t x351 = UINT16_MAX;
	uint16_t x352 = 916U;

	t87 = (((x349==x350)&x351)|x352);

	if (t87 != 916) { NG(); } else { ; }
	
}

void f88(void) {
	uint32_t x353 = UINT32_MAX;
	int64_t x355 = 857217380LL;
	uint8_t x356 = 7U;

	t88 = (((x353==x354)&x355)|x356);

	if (t88 != 7LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x357 = INT8_MIN;
	uint8_t x358 = UINT8_MAX;
	uint64_t x359 = 42455LLU;
	static volatile int32_t x360 = -1;
	static volatile uint64_t t89 = UINT64_MAX;

	t89 = (((x357==x358)&x359)|x360);

	if (t89 != UINT64_MAX) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = 1072549LLU;
	static int8_t x364 = INT8_MIN;
	static volatile uint32_t t90 = 10244300U;

	t90 = (((x361==x362)&x363)|x364);

	if (t90 != 4294967168U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x365 = 0U;
	int64_t x366 = INT64_MIN;
	volatile int32_t x367 = INT32_MAX;
	static int16_t x368 = INT16_MAX;
	int32_t t91 = -13681;

	t91 = (((x365==x366)&x367)|x368);

	if (t91 != 32767) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -2466902;
	int16_t x370 = INT16_MIN;
	volatile uint8_t x371 = 0U;

	t92 = (((x369==x370)&x371)|x372);

	if (t92 != 65535) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x373 = -2075;
	uint32_t x374 = 146U;
	volatile int64_t t93 = 6218951603LL;

	t93 = (((x373==x374)&x375)|x376);

	if (t93 != -8038866428136554LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x378 = -4;
	int8_t x379 = -1;
	static volatile int16_t x380 = -120;
	static int32_t t94 = -265644909;

	t94 = (((x377==x378)&x379)|x380);

	if (t94 != -120) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint8_t x381 = 0U;
	int32_t x382 = -1;
	static int64_t x383 = INT64_MIN;
	int32_t x384 = -1;
	int64_t t95 = -1LL;

	t95 = (((x381==x382)&x383)|x384);

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -5;
	uint32_t x386 = UINT32_MAX;
	uint16_t x387 = 5487U;
	int16_t x388 = -3;

	t96 = (((x385==x386)&x387)|x388);

	if (t96 != -3) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x389 = INT16_MIN;
	volatile int8_t x390 = -21;
	uint8_t x391 = UINT8_MAX;
	uint16_t x392 = 1U;
	int32_t t97 = 3;

	t97 = (((x389==x390)&x391)|x392);

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x393 = -1LL;
	volatile int16_t x394 = INT16_MIN;
	uint8_t x395 = 6U;
	int16_t x396 = -1;

	t98 = (((x393==x394)&x395)|x396);

	if (t98 != -1) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	int64_t x399 = -1LL;
	volatile int64_t t99 = -1490334028288249LL;

	t99 = (((x397==x398)&x399)|x400);

	if (t99 != 4294967295LL) { NG(); } else { ; }
	
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

