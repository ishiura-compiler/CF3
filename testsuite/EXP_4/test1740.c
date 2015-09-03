#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int64_t x5 = -145652359802LL;
static volatile uint64_t t3 = 86838483LLU;
int8_t x19 = 1;
static volatile uint8_t x33 = UINT8_MAX;
volatile int32_t t6 = 261944571;
int32_t x38 = INT32_MIN;
int64_t x56 = INT64_MIN;
int64_t x58 = INT64_MIN;
uint8_t x64 = 3U;
uint64_t t15 = 495999684186266LLU;
static int64_t x81 = -8LL;
volatile int64_t t16 = 68134927957LL;
static int8_t x85 = -1;
int8_t x94 = INT8_MIN;
int16_t x95 = INT16_MIN;
uint16_t x98 = 13U;
uint8_t x102 = 5U;
uint32_t x111 = UINT32_MAX;
static int16_t x120 = -1;
uint16_t x125 = UINT16_MAX;
volatile int64_t t26 = INT64_MIN;
int64_t x140 = INT64_MIN;
volatile uint64_t t27 = 140138141956987263LLU;
int16_t x143 = INT16_MAX;
int8_t x144 = -1;
uint32_t x155 = 13U;
int64_t x158 = -1LL;
volatile int8_t x159 = INT8_MIN;
volatile uint64_t t31 = 519383367741277LLU;
volatile uint32_t x193 = 7432601U;
volatile uint64_t t36 = 1LLU;
int16_t x205 = 1744;
static uint64_t x226 = 14LLU;
uint64_t x228 = 26509690594715406LLU;
int16_t x229 = 38;
int64_t x230 = 434081031522LL;
int64_t x231 = 20623670743907LL;
int64_t t41 = -23158692LL;
int32_t x234 = -1;
uint64_t x235 = 2961975565LLU;
int64_t x236 = 1803506741036228LL;
uint16_t x242 = UINT16_MAX;
volatile uint64_t x247 = 468366124638282773LLU;
static int32_t x270 = -81;
volatile int32_t t47 = 17;
int32_t x275 = INT32_MAX;
uint64_t t48 = 111748161550812138LLU;
int8_t x280 = INT8_MIN;
volatile uint32_t t49 = 371417271U;
int8_t x282 = INT8_MIN;
int16_t x291 = INT16_MAX;
uint32_t x292 = 19U;
volatile int64_t x299 = -1702643146LL;
int32_t x309 = -1;
uint64_t x311 = 446561LLU;
int32_t x348 = INT32_MIN;
static volatile int64_t t60 = -61361LL;
static volatile int16_t x352 = INT16_MIN;
int64_t x358 = 930461182586401LL;
int64_t t62 = 338964LL;
int8_t x365 = INT8_MAX;
int8_t x366 = INT8_MIN;
int64_t x376 = INT64_MAX;
int8_t x379 = 12;
static int64_t x396 = -73834821903324LL;
int8_t x401 = INT8_MIN;
int32_t x404 = 401;
int16_t x421 = INT16_MAX;
int16_t x425 = INT16_MIN;
int64_t x431 = -1LL;
volatile uint64_t t78 = 2197781493187001917LLU;
int64_t x437 = 4184221LL;
volatile int64_t x441 = -600993751649LL;
volatile int64_t t80 = -8651811486334LL;
volatile int8_t x446 = INT8_MAX;
int16_t x448 = -1;
volatile int32_t t81 = 17428401;
int64_t t82 = INT64_MIN;
int16_t x460 = INT16_MIN;
volatile int64_t t85 = 92709282888LL;
volatile int32_t x472 = INT32_MAX;
volatile int32_t t86 = 999;
volatile int8_t x488 = -1;
int64_t x496 = -1LL;
uint16_t x504 = 6U;
uint32_t t91 = 103994410U;
volatile uint64_t t92 = 9408936622LLU;
int16_t x513 = INT16_MIN;
int64_t x514 = INT64_MIN;
uint32_t x523 = UINT32_MAX;
volatile uint16_t x529 = 3861U;
volatile uint32_t t98 = 651872705U;
int8_t x539 = INT8_MIN;
volatile int32_t x540 = INT32_MIN;


