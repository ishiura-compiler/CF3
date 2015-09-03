#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = INT16_MIN;
int16_t x8 = INT16_MIN;
int32_t t2 = 1697383;
uint8_t x14 = 60U;
int32_t x17 = -1;
int32_t x19 = INT32_MIN;
volatile int8_t x22 = 15;
int32_t t5 = -38110561;
int8_t x28 = INT8_MAX;
volatile int32_t x29 = -185165380;
uint8_t x30 = 48U;
int32_t x32 = -53441545;
uint32_t x39 = 16134U;
int16_t x41 = INT16_MIN;
volatile int32_t t10 = 5164126;
static uint32_t x46 = 253948U;
volatile uint32_t x51 = 2524U;
int64_t x56 = INT64_MAX;
static volatile int32_t t13 = -1;
uint16_t x62 = 425U;
static int8_t x65 = 0;
uint16_t x69 = 89U;
uint64_t x74 = 3203260608LLU;
static volatile int32_t t18 = -127326883;
uint8_t x78 = UINT8_MAX;
volatile uint64_t x79 = UINT64_MAX;
int32_t t20 = -3825242;
int64_t x92 = INT64_MIN;
uint8_t x93 = UINT8_MAX;
int64_t x96 = 3LL;
int8_t x102 = INT8_MIN;
volatile uint64_t x106 = 458411369560503LLU;
int64_t x108 = -1LL;
int32_t t26 = 1;
uint16_t x111 = 11U;
int16_t x114 = 6702;
uint32_t x118 = 4U;
volatile int32_t t29 = 3;
int16_t x124 = INT16_MIN;
int64_t x128 = -9082855382757LL;
static int32_t t32 = -1;
int16_t x134 = 7;
uint8_t x145 = 13U;
uint32_t x158 = 125251387U;
volatile int8_t x160 = -5;
int64_t x162 = INT64_MIN;
int8_t x167 = INT8_MAX;
int64_t x173 = INT64_MIN;
volatile int64_t x178 = 127646995150378LL;
int64_t x180 = -1LL;
int32_t x181 = 0;
int8_t x182 = -1;
volatile uint64_t x192 = 11920724526LLU;
uint16_t x195 = UINT16_MAX;
uint16_t x197 = 78U;
static int16_t x213 = INT16_MIN;
int32_t x214 = -1;
int16_t x215 = -27;
int64_t x219 = INT64_MIN;
static uint16_t x224 = 1U;
int8_t x226 = INT8_MIN;
static int8_t x227 = 44;
static int32_t x230 = -1;
int32_t t57 = 14;
int8_t x237 = INT8_MAX;
int64_t x239 = INT64_MIN;
static int32_t x240 = 519870114;
int8_t x243 = 1;
volatile uint8_t x253 = UINT8_MAX;
int32_t x256 = INT32_MAX;
volatile uint32_t x259 = 20709U;
volatile int32_t t64 = 1;
int8_t x276 = 48;
static int32_t x278 = INT32_MIN;
static uint16_t x283 = 4978U;
int16_t x287 = INT16_MIN;
int32_t t71 = 31541;
int8_t x298 = INT8_MIN;
volatile int32_t t76 = 376850;
volatile uint8_t x310 = 2U;
static int32_t x311 = -1;
int8_t x318 = INT8_MAX;
uint32_t x319 = UINT32_MAX;
static int8_t x321 = -1;
int16_t x328 = 250;
uint32_t x331 = 10395U;
volatile int32_t x333 = 121880744;
int32_t x336 = INT32_MIN;
int16_t x337 = 0;
static int32_t x339 = INT32_MAX;
volatile int32_t x347 = -1;
uint64_t x349 = 423LLU;
uint32_t x352 = 2U;
int8_t x365 = INT8_MIN;
uint8_t x369 = 6U;
uint8_t x376 = 1U;
int32_t t94 = 172647;
volatile int32_t x397 = INT32_MAX;
int32_t x398 = 0;


