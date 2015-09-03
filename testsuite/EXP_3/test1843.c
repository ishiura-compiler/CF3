#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

static int32_t x1 = INT32_MAX;
volatile int64_t x3 = 6206213345LL;
int8_t x13 = INT8_MAX;
int32_t t3 = -89033;
uint64_t x19 = UINT64_MAX;
static int32_t t4 = -3;
int32_t x34 = INT32_MAX;
static int16_t x39 = INT16_MIN;
int32_t x40 = 546960;
int16_t x41 = 55;
volatile int32_t x44 = INT32_MIN;
static uint32_t x48 = 213952U;
int32_t x52 = INT32_MIN;
volatile int32_t x55 = INT32_MIN;
int64_t x56 = INT64_MIN;
volatile int32_t t13 = 7614058;
uint32_t x58 = UINT32_MAX;
static int32_t x64 = 24128;
int64_t x70 = INT64_MIN;
int32_t t18 = -818041;
static uint64_t x81 = 130178090617LLU;
int32_t t20 = 435392;
static int32_t x90 = -5161;
uint16_t x93 = UINT16_MAX;
volatile int32_t t23 = 36;
int8_t x104 = INT8_MIN;
int16_t x112 = -928;
int32_t t28 = 1;
volatile int64_t x119 = INT64_MIN;
uint8_t x125 = 3U;
int32_t x137 = 85306985;
volatile int64_t x138 = INT64_MIN;
int16_t x142 = INT16_MIN;
int16_t x144 = INT16_MAX;
uint8_t x146 = 19U;
static volatile uint32_t x153 = 1827306539U;
volatile int64_t x155 = -166804LL;
uint64_t x156 = UINT64_MAX;
int64_t x164 = -20LL;
int64_t x172 = -1LL;
uint32_t x192 = 277U;
volatile uint64_t x194 = 27685219265831LLU;
int32_t x196 = INT32_MIN;
uint8_t x197 = 2U;
volatile int32_t t49 = -31;
static int64_t x202 = -1LL;
volatile uint16_t x203 = UINT16_MAX;
int8_t x205 = INT8_MIN;
uint64_t x207 = UINT64_MAX;
int32_t t51 = 6504;
uint8_t x209 = 57U;
uint8_t x211 = 74U;
static volatile int32_t t52 = 9059632;
int32_t t53 = 2;
int8_t x223 = -1;
static uint32_t x228 = UINT32_MAX;
volatile int32_t t56 = -37886;
int32_t t57 = -2829;
volatile int32_t t59 = -180374313;
static uint64_t x245 = 402141316689605534LLU;
static uint8_t x252 = UINT8_MAX;
int32_t t62 = -809;
uint16_t x258 = 98U;
volatile int32_t t64 = -6;
static int32_t t65 = 7;
volatile int16_t x265 = -1;
uint64_t x266 = 4LLU;
int8_t x267 = -10;
static int32_t x268 = INT32_MIN;
static volatile uint32_t x273 = UINT32_MAX;
int16_t x274 = INT16_MIN;
int32_t x275 = INT32_MIN;
int64_t x281 = -1LL;
uint64_t x288 = UINT64_MAX;
uint64_t x296 = 226838613660348342LLU;
volatile int8_t x298 = 7;
static int32_t x301 = 2;
uint16_t x303 = 6U;
static int32_t x311 = INT32_MAX;
int16_t x315 = INT16_MIN;
int64_t x319 = -1LL;
int32_t t79 = -7;
int64_t x321 = 184979544429LL;
volatile int64_t x322 = -1LL;
static volatile int32_t t81 = 366096057;
static int64_t x332 = -59071LL;
volatile int8_t x339 = 1;
static uint64_t x341 = UINT64_MAX;
static uint8_t x347 = 15U;
static volatile int8_t x348 = -8;
uint16_t x353 = 75U;
static int32_t x360 = INT32_MIN;
static int16_t x366 = INT16_MAX;
uint16_t x370 = 13395U;
volatile int8_t x374 = INT8_MIN;
volatile int32_t t93 = -2548853;
int16_t x383 = 188;
int16_t x384 = -1;
int32_t x387 = INT32_MAX;
volatile int32_t t96 = 2622429;
volatile int8_t x392 = -1;
uint64_t x399 = UINT64_MAX;


