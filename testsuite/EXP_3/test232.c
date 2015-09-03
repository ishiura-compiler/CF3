#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x6 = 1859U;
volatile int64_t x8 = -1LL;
volatile uint32_t x9 = 804849244U;
volatile uint32_t x16 = 380145U;
static int8_t x18 = -1;
volatile int64_t x20 = -39357LL;
uint32_t x24 = 1U;
int32_t x27 = INT32_MIN;
int64_t x28 = -1LL;
uint32_t x32 = 1593870044U;
int64_t t10 = 16160198LL;
volatile int16_t x51 = INT16_MAX;
static int32_t x57 = INT32_MAX;
static volatile uint64_t t13 = 54659481998LLU;
uint8_t x63 = 45U;
volatile int32_t x67 = INT32_MIN;
volatile int32_t x75 = INT32_MIN;
int64_t x76 = INT64_MIN;
uint64_t x80 = UINT64_MAX;
int16_t x91 = -1;
uint8_t x96 = 41U;
int64_t x99 = 26878LL;
int32_t x102 = 310;
int32_t t23 = -100997004;
static int8_t x109 = -1;
volatile uint16_t x112 = 6U;
int16_t x113 = 1980;
int64_t x119 = INT64_MAX;
volatile int64_t t26 = 51889302087784LL;
volatile uint64_t x122 = UINT64_MAX;
int16_t x125 = INT16_MIN;
int64_t x128 = INT64_MAX;
uint64_t x132 = 58861LLU;
static uint64_t t29 = 1LLU;
int64_t x138 = INT64_MAX;
static int16_t x144 = -1;
static uint32_t x146 = 454500U;
uint32_t x148 = UINT32_MAX;
static uint16_t x153 = UINT16_MAX;
int8_t x155 = 4;
static int16_t x160 = INT16_MIN;
static uint32_t t36 = 55U;
uint32_t x169 = 3658U;
uint64_t x179 = 7409285531485684992LLU;
int64_t x186 = 120LL;
volatile int16_t x198 = -1;
uint64_t t44 = 2097472968526291472LLU;
uint16_t x206 = 23656U;
int8_t x213 = 1;
volatile int64_t x221 = INT64_MIN;
uint32_t x238 = 227098U;
volatile uint16_t x248 = 1U;
static volatile int64_t t51 = 1LL;
volatile int16_t x256 = INT16_MIN;
int8_t x257 = INT8_MAX;
uint32_t t54 = 230690489U;
static volatile uint16_t x261 = 2027U;
int32_t x263 = -724327021;
uint64_t x271 = UINT64_MAX;
uint32_t x272 = 31U;
int8_t x274 = -1;
static volatile int32_t x276 = INT32_MAX;
int64_t x288 = INT64_MIN;
int16_t x302 = INT16_MIN;
int32_t x311 = INT32_MIN;
uint16_t x321 = UINT16_MAX;
int8_t x325 = INT8_MAX;
static int64_t x328 = -384168202LL;
uint64_t x337 = UINT64_MAX;
uint8_t x344 = UINT8_MAX;
static volatile uint64_t t74 = 69432430LLU;
static int64_t x365 = -45360554LL;
volatile uint64_t t76 = 26LLU;
uint64_t x372 = 111972979191444840LLU;
uint16_t x374 = 1U;
static volatile uint8_t x375 = 1U;
int32_t t78 = -41133;
int64_t x377 = -1LL;
static uint16_t x379 = UINT16_MAX;
uint16_t x380 = 22245U;
volatile int64_t t79 = -1LL;
static volatile uint32_t t81 = 61057U;
volatile int64_t x396 = 2924011026405706LL;
int32_t x400 = 58818;
uint16_t x405 = UINT16_MAX;
int32_t x406 = INT32_MAX;
static int64_t x407 = -741496041LL;
volatile uint32_t x412 = UINT32_MAX;
static int64_t x415 = 58LL;
int64_t x422 = -2463574262222811611LL;
uint64_t t90 = 288114924449185273LLU;
int32_t t91 = -47;
static uint32_t x437 = UINT32_MAX;
static int16_t x439 = -7;
int32_t x442 = -8499;
int64_t x449 = INT64_MIN;
uint8_t x452 = UINT8_MAX;
int8_t x459 = INT8_MAX;
static uint64_t t97 = 874264LLU;


