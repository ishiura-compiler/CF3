#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x6 = 65193U;
static uint32_t t1 = 3737154U;
static int64_t x10 = INT64_MIN;
static volatile uint64_t x11 = 1894992495424LLU;
uint64_t t2 = 17LLU;
uint8_t x18 = 1U;
int32_t t4 = 98547294;
int8_t x24 = INT8_MIN;
uint64_t t5 = 596546796903LLU;
int64_t x26 = INT64_MIN;
uint64_t t7 = 975724637013332LLU;
uint16_t x34 = UINT16_MAX;
int64_t x37 = -1LL;
int16_t x38 = INT16_MAX;
volatile int64_t t9 = -111LL;
volatile uint32_t x42 = UINT32_MAX;
uint64_t x44 = UINT64_MAX;
volatile uint64_t t10 = 2LLU;
uint8_t x48 = UINT8_MAX;
int32_t x49 = INT32_MIN;
int32_t x52 = INT32_MAX;
uint64_t x55 = 441LLU;
int32_t x64 = INT32_MIN;
int64_t x65 = INT64_MIN;
uint64_t x66 = UINT64_MAX;
int64_t x68 = -15164354407LL;
uint16_t x71 = UINT16_MAX;
int16_t x74 = 3365;
static uint32_t x75 = 448718U;
static uint64_t x88 = 8650492LLU;
volatile uint16_t x90 = 483U;
int8_t x91 = INT8_MIN;
static int64_t t23 = -83719512LL;
uint16_t x103 = UINT16_MAX;
uint64_t x106 = UINT64_MAX;
int64_t t27 = 1LL;
volatile uint32_t x113 = 635U;
uint64_t x114 = UINT64_MAX;
uint8_t x115 = 125U;
static int8_t x118 = INT8_MAX;
static int16_t x123 = -4;
volatile int8_t x124 = INT8_MAX;
static int64_t x126 = INT64_MIN;
static uint8_t x129 = 1U;
uint32_t x130 = UINT32_MAX;
uint32_t t32 = 27127947U;
volatile int8_t x134 = INT8_MIN;
static int32_t x141 = INT32_MAX;
int32_t x142 = -1;
static uint16_t x147 = 934U;
int16_t x148 = INT16_MIN;
uint8_t x150 = 1U;
int32_t x151 = INT32_MIN;
static volatile uint32_t x155 = 63U;
int64_t x156 = 517866216480418003LL;
int64_t t38 = -483604685982LL;
volatile int64_t t46 = 7946797LL;
int64_t x193 = -1LL;
uint32_t x198 = 45U;
int8_t x203 = -1;
int16_t x206 = -89;
int16_t x210 = INT16_MAX;
int64_t x212 = INT64_MAX;
int64_t t52 = 28819722362089551LL;
uint8_t x214 = 5U;
int32_t t53 = INT32_MIN;
uint16_t x219 = 4U;
volatile int32_t x220 = 1;
int32_t x221 = INT32_MAX;
static int32_t t55 = -229245;
int16_t x225 = 0;
int16_t x226 = 57;
uint64_t x228 = UINT64_MAX;
int32_t x231 = -530903654;
int16_t x233 = INT16_MAX;
volatile int64_t t58 = 50452LL;
int32_t x244 = INT32_MIN;
int8_t x247 = 8;
uint8_t x248 = 26U;
int64_t x254 = INT64_MAX;
static int64_t x261 = -1LL;
static uint8_t x274 = 6U;
int16_t x281 = -1;
volatile int32_t x283 = INT32_MIN;
int32_t x292 = -1818;
static uint32_t x294 = UINT32_MAX;
uint8_t x298 = UINT8_MAX;
static uint16_t x300 = 308U;
static volatile int32_t x302 = INT32_MIN;
volatile int16_t x303 = INT16_MAX;
volatile uint16_t x317 = 0U;
volatile uint64_t t79 = 10983743LLU;
int16_t x325 = -1580;
int32_t x327 = 398;
uint32_t x330 = UINT32_MAX;
int16_t x331 = INT16_MAX;
int64_t x334 = -1LL;
int8_t x337 = -1;
volatile int8_t x339 = -13;
int32_t x344 = -1;
uint8_t x345 = 41U;
volatile int64_t x346 = INT64_MAX;
uint32_t x350 = 91961U;
int8_t x355 = INT8_MAX;
volatile int8_t x360 = INT8_MIN;
uint32_t x364 = 41U;
int64_t x366 = -19LL;
int64_t t91 = -530356614035307LL;
int32_t x370 = INT32_MIN;
int16_t x371 = INT16_MIN;
int8_t x374 = INT8_MIN;
volatile int64_t t94 = 260473LL;
uint16_t x381 = 5793U;
int16_t x385 = INT16_MAX;
volatile uint64_t x386 = 21037536879456849LLU;
uint64_t x391 = 7027957645226LLU;