void f0(void) {
	uint32_t x2 = UINT32_MAX;
	int32_t x4 = 3;
	int32_t t0 = -52332460;

	t0 = ((x1|x2)<=(x3&x4));

	if (t0 != 0) { NG(); } else { ; }
	
}

void f1(void) {
	int32_t x5 = INT32_MIN;
	uint64_t x6 = 81764784LLU;
	int32_t x7 = 1066067312;
	uint16_t x8 = 17874U;
	static volatile int32_t t1 = -7;

	t1 = ((x5|x6)<=(x7&x8));

	if (t1 != 0) { NG(); } else { ; }
	
}

void f2(void) {
	static volatile int8_t x9 = INT8_MAX;
	int16_t x10 = INT16_MAX;
	static uint8_t x11 = UINT8_MAX;
	int8_t x12 = -1;
	volatile int32_t t2 = 111;

	t2 = ((x9|x10)<=(x11&x12));

	if (t2 != 0) { NG(); } else { ; }
	
}

void f3(void) {
	uint32_t x14 = 1U;
	uint32_t x15 = UINT32_MAX;
	static int32_t x16 = -143160641;

	t3 = ((x13|x14)<=(x15&x16));

	if (t3 != 1) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x17 = INT32_MAX;
	int32_t x18 = -1;
	int32_t x20 = INT32_MIN;

	t4 = ((x17|x18)<=(x19&x20));

	if (t4 != 0) { NG(); } else { ; }
	
}

void f5(void) {
	int16_t x21 = 1;
	int16_t x22 = INT16_MIN;
	volatile uint8_t x23 = 1U;
	volatile uint32_t x24 = 9844U;
	int32_t t5 = 63;

	t5 = ((x21|x22)<=(x23&x24));

	if (t5 != 0) { NG(); } else { ; }
	
}

void f6(void) {
	int16_t x25 = INT16_MIN;
	int8_t x26 = INT8_MIN;
	int32_t x27 = -3;
	int16_t x28 = -34;
	static int32_t t6 = 13736;

	t6 = ((x25|x26)<=(x27&x28));

	if (t6 != 1) { NG(); } else { ; }
	
}

void f7(void) {
	static int64_t x29 = 42933438LL;
	volatile uint64_t x30 = 46969654LLU;
	uint32_t x31 = 7679152U;
	int64_t x32 = 26LL;
	int32_t t7 = -510978;

	t7 = ((x29|x30)<=(x31&x32));

	if (t7 != 0) { NG(); } else { ; }
	
}

void f8(void) {
	static int64_t x33 = -34405807LL;
	int16_t x35 = INT16_MAX;
	int64_t x36 = -1LL;
	volatile int32_t t8 = 10;

	t8 = ((x33|x34)<=(x35&x36));

	if (t8 != 1) { NG(); } else { ; }
	
}

void f9(void) {
	volatile int64_t x37 = INT64_MIN;
	uint64_t x38 = 1LLU;
	int32_t t9 = 3;

	t9 = ((x37|x38)<=(x39&x40));

	if (t9 != 0) { NG(); } else { ; }
	
}

void f10(void) {
	static volatile int64_t x42 = 246392949295232672LL;
	static uint8_t x43 = 53U;
	volatile int32_t t10 = -1598708;

	t10 = ((x41|x42)<=(x43&x44));

	if (t10 != 0) { NG(); } else { ; }
	
}

void f11(void) {
	volatile int8_t x45 = 7;
	uint64_t x46 = UINT64_MAX;
	uint64_t x47 = UINT64_MAX;
	volatile int32_t t11 = 672;

	t11 = ((x45|x46)<=(x47&x48));

	if (t11 != 0) { NG(); } else { ; }
	
}

void f12(void) {
	volatile uint8_t x49 = 0U;
	uint64_t x50 = UINT64_MAX;
	int32_t x51 = INT32_MIN;
	static int32_t t12 = -2;

	t12 = ((x49|x50)<=(x51&x52));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	int16_t x53 = -85;
	volatile int32_t x54 = INT32_MIN;

	t13 = ((x53|x54)<=(x55&x56));

	if (t13 != 0) { NG(); } else { ; }
	
}

