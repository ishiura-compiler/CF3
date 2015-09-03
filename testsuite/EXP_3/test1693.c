#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

int64_t x8 = INT64_MIN;
uint16_t x17 = 15U;
int8_t x19 = -1;
volatile uint64_t x26 = 430LLU;
uint16_t x43 = 11069U;
int8_t x46 = INT8_MIN;
int32_t x51 = INT32_MAX;
int16_t x58 = INT16_MAX;
uint64_t x62 = 139511591113LLU;
int8_t x68 = INT8_MAX;
volatile uint64_t x73 = UINT64_MAX;
int64_t x74 = -1LL;
uint64_t x75 = UINT64_MAX;
uint8_t x84 = UINT8_MAX;
volatile int32_t t16 = -2;
static uint8_t x100 = UINT8_MAX;
volatile uint64_t t17 = 174866328LLU;
int32_t x101 = 97553275;
uint16_t x117 = UINT16_MAX;
uint64_t x118 = 365075LLU;
volatile uint16_t x121 = UINT16_MAX;
volatile int16_t x122 = INT16_MIN;
uint16_t x124 = 6U;
int8_t x130 = 15;
volatile int32_t t22 = -25841;
uint16_t x139 = 95U;
volatile uint64_t t23 = 3408070LLU;
int16_t x149 = -1;
static uint8_t x152 = 16U;
int8_t x154 = 50;
uint8_t x170 = UINT8_MAX;
static int64_t x175 = INT64_MIN;
static int64_t x193 = -3389803303832686161LL;
int32_t x196 = INT32_MIN;
uint64_t t31 = 371955LLU;
volatile int16_t x211 = INT16_MIN;
uint64_t x214 = UINT64_MAX;
uint64_t x215 = 156565887724172LLU;
static uint16_t x227 = 12U;
int64_t x230 = -42LL;
static uint64_t x235 = 805122LLU;
int64_t x237 = INT64_MIN;
uint64_t t42 = 2377LLU;
static volatile uint8_t x246 = 10U;
int16_t x248 = INT16_MAX;
int32_t t44 = -12634;
int32_t x253 = 4;
uint32_t t46 = 2192U;
uint64_t x260 = 9617107882755368LLU;
uint64_t t47 = 541363LLU;
uint32_t x278 = 122U;
uint64_t x279 = 413530975844LLU;
static int64_t x280 = INT64_MIN;
uint8_t x285 = UINT8_MAX;
uint32_t x286 = 206U;
static volatile int16_t x293 = -1;
int32_t x296 = INT32_MIN;
int16_t x302 = 2;
int64_t t54 = -247170156LL;
int64_t x339 = -52611567899870LL;
volatile int16_t x341 = INT16_MAX;
static uint64_t x342 = 86514805LLU;
uint16_t x349 = 12U;
volatile int32_t x350 = INT32_MIN;
uint8_t x351 = 2U;
uint64_t x365 = UINT64_MAX;
int16_t x366 = -1;
volatile int64_t x376 = INT64_MAX;
uint16_t x378 = 8U;
int64_t x379 = -13383LL;
uint8_t x399 = UINT8_MAX;
static int16_t x424 = 8443;
int32_t x427 = INT32_MIN;
int64_t x463 = INT64_MIN;
int64_t t83 = -7808607LL;
uint64_t x473 = UINT64_MAX;
volatile int32_t x476 = INT32_MIN;
static int32_t x492 = -4037140;
static uint32_t x494 = 2603615U;
int16_t x499 = INT16_MAX;
int8_t x509 = INT8_MIN;
static uint16_t x531 = 15509U;
int64_t x532 = -1LL;
int64_t x538 = 249247469368LL;
int32_t x540 = -1;
int8_t x542 = 16;


void f0(void) {
	int64_t x1 = -459416LL;
	uint64_t x2 = 132LLU;
	int32_t x3 = -1;
	static int64_t x4 = 3LL;
	static volatile uint64_t t0 = 9169375LLU;

	t0 = ((x1+x2)*(x3&x4));

	if (t0 != 18446744073708173764LLU) { NG(); } else { ; }
	
}

void f1(void) {
	int64_t x5 = 5249LL;
	volatile uint16_t x6 = 30371U;
	int16_t x7 = INT16_MAX;
	static int64_t t1 = -130583576LL;

	t1 = ((x5+x6)*(x7&x8));

	if (t1 != 0LL) { NG(); } else { ; }
	
}