void f0(void) {
	int32_t x1 = -1;
	volatile uint8_t x2 = 2U;
	static uint16_t x3 = 45U;
	int8_t x4 = -5;
	volatile int32_t t0 = -96061;

	t0 = (x1&(x2^(x3^x4)));

	if (t0 != -44) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x5 = 10U;
	int32_t x7 = INT32_MIN;
	uint16_t x8 = UINT16_MAX;

	t1 = (x5&(x6^(x7^x8)));

	if (t1 != 2U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	volatile uint64_t x12 = UINT64_MAX;

	t2 = (x9&(x10^(x11^x12)));

	if (t2 != 9223370141862264832LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = INT16_MIN;
	int32_t x14 = INT32_MAX;
	int16_t x15 = -1;
	uint32_t x16 = UINT32_MAX;
	uint32_t t3 = 170339U;

	t3 = (x13&(x14^(x15^x16)));

	if (t3 != 2147450880U) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = -5;
	int16_t x19 = -1;
	static uint16_t x20 = 10153U;

	t4 = (x17&(x18^(x19^x20)));

	if (t4 != -10157) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = -1;
	static int16_t x22 = INT16_MIN;
	static uint64_t x23 = 7269007LLU;

	t5 = (x21&(x22^(x23^x24)));

	if (t5 != 7247119LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int64_t x25 = 223499746878331LL;
	uint16_t x27 = 4606U;
	int8_t x28 = -1;
	int64_t t6 = 223102903214862LL;

	t6 = (x25&(x26^(x27^x28)));

	if (t6 != 223499746877953LL) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = INT16_MIN;
	static int32_t x30 = -1;
	static uint32_t x31 = UINT32_MAX;
	uint64_t x32 = UINT64_MAX;

	t7 = (x29&(x30^(x31^x32)));

	if (t7 != 4294934528LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static int8_t x33 = INT8_MAX;
	static volatile int8_t x35 = -1;
	uint8_t x36 = 0U;
	volatile int32_t t8 = 3720896;

	t8 = (x33&(x34^(x35^x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int64_t x39 = INT64_MIN;
	static uint16_t x40 = 2U;

	t9 = (x37&(x38^(x39^x40)));

	if (t9 != -9223372036854743043LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x41 = UINT64_MAX;
	uint16_t x43 = 10607U;

	t10 = (x41&(x42^(x43^x44)));

	if (t10 != 18446744069414594927LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x45 = UINT32_MAX;
	static volatile int16_t x46 = INT16_MAX;
	int16_t x47 = 985;
	static volatile uint32_t t11 = 271U;

	t11 = (x45&(x46^(x47^x48)));

	if (t11 != 31961U) { NG(); } else { ; }
	
}

void f12(void) {
	int32_t x50 = 1;
	static int32_t x51 = -52;
	volatile int32_t t12 = INT32_MIN;

	t12 = (x49&(x50^(x51^x52)));

	if (t12 != INT32_MIN) { NG(); } else { ; }
	
}

void f13(void) {
	uint32_t x53 = UINT32_MAX;
	int16_t x54 = 2273;
	int32_t x56 = -296;
	static volatile uint64_t t13 = 0LLU;

	t13 = (x53&(x54^(x55^x56)));

	if (t13 != 4294965120LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint8_t x57 = 1U;
	static uint32_t x58 = 5U;
	volatile int16_t x59 = INT16_MIN;
	static int16_t x60 = -1;
	uint32_t t14 = 3862696U;

	t14 = (x57&(x58^(x59^x60)));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int64_t x62 = INT64_MAX;
	static uint64_t x63 = 55291728586958LLU;
	uint64_t t15 = 740663LLU;

	t15 = (x61&(x62^(x63^x64)));

	if (t15 != 9223427328116260864LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x67 = 4;
	uint64_t t16 = 20865529391418985LLU;

	t16 = (x65&(x66^(x67^x68)));

	if (t16 != 0LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x69 = 4549835514LLU;
	volatile int64_t x70 = INT64_MIN;
	int64_t x72 = 878908154LL;
	uint64_t t17 = 11808291658LLU;

	t17 = (x69&(x70^(x71^x72)));

	if (t17 != 69265408LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x73 = INT16_MIN;
	uint16_t x76 = 2980U;
	uint32_t t18 = 7923U;

	t18 = (x73&(x74^(x75^x76)));

	if (t18 != 425984U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int64_t x77 = -1LL;
	int8_t x78 = -1;
	int16_t x79 = 11;
	int8_t x80 = INT8_MAX;
	volatile int64_t t19 = 2232338930332309LL;

	t19 = (x77&(x78^(x79^x80)));

	if (t19 != -117LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x81 = UINT8_MAX;
	static int64_t x82 = INT64_MIN;
	int8_t x83 = INT8_MIN;
	static uint64_t x84 = 4903403281974LLU;
	uint64_t t20 = 13109918302666LLU;

	t20 = (x81&(x82^(x83^x84)));

	if (t20 != 182LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	volatile uint8_t x86 = 1U;
	int8_t x87 = -1;
	volatile uint64_t t21 = 259713LLU;

	t21 = (x85&(x86^(x87^x88)));

	if (t21 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int32_t x89 = -71069670;
	int16_t x92 = 10665;
	static int32_t t22 = -2989302;

	t22 = (x89&(x90^(x91^x92)));

	if (t22 != -71069686) { NG(); } else { ; }
	
}

void f23(void) {
	int8_t x93 = INT8_MIN;
	static int64_t x94 = INT64_MIN;
	int8_t x95 = -1;
	uint16_t x96 = UINT16_MAX;

	t23 = (x93&(x94^(x95^x96)));

	if (t23 != 9223372036854710272LL) { NG(); } else { ; }
	
}

void f24(void) {
	static int16_t x97 = -1;
	static int8_t x98 = INT8_MIN;
	int8_t x99 = 39;
	int8_t x100 = INT8_MIN;
	int32_t t24 = -7052;

	t24 = (x97&(x98^(x99^x100)));

	if (t24 != 39) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x101 = 90675797340394LL;
	int16_t x102 = INT16_MAX;
	volatile uint32_t x104 = UINT32_MAX;
	static int64_t t25 = 109815438940699932LL;

	t25 = (x101&(x102^(x103^x104)));

	if (t25 != 447754474LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int32_t x107 = INT32_MAX;
	static int32_t x108 = INT32_MAX;
	uint64_t t26 = 84264LLU;

	t26 = (x105&(x106^(x107^x108)));

	if (t26 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x109 = INT32_MAX;
	int64_t x110 = -1LL;
	uint16_t x111 = 141U;
	volatile int64_t x112 = -464053LL;

	t27 = (x109&(x110^(x111^x112)));

	if (t27 != 463929LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x116 = 0U;
	uint64_t t28 = 25852282LLU;

	t28 = (x113&(x114^(x115^x116)));

	if (t28 != 514LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = -1;
	int16_t x119 = -275;
	uint64_t x120 = 8992329LLU;
	static volatile uint64_t t29 = 167305902598LLU;

	t29 = (x117&(x118^(x119^x120)));

	if (t29 != 18446744073700559067LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int64_t x121 = -76152693682LL;
	static volatile uint64_t x122 = UINT64_MAX;
	uint64_t t30 = 129176781676LLU;

	t30 = (x121&(x122^(x123^x124)));

	if (t30 != 76LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	int32_t x127 = -1;
	volatile uint8_t x128 = UINT8_MAX;
	volatile int64_t t31 = 27LL;

	t31 = (x125&(x126^(x127^x128)));

	if (t31 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x131 = 7U;
	int32_t x132 = -1;

	t32 = (x129&(x130^(x131^x132)));

	if (t32 != 1U) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x133 = -1;
	volatile int64_t x135 = -1LL;
	int8_t x136 = -1;
	volatile int64_t t33 = -1LL;

	t33 = (x133&(x134^(x135^x136)));

	if (t33 != -128LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int8_t x137 = INT8_MIN;
	volatile int8_t x138 = INT8_MIN;
	uint64_t x139 = 194970250721377339LLU;
	int64_t x140 = -1LL;
	volatile uint64_t t34 = 3022681005508591727LLU;

	t34 = (x137&(x138^(x139^x140)));

	if (t34 != 194970250721377280LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x143 = 219;
	static int16_t x144 = INT16_MIN;
	static int32_t t35 = -78758895;

	t35 = (x141&(x142^(x143^x144)));

	if (t35 != 32548) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x145 = -511;
	uint32_t x146 = 444869U;
	uint32_t t36 = 14U;

	t36 = (x145&(x146^(x147^x148)));

	if (t36 != 4294527489U) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int8_t x149 = 18;
	static int64_t x152 = 34699050LL;
	volatile int64_t t37 = 345812LL;

	t37 = (x149&(x150^(x151^x152)));

	if (t37 != 2LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = -59;
	static int16_t x154 = 359;

	t38 = (x153&(x154^(x155^x156)));

	if (t38 != 517866216480418177LL) { NG(); } else { ; }
	
}

void f39(void) {
	uint16_t x157 = UINT16_MAX;
	int16_t x158 = INT16_MIN;
	int64_t x159 = INT64_MAX;
	volatile int64_t x160 = -435890619911LL;
	int64_t t39 = 479LL;

	t39 = (x157&(x158^(x159^x160)));

	if (t39 != 34310LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = -1LL;
	static uint8_t x162 = 0U;
	int8_t x163 = INT8_MIN;
	static int16_t x164 = INT16_MIN;
	volatile int64_t t40 = -612551975297523879LL;

	t40 = (x161&(x162^(x163^x164)));

	if (t40 != 32640LL) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = -26583520058248666LL;
	int8_t x166 = INT8_MIN;
	volatile uint8_t x167 = 2U;
	int64_t x168 = -1LL;
	int64_t t41 = 995593235559165LL;

	t41 = (x165&(x166^(x167^x168)));

	if (t41 != 36LL) { NG(); } else { ; }
	
}

void f42(void) {
	static int64_t x169 = 161LL;
	static uint16_t x170 = 9U;
	uint64_t x171 = UINT64_MAX;
	int16_t x172 = INT16_MAX;
	static volatile uint64_t t42 = 1384LLU;

	t42 = (x169&(x170^(x171^x172)));

	if (t42 != 1LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x173 = -1LL;
	volatile uint16_t x174 = UINT16_MAX;
	uint32_t x175 = 214898703U;
	volatile int8_t x176 = -1;
	volatile int64_t t43 = 964LL;

	t43 = (x173&(x174^(x175^x176)));

	if (t43 != 4080015375LL) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	volatile int8_t x178 = INT8_MAX;
	int16_t x179 = INT16_MAX;
	static int32_t x180 = -45671;
	static volatile int32_t t44 = INT32_MIN;

	t44 = (x177&(x178^(x179^x180)));

	if (t44 != INT32_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x181 = INT64_MAX;
	static int8_t x182 = INT8_MAX;
	int8_t x183 = -1;
	uint32_t x184 = 43226596U;
	int64_t t45 = 1LL;

	t45 = (x181&(x182^(x183^x184)));

	if (t45 != 4251740772LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int64_t x185 = -119249186805042LL;
	int32_t x186 = INT32_MIN;
	int16_t x187 = -7585;
	static volatile int16_t x188 = 58;

	t46 = (x185&(x186^(x187^x188)));

	if (t46 != 580166212LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x189 = 1286U;
	uint32_t x190 = UINT32_MAX;
	int64_t x191 = 143794970615LL;
	uint64_t x192 = UINT64_MAX;
	static uint64_t t47 = 1442463320388LLU;

	t47 = (x189&(x190^(x191^x192)));

	if (t47 != 1286LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x194 = INT64_MIN;
	volatile int16_t x195 = 0;
	int32_t x196 = INT32_MIN;
	static int64_t t48 = 19684600612301LL;

	t48 = (x193&(x194^(x195^x196)));

	if (t48 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile uint32_t x197 = 1583857U;
	static volatile int8_t x199 = 7;
	static uint8_t x200 = 21U;
	uint32_t t49 = 7266U;

	t49 = (x197&(x198^(x199^x200)));

	if (t49 != 49U) { NG(); } else { ; }
	
}

void f50(void) {
	volatile uint64_t x201 = UINT64_MAX;
	static int64_t x202 = INT64_MAX;
	uint32_t x204 = 10008U;
	static volatile uint64_t t50 = 11852980920732LLU;

	t50 = (x201&(x202^(x203^x204)));

	if (t50 != 9223372032559818520LLU) { NG(); } else { ; }
	
}

void f51(void) {
	static int8_t x205 = INT8_MIN;
	uint32_t x207 = 13U;
	uint8_t x208 = UINT8_MAX;
	static uint32_t t51 = 10U;

	t51 = (x205&(x206^(x207^x208)));

	if (t51 != 4294967040U) { NG(); } else { ; }
	
}

void f52(void) {
	static uint16_t x209 = UINT16_MAX;
	static int16_t x211 = -25;

	t52 = (x209&(x210^(x211^x212)));

	if (t52 != 32743LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x213 = INT32_MIN;
	volatile int16_t x215 = -1;
	int16_t x216 = INT16_MAX;

	t53 = (x213&(x214^(x215^x216)));

	if (t53 != INT32_MIN) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 5035480;
	uint32_t x218 = UINT32_MAX;
	volatile uint32_t t54 = 510514U;

	t54 = (x217&(x218^(x219^x220)));

	if (t54 != 5035480U) { NG(); } else { ; }
	
}

void f55(void) {
	static uint16_t x222 = 19691U;
	int16_t x223 = -1330;
	int32_t x224 = -1;

	t55 = (x221&(x222^(x223^x224)));

	if (t55 != 18906) { NG(); } else { ; }
	
}

void f56(void) {
	uint64_t x227 = UINT64_MAX;
	uint64_t t56 = 12914805100685649LLU;

	t56 = (x225&(x226^(x227^x228)));

	if (t56 != 0LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 3U;
	uint16_t x230 = 983U;
	static int8_t x232 = -1;
	static volatile int32_t t57 = 162;

	t57 = (x229&(x230^(x231^x232)));

	if (t57 != 2) { NG(); } else { ; }
	
}

void f58(void) {
	static int32_t x234 = -151736391;
	int64_t x235 = INT64_MIN;
	volatile int8_t x236 = INT8_MIN;

	t58 = (x233&(x234^(x235^x236)));

	if (t58 != 20537LL) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = 23775540LL;
	uint8_t x238 = 20U;
	uint8_t x239 = 13U;
	int8_t x240 = INT8_MIN;
	volatile int64_t t59 = -94648LL;

	t59 = (x237&(x238^(x239^x240)));

	if (t59 != 23775504LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x241 = 3;
	static int8_t x242 = 1;
	volatile int16_t x243 = INT16_MAX;
	int32_t t60 = -780;

	t60 = (x241&(x242^(x243^x244)));

	if (t60 != 2) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x245 = 93875041429317LL;
	volatile uint16_t x246 = 460U;
	int64_t t61 = -3005623461511LL;

	t61 = (x245&(x246^(x247^x248)));

	if (t61 != 324LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint16_t x249 = 735U;
	uint32_t x250 = 1594U;
	int8_t x251 = INT8_MIN;
	int32_t x252 = -1;
	uint32_t t62 = 1477683U;

	t62 = (x249&(x250^(x251^x252)));

	if (t62 != 581U) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x253 = INT8_MIN;
	uint64_t x255 = 546434992238LLU;
	volatile int32_t x256 = INT32_MIN;
	uint64_t t63 = 1LLU;

	t63 = (x253&(x254^(x255^x256)));

	if (t63 != 9223372583488960384LLU) { NG(); } else { ; }
	
}

void f64(void) {
	static int64_t x257 = INT64_MIN;
	int64_t x258 = -1LL;
	volatile int32_t x259 = 135126785;
	static int8_t x260 = INT8_MIN;
	static volatile int64_t t64 = 232809629645LL;

	t64 = (x257&(x258^(x259^x260)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	uint16_t x262 = UINT16_MAX;
	volatile uint64_t x263 = 189933288877013LLU;
	int64_t x264 = INT64_MAX;
	uint64_t t65 = 5570995747521413049LLU;

	t65 = (x261&(x262^(x263^x264)));

	if (t65 != 9223182103565954005LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 1091U;
	volatile uint64_t x266 = 28LLU;
	int64_t x267 = -1LL;
	volatile uint64_t x268 = UINT64_MAX;
	uint64_t t66 = 2180029817318LLU;

	t66 = (x265&(x266^(x267^x268)));

	if (t66 != 0LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x269 = INT16_MAX;
	static int64_t x270 = INT64_MAX;
	static int8_t x271 = -1;
	int32_t x272 = INT32_MAX;
	int64_t t67 = -32565LL;

	t67 = (x269&(x270^(x271^x272)));

	if (t67 != 32767LL) { NG(); } else { ; }
	
}

void f68(void) {
	static int32_t x273 = 4;
	volatile int32_t x275 = 407812;
	volatile uint64_t x276 = 4178LLU;
	uint64_t t68 = 97800052LLU;

	t68 = (x273&(x274^(x275^x276)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = 2097038U;
	int32_t x278 = INT32_MAX;
	int16_t x279 = -207;
	int64_t x280 = INT64_MAX;
	int64_t t69 = -27695269751LL;

	t69 = (x277&(x278^(x279^x280)));

	if (t69 != 2096896LL) { NG(); } else { ; }
	
}

void f70(void) {
	static uint32_t x282 = UINT32_MAX;
	int16_t x284 = -1;
	static volatile uint32_t t70 = 19419U;

	t70 = (x281&(x282^(x283^x284)));

	if (t70 != 2147483648U) { NG(); } else { ; }
	
}

void f71(void) {
	int32_t x285 = INT32_MAX;
	int16_t x286 = -1;
	static uint64_t x287 = UINT64_MAX;
	volatile int8_t x288 = 0;
	volatile uint64_t t71 = 3021304057LLU;

	t71 = (x285&(x286^(x287^x288)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint32_t x289 = UINT32_MAX;
	uint16_t x290 = UINT16_MAX;
	int16_t x291 = INT16_MIN;
	volatile uint32_t t72 = 0U;

	t72 = (x289&(x290^(x291^x292)));

	if (t72 != 34585U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	int32_t x295 = 1505;
	static uint8_t x296 = UINT8_MAX;
	uint32_t t73 = 3510U;

	t73 = (x293&(x294^(x295^x296)));

	if (t73 != 4294965985U) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = INT8_MIN;
	uint16_t x299 = 12U;
	static int32_t t74 = 893710165;

	t74 = (x297&(x298^(x299^x300)));

	if (t74 != 384) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x301 = -1;
	int32_t x304 = INT32_MAX;
	static int32_t t75 = 3;

	t75 = (x301&(x302^(x303^x304)));

	if (t75 != -32768) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -24;
	int64_t x306 = INT64_MIN;
	volatile int8_t x307 = INT8_MIN;
	static volatile int16_t x308 = INT16_MAX;
	static int64_t t76 = -337795LL;

	t76 = (x305&(x306^(x307^x308)));

	if (t76 != 9223372036854743144LL) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x309 = INT64_MAX;
	uint8_t x310 = UINT8_MAX;
	uint64_t x311 = 3678112582785148273LLU;
	static uint32_t x312 = 9293U;
	volatile uint64_t t77 = 48147535LLU;

	t77 = (x309&(x310^(x311^x312)));

	if (t77 != 3678112582785139139LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x313 = -1;
	volatile int16_t x314 = 8;
	static int16_t x315 = INT16_MAX;
	uint32_t x316 = 573868054U;
	static uint32_t t78 = 17322U;

	t78 = (x313&(x314^(x315^x316)));

	if (t78 != 573896673U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x318 = UINT32_MAX;
	int64_t x319 = -1LL;
	uint64_t x320 = 23506271830LLU;

	t79 = (x317&(x318^(x319^x320)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x321 = -1;
	volatile int32_t x322 = -1;
	uint8_t x323 = 10U;
	int16_t x324 = INT16_MIN;
	volatile int32_t t80 = 21;

	t80 = (x321&(x322^(x323^x324)));

	if (t80 != 32757) { NG(); } else { ; }
	
}

void f81(void) {
	uint8_t x326 = UINT8_MAX;
	static volatile uint32_t x328 = UINT32_MAX;
	volatile uint32_t t81 = 7129946U;

	t81 = (x325&(x326^(x327^x328)));

	if (t81 != 4294965380U) { NG(); } else { ; }
	
}

void f82(void) {
	volatile uint64_t x329 = UINT64_MAX;
	volatile int64_t x332 = 2849598303164928144LL;
	volatile uint64_t t82 = 24LLU;

	t82 = (x329&(x330^(x331^x332)));

	if (t82 != 2849598306765246608LLU) { NG(); } else { ; }
	
}

void f83(void) {
	int32_t x333 = INT32_MIN;
	volatile int8_t x335 = INT8_MAX;
	volatile int8_t x336 = 24;
	volatile int64_t t83 = -1315823LL;

	t83 = (x333&(x334^(x335^x336)));

	if (t83 != -2147483648LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int8_t x338 = INT8_MAX;
	static int64_t x340 = 194LL;
	int64_t t84 = 24LL;

	t84 = (x337&(x338^(x339^x340)));

	if (t84 != -178LL) { NG(); } else { ; }
	
}

void f85(void) {
	uint16_t x341 = UINT16_MAX;
	static int64_t x342 = INT64_MIN;
	int32_t x343 = INT32_MAX;
	static int64_t t85 = 44LL;

	t85 = (x341&(x342^(x343^x344)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int8_t x347 = -23;
	int32_t x348 = INT32_MAX;
	volatile int64_t t86 = 1302235564879LL;

	t86 = (x345&(x346^(x347^x348)));

	if (t86 != 41LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint16_t x349 = UINT16_MAX;
	int8_t x351 = 8;
	uint16_t x352 = 25985U;
	volatile uint32_t t87 = 1893723U;

	t87 = (x349&(x350^(x351^x352)));

	if (t87 != 688U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x353 = INT16_MIN;
	int64_t x354 = 9LL;
	int8_t x356 = -1;
	static volatile int64_t t88 = -1106034732690384LL;

	t88 = (x353&(x354^(x355^x356)));

	if (t88 != -32768LL) { NG(); } else { ; }
	
}

void f89(void) {
	static uint32_t x357 = 32783445U;
	int8_t x358 = 1;
	int8_t x359 = 1;
	static volatile uint32_t t89 = 1326966998U;

	t89 = (x357&(x358^(x359^x360)));

	if (t89 != 32783360U) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint32_t x361 = 5U;
	uint8_t x362 = 59U;
	volatile uint32_t x363 = 956275026U;
	static volatile uint32_t t90 = 594548261U;

	t90 = (x361&(x362^(x363^x364)));

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint16_t x365 = 20U;
	int8_t x367 = 6;
	uint16_t x368 = UINT16_MAX;

	t91 = (x365&(x366^(x367^x368)));

	if (t91 != 20LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint8_t x369 = 9U;
	uint32_t x372 = UINT32_MAX;
	static volatile uint32_t t92 = 2U;

	t92 = (x369&(x370^(x371^x372)));

	if (t92 != 9U) { NG(); } else { ; }
	
}

void f93(void) {
	volatile uint8_t x373 = UINT8_MAX;
	volatile int8_t x375 = -1;
	int32_t x376 = INT32_MIN;
	volatile int32_t t93 = 110;

	t93 = (x373&(x374^(x375^x376)));

	if (t93 != 127) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x377 = INT64_MIN;
	uint16_t x378 = 2U;
	uint8_t x379 = 19U;
	volatile uint16_t x380 = UINT16_MAX;

	t94 = (x377&(x378^(x379^x380)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint64_t x382 = 60336747421514LLU;
	int32_t x383 = INT32_MAX;
	int8_t x384 = INT8_MIN;
	volatile uint64_t t95 = 158813721454872369LLU;

	t95 = (x381&(x382^(x383^x384)));

	if (t95 != 5665LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x387 = 0U;
	int16_t x388 = 12;
	uint64_t t96 = 2142012335181815652LLU;

	t96 = (x385&(x386^(x387^x388)));

	if (t96 != 12893LLU) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint16_t x389 = 30646U;
	static uint8_t x390 = 9U;
	int8_t x392 = -34;
	uint64_t t97 = 14LLU;

	t97 = (x389&(x390^(x391^x392)));

	if (t97 != 16436LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x393 = INT8_MAX;
	int64_t x394 = -1LL;
	volatile uint64_t x395 = 362646414LLU;
	int64_t x396 = -1LL;
	volatile uint64_t t98 = 85832520LLU;

	t98 = (x393&(x394^(x395^x396)));

	if (t98 != 14LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int8_t x397 = 4;
	volatile uint64_t x398 = 707378990279876481LLU;
	uint16_t x399 = 0U;
	volatile int32_t x400 = INT32_MAX;
	volatile uint64_t t99 = 126484853236752LLU;

	t99 = (x397&(x398^(x399^x400)));

	if (t99 != 4LLU) { NG(); } else { ; }
	
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

