#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int16_t x8 = 0;
volatile int16_t x9 = -1;
uint8_t x14 = 1U;
static int32_t x20 = 614004;
static uint64_t x28 = 142250LLU;
uint64_t x32 = 4377474113733286LLU;
static volatile int32_t t7 = 1778;
static int8_t x36 = INT8_MIN;
int32_t x38 = INT32_MIN;
volatile uint64_t x42 = 2495886433272LLU;
volatile uint64_t x43 = 49161584654439970LLU;
int32_t t11 = 424207;
int8_t x53 = 1;
int16_t x54 = INT16_MIN;
int32_t x55 = 4819;
int32_t t14 = 0;
int32_t x63 = -1;
static int32_t t15 = -28011794;
static int16_t x69 = -1;
volatile int32_t t18 = 1928;
uint64_t x80 = 39674898564130LLU;
int32_t x82 = INT32_MIN;
volatile uint32_t x95 = 55774U;
volatile int32_t x96 = 17;
int32_t x97 = INT32_MIN;
uint8_t x99 = 5U;
int16_t x109 = INT16_MIN;
uint16_t x115 = 15U;
int32_t x122 = INT32_MAX;
uint16_t x123 = UINT16_MAX;
int16_t x127 = -183;
volatile int16_t x133 = 3;
int16_t x141 = INT16_MIN;
volatile int16_t x145 = INT16_MIN;
int32_t t34 = -138360851;
volatile uint8_t x155 = UINT8_MAX;
int32_t t36 = 30;
volatile int16_t x164 = 0;
int32_t x167 = -4266;
int8_t x170 = INT8_MAX;
int16_t x171 = -1;
volatile int32_t t41 = -20246588;
int32_t x183 = INT32_MAX;
static int64_t x184 = INT64_MAX;
static volatile int16_t x189 = 1954;
int64_t x190 = -1LL;
volatile int8_t x192 = INT8_MAX;
int16_t x194 = -1;
static volatile int32_t x196 = INT32_MIN;
uint64_t x197 = UINT64_MAX;
int32_t t47 = -1;
uint16_t x208 = UINT16_MAX;
volatile int32_t t49 = 628867;
static int64_t x215 = -1329LL;
static int32_t x219 = INT32_MAX;
volatile int32_t t51 = -3;
volatile int8_t x223 = INT8_MIN;
volatile int32_t t52 = -6;
int16_t x233 = INT16_MAX;
uint64_t x236 = UINT64_MAX;
volatile uint32_t x240 = UINT32_MAX;
int32_t t58 = -18362647;
int16_t x250 = INT16_MAX;
int32_t x252 = INT32_MAX;
volatile uint64_t x255 = 969016LLU;
int8_t x256 = -1;
int8_t x261 = INT8_MAX;
static int32_t t64 = -730;
int32_t x278 = INT32_MIN;
int16_t x279 = INT16_MIN;
int8_t x287 = -1;
volatile int32_t t68 = -8132671;
uint8_t x293 = 41U;
uint64_t x294 = 46729907LLU;
int64_t x295 = -578002LL;
volatile int16_t x303 = INT16_MIN;
int64_t x310 = -1LL;
int64_t x312 = INT64_MIN;
int32_t t74 = -13;
volatile int32_t t75 = 136544;
volatile int32_t x324 = INT32_MIN;
static int64_t x327 = INT64_MIN;
volatile int32_t t78 = 574578191;
volatile int8_t x336 = INT8_MIN;
uint32_t x337 = 35843U;
static volatile int32_t t82 = 13;
static int16_t x345 = INT16_MAX;
int8_t x347 = -1;
int32_t t83 = 37;
int32_t x352 = -13226725;
int32_t t84 = 18;
int64_t x355 = INT64_MIN;
int8_t x367 = -1;
volatile int32_t x369 = INT32_MIN;
static int32_t t88 = 20;
uint64_t x373 = UINT64_MAX;
static int32_t x377 = INT32_MAX;
uint32_t x382 = 2U;
static int8_t x384 = INT8_MIN;
int32_t x385 = -167;
uint32_t x386 = 597U;
static int32_t x390 = -9;
volatile int64_t x393 = INT64_MIN;
volatile int32_t t94 = -36;
int8_t x398 = 1;
static int8_t x415 = INT8_MAX;
static int8_t x416 = INT8_MIN;