void f0(void) {
	int64_t x1 = -2486605LL;
	int64_t x2 = 18539436LL;
	int32_t x4 = INT32_MIN;
	static volatile int32_t t0 = 8181;

	t0 = ((x1&(x2<x3))<=x4);

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MAX;
	uint8_t x6 = UINT8_MAX;
	volatile int16_t x7 = -5;
	volatile int32_t t1 = 1220;

	t1 = ((x5&(x6<x7))<=x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = -1;
	static uint32_t x10 = 13754961U;
	int64_t x11 = INT64_MAX;
	uint8_t x12 = 112U;

	t2 = ((x9&(x10<x11))<=x12);

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x13 = 1U;
	uint32_t x15 = 28U;
	volatile uint16_t x16 = 242U;
	static volatile int32_t t3 = -3;

	t3 = ((x13&(x14<x15))<=x16);

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = UINT32_MAX;
	uint64_t x20 = 5789742301663LLU;
	int32_t t4 = 1874;

	t4 = ((x17&(x18<x19))<=x20);

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 0U;
	uint16_t x23 = 30U;
	static volatile uint16_t x24 = 10397U;

	t5 = ((x21&(x22<x23))<=x24);

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 17740U;
	int8_t x26 = -1;
	volatile int64_t x27 = INT64_MIN;
	int32_t t6 = -15488258;

	t6 = ((x25&(x26<x27))<=x28);

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x31 = UINT32_MAX;
	static volatile int32_t t7 = -94;

	t7 = ((x29&(x30<x31))<=x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int16_t x34 = INT16_MAX;
	int8_t x35 = -1;
	volatile uint8_t x36 = 1U;
	volatile int32_t t8 = 37471;

	t8 = ((x33&(x34<x35))<=x36);

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = INT64_MIN;
	uint64_t x38 = 1017749616348LLU;
	static uint8_t x40 = UINT8_MAX;
	volatile int32_t t9 = 512064;

	t9 = ((x37&(x38<x39))<=x40);

	if (t9 != 1) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x42 = UINT16_MAX;
	uint8_t x43 = 0U;
	int16_t x44 = -10361;

	t10 = ((x41&(x42<x43))<=x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = 14662U;
	int64_t x47 = INT64_MIN;
	uint32_t x48 = 119U;
	static volatile int32_t t11 = -7949;

	t11 = ((x45&(x46<x47))<=x48);

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int64_t x50 = -1LL;
	uint16_t x52 = 8307U;
	volatile int32_t t12 = -1;

	t12 = ((x49&(x50<x51))<=x52);

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	uint32_t x54 = UINT32_MAX;
	volatile uint64_t x55 = 1LLU;

	t13 = ((x53&(x54<x55))<=x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	static uint16_t x57 = 1013U;
	int16_t x58 = INT16_MIN;
	volatile int32_t x59 = -1;
	uint32_t x60 = 6237161U;
	int32_t t14 = 2004810;

	t14 = ((x57&(x58<x59))<=x60);

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 0U;
	static int64_t x63 = -1LL;
	int32_t x64 = INT32_MIN;
	static int32_t t15 = -854453062;

	t15 = ((x61&(x62<x63))<=x64);

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x66 = 726U;
	int8_t x67 = INT8_MIN;
	static uint32_t x68 = 132072U;
	static int32_t t16 = 1418290;

	t16 = ((x65&(x66<x67))<=x68);

	if (t16 != 1) { NG(); } else { ; }
	
}

void f17(void) {
	static volatile int16_t x70 = INT16_MIN;
	int8_t x71 = INT8_MIN;
	volatile uint8_t x72 = 63U;
	int32_t t17 = -224888120;

	t17 = ((x69&(x70<x71))<=x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x73 = 53U;
	int8_t x75 = INT8_MAX;
	int32_t x76 = 427545195;

	t18 = ((x73&(x74<x75))<=x76);

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x77 = 123U;
	int16_t x80 = INT16_MIN;
	volatile int32_t t19 = 21726;

	t19 = ((x77&(x78<x79))<=x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	static uint32_t x81 = 24U;
	int64_t x82 = -307138LL;
	uint64_t x83 = 47777LLU;
	int32_t x84 = INT32_MAX;

	t20 = ((x81&(x82<x83))<=x84);

	if (t20 != 1) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x85 = INT8_MIN;
	volatile int64_t x86 = -1LL;
	uint8_t x87 = UINT8_MAX;
	int64_t x88 = INT64_MIN;
	volatile int32_t t21 = 12182112;

	t21 = ((x85&(x86<x87))<=x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x89 = UINT64_MAX;
	uint16_t x90 = 1U;
	uint32_t x91 = 153973437U;
	volatile int32_t t22 = -244245039;

	t22 = ((x89&(x90<x91))<=x92);

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = 0;
	volatile int64_t x95 = -1LL;
	int32_t t23 = 820;

	t23 = ((x93&(x94<x95))<=x96);

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x97 = 3445697;
	int16_t x98 = -1;
	uint64_t x99 = UINT64_MAX;
	uint8_t x100 = 0U;
	int32_t t24 = 1;

	t24 = ((x97&(x98<x99))<=x100);

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = INT64_MIN;
	int64_t x103 = -13818LL;
	uint32_t x104 = 5U;
	volatile int32_t t25 = 15;

	t25 = ((x101&(x102<x103))<=x104);

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x105 = 1759U;
	int32_t x107 = 1492;

	t26 = ((x105&(x106<x107))<=x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = -1;
	int64_t x110 = 6750412928253124LL;
	uint8_t x112 = UINT8_MAX;
	volatile int32_t t27 = 51360;

	t27 = ((x109&(x110<x111))<=x112);

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	static int8_t x115 = 1;
	static volatile int16_t x116 = INT16_MIN;
	volatile int32_t t28 = -1;

	t28 = ((x113&(x114<x115))<=x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MIN;
	int32_t x119 = INT32_MIN;
	int16_t x120 = INT16_MIN;

	t29 = ((x117&(x118<x119))<=x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x121 = UINT32_MAX;
	volatile int16_t x122 = INT16_MIN;
	int32_t x123 = INT32_MAX;
	volatile int32_t t30 = 549605;

	t30 = ((x121&(x122<x123))<=x124);

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = INT32_MAX;
	volatile int64_t x126 = INT64_MAX;
	int32_t x127 = -9;
	int32_t t31 = -6;

	t31 = ((x125&(x126<x127))<=x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MAX;
	uint16_t x130 = 13U;
	static uint32_t x131 = UINT32_MAX;
	uint16_t x132 = 6U;

	t32 = ((x129&(x130<x131))<=x132);

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x133 = INT16_MIN;
	static int8_t x135 = INT8_MIN;
	uint16_t x136 = UINT16_MAX;
	int32_t t33 = -958859175;

	t33 = ((x133&(x134<x135))<=x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MAX;
	uint8_t x138 = 123U;
	int16_t x139 = 1;
	int8_t x140 = -1;
	int32_t t34 = -1;

	t34 = ((x137&(x138<x139))<=x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = 2;
	int64_t x142 = -1LL;
	static volatile uint64_t x143 = UINT64_MAX;
	static volatile int64_t x144 = 179LL;
	volatile int32_t t35 = -190;

	t35 = ((x141&(x142<x143))<=x144);

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint32_t x146 = 2U;
	static int16_t x147 = INT16_MIN;
	int16_t x148 = INT16_MIN;
	volatile int32_t t36 = -5383401;

	t36 = ((x145&(x146<x147))<=x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = 0;
	int16_t x150 = -390;
	int32_t x151 = INT32_MIN;
	int32_t x152 = INT32_MIN;
	int32_t t37 = -241856575;

	t37 = ((x149&(x150<x151))<=x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static uint64_t x153 = UINT64_MAX;
	int8_t x154 = -11;
	uint16_t x155 = 682U;
	int8_t x156 = -1;
	int32_t t38 = 43;

	t38 = ((x153&(x154<x155))<=x156);

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x157 = INT16_MIN;
	static volatile int16_t x159 = INT16_MIN;
	int32_t t39 = -3357;

	t39 = ((x157&(x158<x159))<=x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint8_t x161 = 119U;
	static uint8_t x163 = 0U;
	int32_t x164 = INT32_MAX;
	volatile int32_t t40 = -2;

	t40 = ((x161&(x162<x163))<=x164);

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = -60879741562355LL;
	int8_t x166 = INT8_MIN;
	volatile int8_t x168 = INT8_MIN;
	int32_t t41 = 1949089;

	t41 = ((x165&(x166<x167))<=x168);

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x169 = INT32_MIN;
	int8_t x170 = 51;
	int16_t x171 = INT16_MAX;
	static int32_t x172 = INT32_MIN;
	volatile int32_t t42 = -25;

	t42 = ((x169&(x170<x171))<=x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x174 = INT16_MAX;
	volatile uint16_t x175 = 888U;
	static uint32_t x176 = UINT32_MAX;
	static int32_t t43 = 7;

	t43 = ((x173&(x174<x175))<=x176);

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x177 = -6360LL;
	int32_t x179 = INT32_MAX;
	static volatile int32_t t44 = -32;

	t44 = ((x177&(x178<x179))<=x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x183 = -11;
	static int8_t x184 = INT8_MIN;
	int32_t t45 = -99451;

	t45 = ((x181&(x182<x183))<=x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1;
	uint64_t x186 = 104465319243LLU;
	int8_t x187 = -52;
	uint64_t x188 = 507141605187819857LLU;
	int32_t t46 = 7;

	t46 = ((x185&(x186<x187))<=x188);

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x189 = INT64_MAX;
	static volatile int64_t x190 = INT64_MAX;
	uint8_t x191 = 7U;
	int32_t t47 = 7;

	t47 = ((x189&(x190<x191))<=x192);

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = INT64_MAX;
	static volatile int8_t x194 = INT8_MIN;
	int8_t x196 = -2;
	volatile int32_t t48 = 0;

	t48 = ((x193&(x194<x195))<=x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint8_t x198 = UINT8_MAX;
	int8_t x199 = -1;
	uint32_t x200 = 528359U;
	int32_t t49 = 53814489;

	t49 = ((x197&(x198<x199))<=x200);

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int64_t x201 = INT64_MIN;
	volatile int32_t x202 = INT32_MAX;
	uint16_t x203 = 1U;
	static uint8_t x204 = UINT8_MAX;
	volatile int32_t t50 = 1192281;

	t50 = ((x201&(x202<x203))<=x204);

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int8_t x205 = INT8_MIN;
	static int16_t x206 = -1;
	int32_t x207 = INT32_MIN;
	int16_t x208 = INT16_MIN;
	volatile int32_t t51 = 5;

	t51 = ((x205&(x206<x207))<=x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x209 = 14U;
	static uint8_t x210 = 28U;
	int8_t x211 = 54;
	static volatile uint32_t x212 = 255399408U;
	int32_t t52 = 18;

	t52 = ((x209&(x210<x211))<=x212);

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint64_t x216 = 48LLU;
	static volatile int32_t t53 = 1;

	t53 = ((x213&(x214<x215))<=x216);

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x217 = 2614U;
	int8_t x218 = 12;
	static int16_t x220 = -6291;
	static int32_t t54 = -10;

	t54 = ((x217&(x218<x219))<=x220);

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	static int32_t t55 = 145171;

	t55 = ((x221&(x222<x223))<=x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int64_t x225 = INT64_MIN;
	int16_t x228 = INT16_MAX;
	volatile int32_t t56 = 6237;

	t56 = ((x225&(x226<x227))<=x228);

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 19U;
	static int8_t x231 = 10;
	int32_t x232 = -16232255;

	t57 = ((x229&(x230<x231))<=x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static volatile uint32_t x233 = UINT32_MAX;
	static uint16_t x234 = UINT16_MAX;
	int32_t x235 = INT32_MIN;
	static volatile int32_t x236 = INT32_MAX;
	volatile int32_t t58 = 137509233;

	t58 = ((x233&(x234<x235))<=x236);

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x238 = 22U;
	int32_t t59 = -110;

	t59 = ((x237&(x238<x239))<=x240);

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x241 = -13740127159LL;
	int16_t x242 = INT16_MAX;
	static volatile int16_t x244 = INT16_MAX;
	volatile int32_t t60 = -217248;

	t60 = ((x241&(x242<x243))<=x244);

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int64_t x245 = INT64_MIN;
	volatile uint64_t x246 = 505932LLU;
	int16_t x247 = 1;
	int32_t x248 = -1;
	volatile int32_t t61 = 0;

	t61 = ((x245&(x246<x247))<=x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x249 = -7254;
	static int32_t x250 = -48;
	int16_t x251 = -2444;
	static uint64_t x252 = UINT64_MAX;
	static int32_t t62 = 129795;

	t62 = ((x249&(x250<x251))<=x252);

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x254 = 84;
	int8_t x255 = INT8_MAX;
	int32_t t63 = 81;

	t63 = ((x253&(x254<x255))<=x256);

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = 5;
	int32_t x258 = 1891300;
	static uint8_t x260 = UINT8_MAX;

	t64 = ((x257&(x258<x259))<=x260);

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	static uint32_t x262 = UINT32_MAX;
	int64_t x263 = -7181920LL;
	int8_t x264 = 3;
	static volatile int32_t t65 = 77562;

	t65 = ((x261&(x262<x263))<=x264);

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = 1166U;
	uint8_t x266 = 22U;
	uint8_t x267 = UINT8_MAX;
	uint8_t x268 = UINT8_MAX;
	volatile int32_t t66 = -260;

	t66 = ((x265&(x266<x267))<=x268);

	if (t66 != 1) { NG(); } else { ; }
	
}

void f67(void) {
	static uint32_t x269 = UINT32_MAX;
	uint16_t x270 = UINT16_MAX;
	volatile int32_t x271 = 233432;
	volatile int32_t x272 = -41347;
	static volatile int32_t t67 = -80367;

	t67 = ((x269&(x270<x271))<=x272);

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	uint8_t x273 = 0U;
	static volatile uint64_t x274 = 105870194LLU;
	static volatile uint32_t x275 = UINT32_MAX;
	int32_t t68 = 25263127;

	t68 = ((x273&(x274<x275))<=x276);

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = -1LL;
	uint16_t x279 = 30373U;
	int32_t x280 = 21509238;
	volatile int32_t t69 = 1988;

	t69 = ((x277&(x278<x279))<=x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int8_t x281 = -36;
	uint8_t x282 = UINT8_MAX;
	static uint64_t x284 = 3594676994341359049LLU;
	int32_t t70 = -6;

	t70 = ((x281&(x282<x283))<=x284);

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x285 = -1;
	static uint32_t x286 = UINT32_MAX;
	uint32_t x288 = UINT32_MAX;

	t71 = ((x285&(x286<x287))<=x288);

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MAX;
	static int32_t x290 = INT32_MAX;
	int8_t x291 = INT8_MIN;
	int16_t x292 = INT16_MIN;
	volatile int32_t t72 = -7189005;

	t72 = ((x289&(x290<x291))<=x292);

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x293 = 2347;
	int16_t x294 = -1;
	volatile uint8_t x295 = UINT8_MAX;
	volatile int32_t x296 = -1;
	volatile int32_t t73 = 10;

	t73 = ((x293&(x294<x295))<=x296);

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	static int8_t x299 = -2;
	int64_t x300 = 12709517467644736LL;
	int32_t t74 = 6600839;

	t74 = ((x297&(x298<x299))<=x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x301 = UINT64_MAX;
	uint32_t x302 = UINT32_MAX;
	int32_t x303 = INT32_MIN;
	int16_t x304 = 3;
	volatile int32_t t75 = 2951;

	t75 = ((x301&(x302<x303))<=x304);

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 578U;
	volatile uint8_t x306 = UINT8_MAX;
	volatile int16_t x307 = 1;
	static int32_t x308 = INT32_MIN;

	t76 = ((x305&(x306<x307))<=x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = 18U;
	uint16_t x312 = UINT16_MAX;
	volatile int32_t t77 = -12081965;

	t77 = ((x309&(x310<x311))<=x312);

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x313 = -1LL;
	int16_t x314 = INT16_MIN;
	static volatile uint16_t x315 = 567U;
	int64_t x316 = INT64_MIN;
	int32_t t78 = 43842836;

	t78 = ((x313&(x314<x315))<=x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x317 = INT8_MIN;
	uint16_t x320 = 2740U;
	volatile int32_t t79 = 6766;

	t79 = ((x317&(x318<x319))<=x320);

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x322 = INT32_MIN;
	static int32_t x323 = INT32_MIN;
	uint32_t x324 = UINT32_MAX;
	static int32_t t80 = 12478859;

	t80 = ((x321&(x322<x323))<=x324);

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	volatile int8_t x326 = INT8_MIN;
	uint16_t x327 = UINT16_MAX;
	static int32_t t81 = 17665;

	t81 = ((x325&(x326<x327))<=x328);

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x329 = 16372444239784LL;
	uint64_t x330 = UINT64_MAX;
	uint64_t x332 = 6254166LLU;
	int32_t t82 = -28;

	t82 = ((x329&(x330<x331))<=x332);

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x334 = 84233172;
	int64_t x335 = 123405539141LL;
	volatile int32_t t83 = 7;

	t83 = ((x333&(x334<x335))<=x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static uint8_t x338 = 4U;
	int64_t x340 = -102255959391932016LL;
	int32_t t84 = -14079670;

	t84 = ((x337&(x338<x339))<=x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x341 = -383;
	int16_t x342 = INT16_MIN;
	int8_t x343 = -1;
	int64_t x344 = 2302367653078982733LL;
	volatile int32_t t85 = -507384;

	t85 = ((x341&(x342<x343))<=x344);

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	static int64_t x345 = -1LL;
	int8_t x346 = INT8_MAX;
	int16_t x348 = INT16_MIN;
	int32_t t86 = -86122;

	t86 = ((x345&(x346<x347))<=x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x350 = 1577LLU;
	uint64_t x351 = UINT64_MAX;
	int32_t t87 = -117351;

	t87 = ((x349&(x350<x351))<=x352);

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile int16_t x353 = INT16_MAX;
	int8_t x354 = 25;
	int32_t x355 = INT32_MIN;
	volatile uint32_t x356 = 201885751U;
	int32_t t88 = 1;

	t88 = ((x353&(x354<x355))<=x356);

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	int16_t x358 = INT16_MIN;
	int64_t x359 = INT64_MIN;
	uint64_t x360 = 154812295128638076LLU;
	volatile int32_t t89 = -21;

	t89 = ((x357&(x358<x359))<=x360);

	if (t89 != 1) { NG(); } else { ; }
	
}

void f90(void) {
	uint64_t x361 = UINT64_MAX;
	static uint32_t x362 = UINT32_MAX;
	volatile int8_t x363 = INT8_MAX;
	int8_t x364 = -28;
	int32_t t90 = 2512;

	t90 = ((x361&(x362<x363))<=x364);

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x366 = UINT32_MAX;
	int64_t x367 = -1LL;
	int16_t x368 = -91;
	int32_t t91 = 14924;

	t91 = ((x365&(x366<x367))<=x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x370 = INT32_MAX;
	int32_t x371 = -1;
	int32_t x372 = INT32_MIN;
	volatile int32_t t92 = -58656424;

	t92 = ((x369&(x370<x371))<=x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x373 = -1LL;
	static int16_t x374 = 204;
	uint32_t x375 = UINT32_MAX;
	int32_t t93 = -51;

	t93 = ((x373&(x374<x375))<=x376);

	if (t93 != 1) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = 10;
	int64_t x378 = INT64_MAX;
	int32_t x379 = -1;
	volatile uint64_t x380 = UINT64_MAX;

	t94 = ((x377&(x378<x379))<=x380);

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x381 = 2994U;
	int32_t x382 = INT32_MIN;
	int16_t x383 = INT16_MIN;
	static int16_t x384 = 1;
	static volatile int32_t t95 = -7868;

	t95 = ((x381&(x382<x383))<=x384);

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x385 = INT16_MIN;
	volatile int32_t x386 = INT32_MAX;
	static int16_t x387 = INT16_MAX;
	uint32_t x388 = UINT32_MAX;
	int32_t t96 = 832521;

	t96 = ((x385&(x386<x387))<=x388);

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x389 = 141016LL;
	uint8_t x390 = 4U;
	int32_t x391 = INT32_MIN;
	static volatile int32_t x392 = INT32_MIN;
	volatile int32_t t97 = 2584;

	t97 = ((x389&(x390<x391))<=x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x393 = UINT16_MAX;
	uint32_t x394 = UINT32_MAX;
	static volatile uint32_t x395 = 44402U;
	volatile uint8_t x396 = 1U;
	volatile int32_t t98 = -306132166;

	t98 = ((x393&(x394<x395))<=x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x399 = 19249518251079LLU;
	volatile int16_t x400 = INT16_MAX;
	static volatile int32_t t99 = -712433855;

	t99 = ((x397&(x398<x399))<=x400);

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

