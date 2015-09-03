#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include"test1.h"

volatile uint16_t x2 = UINT16_MAX;
uint16_t x4 = 25U;
int8_t x5 = INT8_MAX;
int8_t x6 = INT8_MIN;
uint32_t x8 = 35409U;
uint32_t t1 = 9U;
int16_t x14 = INT16_MIN;
volatile int8_t x15 = INT8_MIN;
uint64_t x18 = UINT64_MAX;
static int8_t x33 = -1;
int8_t x34 = 3;
int8_t x42 = INT8_MIN;
int16_t x44 = INT16_MIN;
int16_t x53 = 1;
static int16_t x65 = -1720;
uint32_t x67 = UINT32_MAX;
uint16_t x68 = 483U;
uint32_t t11 = 1U;
int16_t x79 = -1515;
volatile uint32_t x86 = 1073217906U;
uint64_t x106 = 6894138433LLU;
int64_t x107 = -1LL;
uint32_t x108 = 19U;
static int32_t x113 = INT32_MIN;
volatile int32_t x123 = 5;
uint64_t x129 = 29362183425LLU;
int8_t x132 = 7;
int8_t x140 = -1;
uint64_t x175 = 7054LLU;
volatile int32_t t28 = 11698197;
int32_t x182 = -168;
uint64_t x190 = 197505905340LLU;
uint8_t x199 = 0U;
uint16_t x200 = 14U;
volatile int8_t x204 = INT8_MIN;
volatile int32_t x206 = -1449521;
static volatile uint32_t t37 = 115U;
uint16_t x228 = UINT16_MAX;
int16_t x229 = -1;
int16_t x238 = 38;
uint16_t x239 = UINT16_MAX;
int16_t x247 = INT16_MAX;
int8_t x253 = 9;
volatile int16_t x266 = INT16_MAX;
static int16_t x268 = -1;
volatile uint64_t x291 = 15LLU;
int64_t x297 = -1LL;
volatile int32_t x300 = INT32_MIN;
volatile int64_t t54 = -1069LL;
int64_t x305 = INT64_MIN;
static int16_t x311 = 6;
volatile int16_t x314 = -1;
static volatile int32_t t58 = 0;
uint16_t x320 = 0U;
volatile int8_t x322 = -1;
int32_t x327 = INT32_MIN;
static int8_t x328 = -1;
int16_t x333 = -1;
int64_t x345 = INT64_MAX;
static volatile int8_t x346 = INT8_MAX;
uint64_t x353 = UINT64_MAX;
static uint8_t x357 = UINT8_MAX;
int8_t x367 = INT8_MAX;
uint8_t x371 = 0U;
volatile int16_t x378 = INT16_MIN;
static volatile uint64_t x380 = 14911475797213677LLU;
volatile int32_t x386 = INT32_MIN;
uint32_t x388 = 421U;
volatile uint8_t x393 = UINT8_MAX;
int16_t x395 = 1;
int16_t x402 = INT16_MIN;
int8_t x404 = -1;
uint32_t t78 = 3563339U;
uint64_t x415 = 15590LLU;
volatile int8_t x420 = INT8_MIN;
volatile int32_t t81 = 736857;
int32_t x428 = INT32_MIN;
int32_t t82 = INT32_MIN;
static int8_t x431 = 15;
volatile int32_t x432 = -1;
int32_t x444 = INT32_MIN;
int8_t x445 = -1;
static uint8_t x446 = 1U;
uint16_t x448 = 32395U;
static volatile int64_t x449 = 122565588298601LL;
static uint64_t x450 = 11445835151LLU;
uint8_t x453 = UINT8_MAX;
uint64_t x454 = 2079956695LLU;
static uint64_t t88 = 27691574683889LLU;
uint16_t x470 = UINT16_MAX;
uint32_t x472 = 16U;
volatile int64_t t91 = -3680LL;
int8_t x477 = INT8_MAX;
int16_t x479 = -1;
static int16_t x481 = -13848;
int16_t x486 = INT16_MIN;
static uint64_t x489 = UINT64_MAX;
volatile uint64_t x490 = 22784078955474LLU;
uint16_t x495 = UINT16_MAX;
volatile int32_t t96 = -52;
static int8_t x497 = INT8_MIN;
int8_t x498 = INT8_MAX;
int16_t x505 = INT16_MIN;


void f0(void) {
	static uint32_t x1 = 24358U;
	volatile int32_t x3 = -1;
	volatile uint32_t t0 = 735790094U;

	t0 = ((x1|(x2*x3))&x4);

	if (t0 != 1U) { NG(); } else { ; }
	
}

