#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x3 = -398;
int32_t x12 = INT32_MIN;
uint8_t x13 = 1U;
volatile int16_t x21 = -155;
int32_t x29 = 0;
uint32_t x32 = 439U;
volatile uint16_t x33 = 1U;
static uint16_t x35 = 15137U;
uint32_t t10 = 21U;
int32_t x55 = -1178667;
uint16_t x60 = 87U;
uint16_t x64 = UINT16_MAX;
volatile int64_t x70 = -154549603036769LL;
uint16_t x71 = UINT16_MAX;
uint32_t x73 = UINT32_MAX;
int32_t x75 = -190548100;
int32_t x87 = INT32_MIN;
static int32_t t21 = -19857;
uint8_t x90 = UINT8_MAX;
volatile int32_t x94 = -1;
uint64_t x103 = 377LLU;
int16_t x106 = 8540;
static int16_t x119 = INT16_MIN;
static int64_t x134 = INT64_MIN;
uint8_t x138 = 19U;
volatile int8_t x140 = INT8_MAX;
int32_t x141 = -1;
uint8_t x145 = 1U;
static uint8_t x152 = 20U;
volatile uint8_t x153 = UINT8_MAX;
int8_t x165 = INT8_MIN;
volatile uint16_t x166 = UINT16_MAX;
int8_t x169 = INT8_MIN;
int32_t x175 = -8249;
uint32_t x178 = 25898U;
volatile uint8_t x179 = UINT8_MAX;
static int32_t x183 = INT32_MIN;
int32_t t45 = -323;
static volatile uint8_t x199 = 43U;
static int16_t x206 = INT16_MIN;
int16_t x208 = INT16_MAX;
uint32_t x211 = 6U;
int16_t x220 = INT16_MIN;
int32_t t54 = 1804;
int16_t x227 = 48;
int64_t x230 = INT64_MAX;
int16_t x235 = INT16_MIN;
int16_t x239 = -1;
static int16_t x240 = -1;
static int8_t x246 = -1;
int16_t x253 = 168;
int32_t t66 = 947444887;
int8_t x275 = INT8_MIN;
uint64_t x282 = 6LLU;
volatile int32_t x288 = INT32_MIN;
static int64_t x290 = 13LL;
uint8_t x294 = 2U;
int64_t x299 = INT64_MAX;
volatile int16_t x303 = -1;
int32_t x304 = INT32_MIN;
uint32_t x305 = 3845U;
volatile int8_t x312 = INT8_MIN;
volatile uint64_t x315 = 3194LLU;
int64_t x332 = -1LL;
volatile uint8_t x333 = 1U;
int64_t x335 = INT64_MIN;
volatile uint16_t x343 = UINT16_MAX;
int32_t x347 = INT32_MIN;
volatile int64_t t86 = 1815742861LL;
int8_t x359 = INT8_MIN;
volatile int64_t t91 = 213LL;
volatile uint32_t t92 = 1933586U;
static uint8_t x378 = 25U;
static int32_t x384 = INT32_MAX;
int64_t x389 = -5055LL;
volatile uint16_t x393 = 14U;
uint16_t x396 = UINT16_MAX;
static volatile int16_t x397 = INT16_MAX;


