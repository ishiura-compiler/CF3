#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x3 = 103U;
volatile int64_t x6 = INT64_MAX;
volatile uint64_t t1 = 82754642752LLU;
uint64_t x28 = UINT64_MAX;
volatile uint64_t t6 = 416367LLU;
int32_t t7 = 7275183;
volatile uint16_t x34 = UINT16_MAX;
int16_t x35 = INT16_MAX;
int32_t x37 = INT32_MIN;
int64_t x43 = INT64_MIN;
static volatile uint64_t t10 = 4231489726890405LLU;
uint32_t x45 = 428909U;
uint64_t x49 = 43252994330883LLU;
uint32_t x54 = 606154U;
volatile uint32_t x56 = 10U;
volatile uint8_t x60 = 48U;
static int64_t x66 = -1LL;
int16_t x68 = 8152;
int64_t x71 = -29009LL;
int8_t x73 = INT8_MAX;
volatile int16_t x78 = -1;
int16_t x84 = -1;
volatile int32_t t20 = -29;
static volatile int64_t x91 = 32098LL;
int8_t x95 = INT8_MIN;
int16_t x103 = -1;
int32_t x123 = INT32_MAX;
int64_t x128 = 76528137LL;
int16_t x130 = -1;
int32_t x140 = INT32_MIN;
static int64_t x144 = INT64_MIN;
volatile int64_t x146 = INT64_MIN;
uint16_t x148 = UINT16_MAX;
int16_t x150 = INT16_MIN;
int32_t x155 = INT32_MAX;
static int16_t x157 = -314;
uint16_t x160 = 2873U;
uint16_t x164 = 10955U;
volatile int32_t t40 = -273010821;
int8_t x165 = INT8_MAX;
uint32_t t42 = 0U;
int16_t x181 = 3;
static volatile int32_t t45 = -2927274;
volatile int32_t t46 = -26133;
static uint64_t t50 = 105702379309714595LLU;
volatile int32_t x206 = -83;
volatile int32_t t56 = 712439841;
volatile int64_t x231 = INT64_MIN;
uint32_t x238 = 347645182U;
uint64_t x239 = UINT64_MAX;
volatile int64_t t59 = 67157LL;
uint32_t x261 = UINT32_MAX;
uint64_t x265 = 789070916367762128LLU;
int32_t x277 = INT32_MIN;
int32_t x290 = INT32_MAX;
int8_t x296 = INT8_MIN;
int16_t x299 = -1;
uint64_t x302 = 26334LLU;
int64_t x306 = -70579381132633336LL;
volatile int16_t x307 = -1;
volatile int32_t t76 = 1822957;
static int16_t x309 = -1;
int32_t x315 = -1244722;
int16_t x319 = INT16_MIN;
int16_t x322 = 708;
volatile int16_t x325 = -42;
int16_t x330 = -1;
uint16_t x333 = UINT16_MAX;
static uint16_t x334 = 1U;
int8_t x336 = -1;
int8_t x339 = 14;
uint8_t x343 = UINT8_MAX;
int64_t t85 = -1546711256622LL;
int8_t x347 = INT8_MIN;
int8_t x354 = -45;
uint32_t x355 = 1050130677U;
int32_t x360 = -6747652;
int64_t x361 = INT64_MIN;
uint8_t x364 = 21U;
volatile int64_t t90 = 65766629469130382LL;
int32_t t91 = -247292331;
uint16_t x372 = UINT16_MAX;
static uint16_t x373 = 498U;
int32_t x380 = INT32_MIN;
static volatile int16_t x381 = INT16_MIN;
int32_t x385 = INT32_MAX;
static int32_t x390 = INT32_MIN;
int32_t t97 = 196231;
static uint64_t t98 = 214337441384LLU;
int32_t x400 = -5179382;


