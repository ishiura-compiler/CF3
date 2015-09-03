#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int32_t x2 = -78155;
int16_t x4 = INT16_MAX;
static volatile int64_t x9 = INT64_MAX;
static uint64_t x16 = 13090160009249762LLU;
static uint64_t t3 = 2945331735199434LLU;
uint32_t x21 = UINT32_MAX;
uint32_t x32 = 34050105U;
static volatile uint32_t t9 = 1718U;
uint64_t x56 = UINT64_MAX;
volatile uint8_t x70 = 2U;
int32_t x71 = INT32_MIN;
uint16_t x73 = 1437U;
int64_t x75 = INT64_MIN;
int8_t x84 = -1;
static uint16_t x85 = 3506U;
int16_t x87 = INT16_MIN;
uint64_t x91 = UINT64_MAX;
int32_t x94 = 174;
static int16_t x96 = 0;
volatile int32_t t21 = 77;
volatile uint64_t x97 = 7062745153507316194LLU;
int64_t x99 = INT64_MIN;
volatile int32_t x100 = INT32_MAX;
int64_t t22 = -155302408071435LL;
volatile uint16_t x105 = UINT16_MAX;
static int16_t x107 = INT16_MIN;
uint16_t x113 = 1U;
static int8_t x115 = 46;
int16_t x116 = INT16_MAX;
static int32_t x117 = INT32_MAX;
uint16_t x122 = UINT16_MAX;
static int8_t x129 = INT8_MIN;
static int64_t t30 = -66670177736054LL;
volatile int32_t t32 = -11602180;
static uint8_t x145 = 60U;
volatile int32_t t34 = 7235941;
uint8_t x153 = UINT8_MAX;
int16_t x159 = -13558;
int16_t x163 = INT16_MAX;
int16_t x165 = -1;
int32_t t38 = -286200;
uint32_t x169 = 87845995U;
uint32_t x171 = UINT32_MAX;
volatile uint32_t t39 = 84U;
int32_t x174 = 2831114;
uint16_t x175 = UINT16_MAX;
int16_t x177 = -11;
int32_t x178 = INT32_MIN;
int16_t x179 = 12;
int8_t x180 = INT8_MIN;
int16_t x184 = INT16_MIN;
int8_t x198 = INT8_MIN;
volatile uint64_t x200 = 1LLU;
uint16_t x216 = 761U;
int16_t x227 = INT16_MAX;
volatile int32_t x234 = INT32_MAX;
static volatile int16_t x238 = INT16_MIN;
uint16_t x246 = 282U;
static int64_t x247 = -19204080766LL;
uint16_t x248 = 125U;
uint32_t x249 = UINT32_MAX;
int64_t t55 = -1079227060744930LL;
int64_t t56 = -1555146108919970550LL;
static int64_t x257 = INT64_MAX;
int64_t x258 = INT64_MAX;
volatile uint8_t x263 = 12U;
volatile uint32_t x264 = 206787U;
uint32_t t58 = 73U;
int32_t x267 = -1;
volatile int64_t x270 = INT64_MIN;
int16_t x272 = INT16_MIN;
static uint32_t x274 = 16610125U;
int8_t x280 = -1;
static int32_t t63 = 15;
int32_t x285 = -1;
static volatile int16_t x290 = 226;
volatile int64_t x294 = INT64_MIN;
uint8_t x295 = UINT8_MAX;
static volatile int32_t x296 = INT32_MIN;
static uint64_t x299 = 447716540LLU;
int64_t x308 = -50132325650311LL;
uint64_t t71 = 16243LLU;
volatile int8_t x323 = INT8_MIN;
int32_t x325 = INT32_MIN;
static int8_t x338 = 1;
int32_t x341 = -207;
static int16_t x370 = INT16_MAX;
volatile int8_t x372 = INT8_MIN;
int64_t x382 = INT64_MIN;
volatile int64_t t85 = 71LL;
uint16_t x385 = UINT16_MAX;
uint64_t x388 = UINT64_MAX;
volatile int16_t x390 = INT16_MIN;
int32_t x398 = -1;
static int64_t t92 = -2241451029LL;
volatile uint16_t x416 = UINT16_MAX;
static volatile int8_t x419 = INT8_MAX;
static uint16_t x420 = UINT16_MAX;
volatile int32_t t94 = -376022;
volatile uint16_t x424 = 455U;
int16_t x427 = 44;
int32_t x432 = 783;
volatile int32_t t97 = -54;
uint64_t t99 = 3378959752LLU;


