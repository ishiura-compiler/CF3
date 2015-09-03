#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int32_t x1 = 22791130;
volatile uint16_t x6 = UINT16_MAX;
int16_t x11 = INT16_MAX;
uint64_t x16 = 13LLU;
int64_t x18 = INT64_MIN;
static volatile int64_t x19 = INT64_MAX;
uint32_t x23 = 1799U;
int8_t x24 = INT8_MIN;
static volatile uint64_t x28 = UINT64_MAX;
volatile uint8_t x37 = 1U;
int64_t t8 = 89038325261504736LL;
static uint64_t t9 = 4LLU;
int8_t x45 = INT8_MIN;
int64_t t10 = -684LL;
volatile uint8_t x50 = 1U;
static volatile int64_t x52 = -1LL;
int16_t x53 = -1;
int8_t x65 = 21;
int16_t x67 = INT16_MIN;
int32_t x68 = 616233;
volatile int32_t t14 = 1333;
uint16_t x74 = UINT16_MAX;
int16_t x78 = 3;
int8_t x80 = 3;
uint64_t t17 = 131146552408177LLU;
uint32_t x96 = 12U;
volatile int8_t x102 = INT8_MIN;
int32_t x122 = INT32_MAX;
static volatile int64_t t23 = -18303183078LL;
static uint64_t t24 = 903LLU;
uint64_t x132 = UINT64_MAX;
static volatile uint64_t t25 = 6869639LLU;
int32_t x145 = -20940;
volatile int8_t x148 = -1;
static int32_t x153 = 52843034;
static int64_t x154 = -31473230007651LL;
int64_t t30 = 106188191509LL;
int8_t x170 = INT8_MIN;
volatile int16_t x173 = INT16_MIN;
int32_t x176 = -1;
static volatile int8_t x179 = INT8_MAX;
int16_t x181 = INT16_MIN;
uint64_t x182 = 7877188693875LLU;
volatile uint64_t x194 = 12959463LLU;
int16_t x199 = INT16_MIN;
volatile uint8_t x203 = 6U;
int16_t x204 = -1;
int8_t x205 = 3;
volatile int32_t x218 = 520080;
int32_t t40 = 369353291;
int64_t x233 = 13218657LL;
uint64_t x235 = 6LLU;
volatile uint64_t t41 = 525LLU;
uint8_t x259 = 48U;
int32_t x261 = 1;
uint64_t x267 = 237LLU;
uint32_t x268 = 243U;
static int8_t x279 = -1;
static int64_t x283 = INT64_MAX;
int64_t t47 = -693933911LL;
uint64_t t48 = 1065258076LLU;
int8_t x289 = INT8_MIN;
int64_t x290 = 3LL;
static int32_t x296 = INT32_MAX;
static uint64_t t50 = 1125446169LLU;
int16_t x298 = INT16_MIN;
volatile uint32_t t52 = 285417692U;
uint8_t x309 = 0U;
volatile int32_t x312 = 33833;
uint8_t x317 = UINT8_MAX;
int64_t x328 = INT64_MIN;
volatile int64_t t56 = 132LL;
int32_t t58 = -946341;
uint16_t x351 = UINT16_MAX;
uint8_t x354 = 1U;
int16_t x355 = -1;
int64_t x370 = 2689284754523LL;
uint32_t x371 = 78U;
int64_t t64 = 2224984629764555855LL;
volatile int64_t t65 = -432640141726184LL;
int8_t x381 = INT8_MAX;
volatile uint64_t t66 = 142942LLU;
static int64_t x386 = INT64_MAX;
int8_t x387 = 27;
uint8_t x392 = 7U;
static int8_t x414 = 0;
static uint16_t x430 = 4U;
uint64_t t75 = 0LLU;
uint16_t x435 = 1U;
volatile int64_t x438 = -128671668LL;
volatile int64_t t77 = -110LL;
volatile int64_t x444 = -1LL;
static volatile uint16_t x457 = 1U;
int16_t x460 = 13324;
int8_t x461 = 4;
int32_t t82 = -10368;
uint8_t x477 = UINT8_MAX;
int32_t x478 = 56;
volatile int32_t t83 = -5;
int64_t x484 = -1LL;
uint64_t t84 = 16942731040032693LLU;
int16_t x485 = INT16_MIN;
int32_t x499 = INT32_MAX;
int8_t x500 = 6;
uint16_t x524 = 109U;
uint64_t x525 = 36126LLU;
int32_t x530 = INT32_MAX;
volatile int16_t x532 = 6219;
int32_t x544 = -3734950;
uint16_t x545 = 2U;
int16_t x546 = INT16_MAX;
uint64_t x549 = UINT64_MAX;
uint64_t x551 = 20824719078216142LLU;
volatile uint16_t x559 = UINT16_MAX;
volatile uint32_t x570 = 14952054U;
uint64_t t99 = 5885468989250LLU;