void f0(void) {
	static int16_t x1 = INT16_MIN;
	int16_t x2 = INT16_MIN;
	int16_t x4 = INT16_MIN;
	int32_t t0 = -4054088;

	t0 = ((x1<x2)&(x3^x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int64_t x6 = INT64_MIN;
	volatile int16_t x7 = INT16_MIN;
	uint16_t x8 = 1682U;
	int32_t t1 = 404614355;

	t1 = ((x5<x6)&(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = INT16_MAX;
	static uint16_t x10 = UINT16_MAX;
	static int8_t x11 = -1;
	int32_t t2 = 5950981;

	t2 = ((x9<x10)&(x11^x12));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	uint64_t x14 = 4LLU;
	volatile int8_t x15 = INT8_MAX;
	int32_t x16 = -1;
	volatile int32_t t3 = -47720;

	t3 = ((x13<x14)&(x15^x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -1;
	int16_t x18 = -13;
	int64_t x19 = INT64_MIN;
	int16_t x20 = -676;
	int64_t t4 = 117295LL;

	t4 = ((x17<x18)&(x19^x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x22 = 0U;
	static int32_t x23 = INT32_MAX;
	uint16_t x24 = 1U;
	int32_t t5 = -242238235;

	t5 = ((x21<x22)&(x23^x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 1LL;
	uint8_t x26 = UINT8_MAX;
	static int8_t x27 = INT8_MIN;
	volatile uint64_t x28 = 38237235312011LLU;
	uint64_t t6 = 4965966084386LLU;

	t6 = ((x25<x26)&(x27^x28));

	if (t6 != 1LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x30 = INT16_MIN;
	int32_t x31 = INT32_MIN;
	uint32_t t7 = 426469936U;

	t7 = ((x29<x30)&(x31^x32));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x34 = -1;
	static int16_t x36 = 9679;
	int32_t t8 = -490;

	t8 = ((x33<x34)&(x35^x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	int32_t x38 = INT32_MAX;
	uint32_t x39 = 22126693U;
	int8_t x40 = INT8_MIN;
	uint32_t t9 = 740900004U;

	t9 = ((x37<x38)&(x39^x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = 939166505365363485LLU;
	int32_t x42 = INT32_MAX;
	uint8_t x43 = 0U;
	static uint32_t x44 = 237362U;

	t10 = ((x41<x42)&(x43^x44));

	if (t10 != 0U) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = 1;
	volatile int32_t x46 = 76419647;
	int32_t x47 = -882447212;
	int64_t x48 = INT64_MIN;
	volatile int64_t t11 = 190LL;

	t11 = ((x45<x46)&(x47^x48));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	uint16_t x50 = 358U;
	uint64_t x51 = 40444214LLU;
	static int64_t x52 = 805346580747LL;
	uint64_t t12 = 216398844600LLU;

	t12 = ((x49<x50)&(x51^x52));

	if (t12 != 1LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MIN;
	static uint16_t x54 = 1475U;
	int64_t x56 = INT64_MIN;
	int64_t t13 = -1LL;

	t13 = ((x53<x54)&(x55^x56));

	if (t13 != 1LL) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x57 = INT32_MAX;
	volatile uint32_t x58 = UINT32_MAX;
	volatile uint64_t x59 = UINT64_MAX;
	volatile uint64_t t14 = 204LLU;

	t14 = ((x57<x58)&(x59^x60));

	if (t14 != 0LLU) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int16_t x61 = -2901;
	uint32_t x62 = 99117U;
	int8_t x63 = INT8_MIN;
	volatile int32_t t15 = 1;

	t15 = ((x61<x62)&(x63^x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = UINT8_MAX;
	static int64_t x66 = -1LL;
	uint16_t x67 = 0U;
	int16_t x68 = -1;
	int32_t t16 = 84805470;

	t16 = ((x65<x66)&(x67^x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x69 = UINT32_MAX;
	static uint16_t x72 = 5U;
	volatile int32_t t17 = -2;

	t17 = ((x69<x70)&(x71^x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	static uint8_t x74 = UINT8_MAX;
	int8_t x76 = INT8_MAX;
	int32_t t18 = -10;

	t18 = ((x73<x74)&(x75^x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int16_t x77 = INT16_MAX;
	int32_t x78 = -1;
	uint32_t x79 = UINT32_MAX;
	volatile int8_t x80 = -6;
	volatile uint32_t t19 = 1833009097U;

	t19 = ((x77<x78)&(x79^x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = INT32_MIN;
	static uint8_t x82 = 16U;
	int32_t x83 = -111182803;
	int8_t x84 = -1;
	volatile int32_t t20 = 1291;

	t20 = ((x81<x82)&(x83^x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x85 = INT16_MAX;
	int16_t x86 = INT16_MAX;
	int8_t x88 = INT8_MIN;

	t21 = ((x85<x86)&(x87^x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = INT8_MAX;
	static uint32_t x91 = 39U;
	volatile uint16_t x92 = 1282U;
	volatile uint32_t t22 = 3556267U;

	t22 = ((x89<x90)&(x91^x92));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MAX;
	int8_t x95 = INT8_MIN;
	static int32_t x96 = -1;
	volatile int32_t t23 = 620;

	t23 = ((x93<x94)&(x95^x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static uint8_t x97 = 78U;
	uint32_t x98 = UINT32_MAX;
	volatile uint64_t x99 = UINT64_MAX;
	volatile int32_t x100 = INT32_MIN;
	static uint64_t t24 = 13LLU;

	t24 = ((x97<x98)&(x99^x100));

	if (t24 != 1LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = INT32_MIN;
	int8_t x102 = -1;
	static int16_t x104 = 3539;
	volatile uint64_t t25 = 16597744248398364LLU;

	t25 = ((x101<x102)&(x103^x104));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int64_t x105 = INT64_MAX;
	volatile uint8_t x107 = UINT8_MAX;
	int64_t x108 = -1LL;
	volatile int64_t t26 = -19938081LL;

	t26 = ((x105<x106)&(x107^x108));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x109 = 2;
	int64_t x110 = -9888600330LL;
	int8_t x111 = INT8_MAX;
	int64_t x112 = 0LL;
	int64_t t27 = -14516460883418LL;

	t27 = ((x109<x110)&(x111^x112));

	if (t27 != 0LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x113 = -33;
	volatile uint8_t x114 = UINT8_MAX;
	int64_t x115 = -1860938532LL;
	static volatile int64_t x116 = 8866524114595LL;
	volatile int64_t t28 = -63787160267LL;

	t28 = ((x113<x114)&(x115^x116));

	if (t28 != 1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x117 = INT8_MIN;
	uint32_t x118 = 17758U;
	int8_t x120 = INT8_MIN;
	int32_t t29 = 76425993;

	t29 = ((x117<x118)&(x119^x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	uint16_t x122 = UINT16_MAX;
	uint16_t x123 = 12U;
	int64_t x124 = 13LL;
	static volatile int64_t t30 = -1288400011423LL;

	t30 = ((x121<x122)&(x123^x124));

	if (t30 != 1LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x125 = UINT32_MAX;
	int32_t x126 = INT32_MAX;
	static int64_t x127 = 1735843216049LL;
	uint8_t x128 = UINT8_MAX;
	volatile int64_t t31 = 110897344129714LL;

	t31 = ((x125<x126)&(x127^x128));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	static int8_t x130 = -1;
	static uint32_t x131 = UINT32_MAX;
	int16_t x132 = -25;
	uint32_t t32 = 1U;

	t32 = ((x129<x130)&(x131^x132));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	static int64_t x135 = INT64_MIN;
	uint8_t x136 = UINT8_MAX;
	volatile int64_t t33 = -1017LL;

	t33 = ((x133<x134)&(x135^x136));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = INT64_MIN;
	static int16_t x139 = INT16_MIN;
	static int32_t t34 = -898716;

	t34 = ((x137<x138)&(x139^x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x142 = 4605603U;
	uint16_t x143 = 6870U;
	static int64_t x144 = -1LL;
	volatile int64_t t35 = -375451534417LL;

	t35 = ((x141<x142)&(x143^x144));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x146 = 110LLU;
	int64_t x147 = -20639380711974826LL;
	int32_t x148 = 84472939;
	int64_t t36 = 7346014LL;

	t36 = ((x145<x146)&(x147^x148));

	if (t36 != 1LL) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x149 = UINT32_MAX;
	volatile int8_t x150 = INT8_MIN;
	uint64_t x151 = 346213080081LLU;
	static uint64_t t37 = 31275978290LLU;

	t37 = ((x149<x150)&(x151^x152));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x154 = INT16_MIN;
	volatile int32_t x155 = -344;
	static int8_t x156 = -1;
	int32_t t38 = 349;

	t38 = ((x153<x154)&(x155^x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint32_t x157 = UINT32_MAX;
	int16_t x158 = -1;
	static int32_t x159 = INT32_MIN;
	int64_t x160 = -14553105LL;
	static int64_t t39 = 358172650LL;

	t39 = ((x157<x158)&(x159^x160));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	int32_t x162 = -1;
	int8_t x163 = -9;
	int8_t x164 = INT8_MIN;
	static volatile int32_t t40 = -2206149;

	t40 = ((x161<x162)&(x163^x164));

	if (t40 != 1) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x167 = -5;
	static uint64_t x168 = 59LLU;
	uint64_t t41 = 2171486681895572LLU;

	t41 = ((x165<x166)&(x167^x168));

	if (t41 != 0LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x170 = INT8_MIN;
	static uint8_t x171 = 13U;
	uint32_t x172 = 16U;
	volatile uint32_t t42 = 35263U;

	t42 = ((x169<x170)&(x171^x172));

	if (t42 != 0U) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = INT64_MIN;
	uint8_t x174 = 15U;
	uint16_t x176 = 225U;
	volatile int32_t t43 = -101666;

	t43 = ((x173<x174)&(x175^x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x177 = UINT8_MAX;
	static volatile int64_t x180 = -1LL;
	volatile int64_t t44 = -2LL;

	t44 = ((x177<x178)&(x179^x180));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	volatile int64_t x181 = INT64_MAX;
	static int32_t x182 = INT32_MIN;
	int32_t x184 = -1;

	t45 = ((x181<x182)&(x183^x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x185 = UINT8_MAX;
	volatile int64_t x186 = 27147731097LL;
	int64_t x187 = -1LL;
	int64_t x188 = -3576LL;
	volatile int64_t t46 = 0LL;

	t46 = ((x185<x186)&(x187^x188));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	static volatile int8_t x189 = INT8_MIN;
	static volatile int64_t x190 = INT64_MAX;
	int64_t x191 = INT64_MAX;
	static uint32_t x192 = 3U;
	volatile int64_t t47 = 1454706748412575LL;

	t47 = ((x189<x190)&(x191^x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x193 = INT32_MIN;
	int8_t x194 = -1;
	uint8_t x195 = 2U;
	volatile uint16_t x196 = UINT16_MAX;
	static volatile int32_t t48 = 10;

	t48 = ((x193<x194)&(x195^x196));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x197 = INT32_MIN;
	int64_t x198 = INT64_MIN;
	int8_t x200 = INT8_MAX;
	volatile int32_t t49 = -8;

	t49 = ((x197<x198)&(x199^x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x201 = 51U;
	static uint32_t x202 = 32304196U;
	volatile int64_t x203 = -757620540692LL;
	uint8_t x204 = 6U;
	static volatile int64_t t50 = 2540LL;

	t50 = ((x201<x202)&(x203^x204));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint8_t x205 = 5U;
	volatile int16_t x207 = INT16_MIN;
	static int32_t t51 = -33088756;

	t51 = ((x205<x206)&(x207^x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x209 = 5537766772472LL;
	int8_t x210 = 1;
	static int8_t x212 = 3;
	volatile uint32_t t52 = 102706U;

	t52 = ((x209<x210)&(x211^x212));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 470U;
	int64_t x214 = INT64_MAX;
	static int32_t x215 = INT32_MAX;
	uint8_t x216 = 22U;
	static int32_t t53 = -3555;

	t53 = ((x213<x214)&(x215^x216));

	if (t53 != 1) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int64_t x217 = INT64_MIN;
	static int8_t x218 = 0;
	int8_t x219 = INT8_MIN;

	t54 = ((x217<x218)&(x219^x220));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -1;
	int16_t x222 = 0;
	int16_t x223 = 2;
	volatile int64_t x224 = 1044LL;
	volatile int64_t t55 = 15879LL;

	t55 = ((x221<x222)&(x223^x224));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x225 = INT32_MIN;
	int8_t x226 = -2;
	int8_t x228 = INT8_MIN;
	int32_t t56 = -1;

	t56 = ((x225<x226)&(x227^x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = INT16_MIN;
	uint64_t x231 = 2673482990LLU;
	volatile int16_t x232 = INT16_MIN;
	uint64_t t57 = 830675LLU;

	t57 = ((x229<x230)&(x231^x232));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int8_t x233 = INT8_MIN;
	volatile uint64_t x234 = UINT64_MAX;
	int16_t x236 = INT16_MAX;
	volatile int32_t t58 = 730129601;

	t58 = ((x233<x234)&(x235^x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x237 = INT64_MIN;
	uint8_t x238 = 1U;
	int32_t t59 = 7004364;

	t59 = ((x237<x238)&(x239^x240));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x241 = 0;
	int32_t x242 = -4;
	volatile uint32_t x243 = 229574424U;
	int8_t x244 = -38;
	uint32_t t60 = 1009U;

	t60 = ((x241<x242)&(x243^x244));

	if (t60 != 0U) { NG(); } else { ; }
	
}

void f61(void) {
	uint16_t x245 = UINT16_MAX;
	uint16_t x247 = UINT16_MAX;
	int32_t x248 = 39660913;
	int32_t t61 = -52109;

	t61 = ((x245<x246)&(x247^x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint8_t x249 = 3U;
	volatile uint16_t x250 = 170U;
	int8_t x251 = -1;
	int8_t x252 = -1;
	int32_t t62 = -3946919;

	t62 = ((x249<x250)&(x251^x252));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x254 = UINT8_MAX;
	uint64_t x255 = UINT64_MAX;
	int64_t x256 = -29384383LL;
	volatile uint64_t t63 = 59386115LLU;

	t63 = ((x253<x254)&(x255^x256));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x257 = INT64_MIN;
	int8_t x258 = 0;
	static volatile int16_t x259 = 374;
	volatile int8_t x260 = -24;
	int32_t t64 = -4557610;

	t64 = ((x257<x258)&(x259^x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	int64_t x262 = -13093384649876LL;
	int16_t x263 = -1;
	int16_t x264 = INT16_MIN;
	volatile int32_t t65 = -31;

	t65 = ((x261<x262)&(x263^x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x265 = 280U;
	int16_t x266 = INT16_MAX;
	int32_t x267 = -1;
	int16_t x268 = -1;

	t66 = ((x265<x266)&(x267^x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint64_t x269 = 35822LLU;
	int8_t x270 = INT8_MAX;
	volatile int16_t x271 = -1;
	static int32_t x272 = INT32_MAX;
	volatile int32_t t67 = 4595232;

	t67 = ((x269<x270)&(x271^x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = 227U;
	int32_t x274 = INT32_MIN;
	volatile int32_t x276 = INT32_MIN;
	int32_t t68 = -223;

	t68 = ((x273<x274)&(x275^x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = 14693069LLU;
	int32_t x278 = -4;
	int32_t x279 = -3081;
	int16_t x280 = 5;
	volatile int32_t t69 = -668297;

	t69 = ((x277<x278)&(x279^x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x281 = INT32_MIN;
	int16_t x283 = -1;
	volatile int32_t x284 = INT32_MAX;
	volatile int32_t t70 = 110201;

	t70 = ((x281<x282)&(x283^x284));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint64_t x285 = UINT64_MAX;
	volatile int8_t x286 = -44;
	static int8_t x287 = -1;
	int32_t t71 = -187;

	t71 = ((x285<x286)&(x287^x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x289 = 31U;
	uint8_t x291 = 23U;
	volatile int32_t x292 = 6334754;
	static int32_t t72 = 6115593;

	t72 = ((x289<x290)&(x291^x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x293 = INT64_MIN;
	int64_t x295 = INT64_MIN;
	int8_t x296 = 0;
	int64_t t73 = -382LL;

	t73 = ((x293<x294)&(x295^x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x297 = -738;
	static uint32_t x298 = UINT32_MAX;
	int32_t x300 = INT32_MIN;
	volatile int64_t t74 = 7671550699LL;

	t74 = ((x297<x298)&(x299^x300));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint32_t x301 = UINT32_MAX;
	static uint32_t x302 = UINT32_MAX;
	static int32_t t75 = -19347012;

	t75 = ((x301<x302)&(x303^x304));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint32_t x306 = UINT32_MAX;
	int64_t x307 = -1LL;
	static int8_t x308 = INT8_MIN;
	volatile int64_t t76 = -117682409426452LL;

	t76 = ((x305<x306)&(x307^x308));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint64_t x309 = 0LLU;
	int8_t x310 = -1;
	uint16_t x311 = 5U;
	int32_t t77 = -107863;

	t77 = ((x309<x310)&(x311^x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = -1;
	uint32_t x314 = UINT32_MAX;
	int8_t x316 = INT8_MIN;
	uint64_t t78 = 793353518205LLU;

	t78 = ((x313<x314)&(x315^x316));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x317 = 1U;
	volatile int64_t x318 = -26215356LL;
	static volatile int32_t x319 = INT32_MIN;
	int32_t x320 = INT32_MIN;
	int32_t t79 = 0;

	t79 = ((x317<x318)&(x319^x320));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x321 = 4527U;
	volatile int64_t x322 = -1LL;
	static int8_t x323 = INT8_MIN;
	int32_t x324 = -1;
	volatile int32_t t80 = 34277;

	t80 = ((x321<x322)&(x323^x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	int16_t x326 = -1;
	int32_t x327 = 350338;
	uint8_t x328 = UINT8_MAX;
	volatile int32_t t81 = 13;

	t81 = ((x325<x326)&(x327^x328));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static volatile int16_t x329 = INT16_MIN;
	uint16_t x330 = UINT16_MAX;
	int32_t x331 = INT32_MIN;
	volatile int64_t t82 = -775056278528851894LL;

	t82 = ((x329<x330)&(x331^x332));

	if (t82 != 1LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x334 = INT32_MAX;
	int8_t x336 = INT8_MIN;
	volatile int64_t t83 = -16690638303760047LL;

	t83 = ((x333<x334)&(x335^x336));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int16_t x337 = 2;
	int8_t x338 = -8;
	volatile int16_t x339 = INT16_MAX;
	uint64_t x340 = UINT64_MAX;
	uint64_t t84 = 609848701LLU;

	t84 = ((x337<x338)&(x339^x340));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int64_t x341 = -1LL;
	uint8_t x342 = UINT8_MAX;
	int64_t x344 = INT64_MIN;
	volatile int64_t t85 = 44994LL;

	t85 = ((x341<x342)&(x343^x344));

	if (t85 != 1LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 0U;
	uint32_t x346 = UINT32_MAX;
	int64_t x348 = -3LL;

	t86 = ((x345<x346)&(x347^x348));

	if (t86 != 1LL) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x349 = -5;
	static int8_t x350 = 2;
	static int32_t x351 = -1;
	int8_t x352 = INT8_MIN;
	int32_t t87 = 8056978;

	t87 = ((x349<x350)&(x351^x352));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x353 = INT8_MAX;
	volatile int16_t x354 = 11;
	uint64_t x355 = 2082593585729985372LLU;
	volatile int16_t x356 = INT16_MAX;
	volatile uint64_t t88 = 135713LLU;

	t88 = ((x353<x354)&(x355^x356));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = 1998;
	int16_t x358 = -5871;
	uint64_t x360 = 8439905084LLU;
	uint64_t t89 = 139020801955604LLU;

	t89 = ((x357<x358)&(x359^x360));

	if (t89 != 0LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x361 = 7U;
	volatile uint32_t x362 = UINT32_MAX;
	volatile uint32_t x363 = 50352U;
	volatile int16_t x364 = 736;
	static uint32_t t90 = 68U;

	t90 = ((x361<x362)&(x363^x364));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint32_t x365 = 3665012U;
	int8_t x366 = -1;
	uint16_t x367 = UINT16_MAX;
	volatile int64_t x368 = -7751LL;

	t91 = ((x365<x366)&(x367^x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x369 = UINT8_MAX;
	int32_t x370 = -1;
	int16_t x371 = INT16_MIN;
	static uint32_t x372 = 42502U;

	t92 = ((x369<x370)&(x371^x372));

	if (t92 != 0U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int8_t x373 = 0;
	int8_t x374 = INT8_MAX;
	volatile int16_t x375 = -1;
	static int16_t x376 = 14517;
	volatile int32_t t93 = -817;

	t93 = ((x373<x374)&(x375^x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x377 = 0LLU;
	int32_t x379 = 30;
	int64_t x380 = 1271321LL;
	static int64_t t94 = 841LL;

	t94 = ((x377<x378)&(x379^x380));

	if (t94 != 1LL) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x381 = -1;
	volatile int64_t x382 = INT64_MIN;
	volatile int32_t x383 = -1;
	static volatile int32_t t95 = 114467436;

	t95 = ((x381<x382)&(x383^x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x385 = 9;
	volatile uint64_t x386 = UINT64_MAX;
	int32_t x387 = 415986;
	volatile int8_t x388 = INT8_MAX;
	volatile int32_t t96 = 199;

	t96 = ((x385<x386)&(x387^x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = INT8_MIN;
	volatile int64_t x391 = -1LL;
	static volatile uint16_t x392 = UINT16_MAX;
	int64_t t97 = -112106866LL;

	t97 = ((x389<x390)&(x391^x392));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x394 = UINT64_MAX;
	uint32_t x395 = 7U;
	uint32_t t98 = 12321U;

	t98 = ((x393<x394)&(x395^x396));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x398 = INT8_MIN;
	volatile int64_t x399 = INT64_MAX;
	int16_t x400 = INT16_MIN;
	int64_t t99 = 17438LL;

	t99 = ((x397<x398)&(x399^x400));

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

