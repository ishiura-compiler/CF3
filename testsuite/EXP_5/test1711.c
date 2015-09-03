#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t t0 = 15330;
volatile uint32_t x11 = 892113548U;
uint16_t x12 = 1U;
int16_t x14 = -1;
uint32_t x16 = UINT32_MAX;
int64_t x18 = 1300801204034680928LL;
static int8_t x25 = 1;
static volatile int16_t x30 = INT16_MAX;
static volatile int8_t x35 = -1;
volatile int16_t x46 = INT16_MIN;
volatile uint64_t x50 = UINT64_MAX;
int16_t x51 = INT16_MIN;
int32_t x55 = INT32_MAX;
int32_t x60 = INT32_MIN;
int8_t x68 = INT8_MIN;
int32_t t17 = -28;
volatile int16_t x90 = INT16_MAX;
int64_t x94 = INT64_MIN;
static int32_t x98 = 110881792;
static int32_t x102 = -20229463;
volatile int32_t t22 = -1;
int32_t x128 = INT32_MIN;
int16_t x129 = 1634;
static uint32_t x130 = 22147U;
uint32_t x132 = 804663U;
volatile uint16_t x134 = 750U;
uint64_t x136 = 34905339206745LLU;
volatile int32_t t30 = 1011481;
int64_t x147 = -1202117614LL;
int32_t x148 = -16143;
uint64_t x162 = UINT64_MAX;
volatile int32_t x169 = 21016;
uint64_t x174 = 1088336788713208LLU;
int16_t x175 = INT16_MIN;
int32_t t37 = 113;
uint64_t x182 = 18588466606LLU;
uint64_t x191 = 124216259485767214LLU;
int32_t t42 = 1718;
static int16_t x199 = INT16_MIN;
uint32_t x200 = 4381441U;
volatile uint64_t x202 = 7226567LLU;
int32_t x204 = -1;
uint16_t x205 = 1U;
int32_t t45 = 7;
int8_t x209 = INT8_MIN;
int8_t x210 = -2;
static int8_t x213 = INT8_MAX;
int32_t t47 = -1285924;
volatile uint8_t x218 = 26U;
volatile uint16_t x223 = 40U;
volatile int16_t x226 = -1;
static int32_t t50 = 3274194;
volatile int32_t x237 = INT32_MIN;
int8_t x238 = INT8_MIN;
uint8_t x242 = 45U;
uint8_t x253 = 79U;
static int32_t t56 = 36;
volatile int8_t x257 = -1;
int64_t x261 = INT64_MIN;
volatile int32_t t59 = -23;
uint64_t x272 = UINT64_MAX;
int64_t x278 = -2178572108170392LL;
int32_t x280 = -3162;
uint8_t x284 = 11U;
volatile int32_t t62 = -6877;
static uint8_t x286 = 8U;
volatile uint32_t x295 = 402U;
int32_t t64 = -2;
volatile int32_t t65 = -119;
uint32_t x305 = 1104U;
int32_t t66 = 1135;
static volatile int32_t t67 = 928259;
int16_t x327 = 26;
int8_t x338 = INT8_MIN;
int32_t t75 = 1050508574;
int64_t x348 = INT64_MAX;
volatile int32_t t76 = 3;
volatile int32_t t77 = -273616;
volatile uint8_t x358 = 58U;
uint32_t x367 = UINT32_MAX;
int32_t x368 = -15;
int32_t t81 = 46313;
int32_t x373 = INT32_MAX;
uint16_t x384 = UINT16_MAX;
static uint64_t x388 = UINT64_MAX;
int32_t t86 = 1463;
uint64_t x390 = 919504613LLU;
uint16_t x397 = UINT16_MAX;
int8_t x401 = INT8_MAX;
int32_t t90 = -1;
volatile int64_t x406 = -234LL;
int32_t t93 = -16366;
static uint32_t x421 = 62151U;
static volatile int64_t x424 = INT64_MAX;
static volatile int32_t t94 = -1043;
static int16_t x426 = -1;
uint8_t x427 = 40U;
uint8_t x428 = UINT8_MAX;
int8_t x429 = 3;
int32_t x449 = INT32_MIN;
int16_t x455 = INT16_MAX;


