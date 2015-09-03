#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

uint32_t t1 = UINT32_MAX;
int32_t x26 = -1148;
uint64_t x28 = 9126246LLU;
uint32_t x45 = UINT32_MAX;
int64_t x46 = -90515LL;
volatile int32_t x47 = 180147;
uint64_t x64 = UINT64_MAX;
static int16_t x72 = INT16_MIN;
int32_t x74 = -73;
static int8_t x76 = 3;
volatile int32_t t15 = 204;
int32_t x93 = -1;
volatile int32_t t19 = -1;
static int64_t x115 = -1LL;
int64_t t20 = -7787948LL;
int16_t x119 = 0;
volatile int16_t x126 = INT16_MIN;
int8_t x133 = -31;
int16_t x141 = -28;
int16_t x155 = -1;
int16_t x156 = 3838;
static volatile int64_t x173 = INT64_MIN;
int32_t x174 = -191457188;
volatile int64_t t33 = INT64_MIN;
int16_t x193 = -1;
int32_t x196 = INT32_MAX;
uint64_t x202 = UINT64_MAX;
int64_t x214 = INT64_MIN;
int8_t x220 = INT8_MIN;
volatile int8_t x221 = -1;
uint8_t x229 = 3U;
uint64_t x230 = 1644222463LLU;
uint16_t x234 = 2572U;
static int32_t x248 = INT32_MAX;
int16_t x254 = INT16_MAX;
static volatile int64_t t47 = -15169LL;
volatile int8_t x257 = -9;
volatile int32_t t48 = 388309244;
int16_t x263 = -1;
uint16_t x268 = 17U;
int32_t x272 = INT32_MIN;
uint8_t x280 = 34U;
static int64_t x282 = INT64_MIN;
volatile uint16_t x283 = 754U;
uint8_t x293 = UINT8_MAX;
static int32_t x299 = 1;
volatile uint16_t x300 = 17335U;
volatile int32_t t56 = -16450415;
volatile int32_t t58 = 14372655;
static int64_t t59 = -1LL;
static int32_t x318 = 456828478;
uint64_t x319 = UINT64_MAX;
static int32_t x320 = INT32_MAX;
volatile int64_t x327 = -1LL;
int64_t t61 = -15LL;
volatile int16_t x358 = INT16_MIN;
uint32_t x368 = UINT32_MAX;
volatile int64_t t69 = 3LL;
static uint16_t x389 = 1266U;
static volatile int64_t x390 = -32418157LL;
int64_t t71 = -40316LL;
int32_t x398 = -1;
int32_t t72 = -91832068;
uint16_t x409 = 23502U;
static int32_t x421 = -1;
volatile int32_t x422 = INT32_MIN;
uint64_t x432 = 1394698262424349LLU;
volatile uint64_t t77 = 39165753LLU;
static int32_t x444 = 2;
uint8_t x451 = 65U;
int32_t x453 = INT32_MIN;
volatile int64_t x460 = 14LL;
int8_t x481 = INT8_MAX;
int32_t x482 = -1101;
uint8_t x498 = 0U;
static int64_t t88 = 69689177LL;
int32_t x508 = 375457;
volatile uint32_t x524 = 118556U;
static volatile int64_t x565 = INT64_MIN;
int64_t t99 = 231935LL;


void f0(void) {
	int64_t x1 = INT64_MIN;
	int16_t x2 = INT16_MAX;
	int8_t x3 = -1;
	uint32_t x4 = UINT32_MAX;
	volatile int64_t t0 = -167884401679LL;

	t0 = (x1&(x2^(x3*x4)));

	if (t0 != 0LL) { NG(); } else { ; }
	
}

void f1(void) {
	uint32_t x5 = UINT32_MAX;
	int32_t x6 = -1;
	int32_t x7 = INT32_MIN;
	volatile int16_t x8 = 0;

	t1 = (x5&(x6^(x7*x8)));

	if (t1 != UINT32_MAX) { NG(); } else { ; }
	
}

