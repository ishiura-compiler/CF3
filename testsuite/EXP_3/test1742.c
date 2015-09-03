#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t x10 = UINT32_MAX;
static int64_t x12 = INT64_MIN;
volatile int64_t x13 = INT64_MAX;
uint16_t x15 = UINT16_MAX;
int8_t x23 = -59;
volatile int64_t t5 = 906708037068058LL;
uint16_t x34 = UINT16_MAX;
int8_t x37 = INT8_MIN;
int64_t x40 = -21527LL;
static int64_t x42 = INT64_MIN;
int32_t x43 = 1977608;
int64_t t10 = 287511LL;
int16_t x45 = -1;
int8_t x48 = -1;
volatile int64_t t11 = -110420186303LL;
volatile int8_t x51 = INT8_MIN;
int8_t x63 = -1;
int8_t x68 = INT8_MAX;
uint16_t x69 = UINT16_MAX;
int64_t x75 = -1LL;
int64_t x91 = INT64_MIN;
volatile uint64_t x94 = 11593331457LLU;
int8_t x98 = INT8_MAX;
volatile int8_t x100 = 0;
volatile int8_t x111 = INT8_MAX;
volatile uint64_t t27 = 3LLU;
int64_t x118 = 103100125672665532LL;
volatile int32_t t29 = 77;
static uint8_t x129 = 6U;
volatile int64_t t31 = 49158163551LL;
uint16_t x134 = 6902U;
int64_t x139 = INT64_MIN;
volatile int16_t x151 = 88;
int32_t x155 = 488;
int32_t x158 = 241708;
int16_t x160 = INT16_MIN;
volatile int16_t x164 = INT16_MAX;
int8_t x168 = -11;
uint16_t x176 = UINT16_MAX;
static uint8_t x178 = 32U;
static int64_t x181 = INT64_MIN;
static uint64_t x183 = UINT64_MAX;
volatile uint64_t t44 = 283185790LLU;
int16_t x198 = INT16_MAX;
volatile uint64_t t46 = 4517334742815177517LLU;
int32_t x201 = INT32_MIN;
int32_t x215 = 391472;
int32_t x218 = INT32_MIN;
static volatile int8_t x219 = INT8_MIN;
uint16_t x220 = 56U;
int64_t x227 = INT64_MAX;
uint8_t x229 = 7U;
int64_t t53 = 74280406057951LL;
uint32_t x234 = 93U;
volatile uint32_t t54 = 2684642U;
uint64_t x250 = UINT64_MAX;
uint64_t t58 = 231728LLU;
uint64_t x255 = UINT64_MAX;
static int64_t x256 = INT64_MIN;
volatile uint64_t t59 = 13410LLU;
uint16_t x257 = UINT16_MAX;
volatile int8_t x258 = INT8_MIN;
int16_t x259 = -1;
uint16_t x260 = UINT16_MAX;
volatile int32_t t60 = -323064568;
volatile int32_t x269 = INT32_MIN;
int16_t x271 = 202;
int32_t t62 = -287;
int16_t x280 = INT16_MIN;
volatile uint64_t t64 = 901506159571LLU;
int32_t x285 = INT32_MAX;
static uint32_t x289 = 3231995U;
static volatile int8_t x291 = INT8_MIN;
uint64_t x292 = 234468490152918LLU;
int64_t x294 = -62833787984LL;
uint64_t x303 = 47820951576374652LLU;
int16_t x308 = INT16_MAX;
uint64_t x312 = 8LLU;
int16_t x328 = 13579;
volatile int16_t x329 = INT16_MAX;
int16_t x330 = INT16_MIN;
volatile int32_t t77 = 3;
uint64_t x333 = 635LLU;
int16_t x337 = INT16_MIN;
int64_t x338 = INT64_MIN;
int16_t x345 = -1;
uint16_t x346 = 4016U;
uint8_t x350 = UINT8_MAX;
int64_t x351 = -3752102950LL;
volatile int32_t x352 = -21;
static int64_t t82 = -807234586916151LL;
volatile int32_t x355 = INT32_MIN;
static int64_t x359 = -1837LL;
volatile int64_t t84 = -7LL;
int64_t x368 = -10LL;
int64_t x371 = INT64_MIN;
int64_t x375 = -1LL;
static int8_t x378 = -33;
volatile uint8_t x379 = 25U;
volatile int32_t t88 = -3726657;
uint8_t x387 = 0U;
uint8_t x388 = 16U;
volatile int32_t t90 = 532907518;
int64_t t91 = 1036819LL;
int8_t x393 = INT8_MIN;
static int16_t x394 = INT16_MIN;
uint8_t x396 = UINT8_MAX;
int32_t t92 = -1;
int16_t x398 = 1;
static int32_t x402 = 663;
uint32_t t94 = 14439U;
int32_t x411 = 3;
uint64_t t98 = 0LLU;
int32_t x423 = -1;
uint64_t t99 = 154970705066786099LLU;