void f0(void) {
	volatile int64_t x1 = 34541749823557LL;
	int16_t x2 = -1;
	int8_t x3 = -11;
	static int16_t x4 = 193;
	int64_t t0 = -3LL;

	t0 = ((x1%x2)&(x3-x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = INT16_MIN;
	int8_t x7 = -1;
	volatile int64_t t1 = 27146LL;

	t1 = ((x5%x6)&(x7-x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = INT16_MAX;
	int32_t x11 = INT32_MIN;
	static int32_t x12 = -1;
	static volatile uint32_t t2 = 2894U;

	t2 = ((x9%x10)&(x11-x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MAX;
	int8_t x14 = INT8_MIN;
	int64_t x15 = -1LL;
	static volatile int64_t t3 = -1346LL;

	t3 = ((x13%x14)&(x15-x16));

	if (t3 != 14LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int64_t x19 = INT64_MIN;
	static volatile int64_t t4 = -45LL;

	t4 = ((x17%x18)&(x19-x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MAX;
	static int8_t x22 = -33;
	int16_t x23 = INT16_MAX;
	uint32_t t5 = 5946015U;

	t5 = ((x21%x22)&(x23-x24));

	if (t5 != 28U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = -37133;
	int64_t x26 = -3332470937077601LL;
	int64_t t6 = -10226223620971LL;

	t6 = ((x25%x26)&(x27-x28));

	if (t6 != -2147483647LL) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int32_t x30 = -3851510;
	int32_t x31 = INT32_MIN;
	uint32_t t7 = 10U;

	t7 = ((x29%x30)&(x31-x32));

	if (t7 != 553613568U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	int32_t x34 = INT32_MIN;
	static int32_t x35 = INT32_MIN;
	static int16_t x36 = INT16_MIN;
	int32_t t8 = -2;

	t8 = ((x33%x34)&(x35-x36));

	if (t8 != -2147450880) { NG(); } else { ; }
	
}

void f9(void) {
	static volatile int32_t x37 = INT32_MIN;
	int64_t x38 = 2132947421767752891LL;
	int64_t x39 = INT64_MAX;
	volatile int8_t x40 = 49;
	int64_t t9 = -7LL;

	t9 = ((x37%x38)&(x39-x40));

	if (t9 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = 19U;
	static int32_t x42 = -13;
	int32_t x43 = INT32_MIN;
	int64_t x44 = INT64_MIN;

	t10 = ((x41%x42)&(x43-x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = -1;
	uint64_t x46 = UINT64_MAX;
	volatile int32_t x47 = 13765785;
	int16_t x48 = INT16_MIN;
	volatile uint64_t t11 = 2601628442851LLU;

	t11 = ((x45%x46)&(x47-x48));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = -1LL;
	int8_t x50 = 2;
	volatile uint64_t x52 = UINT64_MAX;
	static volatile uint64_t t12 = 421571748191597536LLU;

	t12 = ((x49%x50)&(x51-x52));

	if (t12 != 32768LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x58 = 85199864642501LLU;
	int8_t x59 = -4;
	static uint32_t x60 = 2419387U;

	t13 = ((x57%x58)&(x59-x60));

	if (t13 != 2145064257LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x61 = 0LL;
	uint16_t x62 = 2126U;
	int8_t x64 = INT8_MAX;
	volatile int64_t t14 = -4379640445104303LL;

	t14 = ((x61%x62)&(x63-x64));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	static int64_t x65 = INT64_MIN;
	int64_t x66 = INT64_MIN;
	static int8_t x68 = INT8_MIN;
	volatile int64_t t15 = 236LL;

	t15 = ((x65%x66)&(x67-x68));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile uint8_t x69 = 3U;
	volatile int16_t x70 = INT16_MIN;
	int16_t x71 = INT16_MAX;
	uint32_t x72 = 63576U;
	uint32_t t16 = 60U;

	t16 = ((x69%x70)&(x71-x72));

	if (t16 != 3U) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MAX;
	int64_t x74 = INT64_MIN;
	static volatile int64_t t17 = 27LL;

	t17 = ((x73%x74)&(x75-x76));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = 7;
	volatile int32_t x78 = INT32_MIN;
	int64_t x79 = INT64_MAX;
	volatile uint64_t t18 = 438803LLU;

	t18 = ((x77%x78)&(x79-x80));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x89 = UINT8_MAX;
	uint8_t x90 = 34U;
	int16_t x92 = -564;
	volatile int32_t t19 = 1;

	t19 = ((x89%x90)&(x91-x92));

	if (t19 != 17) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x93 = -1;
	volatile int8_t x94 = INT8_MAX;
	static int32_t x95 = 302094399;
	volatile int32_t t20 = 27967765;

	t20 = ((x93%x94)&(x95-x96));

	if (t20 != 302094358) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x97 = UINT16_MAX;
	int64_t x98 = INT64_MAX;
	static int64_t x100 = INT64_MAX;
	volatile int64_t t21 = 120LL;

	t21 = ((x97%x98)&(x99-x100));

	if (t21 != 26879LL) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x101 = INT32_MAX;
	int64_t x103 = -234983776854498LL;
	static uint64_t x104 = 9LLU;
	uint64_t t22 = 8022LLU;

	t22 = ((x101%x102)&(x103-x104));

	if (t22 != 17LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x105 = 303;
	static volatile int16_t x106 = INT16_MIN;
	int8_t x107 = -1;
	int16_t x108 = 13442;

	t23 = ((x105%x106)&(x107-x108));

	if (t23 != 301) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x110 = -15157;
	static int32_t x111 = -1;
	int32_t t24 = -2;

	t24 = ((x109%x110)&(x111-x112));

	if (t24 != -7) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x114 = -1;
	volatile int64_t x115 = INT64_MIN;
	int8_t x116 = -6;
	volatile int64_t t25 = -3915884LL;

	t25 = ((x113%x114)&(x115-x116));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x117 = 3;
	static int16_t x118 = -1;
	static uint32_t x120 = 59282363U;

	t26 = ((x117%x118)&(x119-x120));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x121 = INT32_MIN;
	int64_t x123 = -1LL;
	uint8_t x124 = UINT8_MAX;
	static uint64_t t27 = 87500430110087991LLU;

	t27 = ((x121%x122)&(x123-x124));

	if (t27 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x126 = INT8_MAX;
	static int16_t x127 = INT16_MAX;
	static int64_t t28 = 19274182590753214LL;

	t28 = ((x125%x126)&(x127-x128));

	if (t28 != -9223372036854743040LL) { NG(); } else { ; }
	
}

void f29(void) {
	static uint8_t x129 = 104U;
	uint8_t x130 = 4U;
	volatile int32_t x131 = -4311;

	t29 = ((x129%x130)&(x131-x132));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x133 = INT8_MAX;
	uint32_t x134 = 229U;
	static int16_t x135 = INT16_MIN;
	uint8_t x136 = 30U;
	uint32_t t30 = 42095629U;

	t30 = ((x133%x134)&(x135-x136));

	if (t30 != 98U) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x137 = 1049U;
	int32_t x139 = INT32_MIN;
	int16_t x140 = -1866;
	static int64_t t31 = -20316875195272LL;

	t31 = ((x137%x138)&(x139-x140));

	if (t31 != 1032LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x141 = 7415883066531824419LLU;
	int64_t x142 = INT64_MIN;
	volatile uint8_t x143 = 30U;
	static volatile uint64_t t32 = 1958982523459LLU;

	t32 = ((x141%x142)&(x143-x144));

	if (t32 != 3LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x145 = INT16_MAX;
	int8_t x147 = 0;
	uint32_t t33 = 70585U;

	t33 = ((x145%x146)&(x147-x148));

	if (t33 != 1U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x154 = 566;
	int64_t x156 = -1LL;
	int64_t t34 = 950LL;

	t34 = ((x153%x154)&(x155-x156));

	if (t34 != 5LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x157 = 21191U;
	static int8_t x158 = INT8_MIN;
	int8_t x159 = INT8_MIN;
	volatile uint32_t t35 = 1U;

	t35 = ((x157%x158)&(x159-x160));

	if (t35 != 21120U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint8_t x165 = 2U;
	static volatile int32_t x166 = -94603328;
	volatile uint32_t x167 = 27306U;
	int16_t x168 = INT16_MIN;

	t36 = ((x165%x166)&(x167-x168));

	if (t36 != 2U) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint32_t x170 = 4850U;
	uint32_t x171 = UINT32_MAX;
	int16_t x172 = -1;
	volatile uint32_t t37 = 31883U;

	t37 = ((x169%x170)&(x171-x172));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x173 = INT8_MIN;
	static int32_t x174 = 26;
	volatile uint64_t x175 = 4734667996840730124LLU;
	int64_t x176 = INT64_MIN;
	uint64_t t38 = 7LLU;

	t38 = ((x173%x174)&(x175-x176));

	if (t38 != 13958040033695505928LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile int16_t x177 = 2777;
	int32_t x178 = INT32_MAX;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t39 = 21335183121622210LLU;

	t39 = ((x177%x178)&(x179-x180));

	if (t39 != 1LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int16_t x181 = -1;
	int64_t x182 = -16530055436LL;
	int64_t x183 = INT64_MIN;
	int16_t x184 = -1;
	static int64_t t40 = 642503526662LL;

	t40 = ((x181%x182)&(x183-x184));

	if (t40 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x185 = INT8_MIN;
	volatile uint8_t x187 = 25U;
	int64_t x188 = INT64_MAX;
	volatile int64_t t41 = 107536LL;

	t41 = ((x185%x186)&(x187-x188));

	if (t41 != -9223372036854775784LL) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = 30U;
	int16_t x190 = -1;
	static uint8_t x191 = 1U;
	int32_t x192 = -2;
	int32_t t42 = 0;

	t42 = ((x189%x190)&(x191-x192));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x193 = -1;
	static volatile uint64_t x194 = 210797443LLU;
	static uint32_t x195 = UINT32_MAX;
	uint16_t x196 = 31U;
	uint64_t t43 = 2387165777750836LLU;

	t43 = ((x193%x194)&(x195-x196));

	if (t43 != 4553728LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x197 = 3697078;
	uint64_t x199 = UINT64_MAX;
	uint32_t x200 = UINT32_MAX;

	t44 = ((x197%x198)&(x199-x200));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint64_t x205 = 506914091815611LLU;
	volatile int8_t x207 = -15;
	int64_t x208 = -1LL;
	volatile uint64_t t45 = 392LLU;

	t45 = ((x205%x206)&(x207-x208));

	if (t45 != 23074LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint16_t x214 = UINT16_MAX;
	int32_t x215 = INT32_MAX;
	int32_t x216 = 5;
	int32_t t46 = 130170878;

	t46 = ((x213%x214)&(x215-x216));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x222 = INT16_MAX;
	int32_t x223 = -3250;
	volatile uint8_t x224 = 46U;
	volatile int64_t t47 = 3LL;

	t47 = ((x221%x222)&(x223-x224));

	if (t47 != -3296LL) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x225 = INT8_MIN;
	volatile int8_t x226 = INT8_MAX;
	int8_t x227 = INT8_MIN;
	uint32_t x228 = 676440U;
	volatile uint32_t t48 = 1635U;

	t48 = ((x225%x226)&(x227-x228));

	if (t48 != 4294290728U) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x233 = -137310896857085075LL;
	static uint64_t x234 = 315736LLU;
	int8_t x235 = INT8_MIN;
	static uint16_t x236 = UINT16_MAX;
	volatile uint64_t t49 = 384452041553LLU;

	t49 = ((x233%x234)&(x235-x236));

	if (t49 != 161921LLU) { NG(); } else { ; }
	
}

void f50(void) {
	static int8_t x237 = INT8_MIN;
	uint64_t x239 = 5574014LLU;
	int8_t x240 = -15;
	uint64_t t50 = 1284228760638969553LLU;

	t50 = ((x237%x238)&(x239-x240));

	if (t50 != 68736LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int64_t x245 = 47LL;
	int8_t x246 = INT8_MIN;
	int8_t x247 = -1;

	t51 = ((x245%x246)&(x247-x248));

	if (t51 != 46LL) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x249 = INT8_MIN;
	int8_t x250 = INT8_MAX;
	int32_t x251 = -11749543;
	uint32_t x252 = 3297716U;
	uint32_t t52 = 224925U;

	t52 = ((x249%x250)&(x251-x252));

	if (t52 != 4279920037U) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x253 = -1;
	volatile int8_t x254 = -1;
	static int16_t x255 = -1;
	int32_t t53 = 117074120;

	t53 = ((x253%x254)&(x255-x256));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x258 = 5U;
	static int8_t x259 = 11;
	int32_t x260 = -1;

	t54 = ((x257%x258)&(x259-x260));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x262 = -1;
	volatile uint16_t x264 = UINT16_MAX;
	static int32_t t55 = 1;

	t55 = ((x261%x262)&(x263-x264));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x265 = 3035756914355LL;
	static int64_t x266 = -1LL;
	uint32_t x267 = 23988U;
	volatile int32_t x268 = INT32_MIN;
	int64_t t56 = -371942245474LL;

	t56 = ((x265%x266)&(x267-x268));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x269 = -1;
	int64_t x270 = -1LL;
	volatile uint64_t t57 = 969580LLU;

	t57 = ((x269%x270)&(x271-x272));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x273 = 578238LL;
	static uint8_t x275 = 6U;
	volatile int64_t t58 = 19LL;

	t58 = ((x273%x274)&(x275-x276));

	if (t58 != 0LL) { NG(); } else { ; }
	
}

void f59(void) {
	static volatile uint8_t x281 = UINT8_MAX;
	static int16_t x282 = 3;
	static uint64_t x283 = 12358745346LLU;
	volatile int16_t x284 = INT16_MIN;
	uint64_t t59 = 230976397223894LLU;

	t59 = ((x281%x282)&(x283-x284));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	uint32_t x285 = UINT32_MAX;
	int32_t x286 = INT32_MAX;
	volatile uint64_t x287 = 116LLU;
	uint64_t t60 = 3404596527859294LLU;

	t60 = ((x285%x286)&(x287-x288));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x289 = INT64_MIN;
	int16_t x290 = 763;
	int16_t x291 = INT16_MIN;
	volatile int32_t x292 = -1;
	static volatile int64_t t61 = 25893886051LL;

	t61 = ((x289%x290)&(x291-x292));

	if (t61 != -32767LL) { NG(); } else { ; }
	
}

void f62(void) {
	static uint64_t x293 = UINT64_MAX;
	uint64_t x294 = 9823LLU;
	int8_t x295 = -1;
	volatile int64_t x296 = INT64_MIN;
	volatile uint64_t t62 = 17977059LLU;

	t62 = ((x293%x294)&(x295-x296));

	if (t62 != 9706LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x301 = -1LL;
	uint16_t x303 = UINT16_MAX;
	uint8_t x304 = 15U;
	int64_t t63 = -75685475143256220LL;

	t63 = ((x301%x302)&(x303-x304));

	if (t63 != 65520LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint64_t x305 = UINT64_MAX;
	int16_t x306 = -1;
	int32_t x307 = 2498886;
	int64_t x308 = -11495347LL;
	uint64_t t64 = 2959533LLU;

	t64 = ((x305%x306)&(x307-x308));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x309 = -21;
	uint8_t x310 = 1U;
	volatile int64_t x312 = -1274754353069404LL;
	static int64_t t65 = -95LL;

	t65 = ((x309%x310)&(x311-x312));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int8_t x313 = INT8_MAX;
	uint64_t x314 = UINT64_MAX;
	int16_t x315 = INT16_MIN;
	static volatile int8_t x316 = INT8_MIN;
	uint64_t t66 = 14914LLU;

	t66 = ((x313%x314)&(x315-x316));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x317 = 12;
	uint64_t x318 = 1LLU;
	int16_t x319 = INT16_MIN;
	int32_t x320 = -1;
	volatile uint64_t t67 = 5538306LLU;

	t67 = ((x317%x318)&(x319-x320));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x322 = 39837169U;
	static int16_t x323 = INT16_MIN;
	uint16_t x324 = UINT16_MAX;
	volatile uint32_t t68 = 1188188478U;

	t68 = ((x321%x322)&(x323-x324));

	if (t68 != 32769U) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x326 = 44U;
	uint8_t x327 = 14U;
	volatile int64_t t69 = 224567839784150704LL;

	t69 = ((x325%x326)&(x327-x328));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint64_t x338 = 68478311620LLU;
	int32_t x339 = INT32_MAX;
	int64_t x340 = 24305870542528537LL;
	volatile uint64_t t70 = 0LLU;

	t70 = ((x337%x338)&(x339-x340));

	if (t70 != 592518LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = INT8_MIN;
	volatile int16_t x343 = 11;
	volatile int64_t t71 = -35825LL;

	t71 = ((x341%x342)&(x343-x344));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int16_t x345 = 12921;
	int64_t x346 = INT64_MIN;
	uint64_t x347 = 62LLU;
	uint8_t x348 = 21U;
	volatile uint64_t t72 = 322501LLU;

	t72 = ((x345%x346)&(x347-x348));

	if (t72 != 41LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x349 = 12;
	int16_t x350 = 851;
	int16_t x351 = -2;
	int64_t x352 = INT64_MIN;
	int64_t t73 = -2930LL;

	t73 = ((x349%x350)&(x351-x352));

	if (t73 != 12LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x353 = 8919751407077601517LLU;
	volatile int8_t x354 = INT8_MIN;
	int64_t x355 = INT64_MAX;
	static uint8_t x356 = 75U;

	t74 = ((x353%x354)&(x355-x356));

	if (t74 != 8919751407077601444LLU) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int16_t x357 = 40;
	static volatile uint16_t x358 = 6390U;
	volatile uint16_t x359 = 242U;
	int16_t x360 = INT16_MIN;
	static volatile int32_t t75 = 3529;

	t75 = ((x357%x358)&(x359-x360));

	if (t75 != 32) { NG(); } else { ; }
	
}

void f76(void) {
	volatile int16_t x366 = INT16_MIN;
	uint64_t x367 = UINT64_MAX;
	static uint32_t x368 = UINT32_MAX;

	t76 = ((x365%x366)&(x367-x368));

	if (t76 != 18446744069414584320LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x369 = 1999;
	uint8_t x370 = 14U;
	int32_t x371 = -1;
	uint64_t t77 = 195245644391679327LLU;

	t77 = ((x369%x370)&(x371-x372));

	if (t77 != 3LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x373 = INT32_MAX;
	int8_t x376 = INT8_MIN;

	t78 = ((x373%x374)&(x375-x376));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static int32_t x378 = INT32_MAX;

	t79 = ((x377%x378)&(x379-x380));

	if (t79 != 43290LL) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x385 = -73725261;
	uint32_t x386 = UINT32_MAX;
	uint8_t x387 = 2U;
	volatile int8_t x388 = INT8_MIN;
	volatile uint32_t t80 = 966071U;

	t80 = ((x385%x386)&(x387-x388));

	if (t80 != 130U) { NG(); } else { ; }
	
}

void f81(void) {
	static uint32_t x389 = 31420848U;
	static int32_t x390 = INT32_MAX;
	int16_t x391 = 14;
	volatile int8_t x392 = -26;

	t81 = ((x389%x390)&(x391-x392));

	if (t81 != 32U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x393 = -252;
	uint16_t x394 = 1938U;
	int8_t x395 = INT8_MIN;
	int64_t t82 = -30244484800319380LL;

	t82 = ((x393%x394)&(x395-x396));

	if (t82 != -2924011026405884LL) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x397 = 53U;
	int16_t x398 = INT16_MAX;
	int64_t x399 = INT64_MAX;
	int64_t t83 = 369646430663LL;

	t83 = ((x397%x398)&(x399-x400));

	if (t83 != 53LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile uint32_t x401 = 1893612192U;
	static int32_t x402 = INT32_MAX;
	uint16_t x403 = 63U;
	int16_t x404 = 0;
	uint32_t t84 = 4622U;

	t84 = ((x401%x402)&(x403-x404));

	if (t84 != 32U) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x408 = 7;
	int64_t t85 = -1834976211392021LL;

	t85 = ((x405%x406)&(x407-x408));

	if (t85 != 43792LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x409 = 3;
	int64_t x410 = INT64_MIN;
	uint64_t x411 = UINT64_MAX;
	volatile uint64_t t86 = 2573491LLU;

	t86 = ((x409%x410)&(x411-x412));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x413 = INT16_MAX;
	int16_t x414 = INT16_MIN;
	int8_t x416 = INT8_MIN;
	static volatile int64_t t87 = -187187LL;

	t87 = ((x413%x414)&(x415-x416));

	if (t87 != 186LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x417 = 0;
	int32_t x418 = INT32_MIN;
	int32_t x419 = INT32_MIN;
	int16_t x420 = -1;
	int32_t t88 = 137491295;

	t88 = ((x417%x418)&(x419-x420));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x421 = INT8_MIN;
	volatile int16_t x423 = INT16_MIN;
	int64_t x424 = -857300LL;
	volatile int64_t t89 = -6610007869239551LL;

	t89 = ((x421%x422)&(x423-x424));

	if (t89 != 824448LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x425 = INT64_MAX;
	int8_t x426 = -1;
	static volatile int32_t x427 = INT32_MIN;
	uint64_t x428 = UINT64_MAX;

	t90 = ((x425%x426)&(x427-x428));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x433 = INT16_MAX;
	static volatile int8_t x434 = INT8_MIN;
	uint8_t x435 = 17U;
	static volatile uint16_t x436 = 12768U;

	t91 = ((x433%x434)&(x435-x436));

	if (t91 != 49) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x438 = 223858774913352LLU;
	uint16_t x440 = UINT16_MAX;
	uint64_t t92 = 3196705604955171LLU;

	t92 = ((x437%x438)&(x439-x440));

	if (t92 != 4294901754LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x441 = INT8_MIN;
	int8_t x443 = -1;
	static volatile int8_t x444 = 0;
	static int32_t t93 = -11;

	t93 = ((x441%x442)&(x443-x444));

	if (t93 != -128) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x445 = INT64_MAX;
	uint16_t x446 = UINT16_MAX;
	uint32_t x447 = UINT32_MAX;
	int8_t x448 = INT8_MAX;
	static int64_t t94 = -3149266653527LL;

	t94 = ((x445%x446)&(x447-x448));

	if (t94 != 32640LL) { NG(); } else { ; }
	
}

void f95(void) {
	static volatile int16_t x450 = -348;
	int64_t x451 = -1LL;
	static int64_t t95 = 1944260404581LL;

	t95 = ((x449%x450)&(x451-x452));

	if (t95 != -256LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint16_t x453 = 158U;
	int8_t x454 = -57;
	static uint64_t x455 = 237792401LLU;
	int8_t x456 = INT8_MIN;
	uint64_t t96 = 47LLU;

	t96 = ((x453%x454)&(x455-x456));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x457 = 13324;
	volatile int64_t x458 = INT64_MAX;
	uint64_t x460 = 269054260295LLU;

	t97 = ((x457%x458)&(x459-x460));

	if (t97 != 1032LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x465 = 21U;
	volatile uint8_t x466 = UINT8_MAX;
	volatile int64_t x467 = -1LL;
	volatile int8_t x468 = -1;
	volatile int64_t t98 = 3946295395678LL;

	t98 = ((x465%x466)&(x467-x468));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	uint32_t x469 = UINT32_MAX;
	volatile int64_t x470 = INT64_MAX;
	int8_t x471 = INT8_MAX;
	int8_t x472 = -1;
	int64_t t99 = 143321888392LL;

	t99 = ((x469%x470)&(x471-x472));

	if (t99 != 128LL) { NG(); } else { ; }
	
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

