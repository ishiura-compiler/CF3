#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int16_t x4 = -23;
int64_t x5 = INT64_MIN;
volatile int64_t t2 = 101437610904LL;
uint32_t x16 = 759896U;
static int32_t t3 = 1;
volatile int64_t t4 = -1681337283340LL;
uint64_t x29 = UINT64_MAX;
static uint8_t x32 = UINT8_MAX;
int16_t x34 = -1;
int8_t x38 = -6;
int16_t x45 = -3;
static uint16_t x48 = UINT16_MAX;
int16_t x53 = INT16_MAX;
uint16_t x57 = 0U;
int32_t x61 = -1;
volatile uint8_t x64 = 11U;
int8_t x65 = INT8_MIN;
static int8_t x66 = 1;
int16_t x67 = 14974;
uint16_t x74 = 305U;
uint8_t x75 = 65U;
static int32_t t16 = -80315668;
int64_t x86 = -1LL;
volatile uint32_t x90 = 0U;
int64_t x96 = INT64_MIN;
static uint32_t x103 = 197U;
volatile int32_t t23 = -23;
volatile int16_t x105 = INT16_MIN;
int32_t x113 = INT32_MIN;
uint16_t x114 = UINT16_MAX;
uint8_t x117 = UINT8_MAX;
volatile int32_t t26 = -303144838;
int8_t x123 = INT8_MIN;
uint32_t x126 = UINT32_MAX;
volatile int8_t x136 = -1;
int64_t x137 = INT64_MIN;
volatile int32_t x142 = 1711235;
uint64_t x143 = UINT64_MAX;
static volatile int8_t x144 = -1;
int16_t x151 = INT16_MAX;
static int64_t x160 = -1LL;
uint64_t x164 = 1364654664855LLU;
uint64_t x165 = 0LLU;
static int64_t x166 = INT64_MAX;
static volatile int64_t x170 = INT64_MIN;
int32_t x172 = -1;
int64_t x174 = INT64_MIN;
volatile uint64_t x175 = 3832201LLU;
volatile int32_t t40 = 949403;
uint32_t x182 = UINT32_MAX;
static int32_t x191 = INT32_MIN;
volatile int64_t x193 = INT64_MIN;
int8_t x195 = INT8_MIN;
int16_t x198 = 100;
uint32_t x201 = UINT32_MAX;
uint32_t x203 = 1212667U;
volatile int16_t x210 = INT16_MIN;
int32_t t50 = -230036213;
uint16_t x229 = UINT16_MAX;
volatile int16_t x230 = INT16_MIN;
int16_t x235 = -1;
volatile uint32_t x259 = UINT32_MAX;
static volatile int16_t x266 = INT16_MIN;
volatile int64_t t62 = 7677LL;
volatile uint8_t x290 = UINT8_MAX;
static int16_t x295 = -1;
int64_t x306 = -4909385999937LL;
volatile int16_t x310 = INT16_MAX;
int16_t x319 = -299;
uint8_t x323 = UINT8_MAX;
static int8_t x324 = INT8_MIN;
int64_t x333 = 2817LL;
uint8_t x336 = 1U;
int64_t t79 = 746055413824913LL;
volatile int8_t x342 = -1;
uint16_t x343 = UINT16_MAX;
int8_t x347 = -1;
int16_t x352 = INT16_MIN;
int8_t x358 = -5;
int32_t x359 = -40376980;
uint64_t x362 = 44417401LLU;
static volatile int32_t t84 = INT32_MIN;
uint8_t x368 = 64U;
int8_t x369 = INT8_MIN;
int16_t x371 = -1;
volatile int8_t x378 = INT8_MAX;
static uint16_t x395 = 422U;
volatile int32_t t91 = -1930;
uint64_t x397 = 314169944919LLU;
int32_t x399 = -11448;
uint16_t x401 = 22U;
static int16_t x404 = -181;
uint8_t x405 = 2U;
int32_t x408 = -47923;
volatile int32_t t96 = 3293;
volatile uint8_t x417 = 10U;
int16_t x422 = -1;
int32_t t98 = 28864;
uint16_t x426 = 1U;