void f0(void) {
	int16_t x1 = INT16_MAX;
	volatile int32_t x2 = 6475;
	int16_t x3 = -1;
	int8_t x4 = INT8_MAX;
	volatile int32_t t0 = 2927;

	t0 = ((x1/x2)^(x3&x4));

	if (t0 != 122) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 5998421329051LL;
	uint64_t x6 = UINT64_MAX;
	uint64_t x7 = 3828984804263962894LLU;
	uint8_t x8 = 0U;
	uint64_t t1 = 3090412LLU;

	t1 = ((x5/x6)^(x7&x8));

	if (t1 != 0LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MIN;
	static int8_t x11 = -3;
	volatile int64_t t2 = INT64_MIN;

	t2 = ((x9/x10)^(x11&x12));

	if (t2 != INT64_MIN) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x14 = UINT16_MAX;
	int64_t x16 = -202LL;
	int64_t t3 = 2074994149983LL;

	t3 = ((x13/x14)^(x15&x16));

	if (t3 != 140739635871542LL) { NG(); } else { ; }
	
}

void f4(void) {
	int16_t x17 = INT16_MIN;
	int16_t x18 = INT16_MIN;
	uint16_t x19 = 3U;
	uint16_t x20 = 3444U;
	int32_t t4 = -15340714;

	t4 = ((x17/x18)^(x19&x20));

	if (t4 != 1) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = INT64_MIN;
	volatile uint32_t x22 = 6981389U;
	static uint16_t x24 = 1U;

	t5 = ((x21/x22)^(x23&x24));

	if (t5 != -1321137102781LL) { NG(); } else { ; }
	
}

void f6(void) {
	static int8_t x25 = INT8_MIN;
	int32_t x26 = -1;
	uint32_t x27 = 665U;
	int32_t x28 = -1;
	uint32_t t6 = 334340U;

	t6 = ((x25/x26)^(x27&x28));

	if (t6 != 537U) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = -1LL;
	int64_t x30 = -234113LL;
	int8_t x31 = INT8_MIN;
	uint32_t x32 = 56U;
	int64_t t7 = 245740462381215829LL;

	t7 = ((x29/x30)^(x31&x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint64_t x33 = 36851LLU;
	uint8_t x35 = 16U;
	volatile int16_t x36 = 681;
	uint64_t t8 = 36926860964LLU;

	t8 = ((x33/x34)^(x35&x36));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x38 = INT8_MAX;
	int64_t x39 = -1LL;
	int64_t t9 = 538014823177LL;

	t9 = ((x37/x38)^(x39&x40));

	if (t9 != 21526LL) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	volatile uint32_t x44 = 29206849U;

	t10 = ((x41/x42)^(x43&x44));

	if (t10 != 1845504LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x46 = UINT16_MAX;
	int64_t x47 = -1LL;

	t11 = ((x45/x46)^(x47&x48));

	if (t11 != -1LL) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x49 = 461331200U;
	int8_t x50 = -1;
	uint8_t x52 = 18U;
	uint32_t t12 = 30274221U;

	t12 = ((x49/x50)^(x51&x52));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	static int32_t x53 = -8082;
	uint64_t x54 = UINT64_MAX;
	int16_t x55 = -1;
	static int32_t x56 = INT32_MIN;
	volatile uint64_t t13 = 184765906192LLU;

	t13 = ((x53/x54)^(x55&x56));

	if (t13 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint32_t x61 = 29U;
	int8_t x62 = INT8_MAX;
	volatile int16_t x64 = -1712;
	volatile uint32_t t14 = 1760U;

	t14 = ((x61/x62)^(x63&x64));

	if (t14 != 4294965584U) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x65 = INT16_MIN;
	uint64_t x66 = UINT64_MAX;
	uint8_t x67 = 9U;
	uint64_t t15 = 167591LLU;

	t15 = ((x65/x66)^(x67&x68));

	if (t15 != 9LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x70 = INT32_MIN;
	int32_t x71 = 2;
	static volatile int16_t x72 = INT16_MIN;
	volatile int32_t t16 = -3731095;

	t16 = ((x69/x70)^(x71&x72));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x73 = 2U;
	static uint32_t x74 = UINT32_MAX;
	int8_t x76 = INT8_MIN;
	volatile int64_t t17 = -1596LL;

	t17 = ((x73/x74)^(x75&x76));

	if (t17 != -128LL) { NG(); } else { ; }
	
}

void f18(void) {
	static uint32_t x77 = 1291U;
	uint64_t x78 = 125010LLU;
	uint16_t x79 = 3U;
	int8_t x80 = INT8_MAX;
	volatile uint64_t t18 = 464401554015718LLU;

	t18 = ((x77/x78)^(x79&x80));

	if (t18 != 3LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint32_t x81 = 772332U;
	int64_t x82 = 1609396670LL;
	volatile int16_t x83 = INT16_MIN;
	int32_t x84 = INT32_MIN;
	static volatile int64_t t19 = 199401943169954043LL;

	t19 = ((x81/x82)^(x83&x84));

	if (t19 != -2147483648LL) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x85 = INT32_MAX;
	int8_t x86 = -3;
	uint64_t x87 = UINT64_MAX;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t20 = 25969256LLU;

	t20 = ((x85/x86)^(x87&x88));

	if (t20 != 715827881LLU) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x89 = INT8_MIN;
	uint16_t x90 = UINT16_MAX;
	int32_t x92 = INT32_MIN;
	static int64_t t21 = INT64_MIN;

	t21 = ((x89/x90)^(x91&x92));

	if (t21 != INT64_MIN) { NG(); } else { ; }
	
}

void f22(void) {
	uint8_t x93 = UINT8_MAX;
	int16_t x95 = INT16_MIN;
	static uint8_t x96 = 0U;
	static uint64_t t22 = 8532377798LLU;

	t22 = ((x93/x94)^(x95&x96));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	uint16_t x97 = 4U;
	int16_t x99 = -67;
	int32_t t23 = 1;

	t23 = ((x97/x98)^(x99&x100));

	if (t23 != 0) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MAX;
	int16_t x102 = INT16_MIN;
	static int32_t x103 = INT32_MIN;
	static int8_t x104 = -1;
	int32_t t24 = 1;

	t24 = ((x101/x102)^(x103&x104));

	if (t24 != 2147418113) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x105 = UINT32_MAX;
	int8_t x106 = -1;
	int32_t x107 = -861;
	int32_t x108 = INT32_MAX;
	uint32_t t25 = 11503645U;

	t25 = ((x105/x106)^(x107&x108));

	if (t25 != 2147482786U) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint8_t x109 = 1U;
	volatile int8_t x110 = INT8_MIN;
	volatile uint16_t x112 = UINT16_MAX;
	int32_t t26 = 37057;

	t26 = ((x109/x110)^(x111&x112));

	if (t26 != 127) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x113 = 4929508378LLU;
	int32_t x114 = 373128;
	int64_t x115 = -19729LL;
	int16_t x116 = -2;

	t27 = ((x113/x114)^(x115&x116));

	if (t27 != 18446744073709519221LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x117 = 1;
	int8_t x119 = INT8_MIN;
	uint64_t x120 = UINT64_MAX;
	volatile uint64_t t28 = 967LLU;

	t28 = ((x117/x118)^(x119&x120));

	if (t28 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f29(void) {
	static int32_t x121 = -1;
	volatile uint16_t x122 = 951U;
	int8_t x123 = 17;
	int8_t x124 = -1;

	t29 = ((x121/x122)^(x123&x124));

	if (t29 != 17) { NG(); } else { ; }
	
}

void f30(void) {
	int32_t x125 = INT32_MIN;
	uint32_t x126 = 12298072U;
	int64_t x127 = INT64_MIN;
	static uint8_t x128 = UINT8_MAX;
	static volatile int64_t t30 = 1652715919677LL;

	t30 = ((x125/x126)^(x127&x128));

	if (t30 != 174LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x130 = INT32_MIN;
	int64_t x131 = -1LL;
	uint8_t x132 = UINT8_MAX;

	t31 = ((x129/x130)^(x131&x132));

	if (t31 != 255LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint16_t x133 = 16U;
	int16_t x135 = -1;
	uint16_t x136 = 1594U;
	volatile int32_t t32 = -822;

	t32 = ((x133/x134)^(x135&x136));

	if (t32 != 1594) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x137 = INT32_MIN;
	static int64_t x138 = 150850401626362LL;
	int64_t x140 = INT64_MIN;
	int64_t t33 = INT64_MIN;

	t33 = ((x137/x138)^(x139&x140));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x145 = -1LL;
	static volatile int8_t x146 = -8;
	int64_t x147 = -1LL;
	uint16_t x148 = 25464U;
	int64_t t34 = -61814640349LL;

	t34 = ((x145/x146)^(x147&x148));

	if (t34 != 25464LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int64_t x149 = -2LL;
	int16_t x150 = 1;
	static int32_t x152 = INT32_MIN;
	static volatile int64_t t35 = -772153972781437LL;

	t35 = ((x149/x150)^(x151&x152));

	if (t35 != -2LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint16_t x153 = 0U;
	int32_t x154 = INT32_MIN;
	volatile int16_t x156 = -1;
	int32_t t36 = -172206740;

	t36 = ((x153/x154)^(x155&x156));

	if (t36 != 488) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x157 = INT32_MAX;
	uint8_t x159 = 125U;
	volatile int32_t t37 = -122;

	t37 = ((x157/x158)^(x159&x160));

	if (t37 != 8884) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x161 = INT8_MIN;
	uint64_t x162 = 622LLU;
	int32_t x163 = 1485237;
	volatile uint64_t t38 = 18521666465LLU;

	t38 = ((x161/x162)^(x163&x164));

	if (t38 != 29657144813027485LLU) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x165 = 0LL;
	static int32_t x166 = -473375062;
	int32_t x167 = INT32_MAX;
	int64_t t39 = 503345169863LL;

	t39 = ((x165/x166)^(x167&x168));

	if (t39 != 2147483637LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x173 = 729U;
	int64_t x174 = -48658LL;
	uint16_t x175 = 36U;
	volatile int64_t t40 = 3045773LL;

	t40 = ((x173/x174)^(x175&x176));

	if (t40 != 36LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x177 = INT32_MIN;
	int32_t x179 = 58;
	int8_t x180 = INT8_MIN;
	volatile int32_t t41 = 78038469;

	t41 = ((x177/x178)^(x179&x180));

	if (t41 != -67108864) { NG(); } else { ; }
	
}

void f42(void) {
	static int32_t x182 = INT32_MIN;
	int16_t x184 = -7058;
	uint64_t t42 = 42516103958LLU;

	t42 = ((x181/x182)^(x183&x184));

	if (t42 != 18446744069414577262LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x185 = -1;
	volatile int8_t x186 = INT8_MAX;
	uint16_t x187 = UINT16_MAX;
	int16_t x188 = -2;
	int32_t t43 = -120135;

	t43 = ((x185/x186)^(x187&x188));

	if (t43 != 65534) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x189 = 1771562U;
	int8_t x190 = 6;
	uint64_t x191 = UINT64_MAX;
	volatile int8_t x192 = INT8_MIN;

	t44 = ((x189/x190)^(x191&x192));

	if (t44 != 18446744073709256412LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x193 = -513608997161984994LL;
	static int16_t x194 = -279;
	uint16_t x195 = UINT16_MAX;
	int8_t x196 = 0;
	int64_t t45 = -1634373801856038678LL;

	t45 = ((x193/x194)^(x195&x196));

	if (t45 != 1840892462946182LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x197 = UINT16_MAX;
	int64_t x199 = INT64_MIN;
	uint64_t x200 = 1467227213057532484LLU;

	t46 = ((x197/x198)^(x199&x200));

	if (t46 != 2LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int32_t x202 = INT32_MIN;
	static int32_t x203 = -1;
	volatile int64_t x204 = INT64_MIN;
	volatile int64_t t47 = 1915049586359LL;

	t47 = ((x201/x202)^(x203&x204));

	if (t47 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x205 = UINT32_MAX;
	int32_t x206 = -17;
	uint8_t x207 = 91U;
	int8_t x208 = INT8_MIN;
	volatile uint32_t t48 = 4103362U;

	t48 = ((x205/x206)^(x207&x208));

	if (t48 != 1U) { NG(); } else { ; }
	
}

void f49(void) {
	static volatile int16_t x209 = -5253;
	volatile uint16_t x210 = 8U;
	int16_t x211 = -3106;
	static int32_t x212 = INT32_MIN;
	volatile int32_t t49 = -120;

	t49 = ((x209/x210)^(x211&x212));

	if (t49 != 2147482992) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int16_t x213 = INT16_MIN;
	int32_t x214 = -62;
	int32_t x216 = -178641270;
	volatile int32_t t50 = -55285049;

	t50 = ((x213/x214)^(x215&x216));

	if (t50 != 8720) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x217 = 366050;
	volatile int32_t t51 = -7;

	t51 = ((x217/x218)^(x219&x220));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x225 = 380U;
	int8_t x226 = INT8_MAX;
	static int16_t x228 = -4;
	volatile int64_t t52 = -80982282328575LL;

	t52 = ((x225/x226)^(x227&x228));

	if (t52 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x230 = -171971074;
	volatile int64_t x231 = 53791683126LL;
	int16_t x232 = -1;

	t53 = ((x229/x230)^(x231&x232));

	if (t53 != 53791683126LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x233 = -1;
	int16_t x235 = 7370;
	int32_t x236 = INT32_MIN;

	t54 = ((x233/x234)^(x235&x236));

	if (t54 != 46182444U) { NG(); } else { ; }
	
}

void f55(void) {
	int64_t x237 = 30388255LL;
	static int32_t x238 = -1;
	static int32_t x239 = 7676;
	int64_t x240 = -288817120789646019LL;
	static volatile int64_t t55 = 1LL;

	t55 = ((x237/x238)^(x239&x240));

	if (t55 != -30385443LL) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x241 = -1LL;
	static volatile uint32_t x242 = UINT32_MAX;
	uint8_t x243 = 123U;
	int64_t x244 = INT64_MAX;
	int64_t t56 = 7873LL;

	t56 = ((x241/x242)^(x243&x244));

	if (t56 != 123LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x245 = 1948U;
	uint16_t x246 = 1U;
	static uint8_t x247 = 61U;
	uint8_t x248 = 1U;
	volatile uint32_t t57 = 54095U;

	t57 = ((x245/x246)^(x247&x248));

	if (t57 != 1949U) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x249 = -269221300031015739LL;
	static int16_t x251 = INT16_MAX;
	int64_t x252 = -2772113928LL;

	t58 = ((x249/x250)^(x251&x252));

	if (t58 != 26104LLU) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x253 = UINT16_MAX;
	static uint8_t x254 = 4U;

	t59 = ((x253/x254)^(x255&x256));

	if (t59 != 9223372036854792191LLU) { NG(); } else { ; }
	
}

void f60(void) {


	t60 = ((x257/x258)^(x259&x260));

	if (t60 != -65026) { NG(); } else { ; }
	
}

void f61(void) {
	static int64_t x261 = 4047513654LL;
	volatile int16_t x262 = INT16_MIN;
	int16_t x263 = 816;
	uint32_t x264 = 2U;
	volatile int64_t t61 = -1706762317563818LL;

	t61 = ((x261/x262)^(x263&x264));

	if (t61 != -123520LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x270 = INT16_MIN;
	static int8_t x272 = INT8_MIN;

	t62 = ((x269/x270)^(x271&x272));

	if (t62 != 65664) { NG(); } else { ; }
	
}

void f63(void) {
	uint32_t x273 = 101U;
	volatile int64_t x274 = 81566659LL;
	int64_t x275 = INT64_MAX;
	int64_t x276 = 49925240311831280LL;
	static volatile int64_t t63 = -1LL;

	t63 = ((x273/x274)^(x275&x276));

	if (t63 != 49925240311831280LL) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x277 = -1;
	uint64_t x278 = 255730010394LLU;
	volatile uint8_t x279 = 3U;

	t64 = ((x277/x278)^(x279&x280));

	if (t64 != 72133669LLU) { NG(); } else { ; }
	
}

void f65(void) {
	static volatile int8_t x281 = INT8_MIN;
	int8_t x282 = 2;
	int8_t x283 = INT8_MAX;
	int64_t x284 = INT64_MIN;
	int64_t t65 = -484693156266044LL;

	t65 = ((x281/x282)^(x283&x284));

	if (t65 != -64LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x286 = UINT16_MAX;
	int16_t x287 = -3;
	int8_t x288 = INT8_MAX;
	int32_t t66 = -29;

	t66 = ((x285/x286)^(x287&x288));

	if (t66 != 32893) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x290 = INT8_MAX;
	static uint64_t t67 = 19769602LLU;

	t67 = ((x289/x290)^(x291&x292));

	if (t67 != 234468490176744LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x293 = 0LL;
	static volatile int8_t x295 = INT8_MIN;
	static volatile int8_t x296 = 1;
	volatile int64_t t68 = -1208LL;

	t68 = ((x293/x294)^(x295&x296));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	int32_t x297 = 0;
	int32_t x298 = INT32_MIN;
	volatile int16_t x299 = -7991;
	uint8_t x300 = 31U;
	int32_t t69 = 260781391;

	t69 = ((x297/x298)^(x299&x300));

	if (t69 != 9) { NG(); } else { ; }
	
}

void f70(void) {
	static int8_t x301 = -1;
	int16_t x302 = INT16_MIN;
	int32_t x304 = INT32_MIN;
	volatile uint64_t t70 = 136937361LLU;

	t70 = ((x301/x302)^(x303&x304));

	if (t70 != 47820949705195520LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x305 = INT16_MIN;
	int64_t x306 = INT64_MIN;
	int64_t x307 = INT64_MIN;
	int64_t t71 = -1617265034066995498LL;

	t71 = ((x305/x306)^(x307&x308));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x309 = UINT8_MAX;
	static int8_t x310 = INT8_MIN;
	static int32_t x311 = INT32_MIN;
	static uint64_t t72 = UINT64_MAX;

	t72 = ((x309/x310)^(x311&x312));

	if (t72 != UINT64_MAX) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x313 = 1;
	volatile uint16_t x314 = UINT16_MAX;
	int16_t x315 = INT16_MAX;
	volatile int8_t x316 = -1;
	volatile int32_t t73 = -4876;

	t73 = ((x313/x314)^(x315&x316));

	if (t73 != 32767) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x317 = 668;
	static int32_t x318 = INT32_MIN;
	uint16_t x319 = 5U;
	int16_t x320 = INT16_MAX;
	int32_t t74 = 321632;

	t74 = ((x317/x318)^(x319&x320));

	if (t74 != 5) { NG(); } else { ; }
	
}

void f75(void) {
	volatile int8_t x321 = -1;
	int8_t x322 = INT8_MIN;
	uint16_t x323 = UINT16_MAX;
	static int64_t x324 = -15885812392LL;
	static volatile int64_t t75 = -1381253865686LL;

	t75 = ((x321/x322)^(x323&x324));

	if (t75 != 48472LL) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x325 = INT16_MIN;
	int8_t x326 = 3;
	static int32_t x327 = INT32_MIN;
	volatile int32_t t76 = -29;

	t76 = ((x325/x326)^(x327&x328));

	if (t76 != -10922) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x331 = INT16_MAX;
	volatile int8_t x332 = 1;

	t77 = ((x329/x330)^(x331&x332));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x334 = INT32_MAX;
	uint32_t x335 = 4126020U;
	int8_t x336 = 1;
	uint64_t t78 = 839361199468198LLU;

	t78 = ((x333/x334)^(x335&x336));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int16_t x339 = -1;
	int64_t x340 = -4483244070842334LL;
	int64_t t79 = 238820455885626LL;

	t79 = ((x337/x338)^(x339&x340));

	if (t79 != -4483244070842334LL) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x341 = -27410;
	uint16_t x342 = 140U;
	static int64_t x343 = -1LL;
	int64_t x344 = -17614726498883438LL;
	int64_t t80 = 2365850LL;

	t80 = ((x341/x342)^(x343&x344));

	if (t80 != 17614726498883503LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x347 = INT64_MIN;
	int8_t x348 = INT8_MIN;
	volatile int64_t t81 = INT64_MIN;

	t81 = ((x345/x346)^(x347&x348));

	if (t81 != INT64_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	int64_t x349 = INT64_MAX;

	t82 = ((x349/x350)^(x351&x352));

	if (t82 != -36170085859331254LL) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x353 = 433800706359LL;
	int16_t x354 = -1;
	volatile int8_t x356 = INT8_MAX;
	int64_t t83 = 0LL;

	t83 = ((x353/x354)^(x355&x356));

	if (t83 != -433800706359LL) { NG(); } else { ; }
	
}

void f84(void) {
	static int64_t x357 = INT64_MIN;
	volatile int16_t x358 = INT16_MIN;
	volatile uint8_t x360 = 54U;

	t84 = ((x357/x358)^(x359&x360));

	if (t84 != 281474976710674LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x365 = INT16_MIN;
	uint8_t x366 = 41U;
	int16_t x367 = 0;
	int64_t t85 = -544453329738LL;

	t85 = ((x365/x366)^(x367&x368));

	if (t85 != -799LL) { NG(); } else { ; }
	
}

void f86(void) {
	static int16_t x369 = -1;
	int32_t x370 = -1;
	int32_t x372 = -1;
	int64_t t86 = -12476071629263398LL;

	t86 = ((x369/x370)^(x371&x372));

	if (t86 != -9223372036854775807LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int8_t x373 = -1;
	int32_t x374 = INT32_MIN;
	volatile int32_t x376 = INT32_MIN;
	volatile int64_t t87 = 46233282895LL;

	t87 = ((x373/x374)^(x375&x376));

	if (t87 != -2147483648LL) { NG(); } else { ; }
	
}

void f88(void) {
	int8_t x377 = -1;
	int8_t x380 = 52;

	t88 = ((x377/x378)^(x379&x380));

	if (t88 != 16) { NG(); } else { ; }
	
}

void f89(void) {
	static uint8_t x381 = UINT8_MAX;
	int64_t x382 = INT64_MAX;
	int16_t x383 = INT16_MIN;
	int16_t x384 = INT16_MIN;
	static volatile int64_t t89 = -181636556742993410LL;

	t89 = ((x381/x382)^(x383&x384));

	if (t89 != -32768LL) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int32_t x385 = 24307984;
	uint8_t x386 = UINT8_MAX;

	t90 = ((x385/x386)^(x387&x388));

	if (t90 != 95325) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x389 = -1;
	static int64_t x390 = INT64_MIN;
	int32_t x391 = INT32_MIN;
	int16_t x392 = INT16_MIN;

	t91 = ((x389/x390)^(x391&x392));

	if (t91 != -2147483648LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x395 = UINT16_MAX;

	t92 = ((x393/x394)^(x395&x396));

	if (t92 != 255) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x397 = 1356LL;
	static uint16_t x399 = UINT16_MAX;
	int64_t x400 = 1LL;
	static int64_t t93 = -1LL;

	t93 = ((x397/x398)^(x399&x400));

	if (t93 != 1357LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint32_t x401 = UINT32_MAX;
	int8_t x403 = INT8_MIN;
	uint8_t x404 = 8U;

	t94 = ((x401/x402)^(x403&x404));

	if (t94 != 6478080U) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x405 = -1LL;
	static uint8_t x406 = UINT8_MAX;
	int8_t x407 = -1;
	int32_t x408 = INT32_MAX;
	static int64_t t95 = -229920354093608906LL;

	t95 = ((x405/x406)^(x407&x408));

	if (t95 != 2147483647LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x409 = 16255056167LL;
	int16_t x410 = INT16_MAX;
	volatile int32_t x412 = INT32_MIN;
	volatile int64_t t96 = 20LL;

	t96 = ((x409/x410)^(x411&x412));

	if (t96 != 496080LL) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x413 = 24;
	int8_t x414 = INT8_MIN;
	uint8_t x415 = UINT8_MAX;
	int8_t x416 = INT8_MIN;
	static int32_t t97 = 49;

	t97 = ((x413/x414)^(x415&x416));

	if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x417 = INT8_MAX;
	int64_t x418 = INT64_MIN;
	uint64_t x419 = 2173790LLU;
	int32_t x420 = INT32_MIN;

	t98 = ((x417/x418)^(x419&x420));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x421 = 126019158082LLU;
	volatile uint8_t x422 = 2U;
	int8_t x424 = -1;

	t99 = ((x421/x422)^(x423&x424));

	if (t99 != 18446744010699972574LLU) { NG(); } else { ; }
	
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