void f1(void) {
	uint8_t x7 = UINT8_MAX;

	t1 = ((x5|(x6*x7))&x8);

	if (t1 != 32849U) { NG(); } else { ; }
	
}

void f2(void) {
	volatile uint64_t x9 = 536856LLU;
	uint16_t x10 = UINT16_MAX;
	int8_t x11 = 3;
	uint32_t x12 = UINT32_MAX;
	static volatile uint64_t t2 = 2031517978166679LLU;

	t2 = ((x9|(x10*x11))&x12);

	if (t2 != 720893LLU) { NG(); } else { ; }
	
}

void f3(void) {
	static uint16_t x13 = UINT16_MAX;
	volatile int64_t x16 = -41490LL;
	int64_t t3 = 2464LL;

	t3 = ((x13|(x14*x15))&x16);

	if (t3 != 4218350LL) { NG(); } else { ; }
	
}

void f4(void) {
	static volatile uint8_t x17 = 89U;
	static uint64_t x19 = 1712368821982222LLU;
	static int16_t x20 = INT16_MIN;
	volatile uint64_t t4 = 16LLU;

	t4 = ((x17|(x18*x19))&x20);

	if (t4 != 18445031704887558144LLU) { NG(); } else { ; }
	
}

void f5(void) {
	static uint64_t x21 = 51554LLU;
	volatile int8_t x22 = INT8_MAX;
	int32_t x23 = -1;
	volatile int32_t x24 = INT32_MIN;
	static uint64_t t5 = 65430515056300LLU;

	t5 = ((x21|(x22*x23))&x24);

	if (t5 != 18446744071562067968LLU) { NG(); } else { ; }
	
}

void f6(void) {
	int8_t x35 = INT8_MIN;
	int16_t x36 = -16361;
	int32_t t6 = -62;

	t6 = ((x33|(x34*x35))&x36);

	if (t6 != -16361) { NG(); } else { ; }
	
}

void f7(void) {
	volatile int64_t x37 = -1LL;
	uint16_t x38 = UINT16_MAX;
	static uint32_t x39 = 547581U;
	int64_t x40 = INT64_MIN;
	int64_t t7 = INT64_MIN;

	t7 = ((x37|(x38*x39))&x40);

	if (t7 != INT64_MIN) { NG(); } else { ; }
	
}

void f8(void) {
	int16_t x41 = INT16_MIN;
	static int32_t x43 = -1;
	volatile int32_t t8 = 6696558;

	t8 = ((x41|(x42*x43))&x44);

	if (t8 != -32768) { NG(); } else { ; }
	
}

void f9(void) {
	static uint8_t x54 = 34U;
	volatile int8_t x55 = 28;
	volatile int8_t x56 = INT8_MAX;
	int32_t t9 = 32;

	t9 = ((x53|(x54*x55))&x56);

	if (t9 != 57) { NG(); } else { ; }
	
}

void f10(void) {
	int64_t x61 = INT64_MAX;
	int16_t x62 = 1;
	volatile int32_t x63 = -1;
	int8_t x64 = -7;
	volatile int64_t t10 = 3994805482258LL;

	t10 = ((x61|(x62*x63))&x64);

	if (t10 != -7LL) { NG(); } else { ; }
	
}

void f11(void) {
	static int16_t x66 = -1;

	t11 = ((x65|(x66*x67))&x68);

	if (t11 != 321U) { NG(); } else { ; }
	
}

void f12(void) {
	static volatile uint64_t x73 = UINT64_MAX;
	int64_t x74 = 10851501LL;
	int32_t x75 = INT32_MIN;
	int64_t x76 = INT64_MAX;
	volatile uint64_t t12 = 8333100632537539LLU;

	t12 = ((x73|(x74*x75))&x76);

	if (t12 != 9223372036854775807LLU) { NG(); } else { ; }
	
}

void f13(void) {
	int64_t x77 = -892662890015166LL;
	int16_t x78 = INT16_MIN;
	int16_t x80 = -164;
	int64_t t13 = -5935458674826455LL;

	t13 = ((x77|(x78*x79))&x80);

	if (t13 != -892662848825792LL) { NG(); } else { ; }
	
}

void f14(void) {
	int64_t x85 = INT64_MAX;
	int8_t x87 = INT8_MIN;
	int8_t x88 = INT8_MIN;
	int64_t t14 = 18087594197LL;

	t14 = ((x85|(x86*x87))&x88);

	if (t14 != 9223372036854775680LL) { NG(); } else { ; }
	
}