void f0(void) {
	uint64_t x1 = UINT64_MAX;
	static uint64_t x2 = 1699490837LLU;
	volatile int64_t x3 = INT64_MIN;
	int8_t x4 = 3;

	t0 = (x1==((x2&x3)-x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile uint64_t x5 = 171759LLU;
	int8_t x6 = INT8_MIN;
	volatile int64_t x7 = -72958071211203738LL;
	int8_t x8 = INT8_MIN;
	volatile int32_t t1 = 22;

	t1 = (x5==((x6&x7)-x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static int64_t x9 = INT64_MIN;
	int64_t x10 = INT64_MAX;
	int32_t t2 = -14992438;

	t2 = (x9==((x10&x11)-x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MAX;
	int8_t x15 = -17;
	volatile int32_t t3 = 286616834;

	t3 = (x13==((x14&x15)-x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int32_t x17 = -1;
	int64_t x19 = -1LL;
	volatile int8_t x20 = INT8_MIN;
	int32_t t4 = 21473519;

	t4 = (x17==((x18&x19)-x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x26 = INT64_MIN;
	int32_t x27 = -1;
	volatile uint64_t x28 = 627LLU;
	volatile int32_t t5 = 27;

	t5 = (x25==((x26&x27)-x28));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x29 = -1;
	uint32_t x31 = UINT32_MAX;
	uint32_t x32 = 190283U;
	int32_t t6 = 37;

	t6 = (x29==((x30&x31)-x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	static uint16_t x34 = 24U;
	uint16_t x36 = 13379U;
	static int32_t t7 = 2;

	t7 = (x33==((x34&x35)-x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x37 = 105948594LL;
	static int64_t x38 = -1LL;
	uint32_t x39 = 83769367U;
	volatile uint16_t x40 = 6U;
	static int32_t t8 = -172705786;

	t8 = (x37==((x38&x39)-x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = INT8_MIN;
	volatile uint8_t x42 = UINT8_MAX;
	int16_t x43 = -1;
	uint64_t x44 = 25549LLU;
	static volatile int32_t t9 = 4975;

	t9 = (x41==((x42&x43)-x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x45 = INT32_MIN;
	int64_t x47 = -1LL;
	uint32_t x48 = 5U;
	volatile int32_t t10 = -653;

	t10 = (x45==((x46&x47)-x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x49 = UINT8_MAX;
	static uint64_t x52 = 12348962LLU;
	static int32_t t11 = -97;

	t11 = (x49==((x50&x51)-x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static uint32_t x53 = 6U;
	int32_t x54 = -579471;
	int16_t x56 = INT16_MAX;
	int32_t t12 = 187672362;

	t12 = (x53==((x54&x55)-x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static volatile int64_t x57 = -1606770102815193809LL;
	volatile uint8_t x58 = UINT8_MAX;
	int64_t x59 = INT64_MIN;
	volatile int32_t t13 = 215;

	t13 = (x57==((x58&x59)-x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	static int64_t x62 = -1LL;
	volatile int8_t x63 = INT8_MIN;
	static uint8_t x64 = UINT8_MAX;
	volatile int32_t t14 = 1003859439;

	t14 = (x61==((x62&x63)-x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint8_t x65 = UINT8_MAX;
	int16_t x66 = INT16_MIN;
	int8_t x67 = INT8_MAX;
	volatile int32_t t15 = -704;

	t15 = (x65==((x66&x67)-x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x69 = INT32_MIN;
	int64_t x70 = INT64_MIN;
	static int64_t x71 = 397752988LL;
	static int8_t x72 = 7;
	static int32_t t16 = -52;

	t16 = (x69==((x70&x71)-x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x73 = UINT64_MAX;
	uint8_t x74 = UINT8_MAX;
	uint64_t x75 = 12381569004615219LLU;
	static volatile uint64_t x76 = 79151938681309LLU;

	t17 = (x73==((x74&x75)-x76));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x85 = 10702U;
	uint64_t x86 = 6634858LLU;
	int64_t x87 = -237358LL;
	int32_t x88 = 6298;
	int32_t t18 = 1;

	t18 = (x85==((x86&x87)-x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x89 = 18480807689LLU;
	static int16_t x91 = INT16_MIN;
	uint8_t x92 = 47U;
	int32_t t19 = 1;

	t19 = (x89==((x90&x91)-x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x93 = -2024;
	static uint16_t x95 = 137U;
	int32_t x96 = -154;
	volatile int32_t t20 = -809358917;

	t20 = (x93==((x94&x95)-x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x97 = INT64_MIN;
	static uint16_t x99 = 3U;
	uint8_t x100 = 1U;
	volatile int32_t t21 = -1806733;

	t21 = (x97==((x98&x99)-x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	static int32_t x101 = -13;
	uint8_t x103 = 7U;
	uint64_t x104 = UINT64_MAX;

	t22 = (x101==((x102&x103)-x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = INT16_MIN;
	int32_t x106 = INT32_MAX;
	int8_t x107 = INT8_MIN;
	int64_t x108 = -22613LL;
	int32_t t23 = 991;

	t23 = (x105==((x106&x107)-x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int8_t x113 = INT8_MIN;
	int64_t x114 = INT64_MIN;
	volatile int16_t x115 = INT16_MIN;
	int32_t x116 = INT32_MIN;
	int32_t t24 = -1018912094;

	t24 = (x113==((x114&x115)-x116));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	static uint16_t x117 = 260U;
	uint64_t x118 = 100LLU;
	static volatile uint64_t x119 = UINT64_MAX;
	int64_t x120 = INT64_MIN;
	volatile int32_t t25 = -1;

	t25 = (x117==((x118&x119)-x120));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x121 = 1076776784445042LLU;
	volatile uint32_t x122 = 753657U;
	int16_t x123 = 2366;
	int16_t x124 = INT16_MIN;
	int32_t t26 = -38694021;

	t26 = (x121==((x122&x123)-x124));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	static int64_t x125 = -7451LL;
	volatile uint32_t x126 = UINT32_MAX;
	static uint32_t x127 = 38447U;
	static volatile int32_t t27 = 0;

	t27 = (x125==((x126&x127)-x128));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static int64_t x131 = INT64_MIN;
	int32_t t28 = 28261119;

	t28 = (x129==((x130&x131)-x132));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x133 = INT8_MIN;
	volatile int8_t x135 = INT8_MIN;
	volatile int32_t t29 = 258603;

	t29 = (x133==((x134&x135)-x136));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	static int16_t x137 = -1;
	uint16_t x138 = 5U;
	static uint16_t x139 = 57U;
	int32_t x140 = INT32_MAX;

	t30 = (x137==((x138&x139)-x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x141 = 123814228U;
	int32_t x142 = -122522;
	static uint64_t x143 = 212932800763083LLU;
	static uint8_t x144 = UINT8_MAX;
	volatile int32_t t31 = 9895;

	t31 = (x141==((x142&x143)-x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x145 = INT64_MAX;
	volatile uint64_t x146 = 61658LLU;
	int32_t t32 = -177;

	t32 = (x145==((x146&x147)-x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x153 = -46;
	volatile int16_t x154 = INT16_MAX;
	static int64_t x155 = INT64_MAX;
	int64_t x156 = 5201271LL;
	int32_t t33 = 4;

	t33 = (x153==((x154&x155)-x156));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x161 = INT16_MAX;
	static uint32_t x163 = UINT32_MAX;
	uint32_t x164 = 59U;
	static int32_t t34 = 4;

	t34 = (x161==((x162&x163)-x164));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x165 = UINT16_MAX;
	int64_t x166 = INT64_MIN;
	volatile int16_t x167 = 558;
	volatile int16_t x168 = INT16_MAX;
	int32_t t35 = -50336;

	t35 = (x165==((x166&x167)-x168));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x170 = INT64_MAX;
	uint64_t x171 = 109197435LLU;
	int32_t x172 = 29771;
	volatile int32_t t36 = -10218;

	t36 = (x169==((x170&x171)-x172));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x173 = -470;
	uint64_t x176 = 10LLU;

	t37 = (x173==((x174&x175)-x176));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int8_t x177 = -3;
	int64_t x178 = -146575LL;
	static int32_t x179 = INT32_MIN;
	int16_t x180 = -15;
	static volatile int32_t t38 = -1218;

	t38 = (x177==((x178&x179)-x180));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x181 = 221104U;
	int16_t x183 = 3059;
	uint8_t x184 = UINT8_MAX;
	int32_t t39 = 141087308;

	t39 = (x181==((x182&x183)-x184));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	uint16_t x185 = 22U;
	volatile int64_t x186 = INT64_MAX;
	static volatile uint16_t x187 = UINT16_MAX;
	static uint32_t x188 = 0U;
	volatile int32_t t40 = 31005;

	t40 = (x185==((x186&x187)-x188));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint16_t x189 = 11U;
	uint8_t x190 = UINT8_MAX;
	volatile int32_t x192 = INT32_MIN;
	volatile int32_t t41 = 62696435;

	t41 = (x189==((x190&x191)-x192));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x193 = INT16_MIN;
	int32_t x194 = -2998690;
	volatile int32_t x195 = -1910356;
	uint16_t x196 = 384U;

	t42 = (x193==((x194&x195)-x196));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x197 = INT16_MIN;
	static uint32_t x198 = UINT32_MAX;
	int32_t t43 = 841983;

	t43 = (x197==((x198&x199)-x200));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x201 = 0;
	int32_t x203 = -1;
	int32_t t44 = -10929456;

	t44 = (x201==((x202&x203)-x204));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int32_t x206 = INT32_MIN;
	int16_t x207 = -1;
	int32_t x208 = -1;

	t45 = (x205==((x206&x207)-x208));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x211 = INT64_MIN;
	int32_t x212 = -685;
	int32_t t46 = 459;

	t46 = (x209==((x210&x211)-x212));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int64_t x214 = -1LL;
	uint8_t x215 = UINT8_MAX;
	uint64_t x216 = 84031202LLU;

	t47 = (x213==((x214&x215)-x216));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	volatile uint16_t x217 = 882U;
	int8_t x219 = 0;
	int32_t x220 = -118975;
	static int32_t t48 = 1;

	t48 = (x217==((x218&x219)-x220));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x221 = 0U;
	volatile int64_t x222 = INT64_MIN;
	static int16_t x224 = 91;
	static int32_t t49 = -58477;

	t49 = (x221==((x222&x223)-x224));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = -1;
	int8_t x227 = -1;
	volatile int64_t x228 = INT64_MAX;

	t50 = (x225==((x226&x227)-x228));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint8_t x229 = 7U;
	volatile int32_t x230 = -977;
	int64_t x231 = 3521099LL;
	int64_t x232 = -1LL;
	volatile int32_t t51 = -55;

	t51 = (x229==((x230&x231)-x232));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint8_t x233 = 46U;
	volatile uint16_t x234 = 26594U;
	int64_t x235 = INT64_MIN;
	int8_t x236 = 1;
	volatile int32_t t52 = 181388767;

	t52 = (x233==((x234&x235)-x236));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x239 = -1;
	uint16_t x240 = UINT16_MAX;
	volatile int32_t t53 = -2896;

	t53 = (x237==((x238&x239)-x240));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x241 = INT16_MIN;
	int32_t x243 = INT32_MIN;
	static int64_t x244 = -936954185LL;
	int32_t t54 = -1;

	t54 = (x241==((x242&x243)-x244));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x245 = 2U;
	uint32_t x246 = 2109745U;
	uint32_t x247 = UINT32_MAX;
	volatile int16_t x248 = INT16_MAX;
	static volatile int32_t t55 = 19;

	t55 = (x245==((x246&x247)-x248));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x254 = 369LL;
	int64_t x255 = -220176090701898LL;
	int8_t x256 = INT8_MIN;

	t56 = (x253==((x254&x255)-x256));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x258 = 15LLU;
	volatile int8_t x259 = INT8_MAX;
	int32_t x260 = INT32_MIN;
	int32_t t57 = -523434;

	t57 = (x257==((x258&x259)-x260));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x262 = INT64_MAX;
	int64_t x263 = -1360083225734LL;
	static uint16_t x264 = UINT16_MAX;
	volatile int32_t t58 = -4;

	t58 = (x261==((x262&x263)-x264));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint64_t x265 = 954743LLU;
	static uint64_t x266 = 657LLU;
	int8_t x267 = 0;
	uint32_t x268 = 361U;

	t59 = (x265==((x266&x267)-x268));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x269 = -844903LL;
	volatile int64_t x270 = -1LL;
	uint32_t x271 = 2668847U;
	int32_t t60 = -60;

	t60 = (x269==((x270&x271)-x272));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint64_t x277 = 1626448LLU;
	uint16_t x279 = 3U;
	int32_t t61 = 1424;

	t61 = (x277==((x278&x279)-x280));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = INT16_MAX;
	int32_t x282 = INT32_MAX;
	int16_t x283 = -1015;

	t62 = (x281==((x282&x283)-x284));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x285 = -15;
	int16_t x287 = INT16_MIN;
	uint8_t x288 = UINT8_MAX;
	static int32_t t63 = 713863732;

	t63 = (x285==((x286&x287)-x288));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint64_t x293 = 3402698642082LLU;
	uint64_t x294 = 4003341464175LLU;
	int64_t x296 = 2044214436245517611LL;

	t64 = (x293==((x294&x295)-x296));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x301 = INT16_MAX;
	int64_t x302 = -1LL;
	static uint32_t x303 = 7100126U;
	uint16_t x304 = UINT16_MAX;

	t65 = (x301==((x302&x303)-x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	static uint32_t x306 = 43806U;
	uint64_t x307 = UINT64_MAX;
	int64_t x308 = INT64_MIN;

	t66 = (x305==((x306&x307)-x308));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint8_t x309 = 62U;
	static uint8_t x310 = 0U;
	uint8_t x311 = 59U;
	volatile int16_t x312 = INT16_MIN;

	t67 = (x309==((x310&x311)-x312));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint32_t x313 = UINT32_MAX;
	int32_t x314 = -1;
	static int16_t x315 = INT16_MIN;
	uint16_t x316 = 10207U;
	int32_t t68 = 234;

	t68 = (x313==((x314&x315)-x316));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x317 = 54U;
	int64_t x318 = INT64_MIN;
	uint32_t x319 = UINT32_MAX;
	int16_t x320 = -1644;
	int32_t t69 = -66;

	t69 = (x317==((x318&x319)-x320));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x321 = INT64_MIN;
	int16_t x322 = INT16_MIN;
	volatile int16_t x323 = INT16_MIN;
	int32_t x324 = -1;
	int32_t t70 = 43;

	t70 = (x321==((x322&x323)-x324));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x325 = 2371;
	int16_t x326 = INT16_MIN;
	int8_t x328 = INT8_MIN;
	volatile int32_t t71 = -26;

	t71 = (x325==((x326&x327)-x328));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x329 = -398;
	uint32_t x330 = 90265001U;
	uint64_t x331 = UINT64_MAX;
	static uint64_t x332 = 110LLU;
	int32_t t72 = -33;

	t72 = (x329==((x330&x331)-x332));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x333 = INT32_MIN;
	static int16_t x334 = 1208;
	uint16_t x335 = 1841U;
	int8_t x336 = 3;
	volatile int32_t t73 = -1871588;

	t73 = (x333==((x334&x335)-x336));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x337 = INT8_MIN;
	int32_t x339 = INT32_MIN;
	int64_t x340 = -70657LL;
	int32_t t74 = -306015040;

	t74 = (x337==((x338&x339)-x340));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x341 = INT8_MAX;
	int64_t x342 = -1LL;
	uint16_t x343 = 26285U;
	int8_t x344 = 0;

	t75 = (x341==((x342&x343)-x344));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x345 = 415;
	uint32_t x346 = UINT32_MAX;
	uint8_t x347 = 105U;

	t76 = (x345==((x346&x347)-x348));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint16_t x349 = 101U;
	volatile uint16_t x350 = UINT16_MAX;
	uint64_t x351 = 275396749399104412LLU;
	static uint64_t x352 = 7198317LLU;

	t77 = (x349==((x350&x351)-x352));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x353 = 3;
	int64_t x354 = -1LL;
	int16_t x355 = 19;
	uint16_t x356 = 7U;
	int32_t t78 = -105397;

	t78 = (x353==((x354&x355)-x356));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	uint64_t x357 = UINT64_MAX;
	static int16_t x359 = INT16_MIN;
	volatile int16_t x360 = INT16_MIN;
	volatile int32_t t79 = 12;

	t79 = (x357==((x358&x359)-x360));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x361 = INT16_MIN;
	uint64_t x362 = UINT64_MAX;
	int8_t x363 = -24;
	int32_t x364 = INT32_MIN;
	volatile int32_t t80 = 0;

	t80 = (x361==((x362&x363)-x364));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x365 = INT16_MIN;
	int8_t x366 = 0;

	t81 = (x365==((x366&x367)-x368));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x369 = INT16_MIN;
	int32_t x370 = INT32_MIN;
	int8_t x371 = INT8_MIN;
	static volatile int16_t x372 = -1;
	static volatile int32_t t82 = 817932407;

	t82 = (x369==((x370&x371)-x372));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint8_t x374 = 31U;
	uint8_t x375 = 123U;
	int32_t x376 = INT32_MAX;
	int32_t t83 = 1;

	t83 = (x373==((x374&x375)-x376));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x377 = -22;
	volatile int8_t x378 = INT8_MIN;
	volatile int16_t x379 = INT16_MAX;
	int8_t x380 = INT8_MIN;
	int32_t t84 = 1;

	t84 = (x377==((x378&x379)-x380));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x381 = -1;
	int8_t x382 = -1;
	volatile uint32_t x383 = 178U;
	static int32_t t85 = 1936;

	t85 = (x381==((x382&x383)-x384));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int64_t x385 = -1LL;
	volatile int32_t x386 = INT32_MIN;
	static int64_t x387 = -12965782LL;

	t86 = (x385==((x386&x387)-x388));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint64_t x389 = 1559040929502091271LLU;
	int16_t x391 = -1;
	int32_t x392 = INT32_MIN;
	volatile int32_t t87 = 3;

	t87 = (x389==((x390&x391)-x392));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x393 = INT8_MIN;
	int16_t x394 = -7;
	static int16_t x395 = INT16_MIN;
	int8_t x396 = INT8_MIN;
	volatile int32_t t88 = -26;

	t88 = (x393==((x394&x395)-x396));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x398 = UINT8_MAX;
	int32_t x399 = INT32_MIN;
	static volatile uint32_t x400 = 25U;
	int32_t t89 = -1;

	t89 = (x397==((x398&x399)-x400));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x402 = -1;
	static uint8_t x403 = UINT8_MAX;
	static int8_t x404 = -1;

	t90 = (x401==((x402&x403)-x404));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static volatile uint16_t x405 = 7U;
	int64_t x407 = -780409472723758074LL;
	uint8_t x408 = 10U;
	int32_t t91 = -2980;

	t91 = (x405==((x406&x407)-x408));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int8_t x409 = -1;
	uint64_t x410 = 108LLU;
	volatile int16_t x411 = INT16_MIN;
	int8_t x412 = INT8_MIN;
	int32_t t92 = -1;

	t92 = (x409==((x410&x411)-x412));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint32_t x413 = UINT32_MAX;
	static int32_t x414 = INT32_MIN;
	int32_t x415 = 424045588;
	int16_t x416 = 8;

	t93 = (x413==((x414&x415)-x416));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int32_t x422 = 1;
	volatile int64_t x423 = INT64_MIN;

	t94 = (x421==((x422&x423)-x424));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x425 = -114145974098403LL;
	int32_t t95 = -3;

	t95 = (x425==((x426&x427)-x428));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x430 = INT64_MIN;
	static int64_t x431 = INT64_MIN;
	int8_t x432 = -1;
	volatile int32_t t96 = 11;

	t96 = (x429==((x430&x431)-x432));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int16_t x433 = -1;
	uint32_t x434 = 0U;
	uint16_t x435 = 746U;
	uint32_t x436 = UINT32_MAX;
	int32_t t97 = -4623;

	t97 = (x433==((x434&x435)-x436));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x450 = -1;
	int16_t x451 = INT16_MAX;
	int8_t x452 = 0;
	static int32_t t98 = -600;

	t98 = (x449==((x450&x451)-x452));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int64_t x453 = -5957LL;
	int64_t x454 = 2729582096LL;
	int32_t x456 = -1;
	static volatile int32_t t99 = 1076;

	t99 = (x453==((x454&x455)-x456));

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

