#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint64_t x10 = 123LLU;
int64_t x11 = -15LL;
uint8_t x13 = UINT8_MAX;
uint8_t x14 = 8U;
static uint32_t x15 = UINT32_MAX;
int32_t x16 = INT32_MIN;
int8_t x30 = INT8_MAX;
static volatile uint64_t t8 = 2836472728652LLU;
int64_t x49 = -1LL;
uint32_t x50 = UINT32_MAX;
volatile int64_t x58 = INT64_MAX;
volatile int8_t x62 = 5;
uint32_t x69 = UINT32_MAX;
volatile uint32_t t13 = 15119211U;
uint64_t x83 = UINT64_MAX;
int64_t x87 = -2133LL;
int64_t x101 = -1LL;
static uint8_t x103 = 85U;
int8_t x106 = INT8_MIN;
volatile int16_t x108 = 113;
uint16_t x112 = UINT16_MAX;
volatile int64_t t23 = -704446LL;
volatile int16_t x132 = -8;
volatile int8_t x135 = -1;
int16_t x151 = -71;
int16_t x157 = INT16_MIN;
int64_t x160 = INT64_MIN;
static int32_t x165 = INT32_MAX;
uint32_t x174 = 15U;
uint64_t t35 = 936263334301539718LLU;
static uint64_t x216 = UINT64_MAX;
volatile int16_t x217 = -1;
uint32_t t39 = 347682U;
int32_t x241 = 2087;
static volatile uint64_t t43 = 190480LLU;
int8_t x247 = -28;
int32_t t44 = -300806034;
volatile uint32_t x259 = 52317U;
uint32_t x279 = UINT32_MAX;
uint32_t x280 = UINT32_MAX;
int16_t x286 = INT16_MAX;
uint64_t x299 = 300754787122890934LLU;
int16_t x300 = -1;
volatile uint64_t t52 = 6397LLU;
int8_t x301 = 17;
int64_t t54 = 221637570620102980LL;
static volatile int32_t x314 = 7;
uint64_t t55 = 44241881829074LLU;
static int8_t x318 = INT8_MIN;
volatile uint16_t x337 = 51U;
static int32_t x353 = -7236461;
volatile int64_t t60 = 1163854931058100136LL;
int32_t x359 = -1286;
int16_t x360 = -1;
uint32_t x362 = UINT32_MAX;
uint32_t x377 = 1925945U;
uint8_t x381 = UINT8_MAX;
static uint32_t t65 = 28483U;
volatile uint64_t t67 = 1770195LLU;
int32_t x397 = 201998478;
uint64_t x400 = 2065825978LLU;
static int16_t x413 = INT16_MAX;
static uint64_t x415 = UINT64_MAX;
static int32_t x416 = INT32_MAX;
volatile uint32_t t71 = 1399U;
uint16_t x430 = UINT16_MAX;
volatile int8_t x445 = INT8_MAX;
volatile uint32_t t79 = 248U;
int8_t x472 = INT8_MIN;
int16_t x477 = INT16_MIN;
static int16_t x482 = -1;
int64_t x483 = -8164279116LL;
int64_t x487 = -35LL;
static int8_t x493 = INT8_MAX;
int16_t x502 = INT16_MIN;
static volatile int64_t t88 = 518795876298LL;
static int64_t t89 = 742967870LL;
int16_t x517 = -7510;
static uint8_t x525 = 1U;
volatile uint64_t t95 = 17114805LLU;
volatile uint64_t x561 = 178886886648750096LLU;
volatile int64_t t99 = -1412980214LL;


