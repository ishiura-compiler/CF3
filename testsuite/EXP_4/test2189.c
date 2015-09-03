#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint32_t x5 = 340968893U;
volatile int16_t x6 = INT16_MAX;
int32_t x7 = INT32_MAX;
uint16_t x8 = UINT16_MAX;
uint32_t t1 = 1005U;
int8_t x21 = INT8_MIN;
volatile int16_t x25 = INT16_MAX;
int32_t x28 = -315;
uint64_t x29 = 3197LLU;
static int64_t x30 = -1LL;
int16_t x32 = -1;
volatile int64_t t14 = 2947261LL;
static int16_t x61 = 11;
int64_t x62 = 853929536LL;
int32_t x64 = -1;
uint64_t t15 = 9238699689488LLU;
static int16_t x67 = 10;
volatile int8_t x75 = -1;
volatile uint64_t t18 = 23504200473750438LLU;
uint32_t x78 = 1U;
int8_t x79 = INT8_MIN;
static int8_t x84 = INT8_MAX;
int64_t t20 = 13136388134LL;
volatile int64_t t22 = 56843413727124609LL;
static int64_t t23 = 3898908882374879LL;
volatile int64_t x101 = -1LL;
uint8_t x102 = 7U;
int8_t x104 = 0;
static int32_t t26 = -177694914;
uint64_t t27 = 2183092846604LLU;
int32_t x114 = 13154260;
int8_t x115 = INT8_MIN;
int64_t t28 = 161LL;
volatile int16_t x133 = 5563;
uint8_t x136 = 3U;
static int64_t t33 = 352882761LL;
uint8_t x145 = 5U;
uint32_t t36 = 0U;
int64_t t37 = 86709LL;
int8_t x153 = INT8_MIN;
int32_t x159 = -227654;
int64_t t40 = 1665404718051620LL;
volatile int64_t x165 = -21729685383096629LL;
volatile uint16_t x166 = 28514U;
int8_t x170 = INT8_MIN;
uint32_t t42 = 2591U;
static uint64_t x177 = 1864061LLU;
uint8_t x178 = UINT8_MAX;
int16_t x184 = INT16_MAX;
int32_t x186 = INT32_MIN;
static uint32_t x192 = 2021U;
uint32_t t47 = 209857192U;
int32_t x193 = INT32_MAX;
uint64_t x194 = UINT64_MAX;
volatile uint64_t t48 = 0LLU;
uint32_t x197 = 165658U;
static uint32_t t49 = 11U;
volatile int64_t t52 = -419397537717LL;
volatile uint8_t x218 = UINT8_MAX;
static uint8_t x234 = 59U;
int8_t x245 = INT8_MAX;
static uint64_t x252 = 2083750824454160LLU;
volatile int16_t x254 = -1;
int64_t t65 = -353308580259013915LL;
int8_t x274 = INT8_MAX;
volatile int16_t x276 = INT16_MIN;
volatile int64_t t67 = -29429LL;
int16_t x279 = INT16_MIN;
int64_t x280 = -1LL;
int32_t t69 = 20085;
static int32_t x288 = -1;
uint16_t x292 = 17943U;
int32_t x296 = -215443;
int32_t x297 = -1;
volatile uint64_t x299 = 10689577LLU;
int32_t x301 = -1;
int16_t x305 = INT16_MAX;
volatile int64_t x306 = INT64_MIN;
static uint8_t x312 = UINT8_MAX;
volatile int32_t t76 = -10;
volatile uint64_t x320 = UINT64_MAX;
int64_t x327 = INT64_MAX;
volatile int64_t t80 = -110757668815680LL;
int64_t x332 = INT64_MAX;
uint64_t x336 = 709814517660LLU;
int8_t x343 = 7;
uint64_t x346 = 1480774LLU;
volatile int32_t x347 = -1;
volatile int8_t x352 = INT8_MAX;
int32_t t86 = 19370810;
static int64_t x357 = 3LL;
int8_t x366 = -1;
int32_t x368 = -1;
int64_t x371 = INT64_MIN;
int32_t x378 = INT32_MAX;
int32_t x379 = -1;
static int8_t x382 = INT8_MIN;
uint32_t x387 = UINT32_MAX;
int16_t x391 = 28;
int32_t x397 = 44;
int16_t x398 = INT16_MAX;


