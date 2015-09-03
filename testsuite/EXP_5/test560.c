#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t0 = 74U;
static int16_t x6 = INT16_MIN;
static int64_t x11 = INT64_MIN;
volatile int8_t x16 = 36;
static volatile int64_t t4 = -11LL;
volatile uint8_t x21 = 1U;
static uint64_t x26 = 2544138884LLU;
int16_t x28 = INT16_MIN;
static int8_t x30 = 25;
int8_t x43 = -14;
static int32_t x50 = INT32_MIN;
volatile uint32_t t12 = 471157U;
int32_t x61 = -1;
int8_t x66 = 1;
int64_t x67 = INT64_MIN;
int64_t x75 = -1LL;
uint32_t x78 = 1072U;
int16_t x81 = 0;
static volatile int32_t x82 = -999100;
int32_t x85 = INT32_MIN;
int16_t x87 = 2724;
uint64_t x95 = 62LLU;
uint64_t t23 = 87602876976422LLU;
static int16_t x99 = INT16_MIN;
int16_t x102 = -1;
uint64_t x103 = UINT64_MAX;
uint32_t x109 = UINT32_MAX;
int8_t x110 = 0;
volatile int8_t x124 = INT8_MIN;
uint8_t x134 = 102U;
uint32_t x135 = UINT32_MAX;
int16_t x140 = INT16_MIN;
int32_t x142 = -79;
uint64_t x143 = UINT64_MAX;
static uint32_t x146 = 0U;
int32_t x157 = -506921656;
int16_t x167 = INT16_MIN;
int64_t x168 = INT64_MIN;
int32_t x169 = -1;
volatile uint64_t t41 = UINT64_MAX;
volatile int32_t x183 = INT32_MIN;
int32_t x184 = -1;
int8_t x185 = INT8_MIN;
uint32_t x186 = 6907U;
uint16_t x187 = 2U;
int8_t x188 = INT8_MIN;
volatile int64_t t47 = -4539LL;
int16_t x211 = -45;
int64_t t49 = 171047087LL;
volatile int64_t t52 = -17059548683LL;
int32_t x229 = INT32_MIN;
int16_t x239 = -7;
uint32_t x240 = 96417673U;
int32_t t57 = INT32_MIN;
int16_t x245 = 0;
int8_t x250 = -20;
uint8_t x252 = UINT8_MAX;
int64_t x253 = -1LL;
static volatile int16_t x258 = INT16_MAX;
int16_t x259 = INT16_MIN;
int8_t x261 = INT8_MAX;
int64_t x264 = INT64_MIN;
int8_t x265 = 7;
static volatile uint64_t t63 = 89109127236333LLU;
int64_t t64 = -9357012987968647LL;
int64_t t66 = 133210940020LL;
int8_t x288 = INT8_MAX;
int32_t x294 = INT32_MIN;
volatile int32_t t70 = -64;
int64_t t72 = INT64_MAX;
volatile uint32_t x313 = UINT32_MAX;
int16_t x318 = 0;
int64_t t76 = 97938125LL;
uint64_t x321 = 5768LLU;
static uint32_t x322 = 21U;
volatile int16_t x325 = -4203;
int16_t x345 = INT16_MIN;
int64_t x356 = 18216LL;
int32_t x357 = 28923;
uint8_t x364 = 4U;
int64_t x374 = INT64_MIN;
volatile int64_t t88 = -12222LL;
volatile uint8_t x381 = 1U;
uint32_t t91 = 12780098U;
volatile uint32_t x390 = UINT32_MAX;
volatile uint32_t x401 = 1U;
int64_t t95 = -1481LL;
static volatile int64_t t96 = 1LL;
static uint64_t x415 = 2986679977182714LLU;
volatile uint64_t t98 = UINT64_MAX;


