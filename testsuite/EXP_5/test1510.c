#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = -1;
volatile int32_t t0 = 19334870;
int32_t x12 = INT32_MIN;
uint32_t t2 = 1293332U;
volatile uint64_t x16 = UINT64_MAX;
uint8_t x17 = 1U;
int16_t x20 = -1;
volatile int64_t x29 = INT64_MIN;
volatile uint64_t x30 = 15914845487155LLU;
int32_t x36 = -1;
int16_t x37 = INT16_MIN;
volatile uint32_t x46 = UINT32_MAX;
int16_t x50 = INT16_MAX;
volatile int16_t x51 = -11;
int32_t x60 = INT32_MIN;
uint8_t x68 = UINT8_MAX;
uint32_t x69 = 4486793U;
int32_t x70 = -1;
static uint16_t x76 = 224U;
int8_t x81 = INT8_MIN;
static uint16_t x86 = 118U;
static volatile int64_t x90 = -9080650LL;
uint32_t x107 = 6522U;
volatile int32_t x109 = INT32_MIN;
volatile int32_t x117 = INT32_MAX;
int32_t t26 = -1;
int8_t x122 = INT8_MAX;
int16_t x125 = -1;
volatile int32_t t29 = 73;
static int16_t x134 = -1;
int8_t x137 = -3;
uint32_t t32 = 15U;
int32_t x151 = INT32_MIN;
static uint16_t x157 = 7U;
static int16_t x163 = 1;
uint16_t x164 = 0U;
int32_t x167 = -1;
int64_t x171 = 1LL;
static int8_t x177 = INT8_MAX;
uint16_t x180 = 15669U;
uint64_t x184 = UINT64_MAX;
uint64_t x187 = 496LLU;
static int32_t x188 = INT32_MIN;
int32_t t41 = -5860;
volatile uint64_t t44 = 15104LLU;
int8_t x206 = INT8_MAX;
uint32_t t45 = 0U;
int64_t t46 = 1LL;
volatile int8_t x216 = INT8_MIN;
static int8_t x220 = -1;
static int32_t x222 = INT32_MIN;
static uint16_t x224 = UINT16_MAX;
uint16_t x226 = UINT16_MAX;
static volatile int64_t t50 = 6366733664583LL;
volatile int32_t t51 = -2869;
static volatile int8_t x242 = INT8_MIN;
uint32_t t54 = 2U;
uint32_t x247 = 21774U;
int32_t t55 = 21699703;
int64_t t56 = -21LL;
uint32_t x253 = UINT32_MAX;
uint32_t t57 = 14860U;
int64_t x260 = INT64_MAX;
volatile int8_t x268 = INT8_MIN;
int16_t x270 = INT16_MIN;
static int32_t x271 = -40287893;
uint32_t x277 = 459899U;
uint32_t t61 = 29461U;
static volatile uint8_t x288 = 21U;
volatile uint64_t t63 = 2893355448493810891LLU;
int16_t x309 = -1;
int32_t x313 = -1;
volatile int64_t t70 = INT64_MAX;
int16_t x320 = -1;
volatile int32_t t71 = 1;
int64_t x324 = -3503957LL;
static volatile int64_t t72 = 16LL;
uint8_t x325 = UINT8_MAX;
int64_t x326 = -86LL;
int32_t t74 = -992;
int32_t x347 = INT32_MIN;
volatile int16_t x349 = INT16_MIN;
uint32_t x350 = 131863137U;
int8_t x361 = -1;
static int64_t x364 = INT64_MIN;
static int64_t x368 = 37503674426LL;
static volatile int32_t t83 = 3;
volatile int8_t x377 = -1;
int64_t x379 = 14952137819514066LL;
volatile int16_t x382 = INT16_MIN;
static int32_t x386 = -1;
int8_t x387 = -1;
volatile uint64_t t88 = 334LLU;
uint32_t x400 = UINT32_MAX;
int8_t x411 = INT8_MIN;
static int16_t x416 = INT16_MAX;
static int64_t x418 = 323643380437LL;
static int64_t t94 = 2640279LL;
volatile int32_t x422 = INT32_MIN;
int32_t x423 = -10;
int16_t x424 = INT16_MIN;
volatile uint32_t t95 = 12842830U;
uint64_t x428 = 818LLU;
volatile int64_t t98 = -1733801034LL;
int16_t x438 = -1;
static int64_t t99 = INT64_MAX;


