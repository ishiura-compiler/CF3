#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
int16_t x7 = INT16_MIN;
int64_t t1 = -129169LL;
int64_t x13 = INT64_MIN;
int64_t t4 = 180047LL;
static uint16_t x22 = UINT16_MAX;
volatile uint64_t t5 = 426935682090317679LLU;
int16_t x37 = INT16_MAX;
uint64_t x44 = 42161LLU;
static int32_t x47 = INT32_MIN;
static int32_t x60 = -9570;
volatile int32_t x62 = 5869;
int32_t x69 = -1;
static int8_t x71 = INT8_MIN;
volatile uint64_t t18 = 7522162120LLU;
volatile int8_t x77 = -1;
int16_t x78 = INT16_MIN;
int32_t x80 = -4340172;
uint16_t x82 = 5019U;
static volatile int32_t t20 = -552586;
int64_t t23 = -20LL;
static int8_t x100 = -1;
volatile int32_t t24 = -11866;
uint64_t t25 = 0LLU;
static int16_t x105 = INT16_MIN;
int64_t x108 = INT64_MIN;
uint16_t x110 = 1459U;
uint64_t x117 = UINT64_MAX;
int32_t x122 = -1;
uint16_t x128 = 80U;
int64_t x130 = INT64_MAX;
volatile uint32_t x132 = 154912U;
int32_t x138 = INT32_MAX;
int32_t x140 = 254393468;
uint64_t x142 = 6LLU;
volatile uint64_t t35 = 639275271007842LLU;
static uint16_t x150 = UINT16_MAX;
static uint32_t x151 = 1042915561U;
int64_t x152 = 4391894925121279860LL;
int64_t x160 = -1LL;
volatile uint32_t x161 = 135U;
static int64_t x164 = INT64_MIN;
static int64_t x167 = -1LL;
uint8_t x182 = 57U;
volatile int32_t x186 = INT32_MAX;
int8_t x190 = INT8_MAX;
int64_t x194 = -1295484566805306LL;
volatile int64_t x197 = -1LL;
uint32_t x198 = UINT32_MAX;
int8_t x199 = 13;
volatile int8_t x202 = -1;
volatile int16_t x207 = INT16_MAX;
int32_t x208 = INT32_MAX;
volatile int32_t t50 = 168;
uint64_t x218 = 45637543LLU;
volatile uint16_t x220 = 3U;
volatile uint64_t t52 = 40756684542LLU;
static volatile uint32_t x223 = 6865705U;
static int32_t x225 = -1;
volatile int8_t x227 = INT8_MAX;
volatile int16_t x228 = -1;
int16_t x230 = -1;
uint16_t x231 = 1U;
int32_t x233 = -1;
volatile int32_t x236 = INT32_MAX;
static uint8_t x238 = 59U;
volatile int32_t t57 = 181;
uint32_t x249 = 1096405U;
int16_t x256 = INT16_MAX;
static int64_t x260 = INT64_MIN;
int16_t x264 = INT16_MIN;
volatile uint32_t x266 = UINT32_MAX;
int32_t x268 = 513787066;
static volatile uint32_t t64 = 3U;
uint32_t t65 = 150042U;
static uint8_t x276 = UINT8_MAX;
uint16_t x286 = UINT16_MAX;
uint16_t x294 = 6U;
int8_t x295 = -7;
uint32_t x305 = UINT32_MAX;
static volatile int8_t x313 = INT8_MAX;
int64_t t76 = -2500429524051LL;
int64_t x324 = INT64_MIN;
int16_t x328 = -14486;
volatile int64_t t78 = -1958269852LL;
int32_t x342 = 120;
uint64_t x343 = 153052655249808614LLU;
volatile uint32_t x345 = UINT32_MAX;
static int32_t x348 = INT32_MIN;
volatile int64_t t83 = -1027085841901369LL;
volatile uint32_t t86 = 1427878U;
int8_t x369 = 10;
int8_t x375 = INT8_MIN;
int8_t x381 = INT8_MIN;
volatile int32_t x384 = 1022313011;
volatile int32_t t91 = -9;
int16_t x386 = INT16_MAX;
int64_t x391 = -1LL;
volatile int64_t t93 = 1519609LL;
uint8_t x397 = 1U;
volatile int16_t x401 = -1;
int8_t x402 = -1;
int16_t x403 = -1;
uint64_t x405 = 164350LLU;
volatile int32_t t99 = -1;


