#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x6 = -1;
uint32_t x8 = UINT32_MAX;
volatile uint8_t x13 = UINT8_MAX;
uint32_t t3 = 1053453454U;
int16_t x18 = INT16_MAX;
int8_t x23 = 0;
static uint8_t x35 = 1U;
int64_t x36 = INT64_MIN;
int8_t x37 = 1;
uint64_t x39 = 15785763370616354LLU;
static volatile uint64_t t9 = 41014147LLU;
static uint8_t x45 = 11U;
int16_t x50 = INT16_MIN;
static int32_t t12 = 187000;
uint16_t x53 = 1U;
int64_t t13 = 866314487LL;
uint64_t x59 = 1772273355LLU;
volatile uint32_t x65 = UINT32_MAX;
static volatile uint16_t x71 = UINT16_MAX;
volatile uint32_t x72 = 50159307U;
volatile uint64_t t17 = 106707122370LLU;
uint16_t x74 = UINT16_MAX;
volatile int32_t t18 = 49792;
int64_t x77 = -3123757778079769690LL;
uint16_t x79 = UINT16_MAX;
volatile uint32_t x83 = UINT32_MAX;
volatile int8_t x84 = 1;
volatile int32_t x86 = -1;
volatile uint8_t x88 = UINT8_MAX;
volatile int16_t x96 = -1;
static volatile int32_t x99 = INT32_MIN;
uint8_t x102 = 1U;
static uint16_t x104 = UINT16_MAX;
int64_t x107 = -1LL;
int16_t x111 = INT16_MIN;
static int16_t x115 = INT16_MIN;
volatile int32_t x117 = INT32_MIN;
int8_t x129 = INT8_MIN;
int16_t x140 = -1;
uint64_t x147 = 50518793418933LLU;
int16_t x150 = 3306;
static int16_t x152 = INT16_MIN;
volatile int32_t t37 = -12073126;
int32_t x156 = INT32_MIN;
uint64_t t38 = 5766957945LLU;
static int16_t x174 = 7;
static uint8_t x180 = UINT8_MAX;
int64_t t44 = 1150LL;
int32_t x187 = 297025534;
int64_t t46 = 2388033433135422LL;
volatile uint64_t t47 = 115LLU;
uint16_t x199 = 0U;
uint64_t x203 = 3217LLU;
uint64_t t50 = 58520446869243253LLU;
int32_t x205 = INT32_MAX;
uint64_t x207 = 2959053422LLU;
static uint64_t x211 = 147097824151420LLU;
int64_t t55 = -641LL;
int32_t x226 = INT32_MIN;
static volatile int64_t x229 = INT64_MAX;
int64_t x233 = INT64_MAX;
volatile uint8_t x234 = 5U;
int8_t x237 = INT8_MAX;
volatile int64_t x240 = -1LL;
uint32_t x251 = UINT32_MAX;
volatile uint64_t t62 = 75LLU;
volatile int64_t x257 = INT64_MIN;
int64_t t64 = -1LL;
volatile int64_t x262 = -19934520LL;
int64_t t65 = 4900681614776LL;
int64_t x266 = -1LL;
static int64_t x268 = -1LL;
int32_t x272 = -14271521;
volatile int64_t t67 = -7483836370LL;
int16_t x278 = 0;
int64_t t69 = -130053763562778403LL;
int64_t x281 = -89122656257LL;
static int16_t x288 = INT16_MAX;
int8_t x293 = INT8_MIN;
int64_t x296 = -2548728743410LL;
int16_t x303 = -1;
volatile uint8_t x304 = UINT8_MAX;
int32_t x305 = -1;
static int64_t x309 = -1LL;
uint64_t x316 = UINT64_MAX;
int16_t x323 = INT16_MIN;
volatile int64_t t81 = 14LL;
uint32_t x338 = 3U;
static uint8_t x339 = 0U;
volatile int16_t x342 = INT16_MIN;
static int16_t x343 = INT16_MIN;
volatile int16_t x344 = INT16_MAX;
volatile uint64_t t85 = 6664899LLU;
volatile int32_t x353 = -1;
uint32_t x355 = 666U;
volatile int16_t x361 = -1;
volatile uint32_t x362 = 0U;
volatile int8_t x365 = -32;
volatile int8_t x368 = -1;
volatile int16_t x369 = INT16_MIN;
static volatile uint64_t t90 = 2797849274LLU;
int64_t x375 = INT64_MAX;
int64_t t91 = 12328LL;
uint8_t x384 = 103U;
int8_t x388 = 15;
int64_t t94 = -4315012396848504LL;
volatile int32_t x394 = -470;
static int32_t x395 = 2041630;
static int16_t x396 = INT16_MIN;
static uint64_t x397 = UINT64_MAX;
int8_t x398 = INT8_MIN;
uint8_t x401 = 3U;
int8_t x402 = -8;
volatile int32_t x403 = INT32_MAX;
static int16_t x405 = INT16_MIN;
static volatile int32_t t99 = 40370;