void f0(void) {
	volatile int32_t x5 = 15;
	int64_t x6 = -13777LL;
	int8_t x7 = -1;
	int16_t x8 = INT16_MIN;
	int64_t t0 = 135549002423605261LL;

	t0 = ((x5-x6)^(x7*x8));

	if (t0 != 46560LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x9 = 1101744192U;
	int8_t x12 = INT8_MIN;
	volatile uint64_t t1 = 1971311699639186LLU;

	t1 = ((x9-x10)^(x11*x12));

	if (t1 != 1101742149LLU) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint32_t t2 = 239770202U;

	t2 = ((x13-x14)^(x15*x16));

	if (t2 != 2147483895U) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 387U;
	uint16_t x18 = 13352U;
	int32_t x19 = -373;
	int32_t x20 = 745556;
	int32_t t3 = -10;

	t3 = ((x17-x18)^(x19*x20));

	if (t3 != 278096071) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile int32_t x21 = 265;
	uint16_t x22 = 1057U;
	int32_t x23 = INT32_MIN;
	volatile uint32_t x24 = 180U;
	static uint32_t t4 = 161U;

	t4 = ((x21-x22)^(x23*x24));

	if (t4 != 4294966504U) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile uint32_t x25 = 81498U;
	static uint64_t x26 = 7LLU;
	uint32_t x27 = 0U;
	static int32_t x28 = -1;
	uint64_t t5 = 247LLU;

	t5 = ((x25-x26)^(x27*x28));

	if (t5 != 81491LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x29 = INT8_MIN;
	volatile uint32_t x31 = 17621U;
	int32_t x32 = INT32_MIN;
	static volatile uint32_t t6 = 29736U;

	t6 = ((x29-x30)^(x31*x32));

	if (t6 != 2147483393U) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x37 = UINT16_MAX;
	static int8_t x38 = 4;
	static int8_t x39 = -60;
	uint8_t x40 = 2U;
	int32_t t7 = -445316;

	t7 = ((x37-x38)^(x39*x40));

	if (t7 != -65421) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x45 = 1;
	static int32_t x46 = -913;
	int8_t x47 = INT8_MIN;
	volatile uint64_t x48 = 9408885LLU;

	t8 = ((x45-x46)^(x47*x48));

	if (t8 != 18446744072505214482LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x51 = UINT64_MAX;
	int16_t x52 = -1;
	uint64_t t9 = 357600306LLU;

	t9 = ((x49-x50)^(x51*x52));

	if (t9 != 18446744069414584321LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x53 = -1;
	uint8_t x54 = 31U;
	static volatile int64_t x55 = INT64_MAX;
	uint8_t x56 = 0U;
	volatile int64_t t10 = -113LL;

	t10 = ((x53-x54)^(x55*x56));

	if (t10 != -32LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x57 = 2U;
	int16_t x59 = INT16_MIN;
	int32_t x60 = -1;
	volatile int64_t t11 = 102850211785LL;

	t11 = ((x57-x58)^(x59*x60));

	if (t11 != -9223372036854743037LL) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x61 = INT8_MIN;
	static uint32_t x63 = 2469987U;
	volatile uint8_t x64 = 43U;
	volatile uint32_t t12 = 2U;

	t12 = ((x61-x62)^(x63*x64));

	if (t12 != 4188757978U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x70 = 1U;
	static int16_t x71 = INT16_MIN;
	uint16_t x72 = UINT16_MAX;

	t13 = ((x69-x70)^(x71*x72));

	if (t13 != 2147450878U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x73 = INT8_MIN;
	uint32_t x74 = 25U;
	static int64_t x75 = -1LL;
	int8_t x76 = INT8_MAX;
	int64_t t14 = -1689964193270LL;

	t14 = ((x73-x74)^(x75*x76));

	if (t14 != -4294967066LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x77 = 9841U;
	volatile uint32_t x78 = 363284U;
	uint32_t x79 = 238479U;
	static int16_t x80 = INT16_MIN;
	uint32_t t15 = 250257944U;

	t15 = ((x77-x78)^(x79*x80));

	if (t15 != 3519159133U) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x81 = INT64_MIN;
	static uint32_t x82 = 0U;
	volatile int16_t x84 = -7488;
	volatile uint64_t t16 = 257167LLU;

	t16 = ((x81-x82)^(x83*x84));

	if (t16 != 9223372036854783296LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x85 = INT64_MAX;
	uint8_t x86 = UINT8_MAX;
	uint8_t x88 = 0U;
	int64_t t17 = -24603125760252654LL;

	t17 = ((x85-x86)^(x87*x88));

	if (t17 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MAX;
	uint32_t x94 = 92929222U;
	uint32_t x95 = 203059U;
	uint16_t x96 = 14370U;
	volatile uint32_t t18 = 13847U;

	t18 = ((x93-x94)^(x95*x96));

	if (t18 != 1469711359U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint64_t x97 = 1LLU;
	int16_t x98 = INT16_MAX;
	uint64_t x99 = UINT64_MAX;
	static int64_t x100 = -1LL;
	uint64_t t19 = 16519776124105LLU;

	t19 = ((x97-x98)^(x99*x100));

	if (t19 != 18446744073709518851LLU) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x102 = INT64_MAX;
	uint8_t x104 = 1U;
	static volatile int64_t t20 = 256LL;

	t20 = ((x101-x102)^(x103*x104));

	if (t20 != -9223372036854775723LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int8_t x105 = INT8_MIN;
	int8_t x107 = -1;
	volatile int32_t t21 = -44837058;

	t21 = ((x105-x106)^(x107*x108));

	if (t21 != -113) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x109 = INT16_MAX;
	uint32_t x110 = UINT32_MAX;
	static uint64_t x111 = UINT64_MAX;
	uint64_t t22 = 973946LLU;

	t22 = ((x109-x110)^(x111*x112));

	if (t22 != 18446744073709518849LLU) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x113 = 2LL;
	uint16_t x114 = 28302U;
	int64_t x115 = -1LL;
	int16_t x116 = INT16_MIN;

	t23 = ((x113-x114)^(x115*x116));

	if (t23 != -61068LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint8_t x121 = UINT8_MAX;
	int8_t x122 = -1;
	int8_t x123 = -1;
	uint64_t x124 = 1809175411LLU;
	static volatile uint64_t t24 = 802840207958046LLU;

	t24 = ((x121-x122)^(x123*x124));

	if (t24 != 18446744071900376461LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x129 = -1;
	int64_t x130 = INT64_MIN;
	int8_t x131 = INT8_MIN;
	static volatile int64_t t25 = -1096LL;

	t25 = ((x129-x130)^(x131*x132));

	if (t25 != 9223372036854774783LL) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x133 = INT8_MAX;
	volatile int32_t x134 = 15;
	static int16_t x136 = INT16_MIN;
	int32_t t26 = -4;

	t26 = ((x133-x134)^(x135*x136));

	if (t26 != 32880) { NG(); } else { ; }
	
}

void f27(void) {
	int16_t x141 = INT16_MIN;
	static volatile uint16_t x142 = 3147U;
	uint64_t x143 = 1105LLU;
	volatile int16_t x144 = 0;
	static uint64_t t27 = 207733333LLU;

	t27 = ((x141-x142)^(x143*x144));

	if (t27 != 18446744073709515701LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x145 = -1LL;
	static volatile int64_t x146 = INT64_MIN;
	int8_t x147 = INT8_MAX;
	uint16_t x148 = 62U;
	static volatile int64_t t28 = 715717796905115LL;

	t28 = ((x145-x146)^(x147*x148));

	if (t28 != 9223372036854767933LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x149 = -5289654538LL;
	uint32_t x150 = 71U;
	int16_t x152 = INT16_MIN;
	int64_t t29 = -1LL;

	t29 = ((x149-x150)^(x151*x152));

	if (t29 != -5291784529LL) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x158 = -1;
	uint64_t x159 = UINT64_MAX;
	static volatile uint64_t t30 = 694479LLU;

	t30 = ((x157-x158)^(x159*x160));

	if (t30 != 9223372036854743041LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int64_t x166 = 110418466325798LL;
	uint16_t x167 = 1780U;
	int8_t x168 = INT8_MIN;
	volatile int64_t t31 = 1937337515213132LL;

	t31 = ((x165-x166)^(x167*x168));

	if (t31 != 110416318774489LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int32_t x169 = 95955295;
	volatile int16_t x170 = INT16_MAX;
	int16_t x171 = -186;
	uint16_t x172 = 2U;
	volatile int32_t t32 = 748;

	t32 = ((x169-x170)^(x171*x172));

	if (t32 != -95922196) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x173 = 328059;
	static int8_t x175 = INT8_MAX;
	static uint32_t x176 = 737733U;
	volatile uint32_t t33 = 1519691249U;

	t33 = ((x173-x174)^(x175*x176));

	if (t33 != 93364695U) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x177 = INT16_MIN;
	int32_t x178 = INT32_MIN;
	volatile int64_t x179 = 491241LL;
	volatile int16_t x180 = INT16_MIN;
	volatile int64_t t34 = -3843218816199501617LL;

	t34 = ((x177-x178)^(x179*x180));

	if (t34 != -16115302400LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint32_t x181 = UINT32_MAX;
	int32_t x182 = INT32_MAX;
	volatile uint64_t x183 = 73LLU;
	uint32_t x184 = UINT32_MAX;

	t35 = ((x181-x182)^(x183*x184));

	if (t35 != 311385128887LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x197 = 10379;
	int16_t x198 = 24;
	int8_t x199 = INT8_MIN;
	uint16_t x200 = 31U;
	volatile int32_t t36 = -956100;

	t36 = ((x197-x198)^(x199*x200));

	if (t36 != -9997) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x205 = -1;
	static uint32_t x206 = 62645U;
	uint8_t x207 = UINT8_MAX;
	uint16_t x208 = UINT16_MAX;
	uint32_t t37 = 1902395U;

	t37 = ((x205-x206)^(x207*x208));

	if (t37 != 4278318155U) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x213 = INT16_MIN;
	static uint32_t x214 = 260070304U;
	uint16_t x215 = UINT16_MAX;
	volatile uint64_t t38 = 1627915851475713652LLU;

	t38 = ((x213-x214)^(x215*x216));

	if (t38 != 18446744069674640481LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint32_t x218 = 7U;
	uint8_t x219 = UINT8_MAX;
	int16_t x220 = -1;

	t39 = ((x217-x218)^(x219*x220));

	if (t39 != 249U) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x221 = INT16_MIN;
	volatile int16_t x222 = -97;
	volatile int16_t x223 = 11053;
	static int16_t x224 = -1;
	volatile int32_t t40 = 522332;

	t40 = ((x221-x222)^(x223*x224));

	if (t40 != 21682) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x225 = UINT64_MAX;
	uint16_t x226 = 112U;
	int16_t x227 = -2276;
	volatile uint8_t x228 = 27U;
	uint64_t t41 = 14326LLU;

	t41 = ((x225-x226)^(x227*x228));

	if (t41 != 61563LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x237 = -1;
	int16_t x238 = INT16_MAX;
	int16_t x239 = INT16_MAX;
	int16_t x240 = -1;
	volatile int32_t t42 = -7;

	t42 = ((x237-x238)^(x239*x240));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x242 = 1689503LLU;
	int8_t x243 = 0;
	volatile uint32_t x244 = UINT32_MAX;

	t43 = ((x241-x242)^(x243*x244));

	if (t43 != 18446744073707864200LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x245 = INT32_MIN;
	int16_t x246 = INT16_MIN;
	int16_t x248 = INT16_MIN;

	t44 = ((x245-x246)^(x247*x248));

	if (t44 != -2146533376) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x253 = INT32_MAX;
	volatile int32_t x254 = 0;
	static int64_t x255 = -1LL;
	uint64_t x256 = 553357078LLU;
	uint64_t t45 = 738609816675LLU;

	t45 = ((x253-x254)^(x255*x256));

	if (t45 != 18446744072115425045LLU) { NG(); } else { ; }
	
}

void f46(void) {
	static uint8_t x257 = UINT8_MAX;
	static uint64_t x258 = 1565LLU;
	volatile int8_t x260 = 3;
	volatile uint64_t t46 = 37043LLU;

	t46 = ((x257-x258)^(x259*x260));

	if (t46 != 18446744073709395957LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x265 = -1;
	volatile int32_t x266 = INT32_MIN;
	uint16_t x267 = 2204U;
	volatile int8_t x268 = INT8_MAX;
	volatile int32_t t47 = 27360;

	t47 = ((x265-x266)^(x267*x268));

	if (t47 != 2147203739) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x277 = 439818399U;
	uint8_t x278 = 20U;
	uint32_t t48 = 9806U;

	t48 = ((x277-x278)^(x279*x280));

	if (t48 != 439818378U) { NG(); } else { ; }
	
}

void f49(void) {
	uint8_t x285 = 28U;
	volatile int8_t x287 = -1;
	uint16_t x288 = 0U;
	int32_t t49 = -8771;

	t49 = ((x285-x286)^(x287*x288));

	if (t49 != -32739) { NG(); } else { ; }
	
}

void f50(void) {
	int64_t x289 = INT64_MAX;
	uint32_t x290 = 7U;
	int64_t x291 = 15815437677958648LL;
	int8_t x292 = INT8_MIN;
	int64_t t50 = -307578578006LL;

	t50 = ((x289-x290)^(x291*x292));

	if (t50 != -7198996014076068872LL) { NG(); } else { ; }
	
}

void f51(void) {
	static uint8_t x293 = 0U;
	volatile int8_t x294 = -50;
	volatile int8_t x295 = 6;
	static uint16_t x296 = 42U;
	volatile int32_t t51 = -5915;

	t51 = ((x293-x294)^(x295*x296));

	if (t51 != 206) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int32_t x297 = INT32_MIN;
	uint32_t x298 = 2628U;

	t52 = ((x297-x298)^(x299*x300));

	if (t52 != 18145989285880611574LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x302 = -27;
	int16_t x303 = 15;
	uint8_t x304 = 27U;
	int32_t t53 = -215;

	t53 = ((x301-x302)^(x303*x304));

	if (t53 != 441) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x305 = INT64_MIN;
	int16_t x306 = -39;
	static volatile int32_t x307 = -1;
	int8_t x308 = INT8_MIN;

	t54 = ((x305-x306)^(x307*x308));

	if (t54 != -9223372036854775641LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x313 = 25U;
	uint64_t x315 = UINT64_MAX;
	int64_t x316 = INT64_MAX;

	t55 = ((x313-x314)^(x315*x316));

	if (t55 != 9223372036854775827LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static volatile int32_t x317 = -1;
	uint8_t x319 = UINT8_MAX;
	int16_t x320 = INT16_MAX;
	volatile int32_t t56 = 6873005;

	t56 = ((x317-x318)^(x319*x320));

	if (t56 != 8355710) { NG(); } else { ; }
	
}

void f57(void) {
	static uint64_t x321 = 2272949678921513296LLU;
	uint8_t x322 = 124U;
	int64_t x323 = INT64_MAX;
	volatile uint64_t x324 = 38587LLU;
	volatile uint64_t t57 = 33495071694LLU;

	t57 = ((x321-x322)^(x323*x324));

	if (t57 != 6950422357933232529LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x333 = 69324045486LL;
	int8_t x334 = INT8_MIN;
	uint8_t x335 = UINT8_MAX;
	int32_t x336 = 27445;
	int64_t t58 = -46907695LL;

	t58 = ((x333-x334)^(x335*x336));

	if (t58 != 69329892581LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int32_t x338 = -1;
	int8_t x339 = INT8_MIN;
	static uint64_t x340 = UINT64_MAX;
	volatile uint64_t t59 = 2095783310219444LLU;

	t59 = ((x337-x338)^(x339*x340));

	if (t59 != 180LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x354 = -55590LL;
	uint32_t x355 = 6U;
	int32_t x356 = INT32_MIN;

	t60 = ((x353-x354)^(x355*x356));

	if (t60 != -7180871LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x357 = -30;
	uint32_t x358 = UINT32_MAX;
	static uint32_t t61 = 8U;

	t61 = ((x357-x358)^(x359*x360));

	if (t61 != 4294965989U) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x361 = -1;
	volatile int32_t x363 = 12;
	int32_t x364 = 47;
	uint32_t t62 = 815823022U;

	t62 = ((x361-x362)^(x363*x364));

	if (t62 != 564U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x365 = 1U;
	volatile uint16_t x366 = 474U;
	int8_t x367 = INT8_MIN;
	static int8_t x368 = 1;
	volatile int32_t t63 = -113;

	t63 = ((x365-x366)^(x367*x368));

	if (t63 != 423) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x378 = INT8_MIN;
	uint8_t x379 = UINT8_MAX;
	uint32_t x380 = 275912U;
	uint32_t t64 = 11253U;

	t64 = ((x377-x378)^(x379*x380));

	if (t64 != 70054273U) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x382 = 323U;
	uint16_t x383 = 3U;
	static int16_t x384 = -1589;

	t65 = ((x381-x382)^(x383*x384));

	if (t65 != 4829U) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x389 = INT16_MIN;
	int16_t x390 = -1;
	uint16_t x391 = 17049U;
	int64_t x392 = 948577715204LL;
	static int64_t t66 = 737LL;

	t66 = ((x389-x390)^(x391*x392));

	if (t66 != -16172301466522011LL) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x393 = INT64_MIN;
	uint64_t x394 = UINT64_MAX;
	int8_t x395 = 8;
	static uint64_t x396 = 554637892758LLU;

	t67 = ((x393-x394)^(x395*x396));

	if (t67 != 9223376473957917873LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x398 = INT8_MIN;
	static int64_t x399 = INT64_MIN;
	static volatile uint64_t t68 = 43854636765801382LLU;

	t68 = ((x397-x398)^(x399*x400));

	if (t68 != 201998606LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint8_t x405 = UINT8_MAX;
	int8_t x406 = INT8_MAX;
	int16_t x407 = -1;
	uint8_t x408 = 3U;
	int32_t t69 = 17;

	t69 = ((x405-x406)^(x407*x408));

	if (t69 != -131) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x414 = 1;
	uint64_t t70 = 1486240LLU;

	t70 = ((x413-x414)^(x415*x416));

	if (t70 != 18446744071562100735LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x417 = 0;
	uint32_t x418 = UINT32_MAX;
	int16_t x419 = INT16_MAX;
	int16_t x420 = -5;

	t71 = ((x417-x418)^(x419*x420));

	if (t71 != 4294803460U) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x421 = INT8_MIN;
	static volatile int8_t x422 = INT8_MIN;
	int16_t x423 = INT16_MAX;
	uint64_t x424 = 9638733946319LLU;
	volatile uint64_t t72 = 50143371319LLU;

	t72 = ((x421-x422)^(x423*x424));

	if (t72 != 315832395219034673LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int8_t x425 = INT8_MAX;
	int32_t x426 = INT32_MAX;
	volatile int32_t x427 = 38531;
	int8_t x428 = INT8_MIN;
	int32_t t73 = 107;

	t73 = ((x425-x426)^(x427*x428));

	if (t73 != 2142551552) { NG(); } else { ; }
	
}

void f74(void) {
	static int16_t x429 = -1;
	static int16_t x431 = INT16_MIN;
	volatile int8_t x432 = INT8_MIN;
	volatile int32_t t74 = -116;

	t74 = ((x429-x430)^(x431*x432));

	if (t74 != -4259840) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x437 = 481U;
	uint8_t x438 = UINT8_MAX;
	static volatile int8_t x439 = 12;
	static volatile uint64_t x440 = 67338864316631LLU;
	volatile uint64_t t75 = 1042136710044LLU;

	t75 = ((x437-x438)^(x439*x440));

	if (t75 != 808066371799798LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x441 = INT8_MIN;
	uint32_t x442 = UINT32_MAX;
	volatile int16_t x443 = INT16_MAX;
	int8_t x444 = 7;
	uint32_t t76 = 1742U;

	t76 = ((x441-x442)^(x443*x444));

	if (t76 != 4294738040U) { NG(); } else { ; }
	
}

void f77(void) {
	volatile uint32_t x446 = 102U;
	static volatile uint16_t x447 = 3U;
	int64_t x448 = -1LL;
	int64_t t77 = 7093223470LL;

	t77 = ((x445-x446)^(x447*x448));

	if (t77 != -28LL) { NG(); } else { ; }
	
}

void f78(void) {
	static volatile uint8_t x453 = UINT8_MAX;
	int64_t x454 = INT64_MAX;
	uint8_t x455 = 17U;
	uint32_t x456 = 149677065U;
	static int64_t t78 = -34241462LL;

	t78 = ((x453-x454)^(x455*x456));

	if (t78 != -9223372034310265447LL) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x461 = INT8_MIN;
	uint8_t x462 = 1U;
	int8_t x463 = 0;
	uint32_t x464 = UINT32_MAX;

	t79 = ((x461-x462)^(x463*x464));

	if (t79 != 4294967167U) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int16_t x469 = INT16_MIN;
	uint64_t x470 = UINT64_MAX;
	static int32_t x471 = 8;
	volatile uint64_t t80 = 338320493LLU;

	t80 = ((x469-x470)^(x471*x472));

	if (t80 != 31745LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x473 = INT16_MIN;
	volatile int16_t x474 = INT16_MIN;
	static uint8_t x475 = UINT8_MAX;
	uint32_t x476 = UINT32_MAX;
	volatile uint32_t t81 = 8056U;

	t81 = ((x473-x474)^(x475*x476));

	if (t81 != 4294967041U) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x478 = -63;
	int64_t x479 = 2741020LL;
	volatile int8_t x480 = 14;
	volatile int64_t t82 = -2202181306539LL;

	t82 = ((x477-x478)^(x479*x480));

	if (t82 != -38401097LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x481 = INT16_MAX;
	uint64_t x484 = 902998LLU;
	static volatile uint64_t t83 = 257944LLU;

	t83 = ((x481-x482)^(x483*x484));

	if (t83 != 18439371745996329080LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int64_t x485 = -9292855215921LL;
	uint8_t x486 = 6U;
	int16_t x488 = INT16_MIN;
	int64_t t84 = 4601574262190925LL;

	t84 = ((x485-x486)^(x487*x488));

	if (t84 != -9292854069047LL) { NG(); } else { ; }
	
}

void f85(void) {
	static uint32_t x489 = 44U;
	static volatile int16_t x490 = 7015;
	int16_t x491 = INT16_MAX;
	int8_t x492 = -1;
	uint32_t t85 = 14354U;

	t85 = ((x489-x490)^(x491*x492));

	if (t85 != 25796U) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x494 = 57U;
	static int16_t x495 = 4801;
	uint64_t x496 = 27083776049095181LLU;
	volatile uint64_t t86 = 113554877LLU;

	t86 = ((x493-x494)^(x495*x496));

	if (t86 != 902000295739102603LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x497 = 120912466942484LLU;
	int8_t x498 = INT8_MIN;
	static volatile int16_t x499 = INT16_MAX;
	int8_t x500 = -35;
	uint64_t t87 = 358185365384LLU;

	t87 = ((x497-x498)^(x499*x500));

	if (t87 != 18446623161241475767LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x501 = 761474215310133716LL;
	static int16_t x503 = -1;
	int16_t x504 = INT16_MIN;

	t88 = ((x501-x502)^(x503*x504));

	if (t88 != 761474215310133716LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint8_t x505 = 99U;
	volatile uint16_t x506 = 98U;
	static int16_t x507 = -1;
	volatile int64_t x508 = 1892149206LL;

	t89 = ((x505-x506)^(x507*x508));

	if (t89 != -1892149205LL) { NG(); } else { ; }
	
}

void f90(void) {
	static int16_t x513 = -1;
	uint32_t x514 = UINT32_MAX;
	uint64_t x515 = 0LLU;
	static uint64_t x516 = UINT64_MAX;
	volatile uint64_t t90 = 359526LLU;

	t90 = ((x513-x514)^(x515*x516));

	if (t90 != 0LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint32_t x518 = 20135164U;
	uint64_t x519 = 23924464001865240LLU;
	int32_t x520 = INT32_MIN;
	uint64_t t91 = 36853167619830LLU;

	t91 = ((x517-x518)^(x519*x520));

	if (t91 != 15194323760297321902LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x526 = 108U;
	int16_t x527 = INT16_MIN;
	static uint16_t x528 = 33U;
	volatile int32_t t92 = -7327842;

	t92 = ((x525-x526)^(x527*x528));

	if (t92 != 1081237) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x533 = UINT32_MAX;
	volatile uint8_t x534 = UINT8_MAX;
	int8_t x535 = -1;
	static int16_t x536 = INT16_MIN;
	volatile uint32_t t93 = 0U;

	t93 = ((x533-x534)^(x535*x536));

	if (t93 != 4294934272U) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x541 = -1LL;
	int16_t x542 = INT16_MIN;
	int8_t x543 = INT8_MIN;
	int8_t x544 = INT8_MAX;
	int64_t t94 = 3354341818684538LL;

	t94 = ((x541-x542)^(x543*x544));

	if (t94 != -16513LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x549 = 5U;
	static uint64_t x550 = 29571955LLU;
	int8_t x551 = INT8_MIN;
	int8_t x552 = INT8_MIN;

	t95 = ((x549-x550)^(x551*x552));

	if (t95 != 18446744073679963282LLU) { NG(); } else { ; }
	
}

void f96(void) {
	static volatile int8_t x553 = -63;
	int32_t x554 = 12574236;
	static int8_t x555 = INT8_MIN;
	int8_t x556 = -1;
	volatile int32_t t96 = -765476;

	t96 = ((x553-x554)^(x555*x556));

	if (t96 != -12574427) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x557 = 35U;
	int64_t x558 = INT64_MAX;
	volatile int64_t x559 = 13835664137185LL;
	int8_t x560 = INT8_MAX;
	int64_t t97 = -959582786LL;

	t97 = ((x557-x558)^(x559*x560));

	if (t97 != -9221614907509353285LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x562 = INT8_MAX;
	static uint32_t x563 = 83737U;
	volatile int32_t x564 = -1;
	uint64_t t98 = 8225977064112440LLU;

	t98 = ((x561-x562)^(x563*x564));

	if (t98 != 178886882700175222LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int64_t x565 = 4LL;
	uint16_t x566 = UINT16_MAX;
	int8_t x567 = INT8_MIN;
	volatile int8_t x568 = -1;

	t99 = ((x565-x566)^(x567*x568));

	if (t99 != -65403LL) { NG(); } else { ; }
	
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

