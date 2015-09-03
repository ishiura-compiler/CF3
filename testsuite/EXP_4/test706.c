#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int8_t x1 = -9;
int16_t x3 = -1;
uint64_t x4 = 55485LLU;
uint32_t t1 = 28892060U;
volatile uint64_t t2 = 4191213302139695720LLU;
int64_t x21 = -3391315LL;
uint16_t x37 = 4647U;
int64_t x38 = INT64_MIN;
int32_t x47 = -1;
volatile int32_t x48 = INT32_MIN;
volatile int8_t x62 = INT8_MIN;
uint16_t x71 = 48U;
int16_t x77 = INT16_MIN;
static volatile uint32_t x78 = UINT32_MAX;
static uint32_t x87 = 110498140U;
uint32_t t13 = 45U;
static int8_t x92 = INT8_MAX;
volatile int32_t t14 = 7820854;
int32_t t15 = 49;
int32_t x104 = INT32_MAX;
uint16_t x121 = 31U;
uint32_t x122 = 24U;
static volatile int8_t x123 = -1;
int16_t x125 = -1;
int64_t x128 = -56LL;
uint8_t x137 = 20U;
static uint8_t x147 = 1U;
int8_t x148 = INT8_MIN;
int32_t x153 = -233;
static uint8_t x188 = 14U;
static uint64_t t34 = 2015LLU;
volatile int32_t x192 = -239;
volatile int32_t t35 = -59617322;
static volatile int8_t x193 = INT8_MIN;
static uint32_t x195 = 155U;
uint16_t x198 = UINT16_MAX;
int32_t x210 = INT32_MIN;
int64_t x211 = INT64_MAX;
int8_t x237 = INT8_MAX;
static int16_t x242 = 109;
int64_t x243 = INT64_MAX;
static int16_t x262 = INT16_MAX;
int64_t x272 = -110LL;
static uint8_t x274 = 7U;
uint8_t x278 = 21U;
uint16_t x313 = 5U;
static int8_t x330 = -6;
volatile int64_t x334 = -1LL;
volatile int32_t x336 = INT32_MIN;
volatile int32_t x339 = -293;
volatile uint64_t x344 = 10658362LLU;
static uint64_t t56 = 7084657957038LLU;
int16_t x350 = -1;
int64_t x357 = -196430087454LL;
static int32_t x369 = -61959;
int16_t x370 = INT16_MIN;
uint32_t x372 = 56U;
volatile uint32_t t61 = 178724410U;
static uint32_t x373 = 139U;
static uint64_t t62 = 66166702836LLU;
int64_t x377 = -18004795788819LL;
uint8_t x388 = UINT8_MAX;
int32_t x389 = INT32_MAX;
uint64_t t65 = 5832882431LLU;
int64_t x402 = -1LL;
static int64_t x412 = INT64_MAX;
volatile int16_t x422 = INT16_MIN;
volatile int64_t x423 = 26LL;
static int32_t x426 = INT32_MIN;
int16_t x428 = INT16_MIN;
volatile uint8_t x431 = 118U;
volatile int16_t x436 = INT16_MIN;
uint32_t x463 = 519661U;
static int64_t x464 = INT64_MIN;
uint8_t x465 = 2U;
int16_t x472 = 3649;
int64_t x494 = -1LL;
static int8_t x495 = INT8_MIN;
uint64_t x504 = 12094873198645LLU;
volatile int64_t x505 = INT64_MAX;
static volatile int8_t x514 = INT8_MIN;
static int32_t t84 = -633393849;
uint32_t x520 = UINT32_MAX;
uint16_t x537 = 1U;
volatile uint64_t x540 = 64496099803351LLU;
uint16_t x544 = UINT16_MAX;
int8_t x546 = -51;
int64_t x547 = -1LL;
int32_t x551 = -1;
volatile int16_t x562 = -1;
volatile int64_t x563 = INT64_MAX;
static volatile uint32_t x568 = UINT32_MAX;
static uint64_t t93 = 20138739LLU;
volatile int64_t x569 = INT64_MIN;
int8_t x576 = -1;
uint16_t x579 = 12948U;
static uint64_t t96 = 11026405707248LLU;