void f0(void) {
	int16_t x1 = INT16_MAX;
	static int32_t x2 = INT32_MAX;
	int32_t x3 = INT32_MIN;
	uint32_t x4 = 337416U;

	t0 = (x1+((x2/x3)%x4));

	if (t0 != 32767U) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int16_t x5 = 1;
	int8_t x7 = -1;
	uint64_t x8 = UINT64_MAX;
	uint64_t t1 = 0LLU;

	t1 = (x5+((x6/x7)%x8));

	if (t1 != 32769LLU) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = 1U;
	static uint64_t x10 = UINT64_MAX;
	int64_t x12 = INT64_MAX;
	volatile uint64_t t2 = 1398489945LLU;

	t2 = (x9+((x10/x11)%x12));

	if (t2 != 2LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint8_t x13 = 30U;
	int32_t x14 = INT32_MAX;
	uint16_t x15 = UINT16_MAX;
	static int32_t t3 = 6838401;

	t3 = (x13+((x14/x15)%x16));

	if (t3 != 38) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = 2U;
	static int64_t x18 = -1LL;
	int16_t x19 = -1;
	uint32_t x20 = UINT32_MAX;

	t4 = (x17+((x18/x19)%x20));

	if (t4 != 3LL) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int64_t x22 = INT64_MIN;
	uint32_t x23 = UINT32_MAX;
	volatile uint16_t x24 = 847U;
	volatile int64_t t5 = 56352841328804474LL;

	t5 = (x21+((x22/x23)%x24));

	if (t5 != -694LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = 35045882;
	int8_t x27 = INT8_MIN;
	uint64_t t6 = 33231537LLU;

	t6 = (x25+((x26/x27)%x28));

	if (t6 != 35045882LLU) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	int64_t x31 = INT64_MIN;
	int8_t x32 = 2;
	int64_t t7 = 0LL;

	t7 = (x29+((x30/x31)%x32));

	if (t7 != -1LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = UINT16_MAX;
	int16_t x34 = INT16_MIN;
	uint8_t x35 = UINT8_MAX;
	int8_t x36 = INT8_MIN;
	static int32_t t8 = -60;

	t8 = (x33+((x34/x35)%x36));

	if (t8 != 65535) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int64_t x38 = 33037015751LL;
	uint64_t x39 = UINT64_MAX;
	uint8_t x40 = 96U;
	uint64_t t9 = UINT64_MAX;

	t9 = (x37+((x38/x39)%x40));

	if (t9 != UINT64_MAX) { NG(); } else { ; }
	
}

void f10(void) {
	static int32_t x41 = -1;
	uint64_t x42 = 26135379766LLU;
	int32_t x44 = INT32_MIN;
	uint64_t t10 = UINT64_MAX;

	t10 = (x41+((x42/x43)%x44));

	if (t10 != UINT64_MAX) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = 7;
	uint32_t x46 = UINT32_MAX;
	int64_t x47 = INT64_MAX;
	int8_t x48 = -1;
	volatile int64_t t11 = -224942532LL;

	t11 = (x45+((x46/x47)%x48));

	if (t11 != 7LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint16_t x49 = 30U;
	volatile uint32_t x51 = UINT32_MAX;
	int16_t x52 = -1;

	t12 = (x49+((x50/x51)%x52));

	if (t12 != 30U) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int16_t x54 = 116;
	int16_t x55 = INT16_MIN;
	volatile int8_t x56 = -24;
	static volatile uint32_t t13 = UINT32_MAX;

	t13 = (x53+((x54/x55)%x56));

	if (t13 != UINT32_MAX) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int16_t x58 = INT16_MIN;
	volatile uint32_t x59 = UINT32_MAX;
	static volatile int32_t x60 = -1;
	uint32_t t14 = UINT32_MAX;

	t14 = (x57+((x58/x59)%x60));

	if (t14 != UINT32_MAX) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x62 = INT16_MIN;
	uint16_t x63 = UINT16_MAX;
	static int64_t x64 = -508899471985275LL;
	volatile int64_t t15 = -178151LL;

	t15 = (x61+((x62/x63)%x64));

	if (t15 != -1LL) { NG(); } else { ; }
	
}

void f16(void) {
	static int8_t x65 = INT8_MIN;
	int16_t x68 = INT16_MIN;
	int64_t t16 = 1LL;

	t16 = (x65+((x66/x67)%x68));

	if (t16 != -128LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x69 = INT64_MIN;
	int64_t x70 = INT64_MIN;
	uint16_t x71 = UINT16_MAX;
	int8_t x72 = -1;
	int64_t t17 = INT64_MIN;

	t17 = (x69+((x70/x71)%x72));

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	static int32_t x73 = -1;
	int8_t x74 = INT8_MIN;
	static uint8_t x76 = UINT8_MAX;
	int64_t t18 = 2054787514547LL;

	t18 = (x73+((x74/x75)%x76));

	if (t18 != 127LL) { NG(); } else { ; }
	
}

void f19(void) {
	static volatile uint8_t x77 = 1U;
	int32_t x79 = INT32_MAX;
	int8_t x80 = 4;
	uint32_t t19 = 14523U;

	t19 = (x77+((x78/x79)%x80));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int16_t x83 = INT16_MIN;
	volatile int16_t x84 = -1;
	volatile int32_t t20 = -23198;

	t20 = (x81+((x82/x83)%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x86 = INT64_MIN;
	uint16_t x88 = 14U;
	int64_t t21 = -11527918240738LL;

	t21 = (x85+((x86/x87)%x88));

	if (t21 != -2147483657LL) { NG(); } else { ; }
	
}

void f22(void) {
	static uint8_t x89 = UINT8_MAX;
	int8_t x90 = INT8_MAX;
	volatile uint8_t x91 = 27U;
	int8_t x92 = -46;
	volatile int32_t t22 = -3;

	t22 = (x89+((x90/x91)%x92));

	if (t22 != 259) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = INT16_MIN;
	uint32_t x94 = 12U;
	int32_t x96 = INT32_MIN;

	t23 = (x93+((x94/x95)%x96));

	if (t23 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = INT64_MIN;
	volatile int32_t x98 = INT32_MIN;
	static uint16_t x100 = 5U;
	int64_t t24 = 282694538LL;

	t24 = (x97+((x98/x99)%x100));

	if (t24 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int16_t x101 = -1;
	volatile int8_t x104 = INT8_MIN;
	volatile uint64_t t25 = 13LLU;

	t25 = (x101+((x102/x103)%x104));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x105 = 0;
	static int8_t x106 = INT8_MIN;
	int32_t x107 = INT32_MIN;
	int8_t x108 = INT8_MIN;
	int32_t t26 = -3;

	t26 = (x105+((x106/x107)%x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x111 = 1181;
	int32_t x112 = 39166882;
	uint32_t t27 = UINT32_MAX;

	t27 = (x109+((x110/x111)%x112));

	if (t27 != UINT32_MAX) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MAX;
	volatile int32_t x114 = INT32_MIN;
	static int64_t x115 = 7063109491763003LL;
	uint8_t x116 = 49U;
	int64_t t28 = -198238713056024LL;

	t28 = (x113+((x114/x115)%x116));

	if (t28 != 32767LL) { NG(); } else { ; }
	
}

void f29(void) {
	static volatile int32_t x117 = INT32_MIN;
	uint64_t x118 = UINT64_MAX;
	static int16_t x119 = INT16_MAX;
	int32_t x120 = INT32_MIN;
	uint64_t t29 = 8580983971LLU;

	t29 = (x117+((x118/x119)%x120));

	if (t29 != 562964986331152LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x121 = UINT8_MAX;
	uint16_t x122 = 13U;
	uint64_t x123 = 2251500026502371LLU;
	static uint64_t t30 = 8923LLU;

	t30 = (x121+((x122/x123)%x124));

	if (t30 != 255LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x125 = 315999LLU;
	static int16_t x126 = 50;
	int8_t x127 = 8;
	static uint8_t x128 = 47U;
	volatile uint64_t t31 = 12022409318037605LLU;

	t31 = (x125+((x126/x127)%x128));

	if (t31 != 316005LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile uint32_t x129 = UINT32_MAX;
	int32_t x130 = INT32_MAX;
	uint64_t x131 = 134435776725LLU;
	static int8_t x132 = 7;
	static uint64_t t32 = 4LLU;

	t32 = (x129+((x130/x131)%x132));

	if (t32 != 4294967295LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static uint16_t x133 = 2294U;
	volatile int32_t x136 = 1415;
	volatile uint32_t t33 = 647517348U;

	t33 = (x133+((x134/x135)%x136));

	if (t33 != 2294U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x137 = UINT32_MAX;
	static int16_t x138 = INT16_MAX;
	static int64_t x139 = INT64_MIN;
	int64_t t34 = 1LL;

	t34 = (x137+((x138/x139)%x140));

	if (t34 != 4294967295LL) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int8_t x141 = -6;
	uint32_t x144 = 4U;
	volatile uint64_t t35 = 3413064LLU;

	t35 = (x141+((x142/x143)%x144));

	if (t35 != 18446744073709551610LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int64_t x145 = INT64_MIN;
	int32_t x147 = INT32_MIN;
	volatile int32_t x148 = INT32_MAX;
	int64_t t36 = INT64_MIN;

	t36 = (x145+((x146/x147)%x148));

	if (t36 != INT64_MIN) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x149 = INT16_MIN;
	int8_t x150 = 0;
	volatile int32_t x151 = INT32_MIN;
	static int16_t x152 = INT16_MIN;
	int32_t t37 = -4003337;

	t37 = (x149+((x150/x151)%x152));

	if (t37 != -32768) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x158 = 1U;
	static int64_t x159 = INT64_MIN;
	uint16_t x160 = UINT16_MAX;
	volatile int64_t t38 = -899527882LL;

	t38 = (x157+((x158/x159)%x160));

	if (t38 != -506921656LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int32_t x161 = -2;
	uint8_t x162 = 117U;
	volatile uint32_t x163 = UINT32_MAX;
	static int32_t x164 = -574017993;
	volatile uint32_t t39 = 8463722U;

	t39 = (x161+((x162/x163)%x164));

	if (t39 != 4294967294U) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x165 = -1079055557374369638LL;
	static uint64_t x166 = UINT64_MAX;
	volatile uint64_t t40 = 852070LLU;

	t40 = (x165+((x166/x167)%x168));

	if (t40 != 17367688516335181979LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x170 = -192;
	int32_t x171 = INT32_MIN;
	static uint64_t x172 = 2733688455869126LLU;

	t41 = (x169+((x170/x171)%x172));

	if (t41 != UINT64_MAX) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x173 = 1019573;
	volatile int64_t x174 = -1LL;
	volatile uint16_t x175 = 93U;
	static uint16_t x176 = 2269U;
	volatile int64_t t42 = 1360593617813291357LL;

	t42 = (x173+((x174/x175)%x176));

	if (t42 != 1019573LL) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x181 = INT16_MAX;
	int8_t x182 = INT8_MIN;
	static volatile int32_t t43 = 70378978;

	t43 = (x181+((x182/x183)%x184));

	if (t43 != 32767) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t t44 = 33427U;

	t44 = (x185+((x186/x187)%x188));

	if (t44 != 3325U) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x189 = INT64_MIN;
	int16_t x190 = -1;
	int8_t x191 = -1;
	volatile int64_t x192 = INT64_MIN;
	volatile int64_t t45 = 3157813LL;

	t45 = (x189+((x190/x191)%x192));

	if (t45 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint32_t x197 = UINT32_MAX;
	static volatile int32_t x198 = INT32_MAX;
	int8_t x199 = INT8_MIN;
	int64_t x200 = -1067477950720452205LL;
	static int64_t t46 = -26162LL;

	t46 = (x197+((x198/x199)%x200));

	if (t46 != 4278190080LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x201 = 4;
	int8_t x202 = 18;
	volatile int64_t x203 = INT64_MIN;
	uint16_t x204 = 6U;

	t47 = (x201+((x202/x203)%x204));

	if (t47 != 4LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x205 = -6337;
	int16_t x206 = INT16_MIN;
	int32_t x207 = INT32_MIN;
	static uint16_t x208 = 4257U;
	static volatile int32_t t48 = 0;

	t48 = (x205+((x206/x207)%x208));

	if (t48 != -6337) { NG(); } else { ; }
	
}

void f49(void) {
	int64_t x209 = 4595475644366162LL;
	int8_t x210 = -17;
	static int64_t x212 = INT64_MIN;

	t49 = (x209+((x210/x211)%x212));

	if (t49 != 4595475644366162LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x213 = 1;
	int8_t x214 = INT8_MIN;
	uint32_t x215 = 21166U;
	uint64_t x216 = UINT64_MAX;
	volatile uint64_t t50 = 21LLU;

	t50 = (x213+((x214/x215)%x216));

	if (t50 != 202919LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x217 = 11;
	int8_t x218 = -1;
	int64_t x219 = INT64_MIN;
	uint16_t x220 = 6490U;
	static volatile int64_t t51 = -106LL;

	t51 = (x217+((x218/x219)%x220));

	if (t51 != 11LL) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x221 = -1757366LL;
	volatile int32_t x222 = -1;
	int16_t x223 = INT16_MIN;
	static int32_t x224 = INT32_MIN;

	t52 = (x221+((x222/x223)%x224));

	if (t52 != -1757366LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile int8_t x225 = -33;
	int16_t x226 = INT16_MIN;
	uint32_t x227 = 1274U;
	volatile int64_t x228 = INT64_MIN;
	int64_t t53 = 58044317127LL;

	t53 = (x225+((x226/x227)%x228));

	if (t53 != 3371187LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x230 = -1LL;
	uint16_t x231 = UINT16_MAX;
	uint32_t x232 = UINT32_MAX;
	static int64_t t54 = -8348664956590LL;

	t54 = (x229+((x230/x231)%x232));

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint64_t x233 = 6304969963089610LLU;
	static int32_t x234 = INT32_MAX;
	volatile uint8_t x235 = 58U;
	uint32_t x236 = UINT32_MAX;
	uint64_t t55 = 226651276LLU;

	t55 = (x233+((x234/x235)%x236));

	if (t55 != 6304970000115190LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x237 = INT8_MIN;
	volatile int16_t x238 = 3840;
	uint32_t t56 = 284660116U;

	t56 = (x237+((x238/x239)%x240));

	if (t56 != 52589008U) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x241 = INT32_MIN;
	int8_t x242 = INT8_MIN;
	static uint16_t x243 = UINT16_MAX;
	static int16_t x244 = INT16_MIN;

	t57 = (x241+((x242/x243)%x244));

	if (t57 != INT32_MIN) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x246 = INT16_MIN;
	int32_t x247 = INT32_MAX;
	uint32_t x248 = 248U;
	volatile uint32_t t58 = 1841U;

	t58 = (x245+((x246/x247)%x248));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x249 = INT64_MIN;
	volatile int16_t x251 = -1;
	volatile int64_t t59 = 20686696233LL;

	t59 = (x249+((x250/x251)%x252));

	if (t59 != -9223372036854775788LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x254 = -3;
	int16_t x255 = -1;
	int8_t x256 = INT8_MIN;
	volatile int64_t t60 = -7080790760547242LL;

	t60 = (x253+((x254/x255)%x256));

	if (t60 != 2LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x257 = INT64_MIN;
	int64_t x260 = INT64_MIN;
	int64_t t61 = INT64_MIN;

	t61 = (x257+((x258/x259)%x260));

	if (t61 != INT64_MIN) { NG(); } else { ; }
	
}

void f62(void) {
	static int32_t x262 = -321508;
	static int16_t x263 = -1;
	static volatile int64_t t62 = 23302LL;

	t62 = (x261+((x262/x263)%x264));

	if (t62 != 321635LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x266 = 260106047LLU;
	int16_t x267 = INT16_MAX;
	int8_t x268 = -1;

	t63 = (x265+((x266/x267)%x268));

	if (t63 != 7945LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x269 = INT64_MIN;
	volatile uint32_t x270 = UINT32_MAX;
	int16_t x271 = -74;
	static uint8_t x272 = UINT8_MAX;

	t64 = (x269+((x270/x271)%x272));

	if (t64 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x273 = 12U;
	int8_t x274 = -1;
	int64_t x275 = 1488LL;
	uint16_t x276 = 162U;
	volatile int64_t t65 = 114805594985LL;

	t65 = (x273+((x274/x275)%x276));

	if (t65 != 12LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int16_t x277 = -1;
	static uint16_t x278 = 16148U;
	static int8_t x279 = INT8_MAX;
	static int64_t x280 = 39LL;

	t66 = (x277+((x278/x279)%x280));

	if (t66 != 9LL) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x281 = 1972;
	static int8_t x282 = 1;
	uint16_t x283 = UINT16_MAX;
	int32_t x284 = INT32_MIN;
	static int32_t t67 = -677250;

	t67 = (x281+((x282/x283)%x284));

	if (t67 != 1972) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x285 = 115658624LL;
	volatile uint16_t x286 = 3540U;
	static uint32_t x287 = 922934706U;
	int64_t t68 = -57734227LL;

	t68 = (x285+((x286/x287)%x288));

	if (t68 != 115658624LL) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x289 = -1;
	int8_t x290 = INT8_MIN;
	static volatile int16_t x291 = INT16_MAX;
	int32_t x292 = -1;
	volatile int32_t t69 = 1034503510;

	t69 = (x289+((x290/x291)%x292));

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x293 = 1;
	uint16_t x295 = 28310U;
	int32_t x296 = -211;

	t70 = (x293+((x294/x295)%x296));

	if (t70 != -106) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x297 = -1;
	int32_t x298 = INT32_MAX;
	int64_t x299 = INT64_MAX;
	static uint8_t x300 = UINT8_MAX;
	volatile int64_t t71 = -2614531871522005LL;

	t71 = (x297+((x298/x299)%x300));

	if (t71 != -1LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int64_t x301 = INT64_MAX;
	int8_t x302 = 0;
	static int8_t x303 = INT8_MAX;
	static int64_t x304 = INT64_MIN;

	t72 = (x301+((x302/x303)%x304));

	if (t72 != INT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x305 = 57;
	int16_t x306 = -1;
	int64_t x307 = INT64_MIN;
	int8_t x308 = -1;
	static volatile int64_t t73 = -233990283142LL;

	t73 = (x305+((x306/x307)%x308));

	if (t73 != 57LL) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x309 = 57U;
	int8_t x310 = -1;
	int16_t x311 = -1;
	int32_t x312 = -1;
	volatile int32_t t74 = -105;

	t74 = (x309+((x310/x311)%x312));

	if (t74 != 57) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x314 = -59921796362316LL;
	volatile int16_t x315 = INT16_MAX;
	int32_t x316 = -1;
	int64_t t75 = 858463004468704LL;

	t75 = (x313+((x314/x315)%x316));

	if (t75 != 4294967295LL) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x317 = INT16_MIN;
	uint8_t x319 = 125U;
	volatile int64_t x320 = -119887435522462802LL;

	t76 = (x317+((x318/x319)%x320));

	if (t76 != -32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x323 = -1;
	static int32_t x324 = INT32_MAX;
	uint64_t t77 = 62LLU;

	t77 = (x321+((x322/x323)%x324));

	if (t77 != 5768LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int64_t x326 = INT64_MIN;
	int8_t x327 = INT8_MIN;
	uint32_t x328 = UINT32_MAX;
	int64_t t78 = 1131871934474107LL;

	t78 = (x325+((x326/x327)%x328));

	if (t78 != 16773013LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x333 = 6206572572369616LL;
	int8_t x334 = INT8_MAX;
	int16_t x335 = -2;
	uint16_t x336 = 2012U;
	int64_t t79 = -4800273577LL;

	t79 = (x333+((x334/x335)%x336));

	if (t79 != 6206572572369553LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x337 = -111858311;
	volatile uint8_t x338 = 3U;
	uint64_t x339 = UINT64_MAX;
	uint32_t x340 = UINT32_MAX;
	volatile uint64_t t80 = 36LLU;

	t80 = (x337+((x338/x339)%x340));

	if (t80 != 18446744073597693305LLU) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x341 = 3U;
	int32_t x342 = INT32_MIN;
	int32_t x343 = 1200271;
	static int16_t x344 = INT16_MIN;
	volatile int32_t t81 = -11307;

	t81 = (x341+((x342/x343)%x344));

	if (t81 != -1786) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x346 = 0;
	uint64_t x347 = UINT64_MAX;
	int64_t x348 = INT64_MIN;
	volatile uint64_t t82 = 12515345412LLU;

	t82 = (x345+((x346/x347)%x348));

	if (t82 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x349 = 48;
	int8_t x350 = INT8_MIN;
	static uint32_t x351 = 233U;
	int64_t x352 = INT64_MAX;
	static volatile int64_t t83 = -2284235914417706851LL;

	t83 = (x349+((x350/x351)%x352));

	if (t83 != 18433383LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint64_t x353 = UINT64_MAX;
	uint16_t x354 = UINT16_MAX;
	volatile int64_t x355 = INT64_MIN;
	uint64_t t84 = UINT64_MAX;

	t84 = (x353+((x354/x355)%x356));

	if (t84 != UINT64_MAX) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x358 = 28U;
	static uint32_t x359 = UINT32_MAX;
	volatile int8_t x360 = INT8_MIN;
	volatile uint32_t t85 = 204U;

	t85 = (x357+((x358/x359)%x360));

	if (t85 != 28923U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x361 = 472U;
	uint64_t x362 = 0LLU;
	int16_t x363 = -1;
	uint64_t t86 = 104294090344832399LLU;

	t86 = (x361+((x362/x363)%x364));

	if (t86 != 472LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint64_t x369 = UINT64_MAX;
	volatile int16_t x370 = INT16_MIN;
	int16_t x371 = INT16_MIN;
	int16_t x372 = -1;
	uint64_t t87 = UINT64_MAX;

	t87 = (x369+((x370/x371)%x372));

	if (t87 != UINT64_MAX) { NG(); } else { ; }
	
}

void f88(void) {
	static int32_t x373 = INT32_MIN;
	int32_t x375 = INT32_MIN;
	int16_t x376 = 10;

	t88 = (x373+((x374/x375)%x376));

	if (t88 != -2147483642LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x377 = INT16_MIN;
	volatile int16_t x378 = 93;
	int8_t x379 = 1;
	int8_t x380 = -9;
	static volatile int32_t t89 = 129477070;

	t89 = (x377+((x378/x379)%x380));

	if (t89 != -32765) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x382 = -15;
	uint16_t x383 = 5U;
	int32_t x384 = INT32_MIN;
	int32_t t90 = -6;

	t90 = (x381+((x382/x383)%x384));

	if (t90 != -2) { NG(); } else { ; }
	
}

void f91(void) {
	uint32_t x385 = UINT32_MAX;
	volatile int32_t x386 = INT32_MAX;
	volatile int8_t x387 = INT8_MIN;
	int8_t x388 = INT8_MIN;

	t91 = (x385+((x386/x387)%x388));

	if (t91 != 4294967168U) { NG(); } else { ; }
	
}

void f92(void) {
	int8_t x389 = INT8_MAX;
	int8_t x391 = -1;
	static int8_t x392 = 2;
	static uint32_t t92 = 572067226U;

	t92 = (x389+((x390/x391)%x392));

	if (t92 != 128U) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x393 = INT64_MIN;
	int32_t x394 = INT32_MIN;
	static int16_t x395 = INT16_MIN;
	volatile int8_t x396 = -1;
	volatile int64_t t93 = INT64_MIN;

	t93 = (x393+((x394/x395)%x396));

	if (t93 != INT64_MIN) { NG(); } else { ; }
	
}

void f94(void) {
	uint64_t x397 = 26752873826LLU;
	uint32_t x398 = 2186958U;
	uint16_t x399 = UINT16_MAX;
	int64_t x400 = -685809472LL;
	static volatile uint64_t t94 = 212LLU;

	t94 = (x397+((x398/x399)%x400));

	if (t94 != 26752873859LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x402 = INT64_MIN;
	static int32_t x403 = 1515571;
	int16_t x404 = INT16_MAX;

	t95 = (x401+((x402/x403)%x404));

	if (t95 != -18956LL) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x405 = -1;
	volatile int64_t x406 = 2365LL;
	int16_t x407 = INT16_MIN;
	static int16_t x408 = 1;

	t96 = (x405+((x406/x407)%x408));

	if (t96 != -1LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x409 = UINT64_MAX;
	uint16_t x410 = 1307U;
	int8_t x411 = -30;
	volatile uint8_t x412 = 7U;
	uint64_t t97 = 266925146492LLU;

	t97 = (x409+((x410/x411)%x412));

	if (t97 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x413 = -1;
	static volatile uint16_t x414 = UINT16_MAX;
	uint16_t x416 = UINT16_MAX;

	t98 = (x413+((x414/x415)%x416));

	if (t98 != UINT64_MAX) { NG(); } else { ; }
	
}

void f99(void) {
	int32_t x417 = -1;
	int64_t x418 = 10LL;
	int64_t x419 = -82909LL;
	uint32_t x420 = UINT32_MAX;
	int64_t t99 = -15255609363LL;

	t99 = (x417+((x418/x419)%x420));

	if (t99 != -1LL) { NG(); } else { ; }
	
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

