#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = 14;
uint8_t x5 = 117U;
int16_t x7 = INT16_MIN;
uint64_t t1 = 207968960LLU;
static int32_t x12 = -1;
int64_t x14 = INT64_MIN;
int16_t x17 = -1;
int32_t x24 = INT32_MIN;
int64_t x27 = -12915210LL;
int16_t x28 = 3167;
volatile int64_t t6 = 4370475965393469LL;
static int32_t x30 = -1;
volatile int32_t t7 = 1369;
uint8_t x36 = 4U;
uint16_t x42 = 79U;
uint64_t x46 = 748336246LLU;
int64_t x58 = INT64_MIN;
uint32_t x60 = UINT32_MAX;
int8_t x64 = INT8_MIN;
static uint64_t x68 = 91837754LLU;
volatile int32_t t20 = -3871062;
static volatile int32_t x93 = 3546135;
uint64_t x96 = 877LLU;
uint64_t x98 = 81323436649327880LLU;
static volatile uint16_t x99 = 10157U;
int64_t x102 = -1LL;
volatile uint32_t x116 = 2U;
int32_t t27 = 1472;
static int32_t x123 = 1;
int32_t x124 = INT32_MIN;
int64_t x126 = 655LL;
volatile int32_t t30 = -462749007;
int64_t t31 = 450936241233157LL;
volatile int32_t x139 = 101;
volatile int64_t x140 = INT64_MIN;
static int64_t t33 = -261321LL;
int16_t x148 = INT16_MIN;
int64_t t34 = 3434105476783339240LL;
uint64_t x149 = 122753LLU;
int8_t x151 = -1;
uint32_t x154 = UINT32_MAX;
int64_t x156 = INT64_MIN;
uint64_t t37 = 677820488735340LLU;
int16_t x171 = -1;
volatile int32_t t41 = INT32_MIN;
int64_t x185 = 44LL;
uint16_t x195 = UINT16_MAX;
uint32_t x196 = UINT32_MAX;
int16_t x201 = INT16_MIN;
uint8_t x206 = 30U;
volatile int32_t x208 = -332827105;
int64_t x211 = INT64_MIN;
int32_t t54 = -14;
int64_t x232 = 2283558009936265009LL;
static int32_t x241 = -338063381;
static volatile int64_t t58 = 616941001114648338LL;
uint32_t x247 = UINT32_MAX;
int64_t x253 = INT64_MIN;
static uint64_t x263 = UINT64_MAX;
static volatile int64_t x264 = 1000LL;
volatile uint16_t x267 = UINT16_MAX;
volatile int64_t t64 = 1312473363314261LL;
static uint8_t x270 = 95U;
int32_t x276 = INT32_MIN;
static volatile uint32_t t68 = 2U;
int64_t x286 = -64392381336087843LL;
int64_t t69 = 8260628335523237LL;
static int8_t x300 = -6;
volatile int64_t t72 = -88460434LL;
int16_t x303 = 3;
volatile int16_t x305 = -1;
int8_t x313 = -59;
int64_t x320 = 295516130753666LL;
volatile uint32_t x324 = 210413U;
int16_t x326 = INT16_MIN;
uint16_t x332 = UINT16_MAX;
int64_t t80 = -54858LL;
int32_t x338 = -1;
uint32_t x342 = UINT32_MAX;
uint8_t x344 = 1U;
volatile int32_t t83 = INT32_MIN;
volatile uint64_t t91 = 19234436LLU;
static int32_t x386 = -1;
int8_t x390 = -1;
uint64_t x392 = 1909255464955180LLU;
int16_t x404 = -1;
static volatile int32_t t97 = -3704;


void f0(void) {
	int32_t x2 = -749491;
	uint16_t x3 = 1U;
	int16_t x4 = INT16_MIN;
	static volatile int32_t t0 = 322;

	t0 = (x1&(x2^(x3%x4)));

	if (t0 != 12) { NG(); } else { ; }
	
}

