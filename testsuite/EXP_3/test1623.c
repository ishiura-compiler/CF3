#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x1 = 11U;
int16_t x4 = -1;
int64_t x5 = -15995797LL;
uint32_t x7 = 3895U;
int32_t t1 = -40478153;
volatile int32_t x11 = -1;
static int32_t x20 = -1;
volatile uint32_t x21 = UINT32_MAX;
int32_t x34 = -132686;
volatile int64_t x35 = -1LL;
uint8_t x42 = 42U;
int8_t x48 = 7;
int8_t x56 = -1;
volatile int64_t x65 = -1LL;
static int16_t x69 = -1;
int32_t t17 = -770480551;
volatile int32_t x74 = INT32_MAX;
int64_t x78 = INT64_MIN;
int64_t x83 = -1LL;
int16_t x89 = -1;
int32_t t22 = -116;
uint8_t x96 = 18U;
uint32_t x97 = 68705U;
volatile int64_t x102 = -1LL;
uint16_t x104 = 0U;
int32_t t25 = 202755;
volatile int32_t x112 = INT32_MIN;
int8_t x119 = INT8_MIN;
volatile int32_t t31 = -142;
int16_t x129 = INT16_MIN;
uint8_t x130 = 18U;
uint16_t x132 = 7193U;
int32_t t32 = 1642;
int8_t x133 = INT8_MIN;
int32_t t33 = -46;
int64_t x145 = INT64_MIN;
static int32_t t37 = 3;
int16_t x153 = -1;
int64_t x156 = INT64_MAX;
int8_t x157 = -1;
volatile int32_t x158 = -13223107;
int32_t t39 = -443245167;
int32_t x174 = -1;
uint64_t x179 = UINT64_MAX;
int32_t t45 = -10766543;
static int32_t x185 = 609;
static int32_t x186 = 14398;
int32_t t48 = 233784;
int32_t x197 = -153;
int32_t x198 = 80392915;
uint16_t x205 = 10U;
uint32_t x207 = 391U;
uint64_t x210 = 0LLU;
uint16_t x213 = 396U;
int32_t t53 = 1664;
int8_t x221 = INT8_MIN;
int32_t t58 = -50333;
volatile uint16_t x237 = 2016U;
int32_t x239 = INT32_MIN;
static int64_t x240 = INT64_MIN;
volatile int32_t t59 = 489;
volatile int32_t t62 = -1;
uint16_t x256 = UINT16_MAX;
int64_t x257 = INT64_MIN;
uint32_t x266 = 32172100U;
static volatile int32_t t66 = -2036371;
int64_t x270 = -1LL;
uint64_t x272 = 25042LLU;
uint32_t x282 = 1U;
static int32_t t70 = 4762;
uint64_t x291 = UINT64_MAX;
volatile int64_t x292 = 124467236LL;
static int64_t x298 = -15925224LL;
int16_t x302 = INT16_MIN;
int32_t t75 = 444;
volatile int32_t t76 = -11828870;
uint8_t x310 = 12U;
int32_t x314 = 361928;
volatile int16_t x315 = -1;
uint16_t x324 = 0U;
static volatile int32_t t80 = 1123514;
int32_t t81 = 227972;
int16_t x332 = INT16_MIN;
int32_t x338 = INT32_MIN;
static volatile int32_t t84 = -3795;
uint32_t x342 = 130943U;
int32_t x345 = 2;
int8_t x347 = -1;
volatile int64_t x351 = -2843697824LL;
volatile int16_t x353 = -1;
int16_t x356 = INT16_MIN;
int8_t x357 = -17;
volatile int16_t x361 = INT16_MIN;
int16_t x363 = 4092;
uint8_t x364 = UINT8_MAX;
int8_t x368 = INT8_MIN;
int64_t x373 = 6981755LL;
int32_t x378 = -1;
uint32_t x381 = 974886U;
int32_t t95 = -1985;
int64_t x399 = -1LL;


