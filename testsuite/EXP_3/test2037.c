#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = INT16_MIN;
int32_t t0 = 25588;
volatile int32_t x16 = INT32_MIN;
static int32_t t2 = 6316;
int32_t x27 = -1;
uint32_t x38 = 243450U;
int32_t x39 = INT32_MAX;
volatile int64_t x52 = INT64_MIN;
int32_t x54 = -1;
int64_t x59 = INT64_MIN;
uint64_t x62 = 52LLU;
int32_t x63 = INT32_MIN;
static volatile int32_t t15 = -4923184;
int8_t x72 = -57;
int8_t x74 = INT8_MIN;
int32_t x75 = INT32_MAX;
int32_t x78 = 339;
static volatile int32_t x79 = -112;
static int64_t x83 = INT64_MAX;
uint64_t x86 = 3940369476431150LLU;
static volatile int32_t x87 = -1;
static volatile int32_t t20 = -1;
int16_t x90 = INT16_MIN;
uint64_t x97 = 30708742283LLU;
static int16_t x100 = INT16_MIN;
int32_t x103 = 2094735;
int32_t x105 = -3999;
static int8_t x114 = 4;
int32_t x116 = INT32_MIN;
int64_t x124 = 746971601LL;
uint8_t x129 = 3U;
static int16_t x136 = 0;
static int32_t x142 = -348070;
int16_t x149 = INT16_MIN;
int16_t x154 = INT16_MIN;
volatile int64_t x155 = -1196653427LL;
int16_t x157 = -1;
uint8_t x160 = 26U;
static uint8_t x168 = UINT8_MAX;
int16_t x192 = INT16_MIN;
volatile int32_t t44 = -48;
int16_t x202 = INT16_MAX;
int32_t t47 = -1;
int8_t x216 = 0;
static volatile int32_t t49 = -7;
volatile int16_t x219 = INT16_MAX;
int32_t x226 = 880837;
int8_t x228 = 1;
static uint16_t x230 = UINT16_MAX;
static int32_t x239 = 12;
int32_t t55 = 4;
int64_t x250 = INT64_MIN;
int16_t x252 = INT16_MAX;
int8_t x256 = -1;
static int16_t x265 = -1;
volatile int32_t x272 = INT32_MIN;
int32_t t60 = -103;
int16_t x274 = INT16_MIN;
static uint8_t x294 = 116U;
int16_t x296 = -14638;
int32_t t66 = -51;
int8_t x308 = INT8_MIN;
volatile uint16_t x309 = UINT16_MAX;
volatile int8_t x310 = -1;
volatile int64_t x316 = INT64_MIN;
int32_t t70 = 24;
static volatile uint64_t x325 = 77854882508LLU;
int16_t x326 = -31;
int32_t t73 = 90602465;
int64_t x335 = -1LL;
uint32_t x340 = UINT32_MAX;
volatile int32_t t76 = 16388911;
int64_t x343 = -1620951419LL;
int32_t x346 = 10;
int64_t x358 = -1LL;
static volatile int8_t x362 = INT8_MIN;
int32_t t81 = -164;
volatile uint8_t x368 = 4U;
volatile uint8_t x372 = 7U;
uint32_t x375 = 592230U;
volatile int32_t x376 = 1;
volatile int32_t t85 = -240;
static int16_t x381 = -1;
uint16_t x383 = 6U;
int32_t x384 = -4089;
static int32_t t87 = 357;
int16_t x389 = -215;
uint16_t x391 = UINT16_MAX;
volatile int32_t t88 = 720;
volatile int16_t x393 = INT16_MIN;
uint64_t x396 = 109194041671045314LLU;
static int32_t t89 = 2;
int8_t x398 = 1;
volatile int16_t x401 = -3;
volatile int32_t x402 = -3;
static volatile int8_t x409 = INT8_MIN;
static uint64_t x415 = UINT64_MAX;
static int32_t x424 = 1434;
uint64_t x428 = UINT64_MAX;
int32_t t97 = 4;
uint64_t x430 = 17528982816033100LLU;
volatile int16_t x432 = INT16_MIN;


void f0(void) {
	volatile uint32_t x1 = 1642979461U;
	static int16_t x2 = INT16_MIN;
	static int32_t x3 = 0;

	t0 = ((x1+x2)<(x3^x4));

	if (t0 != 1) { NG(); } else { ; }
	
}

