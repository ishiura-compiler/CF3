#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x1 = -1;
static volatile uint32_t x4 = 131003U;
int8_t x10 = INT8_MIN;
volatile int8_t x16 = INT8_MIN;
int32_t t3 = -5115081;
volatile int16_t x32 = INT16_MIN;
volatile uint32_t x34 = UINT32_MAX;
int32_t t9 = 21;
uint64_t x45 = 51827439018767753LLU;
volatile int16_t x46 = INT16_MIN;
volatile int32_t t12 = -111;
volatile int32_t t14 = -2;
uint64_t x61 = 2059350325LLU;
volatile uint8_t x67 = UINT8_MAX;
int16_t x69 = -1;
uint64_t x74 = 35703409506LLU;
int32_t x75 = INT32_MAX;
int32_t t18 = 2;
static int16_t x81 = -1;
int64_t x82 = INT64_MAX;
volatile int8_t x99 = INT8_MIN;
int64_t x100 = -48210643901912LL;
static uint32_t x101 = UINT32_MAX;
volatile int32_t t26 = -671347;
volatile uint64_t x113 = UINT64_MAX;
uint64_t x115 = 679931197LLU;
int64_t x117 = INT64_MAX;
int16_t x119 = INT16_MIN;
static volatile int16_t x126 = INT16_MIN;
volatile int64_t x128 = INT64_MIN;
static int16_t x130 = -170;
uint8_t x138 = 4U;
uint16_t x139 = 17U;
int64_t x141 = INT64_MIN;
int64_t x151 = 19623405687341LL;
int8_t x154 = -42;
int32_t x159 = INT32_MIN;
volatile int32_t t42 = 3923763;
int16_t x176 = INT16_MIN;
int16_t x187 = INT16_MIN;
int16_t x197 = 443;
volatile int8_t x200 = INT8_MIN;
volatile int32_t x210 = INT32_MIN;
volatile int64_t x220 = INT64_MIN;
int64_t x238 = INT64_MIN;
int64_t x245 = 14208995LL;
static uint16_t x247 = UINT16_MAX;
volatile uint32_t x248 = 10952U;
volatile int8_t x253 = -1;
uint64_t x271 = UINT64_MAX;
volatile int64_t x275 = INT64_MIN;
int64_t x279 = INT64_MIN;
volatile uint8_t x283 = UINT8_MAX;
static int32_t x284 = -1;
int32_t t69 = 1727068;
volatile uint8_t x285 = 7U;
int8_t x286 = 3;
int32_t x289 = INT32_MAX;
int8_t x290 = INT8_MAX;
static int8_t x299 = -2;
volatile int32_t t74 = -1071;
static int64_t x308 = -1LL;
volatile int32_t t76 = -1000463;
int8_t x314 = INT8_MAX;
int16_t x322 = INT16_MIN;
static uint8_t x324 = 7U;
uint32_t x325 = 18U;
volatile int32_t t81 = 125;
static int16_t x334 = -3737;
volatile uint16_t x335 = 25U;
uint16_t x343 = UINT16_MAX;
volatile int32_t t84 = -3;
volatile int64_t x346 = INT64_MIN;
volatile int32_t t85 = 7601873;
volatile int8_t x349 = INT8_MIN;
volatile int8_t x353 = -25;
int8_t x368 = -2;
uint8_t x372 = 10U;
int32_t x375 = -1;
uint8_t x377 = UINT8_MAX;
int16_t x379 = INT16_MAX;
uint32_t x389 = 4925435U;
int64_t x390 = INT64_MIN;
uint32_t x393 = UINT32_MAX;
static int8_t x397 = INT8_MIN;
volatile int16_t x401 = INT16_MIN;
volatile uint64_t x406 = UINT64_MAX;
int32_t t99 = -671846;