void f0(void) {
	static int32_t x2 = INT32_MIN;
	int16_t x3 = 2;
	volatile int32_t t0 = 31746;

	t0 = ((x1==x2)&(x3<=x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = -177;
	uint8_t x8 = 7U;

	t1 = ((x5==x6)&(x7<=x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int32_t x9 = 26077;
	int64_t x10 = INT64_MAX;
	uint32_t x12 = UINT32_MAX;
	static int32_t t2 = 169076167;

	t2 = ((x9==x10)&(x11<=x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MIN;
	static uint8_t x14 = 6U;
	static volatile uint16_t x15 = 9U;
	volatile uint32_t x16 = 3U;
	int32_t t3 = -341895118;

	t3 = ((x13==x14)&(x15<=x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	uint8_t x18 = 0U;
	int64_t x19 = -4313961167167272744LL;
	volatile int32_t t4 = 255988;

	t4 = ((x17==x18)&(x19<=x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint16_t x22 = 79U;
	uint64_t x23 = UINT64_MAX;
	int8_t x24 = INT8_MIN;
	int32_t t5 = 1042;

	t5 = ((x21==x22)&(x23<=x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = 5150U;
	int16_t x26 = 1159;
	int16_t x27 = INT16_MAX;
	int64_t x28 = 51LL;
	int32_t t6 = 315;

	t6 = ((x25==x26)&(x27<=x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static int8_t x29 = INT8_MAX;
	int8_t x30 = -1;
	static volatile int16_t x31 = -1;
	uint8_t x32 = 0U;
	int32_t t7 = 30059;

	t7 = ((x29==x30)&(x31<=x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int64_t x33 = INT64_MIN;
	int16_t x36 = INT16_MIN;
	int32_t t8 = -3;

	t8 = ((x33==x34)&(x35<=x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -12;
	static int32_t x38 = -23899;
	static int64_t x39 = -1LL;
	uint8_t x40 = 30U;
	int32_t t9 = 21848;

	t9 = ((x37==x38)&(x39<=x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint16_t x41 = 30727U;
	int32_t x43 = -1;
	uint32_t x44 = 13295U;
	static int32_t t10 = -95;

	t10 = ((x41==x42)&(x43<=x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = 0;
	volatile int32_t x46 = INT32_MAX;
	uint64_t x47 = 117793734LLU;
	volatile int32_t t11 = -728459666;

	t11 = ((x45==x46)&(x47<=x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = UINT16_MAX;
	int16_t x50 = INT16_MIN;
	uint16_t x51 = 116U;
	static int32_t x52 = -5064531;
	int32_t t12 = -1;

	t12 = ((x49==x50)&(x51<=x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = INT64_MIN;
	int8_t x54 = INT8_MAX;
	int16_t x55 = INT16_MAX;
	volatile int32_t t13 = 3;

	t13 = ((x53==x54)&(x55<=x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x57 = UINT32_MAX;
	int8_t x58 = 25;
	int8_t x59 = INT8_MAX;
	uint8_t x60 = 1U;
	int32_t t14 = 4602;

	t14 = ((x57==x58)&(x59<=x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = 128;
	static volatile uint32_t x62 = 427035U;
	volatile uint32_t x63 = UINT32_MAX;
	uint32_t x64 = 224833U;
	volatile int32_t t15 = -5214723;

	t15 = ((x61==x62)&(x63<=x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x66 = 1U;
	static int64_t x67 = INT64_MIN;
	int32_t x68 = INT32_MIN;
	static int32_t t16 = -1;

	t16 = ((x65==x66)&(x67<=x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = INT32_MIN;
	static volatile int64_t x71 = -1LL;
	static int16_t x72 = 5;

	t17 = ((x69==x70)&(x71<=x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	static int64_t x75 = -21065534986LL;
	static uint32_t x76 = UINT32_MAX;
	static int32_t t18 = -304;

	t18 = ((x73==x74)&(x75<=x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x77 = -8;
	int16_t x79 = INT16_MIN;
	int64_t x80 = INT64_MAX;
	static int32_t t19 = 51136227;

	t19 = ((x77==x78)&(x79<=x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -7912;
	int64_t x82 = INT64_MIN;
	int64_t x84 = 5889LL;
	static volatile int32_t t20 = -16242;

	t20 = ((x81==x82)&(x83<=x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = 516;
	int32_t x86 = -1;
	static uint32_t x87 = UINT32_MAX;
	int32_t x88 = INT32_MIN;
	int32_t t21 = 1102;

	t21 = ((x85==x86)&(x87<=x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x90 = 1U;
	int64_t x91 = INT64_MIN;
	static uint8_t x92 = UINT8_MAX;

	t22 = ((x89==x90)&(x91<=x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	int64_t x94 = INT64_MIN;
	static uint8_t x95 = 0U;
	volatile int32_t t23 = 89966;

	t23 = ((x93==x94)&(x95<=x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x98 = INT32_MAX;
	int32_t x99 = INT32_MIN;
	uint8_t x100 = UINT8_MAX;
	int32_t t24 = 21701;

	t24 = ((x97==x98)&(x99<=x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int64_t x101 = -396LL;
	int16_t x103 = INT16_MAX;

	t25 = ((x101==x102)&(x103<=x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MIN;
	int64_t x106 = INT64_MIN;
	static int8_t x107 = INT8_MIN;
	int8_t x108 = INT8_MIN;
	int32_t t26 = 246888923;

	t26 = ((x105==x106)&(x107<=x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MIN;
	int64_t x110 = -174066785015353278LL;
	int16_t x111 = 1290;
	int32_t t27 = -1023542;

	t27 = ((x109==x110)&(x111<=x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x113 = 609177496;
	uint64_t x114 = UINT64_MAX;
	int64_t x115 = -1LL;
	int32_t x116 = -1;
	volatile int32_t t28 = -909336716;

	t28 = ((x113==x114)&(x115<=x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x117 = INT64_MAX;
	volatile uint8_t x118 = 3U;
	volatile int8_t x120 = INT8_MAX;
	static volatile int32_t t29 = -15;

	t29 = ((x117==x118)&(x119<=x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -1LL;
	int16_t x122 = -1;
	volatile int8_t x123 = INT8_MAX;
	uint64_t x124 = 7140751103775849LLU;
	static volatile int32_t t30 = 9657;

	t30 = ((x121==x122)&(x123<=x124));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x125 = -275192335;
	int16_t x126 = INT16_MAX;
	int8_t x127 = 9;
	int16_t x128 = INT16_MIN;

	t31 = ((x125==x126)&(x127<=x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x131 = INT16_MIN;

	t32 = ((x129==x130)&(x131<=x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	uint16_t x134 = 4U;
	uint16_t x135 = 5U;
	int16_t x136 = INT16_MIN;

	t33 = ((x133==x134)&(x135<=x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x137 = INT16_MAX;
	int64_t x138 = INT64_MIN;
	int32_t x139 = INT32_MAX;
	uint8_t x140 = 5U;
	int32_t t34 = 480600;

	t34 = ((x137==x138)&(x139<=x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x141 = INT32_MIN;
	int16_t x142 = -65;
	uint32_t x143 = 0U;
	int64_t x144 = -10839185554LL;
	static int32_t t35 = -28;

	t35 = ((x141==x142)&(x143<=x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile uint64_t x146 = 6LLU;
	uint32_t x147 = UINT32_MAX;
	static int8_t x148 = 59;
	int32_t t36 = 48353;

	t36 = ((x145==x146)&(x147<=x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x149 = 9092541455503LLU;
	volatile int16_t x150 = INT16_MAX;
	volatile uint16_t x151 = 2U;
	static int8_t x152 = -7;

	t37 = ((x149==x150)&(x151<=x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MIN;
	int8_t x155 = INT8_MIN;
	int32_t t38 = 2083988;

	t38 = ((x153==x154)&(x155<=x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x159 = 66281735081709695LLU;
	volatile int64_t x160 = INT64_MIN;

	t39 = ((x157==x158)&(x159<=x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x161 = INT8_MIN;
	uint32_t x162 = 314192U;
	uint8_t x163 = 3U;
	int64_t x164 = -519871730239078673LL;
	int32_t t40 = -130480;

	t40 = ((x161==x162)&(x163<=x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x165 = INT16_MAX;
	int16_t x166 = -1;
	uint16_t x167 = 1431U;
	int16_t x168 = -1;
	int32_t t41 = -1;

	t41 = ((x165==x166)&(x167<=x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x169 = -7;
	uint32_t x170 = 13U;
	uint8_t x171 = 6U;
	int64_t x172 = INT64_MIN;
	int32_t t42 = 128760;

	t42 = ((x169==x170)&(x171<=x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x173 = -18;
	uint8_t x175 = 2U;
	int32_t x176 = INT32_MIN;
	static int32_t t43 = -6;

	t43 = ((x173==x174)&(x175<=x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x177 = UINT16_MAX;
	uint64_t x178 = 2285692LLU;
	static int16_t x180 = -1;
	int32_t t44 = -4313748;

	t44 = ((x177==x178)&(x179<=x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x181 = 1;
	int16_t x182 = INT16_MIN;
	uint8_t x183 = 7U;
	int64_t x184 = 4LL;

	t45 = ((x181==x182)&(x183<=x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int32_t x187 = -1;
	int16_t x188 = 1438;
	volatile int32_t t46 = 212358219;

	t46 = ((x185==x186)&(x187<=x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = -1LL;
	uint8_t x190 = UINT8_MAX;
	static uint16_t x191 = 421U;
	uint32_t x192 = 3081108U;
	int32_t t47 = -1639238;

	t47 = ((x189==x190)&(x191<=x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x193 = 0LLU;
	volatile uint8_t x194 = 2U;
	int64_t x195 = INT64_MAX;
	int32_t x196 = 491;

	t48 = ((x193==x194)&(x195<=x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x199 = 2076147008659LLU;
	static int16_t x200 = INT16_MAX;
	int32_t t49 = 252598555;

	t49 = ((x197==x198)&(x199<=x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x201 = -12;
	static int32_t x202 = -1;
	static int8_t x203 = INT8_MIN;
	uint32_t x204 = UINT32_MAX;
	volatile int32_t t50 = 776727926;

	t50 = ((x201==x202)&(x203<=x204));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint16_t x206 = UINT16_MAX;
	static int64_t x208 = -1LL;
	int32_t t51 = 3;

	t51 = ((x205==x206)&(x207<=x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 0;
	static int64_t x211 = -906LL;
	volatile int64_t x212 = INT64_MIN;
	volatile int32_t t52 = 153470685;

	t52 = ((x209==x210)&(x211<=x212));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x214 = 12779LLU;
	int16_t x215 = -1;
	int16_t x216 = -1;

	t53 = ((x213==x214)&(x215<=x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x217 = INT8_MIN;
	uint8_t x218 = UINT8_MAX;
	int8_t x219 = -1;
	static volatile int16_t x220 = -2403;
	volatile int32_t t54 = 70367;

	t54 = ((x217==x218)&(x219<=x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x222 = INT8_MIN;
	int8_t x223 = 1;
	int64_t x224 = INT64_MIN;
	static int32_t t55 = -241248;

	t55 = ((x221==x222)&(x223<=x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x225 = UINT8_MAX;
	uint16_t x226 = 4U;
	int32_t x227 = INT32_MIN;
	static volatile int8_t x228 = -1;
	int32_t t56 = -7873;

	t56 = ((x225==x226)&(x227<=x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x229 = 0U;
	volatile uint64_t x230 = 5979561638876LLU;
	int32_t x231 = -323189209;
	static volatile int32_t x232 = INT32_MAX;
	static volatile int32_t t57 = -10862413;

	t57 = ((x229==x230)&(x231<=x232));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = 48;
	int32_t x234 = 0;
	volatile int8_t x235 = INT8_MIN;
	int8_t x236 = INT8_MIN;

	t58 = ((x233==x234)&(x235<=x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x238 = 29U;

	t59 = ((x237==x238)&(x239<=x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint32_t x241 = 299759U;
	int64_t x242 = INT64_MIN;
	uint32_t x243 = 93U;
	int16_t x244 = -8;
	static volatile int32_t t60 = -421389974;

	t60 = ((x241==x242)&(x243<=x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = INT64_MIN;
	static int8_t x246 = 39;
	uint16_t x247 = UINT16_MAX;
	int8_t x248 = INT8_MAX;
	int32_t t61 = 117830;

	t61 = ((x245==x246)&(x247<=x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int64_t x249 = INT64_MAX;
	static int32_t x250 = INT32_MIN;
	static int16_t x251 = INT16_MIN;
	volatile uint8_t x252 = 4U;

	t62 = ((x249==x250)&(x251<=x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	static int8_t x254 = -2;
	uint64_t x255 = UINT64_MAX;
	volatile int32_t t63 = -5;

	t63 = ((x253==x254)&(x255<=x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x258 = UINT16_MAX;
	int16_t x259 = INT16_MIN;
	static int64_t x260 = INT64_MAX;
	volatile int32_t t64 = 297068616;

	t64 = ((x257==x258)&(x259<=x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x261 = 1U;
	int64_t x262 = 2024247141982520490LL;
	uint32_t x263 = UINT32_MAX;
	volatile int32_t x264 = INT32_MIN;
	int32_t t65 = -113093461;

	t65 = ((x261==x262)&(x263<=x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x265 = UINT32_MAX;
	uint8_t x267 = UINT8_MAX;
	int32_t x268 = INT32_MIN;

	t66 = ((x265==x266)&(x267<=x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x269 = UINT32_MAX;
	volatile int16_t x271 = INT16_MIN;
	volatile int32_t t67 = -54;

	t67 = ((x269==x270)&(x271<=x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x273 = INT8_MAX;
	int8_t x274 = INT8_MAX;
	int32_t x275 = -7648;
	int16_t x276 = -3500;
	static volatile int32_t t68 = -168978182;

	t68 = ((x273==x274)&(x275<=x276));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = INT16_MIN;
	volatile uint32_t x278 = 283481151U;
	uint32_t x279 = 98796U;
	int16_t x280 = INT16_MIN;
	volatile int32_t t69 = 110;

	t69 = ((x277==x278)&(x279<=x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 12077865U;
	int16_t x283 = 0;
	int64_t x284 = -877LL;

	t70 = ((x281==x282)&(x283<=x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x285 = INT64_MIN;
	int16_t x286 = -1;
	static uint16_t x287 = 77U;
	static volatile int8_t x288 = -1;
	volatile int32_t t71 = 57;

	t71 = ((x285==x286)&(x287<=x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = UINT8_MAX;
	int32_t x290 = INT32_MIN;
	int32_t t72 = -823375;

	t72 = ((x289==x290)&(x291<=x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x293 = 462;
	int32_t x294 = INT32_MIN;
	static int64_t x295 = -969938276LL;
	int32_t x296 = 6019;
	int32_t t73 = -283;

	t73 = ((x293==x294)&(x295<=x296));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x297 = UINT64_MAX;
	uint64_t x299 = UINT64_MAX;
	static int16_t x300 = -1;
	volatile int32_t t74 = 385327349;

	t74 = ((x297==x298)&(x299<=x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x301 = INT32_MIN;
	volatile int16_t x303 = 0;
	static int16_t x304 = INT16_MIN;

	t75 = ((x301==x302)&(x303<=x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x305 = 712U;
	volatile int64_t x306 = -24520923671446LL;
	uint64_t x307 = UINT64_MAX;
	uint32_t x308 = 1788555014U;

	t76 = ((x305==x306)&(x307<=x308));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint8_t x309 = 0U;
	volatile uint64_t x311 = 102LLU;
	uint64_t x312 = UINT64_MAX;
	volatile int32_t t77 = 462;

	t77 = ((x309==x310)&(x311<=x312));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x313 = 0U;
	int8_t x316 = INT8_MIN;
	int32_t t78 = -13;

	t78 = ((x313==x314)&(x315<=x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x317 = 6489623523796LLU;
	volatile int8_t x318 = INT8_MIN;
	volatile uint64_t x319 = 9075874352944828154LLU;
	volatile int8_t x320 = 1;
	volatile int32_t t79 = -97658249;

	t79 = ((x317==x318)&(x319<=x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x321 = 1;
	int16_t x322 = INT16_MIN;
	int16_t x323 = 1;

	t80 = ((x321==x322)&(x323<=x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x325 = UINT8_MAX;
	uint32_t x326 = UINT32_MAX;
	static volatile int64_t x327 = INT64_MIN;
	static volatile uint16_t x328 = 5418U;

	t81 = ((x325==x326)&(x327<=x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = 20417U;
	static uint16_t x330 = 7148U;
	uint8_t x331 = 3U;
	int32_t t82 = 629215;

	t82 = ((x329==x330)&(x331<=x332));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int64_t x333 = 17066LL;
	int16_t x334 = INT16_MAX;
	int32_t x335 = 39;
	int8_t x336 = INT8_MAX;
	static volatile int32_t t83 = -1279;

	t83 = ((x333==x334)&(x335<=x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x337 = INT8_MAX;
	int16_t x339 = INT16_MIN;
	volatile int32_t x340 = INT32_MIN;

	t84 = ((x337==x338)&(x339<=x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = -3151LL;
	uint16_t x343 = UINT16_MAX;
	int32_t x344 = INT32_MIN;
	static int32_t t85 = 345533;

	t85 = ((x341==x342)&(x343<=x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x346 = -1;
	static uint8_t x348 = UINT8_MAX;
	volatile int32_t t86 = -20261447;

	t86 = ((x345==x346)&(x347<=x348));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x349 = -1LL;
	int64_t x350 = -1LL;
	int8_t x352 = -35;
	volatile int32_t t87 = -12;

	t87 = ((x349==x350)&(x351<=x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x354 = INT64_MIN;
	int16_t x355 = -146;
	volatile int32_t t88 = -167830264;

	t88 = ((x353==x354)&(x355<=x356));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x358 = INT16_MIN;
	volatile int64_t x359 = INT64_MAX;
	volatile int8_t x360 = -1;
	volatile int32_t t89 = 198610352;

	t89 = ((x357==x358)&(x359<=x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x362 = INT64_MIN;
	volatile int32_t t90 = -89;

	t90 = ((x361==x362)&(x363<=x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -341120LL;
	int8_t x366 = 3;
	int64_t x367 = INT64_MAX;
	static int32_t t91 = -1037116790;

	t91 = ((x365==x366)&(x367<=x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MAX;
	uint64_t x371 = 426316070051652153LLU;
	int8_t x372 = 1;
	int32_t t92 = 10;

	t92 = ((x369==x370)&(x371<=x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x374 = INT32_MIN;
	uint8_t x375 = 0U;
	static int8_t x376 = INT8_MIN;
	volatile int32_t t93 = 1245177;

	t93 = ((x373==x374)&(x375<=x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint32_t x377 = 14894662U;
	int8_t x379 = INT8_MIN;
	volatile int8_t x380 = -1;
	int32_t t94 = 109;

	t94 = ((x377==x378)&(x379<=x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x382 = INT64_MAX;
	uint64_t x383 = UINT64_MAX;
	uint64_t x384 = UINT64_MAX;

	t95 = ((x381==x382)&(x383<=x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	uint64_t x385 = 52LLU;
	uint8_t x386 = 9U;
	static int8_t x387 = 5;
	uint64_t x388 = UINT64_MAX;
	static int32_t t96 = 737394921;

	t96 = ((x385==x386)&(x387<=x388));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = 2;
	uint8_t x390 = UINT8_MAX;
	static uint8_t x391 = 3U;
	int8_t x392 = 1;
	volatile int32_t t97 = -4;

	t97 = ((x389==x390)&(x391<=x392));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 390LLU;
	uint8_t x394 = 22U;
	static int64_t x395 = -25166128537893LL;
	int16_t x396 = INT16_MIN;
	int32_t t98 = 29;

	t98 = ((x393==x394)&(x395<=x396));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x397 = INT16_MIN;
	static int32_t x398 = 0;
	int64_t x400 = -1LL;
	volatile int32_t t99 = -15;

	t99 = ((x397==x398)&(x399<=x400));

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