void f2(void) {
	int8_t x9 = -1;
	uint8_t x10 = 19U;
	int8_t x11 = INT8_MIN;
	volatile uint32_t x12 = 21U;
	uint32_t t2 = 353U;

	t2 = ((x9+x10)*(x11&x12));

	if (t2 != 0U) { NG(); } else { ; }
	
}

void f3(void) {
	static volatile uint64_t x18 = UINT64_MAX;
	int8_t x20 = INT8_MIN;
	volatile uint64_t t3 = 4962283144665LLU;

	t3 = ((x17+x18)*(x19&x20));

	if (t3 != 18446744073709549824LLU) { NG(); } else { ; }
	
}

void f4(void) {
	uint32_t x25 = UINT32_MAX;
	int64_t x27 = -7423976657707795LL;
	int8_t x28 = 42;
	volatile uint64_t t4 = 220475574504LLU;

	t4 = ((x25+x26)*(x27&x28));

	if (t4 != 171798709000LLU) { NG(); } else { ; }
	
}

void f5(void) {
	int64_t x29 = INT64_MIN;
	int64_t x30 = 268638856875902LL;
	int32_t x31 = -1;
	static int32_t x32 = -1;
	volatile int64_t t5 = 421224531565374LL;

	t5 = ((x29+x30)*(x31&x32));

	if (t5 != 9223103397997899906LL) { NG(); } else { ; }
	
}

void f6(void) {
	volatile int16_t x37 = INT16_MIN;
	int16_t x38 = INT16_MIN;
	uint8_t x39 = 3U;
	int8_t x40 = 0;
	static int32_t t6 = 709;

	t6 = ((x37+x38)*(x39&x40));

	if (t6 != 0) { NG(); } else { ; }
	
}

void f7(void) {
	uint16_t x41 = UINT16_MAX;
	uint32_t x42 = 31213U;
	int8_t x44 = -3;
	uint32_t t7 = 525551357U;

	t7 = ((x41+x42)*(x43&x44));

	if (t7 != 1070903612U) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x45 = INT16_MIN;
	static volatile uint8_t x47 = 67U;
	int16_t x48 = -1;
	volatile int32_t t8 = 15220781;

	t8 = ((x45+x46)*(x47&x48));

	if (t8 != -2204032) { NG(); } else { ; }
	
}

void f9(void) {
	int8_t x49 = INT8_MIN;
	uint32_t x50 = 20416U;
	volatile uint16_t x52 = 7412U;
	volatile uint32_t t9 = 2090950U;

	t9 = ((x49+x50)*(x51&x52));

	if (t9 != 150374656U) { NG(); } else { ; }
	
}

void f10(void) {
	static uint32_t x57 = 17U;
	int64_t x59 = INT64_MIN;
	uint16_t x60 = 19U;
	volatile int64_t t10 = 10239173358679828LL;

	t10 = ((x57+x58)*(x59&x60));

	if (t10 != 0LL) { NG(); } else { ; }
	
}

void f11(void) {
	int64_t x61 = 3658840943816161145LL;
	int64_t x63 = -1LL;
	int32_t x64 = -754;
	uint64_t t11 = 361LLU;

	t11 = ((x61+x62)*(x63&x64));

	if (t11 != 8245434227307539868LLU) { NG(); } else { ; }
	
}