void f15(void) {
	int16_t x89 = -1;
	volatile uint32_t x90 = 5U;
	uint64_t x91 = 6526099979706LLU;
	static int16_t x92 = -1;
	volatile uint64_t t15 = UINT64_MAX;

	t15 = ((x89|(x90*x91))&x92);

	if (t15 != UINT64_MAX) { NG(); } else { ; }
	
}

void f16(void) {
	static volatile int8_t x105 = INT8_MIN;
	uint64_t t16 = 996939495854219LLU;

	t16 = ((x105|(x106*x107))&x108);

	if (t16 != 19LLU) { NG(); } else { ; }
	
}

void f17(void) {
	int64_t x114 = 18087989255LL;
	uint8_t x115 = UINT8_MAX;
	static int64_t x116 = INT64_MIN;
	int64_t t17 = INT64_MIN;

	t17 = ((x113|(x114*x115))&x116);

	if (t17 != INT64_MIN) { NG(); } else { ; }
	
}

void f18(void) {
	int64_t x121 = INT64_MIN;
	static int64_t x122 = -1LL;
	uint8_t x124 = 6U;
	volatile int64_t t18 = 64101829778633502LL;

	t18 = ((x121|(x122*x123))&x124);

	if (t18 != 2LL) { NG(); } else { ; }
	
}

void f19(void) {
	int8_t x125 = INT8_MAX;
	volatile int32_t x126 = -1;
	int16_t x127 = -887;
	int64_t x128 = INT64_MAX;
	int64_t t19 = -22560434596LL;

	t19 = ((x125|(x126*x127))&x128);

	if (t19 != 895LL) { NG(); } else { ; }
	
}

void f20(void) {
	uint32_t x130 = UINT32_MAX;
	int16_t x131 = 2;
	volatile uint64_t t20 = 320306LLU;

	t20 = ((x129|(x130*x131))&x132);

	if (t20 != 7LLU) { NG(); } else { ; }
	
}

void f21(void) {
	volatile int64_t x137 = 58010690114LL;
	int32_t x138 = 673;
	static int8_t x139 = INT8_MIN;
	static int64_t t21 = -377840570760020LL;

	t21 = ((x137|(x138*x139))&x140);

	if (t21 != -69694LL) { NG(); } else { ; }
	
}

void f22(void) {
	volatile uint32_t x153 = UINT32_MAX;
	uint8_t x154 = UINT8_MAX;
	int64_t x155 = -11263516858482LL;
	int64_t x156 = INT64_MIN;
	volatile int64_t t22 = INT64_MIN;

	t22 = ((x153|(x154*x155))&x156);

	if (t22 != INT64_MIN) { NG(); } else { ; }
	
}

void f23(void) {
	uint8_t x157 = 0U;
	uint16_t x158 = UINT16_MAX;
	int8_t x159 = INT8_MAX;
	static uint64_t x160 = 197438153804048LLU;
	static volatile uint64_t t23 = 25LLU;

	t23 = ((x157|(x158*x159))&x160);

	if (t23 != 313600LLU) { NG(); } else { ; }
	
}

void f24(void) {
	static volatile int64_t x161 = INT64_MAX;
	int64_t x162 = 1369175961284694214LL;
	int16_t x163 = -1;
	int64_t x164 = -1LL;
	int64_t t24 = 15378345173LL;

	t24 = ((x161|(x162*x163))&x164);

	if (t24 != -1LL) { NG(); } else { ; }
	
}

void f25(void) {
	uint8_t x165 = 85U;
	static int8_t x166 = INT8_MIN;
	volatile int16_t x167 = INT16_MIN;
	uint16_t x168 = 352U;
	volatile int32_t t25 = -2424;

	t25 = ((x165|(x166*x167))&x168);

	if (t25 != 64) { NG(); } else { ; }
	
}

void f26(void) {
	uint64_t x169 = UINT64_MAX;
	uint32_t x170 = 319884U;
	static int16_t x171 = -1067;
	volatile uint32_t x172 = 237121728U;
	static volatile uint64_t t26 = 644812LLU;

	t26 = ((x169|(x170*x171))&x172);

	if (t26 != 237121728LLU) { NG(); } else { ; }
	
}

void f27(void) {
	uint8_t x173 = UINT8_MAX;
	static volatile int32_t x174 = 35714;
	uint32_t x176 = 17949735U;
	uint64_t t27 = 15283853286651LLU;

	t27 = ((x173|(x174*x175))&x176);

	if (t27 != 16777255LLU) { NG(); } else { ; }
	
}

void f28(void) {
	volatile int8_t x177 = INT8_MIN;
	static volatile int32_t x178 = INT32_MAX;
	int32_t x179 = -1;
	uint8_t x180 = 3U;

	t28 = ((x177|(x178*x179))&x180);

	if (t28 != 1) { NG(); } else { ; }
	
}