void f0(void) {
	uint64_t x1 = 74LLU;
	int16_t x3 = 15752;
	static volatile int32_t t0 = -384303397;

	t0 = ((x1==x2)|(x3+x4));

	if (t0 != 48519) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	uint8_t x6 = 3U;
	volatile int64_t x7 = INT64_MIN;
	uint8_t x8 = UINT8_MAX;
	int64_t t1 = 2552184LL;

	t1 = ((x5==x6)|(x7+x8));

	if (t1 != -9223372036854775553LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = -8;
	volatile int64_t x11 = INT64_MAX;
	static int8_t x12 = -2;
	static volatile int64_t t2 = -948486LL;

	t2 = ((x9==x10)|(x11+x12));

	if (t2 != 9223372036854775805LL) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	uint64_t x14 = 777LLU;
	int16_t x15 = INT16_MIN;

	t3 = ((x13==x14)|(x15+x16));

	if (t3 != 13090160009216994LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x22 = 925U;
	uint32_t x23 = 1376365U;
	int8_t x24 = INT8_MIN;
	uint32_t t4 = 3326862U;

	t4 = ((x21==x22)|(x23+x24));

	if (t4 != 1376237U) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x29 = 0;
	uint8_t x30 = UINT8_MAX;
	uint64_t x31 = 16090116LLU;
	uint64_t t5 = 225LLU;

	t5 = ((x29==x30)|(x31+x32));

	if (t5 != 50140221LLU) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x33 = 0;
	int8_t x34 = INT8_MAX;
	int16_t x35 = INT16_MIN;
	int16_t x36 = 23;
	int32_t t6 = 101;

	t6 = ((x33==x34)|(x35+x36));

	if (t6 != -32745) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = 11U;
	int32_t x38 = -18;
	static uint64_t x39 = UINT64_MAX;
	int16_t x40 = INT16_MIN;
	volatile uint64_t t7 = 5346526LLU;

	t7 = ((x37==x38)|(x39+x40));

	if (t7 != 18446744073709518847LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MIN;
	static uint8_t x42 = UINT8_MAX;
	int16_t x43 = INT16_MAX;
	int32_t x44 = -1;
	int32_t t8 = 346;

	t8 = ((x41==x42)|(x43+x44));

	if (t8 != 32766) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = -1;
	uint64_t x46 = 8224173LLU;
	uint32_t x47 = 426U;
	uint32_t x48 = UINT32_MAX;

	t9 = ((x45==x46)|(x47+x48));

	if (t9 != 425U) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x49 = INT16_MIN;
	int32_t x50 = -1;
	int16_t x51 = -1;
	static uint16_t x52 = UINT16_MAX;
	int32_t t10 = -1;

	t10 = ((x49==x50)|(x51+x52));

	if (t10 != 65534) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x53 = 18U;
	volatile int8_t x54 = INT8_MIN;
	static int64_t x55 = INT64_MAX;
	static uint64_t t11 = 2117919323LLU;

	t11 = ((x53==x54)|(x55+x56));

	if (t11 != 9223372036854775806LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x57 = INT64_MAX;
	static int8_t x58 = INT8_MIN;
	int8_t x59 = INT8_MAX;
	volatile int64_t x60 = INT64_MIN;
	int64_t t12 = -6149704377379025LL;

	t12 = ((x57==x58)|(x59+x60));

	if (t12 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x61 = INT8_MIN;
	int16_t x62 = 2006;
	uint32_t x63 = 620U;
	int32_t x64 = 12919;
	volatile uint32_t t13 = 3937133U;

	t13 = ((x61==x62)|(x63+x64));

	if (t13 != 13539U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x65 = -1;
	int8_t x66 = INT8_MIN;
	static int8_t x67 = -1;
	static int8_t x68 = 1;
	volatile int32_t t14 = -15130;

	t14 = ((x65==x66)|(x67+x68));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	uint8_t x69 = 1U;
	int32_t x72 = INT32_MAX;
	volatile int32_t t15 = 214;

	t15 = ((x69==x70)|(x71+x72));

	if (t15 != -1) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x74 = 34570;
	int32_t x76 = INT32_MAX;
	int64_t t16 = -39301241486LL;

	t16 = ((x73==x74)|(x75+x76));

	if (t16 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f17(void) {
	static uint16_t x77 = 5018U;
	static int16_t x78 = -1;
	int16_t x79 = -1;
	int32_t x80 = INT32_MAX;
	volatile int32_t t17 = 38;

	t17 = ((x77==x78)|(x79+x80));

	if (t17 != 2147483646) { NG(); } else { ; }
	
}

void f18(void) {
	static int16_t x81 = INT16_MAX;
	uint32_t x82 = 0U;
	int8_t x83 = INT8_MAX;
	static volatile int32_t t18 = -106786;

	t18 = ((x81==x82)|(x83+x84));

	if (t18 != 126) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x86 = -3;
	uint16_t x88 = 77U;
	int32_t t19 = 1294;

	t19 = ((x85==x86)|(x87+x88));

	if (t19 != -32691) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x89 = INT32_MIN;
	volatile uint32_t x90 = UINT32_MAX;
	static uint8_t x92 = 17U;
	volatile uint64_t t20 = 259389484341LLU;

	t20 = ((x89==x90)|(x91+x92));

	if (t20 != 16LLU) { NG(); } else { ; }
	
}

void f21(void) {
	static volatile int64_t x93 = 120695052787245LL;
	int32_t x95 = -1;

	t21 = ((x93==x94)|(x95+x96));

	if (t21 != -1) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x98 = 29498651687468071LLU;

	t22 = ((x97==x98)|(x99+x100));

	if (t22 != -9223372034707292161LL) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int32_t x106 = -46524;
	int64_t x108 = -1LL;
	volatile int64_t t23 = 4750573LL;

	t23 = ((x105==x106)|(x107+x108));

	if (t23 != -32769LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x109 = INT32_MIN;
	volatile uint8_t x110 = 3U;
	int64_t x111 = -1LL;
	volatile uint64_t x112 = 1551632349LLU;
	uint64_t t24 = 546799883238LLU;

	t24 = ((x109==x110)|(x111+x112));

	if (t24 != 1551632348LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static uint64_t x114 = 561025746113420169LLU;
	int32_t t25 = -221036;

	t25 = ((x113==x114)|(x115+x116));

	if (t25 != 32813) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x118 = 20U;
	int16_t x119 = INT16_MIN;
	int64_t x120 = 6LL;
	int64_t t26 = -298LL;

	t26 = ((x117==x118)|(x119+x120));

	if (t26 != -32762LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile uint16_t x121 = UINT16_MAX;
	int16_t x123 = -1;
	static volatile int16_t x124 = INT16_MIN;
	volatile int32_t t27 = -25;

	t27 = ((x121==x122)|(x123+x124));

	if (t27 != -32769) { NG(); } else { ; }
	
}

void f28(void) {
	static int32_t x125 = INT32_MIN;
	int8_t x126 = 0;
	int8_t x127 = -1;
	static uint8_t x128 = 16U;
	static int32_t t28 = 942834106;

	t28 = ((x125==x126)|(x127+x128));

	if (t28 != 15) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x130 = INT8_MIN;
	static uint16_t x131 = UINT16_MAX;
	uint8_t x132 = 25U;
	volatile int32_t t29 = 664483;

	t29 = ((x129==x130)|(x131+x132));

	if (t29 != 65561) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x133 = -1;
	int64_t x134 = -42684888520219107LL;
	static int64_t x135 = 6LL;
	uint16_t x136 = UINT16_MAX;

	t30 = ((x133==x134)|(x135+x136));

	if (t30 != 65541LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int8_t x137 = INT8_MIN;
	int32_t x138 = 106818;
	uint32_t x139 = 14U;
	volatile int16_t x140 = INT16_MIN;
	volatile uint32_t t31 = 2467U;

	t31 = ((x137==x138)|(x139+x140));

	if (t31 != 4294934542U) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x141 = 53;
	uint8_t x142 = 0U;
	int32_t x143 = INT32_MIN;
	int8_t x144 = 1;

	t32 = ((x141==x142)|(x143+x144));

	if (t32 != -2147483647) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x146 = 2;
	uint32_t x147 = 4145469U;
	static volatile int8_t x148 = INT8_MAX;
	uint32_t t33 = 153658U;

	t33 = ((x145==x146)|(x147+x148));

	if (t33 != 4145596U) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x149 = INT8_MAX;
	int32_t x150 = 33;
	int32_t x151 = INT32_MIN;
	uint8_t x152 = 3U;

	t34 = ((x149==x150)|(x151+x152));

	if (t34 != -2147483645) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x154 = INT32_MAX;
	static int32_t x155 = INT32_MIN;
	int8_t x156 = INT8_MAX;
	volatile int32_t t35 = -7;

	t35 = ((x153==x154)|(x155+x156));

	if (t35 != -2147483521) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x157 = INT16_MIN;
	int16_t x158 = 55;
	int16_t x160 = INT16_MIN;
	volatile int32_t t36 = -7644;

	t36 = ((x157==x158)|(x159+x160));

	if (t36 != -46326) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x161 = 2U;
	static volatile uint8_t x162 = UINT8_MAX;
	int16_t x164 = INT16_MAX;
	volatile int32_t t37 = -1;

	t37 = ((x161==x162)|(x163+x164));

	if (t37 != 65534) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x166 = INT16_MAX;
	volatile uint8_t x167 = 108U;
	static int8_t x168 = 11;

	t38 = ((x165==x166)|(x167+x168));

	if (t38 != 119) { NG(); } else { ; }
	
}

void f39(void) {
	static int16_t x170 = INT16_MIN;
	int8_t x172 = INT8_MIN;

	t39 = ((x169==x170)|(x171+x172));

	if (t39 != 4294967167U) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x173 = 2484U;
	static uint32_t x176 = 1728801U;
	volatile uint32_t t40 = 900994445U;

	t40 = ((x173==x174)|(x175+x176));

	if (t40 != 1794336U) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int32_t t41 = -1143;

	t41 = ((x177==x178)|(x179+x180));

	if (t41 != -116) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x181 = INT32_MIN;
	static int8_t x182 = -7;
	int8_t x183 = -1;
	int32_t t42 = -12191;

	t42 = ((x181==x182)|(x183+x184));

	if (t42 != -32769) { NG(); } else { ; }
	
}

void f43(void) {
	static int64_t x185 = -7769957177369317LL;
	int8_t x186 = -1;
	int32_t x187 = -1;
	int8_t x188 = INT8_MAX;
	static int32_t t43 = -25949;

	t43 = ((x185==x186)|(x187+x188));

	if (t43 != 126) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int64_t x189 = INT64_MIN;
	uint16_t x190 = UINT16_MAX;
	int16_t x191 = INT16_MIN;
	uint16_t x192 = 40U;
	volatile int32_t t44 = -20920;

	t44 = ((x189==x190)|(x191+x192));

	if (t44 != -32728) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x193 = UINT64_MAX;
	int64_t x194 = INT64_MAX;
	static uint32_t x195 = 1565184613U;
	int16_t x196 = 1331;
	volatile uint32_t t45 = 402964U;

	t45 = ((x193==x194)|(x195+x196));

	if (t45 != 1565185944U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x197 = -150;
	uint16_t x199 = 5U;
	static volatile uint64_t t46 = 4881LLU;

	t46 = ((x197==x198)|(x199+x200));

	if (t46 != 6LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x201 = INT32_MIN;
	volatile int8_t x202 = INT8_MIN;
	static int8_t x203 = INT8_MIN;
	int32_t x204 = -500669;
	int32_t t47 = 124;

	t47 = ((x201==x202)|(x203+x204));

	if (t47 != -500797) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x213 = INT8_MIN;
	volatile uint32_t x214 = 2947049U;
	static int8_t x215 = INT8_MIN;
	static volatile int32_t t48 = 61;

	t48 = ((x213==x214)|(x215+x216));

	if (t48 != 633) { NG(); } else { ; }
	
}

void f49(void) {
	static uint64_t x225 = 2606LLU;
	static volatile int16_t x226 = INT16_MIN;
	volatile int16_t x228 = -2;
	static volatile int32_t t49 = 6309262;

	t49 = ((x225==x226)|(x227+x228));

	if (t49 != 32765) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x229 = -6429;
	uint32_t x230 = UINT32_MAX;
	uint16_t x231 = 228U;
	int8_t x232 = INT8_MAX;
	int32_t t50 = 3;

	t50 = ((x229==x230)|(x231+x232));

	if (t50 != 355) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int64_t x233 = INT64_MIN;
	uint32_t x235 = UINT32_MAX;
	uint16_t x236 = 1455U;
	static uint32_t t51 = 33823U;

	t51 = ((x233==x234)|(x235+x236));

	if (t51 != 1454U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int16_t x237 = INT16_MIN;
	static uint16_t x239 = 1U;
	int64_t x240 = INT64_MIN;
	volatile int64_t t52 = -117LL;

	t52 = ((x237==x238)|(x239+x240));

	if (t52 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x241 = INT16_MIN;
	static volatile int32_t x242 = -215227;
	static uint32_t x243 = 79099356U;
	volatile uint32_t x244 = UINT32_MAX;
	uint32_t t53 = 21U;

	t53 = ((x241==x242)|(x243+x244));

	if (t53 != 79099355U) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x245 = INT8_MAX;
	static int64_t t54 = 233677137528098780LL;

	t54 = ((x245==x246)|(x247+x248));

	if (t54 != -19204080641LL) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x250 = INT32_MAX;
	int64_t x251 = -125425135LL;
	uint16_t x252 = 9U;

	t55 = ((x249==x250)|(x251+x252));

	if (t55 != -125425126LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int8_t x253 = INT8_MIN;
	volatile int16_t x254 = -1;
	volatile int8_t x255 = INT8_MAX;
	static int64_t x256 = 4432291410LL;

	t56 = ((x253==x254)|(x255+x256));

	if (t56 != 4432291537LL) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x259 = 6;
	int32_t x260 = INT32_MIN;
	static int32_t t57 = 80872123;

	t57 = ((x257==x258)|(x259+x260));

	if (t57 != -2147483641) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x261 = INT64_MAX;
	static int64_t x262 = INT64_MIN;

	t58 = ((x261==x262)|(x263+x264));

	if (t58 != 206799U) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x265 = 3007711015086206LLU;
	uint16_t x266 = 4U;
	int16_t x268 = INT16_MIN;
	volatile int32_t t59 = -1008686;

	t59 = ((x265==x266)|(x267+x268));

	if (t59 != -32769) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x269 = UINT64_MAX;
	uint16_t x271 = 1739U;
	static volatile int32_t t60 = -1980;

	t60 = ((x269==x270)|(x271+x272));

	if (t60 != -31029) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x273 = 20U;
	static int64_t x275 = INT64_MIN;
	static volatile uint16_t x276 = 11310U;
	static volatile int64_t t61 = 7531614LL;

	t61 = ((x273==x274)|(x275+x276));

	if (t61 != -9223372036854764498LL) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = INT8_MAX;
	static volatile uint64_t x278 = 26241514LLU;
	static uint32_t x279 = 758458U;
	volatile uint32_t t62 = 366968U;

	t62 = ((x277==x278)|(x279+x280));

	if (t62 != 758457U) { NG(); } else { ; }
	
}

void f63(void) {
	static int16_t x281 = INT16_MAX;
	volatile int32_t x282 = INT32_MIN;
	static uint16_t x283 = 1U;
	static int32_t x284 = INT32_MIN;

	t63 = ((x281==x282)|(x283+x284));

	if (t63 != -2147483647) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x286 = -1LL;
	static uint16_t x287 = 30081U;
	int64_t x288 = INT64_MIN;
	volatile int64_t t64 = 46LL;

	t64 = ((x285==x286)|(x287+x288));

	if (t64 != -9223372036854745727LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int64_t x289 = -1LL;
	static uint16_t x291 = UINT16_MAX;
	volatile int16_t x292 = INT16_MAX;
	volatile int32_t t65 = 15658;

	t65 = ((x289==x290)|(x291+x292));

	if (t65 != 98302) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x293 = UINT16_MAX;
	int32_t t66 = 32636827;

	t66 = ((x293==x294)|(x295+x296));

	if (t66 != -2147483393) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x297 = -9;
	uint8_t x298 = 1U;
	static volatile uint8_t x300 = 0U;
	uint64_t t67 = 4806912154673LLU;

	t67 = ((x297==x298)|(x299+x300));

	if (t67 != 447716540LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int64_t x301 = INT64_MAX;
	volatile uint8_t x302 = 6U;
	uint16_t x303 = UINT16_MAX;
	int32_t x304 = -1;
	int32_t t68 = -337128052;

	t68 = ((x301==x302)|(x303+x304));

	if (t68 != 65534) { NG(); } else { ; }
	
}

void f69(void) {
	static int32_t x305 = INT32_MAX;
	uint32_t x306 = UINT32_MAX;
	static int32_t x307 = 29;
	int64_t t69 = 67509782388LL;

	t69 = ((x305==x306)|(x307+x308));

	if (t69 != -50132325650282LL) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x309 = INT32_MIN;
	uint64_t x310 = 0LLU;
	int8_t x311 = -1;
	volatile uint32_t x312 = 182U;
	static volatile uint32_t t70 = 76486U;

	t70 = ((x309==x310)|(x311+x312));

	if (t70 != 181U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x313 = INT32_MIN;
	uint16_t x314 = 28313U;
	volatile uint8_t x315 = 31U;
	uint64_t x316 = 452226202355823964LLU;

	t71 = ((x313==x314)|(x315+x316));

	if (t71 != 452226202355823995LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x321 = UINT8_MAX;
	int64_t x322 = INT64_MIN;
	int8_t x324 = -1;
	int32_t t72 = -55959;

	t72 = ((x321==x322)|(x323+x324));

	if (t72 != -129) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x326 = 5U;
	static uint8_t x327 = 2U;
	volatile int64_t x328 = INT64_MIN;
	int64_t t73 = -163079LL;

	t73 = ((x325==x326)|(x327+x328));

	if (t73 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x333 = INT8_MIN;
	uint64_t x334 = UINT64_MAX;
	int8_t x335 = -1;
	static uint64_t x336 = 146237313467LLU;
	uint64_t t74 = 907182331LLU;

	t74 = ((x333==x334)|(x335+x336));

	if (t74 != 146237313466LLU) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x337 = INT8_MIN;
	static int8_t x339 = -1;
	int64_t x340 = INT64_MAX;
	volatile int64_t t75 = 0LL;

	t75 = ((x337==x338)|(x339+x340));

	if (t75 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x342 = 41U;
	int8_t x343 = INT8_MAX;
	static uint8_t x344 = 54U;
	volatile int32_t t76 = -48725;

	t76 = ((x341==x342)|(x343+x344));

	if (t76 != 181) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x345 = INT32_MIN;
	int8_t x346 = -1;
	uint8_t x347 = 0U;
	int16_t x348 = 489;
	volatile int32_t t77 = -398568460;

	t77 = ((x345==x346)|(x347+x348));

	if (t77 != 489) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x349 = INT32_MIN;
	volatile int64_t x350 = -1LL;
	static volatile uint32_t x351 = 1118346U;
	uint64_t x352 = 2823LLU;
	uint64_t t78 = 6412768325682LLU;

	t78 = ((x349==x350)|(x351+x352));

	if (t78 != 1121169LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint16_t x357 = 9997U;
	int16_t x358 = INT16_MIN;
	uint32_t x359 = UINT32_MAX;
	int16_t x360 = INT16_MIN;
	volatile uint32_t t79 = 553U;

	t79 = ((x357==x358)|(x359+x360));

	if (t79 != 4294934527U) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x361 = 2;
	uint64_t x362 = 62LLU;
	int8_t x363 = INT8_MAX;
	uint16_t x364 = UINT16_MAX;
	int32_t t80 = -4;

	t80 = ((x361==x362)|(x363+x364));

	if (t80 != 65662) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x365 = 1;
	uint16_t x366 = 33U;
	int32_t x367 = -954964;
	uint16_t x368 = UINT16_MAX;
	volatile int32_t t81 = -4104712;

	t81 = ((x365==x366)|(x367+x368));

	if (t81 != -889429) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x369 = 17350U;
	volatile uint8_t x371 = 9U;
	static volatile int32_t t82 = -92804;

	t82 = ((x369==x370)|(x371+x372));

	if (t82 != -119) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x373 = 5;
	static uint8_t x374 = 7U;
	uint16_t x375 = UINT16_MAX;
	uint16_t x376 = 3145U;
	volatile int32_t t83 = -385380;

	t83 = ((x373==x374)|(x375+x376));

	if (t83 != 68680) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x377 = 240300U;
	int32_t x378 = INT32_MAX;
	int64_t x379 = 107266699074972LL;
	uint64_t x380 = 7LLU;
	uint64_t t84 = 11654656LLU;

	t84 = ((x377==x378)|(x379+x380));

	if (t84 != 107266699074979LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int32_t x381 = INT32_MIN;
	int64_t x383 = -1LL;
	uint32_t x384 = UINT32_MAX;

	t85 = ((x381==x382)|(x383+x384));

	if (t85 != 4294967294LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x386 = INT32_MIN;
	static int16_t x387 = INT16_MAX;
	static uint64_t t86 = 212LLU;

	t86 = ((x385==x386)|(x387+x388));

	if (t86 != 32766LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x389 = 26178355;
	static int64_t x391 = -1LL;
	volatile uint8_t x392 = 66U;
	static int64_t t87 = -15290449839LL;

	t87 = ((x389==x390)|(x391+x392));

	if (t87 != 65LL) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x393 = 3U;
	int64_t x394 = -81650LL;
	int32_t x395 = INT32_MAX;
	int32_t x396 = INT32_MIN;
	static int32_t t88 = 93;

	t88 = ((x393==x394)|(x395+x396));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x397 = INT32_MIN;
	int64_t x399 = 8LL;
	int32_t x400 = INT32_MIN;
	int64_t t89 = 181087765873LL;

	t89 = ((x397==x398)|(x399+x400));

	if (t89 != -2147483640LL) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x401 = UINT8_MAX;
	static int32_t x402 = INT32_MIN;
	uint8_t x403 = 3U;
	int8_t x404 = 3;
	int32_t t90 = -495;

	t90 = ((x401==x402)|(x403+x404));

	if (t90 != 6) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x405 = 2;
	int16_t x406 = INT16_MIN;
	uint64_t x407 = 10848019279777793LLU;
	uint64_t x408 = 203142662219315367LLU;
	volatile uint64_t t91 = 8LLU;

	t91 = ((x405==x406)|(x407+x408));

	if (t91 != 213990681499093160LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x409 = INT16_MIN;
	int32_t x410 = -2210;
	uint16_t x411 = UINT16_MAX;
	int64_t x412 = -1LL;

	t92 = ((x409==x410)|(x411+x412));

	if (t92 != 65534LL) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x413 = -8;
	int8_t x414 = INT8_MIN;
	int32_t x415 = -1;
	int32_t t93 = -7;

	t93 = ((x413==x414)|(x415+x416));

	if (t93 != 65534) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x417 = -37;
	int64_t x418 = INT64_MIN;

	t94 = ((x417==x418)|(x419+x420));

	if (t94 != 65662) { NG(); } else { ; }
	
}

void f95(void) {
	static int16_t x421 = -1;
	int8_t x422 = 1;
	volatile uint32_t x423 = UINT32_MAX;
	volatile uint32_t t95 = 837481U;

	t95 = ((x421==x422)|(x423+x424));

	if (t95 != 454U) { NG(); } else { ; }
	
}

void f96(void) {
	static uint16_t x425 = 13470U;
	int16_t x426 = INT16_MIN;
	volatile int64_t x428 = -25166495892LL;
	static volatile int64_t t96 = -2296281772404639LL;

	t96 = ((x425==x426)|(x427+x428));

	if (t96 != -25166495848LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x429 = -3;
	int16_t x430 = -53;
	int32_t x431 = INT32_MIN;

	t97 = ((x429==x430)|(x431+x432));

	if (t97 != -2147482865) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x433 = -2LL;
	volatile uint64_t x434 = UINT64_MAX;
	static int64_t x435 = -1LL;
	static int32_t x436 = INT32_MIN;
	volatile int64_t t98 = 1538LL;

	t98 = ((x433==x434)|(x435+x436));

	if (t98 != -2147483649LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint16_t x437 = 4392U;
	int8_t x438 = -13;
	uint64_t x439 = 199121949473328142LLU;
	int16_t x440 = INT16_MAX;

	t99 = ((x437==x438)|(x439+x440));

	if (t99 != 199121949473360909LLU) { NG(); } else { ; }
	
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

