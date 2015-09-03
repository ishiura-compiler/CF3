#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x2 = 31LL;
volatile uint64_t t1 = 34580621501LLU;
static uint64_t x39 = 773661439075LLU;
uint32_t x40 = UINT32_MAX;
int32_t x52 = INT32_MIN;
int32_t x71 = -1;
int32_t x75 = INT32_MAX;
volatile int32_t x80 = INT32_MIN;
static uint32_t t12 = 173161U;
int8_t x92 = INT8_MAX;
volatile uint32_t t13 = 158U;
int16_t x94 = -1;
int32_t x101 = -1;
int8_t x103 = 1;
int16_t x118 = 65;
static uint64_t t19 = 28988LLU;
volatile int8_t x123 = -1;
static int16_t x124 = INT16_MAX;
int32_t x131 = INT32_MIN;
volatile int32_t t21 = -160;
volatile int64_t x147 = -4850720LL;
volatile int8_t x167 = INT8_MAX;
static int32_t x169 = INT32_MIN;
static uint64_t x173 = 0LLU;
int16_t x174 = -1;
static uint64_t x181 = 482326869133008LLU;
int8_t x182 = INT8_MAX;
uint64_t x183 = UINT64_MAX;
uint64_t t33 = 112558640950LLU;
int32_t x195 = 399;
int64_t x196 = -1LL;
uint64_t x198 = UINT64_MAX;
static uint64_t t36 = 306239251118786LLU;
static uint8_t x202 = UINT8_MAX;
int32_t x207 = -6;
uint32_t x208 = UINT32_MAX;
static volatile uint64_t x209 = 199581923160386LLU;
static int64_t x225 = -1LL;
static int32_t x231 = INT32_MIN;
int16_t x234 = -1;
uint8_t x257 = UINT8_MAX;
int32_t x266 = 144;
int8_t x268 = INT8_MAX;
int64_t x280 = 1LL;
int16_t x287 = INT16_MIN;
static int64_t t53 = 27845LL;
static int16_t x290 = INT16_MIN;
int64_t t54 = 150024212767759056LL;
int8_t x303 = -39;
static int16_t x313 = 74;
int64_t x317 = -1LL;
int8_t x320 = -1;
int32_t x326 = INT32_MIN;
uint16_t x327 = 0U;
uint8_t x329 = 1U;
uint8_t x332 = 8U;
static int16_t x333 = 1;
static int8_t x335 = -3;
int16_t x342 = INT16_MIN;
int16_t x343 = INT16_MAX;
uint32_t x346 = UINT32_MAX;
int16_t x351 = INT16_MIN;
static volatile int32_t t69 = -616;
uint64_t x355 = 231850LLU;
volatile uint64_t t70 = 165LLU;
int64_t x358 = INT64_MIN;
volatile int8_t x360 = -62;
volatile uint16_t x362 = 1011U;
volatile uint64_t t72 = 3459124356535137LLU;
uint8_t x372 = 101U;
int32_t x373 = INT32_MIN;
uint16_t x382 = UINT16_MAX;
int16_t x387 = INT16_MIN;
static int32_t x396 = -2;
int32_t x404 = 15033;
uint64_t x408 = 4623650854981LLU;
static volatile uint64_t t85 = 103314268479105LLU;
volatile int16_t x444 = INT16_MAX;
volatile int32_t t86 = -2;
static uint64_t t87 = 635282808265560LLU;
static volatile uint32_t t89 = 241237U;
static volatile uint32_t t92 = 383U;
static uint32_t x475 = 23965038U;
volatile uint32_t t93 = 4U;
uint32_t x487 = 1906370U;
int16_t x488 = -1;
int16_t x490 = INT16_MIN;
volatile int64_t t97 = -1LL;
static uint64_t x493 = UINT64_MAX;
volatile uint64_t t98 = 9611747549LLU;
int32_t x502 = INT32_MIN;


