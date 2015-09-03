#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x8 = -1;
int64_t x11 = 1650453924075328LL;
int64_t x17 = INT64_MIN;
int64_t x20 = -124718583187252LL;
int64_t x30 = INT64_MAX;
int16_t x33 = 640;
static int8_t x34 = -1;
int8_t x35 = -1;
int16_t x36 = INT16_MIN;
int32_t t8 = -532975198;
int16_t x40 = INT16_MAX;
static uint16_t x46 = UINT16_MAX;
static int8_t x58 = INT8_MAX;
int16_t x60 = INT16_MIN;
static int32_t x67 = INT32_MIN;
static volatile int32_t t16 = 6;
int64_t x73 = -1LL;
static int8_t x79 = INT8_MIN;
int32_t x83 = 374;
volatile int32_t x89 = -1;
int32_t x91 = -17924609;
int32_t t22 = INT32_MIN;
int32_t x93 = INT32_MIN;
uint16_t x94 = 20U;
int16_t x97 = INT16_MAX;
uint16_t x106 = 1471U;
static volatile uint64_t x107 = 3279706215450LLU;
int16_t x108 = 19;
int8_t x109 = INT8_MIN;
int32_t x113 = INT32_MIN;
int8_t x115 = -3;
int64_t x118 = 312152902LL;
volatile uint8_t x120 = UINT8_MAX;
int32_t t29 = 0;
int64_t x121 = 124LL;
static uint16_t x125 = 875U;
int64_t x127 = 951LL;
int16_t x130 = -1;
int8_t x139 = INT8_MAX;
int64_t x149 = 1757934LL;
int64_t x151 = 18263524048LL;
int16_t x156 = -1;
int8_t x161 = -1;
volatile int64_t x165 = INT64_MIN;
static uint8_t x170 = 17U;
int16_t x171 = 16;
static int64_t t41 = -11601456096LL;
uint8_t x176 = UINT8_MAX;
static uint16_t x183 = 25U;
int32_t x184 = -12693;
static volatile int64_t t48 = INT64_MIN;
int16_t x201 = -1;
static int16_t x205 = -1;
int32_t x207 = INT32_MAX;
uint32_t x211 = UINT32_MAX;
int8_t x212 = 0;
int8_t x213 = -1;
int8_t x215 = 12;
uint64_t x216 = UINT64_MAX;
volatile int32_t t53 = -14;
volatile int32_t x223 = -1;
int64_t x229 = INT64_MIN;
volatile int16_t x236 = -1;
static volatile int32_t t57 = 618591;
int16_t x237 = INT16_MIN;
volatile uint64_t t58 = 131030623481580LLU;
static int16_t x262 = INT16_MIN;
static int32_t t66 = -25226727;
int64_t x280 = -966714386774361LL;
int16_t x286 = -1;
int16_t x288 = 9716;
volatile int64_t x289 = 59412LL;
volatile int8_t x293 = 0;
int8_t x294 = -1;
uint8_t x295 = UINT8_MAX;
int32_t x298 = -22412;
uint8_t x303 = 95U;
static int16_t x304 = INT16_MAX;
int16_t x310 = INT16_MAX;
uint64_t x311 = UINT64_MAX;
volatile uint32_t x317 = 1829524601U;
uint32_t x326 = 35813U;
uint64_t x328 = 61472LLU;
uint8_t x331 = 22U;
static int64_t x332 = INT64_MIN;
uint64_t x335 = 88784514LLU;
int8_t x337 = INT8_MIN;
volatile int16_t x339 = 8170;
int64_t x342 = INT64_MAX;
int64_t x347 = -1078408687474977LL;
volatile int32_t x349 = INT32_MIN;
static int32_t x365 = -3646650;
int32_t x369 = INT32_MIN;
static int16_t x374 = INT16_MIN;
volatile int16_t x376 = INT16_MIN;
static volatile int64_t t93 = INT64_MAX;
static int16_t x383 = INT16_MIN;
volatile int16_t x384 = -1;
static volatile int32_t x390 = INT32_MAX;
static int64_t x392 = INT64_MIN;
static int64_t x399 = -478135707966249LL;
volatile int64_t x400 = INT64_MIN;
static volatile int64_t t98 = INT64_MIN;
int32_t x401 = -1;