void f14(void) {
	int8_t x57 = -1;
	int8_t x59 = INT8_MAX;
	uint8_t x60 = UINT8_MAX;
	int32_t t14 = 1;

	t14 = ((x57|x58)<=(x59&x60));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	volatile uint8_t x61 = 25U;
	int8_t x62 = -1;
	volatile int32_t x63 = INT32_MAX;
	int32_t t15 = -2;

	t15 = ((x61|x62)<=(x63&x64));

	if (t15 != 1) { NG(); } else { ; }
	
}

void f16(void) {
	int16_t x65 = 397;
	int32_t x66 = 6945725;
	uint8_t x67 = 7U;
	volatile uint16_t x68 = 23U;
	int32_t t16 = 2550;

	t16 = ((x65|x66)<=(x67&x68));

	if (t16 != 0) { NG(); } else { ; }
	
}

void f17(void) {
	int8_t x69 = -1;
	int16_t x71 = -1;
	uint8_t x72 = 2U;
	volatile int32_t t17 = 395;

	t17 = ((x69|x70)<=(x71&x72));

	if (t17 != 1) { NG(); } else { ; }
	
}

void f18(void) {
	uint16_t x73 = 5517U;
	int8_t x74 = INT8_MIN;
	int16_t x75 = 0;
	int64_t x76 = INT64_MIN;

	t18 = ((x73|x74)<=(x75&x76));

	if (t18 != 1) { NG(); } else { ; }
	
}

void f19(void) {
	uint16_t x77 = 12U;
	int16_t x78 = -3;
	int8_t x79 = INT8_MIN;
	static volatile uint16_t x80 = UINT16_MAX;
	volatile int32_t t19 = -59334;

	t19 = ((x77|x78)<=(x79&x80));

	if (t19 != 1) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x82 = -106894LL;
	int64_t x83 = INT64_MIN;
	static uint32_t x84 = UINT32_MAX;

	t20 = ((x81|x82)<=(x83&x84));

	if (t20 != 0) { NG(); } else { ; }
	
}

void f21(void) {
	int64_t x85 = INT64_MIN;
	int8_t x86 = -1;
	uint16_t x87 = 2U;
	static int64_t x88 = 5387468LL;
	volatile int32_t t21 = 11593198;

	t21 = ((x85|x86)<=(x87&x88));

	if (t21 != 1) { NG(); } else { ; }
	
}

void f22(void) {
	uint16_t x89 = 38U;
	uint64_t x91 = 139850370LLU;
	uint32_t x92 = 24246554U;
	int32_t t22 = -727822;

	t22 = ((x89|x90)<=(x91&x92));

	if (t22 != 0) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x94 = -455;
	volatile int8_t x95 = INT8_MAX;
	volatile uint8_t x96 = UINT8_MAX;

	t23 = ((x93|x94)<=(x95&x96));

	if (t23 != 1) { NG(); } else { ; }
	
}

void f24(void) {
	uint32_t x97 = 37507717U;
	int8_t x98 = INT8_MAX;
	int32_t x99 = 735662629;
	static int32_t x100 = INT32_MIN;
	int32_t t24 = -158;

	t24 = ((x97|x98)<=(x99&x100));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	int16_t x101 = INT16_MIN;
	volatile int32_t x102 = INT32_MAX;
	static uint64_t x103 = 0LLU;
	volatile int32_t t25 = -31647;

	t25 = ((x101|x102)<=(x103&x104));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	static volatile uint32_t x105 = 55U;
	static volatile int8_t x106 = INT8_MAX;
	static int16_t x107 = -1;
	static volatile int16_t x108 = -23;
	int32_t t26 = -3;

	t26 = ((x105|x106)<=(x107&x108));

	if (t26 != 1) { NG(); } else { ; }
	
}

void f27(void) {
	static int16_t x109 = INT16_MIN;
	volatile int8_t x110 = -1;
	uint64_t x111 = 4226LLU;
	int32_t t27 = 78;

	t27 = ((x109|x110)<=(x111&x112));

	if (t27 != 0) { NG(); } else { ; }
	
}