void f0(void) {
	int64_t x1 = -1LL;
	static int32_t x2 = -1;
	int32_t x3 = INT32_MIN;
	static int32_t x4 = INT32_MIN;
	volatile int32_t t0 = -3541;

	t0 = (x1==((x2/x3)+x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int32_t x5 = -6172;
	volatile uint64_t x6 = 246014027518279LLU;
	int16_t x7 = INT16_MIN;
	static volatile int32_t t1 = -73761884;

	t1 = (x5==((x6/x7)+x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 935;
	uint32_t x11 = UINT32_MAX;
	static uint16_t x12 = UINT16_MAX;
	volatile int32_t t2 = -115;

	t2 = (x9==((x10/x11)+x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x13 = UINT16_MAX;
	int16_t x15 = INT16_MAX;
	uint32_t x16 = UINT32_MAX;
	volatile int32_t t3 = 387074;

	t3 = (x13==((x14/x15)+x16));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	uint32_t x18 = UINT32_MAX;
	int8_t x19 = 1;
	int32_t t4 = 254;

	t4 = (x17==((x18/x19)+x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 4904;
	int8_t x22 = INT8_MIN;
	static uint32_t x23 = 1004210U;
	int32_t x24 = 98926;
	volatile int32_t t5 = 819748774;

	t5 = (x21==((x22/x23)+x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 121665111;
	int32_t x26 = INT32_MAX;
	volatile int32_t x27 = -706690389;
	int32_t t6 = -320396;

	t6 = (x25==((x26/x27)+x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	static uint8_t x29 = 70U;
	uint16_t x30 = 16273U;
	int64_t x31 = -6164498561413LL;

	t7 = (x29==((x30/x31)+x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static uint64_t x33 = 29179481996LLU;
	int8_t x34 = 1;
	int8_t x35 = 5;
	static int32_t t8 = 0;

	t8 = (x33==((x34/x35)+x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = INT8_MIN;
	static int16_t x39 = INT16_MIN;
	static int8_t x40 = INT8_MIN;
	static volatile int32_t t9 = 394;

	t9 = (x37==((x38/x39)+x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x41 = UINT32_MAX;
	volatile int16_t x44 = INT16_MAX;
	volatile int32_t t10 = 27577;

	t10 = (x41==((x42/x43)+x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int32_t x45 = -17057825;
	int16_t x46 = -1;
	uint32_t x47 = 194U;
	volatile int16_t x48 = 0;

	t11 = (x45==((x46/x47)+x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x49 = 35;
	uint16_t x50 = 11U;
	static uint16_t x51 = 221U;
	volatile int32_t x52 = INT32_MAX;
	volatile int32_t t12 = 1843;

	t12 = (x49==((x50/x51)+x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x56 = UINT64_MAX;
	int32_t t13 = -11545;

	t13 = (x53==((x54/x55)+x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x57 = 8U;
	uint32_t x58 = UINT32_MAX;
	int32_t x59 = 30439195;
	int32_t x60 = INT32_MAX;

	t14 = (x57==((x58/x59)+x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x61 = INT16_MIN;
	volatile int8_t x62 = -14;
	static int64_t x64 = INT64_MIN;

	t15 = (x61==((x62/x63)+x64));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	uint32_t x65 = UINT32_MAX;
	int16_t x66 = INT16_MIN;
	int8_t x67 = INT8_MIN;
	int32_t x68 = INT32_MIN;
	volatile int32_t t16 = 62;

	t16 = (x65==((x66/x67)+x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int32_t x70 = -1;
	int16_t x71 = INT16_MIN;
	int8_t x72 = -1;
	int32_t t17 = -397854;

	t17 = (x69==((x70/x71)+x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x73 = -10;
	int32_t x74 = INT32_MIN;
	int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MIN;

	t18 = (x73==((x74/x75)+x76));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	int16_t x77 = INT16_MIN;
	int8_t x78 = INT8_MIN;
	uint8_t x79 = 24U;
	static volatile int32_t t19 = -1;

	t19 = (x77==((x78/x79)+x80));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x81 = UINT32_MAX;
	int16_t x83 = 113;
	volatile uint32_t x84 = UINT32_MAX;
	int32_t t20 = 2;

	t20 = (x81==((x82/x83)+x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint32_t x89 = UINT32_MAX;
	int8_t x90 = 0;
	int32_t x91 = INT32_MAX;
	static int32_t x92 = INT32_MIN;
	static volatile int32_t t21 = -225524;

	t21 = (x89==((x90/x91)+x92));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x93 = 42604175030839235LLU;
	static volatile int16_t x94 = 2419;
	int32_t t22 = 645;

	t22 = (x93==((x94/x95)+x96));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x98 = 7U;
	uint32_t x100 = 4U;
	int32_t t23 = 1751;

	t23 = (x97==((x98/x99)+x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	static int32_t x101 = INT32_MIN;
	uint8_t x102 = UINT8_MAX;
	uint8_t x103 = UINT8_MAX;
	static int8_t x104 = INT8_MIN;
	volatile int32_t t24 = -107;

	t24 = (x101==((x102/x103)+x104));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int32_t x105 = INT32_MIN;
	uint16_t x106 = 527U;
	volatile int8_t x107 = -1;
	static volatile int32_t x108 = -1;
	volatile int32_t t25 = 1;

	t25 = (x105==((x106/x107)+x108));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x110 = INT64_MAX;
	int64_t x111 = -1158LL;
	static uint16_t x112 = 0U;
	volatile int32_t t26 = -318;

	t26 = (x109==((x110/x111)+x112));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x113 = -1;
	int64_t x114 = INT64_MIN;
	int8_t x116 = INT8_MIN;
	int32_t t27 = 45189812;

	t27 = (x113==((x114/x115)+x116));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x117 = -1;
	int8_t x118 = INT8_MIN;
	static volatile uint32_t x119 = UINT32_MAX;
	int8_t x120 = -1;
	static int32_t t28 = -122829583;

	t28 = (x117==((x118/x119)+x120));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	static int8_t x121 = INT8_MAX;
	static uint64_t x124 = 295248356397LLU;
	volatile int32_t t29 = 1;

	t29 = (x121==((x122/x123)+x124));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x125 = INT16_MIN;
	static int64_t x126 = -1LL;
	int16_t x128 = -13;
	int32_t t30 = 5;

	t30 = (x125==((x126/x127)+x128));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x129 = INT32_MIN;
	volatile int64_t x130 = INT64_MAX;
	volatile uint64_t x131 = UINT64_MAX;
	uint64_t x132 = UINT64_MAX;
	static volatile int32_t t31 = -86611223;

	t31 = (x129==((x130/x131)+x132));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int8_t x134 = INT8_MIN;
	static uint16_t x135 = 74U;
	volatile uint16_t x136 = 33U;
	volatile int32_t t32 = 5;

	t32 = (x133==((x134/x135)+x136));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int8_t x142 = 20;
	volatile int64_t x143 = -1LL;
	volatile int32_t x144 = INT32_MAX;
	volatile int32_t t33 = 141616320;

	t33 = (x141==((x142/x143)+x144));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x146 = INT16_MAX;
	static volatile uint16_t x147 = 445U;
	uint16_t x148 = 4521U;

	t34 = (x145==((x146/x147)+x148));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int64_t x149 = -994281321LL;
	int16_t x150 = INT16_MAX;
	int64_t x151 = 88276871162735540LL;
	volatile int16_t x152 = INT16_MIN;
	static int32_t t35 = -2;

	t35 = (x149==((x150/x151)+x152));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x153 = -418;
	int64_t x154 = -1LL;
	int16_t x156 = 700;

	t36 = (x153==((x154/x155)+x156));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x157 = UINT16_MAX;
	uint32_t x158 = 1871U;
	int64_t x159 = INT64_MIN;
	uint16_t x160 = UINT16_MAX;
	int32_t t37 = -88;

	t37 = (x157==((x158/x159)+x160));

	if (t37 != 1) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int64_t x161 = -1LL;
	int8_t x162 = -13;
	volatile int32_t x163 = 1938902;
	int32_t t38 = -449865569;

	t38 = (x161==((x162/x163)+x164));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x165 = 484U;
	int8_t x166 = INT8_MIN;
	volatile int64_t x168 = -1LL;
	static int32_t t39 = 562411736;

	t39 = (x165==((x166/x167)+x168));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static int8_t x169 = INT8_MIN;
	int32_t x172 = 405;
	int32_t t40 = 696650;

	t40 = (x169==((x170/x171)+x172));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	int8_t x173 = INT8_MIN;
	volatile int32_t x174 = INT32_MAX;
	int32_t x175 = INT32_MIN;
	int8_t x176 = 24;

	t41 = (x173==((x174/x175)+x176));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x177 = 2U;
	static volatile int16_t x178 = 980;
	volatile int32_t x179 = -1;
	static int16_t x180 = -1;
	static int32_t t42 = 29;

	t42 = (x177==((x178/x179)+x180));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x181 = 600;
	uint8_t x182 = 9U;
	static volatile int32_t t43 = 16;

	t43 = (x181==((x182/x183)+x184));

	if (t43 != 0) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x185 = -67;
	volatile uint64_t x186 = UINT64_MAX;
	uint64_t x187 = UINT64_MAX;
	static volatile int64_t x188 = INT64_MAX;
	static int32_t t44 = -224;

	t44 = (x185==((x186/x187)+x188));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint16_t x191 = UINT16_MAX;
	static volatile int32_t t45 = -1;

	t45 = (x189==((x190/x191)+x192));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static uint32_t x193 = 7U;
	volatile int64_t x195 = 25002593846729LL;
	int32_t t46 = -3;

	t46 = (x193==((x194/x195)+x196));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x198 = 5788532;
	int16_t x199 = INT16_MAX;
	static int64_t x200 = -364948833LL;

	t47 = (x197==((x198/x199)+x200));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint8_t x205 = 3U;
	int64_t x206 = -1LL;
	uint8_t x207 = 84U;
	int32_t t48 = -1129;

	t48 = (x205==((x206/x207)+x208));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x209 = -1LL;
	int16_t x210 = -98;
	static int8_t x211 = -40;
	int8_t x212 = INT8_MIN;

	t49 = (x209==((x210/x211)+x212));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint16_t x213 = UINT16_MAX;
	int64_t x214 = INT64_MAX;
	static uint16_t x216 = 4U;
	static int32_t t50 = 1;

	t50 = (x213==((x214/x215)+x216));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x217 = 9485789U;
	int8_t x218 = INT8_MAX;
	volatile int8_t x220 = 4;

	t51 = (x217==((x218/x219)+x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x221 = -1;
	static int8_t x222 = INT8_MIN;
	uint8_t x224 = 19U;

	t52 = (x221==((x222/x223)+x224));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x225 = 30700U;
	uint16_t x226 = 12744U;
	volatile uint64_t x227 = 2030LLU;
	int16_t x228 = INT16_MIN;
	int32_t t53 = -423665;

	t53 = (x225==((x226/x227)+x228));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	uint32_t x229 = UINT32_MAX;
	uint16_t x230 = 2430U;
	static int32_t x231 = 33336851;
	volatile int64_t x232 = INT64_MIN;
	int32_t t54 = 39;

	t54 = (x229==((x230/x231)+x232));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	static int8_t x234 = -1;
	volatile int64_t x235 = -1LL;
	int32_t t55 = 3039737;

	t55 = (x233==((x234/x235)+x236));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x237 = -65914;
	static int8_t x238 = 1;
	int16_t x239 = -1;
	volatile int32_t t56 = 689972;

	t56 = (x237==((x238/x239)+x240));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x241 = 0U;
	int8_t x242 = INT8_MAX;
	int8_t x243 = INT8_MAX;
	static uint8_t x244 = 6U;
	int32_t t57 = 242364749;

	t57 = (x241==((x242/x243)+x244));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x245 = 1763U;
	static volatile int32_t x246 = INT32_MAX;
	uint64_t x247 = 13LLU;
	volatile int16_t x248 = -1;

	t58 = (x245==((x246/x247)+x248));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint32_t x249 = 1707785U;
	volatile int64_t x251 = INT64_MAX;
	int32_t t59 = 53966107;

	t59 = (x249==((x250/x251)+x252));

	if (t59 != 0) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint16_t x253 = 159U;
	static uint8_t x254 = UINT8_MAX;
	int32_t t60 = -65464898;

	t60 = (x253==((x254/x255)+x256));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint8_t x257 = 0U;
	uint64_t x258 = 4071298LLU;
	volatile int32_t x259 = INT32_MIN;
	uint64_t x260 = 6775775LLU;
	int32_t t61 = 55106899;

	t61 = (x257==((x258/x259)+x260));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x262 = 28646843569944638LLU;
	static volatile uint16_t x263 = 3874U;
	int32_t x264 = INT32_MIN;
	volatile int32_t t62 = 12940034;

	t62 = (x261==((x262/x263)+x264));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint8_t x265 = UINT8_MAX;
	int64_t x266 = -129467811061250LL;
	uint32_t x267 = 113U;
	uint16_t x268 = UINT16_MAX;
	int32_t t63 = -53373;

	t63 = (x265==((x266/x267)+x268));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x269 = INT16_MIN;
	int32_t x270 = -1;
	int8_t x271 = INT8_MIN;
	int64_t x272 = -1LL;

	t64 = (x269==((x270/x271)+x272));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x273 = -1;
	volatile int8_t x274 = INT8_MAX;
	uint32_t x275 = 30U;
	int32_t x276 = INT32_MIN;
	int32_t t65 = -3180121;

	t65 = (x273==((x274/x275)+x276));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x277 = UINT32_MAX;
	int16_t x280 = INT16_MIN;
	volatile int32_t t66 = 26;

	t66 = (x277==((x278/x279)+x280));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x281 = UINT8_MAX;
	int8_t x282 = INT8_MIN;
	static uint16_t x283 = UINT16_MAX;
	int64_t x284 = INT64_MIN;
	volatile int32_t t67 = -36251;

	t67 = (x281==((x282/x283)+x284));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	int16_t x285 = INT16_MIN;
	int32_t x286 = -1;
	volatile uint16_t x288 = 334U;

	t68 = (x285==((x286/x287)+x288));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x289 = 19U;
	static int8_t x290 = -1;
	int64_t x291 = -1LL;
	int16_t x292 = INT16_MIN;
	static int32_t t69 = -1;

	t69 = (x289==((x290/x291)+x292));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x296 = 0;
	volatile int32_t t70 = -182462;

	t70 = (x293==((x294/x295)+x296));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = INT16_MIN;
	int16_t x298 = INT16_MAX;
	uint16_t x299 = 10U;
	uint8_t x300 = 2U;
	static volatile int32_t t71 = -1;

	t71 = (x297==((x298/x299)+x300));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x301 = 255624LLU;
	int16_t x302 = -3;
	volatile uint8_t x304 = UINT8_MAX;
	volatile int32_t t72 = -129302;

	t72 = (x301==((x302/x303)+x304));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static volatile int32_t x305 = 3;
	static int64_t x306 = -54514415432122LL;
	int8_t x307 = INT8_MIN;
	static volatile uint8_t x308 = 0U;
	int32_t t73 = -20;

	t73 = (x305==((x306/x307)+x308));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x309 = UINT32_MAX;
	int64_t x311 = INT64_MIN;

	t74 = (x309==((x310/x311)+x312));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	static int32_t x313 = -23326111;
	volatile uint64_t x314 = 881LLU;
	int8_t x315 = -1;
	static uint32_t x316 = 1328425U;

	t75 = (x313==((x314/x315)+x316));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x317 = INT32_MIN;
	uint8_t x318 = UINT8_MAX;
	int32_t x319 = 1836232;
	int16_t x320 = -1;
	int32_t t76 = 493238625;

	t76 = (x317==((x318/x319)+x320));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x321 = INT8_MIN;
	static volatile int64_t x322 = -1018758515411960LL;
	int32_t x323 = INT32_MIN;
	volatile int32_t t77 = -4174728;

	t77 = (x321==((x322/x323)+x324));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x325 = -1;
	uint16_t x326 = 52U;
	volatile int64_t x328 = -1LL;

	t78 = (x325==((x326/x327)+x328));

	if (t78 != 1) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int8_t x329 = INT8_MIN;
	uint16_t x330 = 7U;
	int32_t x331 = -1;
	static volatile uint16_t x332 = 31446U;
	int32_t t79 = -23401461;

	t79 = (x329==((x330/x331)+x332));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x333 = -22;
	volatile uint16_t x334 = 508U;
	int64_t x335 = -1LL;
	int32_t t80 = -626;

	t80 = (x333==((x334/x335)+x336));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x338 = 23U;
	volatile uint16_t x339 = 2615U;
	int64_t x340 = INT64_MIN;
	static volatile int32_t t81 = 100033;

	t81 = (x337==((x338/x339)+x340));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	uint64_t x341 = 1923665480075855759LLU;
	static volatile int8_t x342 = -1;
	int32_t x343 = -1;
	volatile uint16_t x344 = 20203U;

	t82 = (x341==((x342/x343)+x344));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x346 = INT8_MIN;
	uint8_t x348 = 1U;

	t83 = (x345==((x346/x347)+x348));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x349 = -883;
	int8_t x350 = INT8_MIN;
	int64_t x351 = -1LL;

	t84 = (x349==((x350/x351)+x352));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x353 = INT16_MIN;
	volatile int64_t x354 = INT64_MIN;
	int8_t x356 = INT8_MIN;
	int32_t t85 = 3;

	t85 = (x353==((x354/x355)+x356));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x357 = INT32_MIN;
	int64_t x358 = 988115389028422845LL;
	uint16_t x359 = 21U;
	volatile uint32_t x360 = 1740U;
	volatile int32_t t86 = -3;

	t86 = (x357==((x358/x359)+x360));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static int64_t x365 = -31679502723LL;
	int32_t x366 = INT32_MAX;
	static uint8_t x368 = 3U;
	static int32_t t87 = 16977;

	t87 = (x365==((x366/x367)+x368));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x370 = INT8_MIN;
	int64_t x371 = INT64_MAX;
	int8_t x372 = INT8_MAX;

	t88 = (x369==((x370/x371)+x372));

	if (t88 != 0) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x374 = INT8_MIN;
	volatile uint16_t x375 = 292U;
	int8_t x376 = 0;
	static int32_t t89 = 604796;

	t89 = (x373==((x374/x375)+x376));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint8_t x378 = 6U;
	int32_t x379 = -2667;
	int64_t x380 = -90219387LL;
	int32_t t90 = 14148576;

	t90 = (x377==((x378/x379)+x380));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	static uint64_t x381 = UINT64_MAX;
	uint32_t x383 = 37253U;
	int32_t t91 = -3;

	t91 = (x381==((x382/x383)+x384));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x387 = INT32_MIN;
	uint16_t x388 = 649U;
	int32_t t92 = -409;

	t92 = (x385==((x386/x387)+x388));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x389 = UINT64_MAX;
	static volatile int8_t x391 = INT8_MIN;
	int64_t x392 = 17102609667LL;
	volatile int32_t t93 = -5;

	t93 = (x389==((x390/x391)+x392));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x394 = INT32_MAX;
	uint16_t x395 = UINT16_MAX;
	int16_t x396 = INT16_MIN;

	t94 = (x393==((x394/x395)+x396));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int32_t x397 = INT32_MIN;
	int32_t x399 = -1;
	volatile uint64_t x400 = 18416084094140LLU;
	static volatile int32_t t95 = 151;

	t95 = (x397==((x398/x399)+x400));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x401 = 3;
	int8_t x402 = INT8_MAX;
	int32_t x403 = -16814;
	int64_t x404 = INT64_MIN;
	int32_t t96 = -1012;

	t96 = (x401==((x402/x403)+x404));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x409 = INT16_MIN;
	static int8_t x410 = INT8_MIN;
	uint32_t x411 = 32327855U;
	int64_t x412 = INT64_MIN;
	int32_t t97 = -2393100;

	t97 = (x409==((x410/x411)+x412));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x413 = INT32_MAX;
	static int64_t x414 = -191400133020LL;
	volatile int32_t t98 = -1070108667;

	t98 = (x413==((x414/x415)+x416));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x421 = UINT64_MAX;
	static volatile int16_t x422 = 12;
	int32_t x423 = INT32_MAX;
	static uint64_t x424 = 54465130714968187LLU;
	volatile int32_t t99 = 11;

	t99 = (x421==((x422/x423)+x424));

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