void f0(void) {
	int8_t x1 = 1;
	static int16_t x2 = -1;
	int64_t x3 = INT64_MIN;
	int64_t t0 = 967983275590107LL;

	t0 = (x1%(x2|(x3/x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = INT64_MIN;
	static volatile uint32_t x6 = UINT32_MAX;
	static uint16_t x8 = UINT16_MAX;

	t1 = (x5%(x6|(x7/x8)));

	if (t1 != -2147483648LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int8_t x10 = -15;
	uint32_t x11 = 230U;
	int16_t x12 = INT16_MAX;
	static volatile uint32_t t2 = 292U;

	t2 = (x9%(x10|(x11/x12)));

	if (t2 != 4294967168U) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x14 = INT16_MIN;
	int64_t x15 = INT64_MAX;
	static int8_t x16 = INT8_MAX;
	volatile int64_t t3 = 2323661142LL;

	t3 = (x13%(x14|(x15/x16)));

	if (t3 != -4373LL) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MAX;
	int64_t x18 = INT64_MIN;
	uint32_t x19 = 2U;
	uint8_t x20 = 3U;

	t4 = (x17%(x18|(x19/x20)));

	if (t4 != 127LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	uint32_t x23 = UINT32_MAX;
	volatile uint64_t x24 = 1LLU;

	t5 = (x21%(x22|(x23/x24)));

	if (t5 != 2147483648LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint32_t x25 = UINT32_MAX;
	volatile int64_t x26 = -1LL;
	uint32_t x27 = 2974149U;
	uint8_t x28 = UINT8_MAX;
	static int64_t t6 = 11345815812LL;

	t6 = (x25%(x26|(x27/x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = 11;
	volatile int64_t x30 = INT64_MIN;
	int32_t x31 = -995107692;
	int16_t x32 = INT16_MAX;
	int64_t t7 = -1LL;

	t7 = (x29%(x30|(x31/x32)));

	if (t7 != 11LL) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = INT16_MIN;
	uint32_t x34 = UINT32_MAX;
	static int32_t x35 = INT32_MAX;
	uint64_t x36 = UINT64_MAX;
	uint64_t t8 = 146338LLU;

	t8 = (x33%(x34|(x35/x36)));

	if (t8 != 4294934528LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x38 = INT32_MAX;
	int8_t x39 = 27;
	int32_t x40 = -2;
	int32_t t9 = 4014903;

	t9 = (x37%(x38|(x39/x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int16_t x41 = INT16_MIN;
	static int32_t x42 = INT32_MAX;
	volatile int8_t x43 = 14;
	uint64_t t10 = 0LLU;

	t10 = (x41%(x42|(x43/x44)));

	if (t10 != 2147450883LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = 1665;
	volatile int32_t x46 = INT32_MAX;
	int16_t x48 = INT16_MIN;
	int32_t t11 = -3;

	t11 = (x45%(x46|(x47/x48)));

	if (t11 != 1665) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = UINT16_MAX;
	int16_t x50 = INT16_MIN;
	int32_t x51 = -18455685;
	int32_t x52 = INT32_MIN;
	int32_t t12 = 799;

	t12 = (x49%(x50|(x51/x52)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = UINT64_MAX;
	uint32_t x54 = 250758U;
	static uint32_t x55 = UINT32_MAX;
	int64_t x56 = INT64_MAX;
	static uint64_t t13 = 54684940708LLU;

	t13 = (x53%(x54|(x55/x56)));

	if (t13 != 122595LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = -48068647484207616LL;
	int64_t x58 = INT64_MIN;
	static int16_t x59 = INT16_MIN;
	int64_t t14 = 19261894139571766LL;

	t14 = (x57%(x58|(x59/x60)));

	if (t14 != -48068647484207616LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile int32_t x63 = INT32_MIN;
	uint32_t x64 = 252392U;
	volatile uint32_t t15 = 321U;

	t15 = (x61%(x62|(x63/x64)));

	if (t15 != 8079U) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = -1;
	volatile uint16_t x66 = UINT16_MAX;
	int16_t x67 = 2587;
	int16_t x68 = INT16_MIN;
	volatile int32_t t16 = -200;

	t16 = (x65%(x66|(x67/x68)));

	if (t16 != -1) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x70 = UINT16_MAX;
	int16_t x72 = INT16_MIN;
	static volatile int32_t t17 = -4;

	t17 = (x69%(x70|(x71/x72)));

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	static int8_t x74 = INT8_MIN;
	uint64_t x75 = 6289641312137412603LLU;
	int8_t x76 = INT8_MAX;

	t18 = (x73%(x74|(x75/x76)));

	if (t18 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x79 = -52;
	int32_t t19 = -117818229;

	t19 = (x77%(x78|(x79/x80)));

	if (t19 != -1) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x81 = 0;
	int32_t x83 = INT32_MAX;
	int16_t x84 = 1;

	t20 = (x81%(x82|(x83/x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	uint32_t x86 = 119321557U;
	static int32_t x87 = -1;
	uint64_t x88 = 2132908468298100920LLU;
	static uint64_t t21 = 65029988196187LLU;

	t21 = (x85%(x86|(x87/x88)));

	if (t21 != 83169915LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 5U;
	uint64_t x90 = 10650022804315385LLU;
	static volatile int64_t x91 = 374LL;
	int32_t x92 = -1;
	uint64_t t22 = 16592LLU;

	t22 = (x89%(x90|(x91/x92)));

	if (t22 != 5LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = INT64_MIN;
	static int64_t x94 = -3LL;
	uint8_t x95 = 100U;
	int8_t x96 = INT8_MIN;

	t23 = (x93%(x94|(x95/x96)));

	if (t23 != -2LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x97 = 165U;
	int16_t x98 = INT16_MIN;
	static int16_t x99 = 1;

	t24 = (x97%(x98|(x99/x100)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = -1;
	volatile int16_t x102 = INT16_MIN;
	static uint64_t x103 = 7864972470251334401LLU;
	uint64_t x104 = 7675632LLU;

	t25 = (x101%(x102|(x103/x104)));

	if (t25 != 9464LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x106 = 4U;
	uint32_t x107 = 106348726U;
	int64_t t26 = -8382775LL;

	t26 = (x105%(x106|(x107/x108)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x109 = 271165894U;
	static volatile int16_t x111 = INT16_MIN;
	int16_t x112 = INT16_MAX;
	uint32_t t27 = 401441U;

	t27 = (x109%(x110|(x111/x112)));

	if (t27 != 271165894U) { NG(); } else { ; }
	
}

void f28(void) {
	volatile uint64_t x113 = 14LLU;
	uint16_t x114 = UINT16_MAX;
	int8_t x115 = INT8_MIN;
	uint32_t x116 = 10466U;
	uint64_t t28 = 288386LLU;

	t28 = (x113%(x114|(x115/x116)));

	if (t28 != 14LLU) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x118 = 8268599746405051835LLU;
	int32_t x119 = 821071;
	int64_t x120 = -1LL;
	uint64_t t29 = 18154166491948LLU;

	t29 = (x117%(x118|(x119/x120)));

	if (t29 != 262724LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int8_t x121 = INT8_MAX;
	int8_t x123 = 2;
	static int8_t x124 = 2;
	int32_t t30 = -1251;

	t30 = (x121%(x122|(x123/x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = INT8_MAX;
	static int8_t x126 = INT8_MAX;
	int8_t x127 = INT8_MIN;
	static volatile int32_t t31 = 129;

	t31 = (x125%(x126|(x127/x128)));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MIN;
	static uint8_t x131 = 0U;
	volatile int64_t t32 = 0LL;

	t32 = (x129%(x130|(x131/x132)));

	if (t32 != -32768LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint32_t x133 = 2U;
	static uint32_t x134 = UINT32_MAX;
	volatile int8_t x135 = INT8_MAX;
	int16_t x136 = 66;
	uint32_t t33 = 44U;

	t33 = (x133%(x134|(x135/x136)));

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x137 = UINT8_MAX;
	volatile uint16_t x139 = 26U;
	int32_t t34 = -4847669;

	t34 = (x137%(x138|(x139/x140)));

	if (t34 != 255) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = INT64_MIN;
	volatile int32_t x143 = INT32_MIN;
	volatile int64_t x144 = INT64_MIN;

	t35 = (x141%(x142|(x143/x144)));

	if (t35 != 2LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -456;
	static int16_t x146 = INT16_MIN;
	int16_t x147 = -1;
	static uint32_t x148 = UINT32_MAX;
	static volatile uint32_t t36 = 7471318U;

	t36 = (x145%(x146|(x147/x148)));

	if (t36 != 32311U) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x149 = 0U;
	volatile int64_t t37 = -196LL;

	t37 = (x149%(x150|(x151/x152)));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = -12183;
	int32_t x154 = -895065055;
	int8_t x155 = INT8_MAX;
	uint64_t x156 = UINT64_MAX;
	uint64_t t38 = 16389595614LLU;

	t38 = (x153%(x154|(x155/x156)));

	if (t38 != 895052872LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MAX;
	int8_t x158 = INT8_MIN;
	volatile uint16_t x159 = 3866U;
	int64_t t39 = -910788692069LL;

	t39 = (x157%(x158|(x159/x160)));

	if (t39 != 23LL) { NG(); } else { ; }
	
}

void f40(void) {
	int8_t x162 = INT8_MIN;
	static volatile int16_t x163 = INT16_MAX;
	int64_t t40 = -1LL;

	t40 = (x161%(x162|(x163/x164)));

	if (t40 != 7LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	uint32_t x166 = UINT32_MAX;
	uint32_t x168 = UINT32_MAX;
	uint64_t t41 = 35786779LLU;

	t41 = (x165%(x166|(x167/x168)));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = 8U;
	static uint16_t x178 = UINT16_MAX;
	uint8_t x179 = UINT8_MAX;
	int8_t x180 = INT8_MIN;
	static int32_t t42 = 61796;

	t42 = (x177%(x178|(x179/x180)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x181 = 983520;
	int16_t x183 = INT16_MAX;
	int32_t x184 = INT32_MAX;
	volatile int32_t t43 = 2297677;

	t43 = (x181%(x182|(x183/x184)));

	if (t43 != 42) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x185 = UINT32_MAX;
	static uint8_t x187 = 13U;
	static int32_t x188 = -1;
	volatile uint32_t t44 = 2429U;

	t44 = (x185%(x186|(x187/x188)));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x189 = INT64_MAX;
	static uint16_t x191 = UINT16_MAX;
	static volatile uint32_t x192 = UINT32_MAX;
	int64_t t45 = 7LL;

	t45 = (x189%(x190|(x191/x192)));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x193 = 22U;
	uint8_t x195 = 1U;
	volatile int8_t x196 = INT8_MAX;
	volatile int64_t t46 = 220LL;

	t46 = (x193%(x194|(x195/x196)));

	if (t46 != 22LL) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x200 = INT16_MIN;
	int64_t t47 = 8425141310LL;

	t47 = (x197%(x198|(x199/x200)));

	if (t47 != -1LL) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int32_t x201 = 71115647;
	static int32_t x203 = 547703;
	uint32_t x204 = 3U;
	uint32_t t48 = 87929044U;

	t48 = (x201%(x202|(x203/x204)));

	if (t48 != 71115647U) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x205 = -1;
	int8_t x206 = INT8_MIN;
	volatile int32_t t49 = -407;

	t49 = (x205%(x206|(x207/x208)));

	if (t49 != -1) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x209 = 4381;
	volatile uint8_t x210 = 9U;
	int32_t x211 = -1;
	int8_t x212 = -1;

	t50 = (x209%(x210|(x211/x212)));

	if (t50 != 7) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint64_t x213 = 3LLU;
	static uint64_t x214 = UINT64_MAX;
	uint8_t x215 = UINT8_MAX;
	int64_t x216 = INT64_MIN;
	static uint64_t t51 = 6456LLU;

	t51 = (x213%(x214|(x215/x216)));

	if (t51 != 3LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint64_t x217 = 6578LLU;
	volatile int8_t x219 = -1;

	t52 = (x217%(x218|(x219/x220)));

	if (t52 != 6578LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x221 = 1;
	int8_t x222 = 3;
	static int64_t x224 = INT64_MIN;
	volatile int64_t t53 = 498730488777693433LL;

	t53 = (x221%(x222|(x223/x224)));

	if (t53 != 1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x226 = 11;
	volatile int32_t t54 = 8;

	t54 = (x225%(x226|(x227/x228)));

	if (t54 != -1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x229 = -5;
	int64_t x232 = 675201049094860LL;
	int64_t t55 = -669188088LL;

	t55 = (x229%(x230|(x231/x232)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x234 = 165364459U;
	static int8_t x235 = INT8_MAX;
	volatile uint32_t t56 = 20U;

	t56 = (x233%(x234|(x235/x236)));

	if (t56 != 160855820U) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x237 = -1;
	int32_t x239 = -1;
	uint8_t x240 = 124U;

	t57 = (x237%(x238|(x239/x240)));

	if (t57 != -1) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x241 = -1;
	int64_t x242 = INT64_MAX;
	uint16_t x243 = 53U;
	volatile int16_t x244 = INT16_MIN;
	int64_t t58 = -6733LL;

	t58 = (x241%(x242|(x243/x244)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x245 = UINT64_MAX;
	volatile int8_t x246 = 0;
	static uint16_t x247 = UINT16_MAX;
	int8_t x248 = INT8_MIN;
	uint64_t t59 = 486516448209LLU;

	t59 = (x245%(x246|(x247/x248)));

	if (t59 != 510LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x250 = INT16_MIN;
	uint64_t x251 = 2952474554931LLU;
	int64_t x252 = INT64_MIN;
	static uint64_t t60 = 13109818450LLU;

	t60 = (x249%(x250|(x251/x252)));

	if (t60 != 1096405LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x253 = INT32_MIN;
	int8_t x254 = 8;
	volatile uint16_t x255 = UINT16_MAX;
	volatile int32_t t61 = 6257685;

	t61 = (x253%(x254|(x255/x256)));

	if (t61 != -8) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x257 = -1LL;
	static int8_t x258 = -1;
	int64_t x259 = INT64_MAX;
	static int64_t t62 = -14LL;

	t62 = (x257%(x258|(x259/x260)));

	if (t62 != 0LL) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x261 = -1;
	int8_t x262 = 10;
	uint8_t x263 = 75U;
	volatile int32_t t63 = -13130;

	t63 = (x261%(x262|(x263/x264)));

	if (t63 != -1) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int16_t x265 = INT16_MIN;
	volatile int16_t x267 = INT16_MIN;

	t64 = (x265%(x266|(x267/x268)));

	if (t64 != 4294934528U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x269 = UINT32_MAX;
	uint16_t x270 = UINT16_MAX;
	int16_t x271 = 84;
	uint32_t x272 = 824U;

	t65 = (x269%(x270|(x271/x272)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x273 = -1;
	int8_t x274 = -59;
	uint16_t x275 = 78U;
	static volatile int32_t t66 = -76921329;

	t66 = (x273%(x274|(x275/x276)));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint16_t x277 = 16500U;
	int8_t x278 = 10;
	int16_t x279 = -7174;
	static uint64_t x280 = UINT64_MAX;
	uint64_t t67 = 744075769740LLU;

	t67 = (x277%(x278|(x279/x280)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x281 = 25;
	int8_t x282 = INT8_MAX;
	uint32_t x283 = UINT32_MAX;
	int32_t x284 = INT32_MAX;
	volatile uint32_t t68 = 1U;

	t68 = (x281%(x282|(x283/x284)));

	if (t68 != 25U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x285 = INT8_MAX;
	uint8_t x287 = UINT8_MAX;
	int32_t x288 = INT32_MIN;
	int32_t t69 = -6331;

	t69 = (x285%(x286|(x287/x288)));

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x289 = 1;
	static int32_t x290 = INT32_MIN;
	int16_t x291 = INT16_MAX;
	int16_t x292 = -1;
	static int32_t t70 = -1511079;

	t70 = (x289%(x290|(x291/x292)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	static int8_t x293 = 0;
	int32_t x296 = -42943;
	volatile int32_t t71 = -737;

	t71 = (x293%(x294|(x295/x296)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x297 = -17;
	int8_t x298 = -1;
	int32_t x299 = 0;
	uint32_t x300 = UINT32_MAX;
	volatile uint32_t t72 = 259249U;

	t72 = (x297%(x298|(x299/x300)));

	if (t72 != 4294967279U) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x306 = 1757795334472LLU;
	volatile int8_t x307 = INT8_MIN;
	int32_t x308 = -1;
	volatile uint64_t t73 = 4366LLU;

	t73 = (x305%(x306|(x307/x308)));

	if (t73 != 4294967295LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x309 = INT8_MIN;
	int64_t x310 = -1LL;
	int32_t x311 = INT32_MAX;
	int8_t x312 = -1;
	int64_t t74 = -239920LL;

	t74 = (x309%(x310|(x311/x312)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int64_t x314 = -78LL;
	volatile int32_t x315 = INT32_MAX;
	int16_t x316 = INT16_MIN;
	volatile int64_t t75 = -1420LL;

	t75 = (x313%(x314|(x315/x316)));

	if (t75 != 50LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = -1;
	static int32_t x318 = 1;
	volatile int32_t x319 = -1;
	static int64_t x320 = 1030349904432LL;

	t76 = (x317%(x318|(x319/x320)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x321 = 1;
	int16_t x322 = -1;
	int8_t x323 = INT8_MIN;
	volatile int64_t t77 = -262182099635889LL;

	t77 = (x321%(x322|(x323/x324)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = -1618157;
	volatile int64_t x326 = INT64_MAX;
	int16_t x327 = INT16_MIN;

	t78 = (x325%(x326|(x327/x328)));

	if (t78 != -1618157LL) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x329 = INT16_MIN;
	int8_t x330 = 23;
	int32_t x331 = INT32_MIN;
	uint64_t x332 = 17214473771LLU;
	static uint64_t t79 = 4724304902LLU;

	t79 = (x329%(x330|(x331/x332)));

	if (t79 != 915953705LLU) { NG(); } else { ; }
	
}

void f80(void) {
	static uint64_t x333 = UINT64_MAX;
	int32_t x334 = -1;
	int8_t x335 = INT8_MAX;
	static uint32_t x336 = 1631U;
	volatile uint64_t t80 = 3529288409103673LLU;

	t80 = (x333%(x334|(x335/x336)));

	if (t80 != 0LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x341 = 0;
	int64_t x344 = INT64_MIN;
	uint64_t t81 = 112583LLU;

	t81 = (x341%(x342|(x343/x344)));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x346 = 134663384848LL;
	int8_t x347 = -3;
	volatile int64_t t82 = -2754051284LL;

	t82 = (x345%(x346|(x347/x348)));

	if (t82 != 4294967295LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x349 = 46U;
	volatile uint8_t x350 = 6U;
	int64_t x351 = -1LL;
	volatile uint16_t x352 = UINT16_MAX;

	t83 = (x349%(x350|(x351/x352)));

	if (t83 != 4LL) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint8_t x353 = 126U;
	uint32_t x354 = 923028311U;
	int64_t x355 = INT64_MIN;
	volatile int16_t x356 = -3741;
	int64_t t84 = -6949450LL;

	t84 = (x353%(x354|(x355/x356)));

	if (t84 != 126LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint8_t x357 = 28U;
	volatile uint64_t x358 = UINT64_MAX;
	volatile uint32_t x359 = 1460864U;
	int8_t x360 = INT8_MIN;
	static uint64_t t85 = 5LLU;

	t85 = (x357%(x358|(x359/x360)));

	if (t85 != 28LLU) { NG(); } else { ; }
	
}

void f86(void) {
	static volatile uint8_t x361 = 96U;
	volatile uint32_t x362 = 0U;
	uint16_t x363 = 11012U;
	uint32_t x364 = 200U;

	t86 = (x361%(x362|(x363/x364)));

	if (t86 != 41U) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x365 = INT64_MAX;
	static int32_t x366 = -1;
	static volatile uint32_t x367 = UINT32_MAX;
	volatile int64_t x368 = -62785550689LL;
	volatile int64_t t87 = 1451LL;

	t87 = (x365%(x366|(x367/x368)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x370 = INT64_MIN;
	int64_t x371 = -1LL;
	int32_t x372 = -922890;
	volatile int64_t t88 = 21669654362LL;

	t88 = (x369%(x370|(x371/x372)));

	if (t88 != 10LL) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x373 = INT32_MIN;
	uint64_t x374 = 1199LLU;
	int32_t x376 = INT32_MIN;
	uint64_t t89 = 1LLU;

	t89 = (x373%(x374|(x375/x376)));

	if (t89 != 410LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x377 = -15;
	volatile int16_t x378 = INT16_MIN;
	int8_t x379 = INT8_MAX;
	uint64_t x380 = UINT64_MAX;
	uint64_t t90 = 20949362040980171LLU;

	t90 = (x377%(x378|(x379/x380)));

	if (t90 != 32753LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x382 = INT8_MIN;
	volatile uint8_t x383 = 74U;

	t91 = (x381%(x382|(x383/x384)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int16_t x385 = INT16_MIN;
	int16_t x387 = -1;
	uint32_t x388 = 1679788729U;
	volatile uint32_t t92 = 61039658U;

	t92 = (x385%(x386|(x387/x388)));

	if (t92 != 3U) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x389 = 95U;
	uint16_t x390 = 18U;
	int8_t x392 = -2;

	t93 = (x389%(x390|(x391/x392)));

	if (t93 != 5LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int16_t x393 = INT16_MIN;
	uint32_t x394 = 15052U;
	uint16_t x395 = 32U;
	uint8_t x396 = UINT8_MAX;
	uint32_t t94 = 2065132U;

	t94 = (x393%(x394|(x395/x396)));

	if (t94 != 11900U) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x398 = UINT16_MAX;
	uint32_t x399 = 1398700803U;
	static uint16_t x400 = 595U;
	volatile uint32_t t95 = 13089397U;

	t95 = (x397%(x398|(x399/x400)));

	if (t95 != 1U) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x404 = -1;
	volatile int32_t t96 = 2583;

	t96 = (x401%(x402|(x403/x404)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x406 = 978077U;
	volatile uint16_t x407 = 1523U;
	uint64_t x408 = UINT64_MAX;
	static uint64_t t97 = 995LLU;

	t97 = (x405%(x406|(x407/x408)));

	if (t97 != 164350LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x409 = 47U;
	uint32_t x410 = 104693835U;
	uint32_t x411 = UINT32_MAX;
	int16_t x412 = INT16_MAX;
	static volatile uint32_t t98 = 141258U;

	t98 = (x409%(x410|(x411/x412)));

	if (t98 != 47U) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x413 = 623;
	int16_t x414 = INT16_MIN;
	static int8_t x415 = INT8_MIN;
	int32_t x416 = 23006;

	t99 = (x413%(x414|(x415/x416)));

	if (t99 != 623) { NG(); } else { ; }
	
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

