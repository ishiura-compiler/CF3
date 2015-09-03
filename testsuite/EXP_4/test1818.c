#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = -36839640524867LL;
volatile int64_t t0 = -1773412954210LL;
int16_t x8 = -884;
static int32_t x14 = -1;
int64_t x21 = -24390716891982LL;
volatile int64_t t5 = -47600744379LL;
int16_t x26 = INT16_MIN;
volatile int32_t t6 = 15;
int32_t t7 = 23;
static int16_t x36 = 1;
int32_t t8 = 335951273;
int32_t x37 = 1;
int8_t x39 = 20;
int64_t x41 = -127207808LL;
volatile int64_t x53 = -1LL;
int64_t t13 = 285LL;
volatile int64_t x58 = -45944023369LL;
volatile int64_t x59 = INT64_MIN;
uint64_t x62 = UINT64_MAX;
int16_t x68 = INT16_MIN;
uint16_t x69 = 231U;
int32_t x71 = 26;
int64_t x79 = 451700LL;
static uint16_t x84 = 892U;
volatile int32_t t20 = 329;
uint8_t x88 = 97U;
int32_t t21 = 20;
volatile int32_t x91 = -12882948;
int64_t x92 = INT64_MAX;
int64_t x93 = INT64_MAX;
static int32_t x95 = INT32_MIN;
int32_t x100 = INT32_MIN;
int64_t x101 = INT64_MIN;
volatile uint32_t x107 = 78U;
volatile int32_t t27 = -5739;
int32_t x113 = -10460;
volatile uint32_t t29 = 52962U;
static int32_t x121 = 562849;
volatile int64_t x125 = INT64_MAX;
int8_t x132 = INT8_MIN;
uint32_t x135 = 917149813U;
uint64_t x144 = 548866133167105LLU;
uint32_t x149 = UINT32_MAX;
int8_t x152 = INT8_MAX;
int64_t x155 = -1LL;
volatile int8_t x158 = -1;
int32_t t39 = -434;
uint8_t x162 = 72U;
volatile int8_t x165 = 1;
volatile int32_t t41 = 451625;
volatile int64_t x171 = INT64_MIN;
int64_t x177 = -34974307738043372LL;
volatile int32_t t45 = -57;
volatile int16_t x187 = INT16_MIN;
uint32_t x188 = UINT32_MAX;
int32_t t47 = 330442053;
volatile int16_t x195 = -40;
static int32_t x199 = INT32_MAX;
volatile uint16_t x208 = 0U;
volatile int8_t x209 = 1;
int32_t x211 = -1;
static uint32_t x225 = 43U;
static uint16_t x226 = 4172U;
int32_t x227 = 1747165;
int32_t t57 = -14561;
volatile int32_t t58 = -4695064;
int8_t x238 = INT8_MAX;
uint64_t x239 = 204136790758213925LLU;
int8_t x244 = 27;
uint64_t t60 = 3LLU;
static int16_t x245 = -1;
uint16_t x246 = UINT16_MAX;
int64_t x255 = INT64_MAX;
uint16_t x256 = UINT16_MAX;
int64_t x258 = INT64_MAX;
static int32_t x268 = -1;
volatile int16_t x269 = INT16_MAX;
uint64_t x275 = 8671591572022LLU;
int64_t x279 = INT64_MAX;
int32_t x281 = -97059299;
int16_t x282 = INT16_MIN;
int32_t t70 = 15284;
static int32_t x291 = -187180527;
static uint32_t x293 = 228886U;
volatile int64_t x297 = INT64_MAX;
static volatile int64_t t76 = -766794015381403LL;
static volatile int64_t x320 = INT64_MAX;
uint64_t x322 = 120833758LLU;
int64_t x327 = -1LL;
volatile uint8_t x328 = 1U;
int32_t x329 = INT32_MAX;
static volatile int16_t x332 = INT16_MIN;
int32_t t82 = 14982447;
static int32_t x336 = 1;
volatile uint32_t t83 = 102260856U;
int8_t x342 = INT8_MIN;
int16_t x344 = INT16_MAX;
int32_t t85 = 1;
static volatile uint64_t t86 = 1361LLU;
int32_t x349 = -4963;
volatile int16_t x360 = INT16_MAX;
uint32_t x369 = 118311U;
uint32_t x370 = 5U;
volatile int32_t x372 = -1;
volatile int64_t x383 = -19851139131LL;
static int16_t x386 = -1;
int32_t t97 = 196432;


