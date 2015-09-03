#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile int8_t x1 = INT8_MAX;
int32_t t0 = 3;
volatile uint64_t t1 = 79563351899421LLU;
int8_t x14 = INT8_MIN;
uint8_t x17 = UINT8_MAX;
int64_t x20 = 13LL;
volatile uint32_t x24 = UINT32_MAX;
uint16_t x26 = UINT16_MAX;
int32_t x27 = -1;
int64_t x28 = -87LL;
int64_t t7 = -1LL;
int8_t x38 = -1;
int16_t x48 = INT16_MAX;
uint64_t t10 = 975633946LLU;
static uint8_t x49 = 24U;
int8_t x50 = -1;
volatile int8_t x58 = -1;
volatile int64_t x65 = INT64_MIN;
volatile int16_t x68 = INT16_MAX;
volatile uint64_t t14 = 1004292LLU;
static int8_t x74 = INT8_MAX;
static volatile int32_t x78 = -4077311;
uint64_t x83 = 2548145836954241954LLU;
int64_t x86 = -1LL;
static volatile int64_t t18 = 1210439261192686LL;
uint8_t x91 = 15U;
volatile int32_t x102 = 719;
static volatile uint32_t t21 = 388266988U;
int8_t x107 = 3;
uint16_t x108 = 29971U;
static int32_t x116 = INT32_MIN;
static uint64_t x120 = 71869115LLU;
volatile uint64_t t26 = 175072071387821930LLU;
volatile uint16_t x129 = 6U;
volatile uint64_t t28 = 23820910LLU;
int16_t x139 = INT16_MIN;
static int16_t x141 = INT16_MIN;
int32_t x148 = -1;
int16_t x153 = 66;
int32_t x156 = -2898439;
volatile int64_t t34 = 1498005618477LL;
uint8_t x168 = 124U;
int16_t x172 = INT16_MIN;
volatile uint64_t t37 = 6434315255032908348LLU;
uint16_t x173 = 637U;
volatile int8_t x174 = INT8_MIN;
volatile int8_t x175 = -21;
int16_t x176 = INT16_MIN;
volatile int16_t x178 = INT16_MAX;
volatile int64_t t39 = 691328LL;
static int8_t x182 = INT8_MIN;
uint64_t t41 = 1LLU;
volatile int64_t t42 = -3997251068490LL;
int16_t x193 = INT16_MAX;
int64_t x194 = INT64_MIN;
int64_t t44 = 222006388LL;
uint64_t x208 = UINT64_MAX;
volatile int8_t x210 = INT8_MIN;
uint8_t x230 = 8U;
int32_t x232 = INT32_MAX;
volatile int32_t x238 = INT32_MIN;
static int64_t x245 = -18613LL;
uint8_t x246 = 52U;
volatile int64_t x249 = 574483LL;
int32_t x251 = INT32_MIN;
uint32_t x258 = UINT32_MAX;
uint16_t x259 = 10164U;
uint8_t x264 = 28U;
int64_t x270 = -1LL;
static volatile uint16_t x277 = 363U;
uint32_t x280 = 120530545U;
int8_t x284 = 61;
uint32_t x288 = UINT32_MAX;
int64_t x294 = 10117424450105LL;
volatile int64_t x299 = -2158361LL;
static volatile int8_t x302 = -1;
int32_t x305 = -1;
static int16_t x316 = -1;
int64_t t70 = 344737LL;
static uint32_t x320 = 1564119U;
int64_t x322 = INT64_MIN;
volatile int8_t x328 = INT8_MIN;
uint64_t x332 = UINT64_MAX;
int8_t x335 = INT8_MIN;
uint8_t x342 = UINT8_MAX;
uint16_t x345 = UINT16_MAX;
uint8_t x348 = 0U;
int64_t t79 = -1915122832LL;
uint16_t x353 = 0U;
volatile int64_t x358 = INT64_MIN;
int64_t t81 = 59283097465443LL;
static uint32_t t82 = 1U;
static int16_t x374 = INT16_MIN;
volatile int8_t x387 = 7;
volatile int32_t t88 = 393;
uint32_t x389 = UINT32_MAX;
int32_t x395 = 2;
static int8_t x398 = INT8_MIN;
uint64_t t91 = 3168LLU;
static uint8_t x412 = UINT8_MAX;
uint64_t t94 = 714369204189LLU;
static int8_t x419 = INT8_MIN;
uint32_t x423 = UINT32_MAX;
static int64_t x429 = -1LL;