void f0(void) {
	static int32_t x2 = INT32_MIN;
	int16_t x3 = 219;
	volatile int32_t t0 = -374189;

	t0 = (x1==((x2/x3)==x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static int16_t x5 = 6;
	volatile int64_t x6 = INT64_MIN;
	uint16_t x7 = 2509U;
	static int16_t x8 = INT16_MIN;
	static volatile int32_t t1 = 7;

	t1 = (x5==((x6/x7)==x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 4U;
	int8_t x11 = INT8_MIN;
	int16_t x12 = -1;
	int32_t t2 = -10763867;

	t2 = (x9==((x10/x11)==x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x13 = INT32_MAX;
	static int64_t x14 = INT64_MIN;
	static volatile uint64_t x15 = 229091458980LLU;

	t3 = (x13==((x14/x15)==x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x17 = INT8_MAX;
	static int32_t x18 = 8;
	uint16_t x19 = 8994U;
	int64_t x20 = INT64_MAX;
	int32_t t4 = 4;

	t4 = (x17==((x18/x19)==x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	uint64_t x21 = 325LLU;
	int32_t x22 = 3877664;
	volatile int64_t x23 = INT64_MIN;
	static int64_t x24 = -1LL;
	volatile int32_t t5 = 5254614;

	t5 = (x21==((x22/x23)==x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	volatile uint8_t x25 = 54U;
	static volatile int8_t x26 = -2;
	int8_t x27 = -3;
	uint16_t x28 = 3765U;
	static volatile int32_t t6 = -4284490;

	t6 = (x25==((x26/x27)==x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = INT64_MAX;
	uint32_t x30 = 791U;
	int8_t x31 = 43;
	static volatile int32_t t7 = 3;

	t7 = (x29==((x30/x31)==x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x33 = -1;
	int64_t x35 = -1LL;
	int32_t x36 = INT32_MAX;
	int32_t t8 = -388;

	t8 = (x33==((x34/x35)==x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = 24LLU;
	uint16_t x38 = UINT16_MAX;
	int16_t x39 = -92;
	volatile uint64_t x40 = UINT64_MAX;

	t9 = (x37==((x38/x39)==x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	uint8_t x41 = 0U;
	uint32_t x42 = 1415893322U;
	static int64_t x43 = 1LL;
	uint16_t x44 = 6331U;
	static int32_t t10 = 454515474;

	t10 = (x41==((x42/x43)==x44));

	if (t10 != 1) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int16_t x47 = -1;
	static int32_t x48 = INT32_MAX;
	int32_t t11 = -207;

	t11 = (x45==((x46/x47)==x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	static int32_t x49 = -1;
	int64_t x50 = INT64_MIN;
	int32_t x51 = INT32_MAX;
	volatile int8_t x52 = INT8_MIN;

	t12 = (x49==((x50/x51)==x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int32_t x53 = -1;
	int64_t x54 = -1LL;
	int32_t x55 = INT32_MIN;
	int32_t x56 = 318060276;
	volatile int32_t t13 = -212;

	t13 = (x53==((x54/x55)==x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	static uint8_t x57 = 1U;
	static volatile uint8_t x58 = 13U;
	static int8_t x59 = INT8_MIN;
	uint16_t x60 = 1U;

	t14 = (x57==((x58/x59)==x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x62 = -1;
	volatile int16_t x63 = INT16_MAX;
	uint64_t x64 = 15LLU;
	volatile int32_t t15 = -17094;

	t15 = (x61==((x62/x63)==x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static uint16_t x65 = UINT16_MAX;
	int16_t x66 = INT16_MAX;
	int8_t x68 = -11;
	static volatile int32_t t16 = 2;

	t16 = (x65==((x66/x67)==x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x70 = UINT32_MAX;
	int16_t x71 = INT16_MAX;
	int16_t x72 = INT16_MAX;
	int32_t t17 = -2167;

	t17 = (x69==((x70/x71)==x72));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x73 = INT32_MIN;
	int16_t x76 = -14;

	t18 = (x73==((x74/x75)==x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x77 = INT8_MIN;
	static int16_t x78 = INT16_MAX;
	static uint64_t x79 = UINT64_MAX;
	int16_t x80 = -44;
	volatile int32_t t19 = 3328;

	t19 = (x77==((x78/x79)==x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x83 = INT32_MAX;
	uint8_t x84 = UINT8_MAX;
	int32_t t20 = 2232723;

	t20 = (x81==((x82/x83)==x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	uint16_t x85 = 176U;
	volatile int32_t x86 = INT32_MIN;
	int32_t x87 = 25156;
	int16_t x88 = INT16_MIN;
	int32_t t21 = -71;

	t21 = (x85==((x86/x87)==x88));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x89 = 1;
	int32_t x90 = INT32_MIN;
	static uint16_t x91 = UINT16_MAX;
	int16_t x92 = -1;
	int32_t t22 = 0;

	t22 = (x89==((x90/x91)==x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = -31LL;
	static uint16_t x94 = 210U;
	static volatile int32_t x95 = INT32_MAX;
	int16_t x96 = -1;
	static volatile int32_t t23 = -11362;

	t23 = (x93==((x94/x95)==x96));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x97 = UINT8_MAX;
	static int8_t x98 = INT8_MIN;
	int32_t t24 = -1443969;

	t24 = (x97==((x98/x99)==x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x102 = UINT64_MAX;
	int8_t x103 = 6;
	uint16_t x104 = 22572U;
	int32_t t25 = -778729604;

	t25 = (x101==((x102/x103)==x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = INT8_MIN;
	int32_t x106 = 0;
	static int32_t x107 = -21;
	int64_t x108 = -1LL;

	t26 = (x105==((x106/x107)==x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	volatile int8_t x110 = INT8_MAX;
	volatile int32_t x111 = INT32_MAX;
	int64_t x112 = INT64_MIN;
	volatile int32_t t27 = 58;

	t27 = (x109==((x110/x111)==x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	static uint8_t x114 = 0U;
	int32_t x116 = INT32_MAX;
	static int32_t t28 = 48281456;

	t28 = (x113==((x114/x115)==x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x118 = 404806030638LL;
	volatile int32_t x120 = INT32_MAX;
	int32_t t29 = -200;

	t29 = (x117==((x118/x119)==x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x121 = INT32_MIN;
	int64_t x122 = -58746312974190LL;
	uint8_t x123 = 93U;
	int32_t x124 = INT32_MAX;
	int32_t t30 = 3;

	t30 = (x121==((x122/x123)==x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int64_t x125 = -4294417629737LL;
	int32_t x127 = -1;
	static volatile int32_t t31 = 76645;

	t31 = (x125==((x126/x127)==x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x129 = INT8_MIN;
	int32_t x131 = INT32_MIN;
	static volatile int64_t x132 = 1929319LL;
	int32_t t32 = 366624173;

	t32 = (x129==((x130/x131)==x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = 0;
	static int8_t x134 = INT8_MAX;
	int64_t x135 = INT64_MAX;
	static int16_t x136 = -1;
	int32_t t33 = 318;

	t33 = (x133==((x134/x135)==x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x137 = INT16_MAX;
	volatile int8_t x140 = 20;
	volatile int32_t t34 = -122458526;

	t34 = (x137==((x138/x139)==x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x142 = 43U;
	volatile int32_t x143 = INT32_MIN;
	int64_t x144 = INT64_MAX;
	int32_t t35 = 4882171;

	t35 = (x141==((x142/x143)==x144));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x145 = 262099355893393782LLU;
	int8_t x146 = INT8_MIN;
	int16_t x147 = INT16_MAX;
	uint64_t x148 = UINT64_MAX;
	volatile int32_t t36 = 1229123;

	t36 = (x145==((x146/x147)==x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x149 = 78U;
	uint16_t x150 = 17U;
	int32_t x152 = 0;
	int32_t t37 = -1;

	t37 = (x149==((x150/x151)==x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x153 = 179LLU;
	uint8_t x155 = UINT8_MAX;
	uint16_t x156 = UINT16_MAX;
	int32_t t38 = -27;

	t38 = (x153==((x154/x155)==x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	int32_t x158 = INT32_MAX;
	int16_t x160 = -1;
	int32_t t39 = -46;

	t39 = (x157==((x158/x159)==x160));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = INT32_MIN;
	volatile uint16_t x162 = 1760U;
	int64_t x163 = -18499457LL;
	int8_t x164 = 0;
	volatile int32_t t40 = 11;

	t40 = (x161==((x162/x163)==x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x165 = INT64_MIN;
	uint16_t x166 = UINT16_MAX;
	int16_t x167 = 1;
	uint32_t x168 = 1431U;
	volatile int32_t t41 = 18981;

	t41 = (x165==((x166/x167)==x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = INT16_MAX;
	static uint16_t x170 = 29299U;
	int64_t x171 = -157956349680LL;
	uint64_t x172 = UINT64_MAX;

	t42 = (x169==((x170/x171)==x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	uint8_t x173 = UINT8_MAX;
	uint16_t x174 = 5U;
	static uint8_t x175 = 33U;
	volatile int32_t t43 = -123;

	t43 = (x173==((x174/x175)==x176));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	static uint32_t x177 = 665654U;
	static int64_t x178 = 1581281001740379436LL;
	int32_t x179 = INT32_MIN;
	uint16_t x180 = 192U;
	int32_t t44 = 16127571;

	t44 = (x177==((x178/x179)==x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x181 = UINT64_MAX;
	int16_t x182 = INT16_MIN;
	uint64_t x183 = UINT64_MAX;
	uint64_t x184 = 1LLU;
	static volatile int32_t t45 = 100;

	t45 = (x181==((x182/x183)==x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x185 = INT64_MIN;
	uint64_t x186 = 97075550037240LLU;
	int16_t x188 = INT16_MAX;
	volatile int32_t t46 = 383699207;

	t46 = (x185==((x186/x187)==x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = INT32_MAX;
	int32_t x190 = -396;
	volatile int64_t x191 = 1LL;
	int32_t x192 = INT32_MAX;
	volatile int32_t t47 = -8357624;

	t47 = (x189==((x190/x191)==x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x198 = 171060585;
	uint32_t x199 = 1915111U;
	volatile int32_t t48 = 15073;

	t48 = (x197==((x198/x199)==x200));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x201 = 537607238051273LLU;
	uint32_t x202 = UINT32_MAX;
	volatile int8_t x203 = -1;
	int64_t x204 = INT64_MAX;
	static int32_t t49 = 2600941;

	t49 = (x201==((x202/x203)==x204));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x205 = -1;
	uint8_t x206 = 6U;
	int64_t x207 = -16LL;
	volatile int32_t x208 = -237075;
	int32_t t50 = -9852;

	t50 = (x205==((x206/x207)==x208));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int32_t x209 = INT32_MIN;
	volatile int8_t x211 = INT8_MAX;
	int16_t x212 = -2;
	volatile int32_t t51 = 256239;

	t51 = (x209==((x210/x211)==x212));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x213 = -1;
	int32_t x214 = 588199;
	uint32_t x215 = 808779U;
	int32_t x216 = INT32_MIN;
	volatile int32_t t52 = -205;

	t52 = (x213==((x214/x215)==x216));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x217 = 33U;
	int16_t x218 = INT16_MIN;
	int64_t x219 = -3246260333800LL;
	volatile int32_t t53 = 381158;

	t53 = (x217==((x218/x219)==x220));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint64_t x221 = 243307986830928639LLU;
	static int64_t x222 = INT64_MAX;
	static uint8_t x223 = UINT8_MAX;
	int16_t x224 = INT16_MIN;
	int32_t t54 = -19274;

	t54 = (x221==((x222/x223)==x224));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x225 = INT8_MIN;
	int8_t x226 = -1;
	uint32_t x227 = 7731U;
	uint32_t x228 = 25034U;
	volatile int32_t t55 = 2;

	t55 = (x225==((x226/x227)==x228));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint8_t x229 = 2U;
	uint16_t x230 = 512U;
	static int64_t x231 = -1093314218797803078LL;
	int64_t x232 = 260252LL;
	volatile int32_t t56 = 740;

	t56 = (x229==((x230/x231)==x232));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x233 = -7;
	int64_t x234 = 5448347601366LL;
	int64_t x235 = INT64_MIN;
	int64_t x236 = INT64_MIN;
	volatile int32_t t57 = -1071;

	t57 = (x233==((x234/x235)==x236));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x237 = INT16_MIN;
	int32_t x239 = -39461943;
	static volatile int32_t x240 = INT32_MAX;
	volatile int32_t t58 = 149694191;

	t58 = (x237==((x238/x239)==x240));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x241 = INT8_MIN;
	int8_t x242 = INT8_MAX;
	static volatile uint32_t x243 = UINT32_MAX;
	volatile uint64_t x244 = UINT64_MAX;
	int32_t t59 = -3;

	t59 = (x241==((x242/x243)==x244));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x246 = 13U;
	int32_t t60 = 108;

	t60 = (x245==((x246/x247)==x248));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x249 = -1LL;
	static int8_t x250 = INT8_MAX;
	int16_t x251 = INT16_MIN;
	uint32_t x252 = 6897U;
	volatile int32_t t61 = -16691052;

	t61 = (x249==((x250/x251)==x252));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x254 = INT16_MAX;
	int8_t x255 = 1;
	int32_t x256 = -1;
	int32_t t62 = 159155;

	t62 = (x253==((x254/x255)==x256));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x257 = INT32_MAX;
	int16_t x258 = INT16_MIN;
	uint16_t x259 = UINT16_MAX;
	int64_t x260 = INT64_MIN;
	volatile int32_t t63 = 805;

	t63 = (x257==((x258/x259)==x260));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static int8_t x261 = 3;
	int8_t x262 = INT8_MIN;
	volatile uint16_t x263 = 11452U;
	volatile uint8_t x264 = UINT8_MAX;
	int32_t t64 = 1742751;

	t64 = (x261==((x262/x263)==x264));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x265 = 0U;
	int64_t x266 = INT64_MIN;
	int16_t x267 = INT16_MIN;
	static int16_t x268 = -1;
	static int32_t t65 = -1011;

	t65 = (x265==((x266/x267)==x268));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint64_t x269 = UINT64_MAX;
	static int64_t x270 = -9176778LL;
	int16_t x272 = INT16_MIN;
	int32_t t66 = 119716175;

	t66 = (x269==((x270/x271)==x272));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile uint64_t x273 = UINT64_MAX;
	uint8_t x274 = 105U;
	static int64_t x276 = INT64_MIN;
	volatile int32_t t67 = -481299818;

	t67 = (x273==((x274/x275)==x276));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = -1LL;
	uint32_t x278 = 41U;
	uint8_t x280 = 0U;
	volatile int32_t t68 = 6239;

	t68 = (x277==((x278/x279)==x280));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x281 = INT16_MIN;
	int32_t x282 = INT32_MAX;

	t69 = (x281==((x282/x283)==x284));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x287 = -1;
	int16_t x288 = -1;
	int32_t t70 = 17933;

	t70 = (x285==((x286/x287)==x288));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int64_t x291 = INT64_MIN;
	int16_t x292 = -153;
	int32_t t71 = 545;

	t71 = (x289==((x290/x291)==x292));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = INT16_MIN;
	static int16_t x294 = -1803;
	volatile int64_t x295 = INT64_MIN;
	static int16_t x296 = INT16_MAX;
	static int32_t t72 = 855893502;

	t72 = (x293==((x294/x295)==x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x297 = UINT8_MAX;
	static uint64_t x298 = 4913474738433LLU;
	volatile uint64_t x300 = UINT64_MAX;
	int32_t t73 = -1227;

	t73 = (x297==((x298/x299)==x300));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x301 = UINT64_MAX;
	int64_t x302 = INT64_MIN;
	int64_t x303 = INT64_MAX;
	static int16_t x304 = INT16_MIN;

	t74 = (x301==((x302/x303)==x304));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x305 = INT64_MAX;
	volatile uint8_t x306 = UINT8_MAX;
	int64_t x307 = 32147380891133LL;
	int32_t t75 = 96;

	t75 = (x305==((x306/x307)==x308));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint16_t x309 = UINT16_MAX;
	int16_t x310 = 14;
	volatile int16_t x311 = INT16_MIN;
	volatile uint64_t x312 = 4306080001302LLU;

	t76 = (x309==((x310/x311)==x312));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x313 = INT16_MIN;
	int32_t x315 = -1;
	int64_t x316 = INT64_MAX;
	int32_t t77 = 14412474;

	t77 = (x313==((x314/x315)==x316));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	uint16_t x317 = UINT16_MAX;
	uint8_t x318 = 0U;
	int8_t x319 = -1;
	int64_t x320 = 25063488740LL;
	int32_t t78 = 2;

	t78 = (x317==((x318/x319)==x320));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x321 = INT8_MAX;
	int32_t x323 = INT32_MIN;
	volatile int32_t t79 = -2323;

	t79 = (x321==((x322/x323)==x324));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x326 = 1;
	volatile int32_t x327 = -1;
	static int8_t x328 = -1;
	int32_t t80 = 785317833;

	t80 = (x325==((x326/x327)==x328));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int16_t x329 = INT16_MIN;
	volatile int64_t x330 = -1LL;
	static int64_t x331 = INT64_MIN;
	uint64_t x332 = UINT64_MAX;

	t81 = (x329==((x330/x331)==x332));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x333 = INT16_MIN;
	int16_t x336 = INT16_MIN;
	volatile int32_t t82 = -176;

	t82 = (x333==((x334/x335)==x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x337 = 76U;
	static volatile int32_t x338 = INT32_MIN;
	static uint64_t x339 = UINT64_MAX;
	int32_t x340 = INT32_MIN;
	volatile int32_t t83 = 27523;

	t83 = (x337==((x338/x339)==x340));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x341 = INT32_MAX;
	uint32_t x342 = 17580U;
	int8_t x344 = INT8_MIN;

	t84 = (x341==((x342/x343)==x344));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x345 = 37868209U;
	uint16_t x347 = 168U;
	int8_t x348 = -1;

	t85 = (x345==((x346/x347)==x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x350 = 44;
	int32_t x351 = -3;
	int8_t x352 = 7;
	volatile int32_t t86 = 1598;

	t86 = (x349==((x350/x351)==x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x354 = -1;
	int32_t x355 = INT32_MIN;
	uint64_t x356 = 285LLU;
	volatile int32_t t87 = 9;

	t87 = (x353==((x354/x355)==x356));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x361 = UINT16_MAX;
	int16_t x362 = -221;
	uint16_t x363 = 2U;
	int8_t x364 = INT8_MAX;
	volatile int32_t t88 = -2912;

	t88 = (x361==((x362/x363)==x364));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x365 = UINT32_MAX;
	uint8_t x366 = 1U;
	volatile int64_t x367 = INT64_MIN;
	int32_t t89 = -1;

	t89 = (x365==((x366/x367)==x368));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x369 = 4U;
	int32_t x370 = 1247;
	volatile int8_t x371 = INT8_MIN;
	volatile int32_t t90 = 2;

	t90 = (x369==((x370/x371)==x372));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x373 = INT32_MIN;
	int64_t x374 = 1490LL;
	static int8_t x376 = INT8_MAX;
	int32_t t91 = -1958452;

	t91 = (x373==((x374/x375)==x376));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x378 = INT8_MAX;
	int16_t x380 = -1;
	static int32_t t92 = 0;

	t92 = (x377==((x378/x379)==x380));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x381 = INT64_MIN;
	uint32_t x382 = 331849930U;
	volatile int64_t x383 = INT64_MIN;
	volatile int32_t x384 = -1;
	volatile int32_t t93 = -37136;

	t93 = (x381==((x382/x383)==x384));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x385 = -11254;
	int64_t x386 = INT64_MAX;
	uint16_t x387 = UINT16_MAX;
	static int32_t x388 = -1;
	int32_t t94 = -4483;

	t94 = (x385==((x386/x387)==x388));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x391 = INT16_MIN;
	int32_t x392 = -559773;
	int32_t t95 = -130187386;

	t95 = (x389==((x390/x391)==x392));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x394 = 703334501;
	static uint32_t x395 = UINT32_MAX;
	int8_t x396 = INT8_MIN;
	volatile int32_t t96 = -1553475;

	t96 = (x393==((x394/x395)==x396));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	uint64_t x398 = 366159040LLU;
	int16_t x399 = -1;
	uint16_t x400 = UINT16_MAX;
	int32_t t97 = 1093;

	t97 = (x397==((x398/x399)==x400));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int64_t x402 = -1LL;
	volatile int64_t x403 = INT64_MAX;
	int32_t x404 = -98;
	volatile int32_t t98 = 2;

	t98 = (x401==((x402/x403)==x404));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x405 = 0LL;
	int8_t x407 = 1;
	static uint32_t x408 = 2952U;

	t99 = (x405==((x406/x407)==x408));

	if (t99 != 1) { NG(); } else { ; }
	
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