void f1(void) {
	volatile int64_t x5 = 13179530779866168LL;
	int8_t x6 = 1;
	uint64_t x7 = UINT64_MAX;
	int64_t x8 = -1LL;
	int32_t t1 = 4;

	t1 = ((x5+x6)<(x7^x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x13 = -1448;
	static int16_t x14 = 7;
	int32_t x15 = INT32_MIN;

	t2 = ((x13+x14)<(x15^x16));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x17 = INT8_MIN;
	static int64_t x18 = -2339163LL;
	int8_t x19 = INT8_MIN;
	volatile uint32_t x20 = UINT32_MAX;
	int32_t t3 = -14169;

	t3 = ((x17+x18)<(x19^x20));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x21 = UINT16_MAX;
	uint8_t x22 = UINT8_MAX;
	volatile int16_t x23 = -8;
	static int8_t x24 = 1;
	int32_t t4 = 18;

	t4 = ((x21+x22)<(x23^x24));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static uint8_t x25 = 116U;
	int32_t x26 = INT32_MIN;
	int32_t x28 = -1;
	int32_t t5 = 3;

	t5 = ((x25+x26)<(x27^x28));

	if (t5 != 1) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x29 = -1;
	static uint8_t x30 = 0U;
	int32_t x31 = -3974;
	int64_t x32 = -1LL;
	static volatile int32_t t6 = -388390;

	t6 = ((x29+x30)<(x31^x32));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x33 = INT8_MIN;
	volatile int8_t x34 = INT8_MAX;
	uint8_t x35 = UINT8_MAX;
	int32_t x36 = -1;
	int32_t t7 = 11503;

	t7 = ((x33+x34)<(x35^x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int32_t x37 = -1;
	static int8_t x40 = INT8_MAX;
	int32_t t8 = 7762338;

	t8 = ((x37+x38)<(x39^x40));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile uint32_t x41 = 95U;
	int64_t x42 = -1LL;
	uint16_t x43 = 27441U;
	int64_t x44 = -1LL;
	volatile int32_t t9 = 261703298;

	t9 = ((x41+x42)<(x43^x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x45 = -16361;
	int8_t x46 = -5;
	uint16_t x47 = 8U;
	uint16_t x48 = UINT16_MAX;
	static volatile int32_t t10 = 61;

	t10 = ((x45+x46)<(x47^x48));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x49 = UINT32_MAX;
	static int8_t x50 = 0;
	volatile uint64_t x51 = 78349LLU;
	volatile int32_t t11 = -1469;

	t11 = ((x49+x50)<(x51^x52));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = -2;
	int16_t x55 = -1;
	uint8_t x56 = 15U;
	int32_t t12 = -499250;

	t12 = ((x53+x54)<(x55^x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x57 = INT64_MIN;
	int32_t x58 = INT32_MAX;
	int16_t x60 = -13;
	int32_t t13 = 19;

	t13 = ((x57+x58)<(x59^x60));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = UINT32_MAX;
	volatile int8_t x64 = 10;
	static volatile int32_t t14 = 2404;

	t14 = ((x61+x62)<(x63^x64));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MAX;
	uint16_t x66 = 732U;
	int16_t x67 = 916;
	uint32_t x68 = 126507U;

	t15 = ((x65+x66)<(x67^x68));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x69 = 0U;
	int8_t x70 = -1;
	uint16_t x71 = UINT16_MAX;
	volatile int32_t t16 = 4390;

	t16 = ((x69+x70)<(x71^x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x73 = -32453817320LL;
	int16_t x76 = INT16_MAX;
	static volatile int32_t t17 = -4;

	t17 = ((x73+x74)<(x75^x76));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x77 = 0U;
	uint8_t x80 = 1U;
	static volatile int32_t t18 = 497;

	t18 = ((x77+x78)<(x79^x80));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x81 = 245815454245072009LL;
	uint64_t x82 = 18572492664LLU;
	int64_t x84 = INT64_MAX;
	int32_t t19 = -2288;

	t19 = ((x81+x82)<(x83^x84));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x85 = 359193812U;
	int16_t x88 = INT16_MIN;

	t20 = ((x85+x86)<(x87^x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x89 = -1LL;
	int64_t x91 = 906213501269LL;
	int32_t x92 = INT32_MIN;
	int32_t t21 = -175199;

	t21 = ((x89+x90)<(x91^x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x93 = INT32_MAX;
	volatile int16_t x94 = -1;
	uint64_t x95 = UINT64_MAX;
	volatile int8_t x96 = INT8_MAX;
	int32_t t22 = 5;

	t22 = ((x93+x94)<(x95^x96));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x98 = -1;
	static int16_t x99 = INT16_MIN;
	int32_t t23 = 519572;

	t23 = ((x97+x98)<(x99^x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x101 = INT8_MAX;
	static volatile int16_t x102 = INT16_MIN;
	int16_t x104 = INT16_MAX;
	static volatile int32_t t24 = 11093185;

	t24 = ((x101+x102)<(x103^x104));

	if (t24 != 1) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x106 = -1LL;
	uint32_t x107 = 354255U;
	uint64_t x108 = 1863869LLU;
	int32_t t25 = 528924222;

	t25 = ((x105+x106)<(x107^x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x113 = 6U;
	static uint16_t x115 = 105U;
	static int32_t t26 = 3642;

	t26 = ((x113+x114)<(x115^x116));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static uint32_t x117 = 0U;
	int32_t x118 = -1;
	uint64_t x119 = UINT64_MAX;
	int64_t x120 = -1441416912253039202LL;
	volatile int32_t t27 = -121711;

	t27 = ((x117+x118)<(x119^x120));

	if (t27 != 1) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x121 = UINT16_MAX;
	uint16_t x122 = 27101U;
	volatile int16_t x123 = -8212;
	int32_t t28 = 302079;

	t28 = ((x121+x122)<(x123^x124));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint8_t x130 = 4U;
	volatile uint16_t x131 = 1U;
	uint8_t x132 = 1U;
	volatile int32_t t29 = 1183;

	t29 = ((x129+x130)<(x131^x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	volatile uint64_t x133 = 20660LLU;
	int8_t x134 = INT8_MIN;
	int8_t x135 = INT8_MIN;
	volatile int32_t t30 = -126211;

	t30 = ((x133+x134)<(x135^x136));

	if (t30 != 1) { NG(); } else { ; }
	
}

void f31(void) {
	static uint32_t x137 = UINT32_MAX;
	static int8_t x138 = INT8_MIN;
	int32_t x139 = INT32_MAX;
	static int32_t x140 = 184229822;
	int32_t t31 = 394;

	t31 = ((x137+x138)<(x139^x140));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x141 = 17085613U;
	volatile int64_t x143 = INT64_MIN;
	uint16_t x144 = UINT16_MAX;
	static volatile int32_t t32 = -7;

	t32 = ((x141+x142)<(x143^x144));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int64_t x145 = -4031171781733942143LL;
	int32_t x146 = INT32_MIN;
	volatile int64_t x147 = INT64_MIN;
	static volatile int64_t x148 = INT64_MIN;
	int32_t t33 = -2710326;

	t33 = ((x145+x146)<(x147^x148));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int16_t x150 = 1;
	uint32_t x151 = 439226694U;
	volatile uint16_t x152 = 54U;
	volatile int32_t t34 = 1551544;

	t34 = ((x149+x150)<(x151^x152));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x153 = INT16_MIN;
	static volatile int8_t x156 = -8;
	int32_t t35 = -55915511;

	t35 = ((x153+x154)<(x155^x156));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	static int8_t x158 = INT8_MIN;
	uint32_t x159 = 127U;
	int32_t t36 = 31407;

	t36 = ((x157+x158)<(x159^x160));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint32_t x161 = UINT32_MAX;
	int16_t x162 = 16;
	uint32_t x163 = 1U;
	static int16_t x164 = INT16_MIN;
	volatile int32_t t37 = 56;

	t37 = ((x161+x162)<(x163^x164));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x165 = -2;
	volatile int32_t x166 = -1;
	uint64_t x167 = UINT64_MAX;
	static int32_t t38 = -32420867;

	t38 = ((x165+x166)<(x167^x168));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x169 = INT32_MIN;
	static uint32_t x170 = 3U;
	volatile int8_t x171 = -1;
	volatile uint8_t x172 = 0U;
	volatile int32_t t39 = 2858;

	t39 = ((x169+x170)<(x171^x172));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint32_t x173 = UINT32_MAX;
	int16_t x174 = -5400;
	static int8_t x175 = -1;
	static volatile int16_t x176 = -1;
	int32_t t40 = 1;

	t40 = ((x173+x174)<(x175^x176));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x177 = 0U;
	volatile int32_t x178 = -41760551;
	volatile int8_t x179 = -1;
	int64_t x180 = -1LL;
	int32_t t41 = -1;

	t41 = ((x177+x178)<(x179^x180));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x181 = -7855LL;
	uint32_t x182 = 105U;
	uint8_t x183 = 0U;
	static volatile int32_t x184 = 716117633;
	static volatile int32_t t42 = -3481317;

	t42 = ((x181+x182)<(x183^x184));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	int8_t x185 = -7;
	static int32_t x186 = 387385;
	int64_t x187 = INT64_MIN;
	int16_t x188 = -1;
	volatile int32_t t43 = -13;

	t43 = ((x185+x186)<(x187^x188));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x189 = UINT64_MAX;
	static uint64_t x190 = 36648042026080066LLU;
	volatile int64_t x191 = INT64_MIN;

	t44 = ((x189+x190)<(x191^x192));

	if (t44 != 1) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x193 = -321466840;
	volatile int16_t x194 = INT16_MIN;
	int64_t x195 = -657941LL;
	volatile int64_t x196 = 3LL;
	volatile int32_t t45 = -2;

	t45 = ((x193+x194)<(x195^x196));

	if (t45 != 1) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x197 = -1LL;
	static int16_t x198 = -360;
	int16_t x199 = 885;
	uint8_t x200 = UINT8_MAX;
	int32_t t46 = 7072094;

	t46 = ((x197+x198)<(x199^x200));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	uint32_t x201 = 10383U;
	static volatile uint8_t x203 = UINT8_MAX;
	int8_t x204 = -1;

	t47 = ((x201+x202)<(x203^x204));

	if (t47 != 1) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x209 = 1064093531563600587LLU;
	int16_t x210 = INT16_MAX;
	int8_t x211 = -53;
	static int64_t x212 = INT64_MAX;
	volatile int32_t t48 = 1;

	t48 = ((x209+x210)<(x211^x212));

	if (t48 != 1) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x213 = 149457LL;
	volatile uint8_t x214 = 0U;
	int8_t x215 = INT8_MAX;

	t49 = ((x213+x214)<(x215^x216));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	uint16_t x217 = UINT16_MAX;
	static int64_t x218 = -1LL;
	uint64_t x220 = 3838496107LLU;
	int32_t t50 = 1844;

	t50 = ((x217+x218)<(x219^x220));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x221 = 4357614696566LLU;
	int64_t x222 = INT64_MIN;
	int32_t x223 = -1;
	int16_t x224 = INT16_MAX;
	int32_t t51 = -382514;

	t51 = ((x221+x222)<(x223^x224));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x225 = INT8_MAX;
	static int32_t x227 = -1;
	static volatile int32_t t52 = -1863084;

	t52 = ((x225+x226)<(x227^x228));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x229 = 2U;
	int16_t x231 = INT16_MAX;
	static volatile int16_t x232 = INT16_MIN;
	int32_t t53 = -76239057;

	t53 = ((x229+x230)<(x231^x232));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int8_t x237 = INT8_MIN;
	int64_t x238 = INT64_MAX;
	int32_t x240 = INT32_MIN;
	static volatile int32_t t54 = -1844176;

	t54 = ((x237+x238)<(x239^x240));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x241 = UINT32_MAX;
	int32_t x242 = -236116;
	int64_t x243 = INT64_MAX;
	int64_t x244 = -1LL;

	t55 = ((x241+x242)<(x243^x244));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x249 = UINT32_MAX;
	int16_t x251 = INT16_MIN;
	static volatile int32_t t56 = 4819141;

	t56 = ((x249+x250)<(x251^x252));

	if (t56 != 1) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x253 = 0;
	int8_t x254 = 1;
	int8_t x255 = -3;
	int32_t t57 = 11631;

	t57 = ((x253+x254)<(x255^x256));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x257 = -11;
	int16_t x258 = 7931;
	volatile uint32_t x259 = UINT32_MAX;
	int32_t x260 = 16672;
	volatile int32_t t58 = 12;

	t58 = ((x257+x258)<(x259^x260));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x266 = UINT32_MAX;
	int32_t x267 = INT32_MIN;
	int16_t x268 = INT16_MIN;
	volatile int32_t t59 = -3954262;

	t59 = ((x265+x266)<(x267^x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	static uint16_t x269 = 27U;
	volatile int8_t x270 = 54;
	int8_t x271 = -1;

	t60 = ((x269+x270)<(x271^x272));

	if (t60 != 1) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x273 = -1;
	uint64_t x275 = 886LLU;
	uint32_t x276 = 26539315U;
	int32_t t61 = -4491;

	t61 = ((x273+x274)<(x275^x276));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x277 = 0;
	int16_t x278 = -3183;
	int64_t x279 = INT64_MIN;
	int32_t x280 = INT32_MIN;
	volatile int32_t t62 = -4550999;

	t62 = ((x277+x278)<(x279^x280));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x281 = -1;
	static int8_t x282 = -5;
	static uint8_t x283 = 2U;
	int64_t x284 = -1LL;
	volatile int32_t t63 = -4;

	t63 = ((x281+x282)<(x283^x284));

	if (t63 != 1) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x285 = 86U;
	int16_t x286 = INT16_MIN;
	int16_t x287 = -1;
	int64_t x288 = -1LL;
	volatile int32_t t64 = -2704;

	t64 = ((x285+x286)<(x287^x288));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x289 = -1;
	static int64_t x290 = INT64_MAX;
	int8_t x291 = INT8_MIN;
	int64_t x292 = INT64_MIN;
	volatile int32_t t65 = -89;

	t65 = ((x289+x290)<(x291^x292));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int8_t x293 = INT8_MAX;
	int64_t x295 = 3140674835256408LL;

	t66 = ((x293+x294)<(x295^x296));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x297 = 3592;
	static uint16_t x298 = 1U;
	uint16_t x299 = 121U;
	uint64_t x300 = 17556LLU;
	int32_t t67 = -2;

	t67 = ((x297+x298)<(x299^x300));

	if (t67 != 1) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x305 = -1;
	static int8_t x306 = -1;
	volatile int16_t x307 = INT16_MIN;
	volatile int32_t t68 = -14069;

	t68 = ((x305+x306)<(x307^x308));

	if (t68 != 1) { NG(); } else { ; }
	
}

void f69(void) {
	static volatile uint32_t x311 = 255469738U;
	volatile uint16_t x312 = UINT16_MAX;
	static volatile int32_t t69 = -7689;

	t69 = ((x309+x310)<(x311^x312));

	if (t69 != 1) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x313 = INT64_MAX;
	volatile int8_t x314 = -7;
	static int32_t x315 = -11;

	t70 = ((x313+x314)<(x315^x316));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x317 = INT64_MAX;
	volatile int16_t x318 = INT16_MIN;
	int32_t x319 = -6;
	static int32_t x320 = INT32_MIN;
	volatile int32_t t71 = -667821;

	t71 = ((x317+x318)<(x319^x320));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x321 = -184;
	int16_t x322 = -1;
	int16_t x323 = -2881;
	volatile int64_t x324 = -10133017978LL;
	static volatile int32_t t72 = 1937313;

	t72 = ((x321+x322)<(x323^x324));

	if (t72 != 1) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x327 = 2;
	volatile uint8_t x328 = 0U;

	t73 = ((x325+x326)<(x327^x328));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x329 = UINT8_MAX;
	static uint64_t x330 = 9LLU;
	uint16_t x331 = UINT16_MAX;
	static volatile int8_t x332 = -17;
	int32_t t74 = -147819;

	t74 = ((x329+x330)<(x331^x332));

	if (t74 != 1) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x333 = INT32_MIN;
	uint8_t x334 = UINT8_MAX;
	int32_t x336 = INT32_MIN;
	volatile int32_t t75 = -155919;

	t75 = ((x333+x334)<(x335^x336));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	uint64_t x337 = 16640359LLU;
	int64_t x338 = INT64_MIN;
	int8_t x339 = INT8_MIN;

	t76 = ((x337+x338)<(x339^x340));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x341 = -1;
	uint32_t x342 = 37855176U;
	static uint32_t x344 = UINT32_MAX;
	int32_t t77 = -116730;

	t77 = ((x341+x342)<(x343^x344));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x345 = -1;
	static uint8_t x347 = 31U;
	int8_t x348 = 1;
	static volatile int32_t t78 = -81;

	t78 = ((x345+x346)<(x347^x348));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x349 = 49;
	int16_t x350 = INT16_MIN;
	static int16_t x351 = INT16_MIN;
	int32_t x352 = -29544;
	static volatile int32_t t79 = -11;

	t79 = ((x349+x350)<(x351^x352));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x357 = INT16_MIN;
	static uint16_t x359 = UINT16_MAX;
	int16_t x360 = INT16_MAX;
	int32_t t80 = -1145950;

	t80 = ((x357+x358)<(x359^x360));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	static volatile int8_t x361 = INT8_MIN;
	static uint64_t x363 = 462750207951958LLU;
	volatile int8_t x364 = 21;

	t81 = ((x361+x362)<(x363^x364));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x365 = INT16_MAX;
	volatile uint8_t x366 = 3U;
	int16_t x367 = INT16_MIN;
	static int32_t t82 = 706771913;

	t82 = ((x365+x366)<(x367^x368));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x369 = INT64_MIN;
	static volatile uint16_t x370 = UINT16_MAX;
	int64_t x371 = 1979LL;
	int32_t t83 = -14;

	t83 = ((x369+x370)<(x371^x372));

	if (t83 != 1) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x373 = INT64_MAX;
	static int8_t x374 = -31;
	volatile int32_t t84 = 69173715;

	t84 = ((x373+x374)<(x375^x376));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int8_t x377 = -1;
	int8_t x378 = INT8_MIN;
	volatile uint64_t x379 = UINT64_MAX;
	int16_t x380 = -1;

	t85 = ((x377+x378)<(x379^x380));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x382 = -10;
	volatile int32_t t86 = 22;

	t86 = ((x381+x382)<(x383^x384));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x385 = -1;
	uint64_t x386 = UINT64_MAX;
	volatile int64_t x387 = 53026LL;
	int8_t x388 = INT8_MIN;

	t87 = ((x385+x386)<(x387^x388));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x390 = 8;
	volatile int64_t x392 = INT64_MIN;

	t88 = ((x389+x390)<(x391^x392));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x394 = UINT64_MAX;
	uint64_t x395 = UINT64_MAX;

	t89 = ((x393+x394)<(x395^x396));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x397 = -6;
	static int32_t x399 = -6538942;
	int32_t x400 = 0;
	volatile int32_t t90 = 40662;

	t90 = ((x397+x398)<(x399^x400));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x403 = -1LL;
	uint8_t x404 = 22U;
	volatile int32_t t91 = 8;

	t91 = ((x401+x402)<(x403^x404));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x405 = 12979U;
	int32_t x406 = INT32_MAX;
	volatile int8_t x407 = INT8_MIN;
	static int8_t x408 = INT8_MIN;
	int32_t t92 = -23976;

	t92 = ((x405+x406)<(x407^x408));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x410 = 130790;
	int32_t x411 = INT32_MIN;
	volatile int64_t x412 = 3983799LL;
	volatile int32_t t93 = 3504;

	t93 = ((x409+x410)<(x411^x412));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	static int64_t x413 = INT64_MIN;
	volatile int8_t x414 = 9;
	uint64_t x416 = 391043859692311143LLU;
	int32_t t94 = 2;

	t94 = ((x413+x414)<(x415^x416));

	if (t94 != 1) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x417 = INT32_MAX;
	static int32_t x418 = INT32_MIN;
	int8_t x419 = -1;
	int64_t x420 = 80965269793LL;
	volatile int32_t t95 = -120593492;

	t95 = ((x417+x418)<(x419^x420));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x421 = INT16_MIN;
	volatile int8_t x422 = -1;
	static uint64_t x423 = 4608185LLU;
	static volatile int32_t t96 = -764771940;

	t96 = ((x421+x422)<(x423^x424));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int64_t x425 = 347LL;
	int32_t x426 = INT32_MIN;
	uint32_t x427 = 1733475U;

	t97 = ((x425+x426)<(x427^x428));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	static int64_t x429 = INT64_MAX;
	int32_t x431 = -7655474;
	volatile int32_t t98 = 938064;

	t98 = ((x429+x430)<(x431^x432));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x433 = INT8_MIN;
	int16_t x434 = -244;
	uint64_t x435 = 194850845108494424LLU;
	int64_t x436 = INT64_MIN;
	volatile int32_t t99 = -1377161;

	t99 = ((x433+x434)<(x435^x436));

	if (t99 != 0) { NG(); } else { ; }
	
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