void f28(void) {
	int64_t x113 = INT64_MIN;
	static uint16_t x114 = UINT16_MAX;
	uint8_t x115 = 3U;
	uint16_t x116 = UINT16_MAX;

	t28 = ((x113|x114)<=(x115&x116));

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x117 = INT16_MIN;
	int16_t x118 = 798;
	int64_t x120 = 40837504075LL;
	int32_t t29 = 93481;

	t29 = ((x117|x118)<=(x119&x120));

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	volatile int16_t x121 = -11879;
	uint32_t x122 = UINT32_MAX;
	volatile uint32_t x123 = 712U;
	int16_t x124 = -1;
	volatile int32_t t30 = -1;

	t30 = ((x121|x122)<=(x123&x124));

	if (t30 != 0) { NG(); } else { ; }
	
}

void f31(void) {
	volatile int8_t x126 = -11;
	uint16_t x127 = 2647U;
	static int64_t x128 = INT64_MAX;
	int32_t t31 = -959;

	t31 = ((x125|x126)<=(x127&x128));

	if (t31 != 1) { NG(); } else { ; }
	
}

void f32(void) {
	int32_t x129 = INT32_MIN;
	static uint8_t x130 = 4U;
	int8_t x131 = INT8_MIN;
	int16_t x132 = INT16_MAX;
	int32_t t32 = 17940;

	t32 = ((x129|x130)<=(x131&x132));

	if (t32 != 1) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x133 = 1884618525167712LL;
	static volatile int8_t x134 = INT8_MIN;
	volatile int64_t x135 = 1997515003896077LL;
	int64_t x136 = -1LL;
	volatile int32_t t33 = 26140;

	t33 = ((x133|x134)<=(x135&x136));

	if (t33 != 1) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x139 = 43U;
	uint8_t x140 = 4U;
	int32_t t34 = -844531;

	t34 = ((x137|x138)<=(x139&x140));

	if (t34 != 1) { NG(); } else { ; }
	
}

void f35(void) {
	uint16_t x141 = 13U;
	int64_t x143 = INT64_MIN;
	volatile int32_t t35 = -32777834;

	t35 = ((x141|x142)<=(x143&x144));

	if (t35 != 1) { NG(); } else { ; }
	
}

void f36(void) {
	uint64_t x145 = 234629452040LLU;
	uint8_t x147 = UINT8_MAX;
	volatile uint8_t x148 = 6U;
	volatile int32_t t36 = -677038276;

	t36 = ((x145|x146)<=(x147&x148));

	if (t36 != 0) { NG(); } else { ; }
	
}

void f37(void) {
	uint16_t x149 = UINT16_MAX;
	uint64_t x150 = 2308808376947LLU;
	volatile int32_t x151 = INT32_MIN;
	volatile int8_t x152 = 2;
	int32_t t37 = -1144;

	t37 = ((x149|x150)<=(x151&x152));

	if (t37 != 0) { NG(); } else { ; }
	
}

void f38(void) {
	int16_t x154 = 9878;
	int32_t t38 = 34;

	t38 = ((x153|x154)<=(x155&x156));

	if (t38 != 1) { NG(); } else { ; }
	
}

void f39(void) {
	int32_t x157 = INT32_MIN;
	volatile int64_t x158 = 2315230556LL;
	static int32_t x159 = INT32_MAX;
	uint8_t x160 = 0U;
	volatile int32_t t39 = 2518059;

	t39 = ((x157|x158)<=(x159&x160));

	if (t39 != 1) { NG(); } else { ; }
	
}

void f40(void) {
	int64_t x161 = INT64_MIN;
	uint64_t x162 = UINT64_MAX;
	static int32_t x163 = INT32_MIN;
	volatile int32_t t40 = 16514401;

	t40 = ((x161|x162)<=(x163&x164));

	if (t40 != 0) { NG(); } else { ; }
	
}

