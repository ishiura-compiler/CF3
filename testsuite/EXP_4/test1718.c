#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint16_t x2 = 1097U;
volatile uint32_t x3 = 394U;
volatile uint64_t x15 = UINT64_MAX;
static uint32_t x18 = 13U;
int16_t x20 = INT16_MIN;
volatile uint64_t t3 = UINT64_MAX;
int16_t x34 = INT16_MAX;
int16_t x42 = -137;
int8_t x46 = -21;
volatile int8_t x52 = INT8_MAX;
int16_t x57 = INT16_MAX;
volatile int8_t x59 = INT8_MAX;
int16_t x75 = -1;
volatile int16_t x76 = INT16_MIN;
int16_t x85 = -3;
uint32_t x103 = 22263U;
int16_t x110 = INT16_MIN;
static int16_t x112 = INT16_MAX;
static int8_t x126 = -1;
static int32_t t22 = 1809003;
uint8_t x134 = 1U;
int8_t x135 = -11;
static int64_t x136 = -1LL;
static int16_t x140 = INT16_MIN;
int64_t t25 = INT64_MIN;
int32_t x149 = 3369;
int32_t x153 = INT32_MAX;
static int32_t x155 = INT32_MAX;
static volatile int64_t t27 = 61556961165953LL;
static int16_t x163 = INT16_MIN;
int64_t x165 = INT64_MIN;
int64_t x174 = -1LL;
int32_t x187 = 38128581;
uint32_t t31 = 4U;
int32_t x189 = INT32_MIN;
uint32_t t35 = 814226U;
volatile uint8_t x205 = 0U;
int32_t x218 = INT32_MAX;
uint64_t x228 = UINT64_MAX;
int64_t x233 = INT64_MIN;
uint64_t t44 = 67401665584344LLU;
volatile int16_t x249 = INT16_MIN;
uint8_t x254 = UINT8_MAX;
int16_t x261 = -4120;
int64_t x264 = INT64_MIN;
int8_t x266 = -1;
int64_t t48 = -288957929LL;
int16_t x272 = -21;
volatile int64_t t50 = -8509954329LL;
volatile uint32_t x284 = UINT32_MAX;
static uint64_t x288 = 5477266786546908LLU;
int16_t x294 = INT16_MIN;
int8_t x296 = INT8_MAX;
uint8_t x298 = UINT8_MAX;
volatile int16_t x303 = INT16_MIN;
int8_t x306 = INT8_MIN;
int8_t x308 = INT8_MAX;
int8_t x315 = 3;
uint32_t x316 = 1U;
int64_t x337 = INT64_MIN;
int16_t x338 = INT16_MIN;
uint64_t x340 = 20347651337933LLU;
uint64_t x341 = 155096744926600975LLU;
uint16_t x344 = UINT16_MAX;
static uint16_t x349 = UINT16_MAX;
uint16_t x355 = UINT16_MAX;
static int64_t t67 = -419790037LL;
uint8_t x358 = UINT8_MAX;
int8_t x361 = INT8_MIN;
int16_t x370 = INT16_MIN;
volatile int16_t x372 = INT16_MIN;
int16_t x373 = -3;
uint16_t x377 = 562U;
uint16_t x379 = 8U;
volatile int8_t x391 = -1;
static uint16_t x392 = 29652U;
volatile uint64_t x397 = UINT64_MAX;
uint64_t t76 = 407647462628343058LLU;
int16_t x415 = -1;
volatile uint64_t x426 = 61LLU;
uint64_t t81 = 220851239802724453LLU;
uint64_t t82 = 166273217LLU;
static volatile uint32_t x438 = 2U;
volatile int8_t x445 = INT8_MIN;
int64_t x447 = -1LL;
static int8_t x449 = INT8_MIN;
static int64_t t86 = -1LL;
volatile int64_t x461 = -812280536002350LL;
volatile int64_t t88 = 458328950294LL;
uint64_t t89 = 16512246930902642LLU;
uint16_t x474 = 1061U;
int8_t x482 = -1;
volatile int8_t x494 = INT8_MIN;
int8_t x496 = INT8_MIN;
int64_t x500 = -1LL;
volatile uint8_t x503 = 45U;
uint64_t t97 = 364894563129248LLU;


