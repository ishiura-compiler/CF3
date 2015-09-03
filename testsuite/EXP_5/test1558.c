#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static volatile uint16_t x17 = UINT16_MAX;
static int32_t x22 = -1;
volatile int64_t x24 = -1LL;
int64_t x30 = INT64_MAX;
static volatile int64_t x34 = 20347LL;
int32_t x35 = INT32_MIN;
uint8_t x38 = UINT8_MAX;
int32_t x40 = INT32_MAX;
volatile int32_t t11 = -14;
volatile uint16_t x49 = UINT16_MAX;
static uint64_t x54 = 173560752067LLU;
static int64_t x55 = INT64_MAX;
int8_t x63 = INT8_MIN;
uint8_t x64 = 2U;
volatile uint32_t t15 = 3U;
static int32_t t16 = -1030757;
static uint32_t x69 = UINT32_MAX;
int64_t x72 = INT64_MIN;
int64_t t17 = 29LL;
uint8_t x75 = UINT8_MAX;
int64_t x80 = -595399056274549611LL;
static int32_t t22 = -317;
int16_t x95 = INT16_MIN;
volatile int32_t t24 = 55;
static volatile uint64_t t27 = 29042LLU;
static int16_t x119 = -1;
int64_t x121 = -14199125487004LL;
volatile int8_t x129 = INT8_MIN;
int8_t x132 = -1;
static int32_t t32 = 19822362;
static volatile int16_t x135 = INT16_MIN;
int64_t x138 = 5050679460869LL;
volatile int8_t x141 = INT8_MIN;
int32_t x146 = -3620424;
int8_t x150 = INT8_MIN;
int16_t x152 = 304;
uint64_t x154 = 134LLU;
int16_t x157 = INT16_MAX;
static int32_t t39 = -2;
uint8_t x162 = UINT8_MAX;
static int8_t x164 = -1;
int8_t x168 = INT8_MIN;
int8_t x172 = INT8_MAX;
static volatile int32_t t42 = 37497;
volatile int8_t x182 = INT8_MAX;
int64_t x187 = INT64_MAX;
int32_t x188 = INT32_MIN;
volatile int32_t t46 = 1201131;
int16_t x190 = -1821;
static volatile int8_t x193 = INT8_MIN;
static volatile uint32_t x196 = 97U;
uint16_t x201 = UINT16_MAX;
int32_t t50 = -57;
uint32_t t51 = 19U;
volatile int32_t x209 = INT32_MIN;
int32_t x217 = 129747656;
int8_t x225 = -1;
int8_t x231 = INT8_MIN;
int16_t x233 = -1;
int32_t x241 = INT32_MIN;
volatile int32_t x244 = -1;
int32_t x257 = -25;
volatile int32_t x259 = 4;
int32_t t64 = 3;
int8_t x264 = -8;
volatile int64_t t65 = INT64_MIN;
volatile uint16_t x265 = 21U;
uint16_t x271 = 0U;
volatile int32_t t67 = -12804;
int64_t x278 = -1LL;
int8_t x280 = INT8_MIN;
int32_t x282 = -1;
static volatile int32_t t70 = -43024458;
static int64_t x287 = INT64_MIN;
int16_t x291 = INT16_MIN;
static int64_t x305 = 1735977465657LL;
static int64_t x306 = INT64_MIN;
static uint64_t x309 = UINT64_MAX;
static uint64_t t77 = 691501359733443927LLU;
uint64_t t78 = 70LLU;
uint16_t x321 = 302U;
volatile int32_t t80 = 30870787;
uint64_t x327 = UINT64_MAX;
static volatile uint64_t t81 = 19802LLU;
int8_t x329 = -8;
volatile int32_t x340 = INT32_MIN;
volatile int32_t t84 = INT32_MIN;
int16_t x343 = 9681;
static int16_t x344 = INT16_MIN;
int64_t x346 = -555051091971563550LL;
static int16_t x355 = INT16_MAX;
int16_t x359 = 1434;
int8_t x360 = INT8_MAX;
uint64_t x363 = 4031LLU;
volatile int64_t t91 = -27071439447LL;
uint16_t x371 = 271U;
volatile int8_t x379 = -28;
int32_t t94 = 1655507;
volatile uint16_t x388 = 160U;
volatile uint64_t x389 = 50260303766LLU;
static uint64_t x399 = UINT64_MAX;