void f0(void) {
	int16_t x2 = 1721;
	int8_t x3 = -1;
	int32_t x4 = INT32_MIN;

	t0 = (x1&((x2%x3)*x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	uint64_t x5 = UINT64_MAX;
	volatile uint64_t x6 = 5331306LLU;
	static int8_t x7 = INT8_MIN;
	int16_t x8 = -4109;

	t1 = (x5&((x6%x7)*x8));

	if (t1 != 18446744051803215262LLU) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x13 = -1;
	int16_t x15 = -4;
	static int16_t x16 = 19;
	volatile int32_t t2 = -136576440;

	t2 = (x13&((x14%x15)*x16));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	volatile int32_t x18 = INT32_MIN;
	int32_t x19 = INT32_MIN;
	int64_t t3 = -7601781071572LL;

	t3 = (x17&((x18%x19)*x20));

	if (t3 != 0LL) { NG(); } else { ; }
	
}

void f4(void) {
	int64_t x21 = INT64_MIN;
	uint32_t x22 = 7101U;
	int16_t x23 = INT16_MAX;
	int64_t t4 = -7LL;

	t4 = (x21&((x22%x23)*x24));

	if (t4 != 0LL) { NG(); } else { ; }
	
}

void f5(void) {
	volatile uint16_t x25 = UINT16_MAX;
	volatile int64_t t5 = -2952275269425LL;

	t5 = (x25&((x26%x27)*x28));

	if (t5 != 0LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x29 = INT32_MIN;
	uint16_t x30 = 3U;
	int16_t x31 = INT16_MIN;
	int16_t x32 = INT16_MAX;
	static volatile int32_t t6 = -563867;

	t6 = (x29&((x30%x31)*x32));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	int32_t x33 = INT32_MIN;
	int64_t x34 = -1LL;
	static int16_t x35 = INT16_MIN;
	int16_t x36 = -1;

	t7 = (x33&((x34%x35)*x36));

	if (t7 != 0LL) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x37 = INT16_MAX;
	uint32_t x39 = UINT32_MAX;
	uint64_t x40 = UINT64_MAX;
	static uint64_t t8 = 0LLU;

	t8 = (x37&((x38%x39)*x40));

	if (t8 != 0LLU) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int8_t x41 = INT8_MIN;
	int16_t x42 = INT16_MAX;
	uint8_t x43 = 3U;
	int64_t x44 = -1LL;
	volatile int64_t t9 = -58213106LL;

	t9 = (x41&((x42%x43)*x44));

	if (t9 != -128LL) { NG(); } else { ; }
	
}

void f10(void) {
	uint64_t x45 = UINT64_MAX;
	uint64_t x46 = 106287681028LLU;
	int64_t x47 = 255306883LL;

	t10 = (x45&((x46%x47)*x48));

	if (t10 != 2621939975900LLU) { NG(); } else { ; }
	
}

void f11(void) {
	volatile uint8_t x51 = 30U;
	uint64_t x52 = UINT64_MAX;
	uint64_t t11 = 21LLU;

	t11 = (x49&((x50%x51)*x52));

	if (t11 != 0LLU) { NG(); } else { ; }
	
}

void f12(void) {
	int8_t x57 = INT8_MIN;
	uint32_t x59 = 1U;
	uint16_t x60 = UINT16_MAX;
	uint32_t t12 = 10U;

	t12 = (x57&((x58%x59)*x60));

	if (t12 != 0U) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x66 = INT8_MAX;
	int32_t x67 = INT32_MIN;
	int64_t t13 = 74LL;

	t13 = (x65&((x66%x67)*x68));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static int8_t x69 = -1;
	static uint64_t x70 = UINT64_MAX;
	static uint16_t x71 = 192U;
	int16_t x72 = INT16_MIN;

	t14 = (x69&((x70%x71)*x72));

	if (t14 != 18446744073707487232LLU) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x73 = -1;
	int32_t x75 = -1;
	int32_t x76 = INT32_MIN;
	volatile int32_t t15 = -1;

	t15 = (x73&((x74%x75)*x76));

	if (t15 != 0) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int64_t x77 = -391854178636LL;
	int64_t x79 = 27103202194781LL;
	uint16_t x80 = UINT16_MAX;
	int64_t t16 = -32219268420181LL;

	t16 = (x77&((x78%x79)*x80));

	if (t16 != -546514979148LL) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x81 = INT64_MIN;
	volatile int64_t x82 = INT64_MIN;
	static int32_t x84 = INT32_MIN;
	static volatile uint64_t t17 = 246013510036409507LLU;

	t17 = (x81&((x82%x83)*x84));

	if (t17 != 0LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int8_t x85 = INT8_MIN;
	int32_t x87 = 9;
	int64_t x88 = 5517142844829949LL;

	t18 = (x85&((x86%x87)*x88));

	if (t18 != -5517142844829952LL) { NG(); } else { ; }
	
}

void f19(void) {
	uint32_t x89 = UINT32_MAX;
	uint64_t x90 = 176877LLU;
	volatile int64_t x92 = -1LL;
	volatile uint64_t t19 = 6572LLU;

	t19 = (x89&((x90%x91)*x92));

	if (t19 != 4294967284LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint8_t x97 = UINT8_MAX;
	uint16_t x98 = 0U;
	uint32_t x99 = 1139U;
	volatile int16_t x100 = 2012;
	uint32_t t20 = 22U;

	t20 = (x97&((x98%x99)*x100));

	if (t20 != 0U) { NG(); } else { ; }
	
}

void f21(void) {
	int8_t x101 = INT8_MIN;
	int32_t x103 = INT32_MIN;
	static volatile uint32_t x104 = 496U;

	t21 = (x101&((x102%x103)*x104));

	if (t21 != 356608U) { NG(); } else { ; }
	
}

void f22(void) {
	int16_t x105 = 0;
	uint8_t x106 = 97U;
	volatile int32_t t22 = 3354069;

	t22 = (x105&((x106%x107)*x108));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int32_t x109 = -524660541;
	int16_t x110 = -1;
	int8_t x111 = INT8_MAX;
	int16_t x112 = 7137;
	static volatile int32_t t23 = 252912;

	t23 = (x109&((x110%x111)*x112));

	if (t23 != -524664829) { NG(); } else { ; }
	
}

void f24(void) {
	int16_t x113 = INT16_MIN;
	static int64_t x114 = INT64_MIN;
	int32_t x115 = INT32_MIN;
	volatile int64_t t24 = 1259352427709LL;

	t24 = (x113&((x114%x115)*x116));

	if (t24 != 0LL) { NG(); } else { ; }
	
}

void f25(void) {
	volatile uint8_t x117 = 17U;
	int8_t x118 = 45;
	int16_t x119 = INT16_MIN;
	uint64_t t25 = 1778356893LLU;

	t25 = (x117&((x118%x119)*x120));

	if (t25 != 17LLU) { NG(); } else { ; }
	
}

void f26(void) {
	static int64_t x121 = 110731420146657LL;
	uint16_t x122 = UINT16_MAX;
	volatile int32_t x123 = 26;
	volatile uint64_t x124 = 119127781440684397LLU;

	t26 = (x121&((x122%x123)*x124));

	if (t26 != 109951745790305LLU) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x125 = -3;
	volatile int32_t x126 = 37;
	int32_t x127 = INT32_MAX;
	uint64_t x128 = UINT64_MAX;
	uint64_t t27 = 11LLU;

	t27 = (x125&((x126%x127)*x128));

	if (t27 != 18446744073709551577LLU) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x130 = INT64_MAX;
	static uint64_t x131 = 90LLU;
	int32_t x132 = INT32_MIN;

	t28 = (x129&((x130%x131)*x132));

	if (t28 != 0LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int64_t x133 = -477604953781LL;
	int8_t x134 = 1;
	volatile int32_t x135 = INT32_MAX;
	int16_t x136 = 6418;
	int64_t t29 = 253032015839LL;

	t29 = (x133&((x134%x135)*x136));

	if (t29 != 258LL) { NG(); } else { ; }
	
}

void f30(void) {
	int16_t x137 = 17;
	static volatile uint64_t x138 = 5880877LLU;
	uint32_t x140 = 31571231U;
	uint64_t t30 = 74217LLU;

	t30 = (x137&((x138%x139)*x140));

	if (t30 != 17LLU) { NG(); } else { ; }
	
}

void f31(void) {
	static volatile int64_t x142 = INT64_MAX;
	int32_t x143 = INT32_MIN;
	int16_t x144 = INT16_MIN;
	int64_t t31 = -1476701LL;

	t31 = (x141&((x142%x143)*x144));

	if (t31 != -70368744144896LL) { NG(); } else { ; }
	
}

void f32(void) {
	volatile int64_t x145 = -1LL;
	static uint16_t x146 = UINT16_MAX;
	uint64_t x147 = 3844582LLU;
	uint64_t t32 = 5141372784LLU;

	t32 = (x145&((x146%x147)*x148));

	if (t32 != 18446744073709486081LLU) { NG(); } else { ; }
	
}

void f33(void) {
	static int64_t x149 = INT64_MAX;
	int8_t x150 = -22;
	int16_t x151 = -1;
	volatile int64_t x152 = INT64_MIN;
	volatile int64_t t33 = -1385592247941LL;

	t33 = (x149&((x150%x151)*x152));

	if (t33 != 0LL) { NG(); } else { ; }
	
}

void f34(void) {
	int64_t x154 = INT64_MIN;
	static volatile uint8_t x155 = UINT8_MAX;

	t34 = (x153&((x154%x155)*x156));

	if (t34 != 0LL) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x161 = 2U;
	static uint16_t x162 = 2U;
	volatile int16_t x163 = INT16_MIN;
	uint32_t x164 = 163751751U;
	uint32_t t35 = 539833451U;

	t35 = (x161&((x162%x163)*x164));

	if (t35 != 2U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile int32_t x165 = INT32_MAX;
	int8_t x166 = INT8_MAX;
	static volatile int64_t x167 = INT64_MAX;
	volatile int64_t t36 = -65LL;

	t36 = (x165&((x166%x167)*x168));

	if (t36 != 15748LL) { NG(); } else { ; }
	
}

void f37(void) {
	static uint8_t x169 = UINT8_MAX;
	static uint64_t x170 = 1628449677LLU;
	static int16_t x171 = -673;

	t37 = (x169&((x170%x171)*x172));

	if (t37 != 0LLU) { NG(); } else { ; }
	
}

void f38(void) {
	int32_t t38 = 783;

	t38 = (x173&((x174%x175)*x176));

	if (t38 != 0) { NG(); } else { ; }
	
}

void f39(void) {
	volatile int64_t x177 = INT64_MIN;
	uint32_t x179 = UINT32_MAX;
	static uint8_t x180 = UINT8_MAX;

	t39 = (x177&((x178%x179)*x180));

	if (t39 != 0LL) { NG(); } else { ; }
	
}

void f40(void) {
	int32_t x181 = 375156279;
	int64_t x183 = INT64_MAX;
	uint8_t x184 = 0U;
	int64_t t40 = 671669065548759608LL;

	t40 = (x181&((x182%x183)*x184));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int16_t x185 = INT16_MIN;
	int32_t x186 = -258281198;
	uint32_t x187 = UINT32_MAX;
	uint64_t x188 = UINT64_MAX;

	t41 = (x185&((x186%x187)*x188));

	if (t41 != 18446744069672861696LLU) { NG(); } else { ; }
	
}

void f42(void) {
	uint8_t x189 = UINT8_MAX;
	volatile uint32_t x190 = 1107626U;
	int64_t x191 = INT64_MAX;
	int64_t x192 = 439829725971LL;

	t42 = (x189&((x190%x191)*x192));

	if (t42 != 158LL) { NG(); } else { ; }
	
}

void f43(void) {
	volatile int32_t x195 = -38210;
	int8_t x196 = -1;
	static int64_t t43 = -187163925673014LL;

	t43 = (x193&((x194%x195)*x196));

	if (t43 != 23668LL) { NG(); } else { ; }
	
}

void f44(void) {
	uint32_t x197 = UINT32_MAX;
	int16_t x198 = INT16_MIN;
	int64_t x199 = -1LL;
	int16_t x200 = 1;

	t44 = (x197&((x198%x199)*x200));

	if (t44 != 0LL) { NG(); } else { ; }
	
}

void f45(void) {
	uint8_t x201 = 3U;
	int16_t x202 = -1;
	int32_t x203 = 501670;
	uint32_t x204 = 5914163U;
	volatile uint32_t t45 = 245U;

	t45 = (x201&((x202%x203)*x204));

	if (t45 != 1U) { NG(); } else { ; }
	
}

void f46(void) {
	int16_t x205 = -1;
	int32_t x206 = INT32_MIN;
	static int8_t x207 = 4;
	static volatile uint64_t t46 = 5LLU;

	t46 = (x205&((x206%x207)*x208));

	if (t46 != 0LLU) { NG(); } else { ; }
	
}

void f47(void) {
	volatile int16_t x209 = INT16_MIN;
	volatile uint64_t x211 = UINT64_MAX;
	int64_t x212 = -986160720LL;
	uint64_t t47 = 3LLU;

	t47 = (x209&((x210%x211)*x212));

	if (t47 != 126228561920LLU) { NG(); } else { ; }
	
}

void f48(void) {
	volatile int16_t x213 = 14;
	volatile int8_t x214 = -1;
	int16_t x215 = -2653;
	int32_t x216 = -1;
	volatile int32_t t48 = 283109;

	t48 = (x213&((x214%x215)*x216));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	uint64_t x217 = 1LLU;
	uint8_t x218 = UINT8_MAX;
	static int8_t x219 = -36;
	int16_t x220 = INT16_MAX;
	volatile uint64_t t49 = 572387701056082152LLU;

	t49 = (x217&((x218%x219)*x220));

	if (t49 != 1LLU) { NG(); } else { ; }
	
}

void f50(void) {
	volatile int32_t x229 = 29;
	int8_t x231 = -1;
	volatile int32_t t50 = 279;

	t50 = (x229&((x230%x231)*x232));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	int32_t x233 = INT32_MIN;
	static int8_t x234 = 0;
	static uint64_t x235 = 722619LLU;
	int16_t x236 = INT16_MIN;
	volatile uint64_t t51 = 400173844554572402LLU;

	t51 = (x233&((x234%x235)*x236));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	int32_t x237 = INT32_MIN;
	int8_t x239 = INT8_MIN;
	int8_t x240 = 0;
	int32_t t52 = 254519081;

	t52 = (x237&((x238%x239)*x240));

	if (t52 != 0) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x241 = UINT8_MAX;
	static int16_t x242 = -263;
	int64_t x243 = INT64_MIN;
	int16_t x244 = -1;
	volatile int64_t t53 = 47LL;

	t53 = (x241&((x242%x243)*x244));

	if (t53 != 7LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int32_t x247 = INT32_MIN;
	static volatile uint64_t x248 = UINT64_MAX;
	uint64_t t54 = 12264LLU;

	t54 = (x245&((x246%x247)*x248));

	if (t54 != 18446744073709533000LLU) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int16_t x250 = 90;
	volatile uint32_t x252 = UINT32_MAX;
	int64_t t55 = 6934380093306LL;

	t55 = (x249&((x250%x251)*x252));

	if (t55 != 574466LL) { NG(); } else { ; }
	
}

void f56(void) {
	static int64_t x253 = -2611909257566404LL;
	int16_t x254 = 0;
	uint32_t x255 = 26U;
	int64_t x256 = -1LL;
	int64_t t56 = 323254751882659353LL;

	t56 = (x253&((x254%x255)*x256));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x257 = UINT64_MAX;
	int32_t x260 = 14;
	uint64_t t57 = 738814133LLU;

	t57 = (x257&((x258%x259)*x260));

	if (t57 != 90594LLU) { NG(); } else { ; }
	
}

void f58(void) {
	int32_t x261 = INT32_MAX;
	int8_t x262 = -1;
	int8_t x263 = INT8_MIN;
	volatile int32_t t58 = -2433658;

	t58 = (x261&((x262%x263)*x264));

	if (t58 != 2147483620) { NG(); } else { ; }
	
}

void f59(void) {
	volatile uint32_t x269 = 10359670U;
	int16_t x271 = 1689;
	uint16_t x272 = UINT16_MAX;
	static int64_t t59 = 11654236865104634LL;

	t59 = (x269&((x270%x271)*x272));

	if (t59 != 10354688LL) { NG(); } else { ; }
	
}

void f60(void) {
	volatile int16_t x273 = 5;
	uint32_t x274 = UINT32_MAX;
	static int16_t x275 = INT16_MIN;
	static volatile uint16_t x276 = UINT16_MAX;
	volatile uint32_t t60 = 62732352U;

	t60 = (x273&((x274%x275)*x276));

	if (t60 != 1U) { NG(); } else { ; }
	
}

void f61(void) {
	static volatile int16_t x278 = INT16_MAX;
	static uint64_t x279 = 61832920LLU;
	volatile uint64_t t61 = 190LLU;

	t61 = (x277&((x278%x279)*x280));

	if (t61 != 267LLU) { NG(); } else { ; }
	
}

void f62(void) {
	int16_t x281 = -1;
	volatile int16_t x282 = INT16_MIN;
	uint8_t x283 = UINT8_MAX;
	volatile int32_t t62 = 7570092;

	t62 = (x281&((x282%x283)*x284));

	if (t62 != -7808) { NG(); } else { ; }
	
}

void f63(void) {
	static uint64_t x285 = 3813406LLU;
	int32_t x286 = INT32_MAX;
	uint32_t x287 = 6435U;
	uint64_t t63 = 0LLU;

	t63 = (x285&((x286%x287)*x288));

	if (t63 != 3813382LLU) { NG(); } else { ; }
	
}

void f64(void) {
	int8_t x289 = INT8_MIN;
	int8_t x290 = -47;
	static volatile int32_t x291 = INT32_MAX;
	int16_t x292 = INT16_MIN;
	int32_t t64 = 52254;

	t64 = (x289&((x290%x291)*x292));

	if (t64 != 1540096) { NG(); } else { ; }
	
}

void f65(void) {
	static int16_t x293 = INT16_MAX;
	int16_t x295 = -6518;
	int8_t x296 = -1;
	int64_t t65 = -21229483896LL;

	t65 = (x293&((x294%x295)*x296));

	if (t65 != 26625LL) { NG(); } else { ; }
	
}

void f66(void) {
	static volatile uint8_t x297 = 1U;
	int8_t x298 = INT8_MIN;
	int32_t x300 = -504;
	static int64_t t66 = -479299385LL;

	t66 = (x297&((x298%x299)*x300));

	if (t66 != 0LL) { NG(); } else { ; }
	
}

void f67(void) {
	static int64_t x301 = -1LL;
	int64_t x303 = 3396218197048345139LL;
	static int16_t x304 = INT16_MIN;
	int64_t t67 = -1921583176LL;

	t67 = (x301&((x302%x303)*x304));

	if (t67 != 32768LL) { NG(); } else { ; }
	
}

void f68(void) {
	int64_t x306 = INT64_MIN;
	int16_t x307 = INT16_MAX;
	volatile uint8_t x308 = 27U;
	int64_t t68 = 399341292845354312LL;

	t68 = (x305&((x306%x307)*x308));

	if (t68 != -216LL) { NG(); } else { ; }
	
}

void f69(void) {
	int64_t x309 = -587904718899529LL;
	uint64_t x310 = UINT64_MAX;
	int8_t x311 = 3;
	int32_t x312 = 89;
	volatile uint64_t t69 = 164356717685557LLU;

	t69 = (x309&((x310%x311)*x312));

	if (t69 != 0LLU) { NG(); } else { ; }
	
}

void f70(void) {
	static int32_t x313 = INT32_MIN;
	int32_t x314 = 68;
	static volatile int64_t x315 = INT64_MIN;

	t70 = (x313&((x314%x315)*x316));

	if (t70 != -2147483648LL) { NG(); } else { ; }
	
}

void f71(void) {
	int8_t x317 = -1;
	int64_t x318 = -1LL;
	int64_t x319 = -1LL;
	volatile int64_t t71 = -16455LL;

	t71 = (x317&((x318%x319)*x320));

	if (t71 != 0LL) { NG(); } else { ; }
	
}

void f72(void) {
	uint16_t x321 = 1705U;
	int32_t x323 = INT32_MIN;
	uint32_t x324 = UINT32_MAX;
	static volatile int64_t t72 = -2138878987261315LL;

	t72 = (x321&((x322%x323)*x324));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	uint8_t x325 = 0U;
	uint16_t x326 = 60U;
	int64_t x327 = -6LL;
	int64_t t73 = 1045619313LL;

	t73 = (x325&((x326%x327)*x328));

	if (t73 != 0LL) { NG(); } else { ; }
	
}

void f74(void) {
	int8_t x329 = -13;
	int64_t x330 = INT64_MIN;
	volatile int64_t x331 = -56699381907LL;
	volatile uint64_t t74 = 2LLU;

	t74 = (x329&((x330%x331)*x332));

	if (t74 != 7154154882LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int16_t x333 = INT16_MIN;
	static volatile int32_t x334 = INT32_MIN;
	int16_t x336 = 4620;
	volatile int32_t t75 = -2;

	t75 = (x333&((x334%x335)*x336));

	if (t75 != 0) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x337 = INT64_MAX;
	int16_t x338 = INT16_MAX;
	volatile uint8_t x339 = UINT8_MAX;
	static int16_t x340 = INT16_MIN;
	volatile int64_t t76 = -1983813577496196LL;

	t76 = (x337&((x338%x339)*x340));

	if (t76 != 9223372036850614272LL) { NG(); } else { ; }
	
}

void f77(void) {
	uint32_t x341 = 209U;
	int64_t x343 = -1LL;
	volatile int64_t x344 = -62300724237383881LL;
	int64_t t77 = -1574424714311LL;

	t77 = (x341&((x342%x343)*x344));

	if (t77 != 0LL) { NG(); } else { ; }
	
}

void f78(void) {
	uint32_t x346 = 12U;
	static int64_t x347 = -13270778226416210LL;
	static volatile int64_t t78 = 28135452662LL;

	t78 = (x345&((x346%x347)*x348));

	if (t78 != 0LL) { NG(); } else { ; }
	
}

void f79(void) {
	static int16_t x349 = INT16_MIN;
	static int16_t x350 = -1;
	int16_t x351 = INT16_MIN;
	static int64_t x352 = -563735LL;

	t79 = (x349&((x350%x351)*x352));

	if (t79 != 557056LL) { NG(); } else { ; }
	
}

void f80(void) {
	uint32_t x354 = 15U;
	int8_t x355 = -46;
	uint32_t x356 = 1U;
	volatile uint32_t t80 = 478U;

	t80 = (x353&((x354%x355)*x356));

	if (t80 != 0U) { NG(); } else { ; }
	
}

void f81(void) {
	volatile int8_t x357 = 40;
	int8_t x359 = INT8_MIN;
	uint16_t x360 = UINT16_MAX;

	t81 = (x357&((x358%x359)*x360));

	if (t81 != 0LL) { NG(); } else { ; }
	
}

void f82(void) {
	int8_t x361 = INT8_MAX;
	int8_t x362 = INT8_MIN;
	int16_t x363 = -60;
	uint32_t x364 = 0U;

	t82 = (x361&((x362%x363)*x364));

	if (t82 != 0U) { NG(); } else { ; }
	
}

void f83(void) {
	static int16_t x365 = INT16_MAX;
	static uint8_t x366 = UINT8_MAX;
	static volatile uint8_t x367 = UINT8_MAX;
	uint32_t x368 = 466U;
	uint32_t t83 = 8U;

	t83 = (x365&((x366%x367)*x368));

	if (t83 != 0U) { NG(); } else { ; }
	
}

void f84(void) {
	static int32_t x369 = INT32_MIN;
	static int8_t x370 = 34;
	volatile uint16_t x371 = 2526U;
	uint64_t x372 = UINT64_MAX;
	volatile uint64_t t84 = 7147888692LLU;

	t84 = (x369&((x370%x371)*x372));

	if (t84 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f85(void) {
	uint32_t x373 = 1096028U;
	volatile int64_t x375 = -55LL;
	int64_t x376 = -152280807640LL;
	int64_t t85 = 3458310LL;

	t85 = (x373&((x374%x375)*x376));

	if (t85 != 2120LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x377 = -20274;
	int8_t x378 = 1;
	volatile uint32_t x379 = 3624U;
	int32_t x380 = 676363;
	static uint32_t t86 = 13610507U;

	t86 = (x377&((x378%x379)*x380));

	if (t86 != 659466U) { NG(); } else { ; }
	
}

void f87(void) {
	int8_t x381 = INT8_MAX;
	int16_t x382 = INT16_MIN;
	uint32_t x383 = UINT32_MAX;
	int64_t x384 = -202129199LL;
	volatile int64_t t87 = -3045743LL;

	t87 = (x381&((x382%x383)*x384));

	if (t87 != 0LL) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x385 = INT16_MIN;
	static volatile int8_t x386 = -1;
	uint8_t x388 = 22U;

	t88 = (x385&((x386%x387)*x388));

	if (t88 != -32768) { NG(); } else { ; }
	
}

void f89(void) {
	static int32_t x390 = -1;
	int64_t x391 = 19836930984LL;
	uint64_t x392 = 2LLU;
	volatile uint64_t t89 = 64578313685LLU;

	t89 = (x389&((x390%x391)*x392));

	if (t89 != 4294967294LLU) { NG(); } else { ; }
	
}

void f90(void) {
	uint8_t x393 = UINT8_MAX;
	int32_t x394 = INT32_MIN;
	int8_t x396 = -1;
	static volatile int32_t t90 = -8;

	t90 = (x393&((x394%x395)*x396));

	if (t90 != 0) { NG(); } else { ; }
	
}

void f91(void) {
	volatile uint64_t x397 = 16320845019390LLU;
	volatile int8_t x399 = -1;
	uint64_t x400 = 1236342117602791970LLU;

	t91 = (x397&((x398%x399)*x400));

	if (t91 != 0LLU) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x405 = INT32_MIN;
	int64_t x406 = -1214394342639LL;
	volatile int16_t x407 = INT16_MAX;
	uint32_t x408 = UINT32_MAX;
	int64_t t92 = -1064771045813920795LL;

	t92 = (x405&((x406%x407)*x408));

	if (t92 != -35665408425984LL) { NG(); } else { ; }
	
}

void f93(void) {
	uint32_t x409 = 50U;
	volatile int32_t x410 = INT32_MAX;
	static int8_t x411 = INT8_MIN;
	volatile uint32_t t93 = 885701U;

	t93 = (x409&((x410%x411)*x412));

	if (t93 != 0U) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x413 = -836279;
	static uint16_t x414 = UINT16_MAX;
	volatile int64_t x415 = INT64_MAX;
	volatile uint64_t x416 = 62346001621168760LLU;

	t94 = (x413&((x414%x415)*x416));

	if (t94 != 9114775953482976520LLU) { NG(); } else { ; }
	
}

void f95(void) {
	static int64_t x417 = INT64_MAX;
	uint16_t x418 = UINT16_MAX;
	static volatile uint8_t x420 = 0U;
	int64_t t95 = -473112221LL;

	t95 = (x417&((x418%x419)*x420));

	if (t95 != 0LL) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x421 = 22U;
	int16_t x422 = INT16_MAX;
	static volatile int16_t x424 = INT16_MIN;
	uint32_t t96 = 23617446U;

	t96 = (x421&((x422%x423)*x424));

	if (t96 != 0U) { NG(); } else { ; }
	
}

void f97(void) {
	uint16_t x430 = 275U;
	static int16_t x431 = 1;
	uint16_t x432 = 227U;
	volatile int64_t t97 = -248013928438657967LL;

	t97 = (x429&((x430%x431)*x432));

	if (t97 != 0LL) { NG(); } else { ; }
	
}

void f98(void) {
	int8_t x433 = INT8_MAX;
	int64_t x434 = 140506182256261451LL;
	int8_t x435 = INT8_MAX;
	static volatile uint32_t x436 = 7749348U;
	volatile int64_t t98 = -2400545825679821225LL;

	t98 = (x433&((x434%x435)*x436));

	if (t98 != 84LL) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x437 = INT32_MIN;
	int8_t x438 = -3;
	static int16_t x439 = 1;
	static int16_t x440 = INT16_MIN;
	static volatile int32_t t99 = -170531382;

	t99 = (x437&((x438%x439)*x440));

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

