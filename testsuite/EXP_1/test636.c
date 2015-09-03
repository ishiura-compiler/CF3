#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int64_t x29 = INT64_MIN;
int32_t x34 = INT32_MAX;
int16_t x35 = -300;
int32_t x39 = INT32_MIN;
int32_t t8 = -6874;
int8_t x45 = INT8_MIN;
uint64_t x49 = UINT64_MAX;
uint8_t x50 = UINT8_MAX;
int8_t x53 = INT8_MAX;
int32_t x56 = 23489;
uint16_t x60 = 32171U;
static uint16_t x63 = UINT16_MAX;
static volatile int32_t t15 = 449368;
uint16_t x72 = 13905U;
uint32_t x77 = 580401571U;
int64_t x79 = -1LL;
volatile int64_t x81 = 65787589LL;
int8_t x89 = -13;
int64_t x95 = -1LL;
volatile int16_t x97 = INT16_MIN;
volatile uint16_t x101 = 31U;
static uint8_t x107 = UINT8_MAX;
volatile uint32_t t25 = UINT32_MAX;
int16_t x111 = INT16_MAX;
int64_t x114 = -7953082617361LL;
volatile int32_t t27 = 982;
int16_t x124 = 1;
int32_t x129 = INT32_MIN;
volatile int64_t t31 = -1LL;
uint8_t x143 = UINT8_MAX;
int64_t x144 = 416988554350596048LL;
uint16_t x145 = 9U;
static int8_t x149 = INT8_MAX;
int64_t t36 = 281LL;
int32_t x159 = -1;
int64_t x160 = 160743800LL;
int32_t x172 = INT32_MAX;
volatile int32_t t41 = INT32_MAX;
int32_t x174 = INT32_MIN;
int16_t x177 = -15686;
int32_t x179 = INT32_MIN;
uint64_t x180 = 1096515101474712LLU;
int16_t x182 = INT16_MAX;
volatile uint32_t x185 = UINT32_MAX;
static int32_t x186 = -1;
int8_t x192 = INT8_MAX;
static volatile int32_t t46 = -1;
volatile int8_t x204 = -1;
volatile uint32_t t50 = 101704U;
int8_t x209 = 1;
static int32_t x211 = INT32_MIN;
int64_t x214 = 68138420325378LL;
volatile uint32_t x218 = UINT32_MAX;
int16_t x219 = -1;
static volatile int32_t t53 = 97419070;
static uint16_t x221 = 5824U;
volatile uint8_t x243 = 0U;
static int16_t x248 = -15390;
static volatile int32_t x253 = -1;
static int32_t t62 = -62207854;
int16_t x258 = INT16_MAX;
static uint16_t x260 = 0U;
int32_t t63 = 0;
static uint64_t x288 = UINT64_MAX;
uint64_t t70 = UINT64_MAX;
int32_t x292 = INT32_MIN;
uint16_t x295 = 655U;
int64_t x297 = -1LL;
static uint64_t x299 = 3290LLU;
uint16_t x300 = UINT16_MAX;
uint8_t x301 = 2U;
uint16_t x304 = UINT16_MAX;
volatile uint64_t x307 = UINT64_MAX;
uint8_t x309 = 1U;
static int64_t x310 = -1LL;
uint16_t x315 = 6552U;
volatile int8_t x327 = INT8_MIN;
int64_t x335 = -3050190514761680LL;
int32_t t83 = 753017519;
volatile int32_t t89 = -1703;
uint8_t x367 = 17U;
volatile int64_t x368 = -1LL;
int32_t x374 = INT32_MIN;
static volatile int32_t t92 = 82051;
uint32_t x379 = UINT32_MAX;
int16_t x381 = INT16_MAX;
static int8_t x383 = -30;
static volatile uint8_t x387 = UINT8_MAX;
uint8_t x389 = 1U;
int32_t x391 = -2861538;
static int32_t t96 = 3967;
int8_t x393 = 4;
int32_t t97 = 5162315;
int32_t x399 = 318583448;