void f0(void) {
	int8_t x2 = INT8_MIN;
	int64_t x3 = INT64_MIN;
	int16_t x4 = INT16_MAX;

	t0 = (x1-((x2<x3)^x4));

	if (t0 != -32768) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static uint8_t x6 = UINT8_MAX;
	volatile int32_t x7 = INT32_MAX;
	static volatile uint64_t x8 = UINT64_MAX;
	volatile uint64_t t1 = 4LLU;

	t1 = (x5-((x6<x7)^x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint32_t x9 = UINT32_MAX;
	int16_t x10 = 6;
	int8_t x11 = 4;

	t2 = (x9-((x10<x11)^x12));

	if (t2 != 2147483647U) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1741;
	int32_t x14 = -8129;
	int32_t x15 = INT32_MAX;
	uint64_t t3 = 436067848794382259LLU;

	t3 = (x13-((x14<x15)^x16));

	if (t3 != 18446744073709549877LLU) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x18 = UINT32_MAX;
	int8_t x19 = -62;
	int32_t t4 = -1208862;

	t4 = (x17-((x18<x19)^x20));

	if (t4 != 2) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 2;
	int32_t x22 = INT32_MIN;
	static int32_t x23 = -1;
	uint32_t x24 = UINT32_MAX;
	static volatile uint32_t t5 = 40U;

	t5 = (x21-((x22<x23)^x24));

	if (t5 != 4U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x31 = INT16_MIN;
	volatile int16_t x32 = -1579;
	volatile int64_t t6 = 3658569460507194LL;

	t6 = (x29-((x30<x31)^x32));

	if (t6 != -9223372036854774228LL) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x33 = INT64_MIN;
	static int64_t x34 = -178LL;
	uint64_t x35 = 7232LLU;
	int64_t t7 = 105351957LL;

	t7 = (x33-((x34<x35)^x36));

	if (t7 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x38 = -13LL;
	static uint32_t x39 = 28U;
	volatile int8_t x40 = -5;
	int32_t t8 = 1;

	t8 = (x37-((x38<x39)^x40));

	if (t8 != -32762) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = INT32_MAX;
	int32_t x42 = INT32_MAX;
	volatile uint64_t x43 = 6799450174592166LLU;
	volatile uint8_t x44 = 2U;
	int32_t t9 = -106560171;

	t9 = (x41-((x42<x43)^x44));

	if (t9 != 2147483644) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x45 = INT16_MIN;
	uint8_t x47 = 105U;
	int32_t x48 = 3348136;
	volatile int32_t t10 = -29;

	t10 = (x45-((x46<x47)^x48));

	if (t10 != -3380904) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x49 = 114545527410LLU;
	int64_t x52 = -146887732LL;
	volatile uint64_t t11 = 719963911LLU;

	t11 = (x49-((x50<x51)^x52));

	if (t11 != 114692415142LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x53 = INT16_MAX;
	int8_t x54 = INT8_MIN;
	uint16_t x55 = 1642U;
	uint16_t x56 = UINT16_MAX;
	volatile int32_t t12 = 108070;

	t12 = (x53-((x54<x55)^x56));

	if (t12 != -32767) { NG(); } else { ; }
	
}

void f13(void) {
	static int16_t x57 = INT16_MIN;
	int32_t x58 = INT32_MAX;
	static int8_t x59 = INT8_MAX;
	volatile int32_t t13 = 18863011;

	t13 = (x57-((x58<x59)^x60));

	if (t13 != 2147450880) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -1;
	int8_t x66 = 0;
	uint16_t x67 = UINT16_MAX;
	int32_t t14 = -33852;

	t14 = (x65-((x66<x67)^x68));

	if (t14 != -255) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int8_t x71 = INT8_MIN;
	static volatile int8_t x72 = INT8_MIN;
	static uint32_t t15 = 111U;

	t15 = (x69-((x70<x71)^x72));

	if (t15 != 4486921U) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint64_t x73 = UINT64_MAX;
	int8_t x74 = -1;
	static int64_t x75 = INT64_MIN;
	uint64_t t16 = 339180LLU;

	t16 = (x73-((x74<x75)^x76));

	if (t16 != 18446744073709551391LLU) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int8_t x77 = INT8_MIN;
	int32_t x78 = INT32_MIN;
	int32_t x79 = -444;
	int16_t x80 = INT16_MAX;
	int32_t t17 = 2382;

	t17 = (x77-((x78<x79)^x80));

	if (t17 != -32894) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x82 = INT64_MIN;
	int8_t x83 = -1;
	uint8_t x84 = 77U;
	volatile int32_t t18 = 127;

	t18 = (x81-((x82<x83)^x84));

	if (t18 != -204) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x85 = UINT8_MAX;
	volatile uint16_t x87 = 742U;
	int8_t x88 = -1;
	volatile int32_t t19 = -6943725;

	t19 = (x85-((x86<x87)^x88));

	if (t19 != 257) { NG(); } else { ; }
	
}

void f20(void) {
	uint64_t x89 = 53776876559507LLU;
	uint8_t x91 = UINT8_MAX;
	uint16_t x92 = 105U;
	static volatile uint64_t t20 = 177448014807661790LLU;

	t20 = (x89-((x90<x91)^x92));

	if (t20 != 53776876559403LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x93 = UINT32_MAX;
	volatile uint8_t x94 = 1U;
	static int16_t x95 = INT16_MAX;
	static int16_t x96 = INT16_MAX;
	static volatile uint32_t t21 = 144711U;

	t21 = (x93-((x94<x95)^x96));

	if (t21 != 4294934529U) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x101 = INT64_MAX;
	uint8_t x102 = 6U;
	uint16_t x103 = 609U;
	int8_t x104 = INT8_MAX;
	int64_t t22 = 5322068531LL;

	t22 = (x101-((x102<x103)^x104));

	if (t22 != 9223372036854775681LL) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x105 = -1;
	int16_t x106 = 1153;
	int16_t x108 = -2757;
	volatile int32_t t23 = 26795;

	t23 = (x105-((x106<x107)^x108));

	if (t23 != 2757) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x110 = INT32_MIN;
	int8_t x111 = -1;
	int32_t x112 = INT32_MIN;
	int32_t t24 = -43;

	t24 = (x109-((x110<x111)^x112));

	if (t24 != -1) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x113 = INT64_MIN;
	uint16_t x114 = 1723U;
	int8_t x115 = -6;
	uint64_t x116 = 698927428091970LLU;
	uint64_t t25 = 0LLU;

	t25 = (x113-((x114<x115)^x116));

	if (t25 != 9222673109426683838LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint16_t x118 = UINT16_MAX;
	static volatile uint32_t x119 = 3514U;
	static uint16_t x120 = 4984U;

	t26 = (x117-((x118<x119)^x120));

	if (t26 != 2147478663) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x121 = INT8_MIN;
	static int32_t x123 = INT32_MIN;
	uint32_t x124 = 169716390U;
	volatile uint32_t t27 = 1U;

	t27 = (x121-((x122<x123)^x124));

	if (t27 != 4125250778U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x126 = -14;
	int16_t x127 = -1;
	uint64_t x128 = UINT64_MAX;
	volatile uint64_t t28 = 14LLU;

	t28 = (x125-((x126<x127)^x128));

	if (t28 != 1LLU) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int8_t x129 = 0;
	int16_t x130 = INT16_MAX;
	static int8_t x131 = -18;
	int16_t x132 = 838;

	t29 = (x129-((x130<x131)^x132));

	if (t29 != -838) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x133 = 1U;
	int8_t x135 = 0;
	static uint32_t x136 = 1559U;
	uint32_t t30 = 1U;

	t30 = (x133-((x134<x135)^x136));

	if (t30 != 4294965739U) { NG(); } else { ; }
	
}

void f31(void) {
	int16_t x138 = INT16_MIN;
	volatile int64_t x139 = -1LL;
	int8_t x140 = 0;
	volatile int32_t t31 = 9159;

	t31 = (x137-((x138<x139)^x140));

	if (t31 != -4) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = UINT32_MAX;
	int64_t x142 = INT64_MIN;
	int64_t x143 = INT64_MAX;
	int16_t x144 = 78;

	t32 = (x141-((x142<x143)^x144));

	if (t32 != 4294967216U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x145 = INT32_MIN;
	uint8_t x146 = UINT8_MAX;
	static int32_t x147 = 507105104;
	uint32_t x148 = 7808511U;
	uint32_t t33 = 2007493632U;

	t33 = (x145-((x146<x147)^x148));

	if (t33 != 2139675138U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = -5093;
	int32_t x150 = INT32_MIN;
	static uint16_t x152 = 1U;
	volatile int32_t t34 = -350;

	t34 = (x149-((x150<x151)^x152));

	if (t34 != -5094) { NG(); } else { ; }
	
}

void f35(void) {
	uint64_t x158 = 26942778LLU;
	int16_t x159 = -1;
	int32_t x160 = 371826;
	int32_t t35 = 56;

	t35 = (x157-((x158<x159)^x160));

	if (t35 != -371820) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x161 = INT8_MIN;
	uint32_t x162 = 65290U;
	volatile int32_t t36 = -63;

	t36 = (x161-((x162<x163)^x164));

	if (t36 != -128) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x165 = -7;
	int16_t x166 = INT16_MIN;
	volatile uint32_t x168 = 3U;
	uint32_t t37 = 6374U;

	t37 = (x165-((x166<x167)^x168));

	if (t37 != 4294967287U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = INT8_MIN;
	uint16_t x170 = 1610U;
	int32_t x172 = INT32_MIN;
	volatile int32_t t38 = 82612;

	t38 = (x169-((x170<x171)^x172));

	if (t38 != 2147483520) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x178 = INT32_MAX;
	static int64_t x179 = 1664589600904LL;
	volatile int32_t t39 = -43177031;

	t39 = (x177-((x178<x179)^x180));

	if (t39 != -15541) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x181 = 0;
	static int32_t x182 = INT32_MIN;
	uint64_t x183 = 7372647LLU;
	volatile uint64_t t40 = 6636474883LLU;

	t40 = (x181-((x182<x183)^x184));

	if (t40 != 1LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = INT16_MIN;
	volatile int8_t x186 = -1;

	t41 = (x185-((x186<x187)^x188));

	if (t41 != 2147450880) { NG(); } else { ; }
	
}

void f42(void) {
	static int8_t x189 = INT8_MIN;
	static uint16_t x190 = 70U;
	int16_t x191 = INT16_MAX;
	volatile int32_t x192 = -23;
	volatile int32_t t42 = 1;

	t42 = (x189-((x190<x191)^x192));

	if (t42 != -104) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int32_t x193 = INT32_MIN;
	volatile int8_t x194 = 1;
	int16_t x195 = INT16_MIN;
	uint64_t x196 = 1759155291533107917LLU;
	uint64_t t43 = 68582409468745116LLU;

	t43 = (x193-((x194<x195)^x196));

	if (t43 != 16687588780028960051LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x197 = 21086U;
	int16_t x198 = INT16_MAX;
	int64_t x199 = 978937349832618LL;
	uint64_t x200 = UINT64_MAX;

	t44 = (x197-((x198<x199)^x200));

	if (t44 != 21088LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint32_t x205 = 11290307U;
	static int16_t x207 = -1;
	volatile int8_t x208 = 2;

	t45 = (x205-((x206<x207)^x208));

	if (t45 != 11290305U) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x209 = 1U;
	uint32_t x210 = UINT32_MAX;
	static volatile uint64_t x211 = UINT64_MAX;
	int64_t x212 = -4440177053311LL;

	t46 = (x209-((x210<x211)^x212));

	if (t46 != 4440177053313LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x213 = -1;
	static uint16_t x214 = 103U;
	static int64_t x215 = INT64_MAX;
	static volatile int32_t t47 = 60806178;

	t47 = (x213-((x214<x215)^x216));

	if (t47 != 126) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x217 = 1;
	int32_t x218 = -1;
	int64_t x219 = INT64_MAX;
	volatile int32_t t48 = -9;

	t48 = (x217-((x218<x219)^x220));

	if (t48 != 3) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x221 = 3;
	uint64_t x223 = 1898902LLU;
	int32_t t49 = 22696;

	t49 = (x221-((x222<x223)^x224));

	if (t49 != -65532) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x225 = -1LL;
	int32_t x227 = INT32_MIN;
	volatile int8_t x228 = 44;

	t50 = (x225-((x226<x227)^x228));

	if (t50 != -45LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x229 = INT16_MAX;
	int8_t x230 = INT8_MIN;
	uint8_t x231 = 14U;
	int8_t x232 = INT8_MAX;

	t51 = (x229-((x230<x231)^x232));

	if (t51 != 32641) { NG(); } else { ; }
	
}

void f52(void) {
	static int32_t x233 = -100564499;
	int64_t x234 = INT64_MIN;
	int16_t x235 = INT16_MAX;
	volatile int64_t x236 = -1LL;
	int64_t t52 = -1462566522464LL;

	t52 = (x233-((x234<x235)^x236));

	if (t52 != -100564497LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x237 = 4824;
	uint64_t x238 = UINT64_MAX;
	uint16_t x239 = UINT16_MAX;
	uint64_t x240 = UINT64_MAX;
	volatile uint64_t t53 = 3045002888568LLU;

	t53 = (x237-((x238<x239)^x240));

	if (t53 != 4825LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static int8_t x241 = -2;
	static int64_t x243 = INT64_MIN;
	volatile uint32_t x244 = 28U;

	t54 = (x241-((x242<x243)^x244));

	if (t54 != 4294967266U) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x245 = -14;
	uint64_t x246 = 747141LLU;
	uint16_t x248 = UINT16_MAX;

	t55 = (x245-((x246<x247)^x248));

	if (t55 != -65549) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x249 = INT64_MIN;
	volatile int64_t x250 = -2372472850LL;
	uint16_t x251 = 281U;
	int32_t x252 = -1;

	t56 = (x249-((x250<x251)^x252));

	if (t56 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x254 = INT8_MAX;
	int16_t x255 = INT16_MIN;
	volatile int16_t x256 = 1;

	t57 = (x253-((x254<x255)^x256));

	if (t57 != 4294967294U) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x257 = 1209519U;
	uint32_t x258 = UINT32_MAX;
	volatile int8_t x259 = -1;
	static volatile int64_t t58 = -378163662231865047LL;

	t58 = (x257-((x258<x259)^x260));

	if (t58 != -9223372036853566288LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int8_t x265 = -40;
	int32_t x266 = INT32_MAX;
	static uint8_t x267 = 1U;
	static volatile int32_t t59 = -14369;

	t59 = (x265-((x266<x267)^x268));

	if (t59 != 88) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x269 = -1;
	int32_t x272 = INT32_MIN;
	volatile int32_t t60 = INT32_MAX;

	t60 = (x269-((x270<x271)^x272));

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x278 = 0;
	int64_t x279 = -574194754472654010LL;
	static int8_t x280 = -25;

	t61 = (x277-((x278<x279)^x280));

	if (t61 != 459924U) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x281 = UINT8_MAX;
	volatile uint8_t x282 = 126U;
	int32_t x283 = INT32_MAX;
	uint8_t x284 = 0U;
	int32_t t62 = -13875220;

	t62 = (x281-((x282<x283)^x284));

	if (t62 != 254) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x285 = 16825684518519963LLU;
	uint16_t x286 = 21U;
	uint32_t x287 = 3870U;

	t63 = (x285-((x286<x287)^x288));

	if (t63 != 16825684518519943LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x289 = -1;
	int16_t x290 = INT16_MIN;
	uint32_t x291 = 130764376U;
	static int8_t x292 = INT8_MAX;
	volatile int32_t t64 = -14764457;

	t64 = (x289-((x290<x291)^x292));

	if (t64 != -128) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x293 = UINT16_MAX;
	static int8_t x294 = 27;
	static int64_t x295 = INT64_MIN;
	int16_t x296 = -1;
	static volatile int32_t t65 = 642297;

	t65 = (x293-((x294<x295)^x296));

	if (t65 != 65536) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x297 = -1;
	int64_t x298 = -1459017909776222LL;
	static int32_t x299 = 29642;
	static int8_t x300 = 3;
	int32_t t66 = 230486147;

	t66 = (x297-((x298<x299)^x300));

	if (t66 != -3) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x301 = -229977246129650501LL;
	static int16_t x302 = -1;
	static volatile int8_t x303 = -1;
	int8_t x304 = INT8_MAX;
	volatile int64_t t67 = -1LL;

	t67 = (x301-((x302<x303)^x304));

	if (t67 != -229977246129650628LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint32_t x305 = UINT32_MAX;
	int8_t x306 = -37;
	int64_t x307 = INT64_MIN;
	uint8_t x308 = 3U;
	volatile uint32_t t68 = 15325008U;

	t68 = (x305-((x306<x307)^x308));

	if (t68 != 4294967292U) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x310 = -1LL;
	int8_t x311 = -1;
	uint8_t x312 = 1U;
	int32_t t69 = 110;

	t69 = (x309-((x310<x311)^x312));

	if (t69 != -2) { NG(); } else { ; }
	
}

void f70(void) {
	int8_t x314 = INT8_MAX;
	int64_t x315 = INT64_MIN;
	int64_t x316 = INT64_MIN;

	t70 = (x313-((x314<x315)^x316));

	if (t70 != INT64_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int8_t x317 = INT8_MIN;
	volatile int16_t x318 = -904;
	int16_t x319 = INT16_MIN;

	t71 = (x317-((x318<x319)^x320));

	if (t71 != -127) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x321 = 48U;
	int16_t x322 = INT16_MIN;
	static volatile uint8_t x323 = 45U;

	t72 = (x321-((x322<x323)^x324));

	if (t72 != 3504006LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x327 = UINT64_MAX;
	static int32_t x328 = INT32_MAX;
	static int32_t t73 = 51183682;

	t73 = (x325-((x326<x327)^x328));

	if (t73 != -2147483391) { NG(); } else { ; }
	
}

void f74(void) {
	static int32_t x329 = -15;
	uint8_t x330 = 4U;
	static int32_t x331 = INT32_MIN;
	uint16_t x332 = 62U;

	t74 = (x329-((x330<x331)^x332));

	if (t74 != -77) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MIN;
	int16_t x334 = -97;
	static int32_t x335 = 2627;
	uint32_t x336 = 25341168U;
	uint32_t t75 = 230744U;

	t75 = (x333-((x334<x335)^x336));

	if (t75 != 4269593359U) { NG(); } else { ; }
	
}

void f76(void) {
	static int32_t x345 = -1;
	int32_t x346 = 373530183;
	static volatile int64_t x348 = INT64_MAX;
	volatile int64_t t76 = INT64_MIN;

	t76 = (x345-((x346<x347)^x348));

	if (t76 != INT64_MIN) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x351 = 0U;
	uint8_t x352 = 1U;
	int32_t t77 = 1753;

	t77 = (x349-((x350<x351)^x352));

	if (t77 != -32769) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x353 = 0;
	int8_t x354 = -15;
	volatile uint16_t x355 = 311U;
	volatile int64_t x356 = INT64_MIN;
	static int64_t t78 = INT64_MAX;

	t78 = (x353-((x354<x355)^x356));

	if (t78 != INT64_MAX) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x357 = INT8_MIN;
	int16_t x358 = 0;
	int16_t x359 = -7;
	uint16_t x360 = 3U;
	int32_t t79 = -33941;

	t79 = (x357-((x358<x359)^x360));

	if (t79 != -131) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x362 = 15790U;
	int8_t x363 = INT8_MIN;
	volatile int64_t t80 = INT64_MAX;

	t80 = (x361-((x362<x363)^x364));

	if (t80 != INT64_MAX) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x365 = 3126707;
	int16_t x366 = -43;
	uint64_t x367 = UINT64_MAX;
	volatile int64_t t81 = 4910LL;

	t81 = (x365-((x366<x367)^x368));

	if (t81 != -37500547720LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x369 = -1;
	uint16_t x370 = 6U;
	int16_t x371 = INT16_MIN;
	int16_t x372 = INT16_MIN;
	static int32_t t82 = 160;

	t82 = (x369-((x370<x371)^x372));

	if (t82 != 32767) { NG(); } else { ; }
	
}

void f83(void) {
	static uint8_t x373 = 0U;
	int32_t x374 = -1;
	uint64_t x375 = UINT64_MAX;
	uint16_t x376 = 26042U;

	t83 = (x373-((x374<x375)^x376));

	if (t83 != -26042) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int64_t x378 = 1LL;
	static uint32_t x380 = 309797925U;
	volatile uint32_t t84 = 18030U;

	t84 = (x377-((x378<x379)^x380));

	if (t84 != 3985169371U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x381 = -1;
	int8_t x383 = INT8_MIN;
	int16_t x384 = INT16_MAX;
	volatile int32_t t85 = 4416;

	t85 = (x381-((x382<x383)^x384));

	if (t85 != -32767) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x385 = -1;
	uint16_t x388 = UINT16_MAX;
	int32_t t86 = -91510031;

	t86 = (x385-((x386<x387)^x388));

	if (t86 != -65536) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x389 = 19721468LLU;
	int16_t x390 = INT16_MAX;
	static uint16_t x391 = 53U;
	uint8_t x392 = 15U;
	uint64_t t87 = 345541LLU;

	t87 = (x389-((x390<x391)^x392));

	if (t87 != 19721453LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x393 = 257759430LLU;
	static int64_t x394 = INT64_MAX;
	int16_t x395 = 0;
	int32_t x396 = INT32_MAX;

	t88 = (x393-((x394<x395)^x396));

	if (t88 != 18446744071819827399LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static volatile int64_t x397 = -12761620984LL;
	int32_t x398 = INT32_MAX;
	int8_t x399 = -1;
	int64_t t89 = 6875516707992815LL;

	t89 = (x397-((x398<x399)^x400));

	if (t89 != -17056588279LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x401 = 13;
	static int16_t x402 = INT16_MIN;
	volatile int16_t x403 = INT16_MIN;
	volatile uint32_t x404 = 41U;
	uint32_t t90 = 1U;

	t90 = (x401-((x402<x403)^x404));

	if (t90 != 4294967268U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x405 = 109981166715051287LL;
	int8_t x406 = INT8_MAX;
	int16_t x407 = INT16_MIN;
	static volatile uint16_t x408 = 55U;
	volatile int64_t t91 = -28787511448573663LL;

	t91 = (x405-((x406<x407)^x408));

	if (t91 != 109981166715051232LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x409 = 1421U;
	static uint64_t x410 = UINT64_MAX;
	uint64_t x412 = 3LLU;
	static uint64_t t92 = 2LLU;

	t92 = (x409-((x410<x411)^x412));

	if (t92 != 1418LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x413 = 198U;
	static uint16_t x414 = 8U;
	int16_t x415 = -1;
	volatile int32_t t93 = 7494;

	t93 = (x413-((x414<x415)^x416));

	if (t93 != -32569) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x417 = INT32_MIN;
	static int32_t x419 = INT32_MIN;
	int64_t x420 = 6399597843LL;

	t94 = (x417-((x418<x419)^x420));

	if (t94 != -8547081491LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint32_t x421 = 487480942U;

	t95 = (x421-((x422<x423)^x424));

	if (t95 != 487513709U) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile uint32_t x425 = 28U;
	int64_t x426 = INT64_MIN;
	int16_t x427 = INT16_MIN;
	volatile uint64_t t96 = 1LLU;

	t96 = (x425-((x426<x427)^x428));

	if (t96 != 18446744073709550825LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x429 = 102U;
	volatile int32_t x430 = -1;
	uint32_t x431 = 542085998U;
	int8_t x432 = -1;
	volatile int32_t t97 = 1;

	t97 = (x429-((x430<x431)^x432));

	if (t97 != 103) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = INT8_MIN;
	int32_t x434 = INT32_MIN;
	int8_t x435 = INT8_MIN;
	static int64_t x436 = 689889564837818703LL;

	t98 = (x433-((x434<x435)^x436));

	if (t98 != -689889564837818830LL) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x437 = -1LL;
	int16_t x439 = -1;
	volatile int64_t x440 = INT64_MIN;

	t99 = (x437-((x438<x439)^x440));

	if (t99 != INT64_MAX) { NG(); } else { ; }
	
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