void f12(void) {
	static int64_t x65 = 1937039723257LL;
	uint64_t x66 = 2393890LLU;
	static uint64_t x67 = UINT64_MAX;
	uint64_t t12 = 274261083716031LLU;

	t12 = ((x65+x66)*(x67&x68));

	if (t12 != 246004348877669LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int8_t x76 = INT8_MIN;
	uint64_t t13 = 65102599446191151LLU;

	t13 = ((x73+x74)*(x75&x76));

	if (t13 != 256LLU) { NG(); } else { ; }
	
}

void f14(void) {
	volatile uint16_t x77 = UINT16_MAX;
	int32_t x78 = 29824;
	static uint16_t x79 = UINT16_MAX;
	volatile int32_t x80 = INT32_MIN;
	int32_t t14 = -2;

	t14 = ((x77+x78)*(x79&x80));

	if (t14 != 0) { NG(); } else { ; }
	
}

void f15(void) {
	int64_t x81 = 50291207LL;
	uint32_t x82 = 39969U;
	static int32_t x83 = INT32_MIN;
	static volatile int64_t t15 = -6902010LL;

	t15 = ((x81+x82)*(x83&x84));

	if (t15 != 0LL) { NG(); } else { ; }
	
}

void f16(void) {
	uint8_t x89 = 0U;
	int32_t x90 = 7279;
	uint16_t x91 = UINT16_MAX;
	uint8_t x92 = UINT8_MAX;

	t16 = ((x89+x90)*(x91&x92));

	if (t16 != 1856145) { NG(); } else { ; }
	
}

void f17(void) {
	static uint32_t x97 = 5U;
	static uint16_t x98 = UINT16_MAX;
	uint64_t x99 = UINT64_MAX;

	t17 = ((x97+x98)*(x99&x100));

	if (t17 != 16712700LLU) { NG(); } else { ; }
	
}

void f18(void) {
	volatile int32_t x102 = INT32_MIN;
	static volatile int8_t x103 = 14;
	int8_t x104 = INT8_MIN;
	volatile int32_t t18 = 2791869;

	t18 = ((x101+x102)*(x103&x104));

	if (t18 != 0) { NG(); } else { ; }
	
}

void f19(void) {
	static int64_t x119 = INT64_MIN;
	uint64_t x120 = 6321648LLU;
	uint64_t t19 = 1970265774760062LLU;

	t19 = ((x117+x118)*(x119&x120));

	if (t19 != 0LLU) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x123 = UINT32_MAX;
	uint32_t t20 = 39188U;

	t20 = ((x121+x122)*(x123&x124));

	if (t20 != 196602U) { NG(); } else { ; }
	
}

void f21(void) {
	volatile uint8_t x125 = UINT8_MAX;
	static int8_t x126 = INT8_MIN;
	int8_t x127 = -1;
	int32_t x128 = -1;
	int32_t t21 = -26;

	t21 = ((x125+x126)*(x127&x128));

	if (t21 != -127) { NG(); } else { ; }
	
}

void f22(void) {
	int8_t x129 = 1;
	uint8_t x131 = 5U;
	uint8_t x132 = 11U;

	t22 = ((x129+x130)*(x131&x132));

	if (t22 != 16) { NG(); } else { ; }
	
}

void f23(void) {
	int16_t x137 = -1;
	uint64_t x138 = UINT64_MAX;
	int8_t x140 = INT8_MIN;

	t23 = ((x137+x138)*(x139&x140));

	if (t23 != 0LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int16_t x141 = INT16_MAX;
	int32_t x142 = INT32_MIN;
	int8_t x143 = 3;
	volatile int32_t x144 = INT32_MIN;
	volatile int32_t t24 = 1562;

	t24 = ((x141+x142)*(x143&x144));

	if (t24 != 0) { NG(); } else { ; }
	
}

void f25(void) {
	uint16_t x150 = 10525U;
	int32_t x151 = -2950001;
	int32_t t25 = 250520760;

	t25 = ((x149+x150)*(x151&x152));

	if (t25 != 0) { NG(); } else { ; }
	
}

void f26(void) {
	volatile uint32_t x153 = 454639674U;
	volatile int32_t x155 = INT32_MIN;
	int8_t x156 = INT8_MIN;
	uint32_t t26 = 169788944U;

	t26 = ((x153+x154)*(x155&x156));

	if (t26 != 0U) { NG(); } else { ; }
	
}

void f27(void) {
	int64_t x157 = -359LL;
	uint16_t x158 = 10U;
	static int16_t x159 = 510;
	static volatile int8_t x160 = 4;
	int64_t t27 = 9LL;

	t27 = ((x157+x158)*(x159&x160));

	if (t27 != -1396LL) { NG(); } else { ; }
	
}

void f28(void) {
	uint32_t x169 = UINT32_MAX;
	int32_t x171 = -8159;
	uint32_t x172 = 67104181U;
	volatile uint32_t t28 = 405733470U;

	t28 = ((x169+x170)*(x171&x172));

	if (t28 != 4158677182U) { NG(); } else { ; }
	
}

void f29(void) {
	uint64_t x173 = 3467810876LLU;
	int32_t x174 = INT32_MIN;
	int16_t x176 = -1;
	uint64_t t29 = 7746414549LLU;

	t29 = ((x173+x174)*(x175&x176));

	if (t29 != 0LLU) { NG(); } else { ; }
	
}

void f30(void) {
	int8_t x189 = INT8_MIN;
	int64_t x190 = 821691931415449LL;
	static uint16_t x191 = UINT16_MAX;
	uint32_t x192 = 59U;
	int64_t t30 = -58878843LL;

	t30 = ((x189+x190)*(x191&x192));

	if (t30 != 48479823953503939LL) { NG(); } else { ; }
	
}

void f31(void) {
	uint64_t x194 = UINT64_MAX;
	int64_t x195 = -31331919311LL;

	t31 = ((x193+x194)*(x195&x196));

	if (t31 != 3418842788509253632LLU) { NG(); } else { ; }
	
}

void f32(void) {
	uint64_t x197 = UINT64_MAX;
	int8_t x198 = -1;
	int64_t x199 = 2058611607647LL;
	volatile int32_t x200 = INT32_MAX;
	volatile uint64_t t32 = 1335723739840LLU;

	t32 = ((x197+x198)*(x199&x200));

	if (t32 != 18446744071065005890LLU) { NG(); } else { ; }
	
}

void f33(void) {
	uint8_t x201 = 0U;
	uint64_t x202 = 605LLU;
	static uint64_t x203 = 2694838LLU;
	uint64_t x204 = 185302LLU;
	static uint64_t t33 = 204LLU;

	t33 = ((x201+x202)*(x203&x204));

	if (t33 != 2878590LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint64_t x205 = UINT64_MAX;
	int8_t x206 = INT8_MIN;
	uint16_t x207 = UINT16_MAX;
	uint8_t x208 = 0U;
	uint64_t t34 = 142294679205LLU;

	t34 = ((x205+x206)*(x207&x208));

	if (t34 != 0LLU) { NG(); } else { ; }
	
}

void f35(void) {
	int8_t x209 = INT8_MAX;
	static uint64_t x210 = UINT64_MAX;
	static int64_t x212 = 31LL;
	static uint64_t t35 = 6832LLU;

	t35 = ((x209+x210)*(x211&x212));

	if (t35 != 0LLU) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint8_t x213 = 38U;
	int64_t x216 = 1210212LL;
	volatile uint64_t t36 = 48479240805LLU;

	t36 = ((x213+x214)*(x215&x216));

	if (t36 != 43969172LLU) { NG(); } else { ; }
	
}

void f37(void) {
	uint8_t x217 = 5U;
	int8_t x218 = -36;
	volatile int16_t x219 = INT16_MIN;
	int16_t x220 = -1;
	volatile int32_t t37 = -1164;

	t37 = ((x217+x218)*(x219&x220));

	if (t37 != 1015808) { NG(); } else { ; }
	
}

void f38(void) {
	uint32_t x221 = 0U;
	static int32_t x222 = -1;
	uint64_t x223 = UINT64_MAX;
	int16_t x224 = 1611;
	volatile uint64_t t38 = 177330310925886727LLU;

	t38 = ((x221+x222)*(x223&x224));

	if (t38 != 6919192312245LLU) { NG(); } else { ; }
	
}

void f39(void) {
	uint64_t x225 = 21094092863LLU;
	static int8_t x226 = INT8_MAX;
	int32_t x228 = INT32_MAX;
	uint64_t t39 = 30768143LLU;

	t39 = ((x225+x226)*(x227&x228));

	if (t39 != 253129115880LLU) { NG(); } else { ; }
	
}

void f40(void) {
	uint32_t x229 = UINT32_MAX;
	volatile int8_t x231 = 7;
	int8_t x232 = INT8_MIN;
	static volatile int64_t t40 = 135359975336836299LL;

	t40 = ((x229+x230)*(x231&x232));

	if (t40 != 0LL) { NG(); } else { ; }
	
}

void f41(void) {
	static int32_t x233 = 60;
	static int64_t x234 = -392956615353LL;
	static uint8_t x236 = UINT8_MAX;
	static uint64_t t41 = 19844130829LLU;

	t41 = ((x233+x234)*(x235&x236));

	if (t41 != 18446743287796321030LLU) { NG(); } else { ; }
	
}

void f42(void) {
	static uint32_t x238 = 5U;
	static uint64_t x239 = 71977LLU;
	int32_t x240 = -7506;

	t42 = ((x237+x238)*(x239&x240));

	if (t42 != 327880LLU) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x241 = INT64_MIN;
	volatile uint64_t x242 = 4172981353619936LLU;
	static int64_t x243 = -1LL;
	uint32_t x244 = 76964U;
	static volatile uint64_t t43 = 473391808LLU;

	t43 = ((x241+x242)*(x243&x244));

	if (t43 != 7574687646942376832LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int16_t x245 = -1;
	int16_t x247 = INT16_MIN;

	t44 = ((x245+x246)*(x247&x248));

	if (t44 != 0) { NG(); } else { ; }
	
}

void f45(void) {
	int8_t x249 = 4;
	int16_t x250 = INT16_MIN;
	uint16_t x251 = 1518U;
	int64_t x252 = 256077855109LL;
	volatile int64_t t45 = 6860417837LL;

	t45 = ((x249+x250)*(x251&x252));

	if (t45 != -12712432LL) { NG(); } else { ; }
	
}

void f46(void) {
	int8_t x254 = INT8_MAX;
	uint32_t x255 = 435212299U;
	uint32_t x256 = UINT32_MAX;

	t46 = ((x253+x254)*(x255&x256));

	if (t46 != 1178236321U) { NG(); } else { ; }
	
}

void f47(void) {
	int8_t x257 = -12;
	int64_t x258 = 0LL;
	static int16_t x259 = INT16_MIN;

	t47 = ((x257+x258)*(x259&x260));

	if (t47 != 18331338779116699648LLU) { NG(); } else { ; }
	
}

void f48(void) {
	uint64_t x265 = 58340601252168LLU;
	int8_t x266 = INT8_MAX;
	uint64_t x267 = 17421774278528LLU;
	int8_t x268 = 27;
	volatile uint64_t t48 = 1829994225434816398LLU;

	t48 = ((x265+x266)*(x267&x268));

	if (t48 != 0LLU) { NG(); } else { ; }
	
}

void f49(void) {
	volatile int64_t x277 = INT64_MIN;
	uint64_t t49 = 180LLU;

	t49 = ((x277+x278)*(x279&x280));

	if (t49 != 0LLU) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x287 = INT32_MAX;
	int64_t x288 = -732562LL;
	int64_t t50 = 181933LL;

	t50 = ((x285+x286)*(x287&x288));

	if (t50 != 989652250646LL) { NG(); } else { ; }
	
}

void f51(void) {
	uint64_t x289 = 0LLU;
	static int64_t x290 = INT64_MAX;
	int32_t x291 = 190114207;
	int32_t x292 = INT32_MIN;
	volatile uint64_t t51 = 15100339025751373LLU;

	t51 = ((x289+x290)*(x291&x292));

	if (t51 != 0LLU) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int64_t x294 = -1LL;
	int8_t x295 = INT8_MIN;
	static int64_t t52 = 261LL;

	t52 = ((x293+x294)*(x295&x296));

	if (t52 != 4294967296LL) { NG(); } else { ; }
	
}

void f53(void) {
	uint8_t x297 = UINT8_MAX;
	uint8_t x298 = 5U;
	int32_t x299 = -41623;
	uint32_t x300 = UINT32_MAX;
	static uint32_t t53 = 1U;

	t53 = ((x297+x298)*(x299&x300));

	if (t53 != 4284145316U) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x301 = INT16_MAX;
	int16_t x303 = INT16_MAX;
	int64_t x304 = INT64_MIN;

	t54 = ((x301+x302)*(x303&x304));

	if (t54 != 0LL) { NG(); } else { ; }
	
}

void f55(void) {
	int8_t x309 = INT8_MAX;
	static int8_t x310 = INT8_MAX;
	static int16_t x311 = -1;
	volatile uint16_t x312 = 3U;
	static volatile int32_t t55 = -109424;

	t55 = ((x309+x310)*(x311&x312));

	if (t55 != 762) { NG(); } else { ; }
	
}

void f56(void) {
	int8_t x313 = -1;
	volatile int64_t x314 = 905146252953654394LL;
	volatile int64_t x315 = INT64_MIN;
	static uint8_t x316 = 0U;
	static volatile int64_t t56 = 239919514841438LL;

	t56 = ((x313+x314)*(x315&x316));

	if (t56 != 0LL) { NG(); } else { ; }
	
}

void f57(void) {
	int16_t x317 = -1;
	int16_t x318 = -1;
	static uint16_t x319 = 61U;
	int8_t x320 = -1;
	static volatile int32_t t57 = 3782;

	t57 = ((x317+x318)*(x319&x320));

	if (t57 != -122) { NG(); } else { ; }
	
}

void f58(void) {
	volatile uint8_t x329 = UINT8_MAX;
	int64_t x330 = -1LL;
	static volatile int64_t x331 = INT64_MIN;
	static uint64_t x332 = 21LLU;
	volatile uint64_t t58 = 15826LLU;

	t58 = ((x329+x330)*(x331&x332));

	if (t58 != 0LLU) { NG(); } else { ; }
	
}

void f59(void) {
	int8_t x333 = INT8_MIN;
	uint16_t x334 = 3U;
	uint64_t x335 = 8004965LLU;
	uint16_t x336 = 3U;
	volatile uint64_t t59 = 306727135LLU;

	t59 = ((x333+x334)*(x335&x336));

	if (t59 != 18446744073709551491LLU) { NG(); } else { ; }
	
}

void f60(void) {
	int16_t x337 = INT16_MAX;
	uint16_t x338 = 32226U;
	int16_t x340 = INT16_MAX;
	volatile int64_t t60 = -494973LL;

	t60 = ((x337+x338)*(x339&x340));

	if (t60 != 717652706LL) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x343 = INT16_MIN;
	uint32_t x344 = UINT32_MAX;
	uint64_t t61 = 64522747841LLU;

	t61 = ((x341+x342)*(x343&x344));

	if (t61 != 371716155297366016LLU) { NG(); } else { ; }
	
}

void f62(void) {
	uint64_t x345 = 10480063LLU;
	int8_t x346 = -1;
	int32_t x347 = 64547;
	int8_t x348 = 5;
	volatile uint64_t t62 = 4LLU;

	t62 = ((x345+x346)*(x347&x348));

	if (t62 != 10480062LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x352 = 1;
	int32_t t63 = 21;

	t63 = ((x349+x350)*(x351&x352));

	if (t63 != 0) { NG(); } else { ; }
	
}

void f64(void) {
	uint32_t x353 = 1890725U;
	uint64_t x354 = UINT64_MAX;
	int8_t x355 = 0;
	int64_t x356 = 110738LL;
	static uint64_t t64 = 27535279532022201LLU;

	t64 = ((x353+x354)*(x355&x356));

	if (t64 != 0LLU) { NG(); } else { ; }
	
}

void f65(void) {
	uint32_t x357 = UINT32_MAX;
	int32_t x358 = -66;
	int8_t x359 = INT8_MIN;
	int32_t x360 = INT32_MIN;
	uint32_t t65 = 0U;

	t65 = ((x357+x358)*(x359&x360));

	if (t65 != 2147483648U) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x361 = 60923U;
	int32_t x362 = -1;
	volatile int8_t x363 = INT8_MAX;
	uint32_t x364 = UINT32_MAX;
	volatile uint32_t t66 = 3672U;

	t66 = ((x361+x362)*(x363&x364));

	if (t66 != 7737094U) { NG(); } else { ; }
	
}

void f67(void) {
	static int16_t x367 = INT16_MIN;
	int32_t x368 = -192;
	uint64_t t67 = 1224483LLU;

	t67 = ((x365+x366)*(x367&x368));

	if (t67 != 65536LLU) { NG(); } else { ; }
	
}

void f68(void) {
	static int8_t x369 = INT8_MIN;
	volatile uint8_t x370 = UINT8_MAX;
	volatile uint64_t x371 = 37527296083LLU;
	int32_t x372 = -1;
	uint64_t t68 = 6LLU;

	t68 = ((x369+x370)*(x371&x372));

	if (t68 != 4765966602541LLU) { NG(); } else { ; }
	
}

void f69(void) {
	volatile uint8_t x373 = 1U;
	volatile int32_t x374 = 1;
	static uint32_t x375 = 14086174U;
	static int64_t t69 = 5LL;

	t69 = ((x373+x374)*(x375&x376));

	if (t69 != 28172348LL) { NG(); } else { ; }
	
}

void f70(void) {
	volatile uint16_t x377 = UINT16_MAX;
	int16_t x380 = 16;
	int64_t t70 = -948909291140LL;

	t70 = ((x377+x378)*(x379&x380));

	if (t70 != 1048688LL) { NG(); } else { ; }
	
}

void f71(void) {
	static int16_t x381 = INT16_MAX;
	uint8_t x382 = UINT8_MAX;
	uint64_t x383 = 9683389835LLU;
	volatile int64_t x384 = -1LL;
	volatile uint64_t t71 = 1496LLU;

	t71 = ((x381+x382)*(x383&x384));

	if (t71 != 319764899131370LLU) { NG(); } else { ; }
	
}

void f72(void) {
	volatile uint8_t x385 = 0U;
	static int64_t x386 = INT64_MIN;
	int64_t x387 = INT64_MAX;
	int64_t x388 = INT64_MIN;
	volatile int64_t t72 = 139392153947923862LL;

	t72 = ((x385+x386)*(x387&x388));

	if (t72 != 0LL) { NG(); } else { ; }
	
}

void f73(void) {
	int16_t x397 = INT16_MIN;
	int8_t x398 = INT8_MIN;
	uint64_t x400 = 4548405919549LLU;
	static uint64_t t73 = 54939341752865176LLU;

	t73 = ((x397+x398)*(x399&x400));

	if (t73 != 18446744073707544960LLU) { NG(); } else { ; }
	
}

void f74(void) {
	volatile int8_t x405 = 0;
	uint16_t x406 = UINT16_MAX;
	volatile int8_t x407 = INT8_MIN;
	int16_t x408 = INT16_MAX;
	volatile int32_t t74 = -111;

	t74 = ((x405+x406)*(x407&x408));

	if (t74 != 2139062400) { NG(); } else { ; }
	
}

void f75(void) {
	int64_t x409 = 1LL;
	int16_t x410 = 233;
	volatile uint8_t x411 = 3U;
	volatile int64_t x412 = -1267579202LL;
	int64_t t75 = 86412LL;

	t75 = ((x409+x410)*(x411&x412));

	if (t75 != 468LL) { NG(); } else { ; }
	
}

void f76(void) {
	volatile uint64_t x413 = UINT64_MAX;
	uint64_t x414 = UINT64_MAX;
	volatile int16_t x415 = 6478;
	int32_t x416 = INT32_MIN;
	uint64_t t76 = 14296265LLU;

	t76 = ((x413+x414)*(x415&x416));

	if (t76 != 0LLU) { NG(); } else { ; }
	
}

void f77(void) {
	volatile int16_t x417 = INT16_MIN;
	uint32_t x418 = UINT32_MAX;
	static volatile int16_t x419 = 17;
	int8_t x420 = -1;
	static uint32_t t77 = 1584U;

	t77 = ((x417+x418)*(x419&x420));

	if (t77 != 4294410223U) { NG(); } else { ; }
	
}

void f78(void) {
	uint8_t x421 = 100U;
	int16_t x422 = INT16_MIN;
	int8_t x423 = INT8_MAX;
	volatile int32_t t78 = 267639633;

	t78 = ((x421+x422)*(x423&x424));

	if (t78 != -4018164) { NG(); } else { ; }
	
}

void f79(void) {
	uint16_t x425 = 206U;
	int16_t x426 = INT16_MIN;
	int8_t x428 = INT8_MAX;
	volatile int32_t t79 = -3408;

	t79 = ((x425+x426)*(x427&x428));

	if (t79 != 0) { NG(); } else { ; }
	
}

void f80(void) {
	int8_t x429 = -1;
	int64_t x430 = -420754416751006LL;
	uint16_t x431 = 15202U;
	int64_t x432 = INT64_MIN;
	volatile int64_t t80 = 12LL;

	t80 = ((x429+x430)*(x431&x432));

	if (t80 != 0LL) { NG(); } else { ; }
	
}

void f81(void) {
	int32_t x433 = 26867;
	static int64_t x434 = 62573784528309667LL;
	int8_t x435 = INT8_MIN;
	int8_t x436 = -1;
	volatile int64_t t81 = 1583109430606636769LL;

	t81 = ((x433+x434)*(x435&x436));

	if (t81 != -8009444419627076352LL) { NG(); } else { ; }
	
}

void f82(void) {
	uint32_t x449 = 373U;
	int16_t x450 = 1;
	uint32_t x451 = UINT32_MAX;
	volatile int8_t x452 = -3;
	volatile uint32_t t82 = 2711U;

	t82 = ((x449+x450)*(x451&x452));

	if (t82 != 4294966174U) { NG(); } else { ; }
	
}

void f83(void) {
	static int64_t x461 = INT64_MIN;
	uint16_t x462 = UINT16_MAX;
	int32_t x464 = INT32_MAX;

	t83 = ((x461+x462)*(x463&x464));

	if (t83 != 0LL) { NG(); } else { ; }
	
}

void f84(void) {
	static volatile int32_t x465 = -1;
	int8_t x466 = INT8_MIN;
	int8_t x467 = -58;
	int8_t x468 = -1;
	int32_t t84 = 1277403;

	t84 = ((x465+x466)*(x467&x468));

	if (t84 != 7482) { NG(); } else { ; }
	
}

void f85(void) {
	int16_t x469 = INT16_MAX;
	static uint16_t x470 = UINT16_MAX;
	static int16_t x471 = INT16_MIN;
	int64_t x472 = 20855300LL;
	int64_t t85 = -31692889563476LL;

	t85 = ((x469+x470)*(x471&x472));

	if (t85 != 2048657719296LL) { NG(); } else { ; }
	
}

void f86(void) {
	volatile uint16_t x474 = 14986U;
	uint32_t x475 = 955902077U;
	volatile uint64_t t86 = 967LLU;

	t86 = ((x473+x474)*(x475&x476));

	if (t86 != 0LLU) { NG(); } else { ; }
	
}

void f87(void) {
	int32_t x485 = INT32_MIN;
	volatile int8_t x486 = INT8_MAX;
	int8_t x487 = INT8_MIN;
	volatile uint64_t x488 = 28875180828840LLU;
	uint64_t t87 = 75666888282LLU;

	t87 = ((x485+x486)*(x487&x488));

	if (t87 != 8978580068390328192LLU) { NG(); } else { ; }
	
}

void f88(void) {
	int16_t x489 = 1113;
	int8_t x490 = -1;
	volatile uint16_t x491 = 1241U;
	volatile int32_t t88 = 1;

	t88 = ((x489+x490)*(x491&x492));

	if (t88 != 1361088) { NG(); } else { ; }
	
}

void f89(void) {
	uint32_t x493 = 6U;
	static int16_t x495 = INT16_MAX;
	int32_t x496 = INT32_MIN;
	volatile uint32_t t89 = 261710686U;

	t89 = ((x493+x494)*(x495&x496));

	if (t89 != 0U) { NG(); } else { ; }
	
}

void f90(void) {
	int32_t x497 = 6;
	static volatile int32_t x498 = INT32_MIN;
	uint32_t x500 = UINT32_MAX;
	volatile uint32_t t90 = 339024151U;

	t90 = ((x497+x498)*(x499&x500));

	if (t90 != 2147680250U) { NG(); } else { ; }
	
}

void f91(void) {
	int8_t x501 = -1;
	static uint16_t x502 = 1970U;
	int8_t x503 = -1;
	int64_t x504 = -1LL;
	int64_t t91 = 8036LL;

	t91 = ((x501+x502)*(x503&x504));

	if (t91 != -1969LL) { NG(); } else { ; }
	
}

void f92(void) {
	volatile int32_t x510 = -1;
	uint16_t x511 = UINT16_MAX;
	int32_t x512 = INT32_MIN;
	volatile int32_t t92 = -7808957;

	t92 = ((x509+x510)*(x511&x512));

	if (t92 != 0) { NG(); } else { ; }
	
}

void f93(void) {
	static volatile int64_t x517 = -1LL;
	int8_t x518 = INT8_MIN;
	static uint16_t x519 = 191U;
	uint8_t x520 = 2U;
	volatile int64_t t93 = -2109623495249LL;

	t93 = ((x517+x518)*(x519&x520));

	if (t93 != -258LL) { NG(); } else { ; }
	
}

void f94(void) {
	static volatile int32_t x521 = -1;
	int64_t x522 = 4333822004744517664LL;
	uint16_t x523 = 12U;
	volatile int64_t x524 = 6186653074345233LL;
	int64_t t94 = 1332246972997LL;

	t94 = ((x521+x522)*(x523&x524));

	if (t94 != 0LL) { NG(); } else { ; }
	
}

void f95(void) {
	static uint16_t x525 = 1U;
	uint64_t x526 = UINT64_MAX;
	uint32_t x527 = 15552U;
	int8_t x528 = INT8_MIN;
	volatile uint64_t t95 = 3905978083790919180LLU;

	t95 = ((x525+x526)*(x527&x528));

	if (t95 != 0LLU) { NG(); } else { ; }
	
}

void f96(void) {
	volatile int32_t x529 = -68;
	uint8_t x530 = UINT8_MAX;
	int64_t t96 = -1LL;

	t96 = ((x529+x530)*(x531&x532));

	if (t96 != 2900183LL) { NG(); } else { ; }
	
}

void f97(void) {
	uint32_t x537 = 58046U;
	uint64_t x539 = 1860411122354LLU;
	uint64_t t97 = 474930LLU;

	t97 = ((x537+x538)*(x539&x540));

	if (t97 != 7066439402124241164LLU) { NG(); } else { ; }
	
}

void f98(void) {
	volatile uint16_t x541 = UINT16_MAX;
	int16_t x543 = 0;
	volatile int8_t x544 = INT8_MIN;
	volatile int32_t t98 = -248222610;

	t98 = ((x541+x542)*(x543&x544));

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	static int32_t x545 = -1;
	static uint32_t x546 = 5648237U;
	volatile uint32_t x547 = UINT32_MAX;
	int8_t x548 = INT8_MIN;
	static uint32_t t99 = 94035U;

	t99 = ((x545+x546)*(x547&x548));

	if (t99 != 3571993088U) { NG(); } else { ; }
	
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

