#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int64_t x1 = INT64_MAX;
static volatile uint16_t x3 = 9354U;
int8_t x12 = INT8_MIN;
int32_t t3 = -16738;
static uint32_t x21 = 1311U;
uint64_t x22 = 4LLU;
int32_t x26 = INT32_MIN;
int8_t x32 = -20;
volatile int32_t t7 = -14;
static uint16_t x34 = 657U;
int16_t x44 = 345;
volatile uint32_t x51 = UINT32_MAX;
int16_t x66 = -1;
uint64_t x67 = 1208638025LLU;
int64_t x74 = -1LL;
volatile uint64_t t17 = 5820LLU;
int32_t x77 = INT32_MAX;
uint16_t x87 = 117U;
uint64_t t20 = 3190818309195966379LLU;
int64_t x111 = INT64_MAX;
volatile int64_t t26 = -340666127138873LL;
volatile uint64_t x122 = 29129669967LLU;
static int64_t t28 = -75164895LL;
static uint32_t x138 = 102456095U;
uint32_t x139 = UINT32_MAX;
int8_t x142 = 58;
volatile int32_t x143 = 0;
uint32_t x150 = UINT32_MAX;
volatile int64_t t33 = 60848918696622900LL;
int64_t x154 = INT64_MIN;
volatile int8_t x166 = 3;
int16_t x168 = INT16_MIN;
static int8_t x174 = 1;
int64_t x178 = INT64_MAX;
int8_t x187 = INT8_MIN;
int32_t t42 = 37;
int16_t x197 = INT16_MIN;
int64_t t43 = -21375849572LL;
volatile int32_t x206 = -1;
uint64_t x215 = 6738326352813LLU;
int32_t x217 = INT32_MIN;
uint32_t x219 = UINT32_MAX;
int64_t x227 = INT64_MIN;
int64_t t49 = 26515231444LL;
int64_t x239 = -442484482442641065LL;
volatile int64_t t53 = 58502713LL;
uint8_t x253 = 1U;
volatile int64_t t55 = -10856020939636LL;
static uint8_t x268 = UINT8_MAX;
volatile int32_t x276 = INT32_MIN;
volatile int8_t x278 = 10;
int32_t x287 = -2062850;
int64_t x292 = INT64_MAX;
volatile int8_t x303 = INT8_MAX;
int64_t x315 = 3449039471LL;
static uint16_t x320 = UINT16_MAX;
uint64_t x324 = 1LLU;
volatile uint64_t t68 = 239873878826140LLU;
int64_t x328 = INT64_MIN;
volatile uint64_t t69 = 810681337LLU;
int8_t x334 = -47;
int8_t x336 = 22;
int16_t x338 = INT16_MIN;
int64_t t72 = -2LL;
int32_t x346 = -13;
uint16_t x354 = 5U;
volatile int8_t x356 = -35;
volatile uint32_t t77 = 277718U;
uint8_t x365 = 9U;
int32_t t79 = 0;
volatile int16_t x376 = -1;
volatile int8_t x378 = 1;
int8_t x380 = 1;
static uint32_t x381 = 1651U;
int16_t x382 = -31;
uint32_t x388 = UINT32_MAX;
uint16_t x396 = 93U;
volatile uint64_t t87 = 1596110LLU;
uint32_t x402 = 76U;
int16_t x403 = 304;
int64_t x418 = -7LL;
int8_t x428 = INT8_MIN;
static int16_t x432 = 14;
int64_t t95 = 161566743LL;
static uint32_t x440 = 3U;
uint32_t t97 = 5751162U;
uint16_t x444 = 496U;