void f29(void) {
	int16_t x181 = INT16_MAX;
	int16_t x183 = -3288;
	int8_t x184 = 1;
	volatile int32_t t29 = 32134613;

	t29 = ((x181|(x182*x183))&x184);

	if (t29 != 1) { NG(); } else { ; }
	
}

void f30(void) {
	static volatile int16_t x185 = INT16_MIN;
	uint64_t x186 = 506759165638473339LLU;
	volatile int64_t x187 = INT64_MIN;
	volatile uint16_t x188 = 181U;
	volatile uint64_t t30 = 786171LLU;

	t30 = ((x185|(x186*x187))&x188);

	if (t30 != 0LLU) { NG(); } else { ; }
	
}

void f31(void) {
	uint32_t x189 = UINT32_MAX;
	uint16_t x191 = 80U;
	uint64_t x192 = UINT64_MAX;
	static uint64_t t31 = 19935380183LLU;

	t31 = ((x189|(x190*x191))&x192);

	if (t31 != 15801184681983LLU) { NG(); } else { ; }
	
}

void f32(void) {
	int64_t x193 = -1LL;
	uint64_t x194 = 30787LLU;
	static volatile uint8_t x195 = 1U;
	int32_t x196 = 1483;
	uint64_t t32 = 12606556883927195LLU;

	t32 = ((x193|(x194*x195))&x196);

	if (t32 != 1483LLU) { NG(); } else { ; }
	
}

void f33(void) {
	int16_t x197 = INT16_MAX;
	uint64_t x198 = 20792456409262516LLU;
	volatile uint64_t t33 = 413956523904958724LLU;

	t33 = ((x197|(x198*x199))&x200);

	if (t33 != 14LLU) { NG(); } else { ; }
	
}

void f34(void) {
	static uint16_t x201 = UINT16_MAX;
	volatile int32_t x202 = -1;
	static int64_t x203 = -1LL;
	volatile int64_t t34 = -600LL;

	t34 = ((x201|(x202*x203))&x204);

	if (t34 != 65408LL) { NG(); } else { ; }
	
}

void f35(void) {
	static uint32_t x205 = UINT32_MAX;
	int32_t x207 = -1;
	uint8_t x208 = UINT8_MAX;
	uint32_t t35 = 7U;

	t35 = ((x205|(x206*x207))&x208);

	if (t35 != 255U) { NG(); } else { ; }
	
}

void f36(void) {
	volatile uint32_t x213 = 331142U;
	int64_t x214 = 90LL;
	int16_t x215 = INT16_MAX;
	uint64_t x216 = UINT64_MAX;
	uint64_t t36 = 389005664LLU;

	t36 = ((x213|(x214*x215))&x216);

	if (t36 != 3014566LLU) { NG(); } else { ; }
	
}

void f37(void) {
	int32_t x217 = 694069;
	static int8_t x218 = -23;
	int8_t x219 = 21;
	uint32_t x220 = 12176U;

	t37 = ((x217|(x218*x219))&x220);

	if (t37 != 12048U) { NG(); } else { ; }
	
}

void f38(void) {
	int8_t x221 = INT8_MAX;
	uint32_t x222 = 454444242U;
	int16_t x223 = -8725;
	int8_t x224 = -1;
	volatile uint32_t t38 = 57793U;

	t38 = ((x221|(x222*x223))&x224);

	if (t38 != 3523770111U) { NG(); } else { ; }
	
}

void f39(void) {
	int64_t x225 = -1LL;
	int8_t x226 = INT8_MIN;
	int8_t x227 = INT8_MIN;
	static int64_t t39 = -26LL;

	t39 = ((x225|(x226*x227))&x228);

	if (t39 != 65535LL) { NG(); } else { ; }
	
}

void f40(void) {
	volatile int16_t x230 = 267;
	static uint16_t x231 = 4171U;
	volatile uint64_t x232 = 3800363LLU;
	static volatile uint64_t t40 = 4651LLU;

	t40 = ((x229|(x230*x231))&x232);

	if (t40 != 3800363LLU) { NG(); } else { ; }
	
}

