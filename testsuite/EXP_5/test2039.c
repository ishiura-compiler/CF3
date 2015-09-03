#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint8_t x6 = UINT8_MAX;
static int8_t x7 = 0;
int64_t x9 = 15635LL;
uint64_t x15 = 1729319783868838314LLU;
volatile int64_t x19 = -172796LL;
volatile uint64_t x24 = 196526394879LLU;
uint32_t t6 = 73532U;
int16_t x30 = INT16_MIN;
int8_t x38 = INT8_MIN;
int16_t x44 = -1;
volatile uint32_t t12 = 5U;
uint32_t x56 = 3318991U;
volatile uint32_t t13 = 54590140U;
volatile int64_t t15 = 54203064LL;
int16_t x65 = INT16_MAX;
uint64_t x67 = 157615922585324140LLU;
int16_t x70 = INT16_MAX;
volatile uint64_t t18 = 531026674383LLU;
volatile int32_t x97 = 1459;
volatile int8_t x100 = INT8_MAX;
volatile int64_t t23 = 8LL;
static volatile int32_t t24 = INT32_MIN;
int8_t x107 = -3;
uint32_t x110 = 26U;
volatile int8_t x111 = -1;
volatile int32_t x112 = INT32_MAX;
volatile int16_t x115 = INT16_MIN;
volatile int64_t x118 = INT64_MIN;
int64_t x119 = -1LL;
int8_t x121 = -1;
int32_t t29 = -3884;
uint16_t x129 = 7178U;
int16_t x151 = -496;
uint64_t x152 = 890018772568229228LLU;
uint64_t t34 = 4177715824786337LLU;
volatile int32_t x159 = -1;
volatile int64_t t35 = -1209037746694489012LL;
int32_t t36 = 30483479;
volatile int32_t x172 = INT32_MIN;
static volatile uint64_t t38 = 476418790961772LLU;
int64_t x175 = 217281LL;
static uint64_t x180 = 1428051278885LLU;
volatile uint64_t x187 = 53722426876102844LLU;
int16_t x190 = INT16_MIN;
uint64_t t43 = 137984058397591LLU;
volatile int16_t x200 = INT16_MIN;
int32_t x206 = -72749662;
volatile int32_t x209 = INT32_MIN;
int64_t x211 = -1LL;
int32_t x213 = -1;
int16_t x215 = -3279;
int64_t t48 = -35917019102979961LL;
volatile uint8_t x224 = 30U;
static int64_t x226 = INT64_MAX;
int64_t x229 = INT64_MIN;
volatile int8_t x231 = INT8_MIN;
int32_t x237 = INT32_MIN;
int8_t x239 = 4;
volatile int8_t x240 = -1;
volatile int32_t t52 = -387936;
static uint16_t x249 = 259U;
uint8_t x251 = UINT8_MAX;
uint64_t t54 = 7904360293051003LLU;
static int16_t x257 = INT16_MAX;
volatile int32_t x260 = INT32_MIN;
volatile int32_t t55 = 2858;
volatile int64_t t56 = 8251484109293916LL;
int32_t x268 = INT32_MAX;
volatile uint64_t t58 = 14542041712074LLU;
static int32_t x277 = -1;
uint64_t x293 = UINT64_MAX;
int8_t x297 = -1;
uint16_t x302 = 45U;
volatile int16_t x317 = -67;
uint32_t x318 = UINT32_MAX;
static int8_t x320 = INT8_MIN;
uint16_t x321 = 3U;
static volatile int32_t x332 = 1773;
static int64_t x333 = INT64_MIN;
volatile int16_t x334 = INT16_MIN;
int8_t x335 = 41;
uint64_t x336 = 172650571LLU;
volatile uint8_t x340 = 3U;
int32_t x341 = -1;
volatile int16_t x343 = INT16_MIN;
uint32_t t74 = 2117740185U;
uint32_t x350 = 869U;
int64_t t76 = 11446LL;
volatile int16_t x361 = INT16_MAX;
int64_t x363 = INT64_MIN;
static uint64_t t79 = 66089668518971179LLU;
uint64_t x370 = 0LLU;
int64_t x374 = 0LL;
static int32_t x384 = INT32_MAX;
volatile int64_t t84 = -1424885LL;
static uint64_t x387 = 3955704LLU;
volatile int32_t x394 = 58597733;
uint16_t x398 = 1U;
uint64_t x408 = 1398LLU;
uint8_t x410 = UINT8_MAX;
uint64_t x422 = UINT64_MAX;
uint8_t x423 = UINT8_MAX;
int32_t x437 = INT32_MIN;
int32_t x446 = INT32_MIN;
uint64_t x451 = 17324390204LLU;


