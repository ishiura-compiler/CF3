#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static uint16_t x5 = 13940U;
uint8_t x8 = 42U;
int64_t x9 = -1LL;
static int64_t x25 = INT64_MIN;
uint8_t x26 = 6U;
int16_t x28 = -1;
uint64_t x30 = 1162326525LLU;
int16_t x35 = INT16_MIN;
volatile int32_t t8 = 751;
uint8_t x42 = 5U;
static int8_t x43 = -1;
uint8_t x57 = 10U;
static uint8_t x64 = UINT8_MAX;
static int16_t x69 = INT16_MIN;
static volatile int16_t x70 = INT16_MIN;
uint16_t x78 = 563U;
uint8_t x84 = 2U;
int32_t t20 = 1515796;
int64_t x85 = INT64_MAX;
uint32_t x87 = UINT32_MAX;
int8_t x94 = -1;
uint32_t x95 = UINT32_MAX;
static int64_t x101 = -460238354602981LL;
volatile int64_t t25 = 216959050990LL;
int32_t x106 = INT32_MIN;
uint64_t x108 = UINT64_MAX;
int64_t x113 = INT64_MIN;
int64_t t28 = 0LL;
volatile int32_t x119 = -1;
int8_t x121 = INT8_MAX;
volatile int64_t t31 = -15542305485047LL;
static int16_t x134 = INT16_MAX;
int8_t x143 = 1;
int64_t t35 = 8545019LL;
volatile int8_t x145 = 13;
int32_t x148 = INT32_MAX;
volatile int32_t t36 = 39;
int32_t x150 = 0;
volatile int64_t x151 = -1LL;
int16_t x154 = -1;
static int16_t x155 = INT16_MIN;
volatile int8_t x158 = INT8_MAX;
int64_t t39 = 870932657674845224LL;
int16_t x163 = -2;
int32_t t40 = 0;
int32_t x171 = 361;
uint64_t x172 = 134851270255480544LLU;
uint8_t x174 = 15U;
int16_t x183 = -1;
static int64_t x186 = -364197327LL;
uint16_t x187 = UINT16_MAX;
int8_t x195 = INT8_MAX;
uint16_t x196 = 92U;
int16_t x197 = INT16_MIN;
static volatile int64_t t48 = 54092583417270LL;
volatile uint64_t t50 = 322409LLU;
int64_t x212 = INT64_MAX;
int32_t x215 = INT32_MAX;
int32_t x227 = INT32_MIN;
volatile uint16_t x233 = UINT16_MAX;
int8_t x234 = INT8_MAX;
int32_t x241 = INT32_MIN;
static volatile int8_t x246 = INT8_MAX;
static uint8_t x247 = 33U;
int16_t x249 = -1;
volatile uint64_t t61 = 1299510531660LLU;
int8_t x260 = 6;
static uint64_t t63 = 8464844450885927LLU;
int8_t x266 = INT8_MIN;
int64_t x267 = 0LL;
int32_t x269 = INT32_MAX;
int16_t x270 = 5;
int16_t x275 = INT16_MIN;
int64_t t67 = 743526140209253263LL;
volatile uint8_t x279 = 7U;
static volatile int32_t t68 = -6732721;
uint8_t x282 = 6U;
uint64_t x284 = UINT64_MAX;
uint16_t x288 = 442U;
int32_t t71 = 25;
volatile int8_t x297 = -20;
int8_t x303 = INT8_MAX;
volatile uint32_t x308 = UINT32_MAX;
uint16_t x311 = 951U;
static volatile int32_t x315 = INT32_MAX;
uint64_t t77 = 70730899688LLU;
int64_t x327 = -1LL;
static int64_t x328 = -1LL;
uint32_t x333 = 977664U;
volatile uint32_t t82 = 5089U;
int64_t x338 = INT64_MIN;
int16_t x339 = 2;
static volatile int8_t x349 = INT8_MAX;
volatile int16_t x353 = INT16_MAX;
volatile uint8_t x354 = 61U;
int64_t t89 = 43121LL;
int32_t x367 = -705649;
uint32_t t90 = 827U;
volatile int16_t x370 = -6;
int16_t x371 = INT16_MAX;
volatile int64_t t91 = -5480633650187497LL;
static uint64_t t92 = 4172180070390751126LLU;
static int8_t x379 = INT8_MIN;
static int64_t t93 = 1LL;
static volatile int8_t x382 = 10;
volatile int64_t t95 = 128026230318LL;
volatile int16_t x401 = -28;
int32_t x403 = INT32_MAX;
uint8_t x404 = 8U;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int64_t x2 = -8720LL;
	int32_t x3 = INT32_MIN;
	uint16_t x4 = UINT16_MAX;
	volatile int64_t t0 = 16381992470822LL;

	t0 = ((x1&x2)^(x3%x4));

	if (t0 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x6 = INT32_MAX;
	int32_t x7 = INT32_MIN;
	volatile int32_t t1 = -515853;

	t1 = ((x5&x6)^(x7%x8));

	if (t1 != -13942) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x10 = 14944;
	int64_t x11 = -1LL;
	volatile uint16_t x12 = UINT16_MAX;
	volatile int64_t t2 = -263LL;

	t2 = ((x9&x10)^(x11%x12));

	if (t2 != -14945LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int8_t x13 = INT8_MIN;
	uint64_t x14 = 15LLU;
	int64_t x15 = INT64_MIN;
	volatile int16_t x16 = INT16_MIN;
	uint64_t t3 = 48767857275LLU;

	t3 = ((x13&x14)^(x15%x16));

	if (t3 != 0LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x17 = 1220375904U;
	int32_t x18 = INT32_MIN;
	uint32_t x19 = 234485U;
	static volatile uint8_t x20 = 6U;
	static uint32_t t4 = 1535U;

	t4 = ((x17&x18)^(x19%x20));

	if (t4 != 5U) { NG(); } else { ; }
	
}

void f5(void) {
	uint8_t x21 = UINT8_MAX;
	volatile int16_t x22 = INT16_MIN;
	uint64_t x23 = 23627886LLU;
	int16_t x24 = -1;
	volatile uint64_t t5 = 27685259686776363LLU;

	t5 = ((x21&x22)^(x23%x24));

	if (t5 != 23627886LLU) { NG(); } else { ; }
	
}

void f6(void) {
	static uint32_t x27 = 87397397U;
	volatile int64_t t6 = -463233091LL;

	t6 = ((x25&x26)^(x27%x28));

	if (t6 != 87397397LL) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x29 = -5601;
	int32_t x31 = -7368935;
	uint64_t x32 = 2LLU;
	static uint64_t t7 = 11968263760LLU;

	t7 = ((x29&x30)^(x31%x32));

	if (t7 != 1162321948LLU) { NG(); } else { ; }
	
}

void f8(void) {
	static uint8_t x33 = 107U;
	int8_t x34 = -6;
	static int32_t x36 = INT32_MIN;

	t8 = ((x33&x34)^(x35%x36));

	if (t8 != -32662) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x37 = UINT64_MAX;
	static volatile int32_t x38 = 31382224;
	static volatile int32_t x39 = INT32_MAX;
	volatile int8_t x40 = INT8_MAX;
	volatile uint64_t t9 = 724386416052560LLU;

	t9 = ((x37&x38)^(x39%x40));

	if (t9 != 31382231LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int8_t x41 = -1;
	int8_t x44 = INT8_MIN;
	volatile int32_t t10 = -215881;

	t10 = ((x41&x42)^(x43%x44));

	if (t10 != -6) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MIN;
	int64_t x46 = INT64_MAX;
	uint64_t x47 = UINT64_MAX;
	volatile uint32_t x48 = UINT32_MAX;
	volatile uint64_t t11 = 858LLU;

	t11 = ((x45&x46)^(x47%x48));

	if (t11 != 9223372036854775680LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MIN;
	static volatile int32_t x50 = -59830637;
	uint8_t x51 = UINT8_MAX;
	volatile int32_t x52 = INT32_MAX;
	volatile int32_t t12 = -611377;

	t12 = ((x49&x50)^(x51%x52));

	if (t12 != -59834113) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x53 = 54334624110134LLU;
	volatile int16_t x54 = 993;
	int64_t x55 = INT64_MIN;
	volatile int16_t x56 = INT16_MIN;
	uint64_t t13 = 12112LLU;

	t13 = ((x53&x54)^(x55%x56));

	if (t13 != 544LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static int64_t x58 = INT64_MIN;
	uint16_t x59 = UINT16_MAX;
	uint16_t x60 = 48U;
	volatile int64_t t14 = -359343479848LL;

	t14 = ((x57&x58)^(x59%x60));

	if (t14 != 15LL) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = INT64_MAX;
	volatile int64_t x62 = -1LL;
	int64_t x63 = INT64_MIN;
	int64_t t15 = 47311210108756678LL;

	t15 = ((x61&x62)^(x63%x64));

	if (t15 != -9223372036854775681LL) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint8_t x65 = 122U;
	volatile uint32_t x66 = 8U;
	uint16_t x67 = 22507U;
	uint64_t x68 = 441887166414137962LLU;
	uint64_t t16 = 791816767176LLU;

	t16 = ((x65&x66)^(x67%x68));

	if (t16 != 22499LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint64_t x71 = UINT64_MAX;
	uint64_t x72 = 3275LLU;
	volatile uint64_t t17 = 380LLU;

	t17 = ((x69&x70)^(x71%x72));

	if (t17 != 18446744073709521663LLU) { NG(); } else { ; }
	
}

void f18(void) {
	static uint64_t x73 = 14500639150539900LLU;
	uint32_t x74 = 244U;
	uint16_t x75 = 59U;
	int8_t x76 = -1;
	uint64_t t18 = 3904LLU;

	t18 = ((x73&x74)^(x75%x76));

	if (t18 != 116LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x77 = -168199;
	int16_t x79 = -1;
	int8_t x80 = INT8_MAX;
	volatile int32_t t19 = -27411;

	t19 = ((x77&x78)^(x79%x80));

	if (t19 != -562) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x81 = INT8_MAX;
	int16_t x82 = INT16_MIN;
	volatile int32_t x83 = 0;

	t20 = ((x81&x82)^(x83%x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x86 = INT32_MIN;
	int64_t x88 = INT64_MAX;
	volatile int64_t t21 = -4285502LL;

	t21 = ((x85&x86)^(x87%x88));

	if (t21 != 9223372034707292159LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile uint64_t x89 = 3318386644LLU;
	int16_t x90 = -1;
	int8_t x91 = INT8_MIN;
	volatile uint8_t x92 = 10U;
	uint64_t t22 = 437247LLU;

	t22 = ((x89&x90)^(x91%x92));

	if (t22 != 18446744070391164972LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static int64_t x93 = -1LL;
	int8_t x96 = 28;
	volatile int64_t t23 = 6103707225068084LL;

	t23 = ((x93&x94)^(x95%x96));

	if (t23 != -4LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x97 = 1964113LL;
	int32_t x98 = INT32_MIN;
	int16_t x99 = INT16_MIN;
	static volatile int32_t x100 = -7142922;
	int64_t t24 = 893262703923113919LL;

	t24 = ((x97&x98)^(x99%x100));

	if (t24 != -32768LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x102 = 29U;
	int64_t x103 = -1LL;
	static int8_t x104 = 57;

	t25 = ((x101&x102)^(x103%x104));

	if (t25 != -26LL) { NG(); } else { ; }
	
}

void f26(void) {
	int16_t x105 = INT16_MIN;
	int32_t x107 = 16;
	static uint64_t t26 = 652468830872012LLU;

	t26 = ((x105&x106)^(x107%x108));

	if (t26 != 18446744071562067984LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x109 = 36U;
	int32_t x110 = -1;
	static volatile int32_t x111 = 47;
	int64_t x112 = INT64_MIN;
	static int64_t t27 = 308368132LL;

	t27 = ((x109&x110)^(x111%x112));

	if (t27 != 11LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint8_t x114 = UINT8_MAX;
	int16_t x115 = INT16_MAX;
	volatile int16_t x116 = -87;

	t28 = ((x113&x114)^(x115%x116));

	if (t28 != 55LL) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x117 = INT64_MAX;
	int64_t x118 = INT64_MAX;
	int16_t x120 = -10;
	volatile int64_t t29 = INT64_MIN;

	t29 = ((x117&x118)^(x119%x120));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x122 = INT8_MIN;
	int8_t x123 = 19;
	volatile uint16_t x124 = 12U;
	int32_t t30 = -527160;

	t30 = ((x121&x122)^(x123%x124));

	if (t30 != 7) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x125 = -1;
	static int64_t x126 = 23376LL;
	uint32_t x127 = 487U;
	uint16_t x128 = UINT16_MAX;

	t31 = ((x125&x126)^(x127%x128));

	if (t31 != 23223LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x129 = -1;
	volatile int32_t x130 = -24988087;
	volatile int32_t x131 = 10571461;
	static uint32_t x132 = 42U;
	uint32_t t32 = 440U;

	t32 = ((x129&x130)^(x131%x132));

	if (t32 != 4269979226U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile int16_t x133 = INT16_MIN;
	int16_t x135 = 1;
	uint64_t x136 = 6919053688645621241LLU;
	uint64_t t33 = 5794LLU;

	t33 = ((x133&x134)^(x135%x136));

	if (t33 != 1LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x137 = 21LL;
	int64_t x138 = INT64_MIN;
	int32_t x139 = 13413347;
	int8_t x140 = -20;
	volatile int64_t t34 = -154215370LL;

	t34 = ((x137&x138)^(x139%x140));

	if (t34 != 7LL) { NG(); } else { ; }
	
}

void f35(void) {
	static int32_t x141 = -1;
	static int16_t x142 = 115;
	static int64_t x144 = -1LL;

	t35 = ((x141&x142)^(x143%x144));

	if (t35 != 115LL) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x146 = -3375;
	int32_t x147 = INT32_MIN;

	t36 = ((x145&x146)^(x147%x148));

	if (t36 != -2) { NG(); } else { ; }
	
}

void f37(void) {
	int16_t x149 = -1;
	int32_t x152 = -1;
	int64_t t37 = -39402272276740LL;

	t37 = ((x149&x150)^(x151%x152));

	if (t37 != 0LL) { NG(); } else { ; }
	
}

void f38(void) {
	volatile int16_t x153 = -1;
	uint8_t x156 = 24U;
	volatile int32_t t38 = -20;

	t38 = ((x153&x154)^(x155%x156));

	if (t38 != 7) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x157 = INT64_MIN;
	static volatile int16_t x159 = INT16_MIN;
	uint16_t x160 = UINT16_MAX;

	t39 = ((x157&x158)^(x159%x160));

	if (t39 != -32768LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x161 = INT32_MIN;
	static int8_t x162 = INT8_MIN;
	uint16_t x164 = 97U;

	t40 = ((x161&x162)^(x163%x164));

	if (t40 != 2147483646) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int16_t x169 = INT16_MIN;
	uint16_t x170 = 1455U;
	uint64_t t41 = 8315017840396674526LLU;

	t41 = ((x169&x170)^(x171%x172));

	if (t41 != 361LLU) { NG(); } else { ; }
	
}

void f42(void) {
	int32_t x173 = INT32_MIN;
	uint64_t x175 = 4LLU;
	uint8_t x176 = UINT8_MAX;
	uint64_t t42 = 15408568594936LLU;

	t42 = ((x173&x174)^(x175%x176));

	if (t42 != 4LLU) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x177 = UINT64_MAX;
	int64_t x178 = -1LL;
	static int16_t x179 = -3904;
	int8_t x180 = INT8_MAX;
	uint64_t t43 = 45041LLU;

	t43 = ((x177&x178)^(x179%x180));

	if (t43 != 93LLU) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint64_t x181 = 1005398161LLU;
	uint64_t x182 = 3132907596LLU;
	uint32_t x184 = 28368U;
	uint64_t t44 = 7448025600606LLU;

	t44 = ((x181&x182)^(x183%x184));

	if (t44 != 984382639LLU) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x185 = INT16_MIN;
	int16_t x188 = INT16_MIN;
	int64_t t45 = 1587130840LL;

	t45 = ((x185&x186)^(x187%x188));

	if (t45 != -364183553LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x189 = INT8_MAX;
	int64_t x190 = -390401770LL;
	uint16_t x191 = 23U;
	volatile int32_t x192 = INT32_MAX;
	int64_t t46 = -137421LL;

	t46 = ((x189&x190)^(x191%x192));

	if (t46 != 1LL) { NG(); } else { ; }
	
}

void f47(void) {
	int64_t x193 = INT64_MIN;
	int8_t x194 = -18;
	volatile int64_t t47 = -8693LL;

	t47 = ((x193&x194)^(x195%x196));

	if (t47 != -9223372036854775773LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x198 = INT64_MIN;
	int32_t x199 = INT32_MAX;
	static uint16_t x200 = 1959U;

	t48 = ((x197&x198)^(x199%x200));

	if (t48 != -9223372036854775387LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x201 = INT64_MAX;
	uint8_t x202 = UINT8_MAX;
	uint16_t x203 = 3U;
	static int8_t x204 = INT8_MIN;
	int64_t t49 = 39942421221501LL;

	t49 = ((x201&x202)^(x203%x204));

	if (t49 != 252LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x205 = UINT64_MAX;
	volatile int64_t x206 = 116782044235709LL;
	int64_t x207 = -210290773159LL;
	int16_t x208 = -1;

	t50 = ((x205&x206)^(x207%x208));

	if (t50 != 116782044235709LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x209 = INT32_MAX;
	uint8_t x210 = UINT8_MAX;
	static uint32_t x211 = UINT32_MAX;
	volatile int64_t t51 = -32LL;

	t51 = ((x209&x210)^(x211%x212));

	if (t51 != 4294967040LL) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x213 = 64458758;
	static int64_t x214 = INT64_MAX;
	int64_t x216 = -1LL;
	int64_t t52 = -122525022068036LL;

	t52 = ((x213&x214)^(x215%x216));

	if (t52 != 64458758LL) { NG(); } else { ; }
	
}

void f53(void) {
	int32_t x217 = -2580;
	int32_t x218 = -1;
	int64_t x219 = INT64_MIN;
	uint64_t x220 = 16361500459140710LLU;
	uint64_t t53 = 347695068209962LLU;

	t53 = ((x217&x218)^(x219%x220));

	if (t53 != 18434896795350997058LLU) { NG(); } else { ; }
	
}

void f54(void) {
	static uint32_t x221 = 4U;
	int8_t x222 = -22;
	volatile int64_t x223 = INT64_MAX;
	int16_t x224 = INT16_MIN;
	int64_t t54 = 44707LL;

	t54 = ((x221&x222)^(x223%x224));

	if (t54 != 32767LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint16_t x225 = 27U;
	int64_t x226 = INT64_MAX;
	uint16_t x228 = UINT16_MAX;
	volatile int64_t t55 = -1737849730151907LL;

	t55 = ((x225&x226)^(x227%x228));

	if (t55 != -32741LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x229 = -26888;
	static int32_t x230 = -1345014;
	uint64_t x231 = 32631549728LLU;
	uint32_t x232 = UINT32_MAX;
	uint64_t t56 = 2LLU;

	t56 = ((x229&x230)^(x231%x232));

	if (t56 != 18446744071144144175LLU) { NG(); } else { ; }
	
}

void f57(void) {
	uint32_t x235 = UINT32_MAX;
	volatile uint32_t x236 = 510U;
	volatile uint32_t t57 = 27U;

	t57 = ((x233&x234)^(x235%x236));

	if (t57 != 128U) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x237 = -1;
	int16_t x238 = INT16_MIN;
	uint32_t x239 = UINT32_MAX;
	static uint64_t x240 = 3518930141774LLU;
	uint64_t t58 = 137049192959LLU;

	t58 = ((x237&x238)^(x239%x240));

	if (t58 != 18446744069414617087LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x242 = INT64_MAX;
	volatile uint32_t x243 = 1883U;
	int32_t x244 = INT32_MAX;
	static volatile int64_t t59 = 75447772631LL;

	t59 = ((x241&x242)^(x243%x244));

	if (t59 != 9223372034707294043LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint8_t x245 = UINT8_MAX;
	volatile int8_t x248 = -1;
	volatile int32_t t60 = 99146;

	t60 = ((x245&x246)^(x247%x248));

	if (t60 != 127) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x250 = INT8_MIN;
	uint64_t x251 = UINT64_MAX;
	int32_t x252 = -1;

	t61 = ((x249&x250)^(x251%x252));

	if (t61 != 18446744073709551488LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x253 = INT16_MAX;
	volatile int8_t x254 = INT8_MIN;
	volatile int16_t x255 = -1;
	int64_t x256 = -1LL;
	int64_t t62 = 72688977101575LL;

	t62 = ((x253&x254)^(x255%x256));

	if (t62 != 32640LL) { NG(); } else { ; }
	
}

void f63(void) {
	uint64_t x257 = 883704566343079320LLU;
	uint8_t x258 = 27U;
	int32_t x259 = INT32_MIN;

	t63 = ((x257&x258)^(x259%x260));

	if (t63 != 18446744073709551590LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x261 = UINT16_MAX;
	volatile int8_t x262 = INT8_MIN;
	int16_t x263 = INT16_MIN;
	static int16_t x264 = INT16_MAX;
	int32_t t64 = 57;

	t64 = ((x261&x262)^(x263%x264));

	if (t64 != -65409) { NG(); } else { ; }
	
}

void f65(void) {
	static uint8_t x265 = UINT8_MAX;
	int64_t x268 = INT64_MAX;
	int64_t t65 = 8LL;

	t65 = ((x265&x266)^(x267%x268));

	if (t65 != 128LL) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int16_t x271 = -6;
	int32_t x272 = 4201236;
	int32_t t66 = -3919610;

	t66 = ((x269&x270)^(x271%x272));

	if (t66 != -1) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x273 = -1LL;
	static int8_t x274 = INT8_MIN;
	int32_t x276 = -1;

	t67 = ((x273&x274)^(x275%x276));

	if (t67 != -128LL) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int8_t x277 = -8;
	uint16_t x278 = UINT16_MAX;
	int32_t x280 = -1;

	t68 = ((x277&x278)^(x279%x280));

	if (t68 != 65528) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int32_t x281 = -1;
	int8_t x283 = INT8_MIN;
	static volatile uint64_t t69 = 22892LLU;

	t69 = ((x281&x282)^(x283%x284));

	if (t69 != 18446744073709551494LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x285 = 610;
	int64_t x286 = -1LL;
	uint32_t x287 = UINT32_MAX;
	int64_t t70 = -600429111857025LL;

	t70 = ((x285&x286)^(x287%x288));

	if (t70 != 669LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x289 = 69U;
	volatile uint16_t x290 = 0U;
	int16_t x291 = 3;
	static int8_t x292 = INT8_MIN;

	t71 = ((x289&x290)^(x291%x292));

	if (t71 != 3) { NG(); } else { ; }
	
}

void f72(void) {
	volatile int8_t x293 = INT8_MAX;
	int8_t x294 = INT8_MIN;
	int8_t x295 = INT8_MIN;
	int16_t x296 = -1;
	volatile int32_t t72 = 267766312;

	t72 = ((x293&x294)^(x295%x296));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int8_t x298 = INT8_MAX;
	volatile uint64_t x299 = 474855267190070680LLU;
	int16_t x300 = INT16_MAX;
	uint64_t t73 = 64206893152637LLU;

	t73 = ((x297&x298)^(x299%x300));

	if (t73 != 11407LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x301 = INT32_MIN;
	uint8_t x302 = 45U;
	int64_t x304 = INT64_MIN;
	int64_t t74 = -2LL;

	t74 = ((x301&x302)^(x303%x304));

	if (t74 != 127LL) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int16_t x305 = -587;
	uint64_t x306 = 2530377974767780345LLU;
	uint16_t x307 = 253U;
	volatile uint64_t t75 = 92024LLU;

	t75 = ((x305&x306)^(x307%x308));

	if (t75 != 2530377974767780172LLU) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x309 = -1;
	int8_t x310 = INT8_MIN;
	static int8_t x312 = INT8_MIN;
	int32_t t76 = 198543093;

	t76 = ((x309&x310)^(x311%x312));

	if (t76 != -73) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x313 = INT32_MAX;
	uint64_t x314 = 27545838878LLU;
	volatile int16_t x316 = INT16_MIN;

	t77 = ((x313&x314)^(x315%x316));

	if (t77 != 1776048865LLU) { NG(); } else { ; }
	
}

void f78(void) {
	int32_t x317 = INT32_MAX;
	uint16_t x318 = 6U;
	volatile int64_t x319 = INT64_MAX;
	static uint8_t x320 = 2U;
	int64_t t78 = 256656159LL;

	t78 = ((x317&x318)^(x319%x320));

	if (t78 != 7LL) { NG(); } else { ; }
	
}

void f79(void) {
	int64_t x321 = INT64_MIN;
	static volatile int8_t x322 = INT8_MIN;
	static int8_t x323 = INT8_MIN;
	static int32_t x324 = 104708;
	static int64_t t79 = 56634667679LL;

	t79 = ((x321&x322)^(x323%x324));

	if (t79 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x325 = -1;
	static uint8_t x326 = 3U;
	int64_t t80 = -488574782678060LL;

	t80 = ((x325&x326)^(x327%x328));

	if (t80 != 3LL) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int64_t x329 = -1LL;
	int8_t x330 = INT8_MIN;
	uint16_t x331 = 7751U;
	int64_t x332 = INT64_MAX;
	volatile int64_t t81 = -4327096LL;

	t81 = ((x329&x330)^(x331%x332));

	if (t81 != -7737LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x334 = INT8_MIN;
	static int8_t x335 = -1;
	volatile uint16_t x336 = 5U;

	t82 = ((x333&x334)^(x335%x336));

	if (t82 != 4293989631U) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x337 = -976;
	volatile int32_t x340 = INT32_MIN;
	static volatile int64_t t83 = 107277382LL;

	t83 = ((x337&x338)^(x339%x340));

	if (t83 != -9223372036854775806LL) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x341 = INT8_MIN;
	volatile int16_t x342 = INT16_MIN;
	static volatile int8_t x343 = INT8_MIN;
	int32_t x344 = 2181;
	int32_t t84 = -6906617;

	t84 = ((x341&x342)^(x343%x344));

	if (t84 != 32640) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int16_t x345 = 55;
	uint8_t x346 = UINT8_MAX;
	int32_t x347 = -1;
	int8_t x348 = INT8_MAX;
	static int32_t t85 = 104937;

	t85 = ((x345&x346)^(x347%x348));

	if (t85 != -56) { NG(); } else { ; }
	
}

void f86(void) {
	int16_t x350 = INT16_MIN;
	int32_t x351 = 8423;
	static int64_t x352 = INT64_MIN;
	volatile int64_t t86 = -907809944550878LL;

	t86 = ((x349&x350)^(x351%x352));

	if (t86 != 8423LL) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile uint32_t x355 = 2075U;
	int64_t x356 = 216LL;
	int64_t t87 = -18466686957536LL;

	t87 = ((x353&x354)^(x355%x356));

	if (t87 != 190LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x357 = INT16_MIN;
	static int8_t x358 = INT8_MIN;
	volatile uint8_t x359 = 30U;
	int32_t x360 = -1;
	int32_t t88 = 386;

	t88 = ((x357&x358)^(x359%x360));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	volatile uint32_t x361 = 6557763U;
	static int8_t x362 = INT8_MIN;
	static int16_t x363 = -1;
	static volatile int64_t x364 = 15076521LL;

	t89 = ((x361&x362)^(x363%x364));

	if (t89 != -6557697LL) { NG(); } else { ; }
	
}

void f90(void) {
	static uint16_t x365 = 3U;
	uint32_t x366 = 42U;
	int32_t x368 = -1;

	t90 = ((x365&x366)^(x367%x368));

	if (t90 != 2U) { NG(); } else { ; }
	
}

void f91(void) {
	static uint8_t x369 = 59U;
	int64_t x372 = INT64_MIN;

	t91 = ((x369&x370)^(x371%x372));

	if (t91 != 32709LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile uint64_t x373 = UINT64_MAX;
	static volatile uint8_t x374 = 11U;
	static uint64_t x375 = 3265303422592330846LLU;
	int8_t x376 = INT8_MAX;

	t92 = ((x373&x374)^(x375%x376));

	if (t92 != 41LLU) { NG(); } else { ; }
	
}

void f93(void) {
	static int32_t x377 = INT32_MAX;
	int64_t x378 = 0LL;
	int64_t x380 = -10LL;

	t93 = ((x377&x378)^(x379%x380));

	if (t93 != -8LL) { NG(); } else { ; }
	
}

void f94(void) {
	volatile int64_t x381 = -1LL;
	static volatile int16_t x383 = INT16_MAX;
	int16_t x384 = INT16_MIN;
	int64_t t94 = 2893978LL;

	t94 = ((x381&x382)^(x383%x384));

	if (t94 != 32757LL) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x385 = -1LL;
	int32_t x386 = -1;
	static volatile int64_t x387 = INT64_MAX;
	int64_t x388 = -1LL;

	t95 = ((x385&x386)^(x387%x388));

	if (t95 != -1LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int8_t x389 = -1;
	int32_t x390 = INT32_MAX;
	volatile int8_t x391 = -2;
	int16_t x392 = -1;
	volatile int32_t t96 = INT32_MAX;

	t96 = ((x389&x390)^(x391%x392));

	if (t96 != INT32_MAX) { NG(); } else { ; }
	
}

void f97(void) {
	int64_t x393 = INT64_MIN;
	static uint16_t x394 = 11238U;
	int32_t x395 = 10386259;
	int64_t x396 = 28754591270541319LL;
	int64_t t97 = -28594335960833559LL;

	t97 = ((x393&x394)^(x395%x396));

	if (t97 != 10386259LL) { NG(); } else { ; }
	
}

void f98(void) {
	static volatile int32_t x397 = INT32_MIN;
	int64_t x398 = INT64_MIN;
	int64_t x399 = INT64_MIN;
	volatile int16_t x400 = INT16_MIN;
	volatile int64_t t98 = INT64_MIN;

	t98 = ((x397&x398)^(x399%x400));

	if (t98 != INT64_MIN) { NG(); } else { ; }
	
}

void f99(void) {
	uint64_t x402 = 624511LLU;
	uint64_t t99 = 937780868467398LLU;

	t99 = ((x401&x402)^(x403%x404));

	if (t99 != 624483LLU) { NG(); } else { ; }
	
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

