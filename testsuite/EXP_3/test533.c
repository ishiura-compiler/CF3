#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x3 = 2033648;
int64_t x6 = 551549496251820477LL;
uint64_t t1 = 4LLU;
volatile int64_t x10 = -512442092889929975LL;
volatile int64_t t4 = 319LL;
volatile uint64_t t9 = 13236LLU;
int16_t x41 = -1;
uint64_t t12 = 4735996LLU;
static uint16_t x70 = UINT16_MAX;
uint32_t x76 = UINT32_MAX;
volatile uint32_t x77 = 216451703U;
int64_t x86 = INT64_MIN;
int32_t x88 = INT32_MIN;
uint16_t x92 = 18U;
int64_t t20 = -465253583311705LL;
int32_t x96 = INT32_MAX;
uint64_t x105 = UINT64_MAX;
volatile uint64_t x108 = 157LLU;
static uint16_t x115 = UINT16_MAX;
int32_t x121 = INT32_MIN;
uint32_t x135 = UINT32_MAX;
int8_t x144 = 1;
static int64_t x145 = -1LL;
int8_t x147 = -1;
int32_t x148 = INT32_MIN;
uint64_t x154 = 225407931LLU;
volatile uint64_t t34 = 3640996739848LLU;
int32_t x157 = -55;
volatile uint32_t x158 = 5297U;
uint8_t x162 = UINT8_MAX;
int8_t x166 = INT8_MIN;
static volatile int32_t t38 = 26535;
int32_t x176 = -55957645;
volatile uint64_t t39 = 9804078792916659LLU;
int32_t x177 = INT32_MAX;
int64_t x183 = INT64_MIN;
volatile int64_t t42 = -391128086LL;
int8_t x196 = -22;
int32_t x198 = INT32_MAX;
volatile uint64_t t44 = 538LLU;
static volatile int32_t x202 = INT32_MAX;
volatile int32_t t45 = 0;
int64_t x210 = -67LL;
int32_t x216 = -1;
static int8_t x217 = INT8_MIN;
static int32_t t48 = -116100151;
int16_t x225 = -10820;
int16_t x228 = -610;
static int32_t x232 = INT32_MIN;
volatile uint32_t t50 = 64U;
uint64_t x234 = 25495771LLU;
int64_t x237 = 1LL;
int32_t x248 = 10498214;
uint64_t t53 = 641LLU;
uint32_t x253 = 6345853U;
volatile int8_t x255 = -22;
int8_t x257 = INT8_MAX;
volatile int8_t x260 = -1;
static volatile uint32_t x265 = UINT32_MAX;
static int64_t x267 = INT64_MAX;
static uint16_t x290 = 1737U;
volatile uint64_t t65 = 7LLU;
int8_t x302 = INT8_MIN;
int8_t x317 = 0;
int16_t x319 = 15;
uint16_t x333 = 3U;
volatile uint8_t x343 = UINT8_MAX;
int64_t x347 = INT64_MAX;
int16_t x348 = 101;
int32_t x352 = INT32_MIN;
int32_t x356 = INT32_MAX;
int32_t x360 = INT32_MIN;
int32_t x362 = -107969;
int8_t x363 = -1;
int8_t x365 = INT8_MIN;
volatile int64_t x378 = INT64_MAX;
uint32_t x379 = 49013298U;
volatile int16_t x381 = INT16_MAX;
static uint32_t x384 = 39990U;
uint16_t x385 = 1U;
uint16_t x394 = 9U;
uint64_t x395 = 1875415LLU;
int8_t x402 = -1;
static uint16_t x404 = 3345U;
uint32_t x411 = UINT32_MAX;
static volatile int32_t x426 = -1;
static int16_t x429 = INT16_MIN;
uint32_t t90 = 53437U;
uint32_t x442 = 566553U;
uint16_t x447 = UINT16_MAX;
int8_t x455 = INT8_MIN;
uint64_t x463 = 252593LLU;
int64_t x469 = -2199188841LL;


