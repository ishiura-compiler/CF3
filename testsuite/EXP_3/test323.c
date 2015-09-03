#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x8 = INT64_MIN;
uint32_t x9 = 105412U;
volatile uint16_t x11 = UINT16_MAX;
volatile uint8_t x15 = 13U;
int64_t x39 = -1LL;
int64_t x51 = 0LL;
int32_t x55 = INT32_MIN;
volatile uint64_t x59 = 132813553518775849LLU;
int8_t x65 = INT8_MIN;
volatile int32_t t13 = -1314;
int32_t x72 = 10762;
uint16_t x76 = UINT16_MAX;
int8_t x81 = -1;
int32_t x82 = INT32_MIN;
int16_t x87 = 0;
uint8_t x106 = 40U;
uint16_t x108 = UINT16_MAX;
static uint16_t x112 = 1670U;
int8_t x118 = -1;
int64_t x123 = INT64_MAX;
static volatile int64_t t24 = -1689LL;
int64_t t25 = -996970732734996LL;
int32_t x137 = -3432;
volatile int64_t t28 = -20LL;
int64_t x161 = -6674398714029232LL;
uint64_t t31 = 325683518LLU;
int8_t x167 = INT8_MIN;
int64_t t32 = 755044249731954969LL;
static int32_t x169 = INT32_MIN;
int32_t x170 = -1;
uint8_t x178 = 3U;
int32_t t35 = -24753;
volatile uint64_t x187 = 1445871413083291196LLU;
static int8_t x191 = INT8_MIN;
volatile int64_t t41 = 231193089LL;
uint8_t x205 = UINT8_MAX;
int64_t t42 = 196995LL;
int32_t x211 = -107;
uint8_t x212 = UINT8_MAX;
static volatile int64_t t43 = 16684212965LL;
int64_t x218 = INT64_MIN;
volatile int64_t t45 = -30713915221LL;
volatile int8_t x222 = INT8_MAX;
int32_t t46 = 0;
volatile uint8_t x227 = 4U;
int64_t t48 = -28833411598998LL;
int16_t x243 = INT16_MIN;
volatile uint32_t x245 = 21072U;
int32_t x252 = -1;
int8_t x253 = 35;
int32_t t53 = 4964;
int8_t x259 = 2;
int16_t x263 = -354;
int32_t x267 = 0;
volatile int16_t x271 = -22;
int32_t x294 = INT32_MIN;
int32_t x298 = -1;
int64_t x308 = -148LL;
static volatile int64_t t63 = 939701600558LL;
static int32_t x313 = 113316835;
uint8_t x314 = 44U;
static int16_t x315 = INT16_MAX;
static volatile int8_t x318 = INT8_MIN;
static volatile int64_t x324 = 1831LL;
static uint64_t t67 = 6709304390455980LLU;
int16_t x334 = INT16_MIN;
int16_t x356 = INT16_MIN;
volatile int64_t t74 = 635LL;
uint8_t x369 = 0U;
static volatile int64_t x379 = INT64_MAX;
static int64_t x383 = INT64_MAX;
static int8_t x399 = -1;
static volatile uint64_t x412 = UINT64_MAX;
volatile uint8_t x415 = 19U;
static uint8_t x416 = 20U;
int8_t x423 = INT8_MIN;
int32_t t87 = -1;
int64_t x426 = INT64_MAX;
uint32_t x428 = 262607697U;
volatile int64_t t90 = 12LL;
static volatile uint8_t x449 = 6U;
uint64_t x450 = 250805514797489255LLU;
volatile int32_t t95 = 99;
static volatile int32_t x469 = INT32_MIN;
int8_t x472 = 1;
int32_t x473 = 44653;
static int64_t x474 = INT64_MAX;
volatile int16_t x480 = 0;