void f0(void) {
	int64_t x2 = 12887LL;
	volatile int64_t x3 = 1133050690LL;
	uint64_t x4 = 12469447LLU;
	volatile uint64_t t0 = 2601127555236LLU;

	t0 = (x1*(x2/(x3&x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1827;
	uint8_t x7 = 10U;
	int16_t x8 = 3;
	int32_t t1 = 18415252;

	t1 = (x5*(x6/(x7&x8)));

	if (t1 != -59865309) { NG(); } else { ; }
	
}

void f2(void) {
	int16_t x9 = -40;
	int16_t x10 = INT16_MIN;
	int8_t x12 = -3;
	static volatile int32_t t2 = 7925;

	t2 = (x9*(x10/(x11&x12)));

	if (t2 != 40) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = -1;
	uint64_t x14 = 336303594832872LLU;
	int64_t x15 = 96143LL;
	static volatile uint64_t t3 = 4820343076666166677LLU;

	t3 = (x13*(x14/(x15&x16)));

	if (t3 != 18446718204202256780LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int64_t x20 = INT64_MAX;
	volatile int64_t t4 = 655459782253447LL;

	t4 = (x17*(x18/(x19&x20)));

	if (t4 != -2147483647LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x21 = 0U;
	uint8_t x22 = UINT8_MAX;
	uint32_t t5 = 121763306U;

	t5 = (x21*(x22/(x23&x24)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	uint8_t x26 = 0U;
	int64_t x27 = INT64_MIN;
	uint64_t t6 = 134359136664LLU;

	t6 = (x25*(x26/(x27&x28)));

	if (t6 != 0LLU) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x33 = UINT16_MAX;
	uint32_t x34 = 1037403349U;
	static volatile int32_t x35 = 13444899;
	uint64_t x36 = 3846LLU;
	uint64_t t7 = 1085418LLU;

	t7 = (x33*(x34/(x35&x36)));

	if (t7 != 37896400170LLU) { NG(); } else { ; }
	
}

void f8(void) {
	int8_t x38 = INT8_MIN;
	int64_t x39 = -1LL;
	static int8_t x40 = -1;

	t8 = (x37*(x38/(x39&x40)));

	if (t8 != 128LL) { NG(); } else { ; }
	
}

void f9(void) {
	int16_t x41 = INT16_MIN;
	volatile int8_t x42 = -1;
	uint64_t x43 = 78408LLU;
	uint16_t x44 = UINT16_MAX;

	t9 = (x41*(x42/(x43&x44)));

	if (t9 != 8380714678608887808LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x46 = -133244918326260548LL;
	int32_t x47 = 85;
	uint8_t x48 = UINT8_MAX;

	t10 = (x45*(x46/(x47&x48)));

	if (t10 != 200651171126604032LL) { NG(); } else { ; }
	
}

void f11(void) {
	int8_t x49 = INT8_MAX;
	int32_t x51 = INT32_MAX;
	static int64_t t11 = 80271557318LL;

	t11 = (x49*(x50/(x51&x52)));

	if (t11 != 0LL) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int32_t x54 = -97221;
	int64_t x55 = -4469761662012655LL;
	int64_t x56 = INT64_MAX;
	int64_t t12 = 2299LL;

	t12 = (x53*(x54/(x55&x56)));

	if (t12 != 0LL) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x57 = INT16_MIN;
	int8_t x58 = 0;
	uint64_t x59 = UINT64_MAX;
	static int16_t x60 = 12235;
	uint64_t t13 = 29751566LLU;

	t13 = (x57*(x58/(x59&x60)));

	if (t13 != 0LLU) { NG(); } else { ; }
	
}

void f14(void) {
	uint16_t x66 = UINT16_MAX;

	t14 = (x65*(x66/(x67&x68)));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	static uint32_t x73 = 46492287U;
	volatile uint32_t x75 = 13U;
	static uint64_t x76 = 240445843444705157LLU;
	static uint64_t t15 = 16025211207486169LLU;

	t15 = (x73*(x74/(x75&x76)));

	if (t15 != 609374405709LLU) { NG(); } else { ; }
	
}

void f16(void) {
	volatile uint16_t x77 = 589U;
	int32_t x79 = 3609;
	int32_t t16 = 29968975;

	t16 = (x77*(x78/(x79&x80)));

	if (t16 != 1767) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x81 = 81U;
	int32_t x82 = 43;
	int16_t x83 = INT16_MAX;
	volatile uint64_t x84 = UINT64_MAX;

	t17 = (x81*(x82/(x83&x84)));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x89 = INT16_MIN;
	int16_t x90 = INT16_MIN;
	static uint16_t x91 = 4125U;
	int8_t x92 = INT8_MIN;
	volatile int32_t t18 = 21308697;

	t18 = (x89*(x90/(x91&x92)));

	if (t18 != 262144) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x93 = UINT16_MAX;
	static int16_t x94 = -1;
	uint8_t x95 = 24U;
	uint32_t t19 = 46U;

	t19 = (x93*(x94/(x95&x96)));

	if (t19 != 3758030849U) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = INT8_MIN;
	int8_t x103 = INT8_MIN;
	int32_t x104 = -1;
	volatile int32_t t20 = 241;

	t20 = (x101*(x102/(x103&x104)));

	if (t20 != -128) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x109 = INT32_MIN;
	static int16_t x110 = -1;
	int32_t x111 = INT32_MAX;
	static int8_t x112 = -13;
	volatile int32_t t21 = 111;

	t21 = (x109*(x110/(x111&x112)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x113 = INT16_MIN;
	static int32_t x114 = INT32_MAX;
	static int64_t x115 = INT64_MAX;
	int64_t x116 = 81392LL;
	int64_t t22 = -217636229250LL;

	t22 = (x113*(x114/(x115&x116)));

	if (t22 != -864550912LL) { NG(); } else { ; }
	
}

void f23(void) {
	int64_t x121 = -1LL;
	int32_t x123 = -19993381;
	int32_t x124 = INT32_MIN;

	t23 = (x121*(x122/(x123&x124)));

	if (t23 != 0LL) { NG(); } else { ; }
	
}

void f24(void) {
	int64_t x125 = INT64_MIN;
	int16_t x126 = 0;
	uint64_t x127 = UINT64_MAX;
	int64_t x128 = 2800LL;

	t24 = (x125*(x126/(x127&x128)));

	if (t24 != 0LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint32_t x129 = UINT32_MAX;
	uint32_t x130 = 24317U;
	volatile uint64_t x131 = 82235363016415LLU;

	t25 = (x129*(x130/(x131&x132)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	int32_t x137 = INT32_MAX;
	uint8_t x138 = 92U;
	int64_t x139 = INT64_MIN;
	static int16_t x140 = INT16_MIN;
	volatile int64_t t26 = 7LL;

	t26 = (x137*(x138/(x139&x140)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	static uint64_t x141 = 27198647257LLU;
	int32_t x142 = 8151;
	int16_t x143 = INT16_MAX;
	static uint8_t x144 = 44U;
	uint64_t t27 = 188919421LLU;

	t27 = (x141*(x142/(x143&x144)));

	if (t27 != 5031749742545LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int32_t x146 = -26282;
	int64_t x147 = INT64_MAX;
	int64_t t28 = 1331221LL;

	t28 = (x145*(x146/(x147&x148)));

	if (t28 != 0LL) { NG(); } else { ; }
	
}

void f29(void) {
	uint16_t x155 = 8117U;
	int16_t x156 = INT16_MAX;
	int64_t t29 = -11688097339LL;

	t29 = (x153*(x154/(x155&x156)));

	if (t29 != -204896016148310434LL) { NG(); } else { ; }
	
}

void f30(void) {
	uint8_t x161 = 15U;
	int32_t x162 = -1;
	volatile int64_t x163 = INT64_MAX;
	static uint8_t x164 = 6U;

	t30 = (x161*(x162/(x163&x164)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint8_t x169 = UINT8_MAX;
	int64_t x171 = 23779244921LL;
	static int64_t x172 = -315LL;
	volatile int64_t t31 = 44134773LL;

	t31 = (x169*(x170/(x171&x172)));

	if (t31 != 0LL) { NG(); } else { ; }
	
}

void f32(void) {
	uint8_t x174 = 55U;
	int8_t x175 = INT8_MIN;
	int32_t t32 = -385703;

	t32 = (x173*(x174/(x175&x176)));

	if (t32 != 0) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x177 = INT16_MAX;
	uint64_t x178 = 7323557418704175379LLU;
	uint64_t x180 = 5619446172971LLU;
	uint64_t t33 = 2150568569191LLU;

	t33 = (x177*(x178/(x179&x180)));

	if (t33 != 9804358081104123850LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static int32_t x183 = INT32_MIN;
	volatile int32_t x184 = INT32_MIN;
	uint64_t t34 = 176111817144919153LLU;

	t34 = (x181*(x182/(x183&x184)));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	static int8_t x193 = -1;
	int32_t x195 = INT32_MIN;
	volatile int32_t x196 = -1;
	volatile uint64_t t35 = 19677LLU;

	t35 = (x193*(x194/(x195&x196)));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = 1;
	uint8_t x198 = 1U;
	uint64_t x200 = UINT64_MAX;
	static volatile uint64_t t36 = 121LLU;

	t36 = (x197*(x198/(x199&x200)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	static uint16_t x201 = 6U;
	static volatile int8_t x202 = INT8_MAX;
	static volatile int32_t t37 = 512189530;

	t37 = (x201*(x202/(x203&x204)));

	if (t37 != 126) { NG(); } else { ; }
	
}

void f38(void) {
	uint8_t x206 = 17U;
	static int32_t x207 = 1;
	int32_t x208 = INT32_MAX;
	volatile int32_t t38 = -44863822;

	t38 = (x205*(x206/(x207&x208)));

	if (t38 != 51) { NG(); } else { ; }
	
}

void f39(void) {
	static int8_t x213 = -1;
	int64_t x214 = -15678LL;
	int32_t x215 = -227860737;
	static uint32_t x216 = UINT32_MAX;
	int64_t t39 = 2072201529863LL;

	t39 = (x213*(x214/(x215&x216)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int16_t x217 = 7;
	int16_t x219 = INT16_MIN;
	volatile int8_t x220 = INT8_MIN;

	t40 = (x217*(x218/(x219&x220)));

	if (t40 != -105) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x234 = 1058;
	int64_t x236 = INT64_MAX;

	t41 = (x233*(x234/(x235&x236)));

	if (t41 != 2326483632LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x237 = 89U;
	volatile int8_t x238 = INT8_MAX;
	int16_t x239 = -1;
	uint16_t x240 = UINT16_MAX;
	static volatile int32_t t42 = 8;

	t42 = (x237*(x238/(x239&x240)));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x257 = -1;
	int16_t x258 = INT16_MAX;
	uint16_t x260 = UINT16_MAX;
	static int32_t t43 = 2894;

	t43 = (x257*(x258/(x259&x260)));

	if (t43 != -682) { NG(); } else { ; }
	
}

void f44(void) {
	int64_t x262 = -35779940LL;
	int16_t x263 = -1;
	volatile uint16_t x264 = UINT16_MAX;
	int64_t t44 = -211180542LL;

	t44 = (x261*(x262/(x263&x264)));

	if (t44 != -545LL) { NG(); } else { ; }
	
}

void f45(void) {
	static int32_t x265 = 974761;
	static int64_t x266 = INT64_MIN;
	uint64_t t45 = 4963LLU;

	t45 = (x265*(x266/(x267&x268)));

	if (t45 != 2500558641102815672LLU) { NG(); } else { ; }
	
}

void f46(void) {
	int64_t x277 = INT64_MIN;
	uint8_t x278 = 0U;
	int16_t x280 = INT16_MIN;
	volatile int64_t t46 = 3025109LL;

	t46 = (x277*(x278/(x279&x280)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	volatile uint16_t x281 = 2U;
	int16_t x282 = INT16_MAX;
	uint16_t x284 = UINT16_MAX;

	t47 = (x281*(x282/(x283&x284)));

	if (t47 != 0LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint16_t x285 = 171U;
	uint32_t x286 = 1898669U;
	uint64_t x287 = 1172249061LLU;
	static volatile uint8_t x288 = 1U;

	t48 = (x285*(x286/(x287&x288)));

	if (t48 != 324672399LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint16_t x291 = 277U;
	int8_t x292 = INT8_MIN;
	static volatile int64_t t49 = 31LL;

	t49 = (x289*(x290/(x291&x292)));

	if (t49 != 0LL) { NG(); } else { ; }
	
}

void f50(void) {
	uint64_t x293 = 108588LLU;
	volatile uint16_t x294 = 3307U;
	int8_t x295 = INT8_MAX;

	t50 = (x293*(x294/(x295&x296)));

	if (t50 != 2823288LLU) { NG(); } else { ; }
	
}

void f51(void) {
	int8_t x297 = INT8_MAX;
	uint64_t x299 = UINT64_MAX;
	static int32_t x300 = INT32_MAX;
	static uint64_t t51 = 19659460LLU;

	t51 = (x297*(x298/(x299&x300)));

	if (t51 != 1090921693565LLU) { NG(); } else { ; }
	
}

void f52(void) {
	static uint32_t x305 = 1536204362U;
	int16_t x306 = INT16_MIN;
	int32_t x307 = -613752;
	uint32_t x308 = UINT32_MAX;

	t52 = (x305*(x306/(x307&x308)));

	if (t52 != 1536204362U) { NG(); } else { ; }
	
}

void f53(void) {
	int8_t x310 = INT8_MIN;
	int16_t x311 = 1716;
	volatile int32_t t53 = -5257;

	t53 = (x309*(x310/(x311&x312)));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int8_t x313 = INT8_MIN;
	int32_t x314 = INT32_MIN;
	int64_t x315 = INT64_MAX;
	int16_t x316 = INT16_MIN;
	int64_t t54 = 462522782564016LL;

	t54 = (x313*(x314/(x315&x316)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int16_t x318 = INT16_MIN;
	volatile uint16_t x319 = UINT16_MAX;
	static int16_t x320 = -49;
	static int32_t t55 = -480100271;

	t55 = (x317*(x318/(x319&x320)));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int64_t x325 = INT64_MAX;
	int64_t x326 = -44722LL;
	static int8_t x327 = INT8_MIN;

	t56 = (x325*(x326/(x327&x328)));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	static uint8_t x329 = 4U;
	static int32_t x330 = INT32_MIN;
	static volatile int32_t x331 = -1;
	static volatile int8_t x332 = INT8_MIN;
	static volatile int32_t t57 = 10;

	t57 = (x329*(x330/(x331&x332)));

	if (t57 != 67108864) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x333 = -695;
	static int32_t x334 = 43;
	static uint8_t x335 = UINT8_MAX;
	int32_t x336 = -1;

	t58 = (x333*(x334/(x335&x336)));

	if (t58 != 0) { NG(); } else { ; }
	
}

void f59(void) {
	uint16_t x337 = 4U;
	static volatile int64_t x338 = -1LL;
	int64_t x339 = 3714228014142950259LL;
	uint8_t x340 = UINT8_MAX;
	volatile int64_t t59 = -3556609868LL;

	t59 = (x337*(x338/(x339&x340)));

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	static int16_t x345 = 0;
	int16_t x346 = 50;
	uint16_t x347 = UINT16_MAX;
	volatile int16_t x348 = -1;
	volatile int32_t t60 = 307385784;

	t60 = (x345*(x346/(x347&x348)));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static uint32_t x349 = UINT32_MAX;
	uint64_t x350 = 921778650586LLU;
	int32_t x352 = INT32_MAX;
	volatile uint64_t t61 = 29LLU;

	t61 = (x349*(x350/(x351&x352)));

	if (t61 != 60410604789784800LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x353 = -1;
	uint16_t x356 = 21U;
	static volatile int32_t t62 = -812213;

	t62 = (x353*(x354/(x355&x356)));

	if (t62 != 0) { NG(); } else { ; }
	
}

void f63(void) {
	int32_t x361 = -10177;
	volatile uint16_t x362 = 49U;
	static volatile int64_t x363 = INT64_MAX;
	volatile uint64_t x364 = UINT64_MAX;
	uint64_t t63 = 213LLU;

	t63 = (x361*(x362/(x363&x364)));

	if (t63 != 0LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint8_t x369 = UINT8_MAX;
	uint16_t x372 = 3988U;

	t64 = (x369*(x370/(x371&x372)));

	if (t64 != 171441903100650LL) { NG(); } else { ; }
	
}

void f65(void) {
	int64_t x373 = -19932978449684LL;
	static int32_t x374 = 1291;
	static volatile int32_t x375 = INT32_MAX;
	int64_t x376 = -1LL;

	t65 = (x373*(x374/(x375&x376)));

	if (t65 != 0LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile int8_t x382 = INT8_MIN;
	uint64_t x383 = 6216964541826305891LLU;
	static int8_t x384 = -1;

	t66 = (x381*(x382/(x383&x384)));

	if (t66 != 254LLU) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int8_t x385 = -2;
	uint32_t x388 = UINT32_MAX;
	int64_t t67 = -1398LL;

	t67 = (x385*(x386/(x387&x388)));

	if (t67 != -683212743470724132LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x389 = INT32_MIN;
	uint32_t x390 = 10243U;
	int8_t x391 = -13;
	uint32_t t68 = 2030U;

	t68 = (x389*(x390/(x391&x392)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x397 = 58980679U;
	int32_t x398 = -16963;
	volatile int8_t x399 = INT8_MIN;
	int64_t x400 = INT64_MAX;
	int64_t t69 = -15064858LL;

	t69 = (x397*(x398/(x399&x400)));

	if (t69 != 0LL) { NG(); } else { ; }
	
}

void f70(void) {
	int16_t x405 = -1;
	int16_t x406 = 8;
	int8_t x407 = INT8_MAX;
	uint8_t x408 = UINT8_MAX;
	volatile int32_t t70 = -255;

	t70 = (x405*(x406/(x407&x408)));

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x409 = -1;
	static int64_t x410 = INT64_MAX;
	int8_t x411 = INT8_MIN;
	uint32_t x412 = UINT32_MAX;
	static int64_t t71 = -15957LL;

	t71 = (x409*(x410/(x411&x412)));

	if (t71 != -2147483712LL) { NG(); } else { ; }
	
}

void f72(void) {
	int32_t x413 = -1;
	int16_t x415 = INT16_MIN;
	int8_t x416 = INT8_MIN;
	volatile int32_t t72 = -1334;

	t72 = (x413*(x414/(x415&x416)));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	static int32_t x417 = -6;
	volatile uint8_t x418 = 3U;
	volatile int32_t x419 = 1061139290;
	volatile uint8_t x420 = UINT8_MAX;
	int32_t t73 = 128147;

	t73 = (x417*(x418/(x419&x420)));

	if (t73 != 0) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int32_t x425 = -1;
	uint64_t x426 = 929020LLU;
	uint32_t x427 = UINT32_MAX;
	int8_t x428 = INT8_MIN;
	volatile uint64_t t74 = 415759593884132LLU;

	t74 = (x425*(x426/(x427&x428)));

	if (t74 != 0LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x429 = 1LL;
	uint64_t x431 = 1517407LLU;
	int16_t x432 = INT16_MAX;

	t75 = (x429*(x430/(x431&x432)));

	if (t75 != 0LLU) { NG(); } else { ; }
	
}

void f76(void) {
	int16_t x433 = INT16_MIN;
	int64_t x434 = -1LL;
	static volatile uint32_t x436 = UINT32_MAX;
	volatile int64_t t76 = 2044LL;

	t76 = (x433*(x434/(x435&x436)));

	if (t76 != 32768LL) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int32_t x437 = -1;
	static volatile int32_t x439 = INT32_MAX;
	static int32_t x440 = -1;

	t77 = (x437*(x438/(x439&x440)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint32_t x441 = 13640U;
	int32_t x442 = INT32_MIN;
	uint16_t x443 = UINT16_MAX;
	volatile int64_t t78 = 1278870875580482LL;

	t78 = (x441*(x442/(x443&x444)));

	if (t78 != -446955520LL) { NG(); } else { ; }
	
}

void f79(void) {
	int32_t x445 = INT32_MAX;
	int16_t x446 = INT16_MIN;
	static int8_t x447 = INT8_MIN;
	int32_t x448 = INT32_MAX;
	int32_t t79 = -129409824;

	t79 = (x445*(x446/(x447&x448)));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x453 = 0U;
	uint16_t x454 = 23U;
	int16_t x455 = INT16_MAX;
	int32_t x456 = INT32_MAX;
	volatile int32_t t80 = -269;

	t80 = (x453*(x454/(x455&x456)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x458 = 9900;
	int8_t x459 = -17;
	volatile int32_t t81 = 15;

	t81 = (x457*(x458/(x459&x460)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x462 = INT16_MAX;
	uint8_t x463 = 10U;
	static int8_t x464 = 2;

	t82 = (x461*(x462/(x463&x464)));

	if (t82 != 65532) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x479 = INT8_MAX;
	uint8_t x480 = 1U;

	t83 = (x477*(x478/(x479&x480)));

	if (t83 != 14280) { NG(); } else { ; }
	
}

void f84(void) {
	volatile uint64_t x481 = UINT64_MAX;
	static uint8_t x482 = 1U;
	static uint64_t x483 = 2290437915400372LLU;

	t84 = (x481*(x482/(x483&x484)));

	if (t84 != 0LLU) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x486 = INT16_MIN;
	volatile int8_t x487 = -1;
	int32_t x488 = -1;
	volatile int32_t t85 = -4089;

	t85 = (x485*(x486/(x487&x488)));

	if (t85 != -1073741824) { NG(); } else { ; }
	
}

void f86(void) {
	uint16_t x493 = 3198U;
	int64_t x494 = 4LL;
	int64_t x495 = 9695156882974LL;
	int8_t x496 = INT8_MAX;
	static int64_t t86 = -1432372937549LL;

	t86 = (x493*(x494/(x495&x496)));

	if (t86 != 0LL) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x497 = 1182995079764373408LLU;
	volatile int16_t x498 = INT16_MAX;
	volatile uint64_t t87 = 71889671LLU;

	t87 = (x497*(x498/(x499&x500)));

	if (t87 != 3975704794900115488LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int64_t x501 = INT64_MIN;
	uint16_t x502 = 7U;
	int16_t x503 = -1;
	uint32_t x504 = 11296199U;
	volatile int64_t t88 = 1778344388038LL;

	t88 = (x501*(x502/(x503&x504)));

	if (t88 != 0LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x509 = INT16_MAX;
	static int8_t x510 = -2;
	int8_t x511 = 3;
	volatile int16_t x512 = INT16_MAX;
	static volatile int32_t t89 = -72;

	t89 = (x509*(x510/(x511&x512)));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	static uint8_t x517 = 5U;
	int16_t x518 = INT16_MIN;
	int64_t x519 = -1850168LL;
	int16_t x520 = INT16_MIN;
	int64_t t90 = -1460694742873409LL;

	t90 = (x517*(x518/(x519&x520)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int64_t x521 = -1LL;
	static volatile uint8_t x522 = 86U;
	int32_t x523 = INT32_MAX;
	static int64_t t91 = -244508LL;

	t91 = (x521*(x522/(x523&x524)));

	if (t91 != 0LL) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x526 = -82LL;
	int64_t x527 = -1LL;
	static int16_t x528 = INT16_MIN;
	uint64_t t92 = 252888654LLU;

	t92 = (x525*(x526/(x527&x528)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	uint16_t x529 = 3U;
	static int64_t x531 = INT64_MAX;
	int64_t t93 = 11LL;

	t93 = (x529*(x530/(x531&x532)));

	if (t93 != 1035930LL) { NG(); } else { ; }
	
}

void f94(void) {
	int8_t x537 = -1;
	int16_t x538 = INT16_MIN;
	static int8_t x539 = INT8_MAX;
	static uint8_t x540 = UINT8_MAX;
	volatile int32_t t94 = -1231124;

	t94 = (x537*(x538/(x539&x540)));

	if (t94 != 258) { NG(); } else { ; }
	
}

void f95(void) {
	int64_t x541 = 21LL;
	int32_t x542 = -1;
	static int8_t x543 = -1;
	volatile int64_t t95 = -233LL;

	t95 = (x541*(x542/(x543&x544)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int16_t x547 = 4746;
	int8_t x548 = -1;
	volatile int32_t t96 = 31;

	t96 = (x545*(x546/(x547&x548)));

	if (t96 != 12) { NG(); } else { ; }
	
}

void f97(void) {
	int8_t x550 = 0;
	volatile int32_t x552 = INT32_MAX;
	static volatile uint64_t t97 = 3752725341159LLU;

	t97 = (x549*(x550/(x551&x552)));

	if (t97 != 0LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int16_t x557 = INT16_MIN;
	int32_t x558 = 201724;
	volatile int16_t x560 = -24;
	int32_t t98 = -1;

	t98 = (x557*(x558/(x559&x560)));

	if (t98 != -98304) { NG(); } else { ; }
	
}

void f99(void) {
	volatile uint64_t x569 = UINT64_MAX;
	int64_t x571 = INT64_MAX;
	int8_t x572 = -1;

	t99 = (x569*(x570/(x571&x572)));

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

