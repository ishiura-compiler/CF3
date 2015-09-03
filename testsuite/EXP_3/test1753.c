#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x5 = 324U;
static volatile int32_t x6 = INT32_MAX;
int32_t x8 = -1;
volatile uint16_t x11 = UINT16_MAX;
uint64_t x12 = 348249760LLU;
uint64_t t2 = 6284118089LLU;
int8_t x14 = -2;
volatile int8_t x15 = INT8_MIN;
static int32_t x23 = INT32_MIN;
uint64_t x24 = UINT64_MAX;
uint16_t x28 = 9441U;
volatile int32_t t6 = 18881220;
static uint16_t x30 = 1U;
volatile uint8_t x33 = 96U;
int32_t t8 = 629324;
uint8_t x47 = 3U;
int64_t x52 = INT64_MAX;
static int64_t x53 = -77188201LL;
int16_t x56 = INT16_MIN;
int8_t x59 = -7;
uint16_t x60 = 3U;
int64_t x61 = -1LL;
volatile uint16_t x62 = 62U;
uint64_t t16 = 2LLU;
uint8_t x70 = UINT8_MAX;
volatile uint16_t x71 = 1U;
int64_t x72 = 521611971386LL;
static volatile int64_t x74 = INT64_MIN;
static uint16_t x75 = UINT16_MAX;
uint64_t x76 = 20918160437LLU;
static volatile int32_t x77 = 88;
int64_t x82 = INT64_MIN;
int8_t x83 = -1;
int64_t x94 = -1LL;
int16_t x107 = -1;
uint32_t x109 = UINT32_MAX;
static volatile int8_t x114 = INT8_MIN;
int16_t x124 = INT16_MIN;
int8_t x129 = 1;
uint8_t x133 = 0U;
int32_t t33 = 1885;
volatile int64_t t35 = -778333908647574778LL;
volatile int8_t x153 = INT8_MIN;
uint32_t x161 = 1U;
int16_t x163 = INT16_MIN;
int64_t t40 = -13332LL;
uint16_t x168 = 45U;
static uint64_t t41 = 0LLU;
volatile int16_t x169 = -1;
static volatile uint16_t x171 = 27884U;
int16_t x174 = INT16_MAX;
int32_t x177 = INT32_MIN;
int64_t x181 = -326698333241LL;
int16_t x184 = INT16_MAX;
volatile int64_t t45 = 1159722235137535234LL;
uint8_t x185 = 20U;
volatile uint64_t x190 = UINT64_MAX;
static int16_t x191 = 74;
volatile uint8_t x192 = UINT8_MAX;
static int32_t x194 = INT32_MAX;
volatile int64_t t48 = -7775363335866LL;
int16_t x197 = INT16_MIN;
uint32_t t50 = 1U;
int8_t x224 = INT8_MIN;
int16_t x228 = INT16_MIN;
volatile uint32_t t56 = 71666695U;
static uint16_t x229 = 0U;
int16_t x235 = INT16_MIN;
int64_t x241 = INT64_MIN;
int8_t x243 = INT8_MIN;
uint8_t x252 = 124U;
volatile int32_t x256 = -7;
static int64_t x267 = INT64_MIN;
int16_t x269 = INT16_MIN;
uint64_t x271 = 1LLU;
uint32_t x274 = UINT32_MAX;
uint32_t t68 = 11U;
uint64_t x287 = 30343025LLU;
static uint64_t x288 = 937108727046858LLU;
static uint64_t t71 = 223LLU;
uint16_t x290 = 10740U;
volatile uint16_t x298 = UINT16_MAX;
volatile int32_t x309 = INT32_MIN;
static uint32_t x310 = 720752106U;
static int64_t x312 = INT64_MIN;
int8_t x316 = INT8_MAX;
int32_t x321 = INT32_MAX;
static volatile uint64_t t79 = 26LLU;
volatile int16_t x328 = -2;
volatile uint64_t t80 = 3501756936701LLU;
volatile int64_t t81 = 2238236LL;
uint16_t x337 = UINT16_MAX;
static volatile int64_t x339 = INT64_MAX;
int32_t x342 = INT32_MIN;
volatile int32_t t85 = 1;
static int16_t x354 = -111;
uint8_t x362 = 42U;
volatile int16_t x368 = 60;
int64_t t90 = -6680031LL;
static int8_t x369 = 0;
int64_t x373 = INT64_MAX;
volatile uint16_t x374 = 4U;
int64_t t92 = 56617571LL;
int64_t x378 = INT64_MIN;
volatile int64_t t93 = -55596LL;
static uint8_t x390 = 10U;
uint32_t x399 = UINT32_MAX;
int32_t x400 = INT32_MIN;
static volatile int64_t t98 = 552531496LL;
volatile int16_t x402 = 1;
int32_t x403 = 115552874;
volatile int32_t t99 = -1921;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int8_t x2 = INT8_MIN;
	static int8_t x3 = -1;
	volatile int64_t x4 = 10342353513685448LL;
	int64_t t0 = -1552218LL;

	t0 = ((x1%x2)&(x3&x4));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static uint32_t x7 = 92301364U;
	volatile uint32_t t1 = 0U;

	t1 = ((x5%x6)&(x7&x8));

	if (t1 != 4U) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = INT16_MAX;
	int32_t x10 = INT32_MIN;

	t2 = ((x9%x10)&(x11&x12));

	if (t2 != 24224LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint8_t x13 = 1U;
	uint64_t x16 = UINT64_MAX;
	volatile uint64_t t3 = 9LLU;

	t3 = ((x13%x14)&(x15&x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x17 = INT8_MIN;
	int16_t x18 = INT16_MIN;
	int64_t x19 = INT64_MIN;
	uint32_t x20 = 105313077U;
	volatile int64_t t4 = -1653559647564LL;

	t4 = ((x17%x18)&(x19&x20));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x21 = 64314205004LL;
	static int64_t x22 = -1LL;
	uint64_t t5 = 37218145869193LLU;

	t5 = ((x21%x22)&(x23&x24));

	if (t5 != 0LLU) { NG(); } else { ; }
	
}

void f6(void) {
	uint16_t x25 = UINT16_MAX;
	volatile int8_t x26 = -1;
	int16_t x27 = 659;

	t6 = ((x25%x26)&(x27&x28));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	uint32_t x31 = 69679U;
	int64_t x32 = INT64_MAX;
	int64_t t7 = 234LL;

	t7 = ((x29%x30)&(x31&x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x34 = 18U;
	int16_t x35 = INT16_MIN;
	int32_t x36 = -1;

	t8 = ((x33%x34)&(x35&x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x37 = INT16_MIN;
	int16_t x38 = -1;
	int8_t x39 = -12;
	volatile uint32_t x40 = 111644514U;
	static uint32_t t9 = 3807089U;

	t9 = ((x37%x38)&(x39&x40));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x41 = -12;
	int16_t x42 = -5161;
	uint8_t x43 = 1U;
	int64_t x44 = 1LL;
	volatile int64_t t10 = 32820145839LL;

	t10 = ((x41%x42)&(x43&x44));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x45 = UINT16_MAX;
	int32_t x46 = INT32_MIN;
	volatile int16_t x48 = INT16_MIN;
	int32_t t11 = 129144;

	t11 = ((x45%x46)&(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x49 = 7U;
	int64_t x50 = INT64_MAX;
	static volatile int32_t x51 = -1;
	int64_t t12 = 70024799542103218LL;

	t12 = ((x49%x50)&(x51&x52));

	if (t12 != 7LL) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x54 = INT8_MIN;
	int8_t x55 = INT8_MIN;
	int64_t t13 = 3LL;

	t13 = ((x53%x54)&(x55&x56));

	if (t13 != -32768LL) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint32_t x57 = 4U;
	int16_t x58 = INT16_MIN;
	static uint32_t t14 = 40U;

	t14 = ((x57%x58)&(x59&x60));

	if (t14 != 0U) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x63 = UINT16_MAX;
	int8_t x64 = -1;
	int64_t t15 = -615804766LL;

	t15 = ((x61%x62)&(x63&x64));

	if (t15 != 65535LL) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int16_t x65 = -6276;
	uint32_t x66 = UINT32_MAX;
	uint64_t x67 = 1393251LLU;
	int16_t x68 = INT16_MIN;

	t16 = ((x65%x66)&(x67&x68));

	if (t16 != 1376256LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x69 = UINT32_MAX;
	int64_t t17 = -212129LL;

	t17 = ((x69%x70)&(x71&x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x73 = INT64_MAX;
	uint64_t t18 = 26942511032244LLU;

	t18 = ((x73%x74)&(x75&x76));

	if (t18 != 52277LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x78 = -1;
	int8_t x79 = INT8_MIN;
	uint32_t x80 = UINT32_MAX;
	uint32_t t19 = 5U;

	t19 = ((x77%x78)&(x79&x80));

	if (t19 != 0U) { NG(); } else { ; }
	
}

void f20(void) {
	static int16_t x81 = -1;
	volatile int64_t x84 = -985035LL;
	int64_t t20 = 3668LL;

	t20 = ((x81%x82)&(x83&x84));

	if (t20 != -985035LL) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MAX;
	int8_t x86 = -1;
	int64_t x87 = INT64_MIN;
	uint64_t x88 = UINT64_MAX;
	static uint64_t t21 = 33905019824492801LLU;

	t21 = ((x85%x86)&(x87&x88));

	if (t21 != 0LLU) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int8_t x89 = -1;
	int64_t x90 = -36107754741295LL;
	uint16_t x91 = 961U;
	static int16_t x92 = INT16_MIN;
	int64_t t22 = -29461969897LL;

	t22 = ((x89%x90)&(x91&x92));

	if (t22 != 0LL) { NG(); } else { ; }
	
}

void f23(void) {
	static int16_t x93 = INT16_MIN;
	uint64_t x95 = UINT64_MAX;
	int32_t x96 = 1;
	uint64_t t23 = 994104698058473500LLU;

	t23 = ((x93%x94)&(x95&x96));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int16_t x97 = -1;
	static int64_t x98 = INT64_MIN;
	volatile int8_t x99 = -1;
	int16_t x100 = INT16_MIN;
	volatile int64_t t24 = -304894549LL;

	t24 = ((x97%x98)&(x99&x100));

	if (t24 != -32768LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int32_t x101 = INT32_MAX;
	uint64_t x102 = 159017841LLU;
	static int8_t x103 = INT8_MIN;
	volatile uint8_t x104 = UINT8_MAX;
	volatile uint64_t t25 = 7887629251740LLU;

	t25 = ((x101%x102)&(x103&x104));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	volatile int8_t x105 = 15;
	volatile int32_t x106 = -1;
	int8_t x108 = -1;
	int32_t t26 = -27;

	t26 = ((x105%x106)&(x107&x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint32_t x110 = 44189922U;
	int16_t x111 = INT16_MAX;
	int8_t x112 = 3;
	uint32_t t27 = 3567897U;

	t27 = ((x109%x110)&(x111&x112));

	if (t27 != 1U) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x113 = INT16_MIN;
	volatile int16_t x115 = 27;
	uint8_t x116 = 24U;
	volatile int32_t t28 = -214403;

	t28 = ((x113%x114)&(x115&x116));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x117 = -46876165;
	int16_t x118 = -1;
	uint8_t x119 = 3U;
	volatile uint16_t x120 = 46U;
	volatile int32_t t29 = 0;

	t29 = ((x117%x118)&(x119&x120));

	if (t29 != 0) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x121 = -1;
	static int64_t x122 = INT64_MIN;
	uint32_t x123 = 47049114U;
	int64_t t30 = 224544LL;

	t30 = ((x121%x122)&(x123&x124));

	if (t30 != 47022080LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int16_t x125 = INT16_MIN;
	volatile int8_t x126 = -2;
	int16_t x127 = INT16_MIN;
	uint16_t x128 = 22U;
	static int32_t t31 = -50;

	t31 = ((x125%x126)&(x127&x128));

	if (t31 != 0) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x130 = 5727511;
	volatile int16_t x131 = INT16_MIN;
	int32_t x132 = -1;
	volatile int32_t t32 = -14347;

	t32 = ((x129%x130)&(x131&x132));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	static int16_t x134 = -1;
	int16_t x135 = 3;
	int8_t x136 = INT8_MAX;

	t33 = ((x133%x134)&(x135&x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MIN;
	volatile uint16_t x138 = 29841U;
	int8_t x139 = -1;
	uint32_t x140 = 67U;
	static volatile uint32_t t34 = 4U;

	t34 = ((x137%x138)&(x139&x140));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	volatile uint16_t x141 = 386U;
	int64_t x142 = -128703LL;
	static int64_t x143 = 447LL;
	volatile int16_t x144 = -1061;

	t35 = ((x141%x142)&(x143&x144));

	if (t35 != 386LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -1;
	uint16_t x146 = UINT16_MAX;
	volatile uint8_t x147 = 56U;
	int8_t x148 = INT8_MAX;
	volatile int32_t t36 = -255702;

	t36 = ((x145%x146)&(x147&x148));

	if (t36 != 56) { NG(); } else { ; }
	
}

void f37(void) {
	static volatile uint16_t x149 = 3873U;
	int64_t x150 = INT64_MIN;
	int16_t x151 = INT16_MIN;
	static uint16_t x152 = UINT16_MAX;
	int64_t t37 = -575937LL;

	t37 = ((x149%x150)&(x151&x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x154 = INT8_MAX;
	static int32_t x155 = 322;
	static int8_t x156 = INT8_MIN;
	static volatile int32_t t38 = 13219;

	t38 = ((x153%x154)&(x155&x156));

	if (t38 != 256) { NG(); } else { ; }
	
}

void f39(void) {
	static volatile uint16_t x157 = UINT16_MAX;
	int16_t x158 = INT16_MAX;
	uint8_t x159 = 5U;
	uint8_t x160 = UINT8_MAX;
	int32_t t39 = 27;

	t39 = ((x157%x158)&(x159&x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	static uint16_t x162 = 762U;
	int64_t x164 = INT64_MAX;

	t40 = ((x161%x162)&(x163&x164));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static uint8_t x165 = UINT8_MAX;
	int16_t x166 = INT16_MIN;
	volatile uint64_t x167 = 9306LLU;

	t41 = ((x165%x166)&(x167&x168));

	if (t41 != 8LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x170 = 75201209U;
	int16_t x172 = -1;
	uint32_t t42 = 112599998U;

	t42 = ((x169%x170)&(x171&x172));

	if (t42 != 11468U) { NG(); } else { ; }
	
}

void f43(void) {
	uint32_t x173 = 54220764U;
	static int64_t x175 = -535973249065554422LL;
	int64_t x176 = INT64_MAX;
	static volatile int64_t t43 = -45025691056LL;

	t43 = ((x173%x174)&(x175&x176));

	if (t43 != 19970LL) { NG(); } else { ; }
	
}

void f44(void) {
	static int64_t x178 = INT64_MAX;
	int8_t x179 = INT8_MIN;
	int64_t x180 = INT64_MIN;
	volatile int64_t t44 = INT64_MIN;

	t44 = ((x177%x178)&(x179&x180));

	if (t44 != INT64_MIN) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x182 = INT16_MIN;
	static int32_t x183 = -1;

	t45 = ((x181%x182)&(x183&x184));

	if (t45 != 3015LL) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x186 = INT16_MAX;
	uint8_t x187 = UINT8_MAX;
	static int64_t x188 = INT64_MIN;
	volatile int64_t t46 = 133782578LL;

	t46 = ((x185%x186)&(x187&x188));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint64_t x189 = 841137511LLU;
	uint64_t t47 = 52136LLU;

	t47 = ((x189%x190)&(x191&x192));

	if (t47 != 66LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int8_t x193 = 7;
	int8_t x195 = INT8_MIN;
	int64_t x196 = -8308189437835LL;

	t48 = ((x193%x194)&(x195&x196));

	if (t48 != 0LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x198 = INT32_MIN;
	int8_t x199 = INT8_MIN;
	volatile int16_t x200 = INT16_MAX;
	volatile int32_t t49 = 26;

	t49 = ((x197%x198)&(x199&x200));

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = -7;
	volatile int8_t x202 = INT8_MAX;
	uint32_t x203 = 24132U;
	int32_t x204 = -1;

	t50 = ((x201%x202)&(x203&x204));

	if (t50 != 24128U) { NG(); } else { ; }
	
}

void f51(void) {
	static uint16_t x205 = UINT16_MAX;
	int16_t x206 = INT16_MAX;
	static int16_t x207 = INT16_MIN;
	int16_t x208 = INT16_MAX;
	volatile int32_t t51 = -30;

	t51 = ((x205%x206)&(x207&x208));

	if (t51 != 0) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x209 = INT8_MIN;
	int16_t x210 = INT16_MIN;
	uint32_t x211 = 12402U;
	int64_t x212 = INT64_MAX;
	volatile int64_t t52 = -2LL;

	t52 = ((x209%x210)&(x211&x212));

	if (t52 != 12288LL) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x213 = INT64_MIN;
	int64_t x214 = INT64_MIN;
	static int8_t x215 = INT8_MAX;
	static int8_t x216 = 9;
	volatile int64_t t53 = -5444172752984417LL;

	t53 = ((x213%x214)&(x215&x216));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int64_t x217 = -1LL;
	uint32_t x218 = 536382836U;
	static int64_t x219 = INT64_MAX;
	static int32_t x220 = 515389348;
	volatile int64_t t54 = -101LL;

	t54 = ((x217%x218)&(x219&x220));

	if (t54 != 515389348LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x221 = 3789U;
	int16_t x222 = INT16_MIN;
	int32_t x223 = INT32_MAX;
	volatile uint32_t t55 = 87U;

	t55 = ((x221%x222)&(x223&x224));

	if (t55 != 3712U) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x225 = UINT16_MAX;
	volatile int16_t x226 = INT16_MIN;
	volatile uint32_t x227 = 9767U;

	t56 = ((x225%x226)&(x227&x228));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int8_t x230 = INT8_MIN;
	volatile int64_t x231 = INT64_MIN;
	int64_t x232 = -672518536549LL;
	volatile int64_t t57 = -20LL;

	t57 = ((x229%x230)&(x231&x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	static uint8_t x233 = UINT8_MAX;
	volatile int8_t x234 = INT8_MIN;
	int16_t x236 = INT16_MIN;
	volatile int32_t t58 = 211345;

	t58 = ((x233%x234)&(x235&x236));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint8_t x237 = 58U;
	uint64_t x238 = UINT64_MAX;
	volatile int8_t x239 = INT8_MIN;
	uint64_t x240 = UINT64_MAX;
	uint64_t t59 = 2587150LLU;

	t59 = ((x237%x238)&(x239&x240));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static int32_t x242 = -1;
	static volatile int16_t x244 = INT16_MIN;
	volatile int64_t t60 = -6LL;

	t60 = ((x241%x242)&(x243&x244));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int32_t x245 = INT32_MIN;
	int64_t x246 = INT64_MAX;
	volatile int64_t x247 = INT64_MIN;
	uint16_t x248 = 0U;
	int64_t t61 = -215934793317930505LL;

	t61 = ((x245%x246)&(x247&x248));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x249 = -4052;
	static int8_t x250 = INT8_MAX;
	volatile int16_t x251 = -6165;
	int32_t t62 = -23;

	t62 = ((x249%x250)&(x251&x252));

	if (t62 != 8) { NG(); } else { ; }
	
}

void f63(void) {
	uint16_t x253 = 317U;
	volatile int16_t x254 = INT16_MIN;
	static int64_t x255 = 6LL;
	volatile int64_t t63 = -1485581556957748319LL;

	t63 = ((x253%x254)&(x255&x256));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	volatile int64_t x257 = INT64_MIN;
	int8_t x258 = INT8_MIN;
	int64_t x259 = -628058983217890658LL;
	volatile uint8_t x260 = UINT8_MAX;
	volatile int64_t t64 = -1778LL;

	t64 = ((x257%x258)&(x259&x260));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = 0;
	static int8_t x262 = 29;
	int16_t x263 = INT16_MAX;
	int64_t x264 = -15591LL;
	static int64_t t65 = 9128907610016LL;

	t65 = ((x261%x262)&(x263&x264));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile uint32_t x265 = 69U;
	int32_t x266 = 219860300;
	int8_t x268 = INT8_MIN;
	int64_t t66 = 837027860684LL;

	t66 = ((x265%x266)&(x267&x268));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	int8_t x270 = -1;
	volatile int16_t x272 = 4956;
	uint64_t t67 = 419235909518374LLU;

	t67 = ((x269%x270)&(x271&x272));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int16_t x273 = 5805;
	volatile int8_t x275 = INT8_MIN;
	int16_t x276 = INT16_MAX;

	t68 = ((x273%x274)&(x275&x276));

	if (t68 != 5760U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x277 = 0;
	volatile int16_t x278 = INT16_MIN;
	volatile uint8_t x279 = 24U;
	int32_t x280 = INT32_MAX;
	volatile int32_t t69 = 54148625;

	t69 = ((x277%x278)&(x279&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x281 = 2U;
	volatile uint32_t x282 = 210883159U;
	static int32_t x283 = -56;
	uint16_t x284 = 3U;
	volatile uint32_t t70 = 1601U;

	t70 = ((x281%x282)&(x283&x284));

	if (t70 != 0U) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint32_t x285 = 110U;
	int8_t x286 = -20;

	t71 = ((x285%x286)&(x287&x288));

	if (t71 != 64LLU) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x289 = 797;
	volatile uint64_t x291 = 11968134018542LLU;
	int16_t x292 = INT16_MIN;
	uint64_t t72 = 58585979837LLU;

	t72 = ((x289%x290)&(x291&x292));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	volatile uint8_t x293 = UINT8_MAX;
	uint16_t x294 = 4118U;
	int64_t x295 = -560253206507515LL;
	static volatile int8_t x296 = INT8_MIN;
	volatile int64_t t73 = 329927917844151887LL;

	t73 = ((x293%x294)&(x295&x296));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x297 = 1;
	int8_t x299 = -1;
	uint32_t x300 = 96655U;
	volatile uint32_t t74 = 12U;

	t74 = ((x297%x298)&(x299&x300));

	if (t74 != 1U) { NG(); } else { ; }
	
}

void f75(void) {
	volatile uint16_t x301 = 13U;
	static volatile int8_t x302 = INT8_MIN;
	int64_t x303 = INT64_MAX;
	uint32_t x304 = 1523244755U;
	volatile int64_t t75 = -224758987LL;

	t75 = ((x301%x302)&(x303&x304));

	if (t75 != 1LL) { NG(); } else { ; }
	
}

void f76(void) {
	int32_t x305 = -16031012;
	int8_t x306 = -3;
	uint64_t x307 = UINT64_MAX;
	uint8_t x308 = 9U;
	volatile uint64_t t76 = 1LLU;

	t76 = ((x305%x306)&(x307&x308));

	if (t76 != 8LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int64_t x311 = 96655LL;
	int64_t t77 = -1537186LL;

	t77 = ((x309%x310)&(x311&x312));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x313 = 112;
	int64_t x314 = 1879514492LL;
	uint64_t x315 = 57435646805271LLU;
	volatile uint64_t t78 = 785LLU;

	t78 = ((x313%x314)&(x315&x316));

	if (t78 != 16LLU) { NG(); } else { ; }
	
}

void f79(void) {
	int8_t x322 = INT8_MIN;
	static uint64_t x323 = UINT64_MAX;
	int64_t x324 = INT64_MIN;

	t79 = ((x321%x322)&(x323&x324));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x325 = INT8_MIN;
	int16_t x326 = INT16_MIN;
	uint64_t x327 = 1132535312351846622LLU;

	t80 = ((x325%x326)&(x327&x328));

	if (t80 != 1132535312351846528LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int16_t x329 = 5;
	static int32_t x330 = INT32_MIN;
	volatile int64_t x331 = INT64_MIN;
	uint16_t x332 = 56U;

	t81 = ((x329%x330)&(x331&x332));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x333 = INT32_MIN;
	uint8_t x334 = 1U;
	int16_t x335 = INT16_MIN;
	int16_t x336 = -1;
	int32_t t82 = -461581781;

	t82 = ((x333%x334)&(x335&x336));

	if (t82 != 0) { NG(); } else { ; }
	
}

void f83(void) {
	static volatile uint64_t x338 = 12074304949381LLU;
	int8_t x340 = INT8_MIN;
	uint64_t t83 = 214810LLU;

	t83 = ((x337%x338)&(x339&x340));

	if (t83 != 65408LLU) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x341 = UINT32_MAX;
	uint16_t x343 = 15U;
	int16_t x344 = INT16_MIN;
	uint32_t t84 = 308142479U;

	t84 = ((x341%x342)&(x343&x344));

	if (t84 != 0U) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x345 = INT8_MIN;
	volatile int8_t x346 = INT8_MIN;
	int16_t x347 = INT16_MAX;
	volatile int8_t x348 = 24;

	t85 = ((x345%x346)&(x347&x348));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x349 = UINT16_MAX;
	int16_t x350 = INT16_MIN;
	static int32_t x351 = INT32_MIN;
	int8_t x352 = INT8_MIN;
	static volatile int32_t t86 = 1;

	t86 = ((x349%x350)&(x351&x352));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	int16_t x353 = -1;
	static uint8_t x355 = UINT8_MAX;
	int16_t x356 = INT16_MAX;
	volatile int32_t t87 = 225;

	t87 = ((x353%x354)&(x355&x356));

	if (t87 != 255) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int64_t x357 = INT64_MIN;
	uint64_t x358 = 974LLU;
	uint8_t x359 = UINT8_MAX;
	static int8_t x360 = -1;
	volatile uint64_t t88 = 250515595806476584LLU;

	t88 = ((x357%x358)&(x359&x360));

	if (t88 != 118LLU) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x361 = INT32_MIN;
	volatile uint64_t x363 = UINT64_MAX;
	int32_t x364 = INT32_MIN;
	uint64_t t89 = 3316818LLU;

	t89 = ((x361%x362)&(x363&x364));

	if (t89 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f90(void) {
	volatile uint16_t x365 = 2U;
	uint8_t x366 = 2U;
	static int64_t x367 = INT64_MAX;

	t90 = ((x365%x366)&(x367&x368));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint8_t x370 = 14U;
	int64_t x371 = INT64_MAX;
	volatile int16_t x372 = INT16_MAX;
	volatile int64_t t91 = 206LL;

	t91 = ((x369%x370)&(x371&x372));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x375 = -17;
	int32_t x376 = INT32_MIN;

	t92 = ((x373%x374)&(x375&x376));

	if (t92 != 0LL) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int32_t x377 = -1;
	static int16_t x379 = -45;
	int64_t x380 = INT64_MAX;

	t93 = ((x377%x378)&(x379&x380));

	if (t93 != 9223372036854775763LL) { NG(); } else { ; }
	
}

void f94(void) {
	static uint8_t x381 = 1U;
	uint64_t x382 = 47574LLU;
	static int8_t x383 = INT8_MAX;
	int16_t x384 = INT16_MAX;
	volatile uint64_t t94 = 201836848483946LLU;

	t94 = ((x381%x382)&(x383&x384));

	if (t94 != 1LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x385 = 6U;
	int8_t x386 = INT8_MIN;
	int64_t x387 = INT64_MIN;
	volatile int64_t x388 = -1LL;
	static volatile int64_t t95 = -7368026042262LL;

	t95 = ((x385%x386)&(x387&x388));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x389 = -1LL;
	int8_t x391 = INT8_MAX;
	int32_t x392 = -1;
	volatile int64_t t96 = 398567304547448LL;

	t96 = ((x389%x390)&(x391&x392));

	if (t96 != 127LL) { NG(); } else { ; }
	
}

void f97(void) {
	static int32_t x393 = 48;
	int16_t x394 = 3;
	int32_t x395 = INT32_MAX;
	int16_t x396 = INT16_MIN;
	volatile int32_t t97 = -89010812;

	t97 = ((x393%x394)&(x395&x396));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int64_t x397 = INT64_MAX;
	static volatile uint8_t x398 = UINT8_MAX;

	t98 = ((x397%x398)&(x399&x400));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x401 = INT32_MIN;
	static int16_t x404 = INT16_MAX;

	t99 = ((x401%x402)&(x403&x404));

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