void f0(void) {
	uint64_t x2 = 5814LLU;
	static int16_t x4 = INT16_MIN;
	volatile uint64_t t0 = 0LLU;

	t0 = (x1%(x2|(x3+x4)));

	if (t0 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f1(void) {
	static int64_t x5 = INT64_MAX;
	int32_t x6 = INT32_MIN;
	static int64_t x7 = -1LL;
	static int8_t x8 = 0;
	int64_t t1 = 3055LL;

	t1 = (x5%(x6|(x7+x8)));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -1LL;
	int8_t x10 = INT8_MIN;
	int8_t x11 = INT8_MIN;
	volatile int64_t t2 = -6717805LL;

	t2 = (x9%(x10|(x11+x12)));

	if (t2 != -1LL) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = 1U;
	int32_t x14 = -2;
	static int8_t x15 = INT8_MAX;
	int16_t x16 = INT16_MAX;

	t3 = (x13%(x14|(x15+x16)));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = 114838893036LL;
	static int64_t x18 = INT64_MAX;
	static int8_t x19 = INT8_MIN;
	volatile uint8_t x20 = 16U;
	volatile int64_t t4 = 2267954245195830732LL;

	t4 = (x17%(x18|(x19+x20)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x23 = INT8_MAX;
	int64_t x24 = -1975093734LL;
	volatile uint64_t t5 = 242588014004318961LLU;

	t5 = (x21%(x22|(x23+x24)));

	if (t5 != 1311LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MIN;
	static int8_t x27 = INT8_MAX;
	volatile int16_t x28 = 0;
	volatile int32_t t6 = -893;

	t6 = (x25%(x26|(x27+x28)));

	if (t6 != -127) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int16_t x30 = INT16_MIN;
	int8_t x31 = 0;

	t7 = (x29%(x30|(x31+x32)));

	if (t7 != -8) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x33 = -1LL;
	int16_t x35 = 3;
	int64_t x36 = -1LL;
	static int64_t t8 = -3247589165875LL;

	t8 = (x33%(x34|(x35+x36)));

	if (t8 != -1LL) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x41 = INT64_MIN;
	int8_t x42 = -29;
	volatile uint16_t x43 = 789U;
	volatile int64_t t9 = -1011106LL;

	t9 = (x41%(x42|(x43+x44)));

	if (t9 != -9LL) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int64_t x45 = -264260LL;
	static volatile int8_t x46 = INT8_MIN;
	static uint64_t x47 = UINT64_MAX;
	static volatile uint32_t x48 = 1U;
	static uint64_t t10 = 589017159484618LLU;

	t10 = (x45%(x46|(x47+x48)));

	if (t10 != 18446744073709287356LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x49 = -1;
	uint8_t x50 = UINT8_MAX;
	int64_t x52 = -1LL;
	volatile int64_t t11 = 1319299458305922LL;

	t11 = (x49%(x50|(x51+x52)));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile int32_t x53 = -1;
	int16_t x54 = -1;
	int16_t x55 = -12008;
	static int8_t x56 = 0;
	static int32_t t12 = 3581;

	t12 = (x53%(x54|(x55+x56)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x57 = INT16_MAX;
	int8_t x58 = 2;
	int8_t x59 = INT8_MIN;
	volatile int64_t x60 = -26300LL;
	int64_t t13 = -3817LL;

	t13 = (x57%(x58|(x59+x60)));

	if (t13 != 6341LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x61 = -1;
	static int32_t x62 = INT32_MAX;
	uint64_t x63 = 1877LLU;
	int8_t x64 = 3;
	uint64_t t14 = 1LLU;

	t14 = (x61%(x62|(x63+x64)));

	if (t14 != 3LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x65 = -1;
	int32_t x68 = INT32_MIN;
	uint64_t t15 = 73LLU;

	t15 = (x65%(x66|(x67+x68)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x69 = -1;
	int64_t x70 = INT64_MIN;
	static int8_t x71 = INT8_MAX;
	int64_t x72 = INT64_MIN;
	int64_t t16 = -2457344LL;

	t16 = (x69%(x70|(x71+x72)));

	if (t16 != -1LL) { NG(); } else { ; }
	
}

void f17(void) {
	static int16_t x73 = 194;
	uint64_t x75 = UINT64_MAX;
	static int32_t x76 = 60258125;

	t17 = (x73%(x74|(x75+x76)));

	if (t17 != 194LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x78 = -28;
	int8_t x79 = INT8_MIN;
	static int16_t x80 = INT16_MAX;
	int32_t t18 = 53191296;

	t18 = (x77%(x78|(x79+x80)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int64_t x81 = -1LL;
	int8_t x82 = INT8_MIN;
	uint32_t x83 = 38U;
	int32_t x84 = -1;
	static int64_t t19 = -6856714719LL;

	t19 = (x81%(x82|(x83+x84)));

	if (t19 != -1LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	uint64_t x86 = UINT64_MAX;
	static int8_t x88 = INT8_MIN;

	t20 = (x85%(x86|(x87+x88)));

	if (t20 != 2147483647LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int16_t x93 = INT16_MIN;
	volatile int32_t x94 = INT32_MIN;
	uint8_t x95 = UINT8_MAX;
	int64_t x96 = -566954209789906455LL;
	volatile int64_t t21 = -414536LL;

	t21 = (x93%(x94|(x95+x96)));

	if (t21 != -32768LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint32_t x97 = 15U;
	uint64_t x98 = 120745521102453898LLU;
	uint16_t x99 = 799U;
	static int16_t x100 = INT16_MAX;
	volatile uint64_t t22 = 2139416LLU;

	t22 = (x97%(x98|(x99+x100)));

	if (t22 != 15LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x101 = -1;
	uint8_t x102 = 3U;
	int8_t x103 = -21;
	static uint8_t x104 = 102U;
	volatile int32_t t23 = -6346518;

	t23 = (x101%(x102|(x103+x104)));

	if (t23 != -1) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x105 = -1;
	int8_t x106 = INT8_MAX;
	static int8_t x107 = -12;
	volatile uint8_t x108 = 2U;
	static volatile int32_t t24 = 21;

	t24 = (x105%(x106|(x107+x108)));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x109 = INT64_MIN;
	volatile int64_t x110 = 3035139LL;
	static int8_t x112 = INT8_MIN;
	static int64_t t25 = -28LL;

	t25 = (x109%(x110|(x111+x112)));

	if (t25 != -129LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x117 = INT64_MAX;
	uint32_t x118 = 14570601U;
	static int32_t x119 = -1;
	uint32_t x120 = 44724U;

	t26 = (x117%(x118|(x119+x120)));

	if (t26 != 1341138LL) { NG(); } else { ; }
	
}

void f27(void) {
	static int8_t x121 = 14;
	int16_t x123 = -14194;
	int8_t x124 = INT8_MIN;
	volatile uint64_t t27 = 1116LLU;

	t27 = (x121%(x122|(x123+x124)));

	if (t27 != 14LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = INT8_MIN;
	static int64_t x126 = -58384734718LL;
	static uint32_t x127 = UINT32_MAX;
	int16_t x128 = INT16_MIN;

	t28 = (x125%(x126|(x127+x128)));

	if (t28 != -128LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x129 = INT32_MAX;
	static int16_t x130 = INT16_MIN;
	static int32_t x131 = INT32_MIN;
	uint8_t x132 = UINT8_MAX;
	int32_t t29 = 124804;

	t29 = (x129%(x130|(x131+x132)));

	if (t29 != 32510) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int32_t x133 = INT32_MIN;
	volatile int16_t x134 = -1;
	static volatile uint16_t x135 = 4U;
	volatile uint16_t x136 = UINT16_MAX;
	int32_t t30 = -855050428;

	t30 = (x133%(x134|(x135+x136)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = INT8_MIN;
	int16_t x140 = INT16_MIN;
	uint32_t t31 = 6496U;

	t31 = (x137%(x138|(x139+x140)));

	if (t31 != 32641U) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x141 = UINT32_MAX;
	int32_t x144 = INT32_MAX;
	volatile uint32_t t32 = 2U;

	t32 = (x141%(x142|(x143+x144)));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x149 = INT16_MIN;
	static int64_t x151 = -1LL;
	static int8_t x152 = INT8_MAX;

	t33 = (x149%(x150|(x151+x152)));

	if (t33 != -32768LL) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x153 = 14496U;
	int32_t x155 = -36093895;
	int64_t x156 = INT64_MAX;
	int64_t t34 = 1917891933786LL;

	t34 = (x153%(x154|(x155+x156)));

	if (t34 != 14496LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x161 = UINT32_MAX;
	static int16_t x162 = -104;
	volatile int64_t x163 = 1LL;
	volatile int64_t x164 = -1LL;
	volatile int64_t t35 = -1320495592094863548LL;

	t35 = (x161%(x162|(x163+x164)));

	if (t35 != 47LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x165 = 0;
	volatile int8_t x167 = INT8_MIN;
	volatile int32_t t36 = 51;

	t36 = (x165%(x166|(x167+x168)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x169 = -1;
	int8_t x170 = 3;
	uint32_t x171 = UINT32_MAX;
	uint16_t x172 = 1U;
	volatile uint32_t t37 = 0U;

	t37 = (x169%(x170|(x171+x172)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x173 = -1LL;
	int64_t x175 = INT64_MIN;
	static uint32_t x176 = 23612138U;
	volatile int64_t t38 = 2876065025LL;

	t38 = (x173%(x174|(x175+x176)));

	if (t38 != -1LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x177 = UINT8_MAX;
	volatile int16_t x179 = 13179;
	uint8_t x180 = UINT8_MAX;
	int64_t t39 = -113LL;

	t39 = (x177%(x178|(x179+x180)));

	if (t39 != 255LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x185 = -173938125149873484LL;
	static int32_t x186 = 299;
	int32_t x188 = 2537;
	volatile int64_t t40 = 5587LL;

	t40 = (x185%(x186|(x187+x188)));

	if (t40 != -443LL) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x189 = 7893;
	static int32_t x190 = INT32_MIN;
	int32_t x191 = INT32_MAX;
	volatile int64_t x192 = 787290309LL;
	static volatile int64_t t41 = 482896534228LL;

	t41 = (x189%(x190|(x191+x192)));

	if (t41 != 7893LL) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x193 = INT32_MAX;
	uint8_t x194 = 107U;
	int8_t x195 = INT8_MIN;
	uint8_t x196 = UINT8_MAX;

	t42 = (x193%(x194|(x195+x196)));

	if (t42 != 7) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x198 = INT64_MIN;
	int32_t x199 = -1;
	int8_t x200 = INT8_MIN;

	t43 = (x197%(x198|(x199+x200)));

	if (t43 != -2LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x205 = 41U;
	volatile int8_t x207 = -1;
	volatile int32_t x208 = 442736;
	int32_t t44 = -93485762;

	t44 = (x205%(x206|(x207+x208)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x209 = -1;
	int64_t x210 = 16795546393326799LL;
	int32_t x211 = -127913;
	uint8_t x212 = 8U;
	int64_t t45 = -80783LL;

	t45 = (x209%(x210|(x211+x212)));

	if (t45 != -1LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x213 = INT32_MIN;
	static int64_t x214 = 9657413060574915LL;
	static int64_t x216 = INT64_MIN;
	uint64_t t46 = 3561517243571LLU;

	t46 = (x213%(x214|(x215+x216)));

	if (t46 != 9213714483117228049LLU) { NG(); } else { ; }
	
}

void f47(void) {
	uint8_t x218 = 50U;
	int32_t x220 = -81;
	uint32_t t47 = 62U;

	t47 = (x217%(x218|(x219+x220)));

	if (t47 != 2147483648U) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x221 = UINT64_MAX;
	int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	int32_t x224 = INT32_MAX;
	uint64_t t48 = 2079LLU;

	t48 = (x221%(x222|(x223+x224)));

	if (t48 != 128LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x225 = 0LL;
	volatile uint16_t x226 = 171U;
	uint8_t x228 = UINT8_MAX;

	t49 = (x225%(x226|(x227+x228)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x229 = -1;
	uint32_t x230 = 248740697U;
	int8_t x231 = INT8_MIN;
	int8_t x232 = INT8_MIN;
	volatile uint32_t t50 = 689708042U;

	t50 = (x229%(x230|(x231+x232)));

	if (t50 != 166U) { NG(); } else { ; }
	
}

void f51(void) {
	uint16_t x237 = 345U;
	static int16_t x238 = -1;
	int8_t x240 = INT8_MAX;
	static volatile int64_t t51 = 12871160284298237LL;

	t51 = (x237%(x238|(x239+x240)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile uint8_t x245 = UINT8_MAX;
	int8_t x246 = INT8_MIN;
	static int32_t x247 = INT32_MIN;
	int16_t x248 = 2098;
	int32_t t52 = -2150;

	t52 = (x245%(x246|(x247+x248)));

	if (t52 != 21) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x249 = 10;
	static int64_t x250 = INT64_MIN;
	uint16_t x251 = 9U;
	volatile uint8_t x252 = 6U;

	t53 = (x249%(x250|(x251+x252)));

	if (t53 != 10LL) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x254 = INT8_MAX;
	uint64_t x255 = 160544577900949LLU;
	int16_t x256 = 2;
	volatile uint64_t t54 = 47960497290461LLU;

	t54 = (x253%(x254|(x255+x256)));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x257 = INT16_MIN;
	uint8_t x258 = 7U;
	static int32_t x259 = 1243;
	int64_t x260 = INT64_MIN;

	t55 = (x257%(x258|(x259+x260)));

	if (t55 != -32768LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int8_t x261 = 3;
	volatile uint8_t x262 = 12U;
	static int64_t x263 = INT64_MIN;
	static int32_t x264 = 2257;
	int64_t t56 = 3036778LL;

	t56 = (x261%(x262|(x263+x264)));

	if (t56 != 3LL) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x265 = -1462750865438LL;
	uint64_t x266 = 31249903472889LLU;
	volatile int64_t x267 = 364LL;
	volatile uint64_t t57 = 88398351674347LLU;

	t57 = (x265%(x266|(x267+x268)));

	if (t57 != 18340319315487LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x269 = INT16_MIN;
	int16_t x270 = INT16_MIN;
	int32_t x271 = 52050632;
	volatile int32_t x272 = 628714084;
	static int32_t t58 = 412569015;

	t58 = (x269%(x270|(x271+x272)));

	if (t58 != -9516) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x273 = 1;
	static volatile int16_t x274 = -1;
	static int8_t x275 = 2;
	int32_t t59 = -3;

	t59 = (x273%(x274|(x275+x276)));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int32_t x277 = INT32_MAX;
	int16_t x279 = INT16_MIN;
	uint8_t x280 = UINT8_MAX;
	int32_t t60 = 28563;

	t60 = (x277%(x278|(x279+x280)));

	if (t60 != 32510) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x285 = 80U;
	static uint32_t x286 = 0U;
	uint16_t x288 = 3U;
	uint32_t t61 = 49610U;

	t61 = (x285%(x286|(x287+x288)));

	if (t61 != 80U) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x289 = 3632LLU;
	int64_t x290 = INT64_MAX;
	volatile int8_t x291 = INT8_MIN;
	volatile uint64_t t62 = 11LLU;

	t62 = (x289%(x290|(x291+x292)));

	if (t62 != 3632LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static int8_t x293 = INT8_MAX;
	int16_t x294 = 560;
	volatile int16_t x295 = -1;
	int32_t x296 = -1;
	int32_t t63 = -6664;

	t63 = (x293%(x294|(x295+x296)));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x301 = INT64_MIN;
	static volatile int32_t x302 = INT32_MIN;
	static int16_t x304 = -2;
	static volatile int64_t t64 = 677627786LL;

	t64 = (x301%(x302|(x303+x304)));

	if (t64 != -31250LL) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x309 = 0;
	volatile uint16_t x310 = 0U;
	static int16_t x311 = 22;
	int64_t x312 = 1030852LL;
	int64_t t65 = -2LL;

	t65 = (x309%(x310|(x311+x312)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x313 = INT8_MIN;
	volatile int64_t x314 = 26776LL;
	volatile uint8_t x316 = 3U;
	volatile int64_t t66 = 16849838255336LL;

	t66 = (x313%(x314|(x315+x316)));

	if (t66 != -128LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int8_t x317 = 1;
	volatile uint8_t x318 = 108U;
	uint8_t x319 = UINT8_MAX;
	int32_t t67 = -64065;

	t67 = (x317%(x318|(x319+x320)));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x321 = INT8_MIN;
	volatile int8_t x322 = INT8_MAX;
	int16_t x323 = -7;

	t68 = (x321%(x322|(x323+x324)));

	if (t68 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x325 = UINT16_MAX;
	uint16_t x326 = 1U;
	volatile uint64_t x327 = UINT64_MAX;

	t69 = (x325%(x326|(x327+x328)));

	if (t69 != 65535LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int16_t x329 = INT16_MAX;
	int32_t x330 = -1;
	uint32_t x331 = 175483485U;
	static int8_t x332 = INT8_MIN;
	volatile uint32_t t70 = 49U;

	t70 = (x329%(x330|(x331+x332)));

	if (t70 != 32767U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x333 = INT64_MAX;
	int32_t x335 = 9784;
	int64_t t71 = -24LL;

	t71 = (x333%(x334|(x335+x336)));

	if (t71 != 7LL) { NG(); } else { ; }
	
}

void f72(void) {
	static uint16_t x337 = 6U;
	uint32_t x339 = 23820247U;
	static volatile int64_t x340 = INT64_MIN;

	t72 = (x337%(x338|(x339+x340)));

	if (t72 != 6LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x341 = 12U;
	static volatile uint16_t x342 = 3U;
	int64_t x343 = INT64_MIN;
	uint8_t x344 = 12U;
	int64_t t73 = 398024LL;

	t73 = (x341%(x342|(x343+x344)));

	if (t73 != 12LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x345 = UINT32_MAX;
	uint64_t x347 = 954787835181LLU;
	static volatile uint16_t x348 = UINT16_MAX;
	volatile uint64_t t74 = 61305LLU;

	t74 = (x345%(x346|(x347+x348)));

	if (t74 != 4294967295LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint8_t x349 = 33U;
	uint64_t x350 = UINT64_MAX;
	int8_t x351 = 3;
	volatile int16_t x352 = INT16_MAX;
	volatile uint64_t t75 = 4061854175026223LLU;

	t75 = (x349%(x350|(x351+x352)));

	if (t75 != 33LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x353 = 202368464U;
	uint16_t x355 = UINT16_MAX;
	uint32_t t76 = 320217090U;

	t76 = (x353%(x354|(x355+x356)));

	if (t76 != 35875U) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x357 = 451878236U;
	int32_t x358 = INT32_MIN;
	int8_t x359 = 0;
	int8_t x360 = INT8_MIN;

	t77 = (x357%(x358|(x359+x360)));

	if (t77 != 451878236U) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x361 = INT32_MIN;
	volatile uint16_t x362 = 27726U;
	int8_t x363 = -1;
	int64_t x364 = 748LL;
	volatile int64_t t78 = -1224LL;

	t78 = (x361%(x362|(x363+x364)));

	if (t78 != -8066LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x366 = -1;
	int8_t x367 = -3;
	static int8_t x368 = -1;

	t79 = (x365%(x366|(x367+x368)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x369 = INT8_MIN;
	int8_t x370 = INT8_MIN;
	int8_t x371 = INT8_MIN;
	int64_t x372 = 6730031577LL;
	volatile int64_t t80 = 675383215LL;

	t80 = (x369%(x370|(x371+x372)));

	if (t80 != -11LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x373 = INT32_MIN;
	uint32_t x374 = UINT32_MAX;
	static int64_t x375 = INT64_MAX;
	volatile int64_t t81 = -9330LL;

	t81 = (x373%(x374|(x375+x376)));

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x377 = 9;
	int16_t x379 = -1;
	static int32_t t82 = -45241;

	t82 = (x377%(x378|(x379+x380)));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x383 = 49627LLU;
	int32_t x384 = INT32_MIN;
	static uint64_t t83 = 263915204173299LLU;

	t83 = (x381%(x382|(x383+x384)));

	if (t83 != 1651LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x385 = INT64_MIN;
	uint32_t x386 = UINT32_MAX;
	volatile uint32_t x387 = 74082116U;
	int64_t t84 = -1LL;

	t84 = (x385%(x386|(x387+x388)));

	if (t84 != -2147483648LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x389 = -3;
	int64_t x390 = INT64_MAX;
	static int64_t x391 = INT64_MIN;
	uint8_t x392 = UINT8_MAX;
	volatile int64_t t85 = -3906713968LL;

	t85 = (x389%(x390|(x391+x392)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int64_t x393 = 0LL;
	int32_t x394 = INT32_MIN;
	volatile uint64_t x395 = 1539363684400LLU;
	volatile uint64_t t86 = 10LLU;

	t86 = (x393%(x394|(x395+x396)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x397 = INT32_MIN;
	uint8_t x398 = 2U;
	uint64_t x399 = 4564LLU;
	int16_t x400 = -485;

	t87 = (x397%(x398|(x399+x400)));

	if (t87 != 1480LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x401 = INT32_MIN;
	int8_t x404 = -1;
	volatile uint32_t t88 = 5U;

	t88 = (x401%(x402|(x403+x404)));

	if (t88 != 30U) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x405 = UINT32_MAX;
	volatile uint16_t x406 = 6087U;
	uint64_t x407 = 238LLU;
	int16_t x408 = INT16_MIN;
	volatile uint64_t t89 = 8416LLU;

	t89 = (x405%(x406|(x407+x408)));

	if (t89 != 4294967295LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x409 = INT32_MIN;
	int8_t x410 = INT8_MIN;
	static int32_t x411 = 2792512;
	int8_t x412 = INT8_MAX;
	int32_t t90 = 28239;

	t90 = (x409%(x410|(x411+x412)));

	if (t90 != -63) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x413 = 19689809;
	uint8_t x414 = UINT8_MAX;
	int16_t x415 = 0;
	int16_t x416 = -1;
	int32_t t91 = -117865;

	t91 = (x413%(x414|(x415+x416)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x417 = INT8_MIN;
	static int8_t x419 = INT8_MIN;
	static int16_t x420 = -14;
	static int64_t t92 = 13845691080LL;

	t92 = (x417%(x418|(x419+x420)));

	if (t92 != -3LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x421 = 21U;
	static volatile int8_t x422 = 57;
	int16_t x423 = INT16_MAX;
	int8_t x424 = INT8_MIN;
	volatile int32_t t93 = -105;

	t93 = (x421%(x422|(x423+x424)));

	if (t93 != 21) { NG(); } else { ; }
	
}

void f94(void) {
	static int8_t x425 = INT8_MIN;
	uint16_t x426 = 6U;
	volatile int16_t x427 = INT16_MIN;
	static volatile int32_t t94 = -22121583;

	t94 = (x425%(x426|(x427+x428)));

	if (t94 != -128) { NG(); } else { ; }
	
}

void f95(void) {
	uint16_t x429 = 121U;
	static int64_t x430 = -1LL;
	int8_t x431 = -35;

	t95 = (x429%(x430|(x431+x432)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x433 = INT32_MAX;
	volatile int32_t x434 = INT32_MIN;
	static int8_t x435 = INT8_MIN;
	int32_t x436 = -26;
	int32_t t96 = -34162;

	t96 = (x433%(x434|(x435+x436)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x437 = INT8_MAX;
	uint8_t x438 = 1U;
	int16_t x439 = INT16_MAX;

	t97 = (x437%(x438|(x439+x440)));

	if (t97 != 127U) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x441 = INT8_MIN;
	int8_t x442 = INT8_MAX;
	volatile int8_t x443 = INT8_MAX;
	volatile int32_t t98 = 254;

	t98 = (x441%(x442|(x443+x444)));

	if (t98 != -128) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x445 = INT16_MAX;
	int8_t x446 = INT8_MIN;
	uint16_t x447 = UINT16_MAX;
	int64_t x448 = INT64_MIN;
	volatile int64_t t99 = -4051300787LL;

	t99 = (x445%(x446|(x447+x448)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