void f0(void) {
	int8_t x5 = 61;
	volatile int8_t x6 = -1;
	static uint16_t x7 = 34U;
	int8_t x8 = -45;
	volatile int32_t t0 = 1168779;

	t0 = (((x5/x6)<=x7)|x8);

	if (t0 != -45) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x9 = UINT8_MAX;
	volatile int8_t x10 = INT8_MAX;
	uint32_t x11 = UINT32_MAX;
	volatile uint16_t x12 = 3U;
	int32_t t1 = 160239;

	t1 = (((x9/x10)<=x11)|x12);

	if (t1 != 3) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x13 = 268788LLU;
	int16_t x14 = INT16_MAX;
	static volatile uint8_t x15 = 25U;
	int32_t x16 = INT32_MIN;
	volatile int32_t t2 = 28889247;

	t2 = (((x13/x14)<=x15)|x16);

	if (t2 != -2147483647) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	static int64_t x18 = -3358887115LL;
	uint8_t x19 = 45U;
	int8_t x20 = 62;
	static int32_t t3 = -1;

	t3 = (((x17/x18)<=x19)|x20);

	if (t3 != 63) { NG(); } else { ; }
	
}

void f4(void) {
	uint8_t x21 = 4U;
	int32_t x22 = -27715;
	uint16_t x23 = 6U;
	volatile int16_t x24 = INT16_MIN;
	static int32_t t4 = -1085874;

	t4 = (((x21/x22)<=x23)|x24);

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x25 = INT8_MIN;
	static int32_t x26 = INT32_MAX;
	int16_t x27 = INT16_MIN;
	uint32_t x28 = 34092U;
	volatile uint32_t t5 = 49086044U;

	t5 = (((x25/x26)<=x27)|x28);

	if (t5 != 34092U) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x30 = 195U;
	int8_t x31 = INT8_MIN;
	int8_t x32 = INT8_MAX;
	static int32_t t6 = -14;

	t6 = (((x29/x30)<=x31)|x32);

	if (t6 != 127) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x33 = INT64_MIN;
	volatile int16_t x36 = INT16_MIN;
	volatile int32_t t7 = -942;

	t7 = (((x33/x34)<=x35)|x36);

	if (t7 != -32767) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x37 = 6U;
	int8_t x38 = INT8_MAX;
	int16_t x40 = INT16_MIN;

	t8 = (((x37/x38)<=x39)|x40);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	int8_t x42 = 14;
	uint32_t x43 = 57686993U;
	int16_t x44 = INT16_MIN;
	volatile int32_t t9 = 14;

	t9 = (((x41/x42)<=x43)|x44);

	if (t9 != -32768) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x46 = -2;
	volatile int64_t x47 = -286785738LL;
	uint8_t x48 = UINT8_MAX;
	volatile int32_t t10 = -743469110;

	t10 = (((x45/x46)<=x47)|x48);

	if (t10 != 255) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x51 = INT64_MAX;
	static uint32_t x52 = 1U;
	uint32_t t11 = 82U;

	t11 = (((x49/x50)<=x51)|x52);

	if (t11 != 1U) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x54 = INT8_MIN;
	uint64_t x55 = 163370773478LLU;
	volatile int32_t t12 = -3301;

	t12 = (((x53/x54)<=x55)|x56);

	if (t12 != 23489) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x57 = UINT16_MAX;
	uint8_t x58 = 1U;
	static int32_t x59 = INT32_MAX;
	volatile int32_t t13 = 8144929;

	t13 = (((x57/x58)<=x59)|x60);

	if (t13 != 32171) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int8_t x62 = INT8_MAX;
	uint32_t x64 = 10553U;
	volatile uint32_t t14 = 345U;

	t14 = (((x61/x62)<=x63)|x64);

	if (t14 != 10553U) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x65 = INT64_MIN;
	int64_t x66 = INT64_MIN;
	static int16_t x67 = -28;
	int16_t x68 = INT16_MIN;

	t15 = (((x65/x66)<=x67)|x68);

	if (t15 != -32768) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = INT32_MAX;
	int16_t x70 = -6410;
	int16_t x71 = INT16_MIN;
	volatile int32_t t16 = 1;

	t16 = (((x69/x70)<=x71)|x72);

	if (t16 != 13905) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x73 = UINT32_MAX;
	int32_t x74 = INT32_MIN;
	static volatile int32_t x75 = -400287;
	uint8_t x76 = UINT8_MAX;
	volatile int32_t t17 = 53;

	t17 = (((x73/x74)<=x75)|x76);

	if (t17 != 255) { NG(); } else { ; }
	
}

