#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x4 = UINT8_MAX;
static uint8_t x5 = UINT8_MAX;
int16_t x6 = -1;
int64_t t1 = -71264065302562LL;
uint32_t x22 = 12963187U;
int8_t x24 = INT8_MAX;
static volatile int64_t t6 = 20003926124LL;
int32_t x30 = 7078930;
static volatile int8_t x31 = -1;
int32_t x34 = INT32_MIN;
static uint16_t x46 = UINT16_MAX;
int32_t t12 = -785382;
static volatile uint64_t x62 = 33108535LLU;
int64_t x64 = INT64_MIN;
static uint32_t t14 = 27842898U;
static volatile int16_t x78 = -6;
int8_t x80 = INT8_MIN;
static volatile int64_t x88 = INT64_MIN;
volatile uint64_t t16 = 1164758468704439LLU;
uint8_t x90 = 56U;
uint64_t t17 = 5811LLU;
static uint8_t x101 = UINT8_MAX;
volatile int16_t x102 = -3828;
static int8_t x106 = -1;
int8_t x117 = 53;
volatile uint8_t x119 = 7U;
volatile int32_t t24 = INT32_MIN;
static int16_t x130 = INT16_MIN;
uint8_t x131 = 19U;
static int64_t x137 = INT64_MIN;
volatile int32_t x142 = -775624;
int32_t x144 = 7832;
uint8_t x147 = UINT8_MAX;
static int32_t x149 = -1;
static volatile int64_t x150 = INT64_MIN;
int32_t t34 = 0;
int64_t t35 = -34735LL;
uint8_t x190 = UINT8_MAX;
uint32_t x194 = 199U;
int16_t x203 = -1;
uint64_t x205 = 283130028093047362LLU;
uint64_t t43 = 130086791135724LLU;
int8_t x212 = INT8_MIN;
uint8_t x213 = UINT8_MAX;
int64_t t45 = -688505LL;
static int32_t x232 = INT32_MAX;
int32_t x235 = -282764865;
int64_t t49 = 102374894030826LL;
static int32_t x239 = INT32_MAX;
static uint16_t x240 = 5595U;
static int8_t x246 = -5;
int16_t x248 = -17;
volatile int8_t x250 = INT8_MAX;
int16_t x258 = INT16_MAX;
int16_t x259 = -1;
uint64_t x267 = 4114613810770175277LLU;
int16_t x268 = INT16_MAX;
int8_t x273 = INT8_MIN;
int16_t x275 = -350;
uint32_t x276 = UINT32_MAX;
static int8_t x282 = 9;
volatile int32_t x288 = INT32_MIN;
volatile int8_t x293 = 1;
static volatile uint64_t t63 = 8087LLU;
int64_t x312 = -4232289LL;
static uint8_t x315 = UINT8_MAX;
static volatile uint32_t t67 = 7U;
int32_t x329 = INT32_MIN;
static int32_t x334 = INT32_MIN;
int32_t x340 = -56;
int16_t x347 = INT16_MIN;
int8_t x349 = -1;
int32_t x353 = 1108759;
uint32_t x356 = 14212U;
int16_t x367 = INT16_MAX;
int32_t x371 = -3804364;
volatile int64_t t76 = -67352659766427LL;
int8_t x381 = INT8_MIN;
int32_t x382 = INT32_MIN;
static uint8_t x383 = 82U;
int16_t x387 = INT16_MIN;
int64_t x388 = INT64_MIN;
int8_t x391 = -1;
int8_t x393 = INT8_MIN;
int64_t x395 = INT64_MIN;
int8_t x396 = INT8_MIN;
static volatile int64_t t82 = 77LL;
int32_t x401 = -31832571;
volatile int32_t t84 = -1418693;
uint32_t x405 = UINT32_MAX;
static int16_t x406 = INT16_MIN;
int16_t x424 = -1;
int16_t x439 = -1;
int64_t x443 = INT64_MAX;
uint64_t x444 = 9LLU;
int32_t t94 = -3153428;
static volatile int16_t x453 = INT16_MAX;
int16_t x457 = INT16_MIN;
int16_t x458 = -1;
static int32_t x461 = INT32_MIN;
static volatile int16_t x462 = INT16_MIN;
static uint32_t x464 = UINT32_MAX;
uint32_t x467 = 600U;
static volatile int64_t x469 = -498506LL;
volatile int32_t x470 = INT32_MIN;
volatile int64_t t99 = -3LL;


