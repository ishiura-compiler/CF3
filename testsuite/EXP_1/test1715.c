#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int16_t x7 = 3;
static uint64_t x10 = 4596424773439206333LLU;
uint8_t x13 = 4U;
int64_t x15 = INT64_MAX;
volatile int64_t t3 = 283096702LL;
volatile uint16_t x19 = 3063U;
int32_t x20 = INT32_MIN;
volatile uint64_t t6 = 1048869449LLU;
uint8_t x35 = UINT8_MAX;
int32_t t8 = 104550;
static volatile uint32_t t9 = 59837U;
static int32_t x43 = 32525283;
int64_t t10 = -1008248723420LL;
int16_t x49 = INT16_MIN;
int32_t x51 = 0;
int16_t x56 = INT16_MAX;
int8_t x64 = INT8_MIN;
int64_t t14 = -98371524555LL;
volatile int32_t t15 = 3;
volatile int64_t x78 = INT64_MAX;
static volatile int64_t t18 = 182091172131436660LL;
uint16_t x81 = 23U;
volatile uint64_t x83 = UINT64_MAX;
static int8_t x92 = 20;
uint64_t t21 = 96915065LLU;
volatile int64_t t23 = -24564LL;
static int8_t x105 = -1;
uint16_t x108 = 26U;
static uint32_t t25 = 24235678U;
static int8_t x110 = 20;
static uint8_t x111 = 112U;
static uint16_t x113 = UINT16_MAX;
int64_t x116 = INT64_MAX;
volatile uint64_t t27 = UINT64_MAX;
volatile uint16_t x118 = UINT16_MAX;
volatile uint64_t x119 = UINT64_MAX;
uint16_t x122 = 1168U;
static int32_t x126 = INT32_MIN;
int32_t x128 = INT32_MIN;
static uint16_t x132 = UINT16_MAX;
static int64_t x143 = -1231933920022241133LL;
uint16_t x145 = 15166U;
int32_t x150 = 74;
uint16_t x152 = UINT16_MAX;
int8_t x155 = INT8_MIN;
static volatile int32_t t38 = 0;
int16_t x164 = -1;
int32_t t39 = -305455;
int64_t x167 = -54088096LL;
static int64_t x170 = -6989LL;
volatile int64_t t41 = 862158649212817LL;
int8_t x174 = -2;
int8_t x175 = -22;
int64_t x179 = INT64_MAX;
uint8_t x187 = 3U;
volatile uint32_t x195 = UINT32_MAX;
uint8_t x196 = UINT8_MAX;
static volatile uint32_t t47 = 1849U;
int32_t x199 = INT32_MAX;
int16_t x202 = -13;
int64_t t49 = INT64_MAX;
int32_t x205 = -28568;
uint16_t x208 = 14680U;
static volatile uint32_t x212 = 50043U;
uint64_t t51 = 1854644802262LLU;
int32_t x225 = INT32_MIN;
static volatile int32_t x250 = 6;
uint64_t x252 = 656654309747263LLU;
static int64_t x255 = INT64_MIN;
volatile int64_t t58 = 29512984544159LL;
int16_t x258 = -1;
static uint16_t x262 = 511U;
int8_t x266 = INT8_MAX;
static volatile uint32_t x268 = 266386958U;
uint16_t x269 = 0U;
static int64_t x270 = INT64_MIN;
int64_t t62 = INT64_MAX;
int32_t x277 = INT32_MIN;
int8_t x284 = INT8_MAX;
volatile int32_t t65 = -197079682;
volatile uint64_t x287 = 48625286546384LLU;
uint32_t x292 = 23988912U;
uint64_t x297 = 5LLU;
static int32_t x299 = 0;
uint32_t x305 = UINT32_MAX;
volatile int64_t t71 = -32168LL;
int16_t x315 = INT16_MAX;
int64_t x320 = INT64_MAX;
uint32_t x324 = 134011392U;
static int16_t x326 = 0;
static volatile int32_t t76 = 6333288;
int8_t x339 = INT8_MAX;
int32_t t78 = 46821;
uint16_t x345 = 65U;
uint64_t x347 = UINT64_MAX;
int32_t x354 = INT32_MIN;
int32_t x357 = -11177;
int16_t x358 = -1;
uint16_t x359 = UINT16_MAX;
uint16_t x363 = UINT16_MAX;
int8_t x367 = -1;
int32_t x373 = -1;
volatile int32_t x376 = -1;
static int8_t x377 = 1;
int16_t x381 = INT16_MIN;
int32_t x386 = -22;
static int16_t x388 = INT16_MIN;
static uint64_t x391 = UINT64_MAX;
volatile int16_t x396 = 13022;
int32_t x397 = INT32_MIN;
int32_t x399 = -2;
int64_t t93 = -12322583LL;
uint32_t t96 = 148U;
uint64_t t97 = 1432LLU;
volatile int64_t x417 = -1027229038892790LL;
static uint32_t x419 = 16722219U;
uint8_t x420 = 11U;
uint32_t x421 = 1673627845U;
uint32_t x422 = UINT32_MAX;