void f0(void) {
	volatile int16_t x1 = -12217;
	uint8_t x2 = 28U;
	uint8_t x3 = 0U;
	uint16_t x4 = 191U;
	int32_t t0 = -393474;

	t0 = ((x1|x2)&(x3%x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	uint32_t x7 = 605U;
	uint32_t t1 = 1915994447U;

	t1 = ((x5|x6)&(x7%x8));

	if (t1 != 605U) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = 0;
	int32_t x10 = 8023779;
	static uint64_t x11 = 2866569LLU;
	int8_t x12 = -1;
	volatile uint64_t t2 = 49997444966573LLU;

	t2 = ((x9|x10)&(x11%x12));

	if (t2 != 2763905LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint32_t x14 = 2U;
	static int32_t x15 = INT32_MIN;
	static uint16_t x16 = 22U;

	t3 = ((x13|x14)&(x15%x16));

	if (t3 != 254U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int64_t x19 = INT64_MAX;
	volatile int32_t x20 = 1;
	static int64_t t4 = 64137LL;

	t4 = ((x17|x18)&(x19%x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	static int16_t x22 = -1;
	static int32_t x24 = -1;
	volatile uint64_t t5 = 4487LLU;

	t5 = ((x21|x22)&(x23%x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int32_t x25 = -1;
	volatile uint32_t x26 = 17015557U;
	static uint16_t x27 = UINT16_MAX;
	int16_t x28 = INT16_MIN;
	uint32_t t6 = 24319U;

	t6 = ((x25|x26)&(x27%x28));

	if (t6 != 32767U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 11;
	volatile int8_t x30 = INT8_MIN;
	int64_t x31 = INT64_MIN;
	static int8_t x32 = INT8_MIN;
	volatile int64_t t7 = -1082701262LL;

	t7 = ((x29|x30)&(x31%x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	uint16_t x34 = UINT16_MAX;
	volatile int64_t t8 = 191910568411454LL;

	t8 = ((x33|x34)&(x35%x36));

	if (t8 != 1LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x38 = -46;
	int8_t x40 = 1;

	t9 = ((x37|x38)&(x39%x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = INT32_MIN;
	int64_t x42 = -61139055LL;
	int16_t x43 = INT16_MIN;
	uint32_t x44 = 53545861U;
	volatile int64_t t10 = 225523666406LL;

	t10 = ((x41|x42)&(x43%x44));

	if (t10 != 722448LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x46 = INT64_MIN;
	volatile int8_t x47 = INT8_MIN;
	static volatile uint32_t x48 = 27697282U;
	static volatile int64_t t11 = -2829LL;

	t11 = ((x45|x46)&(x47%x48));

	if (t11 != 10LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = -1;
	volatile int16_t x51 = INT16_MIN;
	volatile uint8_t x52 = UINT8_MAX;

	t12 = ((x49|x50)&(x51%x52));

	if (t12 != -128) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x54 = -1LL;
	int32_t x55 = INT32_MIN;
	int8_t x56 = INT8_MAX;

	t13 = ((x53|x54)&(x55%x56));

	if (t13 != -8LL) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 25U;
	uint16_t x58 = 1175U;
	volatile int64_t x60 = INT64_MAX;
	volatile uint64_t t14 = 10927432LLU;

	t14 = ((x57|x58)&(x59%x60));

	if (t14 != 1163LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x61 = 69U;
	volatile uint8_t x62 = UINT8_MAX;
	int64_t x63 = INT64_MAX;
	static uint64_t x64 = 85782703598850LLU;
	static uint64_t t15 = 10978333040652LLU;

	t15 = ((x61|x62)&(x63%x64));

	if (t15 != 255LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x66 = UINT8_MAX;
	int32_t x67 = -4520;
	int16_t x68 = -1;
	static volatile uint32_t t16 = 687U;

	t16 = ((x65|x66)&(x67%x68));

	if (t16 != 0U) { NG(); } else { ; }
	
}

void f17(void) {
	static int64_t x69 = INT64_MIN;
	uint64_t x70 = 590825761515496LLU;

	t17 = ((x69|x70)&(x71%x72));

	if (t17 != 42984LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static volatile int8_t x73 = INT8_MIN;
	int8_t x75 = -1;
	int16_t x76 = INT16_MIN;

	t18 = ((x73|x74)&(x75%x76));

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	volatile int32_t x80 = 49727;
	int64_t t19 = -129792603LL;

	t19 = ((x77|x78)&(x79%x80));

	if (t19 != 15808LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x81 = UINT64_MAX;
	static int8_t x82 = -1;
	uint64_t t20 = 1773208568403LLU;

	t20 = ((x81|x82)&(x83%x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static int32_t x85 = -1;
	uint16_t x87 = 1U;
	int32_t t21 = 67;

	t21 = ((x85|x86)&(x87%x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x89 = UINT32_MAX;
	int64_t x90 = INT64_MAX;
	int8_t x91 = -8;
	int64_t x92 = 55389144524234813LL;
	int64_t t22 = 3653940883887017611LL;

	t22 = ((x89|x90)&(x91%x92));

	if (t22 != 9223372036854775800LL) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x93 = 13U;
	int32_t x94 = -732462735;
	int32_t x95 = -1;
	static volatile int32_t t23 = -1686226;

	t23 = ((x93|x94)&(x95%x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 437728884244LL;
	int64_t x98 = INT64_MIN;
	static int64_t x100 = INT64_MIN;
	volatile int64_t t24 = 3236LL;

	t24 = ((x97|x98)&(x99%x100));

	if (t24 != -9223371600915595264LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x101 = 0U;
	uint16_t x103 = 7U;
	static volatile int32_t t25 = 1;

	t25 = ((x101|x102)&(x103%x104));

	if (t25 != 1) { NG(); } else { ; }
	
}

void f26(void) {
	static uint16_t x105 = 51U;
	int8_t x106 = 3;
	volatile int16_t x108 = -1;
	int64_t t26 = -390909LL;

	t26 = ((x105|x106)&(x107%x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	volatile uint32_t x110 = 124U;
	int16_t x112 = -1;
	static volatile uint32_t t27 = 3913248U;

	t27 = ((x109|x110)&(x111%x112));

	if (t27 != 0U) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x113 = INT64_MAX;
	static int16_t x114 = INT16_MIN;
	int64_t x116 = INT64_MIN;
	int64_t t28 = 92LL;

	t28 = ((x113|x114)&(x115%x116));

	if (t28 != -32768LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x118 = 7U;
	static int8_t x119 = 21;
	int16_t x120 = -1;
	int32_t t29 = -64310703;

	t29 = ((x117|x118)&(x119%x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = INT16_MIN;
	uint16_t x122 = 2U;
	uint32_t x123 = UINT32_MAX;
	static uint16_t x124 = 62U;
	static volatile uint32_t t30 = 2293011U;

	t30 = ((x121|x122)&(x123%x124));

	if (t30 != 2U) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x125 = UINT8_MAX;
	uint32_t x126 = 67976532U;
	uint32_t x127 = UINT32_MAX;
	volatile uint64_t x128 = 12176683567222LLU;
	volatile uint64_t t31 = 19344577223039033LLU;

	t31 = ((x125|x126)&(x127%x128));

	if (t31 != 67976703LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x130 = 3506094U;
	int64_t x131 = -1LL;
	uint32_t x132 = UINT32_MAX;
	int64_t t32 = 547LL;

	t32 = ((x129|x130)&(x131%x132));

	if (t32 != 4294967214LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint32_t x133 = UINT32_MAX;
	uint32_t x134 = 47420961U;
	uint16_t x135 = 13932U;
	int64_t x136 = INT64_MIN;
	static volatile int64_t t33 = -21984266410892LL;

	t33 = ((x133|x134)&(x135%x136));

	if (t33 != 13932LL) { NG(); } else { ; }
	
}

void f34(void) {
	volatile uint64_t x137 = 0LLU;
	volatile int8_t x138 = -1;
	uint64_t x139 = UINT64_MAX;
	static volatile uint64_t t34 = 13924810LLU;

	t34 = ((x137|x138)&(x139%x140));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int32_t x141 = 151284;
	static volatile int16_t x142 = 2832;
	static int8_t x143 = -1;
	int32_t x144 = -36;
	volatile int32_t t35 = 412;

	t35 = ((x141|x142)&(x143%x144));

	if (t35 != 151540) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -5;
	int32_t x146 = INT32_MIN;
	int16_t x148 = INT16_MIN;
	uint64_t t36 = 7LLU;

	t36 = ((x145|x146)&(x147%x148));

	if (t36 != 50518793418929LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = 2U;
	int8_t x151 = INT8_MAX;

	t37 = ((x149|x150)&(x151%x152));

	if (t37 != 106) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MIN;
	int32_t x154 = INT32_MIN;
	volatile uint64_t x155 = 3LLU;

	t38 = ((x153|x154)&(x155%x156));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	uint16_t x158 = UINT16_MAX;
	uint64_t x159 = 7LLU;
	static int8_t x160 = -1;
	static volatile uint64_t t39 = 1LLU;

	t39 = ((x157|x158)&(x159%x160));

	if (t39 != 7LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint8_t x161 = 5U;
	static int64_t x162 = 2327784376LL;
	uint16_t x163 = 43U;
	uint32_t x164 = 217350934U;
	int64_t t40 = -862919796893LL;

	t40 = ((x161|x162)&(x163%x164));

	if (t40 != 41LL) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x165 = INT8_MAX;
	static uint8_t x166 = 3U;
	int16_t x167 = INT16_MIN;
	int64_t x168 = INT64_MIN;
	int64_t t41 = 55065927593739132LL;

	t41 = ((x165|x166)&(x167%x168));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x169 = -1;
	static int64_t x170 = -1LL;
	uint64_t x171 = 7LLU;
	int16_t x172 = -2390;
	uint64_t t42 = 32709806900835LLU;

	t42 = ((x169|x170)&(x171%x172));

	if (t42 != 7LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x173 = UINT64_MAX;
	int32_t x175 = INT32_MIN;
	static int32_t x176 = 21722381;
	uint64_t t43 = 2733789881LLU;

	t43 = ((x173|x174)&(x175%x176));

	if (t43 != 18446744073690861306LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static uint16_t x177 = 385U;
	int8_t x178 = INT8_MIN;
	int64_t x179 = -7083036529699037LL;

	t44 = ((x177|x178)&(x179%x180));

	if (t44 != -128LL) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile uint8_t x181 = UINT8_MAX;
	uint32_t x182 = UINT32_MAX;
	static volatile int16_t x183 = -585;
	int64_t x184 = -267895802056373LL;
	volatile int64_t t45 = 30455434LL;

	t45 = ((x181|x182)&(x183%x184));

	if (t45 != 4294966711LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = INT64_MIN;
	int32_t x186 = -26;
	int64_t x188 = INT64_MIN;

	t46 = ((x185|x186)&(x187%x188));

	if (t46 != 297025510LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x189 = UINT64_MAX;
	int8_t x190 = INT8_MIN;
	int32_t x191 = -56;
	static int16_t x192 = INT16_MAX;

	t47 = ((x189|x190)&(x191%x192));

	if (t47 != 18446744073709551560LLU) { NG(); } else { ; }
	
}

void f48(void) {
	static int64_t x193 = -1506323486042690720LL;
	volatile uint16_t x194 = UINT16_MAX;
	static int16_t x195 = INT16_MAX;
	volatile int64_t x196 = INT64_MAX;
	volatile int64_t t48 = 25980902075800522LL;

	t48 = ((x193|x194)&(x195%x196));

	if (t48 != 32767LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int16_t x197 = -1;
	int8_t x198 = INT8_MIN;
	uint64_t x200 = 31998077LLU;
	volatile uint64_t t49 = 866541945LLU;

	t49 = ((x197|x198)&(x199%x200));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x201 = 21207U;
	volatile uint16_t x202 = UINT16_MAX;
	volatile int32_t x204 = INT32_MAX;

	t50 = ((x201|x202)&(x203%x204));

	if (t50 != 3217LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x206 = 5;
	volatile int64_t x208 = INT64_MAX;
	volatile uint64_t t51 = 104LLU;

	t51 = ((x205|x206)&(x207%x208));

	if (t51 != 811569774LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = INT64_MIN;
	static uint32_t x210 = 72U;
	uint32_t x212 = 16404U;
	uint64_t t52 = 0LLU;

	t52 = ((x209|x210)&(x211%x212));

	if (t52 != 8LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	int8_t x214 = INT8_MIN;
	int32_t x215 = INT32_MAX;
	static int8_t x216 = INT8_MAX;
	int32_t t53 = -2;

	t53 = ((x213|x214)&(x215%x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x217 = -62;
	int16_t x218 = INT16_MIN;
	int8_t x219 = 6;
	int16_t x220 = 372;
	static volatile int32_t t54 = 14061;

	t54 = ((x217|x218)&(x219%x220));

	if (t54 != 2) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x221 = -1;
	int8_t x222 = INT8_MIN;
	volatile int64_t x223 = -1LL;
	int32_t x224 = 93;

	t55 = ((x221|x222)&(x223%x224));

	if (t55 != -1LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	uint8_t x227 = UINT8_MAX;
	int64_t x228 = -1LL;
	volatile int64_t t56 = -347817972406LL;

	t56 = ((x225|x226)&(x227%x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x230 = 100;
	volatile uint16_t x231 = 19379U;
	static int16_t x232 = INT16_MAX;
	static int64_t t57 = 20818511LL;

	t57 = ((x229|x230)&(x231%x232));

	if (t57 != 19379LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint64_t x235 = 69207216883096LLU;
	volatile int64_t x236 = -1LL;
	static volatile uint64_t t58 = 8211613974916672LLU;

	t58 = ((x233|x234)&(x235%x236));

	if (t58 != 69207216883096LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x238 = INT8_MAX;
	uint32_t x239 = UINT32_MAX;
	volatile int64_t t59 = 7899186750361631LL;

	t59 = ((x237|x238)&(x239%x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = -1;
	volatile int8_t x242 = 2;
	volatile int32_t x243 = INT32_MAX;
	uint64_t x244 = UINT64_MAX;
	uint64_t t60 = 4185526551LLU;

	t60 = ((x241|x242)&(x243%x244));

	if (t60 != 2147483647LLU) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x245 = UINT64_MAX;
	volatile uint16_t x246 = UINT16_MAX;
	static uint64_t x247 = 6368026LLU;
	uint32_t x248 = 1543U;
	volatile uint64_t t61 = 17683918LLU;

	t61 = ((x245|x246)&(x247%x248));

	if (t61 != 65LLU) { NG(); } else { ; }
	
}

void f62(void) {
	static uint16_t x249 = 10886U;
	static volatile int16_t x250 = -1;
	uint64_t x252 = UINT64_MAX;

	t62 = ((x249|x250)&(x251%x252));

	if (t62 != 4294967295LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int16_t x253 = -1;
	int8_t x254 = INT8_MIN;
	int64_t x255 = 1616339234508LL;
	int8_t x256 = -1;
	int64_t t63 = -3607355LL;

	t63 = ((x253|x254)&(x255%x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x258 = -1LL;
	int64_t x259 = INT64_MAX;
	uint32_t x260 = 76082634U;

	t64 = ((x257|x258)&(x259%x260));

	if (t64 != 68194159LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x261 = -1;
	uint16_t x263 = UINT16_MAX;
	uint32_t x264 = 23U;

	t65 = ((x261|x262)&(x263%x264));

	if (t65 != 8LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint16_t x265 = 213U;
	int8_t x267 = -1;
	int64_t t66 = -175506547548998886LL;

	t66 = ((x265|x266)&(x267%x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x269 = INT64_MIN;
	int16_t x270 = -1;
	uint32_t x271 = UINT32_MAX;

	t67 = ((x269|x270)&(x271%x272));

	if (t67 != 14271520LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x273 = -3;
	volatile uint16_t x274 = UINT16_MAX;
	static uint32_t x275 = 2050306U;
	int64_t x276 = 751764466542LL;
	volatile int64_t t68 = 754LL;

	t68 = ((x273|x274)&(x275%x276));

	if (t68 != 2050306LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int64_t x277 = -1LL;
	static int16_t x279 = -910;
	int32_t x280 = 125;

	t69 = ((x277|x278)&(x279%x280));

	if (t69 != -35LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x282 = -29859393097LL;
	uint64_t x283 = UINT64_MAX;
	int16_t x284 = -374;
	uint64_t t70 = 21497137427745LLU;

	t70 = ((x281|x282)&(x283%x284));

	if (t70 != 373LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x285 = -6;
	static uint16_t x286 = 1U;
	static int32_t x287 = -1;
	int32_t t71 = 1;

	t71 = ((x285|x286)&(x287%x288));

	if (t71 != -5) { NG(); } else { ; }
	
}

void f72(void) {
	static uint32_t x294 = 264965562U;
	int32_t x295 = INT32_MIN;
	volatile int64_t t72 = 119482LL;

	t72 = ((x293|x294)&(x295%x296));

	if (t72 != 2147483648LL) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x297 = INT8_MIN;
	volatile uint16_t x298 = 1U;
	int32_t x299 = -29987460;
	int64_t x300 = INT64_MIN;
	int64_t t73 = -32805347LL;

	t73 = ((x297|x298)&(x299%x300));

	if (t73 != -29987584LL) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x301 = INT16_MIN;
	volatile int64_t x302 = 0LL;
	int64_t t74 = 58304LL;

	t74 = ((x301|x302)&(x303%x304));

	if (t74 != -32768LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x306 = 13595964753541552LLU;
	uint32_t x307 = 1253564U;
	uint8_t x308 = UINT8_MAX;
	uint64_t t75 = 305LLU;

	t75 = ((x305|x306)&(x307%x308));

	if (t75 != 239LLU) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x310 = 1;
	volatile int16_t x311 = INT16_MAX;
	uint8_t x312 = 36U;
	int64_t t76 = -47LL;

	t76 = ((x309|x310)&(x311%x312));

	if (t76 != 7LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x313 = 7973U;
	int16_t x314 = INT16_MIN;
	uint64_t x315 = 59010477LLU;
	uint64_t t77 = 1232478327LLU;

	t77 = ((x313|x314)&(x315%x316));

	if (t77 != 58985765LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x317 = 1458166U;
	uint8_t x318 = UINT8_MAX;
	int8_t x319 = -2;
	static int8_t x320 = INT8_MIN;
	uint32_t t78 = 146U;

	t78 = ((x317|x318)&(x319%x320));

	if (t78 != 1458174U) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x321 = 0;
	int64_t x322 = INT64_MIN;
	int32_t x324 = -1;
	volatile int64_t t79 = 1885LL;

	t79 = ((x321|x322)&(x323%x324));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x325 = INT64_MIN;
	uint16_t x326 = 1U;
	uint8_t x327 = 104U;
	int16_t x328 = INT16_MIN;
	int64_t t80 = -15751791471LL;

	t80 = ((x325|x326)&(x327%x328));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x329 = 3U;
	uint8_t x330 = UINT8_MAX;
	static int64_t x331 = INT64_MIN;
	int32_t x332 = -1;

	t81 = ((x329|x330)&(x331%x332));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x333 = INT16_MIN;
	int32_t x334 = INT32_MIN;
	int64_t x335 = 6236LL;
	int32_t x336 = INT32_MIN;
	volatile int64_t t82 = -17908656823LL;

	t82 = ((x333|x334)&(x335%x336));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x337 = INT64_MIN;
	int64_t x340 = INT64_MIN;
	static int64_t t83 = -152396418630LL;

	t83 = ((x337|x338)&(x339%x340));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x341 = INT32_MIN;
	volatile int32_t t84 = 4843475;

	t84 = ((x341|x342)&(x343%x344));

	if (t84 != -32768) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x345 = 9084U;
	static int64_t x346 = 63575618845670LL;
	volatile uint64_t x347 = 62952698305LLU;
	int32_t x348 = -49;

	t85 = ((x345|x346)&(x347%x348));

	if (t85 != 8724509120LLU) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x349 = 66044770148145LLU;
	static int32_t x350 = -1;
	uint32_t x351 = 239858083U;
	volatile int8_t x352 = INT8_MIN;
	static volatile uint64_t t86 = 33681101LLU;

	t86 = ((x349|x350)&(x351%x352));

	if (t86 != 239858083LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x354 = 4288677193LLU;
	uint8_t x356 = 50U;
	volatile uint64_t t87 = 21LLU;

	t87 = ((x353|x354)&(x355%x356));

	if (t87 != 16LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x363 = INT16_MIN;
	uint64_t x364 = 665LLU;
	static uint64_t t88 = 120576LLU;

	t88 = ((x361|x362)&(x363%x364));

	if (t88 != 43LLU) { NG(); } else { ; }
	
}

void f89(void) {
	uint16_t x366 = 0U;
	uint16_t x367 = 64U;
	volatile int32_t t89 = -728331267;

	t89 = ((x365|x366)&(x367%x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x370 = 17U;
	uint64_t x371 = 50LLU;
	uint16_t x372 = 24107U;

	t90 = ((x369|x370)&(x371%x372));

	if (t90 != 16LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x373 = 1;
	int32_t x374 = INT32_MIN;
	int16_t x376 = INT16_MAX;

	t91 = ((x373|x374)&(x375%x376));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x377 = -14;
	uint16_t x378 = 5U;
	static uint16_t x379 = 4343U;
	int32_t x380 = 387;
	volatile int32_t t92 = 3974;

	t92 = ((x377|x378)&(x379%x380));

	if (t92 != 86) { NG(); } else { ; }
	
}

void f93(void) {
	static uint64_t x381 = UINT64_MAX;
	int64_t x382 = INT64_MIN;
	int16_t x383 = -1;
	uint64_t t93 = UINT64_MAX;

	t93 = ((x381|x382)&(x383%x384));

	if (t93 != UINT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x385 = INT64_MIN;
	static int8_t x386 = -1;
	static int32_t x387 = -3257;

	t94 = ((x385|x386)&(x387%x388));

	if (t94 != -2LL) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x389 = INT8_MAX;
	int32_t x390 = INT32_MIN;
	uint16_t x391 = UINT16_MAX;
	static volatile int64_t x392 = INT64_MAX;
	int64_t t95 = -41736863796629LL;

	t95 = ((x389|x390)&(x391%x392));

	if (t95 != 127LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x393 = -1;
	volatile int32_t t96 = -13637;

	t96 = ((x393|x394)&(x395%x396));

	if (t96 != 10014) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x399 = 5317582LLU;
	volatile int8_t x400 = 1;
	static uint64_t t97 = 192730202416210LLU;

	t97 = ((x397|x398)&(x399%x400));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int64_t x404 = -6721LL;
	static volatile int64_t t98 = 21705141LL;

	t98 = ((x401|x402)&(x403%x404));

	if (t98 != 3169LL) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x406 = INT32_MAX;
	static int8_t x407 = 11;
	uint8_t x408 = UINT8_MAX;

	t99 = ((x405|x406)&(x407%x408));

	if (t99 != 11) { NG(); } else { ; }
	
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