void f0(void) {
	int32_t x1 = -1;
	static int32_t x3 = 389038;
	static volatile int64_t x4 = -1LL;
	volatile int64_t t0 = 3LL;

	t0 = (x1&(x2*(x3&x4)));

	if (t0 != 12060178LL) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = -1;
	static uint64_t x6 = 17LLU;
	int32_t x7 = INT32_MIN;
	volatile int64_t x8 = INT64_MIN;

	t1 = (x5&(x6*(x7&x8)));

	if (t1 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f2(void) {
	uint64_t x9 = 182726999544322LLU;
	int32_t x10 = INT32_MIN;
	uint64_t x11 = UINT64_MAX;
	volatile int32_t x12 = INT32_MAX;
	uint64_t t2 = 507769668LLU;

	t2 = (x9&(x10*(x11&x12)));

	if (t2 != 0LLU) { NG(); } else { ; }
	
}

void f3(void) {
	int32_t x25 = -448933831;
	static int16_t x26 = INT16_MIN;
	static int8_t x27 = INT8_MIN;
	volatile int64_t x28 = -1LL;
	int64_t t3 = 1527393654528565LL;

	t3 = (x25&(x26*(x27&x28)));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	static uint32_t x37 = 5566U;
	volatile uint8_t x38 = 9U;
	uint64_t t4 = 39175003125LLU;

	t4 = (x37&(x38*(x39&x40)));

	if (t4 != 5434LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x45 = 57;
	uint32_t x46 = UINT32_MAX;
	static volatile int32_t x47 = INT32_MIN;
	static int16_t x48 = -8338;
	volatile uint32_t t5 = 12U;

	t5 = (x45&(x46*(x47&x48)));

	if (t5 != 0U) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x49 = INT16_MIN;
	uint32_t x50 = 70099334U;
	int32_t x51 = 439;
	volatile uint32_t t6 = 0U;

	t6 = (x49&(x50*(x51&x52)));

	if (t6 != 0U) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x53 = 3U;
	uint32_t x54 = 19U;
	uint8_t x55 = 2U;
	volatile uint8_t x56 = 1U;
	uint32_t t7 = 30U;

	t7 = (x53&(x54*(x55&x56)));

	if (t7 != 0U) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x65 = -1LL;
	uint32_t x66 = UINT32_MAX;
	uint32_t x67 = 1067371U;
	int64_t x68 = INT64_MIN;
	int64_t t8 = -4002996LL;

	t8 = (x65&(x66*(x67&x68)));

	if (t8 != 0LL) { NG(); } else { ; }
	
}

void f9(void) {
	uint8_t x69 = 0U;
	int8_t x70 = INT8_MIN;
	volatile uint32_t x72 = 15057U;
	volatile uint32_t t9 = 26670U;

	t9 = (x69&(x70*(x71&x72)));

	if (t9 != 0U) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int32_t x73 = INT32_MIN;
	uint64_t x74 = UINT64_MAX;
	uint16_t x76 = UINT16_MAX;
	static volatile uint64_t t10 = 187LLU;

	t10 = (x73&(x74*(x75&x76)));

	if (t10 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint32_t x77 = 10968U;
	uint32_t x78 = 3U;
	int8_t x79 = INT8_MIN;
	volatile uint32_t t11 = 0U;

	t11 = (x77&(x78*(x79&x80)));

	if (t11 != 0U) { NG(); } else { ; }
	
}

void f12(void) {
	volatile int16_t x81 = INT16_MIN;
	uint32_t x82 = 40U;
	int32_t x83 = -1;
	volatile int8_t x84 = INT8_MIN;

	t12 = (x81&(x82*(x83&x84)));

	if (t12 != 4294934528U) { NG(); } else { ; }
	
}

void f13(void) {
	uint8_t x89 = 0U;
	int8_t x90 = -2;
	uint32_t x91 = UINT32_MAX;

	t13 = (x89&(x90*(x91&x92)));

	if (t13 != 0U) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x93 = 1;
	int32_t x95 = -1;
	int8_t x96 = INT8_MAX;
	int32_t t14 = -119704136;

	t14 = (x93&(x94*(x95&x96)));

	if (t14 != 1) { NG(); } else { ; }
	
}

void f15(void) {
	int32_t x97 = -1;
	int64_t x98 = -1LL;
	int16_t x99 = -1;
	int16_t x100 = INT16_MIN;
	volatile int64_t t15 = 9LL;

	t15 = (x97&(x98*(x99&x100)));

	if (t15 != 32768LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x102 = UINT16_MAX;
	int16_t x104 = INT16_MAX;
	volatile int32_t t16 = 1;

	t16 = (x101&(x102*(x103&x104)));

	if (t16 != 65535) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x105 = INT8_MAX;
	uint8_t x106 = UINT8_MAX;
	volatile uint16_t x107 = UINT16_MAX;
	static int16_t x108 = INT16_MIN;
	int32_t t17 = -87305761;

	t17 = (x105&(x106*(x107&x108)));

	if (t17 != 0) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x109 = INT16_MAX;
	uint32_t x110 = 2U;
	int32_t x111 = INT32_MIN;
	int8_t x112 = INT8_MIN;
	uint32_t t18 = 8258U;

	t18 = (x109&(x110*(x111&x112)));

	if (t18 != 0U) { NG(); } else { ; }
	
}

void f19(void) {
	volatile int32_t x117 = -1;
	uint64_t x119 = UINT64_MAX;
	volatile int16_t x120 = INT16_MAX;

	t19 = (x117&(x118*(x119&x120)));

	if (t19 != 2129855LLU) { NG(); } else { ; }
	
}

void f20(void) {
	volatile int32_t x121 = -1;
	volatile uint16_t x122 = UINT16_MAX;
	int32_t t20 = 10;

	t20 = (x121&(x122*(x123&x124)));

	if (t20 != 2147385345) { NG(); } else { ; }
	
}

void f21(void) {
	int16_t x129 = 7408;
	int8_t x130 = 0;
	int32_t x132 = INT32_MAX;

	t21 = (x129&(x130*(x131&x132)));

	if (t21 != 0) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x133 = 1;
	int32_t x134 = 215484445;
	uint32_t x135 = UINT32_MAX;
	int32_t x136 = INT32_MAX;
	uint32_t t22 = 3U;

	t22 = (x133&(x134*(x135&x136)));

	if (t22 != 1U) { NG(); } else { ; }
	
}

void f23(void) {
	volatile int16_t x137 = INT16_MIN;
	uint32_t x138 = 347U;
	volatile uint32_t x139 = UINT32_MAX;
	int8_t x140 = INT8_MIN;
	uint32_t t23 = 964662030U;

	t23 = (x137&(x138*(x139&x140)));

	if (t23 != 4294901760U) { NG(); } else { ; }
	
}

void f24(void) {
	uint64_t x141 = 112LLU;
	uint8_t x142 = 3U;
	static volatile uint16_t x143 = UINT16_MAX;
	uint64_t x144 = UINT64_MAX;
	volatile uint64_t t24 = 21130503LLU;

	t24 = (x141&(x142*(x143&x144)));

	if (t24 != 112LLU) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x145 = 131LLU;
	volatile int16_t x146 = INT16_MIN;
	int64_t x148 = -8LL;
	volatile uint64_t t25 = 1LLU;

	t25 = (x145&(x146*(x147&x148)));

	if (t25 != 0LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int16_t x149 = 0;
	int64_t x150 = INT64_MIN;
	volatile int16_t x151 = INT16_MIN;
	static uint8_t x152 = 5U;
	int64_t t26 = -71790LL;

	t26 = (x149&(x150*(x151&x152)));

	if (t26 != 0LL) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x153 = -260LL;
	uint32_t x154 = 59799U;
	int32_t x155 = -1;
	volatile int16_t x156 = INT16_MIN;
	volatile int64_t t27 = 1LL;

	t27 = (x153&(x154*(x155&x156)));

	if (t27 != 2335473664LL) { NG(); } else { ; }
	
}

void f28(void) {
	static int8_t x161 = 1;
	static int32_t x162 = -3123;
	volatile uint64_t x163 = UINT64_MAX;
	int64_t x164 = INT64_MIN;
	uint64_t t28 = 26LLU;

	t28 = (x161&(x162*(x163&x164)));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x165 = INT64_MIN;
	int32_t x166 = -1;
	int8_t x168 = INT8_MAX;
	int64_t t29 = INT64_MIN;

	t29 = (x165&(x166*(x167&x168)));

	if (t29 != INT64_MIN) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x170 = INT8_MIN;
	volatile int8_t x171 = 1;
	int64_t x172 = INT64_MIN;
	int64_t t30 = 20302177966552475LL;

	t30 = (x169&(x170*(x171&x172)));

	if (t30 != 0LL) { NG(); } else { ; }
	
}

void f31(void) {
	volatile uint64_t x175 = UINT64_MAX;
	int64_t x176 = -4315LL;
	volatile uint64_t t31 = 317028119981LLU;

	t31 = (x173&(x174*(x175&x176)));

	if (t31 != 0LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint32_t x177 = UINT32_MAX;
	int64_t x178 = INT64_MAX;
	int32_t x179 = INT32_MIN;
	uint8_t x180 = 38U;
	static volatile int64_t t32 = 0LL;

	t32 = (x177&(x178*(x179&x180)));

	if (t32 != 0LL) { NG(); } else { ; }
	
}

void f33(void) {
	uint64_t x184 = 592989LLU;

	t33 = (x181&(x182*(x183&x184)));

	if (t33 != 3211776LLU) { NG(); } else { ; }
	
}

void f34(void) {
	int16_t x189 = INT16_MIN;
	int16_t x190 = 11970;
	uint64_t x191 = 18315408LLU;
	int8_t x192 = INT8_MAX;
	volatile uint64_t t34 = 166444343LLU;

	t34 = (x189&(x190*(x191&x192)));

	if (t34 != 163840LLU) { NG(); } else { ; }
	
}

void f35(void) {
	uint8_t x193 = 76U;
	uint16_t x194 = 23432U;
	static int64_t t35 = -6729630924020LL;

	t35 = (x193&(x194*(x195&x196)));

	if (t35 != 72LL) { NG(); } else { ; }
	
}

void f36(void) {
	uint8_t x197 = 5U;
	uint32_t x199 = 411004U;
	uint64_t x200 = 883338695800896LLU;

	t36 = (x197&(x198*(x199&x200)));

	if (t36 != 0LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint64_t x201 = 657002032604080419LLU;
	int64_t x203 = INT64_MAX;
	int16_t x204 = 3003;
	static uint64_t t37 = 539706215338237LLU;

	t37 = (x201&(x202*(x203&x204)));

	if (t37 != 207105LLU) { NG(); } else { ; }
	
}

void f38(void) {
	static volatile int32_t x205 = INT32_MIN;
	uint8_t x206 = 12U;
	uint32_t t38 = 24677U;

	t38 = (x205&(x206*(x207&x208)));

	if (t38 != 2147483648U) { NG(); } else { ; }
	
}

void f39(void) {
	static int64_t x210 = INT64_MIN;
	uint64_t x211 = 19506141091787539LLU;
	static int64_t x212 = INT64_MAX;
	static volatile uint64_t t39 = 123020LLU;

	t39 = (x209&(x210*(x211&x212)));

	if (t39 != 0LLU) { NG(); } else { ; }
	
}

void f40(void) {
	static int32_t x221 = INT32_MIN;
	int8_t x222 = INT8_MAX;
	volatile uint32_t x223 = 192895U;
	uint32_t x224 = 540702U;
	volatile uint32_t t40 = 152431059U;

	t40 = (x221&(x222*(x223&x224)));

	if (t40 != 0U) { NG(); } else { ; }
	
}

void f41(void) {
	int32_t x226 = INT32_MIN;
	int32_t x227 = 2;
	int64_t x228 = -23747LL;
	static int64_t t41 = -286453594672LL;

	t41 = (x225&(x226*(x227&x228)));

	if (t41 != 0LL) { NG(); } else { ; }
	
}

void f42(void) {
	volatile uint8_t x229 = UINT8_MAX;
	volatile int32_t x230 = 17359477;
	uint64_t x232 = UINT64_MAX;
	uint64_t t42 = 3815607461051730LLU;

	t42 = (x229&(x230*(x231&x232)));

	if (t42 != 0LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x233 = -1;
	int16_t x235 = -5925;
	int16_t x236 = INT16_MIN;
	int32_t t43 = 473085949;

	t43 = (x233&(x234*(x235&x236)));

	if (t43 != 32768) { NG(); } else { ; }
	
}

void f44(void) {
	static int16_t x237 = INT16_MAX;
	static int8_t x238 = INT8_MIN;
	volatile int8_t x239 = INT8_MAX;
	int16_t x240 = INT16_MIN;
	static volatile int32_t t44 = 145;

	t44 = (x237&(x238*(x239&x240)));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int64_t x241 = -1819902184846367LL;
	uint64_t x242 = UINT64_MAX;
	int16_t x243 = INT16_MIN;
	int8_t x244 = -1;
	volatile uint64_t t45 = 176075LLU;

	t45 = (x241&(x242*(x243&x244)));

	if (t45 != 0LLU) { NG(); } else { ; }
	
}

void f46(void) {
	uint8_t x245 = 8U;
	int64_t x246 = -1LL;
	int16_t x247 = 26;
	int64_t x248 = INT64_MIN;
	static volatile int64_t t46 = -142179278517897LL;

	t46 = (x245&(x246*(x247&x248)));

	if (t46 != 0LL) { NG(); } else { ; }
	
}

void f47(void) {
	int32_t x253 = -3;
	int8_t x254 = -1;
	static uint16_t x255 = 2303U;
	static int16_t x256 = -1;
	volatile int32_t t47 = 80;

	t47 = (x253&(x254*(x255&x256)));

	if (t47 != -2303) { NG(); } else { ; }
	
}

void f48(void) {
	static int32_t x258 = INT32_MAX;
	int64_t x259 = -1LL;
	static uint64_t x260 = UINT64_MAX;
	volatile uint64_t t48 = 35047180LLU;

	t48 = (x257&(x258*(x259&x260)));

	if (t48 != 1LLU) { NG(); } else { ; }
	
}

void f49(void) {
	uint32_t x261 = 356U;
	uint16_t x262 = UINT16_MAX;
	volatile int32_t x263 = INT32_MIN;
	static uint16_t x264 = UINT16_MAX;
	uint32_t t49 = 7U;

	t49 = (x261&(x262*(x263&x264)));

	if (t49 != 0U) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x265 = INT8_MIN;
	int32_t x267 = INT32_MIN;
	int32_t t50 = -35788;

	t50 = (x265&(x266*(x267&x268)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x273 = UINT64_MAX;
	uint8_t x274 = 43U;
	volatile uint16_t x275 = 6443U;
	uint8_t x276 = 123U;
	uint64_t t51 = 9996787387LLU;

	t51 = (x273&(x274*(x275&x276)));

	if (t51 != 1849LLU) { NG(); } else { ; }
	
}

void f52(void) {
	uint32_t x277 = UINT32_MAX;
	int64_t x278 = 325944177113527686LL;
	uint64_t x279 = 85353226159451LLU;
	volatile uint64_t t52 = 932372LLU;

	t52 = (x277&(x278*(x279&x280)));

	if (t52 != 2373285254LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int64_t x285 = 899798318119371LL;
	int16_t x286 = INT16_MAX;
	static volatile int64_t x288 = -1LL;

	t53 = (x285&(x286*(x287&x288)));

	if (t53 != 899797796028416LL) { NG(); } else { ; }
	
}

void f54(void) {
	volatile uint16_t x289 = UINT16_MAX;
	int64_t x291 = INT64_MIN;
	uint8_t x292 = UINT8_MAX;

	t54 = (x289&(x290*(x291&x292)));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	static uint32_t x293 = UINT32_MAX;
	int64_t x294 = -1LL;
	int8_t x295 = -19;
	volatile uint8_t x296 = 0U;
	volatile int64_t t55 = -3999425798551807884LL;

	t55 = (x293&(x294*(x295&x296)));

	if (t55 != 0LL) { NG(); } else { ; }
	
}

void f56(void) {
	volatile int32_t x297 = INT32_MIN;
	int8_t x298 = -1;
	int64_t x299 = 735403LL;
	static uint8_t x300 = 5U;
	int64_t t56 = -4539196185662478311LL;

	t56 = (x297&(x298*(x299&x300)));

	if (t56 != -2147483648LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x301 = 15U;
	uint8_t x302 = UINT8_MAX;
	uint8_t x304 = 6U;
	int32_t t57 = -258476912;

	t57 = (x301&(x302*(x303&x304)));

	if (t57 != 0) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x305 = -959;
	int32_t x306 = -1;
	static int32_t x307 = INT32_MAX;
	uint16_t x308 = UINT16_MAX;
	int32_t t58 = -15438996;

	t58 = (x305&(x306*(x307&x308)));

	if (t58 != -65535) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x309 = INT8_MAX;
	volatile int8_t x310 = 27;
	uint16_t x311 = UINT16_MAX;
	uint32_t x312 = UINT32_MAX;
	uint32_t t59 = 104U;

	t59 = (x309&(x310*(x311&x312)));

	if (t59 != 101U) { NG(); } else { ; }
	
}

void f60(void) {
	volatile uint64_t x314 = UINT64_MAX;
	volatile uint32_t x315 = UINT32_MAX;
	uint64_t x316 = 4391230118578952LLU;
	uint64_t t60 = 9LLU;

	t60 = (x313&(x314*(x315&x316)));

	if (t60 != 72LLU) { NG(); } else { ; }
	
}

void f61(void) {
	volatile int8_t x318 = 2;
	uint32_t x319 = 159252U;
	static volatile int64_t t61 = 179001632086LL;

	t61 = (x317&(x318*(x319&x320)));

	if (t61 != 318504LL) { NG(); } else { ; }
	
}

void f62(void) {
	static int16_t x321 = 387;
	uint8_t x322 = 100U;
	int8_t x323 = -1;
	static int64_t x324 = 2401326101547LL;
	volatile int64_t t62 = -2653781275LL;

	t62 = (x321&(x322*(x323&x324)));

	if (t62 != 128LL) { NG(); } else { ; }
	
}

void f63(void) {
	volatile int16_t x325 = 1;
	int64_t x328 = -807270970LL;
	volatile int64_t t63 = -16124518484LL;

	t63 = (x325&(x326*(x327&x328)));

	if (t63 != 0LL) { NG(); } else { ; }
	
}

void f64(void) {
	static volatile uint16_t x330 = 345U;
	static uint16_t x331 = 3U;
	int32_t t64 = -5;

	t64 = (x329&(x330*(x331&x332)));

	if (t64 != 0) { NG(); } else { ; }
	
}

void f65(void) {
	static uint32_t x334 = 7U;
	volatile int32_t x336 = INT32_MIN;
	volatile uint32_t t65 = 6280121U;

	t65 = (x333&(x334*(x335&x336)));

	if (t65 != 0U) { NG(); } else { ; }
	
}

void f66(void) {
	int64_t x337 = -1LL;
	int8_t x338 = INT8_MIN;
	static int64_t x339 = -1LL;
	static volatile uint64_t x340 = UINT64_MAX;
	uint64_t t66 = 120724424729LLU;

	t66 = (x337&(x338*(x339&x340)));

	if (t66 != 128LLU) { NG(); } else { ; }
	
}

void f67(void) {
	int16_t x341 = INT16_MIN;
	int32_t x344 = INT32_MIN;
	volatile int32_t t67 = 7633556;

	t67 = (x341&(x342*(x343&x344)));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile uint16_t x345 = 2450U;
	static uint16_t x347 = UINT16_MAX;
	int16_t x348 = INT16_MAX;
	static volatile uint32_t t68 = 10U;

	t68 = (x345&(x346*(x347&x348)));

	if (t68 != 0U) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x349 = INT16_MIN;
	uint16_t x350 = UINT16_MAX;
	volatile uint16_t x352 = 0U;

	t69 = (x349&(x350*(x351&x352)));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	static uint16_t x353 = 2865U;
	int16_t x354 = INT16_MAX;
	int16_t x356 = -1;

	t70 = (x353&(x354*(x355&x356)));

	if (t70 != 528LLU) { NG(); } else { ; }
	
}

void f71(void) {
	static volatile int32_t x357 = INT32_MAX;
	volatile uint64_t x359 = 436940LLU;
	static uint64_t t71 = 681785968586070LLU;

	t71 = (x357&(x358*(x359&x360)));

	if (t71 != 0LLU) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x361 = 5LLU;
	uint32_t x363 = UINT32_MAX;
	int8_t x364 = 1;

	t72 = (x361&(x362*(x363&x364)));

	if (t72 != 1LLU) { NG(); } else { ; }
	
}

void f73(void) {
	static int16_t x369 = -1;
	uint64_t x370 = 497LLU;
	int8_t x371 = INT8_MIN;
	uint64_t t73 = 1275878085871160LLU;

	t73 = (x369&(x370*(x371&x372)));

	if (t73 != 0LLU) { NG(); } else { ; }
	
}

void f74(void) {
	uint8_t x374 = 4U;
	uint8_t x375 = UINT8_MAX;
	int32_t x376 = -1;
	int32_t t74 = 6968511;

	t74 = (x373&(x374*(x375&x376)));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x381 = 1;
	uint16_t x383 = 102U;
	static int8_t x384 = -22;
	volatile int32_t t75 = 102792;

	t75 = (x381&(x382*(x383&x384)));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x385 = UINT8_MAX;
	volatile uint8_t x386 = UINT8_MAX;
	uint64_t x388 = 121330986LLU;
	uint64_t t76 = 142LLU;

	t76 = (x385&(x386*(x387&x388)));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x389 = 7;
	int8_t x390 = 28;
	uint32_t x391 = UINT32_MAX;
	static int64_t x392 = INT64_MIN;
	int64_t t77 = -2186LL;

	t77 = (x389&(x390*(x391&x392)));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	static int64_t x393 = INT64_MIN;
	uint16_t x394 = 27155U;
	uint8_t x395 = 1U;
	static int64_t t78 = 513805LL;

	t78 = (x393&(x394*(x395&x396)));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static volatile int64_t x401 = -1LL;
	int8_t x402 = INT8_MAX;
	static uint16_t x403 = 23U;
	static volatile int64_t t79 = 3174857883LL;

	t79 = (x401&(x402*(x403&x404)));

	if (t79 != 2159LL) { NG(); } else { ; }
	
}

void f80(void) {
	volatile int8_t x405 = -1;
	static int16_t x406 = INT16_MAX;
	uint64_t x407 = 474733256857815LLU;
	static volatile uint64_t t80 = 1258820957915255696LLU;

	t80 = (x405&(x406*(x407&x408)));

	if (t80 != 144675374371006395LLU) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x409 = 3;
	int64_t x410 = -208905LL;
	uint16_t x411 = 5366U;
	uint16_t x412 = 49U;
	volatile int64_t t81 = -148987883222853791LL;

	t81 = (x409&(x410*(x411&x412)));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int16_t x417 = INT16_MIN;
	int16_t x418 = -5601;
	int8_t x419 = -1;
	uint16_t x420 = 97U;
	int32_t t82 = -1106364;

	t82 = (x417&(x418*(x419&x420)));

	if (t82 != -557056) { NG(); } else { ; }
	
}

void f83(void) {
	int64_t x425 = 51417454948518239LL;
	int64_t x426 = -1LL;
	int32_t x427 = INT32_MIN;
	volatile int8_t x428 = -1;
	volatile int64_t t83 = 85924LL;

	t83 = (x425&(x426*(x427&x428)));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x429 = INT32_MIN;
	static uint64_t x430 = UINT64_MAX;
	int32_t x431 = 16;
	volatile int8_t x432 = INT8_MAX;
	volatile uint64_t t84 = 780907946733LLU;

	t84 = (x429&(x430*(x431&x432)));

	if (t84 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x433 = INT16_MAX;
	int8_t x434 = INT8_MIN;
	uint64_t x435 = 2LLU;
	int32_t x436 = INT32_MIN;

	t85 = (x433&(x434*(x435&x436)));

	if (t85 != 0LLU) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x441 = INT32_MIN;
	static int16_t x442 = INT16_MAX;
	uint8_t x443 = UINT8_MAX;

	t86 = (x441&(x442*(x443&x444)));

	if (t86 != 0) { NG(); } else { ; }
	
}

void f87(void) {
	static volatile int64_t x445 = INT64_MIN;
	uint8_t x446 = UINT8_MAX;
	static uint8_t x447 = 123U;
	static volatile uint64_t x448 = 114682755446LLU;

	t87 = (x445&(x446*(x447&x448)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	uint16_t x449 = 0U;
	static int8_t x450 = INT8_MAX;
	uint32_t x451 = 108630U;
	int16_t x452 = -1;
	uint32_t t88 = 719444629U;

	t88 = (x449&(x450*(x451&x452)));

	if (t88 != 0U) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x453 = INT8_MIN;
	volatile int32_t x454 = 1480348;
	static volatile uint32_t x455 = 1U;
	static int16_t x456 = INT16_MIN;

	t89 = (x453&(x454*(x455&x456)));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	static volatile int32_t x461 = -210;
	uint32_t x462 = 2829U;
	volatile uint32_t x463 = UINT32_MAX;
	uint64_t x464 = 2424785125175571248LLU;
	uint64_t t90 = 517815759883LLU;

	t90 = (x461&(x462*(x463&x464)));

	if (t90 != 5066221496608LLU) { NG(); } else { ; }
	
}

void f91(void) {
	volatile int8_t x465 = INT8_MAX;
	int64_t x466 = INT64_MIN;
	uint64_t x467 = 1LLU;
	int16_t x468 = -1;
	volatile uint64_t t91 = 419242LLU;

	t91 = (x465&(x466*(x467&x468)));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int16_t x469 = -1;
	uint32_t x470 = 27U;
	static uint8_t x471 = UINT8_MAX;
	static uint16_t x472 = 4037U;

	t92 = (x469&(x470*(x471&x472)));

	if (t92 != 5319U) { NG(); } else { ; }
	
}

void f93(void) {
	int32_t x473 = INT32_MIN;
	volatile int16_t x474 = INT16_MIN;
	int8_t x476 = INT8_MIN;

	t93 = (x473&(x474*(x475&x476)));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	volatile uint64_t x477 = UINT64_MAX;
	uint64_t x478 = UINT64_MAX;
	int64_t x479 = INT64_MIN;
	int64_t x480 = INT64_MAX;
	volatile uint64_t t94 = 6008LLU;

	t94 = (x477&(x478*(x479&x480)));

	if (t94 != 0LLU) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x481 = INT64_MIN;
	uint32_t x482 = 32673746U;
	static int16_t x483 = 0;
	static int8_t x484 = -1;
	static int64_t t95 = 8248674673992LL;

	t95 = (x481&(x482*(x483&x484)));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	volatile uint64_t x485 = 23030071182LLU;
	uint16_t x486 = 32U;
	uint64_t t96 = 447271504021641898LLU;

	t96 = (x485&(x486*(x487&x488)));

	if (t96 != 10672128LLU) { NG(); } else { ; }
	
}

void f97(void) {
	static volatile int64_t x489 = 10356636LL;
	volatile uint32_t x491 = 13056817U;
	uint16_t x492 = UINT16_MAX;

	t97 = (x489&(x490*(x491&x492)));

	if (t97 != 393216LL) { NG(); } else { ; }
	
}

void f98(void) {
	static uint8_t x494 = 13U;
	volatile int32_t x495 = 106180576;
	uint32_t x496 = 601786U;

	t98 = (x493&(x494*(x495&x496)));

	if (t98 != 155168LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int32_t x501 = 0;
	static volatile uint64_t x503 = UINT64_MAX;
	int32_t x504 = 175617;
	uint64_t t99 = 129657408383797LLU;

	t99 = (x501&(x502*(x503&x504)));

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

