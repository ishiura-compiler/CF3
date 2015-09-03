#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x13 = INT16_MIN;
volatile int64_t x15 = INT64_MIN;
int64_t x16 = -7105763LL;
int32_t t4 = 13;
static int8_t x26 = -51;
volatile int32_t t6 = 123475682;
uint64_t x31 = 26LLU;
uint8_t x35 = 0U;
volatile int32_t t8 = -15572917;
uint8_t x38 = 34U;
uint16_t x40 = UINT16_MAX;
uint32_t x41 = UINT32_MAX;
int64_t x44 = INT64_MIN;
volatile uint16_t x57 = UINT16_MAX;
int64_t x61 = INT64_MAX;
uint8_t x63 = UINT8_MAX;
static int32_t t15 = 1;
int8_t x65 = -1;
volatile int32_t t16 = -147903136;
static int8_t x69 = -1;
uint16_t x79 = 5259U;
int32_t t19 = -16;
int64_t x85 = -4666069LL;
int16_t x88 = -1;
volatile int16_t x91 = INT16_MIN;
int64_t x92 = -1LL;
volatile int32_t x95 = -1;
int32_t x100 = INT32_MIN;
static volatile int32_t t25 = 25307465;
int8_t x110 = INT8_MIN;
int32_t x111 = 2;
static int32_t t27 = -77487558;
static volatile int32_t t28 = -48;
int32_t t31 = -46;
int64_t x136 = -1LL;
int32_t t33 = 911;
volatile int32_t t35 = -10;
int64_t x153 = 59673449LL;
uint32_t x156 = 32881233U;
volatile int32_t t38 = -128430653;
int8_t x159 = INT8_MAX;
static int8_t x167 = INT8_MIN;
uint64_t x168 = UINT64_MAX;
uint16_t x169 = 1830U;
static uint8_t x172 = UINT8_MAX;
int16_t x174 = -4428;
volatile int32_t t43 = 82443273;
static volatile int32_t t44 = -1130017;
int64_t x182 = INT64_MIN;
volatile int8_t x185 = -1;
static int32_t t46 = 544;
volatile int8_t x190 = INT8_MIN;
volatile int32_t t47 = -198259037;
volatile int8_t x193 = -1;
static volatile int32_t t49 = 37;
int16_t x202 = INT16_MAX;
int8_t x209 = INT8_MIN;
uint16_t x211 = UINT16_MAX;
static int16_t x223 = -6;
int64_t x227 = -7031356075064888LL;
static uint16_t x231 = 867U;
int32_t x233 = 12263;
uint16_t x236 = 229U;
static int64_t x240 = INT64_MIN;
int32_t t59 = 19;
volatile int32_t t60 = -1;
int32_t x250 = INT32_MIN;
volatile uint8_t x257 = 0U;
volatile int32_t x261 = 10;
static int32_t x264 = -17878;
static int64_t x272 = INT64_MAX;
static int32_t x284 = INT32_MIN;
static int32_t x286 = -1;
static int64_t x287 = INT64_MIN;
volatile int32_t t71 = -7;
volatile uint32_t x292 = UINT32_MAX;
volatile int32_t t72 = 731188;
uint8_t x309 = 55U;
int32_t x313 = -1;
volatile uint8_t x314 = UINT8_MAX;
int32_t t79 = -28390;
uint64_t x339 = 4971LLU;
uint8_t x347 = 7U;
int8_t x352 = 28;
volatile int8_t x354 = 15;
int32_t x358 = INT32_MAX;
int32_t x361 = 44;
static volatile int32_t t91 = -1975;
uint16_t x369 = UINT16_MAX;
int32_t x373 = -1;
static volatile int8_t x382 = INT8_MIN;
static uint8_t x384 = 1U;
uint64_t x386 = UINT64_MAX;
static int8_t x388 = INT8_MAX;
volatile int32_t t99 = 7;