void f41(void) {
	volatile int64_t x165 = INT64_MAX;
	static int32_t x166 = INT32_MAX;
	static int8_t x167 = 37;
	volatile int16_t x168 = 1507;
	int32_t t41 = -7;

	t41 = ((x165|x166)<=(x167&x168));

	if (t41 != 0) { NG(); } else { ; }
	
}

void f42(void) {
	uint64_t x169 = 461382923713005768LLU;
	static uint64_t x170 = 215240312392119849LLU;
	int16_t x171 = 6;
	int32_t t42 = -6182;

	t42 = ((x169|x170)<=(x171&x172));

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int32_t x173 = -1;
	volatile int64_t x174 = -1913032617706530422LL;
	uint8_t x175 = UINT8_MAX;
	static uint8_t x176 = 11U;
	static volatile int32_t t43 = 7;

	t43 = ((x173|x174)<=(x175&x176));

	if (t43 != 1) { NG(); } else { ; }
	
}

void f44(void) {
	int32_t x177 = INT32_MIN;
	uint64_t x178 = 29579LLU;
	volatile int64_t x179 = INT64_MAX;
	static int64_t x180 = -1LL;
	volatile int32_t t44 = 365;

	t44 = ((x177|x178)<=(x179&x180));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x181 = -32;
	int16_t x182 = INT16_MIN;
	int8_t x183 = INT8_MIN;
	int32_t x184 = -1;
	int32_t t45 = 6;

	t45 = ((x181|x182)<=(x183&x184));

	if (t45 != 0) { NG(); } else { ; }
	
}

void f46(void) {
	static volatile int64_t x185 = INT64_MIN;
	volatile int32_t x186 = -62344400;
	int16_t x187 = INT16_MIN;
	uint32_t x188 = UINT32_MAX;
	int32_t t46 = -1;

	t46 = ((x185|x186)<=(x187&x188));

	if (t46 != 1) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x189 = -1;
	volatile uint64_t x190 = 618LLU;
	int8_t x191 = -1;
	volatile int32_t t47 = -153579;

	t47 = ((x189|x190)<=(x191&x192));

	if (t47 != 0) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x193 = 2U;
	uint64_t x195 = 228938152LLU;
	int32_t t48 = 1;

	t48 = ((x193|x194)<=(x195&x196));

	if (t48 != 0) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x198 = UINT32_MAX;
	uint64_t x199 = 537327676961405LLU;
	uint64_t x200 = 9558903865LLU;

	t49 = ((x197|x198)<=(x199&x200));

	if (t49 != 1) { NG(); } else { ; }
	
}

void f50(void) {
	int16_t x201 = INT16_MIN;
	volatile int8_t x204 = INT8_MAX;
	static volatile int32_t t50 = 133771307;

	t50 = ((x201|x202)<=(x203&x204));

	if (t50 != 1) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x206 = 607380U;
	int64_t x208 = -1LL;

	t51 = ((x205|x206)<=(x207&x208));

	if (t51 != 1) { NG(); } else { ; }
	
}

void f52(void) {
	int64_t x210 = -1LL;
	int16_t x212 = 1041;

	t52 = ((x209|x210)<=(x211&x212));

	if (t52 != 1) { NG(); } else { ; }
	
}

void f53(void) {
	volatile uint8_t x213 = 1U;
	int8_t x214 = 0;
	int32_t x215 = INT32_MIN;
	uint32_t x216 = 1863702249U;

	t53 = ((x213|x214)<=(x215&x216));

	if (t53 != 0) { NG(); } else { ; }
	
}

void f54(void) {
	int32_t x217 = 9120050;
	int32_t x218 = INT32_MIN;
	uint8_t x219 = 5U;
	volatile int64_t x220 = 1564718940664704LL;
	static volatile int32_t t54 = -5;

	t54 = ((x217|x218)<=(x219&x220));

	if (t54 != 1) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int64_t x221 = 695304059165556406LL;
	int64_t x222 = INT64_MAX;
	volatile int32_t x224 = INT32_MIN;
	int32_t t55 = -7;

	t55 = ((x221|x222)<=(x223&x224));

	if (t55 != 0) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x225 = 2;
	uint64_t x226 = 2246189282787476057LLU;
	int32_t x227 = -1;

	t56 = ((x225|x226)<=(x227&x228));

	if (t56 != 0) { NG(); } else { ; }
	
}