void f18(void) {
	static uint16_t x78 = 6740U;
	volatile int64_t x80 = 2717938500333866LL;
	volatile int64_t t18 = 347094LL;

	t18 = (((x77/x78)<=x79)|x80);

	if (t18 != 2717938500333866LL) { NG(); } else { ; }
	
}

void f19(void) {
	static uint64_t x82 = 275161529223LLU;
	int32_t x83 = 275859380;
	volatile int32_t x84 = INT32_MIN;
	int32_t t19 = 87697;

	t19 = (((x81/x82)<=x83)|x84);

	if (t19 != -2147483647) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x85 = INT8_MAX;
	volatile int8_t x86 = INT8_MIN;
	volatile int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MAX;
	volatile int32_t t20 = -23;

	t20 = (((x85/x86)<=x87)|x88);

	if (t20 != 32767) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x90 = -1;
	uint32_t x91 = UINT32_MAX;
	int8_t x92 = INT8_MAX;
	static volatile int32_t t21 = -28447;

	t21 = (((x89/x90)<=x91)|x92);

	if (t21 != 127) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x93 = INT64_MIN;
	uint32_t x94 = 280U;
	int32_t x96 = INT32_MAX;
	int32_t t22 = INT32_MAX;

	t22 = (((x93/x94)<=x95)|x96);

	if (t22 != INT32_MAX) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x98 = -1;
	int8_t x99 = INT8_MIN;
	int32_t x100 = INT32_MIN;
	int32_t t23 = INT32_MIN;

	t23 = (((x97/x98)<=x99)|x100);

	if (t23 != INT32_MIN) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x102 = 35131561039869LL;
	int64_t x103 = -186853LL;
	uint16_t x104 = UINT16_MAX;
	static volatile int32_t t24 = 31;

	t24 = (((x101/x102)<=x103)|x104);

	if (t24 != 65535) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x105 = INT8_MIN;
	volatile int32_t x106 = -1;
	uint32_t x108 = UINT32_MAX;

	t25 = (((x105/x106)<=x107)|x108);

	if (t25 != UINT32_MAX) { NG(); } else { ; }
	
}