void f2(void) {
	static uint8_t x9 = UINT8_MAX;
	uint32_t x10 = 2380028U;
	volatile uint64_t x11 = 432800232698451LLU;
	volatile int8_t x12 = INT8_MAX;
	volatile uint64_t t2 = 30LLU;

	t2 = (x9&(x10^(x11*x12)));

	if (t2 != 209LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static int8_t x17 = -1;
	int16_t x18 = -945;
	uint64_t x19 = UINT64_MAX;
	uint16_t x20 = 1808U;
	volatile uint64_t t3 = 176573385LLU;

	t3 = (x17&(x18^(x19*x20)));

	if (t3 != 1215LLU) { NG(); } else { ; }
	
}

void f4(void) {
	int32_t x25 = 43467;
	static int32_t x27 = INT32_MIN;
	static volatile uint64_t t4 = 18488271800LLU;

	t4 = (x25&(x26^(x27*x28)));

	if (t4 != 43392LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x33 = -1LL;
	int8_t x34 = -19;
	int64_t x35 = INT64_MIN;
	volatile uint32_t x36 = 1U;
	volatile int64_t t5 = -448LL;

	t5 = (x33&(x34^(x35*x36)));

	if (t5 != 9223372036854775789LL) { NG(); } else { ; }
	
}

void f6(void) {
	int32_t x41 = INT32_MIN;
	uint16_t x42 = 5360U;
	int8_t x43 = -1;
	int64_t x44 = 280324749712515LL;
	volatile int64_t t6 = 5489944400330LL;

	t6 = (x41&(x42^(x43*x44)));

	if (t6 != -280326072958976LL) { NG(); } else { ; }
	
}

void f7(void) {
	uint32_t x48 = UINT32_MAX;
	int64_t t7 = -84847677829829LL;

	t7 = (x45&(x46^(x47*x48)));

	if (t7 != 253472LL) { NG(); } else { ; }
	
}

void f8(void) {
	int64_t x49 = 4113879LL;
	int64_t x50 = INT64_MIN;
	static int16_t x51 = -1;
	volatile uint16_t x52 = 472U;
	int64_t t8 = -2978523123284LL;

	t8 = (x49&(x50^(x51*x52)));

	if (t8 != 4113408LL) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x57 = INT8_MAX;
	volatile int8_t x58 = -20;
	volatile int32_t x59 = -1;
	int8_t x60 = -1;
	volatile int32_t t9 = 185463;

	t9 = (x57&(x58^(x59*x60)));

	if (t9 != 109) { NG(); } else { ; }
	
}

void f10(void) {
	volatile int16_t x61 = -1830;
	int16_t x62 = INT16_MAX;
	volatile int64_t x63 = INT64_MAX;
	uint64_t t10 = 8707226187LLU;

	t10 = (x61&(x62^(x63*x64)));

	if (t10 != 9223372036854806746LLU) { NG(); } else { ; }
	
}

void f11(void) {
	uint16_t x65 = 3U;
	uint8_t x66 = 11U;
	uint16_t x67 = UINT16_MAX;
	uint8_t x68 = 20U;
	int32_t t11 = 184;

	t11 = (x65&(x66^(x67*x68)));

	if (t11 != 3) { NG(); } else { ; }
	
}

void f12(void) {
	uint16_t x69 = 6U;
	int16_t x70 = INT16_MIN;
	int16_t x71 = INT16_MIN;
	int32_t t12 = -1;

	t12 = (x69&(x70^(x71*x72)));

	if (t12 != 0) { NG(); } else { ; }
	
}

void f13(void) {
	static int64_t x73 = INT64_MIN;
	uint32_t x75 = UINT32_MAX;
	static int64_t t13 = 37147475204LL;

	t13 = (x73&(x74^(x75*x76)));

	if (t13 != 0LL) { NG(); } else { ; }
	
}

void f14(void) {
	static volatile int8_t x77 = INT8_MAX;
	uint16_t x78 = 713U;
	int16_t x79 = 0;
	uint16_t x80 = 30U;
	volatile int32_t t14 = -1906854;

	t14 = (x77&(x78^(x79*x80)));

	if (t14 != 73) { NG(); } else { ; }
	
}

void f15(void) {
	uint16_t x81 = UINT16_MAX;
	uint16_t x82 = UINT16_MAX;
	volatile uint16_t x83 = UINT16_MAX;
	int16_t x84 = -1;

	t15 = (x81&(x82^(x83*x84)));

	if (t15 != 65534) { NG(); } else { ; }
	
}

void f16(void) {
	uint16_t x89 = 3032U;
	int8_t x90 = -1;
	int16_t x91 = INT16_MAX;
	int32_t x92 = -1;
	volatile int32_t t16 = 2;

	t16 = (x89&(x90^(x91*x92)));

	if (t16 != 3032) { NG(); } else { ; }
	
}

void f17(void) {
	uint32_t x94 = UINT32_MAX;
	int16_t x95 = 313;
	int64_t x96 = -1LL;
	int64_t t17 = 212LL;

	t17 = (x93&(x94^(x95*x96)));

	if (t17 != -4294966984LL) { NG(); } else { ; }
	
}

void f18(void) {
	int16_t x97 = -6551;
	int8_t x98 = -3;
	volatile int16_t x99 = -1490;
	uint64_t x100 = 2LLU;
	volatile uint64_t t18 = 1425577113LLU;

	t18 = (x97&(x98^(x99*x100)));

	if (t18 != 545LLU) { NG(); } else { ; }
	
}

void f19(void) {
	int32_t x109 = INT32_MAX;
	uint16_t x110 = 229U;
	int16_t x111 = INT16_MIN;
	int32_t x112 = -1;

	t19 = (x109&(x110^(x111*x112)));

	if (t19 != 32997) { NG(); } else { ; }
	
}

void f20(void) {
	int64_t x113 = -241911365LL;
	uint8_t x114 = 15U;
	static int8_t x116 = INT8_MIN;

	t20 = (x113&(x114^(x115*x116)));

	if (t20 != 139LL) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint64_t x117 = 21730LLU;
	volatile int16_t x118 = INT16_MAX;
	volatile uint16_t x120 = UINT16_MAX;
	uint64_t t21 = 382703905843LLU;

	t21 = (x117&(x118^(x119*x120)));

	if (t21 != 21730LLU) { NG(); } else { ; }
	
}

void f22(void) {
	int64_t x121 = 0LL;
	uint64_t x122 = 3951346113112583LLU;
	int16_t x123 = INT16_MIN;
	uint64_t x124 = 143158091303562228LLU;
	uint64_t t22 = 424573809084596LLU;

	t22 = (x121&(x122^(x123*x124)));

	if (t22 != 0LLU) { NG(); } else { ; }
	
}

void f23(void) {
	static uint8_t x125 = UINT8_MAX;
	int16_t x127 = 4514;
	int8_t x128 = INT8_MAX;
	volatile int32_t t23 = -384740;

	t23 = (x125&(x126^(x127*x128)));

	if (t23 != 94) { NG(); } else { ; }
	
}

void f24(void) {
	static int64_t x129 = INT64_MAX;
	int16_t x130 = INT16_MIN;
	int64_t x131 = 5461408875733179LL;
	int16_t x132 = 2;
	static int64_t t24 = 7255580246LL;

	t24 = (x129&(x130^(x131*x132)));

	if (t24 != 9212449219103310198LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint64_t x134 = UINT64_MAX;
	static int16_t x135 = -279;
	volatile int16_t x136 = INT16_MIN;
	uint64_t t25 = 47LLU;

	t25 = (x133&(x134^(x135*x136)));

	if (t25 != 18446744073700409313LLU) { NG(); } else { ; }
	
}

void f26(void) {
	uint8_t x142 = 10U;
	uint8_t x143 = 3U;
	int16_t x144 = INT16_MAX;
	int32_t t26 = 47960844;

	t26 = (x141&(x142^(x143*x144)));

	if (t26 != 98276) { NG(); } else { ; }
	
}

void f27(void) {
	int8_t x149 = -1;
	int32_t x150 = INT32_MIN;
	int64_t x151 = 198LL;
	uint8_t x152 = 74U;
	int64_t t27 = -8294919LL;

	t27 = (x149&(x150^(x151*x152)));

	if (t27 != -2147468996LL) { NG(); } else { ; }
	
}

void f28(void) {
	static uint64_t x153 = 69LLU;
	static int16_t x154 = INT16_MAX;
	static uint64_t t28 = 8087672684016956559LLU;

	t28 = (x153&(x154^(x155*x156)));

	if (t28 != 69LLU) { NG(); } else { ; }
	
}

void f29(void) {
	int8_t x157 = INT8_MIN;
	int16_t x158 = -1;
	int16_t x159 = -1;
	volatile int16_t x160 = -489;
	int32_t t29 = -277;

	t29 = (x157&(x158^(x159*x160)));

	if (t29 != -512) { NG(); } else { ; }
	
}

void f30(void) {
	uint32_t x161 = 517096U;
	uint64_t x162 = 1820119631119405LLU;
	volatile int16_t x163 = INT16_MIN;
	static volatile int32_t x164 = -1;
	volatile uint64_t t30 = 5717622LLU;

	t30 = (x161&(x162^(x163*x164)));

	if (t30 != 475176LLU) { NG(); } else { ; }
	
}

void f31(void) {
	int32_t x169 = -1;
	volatile uint16_t x170 = UINT16_MAX;
	uint32_t x171 = 6U;
	static uint16_t x172 = 11753U;
	volatile uint32_t t31 = 829U;

	t31 = (x169&(x170^(x171*x172)));

	if (t31 != 126089U) { NG(); } else { ; }
	
}

void f32(void) {
	static volatile uint64_t x175 = UINT64_MAX;
	static int8_t x176 = -1;
	uint64_t t32 = 1441898670325906LLU;

	t32 = (x173&(x174^(x175*x176)));

	if (t32 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int64_t x181 = INT64_MIN;
	int32_t x182 = INT32_MAX;
	int16_t x183 = INT16_MIN;
	volatile uint8_t x184 = 6U;

	t33 = (x181&(x182^(x183*x184)));

	if (t33 != INT64_MIN) { NG(); } else { ; }
	
}

void f34(void) {
	uint8_t x189 = UINT8_MAX;
	int8_t x190 = -1;
	int8_t x191 = 0;
	volatile uint64_t x192 = UINT64_MAX;
	uint64_t t34 = 9LLU;

	t34 = (x189&(x190^(x191*x192)));

	if (t34 != 255LLU) { NG(); } else { ; }
	
}

void f35(void) {
	volatile int16_t x194 = INT16_MAX;
	uint32_t x195 = UINT32_MAX;
	static volatile uint32_t t35 = 43293U;

	t35 = (x193&(x194^(x195*x196)));

	if (t35 != 2147516414U) { NG(); } else { ; }
	
}

void f36(void) {
	int8_t x197 = -1;
	int8_t x198 = -19;
	int16_t x199 = -11;
	static int8_t x200 = INT8_MIN;
	static volatile int32_t t36 = 2214;

	t36 = (x197&(x198^(x199*x200)));

	if (t36 != -1427) { NG(); } else { ; }
	
}

void f37(void) {
	volatile int32_t x201 = INT32_MAX;
	int16_t x203 = 46;
	volatile uint32_t x204 = 26823613U;
	volatile uint64_t t37 = 162241260255LLU;

	t37 = (x201&(x202^(x203*x204)));

	if (t37 != 913597449LLU) { NG(); } else { ; }
	
}

void f38(void) {
	volatile uint64_t x209 = 189LLU;
	int64_t x210 = INT64_MIN;
	static int64_t x211 = INT64_MAX;
	uint64_t x212 = 893437280395993LLU;
	volatile uint64_t t38 = 49768679951LLU;

	t38 = (x209&(x210^(x211*x212)));

	if (t38 != 37LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint8_t x213 = UINT8_MAX;
	int16_t x215 = -1;
	uint8_t x216 = UINT8_MAX;
	volatile int64_t t39 = 76234LL;

	t39 = (x213&(x214^(x215*x216)));

	if (t39 != 1LL) { NG(); } else { ; }
	
}

void f40(void) {
	static int64_t x217 = -1LL;
	int32_t x218 = -13;
	uint16_t x219 = UINT16_MAX;
	volatile int64_t t40 = -5039354692982LL;

	t40 = (x217&(x218^(x219*x220)));

	if (t40 != 8388467LL) { NG(); } else { ; }
	
}

void f41(void) {
	uint8_t x222 = 125U;
	volatile uint32_t x223 = UINT32_MAX;
	static uint32_t x224 = 0U;
	volatile uint32_t t41 = 7611151U;

	t41 = (x221&(x222^(x223*x224)));

	if (t41 != 125U) { NG(); } else { ; }
	
}

void f42(void) {
	static int16_t x225 = 0;
	int64_t x226 = 223LL;
	uint8_t x227 = UINT8_MAX;
	int16_t x228 = 52;
	static volatile int64_t t42 = 17LL;

	t42 = (x225&(x226^(x227*x228)));

	if (t42 != 0LL) { NG(); } else { ; }
	
}

void f43(void) {
	int16_t x231 = INT16_MIN;
	int16_t x232 = -1;
	volatile uint64_t t43 = 2190312LLU;

	t43 = (x229&(x230^(x231*x232)));

	if (t43 != 3LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x233 = -9;
	static uint32_t x235 = 242U;
	static int32_t x236 = INT32_MIN;
	volatile uint32_t t44 = 2984197U;

	t44 = (x233&(x234^(x235*x236)));

	if (t44 != 2564U) { NG(); } else { ; }
	
}

void f45(void) {
	volatile uint32_t x237 = 117104U;
	uint8_t x238 = 15U;
	uint8_t x239 = UINT8_MAX;
	static int8_t x240 = -1;
	volatile uint32_t t45 = 182801U;

	t45 = (x237&(x238^(x239*x240)));

	if (t45 != 116992U) { NG(); } else { ; }
	
}

void f46(void) {
	static int16_t x245 = -1;
	static uint64_t x246 = 220261375381458LLU;
	uint64_t x247 = 4LLU;
	uint64_t t46 = 7169951LLU;

	t46 = (x245&(x246^(x247*x248)));

	if (t46 != 220256240300078LLU) { NG(); } else { ; }
	
}

void f47(void) {
	static int64_t x253 = INT64_MAX;
	static uint32_t x255 = 298U;
	int16_t x256 = -2985;

	t47 = (x253&(x254^(x255*x256)));

	if (t47 != 4294054585LL) { NG(); } else { ; }
	
}

void f48(void) {
	uint8_t x258 = UINT8_MAX;
	uint16_t x259 = UINT16_MAX;
	volatile int16_t x260 = INT16_MIN;

	t48 = (x257&(x258^(x259*x260)));

	if (t48 != -2147450633) { NG(); } else { ; }
	
}

void f49(void) {
	static uint32_t x261 = 13189650U;
	static uint32_t x262 = 122989887U;
	int64_t x264 = -1060509704LL;
	volatile int64_t t49 = -33342455LL;

	t49 = (x261&(x262^(x263*x264)));

	if (t49 != 4194322LL) { NG(); } else { ; }
	
}

void f50(void) {
	int8_t x265 = INT8_MAX;
	volatile int32_t x266 = INT32_MIN;
	int8_t x267 = INT8_MIN;
	int32_t t50 = -876026085;

	t50 = (x265&(x266^(x267*x268)));

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	uint32_t x269 = UINT32_MAX;
	int16_t x270 = INT16_MIN;
	uint8_t x271 = 1U;
	uint32_t t51 = 159U;

	t51 = (x269&(x270^(x271*x272)));

	if (t51 != 2147450880U) { NG(); } else { ; }
	
}

void f52(void) {
	uint16_t x277 = 4U;
	static uint64_t x278 = UINT64_MAX;
	static volatile int8_t x279 = INT8_MAX;
	volatile uint64_t t52 = 1426398517794622LLU;

	t52 = (x277&(x278^(x279*x280)));

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	int16_t x281 = 1;
	int16_t x284 = INT16_MIN;
	static volatile int64_t t53 = -114510213LL;

	t53 = (x281&(x282^(x283*x284)));

	if (t53 != 0LL) { NG(); } else { ; }
	
}

void f54(void) {
	static int64_t x289 = -13713499769600LL;
	int32_t x290 = 24824;
	static int8_t x291 = INT8_MIN;
	int8_t x292 = -15;
	static int64_t t54 = 3918652119102632LL;

	t54 = (x289&(x290^(x291*x292)));

	if (t54 != 9472LL) { NG(); } else { ; }
	
}

void f55(void) {
	volatile int32_t x294 = 0;
	static int16_t x295 = INT16_MAX;
	static volatile int32_t x296 = 1;
	static volatile int32_t t55 = -3;

	t55 = (x293&(x294^(x295*x296)));

	if (t55 != 255) { NG(); } else { ; }
	
}

void f56(void) {
	int32_t x297 = 90491;
	uint8_t x298 = 90U;

	t56 = (x297&(x298^(x299*x300)));

	if (t56 != 16745) { NG(); } else { ; }
	
}

void f57(void) {
	uint64_t x305 = 50443072LLU;
	uint32_t x306 = 4737U;
	int64_t x307 = INT64_MIN;
	uint64_t x308 = 11021977LLU;
	volatile uint64_t t57 = 48693755503925851LLU;

	t57 = (x305&(x306^(x307*x308)));

	if (t57 != 4608LLU) { NG(); } else { ; }
	
}

void f58(void) {
	uint8_t x309 = 21U;
	static uint8_t x310 = 11U;
	static int16_t x311 = 20;
	static uint8_t x312 = 87U;

	t58 = (x309&(x310^(x311*x312)));

	if (t58 != 5) { NG(); } else { ; }
	
}

void f59(void) {
	volatile int8_t x313 = INT8_MIN;
	int64_t x314 = INT64_MIN;
	int32_t x315 = -23;
	int32_t x316 = 8;

	t59 = (x313&(x314^(x315*x316)));

	if (t59 != 9223372036854775552LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x317 = INT8_MAX;
	volatile uint64_t t60 = 13066093920003421LLU;

	t60 = (x317&(x318^(x319*x320)));

	if (t60 != 63LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int8_t x325 = -1;
	static int32_t x326 = -1;
	static volatile uint8_t x328 = UINT8_MAX;

	t61 = (x325&(x326^(x327*x328)));

	if (t61 != 254LL) { NG(); } else { ; }
	
}

void f62(void) {
	static volatile uint64_t x337 = 6726452LLU;
	volatile uint8_t x338 = UINT8_MAX;
	static int8_t x339 = INT8_MIN;
	int8_t x340 = -9;
	uint64_t t62 = 2LLU;

	t62 = (x337&(x338^(x339*x340)));

	if (t62 != 52LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int8_t x341 = -14;
	int16_t x342 = -1;
	int32_t x343 = INT32_MAX;
	int32_t x344 = -1;
	volatile int32_t t63 = -14;

	t63 = (x341&(x342^(x343*x344)));

	if (t63 != 2147483634) { NG(); } else { ; }
	
}

void f64(void) {
	uint16_t x345 = 1237U;
	static int64_t x346 = INT64_MIN;
	uint32_t x347 = 133U;
	static int32_t x348 = INT32_MIN;
	volatile int64_t t64 = -114757878257779LL;

	t64 = (x345&(x346^(x347*x348)));

	if (t64 != 0LL) { NG(); } else { ; }
	
}

void f65(void) {
	int8_t x353 = INT8_MIN;
	uint16_t x354 = 1U;
	int64_t x355 = -15339135166332676LL;
	volatile int64_t x356 = -1LL;
	int64_t t65 = -726826870LL;

	t65 = (x353&(x354^(x355*x356)));

	if (t65 != 15339135166332672LL) { NG(); } else { ; }
	
}

void f66(void) {
	int32_t x357 = -1;
	int8_t x359 = INT8_MIN;
	int16_t x360 = INT16_MIN;
	volatile int32_t t66 = -14;

	t66 = (x357&(x358^(x359*x360)));

	if (t66 != -4227072) { NG(); } else { ; }
	
}

void f67(void) {
	volatile int64_t x365 = INT64_MIN;
	uint16_t x366 = 606U;
	uint8_t x367 = 30U;
	int64_t t67 = -279LL;

	t67 = (x365&(x366^(x367*x368)));

	if (t67 != 0LL) { NG(); } else { ; }
	
}

void f68(void) {
	int32_t x377 = INT32_MIN;
	volatile int32_t x378 = -1;
	int64_t x379 = 334423LL;
	uint64_t x380 = 8028889773004614372LLU;
	static uint64_t t68 = 1231LLU;

	t68 = (x377&(x378^(x379*x380)));

	if (t68 != 7322579417572573184LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int8_t x381 = INT8_MIN;
	int8_t x382 = INT8_MIN;
	int64_t x383 = -119267884942656LL;
	volatile int64_t x384 = -9LL;

	t69 = (x381&(x382^(x383*x384)));

	if (t69 != -1073410964483968LL) { NG(); } else { ; }
	
}

void f70(void) {
	int64_t x385 = INT64_MIN;
	volatile uint16_t x386 = 636U;
	int64_t x387 = -1LL;
	volatile int8_t x388 = 0;
	volatile int64_t t70 = -521779055645419LL;

	t70 = (x385&(x386^(x387*x388)));

	if (t70 != 0LL) { NG(); } else { ; }
	
}

void f71(void) {
	int64_t x391 = -1LL;
	static int8_t x392 = -1;

	t71 = (x389&(x390^(x391*x392)));

	if (t71 != 1170LL) { NG(); } else { ; }
	
}

void f72(void) {
	int16_t x397 = INT16_MIN;
	uint16_t x399 = 325U;
	int16_t x400 = 118;

	t72 = (x397&(x398^(x399*x400)));

	if (t72 != -65536) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x410 = INT16_MIN;
	volatile int32_t x411 = 58;
	uint64_t x412 = UINT64_MAX;
	volatile uint64_t t73 = 224887498970736079LLU;

	t73 = (x409&(x410^(x411*x412)));

	if (t73 != 23494LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint64_t x413 = 1037288LLU;
	int64_t x414 = INT64_MAX;
	int64_t x415 = -1LL;
	int32_t x416 = INT32_MIN;
	uint64_t t74 = 5264646194402LLU;

	t74 = (x413&(x414^(x415*x416)));

	if (t74 != 1037288LLU) { NG(); } else { ; }
	
}

void f75(void) {
	uint16_t x417 = 1U;
	volatile int8_t x418 = INT8_MAX;
	uint8_t x419 = 60U;
	volatile uint32_t x420 = 4324U;
	static volatile uint32_t t75 = 6U;

	t75 = (x417&(x418^(x419*x420)));

	if (t75 != 1U) { NG(); } else { ; }
	
}

void f76(void) {
	static int16_t x423 = 202;
	volatile int16_t x424 = -1;
	volatile int32_t t76 = -1;

	t76 = (x421&(x422^(x423*x424)));

	if (t76 != 2147483446) { NG(); } else { ; }
	
}

void f77(void) {
	int16_t x429 = INT16_MIN;
	uint8_t x430 = UINT8_MAX;
	uint32_t x431 = 66202U;

	t77 = (x429&(x430^(x431*x432)));

	if (t77 != 98094000468983808LLU) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x437 = 15U;
	static uint32_t x438 = 21U;
	int32_t x439 = -1;
	uint16_t x440 = UINT16_MAX;
	uint32_t t78 = 2557397U;

	t78 = (x437&(x438^(x439*x440)));

	if (t78 != 4U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile uint32_t x441 = 17606U;
	int8_t x442 = -9;
	uint64_t x443 = UINT64_MAX;
	uint64_t t79 = 124255084152055LLU;

	t79 = (x441&(x442^(x443*x444)));

	if (t79 != 0LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint8_t x449 = 2U;
	static int8_t x450 = -1;
	int16_t x452 = -1;
	volatile int32_t t80 = -1;

	t80 = (x449&(x450^(x451*x452)));

	if (t80 != 0) { NG(); } else { ; }
	
}

void f81(void) {
	int16_t x454 = INT16_MIN;
	uint16_t x455 = 25U;
	int8_t x456 = 27;
	int32_t t81 = INT32_MIN;

	t81 = (x453&(x454^(x455*x456)));

	if (t81 != INT32_MIN) { NG(); } else { ; }
	
}

void f82(void) {
	volatile int8_t x457 = INT8_MIN;
	volatile int32_t x458 = INT32_MIN;
	static int8_t x459 = INT8_MIN;
	int64_t t82 = 254070533LL;

	t82 = (x457&(x458^(x459*x460)));

	if (t82 != 2147481856LL) { NG(); } else { ; }
	
}

void f83(void) {
	volatile int8_t x473 = -1;
	uint8_t x474 = 45U;
	int8_t x475 = -4;
	int16_t x476 = INT16_MAX;
	int32_t t83 = 107868787;

	t83 = (x473&(x474^(x475*x476)));

	if (t83 != -131031) { NG(); } else { ; }
	
}

void f84(void) {
	int16_t x477 = -1;
	int64_t x478 = 404117609033LL;
	int16_t x479 = INT16_MIN;
	static int8_t x480 = INT8_MIN;
	volatile int64_t t84 = 329331710509481662LL;

	t84 = (x477&(x478^(x479*x480)));

	if (t84 != 404113414729LL) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x483 = INT16_MIN;
	static int64_t x484 = -23LL;
	volatile int64_t t85 = -181879536061424745LL;

	t85 = (x481&(x482^(x483*x484)));

	if (t85 != 51LL) { NG(); } else { ; }
	
}

void f86(void) {
	int32_t x489 = INT32_MIN;
	static int16_t x490 = 0;
	uint64_t x491 = 960637713LLU;
	static volatile int16_t x492 = INT16_MIN;
	volatile uint64_t t86 = 7816148LLU;

	t86 = (x489&(x490^(x491*x492)));

	if (t86 != 18446712593746755584LLU) { NG(); } else { ; }
	
}

void f87(void) {
	uint64_t x493 = 0LLU;
	int64_t x494 = INT64_MIN;
	static int32_t x495 = -1;
	int8_t x496 = -1;
	volatile uint64_t t87 = 3086668991847598LLU;

	t87 = (x493&(x494^(x495*x496)));

	if (t87 != 0LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int32_t x497 = 438469064;
	uint16_t x499 = 54U;
	volatile int64_t x500 = 891842LL;

	t88 = (x497&(x498^(x499*x500)));

	if (t88 != 33718472LL) { NG(); } else { ; }
	
}

void f89(void) {
	int16_t x505 = -17;
	uint8_t x506 = UINT8_MAX;
	int16_t x507 = -1;
	volatile int32_t t89 = 1;

	t89 = (x505&(x506^(x507*x508)));

	if (t89 != -375392) { NG(); } else { ; }
	
}

void f90(void) {
	static int32_t x517 = INT32_MIN;
	int8_t x518 = -1;
	uint8_t x519 = 0U;
	uint64_t x520 = 87648LLU;
	volatile uint64_t t90 = 45967393995294LLU;

	t90 = (x517&(x518^(x519*x520)));

	if (t90 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f91(void) {
	int64_t x521 = 213540213LL;
	uint64_t x522 = UINT64_MAX;
	int64_t x523 = 1566229023LL;
	static uint64_t t91 = 6354082LLU;

	t91 = (x521&(x522^(x523*x524)));

	if (t91 != 79171857LLU) { NG(); } else { ; }
	
}

void f92(void) {
	static uint8_t x525 = 58U;
	static uint32_t x526 = 796226023U;
	volatile int64_t x527 = -1LL;
	int32_t x528 = INT32_MAX;
	int64_t t92 = -1LL;

	t92 = (x525&(x526^(x527*x528)));

	if (t92 != 34LL) { NG(); } else { ; }
	
}

void f93(void) {
	static int64_t x529 = -3063351561885386921LL;
	int32_t x530 = INT32_MIN;
	int32_t x531 = -2957;
	int32_t x532 = -1;
	int64_t t93 = -1682363864513234LL;

	t93 = (x529&(x530^(x531*x532)));

	if (t93 != -3063351562349837563LL) { NG(); } else { ; }
	
}

void f94(void) {
	int64_t x541 = -1592452165060LL;
	int32_t x542 = INT32_MIN;
	int8_t x543 = -1;
	static int16_t x544 = 18;
	volatile int64_t t94 = 0LL;

	t94 = (x541&(x542^(x543*x544)));

	if (t94 != 980701740LL) { NG(); } else { ; }
	
}

void f95(void) {
	volatile int64_t x545 = INT64_MIN;
	int8_t x546 = INT8_MIN;
	volatile int8_t x547 = 0;
	int64_t x548 = -1LL;
	int64_t t95 = INT64_MIN;

	t95 = (x545&(x546^(x547*x548)));

	if (t95 != INT64_MIN) { NG(); } else { ; }
	
}

void f96(void) {
	static uint64_t x549 = 36137471685958LLU;
	int16_t x550 = 64;
	volatile int32_t x551 = INT32_MAX;
	volatile uint64_t x552 = UINT64_MAX;
	uint64_t t96 = 546243655LLU;

	t96 = (x549&(x550^(x551*x552)));

	if (t96 != 36135707344960LLU) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x553 = UINT32_MAX;
	static int8_t x554 = INT8_MIN;
	static int8_t x555 = 31;
	uint32_t x556 = 120664U;
	uint32_t t97 = 3235448U;

	t97 = (x553&(x554^(x555*x556)));

	if (t97 != 4291226664U) { NG(); } else { ; }
	
}

void f98(void) {
	uint8_t x561 = 123U;
	int16_t x562 = -1;
	uint64_t x563 = 247115633622LLU;
	static int16_t x564 = -1;
	static volatile uint64_t t98 = 221532639321763518LLU;

	t98 = (x561&(x562^(x563*x564)));

	if (t98 != 81LLU) { NG(); } else { ; }
	
}

void f99(void) {
	static int16_t x566 = -1;
	int16_t x567 = -1;
	uint8_t x568 = 11U;

	t99 = (x565&(x566^(x567*x568)));

	if (t99 != 0LL) { NG(); } else { ; }
	
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