void f57(void) {
	int8_t x229 = INT8_MAX;
	static uint32_t x230 = 652U;
	int64_t x231 = INT64_MAX;
	int32_t x232 = INT32_MAX;

	t57 = ((x229|x230)<=(x231&x232));

	if (t57 != 1) { NG(); } else { ; }
	
}

void f58(void) {
	int64_t x233 = INT64_MIN;
	uint8_t x234 = UINT8_MAX;
	int16_t x235 = -905;
	int16_t x236 = -1;
	int32_t t58 = -1;

	t58 = ((x233|x234)<=(x235&x236));

	if (t58 != 1) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int32_t x237 = INT32_MIN;
	volatile uint64_t x238 = 724542961306LLU;
	static uint64_t x239 = UINT64_MAX;
	int8_t x240 = -1;

	t59 = ((x237|x238)<=(x239&x240));

	if (t59 != 1) { NG(); } else { ; }
	
}

void f60(void) {
	static uint64_t x241 = 610LLU;
	uint64_t x242 = 118609573221024LLU;
	uint16_t x243 = UINT16_MAX;
	int8_t x244 = INT8_MIN;
	int32_t t60 = -1353817;

	t60 = ((x241|x242)<=(x243&x244));

	if (t60 != 0) { NG(); } else { ; }
	
}

void f61(void) {
	static int32_t x246 = 4061584;
	int32_t x247 = INT32_MIN;
	uint32_t x248 = 1465U;
	int32_t t61 = -205495500;

	t61 = ((x245|x246)<=(x247&x248));

	if (t61 != 0) { NG(); } else { ; }
	
}

void f62(void) {
	int64_t x249 = -1LL;
	int64_t x250 = INT64_MIN;
	int16_t x251 = INT16_MAX;

	t62 = ((x249|x250)<=(x251&x252));

	if (t62 != 1) { NG(); } else { ; }
	
}

void f63(void) {
	uint8_t x253 = UINT8_MAX;
	int32_t x254 = 797755651;
	int64_t x255 = -1LL;
	int8_t x256 = INT8_MIN;
	volatile int32_t t63 = -472011;

	t63 = ((x253|x254)<=(x255&x256));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	int16_t x257 = INT16_MIN;
	volatile int64_t x259 = INT64_MIN;
	int8_t x260 = INT8_MAX;

	t64 = ((x257|x258)<=(x259&x260));

	if (t64 != 1) { NG(); } else { ; }
	
}

void f65(void) {
	int16_t x261 = INT16_MIN;
	uint32_t x262 = 37138U;
	static uint16_t x263 = 70U;
	uint16_t x264 = 32630U;

	t65 = ((x261|x262)<=(x263&x264));

	if (t65 != 0) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t t66 = 11510;

	t66 = ((x265|x266)<=(x267&x268));

	if (t66 != 0) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x269 = -246768LL;
	volatile uint16_t x270 = 39U;
	int32_t x271 = -1;
	uint64_t x272 = 118353800446411133LLU;
	int32_t t67 = -802218;

	t67 = ((x269|x270)<=(x271&x272));

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	uint16_t x276 = 22696U;
	int32_t t68 = 18;

	t68 = ((x273|x274)<=(x275&x276));

	if (t68 != 0) { NG(); } else { ; }
	
}

void f69(void) {
	uint32_t x277 = UINT32_MAX;
	int8_t x278 = INT8_MIN;
	int16_t x279 = -222;
	int64_t x280 = INT64_MIN;
	int32_t t69 = 91329;

	t69 = ((x277|x278)<=(x279&x280));

	if (t69 != 0) { NG(); } else { ; }
	
}

void f70(void) {
	uint8_t x282 = 35U;
	int8_t x283 = INT8_MAX;
	static uint8_t x284 = 2U;
	int32_t t70 = 3715718;

	t70 = ((x281|x282)<=(x283&x284));

	if (t70 != 1) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int16_t x285 = -397;
	static uint64_t x286 = 2297634083410150575LLU;
	uint16_t x287 = 358U;
	int32_t t71 = 37;

	t71 = ((x285|x286)<=(x287&x288));

	if (t71 != 0) { NG(); } else { ; }
	
}