void f26(void) {
	static int32_t x109 = 323144;
	int64_t x110 = INT64_MAX;
	int8_t x112 = -1;
	volatile int32_t t26 = -152;

	t26 = (((x109/x110)<=x111)|x112);

	if (t26 != -1) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = INT32_MIN;
	uint8_t x115 = UINT8_MAX;
	volatile uint16_t x116 = 1255U;

	t27 = (((x113/x114)<=x115)|x116);

	if (t27 != 1255) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x117 = UINT64_MAX;
	int16_t x118 = INT16_MAX;
	int64_t x119 = INT64_MIN;
	volatile int32_t x120 = 20;
	int32_t t28 = 384;

	t28 = (((x117/x118)<=x119)|x120);

	if (t28 != 21) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = -31;
	volatile int8_t x122 = INT8_MAX;
	uint16_t x123 = 16U;
	volatile int32_t t29 = 1814;

	t29 = (((x121/x122)<=x123)|x124);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x125 = 23011U;
	uint64_t x126 = UINT64_MAX;
	static volatile uint32_t x127 = 24126010U;
	int16_t x128 = INT16_MAX;
	int32_t t30 = 2176;

	t30 = (((x125/x126)<=x127)|x128);

	if (t30 != 32767) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x130 = 417181968772LL;
	int32_t x131 = INT32_MAX;
	int64_t x132 = -1LL;

	t31 = (((x129/x130)<=x131)|x132);

	if (t31 != -1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x133 = UINT8_MAX;
	int8_t x134 = 1;
	int16_t x135 = -705;
	int8_t x136 = 6;
	static volatile int32_t t32 = 11;

	t32 = (((x133/x134)<=x135)|x136);

	if (t32 != 6) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = 1;
	int8_t x138 = -1;
	int8_t x139 = 26;
	uint8_t x140 = 21U;
	volatile int32_t t33 = 16247532;

	t33 = (((x137/x138)<=x139)|x140);

	if (t33 != 21) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x141 = -1LL;
	uint64_t x142 = 25254540620LLU;
	static volatile int64_t t34 = 58986297384LL;

	t34 = (((x141/x142)<=x143)|x144);

	if (t34 != 416988554350596048LL) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x146 = INT64_MIN;
	uint32_t x147 = 3029735U;
	int16_t x148 = INT16_MIN;
	volatile int32_t t35 = -16227775;

	t35 = (((x145/x146)<=x147)|x148);

	if (t35 != -32767) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x150 = -1;
	int32_t x151 = INT32_MAX;
	static int64_t x152 = -48LL;

	t36 = (((x149/x150)<=x151)|x152);

	if (t36 != -47LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x153 = 7U;
	volatile int16_t x154 = INT16_MAX;
	static int64_t x155 = -695043026153801691LL;
	uint8_t x156 = 21U;
	int32_t t37 = 16;

	t37 = (((x153/x154)<=x155)|x156);

	if (t37 != 21) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x157 = INT64_MIN;
	static volatile uint64_t x158 = 79504872802LLU;
	int64_t t38 = -199222011824LL;

	t38 = (((x157/x158)<=x159)|x160);

	if (t38 != 160743801LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x161 = 2732386U;
	volatile int64_t x162 = 2090005942756491LL;
	int32_t x163 = INT32_MAX;
	static volatile uint16_t x164 = 1U;
	volatile int32_t t39 = -6997414;

	t39 = (((x161/x162)<=x163)|x164);

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x165 = -1;
	int8_t x166 = INT8_MAX;
	int64_t x167 = -1LL;
	int8_t x168 = -29;
	int32_t t40 = 541851;

	t40 = (((x165/x166)<=x167)|x168);

	if (t40 != -29) { NG(); } else { ; }
	
}

void f41(void) {
	static uint16_t x169 = 3U;
	int64_t x170 = -1LL;
	int64_t x171 = -1024350847411585LL;

	t41 = (((x169/x170)<=x171)|x172);

	if (t41 != INT32_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	uint16_t x173 = UINT16_MAX;
	uint16_t x175 = 503U;
	static uint8_t x176 = UINT8_MAX;
	volatile int32_t t42 = -14;

	t42 = (((x173/x174)<=x175)|x176);

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x178 = INT8_MAX;
	uint64_t t43 = 32064LLU;

	t43 = (((x177/x178)<=x179)|x180);

	if (t43 != 1096515101474712LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x181 = -1LL;
	int16_t x183 = INT16_MIN;
	int32_t x184 = -1;
	static volatile int32_t t44 = 483;

	t44 = (((x181/x182)<=x183)|x184);

	if (t44 != -1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x187 = 1;
	uint32_t x188 = 500487355U;
	uint32_t t45 = 0U;

	t45 = (((x185/x186)<=x187)|x188);

	if (t45 != 500487355U) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MAX;
	uint16_t x190 = 15U;
	uint64_t x191 = UINT64_MAX;

	t46 = (((x189/x190)<=x191)|x192);

	if (t46 != 127) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = -1;
	int8_t x194 = INT8_MIN;
	int32_t x195 = INT32_MIN;
	uint8_t x196 = 17U;
	static int32_t t47 = 393;

	t47 = (((x193/x194)<=x195)|x196);

	if (t47 != 17) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x198 = INT8_MIN;
	int32_t x199 = INT32_MAX;
	int32_t x200 = -1;
	int32_t t48 = 19;

	t48 = (((x197/x198)<=x199)|x200);

	if (t48 != -1) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x201 = 16U;
	int16_t x202 = INT16_MIN;
	volatile uint8_t x203 = 86U;
	volatile int32_t t49 = -11543648;

	t49 = (((x201/x202)<=x203)|x204);

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x205 = INT16_MAX;
	int8_t x206 = INT8_MIN;
	int64_t x207 = INT64_MIN;
	uint32_t x208 = 15656081U;

	t50 = (((x205/x206)<=x207)|x208);

	if (t50 != 15656081U) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x210 = INT64_MIN;
	int32_t x212 = -1811554;
	volatile int32_t t51 = -1;

	t51 = (((x209/x210)<=x211)|x212);

	if (t51 != -1811554) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = INT32_MIN;
	volatile int16_t x215 = 4703;
	static int32_t x216 = INT32_MIN;
	volatile int32_t t52 = 445244;

	t52 = (((x213/x214)<=x215)|x216);

	if (t52 != -2147483647) { NG(); } else { ; }
	
}

void f53(void) {
	static uint32_t x217 = UINT32_MAX;
	uint8_t x220 = 109U;

	t53 = (((x217/x218)<=x219)|x220);

	if (t53 != 109) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x222 = INT16_MIN;
	int8_t x223 = -1;
	int64_t x224 = INT64_MAX;
	volatile int64_t t54 = INT64_MAX;

	t54 = (((x221/x222)<=x223)|x224);

	if (t54 != INT64_MAX) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x225 = 5;
	volatile int32_t x226 = INT32_MIN;
	int64_t x227 = INT64_MAX;
	uint64_t x228 = 10610975058LLU;
	volatile uint64_t t55 = 12414512LLU;

	t55 = (((x225/x226)<=x227)|x228);

	if (t55 != 10610975059LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x229 = UINT16_MAX;
	uint64_t x230 = UINT64_MAX;
	uint32_t x231 = 18U;
	uint8_t x232 = 39U;
	int32_t t56 = -46443147;

	t56 = (((x229/x230)<=x231)|x232);

	if (t56 != 39) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x233 = INT16_MIN;
	int64_t x234 = -635LL;
	static uint32_t x235 = 28815U;
	int64_t x236 = -1LL;
	static volatile int64_t t57 = 510058507523693748LL;

	t57 = (((x233/x234)<=x235)|x236);

	if (t57 != -1LL) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x237 = 1;
	int64_t x238 = INT64_MIN;
	int16_t x239 = 0;
	static int16_t x240 = -1;
	volatile int32_t t58 = 20311;

	t58 = (((x237/x238)<=x239)|x240);

	if (t58 != -1) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x241 = INT8_MIN;
	int16_t x242 = -1;
	uint8_t x244 = UINT8_MAX;
	volatile int32_t t59 = 64293758;

	t59 = (((x241/x242)<=x243)|x244);

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x245 = 101266770LLU;
	static volatile int8_t x246 = INT8_MIN;
	int32_t x247 = 1367;
	volatile int32_t t60 = 13197842;

	t60 = (((x245/x246)<=x247)|x248);

	if (t60 != -15389) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x249 = -1;
	int16_t x250 = INT16_MAX;
	static uint8_t x251 = 2U;
	int16_t x252 = -8;
	volatile int32_t t61 = 17573;

	t61 = (((x249/x250)<=x251)|x252);

	if (t61 != -7) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint8_t x254 = UINT8_MAX;
	int64_t x255 = -214001LL;
	int8_t x256 = -1;

	t62 = (((x253/x254)<=x255)|x256);

	if (t62 != -1) { NG(); } else { ; }
	
}

void f63(void) {
	static uint8_t x257 = UINT8_MAX;
	static int16_t x259 = INT16_MAX;

	t63 = (((x257/x258)<=x259)|x260);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = 1LL;
	static uint8_t x262 = 44U;
	volatile int64_t x263 = INT64_MIN;
	static volatile int16_t x264 = -1;
	int32_t t64 = 4073;

	t64 = (((x261/x262)<=x263)|x264);

	if (t64 != -1) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x265 = INT64_MAX;
	static uint32_t x266 = UINT32_MAX;
	int32_t x267 = -1;
	volatile int32_t x268 = INT32_MIN;
	volatile int32_t t65 = INT32_MIN;

	t65 = (((x265/x266)<=x267)|x268);

	if (t65 != INT32_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x269 = 135670107U;
	int16_t x270 = -6;
	uint8_t x271 = 1U;
	static int8_t x272 = -1;
	volatile int32_t t66 = -110876;

	t66 = (((x269/x270)<=x271)|x272);

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint32_t x273 = 18U;
	static int64_t x274 = -10363002456LL;
	int64_t x275 = INT64_MAX;
	int32_t x276 = INT32_MIN;
	volatile int32_t t67 = -10107871;

	t67 = (((x273/x274)<=x275)|x276);

	if (t67 != -2147483647) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x277 = -1;
	static int8_t x278 = INT8_MAX;
	static uint64_t x279 = UINT64_MAX;
	volatile int32_t x280 = INT32_MAX;
	volatile int32_t t68 = INT32_MAX;

	t68 = (((x277/x278)<=x279)|x280);

	if (t68 != INT32_MAX) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint64_t x281 = 6368549LLU;
	int16_t x282 = -14940;
	uint8_t x283 = 6U;
	volatile int8_t x284 = -1;
	volatile int32_t t69 = -6;

	t69 = (((x281/x282)<=x283)|x284);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x285 = INT64_MIN;
	uint32_t x286 = UINT32_MAX;
	int32_t x287 = INT32_MIN;

	t70 = (((x285/x286)<=x287)|x288);

	if (t70 != UINT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x289 = INT32_MAX;
	uint64_t x290 = 31726027941LLU;
	int32_t x291 = INT32_MAX;
	volatile int32_t t71 = -10173320;

	t71 = (((x289/x290)<=x291)|x292);

	if (t71 != -2147483647) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x293 = -1;
	int16_t x294 = INT16_MAX;
	uint32_t x296 = UINT32_MAX;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (((x293/x294)<=x295)|x296);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x298 = INT64_MIN;
	int32_t t73 = 299;

	t73 = (((x297/x298)<=x299)|x300);

	if (t73 != 65535) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x302 = -147;
	uint16_t x303 = UINT16_MAX;
	int32_t t74 = 333;

	t74 = (((x301/x302)<=x303)|x304);

	if (t74 != 65535) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x305 = INT8_MIN;
	int64_t x306 = INT64_MAX;
	volatile uint8_t x308 = 15U;
	int32_t t75 = -5;

	t75 = (((x305/x306)<=x307)|x308);

	if (t75 != 15) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x311 = INT8_MAX;
	volatile int64_t x312 = INT64_MIN;
	volatile int64_t t76 = 1628326988LL;

	t76 = (((x309/x310)<=x311)|x312);

	if (t76 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x313 = INT16_MAX;
	int32_t x314 = -1;
	int32_t x316 = INT32_MIN;
	int32_t t77 = 1793;

	t77 = (((x313/x314)<=x315)|x316);

	if (t77 != -2147483647) { NG(); } else { ; }
	
}

void f78(void) {
	static uint32_t x317 = UINT32_MAX;
	uint8_t x318 = 9U;
	int16_t x319 = INT16_MIN;
	volatile int32_t x320 = INT32_MIN;
	static int32_t t78 = -53016946;

	t78 = (((x317/x318)<=x319)|x320);

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = INT8_MIN;
	uint64_t x322 = UINT64_MAX;
	int8_t x323 = INT8_MAX;
	int16_t x324 = INT16_MIN;
	volatile int32_t t79 = -23596;

	t79 = (((x321/x322)<=x323)|x324);

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x325 = INT32_MAX;
	static uint64_t x326 = 6737958176997726759LLU;
	volatile uint16_t x328 = UINT16_MAX;
	int32_t t80 = -1795080;

	t80 = (((x325/x326)<=x327)|x328);

	if (t80 != 65535) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x329 = -32;
	int32_t x330 = INT32_MAX;
	volatile int64_t x331 = INT64_MIN;
	uint64_t x332 = 759LLU;
	uint64_t t81 = 273814LLU;

	t81 = (((x329/x330)<=x331)|x332);

	if (t81 != 759LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = 5252;
	volatile uint32_t x334 = 21U;
	int32_t x336 = 74087496;
	volatile int32_t t82 = -84;

	t82 = (((x333/x334)<=x335)|x336);

	if (t82 != 74087496) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = INT32_MIN;
	uint32_t x338 = 209421309U;
	uint64_t x339 = 1862210091153LLU;
	volatile int8_t x340 = 4;

	t83 = (((x337/x338)<=x339)|x340);

	if (t83 != 5) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x341 = INT32_MAX;
	int64_t x342 = 47132087LL;
	uint16_t x343 = 3135U;
	static int16_t x344 = INT16_MAX;
	int32_t t84 = 81839;

	t84 = (((x341/x342)<=x343)|x344);

	if (t84 != 32767) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x345 = INT64_MAX;
	int64_t x346 = -1LL;
	static uint64_t x347 = 1049031223245LLU;
	int16_t x348 = INT16_MAX;
	volatile int32_t t85 = -1;

	t85 = (((x345/x346)<=x347)|x348);

	if (t85 != 32767) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = -553;
	uint32_t x350 = UINT32_MAX;
	int16_t x351 = 13432;
	uint16_t x352 = 0U;
	static int32_t t86 = -26;

	t86 = (((x349/x350)<=x351)|x352);

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = -1LL;
	uint16_t x355 = 14U;
	uint32_t x356 = 61210058U;
	volatile uint32_t t87 = 130484U;

	t87 = (((x353/x354)<=x355)|x356);

	if (t87 != 61210058U) { NG(); } else { ; }
	
}

void f88(void) {
	static int64_t x357 = -1LL;
	uint16_t x358 = 25910U;
	int64_t x359 = INT64_MIN;
	int64_t x360 = -1LL;
	static int64_t t88 = -1158714556262LL;

	t88 = (((x357/x358)<=x359)|x360);

	if (t88 != -1LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int8_t x361 = -3;
	volatile uint16_t x362 = UINT16_MAX;
	volatile uint32_t x363 = 222U;
	static volatile int16_t x364 = INT16_MIN;

	t89 = (((x361/x362)<=x363)|x364);

	if (t89 != -32767) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x365 = UINT16_MAX;
	static int64_t x366 = INT64_MIN;
	int64_t t90 = -17947230900LL;

	t90 = (((x365/x366)<=x367)|x368);

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x369 = 2U;
	uint16_t x370 = 17874U;
	int64_t x371 = INT64_MIN;
	uint32_t x372 = 8827U;
	uint32_t t91 = 1153U;

	t91 = (((x369/x370)<=x371)|x372);

	if (t91 != 8827U) { NG(); } else { ; }
	
}

void f92(void) {
	static int8_t x373 = INT8_MAX;
	static volatile int8_t x375 = 3;
	uint16_t x376 = 2895U;

	t92 = (((x373/x374)<=x375)|x376);

	if (t92 != 2895) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x377 = 524635297043830LL;
	int16_t x378 = 20;
	int16_t x380 = -31;
	volatile int32_t t93 = -204943748;

	t93 = (((x377/x378)<=x379)|x380);

	if (t93 != -31) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x382 = -3811;
	static int16_t x384 = 0;
	volatile int32_t t94 = -73712;

	t94 = (((x381/x382)<=x383)|x384);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = INT64_MAX;
	uint64_t x386 = 16214LLU;
	volatile uint8_t x388 = 112U;
	volatile int32_t t95 = 38;

	t95 = (((x385/x386)<=x387)|x388);

	if (t95 != 112) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x390 = 7803099U;
	uint8_t x392 = 5U;

	t96 = (((x389/x390)<=x391)|x392);

	if (t96 != 5) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x394 = 70LL;
	int16_t x395 = 56;
	uint16_t x396 = 14U;

	t97 = (((x393/x394)<=x395)|x396);

	if (t97 != 15) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x397 = INT8_MAX;
	int32_t x398 = INT32_MIN;
	static int64_t x400 = INT64_MAX;
	volatile int64_t t98 = INT64_MAX;

	t98 = (((x397/x398)<=x399)|x400);

	if (t98 != INT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x401 = INT16_MAX;
	int16_t x402 = INT16_MIN;
	int64_t x403 = 211710369021650LL;
	static volatile uint16_t x404 = UINT16_MAX;
	int32_t t99 = -89087925;

	t99 = (((x401/x402)<=x403)|x404);

	if (t99 != 65535) { NG(); } else { ; }
	
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