void f0(void) {
	volatile int16_t x1 = 156;
	uint32_t x2 = UINT32_MAX;
	static uint32_t x3 = 108171826U;
	volatile int16_t x4 = 7;
	volatile uint32_t t0 = 5567790U;

	t0 = (x1&((x2^x3)+x4));

	if (t0 != 148U) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = 12LLU;
	int8_t x8 = INT8_MAX;
	volatile uint64_t t1 = 3047LLU;

	t1 = (x5&((x6^x7)+x8));

	if (t1 != 12LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x10 = 3LLU;
	uint8_t x11 = UINT8_MAX;
	volatile int8_t x12 = INT8_MIN;
	uint64_t t2 = 87423LLU;

	t2 = (x9&((x10^x11)+x12));

	if (t2 != 16LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int16_t x13 = INT16_MAX;
	static int16_t x14 = -4969;
	int8_t x16 = -1;
	static volatile uint64_t t3 = 126231LLU;

	t3 = (x13&((x14^x15)+x16));

	if (t3 != 23868LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x17 = -115228496259006LL;
	static int8_t x18 = INT8_MAX;
	uint32_t x20 = 50U;
	volatile int64_t t4 = 883LL;

	t4 = (x17&((x18^x19)+x20));

	if (t4 != -115228496291840LL) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 1145562613342LLU;
	int8_t x22 = -1;
	int8_t x23 = INT8_MIN;
	static uint64_t t5 = 28LLU;

	t5 = (x21&((x22^x23)+x24));

	if (t5 != 36519954014LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x25 = -4;
	int16_t x26 = INT16_MIN;
	static uint32_t x27 = 11U;
	volatile uint32_t x28 = UINT32_MAX;

	t6 = (x25&((x26^x27)+x28));

	if (t6 != 4294934536U) { NG(); } else { ; }
	
}

void f7(void) {
	int8_t x29 = INT8_MIN;
	int16_t x31 = -9;
	int32_t x32 = -531815;
	int32_t t7 = -1041516;

	t7 = (x29&((x30^x31)+x32));

	if (t7 != -499072) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	int8_t x34 = INT8_MAX;
	uint16_t x35 = 1222U;
	volatile uint32_t x36 = 1165609374U;
	static volatile uint32_t t8 = 0U;

	t8 = (x33&((x34^x35)+x36));

	if (t8 != 1165610583U) { NG(); } else { ; }
	
}

void f9(void) {
	static int32_t x37 = -1;
	static volatile uint16_t x39 = 4U;
	static int16_t x40 = INT16_MIN;
	volatile int32_t t9 = 525418;

	t9 = (x37&((x38^x39)+x40));

	if (t9 != -32892) { NG(); } else { ; }
	
}

void f10(void) {
	uint16_t x41 = UINT16_MAX;
	uint64_t x42 = 19224LLU;
	int16_t x43 = INT16_MIN;
	volatile uint64_t t10 = 79257483LLU;

	t10 = (x41&((x42^x43)+x44));

	if (t10 != 51991LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = INT8_MIN;
	static uint16_t x46 = UINT16_MAX;
	int32_t x47 = -1;
	int64_t x48 = INT64_MAX;
	int64_t t11 = 3918656134LL;

	t11 = (x45&((x46^x47)+x48));

	if (t11 != 9223372036854710144LL) { NG(); } else { ; }
	
}

void f12(void) {
	int16_t x49 = INT16_MAX;
	static uint16_t x50 = 171U;
	volatile int8_t x51 = INT8_MIN;
	uint32_t x52 = 387975969U;

	t12 = (x49&((x50^x51)+x52));

	if (t12 != 2636U) { NG(); } else { ; }
	
}

void f13(void) {
	int32_t x53 = INT32_MAX;
	volatile int8_t x54 = 0;
	int32_t x55 = -1;

	t13 = (x53&((x54^x55)+x56));

	if (t13 != 3318990U) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x57 = UINT16_MAX;
	int32_t x58 = -1;
	volatile uint8_t x59 = UINT8_MAX;
	static int8_t x60 = -1;
	int32_t t14 = -11081402;

	t14 = (x57&((x58^x59)+x60));

	if (t14 != 65279) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x61 = 62867657356LL;
	int16_t x62 = 133;
	int32_t x63 = INT32_MIN;
	volatile uint16_t x64 = 46U;

	t15 = (x61&((x62^x63)+x64));

	if (t15 != 62277025920LL) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x66 = 10;
	static int8_t x68 = INT8_MIN;
	static uint64_t t16 = 3740LLU;

	t16 = (x65&((x66^x67)+x68));

	if (t16 != 18918LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = 1;
	static int8_t x71 = INT8_MAX;
	int16_t x72 = 9675;
	int32_t t17 = 1463;

	t17 = (x69&((x70^x71)+x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x77 = 205U;
	volatile int8_t x78 = INT8_MIN;
	int8_t x79 = -1;
	static uint64_t x80 = UINT64_MAX;

	t18 = (x77&((x78^x79)+x80));

	if (t18 != 76LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int16_t x81 = -9;
	uint32_t x82 = UINT32_MAX;
	int64_t x83 = INT64_MIN;
	int16_t x84 = INT16_MIN;
	int64_t t19 = 1LL;

	t19 = (x81&((x82^x83)+x84));

	if (t19 != -9223372032559841289LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x85 = INT32_MAX;
	int16_t x86 = INT16_MIN;
	static int16_t x87 = INT16_MIN;
	static volatile int32_t x88 = INT32_MIN;
	volatile int32_t t20 = -389411;

	t20 = (x85&((x86^x87)+x88));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x89 = INT32_MAX;
	int16_t x90 = INT16_MIN;
	int64_t x91 = -222690812951200978LL;
	int32_t x92 = INT32_MIN;
	int64_t t21 = -484838873174316LL;

	t21 = (x89&((x90^x91)+x92));

	if (t21 != 1353939758LL) { NG(); } else { ; }
	
}

void f22(void) {
	static volatile int32_t x93 = -1;
	uint32_t x94 = 828049124U;
	int32_t x95 = INT32_MIN;
	int16_t x96 = INT16_MIN;
	uint32_t t22 = 85U;

	t22 = (x93&((x94^x95)+x96));

	if (t22 != 2975500004U) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x98 = INT16_MAX;
	int64_t x99 = -1LL;

	t23 = (x97&((x98^x99)+x100));

	if (t23 != 51LL) { NG(); } else { ; }
	
}

void f24(void) {
	int32_t x101 = INT32_MIN;
	int32_t x102 = INT32_MIN;
	int8_t x103 = INT8_MAX;
	uint16_t x104 = 449U;

	t24 = (x101&((x102^x103)+x104));

	if (t24 != INT32_MIN) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x105 = INT64_MIN;
	uint64_t x106 = 77852044607643065LLU;
	int32_t x108 = INT32_MAX;
	uint64_t t25 = 33222178374138780LLU;

	t25 = (x105&((x106^x107)+x108));

	if (t25 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x109 = 1;
	static volatile uint32_t t26 = 251023U;

	t26 = (x109&((x110^x111)+x112));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x113 = INT8_MIN;
	int16_t x114 = 1930;
	static uint16_t x116 = UINT16_MAX;
	volatile int32_t t27 = -113567;

	t27 = (x113&((x114^x115)+x116));

	if (t27 != 34688) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x117 = INT32_MIN;
	static int8_t x120 = -1;
	static volatile int64_t t28 = -4645143795928LL;

	t28 = (x117&((x118^x119)+x120));

	if (t28 != 9223372034707292160LL) { NG(); } else { ; }
	
}

void f29(void) {
	int32_t x122 = -1134070;
	uint8_t x123 = UINT8_MAX;
	int16_t x124 = INT16_MAX;

	t29 = (x121&((x122^x123)+x124));

	if (t29 != -1101068) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x130 = INT8_MIN;
	int32_t x131 = -1;
	uint64_t x132 = UINT64_MAX;
	uint64_t t30 = 31172116026012LLU;

	t30 = (x129&((x130^x131)+x132));

	if (t30 != 10LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x133 = INT8_MAX;
	int32_t x134 = -6823453;
	int32_t x135 = INT32_MAX;
	int8_t x136 = INT8_MIN;
	int32_t t31 = -1333862;

	t31 = (x133&((x134^x135)+x136));

	if (t31 != 28) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x137 = INT16_MAX;
	int8_t x138 = 6;
	volatile uint64_t x139 = 565330394692LLU;
	int8_t x140 = INT8_MIN;
	static volatile uint64_t t32 = 2242885LLU;

	t32 = (x137&((x138^x139)+x140));

	if (t32 != 15810LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x145 = INT64_MIN;
	int16_t x146 = INT16_MIN;
	uint8_t x147 = 10U;
	int8_t x148 = INT8_MAX;
	volatile int64_t t33 = INT64_MIN;

	t33 = (x145&((x146^x147)+x148));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x149 = INT16_MIN;
	static int8_t x150 = 1;

	t34 = (x149&((x150^x151)+x152));

	if (t34 != 890018772568211456LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x157 = UINT8_MAX;
	volatile int8_t x158 = INT8_MIN;
	int64_t x160 = -68932LL;

	t35 = (x157&((x158^x159)+x160));

	if (t35 != 59LL) { NG(); } else { ; }
	
}

void f36(void) {
	static volatile int8_t x161 = INT8_MIN;
	int32_t x162 = -1;
	int8_t x163 = INT8_MIN;
	volatile int16_t x164 = INT16_MIN;

	t36 = (x161&((x162^x163)+x164));

	if (t36 != -32768) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x165 = INT32_MAX;
	static uint8_t x166 = 59U;
	uint8_t x167 = 1U;
	int64_t x168 = INT64_MIN;
	static int64_t t37 = -21119805410007LL;

	t37 = (x165&((x166^x167)+x168));

	if (t37 != 58LL) { NG(); } else { ; }
	
}

void f38(void) {
	uint16_t x169 = UINT16_MAX;
	volatile uint64_t x170 = 9015LLU;
	int64_t x171 = -1LL;

	t38 = (x169&((x170^x171)+x172));

	if (t38 != 56520LLU) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x173 = INT32_MAX;
	volatile int32_t x174 = INT32_MIN;
	uint32_t x176 = 90U;
	volatile int64_t t39 = 0LL;

	t39 = (x173&((x174^x175)+x176));

	if (t39 != 217371LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x177 = -1;
	int16_t x178 = 2577;
	int32_t x179 = INT32_MIN;
	uint64_t t40 = 265280762124LLU;

	t40 = (x177&((x178^x179)+x180));

	if (t40 != 1425903797814LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x185 = 171;
	int8_t x186 = -1;
	int64_t x188 = INT64_MAX;
	volatile uint64_t t41 = 54395422666105164LLU;

	t41 = (x185&((x186^x187)+x188));

	if (t41 != 2LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = 1U;
	int64_t x191 = 10632009650LL;
	int16_t x192 = -2;
	volatile int64_t t42 = 686LL;

	t42 = (x189&((x190^x191)+x192));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	uint64_t x193 = 1458013980LLU;
	uint64_t x194 = 78LLU;
	int64_t x195 = INT64_MIN;
	uint16_t x196 = UINT16_MAX;

	t43 = (x193&((x194^x195)+x196));

	if (t43 != 65548LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x197 = -1LL;
	uint64_t x198 = 351886225LLU;
	int32_t x199 = INT32_MIN;
	static uint64_t t44 = 2061LLU;

	t44 = (x197&((x198^x199)+x200));

	if (t44 != 18446744071913921425LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x201 = UINT16_MAX;
	uint32_t x202 = 239076U;
	volatile int64_t x203 = INT64_MIN;
	volatile int16_t x204 = -1;
	static int64_t t45 = -3704243643033917811LL;

	t45 = (x201&((x202^x203)+x204));

	if (t45 != 42467LL) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x205 = INT64_MIN;
	int8_t x207 = -1;
	volatile int64_t x208 = 14073389LL;
	volatile int64_t t46 = 106883468761LL;

	t46 = (x205&((x206^x207)+x208));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	static uint16_t x210 = 13U;
	uint8_t x212 = UINT8_MAX;
	int64_t t47 = -4872673793578378LL;

	t47 = (x209&((x210^x211)+x212));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x214 = INT64_MIN;
	volatile uint8_t x216 = 1U;

	t48 = (x213&((x214^x215)+x216));

	if (t48 != 9223372036854772530LL) { NG(); } else { ; }
	
}

void f49(void) {
	static int32_t x221 = 4925;
	int64_t x222 = 38430585384LL;
	static int64_t x223 = -12030121627192LL;
	int64_t t49 = -1LL;

	t49 = (x221&((x222^x223)+x224));

	if (t49 != 828LL) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x225 = -9;
	static int16_t x227 = INT16_MAX;
	int32_t x228 = INT32_MIN;
	volatile int64_t t50 = 7346135027942945LL;

	t50 = (x225&((x226^x227)+x228));

	if (t50 != 9223372034707259392LL) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x230 = INT16_MIN;
	uint8_t x232 = 3U;
	volatile int64_t t51 = 20LL;

	t51 = (x229&((x230^x231)+x232));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static volatile int16_t x238 = INT16_MAX;

	t52 = (x237&((x238^x239)+x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	static int32_t x241 = 31504;
	static uint32_t x242 = UINT32_MAX;
	int8_t x243 = -1;
	int8_t x244 = INT8_MAX;
	volatile uint32_t t53 = 12920U;

	t53 = (x241&((x242^x243)+x244));

	if (t53 != 16U) { NG(); } else { ; }
	
}

void f54(void) {
	static uint64_t x250 = 116395920LLU;
	uint8_t x252 = 32U;

	t54 = (x249&((x250^x251)+x252));

	if (t54 != 259LLU) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x258 = 27;
	int8_t x259 = 1;

	t55 = (x257&((x258^x259)+x260));

	if (t55 != 26) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x261 = INT8_MAX;
	uint8_t x262 = 5U;
	int32_t x263 = 1533;
	volatile int64_t x264 = -1LL;

	t56 = (x261&((x262^x263)+x264));

	if (t56 != 119LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x265 = 1;
	volatile int8_t x266 = INT8_MIN;
	uint8_t x267 = UINT8_MAX;
	volatile int32_t t57 = 507851729;

	t57 = (x265&((x266^x267)+x268));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x269 = INT64_MIN;
	static volatile int16_t x270 = INT16_MAX;
	static int8_t x271 = -1;
	static uint64_t x272 = 2871144LLU;

	t58 = (x269&((x270^x271)+x272));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x273 = INT64_MIN;
	volatile int32_t x274 = INT32_MAX;
	int64_t x275 = INT64_MIN;
	uint16_t x276 = 1U;
	static int64_t t59 = INT64_MIN;

	t59 = (x273&((x274^x275)+x276));

	if (t59 != INT64_MIN) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x278 = 1;
	static int8_t x279 = INT8_MAX;
	uint8_t x280 = 3U;
	int32_t t60 = -50653;

	t60 = (x277&((x278^x279)+x280));

	if (t60 != 129) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int16_t x281 = -1;
	volatile int32_t x282 = -49;
	volatile int64_t x283 = -1960698974LL;
	volatile int32_t x284 = -1;
	static volatile int64_t t61 = 4123628165634894LL;

	t61 = (x281&((x282^x283)+x284));

	if (t61 != 1960698988LL) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x285 = -3;
	int8_t x286 = -1;
	volatile int8_t x287 = INT8_MIN;
	static uint64_t x288 = 87764LLU;
	volatile uint64_t t62 = 96146LLU;

	t62 = (x285&((x286^x287)+x288));

	if (t62 != 87889LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x294 = -27;
	int16_t x295 = 14631;
	int64_t x296 = INT64_MAX;
	volatile uint64_t t63 = 10413322506LLU;

	t63 = (x293&((x294^x295)+x296));

	if (t63 != 9223372036854761153LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x298 = 4U;
	int8_t x299 = INT8_MIN;
	uint16_t x300 = UINT16_MAX;
	volatile int32_t t64 = 316;

	t64 = (x297&((x298^x299)+x300));

	if (t64 != 65411) { NG(); } else { ; }
	
}

void f65(void) {
	int32_t x301 = INT32_MIN;
	int8_t x303 = 1;
	static volatile uint16_t x304 = UINT16_MAX;
	static int32_t t65 = -789032;

	t65 = (x301&((x302^x303)+x304));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint8_t x305 = 17U;
	int16_t x306 = -956;
	int8_t x307 = 23;
	int32_t x308 = -1;
	int32_t t66 = 453;

	t66 = (x305&((x306^x307)+x308));

	if (t66 != 16) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x313 = -1;
	volatile int8_t x314 = 1;
	int8_t x315 = INT8_MAX;
	uint16_t x316 = 4502U;
	volatile int32_t t67 = 0;

	t67 = (x313&((x314^x315)+x316));

	if (t67 != 4628) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x319 = 25;
	uint32_t t68 = 772944U;

	t68 = (x317&((x318^x319)+x320));

	if (t68 != 4294967076U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x322 = INT16_MAX;
	int16_t x323 = -1;
	uint64_t x324 = 11827445027963LLU;
	static volatile uint64_t t69 = 40606LLU;

	t69 = (x321&((x322^x323)+x324));

	if (t69 != 3LLU) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x325 = UINT32_MAX;
	int32_t x326 = INT32_MIN;
	int16_t x327 = -1;
	int32_t x328 = INT32_MIN;
	uint32_t t70 = UINT32_MAX;

	t70 = (x325&((x326^x327)+x328));

	if (t70 != UINT32_MAX) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x329 = INT16_MIN;
	int32_t x330 = INT32_MIN;
	uint32_t x331 = 79036863U;
	uint32_t t71 = 3721U;

	t71 = (x329&((x330^x331)+x332));

	if (t71 != 2226520064U) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t t72 = 30654624LLU;

	t72 = (x333&((x334^x335)+x336));

	if (t72 != 0LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint16_t x337 = 2U;
	volatile int64_t x338 = -1LL;
	uint16_t x339 = 428U;
	static int64_t t73 = -2946788LL;

	t73 = (x337&((x338^x339)+x340));

	if (t73 != 2LL) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x342 = UINT32_MAX;
	int8_t x344 = -1;

	t74 = (x341&((x342^x343)+x344));

	if (t74 != 32766U) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x345 = 7395073U;
	uint32_t x346 = 699208191U;
	volatile int8_t x347 = -2;
	int16_t x348 = -1307;
	static uint32_t t75 = 1951671160U;

	t75 = (x345&((x346^x347)+x348));

	if (t75 != 5292032U) { NG(); } else { ; }
	
}

void f76(void) {
	uint32_t x349 = UINT32_MAX;
	volatile int64_t x351 = INT64_MIN;
	int64_t x352 = 20LL;

	t76 = (x349&((x350^x351)+x352));

	if (t76 != 889LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x353 = 39;
	uint16_t x354 = UINT16_MAX;
	uint32_t x355 = 197U;
	volatile int32_t x356 = INT32_MAX;
	volatile uint32_t t77 = 2844U;

	t77 = (x353&((x354^x355)+x356));

	if (t77 != 33U) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x357 = -1;
	int32_t x358 = INT32_MAX;
	volatile int8_t x359 = INT8_MIN;
	static uint32_t x360 = UINT32_MAX;
	uint32_t t78 = 15816418U;

	t78 = (x357&((x358^x359)+x360));

	if (t78 != 2147483774U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x362 = 0;
	uint64_t x364 = UINT64_MAX;

	t79 = (x361&((x362^x363)+x364));

	if (t79 != 32767LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int32_t x365 = INT32_MIN;
	int16_t x366 = -1;
	int8_t x367 = -1;
	volatile int64_t x368 = -1181346638LL;
	volatile int64_t t80 = 186411LL;

	t80 = (x365&((x366^x367)+x368));

	if (t80 != -2147483648LL) { NG(); } else { ; }
	
}

void f81(void) {
	int64_t x369 = 35839168750354LL;
	static int32_t x371 = INT32_MIN;
	int64_t x372 = 14LL;
	volatile uint64_t t81 = 57LLU;

	t81 = (x369&((x370^x371)+x372));

	if (t81 != 35837207117826LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x373 = INT8_MIN;
	int8_t x375 = INT8_MAX;
	int64_t x376 = -1LL;
	int64_t t82 = 1LL;

	t82 = (x373&((x374^x375)+x376));

	if (t82 != 0LL) { NG(); } else { ; }
	
}

void f83(void) {
	int16_t x377 = -1;
	uint32_t x378 = 26662U;
	volatile int8_t x379 = INT8_MIN;
	int32_t x380 = -1;
	volatile uint32_t t83 = 224375424U;

	t83 = (x377&((x378^x379)+x380));

	if (t83 != 4294940581U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint16_t x381 = 149U;
	int64_t x382 = -1LL;
	int64_t x383 = 4257268352643408821LL;

	t84 = (x381&((x382^x383)+x384));

	if (t84 != 1LL) { NG(); } else { ; }
	
}

void f85(void) {
	volatile int32_t x385 = 115;
	int64_t x386 = 648865301LL;
	int8_t x388 = -1;
	uint64_t t85 = 46853398LLU;

	t85 = (x385&((x386^x387)+x388));

	if (t85 != 96LLU) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int8_t x393 = 1;
	static int32_t x395 = INT32_MIN;
	volatile int16_t x396 = INT16_MIN;
	int32_t t86 = 5;

	t86 = (x393&((x394^x395)+x396));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x397 = 442049U;
	int16_t x399 = -791;
	volatile int16_t x400 = 6241;
	static uint32_t t87 = 11220U;

	t87 = (x397&((x398^x399)+x400));

	if (t87 != 5185U) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x401 = INT16_MIN;
	uint16_t x402 = UINT16_MAX;
	int16_t x403 = INT16_MAX;
	volatile int8_t x404 = INT8_MAX;
	static volatile int32_t t88 = 1;

	t88 = (x401&((x402^x403)+x404));

	if (t88 != 32768) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x405 = 26400;
	uint16_t x406 = 2U;
	volatile uint8_t x407 = 3U;
	uint64_t t89 = 230465LLU;

	t89 = (x405&((x406^x407)+x408));

	if (t89 != 1312LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x409 = INT64_MIN;
	int32_t x411 = 0;
	int32_t x412 = INT32_MIN;
	int64_t t90 = INT64_MIN;

	t90 = (x409&((x410^x411)+x412));

	if (t90 != INT64_MIN) { NG(); } else { ; }
	
}

void f91(void) {
	static int32_t x417 = INT32_MAX;
	int64_t x418 = 0LL;
	uint8_t x419 = 16U;
	int16_t x420 = INT16_MIN;
	int64_t t91 = 477LL;

	t91 = (x417&((x418^x419)+x420));

	if (t91 != 2147450896LL) { NG(); } else { ; }
	
}

void f92(void) {
	uint16_t x421 = 2610U;
	int64_t x424 = -159LL;
	uint64_t t92 = 402597283610720046LLU;

	t92 = (x421&((x422^x423)+x424));

	if (t92 != 2592LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint8_t x429 = 7U;
	uint8_t x430 = 1U;
	static int16_t x431 = INT16_MIN;
	static uint64_t x432 = UINT64_MAX;
	static volatile uint64_t t93 = 2180000647108677LLU;

	t93 = (x429&((x430^x431)+x432));

	if (t93 != 0LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static int32_t x433 = 556639270;
	int8_t x434 = INT8_MIN;
	int8_t x435 = -1;
	int8_t x436 = -1;
	int32_t t94 = 31306632;

	t94 = (x433&((x434^x435)+x436));

	if (t94 != 38) { NG(); } else { ; }
	
}

void f95(void) {
	int8_t x438 = INT8_MIN;
	int16_t x439 = INT16_MIN;
	int32_t x440 = INT32_MIN;
	volatile int32_t t95 = INT32_MIN;

	t95 = (x437&((x438^x439)+x440));

	if (t95 != INT32_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x441 = UINT8_MAX;
	static volatile uint32_t x442 = UINT32_MAX;
	int64_t x443 = INT64_MIN;
	uint16_t x444 = UINT16_MAX;
	int64_t t96 = -5971996382LL;

	t96 = (x441&((x442^x443)+x444));

	if (t96 != 254LL) { NG(); } else { ; }
	
}

void f97(void) {
	static uint16_t x445 = 45U;
	static volatile uint16_t x447 = 1225U;
	int8_t x448 = INT8_MAX;
	volatile int32_t t97 = -985807129;

	t97 = (x445&((x446^x447)+x448));

	if (t97 != 8) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x449 = 40;
	int32_t x450 = INT32_MAX;
	uint8_t x452 = 0U;
	volatile uint64_t t98 = 4118979000367223311LLU;

	t98 = (x449&((x450^x451)+x452));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x453 = -1LL;
	volatile int32_t x454 = -1;
	uint8_t x455 = UINT8_MAX;
	volatile int64_t x456 = -7546641966116LL;
	volatile int64_t t99 = 178810422847109LL;

	t99 = (x453&((x454^x455)+x456));

	if (t99 != -7546641966372LL) { NG(); } else { ; }
	
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