void f72(void) {
	int64_t x289 = INT64_MIN;
	volatile int16_t x290 = -239;
	int32_t x291 = INT32_MIN;
	static uint64_t x292 = 1908205557LLU;
	volatile int32_t t72 = -10420564;

	t72 = ((x289|x290)<=(x291&x292));

	if (t72 != 0) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x293 = 195;
	uint32_t x294 = 10U;
	int32_t x295 = INT32_MIN;
	int32_t t73 = -9;

	t73 = ((x293|x294)<=(x295&x296));

	if (t73 != 1) { NG(); } else { ; }
	
}

void f74(void) {
	volatile uint8_t x297 = 6U;
	int16_t x299 = -1;
	volatile int8_t x300 = 0;
	static volatile int32_t t74 = -2009;

	t74 = ((x297|x298)<=(x299&x300));

	if (t74 != 0) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x302 = -1;
	static volatile int16_t x304 = INT16_MAX;
	int32_t t75 = -4;

	t75 = ((x301|x302)<=(x303&x304));

	if (t75 != 1) { NG(); } else { ; }
	
}

void f76(void) {
	int64_t x305 = -14079160532LL;
	volatile uint32_t x306 = 101U;
	uint32_t x307 = UINT32_MAX;
	static uint16_t x308 = 3427U;
	volatile int32_t t76 = -99452166;

	t76 = ((x305|x306)<=(x307&x308));

	if (t76 != 1) { NG(); } else { ; }
	
}

void f77(void) {
	uint8_t x309 = UINT8_MAX;
	int64_t x310 = INT64_MIN;
	volatile uint32_t x312 = 4014327U;
	static volatile int32_t t77 = -153196004;

	t77 = ((x309|x310)<=(x311&x312));

	if (t77 != 1) { NG(); } else { ; }
	
}

void f78(void) {
	uint64_t x313 = 133134900432583290LLU;
	int16_t x314 = INT16_MIN;
	uint64_t x316 = UINT64_MAX;
	int32_t t78 = -1992015;

	t78 = ((x313|x314)<=(x315&x316));

	if (t78 != 0) { NG(); } else { ; }
	
}

void f79(void) {
	static uint32_t x317 = 25U;
	int64_t x318 = -36147655010742337LL;
	int16_t x320 = INT16_MIN;

	t79 = ((x317|x318)<=(x319&x320));

	if (t79 != 1) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x323 = INT8_MIN;
	uint8_t x324 = UINT8_MAX;
	volatile int32_t t80 = 179352631;

	t80 = ((x321|x322)<=(x323&x324));

	if (t80 != 1) { NG(); } else { ; }
	
}

void f81(void) {
	int8_t x325 = -1;
	int32_t x326 = INT32_MIN;
	static volatile int8_t x327 = INT8_MAX;
	uint8_t x328 = 11U;

	t81 = ((x325|x326)<=(x327&x328));

	if (t81 != 1) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x329 = UINT32_MAX;
	static volatile int64_t x330 = INT64_MIN;
	int8_t x331 = INT8_MAX;
	volatile int32_t t82 = 54;

	t82 = ((x329|x330)<=(x331&x332));

	if (t82 != 1) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x333 = INT8_MIN;
	int32_t x334 = -1;
	uint64_t x335 = 819838513LLU;
	volatile uint32_t x336 = 371408640U;
	static int32_t t83 = 34456;

	t83 = ((x333|x334)<=(x335&x336));

	if (t83 != 0) { NG(); } else { ; }
	
}

void f84(void) {
	uint64_t x337 = UINT64_MAX;
	uint32_t x338 = UINT32_MAX;
	uint8_t x340 = 6U;
	int32_t t84 = -5178058;

	t84 = ((x337|x338)<=(x339&x340));

	if (t84 != 0) { NG(); } else { ; }
	
}