void f0(void) {
	int8_t x1 = INT8_MIN;
	static uint32_t x2 = 3811U;
	static int16_t x4 = -1;
	volatile uint32_t t0 = 156124780U;

	t0 = ((x1-x2)^(x3/x4));

	if (t0 != 2033805U) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int8_t x5 = 7;
	uint64_t x7 = UINT64_MAX;
	static int64_t x8 = -1LL;

	t1 = ((x5-x6)^(x7/x8));

	if (t1 != 17895194577457731147LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 81132862776LLU;
	int32_t x11 = 259;
	uint32_t x12 = 515U;
	volatile uint64_t t2 = 107857LLU;

	t2 = ((x9-x10)^(x11/x12));

	if (t2 != 512442174022792751LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 11U;
	static uint32_t x14 = 916U;
	int8_t x15 = 5;
	uint16_t x16 = UINT16_MAX;
	uint32_t t3 = 8U;

	t3 = ((x13-x14)^(x15/x16));

	if (t3 != 4294966391U) { NG(); } else { ; }
	
}

void f4(void) {
	static uint8_t x17 = 75U;
	volatile int64_t x18 = INT64_MAX;
	int16_t x19 = 649;
	int16_t x20 = -1;

	t4 = ((x17-x18)^(x19/x20));

	if (t4 != 9223372036854775099LL) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = 3U;
	static uint16_t x22 = 0U;
	uint16_t x23 = 17103U;
	uint64_t x24 = 2779LLU;
	uint64_t t5 = 120276701LLU;

	t5 = ((x21-x22)^(x23/x24));

	if (t5 != 5LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = -1;
	int16_t x26 = INT16_MIN;
	int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	volatile int64_t t6 = -1008347184124LL;

	t6 = ((x25-x26)^(x27/x28));

	if (t6 != 32767LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint64_t x29 = 159261746987LLU;
	static int16_t x30 = INT16_MIN;
	int8_t x31 = INT8_MIN;
	int32_t x32 = -637384;
	static volatile uint64_t t7 = 267549647LLU;

	t7 = ((x29-x30)^(x31/x32));

	if (t7 != 159261779755LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int16_t x34 = 45;
	int64_t x35 = INT64_MIN;
	static uint16_t x36 = 868U;
	volatile int64_t t8 = -14920867964313770LL;

	t8 = ((x33-x34)^(x35/x36));

	if (t8 != 10626004650754304LL) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -1;
	uint64_t x38 = UINT64_MAX;
	int32_t x39 = INT32_MIN;
	volatile int64_t x40 = -117702745196703LL;

	t9 = ((x37-x38)^(x39/x40));

	if (t9 != 0LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x42 = INT8_MIN;
	int32_t x43 = -1;
	uint8_t x44 = 36U;
	int32_t t10 = 514360481;

	t10 = ((x41-x42)^(x43/x44));

	if (t10 != 127) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = INT32_MAX;
	volatile uint8_t x46 = UINT8_MAX;
	static int16_t x47 = -1;
	int8_t x48 = -1;
	volatile int32_t t11 = -399169;

	t11 = ((x45-x46)^(x47/x48));

	if (t11 != 2147483393) { NG(); } else { ; }
	
}

void f12(void) {
	static int8_t x49 = -1;
	int16_t x50 = INT16_MIN;
	volatile uint64_t x51 = 48LLU;
	int8_t x52 = INT8_MIN;

	t12 = ((x49-x50)^(x51/x52));

	if (t12 != 32767LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x57 = INT8_MAX;
	static int64_t x58 = INT64_MAX;
	int64_t x59 = INT64_MAX;
	uint8_t x60 = 1U;
	int64_t t13 = -7030725516597LL;

	t13 = ((x57-x58)^(x59/x60));

	if (t13 != -129LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int16_t x61 = INT16_MAX;
	static volatile int16_t x62 = -1;
	int32_t x63 = 3160;
	static int32_t x64 = 1;
	volatile int32_t t14 = 19399935;

	t14 = ((x61-x62)^(x63/x64));

	if (t14 != 35928) { NG(); } else { ; }
	
}

void f15(void) {
	static int8_t x69 = -6;
	volatile uint16_t x71 = UINT16_MAX;
	volatile int64_t x72 = -3675646239636767811LL;
	static volatile int64_t t15 = 83817221877783LL;

	t15 = ((x69-x70)^(x71/x72));

	if (t15 != -65541LL) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x73 = -1LL;
	int32_t x74 = -1909363;
	uint8_t x75 = 0U;
	int64_t t16 = 189808070387450LL;

	t16 = ((x73-x74)^(x75/x76));

	if (t16 != 1909362LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x78 = 7U;
	int64_t x79 = INT64_MAX;
	volatile int16_t x80 = INT16_MIN;
	static int64_t t17 = 626322606126112000LL;

	t17 = ((x77-x78)^(x79/x80));

	if (t17 != -281474760258959LL) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x81 = -1;
	static volatile int16_t x82 = 47;
	uint8_t x83 = 7U;
	uint64_t x84 = 248LLU;
	uint64_t t18 = 2393373LLU;

	t18 = ((x81-x82)^(x83/x84));

	if (t18 != 18446744073709551568LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x85 = INT32_MIN;
	int32_t x87 = INT32_MIN;
	static int64_t t19 = 26739677717903471LL;

	t19 = ((x85-x86)^(x87/x88));

	if (t19 != 9223372034707292161LL) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x89 = -6005619796LL;
	int64_t x90 = INT64_MIN;
	int32_t x91 = INT32_MIN;

	t20 = ((x89-x90)^(x91/x92));

	if (t20 != -9223372030900302443LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x93 = -1;
	volatile int64_t x94 = INT64_MAX;
	int8_t x95 = INT8_MAX;
	static int64_t t21 = INT64_MIN;

	t21 = ((x93-x94)^(x95/x96));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x101 = 0;
	int16_t x102 = -98;
	uint32_t x103 = 85741433U;
	int16_t x104 = INT16_MAX;
	volatile uint32_t t22 = 23461288U;

	t22 = ((x101-x102)^(x103/x104));

	if (t22 != 2650U) { NG(); } else { ; }
	
}

void f23(void) {
	static uint16_t x106 = 320U;
	static int32_t x107 = INT32_MIN;
	volatile uint64_t t23 = 433363109833LLU;

	t23 = ((x105-x106)^(x107/x108));

	if (t23 != 18329248888540366789LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x113 = INT64_MAX;
	static int32_t x114 = 7405290;
	int16_t x116 = 1;
	volatile int64_t t24 = 16717LL;

	t24 = ((x113-x114)^(x115/x116));

	if (t24 != 9223372036847435498LL) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x117 = -1;
	int16_t x118 = 2;
	static volatile uint64_t x119 = UINT64_MAX;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t25 = 2507693636559930LLU;

	t25 = ((x117-x118)^(x119/x120));

	if (t25 != 18446744073709551612LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x122 = INT64_MIN;
	static int16_t x123 = 954;
	int16_t x124 = INT16_MIN;
	volatile int64_t t26 = -5200141LL;

	t26 = ((x121-x122)^(x123/x124));

	if (t26 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int16_t x125 = INT16_MIN;
	int16_t x126 = INT16_MIN;
	int64_t x127 = INT64_MAX;
	uint64_t x128 = 113818274295668LLU;
	static uint64_t t27 = 1076333602350LLU;

	t27 = ((x125-x126)^(x127/x128));

	if (t27 != 81035LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x129 = 1;
	static uint16_t x130 = 2U;
	int64_t x131 = -1LL;
	static uint8_t x132 = 56U;
	int64_t t28 = -5532LL;

	t28 = ((x129-x130)^(x131/x132));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x133 = INT16_MIN;
	int16_t x134 = INT16_MIN;
	int8_t x136 = -27;
	volatile uint32_t t29 = 139856463U;

	t29 = ((x133-x134)^(x135/x136));

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int8_t x137 = -12;
	int16_t x138 = INT16_MIN;
	int8_t x139 = INT8_MIN;
	uint32_t x140 = 47312U;
	uint32_t t30 = 5499U;

	t30 = ((x137-x138)^(x139/x140));

	if (t30 != 73071U) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x141 = INT32_MIN;
	int64_t x142 = -2121069107427989910LL;
	int8_t x143 = INT8_MIN;
	int64_t t31 = 49674806572277596LL;

	t31 = ((x141-x142)^(x143/x144));

	if (t31 != -2121069105280506346LL) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x146 = INT64_MAX;
	static int64_t t32 = INT64_MIN;

	t32 = ((x145-x146)^(x147/x148));

	if (t32 != INT64_MIN) { NG(); } else { ; }
	
}

void f33(void) {
	static uint8_t x149 = UINT8_MAX;
	static int8_t x150 = -1;
	int64_t x151 = -50619418380LL;
	int32_t x152 = INT32_MAX;
	volatile int64_t t33 = 921688700788LL;

	t33 = ((x149-x150)^(x151/x152));

	if (t33 != -279LL) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x153 = 2809211U;
	volatile uint16_t x155 = 6U;
	uint16_t x156 = 885U;

	t34 = ((x153-x154)^(x155/x156));

	if (t34 != 18446744073486952896LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x159 = INT64_MIN;
	int64_t x160 = -20039LL;
	static volatile int64_t t35 = 40150858LL;

	t35 = ((x157-x158)^(x159/x160));

	if (t35 != 460273562263925LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x161 = 77627307568688228LLU;
	int16_t x163 = INT16_MIN;
	static int64_t x164 = INT64_MIN;
	static uint64_t t36 = 129611001951068415LLU;

	t36 = ((x161-x162)^(x163/x164));

	if (t36 != 77627307568687973LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x165 = 183;
	int8_t x167 = -1;
	uint8_t x168 = 22U;
	volatile int32_t t37 = 7;

	t37 = ((x165-x166)^(x167/x168));

	if (t37 != 311) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x169 = 11;
	uint16_t x170 = 7U;
	uint16_t x171 = UINT16_MAX;
	static int8_t x172 = -2;

	t38 = ((x169-x170)^(x171/x172));

	if (t38 != -32763) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x173 = UINT32_MAX;
	volatile int16_t x174 = INT16_MIN;
	uint64_t x175 = 8880LLU;

	t39 = ((x173-x174)^(x175/x176));

	if (t39 != 32767LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x178 = -7153270676848LL;
	int32_t x179 = INT32_MIN;
	int16_t x180 = INT16_MIN;
	int64_t t40 = 209LL;

	t40 = ((x177-x178)^(x179/x180));

	if (t40 != 7155418226031LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = 8643903824331934234LLU;
	volatile int32_t x182 = 2;
	uint32_t x184 = UINT32_MAX;
	volatile uint64_t t41 = 8859072888LLU;

	t41 = ((x181-x182)^(x183/x184));

	if (t41 != 9802840248100719128LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int64_t x189 = INT64_MAX;
	uint32_t x190 = 164U;
	static uint8_t x191 = 1U;
	volatile int32_t x192 = INT32_MIN;

	t42 = ((x189-x190)^(x191/x192));

	if (t42 != 9223372036854775643LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = -1;
	static uint16_t x194 = 16U;
	volatile uint8_t x195 = 10U;
	int32_t t43 = 160;

	t43 = ((x193-x194)^(x195/x196));

	if (t43 != -17) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -1LL;
	uint64_t x199 = 182804597LLU;
	int32_t x200 = INT32_MIN;

	t44 = ((x197-x198)^(x199/x200));

	if (t44 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x201 = INT16_MAX;
	int32_t x203 = -1;
	static int32_t x204 = 963817;

	t45 = ((x201-x202)^(x203/x204));

	if (t45 != -2147450880) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x209 = -93;
	volatile int32_t x211 = -1;
	int16_t x212 = INT16_MIN;
	int64_t t46 = -16821707LL;

	t46 = ((x209-x210)^(x211/x212));

	if (t46 != -26LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x213 = 940629089LLU;
	static uint32_t x214 = UINT32_MAX;
	uint32_t x215 = UINT32_MAX;
	uint64_t t47 = 126446LLU;

	t47 = ((x213-x214)^(x215/x216));

	if (t47 != 18446744070355213411LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x218 = UINT8_MAX;
	int32_t x219 = INT32_MAX;
	int16_t x220 = INT16_MAX;

	t48 = ((x217-x218)^(x219/x220));

	if (t48 != -65917) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x226 = 358U;
	int64_t x227 = INT64_MAX;
	int64_t t49 = 791LL;

	t49 = ((x225-x226)^(x227/x228));

	if (t49 != 15120282027625234LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x229 = 7510;
	uint32_t x230 = 10U;
	uint16_t x231 = UINT16_MAX;

	t50 = ((x229-x230)^(x231/x232));

	if (t50 != 7500U) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x233 = INT8_MAX;
	volatile int32_t x235 = INT32_MAX;
	int16_t x236 = -1;
	uint64_t t51 = 319LLU;

	t51 = ((x233-x234)^(x235/x236));

	if (t51 != 2121988005LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x238 = INT64_MAX;
	int64_t x239 = INT64_MIN;
	static int64_t x240 = 2638LL;
	static volatile int64_t t52 = -119641000393369LL;

	t52 = ((x237-x238)^(x239/x240));

	if (t52 != 9219875686575452540LL) { NG(); } else { ; }
	
}

void f53(void) {
	static int8_t x245 = INT8_MAX;
	uint8_t x246 = 55U;
	uint64_t x247 = 14026766879LLU;

	t53 = ((x245-x246)^(x247/x248));

	if (t53 != 1392LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x249 = -1;
	volatile uint16_t x250 = 1U;
	static uint32_t x251 = 13130U;
	int32_t x252 = -1;
	uint32_t t54 = 5386748U;

	t54 = ((x249-x250)^(x251/x252));

	if (t54 != 4294967294U) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x254 = 480717505U;
	static uint16_t x256 = 18096U;
	uint32_t t55 = 6184211U;

	t55 = ((x253-x254)^(x255/x256));

	if (t55 != 3820595644U) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x258 = 285;
	volatile int8_t x259 = -63;
	int32_t t56 = 693776310;

	t56 = ((x257-x258)^(x259/x260));

	if (t56 != -163) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int32_t x261 = INT32_MIN;
	uint64_t x262 = 1413345114140889984LLU;
	static uint16_t x263 = 8368U;
	int64_t x264 = INT64_MIN;
	uint64_t t57 = 1990LLU;

	t57 = ((x261-x262)^(x263/x264));

	if (t57 != 17033398957421177984LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x266 = -1LL;
	int8_t x268 = -1;
	static int64_t t58 = 562583543247453089LL;

	t58 = ((x265-x266)^(x267/x268));

	if (t58 != -9223372032559808511LL) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x269 = INT16_MAX;
	volatile uint32_t x270 = 881294U;
	int16_t x271 = 2;
	int32_t x272 = INT32_MAX;
	volatile uint32_t t59 = 1U;

	t59 = ((x269-x270)^(x271/x272));

	if (t59 != 4294118769U) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x273 = 5320;
	static int8_t x274 = -1;
	uint32_t x275 = 114U;
	int16_t x276 = INT16_MAX;
	volatile uint32_t t60 = 29343U;

	t60 = ((x273-x274)^(x275/x276));

	if (t60 != 5321U) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x277 = INT32_MIN;
	static int8_t x278 = INT8_MIN;
	int8_t x279 = INT8_MIN;
	static volatile uint32_t x280 = 300967U;
	volatile uint32_t t61 = 1U;

	t61 = ((x277-x278)^(x279/x280));

	if (t61 != 2147497790U) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x281 = 53;
	int32_t x282 = -1;
	static int32_t x283 = INT32_MIN;
	int8_t x284 = INT8_MAX;
	volatile int32_t t62 = 1985577;

	t62 = ((x281-x282)^(x283/x284));

	if (t62 != -16909362) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x285 = -1;
	volatile int64_t x286 = INT64_MAX;
	int16_t x287 = INT16_MIN;
	int16_t x288 = INT16_MIN;
	int64_t t63 = -4046933820LL;

	t63 = ((x285-x286)^(x287/x288));

	if (t63 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x289 = -29977389639111LL;
	int64_t x291 = INT64_MAX;
	uint8_t x292 = UINT8_MAX;
	volatile int64_t t64 = -3805187LL;

	t64 = ((x289-x290)^(x291/x292));

	if (t64 != -36200059496934416LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint64_t x297 = UINT64_MAX;
	int32_t x298 = INT32_MIN;
	static int64_t x299 = INT64_MIN;
	int64_t x300 = -76890671LL;

	t65 = ((x297-x298)^(x299/x300));

	if (t65 != 118416314431LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x301 = INT64_MIN;
	uint32_t x303 = UINT32_MAX;
	int32_t x304 = 1947;
	volatile int64_t t66 = -253981607808002LL;

	t66 = ((x301-x302)^(x303/x304));

	if (t66 != -9223372036852569995LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x305 = UINT16_MAX;
	int64_t x306 = INT64_MAX;
	int32_t x307 = INT32_MIN;
	volatile uint16_t x308 = 9207U;
	volatile int64_t t67 = 1177036LL;

	t67 = ((x305-x306)^(x307/x308));

	if (t67 != 9223372036854608100LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x313 = INT64_MIN;
	static volatile int8_t x314 = INT8_MIN;
	uint8_t x315 = UINT8_MAX;
	static int8_t x316 = 3;
	volatile int64_t t68 = -7969147077LL;

	t68 = ((x313-x314)^(x315/x316));

	if (t68 != -9223372036854775595LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x318 = 13288U;
	uint8_t x320 = UINT8_MAX;
	volatile uint32_t t69 = 1345455104U;

	t69 = ((x317-x318)^(x319/x320));

	if (t69 != 4294954008U) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint8_t x334 = UINT8_MAX;
	uint8_t x335 = 53U;
	static volatile int16_t x336 = INT16_MIN;
	static int32_t t70 = -502;

	t70 = ((x333-x334)^(x335/x336));

	if (t70 != -252) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x337 = -32901066421990597LL;
	int16_t x338 = 97;
	int32_t x339 = INT32_MAX;
	int64_t x340 = INT64_MIN;
	static int64_t t71 = 1670LL;

	t71 = ((x337-x338)^(x339/x340));

	if (t71 != -32901066421990694LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int32_t x341 = 0;
	volatile uint32_t x342 = UINT32_MAX;
	static int8_t x344 = 5;
	uint32_t t72 = 65U;

	t72 = ((x341-x342)^(x343/x344));

	if (t72 != 50U) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int64_t x345 = -1LL;
	int64_t x346 = INT64_MAX;
	volatile int64_t t73 = 4064638735442981370LL;

	t73 = ((x345-x346)^(x347/x348));

	if (t73 != -9132051521638391890LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x349 = -1;
	int8_t x350 = 6;
	int8_t x351 = INT8_MIN;
	volatile int32_t t74 = 11930;

	t74 = ((x349-x350)^(x351/x352));

	if (t74 != -7) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x353 = INT32_MIN;
	uint32_t x354 = 931U;
	int16_t x355 = INT16_MIN;
	static volatile uint32_t t75 = 135272608U;

	t75 = ((x353-x354)^(x355/x356));

	if (t75 != 2147482717U) { NG(); } else { ; }
	
}

void f76(void) {
	static volatile int16_t x357 = -1100;
	uint8_t x358 = UINT8_MAX;
	int32_t x359 = INT32_MIN;
	volatile int32_t t76 = -724093;

	t76 = ((x357-x358)^(x359/x360));

	if (t76 != -1356) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x361 = 248U;
	uint64_t x364 = 49288611LLU;
	volatile uint64_t t77 = 15158949LLU;

	t77 = ((x361-x362)^(x363/x364));

	if (t77 != 374259806598LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x366 = 0;
	int16_t x367 = -650;
	uint16_t x368 = 1282U;
	volatile int32_t t78 = 0;

	t78 = ((x365-x366)^(x367/x368));

	if (t78 != -128) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x369 = -1;
	int8_t x370 = INT8_MIN;
	volatile uint8_t x371 = UINT8_MAX;
	int64_t x372 = INT64_MAX;
	volatile int64_t t79 = 3260072LL;

	t79 = ((x369-x370)^(x371/x372));

	if (t79 != 127LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x373 = -1;
	uint32_t x374 = 522434U;
	uint32_t x375 = 1887233U;
	int64_t x376 = INT64_MIN;
	volatile int64_t t80 = -9979058459LL;

	t80 = ((x373-x374)^(x375/x376));

	if (t80 != 4294444861LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x377 = -1;
	volatile int32_t x380 = INT32_MAX;
	volatile int64_t t81 = INT64_MIN;

	t81 = ((x377-x378)^(x379/x380));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x382 = 8650;
	int8_t x383 = 21;
	volatile uint32_t t82 = 13U;

	t82 = ((x381-x382)^(x383/x384));

	if (t82 != 24117U) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x386 = INT32_MAX;
	volatile int64_t x387 = INT64_MAX;
	static uint8_t x388 = 1U;
	int64_t t83 = 23090447033917718LL;

	t83 = ((x385-x386)^(x387/x388));

	if (t83 != -9223372034707292163LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x393 = 31217240U;
	int16_t x396 = 2;
	static uint64_t t84 = 14252105653253LLU;

	t84 = ((x393-x394)^(x395/x396));

	if (t84 != 30546084LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int32_t x397 = -891;
	volatile int64_t x398 = -1LL;
	int64_t x399 = INT64_MAX;
	static int16_t x400 = -6;
	volatile int64_t t85 = -66LL;

	t85 = ((x397-x398)^(x399/x400));

	if (t85 != 1537228672809129517LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x401 = INT16_MIN;
	static int64_t x403 = 2LL;
	int64_t t86 = -24321726LL;

	t86 = ((x401-x402)^(x403/x404));

	if (t86 != -32767LL) { NG(); } else { ; }
	
}

void f87(void) {
	static uint32_t x409 = 101U;
	int8_t x410 = 0;
	volatile uint64_t x412 = 236LLU;
	volatile uint64_t t87 = 14779LLU;

	t87 = ((x409-x410)^(x411/x412));

	if (t87 != 18198912LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static volatile uint64_t x417 = 26240695210903778LLU;
	int16_t x418 = -1;
	static int32_t x419 = 1684575;
	uint64_t x420 = UINT64_MAX;
	uint64_t t88 = 31229821886966LLU;

	t88 = ((x417-x418)^(x419/x420));

	if (t88 != 26240695210903779LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int64_t x425 = -539LL;
	uint16_t x427 = UINT16_MAX;
	int16_t x428 = 271;
	int64_t t89 = 6LL;

	t89 = ((x425-x426)^(x427/x428));

	if (t89 != -745LL) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x430 = INT8_MIN;
	static uint32_t x431 = 111904U;
	volatile int32_t x432 = INT32_MIN;

	t90 = ((x429-x430)^(x431/x432));

	if (t90 != 4294934656U) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x433 = INT8_MIN;
	uint32_t x434 = 1880416U;
	int64_t x435 = INT64_MIN;
	int16_t x436 = -115;
	static volatile int64_t t91 = 2756683022LL;

	t91 = ((x433-x434)^(x435/x436));

	if (t91 != 80203232077111279LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x437 = 243U;
	int8_t x438 = -1;
	int16_t x439 = INT16_MAX;
	volatile int32_t x440 = 359;
	static volatile int32_t t92 = 6387;

	t92 = ((x437-x438)^(x439/x440));

	if (t92 != 175) { NG(); } else { ; }
	
}

void f93(void) {
	static int8_t x441 = INT8_MIN;
	int16_t x443 = INT16_MIN;
	volatile uint16_t x444 = 3U;
	uint32_t t93 = 18270525U;

	t93 = ((x441-x442)^(x443/x444));

	if (t93 != 560945U) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x445 = -53;
	volatile uint64_t x446 = 907312815762LLU;
	int8_t x448 = -60;
	volatile uint64_t t94 = 14007952532187LLU;

	t94 = ((x445-x446)^(x447/x448));

	if (t94 != 907312814725LLU) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x453 = UINT64_MAX;
	volatile int32_t x454 = INT32_MIN;
	int64_t x456 = INT64_MIN;
	uint64_t t95 = 23LLU;

	t95 = ((x453-x454)^(x455/x456));

	if (t95 != 2147483647LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x457 = INT8_MAX;
	static int32_t x458 = INT32_MAX;
	uint8_t x459 = UINT8_MAX;
	int16_t x460 = INT16_MIN;
	volatile int32_t t96 = 1;

	t96 = ((x457-x458)^(x459/x460));

	if (t96 != -2147483520) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int32_t x461 = -1;
	int8_t x462 = -1;
	uint16_t x464 = UINT16_MAX;
	uint64_t t97 = 915147513LLU;

	t97 = ((x461-x462)^(x463/x464));

	if (t97 != 3LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x465 = 75U;
	int8_t x466 = INT8_MIN;
	int16_t x467 = -1;
	static int8_t x468 = INT8_MIN;
	static int32_t t98 = -16946;

	t98 = ((x465-x466)^(x467/x468));

	if (t98 != 203) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x470 = -6514;
	volatile int8_t x471 = -5;
	static int32_t x472 = INT32_MIN;
	int64_t t99 = -4455377078LL;

	t99 = ((x469-x470)^(x471/x472));

	if (t99 != -2199182327LL) { NG(); } else { ; }
	
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

