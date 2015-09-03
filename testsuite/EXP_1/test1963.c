#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = -1;
static int16_t x8 = INT16_MIN;
static volatile uint8_t x16 = 99U;
int64_t x19 = INT64_MAX;
static uint16_t x26 = UINT16_MAX;
int16_t x43 = -1;
volatile uint64_t x44 = UINT64_MAX;
uint16_t x47 = 30562U;
int32_t x49 = 1601575;
int32_t x57 = 12;
int64_t x61 = INT64_MAX;
uint32_t x69 = 6U;
int64_t x70 = INT64_MIN;
static volatile int32_t x71 = 9;
static uint32_t x77 = UINT32_MAX;
volatile int32_t t19 = INT32_MAX;
uint32_t x81 = 11213U;
static int64_t x82 = INT64_MIN;
volatile int16_t x87 = INT16_MIN;
int32_t t21 = -59;
int8_t x97 = INT8_MIN;
int16_t x102 = -1;
int64_t x111 = 19574LL;
volatile uint16_t x112 = 1393U;
int32_t x114 = INT32_MIN;
int16_t x121 = -6165;
static int64_t x122 = INT64_MIN;
uint16_t x123 = UINT16_MAX;
int64_t x126 = -1LL;
int8_t x127 = 2;
int32_t t32 = 69909;
static int64_t x136 = INT64_MIN;
int8_t x137 = -1;
uint16_t x140 = UINT16_MAX;
int32_t t34 = -17565;
int64_t x145 = -1LL;
volatile uint64_t x146 = 1493LLU;
static int32_t x154 = INT32_MIN;
static int16_t x157 = INT16_MAX;
int64_t x159 = INT64_MAX;
static int32_t t40 = -5;
static int32_t x168 = -1;
uint64_t x170 = 84337LLU;
int32_t x171 = INT32_MIN;
volatile uint32_t t43 = 186933148U;
volatile int64_t t44 = INT64_MIN;
volatile uint16_t x181 = UINT16_MAX;
int8_t x184 = INT8_MIN;
volatile int32_t t47 = INT32_MIN;
int32_t x193 = 209;
int16_t x207 = 541;
static int32_t x215 = INT32_MIN;
uint32_t x221 = 383104U;
int32_t x226 = INT32_MAX;
uint64_t x232 = UINT64_MAX;
int64_t x233 = INT64_MIN;
static int16_t x238 = -137;
static uint8_t x240 = UINT8_MAX;
int64_t x243 = -227135682179LL;
static int8_t x244 = -6;
int32_t x251 = -30497;
int32_t t62 = 1802;
uint64_t x254 = 415LLU;
uint16_t x256 = 57U;
static int32_t t65 = -37383;
static int32_t t66 = 122239823;
int16_t x270 = 5817;
volatile int8_t x274 = INT8_MIN;
volatile int8_t x282 = -1;
int16_t x283 = 10187;
static int32_t x284 = INT32_MIN;
uint32_t x286 = 31959622U;
volatile int16_t x291 = INT16_MIN;
int32_t x292 = -1;
int64_t x296 = INT64_MIN;
int32_t x301 = INT32_MAX;
int32_t x303 = 181816988;
int16_t x308 = INT16_MIN;
uint64_t x311 = 583LLU;
int8_t x318 = -1;
volatile int64_t t79 = 316825548060236892LL;
volatile uint32_t x321 = 25U;
uint64_t x334 = UINT64_MAX;
int8_t x336 = 7;
int64_t x339 = -1LL;
int32_t t84 = -15853444;
volatile int64_t x344 = 5274925LL;
int64_t t85 = 2119734323LL;
int64_t x358 = INT64_MAX;
volatile int32_t t89 = -5531;
static uint32_t x362 = UINT32_MAX;
volatile int16_t x363 = INT16_MIN;
uint8_t x368 = 21U;
volatile int32_t t91 = 268;
uint32_t x377 = 1415U;
uint64_t x379 = 181606477636457LLU;
int32_t x387 = -868010;
uint8_t x391 = UINT8_MAX;
volatile int16_t x392 = 0;
uint16_t x399 = 53U;