void f0(void) {
	int16_t x1 = -1;
	static int64_t x2 = -28157069LL;
	volatile int8_t x3 = -1;
	static int32_t x4 = -1;
	volatile int32_t t0 = -4463965;

	t0 = ((x1|(x2|x3))==x4);

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = INT8_MIN;
	volatile int8_t x6 = INT8_MIN;
	int64_t x7 = -10819LL;
	volatile int8_t x8 = 1;
	volatile int32_t t1 = 8818325;

	t1 = ((x5|(x6|x7))==x8);

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -3816350LL;
	static volatile int32_t x10 = INT32_MAX;
	static int16_t x11 = INT16_MAX;
	static int64_t x12 = INT64_MIN;
	volatile int32_t t2 = -329;

	t2 = ((x9|(x10|x11))==x12);

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 4645U;
	int32_t t3 = -9003;

	t3 = ((x13|(x14|x15))==x16);

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 62LL;
	int32_t x18 = INT32_MIN;
	int16_t x19 = -42;
	int32_t x20 = INT32_MIN;

	t4 = ((x17|(x18|x19))==x20);

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int16_t x21 = INT16_MIN;
	int16_t x22 = INT16_MAX;
	int64_t x23 = 39962LL;
	static int8_t x24 = 5;
	volatile int32_t t5 = 6050;

	t5 = ((x21|(x22|x23))==x24);

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = 26U;
	int32_t x27 = INT32_MIN;
	volatile uint8_t x28 = 4U;

	t6 = ((x25|(x26|x27))==x28);

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = 917;
	int16_t x30 = -1;
	uint16_t x32 = 2406U;
	int32_t t7 = 4;

	t7 = ((x29|(x30|x31))==x32);

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile uint16_t x33 = 10U;
	static int64_t x34 = INT64_MAX;
	int8_t x36 = INT8_MIN;

	t8 = ((x33|(x34|x35))==x36);

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x37 = 19U;
	volatile int64_t x39 = -1LL;
	int32_t t9 = 49005214;

	t9 = ((x37|(x38|x39))==x40);

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	static volatile uint64_t x43 = 2607LLU;
	int32_t t10 = 1187;

	t10 = ((x41|(x42|x43))==x44);

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	static volatile uint8_t x46 = 2U;
	static uint32_t x47 = 2225U;
	volatile uint64_t x48 = 1LLU;
	int32_t t11 = -13;

	t11 = ((x45|(x46|x47))==x48);

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	int16_t x50 = INT16_MIN;
	uint8_t x51 = 6U;
	volatile uint16_t x52 = 1793U;
	int32_t t12 = 254797;

	t12 = ((x49|(x50|x51))==x52);

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static int32_t x54 = INT32_MIN;
	uint32_t x55 = UINT32_MAX;
	uint16_t x56 = 7614U;
	int32_t t13 = -3172;

	t13 = ((x53|(x54|x55))==x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x58 = -5;
	uint64_t x59 = 1008LLU;
	int8_t x60 = INT8_MIN;
	volatile int32_t t14 = 223796169;

	t14 = ((x57|(x58|x59))==x60);

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x62 = INT8_MIN;
	static int32_t x64 = -1;

	t15 = ((x61|(x62|x63))==x64);

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x66 = -516;
	int32_t x67 = INT32_MIN;
	volatile int8_t x68 = 1;

	t16 = ((x65|(x66|x67))==x68);

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x70 = INT8_MIN;
	uint64_t x71 = 3895398LLU;
	int64_t x72 = -1LL;
	int32_t t17 = 9309509;

	t17 = ((x69|(x70|x71))==x72);

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -3;
	int32_t x74 = -1;
	volatile int32_t x75 = -12;
	static uint8_t x76 = 109U;
	static volatile int32_t t18 = -34;

	t18 = ((x73|(x74|x75))==x76);

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = 4285098LL;
	uint16_t x78 = UINT16_MAX;
	int8_t x80 = -2;

	t19 = ((x77|(x78|x79))==x80);

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = -16;
	volatile uint32_t x82 = 79490U;
	uint32_t x83 = 4686812U;
	static volatile int16_t x84 = -91;
	int32_t t20 = 1484868;

	t20 = ((x81|(x82|x83))==x84);

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x86 = UINT8_MAX;
	int16_t x87 = -11;
	int32_t t21 = -25399200;

	t21 = ((x85|(x86|x87))==x88);

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MIN;
	static volatile int32_t t22 = 344899;

	t22 = ((x89|(x90|x91))==x92);

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x93 = INT64_MIN;
	uint64_t x94 = UINT64_MAX;
	int8_t x96 = INT8_MAX;
	int32_t t23 = -61;

	t23 = ((x93|(x94|x95))==x96);

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x97 = INT64_MIN;
	static volatile int32_t x98 = -244146;
	static int16_t x99 = INT16_MIN;
	static int32_t t24 = -186918;

	t24 = ((x97|(x98|x99))==x100);

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x101 = -38;
	static uint32_t x102 = 51948U;
	int16_t x103 = INT16_MAX;
	int64_t x104 = -27310233872640246LL;

	t25 = ((x101|(x102|x103))==x104);

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x105 = INT64_MIN;
	volatile int8_t x106 = INT8_MIN;
	int64_t x107 = -14402478LL;
	static int32_t x108 = INT32_MAX;
	int32_t t26 = -24315;

	t26 = ((x105|(x106|x107))==x108);

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint8_t x109 = 1U;
	int16_t x112 = INT16_MIN;

	t27 = ((x109|(x110|x111))==x112);

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x113 = INT8_MIN;
	volatile uint64_t x114 = 635083LLU;
	int16_t x115 = -1;
	int8_t x116 = INT8_MIN;

	t28 = ((x113|(x114|x115))==x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = INT8_MAX;
	volatile uint64_t x118 = 66318949131LLU;
	int16_t x119 = -1;
	int64_t x120 = -7198430LL;
	volatile int32_t t29 = 112746823;

	t29 = ((x117|(x118|x119))==x120);

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 14162U;
	static uint64_t x122 = UINT64_MAX;
	uint8_t x123 = UINT8_MAX;
	uint16_t x124 = 12U;
	volatile int32_t t30 = -1;

	t30 = ((x121|(x122|x123))==x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int32_t x125 = INT32_MIN;
	uint32_t x126 = 410888U;
	uint16_t x127 = UINT16_MAX;
	uint8_t x128 = UINT8_MAX;

	t31 = ((x125|(x126|x127))==x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x129 = UINT64_MAX;
	static volatile int32_t x130 = INT32_MIN;
	volatile int64_t x131 = INT64_MAX;
	volatile int16_t x132 = INT16_MAX;
	int32_t t32 = 1752;

	t32 = ((x129|(x130|x131))==x132);

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x133 = -1;
	int64_t x134 = INT64_MAX;
	int32_t x135 = INT32_MAX;

	t33 = ((x133|(x134|x135))==x136);

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint64_t x137 = 203LLU;
	volatile int16_t x138 = INT16_MAX;
	int64_t x139 = INT64_MAX;
	int16_t x140 = -1;
	int32_t t34 = 1;

	t34 = ((x137|(x138|x139))==x140);

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = -1;
	int16_t x142 = -30;
	int64_t x143 = 368LL;
	uint32_t x144 = 160698945U;

	t35 = ((x141|(x142|x143))==x144);

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x145 = INT32_MIN;
	static uint64_t x146 = 86019820474125437LLU;
	static int32_t x147 = 1;
	int32_t x148 = INT32_MIN;
	static int32_t t36 = -16355;

	t36 = ((x145|(x146|x147))==x148);

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 99U;
	static volatile uint8_t x150 = 16U;
	int16_t x151 = -14;
	int8_t x152 = 0;
	int32_t t37 = -5371;

	t37 = ((x149|(x150|x151))==x152);

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x154 = INT64_MIN;
	uint16_t x155 = UINT16_MAX;

	t38 = ((x153|(x154|x155))==x156);

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = -14540612683LL;
	static int8_t x158 = INT8_MIN;
	int32_t x160 = -903915544;
	volatile int32_t t39 = -978;

	t39 = ((x157|(x158|x159))==x160);

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x161 = -483;
	uint16_t x162 = 14467U;
	int32_t x163 = 1634454;
	int16_t x164 = INT16_MIN;
	int32_t t40 = 18;

	t40 = ((x161|(x162|x163))==x164);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x165 = -1;
	int16_t x166 = 503;
	int32_t t41 = -10;

	t41 = ((x165|(x166|x167))==x168);

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x170 = INT16_MIN;
	int16_t x171 = INT16_MAX;
	static int32_t t42 = -401991;

	t42 = ((x169|(x170|x171))==x172);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	static uint32_t x173 = 2U;
	int32_t x175 = INT32_MIN;
	uint16_t x176 = 117U;

	t43 = ((x173|(x174|x175))==x176);

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 0U;
	int64_t x178 = -181368624834LL;
	static volatile int16_t x179 = 2873;
	uint8_t x180 = UINT8_MAX;

	t44 = ((x177|(x178|x179))==x180);

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 1442U;
	int16_t x183 = 2026;
	int16_t x184 = INT16_MIN;
	static int32_t t45 = -15;

	t45 = ((x181|(x182|x183))==x184);

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x186 = UINT16_MAX;
	static int8_t x187 = INT8_MAX;
	static int8_t x188 = -2;

	t46 = ((x185|(x186|x187))==x188);

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = 3U;
	int8_t x191 = INT8_MIN;
	volatile uint64_t x192 = 223124218LLU;

	t47 = ((x189|(x190|x191))==x192);

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x194 = -1;
	uint8_t x195 = 1U;
	int64_t x196 = -583625424620569088LL;
	int32_t t48 = -30283;

	t48 = ((x193|(x194|x195))==x196);

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x197 = 5U;
	int8_t x198 = INT8_MIN;
	uint64_t x199 = UINT64_MAX;
	uint16_t x200 = 11799U;

	t49 = ((x197|(x198|x199))==x200);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint8_t x201 = 32U;
	int64_t x203 = INT64_MIN;
	int32_t x204 = INT32_MAX;
	volatile int32_t t50 = 1146;

	t50 = ((x201|(x202|x203))==x204);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x205 = 752U;
	int8_t x206 = INT8_MIN;
	static int8_t x207 = INT8_MAX;
	static uint64_t x208 = UINT64_MAX;
	volatile int32_t t51 = 1144323;

	t51 = ((x205|(x206|x207))==x208);

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x210 = -1170;
	int32_t x212 = INT32_MIN;
	int32_t t52 = -8;

	t52 = ((x209|(x210|x211))==x212);

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x213 = -38;
	int64_t x214 = 539LL;
	uint16_t x215 = 2U;
	static int8_t x216 = -1;
	volatile int32_t t53 = 3;

	t53 = ((x213|(x214|x215))==x216);

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = -823946;
	int8_t x218 = -1;
	int8_t x219 = INT8_MAX;
	volatile uint16_t x220 = UINT16_MAX;
	static volatile int32_t t54 = -473;

	t54 = ((x217|(x218|x219))==x220);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x221 = 24U;
	static uint32_t x222 = UINT32_MAX;
	volatile int32_t x224 = -1;
	static int32_t t55 = 2;

	t55 = ((x221|(x222|x223))==x224);

	if (t55 != 1) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = 0U;
	static int8_t x226 = -1;
	volatile int16_t x228 = -868;
	int32_t t56 = 822;

	t56 = ((x225|(x226|x227))==x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x229 = INT32_MIN;
	int8_t x230 = INT8_MIN;
	uint8_t x232 = 29U;
	volatile int32_t t57 = 17;

	t57 = ((x229|(x230|x231))==x232);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x234 = 12937;
	volatile int32_t x235 = -2969357;
	int32_t t58 = 711736;

	t58 = ((x233|(x234|x235))==x236);

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x237 = -239;
	int64_t x238 = -1LL;
	static int8_t x239 = INT8_MIN;

	t59 = ((x237|(x238|x239))==x240);

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x241 = UINT16_MAX;
	volatile uint32_t x242 = 1U;
	int64_t x243 = 1266259LL;
	static int8_t x244 = -1;

	t60 = ((x241|(x242|x243))==x244);

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int64_t x246 = INT64_MAX;
	int64_t x247 = INT64_MIN;
	int8_t x248 = -58;
	volatile int32_t t61 = 31;

	t61 = ((x245|(x246|x247))==x248);

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = UINT8_MAX;
	volatile uint16_t x251 = 25393U;
	int64_t x252 = INT64_MIN;
	int32_t t62 = 59;

	t62 = ((x249|(x250|x251))==x252);

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int8_t x253 = INT8_MIN;
	static uint16_t x254 = UINT16_MAX;
	int8_t x255 = -10;
	uint8_t x256 = 0U;
	static volatile int32_t t63 = 45;

	t63 = ((x253|(x254|x255))==x256);

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x258 = INT16_MAX;
	int32_t x259 = -21563802;
	int16_t x260 = -1;
	volatile int32_t t64 = -20;

	t64 = ((x257|(x258|x259))==x260);

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x262 = -1;
	int16_t x263 = 11892;
	volatile int32_t t65 = 88;

	t65 = ((x261|(x262|x263))==x264);

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	uint64_t x266 = 79754639LLU;
	int32_t x267 = -2135;
	uint8_t x268 = 2U;
	static volatile int32_t t66 = 59;

	t66 = ((x265|(x266|x267))==x268);

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x269 = 34;
	uint64_t x270 = UINT64_MAX;
	static uint16_t x271 = 89U;
	static int32_t t67 = 15;

	t67 = ((x269|(x270|x271))==x272);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x273 = INT64_MIN;
	static uint32_t x274 = 12U;
	volatile uint8_t x275 = 0U;
	int16_t x276 = 395;
	static volatile int32_t t68 = -1;

	t68 = ((x273|(x274|x275))==x276);

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x277 = INT64_MAX;
	static int32_t x278 = INT32_MIN;
	static int16_t x279 = INT16_MAX;
	int16_t x280 = -1;
	volatile int32_t t69 = -4608;

	t69 = ((x277|(x278|x279))==x280);

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x281 = INT16_MIN;
	volatile uint64_t x282 = 7961842026621LLU;
	uint16_t x283 = 2U;
	static volatile int32_t t70 = -86084625;

	t70 = ((x281|(x282|x283))==x284);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x285 = -1LL;
	uint16_t x288 = 360U;

	t71 = ((x285|(x286|x287))==x288);

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = INT16_MAX;
	volatile int16_t x290 = INT16_MIN;
	uint8_t x291 = UINT8_MAX;

	t72 = ((x289|(x290|x291))==x292);

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = -1LL;
	int8_t x294 = 1;
	int32_t x295 = 1;
	static volatile uint64_t x296 = UINT64_MAX;
	int32_t t73 = -97457;

	t73 = ((x293|(x294|x295))==x296);

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	static int32_t x298 = INT32_MIN;
	int64_t x299 = -1LL;
	int64_t x300 = -1LL;
	int32_t t74 = -7262041;

	t74 = ((x297|(x298|x299))==x300);

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int64_t x301 = -257LL;
	static uint8_t x302 = 79U;
	volatile int64_t x303 = -405LL;
	int16_t x304 = 4;
	volatile int32_t t75 = -61765301;

	t75 = ((x301|(x302|x303))==x304);

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = INT16_MAX;
	volatile uint8_t x306 = 31U;
	uint64_t x307 = 120363904212613LLU;
	uint8_t x308 = 1U;
	int32_t t76 = -3285;

	t76 = ((x305|(x306|x307))==x308);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x310 = INT8_MIN;
	int32_t x311 = 1078267;
	int32_t x312 = INT32_MAX;
	int32_t t77 = -97841;

	t77 = ((x309|(x310|x311))==x312);

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x315 = 9365;
	int64_t x316 = -37528998306964LL;
	int32_t t78 = 0;

	t78 = ((x313|(x314|x315))==x316);

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x317 = 110U;
	int8_t x318 = 1;
	static int32_t x319 = INT32_MAX;
	static int8_t x320 = INT8_MIN;

	t79 = ((x317|(x318|x319))==x320);

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x321 = -1LL;
	uint8_t x322 = 54U;
	static uint16_t x323 = 321U;
	uint8_t x324 = UINT8_MAX;
	int32_t t80 = -413469;

	t80 = ((x321|(x322|x323))==x324);

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x325 = UINT32_MAX;
	int16_t x326 = INT16_MIN;
	uint8_t x327 = 12U;
	int32_t x328 = -31254091;
	volatile int32_t t81 = 106;

	t81 = ((x325|(x326|x327))==x328);

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = -1;
	int8_t x330 = -2;
	int8_t x331 = INT8_MIN;
	int32_t x332 = 224;
	volatile int32_t t82 = -996;

	t82 = ((x329|(x330|x331))==x332);

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x333 = UINT8_MAX;
	static uint64_t x334 = 50201205237905LLU;
	int32_t x335 = INT32_MAX;
	int32_t x336 = 878156065;
	static int32_t t83 = 1746958;

	t83 = ((x333|(x334|x335))==x336);

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x337 = -24;
	static uint16_t x338 = 9U;
	int16_t x340 = -1;
	volatile int32_t t84 = -622096;

	t84 = ((x337|(x338|x339))==x340);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint64_t x341 = 46414634LLU;
	int32_t x342 = 136;
	int8_t x343 = -10;
	volatile uint32_t x344 = 16U;
	int32_t t85 = 31716881;

	t85 = ((x341|(x342|x343))==x344);

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MAX;
	volatile int8_t x346 = INT8_MAX;
	uint16_t x348 = UINT16_MAX;
	int32_t t86 = 493708;

	t86 = ((x345|(x346|x347))==x348);

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = INT8_MIN;
	volatile int8_t x350 = INT8_MAX;
	int32_t x351 = INT32_MIN;
	static int32_t t87 = -121281702;

	t87 = ((x349|(x350|x351))==x352);

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int32_t x353 = INT32_MAX;
	uint64_t x355 = 8304644392076299LLU;
	static uint8_t x356 = UINT8_MAX;
	int32_t t88 = -32;

	t88 = ((x353|(x354|x355))==x356);

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint64_t x357 = 385392679516LLU;
	uint16_t x359 = UINT16_MAX;
	uint8_t x360 = 0U;
	int32_t t89 = 75;

	t89 = ((x357|(x358|x359))==x360);

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint16_t x362 = 22U;
	uint8_t x363 = UINT8_MAX;
	uint64_t x364 = UINT64_MAX;
	static int32_t t90 = -61705;

	t90 = ((x361|(x362|x363))==x364);

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 22U;
	int8_t x366 = INT8_MAX;
	int8_t x367 = INT8_MIN;
	int64_t x368 = INT64_MIN;

	t91 = ((x365|(x366|x367))==x368);

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x370 = UINT64_MAX;
	volatile uint16_t x371 = 195U;
	int16_t x372 = 22;
	volatile int32_t t92 = 200;

	t92 = ((x369|(x370|x371))==x372);

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x374 = INT16_MIN;
	volatile uint64_t x375 = 34573257259793159LLU;
	int64_t x376 = -108LL;
	volatile int32_t t93 = -1;

	t93 = ((x373|(x374|x375))==x376);

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x377 = 183U;
	static volatile uint16_t x378 = UINT16_MAX;
	volatile uint64_t x379 = 2038785LLU;
	int64_t x380 = INT64_MAX;
	int32_t t94 = 61951187;

	t94 = ((x377|(x378|x379))==x380);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static uint8_t x381 = 0U;
	uint64_t x383 = 6852290838LLU;
	int32_t t95 = -31650;

	t95 = ((x381|(x382|x383))==x384);

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = INT32_MIN;
	static uint8_t x387 = 2U;
	int32_t t96 = -228;

	t96 = ((x385|(x386|x387))==x388);

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -1;
	int8_t x390 = INT8_MIN;
	static uint16_t x391 = 1291U;
	int16_t x392 = INT16_MIN;
	int32_t t97 = -510084;

	t97 = ((x389|(x390|x391))==x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x393 = 213931301LL;
	uint64_t x394 = 40507944586607764LLU;
	volatile uint16_t x395 = 28U;
	int32_t x396 = -1;
	volatile int32_t t98 = -4787265;

	t98 = ((x393|(x394|x395))==x396);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint8_t x397 = 5U;
	int32_t x398 = -178968;
	uint16_t x399 = 79U;
	static volatile int16_t x400 = INT16_MIN;

	t99 = ((x397|(x398|x399))==x400);

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

