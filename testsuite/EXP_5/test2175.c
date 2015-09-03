#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x4 = 108387117520030616LL;
volatile int64_t t0 = 2257662357406793082LL;
static int16_t x6 = INT16_MAX;
uint16_t x10 = 51U;
int16_t x17 = INT16_MAX;
volatile uint16_t x19 = 70U;
uint32_t x32 = UINT32_MAX;
static int64_t x40 = INT64_MAX;
uint64_t x41 = 1LLU;
int16_t x65 = INT16_MIN;
int64_t x69 = -518264LL;
int16_t x72 = INT16_MAX;
volatile int16_t x76 = INT16_MAX;
uint32_t t18 = 1U;
static volatile int16_t x89 = -1;
static uint8_t x103 = UINT8_MAX;
uint64_t t25 = 366582265737146569LLU;
int32_t x106 = -110;
static uint32_t x107 = 8U;
int32_t x110 = INT32_MIN;
static int64_t x116 = INT64_MIN;
int8_t x118 = INT8_MAX;
volatile int32_t x122 = 121449;
volatile int32_t x129 = -1;
int8_t x135 = -1;
int32_t t33 = 16003;
uint8_t x137 = UINT8_MAX;
int64_t x164 = INT64_MIN;
volatile uint64_t t39 = 694159LLU;
volatile uint32_t t41 = 6U;
uint8_t x173 = UINT8_MAX;
static volatile int64_t x176 = INT64_MIN;
volatile uint32_t x188 = UINT32_MAX;
volatile int8_t x206 = -3;
uint64_t x207 = 18537LLU;
uint64_t t48 = 656930122655LLU;
volatile int16_t x215 = -1;
int64_t x238 = INT64_MAX;
uint64_t x240 = 4272034026LLU;
int32_t x252 = INT32_MAX;
int8_t x255 = 15;
int32_t x259 = -1;
int64_t x274 = -6LL;
uint8_t x287 = UINT8_MAX;
static uint32_t x290 = UINT32_MAX;
uint64_t x292 = 96472357866950472LLU;
int16_t x294 = -1;
volatile uint32_t x300 = 337627707U;
int32_t x301 = INT32_MIN;
int32_t x304 = -1036064;
int64_t x305 = INT64_MIN;
static int64_t x309 = INT64_MIN;
int8_t x315 = INT8_MIN;
uint64_t x321 = UINT64_MAX;
int16_t x324 = 8203;
int32_t t78 = -1767413;
uint16_t x337 = UINT16_MAX;
uint16_t x345 = UINT16_MAX;
int64_t t87 = -2683162LL;
int64_t x369 = -1LL;
int8_t x374 = INT8_MIN;
uint8_t x375 = 50U;
volatile uint32_t t92 = 1258U;
volatile int16_t x396 = INT16_MIN;
uint64_t x399 = 0LLU;
uint8_t x401 = 3U;
int16_t x403 = 122;
volatile int64_t t96 = -1746642LL;
uint8_t x410 = 2U;
int16_t x415 = INT16_MAX;