void f0(void) {
	uint32_t x1 = 2U;
	uint64_t x2 = UINT64_MAX;
	static int32_t x3 = -1;
	uint64_t x4 = 281LLU;
	uint64_t t0 = 9818549729344142LLU;

	t0 = ((x1<(x2^x3))+x4);

	if (t0 != 281LLU) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int32_t x5 = -1;
	uint8_t x6 = 43U;
	uint64_t x7 = 241526LLU;
	int32_t t1 = 218;

	t1 = ((x5<(x6^x7))+x8);

	if (t1 != -1) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = INT8_MAX;
	int64_t x10 = INT64_MIN;
	int16_t x12 = -741;
	int32_t t2 = -25;

	t2 = ((x9<(x10^x11))+x12);

	if (t2 != -741) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MIN;
	uint16_t x14 = 1U;
	static uint32_t x15 = 487452183U;
	static uint8_t x16 = UINT8_MAX;
	volatile int32_t t3 = -679610;

	t3 = ((x13<(x14^x15))+x16);

	if (t3 != 255) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x18 = -1LL;
	static int8_t x19 = 12;
	volatile int64_t t4 = -6708LL;

	t4 = ((x17<(x18^x19))+x20);

	if (t4 != -124718583187251LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x21 = 0;
	volatile int8_t x22 = INT8_MAX;
	int16_t x23 = 0;
	uint32_t x24 = 0U;
	volatile uint32_t t5 = 449815U;

	t5 = ((x21<(x22^x23))+x24);

	if (t5 != 1U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	int8_t x26 = 4;
	static int16_t x27 = INT16_MIN;
	int64_t x28 = INT64_MIN;
	int64_t t6 = INT64_MIN;

	t6 = ((x25<(x26^x27))+x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	static uint16_t x29 = UINT16_MAX;
	static uint8_t x31 = UINT8_MAX;
	int32_t x32 = INT32_MIN;
	int32_t t7 = -1;

	t7 = ((x29<(x30^x31))+x32);

	if (t7 != -2147483647) { NG(); } else { ; }
	
}

void f8(void) {


	t8 = ((x33<(x34^x35))+x36);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x37 = INT32_MAX;
	static volatile int64_t x38 = INT64_MAX;
	static volatile uint64_t x39 = 407704572228631073LLU;
	volatile int32_t t9 = 0;

	t9 = ((x37<(x38^x39))+x40);

	if (t9 != 32768) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = -1;
	int8_t x42 = INT8_MIN;
	int8_t x43 = INT8_MAX;
	int16_t x44 = INT16_MAX;
	int32_t t10 = -1722666;

	t10 = ((x41<(x42^x43))+x44);

	if (t10 != 32767) { NG(); } else { ; }
	
}

void f11(void) {
	static int64_t x45 = -1LL;
	int32_t x47 = INT32_MAX;
	int32_t x48 = -448920;
	volatile int32_t t11 = -2;

	t11 = ((x45<(x46^x47))+x48);

	if (t11 != -448919) { NG(); } else { ; }
	
}

void f12(void) {
	static uint8_t x49 = 40U;
	volatile int16_t x50 = -24;
	uint8_t x51 = 11U;
	static int64_t x52 = 163856839070233438LL;
	int64_t t12 = 13101902592650LL;

	t12 = ((x49<(x50^x51))+x52);

	if (t12 != 163856839070233438LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = 96335266;
	volatile uint16_t x54 = 23336U;
	uint64_t x55 = UINT64_MAX;
	int32_t x56 = -1;
	volatile int32_t t13 = -365;

	t13 = ((x53<(x54^x55))+x56);

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MAX;
	volatile int8_t x59 = INT8_MIN;
	int32_t t14 = 5615;

	t14 = ((x57<(x58^x59))+x60);

	if (t14 != -32768) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x61 = UINT16_MAX;
	uint32_t x62 = 272340U;
	static int8_t x63 = INT8_MAX;
	uint16_t x64 = 383U;
	int32_t t15 = 75;

	t15 = ((x61<(x62^x63))+x64);

	if (t15 != 384) { NG(); } else { ; }
	
}

void f16(void) {
	static int64_t x65 = -1LL;
	uint64_t x66 = 1417093487LLU;
	uint16_t x68 = 15U;

	t16 = ((x65<(x66^x67))+x68);

	if (t16 != 15) { NG(); } else { ; }
	
}

void f17(void) {
	volatile uint8_t x69 = 2U;
	static int8_t x70 = INT8_MAX;
	int16_t x71 = INT16_MIN;
	int64_t x72 = INT64_MIN;
	volatile int64_t t17 = INT64_MIN;

	t17 = ((x69<(x70^x71))+x72);

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x74 = INT8_MAX;
	volatile int8_t x75 = INT8_MIN;
	uint64_t x76 = UINT64_MAX;
	uint64_t t18 = UINT64_MAX;

	t18 = ((x73<(x74^x75))+x76);

	if (t18 != UINT64_MAX) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x77 = -1LL;
	volatile uint32_t x78 = 13880765U;
	uint32_t x80 = 2U;
	uint32_t t19 = 20903167U;

	t19 = ((x77<(x78^x79))+x80);

	if (t19 != 3U) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x81 = -1;
	int64_t x82 = INT64_MIN;
	int8_t x84 = INT8_MAX;
	int32_t t20 = 16;

	t20 = ((x81<(x82^x83))+x84);

	if (t20 != 127) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x85 = 68U;
	volatile int64_t x86 = INT64_MAX;
	uint32_t x87 = UINT32_MAX;
	int32_t x88 = INT32_MIN;
	volatile int32_t t21 = 11627415;

	t21 = ((x85<(x86^x87))+x88);

	if (t21 != -2147483647) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x90 = 2331339301LLU;
	static int32_t x92 = INT32_MIN;

	t22 = ((x89<(x90^x91))+x92);

	if (t22 != INT32_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x95 = INT64_MAX;
	int8_t x96 = 36;
	volatile int32_t t23 = -15;

	t23 = ((x93<(x94^x95))+x96);

	if (t23 != 37) { NG(); } else { ; }
	
}

void f24(void) {
	uint16_t x98 = 1212U;
	uint64_t x99 = 16786LLU;
	static uint32_t x100 = 51313026U;
	volatile uint32_t t24 = 15341U;

	t24 = ((x97<(x98^x99))+x100);

	if (t24 != 51313026U) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x101 = INT8_MIN;
	int32_t x102 = 63;
	uint16_t x103 = 20U;
	static uint64_t x104 = 596113LLU;
	volatile uint64_t t25 = 444944527437LLU;

	t25 = ((x101<(x102^x103))+x104);

	if (t25 != 596114LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int16_t x105 = INT16_MAX;
	int32_t t26 = -4849;

	t26 = ((x105<(x106^x107))+x108);

	if (t26 != 20) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x110 = UINT8_MAX;
	uint32_t x111 = UINT32_MAX;
	static int8_t x112 = INT8_MIN;
	int32_t t27 = -1345;

	t27 = ((x109<(x110^x111))+x112);

	if (t27 != -128) { NG(); } else { ; }
	
}

void f28(void) {
	static uint32_t x114 = 1102751339U;
	int8_t x116 = -1;
	int32_t t28 = 5633;

	t28 = ((x113<(x114^x115))+x116);

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	uint16_t x119 = 17717U;

	t29 = ((x117<(x118^x119))+x120);

	if (t29 != 256) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x122 = 45510LLU;
	int8_t x123 = -1;
	static int8_t x124 = -1;
	int32_t t30 = 490256;

	t30 = ((x121<(x122^x123))+x124);

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x126 = UINT16_MAX;
	int8_t x128 = -1;
	static int32_t t31 = -2595;

	t31 = ((x125<(x126^x127))+x128);

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x129 = INT64_MIN;
	int8_t x131 = INT8_MAX;
	uint64_t x132 = 933293876LLU;
	uint64_t t32 = 4256954659545186300LLU;

	t32 = ((x129<(x130^x131))+x132);

	if (t32 != 933293877LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x137 = INT8_MAX;
	int16_t x138 = -1;
	int64_t x140 = 82871570137143LL;
	static volatile int64_t t33 = 9544LL;

	t33 = ((x137<(x138^x139))+x140);

	if (t33 != 82871570137143LL) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x141 = 3;
	static uint8_t x142 = 6U;
	uint32_t x143 = 0U;
	uint16_t x144 = 27U;
	volatile int32_t t34 = 118;

	t34 = ((x141<(x142^x143))+x144);

	if (t34 != 28) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x145 = INT16_MIN;
	volatile int64_t x146 = INT64_MIN;
	static int8_t x147 = INT8_MIN;
	volatile int8_t x148 = INT8_MIN;
	volatile int32_t t35 = -1;

	t35 = ((x145<(x146^x147))+x148);

	if (t35 != -127) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x150 = INT64_MIN;
	int16_t x152 = -1002;
	volatile int32_t t36 = -5;

	t36 = ((x149<(x150^x151))+x152);

	if (t36 != -1002) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x153 = INT32_MAX;
	int32_t x154 = INT32_MAX;
	int64_t x155 = -2165314168231LL;
	volatile int32_t t37 = -1845133;

	t37 = ((x153<(x154^x155))+x156);

	if (t37 != -1) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int8_t x157 = INT8_MAX;
	static uint32_t x158 = 25U;
	static uint32_t x159 = 22876U;
	volatile int16_t x160 = INT16_MAX;
	static volatile int32_t t38 = 146025;

	t38 = ((x157<(x158^x159))+x160);

	if (t38 != 32768) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x162 = INT64_MAX;
	int64_t x163 = INT64_MIN;
	uint32_t x164 = 21881646U;
	uint32_t t39 = 3124U;

	t39 = ((x161<(x162^x163))+x164);

	if (t39 != 21881646U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x166 = -3503LL;
	volatile int16_t x167 = INT16_MAX;
	int8_t x168 = -1;
	int32_t t40 = 206989;

	t40 = ((x165<(x166^x167))+x168);

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x169 = INT64_MIN;
	int64_t x172 = -42406788121093LL;

	t41 = ((x169<(x170^x171))+x172);

	if (t41 != -42406788121092LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int16_t x173 = 530;
	int16_t x174 = 13;
	uint8_t x175 = 0U;
	int32_t t42 = 53;

	t42 = ((x173<(x174^x175))+x176);

	if (t42 != 255) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x177 = 86266U;
	static volatile int32_t x178 = -1;
	uint8_t x179 = 1U;
	volatile int64_t x180 = INT64_MIN;
	volatile int64_t t43 = 691019LL;

	t43 = ((x177<(x178^x179))+x180);

	if (t43 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x181 = 93779499U;
	static int8_t x182 = 7;
	volatile int32_t t44 = -30080;

	t44 = ((x181<(x182^x183))+x184);

	if (t44 != -12693) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x185 = 2032559LLU;
	static int64_t x186 = INT64_MIN;
	int16_t x187 = 120;
	int32_t x188 = -1013;
	static volatile int32_t t45 = -10;

	t45 = ((x185<(x186^x187))+x188);

	if (t45 != -1012) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x189 = 11;
	int8_t x190 = -20;
	int64_t x191 = INT64_MIN;
	volatile uint8_t x192 = 13U;
	int32_t t46 = -6;

	t46 = ((x189<(x190^x191))+x192);

	if (t46 != 14) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x193 = INT8_MIN;
	int16_t x194 = -1;
	volatile int32_t x195 = 1688228;
	static uint16_t x196 = 2U;
	int32_t t47 = 708281641;

	t47 = ((x193<(x194^x195))+x196);

	if (t47 != 2) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x197 = INT8_MIN;
	int32_t x198 = INT32_MIN;
	uint64_t x199 = 229812354LLU;
	static int64_t x200 = INT64_MIN;

	t48 = ((x197<(x198^x199))+x200);

	if (t48 != INT64_MIN) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x202 = INT64_MIN;
	int64_t x203 = -137560530715LL;
	int8_t x204 = INT8_MIN;
	volatile int32_t t49 = -13;

	t49 = ((x201<(x202^x203))+x204);

	if (t49 != -127) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x206 = INT8_MIN;
	int8_t x208 = INT8_MIN;
	int32_t t50 = -150014121;

	t50 = ((x205<(x206^x207))+x208);

	if (t50 != -128) { NG(); } else { ; }
	
}

void f51(void) {
	static uint64_t x209 = 7LLU;
	int64_t x210 = INT64_MAX;
	int32_t t51 = -1040271155;

	t51 = ((x209<(x210^x211))+x212);

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x214 = -1LL;
	volatile uint64_t t52 = UINT64_MAX;

	t52 = ((x213<(x214^x215))+x216);

	if (t52 != UINT64_MAX) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x217 = 28;
	int8_t x218 = 12;
	volatile uint16_t x219 = 12U;
	volatile int16_t x220 = -47;

	t53 = ((x217<(x218^x219))+x220);

	if (t53 != -47) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x221 = 21U;
	int8_t x222 = INT8_MIN;
	int16_t x224 = -1;
	volatile int32_t t54 = 1;

	t54 = ((x221<(x222^x223))+x224);

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x225 = 640;
	uint64_t x226 = 251853590LLU;
	volatile int8_t x227 = INT8_MAX;
	int8_t x228 = INT8_MAX;
	volatile int32_t t55 = 14;

	t55 = ((x225<(x226^x227))+x228);

	if (t55 != 128) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int16_t x230 = INT16_MIN;
	volatile uint32_t x231 = UINT32_MAX;
	int8_t x232 = INT8_MIN;
	volatile int32_t t56 = -1180;

	t56 = ((x229<(x230^x231))+x232);

	if (t56 != -127) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x233 = -1LL;
	int32_t x234 = INT32_MAX;
	uint16_t x235 = 3788U;

	t57 = ((x233<(x234^x235))+x236);

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x238 = 7U;
	uint8_t x239 = 16U;
	uint64_t x240 = 8672649857LLU;

	t58 = ((x237<(x238^x239))+x240);

	if (t58 != 8672649858LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x241 = INT32_MIN;
	uint32_t x242 = 18271U;
	uint16_t x243 = UINT16_MAX;
	static uint32_t x244 = 7691U;
	uint32_t t59 = 14552108U;

	t59 = ((x241<(x242^x243))+x244);

	if (t59 != 7691U) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x245 = UINT64_MAX;
	volatile int32_t x246 = INT32_MIN;
	uint16_t x247 = UINT16_MAX;
	static int32_t x248 = INT32_MAX;
	volatile int32_t t60 = INT32_MAX;

	t60 = ((x245<(x246^x247))+x248);

	if (t60 != INT32_MAX) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x249 = 1U;
	uint64_t x250 = UINT64_MAX;
	uint32_t x251 = UINT32_MAX;
	int16_t x252 = -11;
	volatile int32_t t61 = -68112;

	t61 = ((x249<(x250^x251))+x252);

	if (t61 != -10) { NG(); } else { ; }
	
}

void f62(void) {
	uint8_t x253 = UINT8_MAX;
	int64_t x254 = INT64_MIN;
	int8_t x255 = -1;
	static volatile int8_t x256 = -6;
	static volatile int32_t t62 = -3;

	t62 = ((x253<(x254^x255))+x256);

	if (t62 != -5) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int32_t x257 = -1;
	volatile int16_t x258 = INT16_MAX;
	static int32_t x259 = -1;
	uint64_t x260 = 1LLU;
	volatile uint64_t t63 = 1831483947059430LLU;

	t63 = ((x257<(x258^x259))+x260);

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x261 = 81531;
	int16_t x263 = -1;
	int16_t x264 = 7;
	volatile int32_t t64 = -245756780;

	t64 = ((x261<(x262^x263))+x264);

	if (t64 != 7) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x265 = 1992U;
	volatile int32_t x266 = INT32_MIN;
	uint64_t x267 = 1984991761092779008LLU;
	static uint32_t x268 = UINT32_MAX;
	volatile uint32_t t65 = 1U;

	t65 = ((x265<(x266^x267))+x268);

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	static uint8_t x269 = UINT8_MAX;
	int64_t x270 = -1LL;
	static uint8_t x271 = UINT8_MAX;
	int8_t x272 = INT8_MAX;

	t66 = ((x269<(x270^x271))+x272);

	if (t66 != 127) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x273 = INT8_MIN;
	static int64_t x274 = -1LL;
	static uint64_t x275 = 18254542LLU;
	int8_t x276 = INT8_MAX;
	volatile int32_t t67 = -243130;

	t67 = ((x273<(x274^x275))+x276);

	if (t67 != 127) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x277 = UINT64_MAX;
	static int64_t x278 = INT64_MIN;
	uint16_t x279 = 5U;
	static int64_t t68 = 2228855676046470740LL;

	t68 = ((x277<(x278^x279))+x280);

	if (t68 != -966714386774361LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x281 = 97U;
	int64_t x282 = -1LL;
	static volatile int8_t x283 = INT8_MAX;
	int8_t x284 = INT8_MAX;
	int32_t t69 = -382873864;

	t69 = ((x281<(x282^x283))+x284);

	if (t69 != 127) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x285 = -4LL;
	int8_t x287 = INT8_MIN;
	int32_t t70 = -1;

	t70 = ((x285<(x286^x287))+x288);

	if (t70 != 9717) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x290 = -5;
	uint64_t x291 = UINT64_MAX;
	uint32_t x292 = UINT32_MAX;
	uint32_t t71 = UINT32_MAX;

	t71 = ((x289<(x290^x291))+x292);

	if (t71 != UINT32_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x296 = -1;
	volatile int32_t t72 = -806646250;

	t72 = ((x293<(x294^x295))+x296);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x297 = INT32_MIN;
	static int64_t x299 = INT64_MIN;
	static volatile uint32_t x300 = UINT32_MAX;
	volatile uint32_t t73 = 12456U;

	t73 = ((x297<(x298^x299))+x300);

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MAX;
	int64_t x302 = INT64_MIN;
	int32_t t74 = -1;

	t74 = ((x301<(x302^x303))+x304);

	if (t74 != 32767) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x305 = INT16_MIN;
	int8_t x306 = INT8_MIN;
	uint64_t x307 = 663824LLU;
	static uint32_t x308 = 7U;
	volatile uint32_t t75 = 810885U;

	t75 = ((x305<(x306^x307))+x308);

	if (t75 != 7U) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = INT32_MIN;
	int8_t x312 = INT8_MIN;
	volatile int32_t t76 = 1161;

	t76 = ((x309<(x310^x311))+x312);

	if (t76 != -127) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x313 = UINT64_MAX;
	volatile uint64_t x314 = 1LLU;
	uint8_t x315 = 11U;
	int64_t x316 = 6984592167106LL;
	int64_t t77 = 491LL;

	t77 = ((x313<(x314^x315))+x316);

	if (t77 != 6984592167106LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint64_t x318 = 3LLU;
	int8_t x319 = INT8_MIN;
	int32_t x320 = INT32_MIN;
	int32_t t78 = 8480;

	t78 = ((x317<(x318^x319))+x320);

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x321 = UINT8_MAX;
	int16_t x322 = INT16_MIN;
	uint64_t x323 = 14LLU;
	volatile int16_t x324 = INT16_MIN;
	static int32_t t79 = -3362787;

	t79 = ((x321<(x322^x323))+x324);

	if (t79 != -32767) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x325 = 875434445U;
	int16_t x327 = INT16_MIN;
	volatile uint64_t t80 = 43498198327896LLU;

	t80 = ((x325<(x326^x327))+x328);

	if (t80 != 61473LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x329 = 7178LL;
	uint16_t x330 = 394U;
	int64_t t81 = INT64_MIN;

	t81 = ((x329<(x330^x331))+x332);

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	uint8_t x333 = 59U;
	volatile int16_t x334 = INT16_MIN;
	static uint8_t x336 = 70U;
	volatile int32_t t82 = 33263423;

	t82 = ((x333<(x334^x335))+x336);

	if (t82 != 71) { NG(); } else { ; }
	
}

void f83(void) {
	uint16_t x338 = 6599U;
	volatile int8_t x340 = INT8_MIN;
	static int32_t t83 = -30473490;

	t83 = ((x337<(x338^x339))+x340);

	if (t83 != -127) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x341 = INT32_MIN;
	uint8_t x343 = 3U;
	static int32_t x344 = -1;
	int32_t t84 = 1186355;

	t84 = ((x341<(x342^x343))+x344);

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x345 = 352509482U;
	int32_t x346 = -1097702;
	int32_t x348 = INT32_MIN;
	volatile int32_t t85 = 1;

	t85 = ((x345<(x346^x347))+x348);

	if (t85 != -2147483647) { NG(); } else { ; }
	
}

void f86(void) {
	uint32_t x350 = UINT32_MAX;
	uint32_t x351 = 168115694U;
	int8_t x352 = -3;
	volatile int32_t t86 = 38493;

	t86 = ((x349<(x350^x351))+x352);

	if (t86 != -2) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x353 = INT64_MIN;
	int16_t x354 = 1;
	volatile int8_t x355 = INT8_MAX;
	static uint32_t x356 = 179U;
	volatile uint32_t t87 = 2341U;

	t87 = ((x353<(x354^x355))+x356);

	if (t87 != 180U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x357 = -292358LL;
	int8_t x358 = 15;
	volatile int32_t x359 = INT32_MIN;
	int8_t x360 = INT8_MIN;
	volatile int32_t t88 = -1270;

	t88 = ((x357<(x358^x359))+x360);

	if (t88 != -128) { NG(); } else { ; }
	
}

void f89(void) {
	static int16_t x361 = -1;
	static uint16_t x362 = 7U;
	static volatile int8_t x363 = INT8_MIN;
	volatile uint8_t x364 = 102U;
	static volatile int32_t t89 = 360;

	t89 = ((x361<(x362^x363))+x364);

	if (t89 != 102) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x366 = 14;
	static uint64_t x367 = 56678537874328LLU;
	int16_t x368 = INT16_MIN;
	static int32_t t90 = -5;

	t90 = ((x365<(x366^x367))+x368);

	if (t90 != -32768) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x370 = 1;
	int16_t x371 = INT16_MIN;
	volatile int16_t x372 = INT16_MIN;
	volatile int32_t t91 = 93544;

	t91 = ((x369<(x370^x371))+x372);

	if (t91 != -32767) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x373 = -1;
	int16_t x375 = INT16_MIN;
	static int32_t t92 = -1062;

	t92 = ((x373<(x374^x375))+x376);

	if (t92 != -32767) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x377 = 0;
	volatile int16_t x378 = INT16_MIN;
	uint16_t x379 = 2572U;
	static int64_t x380 = INT64_MAX;

	t93 = ((x377<(x378^x379))+x380);

	if (t93 != INT64_MAX) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x381 = UINT8_MAX;
	int16_t x382 = 0;
	static int32_t t94 = 103;

	t94 = ((x381<(x382^x383))+x384);

	if (t94 != -1) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x385 = -7;
	int16_t x386 = INT16_MIN;
	uint16_t x387 = 13142U;
	volatile uint32_t x388 = UINT32_MAX;
	uint32_t t95 = UINT32_MAX;

	t95 = ((x385<(x386^x387))+x388);

	if (t95 != UINT32_MAX) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint32_t x389 = 356U;
	uint8_t x391 = UINT8_MAX;
	volatile int64_t t96 = 750519783368577LL;

	t96 = ((x389<(x390^x391))+x392);

	if (t96 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x393 = -2706;
	static int64_t x394 = INT64_MIN;
	static int16_t x395 = 465;
	int32_t x396 = 0;
	int32_t t97 = -572;

	t97 = ((x393<(x394^x395))+x396);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x397 = -1;
	static uint8_t x398 = 9U;

	t98 = ((x397<(x398^x399))+x400);

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x402 = 1U;
	uint32_t x403 = 7U;
	volatile int8_t x404 = -12;
	int32_t t99 = 31;

	t99 = ((x401<(x402^x403))+x404);

	if (t99 != -12) { NG(); } else { ; }
	
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