void f0(void) {
	int64_t x1 = -245768061357953231LL;
	int8_t x4 = INT8_MIN;
	static volatile int64_t t0 = -8484153303LL;

	t0 = (x1-(x2*(x3&x4)));

	if (t0 != -245768061358374479LL) { NG(); } else { ; }
	
}

void f1(void) {
	int8_t x13 = INT8_MIN;
	uint32_t x14 = 481U;
	int8_t x16 = INT8_MAX;
	volatile uint64_t t1 = 20413LLU;

	t1 = (x13-(x14*(x15&x16)));

	if (t1 != 18446744073709490401LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int64_t x17 = INT64_MAX;
	volatile int32_t x19 = -1;
	volatile int64_t t2 = -7460853729522602LL;

	t2 = (x17-(x18*(x19&x20)));

	if (t2 != 9223372032560234495LL) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int64_t x21 = -1LL;
	uint16_t x22 = 0U;
	static uint64_t x23 = UINT64_MAX;
	volatile uint8_t x24 = 93U;

	t3 = (x21-(x22*(x23&x24)));

	if (t3 != UINT64_MAX) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = INT32_MAX;
	volatile uint8_t x26 = 5U;
	static volatile uint16_t x27 = 797U;
	static volatile uint8_t x28 = 13U;
	volatile int32_t t4 = -66475423;

	t4 = (x25-(x26*(x27&x28)));

	if (t4 != 2147483582) { NG(); } else { ; }
	
}

void f5(void) {
	int32_t x29 = 491626466;
	volatile uint32_t x30 = UINT32_MAX;
	volatile uint8_t x31 = 6U;
	int8_t x32 = -16;
	uint32_t t5 = 15U;

	t5 = (x29-(x30*(x31&x32)));

	if (t5 != 491626466U) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x33 = INT32_MIN;
	static volatile int16_t x35 = 1;
	int64_t x36 = INT64_MIN;
	int64_t t6 = -36518947739154227LL;

	t6 = (x33-(x34*(x35&x36)));

	if (t6 != -2147483648LL) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x37 = INT64_MAX;
	volatile int8_t x38 = 3;
	static volatile int16_t x39 = INT16_MIN;
	static int16_t x40 = 905;
	int64_t t7 = INT64_MAX;

	t7 = (x37-(x38*(x39&x40)));

	if (t7 != INT64_MAX) { NG(); } else { ; }
	
}

void f8(void) {
	static volatile int32_t x41 = -1;
	uint16_t x43 = UINT16_MAX;
	int8_t x44 = INT8_MIN;
	static int32_t t8 = 65938723;

	t8 = (x41-(x42*(x43&x44)));

	if (t8 != 8960895) { NG(); } else { ; }
	
}

void f9(void) {
	static int16_t x45 = 3147;
	uint32_t x47 = 969917U;
	uint64_t x48 = 17195025412LLU;
	volatile uint64_t t9 = 1097LLU;

	t9 = (x45-(x46*(x47&x48)));

	if (t9 != 8626335LLU) { NG(); } else { ; }
	
}

void f10(void) {
	int32_t x49 = 193710;
	uint64_t x50 = 179745853LLU;
	int16_t x51 = INT16_MIN;
	volatile uint64_t t10 = 192928728LLU;

	t10 = (x49-(x50*(x51&x52)));

	if (t10 != 193710LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint8_t x53 = 17U;
	static uint8_t x54 = UINT8_MAX;
	uint64_t x55 = 439115436LLU;
	int64_t x56 = -1LL;
	static uint64_t t11 = 13LLU;

	t11 = (x53-(x54*(x55&x56)));

	if (t11 != 18446743961735115453LLU) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int64_t x58 = INT64_MAX;
	uint16_t x60 = 0U;
	int64_t t12 = 33905950574645993LL;

	t12 = (x57-(x58*(x59&x60)));

	if (t12 != 32767LL) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x69 = INT64_MAX;
	uint64_t x70 = UINT64_MAX;
	volatile uint32_t x71 = 551377493U;
	static int8_t x72 = INT8_MAX;
	uint64_t t13 = 6205952599703791LLU;

	t13 = (x69-(x70*(x71&x72)));

	if (t13 != 9223372036854775892LLU) { NG(); } else { ; }
	
}

void f14(void) {
	int16_t x73 = INT16_MIN;
	int16_t x74 = -1;
	volatile int32_t t14 = -72;

	t14 = (x73-(x74*(x75&x76)));

	if (t14 != -65536) { NG(); } else { ; }
	
}

void f15(void) {
	static int16_t x77 = 3;
	int8_t x78 = INT8_MIN;
	volatile int32_t x79 = -1;
	volatile uint64_t x80 = UINT64_MAX;
	uint64_t t15 = 45263371847597LLU;

	t15 = (x77-(x78*(x79&x80)));

	if (t15 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f16(void) {
	int8_t x86 = INT8_MIN;
	uint32_t x87 = 2411U;
	uint64_t x88 = UINT64_MAX;
	volatile uint64_t t16 = 6222551573LLU;

	t16 = (x85-(x86*(x87&x88)));

	if (t16 != 308605LLU) { NG(); } else { ; }
	
}

void f17(void) {
	uint8_t x101 = UINT8_MAX;
	int32_t x102 = -1;
	uint8_t x104 = 49U;
	volatile uint32_t t17 = 10652U;

	t17 = (x101-(x102*(x103&x104)));

	if (t17 != 304U) { NG(); } else { ; }
	
}

void f18(void) {
	uint8_t x105 = 1U;
	int8_t x106 = INT8_MIN;
	uint64_t x107 = 1789478683613067130LLU;
	uint32_t x108 = 113107U;
	static uint64_t t18 = 418801631449866LLU;

	t18 = (x105-(x106*(x107&x108)));

	if (t18 != 14199041LLU) { NG(); } else { ; }
	
}

void f19(void) {
	static int32_t x109 = INT32_MIN;
	int64_t x111 = INT64_MAX;
	volatile int64_t t19 = -178690772LL;

	t19 = (x109-(x110*(x111&x112)));

	if (t19 != -1073774592LL) { NG(); } else { ; }
	
}

void f20(void) {
	int16_t x113 = 147;
	int64_t x114 = 2492620183887LL;
	int16_t x115 = INT16_MIN;
	uint8_t x116 = UINT8_MAX;
	volatile int64_t t20 = -149438177502105LL;

	t20 = (x113-(x114*(x115&x116)));

	if (t20 != 147LL) { NG(); } else { ; }
	
}

void f21(void) {
	int32_t x121 = INT32_MIN;
	int16_t x122 = 456;
	uint64_t x123 = 0LLU;
	volatile int64_t x124 = -1803283196482614LL;
	static uint64_t t21 = 3575LLU;

	t21 = (x121-(x122*(x123&x124)));

	if (t21 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f22(void) {
	volatile int16_t x125 = INT16_MAX;
	uint16_t x127 = UINT16_MAX;
	static int16_t x128 = INT16_MIN;

	t22 = (x125-(x126*(x127&x128)));

	if (t22 != 65535) { NG(); } else { ; }
	
}

void f23(void) {
	uint64_t x129 = 3135LLU;
	int32_t x130 = -190;
	volatile int8_t x131 = INT8_MIN;
	int32_t x132 = -1;
	volatile uint64_t t23 = 93096253LLU;

	t23 = (x129-(x130*(x131&x132)));

	if (t23 != 18446744073709530431LLU) { NG(); } else { ; }
	
}

void f24(void) {
	int8_t x133 = -1;
	volatile int64_t t24 = -481198628751LL;

	t24 = (x133-(x134*(x135&x136)));

	if (t24 != 10LL) { NG(); } else { ; }
	
}

void f25(void) {
	int64_t x137 = INT64_MIN;
	uint32_t x138 = UINT32_MAX;
	int8_t x139 = 6;

	t25 = (x137-(x138*(x139&x140)));

	if (t25 != INT64_MIN) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint64_t x150 = 1667LLU;
	uint32_t x151 = UINT32_MAX;
	volatile int64_t x152 = INT64_MIN;
	uint64_t t26 = 18842202364851LLU;

	t26 = (x149-(x150*(x151&x152)));

	if (t26 != 3369LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int32_t x154 = INT32_MIN;
	int64_t x156 = INT64_MIN;

	t27 = (x153-(x154*(x155&x156)));

	if (t27 != 2147483647LL) { NG(); } else { ; }
	
}

void f28(void) {
	int16_t x161 = INT16_MIN;
	int16_t x162 = 133;
	uint16_t x164 = UINT16_MAX;
	int32_t t28 = 0;

	t28 = (x161-(x162*(x163&x164)));

	if (t28 != -4390912) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x166 = 135LLU;
	volatile int16_t x167 = INT16_MAX;
	int64_t x168 = INT64_MIN;
	volatile uint64_t t29 = 23329528LLU;

	t29 = (x165-(x166*(x167&x168)));

	if (t29 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f30(void) {
	static uint16_t x173 = 1U;
	int8_t x175 = 5;
	int8_t x176 = INT8_MAX;
	volatile int64_t t30 = 2083103545LL;

	t30 = (x173-(x174*(x175&x176)));

	if (t30 != 6LL) { NG(); } else { ; }
	
}

void f31(void) {
	int8_t x185 = INT8_MIN;
	int16_t x186 = INT16_MIN;
	uint32_t x188 = 27045711U;

	t31 = (x185-(x186*(x187&x188)));

	if (t31 != 1168277376U) { NG(); } else { ; }
	
}

void f32(void) {
	int16_t x190 = INT16_MAX;
	volatile uint64_t x191 = 1852481693LLU;
	int8_t x192 = 0;
	static volatile uint64_t t32 = 2992805LLU;

	t32 = (x189-(x190*(x191&x192)));

	if (t32 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int32_t x193 = -40376;
	volatile int8_t x194 = INT8_MAX;
	volatile uint16_t x195 = 305U;
	int64_t x196 = INT64_MIN;
	volatile int64_t t33 = -48972484481098849LL;

	t33 = (x193-(x194*(x195&x196)));

	if (t33 != -40376LL) { NG(); } else { ; }
	
}

void f34(void) {
	int32_t x197 = -7830;
	static int8_t x198 = INT8_MIN;
	int8_t x199 = INT8_MAX;
	int16_t x200 = -1;
	int32_t t34 = 4;

	t34 = (x197-(x198*(x199&x200)));

	if (t34 != 8426) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x201 = INT8_MIN;
	uint8_t x202 = UINT8_MAX;
	static uint32_t x203 = UINT32_MAX;
	volatile int16_t x204 = INT16_MIN;

	t35 = (x201-(x202*(x203&x204)));

	if (t35 != 8355712U) { NG(); } else { ; }
	
}

void f36(void) {
	static uint64_t x206 = 3886816853128LLU;
	int32_t x207 = INT32_MAX;
	int8_t x208 = INT8_MIN;
	volatile uint64_t t36 = 29220124972114LLU;

	t36 = (x205-(x206*(x207&x208)));

	if (t36 != 9499928039786431488LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x209 = 1U;
	volatile uint16_t x210 = 4U;
	int16_t x211 = INT16_MIN;
	int16_t x212 = -11522;
	volatile int32_t t37 = 15247176;

	t37 = (x209-(x210*(x211&x212)));

	if (t37 != 131073) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x213 = 178387777U;
	volatile int8_t x214 = -1;
	int32_t x215 = INT32_MAX;
	int32_t x216 = INT32_MAX;
	uint32_t t38 = 29U;

	t38 = (x213-(x214*(x215&x216)));

	if (t38 != 2325871424U) { NG(); } else { ; }
	
}

void f39(void) {
	int8_t x217 = INT8_MIN;
	int32_t x219 = 6;
	int64_t x220 = INT64_MAX;
	int64_t t39 = -31689978631LL;

	t39 = (x217-(x218*(x219&x220)));

	if (t39 != -12884902010LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x221 = -4930754;
	volatile int16_t x222 = -1;
	volatile int8_t x223 = -8;
	int16_t x224 = 15;
	int32_t t40 = 6332989;

	t40 = (x221-(x222*(x223&x224)));

	if (t40 != -4930746) { NG(); } else { ; }
	
}

void f41(void) {
	uint32_t x225 = UINT32_MAX;
	volatile int16_t x226 = -1;
	static int8_t x227 = -1;
	uint64_t t41 = 53224169LLU;

	t41 = (x225-(x226*(x227&x228)));

	if (t41 != 4294967294LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x234 = INT16_MAX;
	uint8_t x235 = 11U;
	int8_t x236 = INT8_MIN;
	volatile int64_t t42 = INT64_MIN;

	t42 = (x233-(x234*(x235&x236)));

	if (t42 != INT64_MIN) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x237 = INT32_MIN;
	uint32_t x238 = UINT32_MAX;
	uint16_t x239 = 1U;
	static uint32_t x240 = 0U;
	static uint32_t t43 = 20U;

	t43 = (x237-(x238*(x239&x240)));

	if (t43 != 2147483648U) { NG(); } else { ; }
	
}

void f44(void) {
	uint8_t x245 = 3U;
	uint64_t x246 = UINT64_MAX;
	uint8_t x247 = UINT8_MAX;
	int8_t x248 = 13;

	t44 = (x245-(x246*(x247&x248)));

	if (t44 != 16LLU) { NG(); } else { ; }
	
}

void f45(void) {
	static int16_t x250 = INT16_MIN;
	uint8_t x251 = 42U;
	int8_t x252 = INT8_MIN;
	int32_t t45 = -1;

	t45 = (x249-(x250*(x251&x252)));

	if (t45 != -32768) { NG(); } else { ; }
	
}

void f46(void) {
	static int64_t x253 = -1LL;
	volatile uint32_t x255 = UINT32_MAX;
	int64_t x256 = INT64_MAX;
	static int64_t t46 = -7224635656481LL;

	t46 = (x253-(x254*(x255&x256)));

	if (t46 != -1095216660226LL) { NG(); } else { ; }
	
}

void f47(void) {
	uint64_t x262 = UINT64_MAX;
	int8_t x263 = -2;
	static uint64_t t47 = 12205860787LLU;

	t47 = (x261-(x262*(x263&x264)));

	if (t47 != 9223372036854771688LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x265 = -43;
	int64_t x267 = 645124741LL;
	volatile uint8_t x268 = 49U;

	t48 = (x265-(x266*(x267&x268)));

	if (t48 != -42LL) { NG(); } else { ; }
	
}

void f49(void) {
	int8_t x269 = 31;
	uint64_t x270 = 10236289945831LLU;
	int16_t x271 = 4;
	volatile uint64_t t49 = 785395936290LLU;

	t49 = (x269-(x270*(x271&x272)));

	if (t49 != 31LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x273 = INT8_MIN;
	uint16_t x274 = 479U;
	volatile int64_t x275 = -2492838LL;
	int16_t x276 = INT16_MIN;

	t50 = (x273-(x274*(x275&x276)));

	if (t50 != 1208582016LL) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x281 = INT32_MIN;
	volatile int16_t x282 = INT16_MIN;
	int16_t x283 = INT16_MIN;
	uint32_t t51 = 2U;

	t51 = (x281-(x282*(x283&x284)));

	if (t51 != 1073741824U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x285 = INT8_MIN;
	static uint32_t x286 = UINT32_MAX;
	static int16_t x287 = -1;
	volatile uint64_t t52 = 98LLU;

	t52 = (x285-(x286*(x287&x288)));

	if (t52 != 8281135306303272028LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x289 = -1LL;
	volatile uint32_t x290 = UINT32_MAX;
	int8_t x291 = 11;
	int32_t x292 = INT32_MIN;
	volatile int64_t t53 = 242648313LL;

	t53 = (x289-(x290*(x291&x292)));

	if (t53 != -1LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x293 = INT32_MIN;
	int32_t x295 = INT32_MAX;
	volatile int32_t t54 = 3341956;

	t54 = (x293-(x294*(x295&x296)));

	if (t54 != -2143322112) { NG(); } else { ; }
	
}

void f55(void) {
	int32_t x297 = -21573391;
	int64_t x299 = 3669227492LL;
	static volatile int8_t x300 = INT8_MIN;
	volatile int64_t t55 = 10969666947LL;

	t55 = (x297-(x298*(x299&x300)));

	if (t55 != -935674558351LL) { NG(); } else { ; }
	
}

void f56(void) {
	uint16_t x301 = UINT16_MAX;
	int64_t x302 = -1LL;
	static int16_t x304 = -402;
	int64_t t56 = -1846873517LL;

	t56 = (x301-(x302*(x303&x304)));

	if (t56 != 32767LL) { NG(); } else { ; }
	
}

void f57(void) {
	static volatile int8_t x305 = INT8_MIN;
	int8_t x307 = INT8_MAX;
	volatile int32_t t57 = -459119;

	t57 = (x305-(x306*(x307&x308)));

	if (t57 != 16128) { NG(); } else { ; }
	
}

void f58(void) {
	static int8_t x309 = 0;
	uint64_t x310 = 6454212001690LLU;
	uint64_t x311 = UINT64_MAX;
	uint32_t x312 = 752659039U;
	volatile uint64_t t58 = 452675LLU;

	t58 = (x309-(x310*(x311&x312)));

	if (t58 != 12119432765059850714LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x313 = 2725LL;
	int8_t x314 = -1;
	int64_t t59 = 10LL;

	t59 = (x313-(x314*(x315&x316)));

	if (t59 != -4294964570LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int8_t x321 = -1;
	int8_t x322 = -35;
	volatile uint32_t x323 = 770829965U;
	static int32_t x324 = INT32_MAX;
	volatile uint32_t t60 = 2452658U;

	t60 = (x321-(x322*(x323&x324)));

	if (t60 != 1209244998U) { NG(); } else { ; }
	
}

void f61(void) {
	uint8_t x325 = UINT8_MAX;
	int8_t x326 = 14;
	static int64_t x327 = -17136477268006854LL;
	static uint64_t x328 = UINT64_MAX;
	uint64_t t61 = 44LLU;

	t61 = (x325-(x326*(x327&x328)));

	if (t61 != 239910681752096211LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x329 = -1;
	int16_t x330 = -1;
	volatile int16_t x331 = -1;
	uint8_t x332 = UINT8_MAX;
	volatile int32_t t62 = -172941;

	t62 = (x329-(x330*(x331&x332)));

	if (t62 != 254) { NG(); } else { ; }
	
}

void f63(void) {
	static volatile int32_t x333 = -21;
	int8_t x334 = INT8_MAX;
	static int32_t x335 = -1;
	int32_t x336 = -1;
	static volatile int32_t t63 = -79677536;

	t63 = (x333-(x334*(x335&x336)));

	if (t63 != 106) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x339 = INT16_MIN;
	uint64_t t64 = 6813LLU;

	t64 = (x337-(x338*(x339&x340)));

	if (t64 != 9890123875503570944LLU) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x342 = INT16_MAX;
	int16_t x343 = 1;
	volatile uint64_t t65 = 136417LLU;

	t65 = (x341-(x342*(x343&x344)));

	if (t65 != 155096744926568208LLU) { NG(); } else { ; }
	
}

void f66(void) {
	uint16_t x350 = 16210U;
	volatile int8_t x351 = INT8_MIN;
	static int32_t x352 = 1648;
	volatile int32_t t66 = 68069715;

	t66 = (x349-(x350*(x351&x352)));

	if (t66 != -24833025) { NG(); } else { ; }
	
}

void f67(void) {
	static volatile uint16_t x353 = 11U;
	int64_t x354 = -1LL;
	uint8_t x356 = 1U;

	t67 = (x353-(x354*(x355&x356)));

	if (t67 != 12LL) { NG(); } else { ; }
	
}

void f68(void) {
	int8_t x357 = INT8_MAX;
	static int64_t x359 = -14274LL;
	static int8_t x360 = INT8_MIN;
	volatile int64_t t68 = 2930670LL;

	t68 = (x357-(x358*(x359&x360)));

	if (t68 != 3655807LL) { NG(); } else { ; }
	
}

void f69(void) {
	uint16_t x362 = 1U;
	uint64_t x363 = 558434942866292LLU;
	int16_t x364 = -190;
	static uint64_t t69 = 32113799475209264LLU;

	t69 = (x361-(x362*(x363&x364)));

	if (t69 != 18446185638766685248LLU) { NG(); } else { ; }
	
}

void f70(void) {
	int32_t x365 = 229859997;
	volatile int16_t x366 = INT16_MAX;
	uint32_t x367 = 1U;
	static uint16_t x368 = 0U;
	uint32_t t70 = 1U;

	t70 = (x365-(x366*(x367&x368)));

	if (t70 != 229859997U) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x369 = 1113843443860361919LL;
	int8_t x371 = -1;
	int64_t t71 = 1611LL;

	t71 = (x369-(x370*(x371&x372)));

	if (t71 != 1113843442786620095LL) { NG(); } else { ; }
	
}

void f72(void) {
	int8_t x374 = -1;
	volatile int32_t x375 = INT32_MAX;
	int8_t x376 = -55;
	static int32_t t72 = -3284;

	t72 = (x373-(x374*(x375&x376)));

	if (t72 != 2147483590) { NG(); } else { ; }
	
}

void f73(void) {
	uint64_t x378 = 344017LLU;
	static volatile int16_t x380 = INT16_MIN;
	static volatile uint64_t t73 = 7821592305253614LLU;

	t73 = (x377-(x378*(x379&x380)));

	if (t73 != 562LLU) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x385 = 23;
	volatile int8_t x386 = -1;
	int8_t x387 = INT8_MIN;
	static uint16_t x388 = UINT16_MAX;
	volatile int32_t t74 = 30;

	t74 = (x385-(x386*(x387&x388)));

	if (t74 != 65431) { NG(); } else { ; }
	
}

void f75(void) {
	static volatile int32_t x389 = INT32_MIN;
	int64_t x390 = -1LL;
	int64_t t75 = -262515528000458021LL;

	t75 = (x389-(x390*(x391&x392)));

	if (t75 != -2147453996LL) { NG(); } else { ; }
	
}

void f76(void) {
	static uint16_t x398 = 14444U;
	int16_t x399 = 25;
	int32_t x400 = -6;

	t76 = (x397-(x398*(x399&x400)));

	if (t76 != 18446744073709204959LLU) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x401 = 4U;
	uint16_t x402 = UINT16_MAX;
	uint16_t x403 = 3U;
	int16_t x404 = -351;
	volatile int32_t t77 = -480135221;

	t77 = (x401-(x402*(x403&x404)));

	if (t77 != -65531) { NG(); } else { ; }
	
}

void f78(void) {
	volatile uint8_t x409 = 0U;
	uint32_t x410 = 3425640U;
	int64_t x411 = INT64_MIN;
	uint64_t x412 = 365327145LLU;
	static volatile uint64_t t78 = 762842906163LLU;

	t78 = (x409-(x410*(x411&x412)));

	if (t78 != 0LLU) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x413 = UINT16_MAX;
	static int16_t x414 = 3064;
	uint64_t x416 = 1576245LLU;
	volatile uint64_t t79 = 421910372LLU;

	t79 = (x413-(x414*(x415&x416)));

	if (t79 != 18446744068880002471LLU) { NG(); } else { ; }
	
}

void f80(void) {
	int64_t x417 = -251233507LL;
	int32_t x418 = INT32_MAX;
	int8_t x419 = INT8_MIN;
	int8_t x420 = 0;
	int64_t t80 = 0LL;

	t80 = (x417-(x418*(x419&x420)));

	if (t80 != -251233507LL) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x425 = INT16_MIN;
	static int16_t x427 = 0;
	int16_t x428 = -38;

	t81 = (x425-(x426*(x427&x428)));

	if (t81 != 18446744073709518848LLU) { NG(); } else { ; }
	
}

void f82(void) {
	int32_t x429 = 614510;
	volatile int8_t x430 = 17;
	static volatile uint64_t x431 = 369249945033370LLU;
	int64_t x432 = INT64_MAX;

	t82 = (x429-(x430*(x431&x432)));

	if (t82 != 18440466824644598836LLU) { NG(); } else { ; }
	
}

void f83(void) {
	uint8_t x433 = 71U;
	int16_t x434 = INT16_MIN;
	int8_t x435 = INT8_MIN;
	static uint16_t x436 = UINT16_MAX;
	volatile int32_t t83 = -1;

	t83 = (x433-(x434*(x435&x436)));

	if (t83 != 2143289415) { NG(); } else { ; }
	
}

void f84(void) {
	uint32_t x437 = UINT32_MAX;
	static int64_t x439 = -1LL;
	uint64_t x440 = 41078553937LLU;
	uint64_t t84 = 44241592178LLU;

	t84 = (x437-(x438*(x439&x440)));

	if (t84 != 18446743995847411037LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int8_t x446 = 0;
	volatile uint32_t x448 = 109198U;
	volatile int64_t t85 = 4287564075255LL;

	t85 = (x445-(x446*(x447&x448)));

	if (t85 != -128LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile int32_t x450 = INT32_MIN;
	int64_t x451 = INT64_MIN;
	volatile uint8_t x452 = UINT8_MAX;

	t86 = (x449-(x450*(x451&x452)));

	if (t86 != -128LL) { NG(); } else { ; }
	
}

void f87(void) {
	volatile uint32_t x453 = UINT32_MAX;
	int8_t x454 = INT8_MAX;
	static uint8_t x455 = 95U;
	uint32_t x456 = UINT32_MAX;
	volatile uint32_t t87 = 3U;

	t87 = (x453-(x454*(x455&x456)));

	if (t87 != 4294955230U) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x462 = 5071U;
	uint8_t x463 = UINT8_MAX;
	static int8_t x464 = 0;

	t88 = (x461-(x462*(x463&x464)));

	if (t88 != -812280536002350LL) { NG(); } else { ; }
	
}

void f89(void) {
	uint64_t x465 = 118790010630792LLU;
	int32_t x466 = INT32_MIN;
	uint32_t x467 = 90009610U;
	int16_t x468 = -7828;

	t89 = (x465-(x466*(x467&x468)));

	if (t89 != 118790010630792LLU) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x473 = INT32_MIN;
	static uint32_t x475 = UINT32_MAX;
	int64_t x476 = -3957LL;
	volatile int64_t t90 = 107211466281LL;

	t90 = (x473-(x474*(x475&x476)));

	if (t90 != -4559103586327LL) { NG(); } else { ; }
	
}

void f91(void) {
	static uint16_t x477 = 162U;
	int64_t x478 = -10331942233459LL;
	static uint64_t x479 = 19550476296705LLU;
	int16_t x480 = INT16_MIN;
	volatile uint64_t t91 = 64864138LLU;

	t91 = (x477-(x478*(x479&x480)));

	if (t91 != 16663889709763428514LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int64_t x481 = INT64_MIN;
	static uint16_t x483 = 96U;
	uint8_t x484 = 23U;
	int64_t t92 = INT64_MIN;

	t92 = (x481-(x482*(x483&x484)));

	if (t92 != INT64_MIN) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x489 = 347U;
	static int64_t x490 = INT64_MIN;
	volatile uint16_t x491 = 27U;
	int16_t x492 = INT16_MIN;
	int64_t t93 = -2575677LL;

	t93 = (x489-(x490*(x491&x492)));

	if (t93 != 347LL) { NG(); } else { ; }
	
}

void f94(void) {
	uint8_t x493 = 5U;
	uint64_t x495 = 1041334741931955LLU;
	static volatile uint64_t t94 = 1168157214457286149LLU;

	t94 = (x493-(x494*(x495&x496)));

	if (t94 != 133290846967283717LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x497 = 30U;
	volatile uint64_t x498 = UINT64_MAX;
	int8_t x499 = INT8_MAX;
	volatile uint64_t t95 = 9643LLU;

	t95 = (x497-(x498*(x499&x500)));

	if (t95 != 157LLU) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x501 = 6U;
	volatile int16_t x502 = INT16_MIN;
	int16_t x504 = -30;
	volatile int32_t t96 = -1775402;

	t96 = (x501-(x502*(x503&x504)));

	if (t96 != 1048582) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint8_t x505 = 26U;
	uint8_t x506 = 6U;
	int32_t x507 = -1;
	static uint64_t x508 = UINT64_MAX;

	t97 = (x505-(x506*(x507&x508)));

	if (t97 != 32LLU) { NG(); } else { ; }
	
}

void f98(void) {
	int32_t x509 = INT32_MIN;
	int32_t x510 = -1;
	volatile uint32_t x511 = 279U;
	static volatile uint8_t x512 = 48U;
	static volatile uint32_t t98 = 29271086U;

	t98 = (x509-(x510*(x511&x512)));

	if (t98 != 2147483664U) { NG(); } else { ; }
	
}

void f99(void) {
	int16_t x513 = INT16_MIN;
	volatile uint16_t x514 = 1857U;
	int64_t x515 = -1LL;
	int32_t x516 = INT32_MIN;
	volatile int64_t t99 = 5150LL;

	t99 = (x513-(x514*(x515&x516)));

	if (t99 != 3987877101568LL) { NG(); } else { ; }
	
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