void f1(void) {
	uint16_t x6 = UINT16_MAX;
	uint64_t x8 = 59904022067047LLU;

	t1 = (x5&(x6^(x7%x8)));

	if (t1 != 101LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x9 = INT64_MIN;
	volatile int16_t x10 = INT16_MAX;
	int64_t x11 = 33523861387LL;
	int64_t t2 = -1557381519LL;

	t2 = (x9&(x10^(x11%x12)));

	if (t2 != 0LL) { NG(); } else { ; }
	
}

void f3(void) {
	static int64_t x13 = 934937914563915209LL;
	int64_t x15 = INT64_MIN;
	volatile int64_t x16 = 10379655306520LL;
	int64_t t3 = -5LL;

	t3 = (x13&(x14^(x15%x16)));

	if (t3 != 934936796060459072LL) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x18 = 747921553;
	int8_t x19 = 1;
	int32_t x20 = INT32_MIN;
	volatile int32_t t4 = -247759;

	t4 = (x17&(x18^(x19%x20)));

	if (t4 != 747921552) { NG(); } else { ; }
	
}

void f5(void) {
	int8_t x21 = INT8_MIN;
	uint16_t x22 = 2U;
	volatile int64_t x23 = 4537658326220LL;
	int64_t t5 = -391417513382626LL;

	t5 = (x21&(x22^(x23%x24)));

	if (t5 != 25377920LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint8_t x25 = 0U;
	int32_t x26 = -1;

	t6 = (x25&(x26^(x27%x28)));

	if (t6 != 0LL) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int32_t x29 = -1;
	int32_t x31 = 527451292;
	int32_t x32 = INT32_MAX;

	t7 = (x29&(x30^(x31%x32)));

	if (t7 != -527451293) { NG(); } else { ; }
	
}

void f8(void) {
	volatile uint32_t x33 = UINT32_MAX;
	static int16_t x34 = 0;
	int32_t x35 = -1;
	uint32_t t8 = UINT32_MAX;

	t8 = (x33&(x34^(x35%x36)));

	if (t8 != UINT32_MAX) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x37 = -1;
	int64_t x38 = -1LL;
	static volatile uint8_t x39 = 20U;
	static int8_t x40 = INT8_MIN;
	int64_t t9 = -917919LL;

	t9 = (x37&(x38^(x39%x40)));

	if (t9 != -21LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x41 = -3;
	uint16_t x43 = 9785U;
	volatile int64_t x44 = 38562631LL;
	volatile int64_t t10 = -182LL;

	t10 = (x41&(x42^(x43%x44)));

	if (t10 != 9844LL) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int32_t x45 = 59093;
	int64_t x47 = -1LL;
	static uint16_t x48 = 142U;
	static uint64_t t11 = 5111LLU;

	t11 = (x45&(x46^(x47%x48)));

	if (t11 != 17025LLU) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x53 = 22649U;
	volatile int32_t x54 = INT32_MIN;
	static int64_t x55 = 30225690744243483LL;
	int64_t x56 = INT64_MIN;
	volatile int64_t t12 = -1728785796209LL;

	t12 = (x53&(x54^(x55%x56)));

	if (t12 != 16409LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile uint8_t x57 = 16U;
	int8_t x59 = -1;
	int64_t t13 = 13635819331LL;

	t13 = (x57&(x58^(x59%x60)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x61 = INT16_MIN;
	int64_t x62 = INT64_MIN;
	int8_t x63 = -1;
	int64_t t14 = -80309928LL;

	t14 = (x61&(x62^(x63%x64)));

	if (t14 != 9223372036854743040LL) { NG(); } else { ; }
	
}

void f15(void) {
	volatile int64_t x65 = INT64_MIN;
	uint64_t x66 = 16553259694LLU;
	int8_t x67 = -1;
	static volatile uint64_t t15 = 50LLU;

	t15 = (x65&(x66^(x67%x68)));

	if (t15 != 0LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int64_t x69 = INT64_MIN;
	static volatile int32_t x70 = INT32_MIN;
	static int32_t x71 = -7557550;
	volatile int32_t x72 = INT32_MIN;
	static int64_t t16 = 1LL;

	t16 = (x69&(x70^(x71%x72)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = -40838924;
	uint32_t x75 = 25047099U;
	static int32_t x76 = INT32_MIN;
	uint32_t t17 = 3866U;

	t17 = (x73&(x74^(x75%x76)));

	if (t17 != 4243515520U) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x77 = -1;
	int32_t x78 = -1;
	uint64_t x79 = UINT64_MAX;
	int16_t x80 = INT16_MIN;
	uint64_t t18 = 7048882823560925LLU;

	t18 = (x77&(x78^(x79%x80)));

	if (t18 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f19(void) {
	volatile uint16_t x81 = UINT16_MAX;
	int16_t x82 = INT16_MIN;
	uint16_t x83 = 2996U;
	volatile uint8_t x84 = 87U;
	int32_t t19 = -3;

	t19 = (x81&(x82^(x83%x84)));

	if (t19 != 32806) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int8_t x85 = -1;
	int32_t x86 = INT32_MIN;
	int16_t x87 = INT16_MAX;
	int16_t x88 = INT16_MIN;

	t20 = (x85&(x86^(x87%x88)));

	if (t20 != -2147450881) { NG(); } else { ; }
	
}

void f21(void) {
	uint8_t x89 = 75U;
	volatile uint64_t x90 = 27402589701140680LLU;
	int16_t x91 = -1;
	int32_t x92 = INT32_MIN;
	volatile uint64_t t21 = 52011007286864181LLU;

	t21 = (x89&(x90^(x91%x92)));

	if (t21 != 3LLU) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x94 = 524U;
	volatile int16_t x95 = -1;
	volatile uint64_t t22 = 473LLU;

	t22 = (x93&(x94^(x95%x96)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	volatile uint64_t x97 = UINT64_MAX;
	uint64_t x100 = 243507556105673764LLU;
	uint64_t t23 = 1362LLU;

	t23 = (x97&(x98^(x99%x100)));

	if (t23 != 81323436649319077LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x101 = -3922;
	static uint16_t x103 = 181U;
	volatile uint64_t x104 = 83LLU;
	uint64_t t24 = 31LLU;

	t24 = (x101&(x102^(x103%x104)));

	if (t24 != 18446744073709547680LLU) { NG(); } else { ; }
	
}

void f25(void) {
	volatile int8_t x105 = INT8_MIN;
	uint16_t x106 = UINT16_MAX;
	int32_t x107 = -33509190;
	int16_t x108 = -1;
	volatile int32_t t25 = 2609;

	t25 = (x105&(x106^(x107%x108)));

	if (t25 != 65408) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x113 = INT16_MAX;
	static uint64_t x114 = 3108197LLU;
	int16_t x115 = -3404;
	uint64_t t26 = 80LLU;

	t26 = (x113&(x114^(x115%x116)));

	if (t26 != 28005LLU) { NG(); } else { ; }
	
}

void f27(void) {
	volatile int8_t x117 = INT8_MIN;
	int32_t x118 = INT32_MIN;
	uint16_t x119 = UINT16_MAX;
	int32_t x120 = INT32_MIN;

	t27 = (x117&(x118^(x119%x120)));

	if (t27 != -2147418240) { NG(); } else { ; }
	
}

void f28(void) {
	int8_t x121 = INT8_MAX;
	static int32_t x122 = INT32_MAX;
	volatile int32_t t28 = 1211276;

	t28 = (x121&(x122^(x123%x124)));

	if (t28 != 126) { NG(); } else { ; }
	
}

void f29(void) {
	uint32_t x125 = UINT32_MAX;
	static volatile int64_t x127 = 1102576296654586564LL;
	uint8_t x128 = 8U;
	int64_t t29 = 4996818LL;

	t29 = (x125&(x126^(x127%x128)));

	if (t29 != 651LL) { NG(); } else { ; }
	
}

void f30(void) {
	static int32_t x129 = INT32_MAX;
	int8_t x130 = 4;
	int32_t x131 = 116;
	static int32_t x132 = 3108407;

	t30 = (x129&(x130^(x131%x132)));

	if (t30 != 112) { NG(); } else { ; }
	
}

void f31(void) {
	uint16_t x133 = 4821U;
	static int64_t x134 = 1LL;
	int16_t x135 = -1;
	uint32_t x136 = UINT32_MAX;

	t31 = (x133&(x134^(x135%x136)));

	if (t31 != 1LL) { NG(); } else { ; }
	
}

void f32(void) {
	static int32_t x137 = INT32_MIN;
	volatile int32_t x138 = INT32_MIN;
	volatile int64_t t32 = 112770035LL;

	t32 = (x137&(x138^(x139%x140)));

	if (t32 != -2147483648LL) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x141 = INT64_MIN;
	uint32_t x142 = 3U;
	int32_t x143 = INT32_MIN;
	uint32_t x144 = 253544382U;

	t33 = (x141&(x142^(x143%x144)));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	static int64_t x145 = 982707623706062913LL;
	int16_t x146 = INT16_MAX;
	int16_t x147 = -1;

	t34 = (x145&(x146^(x147%x148)));

	if (t34 != 982707623706034176LL) { NG(); } else { ; }
	
}

void f35(void) {
	int32_t x150 = INT32_MIN;
	volatile uint64_t x152 = 1078085739759575438LLU;
	volatile uint64_t t35 = 5805942372LLU;

	t35 = (x149&(x150^(x151%x152)));

	if (t35 != 83329LLU) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x153 = UINT64_MAX;
	int16_t x155 = INT16_MIN;
	volatile uint64_t t36 = 2LLU;

	t36 = (x153&(x154^(x155%x156)));

	if (t36 != 18446744069414617087LLU) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int64_t x157 = INT64_MIN;
	int16_t x158 = -1;
	uint8_t x159 = 3U;
	static uint64_t x160 = 3881519335331322LLU;

	t37 = (x157&(x158^(x159%x160)));

	if (t37 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t x161 = 59057570;
	int8_t x162 = INT8_MIN;
	volatile int64_t x163 = 910LL;
	int8_t x164 = INT8_MAX;
	int64_t t38 = -129468521LL;

	t38 = (x161&(x162^(x163%x164)));

	if (t38 != 59057536LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x165 = 37839804695LL;
	int64_t x166 = 27596LL;
	uint16_t x167 = 151U;
	int64_t x168 = INT64_MIN;
	static volatile int64_t t39 = -11388551774773LL;

	t39 = (x165&(x166^(x167%x168)));

	if (t39 != 2323LL) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x169 = -103LL;
	int64_t x170 = -4808963410131LL;
	volatile int8_t x172 = INT8_MAX;
	int64_t t40 = -7532LL;

	t40 = (x169&(x170^(x171%x172)));

	if (t40 != 4808963410064LL) { NG(); } else { ; }
	
}

void f41(void) {
	int16_t x173 = -1;
	int32_t x174 = INT32_MAX;
	int8_t x175 = -1;
	volatile int32_t x176 = -91999;

	t41 = (x173&(x174^(x175%x176)));

	if (t41 != INT32_MIN) { NG(); } else { ; }
	
}

void f42(void) {
	uint32_t x177 = 514547U;
	int32_t x178 = INT32_MIN;
	int64_t x179 = INT64_MIN;
	uint64_t x180 = 243591520389LLU;
	static volatile uint64_t t42 = 17LLU;

	t42 = (x177&(x178^(x179%x180)));

	if (t42 != 49251LLU) { NG(); } else { ; }
	
}

void f43(void) {
	volatile uint16_t x181 = UINT16_MAX;
	uint16_t x182 = 15U;
	uint32_t x183 = 248497751U;
	int32_t x184 = INT32_MIN;
	static uint32_t t43 = 1020090U;

	t43 = (x181&(x182^(x183%x184)));

	if (t43 != 50776U) { NG(); } else { ; }
	
}

void f44(void) {
	static int8_t x186 = -6;
	uint64_t x187 = 52829034LLU;
	int8_t x188 = INT8_MIN;
	uint64_t t44 = 758651325780LLU;

	t44 = (x185&(x186^(x187%x188)));

	if (t44 != 0LLU) { NG(); } else { ; }
	
}

void f45(void) {
	uint16_t x189 = UINT16_MAX;
	int16_t x190 = 1;
	uint32_t x191 = 19933878U;
	int64_t x192 = INT64_MIN;
	int64_t t45 = 121740LL;

	t45 = (x189&(x190^(x191%x192)));

	if (t45 != 10935LL) { NG(); } else { ; }
	
}

void f46(void) {
	uint64_t x193 = UINT64_MAX;
	volatile int32_t x194 = INT32_MIN;
	volatile uint64_t t46 = 154918462977737859LLU;

	t46 = (x193&(x194^(x195%x196)));

	if (t46 != 2147549183LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x197 = -3;
	uint64_t x198 = 6202611536817688LLU;
	uint64_t x199 = UINT64_MAX;
	uint8_t x200 = 15U;
	volatile uint64_t t47 = 7248825LLU;

	t47 = (x197&(x198^(x199%x200)));

	if (t47 != 6202611536817688LLU) { NG(); } else { ; }
	
}

void f48(void) {
	int32_t x202 = INT32_MIN;
	static int64_t x203 = INT64_MIN;
	int16_t x204 = INT16_MIN;
	volatile int64_t t48 = 334917095816LL;

	t48 = (x201&(x202^(x203%x204)));

	if (t48 != -2147483648LL) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int32_t x205 = INT32_MIN;
	int64_t x207 = -288185145529954565LL;
	volatile int64_t t49 = 1LL;

	t49 = (x205&(x206^(x207%x208)));

	if (t49 != -2147483648LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x209 = UINT8_MAX;
	volatile int32_t x210 = INT32_MIN;
	int8_t x212 = INT8_MAX;
	int64_t t50 = -1748795114LL;

	t50 = (x209&(x210^(x211%x212)));

	if (t50 != 255LL) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x213 = INT8_MIN;
	int32_t x214 = -3193183;
	int16_t x215 = INT16_MAX;
	static int8_t x216 = -33;
	volatile int32_t t51 = -3748592;

	t51 = (x213&(x214^(x215%x216)));

	if (t51 != -3193216) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x217 = INT16_MIN;
	int8_t x218 = INT8_MIN;
	int8_t x219 = INT8_MIN;
	int16_t x220 = INT16_MAX;
	int32_t t52 = 220364858;

	t52 = (x217&(x218^(x219%x220)));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint16_t x221 = 12949U;
	static uint64_t x222 = UINT64_MAX;
	uint64_t x223 = 1253LLU;
	volatile uint32_t x224 = UINT32_MAX;
	static volatile uint64_t t53 = 127044545656487347LLU;

	t53 = (x221&(x222^(x223%x224)));

	if (t53 != 12816LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x225 = INT8_MIN;
	int32_t x226 = INT32_MAX;
	static int16_t x227 = 14898;
	static int8_t x228 = 1;

	t54 = (x225&(x226^(x227%x228)));

	if (t54 != 2147483520) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x229 = INT16_MIN;
	int32_t x230 = 17190446;
	volatile int8_t x231 = -1;
	int64_t t55 = -40LL;

	t55 = (x229&(x230^(x231%x232)));

	if (t55 != -17203200LL) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x233 = INT32_MAX;
	static int16_t x234 = -1;
	int8_t x235 = INT8_MAX;
	static volatile uint32_t x236 = 365U;
	uint32_t t56 = 1U;

	t56 = (x233&(x234^(x235%x236)));

	if (t56 != 2147483520U) { NG(); } else { ; }
	
}

void f57(void) {
	int64_t x237 = -1LL;
	uint32_t x238 = 314U;
	uint32_t x239 = 127921561U;
	int16_t x240 = -1;
	volatile int64_t t57 = -1875479846852016413LL;

	t57 = (x237&(x238^(x239%x240)));

	if (t57 != 127921315LL) { NG(); } else { ; }
	
}

void f58(void) {
	static int64_t x242 = INT64_MAX;
	static int16_t x243 = INT16_MAX;
	static uint32_t x244 = UINT32_MAX;

	t58 = (x241&(x242^(x243%x244)));

	if (t58 != 9223372036516708352LL) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x245 = -1LL;
	uint32_t x246 = 24619522U;
	int32_t x248 = -1034625;
	volatile int64_t t59 = 2073767072149858207LL;

	t59 = (x245&(x246^(x247%x248)));

	if (t59 != 24667010LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int64_t x249 = INT64_MIN;
	static uint16_t x250 = 27423U;
	uint64_t x251 = 536170230LLU;
	uint16_t x252 = 1529U;
	volatile uint64_t t60 = 4443353297887640LLU;

	t60 = (x249&(x250^(x251%x252)));

	if (t60 != 0LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile uint16_t x254 = 975U;
	static int32_t x255 = INT32_MIN;
	int32_t x256 = INT32_MIN;
	int64_t t61 = -93291LL;

	t61 = (x253&(x254^(x255%x256)));

	if (t61 != 0LL) { NG(); } else { ; }
	
}

void f62(void) {
	uint32_t x257 = UINT32_MAX;
	int32_t x258 = INT32_MIN;
	int32_t x259 = -1;
	volatile int8_t x260 = INT8_MAX;
	volatile uint32_t t62 = 56421940U;

	t62 = (x257&(x258^(x259%x260)));

	if (t62 != 2147483647U) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x261 = UINT8_MAX;
	int32_t x262 = -13;
	uint64_t t63 = 784816860LLU;

	t63 = (x261&(x262^(x263%x264)));

	if (t63 != 148LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int64_t x265 = INT64_MAX;
	volatile int16_t x266 = -1;
	uint16_t x268 = 41U;

	t64 = (x265&(x266^(x267%x268)));

	if (t64 != 9223372036854775790LL) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int8_t x269 = INT8_MIN;
	int8_t x271 = -3;
	volatile int32_t x272 = -27;
	volatile int32_t t65 = 146280;

	t65 = (x269&(x270^(x271%x272)));

	if (t65 != -128) { NG(); } else { ; }
	
}

void f66(void) {
	volatile int32_t x273 = -53578195;
	static volatile int64_t x274 = INT64_MIN;
	uint64_t x275 = 21923727982LLU;
	volatile uint64_t t66 = 214042643003857635LLU;

	t66 = (x273&(x274^(x275%x276)));

	if (t66 != 9223372058744848940LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int64_t x277 = INT64_MAX;
	int32_t x278 = INT32_MIN;
	volatile int8_t x279 = INT8_MIN;
	static uint64_t x280 = UINT64_MAX;
	uint64_t t67 = 639161LLU;

	t67 = (x277&(x278^(x279%x280)));

	if (t67 != 2147483520LLU) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int32_t x281 = INT32_MIN;
	uint32_t x282 = 1550U;
	int16_t x283 = INT16_MIN;
	uint32_t x284 = 1080U;

	t68 = (x281&(x282^(x283%x284)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	volatile int8_t x285 = INT8_MAX;
	uint8_t x287 = 1U;
	static uint8_t x288 = UINT8_MAX;

	t69 = (x285&(x286^(x287%x288)));

	if (t69 != 92LL) { NG(); } else { ; }
	
}

void f70(void) {
	uint32_t x289 = 9349U;
	int64_t x290 = INT64_MAX;
	volatile int8_t x291 = -1;
	int16_t x292 = -47;
	volatile int64_t t70 = -88118493793LL;

	t70 = (x289&(x290^(x291%x292)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	volatile uint8_t x293 = UINT8_MAX;
	volatile uint16_t x294 = 13443U;
	int16_t x295 = -1;
	static int8_t x296 = 28;
	volatile int32_t t71 = -39;

	t71 = (x293&(x294^(x295%x296)));

	if (t71 != 124) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x297 = INT64_MAX;
	static int64_t x298 = -1LL;
	int8_t x299 = INT8_MAX;

	t72 = (x297&(x298^(x299%x300)));

	if (t72 != 9223372036854775806LL) { NG(); } else { ; }
	
}

void f73(void) {
	volatile int16_t x301 = -3;
	uint16_t x302 = 18211U;
	static int32_t x304 = -62937;
	int32_t t73 = 9201525;

	t73 = (x301&(x302^(x303%x304)));

	if (t73 != 18208) { NG(); } else { ; }
	
}

void f74(void) {
	int16_t x306 = INT16_MIN;
	static volatile int16_t x307 = INT16_MAX;
	int64_t x308 = -327LL;
	volatile int64_t t74 = -464340262863LL;

	t74 = (x305&(x306^(x307%x308)));

	if (t74 != -32701LL) { NG(); } else { ; }
	
}

void f75(void) {
	uint32_t x314 = 19U;
	volatile uint16_t x315 = 4675U;
	uint64_t x316 = 252717885LLU;
	uint64_t t75 = 1975272863348387LLU;

	t75 = (x313&(x314^(x315%x316)));

	if (t75 != 4672LLU) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x317 = UINT8_MAX;
	volatile int32_t x318 = INT32_MIN;
	volatile int64_t x319 = 20155270LL;
	int64_t t76 = 152020637242594LL;

	t76 = (x317&(x318^(x319%x320)));

	if (t76 != 134LL) { NG(); } else { ; }
	
}

void f77(void) {
	static uint8_t x321 = 23U;
	int64_t x322 = 216034070LL;
	static uint32_t x323 = 34561075U;
	static volatile int64_t t77 = 193375LL;

	t77 = (x321&(x322^(x323%x324)));

	if (t77 != 1LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x325 = UINT32_MAX;
	static uint8_t x327 = 16U;
	uint32_t x328 = 8024936U;
	volatile uint32_t t78 = 48U;

	t78 = (x325&(x326^(x327%x328)));

	if (t78 != 4294934544U) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x329 = INT16_MIN;
	int64_t x330 = -1LL;
	uint16_t x331 = UINT16_MAX;
	volatile int64_t t79 = 652280883LL;

	t79 = (x329&(x330^(x331%x332)));

	if (t79 != -32768LL) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x333 = 7473762LL;
	int8_t x334 = -4;
	int8_t x335 = INT8_MIN;
	static int16_t x336 = -1;

	t80 = (x333&(x334^(x335%x336)));

	if (t80 != 7473760LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x337 = INT32_MIN;
	uint8_t x339 = 2U;
	int64_t x340 = 89LL;
	volatile int64_t t81 = -130941630090120LL;

	t81 = (x337&(x338^(x339%x340)));

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	static uint32_t x341 = 22678U;
	static volatile int16_t x343 = 4433;
	uint32_t t82 = 360U;

	t82 = (x341&(x342^(x343%x344)));

	if (t82 != 22678U) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int32_t x345 = INT32_MIN;
	int8_t x346 = -1;
	static volatile int32_t x347 = INT32_MAX;
	static volatile int32_t x348 = -129;

	t83 = (x345&(x346^(x347%x348)));

	if (t83 != INT32_MIN) { NG(); } else { ; }
	
}

void f84(void) {
	int8_t x349 = INT8_MAX;
	int8_t x350 = INT8_MIN;
	volatile int16_t x351 = INT16_MIN;
	int16_t x352 = -7193;
	int32_t t84 = 408410;

	t84 = (x349&(x350^(x351%x352)));

	if (t84 != 100) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x353 = INT16_MAX;
	int16_t x354 = -1;
	volatile int32_t x355 = INT32_MAX;
	int8_t x356 = INT8_MIN;
	volatile int32_t t85 = -12;

	t85 = (x353&(x354^(x355%x356)));

	if (t85 != 32640) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x357 = 7698U;
	volatile int32_t x358 = -16175043;
	static uint32_t x359 = 38861U;
	int8_t x360 = 2;
	uint32_t t86 = 2U;

	t86 = (x357&(x358^(x359%x360)));

	if (t86 != 4112U) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x361 = 236348071;
	uint32_t x362 = UINT32_MAX;
	static int8_t x363 = INT8_MAX;
	int16_t x364 = INT16_MIN;
	static volatile uint32_t t87 = 66U;

	t87 = (x361&(x362^(x363%x364)));

	if (t87 != 236348032U) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x365 = INT64_MIN;
	uint16_t x366 = 226U;
	uint8_t x367 = 8U;
	static int8_t x368 = INT8_MIN;
	volatile int64_t t88 = -2917297341LL;

	t88 = (x365&(x366^(x367%x368)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x369 = -3;
	int32_t x370 = -1;
	uint64_t x371 = 2543462101LLU;
	int64_t x372 = INT64_MAX;
	volatile uint64_t t89 = 218228646LLU;

	t89 = (x369&(x370^(x371%x372)));

	if (t89 != 18446744071166089512LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int64_t x373 = -1LL;
	int8_t x374 = 0;
	uint32_t x375 = 0U;
	int16_t x376 = INT16_MAX;
	int64_t t90 = 126388239042LL;

	t90 = (x373&(x374^(x375%x376)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x377 = INT8_MAX;
	uint64_t x378 = 90543LLU;
	int32_t x379 = INT32_MAX;
	uint32_t x380 = 10873U;

	t91 = (x377&(x378^(x379%x380)));

	if (t91 != 34LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint64_t x381 = UINT64_MAX;
	int32_t x382 = INT32_MAX;
	int32_t x383 = INT32_MAX;
	int16_t x384 = -1;
	volatile uint64_t t92 = 129997809068LLU;

	t92 = (x381&(x382^(x383%x384)));

	if (t92 != 2147483647LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x385 = 31U;
	int8_t x387 = INT8_MIN;
	uint64_t x388 = UINT64_MAX;
	volatile uint64_t t93 = 2367LLU;

	t93 = (x385&(x386^(x387%x388)));

	if (t93 != 31LLU) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint16_t x389 = 13U;
	int16_t x391 = INT16_MIN;
	volatile uint64_t t94 = 106LLU;

	t94 = (x389&(x390^(x391%x392)));

	if (t94 != 9LLU) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x393 = -1;
	uint32_t x394 = UINT32_MAX;
	int32_t x395 = 13296;
	int64_t x396 = -1LL;
	volatile int64_t t95 = -154642601492325315LL;

	t95 = (x393&(x394^(x395%x396)));

	if (t95 != 4294967295LL) { NG(); } else { ; }
	
}

void f96(void) {
	int64_t x397 = -1LL;
	int32_t x398 = INT32_MIN;
	uint8_t x399 = UINT8_MAX;
	int64_t x400 = INT64_MIN;
	static volatile int64_t t96 = 21054741769082111LL;

	t96 = (x397&(x398^(x399%x400)));

	if (t96 != -2147483393LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint8_t x401 = UINT8_MAX;
	int8_t x402 = INT8_MIN;
	int8_t x403 = 1;

	t97 = (x401&(x402^(x403%x404)));

	if (t97 != 128) { NG(); } else { ; }
	
}

void f98(void) {
	uint64_t x405 = 233819886LLU;
	int32_t x406 = INT32_MAX;
	int64_t x407 = INT64_MIN;
	int64_t x408 = INT64_MIN;
	volatile uint64_t t98 = 9831101807LLU;

	t98 = (x405&(x406^(x407%x408)));

	if (t98 != 233819886LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile int32_t x409 = 1;
	uint32_t x410 = UINT32_MAX;
	int32_t x411 = 5656559;
	uint64_t x412 = 292969798312440466LLU;
	volatile uint64_t t99 = 51587391462511944LLU;

	t99 = (x409&(x410^(x411%x412)));

	if (t99 != 0LLU) { NG(); } else { ; }
	
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