void f0(void) {
	int8_t x1 = 1;
	int8_t x2 = -17;
	int8_t x3 = -1;
	int8_t x4 = INT8_MIN;
	static volatile int32_t t0 = 13;

	t0 = (x1&((x2<=x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = 3153;
	uint64_t x6 = 30LLU;
	volatile int16_t x7 = -5;
	static int16_t x8 = -1;
	volatile int32_t t1 = 21360;

	t1 = (x5&((x6<=x7)*x8));

	if (t1 != 3153) { NG(); } else { ; }
	
}

void f2(void) {
	static int32_t x9 = INT32_MIN;
	int64_t x10 = INT64_MAX;
	uint16_t x11 = 28263U;
	int32_t x12 = INT32_MIN;
	volatile int32_t t2 = -6;

	t2 = (x9&((x10<=x11)*x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile uint16_t x13 = UINT16_MAX;
	int64_t x14 = INT64_MIN;
	uint8_t x15 = 52U;
	static volatile uint16_t x16 = UINT16_MAX;
	static volatile int32_t t3 = 296118;

	t3 = (x13&((x14<=x15)*x16));

	if (t3 != 65535) { NG(); } else { ; }
	
}

void f4(void) {
	volatile int8_t x18 = -1;
	uint32_t x19 = UINT32_MAX;
	int8_t x20 = -1;
	volatile int32_t t4 = 4329;

	t4 = (x17&((x18<=x19)*x20));

	if (t4 != 65535) { NG(); } else { ; }
	
}

void f5(void) {
	static volatile int32_t x21 = -1;
	uint32_t x23 = 2U;
	static volatile int64_t t5 = 19959766024797363LL;

	t5 = (x21&((x22<=x23)*x24));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x25 = UINT32_MAX;
	static int16_t x26 = INT16_MAX;
	int32_t x27 = INT32_MIN;
	int8_t x28 = INT8_MAX;
	volatile uint32_t t6 = 982821452U;

	t6 = (x25&((x26<=x27)*x28));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	int64_t x29 = -1LL;
	uint8_t x31 = UINT8_MAX;
	int8_t x32 = -1;
	volatile int64_t t7 = 2286535400425771614LL;

	t7 = (x29&((x30<=x31)*x32));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	uint16_t x33 = 59U;
	int16_t x36 = INT16_MIN;
	int32_t t8 = 569839;

	t8 = (x33&((x34<=x35)*x36));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x37 = -1;
	int8_t x39 = INT8_MAX;
	int32_t t9 = -3399353;

	t9 = (x37&((x38<=x39)*x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int8_t x41 = -8;
	int16_t x42 = INT16_MAX;
	static int32_t x43 = -1;
	static int16_t x44 = INT16_MAX;
	static int32_t t10 = -129657;

	t10 = (x41&((x42<=x43)*x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	int16_t x45 = -1;
	int32_t x46 = INT32_MAX;
	int32_t x47 = INT32_MIN;
	int16_t x48 = INT16_MIN;

	t11 = (x45&((x46<=x47)*x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	uint32_t x50 = 4U;
	int64_t x51 = 23LL;
	volatile uint16_t x52 = 2826U;
	static int32_t t12 = 146235;

	t12 = (x49&((x50<=x51)*x52));

	if (t12 != 2826) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x53 = INT8_MAX;
	uint8_t x56 = 98U;
	int32_t t13 = 799535;

	t13 = (x53&((x54<=x55)*x56));

	if (t13 != 98) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x57 = -1;
	uint32_t x58 = 6291309U;
	int16_t x59 = -1;
	uint64_t x60 = 8635452069907LLU;
	volatile uint64_t t14 = 0LLU;

	t14 = (x57&((x58<=x59)*x60));

	if (t14 != 8635452069907LLU) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x61 = 2U;
	uint16_t x62 = 6417U;

	t15 = (x61&((x62<=x63)*x64));

	if (t15 != 0U) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	volatile int64_t x66 = -445LL;
	int16_t x67 = -43;
	uint8_t x68 = 56U;

	t16 = (x65&((x66<=x67)*x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	static int8_t x70 = 58;
	int32_t x71 = -1;

	t17 = (x69&((x70<=x71)*x72));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	static int64_t x73 = INT64_MAX;
	int16_t x74 = INT16_MIN;
	static volatile int32_t x76 = -638;
	static int64_t t18 = 32LL;

	t18 = (x73&((x74<=x75)*x76));

	if (t18 != 9223372036854775170LL) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = INT32_MAX;
	static volatile uint32_t x78 = 19278U;
	int32_t x79 = -2;
	volatile int64_t t19 = -1954859456353143057LL;

	t19 = (x77&((x78<=x79)*x80));

	if (t19 != 2133267605LL) { NG(); } else { ; }
	
}

void f20(void) {
	static int32_t x81 = -436921;
	int32_t x82 = INT32_MIN;
	int16_t x83 = INT16_MIN;
	int8_t x84 = INT8_MIN;
	volatile int32_t t20 = 95;

	t20 = (x81&((x82<=x83)*x84));

	if (t20 != -436992) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x85 = -1;
	uint16_t x86 = 34U;
	int16_t x87 = INT16_MAX;
	int16_t x88 = INT16_MIN;
	int32_t t21 = 1474219;

	t21 = (x85&((x86<=x87)*x88));

	if (t21 != -32768) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int8_t x89 = INT8_MAX;
	uint32_t x90 = 336U;
	volatile uint64_t x91 = 1489352456767472406LLU;
	int8_t x92 = 0;

	t22 = (x89&((x90<=x91)*x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x93 = -828;
	int32_t x94 = -1;
	int64_t x96 = INT64_MAX;
	int64_t t23 = 1195LL;

	t23 = (x93&((x94<=x95)*x96));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x97 = 14806;
	int32_t x98 = -1;
	int64_t x99 = INT64_MAX;
	int32_t x100 = -10524628;

	t24 = (x97&((x98<=x99)*x100));

	if (t24 != 10244) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x101 = -1;
	uint64_t x102 = 1825756852950507LLU;
	int64_t x103 = INT64_MIN;
	uint8_t x104 = UINT8_MAX;
	int32_t t25 = -1197322;

	t25 = (x101&((x102<=x103)*x104));

	if (t25 != 255) { NG(); } else { ; }
	
}

void f26(void) {
	static int8_t x105 = -1;
	uint16_t x106 = UINT16_MAX;
	uint16_t x107 = 3U;
	volatile int16_t x108 = INT16_MIN;
	volatile int32_t t26 = 134783119;

	t26 = (x105&((x106<=x107)*x108));

	if (t26 != 0) { NG(); } else { ; }
	
}

void f27(void) {
	uint64_t x109 = 1014941203LLU;
	volatile int64_t x110 = INT64_MAX;
	static int16_t x111 = 1244;
	volatile int8_t x112 = -1;

	t27 = (x109&((x110<=x111)*x112));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x113 = INT32_MAX;
	uint32_t x114 = 1178837340U;
	int32_t x115 = INT32_MIN;
	int32_t x116 = -1;
	volatile int32_t t28 = INT32_MAX;

	t28 = (x113&((x114<=x115)*x116));

	if (t28 != INT32_MAX) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x117 = UINT64_MAX;
	int8_t x118 = -1;
	static uint64_t x120 = UINT64_MAX;
	static uint64_t t29 = UINT64_MAX;

	t29 = (x117&((x118<=x119)*x120));

	if (t29 != UINT64_MAX) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	int8_t x123 = INT8_MIN;
	int8_t x124 = INT8_MIN;
	int64_t t30 = 177723840877020580LL;

	t30 = (x121&((x122<=x123)*x124));

	if (t30 != -14199125487104LL) { NG(); } else { ; }
	
}

void f31(void) {
	static int32_t x125 = INT32_MIN;
	volatile uint32_t x126 = 0U;
	uint16_t x127 = UINT16_MAX;
	int32_t x128 = INT32_MIN;
	int32_t t31 = INT32_MIN;

	t31 = (x125&((x126<=x127)*x128));

	if (t31 != INT32_MIN) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x130 = INT64_MIN;
	static int32_t x131 = INT32_MIN;

	t32 = (x129&((x130<=x131)*x132));

	if (t32 != -128) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x133 = -1;
	uint8_t x134 = 83U;
	volatile uint8_t x136 = UINT8_MAX;
	int32_t t33 = -2;

	t33 = (x133&((x134<=x135)*x136));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	int8_t x137 = INT8_MIN;
	int16_t x139 = -1;
	int32_t x140 = INT32_MIN;
	volatile int32_t t34 = -770399;

	t34 = (x137&((x138<=x139)*x140));

	if (t34 != 0) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x142 = 1U;
	uint8_t x143 = UINT8_MAX;
	int8_t x144 = INT8_MIN;
	volatile int32_t t35 = 1744;

	t35 = (x141&((x142<=x143)*x144));

	if (t35 != -128) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = -8;
	volatile int16_t x147 = 0;
	volatile int8_t x148 = 0;
	int32_t t36 = -65175;

	t36 = (x145&((x146<=x147)*x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	int64_t x149 = -46044628339LL;
	uint64_t x151 = 127541926184418LLU;
	int64_t t37 = -311532LL;

	t37 = (x149&((x150<=x151)*x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x153 = INT8_MAX;
	uint64_t x155 = 0LLU;
	uint16_t x156 = UINT16_MAX;
	int32_t t38 = -968502;

	t38 = (x153&((x154<=x155)*x156));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	int16_t x158 = -207;
	int8_t x159 = INT8_MIN;
	static volatile uint8_t x160 = 7U;

	t39 = (x157&((x158<=x159)*x160));

	if (t39 != 7) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x161 = -2342;
	int32_t x163 = -1;
	volatile int32_t t40 = -116881;

	t40 = (x161&((x162<=x163)*x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x165 = UINT64_MAX;
	int16_t x166 = INT16_MIN;
	int8_t x167 = -1;
	volatile uint64_t t41 = 28862859235LLU;

	t41 = (x165&((x166<=x167)*x168));

	if (t41 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x169 = -1;
	int16_t x170 = -1;
	uint8_t x171 = 56U;

	t42 = (x169&((x170<=x171)*x172));

	if (t42 != 127) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = 63854483;
	int64_t x174 = -1LL;
	int32_t x175 = INT32_MIN;
	volatile uint64_t x176 = UINT64_MAX;
	uint64_t t43 = 4816548257LLU;

	t43 = (x173&((x174<=x175)*x176));

	if (t43 != 0LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x177 = INT16_MAX;
	static int64_t x178 = 193109763553LL;
	static uint64_t x179 = 141606380829430382LLU;
	uint16_t x180 = 472U;
	volatile int32_t t44 = 25;

	t44 = (x177&((x178<=x179)*x180));

	if (t44 != 472) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MAX;
	static uint32_t x183 = 56778158U;
	volatile int64_t x184 = INT64_MIN;
	volatile int64_t t45 = -44668558838336212LL;

	t45 = (x181&((x182<=x183)*x184));

	if (t45 != 0LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint16_t x185 = 4U;
	uint8_t x186 = 14U;

	t46 = (x185&((x186<=x187)*x188));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x189 = 263834;
	int64_t x191 = INT64_MIN;
	static int64_t x192 = 120498234137123LL;
	int64_t t47 = -8LL;

	t47 = (x189&((x190<=x191)*x192));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int16_t x194 = INT16_MIN;
	static uint32_t x195 = 94U;
	uint32_t t48 = 214U;

	t48 = (x193&((x194<=x195)*x196));

	if (t48 != 0U) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x197 = -30023607;
	int64_t x198 = INT64_MIN;
	int64_t x199 = 4916LL;
	static volatile uint64_t x200 = UINT64_MAX;
	volatile uint64_t t49 = 612288008523LLU;

	t49 = (x197&((x198<=x199)*x200));

	if (t49 != 18446744073679528009LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x202 = -33524;
	static int8_t x203 = INT8_MIN;
	volatile uint8_t x204 = UINT8_MAX;

	t50 = (x201&((x202<=x203)*x204));

	if (t50 != 255) { NG(); } else { ; }
	
}

void f51(void) {
	static uint32_t x205 = 7U;
	int16_t x206 = -10263;
	int8_t x207 = INT8_MAX;
	volatile uint32_t x208 = 94U;

	t51 = (x205&((x206<=x207)*x208));

	if (t51 != 6U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x210 = 0U;
	volatile int16_t x211 = INT16_MIN;
	uint32_t x212 = 330U;
	uint32_t t52 = 11753443U;

	t52 = (x209&((x210<=x211)*x212));

	if (t52 != 0U) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x213 = INT16_MIN;
	static int64_t x214 = INT64_MIN;
	uint8_t x215 = 59U;
	static int16_t x216 = 0;
	volatile int32_t t53 = -1;

	t53 = (x213&((x214<=x215)*x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x218 = 22;
	int16_t x219 = INT16_MIN;
	uint32_t x220 = 218U;
	volatile uint32_t t54 = 47430U;

	t54 = (x217&((x218<=x219)*x220));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x221 = -1;
	static int32_t x222 = 35;
	int8_t x223 = INT8_MIN;
	uint16_t x224 = 12U;
	volatile int32_t t55 = 29052;

	t55 = (x221&((x222<=x223)*x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int64_t x226 = 856804582516LL;
	static volatile int8_t x227 = INT8_MIN;
	int64_t x228 = -1LL;
	int64_t t56 = -6943558346LL;

	t56 = (x225&((x226<=x227)*x228));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	volatile int16_t x229 = -2377;
	volatile int16_t x230 = -1;
	static int64_t x232 = -16328137689606LL;
	int64_t t57 = 803898LL;

	t57 = (x229&((x230<=x231)*x232));

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint32_t x234 = UINT32_MAX;
	int32_t x235 = -1;
	uint64_t x236 = UINT64_MAX;
	uint64_t t58 = UINT64_MAX;

	t58 = (x233&((x234<=x235)*x236));

	if (t58 != UINT64_MAX) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x237 = 3217607206LL;
	uint16_t x238 = 2U;
	uint8_t x239 = 0U;
	static int8_t x240 = 2;
	volatile int64_t t59 = 546942242177LL;

	t59 = (x237&((x238<=x239)*x240));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int8_t x242 = 31;
	static int8_t x243 = INT8_MAX;
	int32_t t60 = INT32_MIN;

	t60 = (x241&((x242<=x243)*x244));

	if (t60 != INT32_MIN) { NG(); } else { ; }
	
}

void f61(void) {
	static int16_t x245 = -11491;
	volatile uint16_t x246 = UINT16_MAX;
	uint64_t x247 = 17814104909879044LLU;
	int16_t x248 = INT16_MIN;
	int32_t t61 = 233629;

	t61 = (x245&((x246<=x247)*x248));

	if (t61 != -32768) { NG(); } else { ; }
	
}

void f62(void) {
	volatile int8_t x249 = -54;
	uint32_t x250 = UINT32_MAX;
	int32_t x251 = -1;
	int64_t x252 = -49LL;
	volatile int64_t t62 = -182001213LL;

	t62 = (x249&((x250<=x251)*x252));

	if (t62 != -54LL) { NG(); } else { ; }
	
}

void f63(void) {
	int64_t x253 = INT64_MIN;
	int32_t x254 = INT32_MIN;
	volatile int32_t x255 = INT32_MAX;
	volatile int64_t x256 = -1LL;
	static volatile int64_t t63 = INT64_MIN;

	t63 = (x253&((x254<=x255)*x256));

	if (t63 != INT64_MIN) { NG(); } else { ; }
	
}

void f64(void) {
	int32_t x258 = 45599;
	volatile int32_t x260 = INT32_MIN;

	t64 = (x257&((x258<=x259)*x260));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x261 = INT64_MIN;
	int64_t x262 = INT64_MIN;
	uint32_t x263 = UINT32_MAX;

	t65 = (x261&((x262<=x263)*x264));

	if (t65 != INT64_MIN) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x266 = -1;
	int32_t x267 = INT32_MAX;
	static volatile uint64_t x268 = UINT64_MAX;
	static volatile uint64_t t66 = 23279502039LLU;

	t66 = (x265&((x266<=x267)*x268));

	if (t66 != 21LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint8_t x269 = UINT8_MAX;
	int64_t x270 = INT64_MAX;
	int32_t x272 = INT32_MIN;

	t67 = (x269&((x270<=x271)*x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x273 = UINT16_MAX;
	uint32_t x274 = 4001518U;
	volatile uint8_t x275 = 1U;
	int64_t x276 = INT64_MAX;
	static volatile int64_t t68 = 3038189910LL;

	t68 = (x273&((x274<=x275)*x276));

	if (t68 != 0LL) { NG(); } else { ; }
	
}

void f69(void) {
	static int8_t x277 = INT8_MIN;
	int64_t x279 = -631370LL;
	volatile int32_t t69 = 6938;

	t69 = (x277&((x278<=x279)*x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint16_t x281 = 2714U;
	int64_t x283 = -1LL;
	int32_t x284 = -1;

	t70 = (x281&((x282<=x283)*x284));

	if (t70 != 2714) { NG(); } else { ; }
	
}

void f71(void) {
	uint8_t x285 = UINT8_MAX;
	int64_t x286 = -1LL;
	volatile int64_t x288 = INT64_MIN;
	volatile int64_t t71 = 1LL;

	t71 = (x285&((x286<=x287)*x288));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x289 = -54;
	uint64_t x290 = UINT64_MAX;
	uint32_t x292 = 44183778U;
	uint32_t t72 = 512397U;

	t72 = (x289&((x290<=x291)*x292));

	if (t72 != 0U) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x293 = UINT32_MAX;
	int16_t x294 = INT16_MAX;
	int8_t x295 = INT8_MAX;
	volatile uint16_t x296 = 193U;
	volatile uint32_t t73 = 495804821U;

	t73 = (x293&((x294<=x295)*x296));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile uint16_t x297 = UINT16_MAX;
	static uint16_t x298 = 11800U;
	static uint8_t x299 = UINT8_MAX;
	int16_t x300 = INT16_MIN;
	static volatile int32_t t74 = -7;

	t74 = (x297&((x298<=x299)*x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	uint8_t x301 = 2U;
	int64_t x302 = -1513851932758LL;
	uint32_t x303 = 41U;
	int64_t x304 = -6LL;
	int64_t t75 = 360779597976832894LL;

	t75 = (x301&((x302<=x303)*x304));

	if (t75 != 2LL) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x307 = 2916302189LL;
	int64_t x308 = 50LL;
	int64_t t76 = -637000621573LL;

	t76 = (x305&((x306<=x307)*x308));

	if (t76 != 48LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x310 = INT32_MIN;
	int64_t x311 = INT64_MIN;
	static int32_t x312 = -3;

	t77 = (x309&((x310<=x311)*x312));

	if (t77 != 0LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x313 = 929941643;
	volatile int16_t x314 = -1;
	uint8_t x315 = 111U;
	uint64_t x316 = UINT64_MAX;

	t78 = (x313&((x314<=x315)*x316));

	if (t78 != 929941643LLU) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x317 = 2529704U;
	volatile int32_t x318 = -2315;
	static int8_t x319 = -1;
	uint8_t x320 = UINT8_MAX;
	uint32_t t79 = 200357317U;

	t79 = (x317&((x318<=x319)*x320));

	if (t79 != 168U) { NG(); } else { ; }
	
}

void f80(void) {
	static volatile int64_t x322 = INT64_MAX;
	int16_t x323 = -1;
	int8_t x324 = INT8_MAX;

	t80 = (x321&((x322<=x323)*x324));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x325 = 18;
	static volatile int64_t x326 = -1LL;
	uint64_t x328 = 3624LLU;

	t81 = (x325&((x326<=x327)*x328));

	if (t81 != 0LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x330 = -1403;
	uint32_t x331 = 401542U;
	static volatile uint32_t x332 = UINT32_MAX;
	static uint32_t t82 = 3745549U;

	t82 = (x329&((x330<=x331)*x332));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = -1;
	int8_t x334 = -1;
	int32_t x335 = -139341;
	volatile uint64_t x336 = 68993721120303LLU;
	volatile uint64_t t83 = 360628756633699LLU;

	t83 = (x333&((x334<=x335)*x336));

	if (t83 != 0LLU) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x337 = -19;
	int16_t x338 = -1;
	static uint64_t x339 = UINT64_MAX;

	t84 = (x337&((x338<=x339)*x340));

	if (t84 != INT32_MIN) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x341 = INT64_MIN;
	int8_t x342 = -1;
	int64_t t85 = INT64_MIN;

	t85 = (x341&((x342<=x343)*x344));

	if (t85 != INT64_MIN) { NG(); } else { ; }
	
}

void f86(void) {
	uint8_t x345 = 28U;
	int32_t x347 = -1;
	static volatile uint16_t x348 = UINT16_MAX;
	volatile int32_t t86 = 563624453;

	t86 = (x345&((x346<=x347)*x348));

	if (t86 != 28) { NG(); } else { ; }
	
}

void f87(void) {
	static int16_t x349 = 53;
	uint8_t x350 = UINT8_MAX;
	static int8_t x351 = INT8_MIN;
	static int64_t x352 = INT64_MIN;
	int64_t t87 = 60110384LL;

	t87 = (x349&((x350<=x351)*x352));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	static uint32_t x353 = 103043702U;
	static uint16_t x354 = 18866U;
	volatile int16_t x356 = -214;
	uint32_t t88 = 426U;

	t88 = (x353&((x354<=x355)*x356));

	if (t88 != 103043618U) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x357 = 3643879215004082LLU;
	int16_t x358 = -1;
	volatile uint64_t t89 = 584862LLU;

	t89 = (x357&((x358<=x359)*x360));

	if (t89 != 50LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x361 = -35119945;
	uint32_t x362 = 481223U;
	int32_t x364 = 5339;
	static volatile int32_t t90 = -7410;

	t90 = (x361&((x362<=x363)*x364));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x365 = 2U;
	volatile int16_t x366 = 133;
	uint8_t x367 = 5U;
	static int64_t x368 = INT64_MIN;

	t91 = (x365&((x366<=x367)*x368));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x369 = -120291352;
	int8_t x370 = INT8_MIN;
	static volatile int32_t x372 = INT32_MIN;
	volatile int32_t t92 = INT32_MIN;

	t92 = (x369&((x370<=x371)*x372));

	if (t92 != INT32_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint64_t x373 = 3215419733LLU;
	uint16_t x374 = 1563U;
	uint64_t x375 = 6LLU;
	static int32_t x376 = INT32_MIN;
	volatile uint64_t t93 = 2471301LLU;

	t93 = (x373&((x374<=x375)*x376));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MIN;
	static int16_t x378 = 2;
	int16_t x380 = INT16_MIN;

	t94 = (x377&((x378<=x379)*x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int8_t x381 = INT8_MIN;
	uint64_t x382 = UINT64_MAX;
	uint8_t x383 = UINT8_MAX;
	uint16_t x384 = UINT16_MAX;
	static int32_t t95 = 78;

	t95 = (x381&((x382<=x383)*x384));

	if (t95 != 0) { NG(); } else { ; }
	
}

void f96(void) {
	int8_t x385 = INT8_MAX;
	int64_t x386 = -1LL;
	volatile int32_t x387 = -1;
	int32_t t96 = 52;

	t96 = (x385&((x386<=x387)*x388));

	if (t96 != 32) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x390 = -56;
	int8_t x391 = 7;
	static volatile uint32_t x392 = UINT32_MAX;
	static volatile uint64_t t97 = 3LLU;

	t97 = (x389&((x390<=x391)*x392));

	if (t97 != 3015663510LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x393 = INT16_MIN;
	int32_t x394 = 58249;
	volatile int8_t x395 = INT8_MIN;
	int64_t x396 = -90402784642111349LL;
	volatile int64_t t98 = -8122140744222LL;

	t98 = (x393&((x394<=x395)*x396));

	if (t98 != 0LL) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x397 = INT16_MIN;
	uint16_t x398 = 67U;
	int8_t x400 = -1;
	static volatile int32_t t99 = 254104223;

	t99 = (x397&((x398<=x399)*x400));

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