void f0(void) {
	static int8_t x1 = 54;
	uint64_t x2 = UINT64_MAX;
	int8_t x4 = INT8_MIN;
	int32_t t0 = 55;

	t0 = (x1&((x2<=x3)%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static uint8_t x5 = UINT8_MAX;
	static int8_t x7 = 1;
	static uint64_t x8 = 2185999097468690518LLU;

	t1 = (x5&((x6<=x7)%x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 125U;
	int8_t x10 = 1;
	int64_t x11 = INT64_MAX;
	int16_t x12 = INT16_MIN;
	volatile int32_t t2 = 297633;

	t2 = (x9&((x10<=x11)%x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = -13023;
	static int16_t x14 = 614;
	uint8_t x15 = UINT8_MAX;
	static int64_t x16 = INT64_MIN;
	volatile int64_t t3 = 768660674976157LL;

	t3 = (x13&((x14<=x15)%x16));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 15U;
	static uint16_t x18 = 101U;
	int32_t x19 = INT32_MIN;
	int8_t x20 = -1;
	static int32_t t4 = -1;

	t4 = (x17&((x18<=x19)%x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint16_t x22 = 1U;
	int32_t x23 = 7143;
	int16_t x24 = INT16_MIN;
	int32_t t5 = -339273;

	t5 = (x21&((x22<=x23)%x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static int64_t x25 = -3539192527LL;
	int32_t x26 = 105;
	static int64_t x27 = INT64_MIN;

	t6 = (x25&((x26<=x27)%x28));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x29 = UINT16_MAX;
	static volatile uint8_t x30 = 25U;
	int8_t x31 = INT8_MIN;
	uint8_t x32 = 13U;

	t7 = (x29&((x30<=x31)%x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = 1045LL;
	int16_t x36 = INT16_MAX;
	int64_t t8 = -294242680LL;

	t8 = (x33&((x34<=x35)%x36));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = -1;
	uint8_t x39 = UINT8_MAX;
	static int16_t x40 = 6;
	int32_t t9 = -8256441;

	t9 = (x37&((x38<=x39)%x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	int8_t x42 = INT8_MIN;
	uint16_t x44 = 999U;

	t10 = (x41&((x42<=x43)%x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x46 = 2188973878415417947LLU;
	uint16_t x47 = 13279U;
	int32_t x48 = -38377;
	uint32_t t11 = 112U;

	t11 = (x45&((x46<=x47)%x48));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x50 = INT64_MIN;
	int16_t x51 = -1;
	uint64_t x52 = 8583148050LLU;
	uint64_t t12 = 761709783817208LLU;

	t12 = (x49&((x50<=x51)%x52));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MAX;
	volatile int8_t x55 = -1;
	int64_t t13 = -2185502851137522LL;

	t13 = (x53&((x54<=x55)%x56));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MIN;
	uint16_t x58 = UINT16_MAX;
	volatile int8_t x59 = -1;
	int32_t t14 = 4023;

	t14 = (x57&((x58<=x59)%x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -2;
	int8_t x62 = -1;
	uint8_t x63 = 14U;
	uint32_t x64 = UINT32_MAX;
	volatile uint32_t t15 = 433215386U;

	t15 = (x61&((x62<=x63)%x64));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x65 = UINT16_MAX;
	int8_t x67 = INT8_MIN;
	static int32_t t16 = -3;

	t16 = (x65&((x66<=x67)%x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x69 = UINT8_MAX;
	int8_t x70 = -1;
	uint8_t x72 = 1U;
	int32_t t17 = -1;

	t17 = (x69&((x70<=x71)%x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x74 = UINT8_MAX;
	int32_t x75 = INT32_MAX;
	static volatile int32_t x76 = -1;
	volatile int32_t t18 = 0;

	t18 = (x73&((x74<=x75)%x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x77 = INT16_MAX;
	int8_t x79 = -1;
	static int32_t x80 = 4909;
	volatile int32_t t19 = -362846376;

	t19 = (x77&((x78<=x79)%x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x81 = -1018;
	static uint64_t x82 = 202LLU;
	uint16_t x83 = 29U;

	t20 = (x81&((x82<=x83)%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MIN;
	volatile int32_t x86 = -231860950;
	static int32_t x87 = INT32_MIN;
	int16_t x88 = INT16_MIN;
	volatile int32_t t21 = 939600380;

	t21 = (x85&((x86<=x87)%x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x89 = -11626LL;
	static int64_t x90 = INT64_MIN;
	static volatile int64_t x92 = -8LL;
	volatile int64_t t22 = 383LL;

	t22 = (x89&((x90<=x91)%x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint16_t x93 = 3241U;
	uint64_t x94 = 25007349541017677LLU;
	static int8_t x96 = -12;
	int32_t t23 = 7180372;

	t23 = (x93&((x94<=x95)%x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	static int16_t x98 = INT16_MIN;
	static int8_t x99 = 0;
	int64_t x100 = INT64_MAX;
	static volatile int64_t t24 = 949LL;

	t24 = (x97&((x98<=x99)%x100));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	static uint32_t x101 = 1000193362U;
	int8_t x102 = -1;
	int16_t x104 = -3;
	static uint32_t t25 = 308928269U;

	t25 = (x101&((x102<=x103)%x104));

	if (t25 != 0U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int64_t x105 = 69433225549610LL;
	int16_t x106 = INT16_MIN;
	static volatile int32_t x107 = INT32_MAX;
	int16_t x108 = -8;
	int64_t t26 = -31864065LL;

	t26 = (x105&((x106<=x107)%x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint16_t x109 = 635U;
	int8_t x110 = INT8_MIN;
	int16_t x111 = INT16_MAX;
	int16_t x112 = -1;
	volatile int32_t t27 = -3729;

	t27 = (x109&((x110<=x111)%x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MIN;
	volatile int16_t x114 = -1;
	uint32_t x115 = 27U;
	uint8_t x116 = UINT8_MAX;
	volatile int32_t t28 = 1;

	t28 = (x113&((x114<=x115)%x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = 1LL;
	static int64_t x118 = INT64_MAX;
	volatile int16_t x119 = -1;
	int8_t x120 = -1;
	volatile int64_t t29 = -35944517104LL;

	t29 = (x117&((x118<=x119)%x120));

	if (t29 != 0LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x121 = UINT64_MAX;
	int16_t x122 = INT16_MIN;
	volatile int32_t x124 = INT32_MIN;
	uint64_t t30 = 14408252LLU;

	t30 = (x121&((x122<=x123)%x124));

	if (t30 != 1LLU) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = 0;
	int8_t x126 = INT8_MIN;
	uint8_t x127 = 0U;
	int64_t t31 = 1LL;

	t31 = (x125&((x126<=x127)%x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x129 = UINT16_MAX;
	uint32_t x131 = UINT32_MAX;
	static uint8_t x132 = UINT8_MAX;
	volatile int32_t t32 = -520;

	t32 = (x129&((x130<=x131)%x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = 5034U;
	static volatile int64_t x134 = INT64_MIN;
	uint32_t x135 = 0U;
	volatile int64_t x136 = INT64_MIN;
	int64_t t33 = 234644998728422134LL;

	t33 = (x133&((x134<=x135)%x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x137 = UINT16_MAX;
	int64_t x138 = -1LL;
	int8_t x139 = INT8_MAX;
	volatile int32_t t34 = 174199;

	t34 = (x137&((x138<=x139)%x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MAX;
	volatile int64_t x142 = 390446LL;
	int16_t x143 = INT16_MIN;
	volatile int64_t t35 = -7416180877LL;

	t35 = (x141&((x142<=x143)%x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x145 = -1LL;
	int32_t x147 = 1852;
	int64_t t36 = 65974LL;

	t36 = (x145&((x146<=x147)%x148));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x149 = UINT16_MAX;
	uint16_t x151 = 2163U;
	uint64_t x152 = UINT64_MAX;
	uint64_t t37 = 205007873966LLU;

	t37 = (x149&((x150<=x151)%x152));

	if (t37 != 1LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x153 = -4661040096LL;
	int8_t x154 = -1;
	static int32_t x156 = INT32_MAX;
	volatile int64_t t38 = -71910168218739132LL;

	t38 = (x153&((x154<=x155)%x156));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int8_t x158 = -1;
	int8_t x159 = -41;
	int32_t t39 = 1828947;

	t39 = (x157&((x158<=x159)%x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x161 = INT8_MIN;
	int32_t x162 = -1;
	int64_t x163 = -1LL;

	t40 = (x161&((x162<=x163)%x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x166 = INT32_MIN;
	volatile uint8_t x167 = 0U;
	volatile int32_t x168 = -1;
	volatile int32_t t41 = -250952079;

	t41 = (x165&((x166<=x167)%x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	uint32_t x170 = 67641957U;
	uint32_t x171 = 9921U;
	uint32_t x172 = 5776672U;

	t42 = (x169&((x170<=x171)%x172));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = UINT32_MAX;
	static int8_t x174 = INT8_MAX;
	uint64_t x175 = 13504LLU;
	static uint64_t x176 = UINT64_MAX;
	volatile uint64_t t43 = 16551847LLU;

	t43 = (x173&((x174<=x175)%x176));

	if (t43 != 1LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = 11U;
	uint16_t x178 = 5U;
	static uint64_t x179 = UINT64_MAX;
	uint32_t x180 = 598265U;
	uint32_t t44 = 505U;

	t44 = (x177&((x178<=x179)%x180));

	if (t44 != 1U) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x182 = UINT64_MAX;
	int16_t x183 = -1;
	uint16_t x184 = UINT16_MAX;

	t45 = (x181&((x182<=x183)%x184));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 47U;
	int32_t x186 = -790863;
	volatile int64_t x187 = 20728229LL;
	int16_t x188 = -1;

	t46 = (x185&((x186<=x187)%x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	static int16_t x189 = INT16_MIN;
	int64_t x190 = INT64_MAX;
	int8_t x191 = -1;
	static int32_t x192 = -1;
	static volatile int32_t t47 = -24094853;

	t47 = (x189&((x190<=x191)%x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = 19742374;
	uint64_t x194 = UINT64_MAX;
	int8_t x195 = INT8_MIN;
	uint16_t x196 = UINT16_MAX;
	volatile int32_t t48 = 260860625;

	t48 = (x193&((x194<=x195)%x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint64_t x197 = 3419157454LLU;
	volatile int8_t x198 = 0;
	volatile int32_t x199 = INT32_MAX;
	static volatile int16_t x200 = -44;
	volatile uint64_t t49 = 1LLU;

	t49 = (x197&((x198<=x199)%x200));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x201 = UINT64_MAX;
	int8_t x202 = -1;
	int8_t x203 = INT8_MIN;
	int64_t x204 = INT64_MAX;

	t50 = (x201&((x202<=x203)%x204));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x205 = INT8_MAX;
	int16_t x207 = INT16_MAX;
	int64_t x208 = INT64_MIN;
	int64_t t51 = -7615476LL;

	t51 = (x205&((x206<=x207)%x208));

	if (t51 != 1LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x209 = UINT32_MAX;
	volatile int32_t x210 = INT32_MIN;
	volatile int16_t x211 = INT16_MAX;
	volatile uint64_t x212 = UINT64_MAX;
	volatile uint64_t t52 = 14LLU;

	t52 = (x209&((x210<=x211)%x212));

	if (t52 != 1LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MAX;
	int64_t x214 = INT64_MIN;
	int64_t x215 = INT64_MIN;
	int8_t x216 = INT8_MAX;
	static volatile int32_t t53 = 313488364;

	t53 = (x213&((x214<=x215)%x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x217 = INT32_MIN;
	static volatile uint8_t x218 = UINT8_MAX;
	volatile uint16_t x219 = UINT16_MAX;
	static int32_t x220 = 323651;
	static int32_t t54 = 111032870;

	t54 = (x217&((x218<=x219)%x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x221 = -1LL;
	int32_t x222 = INT32_MIN;
	int8_t x223 = 14;
	int64_t x224 = 260492898994158LL;
	static volatile int64_t t55 = -2829LL;

	t55 = (x221&((x222<=x223)%x224));

	if (t55 != 1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	static int16_t x226 = INT16_MIN;
	int16_t x227 = INT16_MAX;
	static volatile int8_t x228 = INT8_MIN;

	t56 = (x225&((x226<=x227)%x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = 3;
	uint16_t x230 = 3716U;
	static int64_t x232 = 26971221471LL;
	static volatile int64_t t57 = 2348176LL;

	t57 = (x229&((x230<=x231)%x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x233 = INT16_MIN;
	static volatile int8_t x234 = INT8_MAX;
	volatile int8_t x235 = INT8_MIN;
	int16_t x236 = INT16_MAX;
	volatile int32_t t58 = 30;

	t58 = (x233&((x234<=x235)%x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MAX;
	static volatile int64_t x240 = INT64_MIN;

	t59 = (x237&((x238<=x239)%x240));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x241 = INT32_MAX;
	int32_t x242 = 36;
	static int16_t x243 = INT16_MIN;
	static volatile int64_t x244 = INT64_MAX;
	volatile int64_t t60 = 9LL;

	t60 = (x241&((x242<=x243)%x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = 486960773;
	uint64_t x246 = UINT64_MAX;
	int16_t x247 = -2397;
	static volatile int16_t x248 = INT16_MAX;
	static int32_t t61 = 22;

	t61 = (x245&((x246<=x247)%x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint16_t x249 = 2464U;
	static volatile int8_t x250 = INT8_MAX;
	uint8_t x251 = UINT8_MAX;
	uint32_t x252 = 98442U;
	volatile uint32_t t62 = 55852U;

	t62 = (x249&((x250<=x251)%x252));

	if (t62 != 0U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = 5U;
	int16_t x254 = INT16_MIN;
	volatile int8_t x255 = -14;
	int32_t x256 = INT32_MIN;
	int32_t t63 = -142487522;

	t63 = (x253&((x254<=x255)%x256));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int8_t x257 = INT8_MIN;
	int64_t x258 = 2266LL;
	uint16_t x259 = UINT16_MAX;
	uint64_t x260 = 44113911LLU;
	static volatile uint64_t t64 = 12953836928LLU;

	t64 = (x257&((x258<=x259)%x260));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x262 = INT8_MIN;
	static int32_t x263 = INT32_MIN;
	uint32_t x264 = UINT32_MAX;
	uint32_t t65 = 460872U;

	t65 = (x261&((x262<=x263)%x264));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x266 = UINT16_MAX;
	uint16_t x267 = UINT16_MAX;
	int32_t x268 = INT32_MIN;
	volatile uint64_t t66 = 10871989455LLU;

	t66 = (x265&((x266<=x267)%x268));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x269 = 8077U;
	uint16_t x270 = 1487U;
	int16_t x271 = INT16_MIN;
	static int16_t x272 = INT16_MIN;
	static int32_t t67 = -152807;

	t67 = (x269&((x270<=x271)%x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x273 = -1;
	volatile int64_t x274 = -1LL;
	int8_t x275 = 10;
	uint32_t x276 = UINT32_MAX;
	volatile uint32_t t68 = 8U;

	t68 = (x273&((x274<=x275)%x276));

	if (t68 != 1U) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x278 = 60659394LLU;
	int64_t x279 = INT64_MAX;
	int16_t x280 = -1;
	volatile int32_t t69 = 5390186;

	t69 = (x277&((x278<=x279)%x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = UINT32_MAX;
	static uint8_t x282 = UINT8_MAX;
	int32_t x283 = INT32_MIN;
	int64_t x284 = INT64_MIN;
	volatile int64_t t70 = 15399LL;

	t70 = (x281&((x282<=x283)%x284));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = -1;
	uint16_t x286 = UINT16_MAX;
	uint8_t x287 = 1U;
	int64_t x288 = 77069338LL;
	int64_t t71 = -26382726289LL;

	t71 = (x285&((x286<=x287)%x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x289 = 13U;
	uint32_t x291 = 21547080U;
	int32_t x292 = 4003045;
	volatile int32_t t72 = 4819683;

	t72 = (x289&((x290<=x291)%x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint32_t x293 = 1273570702U;
	int16_t x294 = INT16_MAX;
	int64_t x295 = -1LL;
	volatile uint32_t t73 = 19558305U;

	t73 = (x293&((x294<=x295)%x296));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MAX;
	volatile uint16_t x298 = UINT16_MAX;
	int64_t x300 = INT64_MAX;
	int64_t t74 = 858LL;

	t74 = (x297&((x298<=x299)%x300));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x301 = -1LL;
	uint32_t x303 = 31535838U;
	static int64_t x304 = INT64_MAX;
	volatile int64_t t75 = 28543LL;

	t75 = (x301&((x302<=x303)%x304));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x305 = 7273U;
	static int32_t x308 = 207;

	t76 = (x305&((x306<=x307)%x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x310 = INT16_MIN;
	int32_t x311 = INT32_MAX;
	int32_t x312 = INT32_MIN;
	int32_t t77 = -2754736;

	t77 = (x309&((x310<=x311)%x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	static uint16_t x313 = UINT16_MAX;
	volatile int16_t x314 = -77;
	uint64_t x316 = 25155LLU;
	volatile uint64_t t78 = 820LLU;

	t78 = (x313&((x314<=x315)%x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x317 = 0;
	static int8_t x318 = -1;
	int64_t x320 = INT64_MIN;
	static volatile int64_t t79 = -60165525664421LL;

	t79 = (x317&((x318<=x319)%x320));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int8_t x321 = -1;
	static int8_t x323 = INT8_MIN;
	uint8_t x324 = 64U;
	static volatile int32_t t80 = 282637565;

	t80 = (x321&((x322<=x323)%x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile uint32_t x326 = 72673542U;
	int16_t x327 = INT16_MIN;
	int64_t x328 = INT64_MIN;
	volatile int64_t t81 = -5063623274708LL;

	t81 = (x325&((x326<=x327)%x328));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x329 = 2861;
	int8_t x331 = INT8_MIN;
	int64_t x332 = INT64_MAX;
	volatile int64_t t82 = -10186533124738LL;

	t82 = (x329&((x330<=x331)%x332));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x335 = UINT32_MAX;
	static int32_t t83 = -5847991;

	t83 = (x333&((x334<=x335)%x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int8_t x337 = INT8_MIN;
	uint8_t x338 = UINT8_MAX;
	int32_t x340 = INT32_MIN;
	int32_t t84 = 81429;

	t84 = (x337&((x338<=x339)%x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	static volatile uint8_t x342 = UINT8_MAX;
	static volatile int64_t x344 = -24217204270310LL;

	t85 = (x341&((x342<=x343)%x344));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x345 = -1;
	static uint16_t x346 = UINT16_MAX;
	int16_t x348 = INT16_MIN;
	int32_t t86 = 10;

	t86 = (x345&((x346<=x347)%x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -10;
	int32_t x350 = 210094;
	int8_t x351 = -1;
	uint8_t x352 = 1U;
	int32_t t87 = -37041614;

	t87 = (x349&((x350<=x351)%x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint8_t x353 = UINT8_MAX;
	int8_t x356 = -11;
	volatile int32_t t88 = 716;

	t88 = (x353&((x354<=x355)%x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x357 = 305933;
	uint16_t x358 = UINT16_MAX;
	int32_t x359 = INT32_MIN;
	int32_t t89 = -95319806;

	t89 = (x357&((x358<=x359)%x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x362 = INT32_MAX;
	uint8_t x363 = UINT8_MAX;

	t90 = (x361&((x362<=x363)%x364));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x365 = -1;
	int16_t x366 = INT16_MIN;
	static int16_t x367 = INT16_MAX;
	int16_t x368 = -1;

	t91 = (x365&((x366<=x367)%x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x369 = 303U;
	int16_t x370 = -1;
	int8_t x371 = INT8_MIN;
	volatile uint32_t t92 = 525228392U;

	t92 = (x369&((x370<=x371)%x372));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x374 = 29907355817LL;
	int32_t x375 = 1702177;
	int8_t x376 = 15;
	int32_t t93 = -151425170;

	t93 = (x373&((x374<=x375)%x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x377 = INT16_MAX;
	static uint64_t x378 = 18574070838LLU;
	uint64_t x379 = UINT64_MAX;
	volatile int32_t t94 = 28415053;

	t94 = (x377&((x378<=x379)%x380));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x382 = INT64_MIN;
	int8_t x383 = 5;
	int16_t x384 = 20;
	int32_t t95 = 9;

	t95 = (x381&((x382<=x383)%x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x386 = INT8_MIN;
	volatile uint32_t x387 = UINT32_MAX;
	int32_t x388 = INT32_MIN;
	volatile int32_t t96 = -23;

	t96 = (x385&((x386<=x387)%x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = INT32_MIN;
	static int8_t x391 = INT8_MAX;
	int32_t x392 = INT32_MIN;

	t97 = (x389&((x390<=x391)%x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 691LLU;
	uint16_t x394 = 134U;
	static volatile int8_t x395 = -54;
	int8_t x396 = INT8_MAX;

	t98 = (x393&((x394<=x395)%x396));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x397 = UINT32_MAX;
	volatile uint64_t x398 = 236262783LLU;
	int16_t x399 = 47;
	volatile uint32_t t99 = 73762U;

	t99 = (x397&((x398<=x399)%x400));

	if (t99 != 0U) { NG(); } else { ; }
	
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