void f41(void) {
	uint64_t x233 = 13771039477770486LLU;
	int8_t x234 = -1;
	volatile uint8_t x235 = 8U;
	int64_t x236 = INT64_MIN;
	uint64_t t41 = 19671274933LLU;

	t41 = ((x233|(x234*x235))&x236);

	if (t41 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f42(void) {
	volatile int8_t x237 = INT8_MIN;
	uint8_t x240 = 0U;
	static int32_t t42 = -1314115;

	t42 = ((x237|(x238*x239))&x240);

	if (t42 != 0) { NG(); } else { ; }
	
}

void f43(void) {
	int64_t x241 = INT64_MAX;
	int16_t x242 = -1;
	uint64_t x243 = 1256914324861747LLU;
	int16_t x244 = -272;
	uint64_t t43 = 253771037087LLU;

	t43 = ((x241|(x242*x243))&x244);

	if (t43 != 18446744073709551344LLU) { NG(); } else { ; }
	
}

void f44(void) {
	int8_t x245 = INT8_MAX;
	int8_t x246 = -47;
	int32_t x248 = INT32_MAX;
	static int32_t t44 = 88616308;

	t44 = ((x245|(x246*x247))&x248);

	if (t44 != 2145943679) { NG(); } else { ; }
	
}

void f45(void) {
	uint64_t x254 = 4608909457926LLU;
	static uint32_t x255 = 3245U;
	uint64_t x256 = 65164LLU;
	uint64_t t45 = 3335416519LLU;

	t45 = ((x253|(x254*x255))&x256);

	if (t45 != 32268LLU) { NG(); } else { ; }
	
}

void f46(void) {
	volatile int16_t x257 = INT16_MIN;
	int8_t x258 = INT8_MIN;
	uint32_t x259 = 168U;
	int16_t x260 = INT16_MAX;
	static volatile uint32_t t46 = 593984180U;

	t46 = ((x257|(x258*x259))&x260);

	if (t46 != 11264U) { NG(); } else { ; }
	
}

void f47(void) {
	uint16_t x261 = 71U;
	volatile int32_t x262 = INT32_MAX;
	int64_t x263 = 273LL;
	uint8_t x264 = 21U;
	volatile int64_t t47 = -36820LL;

	t47 = ((x261|(x262*x263))&x264);

	if (t47 != 5LL) { NG(); } else { ; }
	
}

void f48(void) {
	int64_t x265 = 151630081192LL;
	uint64_t x267 = 54501752793LLU;
	volatile uint64_t t48 = 26063LLU;

	t48 = ((x265|(x266*x267))&x268);

	if (t48 != 1785864311008431LLU) { NG(); } else { ; }
	
}

void f49(void) {
	int16_t x273 = INT16_MIN;
	int8_t x274 = INT8_MIN;
	volatile uint8_t x275 = 19U;
	uint8_t x276 = 1U;
	int32_t t49 = 273;

	t49 = ((x273|(x274*x275))&x276);

	if (t49 != 0) { NG(); } else { ; }
	
}

void f50(void) {
	int32_t x277 = INT32_MIN;
	int16_t x278 = INT16_MAX;
	int8_t x279 = INT8_MIN;
	volatile int8_t x280 = 24;
	volatile int32_t t50 = -66;

	t50 = ((x277|(x278*x279))&x280);

	if (t50 != 0) { NG(); } else { ; }
	
}

void f51(void) {
	volatile uint32_t x285 = 63865U;
	int16_t x286 = 1;
	uint32_t x287 = UINT32_MAX;
	uint16_t x288 = UINT16_MAX;
	volatile uint32_t t51 = 15074U;

	t51 = ((x285|(x286*x287))&x288);

	if (t51 != 65535U) { NG(); } else { ; }
	
}

void f52(void) {
	volatile int8_t x289 = INT8_MIN;
	int8_t x290 = 0;
	int8_t x292 = 43;
	uint64_t t52 = 4558374811739588324LLU;

	t52 = ((x289|(x290*x291))&x292);

	if (t52 != 0LLU) { NG(); } else { ; }
	
}

void f53(void) {
	static int16_t x293 = INT16_MAX;
	uint64_t x294 = 6LLU;
	volatile uint16_t x295 = 0U;
	int8_t x296 = 3;
	uint64_t t53 = 5403291715336370LLU;

	t53 = ((x293|(x294*x295))&x296);

	if (t53 != 3LLU) { NG(); } else { ; }
	
}

void f54(void) {
	int16_t x298 = INT16_MIN;
	int16_t x299 = INT16_MIN;

	t54 = ((x297|(x298*x299))&x300);

	if (t54 != -2147483648LL) { NG(); } else { ; }
	
}

void f55(void) {
	uint8_t x301 = UINT8_MAX;
	int16_t x302 = 0;
	volatile uint64_t x303 = UINT64_MAX;
	static volatile int32_t x304 = INT32_MIN;
	uint64_t t55 = 1025437144450666516LLU;

	t55 = ((x301|(x302*x303))&x304);

	if (t55 != 0LLU) { NG(); } else { ; }
	
}

void f56(void) {
	static uint8_t x306 = UINT8_MAX;
	int16_t x307 = -1;
	static int64_t x308 = INT64_MIN;
	static int64_t t56 = INT64_MIN;

	t56 = ((x305|(x306*x307))&x308);

	if (t56 != INT64_MIN) { NG(); } else { ; }
	
}

void f57(void) {
	uint8_t x309 = 0U;
	static uint16_t x310 = 3U;
	int64_t x312 = 249650645650248LL;
	volatile int64_t t57 = 369638401440525LL;

	t57 = ((x309|(x310*x311))&x312);

	if (t57 != 0LL) { NG(); } else { ; }
	
}

void f58(void) {
	uint16_t x313 = 9477U;
	static uint8_t x315 = UINT8_MAX;
	int8_t x316 = INT8_MIN;

	t58 = ((x313|(x314*x315))&x316);

	if (t58 != -256) { NG(); } else { ; }
	
}

void f59(void) {
	int64_t x317 = -1LL;
	volatile uint32_t x318 = 17012132U;
	int32_t x319 = -847522643;
	volatile int64_t t59 = 70551904139124303LL;

	t59 = ((x317|(x318*x319))&x320);

	if (t59 != 0LL) { NG(); } else { ; }
	
}

void f60(void) {
	int8_t x321 = INT8_MIN;
	uint64_t x323 = UINT64_MAX;
	uint64_t x324 = 3980LLU;
	static uint64_t t60 = 174861723267491861LLU;

	t60 = ((x321|(x322*x323))&x324);

	if (t60 != 3968LLU) { NG(); } else { ; }
	
}

void f61(void) {
	int16_t x325 = INT16_MAX;
	uint8_t x326 = 1U;
	int32_t t61 = 24;

	t61 = ((x325|(x326*x327))&x328);

	if (t61 != -2147450881) { NG(); } else { ; }
	
}

void f62(void) {
	int8_t x329 = 5;
	uint64_t x330 = UINT64_MAX;
	volatile uint8_t x331 = UINT8_MAX;
	uint32_t x332 = 267U;
	static uint64_t t62 = 29133LLU;

	t62 = ((x329|(x330*x331))&x332);

	if (t62 != 257LLU) { NG(); } else { ; }
	
}

void f63(void) {
	int16_t x334 = -279;
	uint16_t x335 = 12U;
	int16_t x336 = -578;
	static int32_t t63 = -241;

	t63 = ((x333|(x334*x335))&x336);

	if (t63 != -578) { NG(); } else { ; }
	
}

void f64(void) {
	volatile uint16_t x337 = 30U;
	static uint16_t x338 = 1885U;
	uint8_t x339 = 1U;
	static volatile int32_t x340 = -8252000;
	int32_t t64 = -13;

	t64 = ((x337|(x338*x339))&x340);

	if (t64 != 1280) { NG(); } else { ; }
	
}

void f65(void) {
	static uint16_t x347 = UINT16_MAX;
	uint32_t x348 = 719U;
	int64_t t65 = 14994LL;

	t65 = ((x345|(x346*x347))&x348);

	if (t65 != 719LL) { NG(); } else { ; }
	
}

void f66(void) {
	uint32_t x354 = 389177860U;
	volatile uint8_t x355 = 7U;
	volatile uint8_t x356 = UINT8_MAX;
	volatile uint64_t t66 = 161LLU;

	t66 = ((x353|(x354*x355))&x356);

	if (t66 != 255LLU) { NG(); } else { ; }
	
}

void f67(void) {
	uint16_t x358 = 1U;
	uint16_t x359 = UINT16_MAX;
	static int32_t x360 = INT32_MIN;
	static volatile int32_t t67 = 377;

	t67 = ((x357|(x358*x359))&x360);

	if (t67 != 0) { NG(); } else { ; }
	
}

void f68(void) {
	volatile int16_t x361 = 0;
	uint64_t x362 = 2137040742LLU;
	static volatile uint16_t x363 = 245U;
	static int64_t x364 = INT64_MAX;
	volatile uint64_t t68 = 3766788413LLU;

	t68 = ((x361|(x362*x363))&x364);

	if (t68 != 523574981790LLU) { NG(); } else { ; }
	
}

void f69(void) {
	int16_t x365 = INT16_MAX;
	int32_t x366 = -1;
	int8_t x368 = -1;
	int32_t t69 = 29;

	t69 = ((x365|(x366*x367))&x368);

	if (t69 != -1) { NG(); } else { ; }
	
}

void f70(void) {
	volatile int32_t x369 = -1;
	int16_t x370 = -1;
	uint8_t x372 = 0U;
	int32_t t70 = -6819362;

	t70 = ((x369|(x370*x371))&x372);

	if (t70 != 0) { NG(); } else { ; }
	
}

void f71(void) {
	volatile int64_t x373 = -1LL;
	int32_t x374 = -40;
	int8_t x375 = INT8_MIN;
	uint64_t x376 = UINT64_MAX;
	uint64_t t71 = UINT64_MAX;

	t71 = ((x373|(x374*x375))&x376);

	if (t71 != UINT64_MAX) { NG(); } else { ; }
	
}

void f72(void) {
	uint64_t x377 = 593880395LLU;
	int16_t x379 = -1;
	volatile uint64_t t72 = 119581942476730219LLU;

	t72 = ((x377|(x378*x379))&x380);

	if (t72 != 23085385LLU) { NG(); } else { ; }
	
}

void f73(void) {
	int32_t x381 = INT32_MIN;
	static uint64_t x382 = UINT64_MAX;
	int8_t x383 = 1;
	volatile int32_t x384 = -3775865;
	volatile uint64_t t73 = 807LLU;

	t73 = ((x381|(x382*x383))&x384);

	if (t73 != 18446744073705775751LLU) { NG(); } else { ; }
	
}

void f74(void) {
	static uint8_t x385 = UINT8_MAX;
	uint64_t x387 = 6873550369LLU;
	uint64_t t74 = 3655729LLU;

	t74 = ((x385|(x386*x387))&x388);

	if (t74 != 165LLU) { NG(); } else { ; }
	
}

void f75(void) {
	int8_t x394 = INT8_MIN;
	static int32_t x396 = -1;
	volatile int32_t t75 = -10;

	t75 = ((x393|(x394*x395))&x396);

	if (t75 != -1) { NG(); } else { ; }
	
}

void f76(void) {
	uint8_t x397 = UINT8_MAX;
	uint8_t x398 = UINT8_MAX;
	int16_t x399 = -1;
	uint8_t x400 = 0U;
	static int32_t t76 = 289959;

	t76 = ((x397|(x398*x399))&x400);

	if (t76 != 0) { NG(); } else { ; }
	
}

void f77(void) {
	int8_t x401 = -2;
	volatile int16_t x403 = INT16_MIN;
	volatile int32_t t77 = -385;

	t77 = ((x401|(x402*x403))&x404);

	if (t77 != -2) { NG(); } else { ; }
	
}

void f78(void) {
	int16_t x405 = -1;
	static int8_t x406 = -3;
	int16_t x407 = INT16_MAX;
	uint32_t x408 = 5343U;

	t78 = ((x405|(x406*x407))&x408);

	if (t78 != 5343U) { NG(); } else { ; }
	
}

void f79(void) {
	volatile int16_t x409 = -62;
	volatile uint64_t x410 = 46LLU;
	int32_t x411 = -1;
	uint8_t x412 = UINT8_MAX;
	volatile uint64_t t79 = 40358304368920414LLU;

	t79 = ((x409|(x410*x411))&x412);

	if (t79 != 210LLU) { NG(); } else { ; }
	
}

void f80(void) {
	uint16_t x413 = 0U;
	uint32_t x414 = UINT32_MAX;
	volatile uint64_t x416 = UINT64_MAX;
	volatile uint64_t t80 = 494701748609816LLU;

	t80 = ((x413|(x414*x415))&x416);

	if (t80 != 66958540129050LLU) { NG(); } else { ; }
	
}

void f81(void) {
	static int32_t x417 = INT32_MAX;
	int32_t x418 = -29;
	int16_t x419 = INT16_MAX;

	t81 = ((x417|(x418*x419))&x420);

	if (t81 != -128) { NG(); } else { ; }
	
}

void f82(void) {
	static int8_t x425 = INT8_MIN;
	int16_t x426 = -1;
	static int8_t x427 = -45;

	t82 = ((x425|(x426*x427))&x428);

	if (t82 != INT32_MIN) { NG(); } else { ; }
	
}

void f83(void) {
	int8_t x429 = INT8_MIN;
	uint16_t x430 = UINT16_MAX;
	int32_t t83 = 117049733;

	t83 = ((x429|(x430*x431))&x432);

	if (t83 != -15) { NG(); } else { ; }
	
}

void f84(void) {
	int32_t x433 = -1;
	int8_t x434 = 0;
	volatile int32_t x435 = -11;
	int16_t x436 = -1;
	int32_t t84 = 6;

	t84 = ((x433|(x434*x435))&x436);

	if (t84 != -1) { NG(); } else { ; }
	
}

void f85(void) {
	static int16_t x441 = INT16_MAX;
	int64_t x442 = -1LL;
	int32_t x443 = 121599081;
	int64_t t85 = 7638607568LL;

	t85 = ((x441|(x442*x443))&x444);

	if (t85 != -2147483648LL) { NG(); } else { ; }
	
}

void f86(void) {
	uint64_t x447 = 2424324560077LLU;
	uint64_t t86 = 33090822066296LLU;

	t86 = ((x445|(x446*x447))&x448);

	if (t86 != 32395LLU) { NG(); } else { ; }
	
}

void f87(void) {
	volatile int64_t x451 = INT64_MIN;
	volatile int64_t x452 = 1149006303460LL;
	static volatile uint64_t t87 = 360LLU;

	t87 = ((x449|(x450*x451))&x452);

	if (t87 != 1138268569696LLU) { NG(); } else { ; }
	
}

void f88(void) {
	static int8_t x455 = INT8_MIN;
	volatile int32_t x456 = -1;

	t88 = ((x453|(x454*x455))&x456);

	if (t88 != 18446743807475094783LLU) { NG(); } else { ; }
	
}

void f89(void) {
	int8_t x465 = INT8_MIN;
	int64_t x466 = -1LL;
	static volatile uint32_t x467 = UINT32_MAX;
	volatile int64_t x468 = -119761880855112LL;
	static int64_t t89 = 1350351082356LL;

	t89 = ((x465|(x466*x467))&x468);

	if (t89 != -119761880855168LL) { NG(); } else { ; }
	
}

void f90(void) {
	int16_t x469 = INT16_MIN;
	int8_t x471 = 0;
	static volatile uint32_t t90 = 647U;

	t90 = ((x469|(x470*x471))&x472);

	if (t90 != 0U) { NG(); } else { ; }
	
}

void f91(void) {
	uint8_t x473 = 2U;
	int16_t x474 = INT16_MIN;
	int64_t x475 = -1LL;
	int16_t x476 = -1;

	t91 = ((x473|(x474*x475))&x476);

	if (t91 != 32770LL) { NG(); } else { ; }
	
}

void f92(void) {
	int32_t x478 = 1;
	volatile int8_t x480 = INT8_MAX;
	volatile int32_t t92 = -1;

	t92 = ((x477|(x478*x479))&x480);

	if (t92 != 127) { NG(); } else { ; }
	
}

void f93(void) {
	volatile int16_t x482 = INT16_MIN;
	int8_t x483 = INT8_MIN;
	int16_t x484 = INT16_MIN;
	volatile int32_t t93 = -209463;

	t93 = ((x481|(x482*x483))&x484);

	if (t93 != -32768) { NG(); } else { ; }
	
}

void f94(void) {
	int16_t x485 = INT16_MAX;
	int32_t x487 = 0;
	int32_t x488 = INT32_MIN;
	int32_t t94 = 45886;

	t94 = ((x485|(x486*x487))&x488);

	if (t94 != 0) { NG(); } else { ; }
	
}

void f95(void) {
	static int32_t x491 = INT32_MAX;
	int64_t x492 = INT64_MIN;
	volatile uint64_t t95 = 15LLU;

	t95 = ((x489|(x490*x491))&x492);

	if (t95 != 9223372036854775808LLU) { NG(); } else { ; }
	
}

void f96(void) {
	int32_t x493 = INT32_MAX;
	int32_t x494 = -1;
	int16_t x496 = 50;

	t96 = ((x493|(x494*x495))&x496);

	if (t96 != 50) { NG(); } else { ; }
	
}

void f97(void) {
	volatile uint64_t x499 = 397503834838005717LLU;
	uint64_t x500 = 1270226LLU;
	uint64_t t97 = 5LLU;

	t97 = ((x497|(x498*x499))&x500);

	if (t97 != 1270146LLU) { NG(); } else { ; }
	
}

void f98(void) {
	uint16_t x501 = 20U;
	int8_t x502 = -7;
	int8_t x503 = INT8_MIN;
	volatile int16_t x504 = -959;
	volatile int32_t t98 = -26;

	t98 = ((x501|(x502*x503))&x504);

	if (t98 != 0) { NG(); } else { ; }
	
}

void f99(void) {
	int64_t x506 = 31909826404LL;
	int16_t x507 = -1;
	volatile int64_t x508 = INT64_MIN;
	static int64_t t99 = INT64_MIN;

	t99 = ((x505|(x506*x507))&x508);

	if (t99 != INT64_MIN) { NG(); } else { ; }
	
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