void f0(void) {
	int64_t x1 = -1LL;
	uint8_t x2 = UINT8_MAX;
	int64_t x3 = INT64_MAX;
	volatile int64_t t0 = -805677177460241LL;

	t0 = ((x1-x2)&(x3|x4));

	if (t0 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x7 = -1;
	int64_t x8 = INT64_MIN;

	t1 = ((x5-x6)&(x7|x8));

	if (t1 != 256LL) { NG(); } else { ; }
	
}

void f2(void) {
	static int8_t x9 = INT8_MIN;
	int16_t x10 = INT16_MIN;
	uint8_t x11 = 48U;
	static int64_t x12 = 262963814596847LL;
	static volatile int64_t t2 = -5600695915790LL;

	t2 = ((x9-x10)&(x11|x12));

	if (t2 != 128LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint8_t x13 = 63U;
	int32_t x14 = -1;
	static volatile int32_t x15 = INT32_MIN;
	uint32_t x16 = 30610U;
	uint32_t t3 = 23362255U;

	t3 = ((x13-x14)&(x15|x16));

	if (t3 != 0U) { NG(); } else { ; }
	
}

void f4(void) {
	volatile uint64_t x17 = UINT64_MAX;
	int32_t x18 = INT32_MAX;
	static int32_t x19 = -1;
	uint32_t x20 = UINT32_MAX;
	volatile uint64_t t4 = 8583375LLU;

	t4 = ((x17-x18)&(x19|x20));

	if (t4 != 2147483648LLU) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint8_t x21 = 0U;
	int16_t x23 = INT16_MIN;
	volatile uint32_t t5 = 24729782U;

	t5 = ((x21-x22)&(x23|x24));

	if (t5 != 4281991181U) { NG(); } else { ; }
	
}

void f6(void) {
	static uint16_t x25 = 17U;
	int64_t x26 = -7LL;
	int64_t x27 = INT64_MIN;
	volatile uint8_t x28 = 18U;

	t6 = ((x25-x26)&(x27|x28));

	if (t6 != 16LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint32_t x29 = 114U;
	uint32_t x32 = 259133U;
	static volatile uint32_t t7 = 13U;

	t7 = ((x29-x30)&(x31|x32));

	if (t7 != 4287888480U) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x33 = -1;
	volatile int32_t x35 = 3860470;
	static uint8_t x36 = UINT8_MAX;
	volatile int32_t t8 = -105777;

	t8 = ((x33-x34)&(x35|x36));

	if (t8 != 3860479) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = 362;
	static uint64_t x39 = 3261LLU;
	uint16_t x40 = UINT16_MAX;
	volatile uint64_t t9 = 524345425320028785LLU;

	t9 = ((x37-x38)&(x39|x40));

	if (t9 != 32406LLU) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -1;
	static uint64_t x42 = UINT64_MAX;
	int8_t x43 = INT8_MAX;
	int32_t x44 = 11217;
	uint64_t t10 = 8594829035686LLU;

	t10 = ((x41-x42)&(x43|x44));

	if (t10 != 0LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x45 = INT8_MIN;
	static int64_t x47 = -510LL;
	int32_t x48 = INT32_MIN;
	int64_t t11 = 1586819538211765LL;

	t11 = ((x45-x46)&(x47|x48));

	if (t11 != -66048LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x53 = INT32_MAX;
	int16_t x54 = INT16_MAX;
	static uint16_t x55 = UINT16_MAX;
	int8_t x56 = -1;

	t12 = ((x53-x54)&(x55|x56));

	if (t12 != 2147450880) { NG(); } else { ; }
	
}

void f13(void) {
	static uint32_t x61 = 245118U;
	int64_t x63 = INT64_MAX;
	volatile uint64_t t13 = 471661080033589972LLU;

	t13 = ((x61-x62)&(x63|x64));

	if (t13 != 18446744073676688199LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x73 = 105U;
	uint16_t x74 = UINT16_MAX;
	uint8_t x75 = UINT8_MAX;
	uint32_t x76 = 71838U;

	t14 = ((x73-x74)&(x75|x76));

	if (t14 != 65642U) { NG(); } else { ; }
	
}

void f15(void) {
	static volatile int16_t x77 = INT16_MAX;
	static int8_t x79 = 19;
	volatile int32_t t15 = -546;

	t15 = ((x77-x78)&(x79|x80));

	if (t15 != 32769) { NG(); } else { ; }
	
}

void f16(void) {
	uint64_t x85 = UINT64_MAX;
	uint16_t x86 = 344U;
	static uint16_t x87 = 5U;

	t16 = ((x85-x86)&(x87|x88));

	if (t16 != 9223372036854775813LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint16_t x89 = 81U;
	static int64_t x91 = 1LL;
	volatile uint64_t x92 = UINT64_MAX;

	t17 = ((x89-x90)&(x91|x92));

	if (t17 != 25LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x97 = -55372;
	uint8_t x98 = 11U;
	uint64_t x99 = UINT64_MAX;
	int32_t x100 = -1;
	volatile uint64_t t18 = 434555256197LLU;

	t18 = ((x97-x98)&(x99|x100));

	if (t18 != 18446744073709496233LLU) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x103 = 520597U;
	uint64_t x104 = UINT64_MAX;
	static volatile uint64_t t19 = 30344434LLU;

	t19 = ((x101-x102)&(x103|x104));

	if (t19 != 4083LLU) { NG(); } else { ; }
	
}

void f20(void) {
	static volatile uint16_t x105 = 3U;
	int8_t x107 = INT8_MIN;
	int32_t x108 = INT32_MAX;
	volatile int32_t t20 = -1046;

	t20 = ((x105-x106)&(x107|x108));

	if (t20 != 4) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = -1;
	int32_t x110 = -1;
	uint32_t x111 = 8677462U;
	int8_t x112 = INT8_MAX;
	volatile uint32_t t21 = 1621327010U;

	t21 = ((x109-x110)&(x111|x112));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint64_t x113 = 12163488062252663LLU;
	int8_t x114 = INT8_MIN;
	uint32_t x115 = 68508644U;
	int64_t x116 = -1LL;
	volatile uint64_t t22 = 116LLU;

	t22 = ((x113-x114)&(x115|x116));

	if (t22 != 12163488062252791LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x118 = 0U;
	int32_t x120 = -31;
	volatile int32_t t23 = -655;

	t23 = ((x117-x118)&(x119|x120));

	if (t23 != 37) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x121 = -1;
	int32_t x122 = INT32_MAX;
	static volatile int16_t x123 = INT16_MIN;
	volatile int8_t x124 = INT8_MIN;

	t24 = ((x121-x122)&(x123|x124));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x129 = 16U;
	uint8_t x132 = UINT8_MAX;
	volatile int32_t t25 = 1;

	t25 = ((x129-x130)&(x131|x132));

	if (t25 != 16) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint8_t x133 = 5U;
	static volatile int32_t x134 = -1;
	uint16_t x135 = 25962U;
	int64_t x136 = -1LL;
	volatile int64_t t26 = 2338LL;

	t26 = ((x133-x134)&(x135|x136));

	if (t26 != 6LL) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x138 = INT32_MIN;
	int8_t x139 = -1;
	uint32_t x140 = 798264732U;
	volatile int64_t t27 = -15386269490193434LL;

	t27 = ((x137-x138)&(x139|x140));

	if (t27 != 2147483648LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint16_t x141 = 19289U;
	int64_t x143 = INT64_MAX;
	static volatile int64_t t28 = 15886976654459540LL;

	t28 = ((x141-x142)&(x143|x144));

	if (t28 != 794913LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int64_t x145 = -1270513812454872216LL;
	int32_t x146 = INT32_MIN;
	int16_t x148 = INT16_MAX;
	static int64_t t29 = -3820LL;

	t29 = ((x145-x146)&(x147|x148));

	if (t29 != 27496LL) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int64_t x151 = -1LL;
	uint8_t x152 = 7U;
	volatile int64_t t30 = INT64_MAX;

	t30 = ((x149-x150)&(x151|x152));

	if (t30 != INT64_MAX) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x153 = UINT64_MAX;
	static uint64_t x154 = 14607066388347LLU;
	static uint8_t x155 = 4U;
	volatile int32_t x156 = -1;
	static uint64_t t31 = 1LLU;

	t31 = ((x153-x154)&(x155|x156));

	if (t31 != 18446729466643163268LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x157 = 1U;
	static int8_t x158 = 0;
	volatile int8_t x159 = -1;
	int8_t x160 = INT8_MIN;
	int32_t t32 = -26821;

	t32 = ((x157-x158)&(x159|x160));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x161 = 129382875751380068LLU;
	static int8_t x162 = -1;
	static int16_t x163 = -1;
	int16_t x164 = INT16_MIN;
	volatile uint64_t t33 = 3874729396482LLU;

	t33 = ((x161-x162)&(x163|x164));

	if (t33 != 129382875751380069LLU) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x165 = INT32_MIN;
	int8_t x166 = -1;
	uint8_t x167 = 19U;
	int16_t x168 = -1451;

	t34 = ((x165-x166)&(x167|x168));

	if (t34 != -2147483647) { NG(); } else { ; }
	
}

void f35(void) {
	int16_t x169 = -1;
	int64_t x170 = -1LL;
	int64_t x171 = INT64_MIN;
	static uint8_t x172 = 1U;

	t35 = ((x169-x170)&(x171|x172));

	if (t35 != 0LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x173 = 119U;
	uint32_t x174 = 292U;
	static volatile int32_t x175 = -1;
	uint64_t x176 = UINT64_MAX;
	volatile uint64_t t36 = 3505018572425LLU;

	t36 = ((x173-x174)&(x175|x176));

	if (t36 != 4294967123LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int16_t x177 = 0;
	int8_t x178 = INT8_MAX;
	uint16_t x179 = 1U;
	uint64_t x180 = UINT64_MAX;
	volatile uint64_t t37 = 12758383497950401LLU;

	t37 = ((x177-x178)&(x179|x180));

	if (t37 != 18446744073709551489LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int64_t x181 = INT64_MIN;
	int8_t x182 = INT8_MIN;
	static volatile uint16_t x183 = 0U;
	volatile int16_t x184 = INT16_MIN;
	int64_t t38 = INT64_MIN;

	t38 = ((x181-x182)&(x183|x184));

	if (t38 != INT64_MIN) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x185 = -1;
	int16_t x186 = -1919;
	int8_t x187 = -15;
	int16_t x188 = -2;
	static volatile int32_t t39 = 35;

	t39 = ((x185-x186)&(x187|x188));

	if (t39 != 1918) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int8_t x189 = -7;
	int8_t x191 = -1;
	volatile int8_t x192 = INT8_MAX;
	volatile int32_t t40 = -1;

	t40 = ((x189-x190)&(x191|x192));

	if (t40 != -262) { NG(); } else { ; }
	
}

void f41(void) {
	static int64_t x193 = 2114LL;
	uint8_t x195 = 11U;
	int8_t x196 = -1;
	static volatile int64_t t41 = -1620736128425773857LL;

	t41 = ((x193-x194)&(x195|x196));

	if (t41 != 1915LL) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x201 = INT64_MIN;
	int8_t x202 = INT8_MIN;
	uint64_t x204 = UINT64_MAX;
	uint64_t t42 = 25545478845721949LLU;

	t42 = ((x201-x202)&(x203|x204));

	if (t42 != 9223372036854775936LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint16_t x206 = UINT16_MAX;
	int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MAX;

	t43 = ((x205-x206)&(x207|x208));

	if (t43 != 283130028092981827LLU) { NG(); } else { ; }
	
}

void f44(void) {
	uint16_t x209 = UINT16_MAX;
	uint16_t x210 = 2U;
	volatile uint16_t x211 = UINT16_MAX;
	static volatile int32_t t44 = -40158110;

	t44 = ((x209-x210)&(x211|x212));

	if (t44 != 65533) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x214 = UINT8_MAX;
	int64_t x215 = 107040554388542316LL;
	static volatile int8_t x216 = -1;

	t45 = ((x213-x214)&(x215|x216));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x217 = -1;
	uint32_t x218 = UINT32_MAX;
	static int8_t x219 = -1;
	int32_t x220 = -2243;
	volatile uint32_t t46 = 0U;

	t46 = ((x217-x218)&(x219|x220));

	if (t46 != 0U) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x225 = -96748414909649827LL;
	int64_t x226 = -1LL;
	static uint8_t x227 = 4U;
	uint64_t x228 = 117568012091506LLU;
	volatile uint64_t t47 = 7476579303430293520LLU;

	t47 = ((x225-x226)&(x227|x228));

	if (t47 != 73410798944342LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x229 = 1U;
	static uint32_t x230 = 29U;
	int16_t x231 = -1;
	volatile uint32_t t48 = 16215971U;

	t48 = ((x229-x230)&(x231|x232));

	if (t48 != 4294967268U) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x233 = INT8_MIN;
	int64_t x234 = -11987LL;
	int32_t x236 = -21865545;

	t49 = ((x233-x234)&(x235|x236));

	if (t49 != 2579LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x237 = -166867514;
	int32_t x238 = INT32_MIN;
	static int32_t t50 = -211;

	t50 = ((x237-x238)&(x239|x240));

	if (t50 != 1980616134) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x241 = -1;
	volatile int8_t x242 = 22;
	uint64_t x243 = UINT64_MAX;
	uint32_t x244 = UINT32_MAX;
	uint64_t t51 = 8095718655145LLU;

	t51 = ((x241-x242)&(x243|x244));

	if (t51 != 18446744073709551593LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x245 = INT8_MAX;
	volatile int8_t x247 = -5;
	static int32_t t52 = -1;

	t52 = ((x245-x246)&(x247|x248));

	if (t52 != 132) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x249 = -2288;
	static volatile int64_t x251 = -175310503515470066LL;
	uint8_t x252 = 1U;
	volatile int64_t t53 = 125681190LL;

	t53 = ((x249-x250)&(x251|x252));

	if (t53 != -175310503515470335LL) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x257 = UINT32_MAX;
	static int64_t x260 = INT64_MIN;
	int64_t t54 = -56709544866LL;

	t54 = ((x257-x258)&(x259|x260));

	if (t54 != 4294934528LL) { NG(); } else { ; }
	
}

void f55(void) {
	static int32_t x261 = -1;
	int8_t x262 = -1;
	volatile int64_t x263 = INT64_MAX;
	int8_t x264 = INT8_MIN;
	static int64_t t55 = 273462027102423738LL;

	t55 = ((x261-x262)&(x263|x264));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	static uint32_t x265 = 580079U;
	int32_t x266 = -48579;
	uint64_t t56 = 2761408502LLU;

	t56 = ((x265-x266)&(x267|x268));

	if (t56 != 595890LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x269 = INT8_MIN;
	int32_t x270 = 0;
	int16_t x271 = INT16_MIN;
	volatile int8_t x272 = INT8_MIN;
	int32_t t57 = -246375;

	t57 = ((x269-x270)&(x271|x272));

	if (t57 != -128) { NG(); } else { ; }
	
}

void f58(void) {
	int16_t x274 = INT16_MAX;
	static uint32_t t58 = 103091U;

	t58 = ((x273-x274)&(x275|x276));

	if (t58 != 4294934401U) { NG(); } else { ; }
	
}

void f59(void) {
	int16_t x281 = -1;
	int32_t x283 = -1;
	static volatile int32_t x284 = -1;
	volatile int32_t t59 = -22476830;

	t59 = ((x281-x282)&(x283|x284));

	if (t59 != -10) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x285 = INT64_MIN;
	uint64_t x286 = 301516LLU;
	volatile int32_t x287 = -1;
	volatile uint64_t t60 = 36822627556316LLU;

	t60 = ((x285-x286)&(x287|x288));

	if (t60 != 9223372036854474292LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x289 = INT16_MIN;
	static int16_t x290 = INT16_MAX;
	int64_t x291 = -3057867734206344604LL;
	static int8_t x292 = -1;
	volatile int64_t t61 = 1070993484021LL;

	t61 = ((x289-x290)&(x291|x292));

	if (t61 != -65535LL) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x294 = -1;
	int32_t x295 = INT32_MIN;
	volatile int8_t x296 = INT8_MIN;
	int32_t t62 = -627;

	t62 = ((x293-x294)&(x295|x296));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x301 = 42832185532LLU;
	uint32_t x302 = UINT32_MAX;
	int64_t x303 = 996329205966434267LL;
	uint32_t x304 = 2U;

	t63 = ((x301-x302)&(x303|x304));

	if (t63 != 1358514329LLU) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int32_t x309 = INT32_MIN;
	int8_t x310 = -1;
	int64_t x311 = -597LL;
	static volatile int64_t t64 = -462996LL;

	t64 = ((x309-x310)&(x311|x312));

	if (t64 != -2147483647LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x313 = INT16_MIN;
	static int32_t x314 = -1;
	int8_t x316 = 1;
	int32_t t65 = -23823426;

	t65 = ((x313-x314)&(x315|x316));

	if (t65 != 1) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x317 = 2472U;
	int8_t x318 = -1;
	uint32_t x319 = 391272U;
	int16_t x320 = INT16_MAX;
	static uint32_t t66 = 24032761U;

	t66 = ((x317-x318)&(x319|x320));

	if (t66 != 2473U) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x321 = INT8_MIN;
	uint16_t x322 = 13316U;
	volatile uint32_t x323 = 68447954U;
	static uint16_t x324 = 1494U;

	t67 = ((x321-x322)&(x323|x324));

	if (t67 != 68438868U) { NG(); } else { ; }
	
}

void f68(void) {
	uint64_t x330 = 2825LLU;
	static int16_t x331 = 6527;
	int32_t x332 = -1;
	volatile uint64_t t68 = 117125911LLU;

	t68 = ((x329-x330)&(x331|x332));

	if (t68 != 18446744071562065143LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x333 = INT8_MIN;
	static int32_t x335 = -3676472;
	static int64_t x336 = 302529LL;
	int64_t t69 = 1426120LL;

	t69 = ((x333-x334)&(x335|x336));

	if (t69 != 2143813504LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint32_t x337 = 4578U;
	int64_t x338 = 174363949383LL;
	int8_t x339 = INT8_MIN;
	volatile int64_t t70 = 109696265LL;

	t70 = ((x337-x338)&(x339|x340));

	if (t70 != -174363944824LL) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x341 = INT32_MIN;
	uint32_t x342 = UINT32_MAX;
	static uint16_t x343 = 11280U;
	uint8_t x344 = 10U;
	volatile uint32_t t71 = 75U;

	t71 = ((x341-x342)&(x343|x344));

	if (t71 != 0U) { NG(); } else { ; }
	
}

void f72(void) {
	uint8_t x345 = UINT8_MAX;
	uint64_t x346 = 23402859290LLU;
	static volatile uint32_t x348 = 319U;
	static uint64_t t72 = 547091076866104LLU;

	t72 = ((x345-x346)&(x347|x348));

	if (t72 != 2366931237LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x350 = INT16_MIN;
	int64_t x351 = INT64_MIN;
	int8_t x352 = INT8_MIN;
	int64_t t73 = -1024LL;

	t73 = ((x349-x350)&(x351|x352));

	if (t73 != 32640LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint64_t x354 = UINT64_MAX;
	static uint8_t x355 = UINT8_MAX;
	volatile uint64_t t74 = 97LLU;

	t74 = ((x353-x354)&(x355|x356));

	if (t74 != 8984LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x365 = 124142997;
	static volatile int8_t x366 = -1;
	int8_t x368 = -1;
	volatile int32_t t75 = 1982;

	t75 = ((x365-x366)&(x367|x368));

	if (t75 != 124142998) { NG(); } else { ; }
	
}

void f76(void) {
	static int64_t x369 = 388264126LL;
	int8_t x370 = INT8_MAX;
	uint32_t x372 = UINT32_MAX;

	t76 = ((x369-x370)&(x371|x372));

	if (t76 != 388263999LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x373 = INT8_MIN;
	int8_t x374 = INT8_MIN;
	static volatile int32_t x375 = -1;
	int64_t x376 = -1LL;
	static volatile int64_t t77 = 92532695936627LL;

	t77 = ((x373-x374)&(x375|x376));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int16_t x377 = INT16_MAX;
	int8_t x378 = INT8_MIN;
	int64_t x379 = INT64_MIN;
	int16_t x380 = INT16_MAX;
	volatile int64_t t78 = 1280666002LL;

	t78 = ((x377-x378)&(x379|x380));

	if (t78 != 127LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x384 = INT8_MAX;
	int32_t t79 = -91847;

	t79 = ((x381-x382)&(x383|x384));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	static int32_t x385 = -1;
	uint8_t x386 = UINT8_MAX;
	int64_t t80 = -3881491199455889997LL;

	t80 = ((x385-x386)&(x387|x388));

	if (t80 != -32768LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x389 = INT16_MIN;
	uint32_t x390 = UINT32_MAX;
	uint8_t x392 = 0U;
	volatile uint32_t t81 = 522148506U;

	t81 = ((x389-x390)&(x391|x392));

	if (t81 != 4294934529U) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x394 = INT32_MIN;

	t82 = ((x393-x394)&(x395|x396));

	if (t82 != 2147483520LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x397 = INT16_MAX;
	static volatile int32_t x398 = 7316;
	uint8_t x399 = UINT8_MAX;
	volatile int32_t x400 = INT32_MIN;
	volatile int32_t t83 = -270506661;

	t83 = ((x397-x398)&(x399|x400));

	if (t83 != 107) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x402 = -15;
	static int8_t x403 = 2;
	volatile int8_t x404 = 1;

	t84 = ((x401-x402)&(x403|x404));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x407 = UINT8_MAX;
	int16_t x408 = -1;
	volatile uint32_t t85 = 731U;

	t85 = ((x405-x406)&(x407|x408));

	if (t85 != 32767U) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x409 = 1839225560147783LLU;
	int8_t x410 = INT8_MIN;
	int64_t x411 = -1LL;
	int8_t x412 = 0;
	volatile uint64_t t86 = 1666LLU;

	t86 = ((x409-x410)&(x411|x412));

	if (t86 != 1839225560147911LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x413 = INT32_MIN;
	int16_t x414 = -1;
	static uint64_t x415 = 14836823LLU;
	uint8_t x416 = UINT8_MAX;
	volatile uint64_t t87 = 412047LLU;

	t87 = ((x413-x414)&(x415|x416));

	if (t87 != 1LLU) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int8_t x417 = -2;
	int16_t x418 = -1;
	uint8_t x419 = UINT8_MAX;
	int16_t x420 = -1;
	volatile int32_t t88 = 175411670;

	t88 = ((x417-x418)&(x419|x420));

	if (t88 != -1) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x421 = -1;
	static uint32_t x422 = 3589519U;
	int8_t x423 = INT8_MIN;
	uint32_t t89 = 31559069U;

	t89 = ((x421-x422)&(x423|x424));

	if (t89 != 4291377776U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int8_t x425 = 25;
	int8_t x426 = 6;
	static int32_t x427 = INT32_MAX;
	static uint32_t x428 = 1080U;
	uint32_t t90 = 184927020U;

	t90 = ((x425-x426)&(x427|x428));

	if (t90 != 19U) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x433 = -409749964LL;
	uint8_t x434 = UINT8_MAX;
	static uint32_t x435 = UINT32_MAX;
	volatile uint64_t x436 = 750361LLU;
	volatile uint64_t t91 = 3647576693798576LLU;

	t91 = ((x433-x434)&(x435|x436));

	if (t91 != 3885217077LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x437 = -1;
	volatile int16_t x438 = -1;
	volatile int8_t x440 = -1;
	volatile int32_t t92 = -37710767;

	t92 = ((x437-x438)&(x439|x440));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int32_t x441 = 135652152;
	int8_t x442 = 0;
	uint64_t t93 = 41440062908LLU;

	t93 = ((x441-x442)&(x443|x444));

	if (t93 != 135652152LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x449 = INT32_MIN;
	int32_t x450 = -666822;
	uint16_t x451 = 7U;
	int16_t x452 = INT16_MAX;

	t94 = ((x449-x450)&(x451|x452));

	if (t94 != 11462) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x454 = -1LL;
	static uint32_t x455 = 2U;
	uint8_t x456 = UINT8_MAX;
	volatile int64_t t95 = -654814360393LL;

	t95 = ((x453-x454)&(x455|x456));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int64_t x459 = -629873253LL;
	int16_t x460 = -1;
	volatile int64_t t96 = 1LL;

	t96 = ((x457-x458)&(x459|x460));

	if (t96 != -32767LL) { NG(); } else { ; }
	
}

void f97(void) {
	volatile int16_t x463 = INT16_MAX;
	static uint32_t t97 = 6827U;

	t97 = ((x461-x462)&(x463|x464));

	if (t97 != 2147516416U) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x465 = 60960163;
	uint32_t x466 = 1828U;
	int64_t x468 = -633717610LL;
	volatile int64_t t98 = 1LL;

	t98 = ((x465-x466)&(x467|x468));

	if (t98 != 35792478LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int16_t x471 = 1802;
	volatile int32_t x472 = INT32_MIN;

	t99 = ((x469-x470)&(x471|x472));

	if (t99 != 1026LL) { NG(); } else { ; }
	
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