void f0(void) {
	int32_t x1 = 0;
	static int8_t x2 = -5;
	uint8_t x3 = 0U;
	volatile int32_t x4 = INT32_MAX;
	int32_t t0 = 17;

	t0 = (x1%(x2^(x3^x4)));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {


	t1 = (x5%(x6^(x7^x8)));

	if (t1 != 340968893U) { NG(); } else { ; }
	
}

void f2(void) {
	uint16_t x9 = UINT16_MAX;
	uint8_t x10 = 68U;
	int8_t x11 = -1;
	int64_t x12 = 27248235810453263LL;
	int64_t t2 = -12966LL;

	t2 = (x9%(x10^(x11^x12)));

	if (t2 != 65535LL) { NG(); } else { ; }
	
}

void f3(void) {
	int8_t x13 = -1;
	uint8_t x14 = UINT8_MAX;
	int64_t x15 = -3477LL;
	volatile int32_t x16 = -1;
	volatile int64_t t3 = -761LL;

	t3 = (x13%(x14^(x15^x16)));

	if (t3 != -1LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MIN;
	int16_t x18 = -2037;
	int32_t x19 = INT32_MAX;
	volatile int64_t x20 = 629315846807023LL;
	volatile int64_t t4 = -2588LL;

	t4 = (x17%(x18^(x19^x20)));

	if (t4 != -2147483648LL) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x22 = INT32_MAX;
	volatile uint16_t x23 = UINT16_MAX;
	volatile int16_t x24 = INT16_MIN;
	volatile int32_t t5 = -755745;

	t5 = (x21%(x22^(x23^x24)));

	if (t5 != -128) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x26 = 14U;
	uint8_t x27 = 1U;
	int32_t t6 = 236173313;

	t6 = (x25%(x26^(x27^x28)));

	if (t6 != 217) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x31 = INT8_MIN;
	uint64_t t7 = 3849829524410LLU;

	t7 = (x29%(x30^(x31^x32)));

	if (t7 != 3197LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int16_t x33 = -9644;
	int8_t x34 = -1;
	static int32_t x35 = INT32_MAX;
	int32_t x36 = 2971737;
	static int32_t t8 = 9;

	t8 = (x33%(x34^(x35^x36)));

	if (t8 != -9644) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x37 = UINT16_MAX;
	static int64_t x38 = INT64_MIN;
	volatile int32_t x39 = 1121814;
	int64_t x40 = 22LL;
	volatile int64_t t9 = 30953296746LL;

	t9 = (x37%(x38^(x39^x40)));

	if (t9 != 65535LL) { NG(); } else { ; }
	
}

void f10(void) {
	int16_t x41 = INT16_MIN;
	uint64_t x42 = 2870868741123640LLU;
	int32_t x43 = -1;
	static int16_t x44 = INT16_MIN;
	uint64_t t10 = 1LLU;

	t10 = (x41%(x42^(x43^x44)));

	if (t10 != 1412412142179473LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = -7555282;
	volatile uint32_t x46 = 58768248U;
	volatile int64_t x47 = INT64_MIN;
	int64_t x48 = INT64_MIN;
	int64_t t11 = 0LL;

	t11 = (x45%(x46^(x47^x48)));

	if (t11 != -7555282LL) { NG(); } else { ; }
	
}

void f12(void) {
	int64_t x49 = INT64_MIN;
	static int32_t x50 = 6758753;
	volatile uint64_t x51 = UINT64_MAX;
	int32_t x52 = INT32_MIN;
	volatile uint64_t t12 = 79845923567LLU;

	t12 = (x49%(x50^(x51^x52)));

	if (t12 != 1794963794LLU) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int16_t x53 = -1;
	uint64_t x54 = UINT64_MAX;
	static int32_t x55 = INT32_MIN;
	volatile int64_t x56 = 2143625268615LL;
	volatile uint64_t t13 = 61LLU;

	t13 = (x53%(x54^(x55^x56)));

	if (t13 != 709745419095LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = INT64_MIN;
	int64_t x58 = INT64_MIN;
	static int16_t x59 = INT16_MIN;
	uint8_t x60 = UINT8_MAX;

	t14 = (x57%(x58^(x59^x60)));

	if (t14 != -32513LL) { NG(); } else { ; }
	
}

void f15(void) {
	uint64_t x63 = 24970501877LLU;

	t15 = (x61%(x62^(x63^x64)));

	if (t15 != 11LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = -240;
	uint32_t x66 = UINT32_MAX;
	static int64_t x68 = 104833030704562LL;
	volatile int64_t t16 = -875LL;

	t16 = (x65%(x66^(x67^x68)));

	if (t16 != -240LL) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 246134640652LLU;
	uint8_t x70 = 11U;
	int64_t x71 = INT64_MIN;
	int16_t x72 = INT16_MIN;
	static uint64_t t17 = 1125216906784551875LLU;

	t17 = (x69%(x70^(x71^x72)));

	if (t17 != 246134640652LLU) { NG(); } else { ; }
	
}

void f18(void) {
	uint64_t x73 = 34867LLU;
	int16_t x74 = INT16_MIN;
	uint64_t x76 = 16165287LLU;

	t18 = (x73%(x74^(x75^x76)));

	if (t18 != 34867LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x77 = 3283U;
	volatile int8_t x80 = -1;
	volatile uint32_t t19 = 13997U;

	t19 = (x77%(x78^(x79^x80)));

	if (t19 != 7U) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int64_t x81 = -6737730264664LL;
	int16_t x82 = 13670;
	uint8_t x83 = UINT8_MAX;

	t20 = (x81%(x82^(x83^x84)));

	if (t20 != -5450LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = INT32_MAX;
	static uint32_t x86 = 15714U;
	int32_t x87 = -7;
	volatile int16_t x88 = INT16_MIN;
	volatile uint32_t t21 = 13U;

	t21 = (x85%(x86^(x87^x88)));

	if (t21 != 12503U) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MIN;
	int64_t x90 = -1LL;
	int32_t x91 = -1;
	int32_t x92 = INT32_MIN;

	t22 = (x89%(x90^(x91^x92)));

	if (t22 != -128LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x93 = 4050329277997LL;
	uint32_t x94 = 5564U;
	uint16_t x95 = 4U;
	volatile int64_t x96 = INT64_MAX;

	t23 = (x93%(x94^(x95^x96)));

	if (t23 != 4050329277997LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x97 = INT8_MIN;
	int64_t x98 = INT64_MAX;
	uint8_t x99 = 1U;
	int32_t x100 = -1;
	int64_t t24 = -243905LL;

	t24 = (x97%(x98^(x99^x100)));

	if (t24 != -128LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x103 = UINT16_MAX;
	volatile int64_t t25 = 549673LL;

	t25 = (x101%(x102^(x103^x104)));

	if (t25 != -1LL) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = INT8_MIN;
	int32_t x106 = -509311109;
	static int8_t x107 = INT8_MIN;
	uint16_t x108 = 106U;

	t26 = (x105%(x106^(x107^x108)));

	if (t26 != -128) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x109 = 15340954LLU;
	uint64_t x110 = 247563LLU;
	volatile int8_t x111 = INT8_MIN;
	uint32_t x112 = UINT32_MAX;

	t27 = (x109%(x110^(x111^x112)));

	if (t27 != 233206LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = -1LL;
	volatile int8_t x116 = -11;

	t28 = (x113%(x114^(x115^x116)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	static int16_t x117 = INT16_MIN;
	uint16_t x118 = UINT16_MAX;
	uint16_t x119 = UINT16_MAX;
	int32_t x120 = -1;
	static volatile int32_t t29 = -1875;

	t29 = (x117%(x118^(x119^x120)));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	uint16_t x121 = 2734U;
	int64_t x122 = -1LL;
	int32_t x123 = INT32_MIN;
	int64_t x124 = INT64_MIN;
	int64_t t30 = 7011627835840LL;

	t30 = (x121%(x122^(x123^x124)));

	if (t30 != 2734LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int16_t x125 = -1;
	static int8_t x126 = INT8_MAX;
	uint64_t x127 = 13066216440873867LLU;
	static volatile int8_t x128 = 1;
	uint64_t t31 = 4097204287LLU;

	t31 = (x125%(x126^(x127^x128)));

	if (t31 != 10312675636375712LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = -1;
	int16_t x130 = INT16_MAX;
	volatile int16_t x131 = 194;
	int64_t x132 = INT64_MIN;
	int64_t t32 = -114975780LL;

	t32 = (x129%(x130^(x131^x132)));

	if (t32 != -1LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x134 = INT64_MIN;
	volatile int16_t x135 = 21;

	t33 = (x133%(x134^(x135^x136)));

	if (t33 != 5563LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x137 = INT32_MAX;
	int16_t x138 = INT16_MIN;
	int32_t x139 = INT32_MIN;
	int8_t x140 = -1;
	int32_t t34 = -85983;

	t34 = (x137%(x138^(x139^x140)));

	if (t34 != 32766) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile uint64_t x141 = 6781120919277LLU;
	int8_t x142 = -1;
	static volatile int16_t x143 = INT16_MIN;
	int32_t x144 = INT32_MIN;
	static uint64_t t35 = 947LLU;

	t35 = (x141%(x142^(x143^x144)));

	if (t35 != 6781120919277LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x146 = INT8_MIN;
	uint8_t x147 = 0U;
	static uint32_t x148 = 135655U;

	t36 = (x145%(x146^(x147^x148)));

	if (t36 != 5U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x149 = INT32_MIN;
	int64_t x150 = 29323122796LL;
	uint32_t x151 = 1387095420U;
	static int16_t x152 = INT16_MAX;

	t37 = (x149%(x150^(x151^x152)));

	if (t37 != -2147483648LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint16_t x154 = 166U;
	volatile uint64_t x155 = UINT64_MAX;
	static int64_t x156 = -3637674034LL;
	uint64_t t38 = 395847941621703564LLU;

	t38 = (x153%(x154^(x155^x156)));

	if (t38 != 1445256743LLU) { NG(); } else { ; }
	
}

void f39(void) {
	static int32_t x157 = INT32_MIN;
	int64_t x158 = INT64_MIN;
	static volatile int8_t x160 = -1;
	int64_t t39 = 103152355857500030LL;

	t39 = (x157%(x158^(x159^x160)));

	if (t39 != -2147483648LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = 78445659133760552LL;
	int32_t x162 = 1;
	int64_t x163 = -1LL;
	static uint32_t x164 = UINT32_MAX;

	t40 = (x161%(x162^(x163^x164)));

	if (t40 != 1340966417LL) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x167 = 137116508752LL;
	int8_t x168 = 0;
	volatile int64_t t41 = 1066174373142LL;

	t41 = (x165%(x166^(x167^x168)));

	if (t41 != -12995306717LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -1;
	uint32_t x171 = 1907U;
	int8_t x172 = -1;

	t42 = (x169%(x170^(x171^x172)));

	if (t42 != 487U) { NG(); } else { ; }
	
}

void f43(void) {
	static int16_t x173 = -1;
	int8_t x174 = 0;
	uint8_t x175 = UINT8_MAX;
	static uint8_t x176 = 13U;
	int32_t t43 = -621439;

	t43 = (x173%(x174^(x175^x176)));

	if (t43 != -1) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x179 = 4746U;
	int8_t x180 = -1;
	volatile uint64_t t44 = 34443635845037LLU;

	t44 = (x177%(x178^(x179^x180)));

	if (t44 != 1864061LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x181 = 31U;
	int32_t x182 = INT32_MIN;
	int32_t x183 = INT32_MAX;
	int32_t t45 = -1;

	t45 = (x181%(x182^(x183^x184)));

	if (t45 != 31) { NG(); } else { ; }
	
}

void f46(void) {
	static uint64_t x185 = 743LLU;
	int8_t x187 = -1;
	static volatile uint64_t x188 = 267352597784LLU;
	uint64_t t46 = 2731058566724LLU;

	t46 = (x185%(x186^(x187^x188)));

	if (t46 != 743LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint32_t x189 = UINT32_MAX;
	int8_t x190 = INT8_MAX;
	static volatile uint8_t x191 = 1U;

	t47 = (x189%(x190^(x191^x192)));

	if (t47 != 168U) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x195 = INT16_MIN;
	int16_t x196 = INT16_MIN;

	t48 = (x193%(x194^(x195^x196)));

	if (t48 != 2147483647LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x198 = INT8_MIN;
	volatile uint32_t x199 = UINT32_MAX;
	static uint32_t x200 = UINT32_MAX;

	t49 = (x197%(x198^(x199^x200)));

	if (t49 != 165658U) { NG(); } else { ; }
	
}

void f50(void) {
	static int32_t x201 = -3;
	volatile int64_t x202 = INT64_MIN;
	volatile uint8_t x203 = 69U;
	static int16_t x204 = -1;
	static volatile int64_t t50 = 27436LL;

	t50 = (x201%(x202^(x203^x204)));

	if (t50 != -3LL) { NG(); } else { ; }
	
}

void f51(void) {
	static volatile int16_t x205 = INT16_MAX;
	int32_t x206 = -4919;
	int64_t x207 = INT64_MIN;
	volatile uint8_t x208 = UINT8_MAX;
	int64_t t51 = -24312328622698816LL;

	t51 = (x205%(x206^(x207^x208)));

	if (t51 != 32767LL) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x209 = 68U;
	volatile int64_t x210 = INT64_MIN;
	int32_t x211 = INT32_MIN;
	static int16_t x212 = INT16_MAX;

	t52 = (x209%(x210^(x211^x212)));

	if (t52 != 68LL) { NG(); } else { ; }
	
}

void f53(void) {
	static volatile uint32_t x213 = 57U;
	uint8_t x214 = UINT8_MAX;
	uint32_t x215 = UINT32_MAX;
	int8_t x216 = -1;
	volatile uint32_t t53 = 681823669U;

	t53 = (x213%(x214^(x215^x216)));

	if (t53 != 57U) { NG(); } else { ; }
	
}

void f54(void) {
	static int16_t x217 = INT16_MAX;
	uint8_t x219 = 15U;
	volatile uint64_t x220 = 7LLU;
	static uint64_t t54 = 21711912152803003LLU;

	t54 = (x217%(x218^(x219^x220)));

	if (t54 != 163LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile uint32_t x221 = 638169U;
	volatile int64_t x222 = INT64_MIN;
	int16_t x223 = INT16_MIN;
	volatile int16_t x224 = INT16_MAX;
	int64_t t55 = -199471604638718718LL;

	t55 = (x221%(x222^(x223^x224)));

	if (t55 != 638169LL) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = -1;
	static uint8_t x226 = 1U;
	int8_t x227 = INT8_MIN;
	int32_t x228 = INT32_MIN;
	static int32_t t56 = -156212052;

	t56 = (x225%(x226^(x227^x228)));

	if (t56 != -1) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x229 = INT64_MIN;
	static uint32_t x230 = UINT32_MAX;
	uint8_t x231 = 45U;
	int8_t x232 = INT8_MIN;
	volatile int64_t t57 = -2130797247291LL;

	t57 = (x229%(x230^(x231^x232)));

	if (t57 != -8LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = -8013;
	int8_t x235 = -1;
	int64_t x236 = INT64_MIN;
	volatile int64_t t58 = 274133428403266199LL;

	t58 = (x233%(x234^(x235^x236)));

	if (t58 != -8013LL) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x237 = INT32_MIN;
	int8_t x238 = INT8_MAX;
	volatile int32_t x239 = 34024292;
	int64_t x240 = -1LL;
	int64_t t59 = 1427125427LL;

	t59 = (x237%(x238^(x239^x240)));

	if (t59 != -3957788LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int64_t x246 = -179324LL;
	int16_t x247 = INT16_MAX;
	static volatile int64_t x248 = INT64_MAX;
	volatile int64_t t60 = -865619756115497523LL;

	t60 = (x245%(x246^(x247^x248)));

	if (t60 != 127LL) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint64_t x249 = UINT64_MAX;
	static int16_t x250 = -3;
	uint64_t x251 = 561175LLU;
	volatile uint64_t t61 = 839723739730LLU;

	t61 = (x249%(x250^(x251^x252)));

	if (t61 != 2083750825015301LLU) { NG(); } else { ; }
	
}

void f62(void) {
	volatile uint64_t x253 = UINT64_MAX;
	int64_t x255 = -12887761303991613LL;
	int64_t x256 = INT64_MAX;
	uint64_t t62 = 72355120LLU;

	t62 = (x253%(x254^(x255^x256)));

	if (t62 != 25775522607983225LLU) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int64_t x257 = INT64_MIN;
	volatile int16_t x258 = 158;
	uint16_t x259 = 308U;
	static uint32_t x260 = 31U;
	volatile int64_t t63 = 5773LL;

	t63 = (x257%(x258^(x259^x260)));

	if (t63 != -417LL) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x261 = INT64_MIN;
	uint64_t x262 = 2906735120097LLU;
	int16_t x263 = INT16_MIN;
	static int16_t x264 = 10193;
	volatile uint64_t t64 = 61898025478LLU;

	t64 = (x261%(x262^(x263^x264)));

	if (t64 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x265 = -1LL;
	int64_t x266 = -324317571886LL;
	static int16_t x267 = INT16_MAX;
	int64_t x268 = -1LL;

	t65 = (x265%(x266^(x267^x268)));

	if (t65 != -1LL) { NG(); } else { ; }
	
}

void f66(void) {
	static int64_t x269 = INT64_MIN;
	int32_t x270 = -1;
	uint16_t x271 = 0U;
	int64_t x272 = 8047768673001LL;
	int64_t t66 = 248016706992549LL;

	t66 = (x269%(x270^(x271^x272)));

	if (t66 != -1411637989652LL) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x273 = 8U;
	int64_t x275 = INT64_MAX;

	t67 = (x273%(x274^(x275^x276)));

	if (t67 != 8LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x277 = -1LL;
	static int16_t x278 = -390;
	int64_t t68 = -1LL;

	t68 = (x277%(x278^(x279^x280)));

	if (t68 != -1LL) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint16_t x281 = UINT16_MAX;
	int16_t x282 = INT16_MIN;
	int8_t x283 = -1;
	int32_t x284 = 3956431;

	t69 = (x281%(x282^(x283^x284)));

	if (t69 != 65535) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x285 = -1;
	uint8_t x286 = 5U;
	static int64_t x287 = INT64_MIN;
	volatile int64_t t70 = -1076822672751485609LL;

	t70 = (x285%(x286^(x287^x288)));

	if (t70 != -1LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x289 = INT8_MAX;
	static int8_t x290 = INT8_MIN;
	static uint32_t x291 = 956U;
	uint32_t t71 = 10926U;

	t71 = (x289%(x290^(x291^x292)));

	if (t71 != 127U) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x293 = INT16_MAX;
	int64_t x294 = 46591577458LL;
	uint64_t x295 = UINT64_MAX;
	volatile uint64_t t72 = 537LLU;

	t72 = (x293%(x294^(x295^x296)));

	if (t72 != 32767LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int64_t x298 = INT64_MAX;
	static volatile int64_t x300 = INT64_MAX;
	volatile uint64_t t73 = 10704306819LLU;

	t73 = (x297%(x298^(x299^x300)));

	if (t73 != 4789001LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint16_t x302 = 1964U;
	int32_t x303 = INT32_MAX;
	static uint8_t x304 = 77U;
	volatile int32_t t74 = -2577;

	t74 = (x301%(x302^(x303^x304)));

	if (t74 != -1) { NG(); } else { ; }
	
}

void f75(void) {
	static int16_t x307 = -3;
	int64_t x308 = INT64_MIN;
	int64_t t75 = -688LL;

	t75 = (x305%(x306^(x307^x308)));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x309 = INT32_MAX;
	static volatile int8_t x310 = INT8_MIN;
	int8_t x311 = INT8_MIN;

	t76 = (x309%(x310^(x311^x312)));

	if (t76 != 127) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x313 = -1;
	uint32_t x314 = 4U;
	volatile uint16_t x315 = UINT16_MAX;
	volatile int16_t x316 = INT16_MIN;
	volatile uint32_t t77 = 57U;

	t77 = (x313%(x314^(x315^x316)));

	if (t77 != 32772U) { NG(); } else { ; }
	
}

void f78(void) {
	volatile int64_t x317 = 933LL;
	int16_t x318 = -1;
	int16_t x319 = -1;
	static uint64_t t78 = 124243719394955LLU;

	t78 = (x317%(x318^(x319^x320)));

	if (t78 != 933LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = INT64_MIN;
	int8_t x322 = INT8_MAX;
	volatile int8_t x323 = INT8_MAX;
	static int64_t x324 = INT64_MIN;
	static int64_t t79 = -45LL;

	t79 = (x321%(x322^(x323^x324)));

	if (t79 != 0LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x325 = 1178U;
	uint32_t x326 = 5226874U;
	int8_t x328 = INT8_MAX;

	t80 = (x325%(x326^(x327^x328)));

	if (t80 != 1178LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x329 = -13851397;
	uint8_t x330 = UINT8_MAX;
	static int8_t x331 = -1;
	static volatile int64_t t81 = 6483336723598151LL;

	t81 = (x329%(x330^(x331^x332)));

	if (t81 != -13851397LL) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int64_t x333 = INT64_MAX;
	volatile int64_t x334 = -180779564017LL;
	static int64_t x335 = INT64_MIN;
	uint64_t t82 = 259740LLU;

	t82 = (x333%(x334^(x335^x336)));

	if (t82 != 615580222572LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x337 = INT32_MAX;
	volatile int64_t x338 = INT64_MAX;
	int8_t x339 = -1;
	volatile int32_t x340 = 1418404;
	volatile int64_t t83 = -942949414979409LL;

	t83 = (x337%(x338^(x339^x340)));

	if (t83 != 2147483647LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint16_t x341 = 26556U;
	static int32_t x342 = INT32_MIN;
	uint8_t x344 = 2U;
	volatile int32_t t84 = -740657;

	t84 = (x341%(x342^(x343^x344)));

	if (t84 != 26556) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x345 = 445;
	int8_t x348 = -1;
	volatile uint64_t t85 = 447314402211889LLU;

	t85 = (x345%(x346^(x347^x348)));

	if (t85 != 445LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x349 = 30;
	volatile int32_t x350 = INT32_MIN;
	uint8_t x351 = 2U;

	t86 = (x349%(x350^(x351^x352)));

	if (t86 != 30) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = INT16_MIN;
	uint8_t x354 = 6U;
	int64_t x355 = -54204LL;
	int16_t x356 = -1528;
	int64_t t87 = 141004469416LL;

	t87 = (x353%(x354^(x355^x356)));

	if (t87 != -32768LL) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x358 = INT64_MIN;
	uint32_t x359 = 1698U;
	uint16_t x360 = UINT16_MAX;
	static volatile int64_t t88 = -32862153996611529LL;

	t88 = (x357%(x358^(x359^x360)));

	if (t88 != 3LL) { NG(); } else { ; }
	
}

void f89(void) {
	static int64_t x361 = INT64_MIN;
	int16_t x362 = -1;
	static int8_t x363 = INT8_MIN;
	static uint32_t x364 = 932910U;
	int64_t t89 = 22LL;

	t89 = (x361%(x362^(x363^x364)));

	if (t89 != -799963LL) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x365 = INT64_MIN;
	static int8_t x367 = INT8_MAX;
	int64_t t90 = -724LL;

	t90 = (x365%(x366^(x367^x368)));

	if (t90 != -1LL) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x369 = UINT8_MAX;
	volatile uint16_t x370 = 22228U;
	static uint64_t x372 = 523084634821991317LLU;
	volatile uint64_t t91 = 107169718042258354LLU;

	t91 = (x369%(x370^(x371^x372)));

	if (t91 != 255LLU) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint32_t x373 = 31U;
	static uint8_t x374 = UINT8_MAX;
	int32_t x375 = -1;
	static uint32_t x376 = UINT32_MAX;
	static volatile uint32_t t92 = 8009023U;

	t92 = (x373%(x374^(x375^x376)));

	if (t92 != 31U) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x377 = -16;
	uint32_t x380 = 9479938U;
	uint32_t t93 = 2665U;

	t93 = (x377%(x378^(x379^x380)));

	if (t93 != 2138003694U) { NG(); } else { ; }
	
}

void f94(void) {
	uint16_t x381 = 5U;
	volatile int8_t x383 = 50;
	uint8_t x384 = 10U;
	volatile int32_t t94 = -7366164;

	t94 = (x381%(x382^(x383^x384)));

	if (t94 != 5) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x385 = 3;
	static volatile int16_t x386 = INT16_MAX;
	int64_t x388 = INT64_MIN;
	volatile int64_t t95 = 0LL;

	t95 = (x385%(x386^(x387^x388)));

	if (t95 != 3LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint16_t x389 = UINT16_MAX;
	int8_t x390 = -1;
	int64_t x392 = INT64_MIN;
	int64_t t96 = -515535141214254355LL;

	t96 = (x389%(x390^(x391^x392)));

	if (t96 != 65535LL) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x393 = -1;
	static volatile uint64_t x394 = UINT64_MAX;
	static int32_t x395 = INT32_MIN;
	int64_t x396 = -484881688510600LL;
	volatile uint64_t t97 = 1185109454LLU;

	t97 = (x393%(x394^(x395^x396)));

	if (t97 != 484881124736888LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x399 = INT8_MIN;
	static int16_t x400 = INT16_MAX;
	static volatile int32_t t98 = -1;

	t98 = (x397%(x398^(x399^x400)));

	if (t98 != 44) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x401 = INT16_MIN;
	volatile int32_t x402 = INT32_MIN;
	int8_t x403 = -1;
	static int16_t x404 = -1;
	volatile int32_t t99 = -332174;

	t99 = (x401%(x402^(x403^x404)));

	if (t99 != -32768) { NG(); } else { ; }
	
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