void f0(void) {
	int16_t x1 = -1;
	uint16_t x2 = 492U;
	int8_t x3 = INT8_MAX;
	int8_t x4 = 51;
	static volatile int32_t t0 = -377067;

	t0 = (((x1&x2)-x3)|x4);

	if (t0 != 383) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x5 = 6561284U;
	uint16_t x6 = 1968U;
	int64_t x8 = -1LL;
	static volatile int64_t t1 = -2648346LL;

	t1 = (((x5&x6)-x7)|x8);

	if (t1 != -1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int32_t x9 = -1;
	int64_t x11 = INT64_MAX;
	static int8_t x12 = INT8_MIN;
	static volatile uint64_t t2 = 88193655026LLU;

	t2 = (((x9&x10)-x11)|x12);

	if (t2 != 18446744073709551550LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	uint16_t x16 = 1U;

	t3 = (((x13&x14)-x15)|x16);

	if (t3 != -9223372036854775803LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint64_t x17 = 324LLU;
	uint16_t x18 = UINT16_MAX;
	volatile uint64_t t4 = 171372483194LLU;

	t4 = (((x17&x18)-x19)|x20);

	if (t4 != 18446744073709548877LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = -1;
	uint8_t x22 = 12U;
	static uint16_t x23 = 44U;
	uint32_t x24 = 32613098U;
	volatile uint32_t t5 = 1U;

	t5 = (((x21&x22)-x23)|x24);

	if (t5 != 4294967274U) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x25 = 35LLU;
	static int64_t x26 = -123970LL;
	uint64_t x27 = 0LLU;
	uint64_t x28 = 5LLU;

	t6 = (((x25&x26)-x27)|x28);

	if (t6 != 39LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x29 = 80U;
	int32_t x30 = -12638;
	static int32_t x31 = INT32_MAX;
	int8_t x32 = -1;
	volatile int32_t t7 = 7335;

	t7 = (((x29&x30)-x31)|x32);

	if (t7 != -1) { NG(); } else { ; }
	
}

void f8(void) {
	static uint16_t x33 = 9472U;
	volatile int8_t x34 = INT8_MIN;
	static uint16_t x36 = 937U;

	t8 = (((x33&x34)-x35)|x36);

	if (t8 != 10153) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = INT8_MIN;
	uint16_t x38 = 42U;
	static int16_t x39 = 3623;
	static uint32_t x40 = 3598166U;

	t9 = (((x37&x38)-x39)|x40);

	if (t9 != 4294965215U) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = 7;
	int64_t x42 = INT64_MAX;
	volatile uint32_t x44 = UINT32_MAX;

	t10 = (((x41&x42)-x43)|x44);

	if (t10 != -1LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x50 = INT64_MIN;
	volatile uint32_t x52 = 32U;
	int64_t t11 = 195522173LL;

	t11 = (((x49&x50)-x51)|x52);

	if (t11 != -9223372036854775776LL) { NG(); } else { ; }
	
}

void f12(void) {
	static uint16_t x53 = 1291U;
	int64_t x54 = INT64_MIN;
	volatile int32_t x55 = 726502874;
	static int64_t t12 = 58571182815070LL;

	t12 = (((x53&x54)-x55)|x56);

	if (t12 != -726499329LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint16_t x57 = UINT16_MAX;
	uint16_t x58 = UINT16_MAX;
	uint64_t x59 = 1630053281080LLU;
	uint8_t x60 = 16U;
	volatile uint64_t t13 = 13399433207091742LLU;

	t13 = (((x57&x58)-x59)|x60);

	if (t13 != 18446742443656336087LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = -8453740346LL;
	int32_t x62 = INT32_MAX;
	int16_t x63 = -2995;

	t14 = (((x61&x62)-x63)|x64);

	if (t14 != -7LL) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x65 = -1;
	static int8_t x66 = INT8_MAX;
	volatile uint16_t x67 = UINT16_MAX;
	int32_t x68 = INT32_MAX;

	t15 = (((x65&x66)-x67)|x68);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static int32_t x69 = INT32_MAX;
	static int64_t x70 = INT64_MIN;
	volatile int8_t x71 = INT8_MAX;
	static int32_t x72 = -8114907;
	volatile int64_t t16 = -3LL;

	t16 = (((x69&x70)-x71)|x72);

	if (t16 != -91LL) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x73 = 576610393;
	uint8_t x74 = 2U;
	uint32_t x75 = 189409176U;
	int32_t x76 = -566;
	volatile uint32_t t17 = 30008750U;

	t17 = (((x73&x74)-x75)|x76);

	if (t17 != 4294966762U) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x77 = -591LL;
	int8_t x79 = INT8_MIN;
	static volatile uint8_t x80 = 4U;

	t18 = (((x77&x78)-x79)|x80);

	if (t18 != 9223372036854775349LL) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x82 = 2;
	int32_t x84 = -1;
	volatile uint64_t t19 = UINT64_MAX;

	t19 = (((x81&x82)-x83)|x84);

	if (t19 != UINT64_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x85 = 16961208224541250LLU;
	int16_t x86 = INT16_MIN;
	int32_t x87 = INT32_MAX;
	int8_t x88 = 0;
	static uint64_t t20 = 92393044832LLU;

	t20 = (((x85&x86)-x87)|x88);

	if (t20 != 16961206077030401LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x89 = 64LLU;
	static volatile int32_t x90 = INT32_MAX;
	uint32_t x91 = UINT32_MAX;

	t21 = (((x89&x90)-x91)|x92);

	if (t21 != 18446744069414584405LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x93 = INT8_MIN;
	uint8_t x94 = 1U;
	volatile int16_t x95 = INT16_MIN;
	uint64_t x96 = 3363888594343LLU;
	volatile uint64_t t22 = 7456LLU;

	t22 = (((x93&x94)-x95)|x96);

	if (t22 != 3363888627111LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x97 = -1LL;
	volatile int64_t x98 = INT64_MIN;
	static int64_t x99 = -19LL;
	int16_t x100 = 67;

	t23 = (((x97&x98)-x99)|x100);

	if (t23 != -9223372036854775725LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x101 = INT64_MIN;
	uint16_t x102 = UINT16_MAX;
	uint8_t x103 = UINT8_MAX;
	static int32_t x104 = 7;
	int64_t t24 = -719LL;

	t24 = (((x101&x102)-x103)|x104);

	if (t24 != -249LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x106 = 34314981U;
	int8_t x107 = 6;

	t25 = (((x105&x106)-x107)|x108);

	if (t25 != 34314975U) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x109 = INT32_MIN;
	static volatile int8_t x112 = 6;
	int32_t t26 = 48299141;

	t26 = (((x109&x110)-x111)|x112);

	if (t26 != -106) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x114 = 1940963097697532723LLU;
	uint32_t x115 = UINT32_MAX;

	t27 = (((x113&x114)-x115)|x116);

	if (t27 != UINT64_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x117 = 0U;
	int16_t x120 = -1;
	volatile uint64_t t28 = UINT64_MAX;

	t28 = (((x117&x118)-x119)|x120);

	if (t28 != UINT64_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x121 = 32268667787689LL;
	static volatile uint8_t x123 = 4U;
	int16_t x124 = INT16_MIN;
	volatile int64_t t29 = -113609569LL;

	t29 = (((x121&x122)-x123)|x124);

	if (t29 != -32644LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = -1;
	uint32_t x127 = 1136U;
	uint32_t t30 = 55U;

	t30 = (((x125&x126)-x127)|x128);

	if (t30 != 4294966160U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x129 = INT16_MAX;
	int64_t x130 = -1LL;
	int8_t x131 = -1;
	static volatile int64_t t31 = -916497LL;

	t31 = (((x129&x130)-x131)|x132);

	if (t31 != 65535LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x133 = -1;
	int16_t x134 = 0;
	static uint32_t x135 = 382478744U;
	int64_t x136 = -1LL;
	int64_t t32 = 544LL;

	t32 = (((x133&x134)-x135)|x136);

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x137 = INT64_MAX;
	int32_t x138 = 106137;
	uint16_t x139 = 102U;
	volatile int16_t x140 = -770;
	int64_t t33 = 185568LL;

	t33 = (((x137&x138)-x139)|x140);

	if (t33 != -257LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x141 = -1;
	volatile int8_t x142 = INT8_MIN;
	volatile uint16_t x144 = 1U;
	int64_t t34 = -402955202737601LL;

	t34 = (((x141&x142)-x143)|x144);

	if (t34 != 1231933920022241005LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x146 = INT64_MIN;
	int8_t x147 = 7;
	uint8_t x148 = UINT8_MAX;
	int64_t t35 = 5LL;

	t35 = (((x145&x146)-x147)|x148);

	if (t35 != -1LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x149 = INT64_MIN;
	int32_t x151 = INT32_MIN;
	int64_t t36 = -1775621LL;

	t36 = (((x149&x150)-x151)|x152);

	if (t36 != 2147549183LL) { NG(); } else { ; }
	
}

void f37(void) {
	static int64_t x153 = 470856LL;
	int32_t x154 = INT32_MIN;
	uint32_t x156 = 1U;
	volatile int64_t t37 = 6520LL;

	t37 = (((x153&x154)-x155)|x156);

	if (t37 != 129LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x157 = -1;
	static volatile uint8_t x158 = UINT8_MAX;
	uint8_t x159 = 53U;
	static int8_t x160 = INT8_MIN;

	t38 = (((x157&x158)-x159)|x160);

	if (t38 != -54) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x161 = INT16_MAX;
	int8_t x162 = -1;
	static int8_t x163 = INT8_MIN;

	t39 = (((x161&x162)-x163)|x164);

	if (t39 != -1) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x165 = -1LL;
	volatile uint16_t x166 = UINT16_MAX;
	int32_t x168 = INT32_MIN;
	int64_t t40 = -162484LL;

	t40 = (((x165&x166)-x167)|x168);

	if (t40 != -2093330017LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x169 = 47U;
	int8_t x171 = INT8_MIN;
	uint8_t x172 = 0U;

	t41 = (((x169&x170)-x171)|x172);

	if (t41 != 163LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint32_t x173 = 170340347U;
	uint32_t x176 = UINT32_MAX;
	uint32_t t42 = UINT32_MAX;

	t42 = (((x173&x174)-x175)|x176);

	if (t42 != UINT32_MAX) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x177 = UINT32_MAX;
	int32_t x178 = INT32_MIN;
	int32_t x180 = INT32_MIN;
	static volatile int64_t t43 = -972330LL;

	t43 = (((x177&x178)-x179)|x180);

	if (t43 != -2147483647LL) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x181 = INT16_MIN;
	uint16_t x182 = UINT16_MAX;
	int8_t x183 = 0;
	int64_t x184 = INT64_MAX;
	volatile int64_t t44 = INT64_MAX;

	t44 = (((x181&x182)-x183)|x184);

	if (t44 != INT64_MAX) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x185 = 5073048859985LL;
	int64_t x186 = -1LL;
	int64_t x188 = INT64_MIN;
	volatile int64_t t45 = -284LL;

	t45 = (((x185&x186)-x187)|x188);

	if (t45 != -9223366963805915826LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MAX;
	uint8_t x190 = UINT8_MAX;
	static int64_t x191 = -1LL;
	static uint16_t x192 = UINT16_MAX;
	int64_t t46 = -336LL;

	t46 = (((x189&x190)-x191)|x192);

	if (t46 != 65535LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile uint16_t x193 = 0U;
	volatile uint16_t x194 = 1371U;

	t47 = (((x193&x194)-x195)|x196);

	if (t47 != 255U) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x197 = INT32_MIN;
	volatile uint8_t x198 = 47U;
	int32_t x200 = INT32_MIN;
	volatile int32_t t48 = -618587945;

	t48 = (((x197&x198)-x199)|x200);

	if (t48 != -2147483647) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x201 = 0U;
	int8_t x203 = 0;
	int64_t x204 = INT64_MAX;

	t49 = (((x201&x202)-x203)|x204);

	if (t49 != INT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x206 = INT8_MIN;
	volatile int16_t x207 = -1;
	int32_t t50 = 16;

	t50 = (((x205&x206)-x207)|x208);

	if (t50 != -18087) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int64_t x209 = -15100598339825LL;
	volatile uint64_t x210 = 4LLU;
	int8_t x211 = -1;

	t51 = (((x209&x210)-x211)|x212);

	if (t51 != 50047LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = -1;
	static int64_t x214 = INT64_MIN;
	int8_t x215 = INT8_MIN;
	volatile int16_t x216 = -1;
	int64_t t52 = 1521409672308445090LL;

	t52 = (((x213&x214)-x215)|x216);

	if (t52 != -1LL) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x217 = -3;
	int8_t x218 = INT8_MAX;
	static int8_t x219 = 30;
	volatile uint32_t x220 = UINT32_MAX;
	uint32_t t53 = UINT32_MAX;

	t53 = (((x217&x218)-x219)|x220);

	if (t53 != UINT32_MAX) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint32_t x226 = 7726396U;
	int16_t x227 = -1;
	int8_t x228 = -9;
	static uint32_t t54 = 4U;

	t54 = (((x225&x226)-x227)|x228);

	if (t54 != 4294967287U) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x229 = 59498LL;
	uint64_t x230 = UINT64_MAX;
	static int64_t x231 = -1LL;
	static volatile int16_t x232 = INT16_MIN;
	volatile uint64_t t55 = 9994556273928845LLU;

	t55 = (((x229&x230)-x231)|x232);

	if (t55 != 18446744073709545579LLU) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x233 = 1701U;
	int8_t x234 = INT8_MIN;
	static int8_t x235 = 59;
	int8_t x236 = -1;
	int32_t t56 = 15693761;

	t56 = (((x233&x234)-x235)|x236);

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	uint16_t x249 = UINT16_MAX;
	uint32_t x251 = UINT32_MAX;
	volatile uint64_t t57 = 23LLU;

	t57 = (((x249&x250)-x251)|x252);

	if (t57 != 656654309747263LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x253 = -210;
	int32_t x254 = -1;
	int16_t x256 = -1;

	t58 = (((x253&x254)-x255)|x256);

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x257 = INT64_MAX;
	uint8_t x259 = 1U;
	uint16_t x260 = UINT16_MAX;
	volatile int64_t t59 = INT64_MAX;

	t59 = (((x257&x258)-x259)|x260);

	if (t59 != INT64_MAX) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x261 = -197476664;
	int64_t x263 = -418251457699350LL;
	volatile int8_t x264 = INT8_MAX;
	int64_t t60 = -137009879338348LL;

	t60 = (((x261&x262)-x263)|x264);

	if (t60 != 418251457699583LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x265 = INT16_MIN;
	uint16_t x267 = 2482U;
	volatile uint32_t t61 = 4372540U;

	t61 = (((x265&x266)-x267)|x268);

	if (t61 != 4294966862U) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x271 = -1;
	int64_t x272 = INT64_MAX;

	t62 = (((x269&x270)-x271)|x272);

	if (t62 != INT64_MAX) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x273 = INT32_MIN;
	static uint32_t x274 = UINT32_MAX;
	volatile uint16_t x275 = 75U;
	int8_t x276 = -3;
	uint32_t t63 = 103320232U;

	t63 = (((x273&x274)-x275)|x276);

	if (t63 != 4294967293U) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x278 = UINT32_MAX;
	int16_t x279 = -3;
	uint8_t x280 = 3U;
	uint32_t t64 = 3U;

	t64 = (((x277&x278)-x279)|x280);

	if (t64 != 2147483651U) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x281 = 2U;
	int16_t x282 = -11660;
	int8_t x283 = INT8_MIN;

	t65 = (((x281&x282)-x283)|x284);

	if (t65 != 255) { NG(); } else { ; }
	
}

void f66(void) {
	static uint16_t x285 = 1U;
	int8_t x286 = 1;
	static int16_t x288 = -37;
	static uint64_t t66 = 155LLU;

	t66 = (((x285&x286)-x287)|x288);

	if (t66 != 18446744073709551611LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int16_t x289 = INT16_MIN;
	volatile uint16_t x290 = 105U;
	static int16_t x291 = 29;
	uint32_t t67 = 23U;

	t67 = (((x289&x290)-x291)|x292);

	if (t67 != 4294967283U) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = 33398232675LL;
	int8_t x294 = INT8_MAX;
	int16_t x295 = INT16_MIN;
	int8_t x296 = -1;
	int64_t t68 = -3325326488625464LL;

	t68 = (((x293&x294)-x295)|x296);

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	static uint32_t x298 = 320213U;
	int16_t x300 = -7924;
	uint64_t t69 = 3836526929384751661LLU;

	t69 = (((x297&x298)-x299)|x300);

	if (t69 != 18446744073709543693LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x301 = INT64_MAX;
	volatile int32_t x302 = INT32_MIN;
	static int16_t x303 = INT16_MIN;
	static volatile int64_t x304 = INT64_MIN;
	int64_t t70 = -2530705170824126LL;

	t70 = (((x301&x302)-x303)|x304);

	if (t70 != -2147450880LL) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x306 = -1;
	static int64_t x307 = 45358031694041575LL;
	static uint32_t x308 = 60U;

	t71 = (((x305&x306)-x307)|x308);

	if (t71 != -45358027399074244LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	int16_t x316 = -1;
	volatile uint32_t t72 = UINT32_MAX;

	t72 = (((x313&x314)-x315)|x316);

	if (t72 != UINT32_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x317 = INT16_MIN;
	static volatile uint32_t x318 = UINT32_MAX;
	int32_t x319 = -5376;
	volatile int64_t t73 = INT64_MAX;

	t73 = (((x317&x318)-x319)|x320);

	if (t73 != INT64_MAX) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x321 = -6;
	uint16_t x322 = UINT16_MAX;
	uint16_t x323 = 25U;
	uint32_t t74 = 120979U;

	t74 = (((x321&x322)-x323)|x324);

	if (t74 != 134021089U) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x325 = -8917;
	static int64_t x327 = -1LL;
	uint16_t x328 = UINT16_MAX;
	int64_t t75 = -958174730LL;

	t75 = (((x325&x326)-x327)|x328);

	if (t75 != 65535LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x329 = INT16_MAX;
	int32_t x330 = -193384835;
	static int16_t x331 = 27;
	int8_t x332 = -1;

	t76 = (((x329&x330)-x331)|x332);

	if (t76 != -1) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x333 = -3;
	int16_t x334 = INT16_MAX;
	int16_t x335 = 8088;
	uint64_t x336 = 243617317048467145LLU;
	volatile uint64_t t77 = 1898321042414LLU;

	t77 = (((x333&x334)-x335)|x336);

	if (t77 != 243617317048483565LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x337 = 15985U;
	int32_t x338 = INT32_MIN;
	int16_t x340 = INT16_MIN;

	t78 = (((x337&x338)-x339)|x340);

	if (t78 != -127) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x341 = INT64_MIN;
	static int8_t x342 = INT8_MIN;
	int8_t x343 = -1;
	int32_t x344 = -1516;
	static volatile int64_t t79 = -26026284794461LL;

	t79 = (((x341&x342)-x343)|x344);

	if (t79 != -1515LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x346 = 1170968U;
	uint16_t x348 = UINT16_MAX;
	uint64_t t80 = 5LLU;

	t80 = (((x345&x346)-x347)|x348);

	if (t80 != 65535LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x349 = 62U;
	int64_t x350 = INT64_MAX;
	int32_t x351 = INT32_MAX;
	int32_t x352 = 594;
	volatile int64_t t81 = -16152788013LL;

	t81 = (((x349&x350)-x351)|x352);

	if (t81 != -2147483009LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint32_t x353 = 1520378U;
	int64_t x355 = 883340285741785469LL;
	int32_t x356 = INT32_MIN;
	volatile int64_t t82 = 1547380935273LL;

	t82 = (((x353&x354)-x355)|x356);

	if (t82 != -1265525117LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x360 = INT16_MIN;
	int32_t t83 = 41478264;

	t83 = (((x357&x358)-x359)|x360);

	if (t83 != -11176) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x361 = 64U;
	int32_t x362 = -1;
	static uint8_t x364 = UINT8_MAX;
	int32_t t84 = 193790;

	t84 = (((x361&x362)-x363)|x364);

	if (t84 != -65281) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x365 = INT8_MIN;
	int16_t x366 = 1;
	volatile int64_t x368 = INT64_MIN;
	volatile int64_t t85 = 55082298460529051LL;

	t85 = (((x365&x366)-x367)|x368);

	if (t85 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x369 = -1LL;
	uint32_t x370 = 1710U;
	int16_t x371 = -1791;
	int32_t x372 = INT32_MIN;
	static volatile int64_t t86 = -273614831LL;

	t86 = (((x369&x370)-x371)|x372);

	if (t86 != -2147480147LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint16_t x374 = UINT16_MAX;
	int8_t x375 = INT8_MAX;
	int32_t t87 = 98;

	t87 = (((x373&x374)-x375)|x376);

	if (t87 != -1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x378 = INT64_MAX;
	uint64_t x379 = UINT64_MAX;
	static volatile int8_t x380 = INT8_MIN;
	volatile uint64_t t88 = 31753551129701192LLU;

	t88 = (((x377&x378)-x379)|x380);

	if (t88 != 18446744073709551490LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x382 = 58U;
	int16_t x383 = 9814;
	uint32_t x384 = 135U;
	uint32_t t89 = 13644U;

	t89 = (((x381&x382)-x383)|x384);

	if (t89 != 4294957487U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x385 = UINT32_MAX;
	int32_t x387 = -1;
	uint32_t t90 = 460500898U;

	t90 = (((x385&x386)-x387)|x388);

	if (t90 != 4294967275U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint16_t x389 = 1072U;
	int8_t x390 = -1;
	uint32_t x392 = UINT32_MAX;
	uint64_t t91 = 5066LLU;

	t91 = (((x389&x390)-x391)|x392);

	if (t91 != 4294967295LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x393 = -1;
	static volatile int32_t x394 = -1;
	uint64_t x395 = 1LLU;
	volatile uint64_t t92 = 55966784105LLU;

	t92 = (((x393&x394)-x395)|x396);

	if (t92 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x398 = 20837586LL;
	int16_t x400 = 277;

	t93 = (((x397&x398)-x399)|x400);

	if (t93 != 279LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x401 = INT64_MAX;
	int32_t x402 = -1;
	static int64_t x403 = 61912LL;
	uint16_t x404 = 3927U;
	volatile int64_t t94 = -1LL;

	t94 = (((x401&x402)-x403)|x404);

	if (t94 != 9223372036854714231LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int8_t x405 = -1;
	volatile int8_t x406 = -1;
	volatile int64_t x407 = INT64_MIN;
	int64_t x408 = 2740615LL;
	volatile int64_t t95 = INT64_MAX;

	t95 = (((x405&x406)-x407)|x408);

	if (t95 != INT64_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	uint32_t x409 = 334798U;
	volatile int16_t x410 = INT16_MIN;
	static int8_t x411 = -1;
	int8_t x412 = INT8_MIN;

	t96 = (((x409&x410)-x411)|x412);

	if (t96 != 4294967169U) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x413 = INT8_MAX;
	uint64_t x414 = 2239807387LLU;
	uint16_t x415 = 22U;
	int16_t x416 = INT16_MAX;

	t97 = (((x413&x414)-x415)|x416);

	if (t97 != 32767LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x418 = INT64_MAX;
	int64_t t98 = -844462LL;

	t98 = (((x417&x418)-x419)|x420);

	if (t98 != 9222344807799160799LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x423 = -1;
	uint64_t x424 = 5903LLU;
	uint64_t t99 = 2013805555191LLU;

	t99 = (((x421&x422)-x423)|x424);

	if (t99 != 1673633743LLU) { NG(); } else { ; }
	
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

