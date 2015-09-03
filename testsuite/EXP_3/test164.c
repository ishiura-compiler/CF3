#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile int32_t t0 = -21548;
int8_t x5 = 1;
uint64_t x10 = UINT64_MAX;
volatile int32_t t2 = 0;
uint64_t x18 = UINT64_MAX;
uint32_t x32 = 58U;
int8_t x35 = 0;
int8_t x36 = INT8_MAX;
int32_t t7 = -20377;
int64_t x37 = INT64_MIN;
int16_t x39 = INT16_MAX;
static int8_t x44 = 1;
static int32_t t9 = 4103443;
static int32_t t10 = -205488706;
volatile int64_t x55 = -1LL;
int32_t t12 = 1331;
int16_t x66 = INT16_MIN;
static uint32_t x68 = 228012U;
int32_t t15 = -6894;
uint16_t x83 = UINT16_MAX;
static int64_t x90 = 812114871879322LL;
volatile int32_t t20 = 205;
int32_t x98 = INT32_MIN;
static volatile int16_t x103 = -1;
int8_t x107 = INT8_MAX;
int16_t x108 = -1855;
volatile int32_t t23 = -3451;
uint8_t x112 = 13U;
int8_t x122 = 0;
int8_t x125 = INT8_MIN;
static int32_t t28 = 48274346;
int8_t x137 = INT8_MAX;
int16_t x140 = 6;
uint8_t x142 = 14U;
volatile int64_t x143 = 118122369835552382LL;
static volatile int32_t t33 = -1;
volatile uint64_t x154 = 28927LLU;
static int16_t x157 = INT16_MAX;
int32_t x160 = INT32_MAX;
int16_t x165 = INT16_MAX;
int8_t x175 = -2;
uint32_t x184 = 35U;
uint32_t x196 = 0U;
int8_t x199 = 1;
int32_t t44 = -23033409;
static volatile uint32_t x208 = UINT32_MAX;
volatile int8_t x212 = INT8_MIN;
static volatile int64_t x231 = INT64_MIN;
static int16_t x234 = INT16_MIN;
volatile int8_t x242 = INT8_MIN;
volatile uint64_t x244 = UINT64_MAX;
volatile int32_t t52 = -26434;
int16_t x247 = INT16_MAX;
static volatile uint8_t x248 = 5U;
static volatile int8_t x250 = 3;
int64_t x257 = -1LL;
int64_t x258 = INT64_MAX;
int16_t x259 = -10517;
int64_t x267 = 529388871131965LL;
uint8_t x269 = 79U;
static volatile int8_t x271 = 3;
int64_t x278 = INT64_MIN;
uint8_t x279 = 52U;
uint32_t x284 = 22U;
int32_t t61 = 509;
uint32_t x301 = 48U;
volatile int16_t x302 = INT16_MIN;
int32_t t64 = 7;
int8_t x309 = 7;
volatile int16_t x315 = INT16_MAX;
int16_t x335 = 2;
int32_t t71 = -37599196;
int16_t x340 = 444;
int64_t x346 = INT64_MIN;
static volatile uint64_t x347 = 489325576783372LLU;
int32_t x348 = 10217;
uint8_t x353 = 25U;
uint8_t x368 = 31U;
volatile int32_t t77 = 0;
int32_t t78 = 83485448;
uint64_t x373 = 85579947320718LLU;
int16_t x374 = INT16_MAX;
int64_t x377 = -1155440706LL;
int16_t x380 = INT16_MAX;
int32_t t80 = -127250;
uint64_t x383 = 490276546004LLU;
volatile int8_t x388 = INT8_MAX;
uint64_t x392 = 558231298708LLU;
int16_t x393 = 28;
static int8_t x394 = INT8_MIN;
uint64_t x395 = 7553623192344510LLU;
int8_t x400 = 0;
volatile int32_t t85 = 0;
uint16_t x405 = UINT16_MAX;
int8_t x409 = -1;
int32_t x420 = INT32_MIN;
uint8_t x422 = 9U;
int32_t x429 = INT32_MAX;
uint16_t x430 = UINT16_MAX;
int16_t x431 = INT16_MAX;
int8_t x436 = -4;
int16_t x441 = -25;
int8_t x444 = -11;
int32_t t95 = 29;
int16_t x445 = INT16_MAX;
static volatile int8_t x449 = INT8_MIN;
volatile int64_t x450 = -1LL;
static volatile int32_t t98 = 896427;
int32_t x457 = -7480047;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int32_t x2 = INT32_MAX;
	int64_t x3 = 808767LL;
	int8_t x4 = -29;

	t0 = ((x1^x2)==(x3+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = 139132;
	volatile uint8_t x7 = UINT8_MAX;
	int64_t x8 = -2969837523568358983LL;
	int32_t t1 = -34658;

	t1 = ((x5^x6)==(x7+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile uint64_t x9 = 326LLU;
	static uint32_t x11 = UINT32_MAX;
	static int8_t x12 = -26;

	t2 = ((x9^x10)==(x11+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x13 = INT32_MAX;
	static uint16_t x14 = 441U;
	int64_t x15 = INT64_MAX;
	volatile uint16_t x16 = 0U;
	volatile int32_t t3 = 9;

	t3 = ((x13^x14)==(x15+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -1LL;
	uint32_t x19 = UINT32_MAX;
	uint16_t x20 = 1179U;
	int32_t t4 = -1828507;

	t4 = ((x17^x18)==(x19+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int8_t x21 = INT8_MAX;
	int64_t x22 = INT64_MIN;
	int64_t x23 = -1LL;
	volatile int32_t x24 = 20345155;
	volatile int32_t t5 = 8825;

	t5 = ((x21^x22)==(x23+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint16_t x29 = 8590U;
	static int64_t x30 = INT64_MIN;
	int32_t x31 = -1;
	volatile int32_t t6 = 1044146254;

	t6 = ((x29^x30)==(x31+x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x33 = -1;
	int32_t x34 = INT32_MIN;

	t7 = ((x33^x34)==(x35+x36));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int32_t x38 = -1;
	int64_t x40 = -1LL;
	int32_t t8 = 1529176;

	t8 = ((x37^x38)==(x39+x40));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int32_t x41 = 6731;
	volatile int32_t x42 = -241;
	int16_t x43 = -188;

	t9 = ((x41^x42)==(x43+x44));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static int8_t x45 = 1;
	int16_t x46 = INT16_MIN;
	volatile int8_t x47 = INT8_MAX;
	volatile uint16_t x48 = 230U;

	t10 = ((x45^x46)==(x47+x48));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x49 = 2000U;
	uint16_t x50 = UINT16_MAX;
	uint64_t x51 = 96175301LLU;
	int16_t x52 = 204;
	volatile int32_t t11 = 6762544;

	t11 = ((x49^x50)==(x51+x52));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x53 = INT8_MAX;
	static int8_t x54 = INT8_MAX;
	uint32_t x56 = UINT32_MAX;

	t12 = ((x53^x54)==(x55+x56));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = -1;
	int8_t x58 = INT8_MAX;
	uint64_t x59 = 206LLU;
	static int64_t x60 = 1007LL;
	volatile int32_t t13 = -454843592;

	t13 = ((x57^x58)==(x59+x60));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = INT64_MIN;
	int16_t x62 = INT16_MIN;
	int16_t x63 = INT16_MIN;
	uint64_t x64 = UINT64_MAX;
	volatile int32_t t14 = -1;

	t14 = ((x61^x62)==(x63+x64));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x65 = 1238LL;
	uint8_t x67 = 0U;

	t15 = ((x65^x66)==(x67+x68));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x77 = -125599556989974LL;
	static volatile uint16_t x78 = UINT16_MAX;
	uint16_t x79 = UINT16_MAX;
	int16_t x80 = -1;
	int32_t t16 = 197964;

	t16 = ((x77^x78)==(x79+x80));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x81 = 1070730793U;
	int16_t x82 = INT16_MAX;
	static volatile int8_t x84 = INT8_MAX;
	volatile int32_t t17 = 31;

	t17 = ((x81^x82)==(x83+x84));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int32_t x85 = -1;
	static int16_t x86 = 280;
	uint64_t x87 = 3LLU;
	volatile uint16_t x88 = 1U;
	int32_t t18 = -3;

	t18 = ((x85^x86)==(x87+x88));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint64_t x89 = 1786498917LLU;
	volatile int8_t x91 = 1;
	uint32_t x92 = 130U;
	static int32_t t19 = -124514;

	t19 = ((x89^x90)==(x91+x92));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x93 = UINT32_MAX;
	uint64_t x94 = 42840421949635LLU;
	uint64_t x95 = 4560361503617328LLU;
	static volatile int64_t x96 = -1LL;

	t20 = ((x93^x94)==(x95+x96));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x97 = INT8_MIN;
	int64_t x99 = INT64_MAX;
	volatile uint64_t x100 = UINT64_MAX;
	static volatile int32_t t21 = 71475;

	t21 = ((x97^x98)==(x99+x100));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x101 = INT16_MAX;
	volatile uint32_t x102 = UINT32_MAX;
	int16_t x104 = INT16_MIN;
	int32_t t22 = 43847;

	t22 = ((x101^x102)==(x103+x104));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x105 = 3256755627969687500LL;
	volatile int32_t x106 = 3239659;

	t23 = ((x105^x106)==(x107+x108));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x109 = INT32_MIN;
	static volatile uint8_t x110 = 1U;
	static volatile uint64_t x111 = 5LLU;
	int32_t t24 = -5;

	t24 = ((x109^x110)==(x111+x112));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x113 = 13461;
	volatile int8_t x114 = 9;
	int16_t x115 = 8530;
	uint64_t x116 = 4263591LLU;
	int32_t t25 = -57;

	t25 = ((x113^x114)==(x115+x116));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x117 = -18862898;
	static int32_t x118 = -1;
	volatile uint64_t x119 = 1016334502344871769LLU;
	int32_t x120 = -1;
	volatile int32_t t26 = 3;

	t26 = ((x117^x118)==(x119+x120));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x121 = 5U;
	volatile int64_t x123 = 219148023LL;
	static volatile int64_t x124 = -9481LL;
	int32_t t27 = -480826;

	t27 = ((x121^x122)==(x123+x124));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x126 = INT32_MIN;
	static int16_t x127 = -1;
	int16_t x128 = INT16_MIN;

	t28 = ((x125^x126)==(x127+x128));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint64_t x129 = UINT64_MAX;
	int8_t x130 = -1;
	int64_t x131 = -57484LL;
	uint32_t x132 = UINT32_MAX;
	volatile int32_t t29 = -102;

	t29 = ((x129^x130)==(x131+x132));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x138 = -1LL;
	uint64_t x139 = UINT64_MAX;
	int32_t t30 = -5400311;

	t30 = ((x137^x138)==(x139+x140));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x141 = INT8_MIN;
	volatile int32_t x144 = INT32_MIN;
	static int32_t t31 = 5199;

	t31 = ((x141^x142)==(x143+x144));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint64_t x145 = 1LLU;
	int32_t x146 = INT32_MIN;
	static int32_t x147 = INT32_MIN;
	int16_t x148 = 13193;
	volatile int32_t t32 = 27110490;

	t32 = ((x145^x146)==(x147+x148));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x149 = INT8_MIN;
	volatile int8_t x150 = 2;
	uint32_t x151 = UINT32_MAX;
	int8_t x152 = 1;

	t33 = ((x149^x150)==(x151+x152));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	static volatile int32_t x153 = INT32_MIN;
	int16_t x155 = 287;
	static int16_t x156 = INT16_MAX;
	static volatile int32_t t34 = -13025;

	t34 = ((x153^x154)==(x155+x156));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x158 = 1U;
	uint64_t x159 = UINT64_MAX;
	static volatile int32_t t35 = -3;

	t35 = ((x157^x158)==(x159+x160));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static int16_t x161 = INT16_MIN;
	static uint16_t x162 = UINT16_MAX;
	volatile uint64_t x163 = UINT64_MAX;
	static int32_t x164 = -1;
	int32_t t36 = 71423648;

	t36 = ((x161^x162)==(x163+x164));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x166 = 4986U;
	volatile uint64_t x167 = 6325LLU;
	int32_t x168 = INT32_MAX;
	volatile int32_t t37 = -601;

	t37 = ((x165^x166)==(x167+x168));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int64_t x169 = INT64_MIN;
	volatile int32_t x170 = INT32_MIN;
	int16_t x171 = INT16_MAX;
	uint8_t x172 = 3U;
	volatile int32_t t38 = 1632;

	t38 = ((x169^x170)==(x171+x172));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x173 = 394U;
	int32_t x174 = INT32_MIN;
	volatile uint8_t x176 = 0U;
	int32_t t39 = -996;

	t39 = ((x173^x174)==(x175+x176));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int64_t x181 = 17021702673413LL;
	int64_t x182 = INT64_MAX;
	int64_t x183 = INT64_MIN;
	volatile int32_t t40 = -14;

	t40 = ((x181^x182)==(x183+x184));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x185 = UINT32_MAX;
	volatile int32_t x186 = 8171281;
	int32_t x187 = -1;
	volatile uint8_t x188 = 46U;
	int32_t t41 = 3455037;

	t41 = ((x185^x186)==(x187+x188));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x189 = -1;
	int8_t x190 = INT8_MIN;
	int8_t x191 = INT8_MAX;
	int8_t x192 = INT8_MIN;
	static volatile int32_t t42 = 51492;

	t42 = ((x189^x190)==(x191+x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x193 = INT32_MIN;
	int16_t x194 = 33;
	int8_t x195 = -1;
	volatile int32_t t43 = -1;

	t43 = ((x193^x194)==(x195+x196));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -1LL;
	static int16_t x198 = INT16_MIN;
	static volatile int16_t x200 = INT16_MAX;

	t44 = ((x197^x198)==(x199+x200));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x201 = 9447598803157LL;
	int32_t x202 = INT32_MIN;
	int8_t x203 = -1;
	int16_t x204 = -216;
	volatile int32_t t45 = 25;

	t45 = ((x201^x202)==(x203+x204));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x205 = 17U;
	int8_t x206 = -1;
	volatile int8_t x207 = -15;
	volatile int32_t t46 = -2282208;

	t46 = ((x205^x206)==(x207+x208));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x209 = 0;
	int8_t x210 = INT8_MAX;
	uint32_t x211 = UINT32_MAX;
	static int32_t t47 = -1;

	t47 = ((x209^x210)==(x211+x212));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x213 = -1;
	volatile uint8_t x214 = UINT8_MAX;
	uint64_t x215 = 1541665017LLU;
	int64_t x216 = INT64_MAX;
	int32_t t48 = 114930;

	t48 = ((x213^x214)==(x215+x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x229 = 6925LL;
	static volatile uint16_t x230 = UINT16_MAX;
	uint16_t x232 = 14540U;
	int32_t t49 = 1;

	t49 = ((x229^x230)==(x231+x232));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int16_t x233 = INT16_MAX;
	static volatile int32_t x235 = 703260;
	uint64_t x236 = 12777212LLU;
	static int32_t t50 = -123024;

	t50 = ((x233^x234)==(x235+x236));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x237 = 916880405675LLU;
	int32_t x238 = INT32_MIN;
	uint16_t x239 = 3508U;
	int16_t x240 = INT16_MIN;
	int32_t t51 = 54;

	t51 = ((x237^x238)==(x239+x240));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x241 = -1613051994LL;
	volatile int16_t x243 = -1;

	t52 = ((x241^x242)==(x243+x244));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint64_t x245 = 5LLU;
	int64_t x246 = -1LL;
	volatile int32_t t53 = 3515;

	t53 = ((x245^x246)==(x247+x248));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint8_t x249 = 2U;
	int16_t x251 = INT16_MIN;
	int8_t x252 = INT8_MAX;
	volatile int32_t t54 = -11494361;

	t54 = ((x249^x250)==(x251+x252));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int8_t x260 = 7;
	volatile int32_t t55 = -356535785;

	t55 = ((x257^x258)==(x259+x260));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x261 = -92631486LL;
	int32_t x262 = INT32_MAX;
	volatile uint32_t x263 = 1U;
	static volatile uint64_t x264 = 7745378867097914LLU;
	int32_t t56 = 210485600;

	t56 = ((x261^x262)==(x263+x264));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x265 = 866263861778LLU;
	static uint8_t x266 = 18U;
	int8_t x268 = 1;
	int32_t t57 = 945;

	t57 = ((x265^x266)==(x267+x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int64_t x270 = -1LL;
	int16_t x272 = INT16_MIN;
	static volatile int32_t t58 = -29887;

	t58 = ((x269^x270)==(x271+x272));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = 0;
	uint16_t x275 = UINT16_MAX;
	static int8_t x276 = INT8_MIN;
	static volatile int32_t t59 = -434369;

	t59 = ((x273^x274)==(x275+x276));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x277 = UINT16_MAX;
	int32_t x280 = INT32_MIN;
	int32_t t60 = 941;

	t60 = ((x277^x278)==(x279+x280));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x281 = -1;
	static int8_t x282 = -1;
	volatile uint32_t x283 = 7050U;

	t61 = ((x281^x282)==(x283+x284));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x285 = -7;
	uint32_t x286 = UINT32_MAX;
	int16_t x287 = -99;
	volatile int64_t x288 = -1LL;
	int32_t t62 = 57739;

	t62 = ((x285^x286)==(x287+x288));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x289 = 12677U;
	volatile int32_t x290 = INT32_MIN;
	static int8_t x291 = -1;
	int8_t x292 = INT8_MIN;
	volatile int32_t t63 = -202039;

	t63 = ((x289^x290)==(x291+x292));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x303 = INT32_MIN;
	volatile int8_t x304 = 2;

	t64 = ((x301^x302)==(x303+x304));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int64_t x305 = -1LL;
	uint64_t x306 = 10790079305265LLU;
	int32_t x307 = -848532583;
	int32_t x308 = 25661;
	volatile int32_t t65 = 3563;

	t65 = ((x305^x306)==(x307+x308));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x310 = -69795;
	int32_t x311 = -1;
	volatile uint64_t x312 = 3083642031423226367LLU;
	static int32_t t66 = 765;

	t66 = ((x309^x310)==(x311+x312));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint32_t x313 = 168856857U;
	static uint64_t x314 = 12129093759494564LLU;
	int16_t x316 = INT16_MIN;
	volatile int32_t t67 = -36534340;

	t67 = ((x313^x314)==(x315+x316));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x321 = INT16_MIN;
	uint32_t x322 = UINT32_MAX;
	uint64_t x323 = 3568586707575LLU;
	volatile int64_t x324 = INT64_MAX;
	int32_t t68 = 302379049;

	t68 = ((x321^x322)==(x323+x324));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x325 = -611809547345158378LL;
	int16_t x326 = INT16_MIN;
	uint64_t x327 = UINT64_MAX;
	int32_t x328 = INT32_MIN;
	int32_t t69 = -11;

	t69 = ((x325^x326)==(x327+x328));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x329 = UINT16_MAX;
	uint64_t x330 = 24819849916760645LLU;
	int64_t x331 = -1LL;
	int64_t x332 = 31096588LL;
	static volatile int32_t t70 = -28900;

	t70 = ((x329^x330)==(x331+x332));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x333 = UINT8_MAX;
	static uint64_t x334 = UINT64_MAX;
	static volatile uint8_t x336 = 2U;

	t71 = ((x333^x334)==(x335+x336));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x337 = -1;
	int64_t x338 = INT64_MIN;
	int8_t x339 = INT8_MAX;
	int32_t t72 = 354272;

	t72 = ((x337^x338)==(x339+x340));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int32_t x345 = -781076;
	volatile int32_t t73 = -219;

	t73 = ((x345^x346)==(x347+x348));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static uint32_t x354 = 235U;
	uint8_t x355 = UINT8_MAX;
	int64_t x356 = -1LL;
	volatile int32_t t74 = 305090513;

	t74 = ((x353^x354)==(x355+x356));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint64_t x357 = 1LLU;
	int8_t x358 = -7;
	static uint8_t x359 = 6U;
	static int16_t x360 = INT16_MIN;
	static int32_t t75 = 7100327;

	t75 = ((x357^x358)==(x359+x360));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	static uint32_t x361 = 3U;
	int16_t x362 = INT16_MIN;
	volatile int64_t x363 = 170475782036959LL;
	int64_t x364 = -1LL;
	static volatile int32_t t76 = 4305154;

	t76 = ((x361^x362)==(x363+x364));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x365 = 223276U;
	int32_t x366 = -82192451;
	uint16_t x367 = 12481U;

	t77 = ((x365^x366)==(x367+x368));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x369 = INT16_MAX;
	int64_t x370 = -14978701195LL;
	static int8_t x371 = INT8_MAX;
	volatile int8_t x372 = INT8_MAX;

	t78 = ((x369^x370)==(x371+x372));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x375 = -28;
	uint32_t x376 = 769710U;
	int32_t t79 = 254600673;

	t79 = ((x373^x374)==(x375+x376));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x378 = -244;
	int16_t x379 = 5071;

	t80 = ((x377^x378)==(x379+x380));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int32_t x381 = INT32_MIN;
	uint32_t x382 = UINT32_MAX;
	static int16_t x384 = INT16_MIN;
	int32_t t81 = 100;

	t81 = ((x381^x382)==(x383+x384));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x385 = -1;
	volatile int32_t x386 = -26238189;
	uint32_t x387 = UINT32_MAX;
	int32_t t82 = -4795113;

	t82 = ((x385^x386)==(x387+x388));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint64_t x389 = 2018006553561314764LLU;
	int16_t x390 = INT16_MIN;
	volatile int64_t x391 = -1LL;
	int32_t t83 = -40;

	t83 = ((x389^x390)==(x391+x392));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x396 = INT64_MIN;
	volatile int32_t t84 = 112;

	t84 = ((x393^x394)==(x395+x396));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x397 = INT32_MIN;
	static uint8_t x398 = 0U;
	int8_t x399 = 0;

	t85 = ((x397^x398)==(x399+x400));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x401 = 25U;
	static uint8_t x402 = 1U;
	uint8_t x403 = UINT8_MAX;
	static int8_t x404 = INT8_MAX;
	volatile int32_t t86 = -622048;

	t86 = ((x401^x402)==(x403+x404));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x406 = 129259554LLU;
	uint8_t x407 = 59U;
	uint32_t x408 = UINT32_MAX;
	volatile int32_t t87 = 7079797;

	t87 = ((x405^x406)==(x407+x408));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint64_t x410 = UINT64_MAX;
	int8_t x411 = INT8_MIN;
	uint16_t x412 = UINT16_MAX;
	int32_t t88 = -2240;

	t88 = ((x409^x410)==(x411+x412));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	volatile int8_t x417 = 0;
	volatile uint8_t x418 = UINT8_MAX;
	int8_t x419 = INT8_MAX;
	static volatile int32_t t89 = -25669;

	t89 = ((x417^x418)==(x419+x420));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x421 = 2554U;
	static uint32_t x423 = 65960418U;
	int8_t x424 = -1;
	static int32_t t90 = -412;

	t90 = ((x421^x422)==(x423+x424));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int32_t x425 = INT32_MAX;
	uint64_t x426 = 7920014LLU;
	int16_t x427 = INT16_MIN;
	uint8_t x428 = 31U;
	static volatile int32_t t91 = 61;

	t91 = ((x425^x426)==(x427+x428));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x432 = -1;
	volatile int32_t t92 = 373;

	t92 = ((x429^x430)==(x431+x432));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint16_t x433 = 4606U;
	uint64_t x434 = 5881649761268455995LLU;
	static uint16_t x435 = UINT16_MAX;
	int32_t t93 = -39413775;

	t93 = ((x433^x434)==(x435+x436));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x437 = UINT16_MAX;
	static uint8_t x438 = 18U;
	int8_t x439 = INT8_MIN;
	int64_t x440 = -1LL;
	int32_t t94 = -1793745;

	t94 = ((x437^x438)==(x439+x440));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint32_t x442 = 21U;
	volatile int8_t x443 = INT8_MAX;

	t95 = ((x441^x442)==(x443+x444));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x446 = INT8_MIN;
	uint8_t x447 = 94U;
	volatile int8_t x448 = -1;
	static volatile int32_t t96 = -1319515;

	t96 = ((x445^x446)==(x447+x448));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	static int8_t x451 = -1;
	volatile uint32_t x452 = UINT32_MAX;
	volatile int32_t t97 = 316514;

	t97 = ((x449^x450)==(x451+x452));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x453 = INT32_MIN;
	int32_t x454 = -1;
	int16_t x455 = -1;
	uint32_t x456 = 65859519U;

	t98 = ((x453^x454)==(x455+x456));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x458 = -11868;
	int16_t x459 = INT16_MAX;
	int16_t x460 = INT16_MAX;
	int32_t t99 = -6650644;

	t99 = ((x457^x458)==(x459+x460));

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