void f0(void) {
	int8_t x1 = -1;
	uint16_t x2 = 76U;
	volatile uint64_t x3 = 45904LLU;
	int16_t x4 = -1;
	volatile uint64_t t0 = 34350939428131LLU;

	t0 = (x1&(x2/(x3&x4)));

	if (t0 != 0LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int16_t x6 = INT16_MIN;
	uint16_t x7 = UINT16_MAX;
	uint64_t x8 = 962810658408793540LLU;
	volatile uint64_t t1 = 13LLU;

	t1 = (x5&(x6/(x7&x8)));

	if (t1 != 538546252304384LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint8_t x9 = 8U;
	volatile int32_t x10 = -1;
	int16_t x11 = INT16_MAX;
	int8_t x12 = 1;
	volatile int32_t t2 = 2412;

	t2 = (x9&(x10/(x11&x12)));

	if (t2 != 8) { NG(); } else { ; }
	
}

void f3(void) {
	int16_t x13 = 45;
	static uint64_t x14 = 105392LLU;
	static int16_t x15 = INT16_MAX;
	int32_t x16 = -1;

	t3 = (x13&(x14/(x15&x16)));

	if (t3 != 1LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = 1;
	uint64_t x18 = 383765583LLU;
	int32_t x20 = INT32_MAX;
	static volatile uint64_t t4 = 619LLU;

	t4 = (x17&(x18/(x19&x20)));

	if (t4 != 1LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static int8_t x29 = 40;
	volatile int64_t x30 = -1LL;
	int8_t x31 = 1;
	uint8_t x32 = 15U;
	int64_t t5 = 58697599934384LL;

	t5 = (x29&(x30/(x31&x32)));

	if (t5 != 40LL) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x34 = -1;
	int8_t x35 = -1;
	int16_t x36 = -21;

	t6 = (x33&(x34/(x35&x36)));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint8_t x37 = UINT8_MAX;
	uint16_t x39 = 53U;
	volatile uint8_t x40 = UINT8_MAX;
	static volatile int32_t t7 = -146;

	t7 = (x37&(x38/(x39&x40)));

	if (t7 != 97) { NG(); } else { ; }
	
}

void f8(void) {
	int32_t x41 = INT32_MAX;
	static int16_t x42 = INT16_MAX;
	static volatile uint32_t x43 = 1158U;
	uint64_t x44 = 4336030991132229488LLU;
	static volatile uint64_t t8 = 7816222020050314557LLU;

	t8 = (x41&(x42/(x43&x44)));

	if (t8 != 31LLU) { NG(); } else { ; }
	
}

void f9(void) {
	uint16_t x49 = UINT16_MAX;
	static int64_t x50 = -1LL;
	static int64_t x51 = 1953663020549839208LL;
	volatile uint32_t x52 = 83U;
	volatile int64_t t9 = 1757912LL;

	t9 = (x49&(x50/(x51&x52)));

	if (t9 != 0LL) { NG(); } else { ; }
	
}

void f10(void) {
	static int16_t x53 = 60;
	int16_t x54 = INT16_MAX;
	static int16_t x55 = -1859;
	int64_t t10 = -1LL;

	t10 = (x53&(x54/(x55&x56)));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	uint64_t x57 = UINT64_MAX;
	static uint32_t x59 = 15693U;
	int64_t x60 = 457575480975690LL;
	volatile uint64_t t11 = 0LLU;

	t11 = (x57&(x58/(x59&x60)));

	if (t11 != 18445661518306164906LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x61 = 1U;
	int8_t x62 = -1;
	uint8_t x63 = 13U;
	volatile int32_t t12 = 17659671;

	t12 = (x61&(x62/(x63&x64)));

	if (t12 != 1) { NG(); } else { ; }
	
}

void f13(void) {
	uint64_t x65 = UINT64_MAX;
	uint64_t x66 = 1644739LLU;
	uint8_t x67 = UINT8_MAX;
	volatile uint64_t x68 = 4939333813LLU;
	volatile uint64_t t13 = 58357194829474LLU;

	t13 = (x65&(x66/(x67&x68)));

	if (t13 != 9086LLU) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int16_t x69 = -1;
	volatile int64_t x70 = INT64_MAX;
	int32_t x71 = 492424313;
	static uint64_t x72 = 3LLU;
	uint64_t t14 = 104LLU;

	t14 = (x69&(x70/(x71&x72)));

	if (t14 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x77 = 7620U;
	static uint64_t x78 = 7899LLU;
	volatile int32_t x79 = INT32_MAX;
	uint16_t x80 = 52U;

	t15 = (x77&(x78/(x79&x80)));

	if (t15 != 132LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int32_t x82 = -1;
	volatile int16_t x83 = INT16_MIN;
	int16_t x84 = INT16_MIN;

	t16 = (x81&(x82/(x83&x84)));

	if (t16 != 0LL) { NG(); } else { ; }
	
}

void f17(void) {
	int16_t x86 = INT16_MAX;
	int16_t x87 = INT16_MIN;
	int64_t x88 = -1593653597LL;
	int64_t t17 = 972456149837LL;

	t17 = (x85&(x86/(x87&x88)));

	if (t17 != 0LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x93 = INT16_MIN;
	static volatile int64_t x96 = 29852476415142LL;
	volatile int64_t t18 = -114066LL;

	t18 = (x93&(x94/(x95&x96)));

	if (t18 != 0LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint8_t x97 = 11U;
	static int8_t x99 = INT8_MAX;
	int32_t x100 = -55098089;
	int32_t t19 = -31460;

	t19 = (x97&(x98/(x99&x100)));

	if (t19 != 0) { NG(); } else { ; }
	
}

void f20(void) {
	int8_t x101 = -1;
	int32_t x103 = -101;
	static uint32_t x104 = 1215649U;
	volatile uint32_t t20 = 1194U;

	t20 = (x101&(x102/(x103&x104)));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x105 = INT16_MIN;
	uint32_t x106 = 12473U;
	int16_t x107 = -1;
	static volatile int16_t x108 = 12241;
	uint32_t t21 = 55896U;

	t21 = (x105&(x106/(x107&x108)));

	if (t21 != 0U) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x109 = 22U;
	volatile int8_t x110 = INT8_MIN;
	static int16_t x112 = -1;
	static volatile uint32_t t22 = 5106U;

	t22 = (x109&(x110/(x111&x112)));

	if (t22 != 0U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int64_t x117 = INT64_MAX;
	volatile int32_t x118 = INT32_MAX;
	uint16_t x119 = UINT16_MAX;
	static int64_t t23 = -23141855488234LL;

	t23 = (x117&(x118/(x119&x120)));

	if (t23 != 32768LL) { NG(); } else { ; }
	
}

void f24(void) {
	volatile int64_t x126 = 219858LL;
	uint8_t x127 = UINT8_MAX;
	int16_t x128 = INT16_MAX;
	static volatile int64_t t24 = 28878918LL;

	t24 = (x125&(x126/(x127&x128)));

	if (t24 != 862LL) { NG(); } else { ; }
	
}

void f25(void) {
	static int32_t x129 = -4572155;
	int32_t x130 = INT32_MIN;
	uint64_t x131 = 1659533900903LLU;
	int8_t x132 = -1;
	uint64_t t25 = 931422618738388LLU;

	t25 = (x129&(x130/(x131&x132)));

	if (t25 != 11017217LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile int16_t x133 = INT16_MIN;
	int64_t x134 = INT64_MIN;
	int16_t x135 = INT16_MAX;
	uint8_t x136 = 1U;

	t26 = (x133&(x134/(x135&x136)));

	if (t26 != INT64_MIN) { NG(); } else { ; }
	
}

void f27(void) {
	static volatile uint64_t x137 = 239300347LLU;
	volatile int32_t x138 = 114109787;
	int32_t x139 = -49127763;

	t27 = (x137&(x138/(x139&x140)));

	if (t27 != 0LLU) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x141 = -1;
	static uint32_t x142 = UINT32_MAX;
	volatile uint32_t t28 = 618207736U;

	t28 = (x141&(x142/(x143&x144)));

	if (t28 != 131076U) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x153 = -1;
	static uint64_t x154 = UINT64_MAX;
	static uint8_t x156 = 56U;
	volatile uint64_t t29 = 5241544996236LLU;

	t29 = (x153&(x154/(x155&x156)));

	if (t29 != 2305843009213693951LLU) { NG(); } else { ; }
	
}

void f30(void) {
	uint64_t x157 = 1026709128LLU;
	uint32_t x160 = 3958438U;
	uint64_t t30 = 35108572165164LLU;

	t30 = (x157&(x158/(x159&x160)));

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x177 = 723U;
	uint32_t x178 = UINT32_MAX;
	volatile int16_t x179 = -30;
	uint64_t x180 = 3942812168LLU;

	t31 = (x177&(x178/(x179&x180)));

	if (t31 != 1LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x181 = 24U;
	static int8_t x182 = INT8_MIN;
	int8_t x183 = -3;
	uint16_t x184 = UINT16_MAX;
	static uint32_t t32 = 477576U;

	t32 = (x181&(x182/(x183&x184)));

	if (t32 != 0U) { NG(); } else { ; }
	
}

void f33(void) {
	volatile uint8_t x185 = UINT8_MAX;
	uint16_t x186 = 287U;
	uint32_t x187 = 1085569708U;
	static uint16_t x188 = 145U;
	volatile uint32_t t33 = 10670U;

	t33 = (x185&(x186/(x187&x188)));

	if (t33 != 2U) { NG(); } else { ; }
	
}

void f34(void) {
	uint32_t x189 = UINT32_MAX;
	static uint16_t x190 = 6706U;
	uint16_t x191 = UINT16_MAX;
	int16_t x192 = -5;
	static volatile uint32_t t34 = 6220651U;

	t34 = (x189&(x190/(x191&x192)));

	if (t34 != 0U) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x194 = -1;
	int8_t x195 = INT8_MIN;
	uint8_t x196 = UINT8_MAX;
	static volatile uint32_t t35 = 3U;

	t35 = (x193&(x194/(x195&x196)));

	if (t35 != 0U) { NG(); } else { ; }
	
}

void f36(void) {
	int64_t x197 = -61224689778068LL;
	int8_t x198 = INT8_MIN;
	uint64_t x199 = 59411463369450LLU;
	static int16_t x200 = INT16_MIN;

	t36 = (x197&(x198/(x199&x200)));

	if (t36 != 262216LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x201 = INT32_MAX;
	int8_t x202 = INT8_MIN;
	int32_t x203 = 4321;
	static int32_t x204 = -1;
	static volatile int32_t t37 = -3462539;

	t37 = (x201&(x202/(x203&x204)));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x206 = -1;
	int64_t x207 = 59119908529LL;
	static int8_t x208 = INT8_MIN;
	volatile int64_t t38 = -78264658214604LL;

	t38 = (x205&(x206/(x207&x208)));

	if (t38 != 0LL) { NG(); } else { ; }
	
}

void f39(void) {
	volatile uint16_t x221 = UINT16_MAX;
	int16_t x222 = INT16_MIN;
	int8_t x223 = INT8_MIN;
	static int64_t x224 = INT64_MIN;
	volatile int64_t t39 = -958LL;

	t39 = (x221&(x222/(x223&x224)));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile uint16_t x225 = UINT16_MAX;
	int32_t x227 = INT32_MIN;
	uint64_t t40 = 420166LLU;

	t40 = (x225&(x226/(x227&x228)));

	if (t40 != 0LLU) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x232 = 20693844;

	t41 = (x229&(x230/(x231&x232)));

	if (t41 != 38LL) { NG(); } else { ; }
	
}

void f42(void) {
	int8_t x233 = -1;
	static uint64_t t42 = 6477155LLU;

	t42 = (x233&(x234/(x235&x236)));

	if (t42 != 6849872877LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x241 = INT32_MIN;
	int8_t x243 = INT8_MAX;
	volatile uint32_t x244 = 1033980U;
	uint32_t t43 = 472884U;

	t43 = (x241&(x242/(x243&x244)));

	if (t43 != 0U) { NG(); } else { ; }
	
}

void f44(void) {
	volatile int16_t x245 = -2560;
	int8_t x246 = INT8_MIN;
	volatile uint8_t x248 = UINT8_MAX;
	uint64_t t44 = 10638532055795124LLU;

	t44 = (x245&(x246/(x247&x248)));

	if (t44 != 878416384462357504LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static volatile int32_t x253 = -1;
	int16_t x254 = INT16_MIN;
	int32_t x255 = INT32_MAX;
	uint8_t x256 = 27U;
	static volatile int32_t t45 = 371;

	t45 = (x253&(x254/(x255&x256)));

	if (t45 != -1213) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x265 = -1;
	static uint64_t x266 = 367366LLU;
	volatile uint16_t x267 = UINT16_MAX;
	int32_t x268 = INT32_MAX;
	uint64_t t46 = 31422618344738LLU;

	t46 = (x265&(x266/(x267&x268)));

	if (t46 != 5LLU) { NG(); } else { ; }
	
}

void f47(void) {
	int16_t x269 = INT16_MIN;
	int16_t x271 = -3;
	static int32_t x272 = 95608179;

	t47 = (x269&(x270/(x271&x272)));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	static uint64_t x273 = 1031331081033545LLU;
	static int16_t x274 = 58;
	static uint32_t x276 = 1264227U;

	t48 = (x273&(x274/(x275&x276)));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x277 = 205142931U;
	int8_t x278 = INT8_MAX;
	int32_t x279 = INT32_MIN;

	t49 = (x277&(x278/(x279&x280)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	uint8_t x281 = 7U;
	int32_t x283 = INT32_MIN;
	static int64_t x284 = INT64_MIN;
	static int64_t t50 = 432392LL;

	t50 = (x281&(x282/(x283&x284)));

	if (t50 != 0LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x289 = 667725U;
	int8_t x290 = -1;
	volatile uint32_t t51 = 3597753U;

	t51 = (x289&(x290/(x291&x292)));

	if (t51 != 524364U) { NG(); } else { ; }
	
}

void f52(void) {
	int16_t x293 = -9;
	volatile int64_t x294 = -1LL;
	int64_t x295 = -1LL;
	volatile int16_t x296 = INT16_MIN;
	int64_t t52 = -1753909641201291LL;

	t52 = (x293&(x294/(x295&x296)));

	if (t52 != 0LL) { NG(); } else { ; }
	
}

void f53(void) {
	volatile int64_t x297 = INT64_MAX;
	int16_t x298 = INT16_MAX;
	static int8_t x300 = -1;
	volatile int64_t t53 = -21719881LL;

	t53 = (x297&(x298/(x299&x300)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x310 = INT32_MIN;
	static uint64_t x312 = UINT64_MAX;
	uint64_t t54 = 917964775083137LLU;

	t54 = (x309&(x310/(x311&x312)));

	if (t54 != 41308452980806LLU) { NG(); } else { ; }
	
}

void f55(void) {
	static int16_t x317 = -1013;
	static int32_t x318 = INT32_MIN;
	static int32_t x319 = INT32_MAX;
	uint32_t x320 = 7U;
	uint32_t t55 = 1312281U;

	t55 = (x317&(x318/(x319&x320)));

	if (t55 != 306783234U) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x329 = INT8_MIN;
	volatile uint32_t x330 = 8014U;
	uint32_t x331 = 229414734U;
	int16_t x332 = -3;
	static uint32_t t56 = 20715U;

	t56 = (x329&(x330/(x331&x332)));

	if (t56 != 0U) { NG(); } else { ; }
	
}

void f57(void) {
	volatile uint64_t x333 = 11126140LLU;
	int32_t x334 = 574105;
	static int16_t x335 = INT16_MIN;
	volatile int64_t x336 = INT64_MIN;
	uint64_t t57 = 249574LLU;

	t57 = (x333&(x334/(x335&x336)));

	if (t57 != 0LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint32_t x337 = 1255660U;
	uint16_t x338 = 1U;
	int8_t x339 = -1;
	int16_t x340 = INT16_MIN;
	uint32_t t58 = 49314U;

	t58 = (x337&(x338/(x339&x340)));

	if (t58 != 0U) { NG(); } else { ; }
	
}

void f59(void) {
	int32_t x341 = 732097737;
	int16_t x342 = INT16_MAX;
	uint64_t x343 = UINT64_MAX;
	static int64_t x344 = INT64_MIN;
	uint64_t t59 = 2165573792668LLU;

	t59 = (x341&(x342/(x343&x344)));

	if (t59 != 0LLU) { NG(); } else { ; }
	
}

void f60(void) {
	static volatile int32_t x345 = INT32_MAX;
	static volatile int8_t x346 = -1;
	static int64_t x347 = INT64_MIN;

	t60 = (x345&(x346/(x347&x348)));

	if (t60 != 0LL) { NG(); } else { ; }
	
}

void f61(void) {
	int64_t x349 = -8123722211829LL;
	volatile uint64_t x350 = 286713063152241723LLU;
	int64_t x351 = INT64_MIN;
	volatile uint64_t t61 = 15710446629355246LLU;

	t61 = (x349&(x350/(x351&x352)));

	if (t61 != 0LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int32_t x357 = INT32_MIN;
	int16_t x359 = -468;
	int8_t x360 = -1;

	t62 = (x357&(x358/(x359&x360)));

	if (t62 != -1988569858048LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile uint64_t x367 = UINT64_MAX;
	static int32_t x368 = INT32_MIN;
	volatile uint64_t t63 = 4106040413LLU;

	t63 = (x365&(x366/(x367&x368)));

	if (t63 != 1LLU) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x369 = 13032U;
	static volatile int32_t x370 = -1;
	static volatile int8_t x371 = INT8_MIN;
	int32_t x372 = -1;
	int32_t t64 = 6;

	t64 = (x369&(x370/(x371&x372)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	uint8_t x373 = 2U;
	int64_t x374 = INT64_MIN;
	uint64_t x375 = 69771LLU;
	volatile uint64_t t65 = 14711LLU;

	t65 = (x373&(x374/(x375&x376)));

	if (t65 != 0LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x377 = UINT32_MAX;
	int16_t x378 = -4;
	static uint16_t x380 = 2858U;
	volatile uint32_t t66 = 62074769U;

	t66 = (x377&(x378/(x379&x380)));

	if (t66 != 0U) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x381 = 12U;
	static uint16_t x382 = UINT16_MAX;
	int64_t x383 = INT64_MAX;
	static int64_t x384 = -1LL;
	int64_t t67 = -4283296472485LL;

	t67 = (x381&(x382/(x383&x384)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x385 = UINT16_MAX;
	static int32_t x386 = INT32_MAX;
	static int16_t x387 = -1;
	volatile int16_t x388 = INT16_MAX;
	volatile int32_t t68 = -1289;

	t68 = (x385&(x386/(x387&x388)));

	if (t68 != 2) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x389 = INT8_MIN;
	int32_t x390 = 115422;
	uint64_t x391 = 9353LLU;
	static int64_t x392 = INT64_MAX;
	static volatile uint64_t t69 = 811212246LLU;

	t69 = (x389&(x390/(x391&x392)));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int64_t x393 = INT64_MAX;
	uint64_t x394 = 919185523LLU;
	uint16_t x395 = UINT16_MAX;
	volatile uint64_t t70 = 152373209459LLU;

	t70 = (x393&(x394/(x395&x396)));

	if (t70 != 127593LLU) { NG(); } else { ; }
	
}

void f71(void) {
	int16_t x402 = INT16_MAX;
	static uint16_t x403 = UINT16_MAX;
	int32_t t71 = -1;

	t71 = (x401&(x402/(x403&x404)));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x409 = 13;
	static int32_t x410 = INT32_MIN;
	volatile uint64_t x411 = 49683699620515454LLU;
	uint32_t x412 = 17647074U;
	static volatile uint64_t t72 = 2192179226033120LLU;

	t72 = (x409&(x410/(x411&x412)));

	if (t72 != 5LLU) { NG(); } else { ; }
	
}

void f73(void) {
	uint32_t x413 = 8460914U;
	volatile int8_t x414 = -1;
	int16_t x415 = INT16_MIN;
	int16_t x416 = -3;
	static uint32_t t73 = 40957117U;

	t73 = (x413&(x414/(x415&x416)));

	if (t73 != 0U) { NG(); } else { ; }
	
}

void f74(void) {
	int32_t x417 = -9093524;
	uint16_t x418 = 420U;
	int64_t x419 = INT64_MIN;
	int32_t x420 = -8186;
	volatile int64_t t74 = -7543338309257LL;

	t74 = (x417&(x418/(x419&x420)));

	if (t74 != 0LL) { NG(); } else { ; }
	
}

void f75(void) {
	int32_t x422 = INT32_MIN;
	int8_t x423 = -1;
	int8_t x424 = INT8_MIN;
	volatile int32_t t75 = 10282906;

	t75 = (x421&(x422/(x423&x424)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int8_t x426 = INT8_MAX;
	uint8_t x427 = UINT8_MAX;
	int16_t x428 = -1;
	int32_t t76 = 28268;

	t76 = (x425&(x426/(x427&x428)));

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x429 = INT16_MIN;
	volatile int32_t x430 = -1;
	int16_t x432 = -14;
	int64_t t77 = 1855411LL;

	t77 = (x429&(x430/(x431&x432)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x433 = 12313;
	volatile int8_t x434 = INT8_MAX;
	uint64_t x435 = 431LLU;
	int8_t x436 = INT8_MIN;

	t78 = (x433&(x434/(x435&x436)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	static uint64_t x438 = UINT64_MAX;
	static int32_t x439 = INT32_MAX;
	int64_t x440 = INT64_MAX;
	volatile uint64_t t79 = 29996845046796LLU;

	t79 = (x437&(x438/(x439&x440)));

	if (t79 != 4LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int16_t x442 = -1;
	volatile int8_t x443 = INT8_MIN;
	volatile int32_t x444 = INT32_MIN;

	t80 = (x441&(x442/(x443&x444)));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	static int8_t x445 = INT8_MIN;
	volatile int16_t x447 = INT16_MAX;

	t81 = (x445&(x446/(x447&x448)));

	if (t81 != 0) { NG(); } else { ; }
	
}

void f82(void) {
	static int64_t x449 = INT64_MIN;
	int64_t x450 = -36647043709052LL;
	uint32_t x451 = 4015650U;
	uint32_t x452 = 129339U;

	t82 = (x449&(x450/(x451&x452)));

	if (t82 != INT64_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x453 = INT64_MIN;
	int8_t x454 = -1;
	volatile int32_t x455 = -1;
	static int32_t x456 = INT32_MIN;
	static int64_t t83 = -6617240707LL;

	t83 = (x453&(x454/(x455&x456)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x457 = 13285240U;
	int64_t x458 = 61129LL;
	static int32_t x459 = -246;
	volatile int64_t t84 = 972219951LL;

	t84 = (x457&(x458/(x459&x460)));

	if (t84 != 13285240LL) { NG(); } else { ; }
	
}

void f85(void) {
	int64_t x461 = -8467134LL;
	int32_t x462 = -353;
	int32_t x463 = INT32_MIN;
	int64_t x464 = -1LL;

	t85 = (x461&(x462/(x463&x464)));

	if (t85 != 0LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int16_t x469 = INT16_MIN;
	volatile int32_t x470 = -1;
	static volatile int16_t x471 = -1;

	t86 = (x469&(x470/(x471&x472)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	uint8_t x481 = UINT8_MAX;
	int32_t x482 = 42;
	uint64_t x483 = 29693760297561LLU;
	volatile uint8_t x484 = 3U;
	static volatile uint64_t t87 = 792121201800298311LLU;

	t87 = (x481&(x482/(x483&x484)));

	if (t87 != 42LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x485 = 6950U;
	int32_t x486 = -383433;
	volatile int16_t x487 = 3005;
	static volatile int32_t t88 = -128;

	t88 = (x485&(x486/(x487&x488)));

	if (t88 != 6912) { NG(); } else { ; }
	
}

void f89(void) {
	int32_t x489 = -1;
	static uint32_t x490 = UINT32_MAX;
	int8_t x491 = INT8_MAX;
	uint8_t x492 = 2U;
	uint32_t t89 = 12075U;

	t89 = (x489&(x490/(x491&x492)));

	if (t89 != 2147483647U) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x493 = INT16_MAX;
	int32_t x494 = INT32_MIN;
	volatile int64_t x495 = -1LL;
	volatile int64_t t90 = 2864747205195LL;

	t90 = (x493&(x494/(x495&x496)));

	if (t90 != 0LL) { NG(); } else { ; }
	
}

void f91(void) {
	int32_t x501 = INT32_MAX;
	static uint8_t x502 = 9U;
	static uint32_t x503 = UINT32_MAX;

	t91 = (x501&(x502/(x503&x504)));

	if (t91 != 1U) { NG(); } else { ; }
	
}

void f92(void) {
	uint64_t x505 = 59107LLU;
	int32_t x506 = 19;
	int16_t x507 = 55;
	int8_t x508 = INT8_MAX;

	t92 = (x505&(x506/(x507&x508)));

	if (t92 != 0LLU) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int64_t x509 = INT64_MAX;
	int8_t x510 = 0;
	static int64_t x511 = INT64_MIN;
	int8_t x512 = -1;
	int64_t t93 = -243557LL;

	t93 = (x509&(x510/(x511&x512)));

	if (t93 != 0LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x515 = INT64_MIN;
	int64_t x516 = INT64_MIN;
	volatile int64_t t94 = 479872LL;

	t94 = (x513&(x514/(x515&x516)));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int16_t x521 = 1042;
	int16_t x522 = 16;
	static volatile uint16_t x524 = 112U;
	volatile uint32_t t95 = 43U;

	t95 = (x521&(x522/(x523&x524)));

	if (t95 != 0U) { NG(); } else { ; }
	
}

void f96(void) {
	int16_t x525 = -1;
	int32_t x526 = 913795;
	int32_t x527 = 666552;
	uint64_t x528 = 93228543LLU;
	uint64_t t96 = 484199LLU;

	t96 = (x525&(x526/(x527&x528)));

	if (t96 != 1LLU) { NG(); } else { ; }
	
}

void f97(void) {
	int16_t x530 = INT16_MIN;
	volatile uint16_t x531 = 1U;
	static int8_t x532 = INT8_MAX;
	volatile int32_t t97 = -594848189;

	t97 = (x529&(x530/(x531&x532)));

	if (t97 != 0) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int32_t x533 = INT32_MIN;
	int32_t x534 = INT32_MIN;
	int16_t x535 = INT16_MAX;
	uint32_t x536 = UINT32_MAX;

	t98 = (x533&(x534/(x535&x536)));

	if (t98 != 0U) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x537 = -224;
	int32_t x538 = INT32_MAX;
	int32_t t99 = -830;

	t99 = (x537&(x538/(x539&x540)));

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