void f0(void) {
	static int32_t x2 = -112982091;
	volatile uint64_t t0 = 5114579153701582041LLU;

	t0 = (x1/(x2*(x3%x4)));

	if (t0 != 1LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x5 = -1;
	int32_t x6 = INT32_MAX;
	uint32_t x7 = 1156019111U;
	static int8_t x8 = -1;

	t1 = (x5/(x6*(x7%x8)));

	if (t1 != 4U) { NG(); } else { ; }
	
}

void f2(void) {
	static int16_t x9 = -28;
	uint32_t x10 = 3002257U;
	volatile uint64_t x11 = 228LLU;
	uint64_t x12 = UINT64_MAX;

	t2 = (x9/(x10*(x11%x12)));

	if (t2 != 26948649716LLU) { NG(); } else { ; }
	
}

void f3(void) {
	uint16_t x17 = 51U;
	int16_t x18 = INT16_MIN;
	uint8_t x19 = 1U;
	volatile int8_t x20 = -8;
	volatile int32_t t3 = 1112;

	t3 = (x17/(x18*(x19%x20)));

	if (t3 != 0) { NG(); } else { ; }
	
}

void f4(void) {
	int8_t x22 = INT8_MIN;
	int64_t x23 = INT64_MIN;
	int64_t x24 = 1178330547107711LL;
	static int64_t t4 = -126LL;

	t4 = (x21/(x22*(x23%x24)));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile int32_t x29 = INT32_MIN;
	static int32_t x30 = -3097;
	int64_t x31 = INT64_MIN;
	int8_t x32 = 3;
	volatile int64_t t5 = -907221994228682LL;

	t5 = (x29/(x30*(x31%x32)));

	if (t5 != -346703LL) { NG(); } else { ; }
	
}

void f6(void) {
	uint64_t x39 = UINT64_MAX;
	int8_t x40 = INT8_MIN;
	uint64_t t6 = 123345439600374116LLU;

	t6 = (x37/(x38*(x39%x40)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	volatile uint16_t x45 = 261U;
	uint32_t x46 = 1548192809U;
	volatile uint32_t t7 = 4303686U;

	t7 = (x45/(x46*(x47%x48)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	uint32_t x61 = 58902178U;
	uint16_t x63 = 15059U;
	static uint8_t x64 = UINT8_MAX;
	uint32_t t8 = 116557U;

	t8 = (x61/(x62*(x63%x64)));

	if (t8 != 0U) { NG(); } else { ; }
	
}

void f9(void) {
	uint64_t x65 = UINT64_MAX;
	int8_t x66 = 1;
	static int64_t x67 = INT64_MAX;
	volatile uint32_t x68 = UINT32_MAX;
	volatile uint64_t t9 = 199327457139582302LLU;

	t9 = (x65/(x66*(x67%x68)));

	if (t9 != 8589934596LLU) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int8_t x69 = INT8_MIN;
	uint64_t x70 = 442LLU;
	int32_t x72 = INT32_MIN;
	volatile uint64_t t10 = 191789696573343LLU;

	t10 = (x69/(x70*(x71%x72)));

	if (t10 != 869473231226883LLU) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x73 = INT8_MIN;
	int32_t x74 = 2703323;
	int16_t x75 = INT16_MIN;
	uint64_t x76 = UINT64_MAX;
	volatile uint64_t t11 = 14545191533166LLU;

	t11 = (x73/(x74*(x75%x76)));

	if (t11 != 1LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x79 = -1LL;
	int64_t x80 = 1955592812LL;
	volatile int64_t t12 = -596927855147194LL;

	t12 = (x77/(x78*(x79%x80)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	volatile int8_t x85 = 1;
	static uint32_t x86 = 31U;
	static uint16_t x88 = 35U;

	t13 = (x85/(x86*(x87%x88)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int32_t x89 = INT32_MAX;
	int16_t x90 = -955;
	int8_t x91 = INT8_MIN;

	t14 = (x89/(x90*(x91%x92)));

	if (t14 != 2248673) { NG(); } else { ; }
	
}

void f15(void) {
	int8_t x93 = 17;
	volatile uint8_t x94 = 12U;
	int16_t x95 = -2;
	uint8_t x96 = UINT8_MAX;

	t15 = (x93/(x94*(x95%x96)));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	volatile int8_t x97 = 2;
	volatile int32_t x98 = INT32_MAX;
	uint32_t x99 = 3U;
	static int64_t x100 = INT64_MIN;
	volatile int64_t t16 = 135176LL;

	t16 = (x97/(x98*(x99%x100)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x101 = -3890;
	int16_t x102 = INT16_MAX;
	volatile int16_t x103 = INT16_MIN;
	volatile int32_t t17 = -1749;

	t17 = (x101/(x102*(x103%x104)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int8_t x105 = INT8_MAX;
	uint16_t x106 = UINT16_MAX;
	uint64_t x107 = UINT64_MAX;
	int8_t x108 = INT8_MIN;
	uint64_t t18 = 4357790140754812LLU;

	t18 = (x105/(x106*(x107%x108)));

	if (t18 != 0LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x117 = 1269129;
	uint32_t x118 = 297009097U;
	volatile uint32_t x119 = UINT32_MAX;
	int64_t x120 = INT64_MIN;
	volatile int64_t t19 = -814856432LL;

	t19 = (x117/(x118*(x119%x120)));

	if (t19 != 0LL) { NG(); } else { ; }
	
}

void f20(void) {
	volatile uint16_t x124 = 58U;
	volatile uint32_t t20 = 108U;

	t20 = (x121/(x122*(x123%x124)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x126 = -2;
	int64_t x127 = -910567866381593937LL;
	int64_t t21 = 172673820315201LL;

	t21 = (x125/(x126*(x127%x128)));

	if (t21 != 0LL) { NG(); } else { ; }
	
}

void f22(void) {
	uint32_t x133 = 0U;
	static int8_t x134 = -1;
	uint8_t x135 = 16U;
	uint16_t x136 = UINT16_MAX;
	volatile uint32_t t22 = 77660432U;

	t22 = (x133/(x134*(x135%x136)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x138 = INT64_MAX;
	static int64_t x139 = -1LL;
	volatile uint32_t x140 = 3629U;
	volatile int64_t t23 = -27103450LL;

	t23 = (x137/(x138*(x139%x140)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x141 = -1;
	uint64_t x142 = UINT64_MAX;
	int64_t x143 = INT64_MIN;
	static uint16_t x144 = 7614U;
	volatile uint64_t t24 = 15348LLU;

	t24 = (x141/(x142*(x143%x144)));

	if (t24 != 2638264312601480LLU) { NG(); } else { ; }
	
}

void f25(void) {
	int8_t x145 = INT8_MIN;
	int32_t x146 = 1034553;
	volatile int32_t t25 = -1;

	t25 = (x145/(x146*(x147%x148)));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	int8_t x149 = INT8_MAX;
	int16_t x150 = INT16_MAX;
	uint8_t x151 = UINT8_MAX;
	uint32_t x152 = 568U;
	volatile uint32_t t26 = 3U;

	t26 = (x149/(x150*(x151%x152)));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x154 = 9;
	static int32_t x155 = -1;
	int8_t x156 = INT8_MAX;
	static int32_t t27 = -59;

	t27 = (x153/(x154*(x155%x156)));

	if (t27 != 25) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int16_t x157 = -1;
	uint8_t x158 = 1U;
	int64_t x159 = INT64_MAX;
	int32_t x160 = INT32_MAX;
	volatile int64_t t28 = 6488545857LL;

	t28 = (x157/(x158*(x159%x160)));

	if (t28 != -1LL) { NG(); } else { ; }
	
}

void f29(void) {
	volatile int32_t x161 = -1;
	int64_t x162 = -1LL;
	static int32_t x163 = 5008;
	uint64_t x164 = 2271377869LLU;
	static uint64_t t29 = 89536LLU;

	t29 = (x161/(x162*(x163%x164)));

	if (t29 != 1LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x165 = 34LLU;
	uint32_t x166 = 2660361U;
	volatile int8_t x167 = INT8_MIN;
	uint16_t x168 = 14740U;
	uint64_t t30 = 477051194150LLU;

	t30 = (x165/(x166*(x167%x168)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x169 = 2213414209374LLU;
	int64_t x170 = INT64_MIN;
	uint64_t x171 = UINT64_MAX;
	volatile int16_t x172 = -120;
	static uint64_t t31 = 48448777943678LLU;

	t31 = (x169/(x170*(x171%x172)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x173 = INT64_MIN;
	int32_t x174 = INT32_MIN;
	static int64_t x175 = -45229LL;
	int64_t x176 = INT64_MIN;
	static volatile int64_t t32 = -1LL;

	t32 = (x173/(x174*(x175%x176)));

	if (t32 != -94960LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x181 = UINT8_MAX;
	int16_t x182 = INT16_MIN;
	int8_t x183 = -1;
	int16_t x184 = INT16_MIN;
	volatile int32_t t33 = -34246;

	t33 = (x181/(x182*(x183%x184)));

	if (t33 != 0) { NG(); } else { ; }
	
}

void f34(void) {
	volatile int32_t x185 = INT32_MIN;
	uint64_t x186 = 2183071145379LLU;
	int16_t x187 = -258;

	t34 = (x185/(x186*(x187%x188)));

	if (t34 != 1LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static volatile int8_t x189 = -1;
	uint8_t x190 = UINT8_MAX;
	volatile int8_t x191 = -1;

	t35 = (x189/(x190*(x191%x192)));

	if (t35 != 0) { NG(); } else { ; }
	
}

void f36(void) {
	int32_t x194 = INT32_MIN;
	int32_t x196 = 18763;
	uint32_t t36 = 2744674U;

	t36 = (x193/(x194*(x195%x196)));

	if (t36 != 1U) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x197 = 53;
	uint16_t x199 = 3725U;
	int32_t x200 = INT32_MIN;
	static int32_t t37 = -362;

	t37 = (x197/(x198*(x199%x200)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	static int16_t x209 = INT16_MAX;
	int8_t x212 = INT8_MIN;
	volatile int64_t t38 = 53877871052153LL;

	t38 = (x209/(x210*(x211%x212)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x213 = -859298165LL;
	int32_t x214 = INT32_MAX;
	static int64_t x215 = 11LL;
	volatile uint64_t x216 = 5617141751LLU;
	static volatile uint64_t t39 = 22553067326236247LLU;

	t39 = (x213/(x214*(x215%x216)));

	if (t39 != 780903145LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static uint64_t x217 = UINT64_MAX;
	volatile int16_t x218 = INT16_MIN;
	static uint8_t x219 = 5U;
	uint32_t x220 = 2079119999U;
	volatile uint64_t t40 = 12818202790LLU;

	t40 = (x217/(x218*(x219%x220)));

	if (t40 != 4295131142LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int64_t x221 = -397536LL;
	int8_t x222 = INT8_MIN;
	int64_t x223 = INT64_MAX;
	int64_t x224 = -226591LL;
	int64_t t41 = -4607807026148115138LL;

	t41 = (x221/(x222*(x223%x224)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	static uint16_t x225 = 1647U;
	static uint16_t x226 = UINT16_MAX;
	int8_t x227 = INT8_MIN;
	int64_t x228 = INT64_MIN;
	int64_t t42 = 184706932165868397LL;

	t42 = (x225/(x226*(x227%x228)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	static volatile uint32_t x238 = 12815109U;
	static int64_t x239 = -1LL;
	int64_t x240 = 27289LL;
	int64_t t43 = -3138897057357LL;

	t43 = (x237/(x238*(x239%x240)));

	if (t43 != 0LL) { NG(); } else { ; }
	
}

void f44(void) {
	static volatile uint32_t x241 = 525879821U;
	int8_t x244 = 9;
	int64_t t44 = -4509268934427LL;

	t44 = (x241/(x242*(x243%x244)));

	if (t44 != 689226LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x245 = UINT64_MAX;
	uint8_t x246 = 2U;
	int16_t x247 = INT16_MIN;
	uint32_t x248 = 376231U;
	volatile uint64_t t45 = 4167331045248LLU;

	t45 = (x245/(x246*(x247%x248)));

	if (t45 != 35796261150629LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x261 = -1;
	int8_t x263 = INT8_MIN;
	static int64_t x264 = -79855LL;
	int64_t t46 = 96322955040281LL;

	t46 = (x261/(x262*(x263%x264)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x269 = 58;
	int32_t x270 = INT32_MIN;
	volatile int8_t x271 = INT8_MAX;
	int64_t t47 = 15232838LL;

	t47 = (x269/(x270*(x271%x272)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint32_t x273 = UINT32_MAX;
	uint32_t x275 = 687932969U;
	int64_t x276 = -121009LL;
	volatile int64_t t48 = -120982404LL;

	t48 = (x273/(x274*(x275%x276)));

	if (t48 != 5207LL) { NG(); } else { ; }
	
}

void f49(void) {
	int32_t x277 = 15457107;
	uint16_t x279 = UINT16_MAX;
	int64_t x280 = INT64_MIN;
	int64_t t49 = 28340516LL;

	t49 = (x277/(x278*(x279%x280)));

	if (t49 != 11LL) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x297 = INT32_MAX;
	int8_t x298 = INT8_MAX;
	uint64_t x299 = 928918506LLU;
	volatile uint64_t x300 = 3195678729LLU;
	uint64_t t50 = 1983128980600260185LLU;

	t50 = (x297/(x298*(x299%x300)));

	if (t50 != 0LLU) { NG(); } else { ; }
	
}

void f51(void) {
	volatile int8_t x314 = INT8_MIN;
	int16_t x315 = -50;
	int64_t x316 = INT64_MIN;
	int64_t t51 = 536368603499LL;

	t51 = (x313/(x314*(x315%x316)));

	if (t51 != 0LL) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x329 = 3U;
	int64_t x331 = 691206564529031718LL;
	int16_t x332 = INT16_MAX;
	int64_t t52 = 129465LL;

	t52 = (x329/(x330*(x331%x332)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int32_t x333 = 9;
	int8_t x335 = 2;
	int64_t t53 = -4085325642925200LL;

	t53 = (x333/(x334*(x335%x336)));

	if (t53 != -4LL) { NG(); } else { ; }
	
}

void f54(void) {
	uint16_t x337 = 20U;
	int8_t x338 = INT8_MIN;
	volatile uint32_t x340 = 143922U;
	volatile uint32_t t54 = 128809227U;

	t54 = (x337/(x338*(x339%x340)));

	if (t54 != 0U) { NG(); } else { ; }
	
}

void f55(void) {
	uint32_t x341 = UINT32_MAX;
	volatile int64_t x342 = -53599759719LL;
	volatile uint64_t x343 = 2904568132990327LLU;
	volatile uint64_t t55 = 1LLU;

	t55 = (x341/(x342*(x343%x344)));

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	int16_t x345 = INT16_MIN;
	static uint64_t x346 = 25931578LLU;
	uint16_t x347 = 36U;
	int8_t x348 = INT8_MAX;

	t56 = (x345/(x346*(x347%x348)));

	if (t56 != 19760060787LLU) { NG(); } else { ; }
	
}

void f57(void) {
	int32_t x349 = -1;
	volatile uint8_t x351 = UINT8_MAX;
	uint64_t x352 = 294274700796LLU;
	volatile uint64_t t57 = 45632LLU;

	t57 = (x349/(x350*(x351%x352)));

	if (t57 != 1LLU) { NG(); } else { ; }
	
}

void f58(void) {
	static int16_t x353 = INT16_MIN;
	int8_t x354 = INT8_MAX;
	uint8_t x355 = UINT8_MAX;
	static int64_t x356 = 10263206864LL;
	volatile int64_t t58 = -48429620LL;

	t58 = (x353/(x354*(x355%x356)));

	if (t58 != -1LL) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x358 = INT32_MIN;
	static volatile int64_t x359 = INT64_MIN;
	uint16_t x360 = 300U;
	int64_t t59 = 0LL;

	t59 = (x357/(x358*(x359%x360)));

	if (t59 != -11LL) { NG(); } else { ; }
	
}

void f60(void) {
	int64_t x365 = 15567025LL;
	static int16_t x366 = INT16_MIN;
	volatile int16_t x367 = INT16_MIN;
	int64_t x368 = INT64_MAX;
	static volatile int64_t t60 = 141209702741LL;

	t60 = (x365/(x366*(x367%x368)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	static uint16_t x371 = 1085U;

	t61 = (x369/(x370*(x371%x372)));

	if (t61 != 1U) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x374 = UINT64_MAX;
	uint8_t x375 = UINT8_MAX;
	uint16_t x376 = UINT16_MAX;

	t62 = (x373/(x374*(x375%x376)));

	if (t62 != 0LLU) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int64_t x378 = -1LL;
	uint32_t x379 = 51503264U;
	uint8_t x380 = UINT8_MAX;
	volatile int64_t t63 = 2479LL;

	t63 = (x377/(x378*(x379%x380)));

	if (t63 != 120837555629LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile int16_t x385 = -97;
	volatile uint32_t x386 = 7553161U;
	int16_t x387 = -1;
	uint32_t t64 = 2U;

	t64 = (x385/(x386*(x387%x388)));

	if (t64 != 1U) { NG(); } else { ; }
	
}

void f65(void) {
	volatile int32_t x390 = 282001;
	uint64_t x391 = UINT64_MAX;
	static volatile int64_t x392 = 42016267217685933LL;

	t65 = (x389/(x390*(x391%x392)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x401 = INT64_MIN;
	int64_t x403 = INT64_MAX;
	volatile int32_t x404 = INT32_MIN;
	volatile int64_t t66 = -67067508306LL;

	t66 = (x401/(x402*(x403%x404)));

	if (t66 != 4294967298LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x405 = 48826973LL;
	static int16_t x406 = -1;
	volatile uint64_t x407 = 47606232225048LLU;
	int64_t x408 = INT64_MIN;
	static volatile uint64_t t67 = 7557142LLU;

	t67 = (x405/(x406*(x407%x408)));

	if (t67 != 0LLU) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x409 = 737299378007297LL;
	int16_t x410 = -1;
	static volatile uint64_t x411 = 861371591491576LLU;
	volatile uint64_t t68 = 10373806LLU;

	t68 = (x409/(x410*(x411%x412)));

	if (t68 != 0LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x413 = INT16_MIN;
	static uint64_t x414 = 32670379560464436LLU;
	int64_t x415 = INT64_MIN;
	int64_t x416 = INT64_MAX;
	uint64_t t69 = 494LLU;

	t69 = (x413/(x414*(x415%x416)));

	if (t69 != 1LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static volatile int32_t x417 = 3064462;
	int32_t x418 = INT32_MIN;
	static uint8_t x419 = 2U;
	uint64_t x420 = UINT64_MAX;
	static uint64_t t70 = 732LLU;

	t70 = (x417/(x418*(x419%x420)));

	if (t70 != 0LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int16_t x421 = -1134;
	uint8_t x424 = UINT8_MAX;
	volatile int64_t t71 = -249636197144792735LL;

	t71 = (x421/(x422*(x423%x424)));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x425 = -1;
	uint64_t x427 = 14LLU;
	static uint64_t t72 = 201LLU;

	t72 = (x425/(x426*(x427%x428)));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x429 = INT16_MIN;
	static uint16_t x430 = UINT16_MAX;
	static uint16_t x432 = UINT16_MAX;
	int32_t t73 = 810755569;

	t73 = (x429/(x430*(x431%x432)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	static volatile int16_t x433 = INT16_MIN;
	uint64_t x434 = UINT64_MAX;
	volatile uint32_t x435 = UINT32_MAX;
	uint64_t t74 = 247220169250073183LLU;

	t74 = (x433/(x434*(x435%x436)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x449 = INT64_MIN;
	uint16_t x450 = 6U;
	int8_t x451 = -1;
	int16_t x452 = -632;
	int64_t t75 = 2310481428030678805LL;

	t75 = (x449/(x450*(x451%x452)));

	if (t75 != 1537228672809129301LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint16_t x461 = 15U;
	volatile int32_t x462 = INT32_MIN;
	volatile int64_t t76 = 640375273LL;

	t76 = (x461/(x462*(x463%x464)));

	if (t76 != 0LL) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x466 = INT8_MIN;
	static int8_t x467 = INT8_MIN;
	int64_t x468 = INT64_MAX;
	volatile int64_t t77 = -3LL;

	t77 = (x465/(x466*(x467%x468)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int32_t x469 = INT32_MIN;
	uint8_t x470 = UINT8_MAX;
	static volatile int32_t x471 = INT32_MAX;
	int32_t t78 = 356099264;

	t78 = (x469/(x470*(x471%x472)));

	if (t78 != -2507) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x485 = -71;
	volatile int16_t x486 = -15;
	uint32_t x487 = 47142U;
	static uint32_t x488 = UINT32_MAX;
	uint32_t t79 = 82U;

	t79 = (x485/(x486*(x487%x488)));

	if (t79 != 1U) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x489 = INT64_MIN;
	int8_t x490 = 44;
	int16_t x491 = INT16_MAX;
	int32_t x492 = INT32_MIN;
	volatile int64_t t80 = 7225337211616LL;

	t80 = (x489/(x490*(x491%x492)));

	if (t80 != -6397353793350LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x493 = INT32_MIN;
	static int8_t x496 = INT8_MAX;
	static volatile int64_t t81 = -7LL;

	t81 = (x493/(x494*(x495%x496)));

	if (t81 != -2147483648LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x501 = -1;
	int64_t x502 = 202LL;
	uint16_t x503 = 12U;
	uint64_t t82 = 347493157LLU;

	t82 = (x501/(x502*(x503%x504)));

	if (t82 != 7610042934698659LLU) { NG(); } else { ; }
	
}

void f83(void) {
	static int32_t x506 = 11573492;
	int16_t x507 = -2;
	static int64_t x508 = 4137LL;
	volatile int64_t t83 = -482188885020304546LL;

	t83 = (x505/(x506*(x507%x508)));

	if (t83 != -398469711512LL) { NG(); } else { ; }
	
}

void f84(void) {
	static uint16_t x513 = UINT16_MAX;
	uint16_t x515 = UINT16_MAX;
	static int8_t x516 = INT8_MAX;

	t84 = (x513/(x514*(x515%x516)));

	if (t84 != -170) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x517 = 63U;
	uint8_t x518 = 1U;
	volatile int64_t x519 = INT64_MIN;
	volatile int64_t t85 = -1099479853882147LL;

	t85 = (x517/(x518*(x519%x520)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x521 = INT32_MIN;
	int16_t x522 = -7;
	uint16_t x523 = 28U;
	volatile int64_t x524 = INT64_MAX;
	int64_t t86 = 27486LL;

	t86 = (x521/(x522*(x523%x524)));

	if (t86 != 10956549LL) { NG(); } else { ; }
	
}

void f87(void) {
	int64_t x533 = 2049902LL;
	int32_t x534 = -13458;
	volatile int16_t x535 = 7204;
	static uint16_t x536 = UINT16_MAX;
	volatile int64_t t87 = 49145808580792838LL;

	t87 = (x533/(x534*(x535%x536)));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x538 = 19966;
	int8_t x539 = -1;
	volatile uint64_t t88 = 111543LLU;

	t88 = (x537/(x538*(x539%x540)));

	if (t88 != 0LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x541 = INT32_MAX;
	uint32_t x542 = UINT32_MAX;
	int32_t x543 = -1;
	uint32_t t89 = 28701U;

	t89 = (x541/(x542*(x543%x544)));

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	uint32_t x545 = 1183702293U;
	int32_t x548 = INT32_MIN;
	static int64_t t90 = -73537052LL;

	t90 = (x545/(x546*(x547%x548)));

	if (t90 != 23209848LL) { NG(); } else { ; }
	
}

void f91(void) {
	int16_t x549 = -1;
	int16_t x550 = INT16_MIN;
	int16_t x552 = INT16_MIN;
	volatile int32_t t91 = -29443;

	t91 = (x549/(x550*(x551%x552)));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static uint16_t x561 = UINT16_MAX;
	uint8_t x564 = 37U;
	static int64_t t92 = 270587143773456694LL;

	t92 = (x561/(x562*(x563%x564)));

	if (t92 != -13107LL) { NG(); } else { ; }
	
}

void f93(void) {
	int16_t x565 = INT16_MIN;
	uint64_t x566 = 246210044625273LLU;
	int64_t x567 = -6942LL;

	t93 = (x565/(x566*(x567%x568)));

	if (t93 != 1LLU) { NG(); } else { ; }
	
}

void f94(void) {
	static uint32_t x570 = 212U;
	volatile int8_t x571 = -3;
	uint8_t x572 = UINT8_MAX;
	static volatile int64_t t94 = 17248004536082LL;

	t94 = (x569/(x570*(x571%x572)));

	if (t94 != -2147483966LL) { NG(); } else { ; }
	
}

void f95(void) {
	uint8_t x573 = 2U;
	uint8_t x574 = UINT8_MAX;
	uint32_t x575 = 677143301U;
	volatile uint32_t t95 = 3U;

	t95 = (x573/(x574*(x575%x576)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x577 = UINT8_MAX;
	int8_t x578 = 13;
	volatile uint64_t x580 = 109673756260LLU;

	t96 = (x577/(x578*(x579%x580)));

	if (t96 != 0LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x581 = -1;
	int16_t x582 = INT16_MIN;
	int64_t x583 = INT64_MIN;
	int16_t x584 = 632;
	int64_t t97 = 165277LL;

	t97 = (x581/(x582*(x583%x584)));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x585 = 4;
	volatile int8_t x586 = -4;
	volatile int32_t x587 = -14;
	static uint64_t x588 = UINT64_MAX;
	uint64_t t98 = 1852231331646630203LLU;

	t98 = (x585/(x586*(x587%x588)));

	if (t98 != 0LLU) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint32_t x589 = 9540145U;
	static uint8_t x590 = 10U;
	uint64_t x591 = 6593595983643718323LLU;
	volatile uint32_t x592 = UINT32_MAX;
	uint64_t t99 = 44053LLU;

	t99 = (x589/(x590*(x591%x592)));

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