void f85(void) {
	uint8_t x342 = 0U;
	int64_t x343 = -1LL;
	uint8_t x344 = 2U;
	static int32_t t85 = 183910302;

	t85 = ((x341|x342)<=(x343&x344));

	if (t85 != 0) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x345 = 38588;
	static volatile int64_t x346 = -1LL;
	volatile int32_t t86 = 24854;

	t86 = ((x345|x346)<=(x347&x348));

	if (t86 != 1) { NG(); } else { ; }
	
}

void f87(void) {
	uint32_t x349 = 21367760U;
	int16_t x350 = -6;
	int16_t x351 = 31;
	int64_t x352 = 128799229LL;
	volatile int32_t t87 = 712931795;

	t87 = ((x349|x350)<=(x351&x352));

	if (t87 != 0) { NG(); } else { ; }
	
}

void f88(void) {
	volatile int16_t x354 = INT16_MIN;
	int32_t x355 = -620120;
	int32_t x356 = INT32_MAX;
	volatile int32_t t88 = -242;

	t88 = ((x353|x354)<=(x355&x356));

	if (t88 != 1) { NG(); } else { ; }
	
}

void f89(void) {
	static uint16_t x357 = 1U;
	int8_t x358 = INT8_MAX;
	int8_t x359 = -31;
	int32_t t89 = -15;

	t89 = ((x357|x358)<=(x359&x360));

	if (t89 != 0) { NG(); } else { ; }
	
}

void f90(void) {
	int8_t x361 = -1;
	static int32_t x362 = -34452026;
	int64_t x363 = -50797896435LL;
	static int64_t x364 = 44417701712339LL;
	int32_t t90 = 114;

	t90 = ((x361|x362)<=(x363&x364));

	if (t90 != 1) { NG(); } else { ; }
	
}

void f91(void) {
	static int16_t x365 = INT16_MAX;
	static uint16_t x367 = 8129U;
	int8_t x368 = -1;
	volatile int32_t t91 = -1069;

	t91 = ((x365|x366)<=(x367&x368));

	if (t91 != 0) { NG(); } else { ; }
	
}

void f92(void) {
	static volatile int64_t x369 = INT64_MIN;
	int64_t x371 = INT64_MIN;
	int16_t x372 = INT16_MIN;
	volatile int32_t t92 = -42;

	t92 = ((x369|x370)<=(x371&x372));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	int64_t x373 = INT64_MIN;
	static int64_t x375 = -18725816428213LL;
	uint64_t x376 = 10LLU;

	t93 = ((x373|x374)<=(x375&x376));

	if (t93 != 0) { NG(); } else { ; }
	
}

void f94(void) {
	int32_t x377 = 24079538;
	int32_t x378 = 3361886;
	int16_t x379 = -6;
	int16_t x380 = INT16_MAX;
	static int32_t t94 = -713508556;

	t94 = ((x377|x378)<=(x379&x380));

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	int16_t x381 = INT16_MAX;
	int32_t x382 = -134830;
	int32_t t95 = 571158;

	t95 = ((x381|x382)<=(x383&x384));

	if (t95 != 1) { NG(); } else { ; }
	
}

void f96(void) {
	uint8_t x385 = UINT8_MAX;
	int32_t x386 = INT32_MIN;
	int64_t x388 = -1LL;

	t96 = ((x385|x386)<=(x387&x388));

	if (t96 != 1) { NG(); } else { ; }
	
}

void f97(void) {
	int32_t x389 = -1;
	int64_t x390 = -1LL;
	volatile uint64_t x391 = UINT64_MAX;
	int32_t t97 = 167;

	t97 = ((x389|x390)<=(x391&x392));

	if (t97 != 1) { NG(); } else { ; }
	
}

void f98(void) {
	volatile int8_t x393 = INT8_MIN;
	int64_t x394 = -2263203488902LL;
	static volatile int32_t x395 = INT32_MAX;
	static int64_t x396 = -1LL;
	int32_t t98 = -4573636;

	t98 = ((x393|x394)<=(x395&x396));

	if (t98 != 1) { NG(); } else { ; }
	
}

void f99(void) {
	static volatile int64_t x397 = -94LL;
	int32_t x398 = -1;
	static int8_t x400 = -1;
	int32_t t99 = 729;

	t99 = ((x397|x398)<=(x399&x400));

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