void f0(void) {
	int16_t x1 = -1;
	uint32_t x2 = 6926U;
	volatile int32_t x3 = -1;
	int32_t t0 = -339965710;

	t0 = (x1^(x2<(x3+x4)));

	if (t0 != -2) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x6 = 5U;
	uint16_t x7 = 3036U;
	uint16_t x8 = 5U;
	volatile int64_t t1 = -13670LL;

	t1 = (x5^(x6<(x7+x8)));

	if (t1 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = -503LL;
	static int8_t x10 = 9;
	int32_t x11 = 1;
	static uint64_t x12 = UINT64_MAX;

	t2 = (x9^(x10<(x11+x12)));

	if (t2 != -503LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = INT8_MIN;
	int64_t x14 = INT64_MAX;
	int8_t x15 = INT8_MIN;

	t3 = (x13^(x14<(x15+x16)));

	if (t3 != -128) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = INT64_MIN;
	int64_t x18 = INT64_MAX;
	volatile uint64_t x19 = 11654LLU;
	static int16_t x20 = INT16_MIN;

	t4 = (x17^(x18<(x19+x20)));

	if (t4 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint16_t x21 = 235U;
	volatile int32_t x22 = INT32_MIN;
	volatile uint8_t x23 = 51U;
	int8_t x24 = INT8_MIN;
	volatile int32_t t5 = -742;

	t5 = (x21^(x22<(x23+x24)));

	if (t5 != 234) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = UINT8_MAX;
	int8_t x26 = INT8_MIN;
	uint16_t x27 = UINT16_MAX;
	static int32_t x28 = 47015611;
	volatile int32_t t6 = 0;

	t6 = (x25^(x26<(x27+x28)));

	if (t6 != 254) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x30 = 0;
	int16_t x31 = 3573;
	uint64_t t7 = 709LLU;

	t7 = (x29^(x30<(x31+x32)));

	if (t7 != 18446744073709551614LLU) { NG(); } else { ; }
	
}

void f8(void) {
	volatile int16_t x33 = 1;
	uint16_t x35 = UINT16_MAX;
	static int32_t x36 = -118716797;
	static int32_t t8 = -1182951;

	t8 = (x33^(x34<(x35+x36)));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = -1;
	int32_t x39 = -983362941;
	int32_t x40 = -836;
	volatile int32_t t9 = 53341495;

	t9 = (x37^(x38<(x39+x40)));

	if (t9 != -1) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x41 = -26286LL;
	static uint16_t x42 = UINT16_MAX;
	static int8_t x43 = 13;
	volatile uint64_t x44 = 257LLU;
	volatile int64_t t10 = 166710769092735LL;

	t10 = (x41^(x42<(x43+x44)));

	if (t10 != -26286LL) { NG(); } else { ; }
	
}

void f11(void) {
	static volatile int8_t x46 = 0;
	volatile int32_t x47 = -1746;
	int32_t t11 = 3283;

	t11 = (x45^(x46<(x47+x48)));

	if (t11 != -4) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x54 = UINT64_MAX;
	int16_t x55 = INT16_MIN;
	int16_t x56 = INT16_MIN;
	static int32_t t12 = -8;

	t12 = (x53^(x54<(x55+x56)));

	if (t12 != 32767) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x58 = UINT8_MAX;
	int16_t x59 = INT16_MIN;
	static int32_t x60 = 14305943;
	int32_t t13 = -30;

	t13 = (x57^(x58<(x59+x60)));

	if (t13 != 1) { NG(); } else { ; }
	
}

void f14(void) {
	uint64_t x62 = 204865975LLU;
	uint64_t x63 = UINT64_MAX;
	volatile int32_t t14 = -1388542;

	t14 = (x61^(x62<(x63+x64)));

	if (t14 != -1) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x68 = UINT64_MAX;
	volatile int32_t t15 = 214;

	t15 = (x65^(x66<(x67+x68)));

	if (t15 != -127) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x73 = 483781031;
	int32_t x76 = 269;

	t16 = (x73^(x74<(x75+x76)));

	if (t16 != 483781030) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x77 = 0;
	static int8_t x78 = -1;
	uint8_t x79 = 49U;
	static uint16_t x80 = UINT16_MAX;
	volatile int32_t t17 = 0;

	t17 = (x77^(x78<(x79+x80)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x81 = 68LLU;
	int8_t x82 = -1;
	uint8_t x83 = 60U;
	int8_t x84 = INT8_MIN;
	uint64_t t18 = 236234855LLU;

	t18 = (x81^(x82<(x83+x84)));

	if (t18 != 68LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int8_t x85 = INT8_MIN;
	int64_t x87 = 14LL;
	volatile int8_t x88 = -1;
	int32_t t19 = -1797;

	t19 = (x85^(x86<(x87+x88)));

	if (t19 != -127) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x89 = INT8_MIN;
	int16_t x91 = -1;
	volatile int8_t x92 = INT8_MIN;
	int32_t t20 = 1;

	t20 = (x89^(x90<(x91+x92)));

	if (t20 != -127) { NG(); } else { ; }
	
}

void f21(void) {
	static int64_t x93 = -1LL;
	int8_t x94 = INT8_MAX;
	volatile int64_t x95 = 317LL;
	static int64_t t21 = 20323816720531390LL;

	t21 = (x93^(x94<(x95+x96)));

	if (t21 != -1LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int32_t x97 = -4644085;
	uint32_t x98 = 3361082U;
	int16_t x99 = 2652;
	volatile uint32_t x100 = 63545048U;
	int32_t t22 = 1370;

	t22 = (x97^(x98<(x99+x100)));

	if (t22 != -4644086) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x101 = UINT16_MAX;
	int16_t x102 = -1;
	static uint64_t x104 = 23964LLU;

	t23 = (x101^(x102<(x103+x104)));

	if (t23 != 65535) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x106 = -97;
	volatile uint8_t x107 = UINT8_MAX;
	static uint16_t x108 = 918U;
	int32_t t24 = 289686;

	t24 = (x105^(x106<(x107+x108)));

	if (t24 != -32767) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x115 = 91U;
	int16_t x116 = INT16_MAX;
	static int32_t t25 = INT32_MIN;

	t25 = (x113^(x114<(x115+x116)));

	if (t25 != INT32_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	uint32_t x118 = UINT32_MAX;
	static volatile int16_t x119 = -5493;
	static uint64_t x120 = 10990335366779649LLU;

	t26 = (x117^(x118<(x119+x120)));

	if (t26 != 254) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x121 = -88869476LL;
	volatile int32_t x122 = -5259958;
	uint64_t x124 = 454LLU;
	static volatile int64_t t27 = 370717LL;

	t27 = (x121^(x122<(x123+x124)));

	if (t27 != -88869476LL) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x125 = 0;
	int16_t x127 = -104;
	static uint16_t x128 = 10U;
	volatile int32_t t28 = 56;

	t28 = (x125^(x126<(x127+x128)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x133 = 2392LLU;
	int16_t x134 = INT16_MAX;
	int32_t x135 = 186046496;
	uint64_t t29 = 5247653LLU;

	t29 = (x133^(x134<(x135+x136)));

	if (t29 != 2393LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int8_t x138 = 1;
	int8_t x139 = -9;
	static volatile int32_t x140 = 284313;
	int64_t t30 = 2153584LL;

	t30 = (x137^(x138<(x139+x140)));

	if (t30 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int64_t x141 = 389521926723LL;
	int64_t t31 = -893030LL;

	t31 = (x141^(x142<(x143+x144)));

	if (t31 != 389521926722LL) { NG(); } else { ; }
	
}

void f32(void) {
	static uint16_t x145 = 18696U;
	int64_t x146 = -17311775663282434LL;
	static uint8_t x147 = UINT8_MAX;
	uint64_t x148 = 294665LLU;
	int32_t t32 = 1117685;

	t32 = (x145^(x146<(x147+x148)));

	if (t32 != 18696) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int8_t x149 = INT8_MAX;
	static uint32_t x150 = 2U;
	volatile int8_t x152 = INT8_MIN;
	volatile int32_t t33 = -608;

	t33 = (x149^(x150<(x151+x152)));

	if (t33 != 126) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x153 = 31U;
	int32_t x154 = 1082320;
	int16_t x155 = INT16_MAX;
	int32_t x156 = INT32_MIN;
	int32_t t34 = -1;

	t34 = (x153^(x154<(x155+x156)));

	if (t34 != 31) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x157 = -7;
	int32_t x158 = INT32_MIN;
	int16_t x159 = INT16_MAX;
	volatile int32_t t35 = 45895;

	t35 = (x157^(x158<(x159+x160)));

	if (t35 != -8) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x161 = -95950;
	static int32_t x162 = INT32_MIN;
	int8_t x163 = INT8_MIN;
	int32_t t36 = -440507;

	t36 = (x161^(x162<(x163+x164)));

	if (t36 != -95950) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x167 = 729306LL;
	uint8_t x168 = UINT8_MAX;
	volatile uint64_t t37 = 65349184LLU;

	t37 = (x165^(x166<(x167+x168)));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	uint64_t x169 = 814LLU;
	uint16_t x171 = 7U;
	volatile uint64_t t38 = 477713409853LLU;

	t38 = (x169^(x170<(x171+x172)));

	if (t38 != 815LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x173 = INT64_MIN;
	static int64_t x176 = 211367718160288LL;
	int64_t t39 = INT64_MIN;

	t39 = (x173^(x174<(x175+x176)));

	if (t39 != INT64_MIN) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = INT32_MIN;
	int16_t x178 = INT16_MIN;
	static uint16_t x179 = UINT16_MAX;
	int8_t x180 = INT8_MAX;

	t40 = (x177^(x178<(x179+x180)));

	if (t40 != -2147483647) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x181 = 22958406040970LLU;
	static uint16_t x183 = 4026U;
	volatile int64_t x184 = -244503216026898LL;
	static uint64_t t41 = 275702579119LLU;

	t41 = (x181^(x182<(x183+x184)));

	if (t41 != 22958406040970LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int64_t x185 = -1LL;
	volatile int32_t x186 = -67455;
	static uint16_t x187 = 1U;
	static volatile int32_t x188 = 433871;
	int64_t t42 = 426LL;

	t42 = (x185^(x186<(x187+x188)));

	if (t42 != -2LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile int16_t x189 = 0;
	uint64_t x190 = 3295913LLU;
	static uint32_t x192 = UINT32_MAX;
	int32_t t43 = -6;

	t43 = (x189^(x190<(x191+x192)));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int32_t x194 = -30;
	int8_t x196 = -27;
	volatile int64_t t44 = INT64_MIN;

	t44 = (x193^(x194<(x195+x196)));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x197 = -1669479613333491LL;
	static int8_t x199 = -13;
	int8_t x200 = INT8_MIN;
	static int64_t t45 = 782959183948LL;

	t45 = (x197^(x198<(x199+x200)));

	if (t45 != -1669479613333491LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x202 = -1;
	uint16_t x204 = 7306U;
	volatile uint32_t t46 = UINT32_MAX;

	t46 = (x201^(x202<(x203+x204)));

	if (t46 != UINT32_MAX) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int32_t x205 = -1;
	static int16_t x206 = INT16_MIN;
	int8_t x207 = INT8_MIN;
	volatile int64_t x208 = -6374113LL;
	int32_t t47 = 4959720;

	t47 = (x205^(x206<(x207+x208)));

	if (t47 != -1) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x209 = 14717827;
	uint8_t x211 = 111U;
	volatile uint64_t x212 = 3257244070372976LLU;
	volatile int32_t t48 = 435;

	t48 = (x209^(x210<(x211+x212)));

	if (t48 != 14717827) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile uint64_t x213 = UINT64_MAX;
	static uint32_t x214 = UINT32_MAX;
	uint8_t x215 = 26U;
	static uint16_t x216 = 22076U;
	static volatile uint64_t t49 = UINT64_MAX;

	t49 = (x213^(x214<(x215+x216)));

	if (t49 != UINT64_MAX) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x217 = -115414;
	uint32_t x218 = UINT32_MAX;
	int64_t x219 = 12485017524548891LL;
	uint32_t x220 = 759446400U;

	t50 = (x217^(x218<(x219+x220)));

	if (t50 != -115413) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x221 = -1;
	uint8_t x222 = 91U;
	uint16_t x223 = 0U;
	int8_t x224 = -1;
	int32_t t51 = 19;

	t51 = (x221^(x222<(x223+x224)));

	if (t51 != -1) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x225 = 0;
	int16_t x226 = -6;
	int8_t x227 = INT8_MIN;
	int64_t x228 = 11008540168630329LL;
	volatile int32_t t52 = 26075;

	t52 = (x225^(x226<(x227+x228)));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x231 = INT16_MIN;
	int8_t x232 = INT8_MAX;
	int32_t t53 = -4564241;

	t53 = (x229^(x230<(x231+x232)));

	if (t53 != 65534) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x233 = 10336;
	int32_t x234 = 6815400;
	int8_t x236 = INT8_MIN;
	static volatile int32_t t54 = 0;

	t54 = (x233^(x234<(x235+x236)));

	if (t54 != 10336) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x237 = INT16_MIN;
	int16_t x238 = -79;
	int64_t x239 = INT64_MIN;
	uint8_t x240 = UINT8_MAX;
	static volatile int32_t t55 = 58423;

	t55 = (x237^(x238<(x239+x240)));

	if (t55 != -32768) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x241 = INT64_MIN;
	static int8_t x242 = INT8_MIN;
	int32_t x243 = INT32_MIN;
	int8_t x244 = INT8_MAX;
	static int64_t t56 = INT64_MIN;

	t56 = (x241^(x242<(x243+x244)));

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x245 = INT64_MIN;
	int32_t x246 = -1;
	int16_t x247 = 1;
	volatile uint16_t x248 = 5U;
	volatile int64_t t57 = 0LL;

	t57 = (x245^(x246<(x247+x248)));

	if (t57 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x249 = 2;
	int8_t x250 = INT8_MAX;
	uint8_t x251 = UINT8_MAX;
	static uint16_t x252 = UINT16_MAX;
	int32_t t58 = -448;

	t58 = (x249^(x250<(x251+x252)));

	if (t58 != 3) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int64_t x253 = INT64_MIN;
	static volatile int16_t x254 = INT16_MIN;
	uint32_t x255 = 54U;
	static uint64_t x256 = 57537770947LLU;
	volatile int64_t t59 = INT64_MIN;

	t59 = (x253^(x254<(x255+x256)));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x257 = INT64_MAX;
	int64_t x258 = -1LL;
	int16_t x260 = -4186;
	volatile int64_t t60 = -2LL;

	t60 = (x257^(x258<(x259+x260)));

	if (t60 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x261 = -15104LL;
	static int16_t x262 = INT16_MIN;
	volatile int8_t x263 = -33;
	static int8_t x264 = INT8_MIN;
	int64_t t61 = -15577271299008952LL;

	t61 = (x261^(x262<(x263+x264)));

	if (t61 != -15103LL) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int64_t x265 = -1LL;
	int8_t x267 = -1;
	int16_t x268 = INT16_MIN;

	t62 = (x265^(x266<(x267+x268)));

	if (t62 != -1LL) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x269 = 1823490321870391034LLU;
	uint16_t x270 = 0U;
	static int16_t x271 = INT16_MAX;
	int32_t x272 = 6838573;
	volatile uint64_t t63 = 122753146291005790LLU;

	t63 = (x269^(x270<(x271+x272)));

	if (t63 != 1823490321870391035LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x273 = 27U;
	static int32_t x274 = INT32_MIN;
	int16_t x275 = INT16_MIN;
	static int64_t x276 = INT64_MAX;
	static int32_t t64 = 116;

	t64 = (x273^(x274<(x275+x276)));

	if (t64 != 26) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x277 = -1;
	uint16_t x278 = 1308U;
	int16_t x279 = INT16_MIN;
	int16_t x280 = 0;
	int32_t t65 = 78;

	t65 = (x277^(x278<(x279+x280)));

	if (t65 != -1) { NG(); } else { ; }
	
}

void f66(void) {
	int16_t x281 = INT16_MIN;
	int32_t x282 = -1;
	static int32_t x283 = 6;
	static int16_t x284 = -1;
	int32_t t66 = -159778719;

	t66 = (x281^(x282<(x283+x284)));

	if (t66 != -32767) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x285 = 1U;
	volatile uint64_t x286 = 86690189449382306LLU;
	int64_t x287 = INT64_MIN;
	static volatile int64_t x288 = 778839328262985309LL;
	volatile int32_t t67 = 325513921;

	t67 = (x285^(x286<(x287+x288)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint32_t x289 = UINT32_MAX;
	volatile uint32_t x291 = 720482U;
	int32_t x292 = -26;
	volatile uint32_t t68 = 0U;

	t68 = (x289^(x290<(x291+x292)));

	if (t68 != 4294967294U) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x293 = -6;
	int32_t x294 = 218247297;
	int16_t x296 = 5358;
	int32_t t69 = -56;

	t69 = (x293^(x294<(x295+x296)));

	if (t69 != -6) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x297 = -1;
	int64_t x298 = INT64_MIN;
	uint32_t x299 = 22195U;
	uint64_t x300 = 4747742420227LLU;
	static volatile int32_t t70 = 1;

	t70 = (x297^(x298<(x299+x300)));

	if (t70 != -1) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x301 = INT8_MIN;
	volatile int32_t x302 = INT32_MIN;
	uint32_t x303 = 252348048U;
	static uint8_t x304 = 12U;
	int32_t t71 = -955335647;

	t71 = (x301^(x302<(x303+x304)));

	if (t71 != -128) { NG(); } else { ; }
	
}

void f72(void) {
	static int32_t x305 = 356;
	int32_t x307 = INT32_MAX;
	int64_t x308 = -133776158LL;
	int32_t t72 = -1979;

	t72 = (x305^(x306<(x307+x308)));

	if (t72 != 357) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x309 = 386534242;
	uint16_t x311 = 9677U;
	static uint8_t x312 = UINT8_MAX;
	volatile int32_t t73 = 127598995;

	t73 = (x309^(x310<(x311+x312)));

	if (t73 != 386534242) { NG(); } else { ; }
	
}

void f74(void) {
	int64_t x313 = INT64_MIN;
	uint8_t x314 = 12U;
	int64_t x315 = 482194LL;
	int16_t x316 = INT16_MIN;
	int64_t t74 = -1893LL;

	t74 = (x313^(x314<(x315+x316)));

	if (t74 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x317 = INT8_MIN;
	int64_t x318 = INT64_MIN;
	uint8_t x320 = UINT8_MAX;
	volatile int32_t t75 = -399;

	t75 = (x317^(x318<(x319+x320)));

	if (t75 != -127) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x321 = INT64_MAX;
	static uint16_t x322 = 1014U;
	int64_t t76 = INT64_MAX;

	t76 = (x321^(x322<(x323+x324)));

	if (t76 != INT64_MAX) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x325 = INT32_MAX;
	uint8_t x326 = 127U;
	static uint8_t x327 = UINT8_MAX;
	volatile int32_t x328 = -1;
	static int32_t t77 = -282;

	t77 = (x325^(x326<(x327+x328)));

	if (t77 != 2147483646) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x329 = INT32_MAX;
	static int64_t x330 = INT64_MIN;
	volatile int32_t x331 = INT32_MIN;
	uint64_t x332 = 2244445LLU;
	int32_t t78 = -4063;

	t78 = (x329^(x330<(x331+x332)));

	if (t78 != 2147483646) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x334 = UINT16_MAX;
	int32_t x335 = -6670;

	t79 = (x333^(x334<(x335+x336)));

	if (t79 != 2817LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x341 = INT64_MIN;
	uint16_t x344 = UINT16_MAX;
	static volatile int64_t t80 = 146LL;

	t80 = (x341^(x342<(x343+x344)));

	if (t80 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x345 = INT8_MIN;
	static int16_t x346 = INT16_MIN;
	uint32_t x348 = 1632U;
	static int32_t t81 = -667240;

	t81 = (x345^(x346<(x347+x348)));

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	static int16_t x349 = INT16_MIN;
	int8_t x350 = -1;
	int8_t x351 = -7;
	volatile int32_t t82 = -5843321;

	t82 = (x349^(x350<(x351+x352)));

	if (t82 != -32768) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x357 = INT16_MAX;
	uint64_t x360 = 7276LLU;
	volatile int32_t t83 = 150;

	t83 = (x357^(x358<(x359+x360)));

	if (t83 != 32767) { NG(); } else { ; }
	
}

void f84(void) {
	volatile int32_t x361 = INT32_MIN;
	int16_t x363 = 53;
	volatile uint32_t x364 = UINT32_MAX;

	t84 = (x361^(x362<(x363+x364)));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x365 = 0U;
	uint8_t x366 = 55U;
	static uint64_t x367 = 188121414741416LLU;
	static volatile int32_t t85 = -105845;

	t85 = (x365^(x366<(x367+x368)));

	if (t85 != 1) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x370 = -1;
	int32_t x372 = INT32_MAX;
	volatile int32_t t86 = 37085;

	t86 = (x369^(x370<(x371+x372)));

	if (t86 != -127) { NG(); } else { ; }
	
}

void f87(void) {
	static int32_t x373 = INT32_MIN;
	int32_t x374 = INT32_MIN;
	int8_t x375 = INT8_MIN;
	static int8_t x376 = 2;
	int32_t t87 = -13;

	t87 = (x373^(x374<(x375+x376)));

	if (t87 != -2147483647) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x377 = INT16_MIN;
	volatile int8_t x379 = INT8_MIN;
	static volatile int32_t x380 = 0;
	int32_t t88 = -1635;

	t88 = (x377^(x378<(x379+x380)));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x381 = 1940U;
	volatile int8_t x382 = INT8_MIN;
	volatile int16_t x383 = -3928;
	static int16_t x384 = INT16_MIN;
	volatile uint32_t t89 = 898019614U;

	t89 = (x381^(x382<(x383+x384)));

	if (t89 != 1940U) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x389 = -1LL;
	volatile uint16_t x390 = 59U;
	static int8_t x391 = 10;
	static uint16_t x392 = 593U;
	static volatile int64_t t90 = 6152303816274511LL;

	t90 = (x389^(x390<(x391+x392)));

	if (t90 != -2LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x393 = 15U;
	int8_t x394 = INT8_MAX;
	uint64_t x396 = 31344641036531584LLU;

	t91 = (x393^(x394<(x395+x396)));

	if (t91 != 14) { NG(); } else { ; }
	
}

void f92(void) {
	static uint32_t x398 = 211617U;
	static int16_t x400 = -1;
	uint64_t t92 = 28821448291LLU;

	t92 = (x397^(x398<(x399+x400)));

	if (t92 != 314169944918LLU) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x402 = 18423298;
	volatile uint32_t x403 = 37U;
	int32_t t93 = -10;

	t93 = (x401^(x402<(x403+x404)));

	if (t93 != 23) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x406 = -1LL;
	volatile int8_t x407 = INT8_MIN;
	int32_t t94 = 392340;

	t94 = (x405^(x406<(x407+x408)));

	if (t94 != 2) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x409 = INT8_MIN;
	uint16_t x410 = 12U;
	int64_t x411 = INT64_MIN;
	uint32_t x412 = 34061908U;
	int32_t t95 = 476;

	t95 = (x409^(x410<(x411+x412)));

	if (t95 != -128) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x413 = 0;
	static int16_t x414 = 3;
	uint64_t x415 = UINT64_MAX;
	int32_t x416 = INT32_MIN;

	t96 = (x413^(x414<(x415+x416)));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	static uint64_t x418 = 3418663283872338LLU;
	int16_t x419 = 2;
	uint64_t x420 = 11232LLU;
	volatile int32_t t97 = -2901949;

	t97 = (x417^(x418<(x419+x420)));

	if (t97 != 10) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x421 = 0;
	uint16_t x423 = 2425U;
	static uint8_t x424 = 13U;

	t98 = (x421^(x422<(x423+x424)));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x425 = -13060164420252353LL;
	static int64_t x427 = -116050LL;
	static int8_t x428 = INT8_MIN;
	volatile int64_t t99 = -43611LL;

	t99 = (x425^(x426<(x427+x428)));

	if (t99 != -13060164420252353LL) { NG(); } else { ; }
	
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