void f0(void) {
	int64_t x1 = INT64_MIN;
	uint16_t x3 = 3729U;
	volatile int32_t x4 = -1;

	t0 = (x1&(x2<=(x3&x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	static volatile int64_t x5 = -83145LL;
	uint16_t x6 = 6602U;
	static uint16_t x7 = UINT16_MAX;
	volatile int64_t t1 = -3928712844979LL;

	t1 = (x5&(x6<=(x7&x8)));

	if (t1 != 1LL) { NG(); } else { ; }
	
}

void f2(void) {
	volatile int16_t x9 = -1;
	uint64_t x10 = 1837613485998LLU;
	int64_t x11 = -34817012746869424LL;
	int16_t x12 = -1;
	volatile int32_t t2 = 477;

	t2 = (x9&(x10<=(x11&x12)));

	if (t2 != 1) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x13 = INT64_MIN;
	int64_t x15 = INT64_MAX;
	int64_t x16 = -1LL;
	volatile int64_t t3 = -4981924875110LL;

	t3 = (x13&(x14<=(x15&x16)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	uint16_t x17 = 2260U;
	static uint8_t x18 = UINT8_MAX;
	int32_t x19 = INT32_MIN;
	int64_t x20 = -1LL;
	static volatile int32_t t4 = -1929;

	t4 = (x17&(x18<=(x19&x20)));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	static int64_t x22 = INT64_MIN;
	int64_t x23 = INT64_MIN;
	volatile int16_t x24 = -5425;

	t5 = (x21&(x22<=(x23&x24)));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x25 = INT32_MAX;
	uint8_t x27 = UINT8_MAX;
	uint32_t x28 = 1U;

	t6 = (x25&(x26<=(x27&x28)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int16_t x29 = -1;
	volatile int8_t x30 = -1;
	volatile int64_t x31 = 2192985865766485LL;
	int32_t x32 = -1;

	t7 = (x29&(x30<=(x31&x32)));

	if (t7 != 1) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x33 = -1;
	volatile int16_t x34 = 30;
	uint64_t x35 = 7195420LLU;

	t8 = (x33&(x34<=(x35&x36)));

	if (t8 != 0) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x38 = UINT64_MAX;
	int32_t x40 = 1;
	volatile int32_t t9 = -1261;

	t9 = (x37&(x38<=(x39&x40)));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x42 = -6415616118LL;
	uint16_t x43 = 385U;
	uint8_t x44 = 50U;
	int64_t t10 = -43LL;

	t10 = (x41&(x42<=(x43&x44)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x45 = UINT8_MAX;
	static uint8_t x46 = UINT8_MAX;
	static int64_t x47 = -202LL;
	int64_t x48 = 491643LL;
	int32_t t11 = 12477053;

	t11 = (x45&(x46<=(x47&x48)));

	if (t11 != 1) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint64_t x49 = 13608LLU;
	uint32_t x50 = 12960121U;
	volatile int16_t x51 = 3114;
	volatile int8_t x52 = 13;
	uint64_t t12 = 45LLU;

	t12 = (x49&(x50<=(x51&x52)));

	if (t12 != 0LLU) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x54 = UINT64_MAX;
	static int32_t x55 = INT32_MIN;
	int32_t x56 = INT32_MAX;

	t13 = (x53&(x54<=(x55&x56)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x57 = 11364384236LL;
	static int16_t x60 = INT16_MAX;
	volatile int64_t t14 = 513LL;

	t14 = (x57&(x58<=(x59&x60)));

	if (t14 != 0LL) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x61 = INT32_MIN;
	int64_t x63 = INT64_MIN;
	volatile uint64_t x64 = UINT64_MAX;
	volatile int32_t t15 = 0;

	t15 = (x61&(x62<=(x63&x64)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = INT16_MIN;
	int8_t x66 = 0;
	int16_t x67 = -1;
	int32_t t16 = 0;

	t16 = (x65&(x66<=(x67&x68)));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x70 = INT64_MIN;
	int16_t x72 = -7310;
	int32_t t17 = -36;

	t17 = (x69&(x70<=(x71&x72)));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int16_t x73 = -6;
	int64_t x74 = INT64_MIN;
	static uint32_t x75 = 1228U;
	volatile uint32_t x76 = 481667571U;
	int32_t t18 = -273005;

	t18 = (x73&(x74<=(x75&x76)));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x77 = UINT32_MAX;
	int64_t x78 = INT64_MIN;
	int16_t x80 = INT16_MAX;
	static uint32_t t19 = 185U;

	t19 = (x77&(x78<=(x79&x80)));

	if (t19 != 1U) { NG(); } else { ; }
	
}

void f20(void) {
	int32_t x81 = -42;
	static int16_t x82 = -1;
	int16_t x83 = INT16_MIN;

	t20 = (x81&(x82<=(x83&x84)));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int32_t x85 = INT32_MIN;
	int64_t x86 = INT64_MAX;
	static uint8_t x87 = 41U;

	t21 = (x85&(x86<=(x87&x88)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = UINT16_MAX;
	volatile int16_t x90 = -1;
	int32_t t22 = 72;

	t22 = (x89&(x90<=(x91&x92)));

	if (t22 != 1) { NG(); } else { ; }
	
}

void f23(void) {
	static volatile int32_t x94 = -1;
	int16_t x96 = INT16_MIN;
	int64_t t23 = 172975980128808LL;

	t23 = (x93&(x94<=(x95&x96)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x97 = 232LLU;
	volatile int16_t x98 = INT16_MIN;
	uint64_t x99 = 43185524582068351LLU;
	uint64_t t24 = 3271766271185643021LLU;

	t24 = (x97&(x98<=(x99&x100)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	static int64_t x102 = INT64_MIN;
	int32_t x103 = INT32_MAX;
	uint16_t x104 = 2U;
	static int64_t t25 = -7040694666LL;

	t25 = (x101&(x102<=(x103&x104)));

	if (t25 != 0LL) { NG(); } else { ; }
	
}

void f26(void) {
	int64_t x105 = 14071985LL;
	int16_t x106 = INT16_MIN;
	static int8_t x108 = -1;
	int64_t t26 = -2482329445LL;

	t26 = (x105&(x106<=(x107&x108)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x109 = INT8_MAX;
	int8_t x110 = INT8_MIN;
	int16_t x111 = -6062;
	uint32_t x112 = 5697U;

	t27 = (x109&(x110<=(x111&x112)));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x114 = -30;
	int64_t x115 = 6097LL;
	static uint16_t x116 = 338U;
	volatile int32_t t28 = -259965;

	t28 = (x113&(x114<=(x115&x116)));

	if (t28 != 0) { NG(); } else { ; }
	
}

void f29(void) {
	volatile uint32_t x117 = UINT32_MAX;
	volatile uint8_t x118 = 6U;
	uint64_t x119 = UINT64_MAX;
	int32_t x120 = INT32_MIN;

	t29 = (x117&(x118<=(x119&x120)));

	if (t29 != 1U) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x122 = INT16_MIN;
	volatile int16_t x123 = -1870;
	uint64_t x124 = 50072710890169699LLU;
	static int32_t t30 = -738778914;

	t30 = (x121&(x122<=(x123&x124)));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x126 = 290LLU;
	int64_t x127 = -4576579460LL;
	int32_t x128 = 654974654;
	volatile int64_t t31 = -117115LL;

	t31 = (x125&(x126<=(x127&x128)));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x129 = UINT8_MAX;
	volatile int16_t x130 = 38;
	uint16_t x131 = 772U;
	int32_t t32 = 37344610;

	t32 = (x129&(x130<=(x131&x132)));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int8_t x133 = INT8_MIN;
	volatile uint64_t x134 = 9346197622243LLU;
	int8_t x136 = -1;
	int32_t t33 = -505;

	t33 = (x133&(x134<=(x135&x136)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int8_t x137 = INT8_MAX;
	int8_t x138 = -1;
	int32_t x139 = -2;
	int8_t x140 = INT8_MAX;
	static volatile int32_t t34 = 49555556;

	t34 = (x137&(x138<=(x139&x140)));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x141 = INT8_MIN;
	static int32_t x142 = INT32_MAX;
	int32_t x143 = INT32_MAX;
	int32_t t35 = 2932;

	t35 = (x141&(x142<=(x143&x144)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int16_t x145 = INT16_MAX;
	volatile int8_t x146 = INT8_MIN;
	uint32_t x147 = 442U;
	int32_t x148 = 3;
	int32_t t36 = 2911;

	t36 = (x145&(x146<=(x147&x148)));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x150 = UINT64_MAX;
	uint64_t x151 = 102997806LLU;
	volatile uint32_t t37 = 58942259U;

	t37 = (x149&(x150<=(x151&x152)));

	if (t37 != 0U) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x153 = 58U;
	uint8_t x154 = 73U;
	volatile int32_t x156 = 7095618;
	int32_t t38 = 238695;

	t38 = (x153&(x154<=(x155&x156)));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	static uint8_t x157 = 1U;
	int32_t x159 = INT32_MIN;
	int64_t x160 = -1LL;

	t39 = (x157&(x158<=(x159&x160)));

	if (t39 != 0) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x161 = 3371LLU;
	uint16_t x163 = UINT16_MAX;
	volatile uint32_t x164 = 8U;
	static volatile uint64_t t40 = 7041LLU;

	t40 = (x161&(x162<=(x163&x164)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int8_t x166 = INT8_MIN;
	int16_t x167 = -1;
	volatile uint16_t x168 = 226U;

	t41 = (x165&(x166<=(x167&x168)));

	if (t41 != 1) { NG(); } else { ; }
	
}

void f42(void) {
	int16_t x169 = -1;
	volatile int8_t x170 = INT8_MIN;
	uint8_t x172 = 24U;
	int32_t t42 = -4512;

	t42 = (x169&(x170<=(x171&x172)));

	if (t42 != 1) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint32_t x173 = 478288U;
	uint64_t x174 = 437620706930975808LLU;
	uint32_t x175 = UINT32_MAX;
	int64_t x176 = 0LL;
	static uint32_t t43 = 28559U;

	t43 = (x173&(x174<=(x175&x176)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	uint64_t x178 = UINT64_MAX;
	uint16_t x179 = 70U;
	int64_t x180 = INT64_MIN;
	volatile int64_t t44 = -32649061295772LL;

	t44 = (x177&(x178<=(x179&x180)));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	int16_t x181 = INT16_MIN;
	int32_t x182 = -1;
	int64_t x183 = 246452295LL;
	int8_t x184 = -14;

	t45 = (x181&(x182<=(x183&x184)));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	int32_t x185 = INT32_MIN;
	volatile int16_t x186 = 83;
	volatile int32_t t46 = -10122;

	t46 = (x185&(x186<=(x187&x188)));

	if (t46 != 0) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = INT8_MIN;
	static int8_t x190 = INT8_MIN;
	static uint64_t x191 = 467296902767816835LLU;
	int16_t x192 = INT16_MIN;

	t47 = (x189&(x190<=(x191&x192)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static int16_t x193 = INT16_MIN;
	int32_t x194 = -1;
	uint8_t x196 = UINT8_MAX;
	int32_t t48 = 2877144;

	t48 = (x193&(x194<=(x195&x196)));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static int64_t x197 = INT64_MAX;
	int64_t x198 = INT64_MIN;
	volatile int16_t x200 = 5;
	volatile int64_t t49 = -29271373194106LL;

	t49 = (x197&(x198<=(x199&x200)));

	if (t49 != 1LL) { NG(); } else { ; }
	
}

void f50(void) {
	static volatile int32_t x201 = -844;
	volatile int8_t x202 = INT8_MIN;
	uint64_t x203 = 1543LLU;
	static volatile int32_t x204 = 770869147;
	static volatile int32_t t50 = 110;

	t50 = (x201&(x202<=(x203&x204)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int16_t x205 = 11;
	int8_t x206 = INT8_MIN;
	static volatile int32_t x207 = -1;
	int32_t t51 = 13;

	t51 = (x205&(x206<=(x207&x208)));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int8_t x210 = INT8_MAX;
	volatile uint8_t x212 = 0U;
	volatile int32_t t52 = 6331;

	t52 = (x209&(x210<=(x211&x212)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x213 = 0U;
	static uint64_t x214 = 48609808757LLU;
	uint16_t x215 = 14U;
	volatile int32_t x216 = INT32_MAX;
	int32_t t53 = -1;

	t53 = (x213&(x214<=(x215&x216)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	volatile int32_t x217 = -1;
	static uint32_t x218 = 1206346U;
	int64_t x219 = INT64_MIN;
	volatile uint8_t x220 = 21U;
	volatile int32_t t54 = 224;

	t54 = (x217&(x218<=(x219&x220)));

	if (t54 != 0) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x221 = -162;
	int16_t x222 = INT16_MIN;
	static int32_t x223 = INT32_MAX;
	static int8_t x224 = -1;
	volatile int32_t t55 = -4859618;

	t55 = (x221&(x222<=(x223&x224)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	uint32_t x228 = 1976548U;
	uint32_t t56 = 31U;

	t56 = (x225&(x226<=(x227&x228)));

	if (t56 != 1U) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x229 = 111U;
	static uint64_t x230 = UINT64_MAX;
	static int64_t x231 = -1LL;
	int64_t x232 = INT64_MIN;

	t57 = (x229&(x230<=(x231&x232)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	volatile int32_t x233 = -1343419;
	uint64_t x234 = 2189432437LLU;
	int16_t x235 = -129;
	int64_t x236 = INT64_MIN;

	t58 = (x233&(x234<=(x235&x236)));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	static int64_t x237 = INT64_MAX;
	uint64_t x240 = UINT64_MAX;
	int64_t t59 = -1702757431LL;

	t59 = (x237&(x238<=(x239&x240)));

	if (t59 != 1LL) { NG(); } else { ; }
	
}

void f60(void) {
	uint64_t x241 = 6046655LLU;
	uint16_t x242 = 6U;
	int32_t x243 = -698383480;

	t60 = (x241&(x242<=(x243&x244)));

	if (t60 != 1LLU) { NG(); } else { ; }
	
}

void f61(void) {
	uint32_t x247 = 2041817858U;
	static int16_t x248 = -12241;
	static volatile int32_t t61 = -1147;

	t61 = (x245&(x246<=(x247&x248)));

	if (t61 != 1) { NG(); } else { ; }
	
}

void f62(void) {
	static int8_t x249 = INT8_MIN;
	volatile int8_t x250 = 1;
	uint32_t x251 = 921623084U;
	int8_t x252 = -1;
	int32_t t62 = -1526894;

	t62 = (x249&(x250<=(x251&x252)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint16_t x253 = UINT16_MAX;
	uint32_t x254 = 9364417U;
	volatile int32_t t63 = -1;

	t63 = (x253&(x254<=(x255&x256)));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x257 = INT16_MIN;
	static uint8_t x259 = UINT8_MAX;
	int64_t x260 = INT64_MIN;
	int32_t t64 = 0;

	t64 = (x257&(x258<=(x259&x260)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x261 = INT8_MAX;
	uint8_t x262 = 68U;
	static int16_t x263 = INT16_MIN;
	int16_t x264 = 0;
	volatile int32_t t65 = 7;

	t65 = (x261&(x262<=(x263&x264)));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x265 = 48U;
	volatile int64_t x266 = INT64_MIN;
	volatile int32_t x267 = INT32_MIN;
	volatile int32_t t66 = -1208;

	t66 = (x265&(x266<=(x267&x268)));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	int32_t x270 = 2905197;
	static int32_t x271 = -1;
	volatile int64_t x272 = INT64_MIN;
	int32_t t67 = -7299;

	t67 = (x269&(x270<=(x271&x272)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	static volatile int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	uint64_t x276 = 131216132573536LLU;
	volatile int32_t t68 = -13;

	t68 = (x273&(x274<=(x275&x276)));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint64_t x277 = UINT64_MAX;
	int16_t x278 = -7;
	uint32_t x280 = 450708946U;
	volatile uint64_t t69 = 541848LLU;

	t69 = (x277&(x278<=(x279&x280)));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x283 = 1;
	int64_t x284 = INT64_MIN;

	t70 = (x281&(x282<=(x283&x284)));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint16_t x285 = UINT16_MAX;
	int32_t x286 = -21640002;
	uint8_t x287 = UINT8_MAX;
	uint16_t x288 = 6269U;
	int32_t t71 = -1;

	t71 = (x285&(x286<=(x287&x288)));

	if (t71 != 1) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x289 = 4155041LLU;
	static uint32_t x290 = 9903U;
	static int64_t x292 = INT64_MAX;
	volatile uint64_t t72 = 3852939617413LLU;

	t72 = (x289&(x290<=(x291&x292)));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x294 = UINT32_MAX;
	int8_t x295 = 1;
	static int8_t x296 = INT8_MIN;
	volatile uint32_t t73 = 77848U;

	t73 = (x293&(x294<=(x295&x296)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	uint32_t x298 = 121734799U;
	int32_t x299 = INT32_MAX;
	int64_t x300 = 2135578837LL;
	volatile int64_t t74 = 663219168LL;

	t74 = (x297&(x298<=(x299&x300)));

	if (t74 != 1LL) { NG(); } else { ; }
	
}

void f75(void) {
	static int8_t x301 = 4;
	int64_t x302 = -1LL;
	int8_t x303 = INT8_MIN;
	uint64_t x304 = 214895LLU;
	static int32_t t75 = -1;

	t75 = (x301&(x302<=(x303&x304)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = 8107410145LL;
	volatile int32_t x306 = 0;
	int16_t x307 = INT16_MAX;
	int64_t x308 = INT64_MAX;

	t76 = (x305&(x306<=(x307&x308)));

	if (t76 != 1LL) { NG(); } else { ; }
	
}

void f77(void) {
	int32_t x309 = -1950102;
	uint16_t x310 = 20U;
	static int8_t x311 = 1;
	int8_t x312 = -1;
	int32_t t77 = -41324006;

	t77 = (x309&(x310<=(x311&x312)));

	if (t77 != 0) { NG(); } else { ; }
	
}

void f78(void) {
	int8_t x313 = INT8_MIN;
	uint64_t x314 = 13357271750466786LLU;
	uint64_t x315 = 20150035827LLU;
	uint16_t x316 = 1U;
	int32_t t78 = 11064;

	t78 = (x313&(x314<=(x315&x316)));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int32_t x317 = -66986;
	int64_t x318 = INT64_MIN;
	uint64_t x319 = UINT64_MAX;
	int32_t t79 = 82034;

	t79 = (x317&(x318<=(x319&x320)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x321 = 3U;
	volatile uint32_t x323 = UINT32_MAX;
	uint8_t x324 = UINT8_MAX;
	static int32_t t80 = -10799;

	t80 = (x321&(x322<=(x323&x324)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	uint16_t x325 = 106U;
	int16_t x326 = -148;
	int32_t t81 = -15551349;

	t81 = (x325&(x326<=(x327&x328)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int16_t x330 = INT16_MIN;
	uint16_t x331 = 104U;

	t82 = (x329&(x330<=(x331&x332)));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	static uint32_t x333 = UINT32_MAX;
	int32_t x334 = INT32_MAX;
	uint16_t x335 = 0U;

	t83 = (x333&(x334<=(x335&x336)));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint32_t x337 = 153U;
	int16_t x338 = INT16_MIN;
	int32_t x339 = -8209;
	static int8_t x340 = -1;
	volatile uint32_t t84 = 1U;

	t84 = (x337&(x338<=(x339&x340)));

	if (t84 != 1U) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x341 = INT16_MIN;
	volatile int64_t x343 = 56147925426LL;

	t85 = (x341&(x342<=(x343&x344)));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x345 = 77963460LLU;
	int64_t x346 = -18557592929LL;
	uint16_t x347 = UINT16_MAX;
	int16_t x348 = -71;

	t86 = (x345&(x346<=(x347&x348)));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	static uint16_t x350 = 33U;
	int32_t x351 = -1;
	uint8_t x352 = UINT8_MAX;
	volatile int32_t t87 = -3;

	t87 = (x349&(x350<=(x351&x352)));

	if (t87 != 1) { NG(); } else { ; }
	
}

void f88(void) {
	volatile uint32_t x353 = 3U;
	int8_t x354 = -3;
	uint32_t x355 = 2445U;
	int16_t x356 = INT16_MAX;
	static volatile uint32_t t88 = 0U;

	t88 = (x353&(x354<=(x355&x356)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x357 = INT32_MIN;
	volatile int32_t x358 = INT32_MAX;
	static uint16_t x359 = UINT16_MAX;
	static int32_t t89 = -4558;

	t89 = (x357&(x358<=(x359&x360)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	volatile int16_t x361 = -1;
	int8_t x362 = INT8_MAX;
	static int8_t x363 = INT8_MAX;
	int8_t x364 = 22;
	static volatile int32_t t90 = 1087;

	t90 = (x361&(x362<=(x363&x364)));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x365 = -1LL;
	volatile int8_t x366 = -2;
	volatile int64_t x367 = INT64_MIN;
	static uint8_t x368 = 95U;
	volatile int64_t t91 = -945570LL;

	t91 = (x365&(x366<=(x367&x368)));

	if (t91 != 1LL) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x371 = -481;
	uint32_t t92 = 161646U;

	t92 = (x369&(x370<=(x371&x372)));

	if (t92 != 1U) { NG(); } else { ; }
	
}

void f93(void) {
	int8_t x373 = -1;
	uint32_t x374 = 182621385U;
	volatile int8_t x375 = INT8_MAX;
	volatile int16_t x376 = INT16_MAX;
	int32_t t93 = -13;

	t93 = (x373&(x374<=(x375&x376)));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x377 = INT8_MAX;
	volatile uint64_t x378 = 21690347LLU;
	int64_t x379 = INT64_MIN;
	int64_t x380 = INT64_MAX;
	volatile int32_t t94 = 65396;

	t94 = (x377&(x378<=(x379&x380)));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	volatile uint64_t x381 = 142907685487LLU;
	static int64_t x382 = -1LL;
	volatile int8_t x384 = -6;
	uint64_t t95 = 335LLU;

	t95 = (x381&(x382<=(x383&x384)));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x385 = -76;
	static int64_t x387 = -94122238554803857LL;
	int64_t x388 = 108920239006LL;
	static volatile int32_t t96 = 16515;

	t96 = (x385&(x386<=(x387&x388)));

	if (t96 != 0) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x389 = -584;
	volatile uint16_t x390 = 3164U;
	static volatile int32_t x391 = INT32_MIN;
	static int8_t x392 = -19;

	t97 = (x389&(x390<=(x391&x392)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x393 = 63548LLU;
	static int8_t x394 = 4;
	volatile int64_t x395 = INT64_MIN;
	static int8_t x396 = INT8_MAX;
	static volatile uint64_t t98 = 2778LLU;

	t98 = (x393&(x394<=(x395&x396)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	int8_t x397 = -1;
	int32_t x398 = -193961;
	volatile int16_t x399 = INT16_MIN;
	volatile int8_t x400 = INT8_MIN;
	int32_t t99 = 5;

	t99 = (x397&(x398<=(x399&x400)));

	if (t99 != 1) { NG(); } else { ; }
	
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