void f0(void) {
	int8_t x5 = 2;
	uint64_t x6 = 19315LLU;
	static uint64_t x7 = 3LLU;
	static volatile uint64_t t0 = 1868328013LLU;

	t0 = ((x5|x6)&(x7-x8));

	if (t0 != 3LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile uint32_t x10 = 3011U;
	int64_t x12 = INT64_MAX;
	int64_t t1 = 244916512122907465LL;

	t1 = ((x9|x10)&(x11-x12));

	if (t1 != 65536LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int8_t x13 = INT8_MIN;
	int32_t x14 = INT32_MIN;
	int8_t x16 = 0;
	volatile int32_t t2 = 1072;

	t2 = ((x13|x14)&(x15-x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x17 = 1U;
	uint8_t x18 = 28U;
	int16_t x19 = 0;
	volatile int32_t x20 = 4608174;
	int32_t t3 = 982592;

	t3 = ((x17|x18)&(x19-x20));

	if (t3 != 16) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x21 = INT16_MIN;
	int32_t x22 = 129911099;
	int32_t x23 = INT32_MAX;
	volatile uint64_t x24 = 23709426047452771LLU;
	uint64_t t4 = 3064493564LLU;

	t4 = ((x21|x22)&(x23-x24));

	if (t4 != 18423034649809570072LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int16_t x25 = INT16_MIN;
	int64_t x26 = -10LL;
	static volatile int64_t x27 = 98LL;
	volatile uint8_t x28 = 12U;
	static int64_t t5 = -817243634686791LL;

	t5 = ((x25|x26)&(x27-x28));

	if (t5 != 86LL) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x29 = INT16_MIN;
	static int16_t x30 = INT16_MIN;
	int32_t x31 = 212118;
	static int8_t x32 = 3;
	volatile int32_t t6 = -494859;

	t6 = ((x29|x30)&(x31-x32));

	if (t6 != 196608) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x37 = -349288434LL;
	int64_t x38 = -1LL;
	int32_t x40 = -1;
	volatile int64_t t7 = -714497649LL;

	t7 = ((x37|x38)&(x39-x40));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x41 = INT64_MIN;
	volatile int16_t x42 = INT16_MAX;
	volatile int16_t x43 = -1;
	int8_t x44 = 1;
	static int64_t t8 = -4174946LL;

	t8 = ((x41|x42)&(x43-x44));

	if (t8 != -9223372036854743042LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x45 = -1;
	int16_t x46 = -1;
	int8_t x47 = INT8_MAX;
	int8_t x48 = INT8_MAX;
	volatile int32_t t9 = 3046;

	t9 = ((x45|x46)&(x47-x48));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x49 = 10423U;
	static int64_t x50 = INT64_MIN;
	static volatile int16_t x52 = 31;
	volatile int64_t t10 = 414616839169511LL;

	t10 = ((x49|x50)&(x51-x52));

	if (t10 != -9223372036854765407LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = UINT16_MAX;
	volatile int8_t x54 = INT8_MAX;
	int64_t x56 = -1LL;
	static int64_t t11 = 331803LL;

	t11 = ((x53|x54)&(x55-x56));

	if (t11 != 1LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int8_t x57 = INT8_MIN;
	volatile uint64_t x58 = UINT64_MAX;
	static int8_t x60 = INT8_MAX;
	static volatile uint64_t t12 = 41399331705LLU;

	t12 = ((x57|x58)&(x59-x60));

	if (t12 != 132813553518775722LLU) { NG(); } else { ; }
	
}

void f13(void) {
	static uint16_t x66 = 4612U;
	volatile int8_t x67 = -58;
	int8_t x68 = 2;

	t13 = ((x65|x66)&(x67-x68));

	if (t13 != -124) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x69 = INT64_MIN;
	int8_t x70 = INT8_MAX;
	int8_t x71 = 1;
	int64_t t14 = 9337997559LL;

	t14 = ((x69|x70)&(x71-x72));

	if (t14 != -9223372036854775689LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = 1597;
	uint32_t x74 = 418571609U;
	uint16_t x75 = 1U;
	uint32_t t15 = 80U;

	t15 = ((x73|x74)&(x75-x76));

	if (t15 != 418512896U) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x77 = 11160140;
	int64_t x78 = INT64_MAX;
	uint8_t x79 = 15U;
	uint8_t x80 = UINT8_MAX;
	volatile int64_t t16 = 49LL;

	t16 = ((x77|x78)&(x79-x80));

	if (t16 != 9223372036854775568LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x83 = INT64_MAX;
	int32_t x84 = 100948;
	volatile int64_t t17 = 69140856515LL;

	t17 = ((x81|x82)&(x83-x84));

	if (t17 != 9223372036854674859LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x85 = 115U;
	int16_t x86 = INT16_MAX;
	int8_t x88 = 1;
	volatile int32_t t18 = 120571;

	t18 = ((x85|x86)&(x87-x88));

	if (t18 != 32767) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x97 = INT64_MIN;
	int32_t x98 = INT32_MIN;
	int64_t x99 = INT64_MIN;
	int64_t x100 = INT64_MIN;
	static volatile int64_t t19 = -1125855359378577227LL;

	t19 = ((x97|x98)&(x99-x100));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x105 = 2LLU;
	static volatile uint8_t x107 = 6U;
	uint64_t t20 = 23444241LLU;

	t20 = ((x105|x106)&(x107-x108));

	if (t20 != 2LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint64_t x109 = 5LLU;
	int16_t x110 = -53;
	static uint64_t x111 = 132482207LLU;
	volatile uint64_t t21 = 86798184022LLU;

	t21 = ((x109|x110)&(x111-x112));

	if (t21 != 132480521LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x113 = 14U;
	int8_t x114 = 1;
	int64_t x115 = -1LL;
	uint32_t x116 = UINT32_MAX;
	static volatile int64_t t22 = 39660813316634574LL;

	t22 = ((x113|x114)&(x115-x116));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x117 = -1;
	int64_t x119 = -7LL;
	uint32_t x120 = 252U;
	volatile int64_t t23 = 60275LL;

	t23 = ((x117|x118)&(x119-x120));

	if (t23 != -259LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x121 = INT32_MAX;
	volatile int8_t x122 = -1;
	uint16_t x124 = 240U;

	t24 = ((x121|x122)&(x123-x124));

	if (t24 != 9223372036854775567LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x129 = -1LL;
	int64_t x130 = -1LL;
	int32_t x131 = -119;
	int32_t x132 = -115759;

	t25 = ((x129|x130)&(x131-x132));

	if (t25 != 115640LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x133 = -1;
	static volatile int32_t x134 = -1;
	uint64_t x135 = UINT64_MAX;
	int32_t x136 = -1;
	volatile uint64_t t26 = 647477688LLU;

	t26 = ((x133|x134)&(x135-x136));

	if (t26 != 0LLU) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x138 = 2158065187051429934LL;
	int16_t x139 = -2;
	int64_t x140 = 26157022984263LL;
	volatile int64_t t27 = -913728961599LL;

	t27 = ((x137|x138)&(x139-x140));

	if (t27 != -26157022985546LL) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x141 = -793058936113LL;
	int32_t x142 = INT32_MAX;
	static uint32_t x143 = UINT32_MAX;
	int64_t x144 = -1LL;

	t28 = ((x141|x142)&(x143-x144));

	if (t28 != 4294967296LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x153 = -1;
	int64_t x154 = -664LL;
	uint32_t x155 = UINT32_MAX;
	uint8_t x156 = UINT8_MAX;
	int64_t t29 = -1827686LL;

	t29 = ((x153|x154)&(x155-x156));

	if (t29 != 4294967040LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x157 = INT16_MAX;
	static volatile int16_t x158 = -3;
	int8_t x159 = INT8_MAX;
	int8_t x160 = -1;
	volatile int32_t t30 = -8439;

	t30 = ((x157|x158)&(x159-x160));

	if (t30 != 128) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x162 = -1LL;
	volatile uint64_t x163 = UINT64_MAX;
	volatile int16_t x164 = 67;

	t31 = ((x161|x162)&(x163-x164));

	if (t31 != 18446744073709551548LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x165 = 7186U;
	int64_t x166 = INT64_MAX;
	static uint16_t x168 = UINT16_MAX;

	t32 = ((x165|x166)&(x167-x168));

	if (t32 != 9223372036854710145LL) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x171 = UINT8_MAX;
	int64_t x172 = 421060LL;
	volatile int64_t t33 = -89571996LL;

	t33 = ((x169|x170)&(x171-x172));

	if (t33 != -420805LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x173 = -1;
	static int8_t x174 = INT8_MIN;
	volatile int16_t x175 = 137;
	int8_t x176 = -4;
	static int32_t t34 = -38;

	t34 = ((x173|x174)&(x175-x176));

	if (t34 != 141) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x177 = 40;
	volatile int16_t x179 = INT16_MIN;
	volatile int8_t x180 = 1;

	t35 = ((x177|x178)&(x179-x180));

	if (t35 != 43) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x181 = INT64_MIN;
	static int8_t x182 = -1;
	uint8_t x183 = UINT8_MAX;
	uint16_t x184 = 100U;
	volatile int64_t t36 = 18583840048LL;

	t36 = ((x181|x182)&(x183-x184));

	if (t36 != 155LL) { NG(); } else { ; }
	
}

void f37(void) {
	volatile uint16_t x185 = UINT16_MAX;
	uint16_t x186 = 8175U;
	volatile uint32_t x188 = 1361U;
	uint64_t t37 = 76171357562143473LLU;

	t37 = ((x185|x186)&(x187-x188));

	if (t37 != 47339LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x189 = INT64_MAX;
	static uint16_t x190 = UINT16_MAX;
	static uint64_t x192 = UINT64_MAX;
	static uint64_t t38 = 8311921282321866LLU;

	t38 = ((x189|x190)&(x191-x192));

	if (t38 != 9223372036854775681LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x193 = INT64_MAX;
	int64_t x194 = INT64_MIN;
	static int8_t x195 = INT8_MAX;
	int8_t x196 = INT8_MIN;
	static volatile int64_t t39 = 5911LL;

	t39 = ((x193|x194)&(x195-x196));

	if (t39 != 255LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x197 = INT16_MAX;
	volatile int64_t x198 = -1LL;
	int64_t x199 = -1LL;
	int64_t x200 = -1LL;
	int64_t t40 = -131525589571LL;

	t40 = ((x197|x198)&(x199-x200));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t x201 = INT32_MIN;
	static volatile int64_t x202 = INT64_MIN;
	volatile int64_t x203 = INT64_MAX;
	uint8_t x204 = 0U;

	t41 = ((x201|x202)&(x203-x204));

	if (t41 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x206 = -1;
	int64_t x207 = 4046LL;
	int32_t x208 = INT32_MIN;

	t42 = ((x205|x206)&(x207-x208));

	if (t42 != 2147487694LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x209 = -126910872337LL;
	volatile int16_t x210 = INT16_MIN;

	t43 = ((x209|x210)&(x211-x212));

	if (t43 != -15226LL) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x213 = INT8_MIN;
	int32_t x214 = -190659;
	static uint64_t x215 = UINT64_MAX;
	int16_t x216 = -26;
	volatile uint64_t t44 = 186LLU;

	t44 = ((x213|x214)&(x215-x216));

	if (t44 != 25LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static uint8_t x217 = 1U;
	uint16_t x219 = 11779U;
	volatile int8_t x220 = INT8_MIN;

	t45 = ((x217|x218)&(x219-x220));

	if (t45 != 1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x221 = -1;
	static volatile uint16_t x223 = 182U;
	volatile int16_t x224 = -1;

	t46 = ((x221|x222)&(x223-x224));

	if (t46 != 183) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x225 = INT64_MIN;
	int16_t x226 = INT16_MIN;
	int8_t x228 = INT8_MIN;
	volatile int64_t t47 = -1634199LL;

	t47 = ((x225|x226)&(x227-x228));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x229 = INT32_MIN;
	int64_t x230 = INT64_MAX;
	static int8_t x231 = 0;
	uint16_t x232 = UINT16_MAX;

	t48 = ((x229|x230)&(x231-x232));

	if (t48 != -65535LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint16_t x237 = 727U;
	int64_t x238 = 30256LL;
	int32_t x239 = INT32_MAX;
	int32_t x240 = INT32_MAX;
	int64_t t49 = 222553740281181168LL;

	t49 = ((x237|x238)&(x239-x240));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x241 = 4;
	static volatile uint64_t x242 = 56201LLU;
	uint32_t x244 = 1955420783U;
	volatile uint64_t t50 = 34LLU;

	t50 = ((x241|x242)&(x243-x244));

	if (t50 != 385LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x246 = 2U;
	int8_t x247 = -21;
	static uint64_t x248 = 318117561LLU;
	volatile uint64_t t51 = 5827LLU;

	t51 = ((x245|x246)&(x247-x248));

	if (t51 != 16402LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint16_t x249 = UINT16_MAX;
	volatile int32_t x250 = 1742;
	uint16_t x251 = 7U;
	volatile int32_t t52 = 1;

	t52 = ((x249|x250)&(x251-x252));

	if (t52 != 8) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x254 = 5;
	volatile int8_t x255 = INT8_MIN;
	int32_t x256 = INT32_MIN;

	t53 = ((x253|x254)&(x255-x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x257 = 751;
	volatile uint64_t x258 = 3203824LLU;
	int64_t x260 = INT64_MAX;
	volatile uint64_t t54 = 13935226282163LLU;

	t54 = ((x257|x258)&(x259-x260));

	if (t54 != 3LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x261 = -164763;
	uint64_t x262 = 27911446431279821LLU;
	uint8_t x264 = 0U;
	static volatile uint64_t t55 = 3129775716788LLU;

	t55 = ((x261|x262)&(x263-x264));

	if (t55 != 18446744073709387404LLU) { NG(); } else { ; }
	
}

void f56(void) {
	volatile uint16_t x265 = UINT16_MAX;
	int16_t x266 = INT16_MIN;
	int64_t x268 = 1152LL;
	volatile int64_t t56 = 1180217318824LL;

	t56 = ((x265|x266)&(x267-x268));

	if (t56 != -1152LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x269 = -1;
	int8_t x270 = 0;
	int16_t x272 = -3;
	int32_t t57 = 6939537;

	t57 = ((x269|x270)&(x271-x272));

	if (t57 != -19) { NG(); } else { ; }
	
}

void f58(void) {
	uint64_t x277 = UINT64_MAX;
	int32_t x278 = INT32_MIN;
	uint64_t x279 = 4247109938885248LLU;
	int8_t x280 = -1;
	volatile uint64_t t58 = 8516485361311148269LLU;

	t58 = ((x277|x278)&(x279-x280));

	if (t58 != 4247109938885249LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x281 = -1LL;
	int64_t x282 = INT64_MIN;
	volatile uint16_t x283 = 1U;
	int16_t x284 = INT16_MAX;
	volatile int64_t t59 = -3LL;

	t59 = ((x281|x282)&(x283-x284));

	if (t59 != -32766LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x293 = -458796877555054LL;
	static volatile int64_t x295 = -1LL;
	int64_t x296 = -276036177917219257LL;
	volatile int64_t t60 = 0LL;

	t60 = ((x293|x294)&(x295-x296));

	if (t60 != 276036175888683152LL) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x297 = INT32_MAX;
	int8_t x299 = -1;
	int8_t x300 = -1;
	int32_t t61 = 7402;

	t61 = ((x297|x298)&(x299-x300));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x301 = 64001330U;
	int32_t x302 = -1;
	volatile int8_t x303 = 0;
	volatile int16_t x304 = -1;
	uint32_t t62 = 23U;

	t62 = ((x301|x302)&(x303-x304));

	if (t62 != 1U) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x305 = 12283;
	int8_t x306 = INT8_MIN;
	volatile uint32_t x307 = 589124729U;

	t63 = ((x305|x306)&(x307-x308));

	if (t63 != 589124873LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x316 = UINT64_MAX;
	volatile uint64_t t64 = 852566341758LLU;

	t64 = ((x313|x314)&(x315-x316));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x317 = 258U;
	int32_t x319 = -24623;
	uint64_t x320 = UINT64_MAX;
	volatile uint64_t t65 = 1LLU;

	t65 = ((x317|x318)&(x319-x320));

	if (t65 != 18446744073709526914LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x321 = -1LL;
	uint64_t x322 = 53LLU;
	static int8_t x323 = INT8_MIN;
	volatile uint64_t t66 = 84LLU;

	t66 = ((x321|x322)&(x323-x324));

	if (t66 != 18446744073709549657LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x325 = UINT32_MAX;
	int16_t x326 = INT16_MIN;
	int32_t x327 = -1381;
	uint64_t x328 = UINT64_MAX;

	t67 = ((x325|x326)&(x327-x328));

	if (t67 != 4294965916LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x329 = INT32_MIN;
	int64_t x330 = -8LL;
	int32_t x331 = 636;
	int8_t x332 = -1;
	int64_t t68 = 48487338572LL;

	t68 = ((x329|x330)&(x331-x332));

	if (t68 != 632LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x333 = -1;
	int32_t x335 = -1;
	static int16_t x336 = -15977;
	volatile int32_t t69 = -39381;

	t69 = ((x333|x334)&(x335-x336));

	if (t69 != 15976) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x337 = 3U;
	int8_t x338 = INT8_MAX;
	uint16_t x339 = UINT16_MAX;
	int8_t x340 = INT8_MIN;
	volatile int32_t t70 = 67071301;

	t70 = ((x337|x338)&(x339-x340));

	if (t70 != 127) { NG(); } else { ; }
	
}

void f71(void) {
	static int64_t x341 = -1LL;
	static int16_t x342 = -40;
	uint16_t x343 = UINT16_MAX;
	uint32_t x344 = 80U;
	volatile int64_t t71 = -128013709LL;

	t71 = ((x341|x342)&(x343-x344));

	if (t71 != 65455LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x353 = INT32_MIN;
	uint16_t x354 = 7U;
	static uint8_t x355 = 0U;
	int32_t t72 = -3084251;

	t72 = ((x353|x354)&(x355-x356));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static uint64_t x361 = 23971LLU;
	uint16_t x362 = 1U;
	int16_t x363 = INT16_MAX;
	int8_t x364 = 0;
	uint64_t t73 = 4549LLU;

	t73 = ((x361|x362)&(x363-x364));

	if (t73 != 23971LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x365 = -1954LL;
	int8_t x366 = -1;
	int8_t x367 = INT8_MAX;
	int32_t x368 = -1;

	t74 = ((x365|x366)&(x367-x368));

	if (t74 != 128LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x370 = INT16_MIN;
	uint64_t x371 = 206271164954920178LLU;
	int16_t x372 = -1;
	uint64_t t75 = 27877217790834LLU;

	t75 = ((x369|x370)&(x371-x372));

	if (t75 != 206271164954902528LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x373 = INT32_MAX;
	static volatile int32_t x374 = -1;
	int8_t x375 = INT8_MIN;
	int16_t x376 = -352;
	int32_t t76 = 444;

	t76 = ((x373|x374)&(x375-x376));

	if (t76 != 224) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x377 = -1;
	static int32_t x378 = INT32_MAX;
	static uint8_t x380 = 40U;
	int64_t t77 = 1613250684LL;

	t77 = ((x377|x378)&(x379-x380));

	if (t77 != 9223372036854775767LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x381 = 0;
	static volatile uint32_t x382 = 46166U;
	uint32_t x384 = 404U;
	volatile int64_t t78 = 241LL;

	t78 = ((x381|x382)&(x383-x384));

	if (t78 != 46146LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int64_t x389 = -8810841555LL;
	int8_t x390 = INT8_MIN;
	volatile int8_t x391 = INT8_MIN;
	static int32_t x392 = INT32_MIN;
	volatile int64_t t79 = -7669458057LL;

	t79 = ((x389|x390)&(x391-x392));

	if (t79 != 2147483520LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x393 = 283;
	int8_t x394 = INT8_MIN;
	int8_t x395 = -1;
	volatile int16_t x396 = INT16_MAX;
	int32_t t80 = 116577121;

	t80 = ((x393|x394)&(x395-x396));

	if (t80 != -32768) { NG(); } else { ; }
	
}

void f81(void) {
	uint32_t x397 = UINT32_MAX;
	int8_t x398 = INT8_MIN;
	int8_t x400 = INT8_MIN;
	volatile uint32_t t81 = 1302975950U;

	t81 = ((x397|x398)&(x399-x400));

	if (t81 != 127U) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x401 = INT16_MAX;
	int32_t x402 = INT32_MIN;
	uint32_t x403 = 52U;
	uint64_t x404 = UINT64_MAX;
	volatile uint64_t t82 = 738259887450LLU;

	t82 = ((x401|x402)&(x403-x404));

	if (t82 != 53LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x405 = INT16_MIN;
	volatile int64_t x406 = INT64_MAX;
	int16_t x407 = 29;
	volatile int16_t x408 = INT16_MIN;
	volatile int64_t t83 = -83471733914342LL;

	t83 = ((x405|x406)&(x407-x408));

	if (t83 != 32797LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int8_t x409 = -1;
	uint8_t x410 = 7U;
	int16_t x411 = INT16_MAX;
	uint64_t t84 = 24289971760LLU;

	t84 = ((x409|x410)&(x411-x412));

	if (t84 != 32768LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x413 = INT64_MAX;
	int32_t x414 = -1;
	static int64_t t85 = -240825280972691LL;

	t85 = ((x413|x414)&(x415-x416));

	if (t85 != -1LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint32_t x417 = UINT32_MAX;
	static int64_t x418 = INT64_MIN;
	uint64_t x419 = 1541863657021823817LLU;
	volatile int32_t x420 = -1;
	volatile uint64_t t86 = 280LLU;

	t86 = ((x417|x418)&(x419-x420));

	if (t86 != 2967395146LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x421 = 76U;
	int32_t x422 = INT32_MAX;
	uint16_t x424 = 1524U;

	t87 = ((x421|x422)&(x423-x424));

	if (t87 != 2147481996) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x425 = -1;
	int16_t x427 = -2375;
	static volatile int64_t t88 = -99263LL;

	t88 = ((x425|x426)&(x427-x428));

	if (t88 != 4032357224LL) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x429 = -1LL;
	int32_t x430 = INT32_MAX;
	int16_t x431 = 44;
	uint8_t x432 = 70U;
	int64_t t89 = -353895352LL;

	t89 = ((x429|x430)&(x431-x432));

	if (t89 != -26LL) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x433 = 359;
	int32_t x434 = 1761885;
	static int64_t x435 = INT64_MIN;
	int16_t x436 = INT16_MIN;

	t90 = ((x433|x434)&(x435-x436));

	if (t90 != 32768LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x437 = INT16_MAX;
	uint8_t x438 = 12U;
	int8_t x439 = -1;
	int8_t x440 = 25;
	int32_t t91 = -6979;

	t91 = ((x437|x438)&(x439-x440));

	if (t91 != 32742) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x445 = -18332030866LL;
	volatile int16_t x446 = -9;
	static int16_t x447 = INT16_MIN;
	static int32_t x448 = INT32_MIN;
	int64_t t92 = -2024LL;

	t92 = ((x445|x446)&(x447-x448));

	if (t92 != 2147450880LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x451 = 28;
	static uint64_t x452 = 4441751563390LLU;
	volatile uint64_t t93 = 7708134736LLU;

	t93 = ((x449|x450)&(x451-x452));

	if (t93 != 250805479883706374LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int8_t x453 = INT8_MIN;
	static uint16_t x454 = UINT16_MAX;
	static uint8_t x455 = 7U;
	int8_t x456 = 16;
	static volatile int32_t t94 = -537;

	t94 = ((x453|x454)&(x455-x456));

	if (t94 != -9) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x461 = INT32_MAX;
	uint8_t x462 = UINT8_MAX;
	volatile int32_t x463 = -357;
	int16_t x464 = -27;

	t95 = ((x461|x462)&(x463-x464));

	if (t95 != 2147483318) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x465 = -1LL;
	int8_t x466 = INT8_MAX;
	volatile int8_t x467 = 3;
	int64_t x468 = INT64_MAX;
	int64_t t96 = -974030399856LL;

	t96 = ((x465|x466)&(x467-x468));

	if (t96 != -9223372036854775804LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x470 = 31844LLU;
	int8_t x471 = INT8_MIN;
	static uint64_t t97 = 181LLU;

	t97 = ((x469|x470)&(x471-x472));

	if (t97 != 18446744071562099812LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x475 = 21U;
	uint64_t x476 = UINT64_MAX;
	uint64_t t98 = 682053465318LLU;

	t98 = ((x473|x474)&(x475-x476));

	if (t98 != 22LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x477 = INT64_MIN;
	volatile int16_t x478 = INT16_MIN;
	uint64_t x479 = 254131340691891518LLU;
	volatile uint64_t t99 = 199742083315LLU;

	t99 = ((x477|x478)&(x479-x480));

	if (t99 != 254131340691865600LLU) { NG(); } else { ; }
	
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