void f0(void) {
	int16_t x1 = INT16_MIN;
	int64_t x2 = 728924389000LL;
	static int32_t x3 = INT32_MAX;
	int32_t x4 = 212613;

	t0 = (((x1|x2)==x3)^x4);

	if (t0 != 212613) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = 2U;
	uint16_t x6 = UINT16_MAX;
	static int64_t x7 = -1LL;
	volatile int32_t t1 = 38460;

	t1 = (((x5|x6)==x7)^x8);

	if (t1 != -32768) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = 10678U;
	volatile int32_t x10 = -151382;
	int8_t x11 = INT8_MAX;
	uint16_t x12 = 1041U;
	volatile int32_t t2 = 0;

	t2 = (((x9|x10)==x11)^x12);

	if (t2 != 1041) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = UINT8_MAX;
	int8_t x14 = INT8_MIN;
	static int64_t x15 = 159013036929LL;
	volatile int32_t t3 = 333876;

	t3 = (((x13|x14)==x15)^x16);

	if (t3 != 99) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint16_t x17 = 469U;
	uint8_t x18 = 0U;
	volatile uint64_t x20 = UINT64_MAX;
	static uint64_t t4 = UINT64_MAX;

	t4 = (((x17|x18)==x19)^x20);

	if (t4 != UINT64_MAX) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = INT16_MIN;
	volatile uint16_t x22 = UINT16_MAX;
	int32_t x23 = INT32_MIN;
	static uint64_t x24 = 51813540LLU;
	volatile uint64_t t5 = 626313207868787454LLU;

	t5 = (((x21|x22)==x23)^x24);

	if (t5 != 51813540LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 1531624377562151LL;
	static int64_t x27 = INT64_MIN;
	int64_t x28 = INT64_MIN;
	static volatile int64_t t6 = INT64_MIN;

	t6 = (((x25|x26)==x27)^x28);

	if (t6 != INT64_MIN) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -85062;
	static int16_t x30 = -1;
	volatile int16_t x31 = INT16_MAX;
	uint64_t x32 = 440158887570764601LLU;
	volatile uint64_t t7 = 2548645412652416LLU;

	t7 = (((x29|x30)==x31)^x32);

	if (t7 != 440158887570764601LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = INT16_MIN;
	volatile uint16_t x34 = UINT16_MAX;
	int16_t x35 = -1;
	uint8_t x36 = 6U;
	volatile int32_t t8 = 463;

	t8 = (((x33|x34)==x35)^x36);

	if (t8 != 7) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x37 = -1LL;
	static uint8_t x38 = UINT8_MAX;
	volatile int16_t x39 = -12643;
	int64_t x40 = INT64_MIN;
	int64_t t9 = INT64_MIN;

	t9 = (((x37|x38)==x39)^x40);

	if (t9 != INT64_MIN) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = 1590;
	int64_t x42 = -1LL;
	static uint64_t t10 = 64106585LLU;

	t10 = (((x41|x42)==x43)^x44);

	if (t10 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x45 = INT64_MIN;
	int32_t x46 = -1;
	uint64_t x48 = 2858LLU;
	uint64_t t11 = 467703LLU;

	t11 = (((x45|x46)==x47)^x48);

	if (t11 != 2858LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x50 = -1;
	volatile int32_t x51 = -1;
	uint64_t x52 = UINT64_MAX;
	uint64_t t12 = 471604LLU;

	t12 = (((x49|x50)==x51)^x52);

	if (t12 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x53 = -4251374342LL;
	static uint16_t x54 = 6711U;
	static uint32_t x55 = UINT32_MAX;
	static uint8_t x56 = 1U;
	volatile int32_t t13 = -82030893;

	t13 = (((x53|x54)==x55)^x56);

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x58 = -2;
	volatile int32_t x59 = INT32_MIN;
	static int16_t x60 = -1;
	static volatile int32_t t14 = 73;

	t14 = (((x57|x58)==x59)^x60);

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x62 = INT32_MAX;
	int16_t x63 = INT16_MIN;
	int32_t x64 = -1;
	volatile int32_t t15 = 70455144;

	t15 = (((x61|x62)==x63)^x64);

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	static int16_t x65 = -1;
	uint8_t x66 = UINT8_MAX;
	static int8_t x67 = INT8_MIN;
	volatile int8_t x68 = 28;
	int32_t t16 = 23;

	t16 = (((x65|x66)==x67)^x68);

	if (t16 != 28) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x72 = -1;
	static volatile int32_t t17 = 39;

	t17 = (((x69|x70)==x71)^x72);

	if (t17 != -1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile uint32_t x73 = UINT32_MAX;
	int8_t x74 = INT8_MIN;
	int64_t x75 = INT64_MIN;
	volatile int8_t x76 = -1;
	volatile int32_t t18 = -101087427;

	t18 = (((x73|x74)==x75)^x76);

	if (t18 != -1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x78 = 2U;
	static volatile int8_t x79 = INT8_MIN;
	static int32_t x80 = INT32_MAX;

	t19 = (((x77|x78)==x79)^x80);

	if (t19 != INT32_MAX) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x83 = 72822;
	int8_t x84 = -1;
	static int32_t t20 = -325;

	t20 = (((x81|x82)==x83)^x84);

	if (t20 != -1) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MIN;
	uint32_t x86 = 13U;
	volatile int8_t x88 = 0;

	t21 = (((x85|x86)==x87)^x88);

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	int32_t x90 = INT32_MIN;
	static int16_t x91 = -1;
	int16_t x92 = 946;
	static int32_t t22 = -15420977;

	t22 = (((x89|x90)==x91)^x92);

	if (t22 != 946) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = 0;
	uint32_t x94 = UINT32_MAX;
	int32_t x95 = -1;
	int16_t x96 = -5;
	volatile int32_t t23 = 14808648;

	t23 = (((x93|x94)==x95)^x96);

	if (t23 != -6) { NG(); } else { ; }
	
}

void f24(void) {
	static uint16_t x98 = 22849U;
	uint16_t x99 = UINT16_MAX;
	static uint64_t x100 = 1LLU;
	volatile uint64_t t24 = 0LLU;

	t24 = (((x97|x98)==x99)^x100);

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint32_t x101 = 81U;
	int8_t x103 = 1;
	volatile uint64_t x104 = 233097071610LLU;
	volatile uint64_t t25 = 2234139194LLU;

	t25 = (((x101|x102)==x103)^x104);

	if (t25 != 233097071610LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int32_t x105 = -25;
	volatile uint16_t x106 = UINT16_MAX;
	uint32_t x107 = UINT32_MAX;
	int16_t x108 = INT16_MIN;
	int32_t t26 = 8;

	t26 = (((x105|x106)==x107)^x108);

	if (t26 != -32767) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = INT16_MAX;
	int16_t x110 = -5417;
	volatile int32_t t27 = -16;

	t27 = (((x109|x110)==x111)^x112);

	if (t27 != 1393) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x113 = UINT8_MAX;
	static volatile uint16_t x115 = 16184U;
	static int8_t x116 = INT8_MIN;
	volatile int32_t t28 = 30968;

	t28 = (((x113|x114)==x115)^x116);

	if (t28 != -128) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x117 = -1;
	int32_t x118 = INT32_MIN;
	uint16_t x119 = 0U;
	uint64_t x120 = 105LLU;
	uint64_t t29 = 468485LLU;

	t29 = (((x117|x118)==x119)^x120);

	if (t29 != 105LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static int64_t x124 = -1LL;
	volatile int64_t t30 = 3383939128782839583LL;

	t30 = (((x121|x122)==x123)^x124);

	if (t30 != -1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = UINT64_MAX;
	static int64_t x128 = -3089611036654507LL;
	static volatile int64_t t31 = -323623508LL;

	t31 = (((x125|x126)==x127)^x128);

	if (t31 != -3089611036654507LL) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x129 = INT16_MAX;
	int64_t x130 = INT64_MAX;
	volatile int16_t x131 = INT16_MIN;
	volatile uint8_t x132 = UINT8_MAX;

	t32 = (((x129|x130)==x131)^x132);

	if (t32 != 255) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x133 = 300083625LL;
	int8_t x134 = -1;
	int8_t x135 = INT8_MAX;
	volatile int64_t t33 = INT64_MIN;

	t33 = (((x133|x134)==x135)^x136);

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int64_t x138 = -1LL;
	int32_t x139 = -1707760;

	t34 = (((x137|x138)==x139)^x140);

	if (t34 != 65535) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x141 = INT8_MIN;
	uint32_t x142 = 499207U;
	int8_t x143 = -8;
	int16_t x144 = INT16_MIN;
	volatile int32_t t35 = -260733739;

	t35 = (((x141|x142)==x143)^x144);

	if (t35 != -32768) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x147 = 990122;
	int8_t x148 = -51;
	volatile int32_t t36 = 8225942;

	t36 = (((x145|x146)==x147)^x148);

	if (t36 != -51) { NG(); } else { ; }
	
}

void f37(void) {
	int8_t x149 = -1;
	static volatile int32_t x150 = INT32_MIN;
	int64_t x151 = INT64_MAX;
	uint32_t x152 = 22330664U;
	volatile uint32_t t37 = 12U;

	t37 = (((x149|x150)==x151)^x152);

	if (t37 != 22330664U) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x153 = 0U;
	static int16_t x155 = -41;
	volatile uint64_t x156 = 6598LLU;
	volatile uint64_t t38 = 14327304651169LLU;

	t38 = (((x153|x154)==x155)^x156);

	if (t38 != 6598LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x158 = UINT32_MAX;
	volatile uint32_t x160 = 2100U;
	uint32_t t39 = 29245078U;

	t39 = (((x157|x158)==x159)^x160);

	if (t39 != 2100U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x161 = 49U;
	volatile uint64_t x162 = UINT64_MAX;
	int64_t x163 = -1LL;
	static int32_t x164 = -1;

	t40 = (((x161|x162)==x163)^x164);

	if (t40 != -2) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x165 = 1;
	volatile int16_t x166 = INT16_MAX;
	int16_t x167 = -1;
	int32_t t41 = -1025174;

	t41 = (((x165|x166)==x167)^x168);

	if (t41 != -1) { NG(); } else { ; }
	
}

void f42(void) {
	static volatile int64_t x169 = INT64_MIN;
	int64_t x172 = INT64_MIN;
	int64_t t42 = INT64_MIN;

	t42 = (((x169|x170)==x171)^x172);

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = 0U;
	int8_t x174 = INT8_MIN;
	uint64_t x175 = UINT64_MAX;
	uint32_t x176 = 1015568U;

	t43 = (((x173|x174)==x175)^x176);

	if (t43 != 1015568U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile uint16_t x177 = 12U;
	int32_t x178 = INT32_MAX;
	uint8_t x179 = UINT8_MAX;
	volatile int64_t x180 = INT64_MIN;

	t44 = (((x177|x178)==x179)^x180);

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	static uint32_t x182 = 247054U;
	int32_t x183 = INT32_MIN;
	volatile int32_t t45 = -955095703;

	t45 = (((x181|x182)==x183)^x184);

	if (t45 != -128) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = -1938;
	int8_t x186 = -6;
	int64_t x187 = INT64_MAX;
	volatile int64_t x188 = INT64_MIN;
	volatile int64_t t46 = INT64_MIN;

	t46 = (((x185|x186)==x187)^x188);

	if (t46 != INT64_MIN) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x189 = INT64_MAX;
	uint64_t x190 = UINT64_MAX;
	static volatile int8_t x191 = INT8_MIN;
	static int32_t x192 = INT32_MIN;

	t47 = (((x189|x190)==x191)^x192);

	if (t47 != INT32_MIN) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint64_t x194 = UINT64_MAX;
	int16_t x195 = -106;
	static int16_t x196 = -33;
	static volatile int32_t t48 = 98679;

	t48 = (((x193|x194)==x195)^x196);

	if (t48 != -33) { NG(); } else { ; }
	
}

void f49(void) {
	static int8_t x197 = INT8_MIN;
	int32_t x198 = -1;
	int16_t x199 = INT16_MIN;
	int64_t x200 = INT64_MIN;
	static int64_t t49 = INT64_MIN;

	t49 = (((x197|x198)==x199)^x200);

	if (t49 != INT64_MIN) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 7U;
	uint16_t x202 = UINT16_MAX;
	int64_t x203 = INT64_MIN;
	static int16_t x204 = INT16_MIN;
	volatile int32_t t50 = 408;

	t50 = (((x201|x202)==x203)^x204);

	if (t50 != -32768) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x205 = INT64_MIN;
	uint64_t x206 = 108338651LLU;
	uint16_t x208 = UINT16_MAX;
	volatile int32_t t51 = -37021;

	t51 = (((x205|x206)==x207)^x208);

	if (t51 != 65535) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = 2;
	uint64_t x210 = 5LLU;
	volatile uint16_t x211 = 43U;
	static uint64_t x212 = 1416666333464765388LLU;
	uint64_t t52 = 26024LLU;

	t52 = (((x209|x210)==x211)^x212);

	if (t52 != 1416666333464765388LLU) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int16_t x213 = INT16_MAX;
	int64_t x214 = INT64_MIN;
	static int16_t x216 = -41;
	volatile int32_t t53 = -637087;

	t53 = (((x213|x214)==x215)^x216);

	if (t53 != -41) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MIN;
	int16_t x219 = 828;
	int8_t x220 = 21;
	int32_t t54 = 2613910;

	t54 = (((x217|x218)==x219)^x220);

	if (t54 != 21) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x222 = 26356224LLU;
	volatile int64_t x223 = INT64_MIN;
	static int8_t x224 = INT8_MAX;
	static int32_t t55 = -3;

	t55 = (((x221|x222)==x223)^x224);

	if (t55 != 127) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int16_t x225 = -1;
	int64_t x227 = 4629464148503LL;
	int8_t x228 = 0;
	int32_t t56 = 8;

	t56 = (((x225|x226)==x227)^x228);

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = -1LL;
	int64_t x230 = 324281LL;
	static int16_t x231 = INT16_MAX;
	volatile uint64_t t57 = UINT64_MAX;

	t57 = (((x229|x230)==x231)^x232);

	if (t57 != UINT64_MAX) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int16_t x234 = INT16_MAX;
	int32_t x235 = INT32_MIN;
	volatile int8_t x236 = INT8_MAX;
	int32_t t58 = 640;

	t58 = (((x233|x234)==x235)^x236);

	if (t58 != 127) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = -142546949368LL;
	int64_t x239 = INT64_MAX;
	volatile int32_t t59 = -111018847;

	t59 = (((x237|x238)==x239)^x240);

	if (t59 != 255) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x241 = INT32_MAX;
	uint64_t x242 = UINT64_MAX;
	volatile int32_t t60 = -1705;

	t60 = (((x241|x242)==x243)^x244);

	if (t60 != -6) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = -1;
	volatile int16_t x246 = INT16_MAX;
	int64_t x247 = INT64_MAX;
	uint16_t x248 = 257U;
	int32_t t61 = 10691523;

	t61 = (((x245|x246)==x247)^x248);

	if (t61 != 257) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile int8_t x249 = INT8_MIN;
	int32_t x250 = INT32_MIN;
	uint8_t x252 = UINT8_MAX;

	t62 = (((x249|x250)==x251)^x252);

	if (t62 != 255) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x253 = 723045LLU;
	uint16_t x255 = UINT16_MAX;
	int32_t t63 = 115;

	t63 = (((x253|x254)==x255)^x256);

	if (t63 != 57) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x257 = 12U;
	volatile uint16_t x258 = 14U;
	int8_t x259 = 0;
	int32_t x260 = INT32_MAX;
	volatile int32_t t64 = INT32_MAX;

	t64 = (((x257|x258)==x259)^x260);

	if (t64 != INT32_MAX) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x261 = UINT8_MAX;
	int16_t x262 = -4108;
	int32_t x263 = 0;
	int8_t x264 = INT8_MIN;

	t65 = (((x261|x262)==x263)^x264);

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x265 = UINT8_MAX;
	int32_t x266 = -5749;
	int32_t x267 = -20284;
	volatile int8_t x268 = INT8_MIN;

	t66 = (((x265|x266)==x267)^x268);

	if (t66 != -128) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	volatile int16_t x271 = -1;
	int64_t x272 = 4905618LL;
	int64_t t67 = -25844574776648640LL;

	t67 = (((x269|x270)==x271)^x272);

	if (t67 != 4905618LL) { NG(); } else { ; }
	
}

void f68(void) {
	static uint8_t x273 = 1U;
	int8_t x275 = INT8_MAX;
	volatile int8_t x276 = INT8_MIN;
	volatile int32_t t68 = 774;

	t68 = (((x273|x274)==x275)^x276);

	if (t68 != -128) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint32_t x277 = UINT32_MAX;
	volatile int8_t x278 = INT8_MIN;
	int64_t x279 = INT64_MIN;
	uint64_t x280 = 41373480662LLU;
	uint64_t t69 = 178140498LLU;

	t69 = (((x277|x278)==x279)^x280);

	if (t69 != 41373480662LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int16_t x281 = 1742;
	volatile int32_t t70 = INT32_MIN;

	t70 = (((x281|x282)==x283)^x284);

	if (t70 != INT32_MIN) { NG(); } else { ; }
	
}

void f71(void) {
	static uint32_t x285 = UINT32_MAX;
	static uint8_t x287 = UINT8_MAX;
	static int64_t x288 = -1LL;
	volatile int64_t t71 = -29219041633587LL;

	t71 = (((x285|x286)==x287)^x288);

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint8_t x289 = UINT8_MAX;
	static int64_t x290 = -1LL;
	int32_t t72 = 1;

	t72 = (((x289|x290)==x291)^x292);

	if (t72 != -1) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = INT32_MIN;
	int16_t x294 = -2;
	int64_t x295 = INT64_MIN;
	static int64_t t73 = INT64_MIN;

	t73 = (((x293|x294)==x295)^x296);

	if (t73 != INT64_MIN) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x297 = 70;
	volatile uint8_t x298 = 25U;
	uint16_t x299 = UINT16_MAX;
	static int32_t x300 = INT32_MAX;
	volatile int32_t t74 = INT32_MAX;

	t74 = (((x297|x298)==x299)^x300);

	if (t74 != INT32_MAX) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x302 = INT32_MAX;
	int32_t x304 = INT32_MIN;
	static volatile int32_t t75 = INT32_MIN;

	t75 = (((x301|x302)==x303)^x304);

	if (t75 != INT32_MIN) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x305 = 3;
	static int8_t x306 = -3;
	int32_t x307 = 13960;
	volatile int32_t t76 = 4719012;

	t76 = (((x305|x306)==x307)^x308);

	if (t76 != -32768) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = 1018110235443074764LL;
	int32_t x310 = 18759;
	static uint64_t x312 = 25688LLU;
	uint64_t t77 = 751252182611590022LLU;

	t77 = (((x309|x310)==x311)^x312);

	if (t77 != 25688LLU) { NG(); } else { ; }
	
}

void f78(void) {
	static int8_t x313 = INT8_MIN;
	int8_t x314 = -25;
	int64_t x315 = INT64_MAX;
	int16_t x316 = 7144;
	volatile int32_t t78 = 2828418;

	t78 = (((x313|x314)==x315)^x316);

	if (t78 != 7144) { NG(); } else { ; }
	
}

void f79(void) {
	uint8_t x317 = 1U;
	int32_t x319 = 9181215;
	static int64_t x320 = -11988668074668500LL;

	t79 = (((x317|x318)==x319)^x320);

	if (t79 != -11988668074668500LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint64_t x322 = 131024668LLU;
	int16_t x323 = -8929;
	uint32_t x324 = 374162U;
	uint32_t t80 = 1U;

	t80 = (((x321|x322)==x323)^x324);

	if (t80 != 374162U) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x325 = INT64_MIN;
	int64_t x326 = 0LL;
	uint16_t x327 = 9351U;
	int64_t x328 = -8LL;
	int64_t t81 = 2061047426989LL;

	t81 = (((x325|x326)==x327)^x328);

	if (t81 != -8LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x329 = INT8_MAX;
	volatile uint8_t x330 = UINT8_MAX;
	uint32_t x331 = 32549097U;
	int32_t x332 = -1;
	volatile int32_t t82 = 1761281;

	t82 = (((x329|x330)==x331)^x332);

	if (t82 != -1) { NG(); } else { ; }
	
}

void f83(void) {
	volatile uint32_t x333 = UINT32_MAX;
	int8_t x335 = 2;
	volatile int32_t t83 = 209;

	t83 = (((x333|x334)==x335)^x336);

	if (t83 != 7) { NG(); } else { ; }
	
}

void f84(void) {
	uint8_t x337 = 14U;
	int32_t x338 = INT32_MIN;
	int32_t x340 = -1;

	t84 = (((x337|x338)==x339)^x340);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x341 = INT8_MIN;
	uint8_t x342 = UINT8_MAX;
	int8_t x343 = 12;

	t85 = (((x341|x342)==x343)^x344);

	if (t85 != 5274925LL) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x345 = INT16_MIN;
	int64_t x346 = INT64_MIN;
	uint8_t x347 = 2U;
	volatile int16_t x348 = INT16_MAX;
	int32_t t86 = 41847;

	t86 = (((x345|x346)==x347)^x348);

	if (t86 != 32767) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x349 = INT32_MIN;
	static int32_t x350 = INT32_MIN;
	int8_t x351 = INT8_MIN;
	int64_t x352 = -1LL;
	volatile int64_t t87 = -19957010849473339LL;

	t87 = (((x349|x350)==x351)^x352);

	if (t87 != -1LL) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x353 = -4;
	volatile int32_t x354 = INT32_MAX;
	static int64_t x355 = INT64_MAX;
	uint32_t x356 = 1829247U;
	uint32_t t88 = 115U;

	t88 = (((x353|x354)==x355)^x356);

	if (t88 != 1829247U) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int16_t x357 = INT16_MIN;
	volatile int16_t x359 = INT16_MIN;
	int32_t x360 = -1;

	t89 = (((x357|x358)==x359)^x360);

	if (t89 != -1) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x361 = 5869U;
	uint8_t x364 = UINT8_MAX;
	int32_t t90 = -590638;

	t90 = (((x361|x362)==x363)^x364);

	if (t90 != 255) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x365 = 2U;
	int32_t x366 = INT32_MIN;
	volatile int8_t x367 = INT8_MIN;

	t91 = (((x365|x366)==x367)^x368);

	if (t91 != 21) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x369 = -1;
	volatile int16_t x370 = 332;
	static int64_t x371 = INT64_MIN;
	int16_t x372 = -1;
	int32_t t92 = 0;

	t92 = (((x369|x370)==x371)^x372);

	if (t92 != -1) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = INT8_MIN;
	int16_t x374 = -4133;
	uint8_t x375 = 3U;
	static int8_t x376 = INT8_MAX;
	int32_t t93 = 1;

	t93 = (((x373|x374)==x375)^x376);

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x378 = 196U;
	uint64_t x380 = UINT64_MAX;
	volatile uint64_t t94 = UINT64_MAX;

	t94 = (((x377|x378)==x379)^x380);

	if (t94 != UINT64_MAX) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x381 = INT64_MAX;
	uint8_t x382 = 6U;
	volatile int64_t x383 = -346LL;
	uint8_t x384 = 59U;
	volatile int32_t t95 = 344825;

	t95 = (((x381|x382)==x383)^x384);

	if (t95 != 59) { NG(); } else { ; }
	
}

void f96(void) {
	static int32_t x385 = INT32_MAX;
	int64_t x386 = -8300554LL;
	int16_t x388 = -148;
	volatile int32_t t96 = -424846539;

	t96 = (((x385|x386)==x387)^x388);

	if (t96 != -148) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x389 = 334263816544838LLU;
	int8_t x390 = 1;
	static int32_t t97 = -1064938;

	t97 = (((x389|x390)==x391)^x392);

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int8_t x393 = -1;
	int64_t x394 = -1LL;
	int8_t x395 = INT8_MIN;
	volatile uint8_t x396 = 1U;
	int32_t t98 = -157356;

	t98 = (((x393|x394)==x395)^x396);

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x397 = -1;
	int64_t x398 = -1LL;
	uint32_t x400 = UINT32_MAX;
	volatile uint32_t t99 = UINT32_MAX;

	t99 = (((x397|x398)==x399)^x400);

	if (t99 != UINT32_MAX) { NG(); } else { ; }
	
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