void f0(void) {
	int8_t x1 = -37;
	int8_t x2 = -24;
	uint8_t x3 = UINT8_MAX;

	t0 = (x1/((x2^x3)|x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	int8_t x7 = -3;
	int32_t x8 = INT32_MIN;
	volatile uint64_t t1 = 1229400824352LLU;

	t1 = (x5/((x6^x7)|x8));

	if (t1 != 1LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -6140;
	static uint64_t x11 = UINT64_MAX;
	int32_t x12 = 122693405;
	volatile uint64_t t2 = 2887658458098LLU;

	t2 = (x9/((x10^x11)|x12));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint8_t x13 = UINT8_MAX;
	int32_t x14 = -1;
	uint16_t x15 = 2U;
	uint8_t x16 = 121U;
	volatile int32_t t3 = 282318;

	t3 = (x13/((x14^x15)|x16));

	if (t3 != -85) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = INT32_MIN;
	static int8_t x20 = -1;
	volatile int32_t t4 = -50;

	t4 = (x17/((x18^x19)|x20));

	if (t4 != -32767) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = UINT64_MAX;
	static int64_t x22 = -1LL;
	int16_t x23 = -1147;
	volatile int64_t x24 = -2734741811830LL;
	uint64_t t5 = 1195269LLU;

	t5 = (x21/((x22^x23)|x24));

	if (t5 != 1LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = INT64_MAX;
	int16_t x26 = INT16_MIN;
	int64_t x27 = INT64_MIN;
	volatile int8_t x28 = 5;
	int64_t t6 = 7747298421743LL;

	t6 = (x25/((x26^x27)|x28));

	if (t6 != 1LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x29 = -9193623172106LL;
	int8_t x30 = 3;
	int8_t x31 = -33;
	static volatile int64_t t7 = -1081920123345212LL;

	t7 = (x29/((x30^x31)|x32));

	if (t7 != -2140LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint8_t x33 = UINT8_MAX;
	int8_t x34 = -1;
	static int16_t x35 = INT16_MAX;
	volatile uint8_t x36 = 1U;
	int32_t t8 = -11466;

	t8 = (x33/((x34^x35)|x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x37 = UINT32_MAX;
	uint8_t x38 = 1U;
	uint16_t x39 = 1U;
	volatile int64_t t9 = 108278086975460LL;

	t9 = (x37/((x38^x39)|x40));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x42 = INT16_MIN;
	int8_t x43 = 16;
	uint16_t x44 = UINT16_MAX;
	uint64_t t10 = 1138236254443LLU;

	t10 = (x41/((x42^x43)|x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = -1;
	int8_t x46 = -40;
	static int64_t x47 = -3091929LL;
	int16_t x48 = 9039;
	static volatile int64_t t11 = 14887LL;

	t11 = (x45/((x46^x47)|x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x49 = -1;
	uint32_t x50 = 40725342U;
	static volatile int64_t x51 = -1LL;
	int32_t x52 = INT32_MIN;
	volatile int64_t t12 = -309290355162680967LL;

	t12 = (x49/((x50^x51)|x52));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MIN;
	int64_t x54 = -1LL;
	volatile int16_t x55 = INT16_MAX;
	static int64_t x56 = -141697754645623240LL;
	int64_t t13 = 10560935876LL;

	t13 = (x53/((x54^x55)|x56));

	if (t13 != 73725LL) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = INT8_MAX;
	int64_t x58 = INT64_MIN;
	uint8_t x59 = UINT8_MAX;
	int64_t x60 = INT64_MAX;
	static int64_t t14 = 48921834499037426LL;

	t14 = (x57/((x58^x59)|x60));

	if (t14 != -127LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = -1;
	int64_t x62 = INT64_MIN;
	static int64_t x63 = -1LL;
	static uint16_t x64 = 3088U;
	volatile int64_t t15 = 724930023786237340LL;

	t15 = (x61/((x62^x63)|x64));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = INT8_MAX;
	uint8_t x67 = 5U;
	int8_t x68 = INT8_MAX;
	volatile int32_t t16 = -534248788;

	t16 = (x65/((x66^x67)|x68));

	if (t16 != -258) { NG(); } else { ; }
	
}

void f17(void) {
	volatile int64_t x70 = 0LL;
	uint16_t x71 = 334U;
	int64_t t17 = -1742LL;

	t17 = (x69/((x70^x71)|x72));

	if (t17 != -15LL) { NG(); } else { ; }
	
}

void f18(void) {
	uint32_t x73 = 0U;
	static volatile int8_t x74 = -6;
	static int16_t x75 = INT16_MIN;

	t18 = (x73/((x74^x75)|x76));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MIN;
	static int16_t x78 = -1;
	static int32_t x79 = INT32_MAX;
	volatile int16_t x80 = INT16_MAX;
	int32_t t19 = 122;

	t19 = (x77/((x78^x79)|x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	uint16_t x81 = 55U;
	static uint64_t x82 = 782058LLU;
	int64_t x83 = INT64_MIN;
	static int64_t x84 = INT64_MIN;
	volatile uint64_t t20 = 74LLU;

	t20 = (x81/((x82^x83)|x84));

	if (t20 != 0LLU) { NG(); } else { ; }
	
}

void f21(void) {
	uint32_t x85 = UINT32_MAX;
	uint32_t x86 = 368828080U;
	uint16_t x87 = 1U;
	int8_t x88 = INT8_MAX;
	static uint32_t t21 = 3005942U;

	t21 = (x85/((x86^x87)|x88));

	if (t21 != 11U) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x90 = INT32_MAX;
	volatile uint8_t x91 = 11U;
	int8_t x92 = INT8_MAX;
	volatile int32_t t22 = 72655;

	t22 = (x89/((x90^x91)|x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x93 = 0U;
	static uint16_t x94 = 25590U;
	static int32_t x95 = INT32_MAX;
	int64_t x96 = -497LL;
	static volatile int64_t t23 = 4222057061077243526LL;

	t23 = (x93/((x94^x95)|x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x97 = 1;
	uint16_t x98 = 1U;
	volatile uint8_t x99 = 111U;
	int16_t x100 = INT16_MIN;
	int32_t t24 = 163725;

	t24 = (x97/((x98^x99)|x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint64_t x101 = 25824699LLU;
	int32_t x102 = 3;
	volatile uint8_t x104 = 99U;

	t25 = (x101/((x102^x103)|x104));

	if (t25 != 101273LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = -1;
	int32_t x108 = -1;
	uint32_t t26 = 166819138U;

	t26 = (x105/((x106^x107)|x108));

	if (t26 != 1U) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int64_t x109 = INT64_MIN;
	int16_t x111 = 5928;
	int8_t x112 = 55;
	int64_t t27 = -15LL;

	t27 = (x109/((x110^x111)|x112));

	if (t27 != 4294979198LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint64_t x113 = 7012435355495968LLU;
	int64_t x114 = INT64_MAX;
	uint32_t x115 = 266265U;
	uint64_t t28 = 554622LLU;

	t28 = (x113/((x114^x115)|x116));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x117 = INT32_MIN;
	volatile int16_t x119 = -1522;
	uint32_t x120 = 14878754U;
	volatile uint32_t t29 = 882U;

	t29 = (x117/((x118^x119)|x120));

	if (t29 != 0U) { NG(); } else { ; }
	
}

void f30(void) {
	static uint8_t x121 = 51U;
	static int8_t x123 = -1;
	int8_t x124 = -1;
	volatile int32_t t30 = 3816;

	t30 = (x121/((x122^x123)|x124));

	if (t30 != -51) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x125 = INT64_MIN;
	uint32_t x126 = UINT32_MAX;
	volatile uint8_t x127 = 1U;
	static uint64_t x128 = 3LLU;
	volatile uint64_t t31 = 69647LLU;

	t31 = (x125/((x126^x127)|x128));

	if (t31 != 2147483648LLU) { NG(); } else { ; }
	
}

void f32(void) {
	static uint32_t x130 = UINT32_MAX;
	int8_t x131 = -1;
	volatile int16_t x132 = -1;
	static volatile uint32_t t32 = 12535U;

	t32 = (x129/((x130^x131)|x132));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	int32_t x134 = INT32_MIN;
	static int8_t x136 = INT8_MIN;

	t33 = (x133/((x134^x135)|x136));

	if (t33 != 128) { NG(); } else { ; }
	
}

void f34(void) {
	uint16_t x138 = UINT16_MAX;
	uint16_t x139 = 308U;
	int32_t x140 = 1;
	int32_t t34 = 9454;

	t34 = (x137/((x138^x139)|x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int64_t x141 = 2248738087348LL;
	static int64_t x142 = INT64_MIN;
	volatile int8_t x143 = -1;
	static int16_t x144 = INT16_MIN;
	static volatile int64_t t35 = -545770517786126988LL;

	t35 = (x141/((x142^x143)|x144));

	if (t35 != -2248738087348LL) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x145 = INT8_MIN;
	uint16_t x146 = 0U;
	int32_t x147 = -3;
	int32_t x148 = -20378;
	int32_t t36 = 286442522;

	t36 = (x145/((x146^x147)|x148));

	if (t36 != 128) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -997;
	static uint64_t x150 = UINT64_MAX;
	static volatile int64_t x151 = 19270069980460LL;
	volatile int64_t x152 = -1LL;
	uint64_t t37 = 116090128664680611LLU;

	t37 = (x149/((x150^x151)|x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x153 = 184U;
	volatile uint64_t x154 = 3446355LLU;
	static int8_t x155 = INT8_MAX;
	uint8_t x156 = UINT8_MAX;
	uint64_t t38 = 436961420846LLU;

	t38 = (x153/((x154^x155)|x156));

	if (t38 != 0LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x161 = 161;
	int16_t x162 = -1;
	static uint64_t x163 = 4049343LLU;

	t39 = (x161/((x162^x163)|x164));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x165 = -1;
	int8_t x166 = INT8_MIN;
	static volatile int64_t x167 = INT64_MIN;
	volatile int32_t x168 = -1;
	volatile int64_t t40 = 4281183293LL;

	t40 = (x165/((x166^x167)|x168));

	if (t40 != 1LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x169 = 1082U;
	static uint16_t x170 = 3U;
	int8_t x171 = -4;
	int32_t x172 = -218476803;

	t41 = (x169/((x170^x171)|x172));

	if (t41 != 0U) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x174 = -1;
	volatile uint16_t x175 = 5U;
	static int64_t t42 = -160690657LL;

	t42 = (x173/((x174^x175)|x176));

	if (t42 != -42LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int64_t x185 = INT64_MAX;
	int16_t x186 = 3;
	int16_t x187 = INT16_MIN;
	volatile int64_t t43 = -3559570251149430LL;

	t43 = (x185/((x186^x187)|x188));

	if (t43 != 2147483648LL) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x189 = 577680U;
	static int8_t x190 = INT8_MIN;
	int16_t x191 = INT16_MIN;
	int32_t x192 = -233117548;
	uint32_t t44 = 176U;

	t44 = (x189/((x190^x191)|x192));

	if (t44 != 0U) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x193 = INT32_MIN;
	uint64_t x194 = 78198260088725998LLU;
	int16_t x195 = -1;
	static int32_t x196 = INT32_MIN;
	volatile uint64_t t45 = 6LLU;

	t45 = (x193/((x194^x195)|x196));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile uint64_t x197 = UINT64_MAX;
	int32_t x198 = INT32_MAX;
	int8_t x199 = 1;
	static volatile int8_t x200 = 0;
	volatile uint64_t t46 = 1652724382575281349LLU;

	t46 = (x197/((x198^x199)|x200));

	if (t46 != 8589934600LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x201 = INT64_MIN;
	uint8_t x202 = UINT8_MAX;
	int16_t x203 = INT16_MAX;
	uint32_t x204 = UINT32_MAX;
	int64_t t47 = -54242909509234LL;

	t47 = (x201/((x202^x203)|x204));

	if (t47 != -2147483648LL) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x205 = 4;
	int8_t x208 = 61;

	t48 = (x205/((x206^x207)|x208));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x209 = 3;
	uint8_t x210 = 33U;
	static int32_t x211 = 1750;
	int16_t x212 = INT16_MAX;
	volatile int32_t t49 = -83713;

	t49 = (x209/((x210^x211)|x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x213 = -2478;
	int16_t x214 = -777;
	volatile uint8_t x216 = UINT8_MAX;
	static volatile int32_t t50 = -2;

	t50 = (x213/((x214^x215)|x216));

	if (t50 != -2) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x217 = INT64_MIN;
	int16_t x218 = INT16_MIN;
	static int32_t x219 = -245;
	int32_t x220 = INT32_MIN;
	volatile int64_t t51 = -15412773LL;

	t51 = (x217/((x218^x219)|x220));

	if (t51 != 4295032342LL) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x221 = -1;
	int16_t x222 = -1;
	int8_t x223 = 3;
	uint8_t x224 = 46U;
	volatile int32_t t52 = 5216248;

	t52 = (x221/((x222^x223)|x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint32_t x225 = UINT32_MAX;
	uint32_t x226 = 203949057U;
	int32_t x227 = INT32_MAX;
	int32_t x228 = INT32_MIN;
	volatile uint32_t t53 = 7U;

	t53 = (x225/((x226^x227)|x228));

	if (t53 != 1U) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int16_t x229 = INT16_MIN;
	uint64_t x230 = UINT64_MAX;
	uint32_t x231 = 3089383U;
	int32_t x232 = 357652226;
	uint64_t t54 = 259987521LLU;

	t54 = (x229/((x230^x231)|x232));

	if (t54 != 1LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int64_t x233 = INT64_MAX;
	int8_t x234 = INT8_MAX;
	int32_t x235 = INT32_MIN;
	static int32_t x236 = INT32_MIN;
	int64_t t55 = -587076440LL;

	t55 = (x233/((x234^x235)|x236));

	if (t55 != -4294967550LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x237 = 11LL;
	int32_t x239 = INT32_MIN;
	volatile uint64_t t56 = 2253LLU;

	t56 = (x237/((x238^x239)|x240));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x241 = INT64_MIN;
	uint64_t x242 = 1987955LLU;
	volatile uint64_t x243 = UINT64_MAX;
	int64_t x244 = INT64_MIN;
	uint64_t t57 = 1485037648430988727LLU;

	t57 = (x241/((x242^x243)|x244));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x245 = INT64_MIN;
	int16_t x246 = INT16_MAX;
	uint64_t x247 = UINT64_MAX;
	static int32_t x248 = -1;
	uint64_t t58 = 1832045843411019152LLU;

	t58 = (x245/((x246^x247)|x248));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x249 = INT32_MIN;
	int8_t x250 = 20;
	uint16_t x251 = 0U;
	int32_t t59 = 28003389;

	t59 = (x249/((x250^x251)|x252));

	if (t59 != -1) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x253 = -1;
	int64_t x254 = INT64_MIN;
	uint32_t x256 = UINT32_MAX;
	volatile int64_t t60 = -931679360583457818LL;

	t60 = (x253/((x254^x255)|x256));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x257 = -1;
	uint8_t x258 = 8U;
	static uint16_t x260 = 4U;
	int32_t t61 = 14909;

	t61 = (x257/((x258^x259)|x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x261 = INT16_MAX;
	static int32_t x262 = INT32_MIN;
	int32_t x263 = 781528;
	uint16_t x264 = 336U;
	int32_t t62 = 44881929;

	t62 = (x261/((x262^x263)|x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x269 = INT64_MAX;
	static uint16_t x270 = 27U;
	uint32_t x271 = 25879U;
	int32_t x272 = INT32_MIN;
	int64_t t63 = -177425080038034LL;

	t63 = (x269/((x270^x271)|x272));

	if (t63 != 4294915560LL) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x273 = UINT64_MAX;
	uint16_t x275 = UINT16_MAX;
	int64_t x276 = 4LL;
	uint64_t t64 = 23144684497435161LLU;

	t64 = (x273/((x274^x275)|x276));

	if (t64 != 1LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = INT16_MIN;
	uint64_t x278 = 658604214LLU;
	int16_t x279 = INT16_MAX;
	int16_t x280 = INT16_MIN;
	volatile uint64_t t65 = 35666461116698LLU;

	t65 = (x277/((x278^x279)|x280));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	static int8_t x281 = -1;
	static int16_t x282 = -1;
	static volatile uint8_t x283 = UINT8_MAX;
	int16_t x284 = INT16_MIN;
	volatile int32_t t66 = 27;

	t66 = (x281/((x282^x283)|x284));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x285 = 1U;
	static int16_t x286 = INT16_MAX;
	int64_t x288 = -1453287LL;
	static int64_t t67 = 1LL;

	t67 = (x285/((x286^x287)|x288));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x289 = -4;
	static int64_t x291 = -98118007575984LL;
	static uint64_t t68 = 8277LLU;

	t68 = (x289/((x290^x291)|x292));

	if (t68 != 1LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x293 = INT64_MIN;
	volatile uint16_t x295 = UINT16_MAX;
	volatile int16_t x296 = -122;
	int64_t t69 = -372095481LL;

	t69 = (x293/((x294^x295)|x296));

	if (t69 != 75601410138153900LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = 6334;
	volatile int8_t x298 = INT8_MIN;
	uint8_t x299 = UINT8_MAX;
	uint32_t t70 = 681U;

	t70 = (x297/((x298^x299)|x300));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x302 = 38062632081597LL;
	int8_t x303 = INT8_MIN;
	volatile int64_t t71 = -2420698126LL;

	t71 = (x301/((x302^x303)|x304));

	if (t71 != 3266LL) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x306 = INT64_MAX;
	int32_t x307 = INT32_MAX;
	static int16_t x308 = INT16_MIN;
	int64_t t72 = 23206LL;

	t72 = (x305/((x306^x307)|x308));

	if (t72 != 281474976710656LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x310 = 60574196U;
	static uint8_t x311 = 110U;
	int32_t x312 = -255976147;
	int64_t t73 = -8LL;

	t73 = (x309/((x310^x311)|x312));

	if (t73 != -2255467521LL) { NG(); } else { ; }
	
}

void f74(void) {
	static int64_t x313 = 374060715058172145LL;
	static volatile uint32_t x314 = 2U;
	int32_t x316 = -1;
	int64_t t74 = 3006400LL;

	t74 = (x313/((x314^x315)|x316));

	if (t74 != 87092797LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int32_t x317 = INT32_MIN;
	int16_t x318 = INT16_MIN;
	static volatile int32_t x319 = INT32_MIN;
	int16_t x320 = INT16_MAX;
	int32_t t75 = 403380;

	t75 = (x317/((x318^x319)|x320));

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x322 = 2076750379LLU;
	int16_t x323 = 112;
	uint64_t t76 = 158699LLU;

	t76 = (x321/((x322^x323)|x324));

	if (t76 != 8882504047LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x325 = INT16_MIN;
	int16_t x326 = -3;
	volatile int32_t x327 = -1;
	uint16_t x328 = 7983U;
	int32_t t77 = 155411;

	t77 = (x325/((x326^x327)|x328));

	if (t77 != -4) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = INT32_MAX;
	volatile int32_t x330 = INT32_MIN;
	int8_t x331 = INT8_MIN;
	int16_t x332 = -1;

	t78 = (x329/((x330^x331)|x332));

	if (t78 != -2147483647) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = INT64_MAX;
	static int32_t x334 = 361;
	static uint64_t x335 = 258677473LLU;
	int8_t x336 = -1;
	uint64_t t79 = 14222346266231LLU;

	t79 = (x333/((x334^x335)|x336));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x338 = -2;
	int8_t x339 = INT8_MIN;
	volatile uint16_t x340 = 1255U;
	volatile int32_t t80 = -12;

	t80 = (x337/((x338^x339)|x340));

	if (t80 != 51) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x341 = 596U;
	volatile int64_t x342 = -1LL;
	volatile int8_t x343 = INT8_MIN;
	static int32_t x344 = INT32_MIN;
	static volatile int64_t t81 = 17456621592891381LL;

	t81 = (x341/((x342^x343)|x344));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int32_t x346 = INT32_MIN;
	int8_t x347 = INT8_MIN;
	int16_t x348 = -1;
	static int32_t t82 = 93;

	t82 = (x345/((x346^x347)|x348));

	if (t82 != -65535) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x349 = INT32_MIN;
	int16_t x350 = 1;
	volatile uint32_t x351 = UINT32_MAX;
	uint64_t x352 = UINT64_MAX;
	volatile uint64_t t83 = 3LLU;

	t83 = (x349/((x350^x351)|x352));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x353 = -15899473040LL;
	uint64_t x354 = 25908175375064234LLU;
	static uint64_t x355 = 188878LLU;
	int32_t x356 = INT32_MIN;
	volatile uint64_t t84 = 2501209669087LLU;

	t84 = (x353/((x354^x355)|x356));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile uint8_t x357 = 18U;
	int16_t x358 = INT16_MIN;
	static int8_t x359 = -1;
	volatile int8_t x360 = INT8_MIN;
	int32_t t85 = 27213;

	t85 = (x357/((x358^x359)|x360));

	if (t85 != -18) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x361 = 2U;
	int32_t x362 = INT32_MIN;
	static int16_t x363 = -9;
	uint8_t x364 = 25U;
	int32_t t86 = -424585;

	t86 = (x361/((x362^x363)|x364));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int32_t x365 = INT32_MIN;
	int8_t x366 = 10;
	uint8_t x367 = 8U;
	volatile int64_t x368 = INT64_MIN;

	t87 = (x365/((x366^x367)|x368));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x370 = -1;
	int16_t x371 = INT16_MAX;
	int16_t x372 = -1260;
	int64_t t88 = -3428001624159772437LL;

	t88 = (x369/((x370^x371)|x372));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int32_t x373 = INT32_MIN;
	int16_t x376 = 39;
	int32_t t89 = 11;

	t89 = (x373/((x374^x375)|x376));

	if (t89 != 29417584) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x377 = -1;
	int16_t x378 = -1;
	int16_t x379 = INT16_MAX;
	volatile int64_t x380 = -1LL;
	volatile int64_t t90 = 6663658894596LL;

	t90 = (x377/((x378^x379)|x380));

	if (t90 != 1LL) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint8_t x381 = UINT8_MAX;
	uint8_t x382 = 23U;
	int8_t x383 = 3;
	int16_t x384 = INT16_MAX;
	int32_t t91 = -28898;

	t91 = (x381/((x382^x383)|x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x385 = -155521;
	volatile int32_t x386 = -1;
	static uint32_t x387 = 6672079U;
	volatile uint16_t x388 = 1527U;

	t92 = (x385/((x386^x387)|x388));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x389 = INT32_MAX;
	int64_t x390 = INT64_MAX;
	uint32_t x391 = 1497509U;
	volatile int32_t x392 = INT32_MIN;
	volatile int64_t t93 = 4862713627LL;

	t93 = (x389/((x390^x391)|x392));

	if (t93 != -1434LL) { NG(); } else { ; }
	
}

void f94(void) {
	static int16_t x393 = -1;
	int16_t x394 = 11552;
	int32_t x395 = INT32_MIN;
	static int32_t t94 = -5;

	t94 = (x393/((x394^x395)|x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x397 = -11453LL;
	static int8_t x398 = INT8_MAX;
	volatile int8_t x400 = INT8_MIN;
	volatile uint64_t t95 = 6635LLU;

	t95 = (x397/((x398^x399)|x400));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x402 = 12;
	int64_t x404 = INT64_MIN;

	t96 = (x401/((x402^x403)|x404));

	if (t96 != 0LL) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x405 = -1;
	static int16_t x406 = 85;
	uint8_t x407 = 0U;
	uint32_t x408 = UINT32_MAX;
	uint32_t t97 = 1990613U;

	t97 = (x405/((x406^x407)|x408));

	if (t97 != 1U) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x409 = -194;
	static int64_t x411 = INT64_MAX;
	volatile int64_t x412 = 182526093870517LL;
	int64_t t98 = -89970876926LL;

	t98 = (x409/((x410^x411)|x412));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x413 = 487418920201005LL;
	static uint8_t x414 = 105U;
	uint16_t x416 = 26403U;
	volatile int64_t t99 = 72835746426LL;

	t99 = (x413/((x414^x415)|x416));

	if (t99 != 14908056895LL) { NG(); } else { ; }
	
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

